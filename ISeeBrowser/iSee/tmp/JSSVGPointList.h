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

#ifndef JSSVGPointList_h
#define JSSVGPointList_h


#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class SVGPointList;

class JSSVGPointList : public DOMObject {
    typedef DOMObject Base;
public:
    JSSVGPointList(JSC::JSObject* prototype, SVGPointList*, SVGElement* context);
    virtual ~JSSVGPointList();
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        NumberOfItemsAttrNum, 
    };

    // Custom functions
    JSC::JSValue* clear(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* initialize(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* getItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* insertItemBefore(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* replaceItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* removeItem(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* appendItem(JSC::ExecState*, const JSC::ArgList&);
    SVGPointList* impl() const { return m_impl.get(); }
    SVGElement* context() const { return m_context.get(); }

private:
    RefPtr<SVGElement> m_context;
    RefPtr<SVGPointList > m_impl;
};

JSC::JSValue* toJS(JSC::ExecState*, SVGPointList*, SVGElement* context);
SVGPointList* toSVGPointList(JSC::JSValue*);

class JSSVGPointListPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSSVGPointListPrototype(JSC::ExecState* exec)
        : JSC::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

JSC::JSValue* jsSVGPointListPrototypeFunctionClear(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionInitialize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionGetItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionInsertItemBefore(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionReplaceItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionRemoveItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGPointListPrototypeFunctionAppendItem(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif // ENABLE(SVG)

#endif