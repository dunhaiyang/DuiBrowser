/*
 * Copyright (C) 2008 Kevin Ollivier <kevino@theolliviers.com> All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "PluginView.h"

#include "NotImplemented.h"
#include "PluginPackage.h"
#include "Frame.h"
#include "FrameLoader.h"

using namespace WTF;

namespace WebCore {

void PluginView::updateWindow() const
{
    notImplemented();
}

void PluginView::setFocus()
{
    notImplemented();
}

void PluginView::show()
{
    notImplemented();
}

void PluginView::hide()
{
    notImplemented();
}

void PluginView::paint(GraphicsContext* context, const IntRect& rect)
{
    notImplemented();
}

void PluginView::handleKeyboardEvent(KeyboardEvent* event)
{
    notImplemented();
}

void PluginView::handleMouseEvent(MouseEvent* event)
{
    notImplemented();
}

void PluginView::setParent(ScrollView* parent)
{
    notImplemented();
}

void PluginView::setNPWindowRect(const IntRect& rect)
{
    notImplemented();
}

void PluginView::attachToWindow()
{
    notImplemented();
}

void PluginView::detachFromWindow()
{
    notImplemented();
}

void PluginView::stop()
{
    notImplemented();
}

static const char* MozillaUserAgent = "Mozilla/5.0 (X11; U; Linux i686; en-US; rv:1.8.1) Gecko/20061010 Firefox/2.0";

const char* PluginView::userAgent()
{
    if (m_plugin->quirks().contains(PluginQuirkWantsMozillaUserAgent))
        return MozillaUserAgent;

    if (m_userAgent.isNull())
        m_userAgent = m_parentFrame->loader()->userAgent(m_url).utf8();

    return m_userAgent.data();
}

const char* PluginView::userAgentStatic()
{
    //FIXME - Lie and say we are Mozilla
    return MozillaUserAgent;
}

NPError PluginView::handlePostReadFile(Vector<char>& buffer, uint32 len, const char* buf)
{
    notImplemented();

    return 0;
}

NPError PluginView::getValueStatic(NPNVariable variable, void* value)
{	// FIXME
	return NPERR_GENERIC_ERROR;
}

NPError PluginView::getValue(NPNVariable variable, void* value)
{	// FIXME
    return NPERR_GENERIC_ERROR;
}

void PluginView::invalidateRect(NPRect* rect)
{
    notImplemented();
}

void PluginView::invalidateRegion(NPRegion region)
{
    notImplemented();
}

void PluginView::forceRedraw()
{
    notImplemented();
}

PluginView::~PluginView()
{
    notImplemented();
}

void PluginView::init()
{
    notImplemented();
}

} // namespace WebCore
