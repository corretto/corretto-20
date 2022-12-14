/*
 * Copyright (c) 1996, 2004, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

#ifndef AWT_LABEL_H
#define AWT_LABEL_H

#include "awt_Component.h"

#include "java_awt_Label.h"
#include "sun_awt_windows_WLabelPeer.h"


/************************************************************************
 * AwtLabel class
 */

class AwtLabel : public AwtComponent {
public:
    /*
     * java.awt.Label fields
     */
    static jfieldID textID;
    static jfieldID alignmentID;

    AwtLabel();

    virtual LPCTSTR GetClassName();

    static AwtLabel* Create(jobject label, jobject parent);

    /*
     * Windows message handler functions
     */
    virtual MsgRouting WmPaint(HDC hDC);
    virtual MsgRouting WmPrintClient(HDC hDC, LPARAM flags);
    virtual MsgRouting WmEraseBkgnd(HDC hDC, BOOL& didErase);

    /*
     * if WM_PAINT was received when we cannot paint
     * then setup m_needPaint and when can paint call this function
     */
    void LazyPaint();
     /*
      * Enable/disable component
      */
    virtual void Enable(BOOL bEnable);

    // some methods called on Toolkit thread
    static void _SetText(void *param);
    static void _SetAlignment(void *param);
    static void _LazyPaint(void *param);

private:
    BOOL m_needPaint; // flags for lazy paint of Label

    void DoPaint(HDC hDC, RECT& r);
};

#endif /* AWT_LABEL_H */
