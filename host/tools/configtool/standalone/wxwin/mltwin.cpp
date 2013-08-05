// ####ECOSHOSTGPLCOPYRIGHTBEGIN####                                        
// -------------------------------------------                              
// This file is part of the eCos host tools.                                
// Copyright (C) 1998, 1999, 2000 Free Software Foundation, Inc.            
//
// This program is free software; you can redistribute it and/or modify     
// it under the terms of the GNU General Public License as published by     
// the Free Software Foundation; either version 2 or (at your option) any   
// later version.                                                           
//
// This program is distributed in the hope that it will be useful, but      
// WITHOUT ANY WARRANTY; without even the implied warranty of               
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU        
// General Public License for more details.                                 
//
// You should have received a copy of the GNU General Public License        
// along with this program; if not, write to the                            
// Free Software Foundation, Inc., 51 Franklin Street,                      
// Fifth Floor, Boston, MA  02110-1301, USA.                                
// -------------------------------------------                              
// ####ECOSHOSTGPLCOPYRIGHTEND####                                          
// mltwin.cpp :
//
//===========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):   julians
// Contact(s):  julians
// Date:        2000/09/27
// Version:     $Id: mltwin.cpp,v 1.2 2001/03/22 11:27:28 julians Exp $
// Purpose:
// Description: Implementation file for ecMemoryLayoutWindow
// Requires:
// Provides:
// See also:
// Known bugs:
// Usage:
//
//####DESCRIPTIONEND####
//
//===========================================================================

// ============================================================================
// declarations
// ============================================================================

// ----------------------------------------------------------------------------
// headers
// ----------------------------------------------------------------------------
#ifdef __GNUG__
    #pragma implementation "mltwin.h"
#endif

// Includes other headers for precompiled compilation
#include "ecpch.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include "mltwin.h"
#include "sectiondlg.h"

#define VERT_BORDER 30 /* the vertical border at the top/bottom of the client area */
#define HORIZ_BORDER 30 /* the horizontal border at the left/right of the client area */
#define BAR_HEIGHT 18 /* the height of the memory section caption bar */
#define MAP_HEIGHT 66 /* the height of each memory section rectangle (including caption bar) */
#define REGION_SPACING 115 /* the vertical offset between successive memory regions */
#define ADDRESS_TEXT_SPACE 0.9 /* use 90% of the section width to draw the address */
#define EXTERNAL_TEXT_BORDER 5 /* spacing between external text and border of region */
#define ADDRESS_FORMAT _T("%08X") /* draw memory addresses in hex format */
#define UNITS_PER_SECTION 3 /* memory section width in units, unused sections are 1 unit wide */
#define UNIT_WIDTH_MIN 27 /* minimum width of memory section unit before horizontal scrolling enabled */
#define TICK_HEIGHT 4 /* the height of the tick marks on the memory sections and regions */

#define DISPLAY_MODE 1 /* 1 == const unit width for all regions */
/* 2 == const region width for all regions */


/*
 * ecMemoryLayoutWindow
 */

IMPLEMENT_CLASS(ecMemoryLayoutWindow, wxScrolledWindow)

BEGIN_EVENT_TABLE(ecMemoryLayoutWindow, wxScrolledWindow)
//    EVT_PAINT(ecMemoryLayoutWindow::OnPaint)
    EVT_MOUSE_EVENTS(ecMemoryLayoutWindow::OnMouseEvent)
    EVT_PAINT(ecMemoryLayoutWindow::OnPaint)
    EVT_SIZE(ecMemoryLayoutWindow::OnSize)
    EVT_MENU(ecID_TREE_PROPERTIES, ecMemoryLayoutWindow::OnProperties)
END_EVENT_TABLE()

ecMemoryLayoutWindow::ecMemoryLayoutWindow(wxWindow* parent, wxWindowID id, const wxPoint& pt,
        const wxSize& sz, long style):
        wxScrolledWindow(parent, id, pt, sz, style)
{
    m_uViewWidth = 0;
    m_uClientWidth = 0;
    m_uUnitCountMax = 0;

    SetBackgroundColour(* wxWHITE);

    m_propertiesMenu = new wxMenu;

    m_propertiesMenu->Append(ecID_WHATS_THIS, _("&What's This?"));
    m_propertiesMenu->AppendSeparator();
    m_propertiesMenu->Append(ecID_TREE_PROPERTIES, _("P&roperties"));        
}

ecMemoryLayoutWindow::~ecMemoryLayoutWindow()
{
    delete m_propertiesMenu;
}

void ecMemoryLayoutWindow::OnPaint(wxPaintEvent& event)
{
    wxPaintDC dc(this);

    PrepareDC(dc);

    ecConfigToolDoc* pDoc = wxGetApp().GetConfigToolDoc();
    if (pDoc == NULL) // no document so nothing to draw
        return;
}

void ecMemoryLayoutWindow::OnMouseEvent(wxMouseEvent& event)
{
    if (event.RightDown())
    {
        PopupMenu(GetPropertiesMenu(), event.GetX(), event.GetY());
    }
}

void ecMemoryLayoutWindow::OnProperties(wxCommandEvent& event)
{
    ecSectionDialog dialog(wxTheApp->GetTopWindow());
    dialog.ShowModal();
}

void ecMemoryLayoutWindow::RefreshMLT()
{
}

#if ecUSE_MLT
void ecMemoryLayoutWindow::DrawRegion (wxDC& dc, int uRegion, int uUnitCount, int uPixelsPerUnit, std::list <mem_region>::iterator region)
{
}

SECTIONRECT * ecMemoryLayoutWindow::SectionHitTest (wxPoint pntTest)
{
    return NULL;
}

REGIONRECT * ecMemoryLayoutWindow::RegionHitTest (wxPoint pntTest)
{
    return NULL;
}
#endif

void ecMemoryLayoutWindow::OnSize(wxSizeEvent& event)
{
}

void ecMemoryLayoutWindow::CalcUnitCountMax ()
{
}
