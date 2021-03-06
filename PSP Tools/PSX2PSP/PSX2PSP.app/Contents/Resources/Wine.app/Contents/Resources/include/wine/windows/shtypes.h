/*** Autogenerated by WIDL 1.2.2 from shtypes.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_SHTYPES_H
#define __WIDL_SHTYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/* Headers for imported files */

#include <wtypes.h>

/* Forward declarations */


#include <pshpack1.h>
typedef struct __WIDL_shtypes_generated_name_00000000 {
    WORD cb;
    BYTE abID[1];
} SHITEMID;
typedef struct __WIDL_shtypes_generated_name_00000000 *LPSHITEMID;
typedef const SHITEMID *LPCSHITEMID;
typedef struct _ITEMIDLIST {
    SHITEMID mkid;
} ITEMIDLIST;
typedef struct _ITEMIDLIST *LPITEMIDLIST;
typedef const ITEMIDLIST *LPCITEMIDLIST;
typedef LPITEMIDLIST PITEMID_CHILD;
typedef const PITEMID_CHILD PCITEMID_CHILD;
typedef LPCITEMIDLIST PCUITEMID_CHILD;
typedef LPCITEMIDLIST *PCUITEMID_CHILD_ARRAY;
typedef LPCITEMIDLIST PCUIDLIST_RELATIVE;
typedef LPITEMIDLIST PIDLIST_ABSOLUTE;
typedef LPCITEMIDLIST PCIDLIST_ABSOLUTE;
#include <poppack.h>
#if 0
typedef struct __WIDL_shtypes_generated_name_00000001 {
    int dummy;
} WIN32_FIND_DATAA;
typedef struct __WIDL_shtypes_generated_name_00000001 WIN32_FIND_DATAW;
#endif
typedef enum tagSTRRET_TYPE {
    STRRET_WSTR = 0,
    STRRET_OFFSET = 1,
    STRRET_CSTR = 2
} STRRET_TYPE;
#include <pshpack8.h>
typedef struct _STRRET {
    UINT uType;
    union {
        LPWSTR pOleStr;
        UINT uOffset;
        char cStr[260];
    } DUMMYUNIONNAME;
} STRRET;
typedef struct _STRRET *LPSTRRET;
#include <poppack.h>
#include <pshpack1.h>
typedef struct __WIDL_shtypes_generated_name_00000002 {
    int fmt;
    int cxChar;
    STRRET str;
} SHELLDETAILS;
typedef struct __WIDL_shtypes_generated_name_00000002 *LPSHELLDETAILS;
#include <poppack.h>
typedef enum tagSHCOLSTATE {
    SHCOLSTATE_DEFAULT = 0,
    SHCOLSTATE_TYPE_STR = 1,
    SHCOLSTATE_TYPE_INT = 2,
    SHCOLSTATE_TYPE_DATE = 3,
    SHCOLSTATE_TYPEMASK = 0xf,
    SHCOLSTATE_ONBYDEFAULT = 0x10,
    SHCOLSTATE_SLOW = 0x20,
    SHCOLSTATE_EXTENDED = 0x40,
    SHCOLSTATE_SECONDARYUI = 0x80,
    SHCOLSTATE_HIDDEN = 0x100,
    SHCOLSTATE_PREFER_VARCMP = 0x200,
    SHCOLSTATE_PREFER_FMTCMP = 0x400,
    SHCOLSTATE_NOSORTBYFOLDERNESS = 0x800,
    SHCOLSTATE_VIEWONLY = 0x10000,
    SHCOLSTATE_BATCHREAD = 0x20000,
    SHCOLSTATE_NO_GROUPBY = 0x40000,
    SHCOLSTATE_FIXED_WIDTH = 0x1000,
    SHCOLSTATE_NODPISCALE = 0x2000,
    SHCOLSTATE_FIXED_RATIO = 0x4000,
    SHCOLSTATE_DISPLAYMASK = 0xf000
} SHCOLSTATE;
typedef DWORD SHCOLSTATEF;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_SHTYPES_H */
