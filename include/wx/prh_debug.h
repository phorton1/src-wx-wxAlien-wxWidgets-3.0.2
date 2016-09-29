/////////////////////////////////////////////////////////////////////////////
// Name:        wx/prh_debug.h
// Purpose:     Debugging routines specific to my code
// Author:      Patrick Horton
// Modified by:
// Created:     2015-08-05
// Copyright:   (c) Patrick Horton
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////
// 2016-09-28 ... no longer passing back to wxPerl via event
/////////////////////////////////////////////////////////////////////////////
// Hence forth would just need to keep a list somewhere
// of the "blah" things that I just put in the dbg calls,
// and would not modify this file for new groups of calls.
//
// You can set the global debug level via PRH_WX_DEBUG environment variable.
//    It defaults to 0
// You can set groups of functions debug levels via environment variables
//    PRH_WX_DEBUG_DD = 0
// The messages go to STDOUT, formatted to look somewhat like
//    those from appUtils::display(). They do NOT go to the
//    appUtils logfile.


#ifndef _PRH_DEBUG_H_
#define _PRH_DEBUG_H_

WXDLLIMPEXP_BASE void prh_display(char* dbg, int level, const wxString &string);
#define prh_dbg(dbg,level,s)            prh_display(dbg,level,s)
#define prh_dbg1(dbg,level,s,a)         prh_display(dbg,level,wxString::Format(s,a))
#define prh_dbg2(dbg,level,s,a,b)       prh_display(dbg,level,wxString::Format(s,a,b))
#define prh_dbg3(dbg,level,s,a,b,c)     prh_display(dbg,level,wxString::Format(s,a,b,c))
#define prh_dbg4(dbg,level,s,a,b,c,d)   prh_display(dbg,level,wxString::Format(s,a,b,c,d))
#define prh_dbg5(dbg,level,s,a,b,c,d,e) prh_display(dbg,level,wxString::Format(s,a,b,c,d,e))


// Known debugging constants
//
// Set PRH_WX_DEBUG = 0       global debugging level or
// Set PRH_WX_DEBUG_DD = 2    dbg_dd debug level (default = 5)
//
// probably want to figure out backtrace and stack indentation

#define dbg_dd  "DD"
    // drag and drop debugging flag
#define dbg_ddd "DDD"
    // drag and drop details flag
#define dbg_sl  "SL"
    // save/load perspective
#define dbg_sld "SLD"
    // save/load perspective details
#define dbg_rs "_RS"
    // richTextBuffer styling
#define dbg_rsd "_RSD"
    // richTextBuffer details
#define dbg_rsdd "_RSDD"
    // richTextBuffer gruesome details
#define dbg_rsp  "_RSP"
    // debug paragraph pasting
#define dbg_undo  "_UNDO"
    // richTextBuffer/stc "undo" scheme
#define dbg_undod "_UNDOD"
    // richTextBuffer/stc "undo" scheme details
#define dbg_print "PRINT"
    // html easy printing, etc


#endif /* _PRH_DEBUG_H */

