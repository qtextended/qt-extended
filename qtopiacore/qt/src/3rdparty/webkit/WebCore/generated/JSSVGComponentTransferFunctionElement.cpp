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


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGComponentTransferFunctionElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedNumberList.h"
#include "SVGComponentTransferFunctionElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGComponentTransferFunctionElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "intercept", JSSVGComponentTransferFunctionElement::InterceptAttrNum, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementTableEntries[9] },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "type", JSSVGComponentTransferFunctionElement::TypeAttrNum, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementTableEntries[7] },
    { 0, 0, 0, 0, 0 },
    { "slope", JSSVGComponentTransferFunctionElement::SlopeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "tableValues", JSSVGComponentTransferFunctionElement::TableValuesAttrNum, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementTableEntries[8] },
    { "amplitude", JSSVGComponentTransferFunctionElement::AmplitudeAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "exponent", JSSVGComponentTransferFunctionElement::ExponentAttrNum, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementTableEntries[10] },
    { "offset", JSSVGComponentTransferFunctionElement::OffsetAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGComponentTransferFunctionElementTable = 
{
    2, 11, JSSVGComponentTransferFunctionElementTableEntries, 7
};

/* Hash table for prototype */

static const HashEntry JSSVGComponentTransferFunctionElementPrototypeTableEntries[] =
{
    { "SVG_FECOMPONENTTRANSFER_TYPE_TABLE", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_TABLE, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_LINEAR", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_LINEAR, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementPrototypeTableEntries[6] },
    { "SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY, DontDelete|ReadOnly, 0, &JSSVGComponentTransferFunctionElementPrototypeTableEntries[7] },
    { "SVG_FECOMPONENTTRANSFER_TYPE_GAMMA", WebCore::SVG_FECOMPONENTTRANSFER_TYPE_GAMMA, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGComponentTransferFunctionElementPrototypeTable = 
{
    2, 8, JSSVGComponentTransferFunctionElementPrototypeTableEntries, 6
};

const ClassInfo JSSVGComponentTransferFunctionElementPrototype::info = { "SVGComponentTransferFunctionElementPrototype", 0, &JSSVGComponentTransferFunctionElementPrototypeTable, 0 };

JSObject* JSSVGComponentTransferFunctionElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGComponentTransferFunctionElementPrototype>(exec, "[[JSSVGComponentTransferFunctionElement.prototype]]");
}

bool JSSVGComponentTransferFunctionElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElementPrototype, JSObject>(exec, &JSSVGComponentTransferFunctionElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGComponentTransferFunctionElementPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGComponentTransferFunctionElement::info = { "SVGComponentTransferFunctionElement", &JSSVGElement::info, &JSSVGComponentTransferFunctionElementTable, 0 };

JSSVGComponentTransferFunctionElement::JSSVGComponentTransferFunctionElement(ExecState* exec, SVGComponentTransferFunctionElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGComponentTransferFunctionElementPrototype::self(exec));
}

bool JSSVGComponentTransferFunctionElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGComponentTransferFunctionElement, JSSVGElement>(exec, &JSSVGComponentTransferFunctionElementTable, this, propertyName, slot);
}

JSValue* JSSVGComponentTransferFunctionElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TypeAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedEnumeration> obj = imp->typeAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedEnumeration>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedEnumeration>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedEnumeration>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case TableValuesAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumberList> obj = imp->tableValuesAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumberList>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumberList>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumberList>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case SlopeAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->slopeAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case InterceptAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->interceptAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case AmplitudeAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->amplitudeAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ExponentAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->exponentAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case OffsetAttrNum: {
        SVGComponentTransferFunctionElement* imp = static_cast<SVGComponentTransferFunctionElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->offsetAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)