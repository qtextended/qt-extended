/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSHTMLOptionsCollection.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "HTMLOptionsCollection.h"
#include "JSHTMLOptionElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLOptionsCollectionTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "selectedIndex", JSHTMLOptionsCollection::SelectedIndexAttrNum, DontDelete, 0, &JSHTMLOptionsCollectionTableEntries[2] },
    { "length", JSHTMLOptionsCollection::LengthAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSHTMLOptionsCollectionTable = 
{
    2, 3, JSHTMLOptionsCollectionTableEntries, 2
};

/* Hash table for prototype */

static const HashEntry JSHTMLOptionsCollectionPrototypeTableEntries[] =
{
    { "add", JSHTMLOptionsCollection::AddFuncNum, DontDelete|Function, 2, 0 }
};

static const HashTable JSHTMLOptionsCollectionPrototypeTable = 
{
    2, 1, JSHTMLOptionsCollectionPrototypeTableEntries, 1
};

const ClassInfo JSHTMLOptionsCollectionPrototype::info = { "HTMLOptionsCollectionPrototype", 0, &JSHTMLOptionsCollectionPrototypeTable, 0 };

JSObject* JSHTMLOptionsCollectionPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLOptionsCollectionPrototype>(exec, "[[JSHTMLOptionsCollection.prototype]]");
}

bool JSHTMLOptionsCollectionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLOptionsCollectionPrototypeFunction, JSObject>(exec, &JSHTMLOptionsCollectionPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLOptionsCollection::info = { "HTMLOptionsCollection", &JSHTMLCollection::info, &JSHTMLOptionsCollectionTable, 0 };

JSHTMLOptionsCollection::JSHTMLOptionsCollection(ExecState* exec, HTMLOptionsCollection* impl)
    : JSHTMLCollection(exec, impl)
{
    setPrototype(JSHTMLOptionsCollectionPrototype::self(exec));
}

bool JSHTMLOptionsCollection::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLOptionsCollection, JSHTMLCollection>(exec, &JSHTMLOptionsCollectionTable, this, propertyName, slot);
}

JSValue* JSHTMLOptionsCollection::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case SelectedIndexAttrNum: {
        HTMLOptionsCollection* imp = static_cast<HTMLOptionsCollection*>(impl());

        return jsNumber(imp->selectedIndex());
    }
    case LengthAttrNum: {
        return length(exec);
    }
    }
    return 0;
}

void JSHTMLOptionsCollection::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    bool ok;
    unsigned index = propertyName.toUInt32(&ok, false);
    if (ok) {
        indexSetter(exec, index, value, attr);
        return;
    }
    lookupPut<JSHTMLOptionsCollection, JSHTMLCollection>(exec, propertyName, value, attr, &JSHTMLOptionsCollectionTable, this);
}

void JSHTMLOptionsCollection::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case SelectedIndexAttrNum: {
        HTMLOptionsCollection* imp = static_cast<HTMLOptionsCollection*>(impl());

        imp->setSelectedIndex(value->toInt32(exec));
        break;
    }
    case LengthAttrNum: {
        setLength(exec, value);
        break;
    }
    }
}

JSValue* JSHTMLOptionsCollectionPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLOptionsCollection::info))
      return throwError(exec, TypeError);

    HTMLOptionsCollection* imp = static_cast<HTMLOptionsCollection*>(static_cast<JSHTMLOptionsCollection*>(thisObj)->impl());

    switch (id) {
    case JSHTMLOptionsCollection::AddFuncNum: {
        ExceptionCode ec = 0;
        HTMLOptionElement* option = toHTMLOptionElement(args[0]);

        int argsCount = args.size();
        if (argsCount < 2) {
            imp->add(option, ec);
            setDOMException(exec, ec);
            return jsUndefined();
        }

        bool indexOk;
        unsigned index = args[1]->toInt32(exec, indexOk);
        if (!indexOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }

        imp->add(option, index, ec);
        setDOMException(exec, ec);
        return jsUndefined();
    }
    }
    return 0;
}
HTMLOptionsCollection* toHTMLOptionsCollection(KJS::JSValue* val)
{
    return val->isObject(&JSHTMLOptionsCollection::info) ? static_cast<JSHTMLOptionsCollection*>(val)->impl() : 0;
}

HTMLOptionsCollection* JSHTMLOptionsCollection::impl() const
{
    return static_cast<HTMLOptionsCollection*>(JSHTMLCollection::impl());
}

}
