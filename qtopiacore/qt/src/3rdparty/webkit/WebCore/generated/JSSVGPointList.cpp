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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGPointList.h"

#include <wtf/GetPtr.h>

#include "SVGPointList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGPointListTableEntries[] =
{
    { "numberOfItems", JSSVGPointList::NumberOfItemsAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGPointListTable = 
{
    2, 1, JSSVGPointListTableEntries, 1
};

/* Hash table for prototype */

static const HashEntry JSSVGPointListPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "clear", JSSVGPointList::ClearFuncNum, DontDelete|Function, 0, &JSSVGPointListPrototypeTableEntries[9] },
    { "getItem", JSSVGPointList::GetItemFuncNum, DontDelete|Function, 1, &JSSVGPointListPrototypeTableEntries[7] },
    { "insertItemBefore", JSSVGPointList::InsertItemBeforeFuncNum, DontDelete|Function, 2, &JSSVGPointListPrototypeTableEntries[8] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "initialize", JSSVGPointList::InitializeFuncNum, DontDelete|Function, 1, 0 },
    { "replaceItem", JSSVGPointList::ReplaceItemFuncNum, DontDelete|Function, 2, 0 },
    { "removeItem", JSSVGPointList::RemoveItemFuncNum, DontDelete|Function, 1, 0 },
    { "appendItem", JSSVGPointList::AppendItemFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGPointListPrototypeTable = 
{
    2, 10, JSSVGPointListPrototypeTableEntries, 7
};

const ClassInfo JSSVGPointListPrototype::info = { "SVGPointListPrototype", 0, &JSSVGPointListPrototypeTable, 0 };

JSObject* JSSVGPointListPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGPointListPrototype>(exec, "[[JSSVGPointList.prototype]]");
}

bool JSSVGPointListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGPointListPrototypeFunction, JSObject>(exec, &JSSVGPointListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGPointList::info = { "SVGPointList", 0, &JSSVGPointListTable, 0 };

JSSVGPointList::JSSVGPointList(ExecState* exec, SVGPointList* impl)
    : m_impl(impl)
{
    setPrototype(JSSVGPointListPrototype::self(exec));
}

JSSVGPointList::~JSSVGPointList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSSVGPointList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPointList, KJS::DOMObject>(exec, &JSSVGPointListTable, this, propertyName, slot);
}

JSValue* JSSVGPointList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case NumberOfItemsAttrNum: {
        SVGPointList* imp = static_cast<SVGPointList*>(impl());

        return jsNumber(imp->numberOfItems());
    }
    }
    return 0;
}

JSValue* JSSVGPointListPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGPointList::info))
      return throwError(exec, TypeError);

    SVGPointList* imp = static_cast<SVGPointList*>(static_cast<JSSVGPointList*>(thisObj)->impl());

    switch (id) {
    case JSSVGPointList::ClearFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->clear(exec, args);
    }
    case JSSVGPointList::InitializeFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->initialize(exec, args);
    }
    case JSSVGPointList::GetItemFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->getItem(exec, args);
    }
    case JSSVGPointList::InsertItemBeforeFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->insertItemBefore(exec, args);
    }
    case JSSVGPointList::ReplaceItemFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->replaceItem(exec, args);
    }
    case JSSVGPointList::RemoveItemFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->removeItem(exec, args);
    }
    case JSSVGPointList::AppendItemFuncNum: {
        return static_cast<JSSVGPointList*>(thisObj)->appendItem(exec, args);
    }
    }
    (void)imp;
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, SVGPointList* obj)
{
    return KJS::cacheDOMObject<SVGPointList, JSSVGPointList>(exec, obj);
}
SVGPointList* toSVGPointList(KJS::JSValue* val)
{
    return val->isObject(&JSSVGPointList::info) ? static_cast<JSSVGPointList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)
