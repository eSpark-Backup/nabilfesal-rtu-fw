typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

typedef ushort USHORT;

typedef uchar BYTE;

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef ulong DWORD;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct HWND__ {
    int unused;
};

typedef struct tagMSG *LPMSG;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef char CHAR;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _OFSTRUCT _OFSTRUCT, *P_OFSTRUCT;

struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[128];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _OFSTRUCT *LPOFSTRUCT;

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef long HRESULT;

typedef CHAR *LPCSTR;

typedef LONG *PLONG;

typedef double ULONGLONG;

typedef CHAR *LPCH;

typedef double LONGLONG;

typedef WCHAR *LPWSTR;

typedef WCHAR *PCNZWCH;

typedef short SHORT;

typedef WCHAR *LPWCH;

typedef DWORD ACCESS_MASK;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef CHAR *PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef LONG DISPID;

typedef DISPID MEMBERID;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef union _union_2702 _union_2702, *P_union_2702;

typedef union _union_2691 _union_2691, *P_union_2691;

typedef ushort VARTYPE;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef DWORD HREFTYPE;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef DWORD ULONG;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef VARIANT VARIANTARG;

typedef union _union_2683 _union_2683, *P_union_2683;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union _union_2685 _union_2685, *P_union_2685;

typedef union _union_1695 _union_1695, *P_union_1695;

typedef union _union_1697 _union_1697, *P_union_1697;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef WCHAR OLECHAR;

typedef OLECHAR *BSTR;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef int INT;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

typedef OLECHAR *LPOLESTR;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef OLECHAR *LPCOLESTR;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef union _union_2711 _union_2711, *P_union_2711;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

struct _struct_1693 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct _struct_1693 s;
    LONGLONG int64;
};

struct _struct_1698 {
    ULONG Lo32;
    ULONG Mid32;
};

union _union_1697 {
    struct _struct_1698 s2;
    ULONGLONG Lo64;
};

struct _struct_1696 {
    BYTE scale;
    BYTE sign;
};

union _union_1695 {
    struct _struct_1696 s;
    USHORT signscale;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1695 u;
    ULONG Hi32;
    union _union_1697 u2;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union _union_2685 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2685 n3;
};

union _union_2683 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

union _union_2691 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union _union_2691 u;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union _union_2702 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2702 u;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagVARIANT {
    union _union_2683 n1;
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

union _union_2711 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2711 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef struct IMalloc IMalloc, *PIMalloc;

typedef struct IMallocVtbl IMallocVtbl, *PIMallocVtbl;

typedef ULONG_PTR SIZE_T;

struct IMalloc {
    struct IMallocVtbl *lpVtbl;
};

struct IMallocVtbl {
    HRESULT (*QueryInterface)(struct IMalloc *, IID *, void **);
    ULONG (*AddRef)(struct IMalloc *);
    ULONG (*Release)(struct IMalloc *);
    void * (*Alloc)(struct IMalloc *, SIZE_T);
    void * (*Realloc)(struct IMalloc *, void *, SIZE_T);
    void (*Free)(struct IMalloc *, void *);
    SIZE_T (*GetSize)(struct IMalloc *, void *);
    int (*DidAlloc)(struct IMalloc *, void *);
    void (*HeapMinimize)(struct IMalloc *);
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef WORD *LPWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef LONG_PTR LRESULT;

typedef int HFILE;

typedef BOOL *LPBOOL;

typedef void *LPCVOID;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_DIRECTORY_ENTRY_EXPORT IMAGE_DIRECTORY_ENTRY_EXPORT, *PIMAGE_DIRECTORY_ENTRY_EXPORT;

struct IMAGE_DIRECTORY_ENTRY_EXPORT {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    ImageBaseOffset32 Name;
    dword Base;
    dword NumberOfFunctions;
    dword NumberOfNames;
    ImageBaseOffset32 AddressOfFunctions;
    ImageBaseOffset32 AddressOfNames;
    ImageBaseOffset32 AddressOfNameOrdinals;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct IUnknown *LPUNKNOWN;

typedef uint size_t;



int DAT_10017d54;
string s_Path_or_File_Not_Found_10014030;
string s_BootStrap_Tried_to_open_a_read-o_10014048;
string s_File_Already_Exists_10014080;
string s_Invalid_Flag_or_Mode_argument_10014094;
string s_No_More_File_handles_available_(_100140b4;
string s_Error_100140e4;
undefined DAT_100140ec;
CHAR DAT_10017d5c;
undefined FUN_10001b90;
undefined4 *DAT_10017d54;
undefined LAB_1000194d;
undefined LAB_1000196f;
undefined LAB_10001b27;
undefined FUN_10001b55;
undefined FUN_10001000;
undefined FUN_10001be7;
undefined DAT_100140f0;
undefined FUN_1000197a;
undefined DAT_100140f4;
undefined1 DAT_10017d5c;
string s_sfXXXXXX_100140fc;
undefined1 DAT_10014108;
undefined DAT_1001410c;
undefined DAT_10014110;
undefined DAT_10014114;
undefined DAT_10014118;
undefined1 DAT_10017b60;
undefined DAT_10017d58;
int DAT_100180fc;
undefined DAT_10017d04;
LPCSTR DAT_100180f8;
undefined DAT_1001411c;
undefined DAT_10014120;
undefined DAT_10014124;
undefined DAT_10014128;
undefined DAT_10014138;
undefined DAT_1001413c;
LPSTR DAT_100180f8;
HLOCAL DAT_100180f8;
string s_CONFIG:_10014144;
string s_NOTE:_10014150;
string s_DllRegisterServer_10014158;
string s_Insufficient_memory_available_to_1001416c;
string s_Setup_100141a0;
undefined4 DAT_10018100;
undefined4 DAT_10018104;
undefined4 DAT_10018108;
undefined4 DAT_10019a1c;
undefined4 DAT_10019a20;
undefined4 DAT_10019a28;
HLOCAL DAT_10018108;
HLOCAL DAT_10018100;
HLOCAL DAT_10018104;
undefined4 DAT_10019a24;
string s_vb6stkit.dll_100141a8;
string s_RegisterTypeLib_of_%s_failed_:_%_100141cc;
string s_LoadTypeLib_of_%s_failed_:_%lx_100141f0;
string s_Cannot_access_file:_%s_in_fRegis_10014210;
string s_Couldn't_convert_clsid_to_string_1001423c;
string s_problem_getting_typeAttr_for_ind_1001429c;
string s_problem_getting_typeinfo_for_ind_100142dc;
string s_Index_is_outside_the_range_of_0_t_1001431c;
string s_LocalServer32_10014384;
string s_InprocServer32_10014394;
string s_ProgID_100143a4;
string s_CLSID_100143ac;
string s_LoadTypeLib_of_%s_failed_to_load_100143b4;
string s_LoadTypeLib_of_%s_failed_to_find_100143ec;
undefined DAT_10012310;
undefined DAT_10012400;
undefined DAT_10012700;
undefined DAT_10012710;
undefined DAT_10014470;
string s_$(Programs)_10014478;
string s_$(Start_Menu)_10014488;
undefined4 *DAT_1001ae34;
int *DAT_1001ae34;
int DAT_1001ae34;
undefined4 DAT_1001ae0c;
undefined4 DAT_1001ae28;
byte DAT_1001ae24;
int DAT_1001ae14;
undefined DAT_1001ae10;
int DAT_1001ae00;
undefined1 *DAT_1001adf8;
undefined1 *DAT_1001ae30;
int DAT_1001ae08;
int DAT_1001ae04;
undefined LAB_10005560;
undefined LAB_10005620;
undefined LAB_10005920;
undefined LAB_10005ad0;
short DAT_1001ae18;
undefined4 DAT_1001ae1c;
int DAT_1001ae20;
undefined4 DAT_1001adf0;
undefined4 DAT_1001ae2c;
int DAT_1001adf4;
int DAT_1001ae28;
int DAT_10018318;
int DAT_10018328;
int DAT_10018334;
undefined4 *DAT_1001832c;
undefined4 *DAT_10018330;
int DAT_1001832c;
int *DAT_1001831c;
int *DAT_10018320;
int *DAT_10018324;
int *DAT_1001832c;
int *DAT_10018330;
undefined4 DAT_10018318;
undefined4 DAT_10018334;
undefined DAT_100145e8;
undefined4 DAT_10014498;
undefined DAT_100144e4;
int DAT_1001460c;
undefined DAT_100121d0;
int DAT_1001a7c0;
int DAT_1001a9d0;
int DAT_1001abe0;
undefined DAT_10019b60;
undefined DAT_10019b64;
undefined DAT_1001a3a0;
undefined DAT_1001a190;
undefined DAT_10019f80;
undefined DAT_10019d70;
undefined DAT_1001a3a4;
undefined DAT_1001a194;
undefined DAT_10019f84;
undefined DAT_10019d74;
undefined DAT_1001a5b0;
undefined DAT_1001a5b4;
undefined DAT_1001a7c4;
undefined DAT_1001a9d4;
undefined DAT_1001abe4;
undefined1 DAT_10014610;
undefined1 DAT_10014680;
undefined4 DAT_10019a40;
undefined4 DAT_10019aac;
undefined4 DAT_10019b68;
undefined4 DAT_10019d78;
undefined4 DAT_1001a5b8;
undefined4 DAT_1001a7c8;
undefined4 DAT_10019b70;
undefined4 DAT_1001a5c0;
undefined4 DAT_1001a7d0;
undefined *DAT_1001adf8;
undefined4 DAT_1001abe8;
undefined4 DAT_1001abf0;
undefined4 DAT_1001a9d8;
undefined4 DAT_1001a9e0;
undefined4 DAT_1001a3a8;
undefined4 DAT_1001a3b0;
undefined *DAT_1001ae30;
undefined4 DAT_1001a198;
undefined4 DAT_1001a1a0;
undefined4 DAT_10019f88;
undefined4 DAT_10019f90;
undefined4 DAT_10019d80;
undefined4 DAT_10019b6c;
undefined4 DAT_1001a5bc;
undefined4 DAT_1001a7c0;
undefined4 DAT_1001a7cc;
undefined4 DAT_1001a9d0;
undefined4 DAT_1001a9dc;
undefined4 DAT_1001abe0;
undefined4 DAT_1001abec;
int DAT_1001947c;
ushort DAT_10019a34;
uint DAT_10019478;
undefined2 DAT_10019a30;
undefined2 DAT_10019a32;
int DAT_1001ae2c;
char *DAT_1001adf0;
undefined4 DAT_1001adf4;
ushort DAT_10019a30;
ushort DAT_10019a32;
undefined DAT_100122e9;
undefined DAT_10012208;
undefined DAT_10009820;
undefined4 DAT_10014728;
pointer PTR___exit_10014890;
int DAT_100194d8;
undefined4 DAT_10019480;
undefined4 DAT_1001be60;
undefined DAT_10012720;
undefined DAT_10012728;
undefined DAT_10012730;
undefined DAT_10012738;
undefined DAT_10012740;
undefined DAT_10012744;
undefined *DAT_1001bf74;
undefined DAT_10014000;
undefined DAT_10014004;
undefined DAT_10014008;
undefined DAT_10014010;
int DAT_100194c0;
undefined4 DAT_100194bc;
undefined1 DAT_100194b8;
undefined4 *DAT_1001bf70;
int DAT_1001bf6c;
undefined DAT_10014014;
undefined DAT_10014020;
undefined DAT_10014024;
undefined DAT_10014028;
undefined DAT_1001be50;
int DAT_1001be4c;
int DAT_10019548;
int DAT_10019568;
uint DAT_10016b04;
HANDLE DAT_1001be48;
uint DAT_10019574;
uint DAT_10016b14;
undefined2 DAT_10012748;
undefined DAT_1001274c;
uint DAT_1001bf60;
int DAT_10016d24;
undefined *PTR_DAT_10016b18;
uint DAT_10019484;
undefined DAT_10019490;
undefined DAT_1001948c;
undefined DAT_10019488;
LPSTR DAT_1001bf64;
LPSTR DAT_100194c8;
int DAT_100194c4;
int DAT_100194bc;
undefined *DAT_1001bf68;
int DAT_100194d0;
int DAT_100194d4;
undefined *PTR___exit_10014890;
DWORD DAT_10014894;
undefined DAT_10016eb8;
UINT DAT_1001bf60;
undefined4 DAT_1001be64;
int DAT_1001bf60;
UINT DAT_10019888;
LCID DAT_1001988c;
undefined4 DAT_10019680;
undefined1 DAT_10019788;
int DAT_10019888;
int DAT_10016f40;
int DAT_10016f44;
int DAT_10016f48;
undefined DAT_1001702c;
undefined *PTR_DAT_10014904;
undefined *PTR_DAT_100148f4;
undefined *PTR_DAT_100148e4;
undefined *PTR_DAT_100148c4;
pointer PTR_DAT_100148e4;
pointer PTR_DAT_100148f4;
pointer PTR_DAT_10014904;
pointer PTR_DAT_100148c4;
undefined4 DAT_100148c0;
LCID DAT_10019548;
undefined *DAT_1001956c;
pointer PTR_LOOP_10014ae0;
int DAT_10014af0;
undefined *PTR_PTR_LOOP_10014ae4;
undefined *PTR_PTR_LOOP_10016b00;
undefined4 DAT_10014af0;
int DAT_10019570;
int *DAT_100194a0;
int DAT_100194a8;
char *DAT_100194c8;
byte *DAT_1001bf64;
undefined DAT_100194b0;
undefined DAT_10019498;
undefined DAT_10019494;
undefined DAT_10019578;
undefined4 DAT_1001988c;
undefined DAT_1001be44;
undefined DAT_10019890;
undefined DAT_10019894;
undefined DAT_10019898;
int DAT_1001989c;
undefined1 DAT_10016d30;
undefined4 DAT_10016d38;
undefined4 DAT_10016e28;
uint DAT_1001989c;
int DAT_10019558;
undefined4 DAT_10019888;
int DAT_100198a4;
undefined *DAT_100198a8;
int DAT_1001be60;
int DAT_100198b0;
UINT DAT_10019558;
int DAT_10019970;
undefined4 DAT_100198b8;
undefined4 DAT_10016fe8;
undefined4 DAT_10016fd8;
undefined4 DAT_100198c0;
int DAT_10019914;
short DAT_10019906;
short DAT_1001995a;
int DAT_10019968;
undefined *PTR_DAT_10016fd0;
undefined *PTR_DAT_10016fd4;
byte *DAT_1001996c;
undefined DAT_10012ac8;
undefined DAT_100198c4;
undefined DAT_10019918;
uint DAT_10016fd8;
uint DAT_10016fe8;
int DAT_100198b8;
short DAT_10019958;
uint DAT_10019964;
uint DAT_10019960;
uint DAT_1001995c;
ushort DAT_1001995a;
short DAT_10019904;
uint DAT_10019910;
uint DAT_1001990c;
uint DAT_10019908;
ushort DAT_10019906;
int DAT_10016fdc;
int DAT_10016fec;
int DAT_10016fe0;
int DAT_10016ff0;
undefined DAT_10016ff4;
undefined DAT_10016ff8;
undefined DAT_10017030;
ushort DAT_100199b6;
ushort DAT_100199b8;
ushort DAT_100199ac;
undefined DAT_10019a08;
int *DAT_100194a8;
int DAT_100199e0;
LCID DAT_100199e4;
FARPROC DAT_100199e8;
FARPROC DAT_100199ec;
FARPROC DAT_100199f0;
undefined1 DAT_10019a00;
int DAT_10019a10;
int *DAT_100194a4;
undefined4 *DAT_100194a8;
int DAT_10019a14;
int DAT_10019a18;

int __cdecl FUN_10001000(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_1 != 1)) {
    if (param_1 == 2) {
      iVar1 = FUN_10001071(*(undefined4 **)(param_2 + 0x10),*(LPCSTR *)(param_2 + 4));
      return iVar1;
    }
    if (param_1 == 3) {
      iVar1 = FUN_100011cc(*(int *)(param_2 + 0x10),*(uint *)(param_2 + 0x14));
      uVar2 = -(uint)(iVar1 != 0) & 2;
    }
    else {
      if (param_1 != 4) {
        *(undefined2 *)(*(int *)(param_2 + 0x10) + 0x38) = 0;
        return 0;
      }
      iVar1 = FUN_100011f5(*(int *)(param_2 + 0x10),*(LPCSTR *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8),*(LPCSTR *)(param_2 + 0xc),
                           *(int *)(param_2 + 0x24));
      uVar2 = (uint)(iVar1 != 0);
    }
    return uVar2 - 1;
  }
  return 0;
}



int __cdecl FUN_10001071(undefined4 *param_1,LPCSTR param_2)

{
  CHAR CVar1;
  LPCSTR lpString;
  LPCSTR lpString2;
  DWORD DVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD *pDVar5;
  char *lpText;
  int iStack_24;
  byte bStack_1e;
  
  puVar3 = param_1;
  param_1 = (undefined4 *)0x0;
  lpString = (LPCSTR)puVar3[1];
  lpString2 = (LPCSTR)puVar3[2];
  CVar1 = *lpString;
  while( true ) {
    if (CVar1 == '\0') {
      return 0;
    }
    if ((CVar1 == '@') && (iVar4 = lstrcmpiA(lpString + 1,param_2), iVar4 == 0)) break;
    iVar4 = lstrlenA(lpString);
    lpString = lpString + iVar4 + 1;
    iVar4 = lstrlenA(lpString2);
    param_1 = (undefined4 *)((int)param_1 + 1);
    lpString2 = lpString2 + iVar4 + 1;
    CVar1 = *lpString;
  }
  lstrcpyA((LPSTR)puVar3[4],(LPCSTR)*puVar3);
  FUN_10001c3b((uint *)puVar3[4]);
  lstrcatA((LPSTR)puVar3[4],lpString2);
  iVar4 = FUN_1000a0b0((byte *)puVar3[4],&iStack_24);
  if (iVar4 != -1) {
    if ((bStack_1e & 0x80) == 0) {
      FUN_10009f90((LPCSTR)puVar3[4],0x80);
    }
    FUN_10009f80(*(LPCSTR *)(DAT_10017d54 + 0x10));
  }
  iVar4 = FUN_10009b90((LPCSTR)puVar3[4],0x8302,0x180);
  if (iVar4 != -1) goto LAB_100011af;
  pDVar5 = FUN_10009b70();
  DVar2 = *pDVar5;
  if (DVar2 == 2) {
    lpText = s_Path_or_File_Not_Found_10014030;
LAB_1000119c:
    MessageBoxA((HWND)0x0,lpText,s_Error_100140e4,0x40);
  }
  else {
    if (DVar2 == 0xd) {
      lpText = s_BootStrap_Tried_to_open_a_read_o_10014048;
      goto LAB_1000119c;
    }
    if (DVar2 == 0x11) {
      lpText = s_File_Already_Exists_10014080;
      goto LAB_1000119c;
    }
    if (DVar2 == 0x16) {
      lpText = s_Invalid_Flag_or_Mode_argument_10014094;
      goto LAB_1000119c;
    }
    if (DVar2 == 0x18) {
      lpText = s_No_More_File_handles_available___100140b4;
      goto LAB_1000119c;
    }
  }
  *(undefined2 *)(puVar3 + 0xe) = 4;
LAB_100011af:
  if ((int)param_1 < (int)puVar3[7]) {
    *(undefined4 *)(puVar3[5] + (int)param_1 * 4) = 1;
  }
  puVar3[6] = puVar3[6] + 1;
  return iVar4;
}



undefined4 __cdecl FUN_100011cc(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_10001b90(param_2);
  if (iVar1 != -1) {
    FUN_10009f90(*(LPCSTR *)(param_1 + 0x10),0);
    return 1;
  }
  return 0;
}



undefined4 __cdecl
FUN_100011f5(int param_1,LPCSTR param_2,undefined4 param_3,LPCSTR param_4,int param_5)

{
  HFILE HVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined4 *puVar5;
  CHAR local_49c;
  undefined4 local_49b;
  _OFSTRUCT local_294;
  CHAR local_20c;
  undefined4 local_20b;
  
  local_20c = '\0';
  local_49c = '\0';
  puVar5 = &local_20b;
  for (iVar4 = 0x81; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  puVar5 = &local_49b;
  for (iVar4 = 0x81; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  if (param_5 == 10) {
LAB_100012ff:
    uVar2 = 0;
  }
  else {
    lstrcpyA(*(LPSTR *)(param_1 + 0xc),param_4);
    lstrcatA(*(LPSTR *)(param_1 + 0xc),param_2);
    HVar1 = OpenFile(*(LPCSTR *)(param_1 + 0xc),&local_294,0x4000);
    if (HVar1 == -1) {
      uVar2 = FUN_100028f4();
      wsprintfA(&local_20c,&DAT_100140ec,uVar2);
      pCVar3 = FUN_10001c13(&local_20c,'\\');
      pCVar3[1] = '\0';
      FUN_100034ec(*(LPCSTR *)(param_1 + 0xc),&local_49c);
      FUN_1000a5f0(&local_20c);
      lstrcatA(&local_20c,&local_49c);
      iVar4 = FUN_100017fc(*(undefined4 *)(param_1 + 0x24),param_4,&local_20c);
      if (iVar4 == 0) {
        *(undefined2 *)(param_1 + 0x38) = 3;
        FUN_1000a4a0(1);
        goto LAB_100012ff;
      }
      CopyFileA(&local_20c,*(LPCSTR *)(param_1 + 0xc),0);
    }
    uVar2 = 1;
  }
  return uVar2;
}



uint __cdecl
FUN_1000131c(undefined4 param_1,LPCSTR param_2,uint param_3,int param_4,LPCSTR param_5,
            undefined4 param_6,LPCSTR param_7,undefined4 param_8,LPSTR param_9,undefined4 param_10)

{
  HFILE HVar1;
  undefined4 uVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_888 [128];
  CHAR local_688;
  undefined4 local_687;
  _OFSTRUCT local_480;
  CHAR local_3f8;
  undefined4 local_3f7;
  CHAR local_2f4;
  undefined4 local_2f3;
  undefined4 local_ec [6];
  int local_d4;
  int local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 *local_c4;
  undefined4 local_c0 [3];
  ushort local_b4;
  LPCSTR local_c;
  uint local_8;
  
  local_8 = 0xe;
  local_c = (LPCSTR)FUN_100016cf(param_7,local_888);
  local_3f8 = DAT_10017d5c;
  local_688 = '\0';
  puVar6 = &local_3f7;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  puVar6 = &local_687;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_2f4 = '\0';
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  puVar6 = &local_2f3;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  HVar1 = OpenFile(param_2,&local_480,0x4000);
  if (HVar1 == -1) {
    uVar2 = FUN_100028f4();
    wsprintfA(&local_2f4,&DAT_100140ec,uVar2);
    pCVar3 = FUN_10001c13(&local_2f4,'\\');
    pCVar3[1] = '\0';
    FUN_100034ec(param_2,&local_688);
    FUN_1000a5f0(&local_2f4);
    lstrcatA(&local_2f4,&local_688);
    iVar5 = FUN_100017fc(local_c8,param_5,&local_2f4);
    if (iVar5 == 0) {
      local_8 = 3;
      FUN_1000a4a0(1);
    }
    CopyFileA(&local_2f4,param_2,0);
  }
  FUN_10001716(local_ec,param_6,param_7,param_8,param_9,param_10,local_888,local_c,param_1);
  DAT_10017d54 = local_ec;
  local_c4 = FUN_10003580(&LAB_1000194d,&LAB_1000196f,FUN_1000197a,&LAB_10001b27,FUN_10001b55,
                          FUN_10001b90,FUN_10001be7,0xffffffff,local_c0);
  if (local_c4 == (undefined4 *)0x0) {
    return 6;
  }
  local_cc = param_3;
  while( true ) {
    if ((local_d0 <= local_d4) || (param_4 < (int)local_cc)) goto LAB_1000164f;
    iVar5 = FUN_10001765(param_2,local_cc);
    if (iVar5 == 0) break;
    HVar1 = OpenFile(param_2,&local_480,0x4000);
    if (HVar1 == -1) {
      uVar2 = FUN_100028f4();
      wsprintfA(&local_2f4,&DAT_100140ec,uVar2);
      pCVar3 = FUN_10001c13(&local_2f4,'\\');
      pCVar3[1] = '\0';
      FUN_100034ec(param_2,&local_688);
      FUN_1000a5f0(&local_2f4);
      lstrcatA(&local_2f4,&local_688);
      iVar5 = FUN_100017fc(local_c8,param_5,&local_2f4);
      if (iVar5 == 0) {
        local_8 = 3;
        FUN_1000a4a0(1);
LAB_1000164f:
        if (((short)local_8 == 0xe) && (0 < (int)local_c)) {
          piVar7 = local_888;
          param_2 = local_c;
          do {
            if (*piVar7 == 0) {
              lstrcatA(param_9,&DAT_100140f0);
              lstrcatA(param_9,param_7 + 1);
              local_8 = 3;
            }
            iVar5 = lstrlenA(param_7);
            param_7 = param_7 + iVar5 + 1;
            piVar7 = piVar7 + 1;
            param_2 = param_2 + -1;
          } while (param_2 != (LPCSTR)0x0);
        }
        FUN_10003620(local_c4);
        uVar4 = DAT_10017d54[0x37];
        if (uVar4 != 0xffffffff) {
          uVar4 = FUN_10001b90(uVar4);
        }
        return CONCAT22((short)(uVar4 >> 0x10),(short)local_8);
      }
      CopyFileA(&local_2f4,param_2,0);
    }
    pCVar3 = FUN_10001c13(param_5,'\\');
    pCVar3[1] = '\0';
    pCVar3 = FUN_10001c13(param_2,'\\');
    lstrcpyA(&local_3f8,pCVar3 + 1);
    iVar5 = FUN_10003690(local_c4,&local_3f8,param_5,0,FUN_10001000,0,local_ec);
    if (iVar5 == 0) {
      local_8 = -(uint)(local_b4 != 0xe) & (uint)local_b4;
      goto LAB_1000164f;
    }
    local_cc = local_cc + 1;
  }
  local_8 = 3;
  goto LAB_1000164f;
}



int __cdecl FUN_100016cf(LPCSTR param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = 0;
  for (; *param_1 != '\0'; param_1 = param_1 + iVar1 + 1) {
    if (*param_1 == '@') {
      *param_2 = 0;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
    iVar1 = lstrlenA(param_1);
  }
  if (0x80 < iVar2) {
    iVar2 = 0x80;
  }
  return iVar2;
}



void __cdecl
FUN_10001716(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[0x37] = 0xffffffff;
  param_1[5] = param_7;
  param_1[0xd] = 0;
  param_1[7] = param_8;
  param_1[6] = 0;
  param_1[9] = param_9;
  *(undefined2 *)(param_1 + 0xe) = 0xe;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  return;
}



undefined4 __cdecl FUN_10001765(LPCSTR param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  LPSTR lpString1;
  undefined4 *puVar5;
  char local_20c;
  undefined4 local_20b;
  
  iVar2 = lstrlenA(param_1);
  local_20c = '\0';
  puVar5 = &local_20b;
  for (iVar3 = 0x81; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  pcVar4 = param_1 + iVar2;
  FUN_1000a950(param_2,&local_20c,10);
  if (param_2 != 1) {
    cVar1 = *pcVar4;
    if (cVar1 != '.') {
      do {
        if ((pcVar4 <= param_1 + 1) || (cVar1 == '\\')) {
          return 0;
        }
        cVar1 = pcVar4[-1];
        pcVar4 = pcVar4 + -1;
      } while (cVar1 != '.');
    }
    lpString1 = pcVar4 + -1;
    if (10 < (int)param_2) {
      lpString1 = pcVar4 + -2;
    }
    *lpString1 = '\0';
    lstrcatA(lpString1,&local_20c);
    lstrcatA(lpString1,&DAT_100140f4);
  }
  return 1;
}



undefined4 __cdecl FUN_100017fc(undefined4 param_1,LPCSTR param_2,LPCSTR param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  char *_Source;
  HFILE HVar4;
  int iVar5;
  size_t _Count;
  undefined4 *puVar6;
  byte local_354;
  undefined4 local_353;
  _OFSTRUCT local_14c;
  CHAR local_c4 [160];
  char local_24;
  undefined4 local_23;
  
  local_24 = '\0';
  puVar6 = &local_23;
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_354 = 0;
  puVar6 = &local_353;
  for (iVar5 = 0x81; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  bVar1 = true;
  FUN_10003528(param_3,(LPSTR)&local_354);
  uVar2 = FUN_1000a740(&local_354,&DAT_10017d5c);
  if (uVar2 == 0) {
    lstrcpyA(local_c4,param_2);
    lstrcatA(local_c4,param_3);
  }
  else {
    lstrcpyA(local_c4,param_3);
  }
  iVar5 = lstrlenA(local_c4);
  pcVar3 = local_c4 + iVar5;
  while( true ) {
    if (*pcVar3 == '.') {
      _Source = pcVar3 + -1;
      if (pcVar3[-1] < '0') goto LAB_100018e7;
      if ('9' < pcVar3[-1]) goto LAB_100018e7;
      _Count = 1;
      if (('/' < pcVar3[-2]) && (pcVar3[-2] < ':')) {
        _Count = 2;
        _Source = pcVar3 + -2;
      }
      _strncpy(&local_24,_Source,_Count);
      goto LAB_100018e7;
    }
    if (pcVar3 == local_c4) break;
    pcVar3 = pcVar3 + -1;
  }
  do {
    if (bVar1) {
      iVar5 = FUN_10001c78((LPCSTR)0x9,0,0x31,&local_24,(LPCSTR)0x0);
      if (iVar5 != 1) {
        return 0;
      }
      bVar1 = false;
    }
    else {
      iVar5 = FUN_10001c78((LPCSTR)0xa,0,0x31,local_c4,&local_24);
      if (iVar5 != 1) {
        return 0;
      }
    }
LAB_100018e7:
    HVar4 = OpenFile(local_c4,&local_14c,0x4000);
  } while (HVar4 == -1);
  return 1;
}



void __cdecl FUN_1000197a(LPCSTR param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == '*') {
    FUN_100019b8((int)param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_10009b90(param_1,param_2,param_3);
  if ((iVar1 == -1) && (*(short *)(DAT_10017d54 + 0x38) == 0xe)) {
    *(undefined2 *)(DAT_10017d54 + 0x38) = 3;
  }
  return;
}



undefined4 __cdecl FUN_100019b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char *lpString2;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char local_14 [20];
  
  bVar1 = true;
  lpString2 = FUN_1000ab50(&DAT_10017d5c,&DAT_10014110);
  if (lpString2 == (char *)0x0) goto LAB_10001a7b;
  lstrcpyA((LPSTR)((int)DAT_10017d54 + 0x3a),lpString2);
  FUN_1000a8e0(lpString2);
  do {
    uVar2 = FUN_10009b90((LPCSTR)((int)DAT_10017d54 + 0x3a),0x8102,param_3);
    DAT_10017d54[0x37] = uVar2;
    if ((DAT_10017d54[0x37] != 0xffffffff) &&
       ((*(int *)(param_1 + 2) < 1 ||
        ((iVar3 = FUN_10001be7(DAT_10017d54[0x37],*(int *)(param_1 + 2) + -1,0), iVar3 != -1 &&
         (uVar4 = FUN_10001b55(DAT_10017d54[0x37],&DAT_1001410c,1), uVar4 == 1)))))) {
      return DAT_10017d54[0x37];
    }
LAB_10001a7b:
    if (DAT_10017d54[0x37] != 0xffffffff) {
      FUN_10001b90(DAT_10017d54[0x37]);
    }
    if (!bVar1) break;
    bVar1 = false;
    lstrcpyA((LPSTR)((int)DAT_10017d54 + 0x3a),(LPCSTR)*DAT_10017d54);
    lstrcatA((LPSTR)((int)DAT_10017d54 + 0x3a),&DAT_10014108);
    lstrcatA((LPSTR)((int)DAT_10017d54 + 0x3a),s_sfXXXXXX_100140fc);
    pbVar5 = FUN_1000aa70((byte *)((int)DAT_10017d54 + 0x3a));
  } while (pbVar5 != (byte *)0x0);
  FUN_1000aa00((*(int *)(param_1 + 2) + 0x3ff) / 0x400,local_14,10);
  *(undefined1 *)((int)DAT_10017d54 + 0x3a) = 0;
  *(undefined2 *)(DAT_10017d54 + 0xe) = 0xc;
  return 0xffffffff;
}



uint __cdecl FUN_10001b55(uint param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1000b0b0(param_1,param_2,param_3);
  Sleep(0);
  if ((uVar1 != param_3) && (*(short *)(DAT_10017d54 + 0x38) == 0xe)) {
    *(undefined2 *)(DAT_10017d54 + 0x38) = 7;
  }
  return uVar1;
}



int __cdecl FUN_10001b90(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000b340(param_1);
  if ((iVar1 == -1) && (*(short *)(DAT_10017d54 + 0x38) == 0xe)) {
    *(undefined2 *)(DAT_10017d54 + 0x38) = 7;
  }
  if (param_1 == *(uint *)(DAT_10017d54 + 0xdc)) {
    FUN_10009f80((LPCSTR)(DAT_10017d54 + 0x3a));
    *(undefined1 *)(DAT_10017d54 + 0x3a) = 0;
    *(undefined4 *)(DAT_10017d54 + 0xdc) = 0xffffffff;
  }
  return iVar1;
}



void __cdecl FUN_10001be7(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  
  DVar1 = FUN_1000b440(param_1,param_2,param_3);
  if ((DVar1 == 0xffffffff) && (*(short *)(DAT_10017d54 + 0x38) == 0xe)) {
    *(undefined2 *)(DAT_10017d54 + 0x38) = 0;
  }
  return;
}



LPCSTR __cdecl FUN_10001c13(LPCSTR param_1,char param_2)

{
  int iVar1;
  LPCSTR lpszCurrent;
  
  iVar1 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar1;
  while( true ) {
    if (lpszCurrent <= param_1) {
      return (LPCSTR)0x0;
    }
    if (*lpszCurrent == param_2) break;
    lpszCurrent = CharPrevA(param_1,lpszCurrent);
  }
  return lpszCurrent;
}



void __cdecl FUN_10001c3b(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint *lpsz;
  uint *puVar3;
  
  lstrlenA((LPCSTR)param_1);
  cVar1 = (char)*param_1;
  puVar2 = (uint *)0x0;
  lpsz = param_1;
  while (cVar1 != '\0') {
    puVar3 = (uint *)CharNextA((LPCSTR)lpsz);
    puVar2 = lpsz;
    lpsz = puVar3;
    cVar1 = (char)*puVar3;
  }
  if ((puVar2 == (uint *)0x0) || ((char)*puVar2 != '\\')) {
    FUN_1000b550(param_1,(uint *)&DAT_10014108);
  }
  return;
}



void __cdecl
FUN_10001c78(LPCSTR param_1,undefined4 param_2,UINT param_3,LPCSTR param_4,LPCSTR param_5)

{
  LPCSTR pCVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  
  if ((short)param_1 == 9) {
    pCVar3 = &DAT_10014118;
    pCVar1 = (LPCSTR)FUN_100028fa();
  }
  else {
    if ((short)param_1 != 10) goto LAB_10001cc2;
    pCVar3 = &DAT_10014114;
    pCVar2 = &DAT_10014118;
    pCVar1 = (LPCSTR)FUN_10002900();
    pCVar1 = FUN_10001cd8(pCVar1,pCVar2,param_4);
    param_4 = param_5;
  }
  param_1 = FUN_10001cd8(pCVar1,pCVar3,param_4);
LAB_10001cc2:
  pCVar1 = (LPCSTR)FUN_10002906();
  MessageBoxA((HWND)0x0,param_1,pCVar1,param_3);
  return;
}



LPCSTR __cdecl FUN_10001cd8(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  bool bVar1;
  int iVar2;
  LPSTR lpString2;
  CHAR local_21c [500];
  CHAR local_28 [32];
  int local_8;
  
  if (param_1 != &DAT_10017b60) {
    lstrcpyA(&DAT_10017b60,param_1);
  }
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    if (param_1 != (LPCSTR)0x0) {
      if (param_3 == (LPCSTR)0x0) {
        param_3 = &DAT_10017d58;
      }
      local_8 = lstrlenA(param_2);
      do {
        bVar1 = false;
        lpString2 = &DAT_10017b60;
        do {
          if (*lpString2 == '\0') break;
          lstrcpynA(local_28,lpString2,local_8 + 1);
          iVar2 = lstrcmpiA(local_28,param_2);
          if (iVar2 == 0) {
            bVar1 = true;
            break;
          }
          lpString2 = CharNextA(lpString2);
        } while (lpString2 != (LPSTR)0x0);
        if (!bVar1) {
          return &DAT_10017b60;
        }
        lstrcpynA(local_21c,&DAT_10017b60,(int)(lpString2 + -0x10017b5f));
        lstrcatA(local_21c,param_3);
        lstrcatA(local_21c,lpString2 + local_8);
        lstrcpyA(&DAT_10017b60,local_21c);
      } while( true );
    }
    param_1 = (LPCSTR)0x0;
  }
  return param_1;
}



void __cdecl FUN_10001dcf(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x16] = 0;
  return;
}



void __cdecl FUN_10001dde(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10003470((HLOCAL)*param_1);
  FUN_10003470((HLOCAL)param_1[1]);
  iVar1 = 0;
  if (0 < (int)param_1[0x16]) {
    puVar2 = param_1 + 2;
    do {
      FUN_10003470((HLOCAL)*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)param_1[0x16]);
  }
  return;
}



undefined * FUN_10001e15(void)

{
  if (0 < DAT_100180fc) {
    return &DAT_10017d04 + DAT_100180fc * 0x5c;
  }
  return (undefined *)0x0;
}



bool FUN_10001e2b(void)

{
  return 0 < DAT_100180fc;
}



undefined4 FUN_10001e37(void)

{
  undefined4 *puVar1;
  
  if (DAT_100180fc < 10) {
    DAT_100180fc = DAT_100180fc + 1;
    puVar1 = (undefined4 *)FUN_10001e15();
    FUN_10001dcf(puVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_10001e59(void)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    puVar2 = (undefined4 *)FUN_10001e15();
    FUN_10001dde(puVar2);
    DAT_100180fc = DAT_100180fc + -1;
    return 1;
  }
  return 0;
}



LPSTR __cdecl FUN_10001e7b(int *param_1,int param_2)

{
  int iVar1;
  LPSTR lpString1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = param_2;
  piVar3 = param_1;
  if (0 < param_2) {
    do {
      if (*piVar3 == 0) {
        *piVar3 = (int)&DAT_10017d5c;
      }
      iVar1 = lstrlenA((LPCSTR)*piVar3);
      iVar4 = iVar4 + iVar1;
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 0);
  }
  lpString1 = (LPSTR)FUN_1000343b(iVar4 + 1);
  if ((lpString1 != (LPSTR)0x0) && (*lpString1 = '\0', 0 < param_2)) {
    do {
      lstrcatA(lpString1,(LPCSTR)*param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return lpString1;
}



void __cdecl FUN_10001ed9(LPCSTR param_1)

{
  char cVar1;
  
  for (; ((cVar1 = *param_1, cVar1 != '\0' && (cVar1 != '\n')) && (cVar1 != '\r'));
      param_1 = CharNextA(param_1)) {
  }
  return;
}



uint __cdecl FUN_10001ef7(HANDLE param_1,LPCVOID param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = param_4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = WriteFile(param_1,param_2,(DWORD)param_3,(LPDWORD)&param_4,(LPOVERLAPPED)0x0);
  if (uVar2 != 0) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_4;
    }
    uVar2 = (uint)(param_4 == param_3);
  }
  return uVar2;
}



bool __cdecl FUN_10001f34(LPCSTR param_1,char *param_2)

{
  bool bVar1;
  HANDLE hFile;
  DWORD DVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *lpsz;
  BOOL BVar5;
  undefined4 *puVar6;
  _SECURITY_ATTRIBUTES local_14;
  int local_8;
  
  local_8 = 0;
  if (DAT_100180f8 == (LPCSTR)0x0) {
    bVar1 = true;
  }
  else {
    lstrlenA(param_2);
    local_14.nLength = 0xc;
    local_14.lpSecurityDescriptor = (LPVOID)0x0;
    local_14.bInheritHandle = 0;
    hFile = CreateFileA(DAT_100180f8,0x40000000,0,&local_14,3,0x80000080,(HANDLE)0x0);
    if ((hFile != (HANDLE)0xffffffff) &&
       (DVar2 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar2 != 0xffffffff)) {
      while (lpsz = param_2, *param_1 == '\0') {
LAB_10001fc7:
        for (; (*lpsz == '\r' || (*lpsz == '\n')); lpsz = CharNextA(lpsz)) {
        }
        if (*lpsz == '\0') goto LAB_10002027;
        param_2 = (char *)FUN_10001ed9(lpsz);
        uVar4 = FUN_10001ef7(hFile,lpsz,(undefined4 *)(param_2 + -(int)lpsz),(undefined4 *)0x0);
        if ((uVar4 == 0) ||
           (uVar4 = FUN_10001ef7(hFile,&DAT_1001411c,(undefined4 *)0x2,(undefined4 *)0x0),
           uVar4 == 0)) goto LAB_10002020;
        if ((*param_2 == '\0') || (param_2 == (char *)0x0)) goto LAB_10002027;
      }
      puVar6 = (undefined4 *)0x0;
      puVar3 = (undefined4 *)lstrlenA(param_1);
      uVar4 = FUN_10001ef7(hFile,param_1,puVar3,puVar6);
      if (uVar4 != 0) goto LAB_10001fc7;
LAB_10002020:
      local_8 = 1;
LAB_10002027:
      BVar5 = CloseHandle(hFile);
      if (BVar5 != 0) {
        return local_8 == 0;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}



void FUN_10002045(void)

{
  FUN_10001f34(&DAT_1001411c,&DAT_10017d5c);
  return;
}



int FUN_10002057(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 5;
  }
  iVar2 = FUN_10001e59();
  return (-(uint)(iVar2 != 0) & 0xfffffffa) + 6;
}



undefined4 __cdecl FUN_10002073(LPCSTR param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined3 extraout_var;
  LPSTR pCVar3;
  undefined4 uVar4;
  
  puVar2 = FUN_10001e15();
  if (param_1 == (LPCSTR)0x0) {
    uVar4 = 1;
  }
  else {
    bVar1 = FUN_10001e2b();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar4 = 5;
    }
    else if (*(int *)(puVar2 + 0x58) < 0x14) {
      pCVar3 = FUN_10003448(param_1);
      if (pCVar3 != (LPSTR)0x0) {
        *(LPSTR *)(puVar2 + *(int *)(puVar2 + 0x58) * 4 + 8) = pCVar3;
        *(int *)(puVar2 + 0x58) = *(int *)(puVar2 + 0x58) + 1;
        return 0;
      }
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}



undefined4 __cdecl FUN_100020be(LPCSTR param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  LPSTR pCVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar4 = 1;
  }
  else {
    bVar1 = FUN_10001e2b();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar4 = 5;
    }
    else {
      pCVar2 = FUN_10003448(param_1);
      if (pCVar2 != (LPSTR)0x0) {
        puVar3 = (undefined4 *)FUN_10001e15();
        FUN_10003470((HLOCAL)*puVar3);
        puVar3 = (undefined4 *)FUN_10001e15();
        *puVar3 = pCVar2;
        return 0;
      }
      uVar4 = 2;
    }
  }
  return uVar4;
}



undefined4 __cdecl FUN_10002104(LPCSTR param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined3 extraout_var;
  LPSTR pCVar3;
  undefined3 extraout_var_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  int local_c;
  int local_8;
  
  puVar2 = FUN_10001e15();
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar5 = 5;
  }
  else {
    if (param_1 == (LPCSTR)0x0) {
      param_1 = &DAT_10017d5c;
    }
    local_8 = 0;
    if (0 < *(int *)(puVar2 + 0x58)) {
      puVar4 = (undefined4 *)(puVar2 + 8);
      do {
        local_14 = *puVar4;
        local_18 = &DAT_10014124;
        local_10 = &DAT_10014120;
        pCVar3 = FUN_10001e7b((int *)&local_18,3);
        if (pCVar3 == (LPSTR)0x0) {
          return 2;
        }
        bVar1 = FUN_10001f34(param_1,pCVar3);
        local_c = CONCAT31(extraout_var_00,bVar1);
        FUN_10003470(pCVar3);
        if (local_c == 0) {
          return 4;
        }
        local_8 = local_8 + 1;
        puVar4 = puVar4 + 1;
      } while (local_8 < *(int *)(puVar2 + 0x58));
    }
    uVar5 = 0;
  }
  return uVar5;
}



// WARNING: Removing unreachable block (ram,0x100021c9)

undefined4 __cdecl FUN_10002199(LPCSTR param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  LPSTR pCVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  LPCSTR local_18;
  int local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)FUN_10001e15();
  if (param_2 == 0) {
    uVar4 = 6;
  }
  else {
    if (param_1 == (LPCSTR)0x0) {
      param_1 = &DAT_10017d5c;
    }
    local_14 = param_2;
    local_10 = *puVar2;
    local_8 = puVar2[1];
    local_c = &DAT_10014128;
    local_18 = param_1;
    pCVar3 = FUN_10001e7b((int *)&local_18,5);
    if (pCVar3 == (LPSTR)0x0) {
      uVar4 = 2;
    }
    else {
      bVar1 = FUN_10001f34(&DAT_10017d5c,pCVar3);
      FUN_10003470(pCVar3);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        uVar4 = 4;
      }
      else {
        uVar4 = FUN_10002104(param_1);
      }
    }
  }
  return uVar4;
}



int FUN_10002223(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 5;
  }
  iVar2 = FUN_10002199(&DAT_10017d5c,0x1001412c);
  if (iVar2 == 0) {
    iVar2 = FUN_10002045();
    if (iVar2 != 0) {
      iVar2 = FUN_10001e59();
      return (-(uint)(iVar2 != 0) & 0xfffffffa) + 6;
    }
    iVar2 = 4;
  }
  FUN_10001e59();
  return iVar2;
}



int __cdecl FUN_1000226e(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  LPSTR pCVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined *local_18;
  int local_14;
  undefined *local_10;
  int local_c;
  undefined *local_8;
  
  local_18 = &DAT_1001413c;
  local_14 = param_1;
  local_10 = &DAT_10014138;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (char *)0x0)) {
    return 1;
  }
  pCVar2 = FUN_10001e7b((int *)&local_18,3);
  if (pCVar2 == (LPSTR)0x0) {
LAB_100022ff:
    iVar3 = 2;
  }
  else {
    bVar1 = FUN_10001f34(pCVar2,param_3);
    FUN_10003470(pCVar2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      return 4;
    }
    bVar1 = FUN_10001e2b();
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      FUN_10001e15();
      local_c = param_2;
      local_8 = &DAT_10014138;
      pCVar2 = FUN_10001e7b(&local_c,2);
      if (pCVar2 == (LPSTR)0x0) goto LAB_100022ff;
      iVar3 = FUN_10002199(&DAT_1001413c,(int)pCVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar3 = FUN_10002045();
    iVar3 = (-(uint)(iVar3 != 0) & 0xfffffffc) + 4;
  }
  return iVar3;
}



void __cdecl FUN_10002328(int param_1,int param_2,char *param_3)

{
  FUN_1000226e(param_1,param_2,param_3);
  return;
}



undefined4 __cdecl FUN_1000233d(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  int *piVar2;
  LPSTR pCVar3;
  undefined4 uVar4;
  
  if ((param_1 == (LPCSTR)0x0) || (param_2 == (LPCSTR)0x0)) {
    uVar4 = 1;
  }
  else {
    iVar1 = FUN_10001e37();
    if (iVar1 == 0) {
      uVar4 = 3;
    }
    else {
      piVar2 = (int *)FUN_10001e15();
      pCVar3 = FUN_10003448(param_1);
      *piVar2 = (int)pCVar3;
      pCVar3 = FUN_10003448(param_2);
      piVar2[1] = (int)pCVar3;
      if ((*piVar2 != 0) && (pCVar3 != (LPSTR)0x0)) {
        return 0;
      }
      FUN_10001e59();
      uVar4 = 2;
    }
  }
  return uVar4;
}



undefined4 __cdecl FUN_10002394(LPCSTR param_1)

{
  HANDLE hObject;
  BOOL BVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar3 = 1;
  }
  else {
    hObject = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if ((hObject != (HANDLE)0xffffffff) && (BVar1 = CloseHandle(hObject), BVar1 != 0)) {
      pCVar2 = FUN_10003448(param_1);
      if (pCVar2 == (LPSTR)0x0) {
        return 2;
      }
      FUN_10003470(DAT_100180f8);
      DAT_100180f8 = pCVar2;
      return 0;
    }
    uVar3 = 7;
  }
  return uVar3;
}



undefined4 FUN_100023f6(void)

{
  FUN_10003470(DAT_100180f8);
  DAT_100180f8 = (HLOCAL)0x0;
  return 0;
}



undefined4 __cdecl FUN_1000240c(LPCSTR param_1,char *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_10001f34(param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 4;
  }
  FUN_10002045();
  return 0;
}



undefined4 __cdecl FUN_1000242b(int param_1,undefined4 param_2)

{
  LPSTR pCVar1;
  undefined4 uVar2;
  int local_10;
  undefined *local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_8 = param_2;
  local_c = &DAT_10014128;
  pCVar1 = FUN_10001e7b(&local_10,3);
  if (pCVar1 == (LPSTR)0x0) {
    uVar2 = 2;
  }
  else {
    uVar2 = FUN_1000240c(s_CONFIG__10014144,pCVar1);
    FUN_10003470(pCVar1);
  }
  return uVar2;
}



void __cdecl FUN_1000247a(char *param_1)

{
  FUN_1000240c(s_NOTE__10014150,param_1);
  return;
}



void SyncShell(LPSTR param_1,WORD param_2)

{
                    // 0x248b  17  SyncShell
  FUN_100033bc(param_1,param_2);
  return;
}



undefined4 DLLSelfRegister(LPCSTR param_1)

{
  HRESULT HVar1;
  DWORD DVar2;
  BOOL BVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  int iVar5;
  undefined4 uVar6;
  CHAR local_210 [260];
  CHAR local_10c [260];
  int local_8;
  
                    // 0x249d  5  DLLSelfRegister
  SetErrorMode(0x8000);
  HVar1 = OleInitialize((LPVOID)0x0);
  if (HVar1 < 0) {
    uVar6 = 2;
  }
  else {
    DVar2 = GetCurrentDirectoryA(0x104,local_210);
    FUN_10003528(param_1,local_10c);
    BVar3 = SetCurrentDirectoryA(local_10c);
    if ((BVar3 == 0) || (DVar2 == 0)) {
      local_8 = 0;
    }
    else {
      local_8 = 1;
    }
    uVar6 = 3;
    hModule = LoadLibraryA(param_1);
    if (hModule != (HMODULE)0x0) {
      uVar6 = 4;
      pFVar4 = GetProcAddress(hModule,s_DllRegisterServer_10014158);
      if (pFVar4 != (FARPROC)0x0) {
        uVar6 = 5;
        iVar5 = (*pFVar4)();
        if (-1 < iVar5) {
          uVar6 = 0;
        }
      }
      FreeLibrary(hModule);
    }
    if (local_8 != 0) {
      SetCurrentDirectoryA(local_210);
    }
    OleUninitialize();
  }
  return uVar6;
}



undefined4 __cdecl
FUN_10002566(HINSTANCE param_1,UINT param_2,undefined4 *param_3,undefined4 *param_4)

{
  HLOCAL hMem;
  LPCSTR lpBuffer;
  int iVar1;
  HLOCAL hMem_00;
  LPSTR lpString1;
  
  hMem = LocalAlloc(2,0x200);
  if (hMem != (HLOCAL)0x0) {
    lpBuffer = (LPCSTR)LocalLock(hMem);
    iVar1 = LoadStringA(param_1,param_2,lpBuffer,0x200);
    if (iVar1 == 0x200) {
      lpBuffer[0x1ff] = '\0';
    }
    hMem_00 = LocalAlloc(2,iVar1 + 1);
    if (hMem_00 != (HLOCAL)0x0) {
      lpString1 = (LPSTR)LocalLock(hMem_00);
      *param_4 = lpString1;
      lstrcpyA(lpString1,lpBuffer);
    }
    LocalUnlock(hMem);
    LocalFree(hMem);
    if (hMem_00 != (HLOCAL)0x0) {
      *param_3 = hMem_00;
      return 1;
    }
  }
  MessageBoxA((HWND)0x0,s_Insufficient_memory_available_to_1001416c,s_Setup_100141a0,0x40);
  return 0;
}



bool __cdecl FUN_100025fd(HINSTANCE param_1)

{
  int iVar1;
  
  iVar1 = FUN_10002566(param_1,0x5dc,&DAT_10018108,&DAT_10019a28);
  if (iVar1 != 0) {
    iVar1 = FUN_10002566(param_1,0x5dd,&DAT_10018100,&DAT_10019a1c);
    if (iVar1 != 0) {
      iVar1 = FUN_10002566(param_1,0x5de,&DAT_10018104,&DAT_10019a20);
      return iVar1 != 0;
    }
  }
  return false;
}



void FUN_1000265e(void)

{
  FUN_10002683(DAT_10018108);
  FUN_10002683(DAT_10018100);
  FUN_10002683(DAT_10018104);
  return;
}



void __cdecl FUN_10002683(HLOCAL param_1)

{
  if (param_1 != (HLOCAL)0x0) {
    LocalUnlock(param_1);
    LocalFree(param_1);
  }
  return;
}



int RegisterTLB(ITypeLib *param_1)

{
  int iVar1;
  
                    // 0x269c  15  RegisterTLB
  iVar1 = FUN_100029e8(param_1);
  return -(uint)(iVar1 != 0);
}



void GetClsidFromActXFile(LPCSTR param_1,PCNZCH param_2,LPSTR param_3)

{
                    // 0x26ad  9  GetClsidFromActXFile
  FUN_10002a97(param_1,param_2,param_3);
  return;
}



int _SetTime_8(LPCSTR param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  _FILETIME local_24;
  _FILETIME local_1c;
  _FILETIME local_14;
  int local_c;
  int local_8;
  
                    // 0x26c4  16  _SetTime@8
  local_8 = -1;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (pvVar1 != (HANDLE)0xffffffff) {
    local_c = GetFileTime(pvVar1,&local_24,&local_1c,&local_14);
    CloseHandle(pvVar1);
    if (local_c != 0) {
      pvVar1 = CreateFileA(param_2,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (pvVar1 == (HANDLE)0xffffffff) {
        local_8 = -1;
      }
      else {
        BVar2 = SetFileTime(pvVar1,&local_24,&local_1c,&local_14);
        local_8 = (BVar2 != 0) - 1;
        CloseHandle(pvVar1);
      }
    }
  }
  return local_8;
}



bool fCreateShellLink(byte *param_1,LPCSTR param_2,LPCSTR param_3,int param_4,int param_5,
                     byte *param_6)

{
  bool bVar1;
  
                    // 0x2768  18  fCreateShellLink
  if ((((param_1 == (byte *)0x0) || (param_2 == (LPCSTR)0x0)) || (param_4 == 0)) ||
     (param_6 == (byte *)0x0)) {
    bVar1 = false;
  }
  else {
    if (*param_1 == 0) {
      param_1 = (byte *)0x0;
    }
    bVar1 = FUN_10002e8e(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return bVar1;
}



BOOL fRemoveShellLink(byte *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  
                    // 0x27a9  19  fRemoveShellLink
  if ((param_1 == (byte *)0x0) || (param_2 == (LPCSTR)0x0)) {
    BVar1 = 0;
  }
  else {
    BVar1 = FUN_1000319a(param_1,param_2);
  }
  return BVar1;
}



int ExtractFileFromCab(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,int param_4,undefined4 param_5)

{
  HMODULE hLibModule;
  int iVar1;
  uint uVar2;
  CHAR local_724 [520];
  CHAR local_51c [260];
  CHAR local_418 [520];
  CHAR local_210 [264];
  CHAR local_108 [260];
  
                    // 0x27cd  8  ExtractFileFromCab
  DAT_10019a24 = param_5;
  hLibModule = LoadLibraryA(s_vb6stkit_dll_100141a8);
  FUN_100025fd(hLibModule);
  GetWindowsDirectoryA(local_418,0x104);
  FUN_10003482(local_418);
  lstrcpyA(local_108,local_418);
  iVar1 = lstrlenA(local_108);
  FUN_100034ec(param_1,local_108 + iVar1);
  _memset(local_210,0,0x105);
  lstrcpyA(local_210,param_2);
  FUN_100034ec(param_3,local_51c);
  FUN_10003528(param_3,local_724);
  FUN_1000290c();
  uVar2 = FUN_1000131c(0,local_108,1,param_4,local_418,local_724,local_210,local_51c,local_418,
                       local_724);
  FUN_1000290c();
  FUN_1000265e();
  FreeLibrary(hLibModule);
  return ((short)uVar2 != 0xe) - 1;
}



undefined4 FUN_100028f4(void)

{
  return DAT_10019a24;
}



undefined4 FUN_100028fa(void)

{
  return DAT_10019a1c;
}



undefined4 FUN_10002900(void)

{
  return DAT_10019a20;
}



undefined4 FUN_10002906(void)

{
  return DAT_10019a28;
}



void FUN_1000290c(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1);
    if (BVar1 == 0) break;
    TranslateMessage(&local_20);
    DispatchMessageA(&local_20);
  }
  return;
}



bool fWithinAction(void)

{
  return 0 < DAT_100180fc;
                    // 0x294e  20  fWithinAction
}



int AbortAction(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 5;
  }
  iVar2 = FUN_10001e59();
  return (-(uint)(iVar2 != 0) & 0xfffffffa) + 6;
}



void AddActionNote(LPCSTR param_1)

{
                    // 0x2958  2  AddActionNote
  FUN_10002073(param_1);
  return;
}



void ChangeActionKey(LPCSTR param_1)

{
                    // 0x2965  3  ChangeActionKey
  FUN_100020be(param_1);
  return;
}



int CommitAction(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_10001e2b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 5;
  }
  iVar2 = FUN_10002199(&DAT_10017d5c,0x1001412c);
  if (iVar2 == 0) {
    iVar2 = FUN_10002045();
    if (iVar2 != 0) {
      iVar2 = FUN_10001e59();
      return (-(uint)(iVar2 != 0) & 0xfffffffa) + 6;
    }
    iVar2 = 4;
  }
  FUN_10001e59();
  return iVar2;
}



void LogError(int param_1,int param_2,char *param_3)

{
                    // 0x2977  11  LogError
  FUN_1000226e(param_1,param_2,param_3);
  return;
}



void LogWarning(int param_1,int param_2,char *param_3)

{
                    // 0x298e  13  LogWarning
  FUN_10002328(param_1,param_2,param_3);
  return;
}



void NewAction(LPCSTR param_1,LPCSTR param_2)

{
                    // 0x29a5  14  NewAction
  FUN_1000233d(param_1,param_2);
  return;
}



void EnableLogging(LPCSTR param_1)

{
                    // 0x29b7  7  EnableLogging
  FUN_10002394(param_1);
  return;
}



undefined4 DisableLogging(void)

{
  FUN_10003470(DAT_100180f8);
  DAT_100180f8 = (HLOCAL)0x0;
  return 0;
                    // 0x29c4  6  DisableLogging
}



void LogNote(char *param_1)

{
                    // 0x29c9  12  LogNote
  FUN_1000247a(param_1);
  return;
}



void LogConfig(int param_1,undefined4 param_2)

{
                    // 0x29d6  10  LogConfig
  FUN_1000242b(param_1,param_2);
  return;
}



undefined4 __cdecl FUN_100029e8(ITypeLib *param_1)

{
  ITypeLib *lpMultiByteStr;
  int iVar1;
  HRESULT HVar2;
  char *pcVar3;
  CHAR local_414 [520];
  WCHAR local_20c [260];
  
  lpMultiByteStr = param_1;
  iVar1 = FUN_1000b730((LPCSTR)param_1,0);
  if (iVar1 == -1) {
    wsprintfA(local_414,s_Cannot_access_file___s_in_fRegis_10014210,lpMultiByteStr);
  }
  else {
    MultiByteToWideChar(0,0,(LPCSTR)lpMultiByteStr,-1,local_20c,0x104);
    HVar2 = LoadTypeLib(local_20c,&param_1);
    if (HVar2 < 0) {
      pcVar3 = s_LoadTypeLib_of__s_failed____lx_100141f0;
    }
    else {
      HVar2 = RegisterTypeLib(param_1,local_20c,(LPCOLESTR)0x0);
      (*param_1->lpVtbl->Release)(param_1);
      if (-1 < HVar2) {
        return 1;
      }
      pcVar3 = s_RegisterTypeLib_of__s_failed_____100141cc;
    }
    wsprintfA(local_414,pcVar3,lpMultiByteStr,HVar2);
  }
  return 0;
}



LPCSTR __cdecl FUN_10002a97(LPCSTR param_1,PCNZCH param_2,LPSTR param_3)

{
  LSTATUS LVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined4 *puVar4;
  char *pcVar5;
  BYTE *lpString2;
  LPCSTR pCVar6;
  HKEY hKey;
  WCHAR local_830 [260];
  BYTE local_628 [260];
  BYTE local_524 [260];
  OLECHAR local_420 [80];
  CHAR local_380 [520];
  CHAR local_178 [260];
  CHAR local_74;
  undefined4 local_73;
  LPCSTR local_24;
  DWORD local_20;
  ITypeLib *local_1c;
  HKEY local_18;
  LPCSTR local_14;
  TYPEATTR *local_10;
  HKEY local_c;
  ITypeInfo *local_8;
  
  local_74 = '\0';
  puVar4 = &local_73;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_1c = (ITypeLib *)0x0;
  *(undefined2 *)puVar4 = 0;
  local_8 = (ITypeInfo *)0x0;
  local_10 = (TYPEATTR *)0x0;
  local_18 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  iVar2 = FUN_1000b730(param_1,0);
  if (iVar2 == -1) {
    wsprintfA(local_380,s_Cannot_access_file___s_in_fRegis_10014210,param_1);
    pCVar3 = (LPCSTR)0x80029c4a;
  }
  else {
    MultiByteToWideChar(0,0,param_1,-1,local_830,0x104);
    pCVar3 = (LPCSTR)LoadTypeLib(local_830,&local_1c);
    if ((int)pCVar3 < 0) {
      if (((int)pCVar3 < -0x7ffd7fe8) ||
         ((((-0x7ffd7fe7 < (int)pCVar3 && (pCVar3 != (LPCSTR)0x80028029)) &&
           (pCVar3 != (LPCSTR)0x8002802e)) && (pCVar3 != (LPCSTR)0x80029c4a)))) {
        pcVar5 = s_LoadTypeLib_of__s_failed_to_load_100143b4;
        pCVar6 = param_1;
        param_1 = pCVar3;
LAB_10002e20:
        wsprintfA(local_380,pcVar5,pCVar6,param_1);
      }
      else {
        wsprintfA(local_380,s_LoadTypeLib_of__s_failed_to_find_100143ec,param_1,pCVar3);
        pCVar3 = (LPCSTR)0x80029c4a;
      }
    }
    else {
      local_24 = (LPCSTR)(*local_1c->lpVtbl->GetTypeInfoCount)(local_1c);
      local_14 = (LPCSTR)0x0;
      if (local_24 != (LPCSTR)0x0) {
        do {
          pCVar3 = (LPCSTR)(*local_1c->lpVtbl->GetTypeInfo)(local_1c,(UINT)local_14,&local_8);
          if ((int)pCVar3 < 0) {
            if (pCVar3 == (LPCSTR)0x8002802b) {
              pcVar5 = s_Index_is_outside_the_range_of_0_t_1001431c;
              pCVar6 = local_14;
              goto LAB_10002e20;
            }
            pcVar5 = s_problem_getting_typeinfo_for_ind_100142dc;
LAB_10002e4c:
            wsprintfA(local_380,pcVar5,local_14,param_1,pCVar3);
            goto LAB_10002ddb;
          }
          pCVar3 = (LPCSTR)(*local_8->lpVtbl->GetTypeAttr)(local_8,&local_10);
          if ((int)pCVar3 < 0) {
            pcVar5 = s_problem_getting_typeAttr_for_ind_1001429c;
            goto LAB_10002e4c;
          }
          if (local_10->typekind == TKIND_COCLASS) {
            iVar2 = StringFromGUID2(&local_10->guid,local_420,0x50);
            if (iVar2 == 0) {
              wsprintfA(local_380,s_Couldn_t_convert_clsid_to_string_1001423c,local_14,param_1,
                        pCVar3);
              pCVar3 = (LPCSTR)0x8007000e;
              goto LAB_10002ddb;
            }
            (*local_8->lpVtbl->ReleaseTypeAttr)(local_8,local_10);
            local_10 = (TYPEATTR *)0x0;
            (*local_8->lpVtbl->Release)(local_8);
            local_8 = (ITypeInfo *)0x0;
            lstrcpyA(local_178,s_CLSID_100143ac);
            lstrcatA(local_178,&DAT_10014108);
            WideCharToMultiByte(0,0,local_420,-1,param_3,0x50,(LPCSTR)0x0,(LPBOOL)0x0);
            lstrcatA(local_178,param_3);
            iVar2 = lstrlenA(&local_74);
            if (iVar2 == 0) {
              lstrcpyA(&local_74,param_3);
            }
            LVar1 = RegOpenKeyExA((HKEY)0x80000000,local_178,0,0x20019,&local_18);
            if (LVar1 != 0) goto LAB_10002d88;
            if (param_2 == (PCNZCH)0x0) {
              LVar1 = RegOpenKeyExA(local_18,s_InprocServer32_10014394,0,0x20019,&local_c);
              if ((LVar1 == 0) ||
                 (LVar1 = RegOpenKeyExA(local_18,s_LocalServer32_10014384,0,0x20019,&local_c),
                 LVar1 == 0)) {
                local_20 = 0x104;
                LVar1 = RegQueryValueExA(local_c,&DAT_10017d5c,(LPDWORD)0x0,(LPDWORD)0x0,local_628,
                                         &local_20);
                hKey = local_c;
                if (LVar1 == 0) {
                  RegCloseKey(local_c);
                  lpString2 = local_628;
                  pCVar3 = param_1;
                  goto LAB_10002d72;
                }
                goto LAB_10002d56;
              }
            }
            else {
              LVar1 = RegOpenKeyExA(local_18,s_ProgID_100143a4,0,0x20019,&local_c);
              hKey = local_18;
              if (LVar1 == 0) {
                local_20 = 0x104;
                LVar1 = RegQueryValueExA(local_c,&DAT_10017d5c,(LPDWORD)0x0,(LPDWORD)0x0,local_524,
                                         &local_20);
                if (LVar1 == 0) {
                  RegCloseKey(local_c);
                  lpString2 = local_524;
                  pCVar3 = param_2;
LAB_10002d72:
                  iVar2 = CompareStringA(0x800,1,pCVar3,-1,(PCNZCH)lpString2,-1);
                  if (iVar2 != 2) goto LAB_10002d88;
                  pCVar3 = (LPCSTR)0x0;
                  goto LAB_10002ddb;
                }
                RegCloseKey(local_18);
                RegCloseKey(local_c);
              }
              else {
LAB_10002d56:
                RegCloseKey(hKey);
              }
            }
          }
          else {
LAB_10002d88:
            if (local_10 != (TYPEATTR *)0x0) {
              (*local_8->lpVtbl->ReleaseTypeAttr)(local_8,local_10);
              local_10 = (TYPEATTR *)0x0;
            }
            if (local_8 != (ITypeInfo *)0x0) {
              (*local_8->lpVtbl->Release)(local_8);
              local_8 = (ITypeInfo *)0x0;
            }
          }
          local_14 = local_14 + 1;
        } while (local_14 < local_24);
      }
      pCVar3 = (LPCSTR)0x8002801d;
      iVar2 = lstrlenA(&local_74);
      if (iVar2 != 0) {
        lstrcpyA(param_3,&local_74);
      }
    }
  }
LAB_10002ddb:
  if (local_10 != (TYPEATTR *)0x0) {
    (*local_8->lpVtbl->ReleaseTypeAttr)(local_8,local_10);
  }
  if (local_8 != (ITypeInfo *)0x0) {
    (*local_8->lpVtbl->Release)(local_8);
  }
  if (local_1c != (ITypeLib *)0x0) {
    (*local_1c->lpVtbl->Release)(local_1c);
  }
  return pCVar3;
}



bool __cdecl
FUN_10002e8e(byte *param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,int param_5,
            byte *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  HRESULT HVar5;
  LPCSTR lpsz;
  WCHAR local_434 [262];
  char local_228 [264];
  CHAR local_120 [264];
  LPCSTR local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  local_18 = (LPCSTR)0x0;
  local_10 = 1;
  if (param_1 != (byte *)0x0) {
    uVar1 = FUN_1000a740(param_1,(byte *)s___Start_Menu__10014488);
    if (uVar1 == 0) {
      iVar2 = FUN_1000333d(local_120,param_5);
      if (iVar2 == 0) {
        return false;
      }
      local_10 = 0;
    }
    else {
      uVar1 = FUN_1000a740(param_1,(byte *)s___Programs__10014478);
      if (uVar1 == 0) {
        iVar2 = FUN_100032be(local_120,param_5);
        if (iVar2 == 0) {
          return false;
        }
        local_10 = 0;
      }
      else {
        uVar1 = FUN_1000a740(param_6,(byte *)s___Start_Menu__10014488);
        if (uVar1 == 0) {
          iVar2 = FUN_1000333d(local_120,param_5);
        }
        else {
          uVar1 = FUN_1000a740(param_6,(byte *)s___Programs__10014478);
          if (uVar1 != 0) goto LAB_10002f60;
          iVar2 = FUN_100032be(local_120,param_5);
        }
        if (iVar2 == 0) {
          return false;
        }
      }
    }
  }
LAB_10002f60:
  if (local_10 != 0) {
    if (param_1 == (byte *)0x0) goto LAB_10002fda;
    iVar2 = lstrlenA(local_120);
    iVar3 = lstrlenA((LPCSTR)param_1);
    if (0x104 < iVar2 + 1 + iVar3) {
      return false;
    }
    if (param_1 == (byte *)0x0) goto LAB_10002fda;
    lstrcatA(local_120,(LPCSTR)param_1);
    lstrcatA(local_120,&DAT_10014108);
  }
  if (param_1 != (byte *)0x0) {
    DVar4 = GetFileAttributesA(local_120);
    if (DVar4 == 0xffffffff) {
      return false;
    }
    if ((DVar4 & 0x10) == 0) {
      return false;
    }
  }
LAB_10002fda:
  iVar2 = lstrlenA(local_120);
  iVar3 = lstrlenA(param_2);
  if (iVar2 + iVar3 < 0x105) {
    lstrcatA(local_120,param_2);
    iVar2 = lstrlenA(local_120);
    if (iVar2 + 4 < 0x105) {
      lstrcatA(local_120,&DAT_10014470);
      DVar4 = GetFileAttributesA(local_120);
      if (DVar4 != 0xffffffff) {
        DeleteFileA(local_120);
      }
      HVar5 = CoCreateInstance((IID *)&DAT_10012310,(LPUNKNOWN)0x0,1,(IID *)&DAT_10012710,&local_14)
      ;
      if (-1 < HVar5) {
        iVar2 = (**(code **)*local_14)(local_14,&DAT_10012400,&local_8);
        (**(code **)(*local_14 + 8))(local_14);
        if (-1 < iVar2) {
          iVar2 = (**(code **)*local_8)(local_8,&DAT_10012700,&local_c);
          if (iVar2 < 0) {
            local_c = (int *)0x0;
          }
          else {
            iVar2 = (**(code **)(*local_8 + 0x50))(local_8,param_3);
            if (((-1 < iVar2) &&
                (iVar2 = (**(code **)(*local_8 + 0x2c))(local_8,param_4), -1 < iVar2)) &&
               (iVar2 = (**(code **)(*local_8 + 0x1c))(local_8,param_2), -1 < iVar2)) {
              lstrcpyA(local_228,param_3);
              lpsz = local_228;
              while (local_228[0] != '\0') {
                if (local_228[0] == '\\') {
                  local_18 = lpsz;
                }
                lpsz = CharNextA(lpsz);
                local_228[0] = *lpsz;
              }
              if (local_18 != (LPCSTR)0x0) {
                *local_18 = '\0';
              }
              iVar2 = (**(code **)(*local_8 + 0x24))(local_8,local_228);
              if (-1 < iVar2) {
                MultiByteToWideChar(0,0,local_120,-1,local_434,0x105);
                iVar2 = (**(code **)(*local_c + 0x18))(local_c,local_434,0);
                (**(code **)(*local_c + 8))(local_c);
                (**(code **)(*local_8 + 8))(local_8);
                return -1 < iVar2;
              }
            }
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
          }
        }
      }
    }
  }
  return false;
}



BOOL __cdecl FUN_1000319a(byte *param_1,LPCSTR param_2)

{
  BOOL BVar1;
  
  BVar1 = FUN_100031c7(param_1,param_2,1);
  if (BVar1 != 0) {
    return 1;
  }
  BVar1 = FUN_100031c7(param_1,param_2,0);
  return BVar1;
}



BOOL __cdecl FUN_100031c7(byte *param_1,LPCSTR param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  BOOL BVar5;
  CHAR local_10c [264];
  
  if (param_1 != (byte *)0x0) {
    uVar2 = FUN_1000a740(param_1,(byte *)s___Start_Menu__10014488);
    if (uVar2 == 0) {
      iVar3 = FUN_1000333d(local_10c,param_3);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_100032be(local_10c,param_3);
      if (iVar3 == 0) {
        return 0;
      }
      uVar2 = FUN_1000a740(param_1,(byte *)s___Programs__10014478);
      if (uVar2 != 0) {
        iVar3 = lstrlenA((LPCSTR)param_1);
        iVar4 = lstrlenA(local_10c);
        if (0x104 < iVar3 + 1 + iVar4) {
          return 0;
        }
        lstrcatA(local_10c,(LPCSTR)param_1);
        lstrcatA(local_10c,&DAT_10014108);
      }
    }
  }
  iVar3 = lstrlenA(local_10c);
  iVar4 = lstrlenA(param_2);
  if (iVar3 + 4 + iVar4 < 0x105) {
    lstrcatA(local_10c,param_2);
    lstrcatA(local_10c,&DAT_10014470);
    bVar1 = FUN_100034b3(local_10c);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      BVar5 = DeleteFileA(local_10c);
      return BVar5;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_100032be(LPCSTR param_1,int param_2)

{
  HRESULT HVar1;
  BOOL BVar2;
  int iVar3;
  IMalloc *local_c;
  LPCITEMIDLIST local_8;
  
  HVar1 = SHGetMalloc(&local_c);
  if (-1 < HVar1) {
    if (param_2 == 0) {
      iVar3 = 0x17;
    }
    else {
      iVar3 = 2;
    }
    HVar1 = SHGetSpecialFolderLocation((HWND)0x0,iVar3,&local_8);
    if ((-1 < HVar1) && (BVar2 = SHGetPathFromIDListA(local_8,param_1), -1 < BVar2)) {
      (*local_c->lpVtbl->Free)(local_c,local_8);
      iVar3 = lstrlenA(param_1);
      if (param_1[iVar3 + -2] != '\\') {
        iVar3 = lstrlenA(param_1);
        if (0x102 < iVar3) {
          return 0;
        }
        lstrcatA(param_1,&DAT_10014108);
      }
      return 1;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_1000333d(LPCSTR param_1,int param_2)

{
  HRESULT HVar1;
  BOOL BVar2;
  int iVar3;
  IMalloc *local_c;
  LPCITEMIDLIST local_8;
  
  HVar1 = SHGetMalloc(&local_c);
  if (-1 < HVar1) {
    if (param_2 == 0) {
      iVar3 = 0x16;
    }
    else {
      iVar3 = 0xb;
    }
    HVar1 = SHGetSpecialFolderLocation((HWND)0x0,iVar3,&local_8);
    if ((-1 < HVar1) && (BVar2 = SHGetPathFromIDListA(local_8,param_1), -1 < BVar2)) {
      (*local_c->lpVtbl->Free)(local_c,local_8);
      iVar3 = lstrlenA(param_1);
      if (param_1[iVar3 + -2] != '\\') {
        iVar3 = lstrlenA(param_1);
        if (0x102 < iVar3) {
          return 0;
        }
        lstrcatA(param_1,&DAT_10014108);
      }
      return 1;
    }
  }
  return 0;
}



int __cdecl FUN_100033bc(LPSTR param_1,WORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  _STARTUPINFOA local_5c;
  _PROCESS_INFORMATION local_18;
  DWORD local_8;
  
  _memset(&local_5c,0,0x44);
  local_5c.wShowWindow = param_2;
  local_5c.dwFlags = local_5c.dwFlags | 1;
  local_5c.cb = 0x44;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_5c,&local_18);
  if (((BVar1 == 0) || (DVar2 = WaitForSingleObject(local_18.hProcess,0xffffffff), DVar2 != 0)) ||
     (BVar1 = GetExitCodeProcess(local_18.hProcess,&local_8), BVar1 != 1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (local_8 != 0) - 1;
  }
  return iVar3;
}



void __cdecl FUN_1000343b(SIZE_T param_1)

{
  LocalAlloc(0x40,param_1);
  return;
}



LPSTR __cdecl FUN_10003448(LPCSTR param_1)

{
  int iVar1;
  LPSTR lpString1;
  
  iVar1 = lstrlenA(param_1);
  lpString1 = (LPSTR)FUN_1000343b(iVar1 + 1);
  if (lpString1 != (LPSTR)0x0) {
    lstrcpyA(lpString1,param_1);
  }
  return lpString1;
}



void __cdecl FUN_10003470(HLOCAL param_1)

{
  if (param_1 != (HLOCAL)0x0) {
    LocalFree(param_1);
  }
  return;
}



void __cdecl FUN_10003482(LPCSTR param_1)

{
  int iVar1;
  LPSTR pCVar2;
  LPCSTR lpszCurrent;
  
  iVar1 = lstrlenA(param_1);
  lpszCurrent = param_1 + iVar1;
  pCVar2 = CharPrevA(param_1,lpszCurrent);
  if ((pCVar2 == lpszCurrent) || ((*pCVar2 != '\\' && (*pCVar2 != '/')))) {
    *lpszCurrent = '\\';
    lpszCurrent[1] = '\0';
  }
  return;
}



bool __cdecl FUN_100034b3(LPCSTR param_1)

{
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_144;
  
  hFindFile = FindFirstFileA(param_1,&local_144);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  return hFindFile != (HANDLE)0xffffffff && ((byte)local_144.dwFileAttributes & 0x10) == 0;
}



void __cdecl FUN_100034ec(LPCSTR param_1,LPSTR param_2)

{
  int iVar1;
  LPCSTR lpString2;
  
  iVar1 = lstrlenA(param_1);
  for (lpString2 = param_1 + iVar1 + -1;
      ((*lpString2 != '\\' && (*lpString2 != ':')) && (param_1 < lpString2));
      lpString2 = CharPrevA(param_1,lpString2)) {
  }
  if (lpString2 != param_1) {
    lpString2 = lpString2 + 1;
  }
  lstrcpyA(param_2,lpString2);
  return;
}



void __cdecl FUN_10003528(LPCSTR param_1,LPSTR param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR lpszCurrent;
  LPSTR pCVar3;
  
  lstrcpyA(param_2,param_1);
  iVar2 = lstrlenA(param_2);
  lpszCurrent = param_2 + iVar2 + -1;
  cVar1 = param_2[iVar2 + -1];
  while ((cVar1 != '\\' && (cVar1 != ':'))) {
    if (lpszCurrent == param_2) goto LAB_10003579;
    lpszCurrent = CharPrevA(param_2,lpszCurrent);
    cVar1 = *lpszCurrent;
  }
  pCVar3 = CharPrevA(param_2,lpszCurrent);
  if ((*pCVar3 != '\\') && (*pCVar3 != '/')) {
    *lpszCurrent = '\\';
    lpszCurrent = lpszCurrent + 1;
  }
LAB_10003579:
  *lpszCurrent = '\0';
  return;
}



undefined4 * __cdecl
FUN_10003580(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 *param_9)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)param_1)(0x804);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_10004d90(param_9,5,0);
    return (undefined4 *)0x0;
  }
  puVar1[1] = param_2;
  puVar1[2] = param_1;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  puVar1[6] = param_6;
  puVar1[7] = param_7;
  puVar1[8] = param_8;
  *puVar1 = param_9;
  *(undefined2 *)((int)puVar1 + 0xb2) = 0xf;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x28] = 0xffff;
  puVar1[0x2a] = 0xffff;
  puVar1[0x29] = 0xffff;
  puVar1[0x22] = 0xffffffff;
  puVar1[0x21] = 0xffffffff;
  return puVar1;
}



undefined4 __cdecl FUN_10003620(undefined4 *param_1)

{
  FUN_10004720(0xf,param_1);
  if (param_1[0x13] != 0) {
    (*(code *)param_1[1])(param_1[0x13]);
  }
  if (param_1[0x11] != 0) {
    (*(code *)param_1[1])(param_1[0x11]);
  }
  if (param_1[0x12] != 0) {
    (*(code *)param_1[1])(param_1[0x12]);
  }
  if (param_1[0x22] != -1) {
    (*(code *)param_1[6])(param_1[0x22]);
  }
  if (param_1[0x21] != -1) {
    (*(code *)param_1[6])(param_1[0x21]);
  }
  (*(code *)param_1[1])(param_1);
  return 1;
}



undefined4 __cdecl
FUN_10003690(undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,undefined *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_4;
  
  local_4 = 0;
  puVar1 = param_1 + 0x1ef;
  param_1[0xe] = param_7;
  param_1[9] = param_5;
  uVar6 = 0xffffffff;
  param_1[10] = param_6;
  *(undefined2 *)((int)param_1 + 0xae) = 0;
  pcVar8 = param_3;
  do {
    pcVar9 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar9 + -uVar6;
  pcVar9 = (char *)((int)param_1 + 0x5b9);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  bVar4 = FUN_10003940(param_1,param_2,0,-1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    uVar6 = 0xffffffff;
    param_1[0x27] = 0;
    param_1[0x24] = 0xffff;
    do {
      pcVar8 = param_3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = param_3 + 1;
      cVar2 = *param_3;
      param_3 = pcVar8;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar8 + -uVar6;
    pcVar9 = (char *)((int)param_1 + 0x5b9);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar5 = FUN_10004650(param_1);
    while (iVar5 != 0) {
      do {
        sVar3 = *(short *)(param_1 + 0x2b);
        *(short *)(param_1 + 0x2b) = sVar3 + -1;
        if (sVar3 == 0) {
          local_4 = 1;
          goto LAB_100038ee;
        }
        iVar5 = FUN_100043d0(param_1);
        if (iVar5 == 0) goto LAB_100038ee;
        param_1[0x1f0] = param_1 + 0x2d;
        *puVar1 = param_1[0x1d];
        param_1[0x1f1] = (int)param_1 + 0x1b5;
        param_1[0x1f2] = (int)param_1 + 0x2b6;
        *(undefined2 *)(param_1 + 0x1f5) = *(undefined2 *)((int)param_1 + 0x7e);
        *(undefined2 *)((int)param_1 + 0x7d6) = *(undefined2 *)(param_1 + 0x20);
        *(undefined2 *)(param_1 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x82);
        param_1[499] = param_1[0xe];
        *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x1f);
        if ((*(ushort *)(param_1 + 0x1f) & 0xfffd) == 0xfffd) {
          if (param_1[0x27] == 0) {
            iVar5 = (*(code *)param_5)(1,puVar1);
            if (iVar5 == -1) {
              FUN_10004d90((undefined4 *)*param_1,0xb,0);
              goto LAB_100038ee;
            }
          }
          else {
            iVar5 = (*(code *)param_5)(2);
            param_1[0x23] = iVar5;
            if (iVar5 == -1) {
              FUN_10004d90((undefined4 *)*param_1,0xb,0);
              goto LAB_100038ee;
            }
            if (iVar5 == 0) {
              if ((*(ushort *)(param_1 + 0x1f) & 0xfffe) == 0xfffe) {
                *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + 1;
              }
            }
            else {
              iVar5 = FUN_10003d80(param_1);
joined_r0x1000387f:
              if (iVar5 == 0) goto LAB_100038ee;
            }
          }
        }
        else if (param_1[0x27] == 0) {
          iVar5 = (*(code *)param_5)(2,puVar1);
          param_1[0x23] = iVar5;
          if (iVar5 == -1) {
            FUN_10004d90((undefined4 *)*param_1,0xb,0);
            goto LAB_100038ee;
          }
          if (iVar5 != 0) {
            iVar5 = FUN_10003d80(param_1);
            goto joined_r0x1000387f;
          }
          if ((*(ushort *)(param_1 + 0x1f) & 0xfffe) == 0xfffe) {
            *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + 1;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x2b) = 0;
        }
      } while (*(short *)(param_1 + 0x2b) != 0);
      iVar5 = FUN_10004650(param_1);
    }
  }
LAB_100038ee:
  if (param_1[0x22] != -1) {
    (*(code *)param_1[6])(param_1[0x22]);
  }
  if (param_1[0x21] != -1) {
    (*(code *)param_1[6])(param_1[0x21]);
  }
  param_1[0x22] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return local_4;
}



bool __cdecl FUN_10003940(undefined4 *param_1,char *param_2,short param_3,short param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  uint uStack_28;
  int aiStack_24 [6];
  uint uStack_c;
  short sStack_4;
  short sStack_2;
  
  uVar4 = 0xffffffff;
  pcVar1 = (char *)((int)param_1 + 0x6ba);
  pcVar7 = (char *)((int)param_1 + 0x5b9);
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = pcVar1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar7;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar10 = pcVar1;
  do {
    pcVar9 = pcVar10;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar2 != '\0');
  pcVar7 = pcVar7 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar10 + 1;
  }
  iVar6 = (*(code *)param_1[3])(pcVar1,0x8000,0x180);
  param_1[0x22] = iVar6;
  if (iVar6 != -1) {
    iVar6 = (*(code *)param_1[3])(pcVar1,0x8000,0x180);
    param_1[0x21] = iVar6;
    if (iVar6 != -1) {
      iVar6 = (*(code *)param_1[4])(param_1[0x22],aiStack_24,0x24);
      if (iVar6 != 0x24) {
        FUN_10004d90((undefined4 *)*param_1,2,0);
        return false;
      }
      if (aiStack_24[0] != 0x4643534d) {
        FUN_10004d90((undefined4 *)*param_1,2,0);
        return false;
      }
      if ((short)uStack_c != 0x103) {
        FUN_10004d90((undefined4 *)*param_1,3,uStack_c & 0xffff);
        return false;
      }
      if ((param_4 != -1) && ((sStack_4 != param_3 || (sStack_2 != param_4)))) {
        FUN_10004d90((undefined4 *)*param_1,10,0);
        return false;
      }
      piVar8 = aiStack_24;
      piVar11 = param_1 + 0x14;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
      }
      uStack_28 = 0;
      if ((*(byte *)((int)param_1 + 0x6e) & 4) != 0) {
        iVar6 = (*(code *)param_1[4])(param_1[0x22],&uStack_28,4);
        if (iVar6 != 4) {
          FUN_10004d90((undefined4 *)*param_1,2,0);
          return false;
        }
        if (param_1[0x28] == 0xffff) {
          uVar4 = uStack_28 & 0xffff;
          param_1[0x28] = uVar4;
          if (uVar4 != 0) {
            iVar6 = (*(code *)param_1[2])(uVar4);
            param_1[0x13] = iVar6;
            if (iVar6 == 0) {
              FUN_10004d90((undefined4 *)*param_1,5,0);
              return false;
            }
          }
        }
        iVar6 = param_1[0x28];
        if ((iVar6 != 0) &&
           (iVar3 = (*(code *)param_1[4])(param_1[0x22],param_1[0x13],iVar6), iVar3 != iVar6)) {
          FUN_10004d90((undefined4 *)*param_1,2,0);
          return false;
        }
      }
      iVar6 = (uStack_28 >> 0x10 & 0xff) + 8;
      if (param_1[0x11] == 0) {
        param_1[0x29] = iVar6;
        iVar6 = (*(code *)param_1[2])(iVar6);
        param_1[0x11] = iVar6;
        if (iVar6 == 0) {
          FUN_10004d90((undefined4 *)*param_1,5,0);
          return false;
        }
      }
      else if (param_1[0x29] != iVar6) {
        FUN_10004d90((undefined4 *)*param_1,9,0);
        return false;
      }
      iVar6 = (uStack_28 >> 0x18) + 8;
      if (param_1[0x12] == 0) {
        param_1[0x2a] = iVar6;
        iVar6 = (*(code *)param_1[2])(iVar6);
        param_1[0x12] = iVar6;
        if (iVar6 == 0) {
          FUN_10004d90((undefined4 *)*param_1,5,0);
          return false;
        }
      }
      else if (param_1[0x2a] != iVar6) {
        FUN_10004d90((undefined4 *)*param_1,9,0);
        return false;
      }
      if ((*(byte *)((int)param_1 + 0x6e) & 1) == 0) {
        *(undefined1 *)((int)param_1 + 0x1b5) = 0;
        *(undefined1 *)((int)param_1 + 0x2b6) = 0;
      }
      else {
        iVar6 = FUN_10004590((char *)((int)param_1 + 0x1b5),0x100,param_1);
        if (iVar6 == 0) {
          return false;
        }
        iVar6 = FUN_10004590((char *)((int)param_1 + 0x2b6),0x100,param_1);
        if (iVar6 == 0) {
          return false;
        }
      }
      if ((*(byte *)((int)param_1 + 0x6e) & 2) == 0) {
        *(undefined1 *)((int)param_1 + 0x3b7) = 0;
        *(undefined1 *)(param_1 + 0x12e) = 0;
      }
      else {
        iVar6 = FUN_10004590((char *)((int)param_1 + 0x3b7),0x100,param_1);
        if ((iVar6 == 0) ||
           (iVar6 = FUN_10004590((char *)(param_1 + 0x12e),0x100,param_1), iVar6 == 0)) {
          return false;
        }
      }
      iVar6 = (*(code *)param_1[7])(param_1[0x22],0,1);
      param_1[0xb] = iVar6;
      if (iVar6 == -1) {
        FUN_10004d90((undefined4 *)*param_1,4,0);
        return false;
      }
      iVar6 = (*(code *)param_1[7])(param_1[0x22],param_1[0x18]);
      if (iVar6 != -1) {
        *(undefined2 *)(param_1 + 0x2b) = *(undefined2 *)(param_1 + 0x1b);
        iVar6 = FUN_10004170(param_1);
        return (bool)('\x01' - (iVar6 == 0));
      }
      FUN_10004d90((undefined4 *)*param_1,4,0);
      return false;
    }
  }
  FUN_10004d90((undefined4 *)*param_1,1,0);
  return false;
}



undefined4 __cdecl FUN_10003d80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar4 = param_1[0x1d];
  if (uVar4 == 0) {
LAB_10003e2c:
    puVar1 = param_1 + 0x1ef;
    param_1[0x1f0] = param_1 + 0x2d;
    param_1[500] = param_1[0x23];
    *(undefined2 *)(param_1 + 0x1f5) = *(undefined2 *)((int)param_1 + 0x7e);
    *(undefined2 *)((int)param_1 + 0x7d6) = *(undefined2 *)(param_1 + 0x20);
    *(undefined2 *)(param_1 + 0x1f6) = *(undefined2 *)((int)param_1 + 0x82);
    param_1[499] = param_1[0xe];
    *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x1f);
    *puVar1 = 0;
    if ((*(byte *)(param_1 + 0x1f6) & 0x40) != 0) {
      *puVar1 = 1;
      *(ushort *)(param_1 + 0x1f6) = *(ushort *)(param_1 + 0x1f6) & 0xffbf;
    }
    iVar2 = (*(code *)param_1[9])(3,puVar1);
    if (iVar2 != -1) {
      param_1[0x23] = 0xffffffff;
      if (iVar2 == 0) {
        FUN_10004d90((undefined4 *)*param_1,8,0);
        return 0;
      }
      return 1;
    }
    uVar7 = 0xb;
LAB_10003e9a:
    FUN_10004d90((undefined4 *)*param_1,uVar7,0);
  }
  else {
    uVar6 = param_1[0x1e];
    if (uVar6 < (uint)param_1[0xc]) {
      param_1[0x24] = 0xffff;
    }
    iVar2 = FUN_10004230(param_1,(uint)*(ushort *)(param_1 + 0x1f));
    while (iVar2 != 0) {
      if (uVar6 < (uint)*(ushort *)(param_1[0x12] + 6) + param_1[0xc]) goto LAB_10003ddf;
      iVar2 = FUN_10003f00(param_1);
    }
  }
  goto LAB_10003ea5;
  while( true ) {
    uVar5 = (uint)*(ushort *)(param_1[0x12] + 6) - (uVar6 - param_1[0xc]);
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    uVar3 = (*(code *)param_1[5])(param_1[0x23],param_1[0x10] + (uVar6 - param_1[0xc]),uVar5);
    if (uVar3 != uVar5) {
      uVar7 = 8;
      goto LAB_10003e9a;
    }
    uVar6 = uVar6 + uVar5;
    uVar4 = uVar4 - uVar5;
    if ((uVar4 != 0) && (iVar2 = FUN_10003f00(param_1), iVar2 == 0)) break;
LAB_10003ddf:
    if (uVar4 == 0) goto LAB_10003e2c;
  }
LAB_10003ea5:
  if (param_1[0x23] != -1) {
    (*(code *)param_1[6])(param_1[0x23]);
    param_1[0x23] = 0xffffffff;
  }
  return 0;
}



undefined4 __cdecl FUN_10003f00(undefined4 *param_1)

{
  int iVar1;
  ushort local_2;
  
  param_1[0xc] = param_1[0xc] + (uint)*(ushort *)(param_1[0x12] + 6);
  if (*(short *)(param_1 + 0x2c) == 0) {
    iVar1 = FUN_10003fe0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -1;
  iVar1 = FUN_10004420(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(short *)(param_1[0x12] + 6) == 0) {
    iVar1 = FUN_10003fe0(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_10004420(param_1,(uint)*(ushort *)(param_1[0x12] + 4));
      if (iVar1 != 0) {
        *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + -1;
        goto LAB_10003f84;
      }
    }
    return 0;
  }
LAB_10003f84:
  local_2 = *(ushort *)(param_1[0x12] + 6);
  iVar1 = FUN_10004c00(param_1,&local_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(ushort *)(param_1[0x12] + 6) != local_2) {
    FUN_10004d90((undefined4 *)*param_1,7,0);
    return 0;
  }
  return 1;
}



undefined4 __cdecl FUN_10003fe0(undefined4 *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  short sVar5;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  sVar5 = *(short *)((int)param_1 + 0x72) + 1;
  param_1[0x1f0] = (int)param_1 + 0x3b7;
  param_1[0x1f1] = param_1 + 0x12e;
  param_1[0x1f2] = (int)param_1 + 0x5b9;
  param_1[499] = param_1[0xe];
  *(short *)((int)param_1 + 0x7da) = sVar1;
  *(short *)(param_1 + 0x1f7) = sVar5;
  param_1[0x1f8] = 0;
  do {
    bVar2 = false;
    if (param_1[0x21] != -1) {
      iVar4 = (*(code *)param_1[6])(param_1[0x21]);
      if (iVar4 != 0) goto LAB_10004113;
    }
    if (param_1[0x22] != -1) {
      iVar4 = (*(code *)param_1[6])(param_1[0x22]);
      if (iVar4 != 0) {
LAB_10004113:
        FUN_10004d90((undefined4 *)*param_1,4,0);
        return 0;
      }
    }
    param_1[0x22] = 0xffffffff;
    param_1[0x21] = 0xffffffff;
    iVar4 = (*(code *)param_1[9])(4,param_1 + 0x1ef);
    if (iVar4 == -1) {
      FUN_10004d90((undefined4 *)*param_1,0xb,0);
      return 0;
    }
    bVar3 = FUN_10003940(param_1,(char *)((int)param_1 + 0x3b7),sVar1,sVar5);
    if (CONCAT31(extraout_var,bVar3) == 0) {
LAB_100040ba:
      if (*(int *)*param_1 == 0xb) {
        return 0;
      }
      bVar2 = true;
    }
    else {
      iVar4 = FUN_100042b0(param_1,0);
      if (iVar4 == 0) goto LAB_100040ba;
    }
    param_1[0x1f8] = *(undefined4 *)*param_1;
    if (!bVar2) {
      *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + 1;
      do {
        if (*(short *)((int)param_1 + 0xae) == 0) {
          param_1[0x27] = 1;
          return 1;
        }
        *(short *)(param_1 + 0x2b) = *(short *)(param_1 + 0x2b) + -1;
        *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + -1;
        iVar4 = FUN_100043d0(param_1);
      } while (iVar4 != 0);
      return 0;
    }
  } while( true );
}



undefined4 __cdecl FUN_10004170(undefined4 *param_1)

{
  int iVar1;
  
  param_1[0x1f0] = (int)param_1 + 0x3b7;
  param_1[0x1f1] = param_1 + 0x12e;
  param_1[0x1f2] = (int)param_1 + 0x5b9;
  param_1[499] = param_1[0xe];
  *(undefined2 *)((int)param_1 + 0x7da) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x1f7) = *(undefined2 *)((int)param_1 + 0x72);
  iVar1 = (*(code *)param_1[9])(0,param_1 + 0x1ef);
  if (iVar1 == -1) {
    FUN_10004d90((undefined4 *)*param_1,0xb,0);
    return 0;
  }
  if (param_1[10] != 0) {
    param_1[0x1f9] = 0;
    param_1[0x1fa] = param_1[0xe];
    param_1[0x1fb] = param_1[0x13];
    *(short *)(param_1 + 0x1fc) = (short)param_1[0x28];
    *(undefined2 *)((int)param_1 + 0x7f2) = *(undefined2 *)(param_1 + 0x1c);
    param_1[0x1fd] = (uint)*(ushort *)((int)param_1 + 0x72);
    iVar1 = (*(code *)param_1[10])(param_1 + 0x1f9);
    if (iVar1 == -1) {
      FUN_10004d90((undefined4 *)*param_1,0xb,0);
      return 0;
    }
  }
  return 1;
}



undefined4 __cdecl FUN_10004230(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1[0x27] != 0) {
    return 1;
  }
  if ((param_2 & 0xfffe) == 0xfffe) {
    param_2 = *(ushort *)((int)param_1 + 0x6a) - 1;
  }
  if (param_1[0x24] == param_2) {
    return 1;
  }
  iVar1 = FUN_10004b30(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_100042b0(param_1,param_2), iVar1 != 0)) {
    iVar1 = FUN_10003f00(param_1);
    if (iVar1 != 0) {
      param_1[0xc] = 0;
      return 1;
    }
    return 0;
  }
  return 0;
}



undefined4 __cdecl FUN_100042b0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  
  param_1[0x24] = param_2;
  iVar3 = (*(code *)param_1[7])(param_1[0x21],param_1[0x29] * param_2 + param_1[0xb],0);
  if (iVar3 != -1) {
    iVar3 = param_1[0x29];
    iVar4 = (*(code *)param_1[4])(param_1[0x21],param_1[0x11],iVar3);
    if (iVar4 == iVar3) {
      iVar3 = (*(code *)param_1[7])(param_1[0x21],*(undefined4 *)param_1[0x11],0);
      if (iVar3 != -1) {
        *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1[0x11] + 4);
        bVar1 = FUN_10004720(*(short *)(param_1[0x11] + 6),param_1);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          return 0;
        }
        if (param_1[10] != 0) {
          param_1[0x1f9] = 1;
          param_1[0x1fa] = param_1[0xe];
          sVar2 = (short)param_1[0x29] + -8;
          *(short *)(param_1 + 0x1fc) = sVar2;
          if (sVar2 == 0) {
            param_1[0x1fb] = 0;
          }
          else {
            param_1[0x1fb] = param_1[0x11] + 8;
          }
          *(short *)((int)param_1 + 0x7f2) = (short)param_2;
          iVar3 = (*(code *)param_1[10])(param_1 + 0x1f9);
          if (iVar3 == -1) {
            FUN_10004d90((undefined4 *)*param_1,0xb,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  FUN_10004d90((undefined4 *)*param_1,4,0);
  return 0;
}



undefined4 __cdecl FUN_100043d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)param_1[4])(param_1[0x22],param_1 + 0x1d,0x10);
  if (iVar1 == 0x10) {
    iVar1 = FUN_10004590((char *)(param_1 + 0x2d),0x100,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_10004d90((undefined4 *)*param_1,4,0);
  return 0;
}



undefined4 __cdecl FUN_10004420(undefined4 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  iVar3 = param_1[0x2a];
  iVar2 = (*(code *)param_1[4])(param_1[0x21],param_1[0x12],iVar3);
  if (iVar2 == iVar3) {
    uVar5 = (uint)*(ushort *)(param_1[0x12] + 4);
    if (uVar5 + param_2 <= (uint)param_1[0x26]) {
      uVar7 = (*(code *)param_1[4])(param_1[0x21],param_1[0xf] + param_2,uVar5);
      if ((uint)uVar7 == uVar5) {
        if (*(int *)param_1[0x12] != 0) {
          puVar6 = (uint *)((int *)param_1[0x12] + 1);
          uVar7 = FUN_10004dac(extraout_ECX,(int)((ulonglong)uVar7 >> 0x20),
                               (uint *)(param_1[0xf] + param_2),(uint)(ushort)*puVar6,0);
          uVar7 = FUN_10004dac(extraout_ECX_00,(int)((ulonglong)uVar7 >> 0x20),puVar6,
                               param_1[0x2a] - 4,(uint)uVar7);
          if (*(int *)param_1[0x12] != (int)uVar7) {
            FUN_10004d90((undefined4 *)*param_1,4,0);
            return 0;
          }
        }
        *(short *)(param_1[0x12] + 4) = *(short *)(param_1[0x12] + 4) + (short)param_2;
        if ((param_2 != 0) || (uVar4 = 0, *(short *)(param_1[0x12] + 6) == 0)) {
          uVar4 = 1;
        }
        if (param_1[10] != 0) {
          param_1[0x1f9] = 2;
          param_1[0x1fa] = param_1[0xe];
          sVar1 = (short)param_1[0x2a] + -8;
          *(short *)(param_1 + 0x1fc) = sVar1;
          if (sVar1 == 0) {
            param_1[0x1fb] = 0;
          }
          else {
            param_1[0x1fb] = param_1[0x12] + 8;
          }
          param_1[0x1fd] = param_1[0xf] + param_2;
          *(undefined2 *)(param_1 + 0x1fe) = *(undefined2 *)(param_1[0x12] + 4);
          param_1[0x1ff] = uVar4;
          *(short *)(param_1 + 0x200) = (short)param_2;
          iVar3 = (*(code *)param_1[10])(param_1 + 0x1f9);
          if (iVar3 == -1) {
            FUN_10004d90((undefined4 *)*param_1,0xb,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  FUN_10004d90((undefined4 *)*param_1,4,0);
  return 0;
}



undefined4 __cdecl FUN_10004590(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (*(code *)param_3[7])(param_3[0x22],0,1);
  iVar4 = (*(code *)param_3[4])(param_3[0x22],param_1,param_2);
  if (iVar4 < 1) {
    FUN_10004d90((undefined4 *)*param_3,4,0);
    return 0;
  }
  uVar5 = 0xffffffff;
  cVar2 = param_1[param_2 + -1];
  param_1[param_2 + -1] = '\0';
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if ((param_2 <= (int)~uVar5) && (cVar2 != '\0')) {
    FUN_10004d90((undefined4 *)*param_3,4,0);
    return 0;
  }
  iVar3 = (*(code *)param_3[7])(param_3[0x22],~uVar5 + iVar3,0);
  if (iVar3 == -1) {
    FUN_10004d90((undefined4 *)*param_3,4,0);
    return 0;
  }
  return 1;
}



undefined4 __cdecl FUN_10004650(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)param_1[7])(param_1[0x22],0,1);
  if (iVar2 == -1) {
    FUN_10004d90((undefined4 *)*param_1,4,0);
    return 0;
  }
  piVar1 = param_1 + 0x1ef;
  *(undefined2 *)((int)param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x2b);
  *(undefined2 *)((int)param_1 + 0x7da) = *(undefined2 *)(param_1 + 0x1c);
  *piVar1 = iVar2;
  param_1[499] = param_1[0xe];
  iVar3 = (*(code *)param_1[9])(5,piVar1);
  if (iVar3 == -1) {
    FUN_10004d90((undefined4 *)*param_1,0xb,0);
    return 0;
  }
  *(short *)(param_1 + 0x2b) = *(short *)((int)param_1 + 0x7de);
  if ((*(short *)((int)param_1 + 0x7de) != 0) && (*piVar1 != iVar2)) {
    iVar2 = (*(code *)param_1[7])(param_1[0x22],*piVar1,0);
    if (iVar2 == -1) {
      FUN_10004d90((undefined4 *)*param_1,0xb,0);
      return 0;
    }
  }
  return 1;
}



bool __cdecl FUN_10004720(short param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(short *)((int)param_2 + 0xb2) == param_1) {
    return true;
  }
  iVar1 = FUN_10004780(param_2);
  if (iVar1 == 0) {
    FUN_10004d90((undefined4 *)*param_2,7,0);
    return false;
  }
  *(short *)((int)param_2 + 0xb2) = param_1;
  iVar1 = FUN_10004870(param_2);
  return (bool)('\x01' - (iVar1 == 0));
}



undefined4 __cdecl FUN_10004780(undefined4 *param_1)

{
  int iVar1;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
    break;
  case 1:
    iVar1 = FUN_10005330((int *)param_1[0xd]);
    if (iVar1 != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_10005190((int *)param_1[0xd]);
    if (iVar1 != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 3:
    iVar1 = FUN_10004fe0((int *)param_1[0xd]);
    if (iVar1 != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  default:
    FUN_10004d90((undefined4 *)*param_1,6,0);
    return 0;
  case 0xf:
    return 1;
  }
  (*(code *)param_1[1])(param_1[0xf]);
  (*(code *)param_1[1])(param_1[0x10]);
  return 1;
}



undefined4 __cdecl FUN_10004870(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  undefined4 local_c;
  uint local_8 [2];
  
  uVar3 = *(ushort *)((int)param_1 + 0xb2);
  iVar5 = 0;
  puVar1 = param_1 + 0x25;
  *puVar1 = 0x8000;
  switch(uVar3 & 0xf) {
  case 0:
    param_1[0x26] = 0x8000;
    break;
  case 1:
    iVar4 = FUN_10005200(puVar1,(undefined *)0x0,(undefined *)0x0,param_1 + 0x26,(undefined4 *)0x0);
    if (iVar4 == 0) break;
    goto LAB_10004962;
  case 2:
    local_c = param_1[8];
    local_10 = (uint)((uVar3 & 0x1f00) >> 8);
    iVar4 = FUN_10005020(puVar1,(int *)&local_10,(undefined *)0x0,(undefined *)0x0,param_1 + 0x26,
                         (undefined4 *)0x0,0,0,0,0,0);
    goto joined_r0x10004960;
  case 3:
    local_8[0] = 1 << ((byte)(uVar3 >> 8) & 0x1f);
    iVar4 = FUN_10004e30((int *)puVar1,local_8,(undefined *)0x0,(undefined *)0x0,param_1 + 0x26,
                         (undefined4 *)0x0,0,0,0,0,0);
joined_r0x10004960:
    if (iVar4 != 0) {
LAB_10004962:
      iVar5 = 7;
    }
    break;
  default:
    iVar5 = 6;
    break;
  case 0xf:
    return 1;
  }
  if (iVar5 != 0) {
    FUN_10004d90((undefined4 *)*param_1,iVar5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  piVar2 = param_1 + 0x26;
  iVar5 = (*(code *)param_1[2])(*piVar2);
  param_1[0xf] = iVar5;
  if (iVar5 == 0) {
    FUN_10004d90((undefined4 *)*param_1,5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  iVar5 = (*(code *)param_1[2])(*puVar1);
  param_1[0x10] = iVar5;
  if (iVar5 == 0) {
    (*(code *)param_1[1])(param_1[0xf]);
    FUN_10004d90((undefined4 *)*param_1,5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  uVar3 = *(ushort *)((int)param_1 + 0xb2) & 0xf;
  iVar5 = 0;
  if (uVar3 == 1) {
    iVar4 = FUN_10005200(puVar1,(undefined *)param_1[2],(undefined *)param_1[1],piVar2,param_1 + 0xd
                        );
  }
  else if (uVar3 == 2) {
    iVar4 = FUN_10005020(puVar1,(int *)&local_10,(undefined *)param_1[2],(undefined *)param_1[1],
                         piVar2,param_1 + 0xd,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7]
                        );
  }
  else {
    if (uVar3 != 3) goto LAB_10004ab1;
    iVar4 = FUN_10004e30((int *)puVar1,local_8,(undefined *)param_1[2],(undefined *)param_1[1],
                         piVar2,param_1 + 0xd,param_1[3],param_1[4],param_1[5],param_1[6],param_1[7]
                        );
  }
  if (iVar4 != 0) {
    iVar5 = (-(uint)(iVar4 == 1) & 0xfffffffe) + 7;
  }
LAB_10004ab1:
  if (iVar5 != 0) {
    (*(code *)param_1[1])(param_1[0xf]);
    (*(code *)param_1[1])(param_1[0x10]);
    FUN_10004d90((undefined4 *)*param_1,iVar5,0);
    *(undefined2 *)((int)param_1 + 0xb2) = 0xf;
    return 0;
  }
  return 1;
}



undefined4 __cdecl FUN_10004b30(undefined4 *param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
  case 0xf:
    break;
  case 1:
    bVar1 = FUN_10005310((int *)param_1[0xd]);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 2:
    iVar2 = FUN_10005170((int *)param_1[0xd]);
    if (iVar2 != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  case 3:
    iVar2 = FUN_10004fb0((int *)param_1[0xd]);
    if (iVar2 != 0) {
      FUN_10004d90((undefined4 *)*param_1,7,0);
      return 0;
    }
    break;
  default:
    FUN_10004d90((undefined4 *)*param_1,6,0);
    return 0;
  }
  return 1;
}



undefined4 __cdecl FUN_10004c00(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_4;
  
  switch(*(ushort *)((int)param_1 + 0xb2) & 0xf) {
  case 0:
    uVar1 = *(ushort *)(param_1[0x12] + 4);
    *param_2 = uVar1;
    puVar4 = (undefined1 *)param_1[0xf];
    puVar5 = (undefined1 *)param_1[0x10];
    for (uVar3 = (uint)uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return 1;
  case 1:
    break;
  case 2:
    local_4 = (uint)*param_2;
    bVar2 = FUN_10005110((int *)param_1[0xd],param_1[0xf],(uint)*(ushort *)(param_1[0x12] + 4),
                         param_1[0x10],&local_4);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      *param_2 = (ushort)local_4;
      return 1;
    }
    FUN_10004d90((undefined4 *)*param_1,7,0);
    return 0;
  case 3:
    local_4 = (uint)*param_2;
    bVar2 = FUN_10004f30((int *)param_1[0xd],param_1[0xf],(uint)*(ushort *)(param_1[0x12] + 4),
                         param_1[0x10],&local_4);
    if (CONCAT31(extraout_var_01,bVar2) == 0) {
      *param_2 = (ushort)local_4;
      return 1;
    }
    FUN_10004d90((undefined4 *)*param_1,7,0);
    return 0;
  default:
    FUN_10004d90((undefined4 *)*param_1,6,0);
    return 0;
  }
  local_4 = param_1[0x25];
  bVar2 = FUN_100052a0((int *)param_1[0xd],(char *)param_1[0xf],(uint)*(ushort *)(param_1[0x12] + 4)
                       ,param_1[0x10],&local_4);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    *param_2 = (ushort)local_4;
    return 1;
  }
  FUN_10004d90((undefined4 *)*param_1,7,0);
  return 0;
}



void __cdecl FUN_10004d90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[2] = 1;
  param_1[1] = param_3;
  return;
}



undefined8 __fastcall
FUN_10004dac(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (3 < (int)param_4) {
    if (0xf < (int)param_4) {
      uVar5 = param_4 >> 4;
      do {
        uVar4 = *param_3;
        puVar1 = param_3 + 1;
        puVar2 = param_3 + 2;
        puVar3 = param_3 + 3;
        param_3 = param_3 + 4;
        param_5 = param_5 ^ uVar4 ^ *puVar2 ^ *puVar1 ^ *puVar3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    for (uVar5 = param_4 >> 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      param_5 = param_5 ^ *param_3;
      param_3 = param_3 + 1;
    }
  }
  uVar5 = param_4 & 3;
  if (uVar5 == 3) {
    uVar5 = *param_3;
    param_3 = (uint *)((int)param_3 + 1);
    param_5 = param_5 ^ (uint)(byte)uVar5 << 0x10;
LAB_10004e0c:
    uVar5 = *param_3;
    param_3 = (uint *)((int)param_3 + 1);
    param_5 = param_5 ^ (uint)(byte)uVar5 << 8;
  }
  else {
    if (uVar5 == 2) goto LAB_10004e0c;
    if (uVar5 != 1) goto LAB_10004e23;
  }
  param_5 = param_5 ^ (byte)*param_3;
LAB_10004e23:
  return CONCAT44(param_2,param_5);
}



undefined4 __cdecl
FUN_10004e30(int *param_1,uint *param_2,undefined *param_3,undefined *param_4,int *param_5,
            undefined4 *param_6,int param_7,int param_8,int param_9,int param_10,int param_11)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_5 = *param_1 + 0x1800;
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  *param_6 = 0;
  puVar1 = (undefined4 *)(*(code *)param_3)(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  iVar2 = (*(code *)param_3)(0x2efc);
  puVar1[10] = iVar2;
  if (iVar2 == 0) {
    (*(code *)param_4)(puVar1);
    return 1;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[6] = param_10;
  puVar1[7] = param_11;
  puVar1[8] = *param_1;
  puVar1[9] = param_2[1];
  *puVar1 = 0x4349444c;
  iVar2 = FUN_10005370((int *)puVar1[10],*param_2,(int)param_3,(int)param_4,param_7,param_8,param_9,
                       param_10,param_11);
  if (iVar2 == 0) {
    (*(code *)param_4)(puVar1);
    return 1;
  }
  *param_6 = puVar1;
  return 0;
}



byte __cdecl FUN_10004f30(int *param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint local_4;
  
  local_4 = 0;
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  uVar1 = *param_5;
  if ((uint)param_1[8] < uVar1) {
    return 3;
  }
  iVar2 = FUN_10005440((int *)param_1[10],uVar1,param_2,param_3,param_4,uVar1,&local_4);
  *param_5 = local_4;
  return (iVar2 == 0) - 1U & 4;
}



undefined4 __cdecl FUN_10004fb0(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_10005410(param_1[10]);
  return 0;
}



undefined4 __cdecl FUN_10004fe0(int *param_1)

{
  if (*param_1 != 0x4349444c) {
    return 2;
  }
  FUN_10005400((int *)param_1[10]);
  *param_1 = 0;
  (*(code *)param_1[2])(param_1[10]);
  (*(code *)param_1[2])(param_1);
  return 0;
}



undefined4 __cdecl
FUN_10005020(uint *param_1,int *param_2,undefined *param_3,undefined *param_4,int *param_5,
            undefined4 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*param_2 < 10) || (0x15 < *param_2)) {
    return 5;
  }
  if ((*param_1 == 0) || (0x8000 < *param_1)) {
    *param_1 = 0x8000;
  }
  *param_5 = *param_1 + 0x2800;
  if (param_6 == (undefined4 *)0x0) {
    return 0;
  }
  *param_6 = 0;
  puVar1 = (undefined4 *)(*(code *)param_3)(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_7;
  puVar1[4] = param_8;
  puVar1[5] = param_9;
  puVar1[6] = param_10;
  puVar1[7] = param_11;
  puVar1[8] = *param_1;
  puVar1[9] = param_2[1];
  *puVar1 = 0x43494451;
  DAT_1001ae34 = puVar1;
  iVar2 = FUN_100054b0((byte)*param_2);
  if (iVar2 != 0) {
    (*(code *)param_4)(puVar1);
    return 1;
  }
  *param_6 = puVar1;
  return 0;
}



byte __cdecl
FUN_10005110(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  
  if (*param_1 != 0x43494451) {
    return 2;
  }
  DAT_1001ae34 = param_1;
  if ((uint)param_1[8] < *param_5) {
    return 3;
  }
  uVar1 = FUN_10005670(param_2,param_3,param_4,(short)*param_5);
  return ((uVar1 & 0xffff) == 0) - 1U & 4;
}



undefined4 __cdecl FUN_10005170(int *param_1)

{
  if (*param_1 != 0x43494451) {
    return 2;
  }
  DAT_1001ae34 = param_1;
  FUN_10005730();
  return 0;
}



undefined4 __cdecl FUN_10005190(int *param_1)

{
  if (*param_1 != 0x43494451) {
    return 2;
  }
  DAT_1001ae34 = param_1;
  FUN_10005700();
  *param_1 = 0;
  (*(code *)param_1[2])(param_1);
  return 0;
}



void __cdecl FUN_100051c0(undefined4 param_1)

{
  (**(code **)(DAT_1001ae34 + 4))(param_1);
  return;
}



void __cdecl FUN_100051e0(undefined4 param_1)

{
  (**(code **)(DAT_1001ae34 + 8))(param_1);
  return;
}



undefined4 __cdecl
FUN_10005200(uint *param_1,undefined *param_2,undefined *param_3,int *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*param_1 == 0) || (0x8000 < *param_1)) {
    *param_1 = 0x8000;
  }
  *param_4 = *param_1 + 0xc;
  if (param_5 == (undefined4 *)0x0) {
    return 0;
  }
  *param_5 = 0;
  puVar1 = (undefined4 *)(*(code *)param_2)(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return 1;
  }
  puVar2 = FUN_10007190(param_2);
  puVar1[3] = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    (*(code *)param_3)(puVar1);
    return 1;
  }
  puVar1[1] = param_3;
  puVar1[2] = *param_1;
  *puVar1 = 0x4349444d;
  *param_5 = puVar1;
  return 0;
}



byte __cdecl FUN_100052a0(int *param_1,char *param_2,uint param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  
  if (*param_1 != 0x4349444d) {
    return 2;
  }
  if (param_1[2] + 0xcU < param_3) {
    return 3;
  }
  iVar1 = FUN_10005d50((undefined4 *)param_1[3],param_2,param_3,param_4,param_1[2]);
  if (iVar1 == 0) {
    iVar1 = FUN_10005da0((uint *)param_1[3],param_5);
  }
  return (iVar1 == 0) - 1U & 4;
}



byte __cdecl FUN_10005310(int *param_1)

{
  return (*param_1 == 0x4349444d) - 1U & 2;
}



undefined4 __cdecl FUN_10005330(int *param_1)

{
  if (*param_1 != 0x4349444d) {
    return 2;
  }
  *param_1 = 0;
  FUN_10007300(param_1[3],(undefined *)param_1[1]);
  (*(code *)param_1[1])(param_1);
  return 0;
}



undefined4 __cdecl
FUN_10005370(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  
  param_1[3000] = param_3;
  param_1[0xbb9] = param_4;
  param_1[0xbba] = param_5;
  param_1[0xbbb] = param_6;
  param_1[0xbbc] = param_7;
  param_1[0xbbd] = param_8;
  param_1[0xbbe] = param_9;
  param_1[1] = param_2;
  param_1[2] = param_2 - 1;
  if ((param_2 & param_2 - 1) != 0) {
    return 0;
  }
  bVar1 = FUN_10007310(param_1);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    return 0;
  }
  FUN_10005410((int)param_1);
  return 1;
}



void __cdecl FUN_10005400(int *param_1)

{
  FUN_10007370(param_1);
  return;
}



void __cdecl FUN_10005410(int param_1)

{
  FUN_10007390(param_1);
  FUN_100073f0(param_1);
  FUN_10007440(param_1);
  *(undefined4 *)(param_1 + 0x2ecc) = 0;
  return;
}



undefined4 __cdecl
FUN_10005440(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            uint *param_7)

{
  uint uVar1;
  
  param_1[0xac1] = param_3;
  param_1[0xac3] = param_5;
  param_1[0xac2] = param_3 + param_4 + 4;
  FUN_100077a0((int)param_1);
  uVar1 = FUN_10007480(param_1,param_2);
  param_1[0xbb3] = param_1[0xbb3] + 1;
  if ((int)uVar1 < 0) {
    *param_7 = 0;
    return 1;
  }
  *param_7 = uVar1;
  param_1[0xac4] = param_1[0xac4] + uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_100054b0(byte param_1)

{
  int iVar1;
  
  DAT_1001ae0c = 0;
  DAT_1001ae28 = 0;
  DAT_1001ae24 = param_1;
  DAT_1001ae14 = 1 << (param_1 & 0x1f);
  _DAT_1001ae10 = DAT_1001ae14 + -1;
  DAT_1001ae00 = FUN_100051c0(DAT_1001ae14);
  if (DAT_1001ae00 == 0) {
    iVar1 = FUN_10005770();
    if (iVar1 == 0) {
      return 1;
    }
    DAT_1001adf8 = &LAB_10005920;
    DAT_1001ae30 = &LAB_10005ad0;
  }
  else {
    DAT_1001adf8 = &LAB_10005560;
    DAT_1001ae30 = &LAB_10005620;
    DAT_1001ae04 = DAT_1001ae14 + DAT_1001ae00;
    DAT_1001ae08 = DAT_1001ae00;
  }
  FUN_100078b0(param_1);
  return 0;
}



int __cdecl FUN_10005670(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  ushort extraout_var;
  
  DAT_1001ae18 = param_4;
  DAT_1001ae1c = param_3;
  DAT_1001ae20 = 0;
  DAT_1001adf0 = param_1;
  DAT_1001ae2c = param_2;
  DAT_1001adf4 = 0;
  FUN_10008190();
  while ((DAT_1001ae18 != 0 && (DAT_1001adf4 == 0))) {
    FUN_10007b70();
  }
  FUN_10007a80();
  if (((DAT_1001adf4 == 0) && (DAT_1001ae20 == 0)) && (DAT_1001ae28 == 0)) {
    return (uint)extraout_var << 0x10;
  }
  return CONCAT22(extraout_var,1);
}



void FUN_10005700(void)

{
  if (DAT_1001ae00 == 0) {
    FUN_10005d10();
    FUN_10007a80();
    return;
  }
  FUN_100051e0(DAT_1001ae00);
  FUN_10007a80();
  return;
}



void FUN_10005730(void)

{
  FUN_10007a80();
  DAT_1001ae0c = 0;
  DAT_1001ae08 = DAT_1001ae00;
  DAT_1001ae28 = 0;
  if (DAT_1001ae00 == 0) {
    FUN_100058a0();
  }
  FUN_100078b0(DAT_1001ae24);
  return;
}



undefined4 FUN_10005770(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_8;
  undefined1 local_7;
  int local_6;
  
  if (*(int *)(DAT_1001ae34 + 0xc) == 0) {
    return 0;
  }
  local_6 = DAT_1001ae14;
  local_8 = 0x2a;
  local_7 = 0;
  DAT_10018318 = (**(code **)(DAT_1001ae34 + 0xc))(&local_8,0x8102,0x180);
  if (DAT_10018318 == -1) {
    return 0;
  }
  DAT_10018328 = (int)(DAT_1001ae14 + (DAT_1001ae14 >> 0x1f & 0xfffU)) >> 0xc;
  if (DAT_10018328 < 3) {
    DAT_10018328 = 3;
  }
  DAT_10018334 = FUN_100051c0(DAT_10018328 << 3);
  if (DAT_10018334 == 0) {
    (**(code **)(DAT_1001ae34 + 0x18))(DAT_10018318);
    return 0;
  }
  iVar3 = 0;
  DAT_1001832c = (undefined4 *)0x0;
  if (0 < DAT_10018328) {
    do {
      puVar2 = (undefined4 *)FUN_100051c0(0x1010);
      if (puVar2 == (undefined4 *)0x0) {
        if (iVar3 < 3) {
          FUN_10005d10();
          return 0;
        }
        break;
      }
      *puVar2 = 0;
      puVar2[1] = DAT_1001832c;
      puVar1 = puVar2;
      if (DAT_1001832c != (undefined4 *)0x0) {
        *DAT_1001832c = puVar2;
        puVar1 = DAT_10018330;
      }
      DAT_10018330 = puVar1;
      iVar3 = iVar3 + 1;
      DAT_1001832c = puVar2;
    } while (iVar3 < DAT_10018328);
  }
  FUN_100058a0();
  return 1;
}



void FUN_100058a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_1001832c;
  if (DAT_1001832c != 0) {
    do {
      *(undefined4 *)(iVar2 + 8) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      piVar1 = (int *)(iVar2 + 4);
      iVar2 = *piVar1;
    } while (*piVar1 != 0);
  }
  iVar2 = 0;
  if (0 < DAT_10018328) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(DAT_10018334 + -8 + iVar3) = 0;
      *(undefined4 *)(DAT_10018334 + -4 + iVar3) = 0;
    } while (iVar2 < DAT_10018328);
  }
  DAT_1001831c = FUN_10005b60(0,1);
  if (DAT_1001831c != (int *)0x0) {
    DAT_10018320 = DAT_1001831c + 4;
    DAT_10018324 = DAT_1001831c + 0x404;
  }
  return;
}



int * __cdecl FUN_10005b60(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = DAT_10018330;
  piVar1 = *(int **)(DAT_10018334 + param_1 * 8);
  if (piVar1 != (int *)0x0) {
    if (DAT_1001832c != piVar1) {
      *(int *)(*piVar1 + 4) = piVar1[1];
      if ((int *)piVar1[1] == (int *)0x0) {
        DAT_10018330 = (int *)*piVar1;
      }
      else {
        *(int *)piVar1[1] = *piVar1;
      }
      *DAT_1001832c = (int)piVar1;
      *piVar1 = 0;
      piVar1[1] = (int)DAT_1001832c;
      DAT_1001832c = piVar1;
    }
    piVar1[3] = piVar1[3] | param_2;
    return piVar1;
  }
  if (DAT_1001831c == DAT_10018330) {
    return (int *)0x0;
  }
  piVar1 = DAT_10018330 + 2;
  if ((*piVar1 != -1) && (*(undefined4 *)(DAT_10018334 + *piVar1 * 8) = 0, piVar2[3] != 0)) {
    iVar4 = *piVar1;
    iVar3 = (**(code **)(DAT_1001ae34 + 0x1c))(DAT_10018318,iVar4 << 0xc,0);
    if (iVar3 != iVar4 << 0xc) {
      return (int *)0x0;
    }
    iVar4 = (**(code **)(DAT_1001ae34 + 0x14))(DAT_10018318,piVar2 + 4,0x1000);
    if (iVar4 != 0x1000) {
      return (int *)0x0;
    }
    *(undefined4 *)(DAT_10018334 + 4 + *piVar1 * 8) = 1;
  }
  DAT_10018330 = (int *)*DAT_10018330;
  *(undefined4 *)((int)DAT_10018330 + 4) = 0;
  *DAT_1001832c = (int)piVar2;
  *piVar2 = 0;
  piVar2[1] = (int)DAT_1001832c;
  DAT_1001832c = piVar2;
  *(int **)(DAT_10018334 + param_1 * 8) = piVar2;
  if (*(int *)(DAT_10018334 + 4 + param_1 * 8) == 0) {
    if (param_2 == 0) {
      return (int *)0x0;
    }
  }
  else {
    iVar4 = (**(code **)(DAT_1001ae34 + 0x1c))(DAT_10018318,param_1 << 0xc,0);
    if (iVar4 != param_1 << 0xc) {
      return (int *)0x0;
    }
    iVar4 = (**(code **)(DAT_1001ae34 + 0x10))(DAT_10018318,piVar2 + 4,0x1000);
    if (iVar4 != 0x1000) {
      return (int *)0x0;
    }
  }
  piVar2[3] = param_2;
  *piVar1 = param_1;
  return piVar2;
}



void FUN_10005d10(void)

{
  int iVar1;
  int iVar2;
  
  FUN_100051e0(DAT_10018334);
  iVar2 = DAT_1001832c;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    FUN_100051e0(iVar2);
    iVar2 = iVar1;
  }
  (**(code **)(DAT_1001ae34 + 0x18))(DAT_10018318);
  return;
}



undefined4 __cdecl
FUN_10005d50(undefined4 *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  if ((*param_2 == 'C') && (param_2[1] == 'K')) {
    param_1[2] = param_2 + 2;
    param_1[5] = param_3 + -2;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[3] = param_4;
    param_1[4] = param_4;
    param_1[8] = param_5;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0xb] = 0;
    return 0;
  }
  return 3;
}



int __cdecl FUN_10005da0(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1[7] = uVar1;
  if (param_1[8] < uVar1) {
    param_1[7] = param_1[8];
  }
  uVar1 = param_1[7];
  if (uVar1 == 0) {
LAB_10005e34:
    *param_2 = (uint)(ushort)((short)uVar1 - (short)param_1[7]);
    return 0;
  }
  switch(param_1[0xb]) {
  case 0:
    break;
  case 1:
    FUN_10006510((int)param_1,1);
    break;
  case 2:
    FUN_10005e60((int)param_1,param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],1);
    break;
  case 3:
    *param_2 = 0;
    return 0;
  default:
    return 3;
  }
  do {
    if ((*param_1 != 0) || (param_1[7] == 0)) goto LAB_10005e34;
    iVar2 = FUN_100066b0(param_1);
    if (iVar2 != 0) {
      return 3 - (uint)(iVar2 == 3);
    }
  } while( true );
}



undefined4 __cdecl
FUN_10005e60(int param_1,int param_2,int param_3,uint param_4,uint param_5,short param_6)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint local_2c;
  uint local_20;
  undefined1 *local_18;
  int local_c;
  
  local_20 = *(uint *)(param_1 + 0x24);
  local_2c = *(uint *)(param_1 + 0x28);
  uVar2 = *(ushort *)(&DAT_100145e8 + param_4 * 2);
  uVar3 = *(ushort *)(&DAT_100145e8 + param_5 * 2);
  if (param_6 == 0) goto LAB_10005ec3;
  if (*(short *)(param_1 + 0x48) == 0) goto LAB_10005ec3;
  local_18 = *(undefined1 **)(param_1 + 0x4c);
  local_c = *(int *)(param_1 + 0x50);
  do {
    piVar7 = (int *)(param_1 + 0xc);
    while (iVar6 = local_c + -1, local_c != 0) {
      puVar1 = local_18 + 1;
      *(undefined1 *)*piVar7 = *local_18;
      *piVar7 = *piVar7 + 1;
      local_18 = puVar1;
      if ((int)*(undefined1 **)(param_1 + 0x10) - (int)puVar1 == -0x8000) {
        local_18 = *(undefined1 **)(param_1 + 0x10);
      }
      iVar8 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar8;
      local_c = iVar6;
      if (iVar8 == 0) {
        *(undefined2 *)(param_1 + 0x48) = 1;
        *(int *)(param_1 + 0x38) = param_2;
        *(int *)(param_1 + 0x3c) = param_3;
        *(uint *)(param_1 + 0x40) = param_4;
        *(uint *)(param_1 + 0x44) = param_5;
        *(undefined1 **)(param_1 + 0x4c) = local_18;
        *(undefined4 *)(param_1 + 0x2c) = 2;
        *(int *)(param_1 + 0x50) = iVar6;
        goto LAB_100064ec;
      }
    }
LAB_10005ec3:
    while( true ) {
      if (local_2c < param_4) {
        do {
          uVar4 = *(uint *)(param_1 + 0x18);
          if (uVar4 < *(uint *)(param_1 + 0x14)) {
            bVar9 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar4 + 1);
            *(uint *)(param_1 + 0x18) = uVar4 + 1;
          }
          else if (*(uint *)(param_1 + 0x14) == uVar4) {
            bVar9 = 0;
          }
          else {
            bVar9 = 0;
            *(undefined4 *)(param_1 + 4) = 1;
          }
          local_20 = local_20 | (uint)bVar9 << ((byte)local_2c & 0x1f);
          local_2c = local_2c + 8;
        } while (local_2c < param_4);
      }
      piVar7 = (int *)(param_1 + 4);
      if (*piVar7 != 0) {
        return 1;
      }
      pbVar5 = (byte *)((local_20 & uVar2) * 8 + param_2);
      bVar9 = *pbVar5;
      while (uVar4 = (uint)bVar9, 0x10 < uVar4) {
        if (uVar4 == 99) {
          return 1;
        }
        uVar4 = uVar4 - 0x10;
        local_20 = local_20 >> (pbVar5[1] & 0x1f);
        local_2c = local_2c - pbVar5[1];
        if (local_2c < uVar4) {
          do {
            uVar11 = *(uint *)(param_1 + 0x18);
            if (uVar11 < *(uint *)(param_1 + 0x14)) {
              bVar9 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar11 + 1);
              *(uint *)(param_1 + 0x18) = uVar11 + 1;
            }
            else if (*(uint *)(param_1 + 0x14) == uVar11) {
              bVar9 = 0;
            }
            else {
              *piVar7 = 1;
              bVar9 = 0;
            }
            local_20 = local_20 | (uint)bVar9 << ((byte)local_2c & 0x1f);
            local_2c = local_2c + 8;
          } while (local_2c < uVar4);
        }
        if (*piVar7 != 0) {
          return 1;
        }
        pbVar5 = (byte *)((*(ushort *)(&DAT_100145e8 + uVar4 * 2) & local_20) * 8 +
                         *(int *)(pbVar5 + 4));
        bVar9 = *pbVar5;
      }
      local_20 = local_20 >> (pbVar5[1] & 0x1f);
      local_2c = local_2c - pbVar5[1];
      if (uVar4 != 0x10) break;
      **(byte **)(param_1 + 0xc) = pbVar5[4];
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      iVar6 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar6;
      if (iVar6 == 0) {
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0x38) = param_2;
        *(int *)(param_1 + 0x3c) = param_3;
        *(uint *)(param_1 + 0x40) = param_4;
        *(undefined4 *)(param_1 + 0x2c) = 2;
        *(uint *)(param_1 + 0x44) = param_5;
        goto LAB_100064ec;
      }
    }
    if (uVar4 == 0xf) {
LAB_100064ec:
      *(uint *)(param_1 + 0x24) = local_20;
      *(uint *)(param_1 + 0x28) = local_2c;
      return 0;
    }
    if (local_2c < uVar4) {
      do {
        uVar11 = *(uint *)(param_1 + 0x18);
        if (uVar11 < *(uint *)(param_1 + 0x14)) {
          bVar10 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar11 + 1);
          *(uint *)(param_1 + 0x18) = uVar11 + 1;
        }
        else if (*(uint *)(param_1 + 0x14) == uVar11) {
          bVar10 = 0;
        }
        else {
          bVar10 = 0;
          *piVar7 = 1;
        }
        local_20 = local_20 | (uint)bVar10 << ((byte)local_2c & 0x1f);
        local_2c = local_2c + 8;
      } while (local_2c < uVar4);
    }
    if (*piVar7 != 0) {
      return 1;
    }
    local_c = (*(ushort *)(&DAT_100145e8 + uVar4 * 2) & local_20) + (uint)*(ushort *)(pbVar5 + 4);
    local_2c = local_2c - uVar4;
    local_20 = local_20 >> (bVar9 & 0x1f);
    if (local_2c < param_5) {
      do {
        uVar4 = *(uint *)(param_1 + 0x18);
        if (uVar4 < *(uint *)(param_1 + 0x14)) {
          bVar9 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar4 + 1);
          *(uint *)(param_1 + 0x18) = uVar4 + 1;
        }
        else if (*(uint *)(param_1 + 0x14) == uVar4) {
          bVar9 = 0;
        }
        else {
          bVar9 = 0;
          *piVar7 = 1;
        }
        local_20 = local_20 | (uint)bVar9 << ((byte)local_2c & 0x1f);
        local_2c = local_2c + 8;
      } while (local_2c < param_5);
    }
    if (*piVar7 != 0) {
      return 1;
    }
    pbVar5 = (byte *)((local_20 & uVar3) * 8 + param_3);
    bVar9 = *pbVar5;
    while (uVar4 = (uint)bVar9, 0x10 < uVar4) {
      if (uVar4 == 99) {
        return 1;
      }
      uVar4 = uVar4 - 0x10;
      local_20 = local_20 >> (pbVar5[1] & 0x1f);
      local_2c = local_2c - pbVar5[1];
      if (local_2c < uVar4) {
        do {
          uVar11 = *(uint *)(param_1 + 0x18);
          if (uVar11 < *(uint *)(param_1 + 0x14)) {
            bVar9 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar11 + 1);
            *(uint *)(param_1 + 0x18) = uVar11 + 1;
          }
          else if (*(uint *)(param_1 + 0x14) == uVar11) {
            bVar9 = 0;
          }
          else {
            *piVar7 = 1;
            bVar9 = 0;
          }
          local_20 = local_20 | (uint)bVar9 << ((byte)local_2c & 0x1f);
          local_2c = local_2c + 8;
        } while (local_2c < uVar4);
      }
      if (*piVar7 != 0) {
        return 1;
      }
      pbVar5 = (byte *)((*(ushort *)(&DAT_100145e8 + uVar4 * 2) & local_20) * 8 +
                       *(int *)(pbVar5 + 4));
      bVar9 = *pbVar5;
    }
    local_20 = local_20 >> (pbVar5[1] & 0x1f);
    local_2c = local_2c - pbVar5[1];
    if (local_2c < uVar4) {
      do {
        uVar11 = *(uint *)(param_1 + 0x18);
        if (uVar11 < *(uint *)(param_1 + 0x14)) {
          bVar10 = *(byte *)(*(int *)(param_1 + 8) + -1 + uVar11 + 1);
          *(uint *)(param_1 + 0x18) = uVar11 + 1;
        }
        else if (*(uint *)(param_1 + 0x14) == uVar11) {
          bVar10 = 0;
        }
        else {
          bVar10 = 0;
          *piVar7 = 1;
        }
        local_20 = local_20 | (uint)bVar10 << ((byte)local_2c & 0x1f);
        local_2c = local_2c + 8;
      } while (local_2c < uVar4);
    }
    if (*piVar7 != 0) {
      return 1;
    }
    uVar11 = *(ushort *)(&DAT_100145e8 + uVar4 * 2) & local_20;
    local_20 = local_20 >> (bVar9 & 0x1f);
    uVar11 = uVar11 + *(ushort *)(pbVar5 + 4);
    local_2c = local_2c - uVar4;
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uint)(iVar6 - *(int *)(param_1 + 0x10)) < uVar11) {
      local_18 = (undefined1 *)((iVar6 - uVar11) + 0x8000);
    }
    else {
      local_18 = (undefined1 *)(iVar6 - uVar11);
    }
  } while( true );
}



undefined4 __cdecl FUN_10006510(int param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_4;
  
  if (param_2 == 0) {
    uVar4 = (ushort)*(int *)(param_1 + 0x28) & 7;
    local_4 = *(uint *)(param_1 + 0x24) >> (sbyte)uVar4;
    uVar5 = *(int *)(param_1 + 0x28) - (uint)uVar4;
    if (uVar5 < 0x10) {
      do {
        uVar6 = *(uint *)(param_1 + 0x18);
        if (uVar6 < *(uint *)(param_1 + 0x14)) {
          bVar3 = *(byte *)(*(int *)(param_1 + 8) + uVar6);
          *(uint *)(param_1 + 0x18) = uVar6 + 1;
        }
        else if (*(uint *)(param_1 + 0x14) == uVar6) {
          bVar3 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 1;
          bVar3 = 0;
        }
        local_4 = local_4 | (uint)bVar3 << ((byte)uVar5 & 0x1f);
        uVar5 = uVar5 + 8;
      } while (uVar5 < 0x10);
    }
    uVar5 = uVar5 - 0x10;
    uVar6 = local_4 >> 0x10;
    local_4 = local_4 & 0xffff;
    if (uVar5 < 0x10) {
      do {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(param_1 + 0x14)) {
          bVar3 = *(byte *)(*(int *)(param_1 + 8) + uVar1);
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
        }
        else if (*(uint *)(param_1 + 0x14) == uVar1) {
          bVar3 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 1;
          bVar3 = 0;
        }
        uVar6 = uVar6 | (uint)bVar3 << ((byte)uVar5 & 0x1f);
        uVar5 = uVar5 + 8;
      } while (uVar5 < 0x10);
    }
    if ((~uVar6 & 0xffff) != local_4) {
      return 1;
    }
    if ((*(int *)(param_1 + 4) != 0) || (uVar5 != 0x10)) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    puVar7 = (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + local_4;
  }
  else {
    puVar7 = *(undefined4 **)(param_1 + 0x34);
    local_4 = *(uint *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (local_4 <= uVar5) {
    *(uint *)(param_1 + 0x1c) = uVar5 - local_4;
    puVar8 = *(undefined4 **)(param_1 + 0xc);
    for (uVar5 = local_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = local_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + local_4;
    return 0;
  }
  puVar8 = puVar7;
  puVar9 = *(undefined4 **)(param_1 + 0xc);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar2;
  *(uint *)(param_1 + 0x30) = local_4 - iVar2;
  *(undefined1 **)(param_1 + 0x34) = (undefined1 *)(iVar2 + (int)puVar7);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}



int __cdecl FUN_100066b0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[9];
  uVar2 = param_1[10];
  if (uVar2 == 0) {
    uVar2 = 0;
    do {
      uVar5 = param_1[6];
      if (uVar5 < param_1[5]) {
        bVar3 = *(byte *)(param_1[2] + uVar5);
        param_1[6] = uVar5 + 1;
      }
      else if (param_1[5] == uVar5) {
        bVar3 = 0;
      }
      else {
        param_1[1] = 1;
        bVar3 = 0;
      }
      uVar4 = uVar4 | (uint)bVar3 << ((byte)uVar2 & 0x1f);
      uVar2 = uVar2 + 8;
    } while (uVar2 == 0);
  }
  uVar2 = uVar2 - 1;
  uVar5 = uVar4 >> 1;
  *param_1 = uVar4 & 1;
  if (uVar2 < 2) {
    do {
      uVar4 = param_1[6];
      if (uVar4 < param_1[5]) {
        bVar3 = *(byte *)(param_1[2] + uVar4);
        param_1[6] = uVar4 + 1;
      }
      else if (param_1[5] == uVar4) {
        bVar3 = 0;
      }
      else {
        param_1[1] = 1;
        bVar3 = 0;
      }
      uVar5 = uVar5 | (uint)bVar3 << ((byte)uVar2 & 0x1f);
      uVar2 = uVar2 + 8;
    } while (uVar2 < 2);
  }
  uVar4 = uVar5 & 3;
  param_1[9] = uVar5 >> 2;
  param_1[10] = uVar2 - 2;
  if (param_1[1] != 0) {
    return 1;
  }
  if (uVar4 == 0) {
    iVar1 = FUN_10006510((int)param_1,0);
    return iVar1;
  }
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return 2;
    }
    iVar1 = FUN_100067b0((int)param_1);
    return iVar1;
  }
  iVar1 = FUN_10007170((int)param_1);
  return iVar1;
}



int __cdecl FUN_100067b0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_510;
  uint local_50c;
  int *local_508;
  uint local_504;
  uint local_500;
  uint local_4fc;
  uint local_4f8;
  uint local_4f4;
  uint local_4f0 [316];
  
  local_510 = *(uint *)(param_1 + 0x24);
  uVar10 = *(uint *)(param_1 + 0x28);
  if (uVar10 < 5) {
    do {
      uVar8 = *(uint *)(param_1 + 0x18);
      if (uVar8 < *(uint *)(param_1 + 0x14)) {
        bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar8);
        *(uint *)(param_1 + 0x18) = uVar8 + 1;
      }
      else if (*(uint *)(param_1 + 0x14) == uVar8) {
        bVar6 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 1;
        bVar6 = 0;
      }
      bVar7 = (byte)uVar10;
      uVar10 = uVar10 + 8;
      local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
    } while (uVar10 < 5);
  }
  uVar10 = uVar10 - 5;
  uVar8 = local_510 >> 5;
  local_500 = (local_510 & 0x1f) + 0x101;
  local_510 = uVar8;
  if (uVar10 < 5) {
    do {
      uVar8 = *(uint *)(param_1 + 0x18);
      if (uVar8 < *(uint *)(param_1 + 0x14)) {
        bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar8);
        *(uint *)(param_1 + 0x18) = uVar8 + 1;
      }
      else if (*(uint *)(param_1 + 0x14) == uVar8) {
        bVar6 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 1;
        bVar6 = 0;
      }
      bVar7 = (byte)uVar10;
      uVar10 = uVar10 + 8;
      local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
    } while (uVar10 < 5);
  }
  uVar10 = uVar10 - 5;
  uVar8 = local_510 >> 5;
  local_4f8 = (local_510 & 0x1f) + 1;
  local_510 = uVar8;
  if (uVar10 < 4) {
    do {
      uVar8 = *(uint *)(param_1 + 0x18);
      if (uVar8 < *(uint *)(param_1 + 0x14)) {
        bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar8);
        *(uint *)(param_1 + 0x18) = uVar8 + 1;
      }
      else if (*(uint *)(param_1 + 0x14) == uVar8) {
        bVar6 = 0;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 1;
        bVar6 = 0;
      }
      bVar7 = (byte)uVar10;
      uVar10 = uVar10 + 8;
      local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
    } while (uVar10 < 4);
  }
  uVar10 = uVar10 - 4;
  uVar8 = local_510 >> 4;
  uVar1 = (local_510 & 0xf) + 4;
  if (((*(int *)(param_1 + 4) == 0) && (local_500 < 0x11f)) && (local_4f8 < 0x1f)) {
    local_50c = 0;
    local_510 = uVar8;
    if (uVar1 != 0) {
      local_508 = &DAT_10014498;
      local_4fc = uVar1;
      do {
        if (uVar10 < 3) {
          do {
            uVar8 = *(uint *)(param_1 + 0x18);
            if (uVar8 < *(uint *)(param_1 + 0x14)) {
              bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar8);
              *(uint *)(param_1 + 0x18) = uVar8 + 1;
            }
            else if (*(uint *)(param_1 + 0x14) == uVar8) {
              bVar6 = 0;
            }
            else {
              *(undefined4 *)(param_1 + 4) = 1;
              bVar6 = 0;
            }
            bVar7 = (byte)uVar10;
            uVar10 = uVar10 + 8;
            local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
          } while (uVar10 < 3);
        }
        uVar8 = local_510 & 7;
        uVar10 = uVar10 - 3;
        local_510 = local_510 >> 3;
        local_4fc = local_4fc - 1;
        local_4f0[*local_508] = uVar8;
        local_50c = uVar1;
        local_508 = local_508 + 1;
      } while (local_4fc != 0);
    }
    if (local_50c < 0x13) {
      piVar2 = &DAT_10014498 + local_50c;
      do {
        iVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        local_4f0[iVar3] = 0;
      } while (piVar2 < &DAT_100144e4);
    }
    if (*(int *)(param_1 + 4) != 0) {
      return 1;
    }
    local_504 = 7;
    iVar3 = FUN_10006d30((int *)local_4f0,0x13,0x13,0,0,param_1 + 0x54,800,&local_504);
    if (iVar3 == 0) {
      uVar8 = local_500 + local_4f8;
      local_4fc = (uint)*(ushort *)(&DAT_100145e8 + local_504 * 2);
      uVar1 = 0;
      local_508 = (int *)0x0;
      if (uVar8 != 0) {
        do {
          if (uVar10 < local_504) {
            do {
              uVar4 = *(uint *)(param_1 + 0x18);
              if (uVar4 < *(uint *)(param_1 + 0x14)) {
                bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar4);
                *(uint *)(param_1 + 0x18) = uVar4 + 1;
              }
              else if (*(uint *)(param_1 + 0x14) == uVar4) {
                bVar6 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 4) = 1;
                bVar6 = 0;
              }
              bVar7 = (byte)uVar10;
              uVar10 = uVar10 + 8;
              local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
            } while (uVar10 < local_504);
          }
          if (*(int *)(param_1 + 4) != 0) {
            return 1;
          }
          uVar4 = local_510 & local_4fc;
          bVar6 = *(byte *)(param_1 + 0x55 + uVar4 * 8);
          uVar10 = uVar10 - bVar6;
          local_510 = local_510 >> (bVar6 & 0x1f);
          uVar4 = (uint)*(ushort *)(param_1 + uVar4 * 8 + 0x58);
          if (uVar4 < 0x10) {
            local_4f0[uVar1] = uVar4;
            uVar1 = uVar1 + 1;
            local_508 = (int *)uVar4;
          }
          else if (uVar4 == 0x10) {
            if (uVar10 < 2) {
              do {
                uVar4 = *(uint *)(param_1 + 0x18);
                if (uVar4 < *(uint *)(param_1 + 0x14)) {
                  bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar4);
                  *(uint *)(param_1 + 0x18) = uVar4 + 1;
                }
                else if (*(uint *)(param_1 + 0x14) == uVar4) {
                  bVar6 = 0;
                }
                else {
                  *(undefined4 *)(param_1 + 4) = 1;
                  bVar6 = 0;
                }
                bVar7 = (byte)uVar10;
                uVar10 = uVar10 + 8;
                local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
              } while (uVar10 < 2);
            }
            if (*(int *)(param_1 + 4) != 0) {
              return 1;
            }
            uVar10 = uVar10 - 2;
            uVar4 = local_510 >> 2;
            uVar9 = local_510 & 3;
            local_510 = uVar4;
            if (uVar8 < uVar1 + 3 + uVar9) goto LAB_10006c4d;
            if (uVar9 != 0xfffffffd) {
              iVar3 = uVar9 + 2;
              puVar5 = local_4f0 + uVar1;
              do {
                uVar1 = uVar1 + 1;
                *puVar5 = (uint)local_508;
                bVar11 = iVar3 != 0;
                iVar3 = iVar3 + -1;
                puVar5 = puVar5 + 1;
              } while (bVar11);
            }
          }
          else if (uVar4 == 0x11) {
            if (uVar10 < 3) {
              do {
                uVar4 = *(uint *)(param_1 + 0x18);
                if (uVar4 < *(uint *)(param_1 + 0x14)) {
                  bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar4);
                  *(uint *)(param_1 + 0x18) = uVar4 + 1;
                }
                else if (*(uint *)(param_1 + 0x14) == uVar4) {
                  bVar6 = 0;
                }
                else {
                  *(undefined4 *)(param_1 + 4) = 1;
                  bVar6 = 0;
                }
                bVar7 = (byte)uVar10;
                uVar10 = uVar10 + 8;
                local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
              } while (uVar10 < 3);
            }
            if (*(int *)(param_1 + 4) != 0) {
              return 1;
            }
            uVar10 = uVar10 - 3;
            uVar4 = local_510 >> 3;
            uVar9 = local_510 & 7;
            local_510 = uVar4;
            if (uVar8 < uVar1 + 3 + uVar9) {
LAB_10006c4d:
              *(undefined4 *)(param_1 + 4) = 2;
              break;
            }
            if (uVar9 != 0xfffffffd) {
              puVar5 = local_4f0 + uVar1;
              iVar3 = uVar9 + 2;
              do {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
                uVar1 = uVar1 + 1;
                bVar11 = iVar3 != 0;
                iVar3 = iVar3 + -1;
              } while (bVar11);
            }
            local_508 = (int *)0x0;
          }
          else {
            if (uVar10 < 7) {
              do {
                uVar4 = *(uint *)(param_1 + 0x18);
                if (uVar4 < *(uint *)(param_1 + 0x14)) {
                  bVar6 = *(byte *)(*(int *)(param_1 + 8) + uVar4);
                  *(uint *)(param_1 + 0x18) = uVar4 + 1;
                }
                else if (*(uint *)(param_1 + 0x14) == uVar4) {
                  bVar6 = 0;
                }
                else {
                  *(undefined4 *)(param_1 + 4) = 1;
                  bVar6 = 0;
                }
                bVar7 = (byte)uVar10;
                uVar10 = uVar10 + 8;
                local_510 = local_510 | (uint)bVar6 << (bVar7 & 0x1f);
              } while (uVar10 < 7);
            }
            if (*(int *)(param_1 + 4) != 0) {
              return 1;
            }
            uVar10 = uVar10 - 7;
            uVar4 = local_510 >> 7;
            uVar9 = local_510 & 0x7f;
            local_510 = uVar4;
            if (uVar8 < uVar1 + 0xb + uVar9) goto LAB_10006c4d;
            if (uVar9 != 0xfffffff5) {
              puVar5 = local_4f0 + uVar1;
              iVar3 = uVar9 + 10;
              do {
                *puVar5 = 0;
                puVar5 = puVar5 + 1;
                uVar1 = uVar1 + 1;
                bVar11 = iVar3 != 0;
                iVar3 = iVar3 + -1;
              } while (bVar11);
            }
            local_508 = (int *)0x0;
          }
        } while (uVar1 < uVar8);
      }
      if (*(int *)(param_1 + 4) != 0) {
        return 1;
      }
      *(uint *)(param_1 + 0x24) = local_510;
      *(uint *)(param_1 + 0x28) = uVar10;
      local_504 = 9;
      iVar3 = FUN_10006d30((int *)local_4f0,local_500,0x101,0x100144e8,0x10014528,param_1 + 0x54,800
                           ,&local_504);
      if (iVar3 == 0) {
        local_4f4 = 6;
        iVar3 = FUN_10006d30((int *)(local_4f0 + local_500),local_4f8,0,0x10014568,0x100145a8,
                             param_1 + 0x1954,0x96,&local_4f4);
        if (iVar3 == 0) {
          iVar3 = FUN_10005e60(param_1,param_1 + 0x54,param_1 + 0x1954,local_504,local_4f4,0);
          return iVar3;
        }
      }
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}



undefined4 __cdecl
FUN_10006d30(int *param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,uint param_7
            ,uint *param_8)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  uint local_584;
  char local_57c;
  int local_578;
  undefined4 local_574;
  int local_570;
  uint local_568;
  uint *local_564;
  int local_560;
  uint local_55c;
  int local_558;
  uint local_554;
  uint local_548 [34];
  int local_4c0 [15];
  uint auStack_484 [289];
  
  local_554 = 0;
  puVar3 = local_548;
  for (iVar5 = 0x11; uVar2 = param_2, piVar6 = param_1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    local_548[*piVar6] = local_548[*piVar6] + 1;
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 1;
  } while (uVar2 != 0);
  if (local_548[0] == param_2) {
    *param_8 = 0;
    return 0;
  }
  uVar2 = 1;
  puVar3 = local_548 + 1;
  do {
    if (*puVar3 != 0) break;
    puVar3 = puVar3 + 1;
    uVar2 = uVar2 + 1;
  } while (puVar3 <= local_548 + 0x10);
  uVar9 = *param_8;
  if (*param_8 < uVar2) {
    uVar9 = uVar2;
  }
  uVar11 = 0x10;
  puVar3 = local_548 + 0x10;
  do {
    if (*puVar3 != 0) break;
    puVar3 = puVar3 + -1;
    uVar11 = uVar11 - 1;
  } while (puVar3 != local_548);
  if (uVar11 < uVar9) {
    uVar9 = uVar11;
  }
  *param_8 = uVar9;
  local_578 = 1 << ((byte)uVar2 & 0x1f);
  if (uVar2 < uVar11) {
    puVar3 = local_548 + uVar2;
    uVar7 = uVar2;
    do {
      uVar4 = *puVar3;
      if ((int)(local_578 - uVar4) < 0) {
        return 2;
      }
      puVar3 = puVar3 + 1;
      uVar7 = uVar7 + 1;
      local_578 = (local_578 - uVar4) * 2;
    } while (uVar7 < uVar11);
  }
  uVar7 = local_548[uVar11];
  local_578 = local_578 - uVar7;
  if (local_578 < 0) {
    return 2;
  }
  puVar3 = local_548 + 0x13;
  local_548[uVar11] = uVar7 + local_578;
  uVar7 = 0;
  puVar1 = local_548;
  local_548[0x12] = 0;
  uVar4 = uVar11;
  while (puVar1 = puVar1 + 1, uVar4 = uVar4 - 1, uVar4 != 0) {
    uVar7 = uVar7 + *puVar1;
    *puVar3 = uVar7;
    puVar3 = puVar3 + 1;
  }
  uVar7 = 0;
  do {
    iVar5 = *param_1;
    param_1 = param_1 + 1;
    if (iVar5 != 0) {
      uVar4 = local_548[iVar5 + 0x11] + 1;
      local_548[iVar5 + 0x11] = uVar4;
      auStack_484[uVar4] = uVar7;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < param_2);
  local_564 = auStack_484 + 1;
  local_584 = 0;
  local_548[0x11] = 0;
  local_4c0[0] = 0;
  local_560 = 0;
  iVar5 = -uVar9;
  local_55c = 0;
  local_558 = -1;
  do {
    if ((int)uVar11 < (int)uVar2) {
      if ((local_578 != 0) && (uVar11 != 1)) {
        return 1;
      }
      return 0;
    }
    local_568 = local_548[uVar2];
    while( true ) {
      uVar7 = local_568 - 1;
      if (local_568 == 0) break;
      if ((int)(uVar9 + iVar5) < (int)uVar2) {
        iVar15 = local_558 << 2;
        do {
          iVar5 = iVar5 + uVar9;
          local_558 = local_558 + 1;
          uVar4 = (uVar11 & 0xffff) - iVar5;
          if (uVar9 < uVar4) {
            uVar4 = uVar9 & 0xffff;
          }
          uVar8 = uVar2 - iVar5;
          uVar12 = 1 << ((byte)uVar8 & 0x1f);
          if (local_568 < uVar12) {
            iVar13 = uVar12 - local_568;
            puVar3 = local_548 + uVar2;
            while (uVar8 = uVar8 + 1, uVar8 < uVar4) {
              puVar3 = puVar3 + 1;
              if ((uint)(iVar13 * 2) <= *puVar3) break;
              iVar13 = iVar13 * 2 - *puVar3;
            }
          }
          local_55c = 1 << ((byte)uVar8 & 0x1f);
          local_560 = param_6 + local_554 * 8;
          local_554 = local_554 + local_55c;
          if (param_7 < local_554) {
            return 3;
          }
          *(int *)((int)local_4c0 + iVar15 + 4) = local_560;
          if (iVar15 + 4 != 0) {
            *(uint *)((int)local_548 + iVar15 + 0x48) = local_584;
            local_574 = CONCAT31(CONCAT21(local_574._2_2_,(char)uVar9),(byte)uVar8 + 0x10);
            puVar14 = (undefined4 *)
                      ((local_584 >> ((char)iVar5 - (char)uVar9 & 0x1fU)) * 8 +
                      *(int *)((int)local_4c0 + iVar15));
            *puVar14 = local_574;
            puVar14[1] = local_560;
            local_570 = local_560;
          }
          iVar15 = iVar15 + 4;
        } while ((int)(uVar9 + iVar5) < (int)uVar2);
      }
      local_57c = (char)uVar2;
      bVar10 = (byte)iVar5;
      if (local_564 < auStack_484 + param_2 + 1) {
        uVar4 = *local_564;
        if (uVar4 < param_3) {
          local_574._0_1_ = (uVar4 < 0x100) + '\x0f';
        }
        else {
          iVar15 = (uVar4 - param_3) * 2;
          local_574._0_1_ = *(char *)(iVar15 + param_5);
          uVar4 = (uint)*(ushort *)(param_4 + iVar15);
        }
        local_564 = local_564 + 1;
        local_570 = CONCAT22(local_570._2_2_,(short)uVar4);
      }
      else {
        local_574._0_1_ = 'c';
      }
      local_574 = CONCAT31(CONCAT21(local_574._2_2_,local_57c - bVar10),(char)local_574);
      iVar15 = 1 << (local_57c - bVar10 & 0x1f);
      uVar4 = local_584 >> (bVar10 & 0x1f);
      if (uVar4 < local_55c) {
        puVar14 = (undefined4 *)(local_560 + uVar4 * 8);
        do {
          uVar4 = uVar4 + iVar15;
          *puVar14 = local_574;
          puVar14[1] = local_570;
          puVar14 = puVar14 + iVar15 * 2;
        } while (uVar4 < local_55c);
      }
      uVar8 = 1 << (local_57c - 1U & 0x1f);
      uVar4 = local_584 & uVar8;
      while (uVar4 != 0) {
        local_584 = local_584 ^ uVar8;
        uVar8 = uVar8 >> 1;
        uVar4 = local_584 & uVar8;
      }
      local_584 = local_584 ^ uVar8;
      puVar3 = local_548 + local_558 + 0x11;
      local_568 = uVar7;
      if (((1 << (bVar10 & 0x1f)) - 1U & local_584) != *puVar3) {
        do {
          puVar3 = puVar3 + -1;
          iVar5 = iVar5 - uVar9;
          local_558 = local_558 + -1;
        } while (((1 << ((byte)iVar5 & 0x1f)) - 1U & local_584) != *puVar3);
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



void __cdecl FUN_10007170(int param_1)

{
  FUN_10005e60(param_1,0x10018438,0x10018338,9,5,0);
  return;
}



undefined4 * __cdecl FUN_10007190(undefined *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)param_1)(0x1e04);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar2 = 0x781; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (DAT_1001460c == 0) {
      FUN_100071d0();
      DAT_1001460c = 1;
    }
  }
  return puVar1;
}



int FUN_100071d0(void)

{
  uint uVar1;
  int iVar2;
  uint local_484;
  int local_480 [280];
  int aiStack_20 [8];
  
  local_484 = 0;
  do {
    uVar1 = local_484 + 1;
    local_480[local_484] = 8;
    local_484 = uVar1;
  } while ((int)uVar1 < 0x90);
  for (; (int)uVar1 < 0x100; uVar1 = uVar1 + 1) {
    local_480[uVar1] = 9;
  }
  for (; (int)uVar1 < 0x118; uVar1 = uVar1 + 1) {
    local_480[uVar1] = 7;
  }
  for (; (int)uVar1 < 0x120; uVar1 = uVar1 + 1) {
    local_480[uVar1] = 8;
  }
  local_484 = 9;
  iVar2 = FUN_10006d30(local_480,0x120,0x101,0x100144e8,0x10014528,0x10018438,0x208,&local_484);
  if (iVar2 == 0) {
    local_484 = 0;
    do {
      uVar1 = local_484 + 1;
      local_480[local_484] = 5;
      local_484 = uVar1;
    } while ((int)uVar1 < 0x1e);
    local_484 = 5;
    iVar2 = FUN_10006d30(local_480,0x1e,0,0x10014568,0x100145a8,0x10018338,0x20,&local_484);
    if (iVar2 < 2) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



void __cdecl FUN_10007300(undefined4 param_1,undefined *param_2)

{
  (*(code *)param_2)(param_1);
  return;
}



bool __cdecl FUN_10007310(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 4;
  *(undefined1 *)((int)param_1 + 0x2eb5) = 4;
  do {
    bVar1 = *(byte *)((int)param_1 + 0x2eb5);
    *(byte *)((int)param_1 + 0x2eb5) = bVar1 + 1;
    uVar3 = uVar3 + (1 << ((&DAT_100121d0)[bVar1] & 0x1f));
  } while (uVar3 < (uint)param_1[1]);
  iVar2 = (*(code *)param_1[3000])(param_1[1] + 0x105);
  *param_1 = iVar2;
  return (bool)('\x01' - (iVar2 == 0));
}



void __cdecl FUN_10007370(int *param_1)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0xbb9])(*param_1);
    *param_1 = 0;
  }
  return;
}



void __cdecl FUN_10007390(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0xa18);
  for (uVar1 = (uint)*(byte *)(param_1 + 0x2eb5) * 8 + 0x100 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x2b14);
  for (uVar1 = (uint)*(byte *)(param_1 + 0x2eb5) * 8 + 0x100 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0xcb8);
  for (iVar2 = 0x3e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x2db4);
  for (iVar2 = 0x3e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  return;
}



void __cdecl FUN_100073f0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x2ec0) = 0;
  *(undefined4 *)(param_1 + 0x2b10) = 0;
  *(undefined4 *)(param_1 + 0x2edc) = 1;
  *(undefined4 *)(param_1 + 0x2ed4) = 0;
  *(undefined4 *)(param_1 + 0x2ed8) = 0;
  *(undefined4 *)(param_1 + 0x2eb8) = 1;
  *(undefined4 *)(param_1 + 0x2ec4) = 0;
  *(undefined4 *)(param_1 + 0x2ebc) = 0;
  return;
}



void __cdecl FUN_10007440(int param_1)

{
  *(undefined4 *)(param_1 + 0x2ec8) = 0;
  return;
}



void __cdecl FUN_10007450(int param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1000845c(param_2,*(undefined4 *)(param_1 + 0x2ec4),*(char **)(param_1 + 0x2ec8),
                       *(undefined4 *)(param_1 + 0x2ec4),(char *)param_2,param_3);
  *(int *)(param_1 + 0x2ec8) = (int)uVar1;
  return;
}



uint __cdecl FUN_10007480(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint local_4;
  
  local_4 = 0;
  if (0 < param_2) {
    do {
      if (param_1[2999] == 1) {
        if (param_1[0xbae] != 0) {
          param_1[0xbae] = 0;
          uVar1 = FUN_10007880((int)param_1,1);
          if (uVar1 == 0) {
            param_1[0xbb1] = 0;
          }
          else {
            uVar1 = FUN_10007880((int)param_1,0x10);
            uVar2 = FUN_10007880((int)param_1,0x10);
            param_1[0xbb1] = uVar1 << 0x10 | uVar2;
          }
        }
        if (param_1[0xbb6] == 3) {
          if (((*(byte *)(param_1 + 0xbb4) & 1) != 0) &&
             ((uint)param_1[0xac1] < (uint)param_1[0xac2])) {
            param_1[0xac1] = param_1[0xac1] + 1;
          }
          param_1[0xbb6] = 0;
          FUN_10007750((int)param_1);
        }
        uVar1 = FUN_10007880((int)param_1,3);
        param_1[0xbb6] = uVar1;
        uVar1 = FUN_10007880((int)param_1,8);
        uVar2 = FUN_10007880((int)param_1,8);
        uVar3 = FUN_10007880((int)param_1,8);
        iVar4 = uVar3 + (uVar1 * 0x100 + uVar2) * 0x100;
        param_1[0xbb4] = iVar4;
        param_1[0xbb5] = iVar4;
        if (param_1[0xbb6] == 2) {
          FUN_100088d0((int)param_1);
        }
        iVar4 = param_1[0xbb6];
        if ((iVar4 == 1) || (iVar4 == 2)) {
          piVar6 = param_1 + 0x286;
          piVar7 = param_1 + 0xac5;
          for (uVar1 = (uint)*(byte *)((int)param_1 + 0x2eb5) * 8 + 0x100 >> 2; uVar1 != 0;
              uVar1 = uVar1 - 1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          piVar6 = param_1 + 0x32e;
          piVar7 = param_1 + 0xb6d;
          for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          *(char *)piVar7 = (char)*piVar6;
          FUN_10008580((int)param_1);
        }
        else {
          if (iVar4 != 3) {
            return 0xffffffff;
          }
          iVar4 = FUN_100089a0((int)param_1);
          if (iVar4 == 0) {
            return 0xffffffff;
          }
        }
        param_1[2999] = 2;
      }
      iVar4 = param_1[0xbb5];
      if (0 < iVar4) {
        do {
          if (param_2 < 1) break;
          iVar4 = param_1[0xbb5];
          if (param_2 <= param_1[0xbb5]) {
            iVar4 = param_2;
          }
          if (iVar4 == 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_100076e0(param_1,param_1[0xbb6],param_1[0xbb0],iVar4);
          if (iVar5 != 0) {
            return 0xffffffff;
          }
          iVar5 = param_1[0xbb5];
          param_2 = param_2 - iVar4;
          local_4 = local_4 + iVar4;
          param_1[0xbb5] = iVar5 - iVar4;
        } while (0 < iVar5 - iVar4);
        iVar4 = param_1[0xbb5];
      }
      if (iVar4 == 0) {
        param_1[2999] = 1;
      }
      if (param_2 == 0) {
        FUN_10007750((int)param_1);
      }
    } while (0 < param_2);
  }
  iVar4 = param_1[0xbb0];
  if (iVar4 == 0) {
    iVar4 = param_1[1];
  }
  FUN_10008530((int)param_1,local_4,(undefined4 *)((iVar4 - local_4) + *param_1));
  return local_4;
}



int __cdecl FUN_100076e0(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = FUN_10009080(param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 1) {
    iVar1 = FUN_10008a10(param_3,param_1,param_1,param_3,param_4);
    return iVar1;
  }
  if (param_2 == 3) {
    iVar1 = FUN_10008920(param_1,param_3,param_4);
    return iVar1;
  }
  return -1;
}



void __cdecl FUN_10007750(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  if (*(int *)(param_1 + 0x2ed8) != 3) {
    pbVar5 = *(byte **)(param_1 + 0x2b04);
    bVar1 = pbVar5[1];
    bVar2 = pbVar5[3];
    bVar3 = pbVar5[2];
    bVar4 = *pbVar5;
    *(byte **)(param_1 + 0x2b04) = pbVar5 + 4;
    *(undefined1 *)(param_1 + 0x2eb4) = 0x10;
    *(uint *)(param_1 + 0x2eb0) =
         ((uint)bVar1 << 0x10 | (uint)bVar2) << 8 | (uint)bVar3 | (uint)bVar4 << 0x10;
  }
  return;
}



void __cdecl FUN_100077a0(int param_1)

{
  FUN_10007750(param_1);
  return;
}



void __cdecl FUN_100077b0(int param_1,byte param_2)

{
  ushort *puVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar5 = *(int *)(param_1 + 0x2eb0) << (param_2 & 0x1f);
  cVar3 = *(char *)(param_1 + 0x2eb4) - param_2;
  *(uint *)(param_1 + 0x2eb0) = uVar5;
  *(char *)(param_1 + 0x2eb4) = cVar3;
  if (cVar3 < '\x01') {
    puVar1 = *(ushort **)(param_1 + 0x2b04);
    if (*(ushort **)(param_1 + 0x2b08) <= puVar1) {
      *(undefined4 *)(param_1 + 0x2ebc) = 1;
      return;
    }
    uVar2 = *puVar1;
    puVar6 = puVar1 + 1;
    *(ushort **)(param_1 + 0x2b04) = puVar6;
    cVar4 = cVar3 + '\x10';
    uVar5 = (uint)uVar2 << (-cVar3 & 0x1fU) | uVar5;
    *(char *)(param_1 + 0x2eb4) = cVar4;
    *(uint *)(param_1 + 0x2eb0) = uVar5;
    if (cVar4 < '\x01') {
      if (*(ushort **)(param_1 + 0x2b08) <= puVar6) {
        *(undefined4 *)(param_1 + 0x2ebc) = 1;
        return;
      }
      uVar2 = *puVar6;
      *(ushort **)(param_1 + 0x2b04) = puVar1 + 2;
      *(char *)(param_1 + 0x2eb4) = cVar3 + ' ';
      *(uint *)(param_1 + 0x2eb0) = (uint)uVar2 << (-cVar4 & 0x1fU) | uVar5;
    }
  }
  return;
}



uint __cdecl FUN_10007880(int param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2eb0);
  FUN_100077b0(param_1,param_2);
  return uVar1 >> (0x20 - param_2 & 0x1f);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_100078b0(byte param_1)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  do {
    *(int *)((int)&DAT_10019a40 + iVar4) = iVar5;
    if (0 < 1 << ((&DAT_10014610)[iVar4] & 0x1f)) {
      iVar5 = iVar5 + (1 << ((&DAT_10014610)[iVar4] & 0x1f));
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x6c);
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0;
  do {
    if (iVar5 < 1 << (param_1 & 0x1f)) {
      DAT_1001a7c0 = iVar6 + 1;
      if (iVar5 < 0x1000) {
        DAT_1001a9d0 = DAT_1001a7c0;
      }
      if (iVar5 < 0x40000) {
        DAT_1001abe0 = DAT_1001a7c0;
      }
    }
    pbVar1 = &DAT_10014680 + iVar4;
    *(int *)((int)&DAT_10019aac + iVar4) = iVar5;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + (1 << (*pbVar1 & 0x1f));
    iVar6 = iVar6 + 1;
  } while (iVar4 < 0xa8);
  iVar4 = 0;
  _DAT_10019b60 = 7;
  _DAT_10019b64 = 4;
  piVar2 = &DAT_10019b68;
  do {
    piVar3 = piVar2 + 2;
    *piVar2 = 7 - iVar4;
    piVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    piVar2 = piVar3;
  } while (piVar3 < (int *)0x10019ba1);
  _DAT_1001a3a0 = 0x40;
  _DAT_1001a190 = 0x40;
  _DAT_10019f80 = 0x40;
  _DAT_10019d70 = 0x40;
  iVar4 = 0;
  _DAT_1001a3a4 = 4;
  _DAT_1001a194 = 4;
  _DAT_10019f84 = 4;
  _DAT_10019d74 = 4;
  piVar2 = &DAT_10019d78;
  do {
    piVar3 = piVar2 + 2;
    iVar5 = 0x40 - iVar4;
    *piVar2 = iVar5;
    piVar2[0x84] = iVar5;
    piVar2[0x108] = iVar5;
    piVar2[0x18c] = iVar5;
    piVar2[1] = iVar4;
    piVar2[0x85] = iVar4;
    piVar2[0x109] = iVar4;
    piVar2[0x18d] = iVar4;
    iVar4 = iVar4 + 1;
    piVar2 = piVar3;
  } while (piVar3 < (int *)0x10019f79);
  iVar4 = 0;
  _DAT_1001a5b0 = 0x1b;
  _DAT_1001a5b4 = 4;
  piVar2 = &DAT_1001a5b8;
  do {
    piVar3 = piVar2 + 2;
    *piVar2 = 0x1b - iVar4;
    piVar2[1] = iVar4;
    iVar4 = iVar4 + 1;
    piVar2 = piVar3;
  } while (piVar3 < (int *)0x1001a691);
  iVar4 = 0;
  _DAT_1001a7c4 = 4;
  _DAT_1001a9d4 = 4;
  _DAT_1001abe4 = 4;
  piVar2 = &DAT_1001a7c8;
  do {
    piVar3 = piVar2 + 2;
    *piVar2 = DAT_1001a7c0 - iVar4;
    piVar2[0x84] = DAT_1001a9d0 - iVar4;
    piVar2[0x108] = DAT_1001abe0 - iVar4;
    piVar2[1] = iVar4;
    piVar2[0x85] = iVar4;
    piVar2[0x109] = iVar4;
    iVar4 = iVar4 + 1;
    piVar2 = piVar3;
  } while (piVar3 < (int *)0x1001a919);
  return;
}



void FUN_10007a80(void)

{
  return;
}



void __cdecl FUN_10007a90(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  
  iVar7 = *param_1;
  puVar6 = (uint *)(param_1 + 2);
  iVar5 = param_1[1];
  param_1[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    param_1[1] = 0x32;
    iVar5 = iVar7;
    puVar10 = puVar6;
    if (0 < iVar7) {
      do {
        uVar8 = *puVar10;
        *puVar10 = uVar8 - puVar10[2];
        uVar8 = (uVar8 - puVar10[2]) + 1;
        *puVar10 = uVar8;
        iVar5 = iVar5 + -1;
        *puVar10 = uVar8 >> 1;
        puVar10 = puVar10 + 2;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (0 < iVar7) {
      do {
        iVar1 = iVar5 + 1;
        if (iVar1 < iVar7) {
          iVar9 = iVar7 - iVar1;
          puVar10 = puVar6 + iVar1 * 2;
          puVar2 = puVar6 + iVar5 * 2;
          do {
            uVar8 = *puVar2;
            if (uVar8 < *puVar10) {
              uVar3 = puVar2[1];
              uVar4 = puVar10[1];
              *puVar2 = *puVar10;
              puVar2[1] = uVar4;
              *puVar10 = uVar8;
              puVar10[1] = uVar3;
            }
            puVar10 = puVar10 + 2;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        iVar5 = iVar1;
      } while (iVar1 < iVar7);
    }
    iVar7 = iVar7 + -1;
    if (-1 < iVar7) {
      puVar6 = puVar6 + iVar7 * 2;
      do {
        *puVar6 = *puVar6 + puVar6[2];
        puVar6 = puVar6 + -2;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      return;
    }
  }
  else {
    iVar7 = iVar7 + -1;
    if (-1 < iVar7) {
      puVar6 = puVar6 + iVar7 * 2;
      do {
        uVar8 = *puVar6;
        *puVar6 = uVar8 >> 1;
        if (uVar8 >> 1 <= puVar6[2]) {
          *puVar6 = puVar6[2] + 1;
        }
        puVar6 = puVar6 + -2;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  return;
}



void FUN_10007b70(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  uint local_c;
  
  local_c = CONCAT22(local_c._2_2_,(short)DAT_10019b68);
  iVar7 = 0;
  uVar3 = FUN_100082e0(local_c);
  if (uVar3 < DAT_10019b70) {
    puVar5 = &DAT_10019b70;
    do {
      puVar5 = puVar5 + 2;
      iVar7 = iVar7 + 1;
    } while (uVar3 < *puVar5);
  }
  uVar1 = (&DAT_10019b6c)[iVar7 * 2];
  FUN_10008310(CONCAT22((short)(&DAT_10019b68)[iVar7 * 2],(short)(&DAT_10019b70)[iVar7 * 2]),local_c
              );
  piVar6 = (int *)&DAT_10019b68;
  do {
    *piVar6 = *piVar6 + 8;
    piVar6 = piVar6 + 2;
    bVar8 = iVar7 != 0;
    iVar7 = iVar7 + -1;
  } while (bVar8);
  if (0xed8 < DAT_10019b68) {
    FUN_10007a90((int *)&DAT_10019b60);
  }
  switch(uVar1) {
  case 0:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_10019d78);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_10019d80) {
      puVar5 = &DAT_10019d80;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    FUN_10008310(CONCAT22((short)(&DAT_10019d78)[iVar7 * 2],(short)(&DAT_10019d80)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_10019d78;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_10019d78) {
      FUN_10007a90((int *)&DAT_10019d70);
    }
    (*DAT_1001ae30)();
    return;
  case 1:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_10019f88);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_10019f90) {
      puVar5 = &DAT_10019f90;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    FUN_10008310(CONCAT22((short)(&DAT_10019f88)[iVar7 * 2],(short)(&DAT_10019f90)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_10019f88;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_10019f88) {
      FUN_10007a90((int *)&DAT_10019f80);
    }
    (*DAT_1001ae30)();
    return;
  case 2:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001a198);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_1001a1a0) {
      puVar5 = &DAT_1001a1a0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    FUN_10008310(CONCAT22((short)(&DAT_1001a198)[iVar7 * 2],(short)(&DAT_1001a1a0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001a198;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001a198) {
      FUN_10007a90((int *)&DAT_1001a190);
    }
    (*DAT_1001ae30)();
    return;
  case 3:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001a3a8);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_1001a3b0) {
      puVar5 = &DAT_1001a3b0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    FUN_10008310(CONCAT22((short)(&DAT_1001a3a8)[iVar7 * 2],(short)(&DAT_1001a3b0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001a3a8;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001a3a8) {
      FUN_10007a90((int *)&DAT_1001a3a0);
    }
    (*DAT_1001ae30)();
    return;
  case 4:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001a9d8);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_1001a9e0) {
      puVar5 = &DAT_1001a9e0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    iVar2 = (&DAT_1001a9dc)[iVar7 * 2];
    FUN_10008310(CONCAT22((short)(&DAT_1001a9d8)[iVar7 * 2],(short)(&DAT_1001a9e0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001a9d8;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001a9d8) {
      FUN_10007a90(&DAT_1001a9d0);
    }
    uVar3 = FUN_10008240(*(int *)(&DAT_10014680 + iVar2 * 4));
    (*DAT_1001adf8)(3,(&DAT_10019aac)[iVar2] + uVar3 + 1);
    return;
  case 5:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001abe8);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_1001abf0) {
      puVar5 = &DAT_1001abf0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    iVar2 = (&DAT_1001abec)[iVar7 * 2];
    FUN_10008310(CONCAT22((short)(&DAT_1001abe8)[iVar7 * 2],(short)(&DAT_1001abf0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001abe8;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001abe8) {
      FUN_10007a90(&DAT_1001abe0);
    }
    uVar3 = FUN_10008240(*(int *)(&DAT_10014680 + iVar2 * 4));
    (*DAT_1001adf8)(4,(&DAT_10019aac)[iVar2] + uVar3 + 1);
    return;
  case 6:
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001a5b8);
    uVar3 = FUN_100082e0(local_c);
    if (uVar3 < DAT_1001a5c0) {
      puVar5 = &DAT_1001a5c0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar3 < *puVar5);
    }
    iVar2 = (&DAT_1001a5bc)[iVar7 * 2];
    FUN_10008310(CONCAT22((short)(&DAT_1001a5b8)[iVar7 * 2],(short)(&DAT_1001a5c0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001a5b8;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001a5b8) {
      FUN_10007a90((int *)&DAT_1001a5b0);
    }
    uVar3 = FUN_10008240(*(int *)(&DAT_10014610 + iVar2 * 4));
    uVar1 = (&DAT_10019a40)[iVar2];
    iVar7 = 0;
    local_c = CONCAT22(local_c._2_2_,(short)DAT_1001a7c8);
    uVar4 = FUN_100082e0(local_c);
    if (uVar4 < DAT_1001a7d0) {
      puVar5 = &DAT_1001a7d0;
      do {
        puVar5 = puVar5 + 2;
        iVar7 = iVar7 + 1;
      } while (uVar4 < *puVar5);
    }
    iVar2 = (&DAT_1001a7cc)[iVar7 * 2];
    FUN_10008310(CONCAT22((short)(&DAT_1001a7c8)[iVar7 * 2],(short)(&DAT_1001a7d0)[iVar7 * 2]),
                 local_c);
    piVar6 = (int *)&DAT_1001a7c8;
    do {
      *piVar6 = *piVar6 + 8;
      piVar6 = piVar6 + 2;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (0xed8 < DAT_1001a7c8) {
      FUN_10007a90(&DAT_1001a7c0);
    }
    uVar4 = FUN_10008240(*(int *)(&DAT_10014680 + iVar2 * 4));
    (*DAT_1001adf8)((short)uVar1 + (short)uVar3 + 5,(&DAT_10019aac)[iVar2] + uVar4 + 1);
  }
  return;
}



void FUN_10008190(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x10;
  DAT_1001947c = 0;
  do {
    DAT_10019a34 = DAT_10019a34 << 1;
    if (DAT_1001947c == 0) {
      if (DAT_1001ae2c == 0) {
        uVar2 = 0;
        DAT_1001adf4 = 1;
      }
      else {
        DAT_1001947c = 7;
        DAT_1001ae2c = DAT_1001ae2c + -1;
        cVar1 = *DAT_1001adf0;
        DAT_1001adf0 = DAT_1001adf0 + 1;
        DAT_10019478 = (int)cVar1 << 1;
        uVar2 = DAT_10019478 & 0x100;
      }
    }
    else {
      DAT_10019478 = DAT_10019478 << 1;
      DAT_1001947c = DAT_1001947c + -1;
      uVar2 = DAT_10019478 & 0x100;
    }
    if (uVar2 != 0) {
      DAT_10019a34 = DAT_10019a34 | 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_10019a30 = 0;
  DAT_10019a32 = 0xffff;
  return;
}



uint __cdecl FUN_10008240(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    do {
      param_1 = param_1 + -1;
      uVar2 = uVar2 * 2;
      if (DAT_1001947c == 0) {
        if (DAT_1001ae2c == 0) {
          uVar3 = 0;
          DAT_1001adf4 = 1;
        }
        else {
          DAT_1001947c = 7;
          DAT_1001ae2c = DAT_1001ae2c + -1;
          cVar1 = *DAT_1001adf0;
          DAT_1001adf0 = DAT_1001adf0 + 1;
          DAT_10019478 = (int)cVar1 << 1;
          uVar3 = DAT_10019478 & 0x100;
        }
      }
      else {
        DAT_10019478 = DAT_10019478 << 1;
        DAT_1001947c = DAT_1001947c + -1;
        uVar3 = DAT_10019478 & 0x100;
      }
      if (uVar3 != 0) {
        uVar2 = uVar2 | 1;
      }
    } while (param_1 != 0);
  }
  return uVar2;
}



int __fastcall FUN_100082e0(uint param_1)

{
  return (int)(short)(((((uint)DAT_10019a34 - (uint)DAT_10019a30) + 1) * (param_1 & 0xffff) - 1) /
                     (((uint)DAT_10019a32 - (uint)DAT_10019a30) + 1));
}



void FUN_10008310(uint param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = ((uint)DAT_10019a32 - (uint)DAT_10019a30) + 1;
  DAT_10019a32 = (DAT_10019a30 + (short)(((param_1 >> 0x10) * iVar3) / (param_2 & 0xffff))) - 1;
  DAT_10019a30 = DAT_10019a30 + (short)(((param_1 & 0xffff) * iVar3) / (param_2 & 0xffff));
  do {
    if (((DAT_10019a32 ^ DAT_10019a30) & 0x8000) != 0) {
      if (((DAT_10019a30 & 0x4000) == 0) || ((DAT_10019a32 & 0x4000) != 0)) {
        return;
      }
      DAT_10019a34 = DAT_10019a34 ^ 0x4000;
      DAT_10019a30 = DAT_10019a30 & 0x3fff;
      DAT_10019a32 = DAT_10019a32 | 0x4000;
    }
    DAT_10019a30 = DAT_10019a30 << 1;
    DAT_10019a32 = DAT_10019a32 << 1;
    DAT_10019a34 = DAT_10019a34 << 1;
    DAT_10019a32 = DAT_10019a32 | 1;
    if (DAT_1001947c == 0) {
      if (DAT_1001ae2c == 0) {
        uVar2 = 0;
        DAT_1001adf4 = 1;
      }
      else {
        DAT_1001947c = 7;
        DAT_1001ae2c = DAT_1001ae2c + -1;
        cVar1 = *DAT_1001adf0;
        DAT_1001adf0 = DAT_1001adf0 + 1;
        DAT_10019478 = (int)cVar1 << 1;
        uVar2 = DAT_10019478 & 0x100;
      }
    }
    else {
      DAT_10019478 = DAT_10019478 << 1;
      DAT_1001947c = DAT_1001947c + -1;
      uVar2 = DAT_10019478 & 0x100;
    }
    if (uVar2 != 0) {
      DAT_10019a34 = DAT_10019a34 | 1;
    }
  } while( true );
}



undefined8 __fastcall
FUN_1000845c(undefined4 param_1,undefined4 param_2,char *param_3,uint param_4,char *param_5,
            int param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (param_6 < 6) {
    return CONCAT44(param_2,param_3 + param_6);
  }
  pcVar8 = param_3 + param_6;
  pcVar4 = param_5 + param_6 + -6;
  uVar2 = *(undefined4 *)pcVar4;
  uVar1 = *(undefined2 *)(param_5 + param_6 + -2);
  pcVar4[0] = -0x18;
  pcVar4[1] = -0x18;
  pcVar4[2] = -0x18;
  pcVar4[3] = -0x18;
  (param_5 + param_6 + -2)[0] = -0x18;
  (param_5 + param_6 + -2)[1] = -0x18;
  pcVar6 = param_5;
  pcVar5 = param_5;
  do {
    while (*pcVar5 == -0x18) {
LAB_100084db:
      pcVar7 = pcVar5 + ((int)param_3 - (int)pcVar6);
      if ((int)(pcVar8 + -6) <= (int)pcVar7) {
        *(undefined4 *)pcVar4 = uVar2;
        *(undefined2 *)(param_5 + param_6 + -2) = uVar1;
        return CONCAT44(param_2,pcVar8);
      }
      uVar3 = *(uint *)(pcVar5 + 1);
      pcVar6 = pcVar5 + 5;
      if (uVar3 < param_4) {
        *(int *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) - (int)pcVar7;
        param_3 = pcVar7 + 5;
        pcVar5 = pcVar6;
      }
      else {
        if ((char *)-uVar3 < pcVar7 || -(int)pcVar7 == uVar3) {
          *(uint *)(pcVar5 + 1) = *(int *)(pcVar5 + 1) + param_4;
        }
        param_3 = pcVar7 + 5;
        pcVar5 = pcVar6;
      }
    }
    if (pcVar5[1] == -0x18) {
      pcVar5 = pcVar5 + 1;
      goto LAB_100084db;
    }
    if (pcVar5[2] == -0x18) {
      pcVar5 = pcVar5 + 2;
      goto LAB_100084db;
    }
    if (pcVar5[3] == -0x18) {
      pcVar5 = pcVar5 + 3;
      goto LAB_100084db;
    }
    pcVar5 = pcVar5 + 4;
  } while( true );
}



void __cdecl FUN_10008530(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x2b0c);
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  if ((*(int *)(param_1 + 0x2ec4) != 0) && (*(uint *)(param_1 + 0x2ecc) < 0x8000)) {
    FUN_10007450(param_1,*(undefined4 *)(param_1 + 0x2b0c),param_2);
  }
  return;
}



bool __cdecl FUN_10008580(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined8 uVar3;
  
  bVar2 = FUN_10008660(param_1,0x100,param_1 + 0x2b14,param_1 + 0xa18);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return false;
  }
  bVar2 = FUN_10008660(param_1,(uint)*(byte *)(param_1 + 0x2eb5) << 3,param_1 + 0x2c14,
                       param_1 + 0xb18);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    return false;
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x2eb5) * 8 + 0x100;
  uVar3 = FUN_1000943c(iVar1,extraout_EDX,param_1,iVar1,param_1 + 0xa18,10,
                       (undefined4 *)(param_1 + 0x18),param_1 + 0xe3c);
  if ((int)uVar3 == 0) {
    return false;
  }
  bVar2 = FUN_10008660(param_1,0xf9,param_1 + 0x2db4,param_1 + 0xcb8);
  if (CONCAT31(extraout_var_01,bVar2) == 0) {
    return false;
  }
  uVar3 = FUN_1000943c(param_1 + 0x818,extraout_EDX_00,param_1,0xf9,param_1 + 0xcb8,8,
                       (undefined4 *)(param_1 + 0x818),param_1 + 0x233c);
  return (bool)('\x01' - ((int)uVar3 == 0));
}



bool __cdecl FUN_10008660(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte local_2d4 [24];
  short local_2bc [94];
  short local_200 [256];
  
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 1;
    uVar2 = FUN_10007880(param_1,4);
    local_2d4[iVar5] = (byte)uVar2;
    iVar5 = iVar4;
  } while (iVar4 < 0x14);
  if (*(int *)(param_1 + 0x2ebc) != 0) {
    return false;
  }
  iVar5 = 0;
  FUN_1000943c(local_200,local_2d4,param_1,0x14,(int)local_2d4,8,(undefined4 *)local_200,
               (int)local_2bc);
  if (0 < param_2) {
    do {
      sVar3 = *(short *)((int)local_200 + ((*(uint *)(param_1 + 0x2eb0) & 0xff7fffff) >> 0x17));
      if (sVar3 < 0) {
        uVar2 = 0x800000;
        do {
          if ((uVar2 & *(uint *)(param_1 + 0x2eb0)) == 0) {
            sVar3 = local_2bc[-sVar3 * 2];
          }
          else {
            sVar3 = local_2bc[-sVar3 * 2 + 1];
          }
          uVar2 = uVar2 >> 1;
        } while (sVar3 < 0);
      }
      FUN_100077b0(param_1,local_2d4[sVar3]);
      if (*(int *)(param_1 + 0x2ebc) != 0) {
        return false;
      }
      if (sVar3 == 0x11) {
        uVar2 = FUN_10007880(param_1,4);
        iVar4 = (uVar2 & 0xff) + 4;
        if (param_2 <= (int)(iVar5 + 4 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = 0;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else if (sVar3 == 0x12) {
        uVar2 = FUN_10007880(param_1,5);
        iVar4 = (uVar2 & 0xff) + 0x14;
        if (param_2 <= (int)(iVar5 + 0x14 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = 0;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else if (sVar3 == 0x13) {
        uVar2 = FUN_10007880(param_1,1);
        iVar4 = (uVar2 & 0xff) + 4;
        if (param_2 <= (int)(iVar5 + 4 + (uVar2 & 0xff))) {
          iVar4 = param_2 - iVar5;
        }
        sVar3 = *(short *)((int)local_200 + ((*(uint *)(param_1 + 0x2eb0) & 0xff7fffff) >> 0x17));
        if (sVar3 < 0) {
          uVar2 = 0x800000;
          do {
            if ((uVar2 & *(uint *)(param_1 + 0x2eb0)) == 0) {
              sVar3 = local_2bc[-sVar3 * 2];
            }
            else {
              sVar3 = local_2bc[-sVar3 * 2 + 1];
            }
            uVar2 = uVar2 >> 1;
          } while (sVar3 < 0);
        }
        FUN_100077b0(param_1,local_2d4[sVar3]);
        uVar1 = (&DAT_100122e9)[(uint)*(byte *)(iVar5 + param_3) - (int)sVar3];
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined1 *)(iVar5 + param_4) = uVar1;
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar5 + -1;
      }
      else {
        *(undefined *)(iVar5 + param_4) =
             (&DAT_100122e9)[(uint)*(byte *)(iVar5 + param_3) - (int)sVar3];
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  return *(int *)(param_1 + 0x2ebc) == 0;
}



bool __cdecl FUN_100088d0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    uVar1 = FUN_10007880(param_1,3);
    *(char *)(param_1 + 0xe33 + iVar2) = (char)uVar1;
  } while (iVar2 < 8);
  if (*(int *)(param_1 + 0x2ebc) != 0) {
    return false;
  }
  iVar2 = FUN_100096c0(param_1,param_1 + 0xe34,(undefined4 *)(param_1 + 0xdb4));
  return (bool)('\x01' - (iVar2 == 0));
}



int __cdecl FUN_10008920(int *param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = param_3 + param_2;
  puVar3 = (undefined1 *)param_1[0xac1];
  uVar5 = param_2;
  if ((int)param_2 < (int)uVar2) {
    do {
      if ((undefined1 *)param_1[0xac2] <= puVar3) {
        return -1;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
      *(undefined1 *)(*param_1 + -1 + uVar5) = uVar1;
    } while ((int)uVar5 < (int)uVar2);
  }
  param_1[0xac1] = (int)puVar3;
  uVar4 = uVar2;
  if (0x100 < (int)uVar2) {
    uVar4 = 0x101;
  }
  if (param_2 < uVar4) {
    do {
      uVar6 = param_2 + 1;
      *(undefined1 *)(param_1[1] + *param_1 + -1 + uVar6) = *(undefined1 *)(param_2 + *param_1);
      param_2 = uVar6;
    } while (uVar6 < uVar4);
  }
  param_1[0xbb0] = uVar5 & param_1[2];
  return uVar5 - uVar2;
}



undefined4 __cdecl FUN_100089a0(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2b04);
  *(int *)(param_1 + 0x2b04) = iVar3 + -2;
  if (*(uint *)(param_1 + 0x2b08) <= iVar3 + 2U) {
    return 0;
  }
  iVar3 = 3;
  puVar2 = (uint *)(param_1 + 0xc);
  do {
    pbVar1 = *(byte **)(param_1 + 0x2b04);
    *puVar2 = ((uint)pbVar1[3] << 0x10 | (uint)pbVar1[1]) << 8 | (uint)pbVar1[2] << 0x10 |
              (uint)*pbVar1;
    *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + 4;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  return 1;
}



int __fastcall
FUN_10008a10(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  
  if ((int)param_4 < 0x101) {
    iVar1 = 0x101 - param_4;
    if (param_5 <= (int)(0x101 - param_4)) {
      iVar1 = param_5;
    }
    uVar2 = FUN_10008a70(param_3,param_4,iVar1);
    param_5 = (param_5 - uVar2) + param_4;
    param_3[0xbb0] = uVar2;
    param_1 = extraout_ECX;
    param_2 = extraout_EDX;
    param_4 = uVar2;
    if (param_5 < 1) {
      return param_5;
    }
  }
  uVar3 = FUN_10009853(param_1,param_2,param_3,param_4,param_5);
  return (int)uVar3;
}



int __cdecl FUN_10008a70(int *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort *puVar3;
  ushort uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  char local_11;
  uint local_10;
  
  local_11 = (char)param_1[0xbad];
  local_10 = param_1[0xbac];
  puVar11 = (ushort *)param_1[0xac1];
  puVar3 = (ushort *)param_1[0xac2];
  iVar6 = param_3 + param_2;
  if (param_2 < iVar6) {
    do {
      iVar9 = (int)*(short *)(((local_10 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
      if (iVar9 < 0) {
        uVar7 = 0x200000;
        do {
          if ((local_10 & uVar7) == 0) {
            sVar2 = (short)param_1[0x38f - iVar9];
          }
          else {
            sVar2 = *(short *)((int)param_1 + iVar9 * -4 + 0xe3e);
          }
          iVar9 = (int)sVar2;
          uVar7 = uVar7 >> 1;
        } while (iVar9 < 0);
      }
      if (puVar3 <= puVar11) {
        return -1;
      }
      bVar5 = *(byte *)(iVar9 + 0xa18 + (int)param_1);
      local_10 = local_10 << (bVar5 & 0x1f);
      local_11 = local_11 - bVar5;
      if (local_11 < '\x01') {
        uVar4 = *puVar11;
        puVar11 = puVar11 + 1;
        bVar5 = -local_11;
        local_11 = local_11 + '\x10';
        local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
      }
      uVar7 = iVar9 - 0x100;
      if ((int)uVar7 < 0) {
        param_2 = param_2 + 1;
        *(char *)(*param_1 + -1 + param_2) = (char)uVar7;
        *(char *)(param_1[1] + *param_1 + -1 + param_2) = (char)uVar7;
      }
      else {
        uVar12 = uVar7 & 7;
        if (uVar12 == 7) {
          iVar9 = (int)*(short *)(((local_10 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
          if (iVar9 < 0) {
            uVar12 = 0x800000;
            do {
              if ((local_10 & uVar12) == 0) {
                sVar2 = (short)param_1[0x8cf - iVar9];
              }
              else {
                sVar2 = *(short *)((int)param_1 + iVar9 * -4 + 0x233e);
              }
              iVar9 = (int)sVar2;
              uVar12 = uVar12 >> 1;
            } while (iVar9 < 0);
          }
          bVar5 = *(byte *)(iVar9 + 0xcb8 + (int)param_1);
          local_10 = local_10 << (bVar5 & 0x1f);
          local_11 = local_11 - bVar5;
          if (local_11 < '\x01') {
            uVar4 = *puVar11;
            puVar11 = puVar11 + 1;
            bVar5 = -local_11;
            local_11 = local_11 + '\x10';
            local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
          }
          uVar12 = iVar9 + 7;
        }
        cVar8 = (char)((int)uVar7 >> 3);
        if (cVar8 < '\x03') {
          iVar9 = param_1[cVar8 + 3];
          if (cVar8 != '\0') {
            param_1[cVar8 + 3] = param_1[3];
            goto LAB_10008c92;
          }
        }
        else {
          if (cVar8 < '\x04') {
            iVar9 = 1;
          }
          else {
            bVar5 = (&DAT_100121d0)[cVar8];
            cVar1 = local_11 - bVar5;
            uVar7 = local_10 >> (0x20 - bVar5 & 0x1f);
            local_10 = local_10 << (bVar5 & 0x1f);
            puVar10 = puVar11;
            local_11 = cVar1;
            if (cVar1 < '\x01') {
              puVar10 = puVar11 + 1;
              local_11 = cVar1 + '\x10';
              local_10 = local_10 | (uint)*puVar11 << (-cVar1 & 0x1fU);
              if (local_11 < '\x01') {
                uVar4 = *puVar10;
                puVar10 = puVar11 + 2;
                bVar5 = -local_11;
                local_11 = cVar1 + ' ';
                local_10 = local_10 | (uint)uVar4 << (bVar5 & 0x1f);
              }
            }
            iVar9 = uVar7 + *(int *)(&DAT_10012208 + cVar8 * 4);
            puVar11 = puVar10;
          }
          param_1[5] = param_1[4];
          param_1[4] = param_1[3];
LAB_10008c92:
          param_1[3] = iVar9;
        }
        iVar13 = uVar12 + 2;
        do {
          *(undefined1 *)(*param_1 + param_2) =
               *(undefined1 *)((param_2 - iVar9 & param_1[2]) + *param_1);
          if (param_2 < 0x101) {
            *(undefined1 *)(param_1[1] + *param_1 + param_2) = *(undefined1 *)(*param_1 + param_2);
          }
          param_2 = param_2 + 1;
          iVar13 = iVar13 + -1;
        } while (0 < iVar13);
      }
    } while (param_2 < iVar6);
  }
  *(char *)(param_1 + 0xbad) = local_11;
  param_1[0xbac] = local_10;
  param_1[0xac1] = (int)puVar11;
  return param_2;
}



int __cdecl FUN_10008d00(int *param_1,uint param_2,int param_3)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint local_20;
  ushort *local_1c;
  int local_14;
  uint local_10;
  
  cVar9 = (char)param_1[0xbad];
  local_20 = param_1[0xbac];
  local_1c = (ushort *)param_1[0xac1];
  puVar2 = (ushort *)param_1[0xac2];
  iVar3 = *param_1;
  iVar5 = param_3 + param_2;
  if ((int)param_2 < iVar5) {
    do {
      iVar6 = (int)*(short *)(((local_20 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
      if (iVar6 < 0) {
        uVar8 = 0x200000;
        do {
          if ((local_20 & uVar8) == 0) {
            sVar1 = (short)param_1[0x38f - iVar6];
          }
          else {
            sVar1 = *(short *)((int)param_1 + iVar6 * -4 + 0xe3e);
          }
          iVar6 = (int)sVar1;
          uVar8 = uVar8 >> 1;
        } while (iVar6 < 0);
      }
      if (puVar2 <= local_1c) {
        return -1;
      }
      bVar7 = *(byte *)(iVar6 + 0xa18 + (int)param_1);
      local_20 = local_20 << (bVar7 & 0x1f);
      cVar9 = cVar9 - bVar7;
      if (cVar9 < '\x01') {
        bVar7 = -cVar9;
        cVar9 = cVar9 + '\x10';
        local_20 = local_20 | (uint)*local_1c << (bVar7 & 0x1f);
        local_1c = local_1c + 1;
      }
      uVar8 = iVar6 - 0x100;
      if ((int)uVar8 < 0) {
        *(char *)(iVar3 + param_2) = (char)uVar8;
        param_2 = param_2 + 1;
      }
      else {
        uVar11 = uVar8 & 7;
        if (uVar11 == 7) {
          iVar6 = (int)*(short *)(((local_20 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
          if (iVar6 < 0) {
            uVar11 = 0x800000;
            do {
              if ((local_20 & uVar11) == 0) {
                sVar1 = (short)param_1[0x8cf - iVar6];
              }
              else {
                sVar1 = *(short *)((int)param_1 + iVar6 * -4 + 0x233e);
              }
              iVar6 = (int)sVar1;
              uVar11 = uVar11 >> 1;
            } while (iVar6 < 0);
          }
          bVar7 = *(byte *)(iVar6 + 0xcb8 + (int)param_1);
          local_20 = local_20 << (bVar7 & 0x1f);
          cVar9 = cVar9 - bVar7;
          if (cVar9 < '\x01') {
            uVar4 = *local_1c;
            bVar7 = -cVar9;
            cVar9 = cVar9 + '\x10';
            local_1c = local_1c + 1;
            local_20 = local_20 | (uint)uVar4 << (bVar7 & 0x1f);
          }
          uVar11 = iVar6 + 7;
        }
        cVar10 = (char)((int)uVar8 >> 3);
        if (cVar10 < '\x03') {
          local_14 = param_1[cVar10 + 3];
          if (cVar10 != '\0') {
            param_1[cVar10 + 3] = param_1[3];
            param_1[3] = local_14;
          }
        }
        else {
          iVar6 = (int)cVar10;
          bVar7 = (&DAT_100121d0)[iVar6];
          if (bVar7 < 3) {
            if (bVar7 == 0) {
              local_14 = *(int *)(&DAT_10012208 + iVar6 * 4);
            }
            else {
              cVar9 = cVar9 - bVar7;
              uVar8 = local_20 >> (0x20 - bVar7 & 0x1f);
              local_20 = local_20 << (bVar7 & 0x1f);
              if (cVar9 < '\x01') {
                bVar7 = -cVar9;
                cVar9 = cVar9 + '\x10';
                local_20 = local_20 | (uint)*local_1c << (bVar7 & 0x1f);
                local_1c = local_1c + 1;
              }
              local_14 = uVar8 + *(int *)(&DAT_10012208 + iVar6 * 4);
            }
          }
          else {
            if (bVar7 == 3) {
              local_10 = 0;
            }
            else {
              cVar10 = cVar9 - bVar7;
              local_10 = local_20 >> (0x23 - bVar7 & 0x1f);
              cVar9 = cVar10 + '\x03';
              local_20 = local_20 << (bVar7 - 3 & 0x1f);
              if (cVar9 < '\x01') {
                bVar7 = -cVar9;
                cVar9 = cVar10 + '\x13';
                local_20 = local_20 | (uint)*local_1c << (bVar7 & 0x1f);
                local_1c = local_1c + 1;
              }
            }
            local_14 = (int)*(char *)((local_20 >> 0x19) + 0xdb4 + (int)param_1);
            bVar7 = *(byte *)(local_14 + 0xe34 + (int)param_1);
            local_20 = local_20 << (bVar7 & 0x1f);
            cVar9 = cVar9 - bVar7;
            if (cVar9 < '\x01') {
              bVar7 = -cVar9;
              cVar9 = cVar9 + '\x10';
              local_20 = local_20 | (uint)*local_1c << (bVar7 & 0x1f);
              local_1c = local_1c + 1;
            }
            local_14 = *(int *)(&DAT_10012208 + iVar6 * 4) + local_10 * 8 + local_14;
          }
          param_1[5] = param_1[4];
          param_1[4] = param_1[3];
          param_1[3] = local_14;
        }
        iVar6 = uVar11 + 2;
        uVar8 = param_2 - local_14 & param_1[2];
        do {
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + -1;
          uVar11 = param_2 + 1;
          *(undefined1 *)(iVar3 + param_2) = *(undefined1 *)(iVar3 + -1 + uVar8);
          param_2 = uVar11;
        } while (0 < iVar6);
      }
    } while ((int)param_2 < iVar5);
  }
  *(char *)(param_1 + 0xbad) = cVar9;
  param_1[0xbac] = local_20;
  param_1[0xac1] = (int)local_1c;
  param_1[0xbb0] = param_2 & param_1[2];
  return param_2 - iVar5;
}



int __cdecl FUN_10009080(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_2 < 0x101) {
    iVar2 = 0x101 - param_2;
    if (param_3 <= (int)(0x101 - param_2)) {
      iVar2 = param_3;
    }
    uVar1 = FUN_100090e0(param_1,param_2,iVar2);
    param_3 = (param_3 - uVar1) + param_2;
    param_1[0xbb0] = uVar1;
    param_2 = uVar1;
    if (param_3 < 1) {
      return param_3;
    }
  }
  iVar2 = FUN_10008d00(param_1,param_2,param_3);
  return iVar2;
}



int __cdecl FUN_100090e0(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  ushort *puVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint local_1c;
  uint local_18;
  int local_14;
  
  cVar10 = (char)param_1[0xbad];
  local_18 = param_1[0xbac];
  puVar12 = (ushort *)param_1[0xac1];
  puVar3 = (ushort *)param_1[0xac2];
  iVar4 = *param_1;
  iVar7 = param_3 + param_2;
  if (param_2 < iVar7) {
    do {
      iVar11 = (int)*(short *)(((local_18 & 0xffdfffff) >> 0x15) + 0x18 + (int)param_1);
      if (iVar11 < 0) {
        uVar8 = 0x200000;
        do {
          if ((local_18 & uVar8) == 0) {
            sVar2 = (short)param_1[0x38f - iVar11];
          }
          else {
            sVar2 = *(short *)((int)param_1 + iVar11 * -4 + 0xe3e);
          }
          iVar11 = (int)sVar2;
          uVar8 = uVar8 >> 1;
        } while (iVar11 < 0);
      }
      if (puVar3 <= puVar12) {
        return -1;
      }
      bVar6 = *(byte *)(iVar11 + 0xa18 + (int)param_1);
      local_18 = local_18 << (bVar6 & 0x1f);
      cVar9 = cVar10 - bVar6;
      cVar10 = cVar9;
      if (cVar9 < '\x01') {
        uVar5 = *puVar12;
        puVar12 = puVar12 + 1;
        cVar10 = cVar9 + '\x10';
        local_18 = local_18 | (uint)uVar5 << (-cVar9 & 0x1fU);
      }
      uVar8 = iVar11 - 0x100;
      if ((int)uVar8 < 0) {
        *(char *)(iVar4 + param_2) = (char)uVar8;
        iVar11 = param_1[1] + param_2;
        param_2 = param_2 + 1;
        *(char *)(iVar11 + iVar4) = (char)uVar8;
      }
      else {
        uVar13 = uVar8 & 7;
        if (uVar13 == 7) {
          iVar11 = (int)*(short *)(((local_18 & 0xff7fffff) >> 0x17) + 0x818 + (int)param_1);
          if (iVar11 < 0) {
            uVar13 = 0x800000;
            do {
              if ((local_18 & uVar13) == 0) {
                sVar2 = (short)param_1[0x8cf - iVar11];
              }
              else {
                sVar2 = *(short *)((int)param_1 + iVar11 * -4 + 0x233e);
              }
              iVar11 = (int)sVar2;
              uVar13 = uVar13 >> 1;
            } while (iVar11 < 0);
          }
          bVar6 = *(byte *)(iVar11 + 0xcb8 + (int)param_1);
          local_18 = local_18 << (bVar6 & 0x1f);
          cVar9 = cVar10 - bVar6;
          cVar10 = cVar9;
          if (cVar9 < '\x01') {
            uVar5 = *puVar12;
            puVar12 = puVar12 + 1;
            cVar10 = cVar9 + '\x10';
            local_18 = local_18 | (uint)uVar5 << (-cVar9 & 0x1fU);
          }
          uVar13 = iVar11 + 7;
        }
        cVar9 = (char)((int)uVar8 >> 3);
        iVar11 = (int)cVar9;
        if (cVar9 < '\x03') {
          local_14 = param_1[iVar11 + 3];
          if (cVar9 != '\0') {
            param_1[iVar11 + 3] = param_1[3];
            param_1[3] = local_14;
          }
        }
        else {
          bVar6 = (&DAT_100121d0)[iVar11];
          if (bVar6 < 3) {
            if (bVar6 == 0) {
              local_14 = 1;
            }
            else {
              cVar10 = cVar10 - bVar6;
              uVar8 = local_18 >> (0x20 - bVar6 & 0x1f);
              local_18 = local_18 << (bVar6 & 0x1f);
              if (cVar10 < '\x01') {
                uVar5 = *puVar12;
                puVar12 = puVar12 + 1;
                bVar6 = -cVar10;
                cVar10 = cVar10 + '\x10';
                local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
              }
              local_14 = uVar8 + *(int *)(&DAT_10012208 + iVar11 * 4);
            }
          }
          else {
            if (bVar6 == 3) {
              local_1c = 0;
            }
            else {
              cVar9 = cVar10 - bVar6;
              local_1c = local_18 >> (0x23 - bVar6 & 0x1f);
              cVar10 = cVar9 + '\x03';
              local_18 = local_18 << (bVar6 - 3 & 0x1f);
              if (cVar10 < '\x01') {
                uVar5 = *puVar12;
                puVar12 = puVar12 + 1;
                bVar6 = -cVar10;
                cVar10 = cVar9 + '\x13';
                local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
              }
            }
            local_14 = (int)*(char *)((local_18 >> 0x19) + 0xdb4 + (int)param_1);
            bVar6 = *(byte *)(local_14 + 0xe34 + (int)param_1);
            local_18 = local_18 << (bVar6 & 0x1f);
            cVar10 = cVar10 - bVar6;
            if (cVar10 < '\x01') {
              uVar5 = *puVar12;
              puVar12 = puVar12 + 1;
              bVar6 = -cVar10;
              cVar10 = cVar10 + '\x10';
              local_18 = local_18 | (uint)uVar5 << (bVar6 & 0x1f);
            }
            local_14 = *(int *)(&DAT_10012208 + iVar11 * 4) + local_1c * 8 + local_14;
          }
          param_1[5] = param_1[4];
          param_1[4] = param_1[3];
          param_1[3] = local_14;
        }
        iVar11 = uVar13 + 2;
        do {
          uVar1 = *(undefined1 *)((param_2 - local_14 & param_1[2]) + iVar4);
          *(undefined1 *)(iVar4 + param_2) = uVar1;
          if (param_2 < 0x101) {
            *(undefined1 *)(param_1[1] + iVar4 + param_2) = uVar1;
          }
          param_2 = param_2 + 1;
          iVar11 = iVar11 + -1;
        } while (0 < iVar11);
      }
    } while (param_2 < iVar7);
  }
  *(char *)(param_1 + 0xbad) = cVar10;
  param_1[0xbac] = local_18;
  param_1[0xac1] = (int)puVar12;
  return param_2;
}



undefined8 __fastcall
FUN_1000943c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6,undefined4 *param_7,int param_8)

{
  char cVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined2 *puVar11;
  bool bVar12;
  uint auStack_118 [17];
  uint local_d4 [19];
  int aiStack_88 [18];
  uint local_40;
  int local_3c;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 *local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  
  local_40 = param_4 & 0xffff;
  local_1c = param_3;
  local_3c = param_5;
  local_24 = param_6 & 0xff;
  local_28 = param_7;
  local_34 = param_8;
  piVar10 = aiStack_88;
  for (iVar4 = 0x10; iVar6 = local_3c, piVar10 = piVar10 + 1, uVar5 = local_40, iVar4 != 0;
      iVar4 = iVar4 + -1) {
    *piVar10 = 0;
  }
  do {
    uVar5 = uVar5 - 1;
    aiStack_88[*(byte *)(uVar5 + iVar6)] = aiStack_88[*(byte *)(uVar5 + iVar6)] + 1;
  } while (0 < (int)uVar5);
  puVar9 = auStack_118 + 1;
  piVar10 = aiStack_88;
  uVar5 = 0;
  auStack_118[1] = 0;
  iVar4 = 0xf;
  do {
    piVar10 = piVar10 + 1;
    puVar9 = puVar9 + 1;
    uVar5 = (*piVar10 << ((byte)iVar4 & 0x1f)) + uVar5;
    *puVar9 = uVar5;
    uVar8 = local_24;
    bVar12 = 0 < iVar4;
    iVar4 = iVar4 + -1;
  } while (bVar12);
  if (local_d4[0] == 0x10000) {
    iVar4 = 1;
    uVar5 = 1 << ((byte)(local_24 - 1) & 0x1f);
    iVar6 = CONCAT31((int3)(local_24 - 1 >> 8),0x10) - local_24;
    local_20 = iVar6;
    do {
      auStack_118[iVar4] = auStack_118[iVar4] >> ((byte)iVar6 & 0x1f);
      local_d4[iVar4 + 1] = uVar5;
      uVar5 = uVar5 >> 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= (int)uVar8);
    cVar1 = (char)iVar4;
    while (cVar1 < '\x11') {
      cVar1 = (char)iVar4;
      iVar4 = iVar4 + 1;
      local_d4[iVar4] = 1 << (0x10U - cVar1 & 0x1f);
      cVar1 = (char)iVar4;
    }
    uVar5 = auStack_118[local_24 + 1] >> ((byte)local_20 & 0x1f);
    if (uVar5 != 0x10000) {
      puVar11 = (undefined2 *)((int)local_28 + uVar5 * 2);
      for (iVar4 = (1 << ((byte)local_24 & 0x1f)) - uVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
    iVar4 = 0;
    local_30 = local_40;
LAB_100095a7:
    do {
      uVar5 = (uint)*(byte *)(iVar4 + local_3c);
      if (uVar5 != 0) {
        local_2c = auStack_118[uVar5];
        uVar8 = local_2c + local_d4[uVar5 + 1];
        if ((int)uVar5 <= (int)local_24) {
          if (1 << ((byte)local_24 & 0x1f) < (int)uVar8) {
            uVar3 = 0;
            goto LAB_10009681;
          }
          iVar6 = uVar8 - local_2c;
          psVar2 = (short *)(local_2c * 2 + (int)local_28);
          auStack_118[uVar5] = uVar8;
          do {
            *psVar2 = (short)iVar4;
            psVar2 = psVar2 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          iVar4 = iVar4 + 1;
          if ((int)local_40 <= iVar4) {
            uVar3 = 1;
            goto LAB_10009681;
          }
          goto LAB_100095a7;
        }
        iVar6 = uVar5 - local_24;
        uVar7 = local_2c << ((byte)local_24 + 0x10 & 0x1f);
        auStack_118[uVar5] = uVar8;
        psVar2 = (short *)((int)local_28 + (local_2c >> ((byte)local_20 & 0x1f)) * 2);
        do {
          if (*psVar2 == 0) {
            *psVar2 = (short)local_30;
            *(undefined4 *)(local_34 + local_30 * 4) = 0;
            local_30 = local_30 + 1;
            *psVar2 = -*psVar2;
          }
          psVar2 = (short *)(local_34 + *psVar2 * -4);
          bVar12 = CARRY4(uVar7,uVar7);
          uVar7 = uVar7 * 2;
          if (bVar12) {
            psVar2 = psVar2 + 1;
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *psVar2 = (short)iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)local_40);
    uVar3 = 1;
  }
  else if (local_d4[0] == 0) {
    for (iVar4 = 1 << ((char)local_24 - 1U & 0x1f); iVar4 != 0; iVar4 = iVar4 + -1) {
      *local_28 = 0;
      local_28 = local_28 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
LAB_10009681:
  return CONCAT44(param_2,uVar3);
}



undefined4 __cdecl FUN_100096c0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  ushort auStack_48 [17];
  short local_26;
  short asStack_24 [18];
  
  uVar4 = 1;
  do {
    uVar2 = (short)uVar4 + 1;
    asStack_24[uVar4] = 0;
    uVar4 = (uint)uVar2;
  } while (uVar2 < 0x11);
  uVar4 = 0;
  do {
    uVar2 = (short)uVar4 + 1;
    asStack_24[*(byte *)(uVar4 + param_2)] = asStack_24[*(byte *)(uVar4 + param_2)] + 1;
    uVar4 = (uint)uVar2;
  } while (uVar2 < 8);
  auStack_48[1] = 0;
  uVar4 = 1;
  do {
    uVar2 = (short)uVar4 + 1;
    auStack_48[uVar4 + 1] = (asStack_24[uVar4] << (0x10U - (char)uVar4 & 0x1f)) + auStack_48[uVar4];
    uVar4 = (uint)uVar2;
  } while (uVar2 < 0x11);
  if (local_26 != 0) {
    return 0;
  }
  uVar4 = 1;
  do {
    uVar2 = (short)uVar4 + 1;
    uVar5 = (uint)uVar2;
    auStack_48[uVar4] = auStack_48[uVar4] >> 9;
    asStack_24[uVar4] = 1 << (7U - (char)uVar4 & 0x1f);
    uVar4 = uVar5;
  } while (uVar2 < 8);
  while (uVar2 < 0x11) {
    uVar2 = (short)uVar5 + 1;
    asStack_24[uVar5] = 1 << (0x10U - (char)uVar5 & 0x1f);
    uVar5 = (uint)uVar2;
  }
  bVar6 = 0;
  puVar8 = param_3;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  do {
    bVar1 = *(byte *)((uint)bVar6 + param_2);
    if (bVar1 != 0) {
      uVar2 = auStack_48[bVar1];
      uVar7 = asStack_24[bVar1] + uVar2;
      if (0x80 < uVar7) {
        return 0;
      }
      if (uVar2 < uVar7) {
        pbVar9 = (byte *)((int)param_3 + (uint)uVar2);
        for (uVar4 = (uint)((ushort)(uVar7 - uVar2) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(uint *)pbVar9 = CONCAT22(CONCAT11(bVar6,bVar6),CONCAT11(bVar6,bVar6));
          pbVar9 = pbVar9 + 4;
        }
        for (uVar4 = (ushort)(uVar7 - uVar2) & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar9 = bVar6;
          pbVar9 = pbVar9 + 1;
        }
      }
      auStack_48[bVar1] = uVar7;
    }
    bVar6 = bVar6 + 1;
  } while (bVar6 < 8);
  return 1;
}



undefined8 __fastcall
FUN_10009853(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  bool bVar18;
  uint local_38;
  int local_28 [4];
  
  puVar16 = (ushort *)param_3[0xac1];
  uVar4 = param_5 + param_4;
  iVar1 = *param_3;
  local_38 = param_3[0xbac];
  local_28[0] = param_3[3];
  local_28[1] = param_3[4];
  local_28[2] = param_3[5];
  uVar7 = (uint)*(byte *)(param_3 + 0xbad);
  local_28[3] = uVar7;
  do {
    iVar2 = local_28[1];
    puVar15 = (ushort *)param_3[0xac2];
    uVar17 = param_4;
    while( true ) {
      iVar12 = (int)*(short *)((int)param_3 + (local_38 >> 0x16) * 2 + 0x18);
      if (iVar12 < 0) {
        uVar13 = local_38 << 10;
        do {
          bVar18 = CARRY4(uVar13,uVar13);
          uVar13 = uVar13 * 2;
          iVar12 = (int)*(short *)((int)param_3 + (iVar12 * -2 + (uint)bVar18) * 2 + 0xe3c);
        } while (iVar12 < 0);
      }
      if (puVar15 <= puVar16) {
        return CONCAT44(param_2,0xffffffff);
      }
      bVar11 = *(byte *)((int)param_3 + iVar12 + 0xa18);
      local_38 = local_38 << (bVar11 & 0x1f);
      bVar8 = (char)uVar7 - bVar11;
      if (bVar8 == 0 || (char)uVar7 < (char)bVar11) {
        uVar3 = *puVar16;
        puVar16 = puVar16 + 1;
        local_38 = (uint)uVar3 << ((bVar8 ^ 0xff) + 1 & 0x1f) | local_38;
        bVar8 = bVar8 + 0x10;
      }
      uVar7 = (uint)bVar8;
      uVar13 = iVar12 - 0x100;
      if (-1 < (int)uVar13) break;
      param_4 = uVar17 + 1;
      *(char *)(uVar17 + iVar1) = (char)uVar13;
      puVar15 = (ushort *)param_3[0xac2];
      uVar17 = param_4;
      if (uVar4 <= param_4) goto LAB_10009a94;
    }
    uVar14 = uVar13 >> 3;
    uVar13 = uVar13 & 7;
    if (uVar13 == 7) {
      iVar12 = (int)*(short *)((int)param_3 + (local_38 >> 0x18) * 2 + 0x818);
      if (iVar12 < 0) {
        uVar7 = local_38 << 8;
        do {
          bVar18 = CARRY4(uVar7,uVar7);
          uVar7 = uVar7 * 2;
          iVar12 = (int)*(short *)((int)param_3 + (iVar12 * -2 + (uint)bVar18) * 2 + 0x233c);
        } while (iVar12 < 0);
      }
      bVar11 = *(byte *)(iVar12 + 0xcb8 + (int)param_3);
      uVar13 = iVar12 + 7;
      local_38 = local_38 << (bVar11 & 0x1f);
      bVar9 = bVar8 - bVar11;
      uVar7 = (uint)bVar9;
      if (bVar9 == 0 || (char)bVar8 < (char)bVar11) {
        local_38 = (uint)*puVar16 << ((bVar9 ^ 0xff) + 1 & 0x1f) | local_38;
        uVar7 = (uint)(byte)(bVar9 + 0x10);
        puVar16 = puVar16 + 1;
      }
    }
    uVar5 = uVar14 & 0xff;
    puVar15 = puVar16;
    if ((char)uVar14 < '\x04') {
      if (uVar14 != 0) {
        if ((char)uVar14 == '\x03') {
          iVar12 = 1;
          goto LAB_10009a53;
        }
        iVar2 = local_28[uVar14];
        local_28[uVar14] = local_28[0];
        local_28[0] = iVar2;
      }
    }
    else {
      iVar12 = (local_38 >> ((&DAT_10009820)[uVar5] & 0x1f)) + *(int *)(&DAT_10012208 + uVar5 * 4);
      bVar11 = (&DAT_100121d0)[uVar5];
      local_38 = local_38 << (bVar11 & 0x1f);
      cVar10 = (char)uVar7;
      bVar8 = cVar10 - bVar11;
      uVar7 = (uint)bVar8;
      if (bVar8 == 0 || cVar10 < (char)bVar11) {
        local_38 = (uint)*puVar16 << ((bVar8 ^ 0xff) + 1 & 0x1f) | local_38;
        bVar11 = bVar8 + 0x10;
        uVar7 = (uint)bVar11;
        puVar15 = puVar16 + 1;
        if (bVar11 == 0 || SCARRY1(bVar8,'\x10') != (char)bVar11 < '\0') {
          local_38 = (uint)puVar16[1] << ((bVar11 ^ 0xff) + 1 & 0x1f) | local_38;
          uVar7 = (uint)(byte)(bVar8 + 0x20);
          puVar15 = puVar16 + 2;
        }
      }
LAB_10009a53:
      local_28[1] = local_28[0];
      local_28[2] = iVar2;
      puVar16 = puVar15;
      local_28[0] = iVar12;
    }
    bVar8 = (byte)uVar7;
    uVar14 = uVar17 - local_28[0] & param_3[2];
    iVar2 = *param_3;
    *(undefined1 *)(uVar17 + iVar2) = *(undefined1 *)(uVar14 + iVar2);
    uVar17 = uVar17 + 1;
    do {
      uVar14 = uVar14 + 1;
      param_4 = uVar17 + 1;
      *(undefined1 *)(uVar17 + iVar2) = *(undefined1 *)(uVar14 + iVar2);
      bVar18 = 0 < (int)uVar13;
      uVar13 = uVar13 - 1;
      uVar17 = param_4;
    } while (bVar18);
    if (uVar4 <= param_4) {
LAB_10009a94:
      uVar6 = 0;
      if (param_4 != uVar4) {
        uVar6 = 0xffffffff;
      }
      *(byte *)(param_3 + 0xbad) = bVar8;
      param_3[0xbb0] = param_4 & param_3[2];
      param_3[0xac1] = (int)puVar16;
      param_3[3] = local_28[0];
      param_3[4] = local_28[1];
      param_3[5] = local_28[2];
      param_3[0xbac] = local_38;
      return CONCAT44(param_2,uVar6);
    }
  } while( true );
}



void __cdecl FUN_10009af0(undefined *param_1)

{
  DWORD *pDVar1;
  undefined **ppuVar2;
  int iVar3;
  
  pDVar1 = FUN_10009b80();
  iVar3 = 0;
  *pDVar1 = (DWORD)param_1;
  ppuVar2 = (undefined **)&DAT_10014728;
  do {
    if (param_1 == *ppuVar2) {
      pDVar1 = FUN_10009b70();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x1001472c);
      return;
    }
    ppuVar2 = ppuVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (ppuVar2 < &PTR___exit_10014890);
  if (((undefined *)0x12 < param_1) && (param_1 < (undefined *)0x25)) {
    pDVar1 = FUN_10009b70();
    *pDVar1 = 0xd;
    return;
  }
  if (((undefined *)0xbb < param_1) && (param_1 < (undefined *)0xcb)) {
    pDVar1 = FUN_10009b70();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10009b70();
  *pDVar1 = 0x16;
  return;
}



DWORD * FUN_10009b70(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000ba40();
  return pDVar1 + 2;
}



DWORD * FUN_10009b80(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_1000ba40();
  return pDVar1 + 3;
}



void __cdecl FUN_10009b90(LPCSTR param_1,uint param_2,undefined4 param_3)

{
  FUN_10009bb0(param_1,param_2,0x40,param_3);
  return;
}



uint __cdecl FUN_10009bb0(LPCSTR param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  HANDLE hFile;
  undefined *puVar2;
  int iVar3;
  DWORD *pDVar4;
  DWORD DVar5;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  int iVar6;
  bool bVar7;
  byte local_11;
  uint local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  bVar7 = (param_2 & 0x80) == 0;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_11 = 0;
  }
  else {
    local_11 = 0x10;
  }
  local_c.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_100194d8 != 0x8000)))) {
    local_11 = local_11 | 0x80;
  }
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar1 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar1 != 2) goto switchD_10009c48_caseD_11;
    local_10 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    DVar5 = 0;
    break;
  default:
    goto switchD_10009c48_caseD_11;
  case 0x20:
    DVar5 = 1;
    break;
  case 0x30:
    DVar5 = 2;
    break;
  case 0x40:
    DVar5 = 3;
  }
  uVar1 = param_2 & 0x700;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      dwCreationDisposition = 4;
    }
    else {
      if (uVar1 != 0) goto switchD_10009c48_caseD_11;
LAB_10009cb6:
      dwCreationDisposition = 3;
    }
  }
  else if (uVar1 < 0x301) {
    if (uVar1 == 0x300) {
      dwCreationDisposition = 2;
    }
    else {
      if (uVar1 != 0x200) goto switchD_10009c48_caseD_11;
LAB_10009cd6:
      dwCreationDisposition = 5;
    }
  }
  else {
    if (uVar1 < 0x501) {
      if (uVar1 != 0x500) {
        if (uVar1 != 0x400) {
switchD_10009c48_caseD_11:
          pDVar4 = FUN_10009b70();
          *pDVar4 = 0x16;
          pDVar4 = FUN_10009b80();
          *pDVar4 = 0;
          return 0xffffffff;
        }
        goto LAB_10009cb6;
      }
    }
    else {
      if (uVar1 == 0x600) goto LAB_10009cd6;
      if (uVar1 != 0x700) goto switchD_10009c48_caseD_11;
    }
    dwCreationDisposition = 1;
  }
  dwFlagsAndAttributes = 0x80;
  if (((param_2 & 0x100) != 0) && (((byte)param_4 & ~(byte)DAT_10019480 & 0x80) == 0)) {
    dwFlagsAndAttributes = 1;
  }
  if ((param_2 & 0x40) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x4000000;
    local_10 = local_10 | 0x10000;
  }
  if ((param_2 & 0x1000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
    }
  }
  else {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  uVar1 = FUN_1000bf40();
  if (uVar1 == 0xffffffff) {
    pDVar4 = FUN_10009b70();
    *pDVar4 = 0x18;
    pDVar4 = FUN_10009b80();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,DVar5,&local_c,dwCreationDisposition,dwFlagsAndAttributes,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_11 = local_11 | 0x40;
      }
      else if (DVar5 == 3) {
        local_11 = local_11 | 8;
      }
      FUN_1000c0b0(uVar1,hFile);
      iVar6 = (uVar1 & 0x1f) * 0x24;
      *(byte *)(iVar6 + 4 + (&DAT_1001be60)[(int)uVar1 >> 5]) = local_11 | 1;
      if ((((local_11 & 0x48) == 0) && ((local_11 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        DVar5 = FUN_1000b4c0(uVar1,-1,2);
        if (DVar5 == 0xffffffff) {
          pDVar4 = FUN_10009b80();
          if (*pDVar4 != 0x83) {
LAB_10009e96:
            FUN_1000b340(uVar1);
            FUN_1000c2c0(uVar1);
            return 0xffffffff;
          }
        }
        else {
          param_3 = param_3 & 0xffffff00;
          iVar3 = FUN_1000ae80(uVar1,(char *)&param_3,1);
          if ((((iVar3 == 0) && ((char)param_3 == '\x1a')) && (iVar3 = FUN_1000bb80(), iVar3 == -1))
             || (DVar5 = FUN_1000b4c0(uVar1,0,0), DVar5 == 0xffffffff)) goto LAB_10009e96;
        }
      }
      if (((local_11 & 0x48) == 0) && ((param_2 & 8) != 0)) {
        *(byte *)(iVar6 + 4 + (&DAT_1001be60)[(int)uVar1 >> 5]) =
             *(byte *)(iVar6 + 4 + (&DAT_1001be60)[(int)uVar1 >> 5]) | 0x20;
      }
      FUN_1000c2c0(uVar1);
      return uVar1;
    }
    CloseHandle(hFile);
  }
  puVar2 = (undefined *)GetLastError();
  FUN_10009af0(puVar2);
  FUN_1000c2c0(uVar1);
  return 0xffffffff;
}



undefined4 __cdecl FUN_10009f50(LPCSTR param_1)

{
  BOOL BVar1;
  undefined *puVar2;
  
  BVar1 = DeleteFileA(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined *)GetLastError();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  if (puVar2 != (undefined *)0x0) {
    FUN_10009af0(puVar2);
    return 0xffffffff;
  }
  return 0;
}



void __cdecl FUN_10009f80(LPCSTR param_1)

{
  FUN_10009f50(param_1);
  return;
}



undefined4 __cdecl FUN_10009f90(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined *puVar3;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 != 0xffffffff) {
    if ((param_2 & 0x80) == 0) {
      DVar1 = DVar1 | 1;
    }
    else {
      DVar1 = DVar1 & 0xfffffffe;
    }
    BVar2 = SetFileAttributesA(param_1,DVar1);
    if (BVar2 != 0) {
      return 0;
    }
  }
  puVar3 = (undefined *)GetLastError();
  FUN_10009af0(puVar3);
  return 0xffffffff;
}



uint __cdecl FUN_10009fe0(byte param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = param_2;
  if (param_2[1] == 0x3a) {
    pbVar2 = param_2 + 2;
  }
  bVar1 = *pbVar2;
  if ((((bVar1 == 0x5c) || (bVar1 == 0x2f)) && (pbVar2[1] == 0)) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, bVar1 == 0)))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | (uint)(~param_1 & 1 | 2) << 7;
  pbVar2 = FUN_1000c4a0(param_2,0x2e);
  if (pbVar2 != (byte *)0x0) {
    uVar3 = FUN_1000c2f0(pbVar2,&DAT_10012738);
    if (uVar3 != 0) {
      uVar3 = FUN_1000c2f0(pbVar2,&DAT_10012730);
      if (uVar3 != 0) {
        uVar3 = FUN_1000c2f0(pbVar2,&DAT_10012728);
        if (uVar3 != 0) {
          uVar3 = FUN_1000c2f0(pbVar2,&DAT_10012720);
          if (uVar3 != 0) goto LAB_1000a08a;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_1000a08a:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}



undefined4 __cdecl FUN_1000a0b0(byte *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  HANDLE hFindFile;
  LPSTR lpRootPathName;
  UINT UVar4;
  DWORD *pDVar5;
  BOOL BVar6;
  undefined *puVar7;
  int iVar8;
  LPSTR pCVar9;
  _SYSTEMTIME _Stack_260;
  int local_250;
  _FILETIME _Stack_24c;
  _WIN32_FIND_DATAA local_244;
  char acStack_104 [260];
  
  pcVar2 = FUN_1000c7e0(param_1,&DAT_10012744);
  if (pcVar2 != (char *)0x0) goto LAB_1000a1bc;
  if (param_1[1] == 0x3a) {
    if ((*param_1 != 0) && (param_1[2] == 0)) goto LAB_1000a1bc;
    uVar3 = FUN_1000c740((int)(char)*param_1);
    local_250 = uVar3 - 0x60;
  }
  else {
    local_250 = FUN_1000c6f0();
  }
  hFindFile = FindFirstFileA((LPCSTR)param_1,&local_244);
  if (hFindFile == (HANDLE)0xffffffff) {
    pcVar2 = FUN_1000c7e0(param_1,&DAT_10012740);
    if (pcVar2 != (char *)0x0) {
      lpRootPathName = FUN_1000c620(acStack_104,(LPCSTR)param_1,(LPSTR)0x104);
      if (lpRootPathName != (LPSTR)0x0) {
        iVar8 = -1;
        pCVar9 = lpRootPathName;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          cVar1 = *pCVar9;
          pCVar9 = pCVar9 + 1;
        } while (cVar1 != '\0');
        if (iVar8 != -5) {
          iVar8 = FUN_1000a3f0(lpRootPathName);
          if (iVar8 == 0) goto LAB_1000a1bc;
        }
        UVar4 = GetDriveTypeA(lpRootPathName);
        if (1 < UVar4) {
          local_244.dwFileAttributes = 0x10;
          local_244.nFileSizeHigh = 0;
          local_244.nFileSizeLow = 0;
          local_244.cFileName[0] = '\0';
          iVar8 = FUN_1000c530(0x7bc,1,1,0,0,0,-1);
          param_2[7] = iVar8;
          param_2[6] = iVar8;
          param_2[8] = iVar8;
          goto LAB_1000a389;
        }
      }
    }
LAB_1000a1bc:
    pDVar5 = FUN_10009b70();
    *pDVar5 = 2;
    pDVar5 = FUN_10009b80();
    *pDVar5 = 2;
    return 0xffffffff;
  }
  BVar6 = FileTimeToLocalFileTime(&local_244.ftLastWriteTime,&_Stack_24c);
  if (BVar6 != 0) {
    BVar6 = FileTimeToSystemTime(&_Stack_24c,&_Stack_260);
    if (BVar6 != 0) {
      iVar8 = FUN_1000c530((uint)_Stack_260.wYear,(uint)_Stack_260.wMonth,(uint)_Stack_260.wDay,
                           (uint)_Stack_260.wHour,(uint)_Stack_260.wMinute,(uint)_Stack_260.wSecond,
                           -1);
      param_2[7] = iVar8;
      if ((local_244.ftLastAccessTime.dwLowDateTime != 0) ||
         (local_244.ftLastAccessTime.dwHighDateTime != 0)) {
        BVar6 = FileTimeToLocalFileTime(&local_244.ftLastAccessTime,&_Stack_24c);
        if (BVar6 == 0) goto LAB_1000a3cb;
        BVar6 = FileTimeToSystemTime(&_Stack_24c,&_Stack_260);
        if (BVar6 == 0) goto LAB_1000a3cb;
        iVar8 = FUN_1000c530((uint)_Stack_260.wYear,(uint)_Stack_260.wMonth,(uint)_Stack_260.wDay,
                             (uint)_Stack_260.wHour,(uint)_Stack_260.wMinute,
                             (uint)_Stack_260.wSecond,-1);
      }
      param_2[6] = iVar8;
      if ((local_244.ftCreationTime.dwLowDateTime == 0) &&
         (local_244.ftCreationTime.dwHighDateTime == 0)) {
        param_2[8] = param_2[7];
      }
      else {
        BVar6 = FileTimeToLocalFileTime(&local_244.ftCreationTime,&_Stack_24c);
        if (BVar6 == 0) goto LAB_1000a3cb;
        BVar6 = FileTimeToSystemTime(&_Stack_24c,&_Stack_260);
        if (BVar6 == 0) goto LAB_1000a3cb;
        iVar8 = FUN_1000c530((uint)_Stack_260.wYear,(uint)_Stack_260.wMonth,(uint)_Stack_260.wDay,
                             (uint)_Stack_260.wHour,(uint)_Stack_260.wMinute,
                             (uint)_Stack_260.wSecond,-1);
        param_2[8] = iVar8;
      }
      FindClose(hFindFile);
LAB_1000a389:
      uVar3 = FUN_10009fe0((byte)local_244.dwFileAttributes,param_1);
      *(short *)((int)param_2 + 6) = (short)uVar3;
      *(undefined2 *)(param_2 + 2) = 1;
      *param_2 = local_250 + -1;
      param_2[4] = local_250 + -1;
      param_2[5] = local_244.nFileSizeLow;
      *(undefined2 *)(param_2 + 1) = 0;
      *(undefined2 *)(param_2 + 3) = 0;
      *(undefined2 *)((int)param_2 + 10) = 0;
      return 0;
    }
  }
LAB_1000a3cb:
  puVar7 = (undefined *)GetLastError();
  FUN_10009af0(puVar7);
  FindClose(hFindFile);
  return 0xffffffff;
}



undefined4 __cdecl FUN_1000a3f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (((4 < ~uVar2 - 1) && ((*param_1 == '\\' || (*param_1 == '/')))) &&
     ((param_1[1] == '\\' || (param_1[1] == '/')))) {
    pcVar3 = param_1 + 3;
    cVar1 = param_1[3];
    while (((cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'))) {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar4;
    }
    if ((*pcVar3 != '\0') && (pcVar4 = pcVar3 + 1, pcVar3[1] != '\0')) {
      cVar1 = *pcVar4;
      while (((cVar1 != '\0' && (cVar1 != '\\')) && (cVar1 != '/'))) {
        pcVar3 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
        cVar1 = *pcVar3;
      }
      if ((*pcVar4 == '\0') || (pcVar4[1] == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



void FUN_1000a470(void)

{
  if (DAT_1001bf74 != (code *)0x0) {
    (*DAT_1001bf74)();
  }
  FUN_1000a5d0((undefined4 *)&DAT_10014008,(undefined4 *)&DAT_10014010);
  FUN_1000a5d0((undefined4 *)&DAT_10014000,(undefined4 *)&DAT_10014004);
  return;
}



void __cdecl FUN_1000a4a0(UINT param_1)

{
  FUN_1000a4f0(param_1,0,0);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_1000a4f0(_Code,1,0);
  return;
}



void FUN_1000a4e0(void)

{
  FUN_1000a4f0(0,0,1);
  return;
}



void __cdecl FUN_1000a4f0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_1000a5b0();
  if (DAT_100194c0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100194bc = 1;
  DAT_100194b8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1001bf70 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_1001bf6c + -4), puVar1 = DAT_1001bf70, DAT_1001bf70 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_1001bf70;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_1000a5d0((undefined4 *)&DAT_10014014,(undefined4 *)&DAT_10014020);
  }
  FUN_1000a5d0((undefined4 *)&DAT_10014024,(undefined4 *)&DAT_10014028);
  if (param_3 != 0) {
    FUN_1000a5c0();
    return;
  }
  DAT_100194c0 = 1;
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



void FUN_1000a5b0(void)

{
  FUN_1000c940(0xd);
  return;
}



void FUN_1000a5c0(void)

{
  FUN_1000c9c0(0xd);
  return;
}



void __cdecl FUN_1000a5d0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 < param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}



char * __cdecl FUN_1000a5f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_1000a810(~uVar3);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}



// Library Function - Single Match
//  _strncpy
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x1000a67e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000a6bb;
        goto LAB_1000a729;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x1000a725:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000a729:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000a6bb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000a725;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000a725;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000a725;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000a67e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_1000a6bb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl FUN_1000a740(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = _DAT_1001be50;
  if (DAT_10019548 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_1000a78e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    bVar5 = (bVar5 < bVar3) * -2 + 1;
LAB_1000a78e:
    uVar6 = (uint)(char)bVar5;
  }
  else {
    LOCK();
    _DAT_1001be50 = _DAT_1001be50 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1001be4c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1001be50 = iVar2;
      FUN_1000c940(0x13);
    }
    uVar8 = (uint)bVar1;
    uVar6 = 0xff;
    uVar7 = 0;
    do {
      do {
        if ((char)uVar6 == '\0') goto LAB_1000a7ef;
        bVar5 = *param_2;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar7 = FUN_1000cac0(uVar7);
      uVar6 = FUN_1000cac0(uVar6);
    } while ((byte)uVar7 == (byte)uVar6);
    uVar7 = (uint)((byte)uVar7 < (byte)uVar6);
    uVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
LAB_1000a7ef:
    if (uVar8 == 0) {
      LOCK();
      _DAT_1001be50 = _DAT_1001be50 + -1;
      UNLOCK();
    }
    else {
      FUN_1000c9c0(0x13);
    }
  }
  return uVar6;
}



void __cdecl FUN_1000a810(uint param_1)

{
  FUN_1000a830(param_1,DAT_10019568);
  return;
}



int * __cdecl FUN_1000a830(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_1000a880(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_1000cbc0(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



int * __cdecl FUN_1000a880(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_10016b04) {
    FUN_1000c940(9);
    piVar1 = FUN_1000cfc0(param_1 + 0xfU >> 4);
    FUN_1000c9c0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = (int *)HeapAlloc(DAT_1001be48,0,dwBytes);
  return piVar1;
}



void __cdecl FUN_1000a8e0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_1000c940(9);
    pbVar1 = (byte *)FUN_1000cf00(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_1000cf60(local_4,(int)param_1,pbVar1);
      FUN_1000c9c0(9);
      return;
    }
    FUN_1000c9c0(9);
    HeapFree(DAT_1001be48,0,lpMem);
  }
  return;
}



char * __cdecl FUN_1000a950(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_1000a990(param_1,param_2,10,1);
    return param_2;
  }
  FUN_1000a990(param_1,param_2,param_3,0);
  return param_2;
}



void __cdecl FUN_1000a990(uint param_1,char *param_2,uint param_3,int param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_1 = -param_1;
    pcVar2 = param_2;
  }
  do {
    pcVar4 = pcVar2;
    uVar1 = (ulonglong)param_1;
    param_1 = param_1 / param_3;
    cVar3 = (char)(uVar1 % (ulonglong)param_3);
    if ((uint)(uVar1 % (ulonglong)param_3) < 10) {
      cVar3 = cVar3 + '0';
    }
    else {
      cVar3 = cVar3 + 'W';
    }
    *pcVar4 = cVar3;
    pcVar2 = pcVar4 + 1;
  } while (param_1 != 0);
  pcVar4[1] = '\0';
  do {
    cVar3 = *pcVar4;
    *pcVar4 = *param_2;
    *param_2 = cVar3;
    pcVar4 = pcVar4 + -1;
    param_2 = param_2 + 1;
  } while (param_2 < pcVar4);
  return;
}



char * __cdecl FUN_1000aa00(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_1000a990(param_1,param_2,10,1);
    return param_2;
  }
  FUN_1000a990(param_1,param_2,param_3,0);
  return param_2;
}



char * __cdecl FUN_1000aa50(uint param_1,char *param_2,uint param_3)

{
  FUN_1000a990(param_1,param_2,param_3,0);
  return param_2;
}



byte * __cdecl FUN_1000aa70(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  DWORD *pDVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar7 = 0;
  uVar4 = GetCurrentThreadId();
  bVar2 = *param_1;
  pbVar8 = param_1;
  while (bVar2 != 0) {
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar2 = *pbVar1;
  }
  while ((pbVar8 = pbVar8 + -1, param_1 <= pbVar8 &&
         (iVar5 = FUN_1000d540(param_1,pbVar8), iVar5 == 0))) {
    if (*pbVar8 != 0x58) {
      return (byte *)0x0;
    }
    if (4 < iVar7) break;
    iVar7 = iVar7 + 1;
    *pbVar8 = (char)((ulonglong)uVar4 % 10) + 0x30;
    uVar4 = uVar4 / 10;
  }
  if ((*pbVar8 == 0x58) && (4 < iVar7)) {
    *pbVar8 = 0x61;
    iVar7 = 0x62;
    pDVar6 = FUN_10009b70();
    DVar3 = *pDVar6;
    pDVar6 = FUN_10009b70();
    *pDVar6 = 0;
    while( true ) {
      iVar5 = FUN_1000b730((LPCSTR)param_1,0);
      if ((iVar5 != 0) && (pDVar6 = FUN_10009b70(), *pDVar6 != 0xd)) {
        pDVar6 = FUN_10009b70();
        *pDVar6 = DVar3;
        return param_1;
      }
      pDVar6 = FUN_10009b70();
      *pDVar6 = 0;
      if (iVar7 == 0x7b) break;
      *pbVar8 = (byte)iVar7;
      iVar7 = iVar7 + 1;
    }
    pDVar6 = FUN_10009b70();
    *pDVar6 = DVar3;
  }
  return (byte *)0x0;
}



char * __cdecl FUN_1000ab50(byte *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  LPCSTR pCVar5;
  byte *pbVar6;
  DWORD *pDVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  byte *pbVar13;
  LPCSTR pCVar14;
  byte *local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = (byte *)0x0;
  pbVar3 = (byte *)FUN_1000d630(&DAT_1001274c);
  if (((pbVar3 == (byte *)0x0) ||
      ((iVar4 = FUN_1000b730((LPCSTR)pbVar3,0), iVar4 == -1 &&
       (((pbVar3 == (byte *)0x0 ||
         (pbVar3 = (byte *)FUN_1000ada0((char *)pbVar3), local_8 = pbVar3, pbVar3 == (byte *)0x0))
        || (iVar4 = FUN_1000b730((LPCSTR)pbVar3,0), iVar4 == -1)))))) &&
     ((param_1 == (byte *)0x0 ||
      (iVar4 = FUN_1000b730((LPCSTR)param_1,0), pbVar3 = param_1, iVar4 == -1)))) {
    FUN_1000a8e0(local_8);
    iVar4 = FUN_1000b730(&DAT_10014108,0);
    pbVar3 = &DAT_10014108;
    if (iVar4 == -1) {
      pbVar3 = (byte *)&DAT_10012748;
    }
  }
  if (param_2 != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = param_2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    local_4 = ~uVar8 - 1;
  }
  uVar8 = 0xffffffff;
  pbVar6 = pbVar3;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar2 != 0);
  uVar8 = ~uVar8 + 0xb + local_4;
  pCVar5 = param_2;
  if ((0x104 < uVar8) || (pCVar5 = (LPCSTR)FUN_1000a810(uVar8), pCVar5 == (LPCSTR)0x0))
  goto LAB_1000ad84;
  uVar8 = 0xffffffff;
  *pCVar5 = '\0';
  pbVar6 = pbVar3;
  do {
    pbVar13 = pbVar6;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pbVar13 = pbVar6 + 1;
    bVar2 = *pbVar6;
    pbVar6 = pbVar13;
  } while (bVar2 != 0);
  uVar8 = ~uVar8;
  iVar4 = -1;
  pCVar14 = pCVar5;
  do {
    pcVar12 = pCVar14;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar12 = pCVar14 + 1;
    cVar1 = *pCVar14;
    pCVar14 = pcVar12;
  } while (cVar1 != '\0');
  pbVar6 = pbVar13 + -uVar8;
  pbVar13 = (byte *)(pcVar12 + -1);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pbVar13 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar13 = pbVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar13 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar13 = pbVar13 + 1;
  }
  uVar8 = 0xffffffff;
  pbVar6 = pbVar3;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar2 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar2 != 0);
  if (pbVar3[~uVar8 - 2] == 0x5c) {
    pbVar6 = FUN_1000c4a0(pbVar3,0x5c);
    if (pbVar3 + (~uVar8 - 2) != pbVar6) {
LAB_1000ac8b:
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_10014108;
      do {
        pcVar11 = pcVar12;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar11 = pcVar12 + 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar11;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar4 = -1;
      pCVar14 = pCVar5;
      do {
        pcVar12 = pCVar14;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar12 = pCVar14 + 1;
        cVar1 = *pCVar14;
        pCVar14 = pcVar12;
      } while (cVar1 != '\0');
      pcVar11 = pcVar11 + -uVar8;
      pcVar12 = pcVar12 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
    }
  }
  else if (pbVar3[~uVar8 - 2] != 0x2f) goto LAB_1000ac8b;
  if (param_2 != (char *)0x0) {
    uVar8 = 0xffffffff;
    do {
      pcVar12 = param_2;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar4 = -1;
    pCVar14 = pCVar5;
    do {
      pcVar11 = pCVar14;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pCVar14 + 1;
      cVar1 = *pCVar14;
      pCVar14 = pcVar11;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -uVar8;
    pcVar11 = pcVar11 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  uVar8 = 0xffffffff;
  pCVar14 = pCVar5;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pCVar14;
    pCVar14 = pCVar14 + 1;
  } while (cVar1 != '\0');
  FUN_1000c940(3);
  uVar9 = 1;
  if (local_4 <= DAT_10019574) {
    uVar9 = DAT_10016b14;
  }
  DAT_10016b14 = uVar9 + 1;
  uVar10 = DAT_10016b14 - uVar9;
  DAT_10019574 = local_4;
  while (uVar10 < 0x8000) {
    FUN_1000aa50(DAT_10016b14,pCVar5 + (~uVar8 - 1),10);
    iVar4 = FUN_1000b730(pCVar5,0);
    if ((iVar4 != 0) && (pDVar7 = FUN_10009b70(), *pDVar7 != 0xd)) goto LAB_1000ad74;
    DAT_10016b14 = DAT_10016b14 + 1;
    uVar10 = DAT_10016b14 - uVar9;
  }
  FUN_1000a8e0(pCVar5);
  pCVar5 = (LPCSTR)0x0;
LAB_1000ad74:
  FUN_1000c9c0(3);
LAB_1000ad84:
  FUN_1000a8e0(local_8);
  return pCVar5;
}



char * __cdecl FUN_1000ada0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0xffffffff;
  iVar5 = 0;
  pcVar2 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_1000a810(~uVar4);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *param_1;
    pcVar3 = pcVar2;
    while (cVar1 != '\0') {
      if (cVar1 == '\"') {
        iVar5 = iVar5 + 1;
      }
      else {
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (iVar5 != 0) {
      *pcVar3 = '\0';
      return pcVar2;
    }
    FUN_1000a8e0(pcVar2);
  }
  return (char *)0x0;
}



int __cdecl FUN_1000ae00(uint param_1,char *param_2,DWORD param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001bf60) &&
     ((*(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c250(param_1);
    iVar1 = FUN_1000ae80(param_1,param_2,param_3);
    FUN_1000c2c0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return -1;
}



int __cdecl FUN_1000ae80(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  undefined *puVar5;
  DWORD *pDVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  DWORD DVar10;
  char *pcVar11;
  char *pcVar12;
  char cStack_9;
  DWORD local_8;
  int *local_4;
  
  iVar8 = 0;
  if (param_3 != 0) {
    piVar1 = &DAT_1001be60 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(iVar7 + 4 + (&DAT_1001be60)[(int)param_1 >> 5]);
    if ((bVar3 & 2) == 0) {
      pcVar11 = param_2;
      if (((bVar3 & 0x48) != 0) &&
         (cVar2 = *(char *)(iVar7 + (&DAT_1001be60)[(int)param_1 >> 5] + 5), cVar2 != '\n')) {
        *param_2 = cVar2;
        param_3 = param_3 - 1;
        pcVar11 = param_2 + 1;
        iVar8 = 1;
        *(undefined1 *)(iVar7 + 5 + *piVar1) = 10;
      }
      local_4 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar7 + *piVar1),pcVar11,param_3,&local_8,(LPOVERLAPPED)0x0);
      if (BVar4 != 0) {
        iVar8 = iVar8 + local_8;
        bVar3 = *(byte *)(iVar7 + 4 + *piVar1);
        if ((bVar3 & 0x80) != 0) {
          if ((local_8 == 0) || (*param_2 != '\n')) {
            bVar3 = bVar3 & 0xfb;
          }
          else {
            bVar3 = bVar3 | 4;
          }
          *(byte *)(iVar7 + 4 + *piVar1) = bVar3;
          pcVar9 = param_2 + iVar8;
          pcVar11 = param_2;
          pcVar12 = param_2;
          if (param_2 < pcVar9) {
            while (cVar2 = *pcVar12, cVar2 != '\x1a') {
              if (cVar2 == '\r') {
                if (pcVar12 < pcVar9 + -1) {
                  if (pcVar12[1] == '\n') {
                    pcVar12 = pcVar12 + 2;
                    *pcVar11 = '\n';
                    goto LAB_1000b058;
                  }
                  *pcVar11 = '\r';
                  pcVar11 = pcVar11 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                else {
                  DVar10 = 0;
                  pcVar12 = pcVar12 + 1;
                  BVar4 = ReadFile(*(HANDLE *)(iVar7 + *local_4),&cStack_9,1,&local_8,
                                   (LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    DVar10 = GetLastError();
                  }
                  if ((DVar10 == 0) && (local_8 != 0)) {
                    if ((*(byte *)(iVar7 + 4 + *local_4) & 0x48) == 0) {
                      if ((pcVar11 == param_2) && (cStack_9 == '\n')) {
                        *pcVar11 = '\n';
                        goto LAB_1000b058;
                      }
                      FUN_1000b4c0(param_1,-1,1);
                      if (cStack_9 != '\n') goto LAB_1000b055;
                    }
                    else {
                      if (cStack_9 == '\n') {
                        *pcVar11 = '\n';
                        goto LAB_1000b058;
                      }
                      *pcVar11 = '\r';
                      pcVar11 = pcVar11 + 1;
                      *(char *)(iVar7 + 5 + *local_4) = cStack_9;
                    }
                  }
                  else {
LAB_1000b055:
                    *pcVar11 = '\r';
LAB_1000b058:
                    pcVar11 = pcVar11 + 1;
                  }
                }
              }
              else {
                *pcVar11 = cVar2;
                pcVar11 = pcVar11 + 1;
                pcVar12 = pcVar12 + 1;
              }
              if (pcVar9 <= pcVar12) {
                return (int)pcVar11 - (int)param_2;
              }
            }
            bVar3 = *(byte *)(iVar7 + 4 + *local_4);
            if ((bVar3 & 0x40) == 0) {
              *(byte *)(iVar7 + 4 + *local_4) = bVar3 | 2;
            }
          }
          iVar8 = (int)pcVar11 - (int)param_2;
        }
        return iVar8;
      }
      puVar5 = (undefined *)GetLastError();
      if (puVar5 == (undefined *)0x5) {
        pDVar6 = FUN_10009b70();
        *pDVar6 = 9;
        pDVar6 = FUN_10009b80();
        *pDVar6 = 5;
        return -1;
      }
      if (puVar5 != (undefined *)0x6d) {
        FUN_10009af0(puVar5);
        return -1;
      }
    }
  }
  return 0;
}



int __cdecl FUN_1000b0b0(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001bf60) &&
     ((*(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c250(param_1);
    iVar1 = FUN_1000b130(param_1,param_2,param_3);
    FUN_1000c2c0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return -1;
}



int __cdecl FUN_1000b130(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  undefined *local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_1001be60 + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar1;
  if ((*(byte *)(iVar6 + 4 + *piVar1) & 0x20) != 0) {
    FUN_1000b4c0(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_414 = (undefined *)GetLastError();
    }
    else {
      local_41c = local_410;
      local_414 = (undefined *)0x0;
    }
  }
  else {
    local_414 = (undefined *)0x0;
    pcVar7 = param_2;
    if (param_3 != 0) {
      do {
        pcVar3 = local_404;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            local_40c = local_40c + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)local_404 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar3 - (int)local_404,
                          &local_410,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_414 = (undefined *)GetLastError();
          break;
        }
        local_41c = local_41c + local_410;
        if (((int)local_410 < (int)pcVar3 - (int)local_404) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
      } while( true );
    }
  }
  if (local_41c != 0) {
    return local_41c - local_40c;
  }
  if (local_414 == (undefined *)0x0) {
    if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_10009b70();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_10009b80();
    *pDVar5 = 0;
    return -1;
  }
  if (local_414 != (undefined *)0x5) {
    FUN_10009af0(local_414);
    return -1;
  }
  pDVar5 = FUN_10009b70();
  *pDVar5 = 9;
  pDVar5 = FUN_10009b80();
  *pDVar5 = 5;
  return -1;
}



undefined4 __cdecl FUN_1000b340(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001bf60) &&
     ((*(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c250(param_1);
    uVar1 = FUN_1000b3b0(param_1);
    FUN_1000c2c0(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return 0xffffffff;
}



undefined4 __cdecl FUN_1000b3b0(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined *puVar4;
  
  iVar1 = FUN_1000c200(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000c200(1);
      iVar2 = FUN_1000c200(2);
      if (iVar1 == iVar2) goto LAB_1000b406;
    }
    hObject = (HANDLE)FUN_1000c200(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      puVar4 = (undefined *)GetLastError();
      goto LAB_1000b408;
    }
  }
LAB_1000b406:
  puVar4 = (undefined *)0x0;
LAB_1000b408:
  FUN_1000c160(param_1);
  *(undefined1 *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (puVar4 != (undefined *)0x0) {
    FUN_10009af0(puVar4);
    return 0xffffffff;
  }
  return 0;
}



DWORD __cdecl FUN_1000b440(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1001bf60) &&
     ((*(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c250(param_1);
    DVar1 = FUN_1000b4c0(param_1,param_2,param_3);
    FUN_1000c2c0(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return 0xffffffff;
}



DWORD __cdecl FUN_1000b4c0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  undefined *puVar3;
  
  hFile = (HANDLE)FUN_1000c200(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10009b70();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    puVar3 = (undefined *)GetLastError();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  if (puVar3 != (undefined *)0x0) {
    FUN_10009af0(puVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



uint * __cdecl FUN_1000b540(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)param_2 & 3;
  puVar4 = param_1;
  while (uVar3 != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1000b628;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    uVar3 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_1000b628:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}



uint * __cdecl FUN_1000b550(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (uint)param_1 & 3;
  puVar3 = param_1;
  while (uVar4 != 0) {
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
    if ((byte)uVar4 == 0) goto LAB_1000b59f;
    uVar4 = (uint)puVar3 & 3;
  }
  do {
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto LAB_1000b5b1;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto LAB_1000b5b1;
    }
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto LAB_1000b5b1;
    }
  } while ((uVar4 & 0xff000000) != 0);
LAB_1000b59f:
  puVar5 = (uint *)((int)puVar3 + -1);
LAB_1000b5b1:
  uVar4 = (uint)param_2 & 3;
  while (uVar4 != 0) {
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_1000b628;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    uVar4 = (uint)param_2 & 3;
  }
  do {
    uVar2 = *param_2;
    uVar4 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_1000b628:
        *(byte *)puVar5 = (byte)uVar4;
        return param_1;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar5 = (short)uVar4;
        return param_1;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar5 = (short)uVar4;
        *(byte *)((int)puVar5 + 2) = 0;
        return param_1;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar5 = uVar4;
        return param_1;
      }
    }
    *puVar5 = uVar4;
    puVar5 = puVar5 + 1;
  } while( true );
}



// Library Function - Single Match
//  _memset
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = (uint *)_Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



int __cdecl FUN_1000b690(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_10016d24 < 2) {
      uVar2 = (byte)PTR_DAT_10016b18[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_1000d6f0((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_10016d24 < 2) {
      uVar3 = (byte)PTR_DAT_10016b18[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_1000d6f0(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



undefined4 __cdecl FUN_1000b730(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined *puVar2;
  DWORD *pDVar3;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    puVar2 = (undefined *)GetLastError();
    FUN_10009af0(puVar2);
    return 0xffffffff;
  }
  if (((DVar1 & 1) != 0) && ((param_2 & 2) != 0)) {
    pDVar3 = FUN_10009b70();
    *pDVar3 = 0xd;
    pDVar3 = FUN_10009b80();
    *pDVar3 = 5;
    return 0xffffffff;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1000b780(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_1000bac0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_100194c4) {
      DAT_100194c4 = DAT_100194c4 + -1;
      if (DAT_100194bc == 0) {
        FUN_1000a4e0();
      }
      FUN_1000bee0();
      FUN_1000b9f0();
      FUN_1000cc20();
      return 1;
    }
    return 0;
  }
  DAT_10019484 = GetVersion();
  iVar1 = FUN_1000cbe0();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_10019490 = DAT_10019484 >> 8 & 0xff;
  _DAT_1001948c = DAT_10019484 & 0xff;
  _DAT_10019488 = _DAT_1001948c * 0x100 + _DAT_10019490;
  DAT_10019484 = DAT_10019484 >> 0x10;
  iVar1 = FUN_1000b990();
  if (iVar1 == 0) {
    FUN_1000cc20();
    return 0;
  }
  DAT_1001bf64 = GetCommandLineA();
  DAT_100194c8 = FUN_1000e080();
  if ((DAT_1001bf64 != (LPSTR)0x0) && (DAT_100194c8 != (LPSTR)0x0)) {
    FUN_1000bcd0();
    FUN_1000e070();
    FUN_1000d8c0();
    FUN_1000d7d0();
    FUN_1000a470();
    DAT_100194c4 = DAT_100194c4 + 1;
    return 1;
  }
  FUN_1000b9f0();
  FUN_1000cc20();
  return 0;
}



int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_100194c4 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_1000b8fe:
    iVar1 = FUN_1000e1e0();
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_1000b780(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_1000b780(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_1001bf68 != (code *)0x0)) {
        iVar1 = (*DAT_1001bf68)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_1001bf68 != (code *)0x0) {
    iVar1 = (*DAT_1001bf68)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_1000b780(param_1,param_2);
    if (iVar1 != 0) goto LAB_1000b8fe;
  }
  return 0;
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100194d0 == 1) || ((DAT_100194d0 == 0 && (DAT_100194d4 == 1)))) {
    FUN_1000e1f0();
  }
  FUN_1000e230(param_1);
  (*(code *)PTR___exit_10014890)(0xff);
  return;
}



undefined4 FUN_1000b990(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000c890();
  DAT_10014894 = TlsAlloc();
  if (DAT_10014894 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000e410(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10014894,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000ba20((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_1000b9f0(void)

{
  FUN_1000c8c0();
  if (DAT_10014894 != 0xffffffff) {
    TlsFree(DAT_10014894);
    DAT_10014894 = 0xffffffff;
  }
  return;
}



void __cdecl FUN_1000ba20(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_10016eb8;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



DWORD * FUN_1000ba40(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_10014894);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000e410(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10014894,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000ba20((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}



void __cdecl FUN_1000bac0(undefined *param_1)

{
  if (DAT_10014894 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = (undefined *)TlsGetValue(DAT_10014894), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10016eb8) {
        FUN_1000a8e0(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000a8e0(param_1);
    }
    TlsSetValue(DAT_10014894,(LPVOID)0x0);
    return;
  }
  return;
}



DWORD GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x1000bb70. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



int FUN_1000bb80(void)

{
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  DWORD *pDVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint in_stack_00001008;
  int in_stack_0000100c;
  
  FUN_1000e530();
  iVar8 = 0;
  DVar1 = FUN_1000b4c0(in_stack_00001008,0,1);
  if ((DVar1 == 0xffffffff) || (DVar2 = FUN_1000b4c0(in_stack_00001008,0,2), DVar2 == 0xffffffff)) {
    return -1;
  }
  uVar9 = in_stack_0000100c - DVar2;
  if ((int)uVar9 < 1) {
    if ((int)uVar9 < 0) {
      FUN_1000b4c0(in_stack_00001008,in_stack_0000100c,0);
      hFile = (HANDLE)FUN_1000c200(in_stack_00001008);
      BVar6 = SetEndOfFile(hFile);
      iVar8 = (BVar6 != 0) - 1;
      if (iVar8 == -1) {
        pDVar5 = FUN_10009b70();
        *pDVar5 = 0xd;
        DVar2 = GetLastError();
        pDVar5 = FUN_10009b80();
        *pDVar5 = DVar2;
      }
    }
    FUN_1000b4c0(in_stack_00001008,DVar1,0);
    return iVar8;
  }
  puVar10 = (undefined4 *)&stack0x00000004;
  for (iVar7 = 0x400; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  iVar7 = FUN_1000e4c0(in_stack_00001008,0x8000);
  while( true ) {
    uVar3 = 0x1000;
    if ((int)uVar9 < 0x1000) {
      uVar3 = uVar9;
    }
    iVar4 = FUN_1000b130(in_stack_00001008,&stack0x00000004,uVar3);
    if (iVar4 == -1) break;
    uVar9 = uVar9 - iVar4;
    if ((int)uVar9 < 1) {
LAB_1000bc3a:
      FUN_1000e4c0(in_stack_00001008,iVar7);
      FUN_1000b4c0(in_stack_00001008,DVar1,0);
      return iVar8;
    }
  }
  pDVar5 = FUN_10009b80();
  if (*pDVar5 == 5) {
    pDVar5 = FUN_10009b70();
    *pDVar5 = 0xd;
  }
  iVar8 = -1;
  goto LAB_1000bc3a;
}



void FUN_1000bcd0(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT UStack_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_1000a810(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_1001bf60 = 0x20;
  DAT_1001be60 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_1001be60 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_1001bf60 < (int)UStack_48) {
      piVar6 = &DAT_1001be64;
      do {
        puVar2 = (undefined4 *)FUN_1000a810(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          UStack_48 = DAT_1001bf60;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_1001bf60 = DAT_1001bf60 + 0x20;
        if (puVar2 < puVar2 + 0x120) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2[2] = 0;
            puVar2 = puVar2 + 9;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_1001bf60 < (int)UStack_48);
    }
    uVar7 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1001be60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)pbVar4;
          *(byte *)(puVar2 + 1) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar7 < (int)UStack_48);
    }
  }
  iVar5 = 0;
  do {
    puVar2 = DAT_1001be60 + iVar5 * 9;
    if (DAT_1001be60[iVar5 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar5 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_1000bebe;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_1000bebe;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_1000bebe;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_1000bebe:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_1001bf60);
      return;
    }
  } while( true );
}



void FUN_1000bee0(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar1 = &DAT_1001be60;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_1000a8e0((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1001bf60);
  return;
}



uint FUN_1000bf40(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint local_8;
  int local_4;
  
  local_8 = 0xffffffff;
  FUN_1000c940(0x12);
  local_4 = 0;
  iVar2 = 0;
  piVar3 = &DAT_1001be60;
  do {
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_1000a810(0x480);
      if (puVar1 != (undefined4 *)0x0) {
        DAT_1001bf60 = DAT_1001bf60 + 0x20;
        (&DAT_1001be60)[local_4] = puVar1;
        if (puVar1 < puVar1 + 0x120) {
          do {
            *(undefined1 *)(puVar1 + 1) = 0;
            *puVar1 = 0xffffffff;
            *(undefined1 *)((int)puVar1 + 5) = 10;
            puVar1[2] = 0;
            puVar1 = puVar1 + 9;
          } while (puVar1 < (undefined4 *)((&DAT_1001be60)[local_4] + 0x480));
        }
        local_8 = local_4 << 5;
        FUN_1000c250(local_8);
      }
      break;
    }
    if (puVar1 < puVar1 + 0x120) {
      do {
        if ((*(byte *)(puVar1 + 1) & 1) == 0) {
          if (puVar1[2] == 0) {
            FUN_1000c940(0x11);
            if (puVar1[2] == 0) {
              InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
              puVar1[2] = puVar1[2] + 1;
            }
            FUN_1000c9c0(0x11);
          }
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = 0xffffffff;
            local_8 = ((int)puVar1 - *piVar3) / 0x24 + iVar2;
            break;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
        }
        puVar1 = puVar1 + 9;
      } while (puVar1 < (undefined4 *)(*piVar3 + 0x480));
    }
    if (local_8 != 0xffffffff) break;
    piVar3 = piVar3 + 1;
    local_4 = local_4 + 1;
    iVar2 = iVar2 + 0x20;
  } while ((int)piVar3 < 0x1001bf60);
  FUN_1000c9c0(0x12);
  return local_8;
}



undefined4 __cdecl FUN_1000c0b0(uint param_1,HANDLE param_2)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (param_1 < DAT_1001bf60) {
    piVar1 = &DAT_1001be60 + ((int)param_1 >> 5);
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar1 + iVar3) == -1) {
      if (DAT_100194d4 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else {
          if (param_1 == 1) {
            SetStdHandle(0xfffffff5,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
          if (param_1 == 2) {
            SetStdHandle(0xfffffff4,param_2);
            *(HANDLE *)(*piVar1 + iVar3) = param_2;
            return 0;
          }
        }
      }
      *(HANDLE *)(*piVar1 + iVar3) = param_2;
      return 0;
    }
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return 0xffffffff;
}



undefined4 __cdecl FUN_1000c160(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1001bf60) {
    iVar1 = (&DAT_1001be60)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_100194d4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000c1c7;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000c1c7:
      *(undefined4 *)((&DAT_1001be60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10009b70();
  *pDVar2 = 9;
  pDVar2 = FUN_10009b80();
  *pDVar2 = 0;
  return 0xffffffff;
}



undefined4 __cdecl FUN_1000c200(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1001bf60) &&
     ((*(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1001be60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10009b70();
  *pDVar1 = 9;
  pDVar1 = FUN_10009b80();
  *pDVar1 = 0;
  return 0xffffffff;
}



void __cdecl FUN_1000c250(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1001be60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000c940(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000c9c0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1001be60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



void __cdecl FUN_1000c2c0(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1001be60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



uint __cdecl FUN_1000c2f0(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  ushort uVar6;
  uint local_4;
  
  if (DAT_10019888 == 0) {
    uVar1 = FUN_1000a740(param_1,param_2);
    return uVar1;
  }
  FUN_1000c940(0x19);
  do {
    uVar1 = (uint)*param_1;
    pbVar3 = param_1 + 1;
    if ((*(byte *)((int)&DAT_10019680 + uVar1 + 1) & 4) == 0) {
      if ((*(byte *)((int)&DAT_10019680 + uVar1 + 1) & 0x10) == 0x10) {
        uVar1 = (uint)(byte)(&DAT_10019788)[uVar1];
      }
    }
    else if (*pbVar3 == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_1000e560(DAT_1001988c,0x200,(char *)param_1,(LPCWSTR)0x2,(LPWSTR)&local_4,2,
                           DAT_10019888,1);
      if (iVar2 == 1) {
        uVar1 = local_4 & 0xff;
        pbVar3 = param_1 + 2;
      }
      else {
        if (iVar2 != 2) goto LAB_1000c455;
        uVar1 = (local_4 & 0xff) * 0x100 + (local_4 >> 8 & 0xff);
        pbVar3 = param_1 + 2;
      }
    }
    uVar5 = (ushort)*param_2;
    pbVar4 = param_2 + 1;
    if ((*(byte *)((int)&DAT_10019680 + uVar5 + 1) & 4) == 0) {
      if ((*(byte *)((int)&DAT_10019680 + uVar5 + 1) & 0x10) == 0x10) {
        uVar5 = (ushort)(byte)(&DAT_10019788)[uVar5];
      }
    }
    else if (*pbVar4 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_1000e560(DAT_1001988c,0x200,(char *)param_2,(LPCWSTR)0x2,(LPWSTR)&local_4,2,
                           DAT_10019888,1);
      if (iVar2 == 1) {
        uVar5 = (ushort)local_4 & 0xff;
        pbVar4 = param_2 + 2;
      }
      else {
        if (iVar2 != 2) {
LAB_1000c455:
          FUN_1000c9c0(0x19);
          return 0x7fffffff;
        }
        uVar5 = (ushort)local_4 * 0x100 + ((ushort)(local_4 >> 8) & 0xff);
        pbVar4 = param_2 + 2;
      }
    }
    uVar6 = (ushort)uVar1;
    if (uVar6 != uVar5) {
      FUN_1000c9c0(0x19);
      return (-(uint)(uVar5 < uVar6) & 2) - 1;
    }
    param_1 = pbVar3;
    param_2 = pbVar4;
    if (uVar6 == 0) {
      FUN_1000c9c0(0x19);
      return 0;
    }
  } while( true );
}



byte * __cdecl FUN_1000c4a0(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)0x0;
  if (DAT_10019888 == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
    return pbVar5;
  }
  FUN_1000c940(0x19);
  do {
    bVar3 = *param_1;
    if ((*(byte *)((int)&DAT_10019680 + bVar3 + 1) & 4) == 0) {
      pbVar4 = param_1;
      bVar2 = bVar3;
      if (param_2 == bVar3) {
LAB_1000c518:
        pbVar5 = pbVar4;
        bVar3 = bVar2;
      }
    }
    else {
      bVar2 = param_1[1];
      pbVar4 = param_1 + 1;
      if (bVar2 == 0) {
        bVar3 = bVar2;
        if (pbVar5 == (byte *)0x0) goto LAB_1000c518;
      }
      else {
        uVar1 = CONCAT11(bVar3,bVar2);
        bVar3 = bVar2;
        if (param_2 == uVar1) {
          pbVar5 = param_1;
        }
      }
    }
    param_1 = pbVar4 + 1;
    if (bVar3 == 0) {
      FUN_1000c9c0(0x19);
      return pbVar5;
    }
  } while( true );
}



int __cdecl
FUN_1000c530(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  tm local_24;
  
  uVar2 = param_1 - 0x76c;
  if (((int)uVar2 < 0x46) || (0x8a < (int)uVar2)) {
    return -1;
  }
  iVar3 = *(int *)(&DAT_1001702c + param_2 * 4) + param_3;
  if (((uVar2 & 3) == 0) && (2 < param_2)) {
    iVar3 = iVar3 + 1;
  }
  FUN_1000e7c0();
  local_24.tm_hour = param_4;
  local_24.tm_mon = param_2 + -1;
  iVar1 = param_6 + (param_5 +
                    (param_4 + ((param_1 + -0x76d >> 2) + uVar2 * 0x16d + iVar3) * 0x18) * 0x3c) *
                    0x3c + 0x7c558180 + DAT_10016f40;
  if (param_7 != 1) {
    if (param_7 != -1) {
      return iVar1;
    }
    if (DAT_10016f44 == 0) {
      return iVar1;
    }
    local_24.tm_year = uVar2;
    local_24.tm_yday = iVar3;
    iVar3 = __isindst(&local_24);
    if (iVar3 == 0) {
      return iVar1;
    }
  }
  return iVar1 + DAT_10016f48;
}



LPSTR __cdecl FUN_1000c620(char *param_1,LPCSTR param_2,LPSTR param_3)

{
  LPSTR lpBuffer;
  DWORD *pDVar1;
  LPSTR pCVar2;
  undefined *puVar3;
  char *pcVar4;
  LPSTR nBufferLength;
  
  if ((param_2 == (LPCSTR)0x0) || (*param_2 == '\0')) {
    pcVar4 = FUN_1000ef20(param_1,(uint)param_3);
    return pcVar4;
  }
  lpBuffer = param_1;
  nBufferLength = param_3;
  if (param_1 == (char *)0x0) {
    lpBuffer = (LPSTR)FUN_1000a810(0x104);
    if (lpBuffer == (LPSTR)0x0) {
      pDVar1 = FUN_10009b70();
      *pDVar1 = 0xc;
      return (LPSTR)0x0;
    }
    nBufferLength = (LPSTR)0x104;
  }
  pCVar2 = (LPSTR)GetFullPathNameA(param_2,(DWORD)nBufferLength,lpBuffer,&param_3);
  if (pCVar2 < nBufferLength) {
    if (pCVar2 != (LPSTR)0x0) {
      return lpBuffer;
    }
    if (param_1 == (char *)0x0) {
      FUN_1000a8e0(lpBuffer);
    }
    puVar3 = (undefined *)GetLastError();
    FUN_10009af0(puVar3);
    return (LPSTR)0x0;
  }
  if (param_1 == (char *)0x0) {
    FUN_1000a8e0(lpBuffer);
  }
  pDVar1 = FUN_10009b70();
  *pDVar1 = 0x22;
  return (LPSTR)0x0;
}



int FUN_1000c6f0(void)

{
  DWORD DVar1;
  uint uVar2;
  int iVar3;
  uint local_104 [65];
  
  iVar3 = 0;
  DVar1 = GetCurrentDirectoryA(0x104,(LPSTR)local_104);
  if ((DVar1 != 0) && ((char)(local_104[0] >> 8) == ':')) {
    uVar2 = FUN_1000f0c0(local_104[0] & 0xff);
    iVar3 = uVar2 - 0x40;
  }
  return iVar3;
}



uint __cdecl FUN_1000c740(uint param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_10019680 + param_1 + 1) & 0x10) == 0x10) {
      return (uint)(byte)(&DAT_10019788)[param_1];
    }
  }
  else {
    bVar2 = (byte)(param_1 >> 8);
    param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),bVar2);
    if ((*(byte *)((int)&DAT_10019680 + bVar2 + 1) & 4) != 0) {
      iVar3 = FUN_1000e560(DAT_1001988c,0x100,(char *)&param_1,(LPCWSTR)0x2,(LPWSTR)local_8,2,
                           DAT_10019888,1);
      if (iVar3 != 0) {
        return (local_8[0] & 0xff) * 0x100 + (local_8[0] >> 8 & 0xff);
      }
    }
  }
  return uVar1;
}



char * __cdecl FUN_1000c7e0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  
  if (DAT_10019888 == 0) {
    pcVar3 = _strpbrk((char *)param_1,(char *)param_2);
    return pcVar3;
  }
  FUN_1000c940(0x19);
  if (*param_1 == 0) {
LAB_1000c879:
    FUN_1000c9c0(0x19);
    return (char *)(-(uint)(*param_1 != 0) & (uint)param_1);
  }
  pbVar4 = param_2;
  bVar2 = *param_2;
joined_r0x1000c81f:
  do {
    if (bVar2 != 0) {
      bVar2 = *pbVar4;
      if ((*(byte *)((int)&DAT_10019680 + bVar2 + 1) & 4) == 0) {
        if (bVar2 != *param_1) goto LAB_1000c84d;
      }
      else if (((bVar2 != *param_1) || (pbVar4[1] != param_1[1])) && (pbVar4[1] != 0)) {
        pbVar4 = pbVar4 + 1;
LAB_1000c84d:
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
        goto joined_r0x1000c81f;
      }
    }
    if (((*pbVar4 != 0) ||
        (((*(byte *)((int)&DAT_10019680 + *param_1 + 1) & 4) != 0 &&
         (pbVar4 = param_1 + 1, param_1 = param_1 + 1, *pbVar4 == 0)))) ||
       (pbVar1 = param_1 + 1, param_1 = param_1 + 1, pbVar4 = param_2, bVar2 = *param_2,
       *pbVar1 == 0)) goto LAB_1000c879;
  } while( true );
}



void FUN_1000c890(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10014904);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148f4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148e4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148c4);
  return;
}



void FUN_1000c8c0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_100148c0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10014904)) && (ppuVar1 != &PTR_DAT_100148f4)) &&
       ((ppuVar1 != &PTR_DAT_100148e4 && (ppuVar1 != &PTR_DAT_100148c4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000a8e0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10014980);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148e4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10014904);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100148c4);
  return;
}



void __cdecl FUN_1000c940(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_100148c0)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1000a810(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000c940(0x11);
    if ((&DAT_100148c0)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_100148c0)[param_1] = lpCriticalSection;
    }
    else {
      FUN_1000a8e0((undefined *)lpCriticalSection);
    }
    FUN_1000c9c0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_100148c0)[param_1]);
  return;
}



void __cdecl FUN_1000c9c0(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_100148c0)[param_1]);
  return;
}



void __cdecl FUN_1000c9e0(uint param_1)

{
  if ((0x1001706f < param_1) && (param_1 < 0x100172d1)) {
    FUN_1000c940(((int)(param_1 + 0xeffe8f90) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_1000ca20(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000c940(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



void __cdecl FUN_1000ca50(uint param_1)

{
  if ((0x1001706f < param_1) && (param_1 < 0x100172d1)) {
    FUN_1000c9c0(((int)(param_1 + 0xeffe8f90) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_1000ca90(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000c9c0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



uint __cdecl FUN_1000cac0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_10019548 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10016d24 < 2) {
        uVar2 = (byte)PTR_DAT_10016b18[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000d6f0(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_10016b18[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_1000e560(DAT_10019548,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



undefined4 __cdecl FUN_1000cbc0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1001956c != (code *)0x0) {
    iVar1 = (*DAT_1001956c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_1000cbe0(void)

{
  undefined **ppuVar1;
  
  DAT_1001be48 = HeapCreate(0,0x1000,0);
  if (DAT_1001be48 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_1000cc60();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_1001be48);
    return 0;
  }
  return 1;
}



void FUN_1000cc20(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_10014ae0;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_10014ae0);
  HeapDestroy(DAT_1001be48);
  return;
}



undefined ** FUN_1000cc60(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_10014af0 == -1) {
    lpMem = &PTR_LOOP_10014ae0;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_1001be48,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10014ae0) {
        if (PTR_LOOP_10014ae0 == (undefined *)0x0) {
          PTR_LOOP_10014ae0 = (undefined *)&PTR_LOOP_10014ae0;
        }
        if (PTR_PTR_LOOP_10014ae4 == (undefined *)0x0) {
          PTR_PTR_LOOP_10014ae4 = (undefined *)&PTR_LOOP_10014ae0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10014ae0;
        lpMem[1] = PTR_PTR_LOOP_10014ae4;
        PTR_PTR_LOOP_10014ae4 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)(lpMem + 6);
      lpMem[3] = (undefined *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (undefined *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(undefined1 *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_10014ae0) {
    HeapFree(DAT_1001be48,0,lpMem);
  }
  return (undefined **)0x0;
}



void __cdecl FUN_1000cdd0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_PTR_LOOP_10016b00 == param_1) {
    PTR_PTR_LOOP_10016b00 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10014ae0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1001be48,0,param_1);
    return;
  }
  DAT_10014af0 = 0xffffffff;
  return;
}



void __cdecl FUN_1000ce30(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_PTR_LOOP_10014ae4;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (undefined *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_10019570 = DAT_10019570 + -1;
            if (((undefined **)ppuVar6[3] == (undefined **)0x0) || (ppuVar5 < ppuVar6[3])) {
              ppuVar6[3] = (undefined *)ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (undefined *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_1000cdd0(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_PTR_LOOP_10014ae4) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_1000cf00(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10014ae0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10014ae0) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



void __cdecl FUN_1000cf60(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_10019570 = DAT_10019570 + 1, DAT_10019570 == 0x20)) {
    FUN_1000ce30(0x10);
  }
  return;
}



int * __cdecl FUN_1000cfc0(uint param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int *piVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  int *local_4;
  
  local_4 = (int *)PTR_PTR_LOOP_10016b00;
  do {
    if (local_4[4] != -1) {
      puVar10 = (uint *)local_4[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      for (; puVar10 < local_4 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_1000d200(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_10016b00 = (undefined *)local_4;
            *puVar10 = *puVar10 - param_1;
            local_4[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
      puVar2 = (uint *)local_4[2];
      piVar8 = (int *)local_4[4];
      for (puVar10 = (uint *)(local_4 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_1000d200(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_10016b00 = (undefined *)local_4;
            *puVar10 = *puVar10 - param_1;
            local_4[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
    }
    local_4 = (int *)*local_4;
  } while (local_4 != (int *)PTR_PTR_LOOP_10016b00);
  ppuVar7 = &PTR_LOOP_10014ae0;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_10014ae0) {
      ppuVar7 = FUN_1000cc60();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)ppuVar7[4];
      *(char *)(piVar8 + 2) = (char)param_1;
      PTR_PTR_LOOP_10016b00 = (undefined *)ppuVar7;
      *piVar8 = (int)piVar8 + param_1 + 8;
      piVar8[1] = 0xf0 - param_1;
      ppuVar7[6] = ppuVar7[6] + -(param_1 & 0xff);
      return piVar8 + 0x40;
    }
  }
  ppuVar3 = (undefined **)ppuVar7[3];
  puVar4 = *ppuVar3;
  piVar8 = (int *)(ppuVar7[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar3;
  for (iVar9 = 0; (puVar4 == (undefined *)0xffffffff && (iVar9 < 0x10)); iVar9 = iVar9 + 1) {
    puVar4 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar5 = (int *)VirtualAlloc(piVar8,iVar9 << 0xc,0x1000,4);
  if (piVar5 != piVar8) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar3;
  if (0 < iVar9) {
    piVar5 = piVar8 + 1;
    do {
      *piVar5 = 0xf0;
      piVar5[-1] = (int)(piVar5 + 1);
      *(undefined1 *)(piVar5 + 0x3d) = 0xff;
      *ppuVar6 = (undefined *)0xf0;
      ppuVar6[1] = (undefined *)0xf1;
      piVar5 = piVar5 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar11 = ppuVar6 < ppuVar1;
  if (bVar11) {
    do {
      if (*ppuVar6 == (undefined *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar11 = ppuVar6 < ppuVar1;
  }
  PTR_PTR_LOOP_10016b00 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar6);
  *(char *)(piVar8 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar8[1] = piVar8[1] - param_1;
  *piVar8 = (int)piVar8 + param_1 + 8;
  return piVar8 + 0x40;
}



int __cdecl FUN_1000d200(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (param_3 <= (uint)param_1[1]) {
    *pbVar2 = (byte)param_3;
    if (pbVar2 + param_3 < param_1 + 0x3e) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    return (int)(pbVar2 + 8) * 0x10 + (int)param_1 * -0xf;
  }
  pbVar6 = pbVar2;
  if (pbVar2[param_1[1]] != 0) {
    pbVar6 = pbVar2 + param_1[1];
  }
  if (pbVar6 + param_3 < param_1 + 0x3e) {
    do {
      if (*pbVar6 == 0) {
        pbVar3 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar3;
        }
        if (param_3 <= uVar5) {
          if (param_1 + 0x3e <= pbVar6 + param_3) {
            *param_1 = (int)(param_1 + 2);
            goto LAB_1000d34f;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_1000d356;
        }
        if (pbVar6 == pbVar2) {
          param_1[1] = uVar5;
        }
        else {
          param_2 = param_2 - uVar5;
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        pbVar3 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar3;
    } while (pbVar3 + param_3 < param_1 + 0x3e);
  }
  pbVar3 = (byte *)(param_1 + 2);
  pbVar6 = pbVar3;
  if (pbVar3 < pbVar2) {
    while (pbVar6 + param_3 < param_1 + 0x3e) {
      if (*pbVar6 == 0) {
        pbVar4 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar4;
        }
        if (param_3 <= uVar5) {
          if (pbVar6 + param_3 < param_1 + 0x3e) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            *param_1 = (int)pbVar3;
LAB_1000d34f:
            param_1[1] = 0;
          }
LAB_1000d356:
          *pbVar6 = (byte)param_3;
          return (int)(pbVar6 + 8) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = param_2 - uVar5;
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        pbVar4 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_1000d380(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar7 = (uint)*param_3;
  if (uVar7 <= param_4) {
    if ((uVar7 < param_4) && (pbVar1 = param_3 + param_4, pbVar1 <= param_2 + 0x3e)) {
      for (pbVar8 = param_3 + uVar7; (pbVar8 < pbVar1 && (*pbVar8 == 0)); pbVar8 = pbVar8 + 1) {
      }
      if (pbVar8 == pbVar1) {
        *param_3 = (byte)param_4;
        if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
          if (pbVar1 < param_2 + 0x3e) {
            *param_2 = (int)pbVar1;
            iVar6 = 0;
            bVar4 = *pbVar1;
            while (bVar4 == 0) {
              iVar2 = iVar6 + 1;
              iVar6 = iVar6 + 1;
              bVar4 = pbVar1[iVar2];
            }
            param_2[1] = iVar6;
          }
          else {
            param_2[1] = 0;
            *param_2 = (int)(param_2 + 2);
          }
        }
        *piVar3 = *piVar3 + (uVar7 - param_4);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  *param_3 = (byte)param_4;
  piVar3[1] = 0xf1;
  *piVar3 = *piVar3 + (uVar7 - param_4);
  return 1;
}



undefined4 __cdecl FUN_1000d540(byte *param_1,byte *param_2)

{
  if (DAT_10019888 != 0) {
    FUN_1000c940(0x19);
    if (param_1 <= param_2) {
      while (*param_1 != 0) {
        if ((*(byte *)((int)&DAT_10019680 + *param_1 + 1) & 4) != 0) {
          param_1 = param_1 + 1;
          if (param_1 == param_2) {
            FUN_1000c9c0(0x19);
            return 0xffffffff;
          }
          if (*param_1 == 0) break;
        }
        param_1 = param_1 + 1;
        if (param_2 < param_1) {
          FUN_1000c9c0(0x19);
          return 0;
        }
      }
    }
    FUN_1000c9c0(0x19);
  }
  return 0;
}



int __cdecl FUN_1000d630(byte *param_1)

{
  int iVar1;
  
  FUN_1000c940(0xc);
  iVar1 = FUN_1000d660(param_1);
  FUN_1000c9c0(0xc);
  return iVar1;
}



int __cdecl FUN_1000d660(byte *param_1)

{
  byte bVar1;
  LPCWSTR pWVar2;
  LPWSTR pWVar3;
  uint uVar4;
  LPWSTR pWVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  
  if (((DAT_100194a0 != (int *)0x0) ||
      (((DAT_100194a8 == 0 || (pWVar2 = FUN_10010410(), pWVar2 == (LPCWSTR)0x0)) &&
       (DAT_100194a0 != (int *)0x0)))) && (param_1 != (byte *)0x0)) {
    uVar4 = 0xffffffff;
    pbVar6 = (byte *)*DAT_100194a0;
    pbVar8 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    pWVar5 = (LPWSTR)(~uVar4 - 1);
    piVar7 = DAT_100194a0;
    if (pbVar6 != (byte *)0x0) {
      do {
        uVar4 = 0xffffffff;
        pbVar8 = pbVar6;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar1 != 0);
        if (((pWVar5 < (LPWSTR)(~uVar4 - 1)) && (*(byte *)((int)pWVar5 + (int)pbVar6) == 0x3d)) &&
           (pWVar3 = FUN_100103d0(pbVar6,param_1,pWVar5), pWVar3 == (LPWSTR)0x0)) {
          return *piVar7 + 1 + (int)pWVar5;
        }
        pbVar6 = (byte *)piVar7[1];
        piVar7 = piVar7 + 1;
        if (pbVar6 == (byte *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



uint __cdecl FUN_1000d6f0(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_10016b18 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_10016b18[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_10010620(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



void FUN_1000d7d0(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_4;
  
  iVar8 = 0;
  cVar2 = *DAT_100194c8;
  pcVar7 = DAT_100194c8;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar9;
  }
  piVar3 = (int *)FUN_1000a810(iVar8 * 4 + 4);
  DAT_100194a0 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_100194c8;
  local_4 = piVar3;
  pcVar7 = DAT_100194c8;
  do {
    if (cVar2 == '\0') {
      FUN_1000a8e0(DAT_100194c8);
      DAT_100194c8 = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_1000a810(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = (char *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000d8c0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10019578,0x104);
  _DAT_100194b0 = &DAT_10019578;
  pbVar2 = DAT_1001bf64;
  if (*DAT_1001bf64 == 0) {
    pbVar2 = &DAT_10019578;
  }
  FUN_1000d960(pbVar2,(undefined4 *)0x0,(byte *)0x0,&iStack_8,&iStack_4);
  puVar1 = (undefined4 *)FUN_1000a810(iStack_4 + iStack_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000d960(pbVar2,puVar1,(byte *)(puVar1 + iStack_8),&iStack_8,&iStack_4);
  _DAT_10019498 = puVar1;
  _DAT_10019494 = iStack_8 + -1;
  return;
}



void __cdecl FUN_1000d960(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    pbVar7 = param_1 + 1;
    bVar2 = param_1[1];
    while ((bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&DAT_10019680 + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = pbVar7 + 1;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = pbVar7 + 1;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x10019681) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_1000da39;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_1000da39:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10019680 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_1000db35;
        }
        if ((*(byte *)((int)&DAT_10019680 + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_1000db35:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_1000db70(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  _cpinfo local_14;
  
  FUN_1000c940(0x19);
  CodePage = FUN_1000dda0(param_1);
  if (CodePage == DAT_10019888) {
    FUN_1000c9c0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_1000de50();
    FUN_1000de90();
    FUN_1000c9c0(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_10016d38;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_10019680;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x10016d48);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10016d30)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_10019680 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_1001be44 = 1;
      DAT_10019888 = CodePage;
      DAT_1001988c = FUN_1000ddf0(CodePage);
      _DAT_10019890 = *(undefined4 *)(iVar10 + 0x10016d3c);
      _DAT_10019894 = *(undefined4 *)(iVar10 + 0x10016d40);
      _DAT_10019898 = *(undefined4 *)(iVar10 + 0x10016d44);
      goto LAB_1000dcc2;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_10016e28);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &DAT_10019680;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    DAT_1001988c = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_1001be44 = 0;
      DAT_10019888 = CodePage;
    }
    else {
      DAT_10019888 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&DAT_10019680 + uVar7 + 1) =
                 *(byte *)((int)&DAT_10019680 + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&DAT_10019680 + uVar7 + 1) = *(byte *)((int)&DAT_10019680 + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_1001988c = FUN_1000ddf0(CodePage);
      _DAT_1001be44 = 1;
    }
    _DAT_10019890 = 0;
    _DAT_10019894 = 0;
    _DAT_10019898 = 0;
  }
  else {
    if (DAT_1001989c == 0) {
      FUN_1000c9c0(0x19);
      return 0xffffffff;
    }
    FUN_1000de50();
  }
LAB_1000dcc2:
  FUN_1000de90();
  FUN_1000c9c0(0x19);
  return 0;
}



int __cdecl FUN_1000dda0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1001989c = 1;
                    // WARNING: Could not recover jumptable at 0x1000ddbd. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1001989c = 1;
                    // WARNING: Could not recover jumptable at 0x1000ddd2. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_10019558;
  }
  DAT_1001989c = (uint)bVar2;
  return param_1;
}



undefined4 __cdecl FUN_1000ddf0(undefined4 param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000de50(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10019680;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10019888 = 0;
  _DAT_1001be44 = 0;
  DAT_1001988c = 0;
  _DAT_10019890 = 0;
  _DAT_10019894 = 0;
  _DAT_10019898 = 0;
  return;
}



void FUN_1000de90(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR aCStack_500 [256];
  WCHAR aWStack_400 [128];
  WCHAR aWStack_300 [128];
  WORD aWStack_200 [256];
  
  BVar1 = GetCPInfo(DAT_10019888,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      aCStack_500[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    aCStack_500[0] = ' ';
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          uVar4 = uVar3 >> 2;
          pCVar7 = aCStack_500 + uVar2;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            builtin_memcpy(pCVar7,"    ",4);
            pCVar7 = pCVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pCVar7 = ' ';
            pCVar7 = pCVar7 + 1;
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_10010620(1,aCStack_500,0x100,aWStack_200,DAT_10019888,DAT_1001988c,0);
    FUN_1000e560(DAT_1001988c,0x100,aCStack_500,(LPCWSTR)0x100,aWStack_400,0x100,DAT_10019888,0);
    FUN_1000e560(DAT_1001988c,0x200,aCStack_500,(LPCWSTR)0x100,aWStack_300,0x100,DAT_10019888,0);
    uVar2 = 0;
    puVar6 = aWStack_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_10019788)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_10019680 + uVar2 + 1) =
               *(byte *)((int)&DAT_10019680 + uVar2 + 1) | 0x20;
          (&DAT_10019788)[uVar2] = *(undefined1 *)((int)aWStack_300 + uVar2);
        }
      }
      else {
        *(byte *)((int)&DAT_10019680 + uVar2 + 1) = *(byte *)((int)&DAT_10019680 + uVar2 + 1) | 0x10
        ;
        (&DAT_10019788)[uVar2] = *(undefined1 *)((int)aWStack_400 + uVar2);
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_10019788)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_10019680 + uVar2 + 1) = *(byte *)((int)&DAT_10019680 + uVar2 + 1) | 0x20
        ;
        (&DAT_10019788)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      *(byte *)((int)&DAT_10019680 + uVar2 + 1) = *(byte *)((int)&DAT_10019680 + uVar2 + 1) | 0x10;
      (&DAT_10019788)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



void FUN_1000e070(void)

{
  FUN_1000db70(-3);
  return;
}



LPSTR FUN_1000e080(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  WCHAR *pWVar4;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_100198a4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_100198a4 = 2;
    }
    else {
      DAT_100198a4 = 1;
    }
  }
  if (DAT_100198a4 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_1000a810(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_1000a8e0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_100198a4 == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_1000a810((uint)pCVar9);
    if (pCVar7 != (LPSTR)0x0) {
      pCVar11 = pCVar10;
      pCVar12 = pCVar7;
      for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar12 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      }
      FreeEnvironmentStringsA(pCVar10);
      return pCVar7;
    }
    FreeEnvironmentStringsA(pCVar10);
    return (LPSTR)0x0;
  }
  return (LPSTR)0x0;
}



undefined4 FUN_1000e1e0(void)

{
  return 1;
}



void FUN_1000e1f0(void)

{
  if ((DAT_100194d0 == 1) || ((DAT_100194d0 == 0 && (DAT_100194d4 == 1)))) {
    FUN_1000e230(0xfc);
    if (DAT_100198a8 != (code *)0x0) {
      (*DAT_100198a8)();
    }
    FUN_1000e230(0xff);
  }
  return;
}



void __cdecl FUN_1000e230(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char acStack_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  piVar2 = &DAT_10016e28;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_10016eb8);
  if (param_1 == (&DAT_10016e28)[iVar8 * 2]) {
    if ((DAT_100194d0 == 1) || ((DAT_100194d0 == 0 && (DAT_100194d4 == 1)))) {
      if ((DAT_1001be60 == 0) ||
         (hFile = *(HANDLE *)(DAT_1001be60 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x10016e2c);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pCVar10 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = acStack_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = acStack_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = "\n\n";
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = acStack_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x10016e2c);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = acStack_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_10010780(acStack_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



int * __cdecl FUN_1000e410(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_10016b04 < dwBytes) {
LAB_1000e484:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_1000c940(9);
        piVar3 = FUN_1000cfc0(dwBytes >> 4);
        FUN_1000c9c0(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_1000e484;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_1001be48,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_10019568 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_1000cbc0(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



int __cdecl FUN_1000e4c0(uint param_1,int param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    bVar3 = bVar1 & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar2 = FUN_10009b70();
      *pDVar2 = 0x16;
      return -1;
    }
    bVar3 = bVar1 | 0x80;
  }
  *(byte *)((&DAT_1001be60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = bVar3;
  return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
}



// WARNING: Unable to track spacebase fully for stack

void FUN_1000e530(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  if (0xfff < in_EAX) {
    do {
      puVar1 = puVar1 + -0x1000;
      in_EAX = in_EAX - 0x1000;
    } while (0xfff < in_EAX);
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



int __cdecl
FUN_1000e560(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_100198b0 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_100198b0 = 2;
    }
    else {
      DAT_100198b0 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_100112b0(param_3,(int)param_4);
  }
  if (DAT_100198b0 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_100198b0 != 1) {
    return DAT_100198b0;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_10019558;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cbMultiByte,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_1000a810(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_1000a810(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_1000e768;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_1000e6cf;
      if (param_6 < iVar2) goto LAB_1000e768;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_1000e6cf:
      FUN_1000a8e0((undefined *)lpWideCharStr);
      FUN_1000a8e0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_1000e768:
  FUN_1000a8e0((undefined *)lpWideCharStr);
  FUN_1000a8e0((undefined *)param_4);
  return 0;
}



// Library Function - Single Match
//  _strrchr
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



void FUN_1000e7c0(void)

{
  if (DAT_10019970 == 0) {
    FUN_1000c940(0xb);
    if (DAT_10019970 == 0) {
      FUN_1000e800();
      DAT_10019970 = DAT_10019970 + 1;
    }
    FUN_1000c9c0(0xb);
  }
  return;
}



void FUN_1000e800(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_1000c940(0xc);
  DAT_100198b8 = 0;
  DAT_10016fe8 = 0xffffffff;
  DAT_10016fd8 = 0xffffffff;
  pbVar3 = (byte *)FUN_1000d660(&DAT_10012ac8);
  if (pbVar3 == (byte *)0x0) {
    FUN_1000c9c0(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_100198c0);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_100198b8 = 1;
    DAT_10016f40 = DAT_100198c0 * 0x3c;
    if (DAT_10019906 != 0) {
      DAT_10016f40 = DAT_10016f40 + DAT_10019914 * 0x3c;
    }
    if ((DAT_1001995a == 0) || (DAT_10019968 == 0)) {
      DAT_10016f44 = 0;
      DAT_10016f48 = 0;
    }
    else {
      DAT_10016f44 = 1;
      DAT_10016f48 = (DAT_10019968 - DAT_10019914) * 0x3c;
    }
    FUN_10010810(PTR_DAT_10016fd0,(LPCWSTR)&DAT_100198c4,0x40);
    FUN_10010810(PTR_DAT_10016fd4,(LPCWSTR)&DAT_10019918,0x40);
    PTR_DAT_10016fd4[0x3f] = 0;
    PTR_DAT_10016fd0[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    pbVar8 = pbVar3;
    pbVar9 = DAT_1001996c;
    if (DAT_1001996c != (byte *)0x0) {
      do {
        bVar1 = *pbVar8;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_1000e957:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1000e95c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_1000e957;
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1000e95c:
      if (iVar5 == 0) goto LAB_1000eac9;
    }
    FUN_1000a8e0(DAT_1001996c);
    uVar6 = 0xffffffff;
    pbVar8 = pbVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    DAT_1001996c = (byte *)FUN_1000a810(~uVar6);
    if (DAT_1001996c != (byte *)0x0) {
      uVar6 = 0xffffffff;
      pbVar8 = pbVar3;
      do {
        pbVar9 = pbVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar9;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar8 = pbVar9 + -uVar6;
      pbVar9 = DAT_1001996c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
      FUN_1000c9c0(0xc);
      _strncpy(PTR_DAT_10016fd0,(char *)pbVar3,3);
      pbVar8 = pbVar3 + 3;
      PTR_DAT_10016fd0[3] = 0;
      bVar1 = *pbVar8;
      if (bVar1 == 0x2d) {
        pbVar8 = pbVar3 + 4;
      }
      iVar5 = FUN_1000b690(pbVar8);
      DAT_10016f40 = iVar5 * 0xe10;
      for (; (bVar2 = *pbVar8, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar8 = pbVar8 + 1) {
      }
      if (*pbVar8 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        iVar5 = FUN_1000b690(pbVar8);
        DAT_10016f40 = DAT_10016f40 + iVar5 * 0x3c;
        bVar2 = *pbVar8;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar8 == 0x3a) {
          pbVar8 = pbVar8 + 1;
          iVar5 = FUN_1000b690(pbVar8);
          DAT_10016f40 = DAT_10016f40 + iVar5;
          bVar2 = *pbVar8;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_10016f40 = -DAT_10016f40;
      }
      DAT_10016f44 = (int)(char)*pbVar8;
      if (DAT_10016f44 == 0) {
        *PTR_DAT_10016fd4 = 0;
        return;
      }
      _strncpy(PTR_DAT_10016fd4,(char *)pbVar8,3);
      PTR_DAT_10016fd4[3] = 0;
      return;
    }
  }
LAB_1000eac9:
  FUN_1000c9c0(0xc);
  return;
}



// Library Function - Single Match
//  __isindst
// 
// Library: Visual Studio 1998 Release

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  
  FUN_1000c940(0xb);
  bVar1 = FUN_1000eb10(&_Time->tm_sec);
  FUN_1000c9c0(0xb);
  return CONCAT31(extraout_var,bVar1);
}



bool __cdecl FUN_1000eb10(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (DAT_10016f44 == 0) {
    return false;
  }
  uVar7 = param_1[5];
  if ((uVar7 == DAT_10016fd8) && (uVar7 == DAT_10016fe8)) goto LAB_1000ece4;
  if (DAT_100198b8 == 0) {
    FUN_1000ed80(1,1,uVar7,4,1,0,0,2,0,0,0);
    uVar7 = param_1[5];
    uVar11 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar8 = 10;
LAB_1000ecd8:
    uVar5 = 0;
    iVar6 = 1;
  }
  else {
    if (DAT_10019958 != 0) {
      uVar10 = (uint)DAT_1001995c._2_2_;
      uVar3 = 0;
      uVar1 = 0;
    }
    else {
      uVar3 = DAT_1001995c & 0xffff;
      uVar10 = 0;
      uVar1 = (uint)DAT_1001995c._2_2_;
    }
    FUN_1000ed80(1,(uint)(DAT_10019958 == 0),uVar7,(uint)DAT_1001995a,uVar1,uVar3,uVar10,
                 DAT_10019960 & 0xffff,DAT_10019960 >> 0x10,DAT_10019964 & 0xffff,
                 DAT_10019964 >> 0x10);
    if (DAT_10019904 == 0) {
      uVar11 = (uint)DAT_10019910._2_2_;
      uVar3 = DAT_10019910 & 0xffff;
      uVar10 = (uint)DAT_1001990c._2_2_;
      uVar4 = DAT_1001990c & 0xffff;
      uVar1 = DAT_10019908 & 0xffff;
      uVar9 = (uint)DAT_10019908._2_2_;
      uVar8 = (uint)DAT_10019906;
      uVar7 = param_1[5];
      goto LAB_1000ecd8;
    }
    uVar11 = (uint)DAT_10019910._2_2_;
    uVar3 = DAT_10019910 & 0xffff;
    uVar10 = (uint)DAT_1001990c._2_2_;
    uVar5 = (uint)DAT_10019908._2_2_;
    uVar4 = DAT_1001990c & 0xffff;
    uVar7 = param_1[5];
    uVar8 = (uint)DAT_10019906;
    uVar1 = 0;
    uVar9 = 0;
    iVar6 = 0;
  }
  FUN_1000ed80(0,iVar6,uVar7,uVar8,uVar9,uVar1,uVar5,uVar4,uVar10,uVar3,uVar11);
LAB_1000ece4:
  iVar6 = param_1[7];
  if (DAT_10016fdc < DAT_10016fec) {
    if ((iVar6 < DAT_10016fdc) || (DAT_10016fec < iVar6)) {
      return false;
    }
    if ((DAT_10016fdc < iVar6) && (iVar6 < DAT_10016fec)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_10016fec) || (DAT_10016fdc < iVar6)) {
      return true;
    }
    if ((DAT_10016fec < iVar6) && (iVar6 < DAT_10016fdc)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_10016fdc) {
    return iVar2 < DAT_10016ff0;
  }
  return DAT_10016fe0 <= iVar2;
}



void __cdecl
FUN_1000ed80(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_10016ff4 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_1001702c + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + -0x63db + param_3 * 0x16d + iVar1 + 1) % 7;
    if (iVar2 < param_6) {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_10016ff8 + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10017030 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_10016ff4 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_1001702c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10016fdc = iVar1;
    DAT_10016fd8 = param_3;
    DAT_10016fe0 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    return;
  }
  DAT_10016fec = iVar1;
  DAT_10016ff0 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c + DAT_10016f48) * 1000;
  if (DAT_10016ff0 < 0) {
    DAT_10016fe8 = param_3;
    DAT_10016ff0 = DAT_10016ff0 + 86399999;
    return;
  }
  if (86399999 < DAT_10016ff0) {
    DAT_10016ff0 = DAT_10016ff0 + -86399999;
  }
  DAT_10016fe8 = param_3;
  return;
}



char * __cdecl FUN_1000ef20(char *param_1,uint param_2)

{
  char *pcVar1;
  
  FUN_1000c940(0xc);
  pcVar1 = FUN_1000ef50(0,param_1,param_2);
  FUN_1000c9c0(0xc);
  return pcVar1;
}



char * __cdecl FUN_1000ef50(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_10c [4];
  LPSTR local_108;
  CHAR local_104 [260];
  
  if (param_1 == 0) {
    DVar4 = GetCurrentDirectoryA(0x104,local_104);
  }
  else {
    iVar2 = FUN_1000f080(param_1);
    if (iVar2 == 0) {
      pDVar3 = FUN_10009b80();
      *pDVar3 = 0xf;
      pDVar3 = FUN_10009b70();
      *pDVar3 = 0xd;
      return (char *)0x0;
    }
    local_10c[0] = (char)param_1 + '@';
    local_10c[1] = 0x3a;
    local_10c[2] = 0x2e;
    local_10c[3] = 0;
    DVar4 = GetFullPathNameA(local_10c,0x104,local_104,&local_108);
  }
  if ((DVar4 == 0) || (uVar5 = DVar4 + 1, 0x104 < uVar5)) {
    return (char *)0x0;
  }
  if (param_2 == (char *)0x0) {
    if ((int)uVar5 <= (int)param_3) {
      uVar5 = param_3;
    }
    param_2 = (char *)FUN_1000a810(uVar5);
    if (param_2 == (char *)0x0) {
      pDVar3 = FUN_10009b70();
      *pDVar3 = 0xc;
      return (char *)0x0;
    }
  }
  else if ((int)param_3 < (int)uVar5) {
    pDVar3 = FUN_10009b70();
    *pDVar3 = 0x22;
    return (char *)0x0;
  }
  uVar5 = 0xffffffff;
  pcVar7 = local_104;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = param_2;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return param_2;
}



undefined4 __cdecl FUN_1000f080(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  cVar1 = (char)param_1;
  param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
  UVar2 = GetDriveTypeA((LPCSTR)&param_1);
  if ((UVar2 != 0) && (UVar2 != 1)) {
    return 1;
  }
  return 0;
}



uint __cdecl FUN_1000f0c0(uint param_1)

{
  bool bVar1;
  
  if (DAT_10019548 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1001be50);
    bVar1 = DAT_1001be4c != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1001be50);
      FUN_1000c940(0x13);
    }
    param_1 = FUN_1000f150(param_1);
    if (bVar1) {
      FUN_1000c9c0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_1001be50);
  }
  return param_1;
}



uint __cdecl FUN_1000f150(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_10019548 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_10016d24 < 2) {
        uVar2 = (byte)PTR_DAT_10016b18[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000d6f0(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_10016b18[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_1000e560(DAT_10019548,0x200,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



// Library Function - Single Match
//  _strpbrk
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strpbrk(char *_Str,char *_Control)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)(uint)bVar1;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
}



uint __cdecl FUN_1000f420(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  
  uVar40 = (uint)DAT_100199b6;
  pcVar44 = (char *)(uint)DAT_100199b8;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_10010ce0(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_10010ce0(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_10010ce0(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_10010ce0(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_10010ce0(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_10010ce0(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_10010ce0(1,uVar40,0x37,param_1);
  uVar8 = FUN_10010ce0(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_10010ce0(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_10010ce0(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_10010ce0(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_10010ce0(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_10010ce0(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_10010ce0(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_10010ce0(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_10010ce0(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_10010ce0(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_10010ce0(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_10010ce0(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_10010ce0(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_10010ce0(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_10010ce0(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_10010ce0(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_10010ce0(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_10010ce0(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_10010ce0(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_10010ce0(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_10010ce0(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_10010ce0(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_10010ce0(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_10010ce0(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_10010ce0(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_10010ce0(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_10010ce0(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_10010ce0(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_10010ce0(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_10010ce0(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_10010ce0(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_10010ce0(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_10010ce0(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_10010ce0(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_10010ce0(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_1000f9e0(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



void __cdecl FUN_1000f7a0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_1000a8e0((undefined *)param_1[1]);
    FUN_1000a8e0((undefined *)param_1[2]);
    FUN_1000a8e0((undefined *)param_1[3]);
    FUN_1000a8e0((undefined *)param_1[4]);
    FUN_1000a8e0((undefined *)param_1[5]);
    FUN_1000a8e0((undefined *)param_1[6]);
    FUN_1000a8e0((undefined *)*param_1);
    FUN_1000a8e0((undefined *)param_1[8]);
    FUN_1000a8e0((undefined *)param_1[9]);
    FUN_1000a8e0((undefined *)param_1[10]);
    FUN_1000a8e0((undefined *)param_1[0xb]);
    FUN_1000a8e0((undefined *)param_1[0xc]);
    FUN_1000a8e0((undefined *)param_1[0xd]);
    FUN_1000a8e0((undefined *)param_1[7]);
    FUN_1000a8e0((undefined *)param_1[0xe]);
    FUN_1000a8e0((undefined *)param_1[0xf]);
    FUN_1000a8e0((undefined *)param_1[0x10]);
    FUN_1000a8e0((undefined *)param_1[0x11]);
    FUN_1000a8e0((undefined *)param_1[0x12]);
    FUN_1000a8e0((undefined *)param_1[0x13]);
    FUN_1000a8e0((undefined *)param_1[0x14]);
    FUN_1000a8e0((undefined *)param_1[0x15]);
    FUN_1000a8e0((undefined *)param_1[0x16]);
    FUN_1000a8e0((undefined *)param_1[0x17]);
    FUN_1000a8e0((undefined *)param_1[0x18]);
    FUN_1000a8e0((undefined *)param_1[0x19]);
    FUN_1000a8e0((undefined *)param_1[0x1a]);
    FUN_1000a8e0((undefined *)param_1[0x1b]);
    FUN_1000a8e0((undefined *)param_1[0x1c]);
    FUN_1000a8e0((undefined *)param_1[0x1d]);
    FUN_1000a8e0((undefined *)param_1[0x1e]);
    FUN_1000a8e0((undefined *)param_1[0x1f]);
    FUN_1000a8e0((undefined *)param_1[0x20]);
    FUN_1000a8e0((undefined *)param_1[0x21]);
    FUN_1000a8e0((undefined *)param_1[0x22]);
    FUN_1000a8e0((undefined *)param_1[0x23]);
    FUN_1000a8e0((undefined *)param_1[0x24]);
    FUN_1000a8e0((undefined *)param_1[0x25]);
    FUN_1000a8e0((undefined *)param_1[0x26]);
    FUN_1000a8e0((undefined *)param_1[0x27]);
    FUN_1000a8e0((undefined *)param_1[0x28]);
    FUN_1000a8e0((undefined *)param_1[0x29]);
    FUN_1000a8e0((undefined *)param_1[0x2a]);
  }
  return;
}



uint __cdecl FUN_1000f9e0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_10010ce0(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_10010ce0(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_10010ce0(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined1 *)FUN_1000a810(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_1000fa7c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_1000fa7c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_1000fa7c:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_1000a8e0(param_1);
  return 0;
}



void __cdecl FUN_1000fce0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1000fcf6;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1000fcf6:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



uint __cdecl FUN_1000fe10(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_100199ac;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_10010ce0(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_10010ce0(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_10010ce0(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_10010ce0(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_10010ce0(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_1000fce0(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_10010ce0(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_10010ce0(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_10010ce0(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_10010ce0(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_10010ce0(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_10010ce0(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_10010ce0(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_10010ce0(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_10010ce0(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_10010ce0(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



void __cdecl FUN_1000ff60(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_10019a08)) {
    FUN_1000a8e0(*(undefined **)(param_1 + 0xc));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x10));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x14));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x18));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x1c));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x20));
    FUN_1000a8e0(*(undefined **)(param_1 + 0x24));
  }
  return;
}



// Library Function - Single Match
//  _strcspn
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

size_t __cdecl _strcspn(char *_Str,char *_Control)

{
  byte bVar1;
  size_t sVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = (char *)((byte *)_Control + 1);
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = (char *)((byte *)_Str + 1);
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return sVar2;
}



// Library Function - Single Match
//  _strncmp
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    _MaxCount = ~uVar5;
  }
  return _MaxCount;
}



LPWSTR __cdecl FUN_100103d0(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return param_3;
  }
  iVar1 = FUN_10010fe0(DAT_1001988c,1,param_1,param_3,param_2,(int)param_3,DAT_10019888);
  if (iVar1 == 0) {
    return (LPWSTR)0x7fffffff;
  }
  return (LPWSTR)(iVar1 + -2);
}



LPCWSTR FUN_10010410(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  byte *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_100194a8;
  piVar2 = DAT_100194a8;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return (LPCWSTR)0x0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (byte *)FUN_1000a810(cbMultiByte), lpMultiByteStr != (byte *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_100112e0(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return lpWideCharStr;
    }
  }
  return (LPCWSTR)0xffffffff;
}



BOOL __cdecl
FUN_10010490(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_100199e0 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100199e0 = 2;
    }
    else {
      DAT_100199e0 = 1;
    }
  }
  if (DAT_100199e0 != 1) {
    local_4 = DAT_100199e0;
    if (DAT_100199e0 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_10019558;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_1000e410(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_1000a810(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_10019548;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_100115e0((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_1000a8e0((undefined *)lpMultiByteStr);
      FUN_1000a8e0((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



BOOL __cdecl
FUN_10010620(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_100199e4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_100199e4 = 2;
    }
    else {
      DAT_100199e4 = 1;
    }
  }
  if (DAT_100199e4 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_10019548;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_100199e4;
  if (DAT_100199e4 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_10019558;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_1000e410(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_1000a8e0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_1000a8e0((undefined *)lpWideCharStr);
  }
  return param_6;
}



int __cdecl FUN_10010760(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1 + 1;
  while (sVar1 != 0) {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



int __cdecl FUN_10010780(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100199e8 != (FARPROC)0x0) {
LAB_100107d0:
    if (DAT_100199ec != (FARPROC)0x0) {
      iVar1 = (*DAT_100199ec)();
    }
    if ((iVar1 != 0) && (DAT_100199f0 != (FARPROC)0x0)) {
      iVar1 = (*DAT_100199f0)(iVar1);
    }
    iVar1 = (*DAT_100199e8)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_100199e8 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_100199e8 != (FARPROC)0x0) {
      DAT_100199ec = GetProcAddress(hModule,"GetActiveWindow");
      DAT_100199f0 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_100107d0;
    }
  }
  return 0;
}



uint __cdecl FUN_10010810(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_1001be50);
  bVar2 = DAT_1001be4c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_1001be50);
    FUN_1000c940(0x13);
  }
  uVar1 = FUN_10010890(param_1,param_2,param_3);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_1001be50);
    return uVar1;
  }
  FUN_1000c9c0(0x13);
  return uVar1;
}



uint __cdecl FUN_10010890(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  LPCWSTR pWVar7;
  int iVar8;
  BOOL local_4;
  
  uVar3 = param_3;
  pWVar7 = param_2;
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_10019548 == 0) {
      uVar3 = FUN_10010760(param_2);
      return uVar3;
    }
    iVar4 = WideCharToMultiByte(DAT_10019558,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar4 != 0) && (local_4 == 0)) {
      return iVar4 - 1;
    }
  }
  else if (DAT_10019548 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*pWVar7 < 0x100) {
      param_1[uVar2] = (CHAR)*pWVar7;
      if (*pWVar7 == L'\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pWVar7 = pWVar7 + 1;
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  else if (DAT_10016d24 == 1) {
    if (param_3 != 0) {
      uVar3 = FUN_10010a80(param_2,param_3);
    }
    uVar3 = WideCharToMultiByte(DAT_10019558,0x220,pWVar7,uVar3,param_1,uVar3,(LPCSTR)0x0,&local_4);
    if ((uVar3 != 0) && (local_4 == 0)) {
      if (param_1[uVar3 - 1] != '\0') {
        return uVar3;
      }
      return uVar3 - 1;
    }
  }
  else {
    iVar4 = WideCharToMultiByte(DAT_10019558,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4);
    if (iVar4 == 0) {
      if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        uVar2 = 0;
        if (uVar3 != 0) {
          do {
            iVar4 = WideCharToMultiByte(DAT_10019558,0,pWVar7,1,(LPSTR)&param_2,DAT_10016d24,
                                        (LPCSTR)0x0,&local_4);
            if ((iVar4 == 0) || (local_4 != 0)) goto LAB_10010a66;
            if (uVar3 < iVar4 + uVar2) {
              return uVar2;
            }
            iVar8 = 0;
            if (0 < iVar4) {
              do {
                cVar1 = *(char *)((int)&param_2 + iVar8);
                param_1[uVar2] = cVar1;
                if (cVar1 == '\0') {
                  return uVar2;
                }
                iVar8 = iVar8 + 1;
                uVar2 = uVar2 + 1;
              } while (iVar8 < iVar4);
            }
            pWVar7 = pWVar7 + 1;
          } while (uVar2 < uVar3);
        }
        return uVar2;
      }
    }
    else if (local_4 == 0) {
      return iVar4 - 1;
    }
  }
LAB_10010a66:
  pDVar6 = FUN_10009b70();
  *pDVar6 = 0x2a;
  return 0xffffffff;
}



int __cdecl FUN_10010a80(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}



undefined4 __cdecl FUN_10010ce0(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_100119c0(param_2,param_3,(LPWSTR)&DAT_10019a00,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_10019a00;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_10016d24 < 2) {
          uVar3 = (byte)PTR_DAT_10016b18[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_1000d6f0((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x10019a07 < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_10011af0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_10011af0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_1000a810(uVar3), _Source == (LPSTR)0x0)) goto LAB_10010d90;
    bVar2 = true;
    uVar3 = FUN_10011af0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_10010d90;
  }
  _Dest = (char *)FUN_1000a810(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_1000a8e0(_Source);
    return 0;
  }
LAB_10010d90:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_1000a8e0(_Source);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_10010e90(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  
  iVar2 = _DAT_1001be50;
  if (param_3 != 0) {
    if (DAT_10019548 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar6 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar6;
        bVar3 = (byte)uVar6;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar7 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_10010eef;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      param_3 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar7 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10010eef:
        param_3 = -1;
        if (!bVar7) {
          param_3 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1001be50 = _DAT_1001be50 + 1;
      UNLOCK();
      bVar7 = 0 < DAT_1001be4c;
      if (bVar7) {
        LOCK();
        UNLOCK();
        _DAT_1001be50 = iVar2;
        FUN_1000c940(0x13);
      }
      uVar8 = (uint)bVar7;
      uVar6 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar6 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar6 = FUN_1000cac0(uVar6);
        uVar5 = FUN_1000cac0(uVar5);
        bVar7 = uVar5 < uVar6;
        if (uVar5 != uVar6) goto LAB_10010f65;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      param_3 = 0;
      bVar7 = uVar5 < uVar6;
      if (uVar5 != uVar6) {
LAB_10010f65:
        param_3 = -1;
        if (!bVar7) {
          param_3 = 1;
        }
      }
      if (uVar8 == 0) {
        LOCK();
        _DAT_1001be50 = _DAT_1001be50 + -1;
        UNLOCK();
      }
      else {
        FUN_1000c9c0(0x13);
      }
    }
  }
  return param_3;
}



int __cdecl
FUN_10010fe0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPWSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iVar5;
  int iStack_18;
  _cpinfo _Stack_14;
  
  if (DAT_10019a10 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10019a10 = 2;
    }
    else {
      DAT_10019a10 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPWSTR)FUN_100112b0((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_100112b0((char *)param_5,param_6);
  }
  if (DAT_10019a10 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)cbMultiByte,(PCNZCH)param_5,param_6)
    ;
    return iVar1;
  }
  iStack_18 = DAT_10019a10;
  if (DAT_10019a10 == 1) {
    iStack_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_10019558;
    }
    if ((cbMultiByte == (LPWSTR)0x0) || (param_6 == 0)) {
      if (cbMultiByte == (LPWSTR)param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < (int)cbMultiByte) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&_Stack_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (_Stack_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (_Stack_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = _Stack_14.LeadByte;
        while( true ) {
          if ((_Stack_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          _Stack_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_1000a810(iVar1 * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0))
        && (param_4 = (LPWSTR)FUN_1000a810(iVar4 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar4), iVar5 != 0)) {
      iStack_18 = CompareStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar4);
    }
    FUN_1000a8e0((undefined *)lpWideCharStr);
    FUN_1000a8e0((undefined *)param_4);
  }
  return iStack_18;
}



int __cdecl FUN_100112b0(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      if (*pcVar1 == '\0') break;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 != 0);
  }
  if (*pcVar1 == '\0') {
    return (int)pcVar1 - (int)param_1;
  }
  return param_2;
}



undefined4 __cdecl FUN_100112e0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  LPCWSTR pWVar5;
  LPWSTR pWVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  pbVar4 = FUN_10011de0(param_1,0x3d);
  if (pbVar4 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pbVar4) {
    return 0xffffffff;
  }
  bVar13 = pbVar4[1] == 0;
  if (DAT_100194a0 == DAT_100194a4) {
    DAT_100194a0 = FUN_10011570(DAT_100194a0);
  }
  if (DAT_100194a0 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_100194a8 == (undefined4 *)0x0)) {
      if (bVar13) {
        return 0;
      }
      DAT_100194a0 = (int *)FUN_1000a810(4);
      if (DAT_100194a0 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_100194a0 = 0;
      if (DAT_100194a8 == (undefined4 *)0x0) {
        DAT_100194a8 = (undefined4 *)FUN_1000a810(4);
        if (DAT_100194a8 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_100194a8 = 0;
      }
    }
    else {
      pWVar5 = FUN_10010410();
      if (pWVar5 != (LPCWSTR)0x0) {
        return 0xffffffff;
      }
    }
  }
  piVar8 = DAT_100194a0;
  pWVar6 = (LPWSTR)(pbVar4 + -(int)param_1);
  iVar7 = FUN_100114f0(param_1,pWVar6);
  if ((iVar7 < 0) || (*piVar8 == 0)) {
    if (bVar13) {
      return 0;
    }
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    piVar8 = FUN_10011c30(piVar8,iVar7 * 4 + 8);
    if (piVar8 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar8[iVar7] = (int)param_1;
    piVar8[iVar7 + 1] = 0;
    DAT_100194a0 = piVar8;
  }
  else if (bVar13) {
    FUN_1000a8e0((undefined *)piVar8[iVar7]);
    iVar2 = piVar8[iVar7];
    piVar3 = piVar8 + iVar7;
    while (iVar2 != 0) {
      *piVar3 = piVar3[1];
      iVar7 = iVar7 + 1;
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar8 = FUN_10011c30(piVar8,iVar7 * 4);
    if (piVar8 != (int *)0x0) {
      DAT_100194a0 = piVar8;
    }
  }
  else {
    piVar8[iVar7] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar9 = 0xffffffff;
    pbVar4 = param_1;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    pbVar4 = (byte *)FUN_1000a810(~uVar9 + 1);
    if (pbVar4 != (byte *)0x0) {
      uVar9 = 0xffffffff;
      do {
        pbVar11 = param_1;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pbVar11 = param_1 + 1;
        bVar1 = *param_1;
        param_1 = pbVar11;
      } while (bVar1 != 0);
      uVar9 = ~uVar9;
      pbVar11 = pbVar11 + -uVar9;
      pbVar12 = pbVar4;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar11;
        pbVar11 = pbVar11 + 4;
        pbVar12 = pbVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pbVar12 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        pbVar12 = pbVar12 + 1;
      }
      pbVar4[(int)pWVar6] = 0;
      SetEnvironmentVariableA
                ((LPCSTR)pbVar4,(LPCSTR)(~-(uint)bVar13 & (uint)(pbVar4 + 1 + (int)pWVar6)));
      FUN_1000a8e0(pbVar4);
      return 0;
    }
  }
  return 0;
}



int __cdecl FUN_100114f0(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  LPWSTR pWVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_100194a0;
  piVar3 = DAT_100194a0;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((pWVar2 = FUN_100103d0(param_1,pbVar1,param_2), pWVar2 != (LPWSTR)0x0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_100194a0 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_100194a0 >> 2;
}



undefined4 * __cdecl FUN_10011570(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = (undefined4 *)FUN_1000a810(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*param_1;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      param_1 = param_1 + 1;
      pcVar4 = FUN_1000a5f0(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      pcVar4 = (char *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



undefined4 * __cdecl FUN_100115e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10011797_caseD_2;
        case 3:
          goto switchD_10011797_caseD_3;
        }
        goto switchD_10011797_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10011797_caseD_0;
      case 1:
        goto switchD_10011797_caseD_1;
      case 2:
        goto switchD_10011797_caseD_2;
      case 3:
        goto switchD_10011797_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10011797_caseD_2;
            case 3:
              goto switchD_10011797_caseD_3;
            }
            goto switchD_10011797_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10011797_caseD_2;
            case 3:
              goto switchD_10011797_caseD_3;
            }
            goto switchD_10011797_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10011797_caseD_2;
            case 3:
              goto switchD_10011797_caseD_3;
            }
            goto switchD_10011797_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10011797_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10011797_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10011797_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10011797_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10011615_caseD_2;
      case 3:
        goto switchD_10011615_caseD_3;
      }
      goto switchD_10011615_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10011615_caseD_0;
    case 1:
      goto switchD_10011615_caseD_1;
    case 2:
      goto switchD_10011615_caseD_2;
    case 3:
      goto switchD_10011615_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10011615_caseD_2;
          case 3:
            goto switchD_10011615_caseD_3;
          }
          goto switchD_10011615_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10011615_caseD_2;
          case 3:
            goto switchD_10011615_caseD_3;
          }
          goto switchD_10011615_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10011615_caseD_2;
          case 3:
            goto switchD_10011615_caseD_3;
          }
          goto switchD_10011615_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10011615_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10011615_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10011615_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10011615_caseD_0:
  return param_1;
}



int __cdecl FUN_100119c0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_10019a14 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10019a14 = 2;
    }
    else {
      DAT_10019a14 = 1;
    }
  }
  if (DAT_10019a14 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_10019a14 != 2) {
    return DAT_10019a14;
  }
  if (param_5 == 0) {
    param_5 = DAT_10019558;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_1000a810(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_1000a8e0(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_1000a8e0(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_1000a8e0(lpLCData);
    return 0;
  }
  return 0;
}



int __cdecl FUN_10011af0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_10019a18 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_10019a18 = 2;
    }
    else {
      DAT_10019a18 = 1;
    }
  }
  if (DAT_10019a18 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_10019a18 != 1) {
    return DAT_10019a18;
  }
  if (param_5 == 0) {
    param_5 = DAT_10019558;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_1000a810(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_1000a8e0((undefined *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_1000a8e0((undefined *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_1000a8e0((undefined *)lpLCData);
    return 0;
  }
  return 0;
}



int * __cdecl FUN_10011c30(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_1000a810(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_1000a8e0((undefined *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_1000c940(9);
      pbVar2 = (byte *)FUN_1000cf00((undefined *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_1000c9c0(9);
        piVar1 = (int *)HeapReAlloc(DAT_1001be48,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_10016b04) {
          iVar3 = FUN_1000d380(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_10011d35;
          piVar1 = FUN_1000cfc0(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_1000cf60(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_10011d35;
          }
LAB_10011d39:
          piVar1 = (int *)HeapAlloc(DAT_1001be48,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_1000cf60(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_10011d35:
          if (piVar1 == (int *)0x0) goto LAB_10011d39;
        }
        FUN_1000c9c0(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_10019568 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_1000cbc0(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



byte * __cdecl FUN_10011de0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (DAT_10019888 == 0) {
    pbVar3 = (byte *)_strchr((char *)param_1,param_2);
    return pbVar3;
  }
  FUN_1000c940(0x19);
  bVar1 = *param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_10019680 + uVar2 + 1) & 4) == 0) {
      pbVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      pbVar3 = param_1 + 1;
      if (param_1[1] == 0) {
        FUN_1000c9c0(0x19);
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,param_1[1])) {
        FUN_1000c9c0(0x19);
        return param_1;
      }
    }
    param_1 = pbVar3 + 1;
    bVar1 = pbVar3[1];
  }
  FUN_1000c9c0(0x19);
  return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
}



// Library Function - Single Match
//  _strchr
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = (uint)_Str & 3;
  while (uVar1 != 0) {
    if ((char)*(uint *)_Str == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)*(uint *)_Str == '\0') {
      return (char *)0x0;
    }
    uVar1 = (uint)((int)_Str + 1) & 3;
    _Str = (char *)((int)_Str + 1);
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}


