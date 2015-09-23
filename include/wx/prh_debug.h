/////////////////////////////////////////////////////////////////////////////
// Name:        wx/prh_debug.h
// Purpose:     Debugging routines specific to my code
// Author:      Patrick Horton
// Modified by:
// Created:     2015-08-05
// Copyright:   (c) Patrick Horton
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _PRH_DEBUG_H_
#define _PRH_DEBUG_H_

WXDLLIMPEXP_BASE void prh_display(int dbg, int level, const wxString &string);
#define prh_dbg(dbg,level,s)            prh_display(dbg,level,s)
#define prh_dbg1(dbg,level,s,a)         prh_display(dbg,level,wxString::Format(s,a))
#define prh_dbg2(dbg,level,s,a,b)       prh_display(dbg,level,wxString::Format(s,a,b))
#define prh_dbg3(dbg,level,s,a,b,c)     prh_display(dbg,level,wxString::Format(s,a,b,c))
#define prh_dbg4(dbg,level,s,a,b,c,d)   prh_display(dbg,level,wxString::Format(s,a,b,c,d))
#define prh_dbg5(dbg,level,s,a,b,c,d,e) prh_display(dbg,level,wxString::Format(s,a,b,c,d,e))


// debugging constants

#define dbg_dd  0x10000000
    // drag and drop debugging flag
#define dbg_ddd 0x20000000
    // drag and drop details flag
#define dbg_sl  0x01000000
    // save/load perspective
#define dbg_sld 0x02000000
    // save/load perspective details
#define dbg_rs 0x00100000
    // richTextBuffer styling
#define dbg_rsd 0x00200000
    // richTextBuffer details
#define dbg_rsdd 0x00400000
    // richTextBuffer gruesome details
#define dbg_rsp  0x00800000
    // debug paragraph pasting
#define dbg_undo  0x00010000
    // richTextBuffer/stc "undo" scheme
#define dbg_undod 0x00020000
    // richTextBuffer/stc "undo" scheme details
#define dbg_print 0x00040000
    // html easy printing, etc


#endif /* _PRH_DEBUG_H */

