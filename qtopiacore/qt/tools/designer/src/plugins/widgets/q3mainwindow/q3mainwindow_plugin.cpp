/****************************************************************************
**
** Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License versions 2.0 or 3.0 as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file.  Please review the following information
** to ensure GNU General Public Licensing requirements will be met:
** http://www.fsf.org/licensing/licenses/info/GPLv2.html and
** http://www.gnu.org/copyleft/gpl.html.  In addition, as a special
** exception, Nokia gives you certain additional rights. These rights
** are described in the Nokia Qt GPL Exception version 1.3, included in
** the file GPL_EXCEPTION.txt in this package.
**
** Qt for Windows(R) Licensees
** As a special exception, Nokia, as the sole copyright holder for Qt
** Designer, grants users of the Qt/Eclipse Integration plug-in the
** right for the Qt/Eclipse Integration to link to functionality
** provided by Qt Designer and its related libraries.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
**
****************************************************************************/

#include "q3mainwindow_plugin.h"
#include "q3mainwindow_container.h"

#include <QtDesigner/QDesignerFormEditorInterface>
#include <QtDesigner/QExtensionManager>

#include <QtCore/qplugin.h>
#include <Qt3Support/Q3MainWindow>

QT_BEGIN_NAMESPACE

Q3MainWindowPlugin::Q3MainWindowPlugin(const QIcon &icon, QObject *parent)
    : QObject(parent), m_initialized(false), m_icon(icon)
{}

QString Q3MainWindowPlugin::name() const
{ return QLatin1String("Q3MainWindow"); }

QString Q3MainWindowPlugin::group() const
{ return QLatin1String("[invisible]"); }

QString Q3MainWindowPlugin::toolTip() const
{ return QString(); }

QString Q3MainWindowPlugin::whatsThis() const
{ return QString(); }

QString Q3MainWindowPlugin::includeFile() const
{ return QLatin1String("q3mainwindow.h"); }

QIcon Q3MainWindowPlugin::icon() const
{ return m_icon; }

bool Q3MainWindowPlugin::isContainer() const
{ return true; }

QWidget *Q3MainWindowPlugin::createWidget(QWidget *parent)
{ return new Q3MainWindow(parent); }

bool Q3MainWindowPlugin::isInitialized() const
{ return m_initialized; }

void Q3MainWindowPlugin::initialize(QDesignerFormEditorInterface *core)
{
    Q_UNUSED(core);

    if (m_initialized)
        return;

    m_initialized = true;
    QExtensionManager *mgr = core->extensionManager();
    mgr->registerExtensions(new Q3MainWindowContainerFactory(mgr), Q_TYPEID(QDesignerContainerExtension));
}

QString Q3MainWindowPlugin::codeTemplate() const
{ return QString(); }

QString Q3MainWindowPlugin::domXml() const
{
    return QLatin1String("\
    <widget class=\"Q3MainWindow\" name=\"widgetStack\">\
        <property name=\"geometry\">\
            <rect>\
                <x>0</x>\
                <y>0</y>\
                <width>100</width>\
                <height>80</height>\
            </rect>\
        </property>\
        <widget class=\"QWidget\" name=\"centralWidget\" />\
    </widget>\
    ");
}


QT_END_NAMESPACE
