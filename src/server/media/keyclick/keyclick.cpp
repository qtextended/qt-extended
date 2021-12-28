/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2009 Trolltech ASA.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/

#include <QSettings>
#include "keyclick.h"
#include <qtopiafeatures.h>
#include <qapplication.h>
#include <QtopiaChannel>

/*!
  \class KeyClick
    \inpublicgroup QtMediaModule
  \ingroup QtopiaServer::Task
  \brief The KeyClick class enables an audible clicking sound whenever keys
         are pressed.

  The KeyClick class is not a true task.  Instead, a real task should derive
  from the KeyClick baseclass and implement the KeyClick::keyClick()
  virtual method.

  For example, an implementation may look like this:

  \code
  class MyKeyClick : public KeyClick
  {
  protected:
      virtual void keyClick(int unicode, int keycode, int modifiers,
                            bool press, bool repeat)
      {
          // Make click noise
      }
  };
  QTOPIA_TASK(MyKeyClick, MyKeyClick);
  \endcode

  Key clicking will only occur when the \c {Trolltech/Sound/System/Key}
  configuration variable is true, otherwise KeyClick::keyClick() will not
  be called. If a settings application updates this variable it should send the message
  "updateAudibleKeyClick()" on the "QPE/System" channel to allow the value to be reread.
  Creating this class automatically enables the "AudibleKeyClick" QtopiaFeature.

  This class is part of the Qt Extended server and cannot be used by other Qt Extended applications.
  \sa ScreenClick
 */

/*!
  Construct a new KeyClick instance.
 */
KeyClick::KeyClick()
: m_clickenabled(false)
{
    QtopiaInputEvents::addKeyboardFilter(this);
    QtopiaChannel* sysChannel = new QtopiaChannel("QPE/System", this);
    connect(sysChannel, SIGNAL(received(QString,QByteArray)),
             this, SLOT(sysMessage(QString,QByteArray)));
    readSettings();
    QtopiaFeatures::setFeature("AudibleKeyClick");
}

/*!
  Destroys the KeyClick instance.
 */
KeyClick::~KeyClick()
{
}

void KeyClick::sysMessage(const QString& message, const QByteArray &data)
{
    Q_UNUSED(data);
    if (message == "updateAudibleKeyClick()") {
        readSettings();
    }
}

/*! \internal */
void KeyClick::readSettings()
{
    QSettings cfg("Trolltech","Sound");
    cfg.beginGroup("System");
    m_clickenabled = cfg.value("Key").toBool();
}

/*! \internal */
bool KeyClick::filter(int unicode, int keycode, int modifiers,
                      bool press, bool autoRepeat)
{
    if(m_clickenabled)
        keyClick(unicode, keycode, modifiers, press, autoRepeat);
    return false;
}

/*!
  \fn void KeyClick::keyClick(int unicode, int keycode, int modifiers,
                              bool press, bool repeat)

  Called whenever a key event is generated by the system.  \a unicode is set to
  the unicode value of the key, \a keycode to the key code of the key,
  \a modifiers to the currently depressed modifiers, \a press will be true if
  this is a key press and false if it is a key release and \a repeat will be
  true if this key event was generated in as a key press repeat.
*/
