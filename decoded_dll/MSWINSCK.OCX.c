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

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEA;

typedef ulong DWORD;

typedef ushort WORD;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef int BOOL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef uchar BYTE;

typedef long LONG;

struct HDC__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef uint UINT;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef char CHAR;

typedef CHAR *LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

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

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagWNDCLASSA WNDCLASSA;

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef GUID CLSID;

typedef union _union_658 _union_658, *P_union_658;

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef union _union_655 _union_655, *P_union_655;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeA DEVMODEA;

typedef DWORD LCTYPE;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef void *HANDLE;

typedef ulong ULONG_PTR;

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

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef void *PVOID;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

typedef long HRESULT;

typedef wchar_t WCHAR;

typedef LONG *PLONG;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef CHAR *LPSTR;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR *LPWSTR;

typedef short SHORT;

typedef DWORD ACCESS_MASK;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

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

typedef ushort USHORT;

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

typedef struct ICreateErrorInfo ICreateErrorInfo, *PICreateErrorInfo;

typedef struct ICreateErrorInfoVtbl ICreateErrorInfoVtbl, *PICreateErrorInfoVtbl;

struct ICreateErrorInfo {
    struct ICreateErrorInfoVtbl *lpVtbl;
};

struct ICreateErrorInfoVtbl {
    HRESULT (*QueryInterface)(struct ICreateErrorInfo *, IID *, void **);
    ULONG (*AddRef)(struct ICreateErrorInfo *);
    ULONG (*Release)(struct ICreateErrorInfo *);
    HRESULT (*SetGUID)(struct ICreateErrorInfo *, GUID *);
    HRESULT (*SetSource)(struct ICreateErrorInfo *, LPOLESTR);
    HRESULT (*SetDescription)(struct ICreateErrorInfo *, LPOLESTR);
    HRESULT (*SetHelpFile)(struct ICreateErrorInfo *, LPOLESTR);
    HRESULT (*SetHelpContext)(struct ICreateErrorInfo *, DWORD);
};

typedef struct IErrorInfo IErrorInfo, *PIErrorInfo;

typedef struct IErrorInfoVtbl IErrorInfoVtbl, *PIErrorInfoVtbl;

struct IErrorInfo {
    struct IErrorInfoVtbl *lpVtbl;
};

struct IErrorInfoVtbl {
    HRESULT (*QueryInterface)(struct IErrorInfo *, IID *, void **);
    ULONG (*AddRef)(struct IErrorInfo *);
    ULONG (*Release)(struct IErrorInfo *);
    HRESULT (*GetGUID)(struct IErrorInfo *, GUID *);
    HRESULT (*GetSource)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetDescription)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetHelpFile)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetHelpContext)(struct IErrorInfo *, DWORD *);
};

typedef struct IAdviseSink IAdviseSink, *PIAdviseSink;

typedef struct IAdviseSinkVtbl IAdviseSinkVtbl, *PIAdviseSinkVtbl;

typedef struct tagFORMATETC tagFORMATETC, *PtagFORMATETC;

typedef struct tagFORMATETC FORMATETC;

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef WORD CLIPFORMAT;

typedef struct tagDVTARGETDEVICE tagDVTARGETDEVICE, *PtagDVTARGETDEVICE;

typedef struct tagDVTARGETDEVICE DVTARGETDEVICE;

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef struct IStream IStream, *PIStream;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

typedef LPOLESTR *SNB;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IAdviseSink {
    struct IAdviseSinkVtbl *lpVtbl;
};

struct IAdviseSinkVtbl {
    HRESULT (*QueryInterface)(struct IAdviseSink *, IID *, void **);
    ULONG (*AddRef)(struct IAdviseSink *);
    ULONG (*Release)(struct IAdviseSink *);
    void (*OnDataChange)(struct IAdviseSink *, FORMATETC *, STGMEDIUM *);
    void (*OnViewChange)(struct IAdviseSink *, DWORD, LONG);
    void (*OnRename)(struct IAdviseSink *, struct IMoniker *);
    void (*OnSave)(struct IAdviseSink *);
    void (*OnClose)(struct IAdviseSink *);
};

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

union _union_2260 {
    HBITMAP hBitmap;
    HMETAFILEPICT hMetaFilePict;
    HENHMETAFILE hEnhMetaFile;
    HGLOBAL hGlobal;
    LPOLESTR lpszFileName;
    struct IStream *pstm;
    struct IStorage *pstg;
};

struct tagFORMATETC {
    CLIPFORMAT cfFormat;
    DVTARGETDEVICE *ptd;
    DWORD dwAspect;
    LONG lindex;
    DWORD tymed;
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct tagSTGMEDIUM {
    DWORD tymed;
    union _union_2260 u;
    struct IUnknown *pUnkForRelease;
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct tagDVTARGETDEVICE {
    DWORD tdSize;
    WORD tdDriverNameOffset;
    WORD tdDeviceNameOffset;
    WORD tdPortNameOffset;
    WORD tdExtDevmodeOffset;
    BYTE tdData[1];
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct IStorageVtbl {
    HRESULT (*QueryInterface)(struct IStorage *, IID *, void **);
    ULONG (*AddRef)(struct IStorage *);
    ULONG (*Release)(struct IStorage *);
    HRESULT (*CreateStream)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStream **);
    HRESULT (*OpenStream)(struct IStorage *, OLECHAR *, void *, DWORD, DWORD, struct IStream **);
    HRESULT (*CreateStorage)(struct IStorage *, OLECHAR *, DWORD, DWORD, DWORD, struct IStorage **);
    HRESULT (*OpenStorage)(struct IStorage *, OLECHAR *, struct IStorage *, DWORD, SNB, DWORD, struct IStorage **);
    HRESULT (*CopyTo)(struct IStorage *, DWORD, IID *, SNB, struct IStorage *);
    HRESULT (*MoveElementTo)(struct IStorage *, OLECHAR *, struct IStorage *, OLECHAR *, DWORD);
    HRESULT (*Commit)(struct IStorage *, DWORD);
    HRESULT (*Revert)(struct IStorage *);
    HRESULT (*EnumElements)(struct IStorage *, DWORD, void *, DWORD, struct IEnumSTATSTG **);
    HRESULT (*DestroyElement)(struct IStorage *, OLECHAR *);
    HRESULT (*RenameElement)(struct IStorage *, OLECHAR *, OLECHAR *);
    HRESULT (*SetElementTimes)(struct IStorage *, OLECHAR *, FILETIME *, FILETIME *, FILETIME *);
    HRESULT (*SetClass)(struct IStorage *, IID *);
    HRESULT (*SetStateBits)(struct IStorage *, DWORD, DWORD);
    HRESULT (*Stat)(struct IStorage *, STATSTG *, DWORD);
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct IStorage {
    struct IStorageVtbl *lpVtbl;
};

struct IEnumSTATSTGVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATSTG *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATSTG *);
    ULONG (*Release)(struct IEnumSTATSTG *);
    HRESULT (*Next)(struct IEnumSTATSTG *, ULONG, STATSTG *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATSTG *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATSTG *);
    HRESULT (*Clone)(struct IEnumSTATSTG *, struct IEnumSTATSTG **);
};

struct HBITMAP__ {
    int unused;
};

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct HENHMETAFILE__ {
    int unused;
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

typedef struct IEnumSTATDATA IEnumSTATDATA, *PIEnumSTATDATA;

typedef struct IEnumSTATDATAVtbl IEnumSTATDATAVtbl, *PIEnumSTATDATAVtbl;

typedef struct tagSTATDATA tagSTATDATA, *PtagSTATDATA;

typedef struct tagSTATDATA STATDATA;

struct IEnumSTATDATA {
    struct IEnumSTATDATAVtbl *lpVtbl;
};

struct IEnumSTATDATAVtbl {
    HRESULT (*QueryInterface)(struct IEnumSTATDATA *, IID *, void **);
    ULONG (*AddRef)(struct IEnumSTATDATA *);
    ULONG (*Release)(struct IEnumSTATDATA *);
    HRESULT (*Next)(struct IEnumSTATDATA *, ULONG, STATDATA *, ULONG *);
    HRESULT (*Skip)(struct IEnumSTATDATA *, ULONG);
    HRESULT (*Reset)(struct IEnumSTATDATA *);
    HRESULT (*Clone)(struct IEnumSTATDATA *, struct IEnumSTATDATA **);
};

struct tagSTATDATA {
    FORMATETC formatetc;
    DWORD advf;
    struct IAdviseSink *pAdvSink;
    DWORD dwConnection;
};

typedef ULONG_PTR SIZE_T;

typedef struct in_addr in_addr, *Pin_addr;

typedef union _union_1226 _union_1226, *P_union_1226;

typedef struct _struct_1227 _struct_1227, *P_struct_1227;

typedef struct _struct_1228 _struct_1228, *P_struct_1228;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

typedef uchar UCHAR;

struct _struct_1228 {
    USHORT s_w1;
    USHORT s_w2;
};

struct _struct_1227 {
    UCHAR s_b1;
    UCHAR s_b2;
    UCHAR s_b3;
    UCHAR s_b4;
};

union _union_1226 {
    struct _struct_1227 S_un_b;
    struct _struct_1228 S_un_w;
    ULONG S_addr;
};

struct in_addr {
    union _union_1226 S_un;
};

typedef struct IOleAdviseHolder IOleAdviseHolder, *PIOleAdviseHolder;

typedef struct IOleAdviseHolderVtbl IOleAdviseHolderVtbl, *PIOleAdviseHolderVtbl;

struct IOleAdviseHolderVtbl {
    HRESULT (*QueryInterface)(struct IOleAdviseHolder *, IID *, void **);
    ULONG (*AddRef)(struct IOleAdviseHolder *);
    ULONG (*Release)(struct IOleAdviseHolder *);
    HRESULT (*Advise)(struct IOleAdviseHolder *, struct IAdviseSink *, DWORD *);
    HRESULT (*Unadvise)(struct IOleAdviseHolder *, DWORD);
    HRESULT (*EnumAdvise)(struct IOleAdviseHolder *, struct IEnumSTATDATA **);
    HRESULT (*SendOnRename)(struct IOleAdviseHolder *, struct IMoniker *);
    HRESULT (*SendOnSave)(struct IOleAdviseHolder *);
    HRESULT (*SendOnClose)(struct IOleAdviseHolder *);
};

struct IOleAdviseHolder {
    struct IOleAdviseHolderVtbl *lpVtbl;
};

typedef struct IOleAdviseHolder *LPOLEADVISEHOLDER;

typedef struct tagPOINT *LPPOINT;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct _FILETIME *PFILETIME;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef struct tagSIZE *LPSIZE;

typedef BYTE *LPBYTE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef int (*FARPROC)(void);

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct HRGN__ *HRGN;

typedef struct tagRECT *LPRECT;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct HRSRC__ *HRSRC;

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

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_14 IMAGE_RESOURCE_DIR_STRING_U_14, *PIMAGE_RESOURCE_DIR_STRING_U_14;

struct IMAGE_RESOURCE_DIR_STRING_U_14 {
    word Length;
    wchar16 NameString[7];
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

typedef char *va_list;

typedef ulong u_long;

typedef struct WSAData WSAData, *PWSAData;

typedef struct WSAData WSADATA;

struct WSAData {
    WORD wVersion;
    WORD wHighVersion;
    char szDescription[257];
    char szSystemStatus[129];
    ushort iMaxSockets;
    ushort iMaxUdpDg;
    char *lpVendorInfo;
};

typedef ushort u_short;

typedef UINT_PTR SOCKET;

typedef WSADATA *LPWSADATA;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    u_short sa_family;
    char sa_data[14];
};

typedef struct fd_set fd_set, *Pfd_set;

typedef uint u_int;

struct fd_set {
    u_int fd_count;
    SOCKET fd_array[64];
};

typedef struct timeval timeval, *Ptimeval;

struct timeval {
    long tv_sec;
    long tv_usec;
};

typedef struct hostent hostent, *Phostent;

struct hostent {
    char *h_name;
    char **h_aliases;
    short h_addrtype;
    short h_length;
    char **h_addr_list;
};

typedef enum tagREGKIND {
    REGKIND_DEFAULT=0,
    REGKIND_REGISTER=1,
    REGKIND_NONE=2
} tagREGKIND;

typedef enum tagREGKIND REGKIND;

typedef struct IUnknown *LPUNKNOWN;



undefined DAT_22182018;
undefined DAT_2218200c;
uint DAT_22182010;
undefined DAT_22182014;
undefined DAT_22182034;
HANDLE DAT_22182030;
HMODULE DAT_22182008;
undefined DAT_22182000;
HMODULE DAT_22182004;
HMODULE DAT_22182038;
LPCRITICAL_SECTION DAT_2218205c;
void *DAT_22182058;
pointer PTR_FUN_22171578;
int *DAT_22182114;
int DAT_22182110;
undefined *PTR_LAB_22171640;
undefined4 DAT_22182110;
undefined2 DAT_221820f8;
HWND DAT_2218211c;
char DAT_22182118;
HINSTANCE DAT_22182008;
string s_CtlFrameWork_Parking_22182318;
HMODULE DAT_22182120;
undefined DAT_22182040;
undefined4 *DAT_22182058;
undefined *PTR_FUN_22171558;
undefined *PTR_FUN_22171568;
pointer PTR_FUN_22171540;
HINSTANCE DAT_22182060;
int DAT_22182058;
undefined FUN_2217147e;
string s_VBFrameworkMapClassObject_22182330;
short DAT_221820f8;
pointer PTR_PTR_221820fc;
int DAT_22182124;
int DAT_22182128;
unicode u_2c49f800-c2dd-11cf-9ad6-0080c7e7_22182130;
string s_Licenses_22182180;
undefined *PTR_FUN_22173840;
undefined *PTR_FUN_221738f0;
undefined *PTR_LAB_22173920;
undefined *PTR_LAB_22173938;
undefined *PTR_LAB_22173958;
undefined *PTR_LAB_22173968;
undefined *PTR_LAB_22173980;
undefined *PTR_LAB_22173a00;
undefined *PTR_LAB_22173a10;
undefined *PTR_LAB_22173a28;
undefined *PTR_LAB_22173a40;
undefined *PTR_LAB_22173a50;
undefined *PTR_LAB_22173a60;
undefined *PTR_LAB_22173a88;
undefined *PTR_LAB_22173ab0;
undefined *PTR_LAB_22173ad0;
undefined *PTR_LAB_22173b10;
undefined *PTR_LAB_22173b38;
undefined *PTR_LAB_22173b68;
undefined *PTR_LAB_22173b88;
undefined *PTR_LAB_22173be8;
undefined *PTR_FUN_22173c00;
undefined *PTR_LAB_22173c88;
undefined *PTR_LAB_22173ca0;
undefined *PTR_LAB_22173cc0;
undefined *PTR_LAB_22173cd0;
undefined *PTR_LAB_22173ce8;
undefined *PTR_LAB_22173d68;
undefined *PTR_LAB_22173d78;
undefined *PTR_LAB_22173d90;
undefined *PTR_LAB_22173da8;
undefined *PTR_LAB_22173db8;
undefined *PTR_LAB_22173dc8;
undefined *PTR_LAB_22173df0;
undefined *PTR_LAB_22173e18;
undefined *PTR_LAB_22173e38;
undefined *PTR_LAB_22173e78;
undefined *PTR_LAB_22173ea0;
undefined *PTR_LAB_22173ed0;
undefined *PTR_LAB_22173ef0;
undefined *PTR_LAB_22173f50;
undefined *PTR_FUN_22173f68;
undefined *PTR_LAB_22173ff0;
undefined *PTR_LAB_22174000;
undefined *PTR_LAB_22174018;
undefined *PTR_LAB_22174030;
undefined *PTR_LAB_22174040;
undefined *PTR_LAB_22174050;
undefined *PTR_LAB_22174078;
undefined *PTR_LAB_221740a0;
undefined *PTR_LAB_221740c0;
undefined *PTR_LAB_22174100;
undefined *PTR_LAB_22174128;
undefined *PTR_LAB_22174158;
undefined *PTR_LAB_22174178;
undefined *PTR_LAB_221741d8;
undefined *PTR_FUN_221741f0;
undefined *PTR_LAB_22174228;
undefined *PTR_LAB_22174240;
undefined *PTR_FUN_22174260;
undefined *PTR_FUN_22174298;
undefined *PTR_FUN_221742b0;
undefined *PTR_DAT_2218218c;
undefined *PTR_FUN_221742c8;
undefined *PTR_FUN_221742f8;
undefined *PTR_LAB_22174320;
undefined *PTR_FUN_221743d0;
undefined *PTR_FUN_22174468;
undefined1 DAT_22171590;
undefined4 DAT_221744a8;
undefined4 DAT_221744c8;
undefined4 DAT_221744b8;
undefined1 DAT_221744e8;
undefined1 DAT_221744d8;
undefined1 DAT_22176dc0;
undefined1 DAT_221744f8;
undefined1 DAT_22174508;
undefined1 DAT_22176df0;
undefined1 DAT_22176c98;
undefined1 DAT_22176e00;
undefined DAT_22182190;
undefined2 DAT_22182194;
undefined1 DAT_22174620;
undefined4 DAT_22176ec0;
unicode u__ExtentX_22182198;
unicode u__ExtentY_221821ac;
int DAT_221821c0;
int DAT_221821c4;
char DAT_221821c8;
undefined *PTR_u_Protocol_22182230;
undefined4 DAT_22182240;
undefined *PTR_FUN_22174578;
undefined1 DAT_22174610;
undefined4 DAT_22174630;
undefined *PTR_DAT_22182294;
string s_%u\%s.dll_221822b0;
HINSTANCE DAT_22182004;
int DAT_221822bc;
string s_%s%s.DLL_22182298;
string s_%s%s.DLL_221822a4;
undefined DAT_22175710;
unicode u__ExtentX_221822c0;
unicode u__ExtentY_221822d4;
undefined1 DAT_22176de0;
undefined1 DAT_22176dd0;
pointer PTR_FUN_22176aa8;
undefined4 DAT_22176aac;
undefined *PTR_LAB_22176ac0;
undefined *PTR_FUN_22176b00;
undefined DAT_22176b18;
undefined DAT_221826cc;
undefined DAT_221826c0;
undefined FUN_22179c35;
undefined *PTR_PTR_221820fc;
undefined FUN_2217ddd5;
undefined DAT_221826d8;
undefined DAT_221826e4;
undefined DAT_221826f0;
undefined DAT_221826fc;
undefined DAT_22176a88;
undefined DAT_22176a98;
LCID DAT_22182730;
undefined DAT_22182622;
int DAT_22182728;
undefined DAT_2218234a;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_2218234c;
undefined DAT_22182628;
string s_CLSID\%s_22182380;
string s_%s_Object_2218238c;
string s_InprocServer32_22182398;
string s_Apartment_221823a8;
string s_ThreadingModel_221823b4;
string s_ThreadingModel_221823c4;
undefined DAT_22182624;
undefined LAB_22176d70;
undefined DAT_22176d80;
undefined DAT_22176d90;
undefined DAT_221823d4;
string s_%s_Object_221823d8;
string s_CLSID_221823e4;
string s_CurVer_221823ec;
string s_%s.%s.%ld_221823f4;
string s_%s_Object_22182400;
string s_CLSID_2218240c;
string s_CLSID\%s_22182414;
string s_VersionIndependentProgID_22182420;
string s_%s.%s_2218243c;
string s_ProgID_22182444;
string s_%s.%s.%ld_2218244c;
string s_TypeLib_22182458;
string s_Version_22182460;
string s_%ld.%ld_22182468;
undefined DAT_2218262c;
undefined DAT_22182630;
undefined DAT_22182634;
undefined DAT_22182638;
undefined DAT_2218263c;
undefined DAT_22182640;
undefined DAT_22182644;
undefined DAT_22182648;
undefined DAT_2218264c;
undefined DAT_22182650;
string s_CLSID\%s_22182470;
string s_Control_2218247c;
string s_MiscStatus_22182484;
undefined DAT_22182490;
undefined DAT_22182494;
undefined DAT_22182498;
string s_ToolboxBitmap32_221824a0;
undefined DAT_22182654;
undefined DAT_22182658;
undefined DAT_2218265c;
undefined DAT_22182660;
pointer PTR_DAT_22182718;
string s_CLSID_221824b0;
string s_\InprocServer32_221824b8;
string s_%s.%s.%ld_221824c8;
string s_%s.%s_221824d4;
string s_%s.%s\CurVer_221824dc;
string s_%s.%s.%ld_221824ec;
undefined DAT_22182664;
string s_%s.%s.%ld_221824f8;
undefined DAT_22182668;
string s_%s.%s.%ld_22182504;
string s_%s.%s_22182510;
undefined DAT_2218266c;
undefined DAT_22182670;
undefined4 DAT_22182518;
undefined2 DAT_2218251c;
string s_CLSID\%s_22182520;
string s_Implemented_Categories_2218252c;
undefined DAT_22182674;
string s_%s\InprocServer_22182544;
undefined DAT_22182554;
FARPROC DAT_22182740;
string s_VERSION.DLL_22182558;
string s_GetFileVersionInfoSizeA_22182564;
FARPROC DAT_2218273c;
string s_VERSION.DLL_2218257c;
string s_GetFileVersionInfoA_22182588;
FARPROC DAT_22182738;
string s_VERSION.DLL_2218259c;
string s_VerQueryValueA_221825a8;
undefined *PTR_LAB_22176b78;
undefined *PTR_FUN_22176bb8;
undefined *PTR_LAB_22176bd0;
undefined1 DAT_22176db0;
undefined1 DAT_22176da0;
undefined DAT_221825b8;
undefined DAT_221825bc;
undefined DAT_221825c0;
undefined DAT_221825c4;
string s_>LangRef_221825c8;
int DAT_22182744;
undefined FUN_2217d976;
int *DAT_22182744;
short DAT_22182194;
undefined2 DAT_22182190;
void *DAT_22182748;
int *DAT_22182748;
undefined4 DAT_221756e8;
undefined DAT_22176b68;
undefined4 DAT_22176c10;
undefined DAT_22176e80;
undefined LAB_22180107;
undefined DAT_22176e90;
undefined DAT_22176ea0;
undefined DAT_22176eb0;
ushort DAT_22182190;
string s_DISPLAY_221825d4;
undefined4 DAT_22182114;
undefined DAT_22176d00;
undefined DAT_22176d10;
undefined DAT_22176d20;
undefined4 DAT_22182128;
undefined FUN_2217e0fb;
WNDPROC DAT_2218272c;
string s_CtlFrameWork_Parking_221825dc;
undefined FUN_22180262;
string s_CtlFrameWork_Parking_221825f4;
undefined *PTR_FUN_22176ca8;
undefined *PTR_LAB_22176cc0;
undefined *PTR_LAB_22176ce0;
HMODULE DAT_22182678;
int DAT_22182680;
FARPROC DAT_2218274c;
string s_%ld_-_%s_2218260c;
undefined DAT_22182688;
undefined DAT_2218268c;
string s_%ld_-_%s_22182618;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  ushort uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    FUN_2217168b();
    FUN_221716e2();
    if ((DAT_22182004 != (HMODULE)0x0) && (DAT_22182004 != DAT_22182008)) {
      FreeLibrary(DAT_22182004);
    }
    if (DAT_22182038 != (HMODULE)0x0) {
      FreeLibrary(DAT_22182038);
      DAT_22182038 = (HMODULE)0x0;
    }
  }
  else if (param_2 == 1) {
    DVar1 = GetVersion();
    bVar3 = 0x7fffffff < DVar1;
    uVar2 = CONCAT11((char)DVar1,(char)(DVar1 >> 8));
    _DAT_22182014 = 0;
    if (bVar3) {
      _DAT_22182014 = (uint)(0x409 < uVar2);
      _DAT_22182034 = 1;
    }
    else {
      _DAT_22182034 = (uint)(0x333 < uVar2);
    }
    DAT_22182010 = (uint)bVar3;
    _DAT_2218200c = (uint)!bVar3;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    if ((DAT_22182030 == (HANDLE)0x0) &&
       (DAT_22182030 = GetProcessHeap(), DAT_22182030 == (HANDLE)0x0)) {
      return 0;
    }
    DAT_22182008 = param_1;
    DisableThreadLibraryCalls(param_1);
    _DAT_22182000 = GetSystemMetrics(0x2a);
    FUN_221719bb();
    return 1;
  }
  return 1;
}



undefined4 FUN_221713f1(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  
  EnterCriticalSection(DAT_2218205c);
  puVar2 = &local_8;
  DVar1 = GetCurrentThreadId();
  FUN_22171428(DAT_22182058,DVar1,puVar2);
  LeaveCriticalSection(DAT_2218205c);
  return local_8;
}



undefined4 __thiscall FUN_22171428(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *param_2 = 0;
  uVar1 = FUN_22171463(this,param_1);
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar1 * 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar2[1] == param_1) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  *param_2 = puVar2[2];
  return 1;
}



uint __thiscall FUN_22171463(void *this,uint param_1)

{
  return (param_1 >> 8 ^ param_1 & 0xff) % *(uint *)((int)this + 0x18);
}



LRESULT FUN_2217147e(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LRESULT LVar1;
  int *piVar2;
  
  if (param_2 == 0x113) {
    piVar2 = (int *)GetWindowLongA(param_1,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(param_3,param_4);
    }
  }
  else {
    if (param_2 != 0xd10) {
      if (param_2 == 0xd11) {
        piVar2 = (int *)GetWindowLongA(param_1,0);
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*piVar2 + 8))(param_3,param_4);
        return 0;
      }
      if (param_2 != 0xd12) {
        LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return LVar1;
      }
    }
    piVar2 = (int *)GetWindowLongA(param_1,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(param_3,param_4);
    }
  }
  return 0;
}



undefined4 FUN_221714be(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[1];
  if (*piVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_22171679(param_1);
      FUN_2217150d(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



bool __fastcall FUN_22171504(int param_1)

{
  return *(int *)(param_1 + 4) == 0;
}



void __cdecl FUN_2217150d(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_22182030,0,param_1);
  }
  return;
}



void __fastcall FUN_22171527(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_22171578;
  while (puVar1 = (undefined4 *)param_1[1], puVar1 != (undefined4 *)0x0) {
    param_1[1] = *puVar1;
    FUN_2217150d(puVar1);
  }
  return;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x1660  2  DllCanUnloadNow
  if (DAT_22182114 != (int *)0x0) {
    (**(code **)(*DAT_22182114 + 8))(DAT_22182114);
    DAT_22182114 = (int *)0x0;
  }
  return (uint)(DAT_22182110 != 0);
}



void __fastcall FUN_22171679(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_22171640;
  InterlockedDecrement(&DAT_22182110);
  return;
}



void FUN_2217168b(void)

{
  short *psVar1;
  
  if (DAT_221820f8 != -1) {
    psVar1 = &DAT_221820f8;
    do {
      if ((*psVar1 == 2) && (*(short *)(*(int *)(psVar1 + 2) + 0x48) != 0)) {
        UnregisterClassA(*(LPCSTR *)(*(int *)(psVar1 + 2) + 0x44),DAT_22182008);
      }
      psVar1 = psVar1 + 4;
    } while (*psVar1 != -1);
  }
  if (DAT_2218211c != (HWND)0x0) {
    DestroyWindow(DAT_2218211c);
    DAT_2218211c = (HWND)0x0;
    UnregisterClassA(s_CtlFrameWork_Parking_22182318,DAT_22182008);
  }
  if (DAT_22182118 != '\0') {
    UnregisterClassA("CtlFrameWork_ReflectWindow",DAT_22182008);
    DAT_22182118 = '\0';
  }
  return;
}



void FUN_221716e2(void)

{
  FUN_22171700();
  if (((DAT_22182120 != (HMODULE)0x0) && (DAT_22182120 != DAT_22182004)) &&
     (DAT_22182120 != DAT_22182008)) {
    FreeLibrary(DAT_22182120);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_22182040);
  return;
}



void FUN_22171700(void)

{
  FUN_2217173f();
  FUN_22171972();
  FUN_22171984();
  DeleteCriticalSection(DAT_2218205c);
  FUN_2217150d(DAT_2218205c);
  DAT_2218205c = (LPCRITICAL_SECTION)0x0;
  if (DAT_22182058 != (undefined4 *)0x0) {
    (**(code **)*DAT_22182058)(1);
  }
  return;
}



undefined4 FUN_2217173f(void)

{
  undefined4 *this;
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  
  this = (undefined4 *)FUN_221713f1();
  if (this != (undefined4 *)0x0) {
    FUN_221717b6(this,0);
    DVar1 = GetCurrentThreadId();
    iVar2 = WSACleanup();
    EnterCriticalSection(DAT_2218205c);
    FUN_221717e8(DAT_22182058,DVar1);
    LeaveCriticalSection(DAT_2218205c);
    BVar3 = FUN_22171838((int)this);
    (**(code **)*this)(1);
    if ((BVar3 == 0) || (iVar2 == -1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    return uVar4;
  }
  return 1;
}



bool __thiscall FUN_221717b6(void *this,undefined4 param_1)

{
  UINT_PTR UVar1;
  
  *(undefined4 *)((int)this + 0x48) = param_1;
  if (*(UINT_PTR *)((int)this + 0x4c) != 0) {
    KillTimer(*(HWND *)((int)this + 0x44),*(UINT_PTR *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  if ((*(UINT *)((int)this + 0x48) != 0) && (*(HWND *)((int)this + 0x44) != (HWND)0x0)) {
    UVar1 = SetTimer(*(HWND *)((int)this + 0x44),500,*(UINT *)((int)this + 0x48),(TIMERPROC)0x0);
    *(UINT_PTR *)((int)this + 0x4c) = UVar1;
  }
  return *(int *)((int)this + 0x4c) != 0;
}



int WSACleanup(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x221717e2. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WSACleanup();
  return iVar1;
}



undefined4 __thiscall FUN_221717e8(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  uVar1 = FUN_22171463(this,param_1);
  piVar2 = (int *)(*(int *)((int)this + 0x14) + uVar1 * 4);
  piVar4 = (int *)*piVar2;
  if (piVar4 != (int *)0x0) {
    if (piVar4[1] == param_1) {
      *piVar2 = *piVar4;
    }
    else {
      do {
        piVar2 = piVar4;
        piVar4 = (int *)*piVar2;
        if (piVar4 == (int *)0x0) {
          return 0;
        }
      } while (piVar4[1] != param_1);
      piVar4 = (int *)*piVar2;
      *piVar2 = *piVar4;
    }
    FUN_22171829((void *)((int)this + 4),piVar4);
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
    uVar3 = 1;
  }
  return uVar3;
}



void __thiscall FUN_22171829(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 8);
  *(undefined4 **)((int)this + 8) = param_1;
  return;
}



BOOL __fastcall FUN_22171838(int param_1)

{
  BOOL BVar1;
  
  BVar1 = 1;
  if (*(HWND *)(param_1 + 0x44) != (HWND)0x0) {
    BVar1 = DestroyWindow(*(HWND *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  return BVar1;
}



undefined4 * __thiscall FUN_22171852(void *this,byte param_1)

{
  FUN_2217187a((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2217187a(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LPVOID pvVar4;
  
  *param_1 = &PTR_FUN_22171558;
  puVar1 = param_1 + 0x17;
  while( true ) {
    bVar3 = FUN_22171504((int)puVar1);
    if (CONCAT31(extraout_var,bVar3) != 0) break;
    FUN_2217319d((int)puVar1);
  }
  puVar2 = param_1 + 0x14;
  while( true ) {
    bVar3 = FUN_22171504((int)puVar2);
    if (CONCAT31(extraout_var_00,bVar3) != 0) break;
    pvVar4 = (LPVOID)FUN_2217319d((int)puVar2);
    FUN_2217150d(pvVar4);
  }
  FUN_22171527(puVar1);
  FUN_22171527(puVar2);
  FUN_221718c2(param_1);
  return;
}



void __fastcall FUN_221718c2(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_22171568;
  if ((HWND)param_1[0x11] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x11]);
  }
  param_1[0x11] = 0;
  FUN_221718ec(param_1 + 9);
  FUN_221718ec(param_1 + 1);
  return;
}



void __fastcall FUN_221718ec(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_22171540;
  FUN_22171922((int)param_1);
  if ((LPVOID)param_1[5] != (LPVOID)0x0) {
    HeapFree(DAT_22182030,0,(LPVOID)param_1[5]);
  }
  param_1[5] = 0;
  param_1[7] = 0;
  FUN_22171953((int)(param_1 + 1));
  return;
}



void __fastcall FUN_22171922(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      piVar3 = *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      if (piVar3 != (int *)0x0) {
        do {
          piVar1 = (int *)*piVar3;
          FUN_22171829((void *)(param_1 + 4),piVar3);
          piVar3 = piVar1;
        } while (piVar1 != (int *)0x0);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



void __fastcall FUN_22171953(int param_1)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  
  lpMem = *(undefined4 **)(param_1 + 0xc);
  while (lpMem != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*lpMem;
    HeapFree(DAT_22182030,0,lpMem);
    lpMem = puVar1;
  }
  return;
}



void FUN_22171972(void)

{
  UnregisterClassA("NMNotifyWindowClass",DAT_22182060);
  return;
}



bool FUN_22171984(void)

{
  return *(int *)(DAT_22182058 + 0x1c) == 0;
}



undefined4 * __thiscall FUN_22171993(void *this,byte param_1)

{
  FUN_221718ec((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void FUN_221719bb(void)

{
  FUN_221719cc();
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_22182040);
  return;
}



void FUN_221719cc(void)

{
  LPVOID this;
  
  this = FUN_22171a32(0x20,DAT_22182030);
  if (this == (LPVOID)0x0) {
    DAT_22182058 = (undefined4 *)0x0;
  }
  else {
    DAT_22182058 = FUN_22171a4e(this,0x83);
  }
  DAT_2218205c = (LPCRITICAL_SECTION)FUN_22171abf(0x18);
  InitializeCriticalSection(DAT_2218205c);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  FUN_22171ada(DAT_22182008);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  FUN_22171b30((undefined4 *)0x0);
  return;
}



LPVOID __cdecl FUN_22171a32(SIZE_T param_1,HANDLE param_2)

{
  LPVOID pvVar1;
  
  if ((param_2 == (HANDLE)0x0) && (param_2 = GetProcessHeap(), param_2 == (HANDLE)0x0)) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(param_2,0,param_1);
  return pvVar1;
}



undefined4 * __thiscall FUN_22171a4e(void *this,int param_1)

{
  LPVOID pvVar1;
  
  FUN_22171a8d((void *)((int)this + 4),0xc,0);
  *(undefined ***)this = &PTR_FUN_22171540;
  pvVar1 = HeapAlloc(DAT_22182030,8,param_1 << 2);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(LPVOID *)((int)this + 0x14) = pvVar1;
  *(int *)((int)this + 0x18) = param_1;
  return (undefined4 *)this;
}



uint * __thiscall FUN_22171a8d(void *this,uint param_1,uint param_2)

{
  *(uint *)this = param_1;
  if ((param_2 == 0) && (param_2 = (uint)(4000 / (ulonglong)param_1), param_2 < 0xb)) {
    param_2 = 10;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 4) = param_2;
  return (uint *)this;
}



void __cdecl FUN_22171abf(SIZE_T param_1)

{
  if (DAT_22182030 == (HANDLE)0x0) {
    DAT_22182030 = GetProcessHeap();
    if (DAT_22182030 == (HANDLE)0x0) {
      return;
    }
  }
  HeapAlloc(DAT_22182030,0,param_1);
  return;
}



ATOM __cdecl FUN_22171ada(HINSTANCE param_1)

{
  ATOM AVar1;
  WNDCLASSA local_2c;
  
  if (DAT_22182060 == (HINSTANCE)0x0) {
    local_2c.style = 0;
    local_2c.cbClsExtra = 0;
    local_2c.hIcon = (HICON)0x0;
    local_2c.hCursor = (HCURSOR)0x0;
    local_2c.hbrBackground = (HBRUSH)0x0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    DAT_22182060 = param_1;
    local_2c.lpfnWndProc = FUN_2217147e;
    local_2c.cbWndExtra = 4;
    local_2c.hInstance = param_1;
    local_2c.lpszClassName = "NMNotifyWindowClass";
    AVar1 = RegisterClassA(&local_2c);
    return AVar1;
  }
  return 1;
}



undefined4 __cdecl FUN_22171b30(undefined4 *param_1)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int iVar6;
  WSADATA *pWVar7;
  undefined4 *puVar8;
  WSADATA WStack_194;
  
  iVar1 = FUN_221713f1();
  if (iVar1 == 0) {
    iVar1 = WSAStartup(0x101,&WStack_194);
    if (iVar1 == 0) {
      if (((char)WStack_194.wVersion == '\x01') && (WStack_194.wVersion._1_1_ == '\x01')) {
        puVar3 = (undefined4 *)FUN_22171a32(0x3f8,DAT_22182030);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_22171c26(puVar3);
        }
        iVar1 = FUN_22171c8a((int)puVar3);
        if (iVar1 != 0) {
          EnterCriticalSection(DAT_2218205c);
          puVar8 = puVar3;
          DVar4 = GetCurrentThreadId();
          FUN_22171cc5(DAT_22182058,DVar4,puVar8);
          LeaveCriticalSection(DAT_2218205c);
          pWVar7 = &WStack_194;
          puVar3 = puVar3 + 0x9a;
          for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *(undefined4 *)pWVar7;
            pWVar7 = (WSADATA *)pWVar7->szDescription;
            puVar3 = puVar3 + 1;
          }
          if (param_1 != (undefined4 *)0x0) {
            uVar5 = FUN_22175a0d();
            return uVar5;
          }
          goto LAB_22171b67;
        }
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(1);
        }
      }
      WSACleanup();
    }
    uVar5 = 0;
  }
  else {
    hWnd = (HWND)FUN_2217269e(iVar1);
    BVar2 = IsWindow(hWnd);
    if (BVar2 == 0) {
      FUN_2217173f();
      uVar5 = FUN_22171b6e();
      return uVar5;
    }
    if (param_1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(iVar1 + 0x268);
      for (iVar6 = 100; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = param_1 + 1;
      }
    }
LAB_22171b67:
    uVar5 = 1;
  }
  return uVar5;
}



undefined4 FUN_22171b6e(void)

{
  int iVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  iVar1 = WSAStartup(0x101,(LPWSADATA)(unaff_EBP + -400));
  if (iVar1 == 0) {
    if ((*(char *)(unaff_EBP + -400) == '\x01') && (*(char *)(unaff_EBP + -399) == '\x01')) {
      puVar2 = (undefined4 *)FUN_22171a32(0x3f8,DAT_22182030);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_22171c26(puVar2);
      }
      iVar1 = FUN_22171c8a((int)puVar2);
      if (iVar1 != 0) {
        EnterCriticalSection(DAT_2218205c);
        puVar5 = puVar2;
        DVar3 = GetCurrentThreadId();
        FUN_22171cc5(DAT_22182058,DVar3,puVar5);
        LeaveCriticalSection(DAT_2218205c);
        puVar5 = (undefined4 *)(unaff_EBP + -400);
        puVar2 = puVar2 + 0x9a;
        for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          return 1;
        }
        uVar4 = FUN_22175a0d();
        return uVar4;
      }
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    WSACleanup();
  }
  return 0;
}



int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22171c20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}



undefined4 * __fastcall FUN_22171c26(undefined4 *param_1)

{
  FUN_22171c48(param_1);
  FUN_22171c79(param_1 + 0x14);
  FUN_22171c79(param_1 + 0x17);
  *param_1 = &PTR_FUN_22171558;
  return param_1;
}



undefined4 * __fastcall FUN_22171c48(undefined4 *param_1)

{
  FUN_22171a4e(param_1 + 1,0x83);
  FUN_22171a4e(param_1 + 9,0x83);
  *param_1 = &PTR_FUN_22171568;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



void __fastcall FUN_22171c79(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_22171578;
  return;
}



undefined4 __fastcall FUN_22171c8a(int param_1)

{
  HWND hWnd;
  
  hWnd = CreateWindowExA(0,"NMNotifyWindowClass","Notification Window",0,0,0,0,0,(HWND)0x0,
                         (HMENU)0x0,DAT_22182060,(LPVOID)0x0);
  *(HWND *)(param_1 + 0x44) = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowLongA(hWnd,0,param_1);
  }
  return *(undefined4 *)(param_1 + 0x44);
}



void __thiscall FUN_22171cc5(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = FUN_22171463(this,param_1);
  iVar3 = uVar1 * 4;
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_22171d10((int *)((int)this + 4));
      puVar2[1] = param_1;
      puVar2[2] = param_2;
      *puVar2 = *(undefined4 *)(*(int *)((int)this + 0x14) + iVar3);
      *(undefined4 **)(*(int *)((int)this + 0x14) + iVar3) = puVar2;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
      return;
    }
    if (puVar2[1] == param_1) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  puVar2[2] = param_2;
  return;
}



void __fastcall FUN_22171d10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1[2] == 0) {
    piVar2 = (int *)HeapAlloc(DAT_22182030,8,*param_1 * param_1[1] + 4);
    iVar4 = 0;
    *piVar2 = param_1[3];
    param_1[3] = (int)piVar2;
    piVar2 = piVar2 + 1;
    param_1[2] = (int)piVar2;
    piVar3 = piVar2;
    piVar1 = (int *)(*param_1 + (int)piVar2);
    if (param_1[1] != 1 && -1 < param_1[1] + -1) {
      do {
        piVar2 = piVar1;
        *piVar3 = (int)piVar2;
        iVar4 = iVar4 + 1;
        piVar3 = piVar2;
        piVar1 = (int *)((int)piVar2 + *param_1);
      } while (iVar4 < param_1[1] + -1);
    }
    *piVar2 = 0;
  }
  param_1[2] = *(int *)param_1[2];
  return;
}



HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  void *this;
  int *piVar2;
  HRESULT HVar3;
  FARPROC pFVar4;
  int iVar5;
  char local_14 [16];
  
                    // 0x1d6b  3  DllGetClassObject
  if (ppv == (LPVOID *)0x0) {
    HVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_22171dce((char *)rclsid);
    if (iVar1 == -1) {
      if (((DAT_22182008 != (HMODULE)0x0) &&
          (pFVar4 = GetProcAddress(DAT_22182008,s_VBFrameworkMapClassObject_22182330),
          pFVar4 != (FARPROC)0x0)) && (iVar5 = (*pFVar4)(rclsid,local_14), -1 < iVar5)) {
        iVar1 = FUN_22171dce(local_14);
      }
      if (iVar1 == -1) {
        return -0x7ffbfeef;
      }
    }
    this = (void *)FUN_22171abf(0xc);
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_22171e08(this,iVar1);
    }
    if (piVar2 == (int *)0x0) {
      HVar3 = -0x7ff8fff2;
    }
    else {
      HVar3 = (**(code **)*piVar2)(piVar2,riid,ppv);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return HVar3;
}



int __cdecl FUN_22171dce(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (DAT_221820f8 != -1) {
    ppuVar4 = &PTR_PTR_221820fc;
    do {
      if (*(char **)*ppuVar4 != (char *)0x0) {
        iVar3 = 0x10;
        bVar7 = true;
        pcVar5 = param_1;
        pcVar6 = *(char **)*ppuVar4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          return iVar2;
        }
      }
      iVar2 = iVar2 + 1;
      ppuVar1 = ppuVar4 + 1;
      ppuVar4 = ppuVar4 + 2;
    } while (*(short *)ppuVar1 != -1);
  }
  return -1;
}



undefined4 * __thiscall FUN_22171e08(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_22171640;
  InterlockedIncrement(&DAT_22182110);
  *(undefined4 *)((int)this + 4) = 1;
  return (undefined4 *)this;
}



int FUN_22171e7e(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    if (DAT_22182124 == 0) {
      DAT_22182128 = FUN_22171ee7();
      DAT_22182124 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    if (DAT_22182128 == 0) {
      iVar1 = -0x7ffbfeee;
    }
    else {
      iVar1 = FUN_22172109(param_2,*(int *)(param_1 + 8),param_4,param_3);
    }
  }
  return iVar1;
}



undefined4 FUN_22171ee7(void)

{
  uint cbMultiByte;
  int iVar1;
  undefined4 uVar2;
  HKEY local_84 [31];
  byte local_8;
  
  iVar1 = lstrlenW(u_2c49f800_c2dd_11cf_9ad6_0080c7e7_22182130);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_22171f40(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,u_2c49f800_c2dd_11cf_9ad6_0080c7e7_22182130,-1,(LPSTR)local_84[0],
                      cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  uVar2 = FUN_22171f7c(local_84[0]);
  if ((local_84[0] != (HKEY)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_22182030,0,local_84[0]);
  }
  return uVar2;
}



undefined4 * __thiscall FUN_22171f40(void *this,uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x79) {
    puVar1 = (undefined2 *)((int)this + 4);
  }
  else {
    puVar1 = (undefined2 *)HeapAlloc(DAT_22182030,0,param_1);
  }
  *(undefined2 **)this = puVar1;
  *(uint *)((int)this + 0x7c) = (uint)(0x78 < param_1) | *(uint *)((int)this + 0x7c) & 0xfffffffe;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return (undefined4 *)this;
}



undefined4 __cdecl FUN_22171f7c(HKEY param_1)

{
  HKEY lpSubKey;
  bool bVar1;
  LSTATUS LVar2;
  undefined3 extraout_var;
  char local_d4 [200];
  HKEY local_c;
  undefined4 local_8;
  
  lpSubKey = param_1;
  local_8 = 0;
  if (param_1 != (HKEY)0x0) {
    LVar2 = RegOpenKeyA((HKEY)0x80000000,s_Licenses_22182180,&local_c);
    if (LVar2 == 0) {
      if ((char)lpSubKey->unused != '\0') {
        LVar2 = RegOpenKeyA(local_c,(LPCSTR)lpSubKey,&param_1);
        if (LVar2 == 0) {
          bVar1 = FUN_22171ff5(param_1,(byte *)lpSubKey,local_d4);
          if (CONCAT31(extraout_var,bVar1) != 0) {
            local_8 = 1;
          }
          RegCloseKey(param_1);
        }
      }
      RegCloseKey(local_c);
    }
  }
  return local_8;
}



bool __cdecl FUN_22171ff5(HKEY param_1,byte *param_2,char *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  bool bVar3;
  byte local_d0 [200];
  int local_8;
  
  bVar3 = false;
  local_8 = lstrlenA((LPCSTR)param_2);
  local_8 = local_8 + 1;
  if (local_8 < 9) {
    bVar3 = false;
  }
  else {
    FUN_22172061(param_2,param_3,local_d0);
    LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)local_d0,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrcmpA((LPCSTR)local_d0,param_3);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



void __cdecl FUN_22172061(byte *param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint local_8;
  
  bVar1 = *param_1;
  local_8 = 0;
  pbVar3 = param_1;
  while (pbVar5 = param_3, bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  while (pbVar3 = pbVar3 + -1, param_1 <= pbVar3) {
    *pbVar5 = *pbVar3;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = 0;
  bVar1 = *param_3;
  pbVar3 = param_3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  pbVar3 = pbVar3 + -1;
  bVar1 = *param_1;
  pbVar5 = param_1;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  if (param_1 < pbVar5 + -1) {
    iVar4 = (int)param_3 - (int)param_1;
    do {
      param_1[iVar4] = param_1[iVar4] ^ *param_1;
      local_8 = local_8 + (int)(char)param_1[iVar4];
      param_1 = param_1 + 1;
    } while (param_1 < pbVar5 + -1);
  }
  pbVar5 = param_3;
  if (param_3 < pbVar3) {
    do {
      pbVar5 = pbVar5 + 1;
      pbVar3 = pbVar3 + -1;
    } while (pbVar5 < pbVar3);
  }
  cVar2 = (char)(local_8 % 10) + 'a';
  for (; param_3 <= pbVar5 + -1; param_3 = param_3 + 1) {
    *param_2 = (*param_3 & 0xf) + cVar2;
    param_2[1] = ((char)*param_3 >> 4) + cVar2;
    param_2 = param_2 + 2;
  }
  *param_2 = '\0';
  return;
}



int __cdecl FUN_22172109(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*(code **)((&PTR_PTR_221820fc)[param_2 * 2] + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)((&PTR_PTR_221820fc)[param_2 * 2] + 0x14))(), -1 < iVar2)) {
    if (*(code **)((&PTR_PTR_221820fc)[param_2 * 2] + 0x10) == (code *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      piVar1 = (int *)(**(code **)((&PTR_PTR_221820fc)[param_2 * 2] + 0x10))(param_1);
      if (piVar1 == (int *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      else if (param_1 == 0) {
        iVar2 = (**(code **)*piVar1)(piVar1,param_4,param_3);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      else {
        if (*param_4 == 0) {
          iVar2 = 0x10;
          bVar4 = true;
          pcVar3 = "";
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar4 = (char)*param_4 == *pcVar3;
            param_4 = (int *)((int)param_4 + 1);
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            *param_3 = piVar1;
            return 0;
          }
        }
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar2 = -0x7ff8ffa9;
      }
    }
  }
  return iVar2;
}



undefined4 * __thiscall FUN_22172195(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  HBITMAP h;
  int iVar2;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)((int)this + 0xc0);
  FUN_221723bc(this,param_1,0,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *puVar1 = &PTR_LAB_22173ce8;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_22173cd0;
  *(undefined ***)((int)this + 200) = &PTR_LAB_22173cc0;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_22173ca0;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_22173c88;
  FUN_221725cd((void *)((int)this + 0xd4),(LPCSTR)0x0);
  FUN_221725cd((void *)((int)this + 0xd8),(LPCSTR)0x0);
  FUN_221725cd((void *)((int)this + 0xdc),(LPCSTR)0x0);
  FUN_221725cd((void *)((int)this + 0xe0),(LPCSTR)0x0);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  FUN_22172606((undefined4 *)((int)this + 0xf4));
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined ***)this = &PTR_FUN_22173c00;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_22173be8;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_22173b88;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_22173b68;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_22173b38;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_22173b10;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_22173ad0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_22173ab0;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_22173a88;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_22173a60;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_22173a50;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_22173a40;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_22173a28;
  *(undefined ***)((int)this + 100) = &PTR_LAB_22173a10;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_22173a00;
  *puVar1 = &PTR_LAB_22173980;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_22173968;
  *(undefined ***)((int)this + 200) = &PTR_LAB_22173958;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_22173938;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_22173920;
  FUN_22172611(this,1);
  puVar1 = (undefined4 *)FUN_22171a32(0x728,DAT_22182030);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_2217261d(puVar1,(LPCSTR)0x0);
    puVar1[0x1c9] = this;
    *puVar1 = &PTR_FUN_221738f0;
  }
  *(undefined4 **)((int)this + 0xec) = puVar1;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  puVar1 = (undefined4 *)FUN_22171a32(0x58,DAT_22182030);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_221726e1(puVar1);
    puVar1[0x14] = this;
    puVar1[0x15] = 0;
    *puVar1 = &PTR_FUN_22173840;
  }
  *(undefined4 **)((int)this + 0xf0) = puVar1;
  puVar1[8] = puVar1[8] | 1;
  *(undefined4 *)((int)this + 0x10c) = 0;
  h = LoadBitmapA(DAT_22182008,(LPCSTR)0x1);
  *(HBITMAP *)((int)this + 0x110) = h;
  GetObjectA(h,0x18,local_1c);
  iVar2 = GetSystemMetrics(0x2d);
  *(int *)((int)this + 0x114) = iVar2;
  iVar2 = GetSystemMetrics(0x2e);
  *(int *)((int)this + 0x118) = iVar2;
  *(undefined4 *)((int)this + 0x88) = local_18;
  *(undefined4 *)((int)this + 0x8c) = local_14;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_221723bc(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_22172515(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_22174178;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_22174158;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_22174128;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_22174100;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_221740c0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_221740a0;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_22174078;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_22174050;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_22174040;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_22174030;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_22174018;
  *(undefined ***)((int)this + 100) = &PTR_LAB_22174000;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_22173ff0;
  *(undefined ***)this = &PTR_FUN_22173f68;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_22173f50;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_22173ef0;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_22173ed0;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_22173ea0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_22173e78;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_22173e38;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_22173e18;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_22173df0;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_22173dc8;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_22173db8;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_22173da8;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_22173d90;
  *(undefined ***)((int)this + 100) = &PTR_LAB_22173d78;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_22173d68;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x88) = 100;
  *(undefined4 *)((int)this + 0x8c) = 0x32;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffd0;
  *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffe21 | 1;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_22172515(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_22172565(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_22174228;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_22174240;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_22174240;
  *(undefined1 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined ***)this = &PTR_FUN_221741f0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_221741d8;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_22172565(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_22172590(this,param_1,param_3);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = &PTR_FUN_22174260;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_22172590(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((int)this + 0xc);
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_221742b0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_22174298;
  InterlockedIncrement(&DAT_22182110);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_221725cd(void *this,LPCSTR param_1)

{
  int iVar1;
  LPSTR lpString1;
  
  if ((param_1 == PTR_DAT_2218218c) || (param_1 == (LPCSTR)0x0)) {
    *(undefined **)this = PTR_DAT_2218218c;
  }
  else {
    iVar1 = lstrlenA(param_1);
    lpString1 = (LPSTR)FUN_22174cac(iVar1 + 1);
    *(LPSTR *)this = lpString1;
    lstrcpyA(lpString1,param_1);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_22172606(undefined4 *param_1)

{
  *param_1 = PTR_DAT_2218218c;
  return;
}



undefined4 __thiscall FUN_22172611(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x19) = param_1;
  return 0;
}



undefined4 * __thiscall FUN_2217261d(void *this,LPCSTR param_1)

{
  FUN_2217263c((undefined4 *)this);
  *(undefined ***)this = &PTR_FUN_221742c8;
  FUN_221726a2(this,param_1);
  return (undefined4 *)this;
}



undefined4 * __fastcall FUN_2217263c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_221742f8;
  FUN_22171b30((undefined4 *)0x0);
  puVar2 = (undefined4 *)((int)param_1 + 0x103);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 1;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x503);
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x185] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  return param_1;
}



undefined4 __fastcall FUN_2217269e(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



void __thiscall FUN_221726a2(void *this,LPCSTR param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined3 extraout_var;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  LPCSTR pCVar8;
  char *pcVar9;
  
  pcVar7 = (char *)((int)this + 0x618);
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  pcVar7[0] = '\0';
  pcVar7[1] = '\0';
  pcVar7[2] = '\0';
  *(undefined4 *)((int)this + 0x718) = 0;
  *(undefined4 *)((int)this + 0x720) = 0;
  if (param_1 == (LPCSTR)0x0) {
    *(undefined4 *)((int)this + 0x71c) = 0;
  }
  else {
    uVar3 = lstrlenA(param_1);
    if (uVar3 < 0x100) {
      uVar3 = 0xffffffff;
      pCVar8 = param_1;
      do {
        pcVar7 = pCVar8;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar7 = pCVar8 + 1;
        cVar1 = *pCVar8;
        pCVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar7 = pcVar7 + -uVar3;
      pcVar9 = (char *)((int)this + 0x618);
      for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar4 = inet_addr(param_1);
      if ((uVar4 == 0xffffffff) &&
         (bVar2 = FUN_22177e8a((int)this), CONCAT31(extraout_var,bVar2) == 0)) {
        *(undefined4 *)((int)this + 0x71c) = 1;
        return;
      }
      *(ulong *)((int)this + 0x718) = uVar4;
      *(undefined4 *)((int)this + 0x71c) = 2;
    }
    else {
      *(undefined4 *)((int)this + 0x71c) = 4;
      *(undefined4 *)((int)this + 0x720) = 0x274f;
      WSASetLastError(0x274f);
    }
  }
  return;
}



undefined4 * __fastcall FUN_221726e1(undefined4 *param_1)

{
  FUN_22172701(param_1);
  *param_1 = &PTR_LAB_22174320;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



undefined4 * __fastcall FUN_22172701(undefined4 *param_1)

{
  LPVOID this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  FUN_22171c79(param_1 + 0xd);
  *param_1 = &PTR_FUN_221743d0;
  FUN_22171b30((undefined4 *)0x0);
  param_1[1] = 0xffffffff;
  param_1[5] = 1;
  this = FUN_22171a32(0x728,DAT_22182030);
  if (this == (LPVOID)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_2217277c(this,param_1,(LPCSTR)0x0);
  }
  param_1[4] = puVar1;
  puVar1 = (undefined4 *)FUN_22171a32(0xc,DAT_22182030);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_22171c79(puVar1);
  }
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_2217277c(void *this,undefined4 param_1,LPCSTR param_2)

{
  FUN_2217261d(this,param_2);
  *(undefined ***)this = &PTR_FUN_22174468;
  *(undefined4 *)((int)this + 0x724) = param_1;
  return (undefined4 *)this;
}



undefined4 FUN_2217279e(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*param_2 == 0) {
    iVar2 = 0x10;
    bVar5 = true;
    piVar3 = param_2;
    pcVar4 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = (char)*piVar3 == *pcVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *param_3 = param_1;
      return 0;
    }
  }
  uVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0xc))(param_2,param_3);
  return uVar1;
}



int FUN_221727e4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    *(undefined4 *)(param_1 + 4) = 2;
    (**(code **)(*(int *)(param_1 + -0xc) + 0x10))();
    *(undefined4 *)(param_1 + 4) = 0;
    if ((undefined4 *)(param_1 + -0xc) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(param_1 + -0xc))(1);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
  }
  return iVar1;
}



undefined4 __thiscall FUN_22172821(void *this,uint *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  bool bVar7;
  
  *param_2 = 0;
  uVar3 = *param_1;
  if (uVar3 == 0x248dd892) {
    iVar2 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = &DAT_22171590;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_22172840;
    uVar3 = (int)this + 0xc0;
LAB_2217288d:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & uVar3);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = (int)piVar4;
    uVar1 = 0;
  }
  else {
LAB_22172840:
    if (uVar3 == 0x4d07fc10) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_221744a8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xc4;
        goto LAB_2217288d;
      }
    }
    if (uVar3 == 0x376bd3aa) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_221744c8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xcc;
        goto LAB_2217288d;
      }
    }
    if (uVar3 == 0xcb5bdc81) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_221744b8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xd0;
        goto LAB_2217288d;
      }
    }
    uVar1 = FUN_221728a2(this,param_1,param_2);
  }
  return uVar1;
}



undefined4 __thiscall FUN_221728a2(void *this,uint *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  if (uVar1 < 0x128) {
    if (uVar1 == 0x127) {
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = "\'\x01";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_2217644a;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      switch(uVar1) {
      case 0x10a:
        if (uVar1 != 0x10a) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\n\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      default:
        goto switchD_2217294d_caseD_10b;
      case 0x10c:
        if (uVar1 != 0x10c) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\f\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      case 0x10d:
        if (uVar1 != 0x10d) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\r\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x48);
          *param_2 = (int)this + 0x48;
          (**(code **)(iVar3 + 4))((int)this + 0x48);
          return 0;
        }
        break;
      case 0x112:
        if (uVar1 != 0x112) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\x12\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x38);
          *param_2 = (int)this + 0x38;
          (**(code **)(iVar3 + 4))((int)this + 0x38);
          return 0;
        }
        break;
      case 0x113:
        if (uVar1 != 0x113) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\x13\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x40);
          *param_2 = (int)this + 0x40;
          (**(code **)(iVar3 + 4))((int)this + 0x40);
          return 0;
        }
        break;
      case 0x114:
        if (uVar1 != 0x114) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\x14\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
        break;
      case 0x117:
        if (uVar1 != 0x117) goto LAB_2217644a;
        iVar3 = 0x10;
        bVar5 = true;
        pcVar4 = "\x17\x01";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar5 = (char)*param_1 == *pcVar4;
          param_1 = (uint *)((int)param_1 + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (!bVar5) goto LAB_2217644a;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
      }
    }
  }
  else if (uVar1 < 0x1c2056cd) {
    if (uVar1 == 0x1c2056cc) {
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_22176e00;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_2217644a;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x40);
        *param_2 = (int)this + 0x40;
        (**(code **)(iVar3 + 4))((int)this + 0x40);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xd97180) goto switchD_2217294d_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_22176c98;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_2217644a;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x68);
        *param_2 = (int)this + 0x68;
        (**(code **)(iVar3 + 4))((int)this + 0x68);
        return 0;
      }
    }
  }
  else if (uVar1 < 0x3af24293) {
    if (uVar1 == 0x3af24292) {
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_22176df0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_2217644a;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x37d84f60) goto switchD_2217294d_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_22174508;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_2217644a;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x4c);
        *param_2 = (int)this + 0x4c;
        (**(code **)(iVar3 + 4))((int)this + 0x4c);
        return 0;
      }
    }
  }
  else if (uVar1 < 0x7fd52381) {
    if (uVar1 != 0x7fd52380) {
      if (uVar1 == 0x55980ba0) {
        uVar2 = FUN_2217639a(this,(int)this);
        return uVar2;
      }
switchD_2217294d_caseD_10b:
      uVar2 = FUN_22173290(this,(int *)param_1,param_2);
      return uVar2;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_221744f8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_2217644a;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x50);
      *param_2 = (int)this + 0x50;
      (**(code **)(iVar3 + 4))((int)this + 0x50);
      return 0;
    }
  }
  else if (uVar1 < 0xb196b289) {
    if (uVar1 != 0xb196b288) {
      if (uVar1 == 0xb196b283) {
        uVar2 = FUN_221763db(this,(int)this);
        return uVar2;
      }
      goto switchD_2217294d_caseD_10b;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_221744e8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_2217644a;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x3c);
      *param_2 = (int)this + 0x3c;
      (**(code **)(iVar3 + 4))((int)this + 0x3c);
      return 0;
    }
  }
  else if (uVar1 == 0xb196b28b) {
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_22176dc0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_2217644a;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x58);
      *param_2 = (int)this + 0x58;
      (**(code **)(iVar3 + 4))((int)this + 0x58);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xcf51ed10) goto switchD_2217294d_caseD_10b;
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_221744d8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_2217644a;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 100);
      *param_2 = (int)this + 100;
      (**(code **)(iVar3 + 4))((int)this + 100);
      return 0;
    }
  }
  *param_2 = 0;
LAB_2217644a:
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_22172b1c(int param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  if ((((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) || (*param_2 < 0x38)) ||
     (*param_3 < 0x18)) {
    return -0x7fff0001;
  }
  if ((param_2[1] != 0) &&
     (iVar3 = (**(code **)(*(int *)(param_1 + -0x2c) + 0xc))(param_1 + -0x2c,param_2[1]), iVar3 < 0)
     ) {
    return iVar3;
  }
  if (param_2[0xb] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    _DAT_22182190 = param_2[0xb];
    DAT_22182194 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  }
  if ((param_2[5] & 0x40) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 3;
  }
  piVar5 = (int *)param_2[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    puVar4 = (uint *)FUN_22172d0f((void *)(param_1 + -0x38),param_2[3],param_3 + 4);
    if ((int)puVar4 < 0) {
      piVar5 = (int *)param_2[3];
      param_2 = puVar4;
      goto LAB_221764c1;
    }
  }
  if ((param_2[4] == 0) ||
     (puVar4 = (uint *)(**(code **)(*(int *)(param_1 + -0x44) + 0x14))
                                 (param_1 + -0x44,param_2[4],param_3 + 3), -1 < (int)puVar4)) {
    if ((param_2[2] != 0) &&
       (iVar3 = (**(code **)(*(int *)(param_1 + -0x1c) + 0x1c))(param_1 + -0x1c,1,0,param_2[2]),
       iVar3 < 0)) {
      return iVar3;
    }
    puVar2 = (&PTR_PTR_221820fc)[*(int *)(param_1 + -0x50) * 2];
    param_3[1] = *(uint *)(puVar2 + 0x34);
    sVar1 = *(short *)(puVar2 + 0x3c);
    param_3[5] = *(uint *)(puVar2 + 0x38);
    iVar3 = *(int *)(param_1 + -100);
    param_3[2] = (uint)(sVar1 != 0);
    iVar3 = (**(code **)(iVar3 + 0x70))(param_2,param_3 + 2);
    return iVar3;
  }
  piVar5 = (int *)param_2[4];
  param_2 = puVar4;
LAB_221764c1:
  (**(code **)(*piVar5 + 8))(piVar5);
  return (int)param_2;
}



void FUN_22172cbf(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7fffbffb;
  if (*(char *)((int)param_1 + 8) == '\0') {
    if (*(int *)((&PTR_PTR_221820fc)[*(int *)((int)param_1 + -0xc) * 2] + 0x24) != 0) {
      iVar2 = (**(code **)*param_2)
                        (param_2,*(int *)((&PTR_PTR_221820fc)[*(int *)((int)param_1 + -0xc) * 2] +
                                         0x24),&param_2);
    }
    if (-1 < iVar2) goto LAB_22172cfc;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_22174620,&param_2);
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_22176ec0,&param_2);
  }
  if (iVar2 < 0) {
    return;
  }
LAB_22172cfc:
  FUN_22172d0f(param_1,param_2,param_3);
  return;
}



undefined4 __thiscall FUN_22172d0f(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  
  iVar2 = (int)(short)*(ushort *)((int)this + 10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 4) = param_1;
  }
  else if (iVar2 == 1) {
    puVar4 = (undefined4 *)HeapAlloc(DAT_22182030,0,0x20);
    if (puVar4 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 **)((int)this + 4) = puVar4;
    *puVar4 = uVar1;
    puVar4[1] = param_1;
  }
  else {
    if ((*(ushort *)((int)this + 10) & 7) == 0) {
      pvVar3 = HeapReAlloc(DAT_22182030,0,*(LPVOID *)((int)this + 4),iVar2 * 4 + 0x20);
      if (pvVar3 == (LPVOID)0x0) {
        return 0x8007000e;
      }
      *(LPVOID *)((int)this + 4) = pvVar3;
    }
    else {
      pvVar3 = *(LPVOID *)((int)this + 4);
    }
    *(undefined4 *)((int)pvVar3 + *(short *)((int)this + 10) * 4) = param_1;
  }
  *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
  *param_2 = param_1;
  return 0;
}



void __thiscall FUN_22172dd7(void *this,int param_1)

{
  void *this_00;
  void *this_01;
  BOOL BVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  int iVar4;
  tagMSG *ptVar5;
  undefined4 *puVar6;
  tagMSG local_2c;
  void *local_10;
  void *local_c;
  HWND local_8;
  
  if ((*(int *)((int)this + 4) != -1) &&
     (local_c = this, this_01 = (void *)FUN_221713f1(), this_01 != (void *)0x0)) {
    local_10 = this_01;
    local_8 = (HWND)FUN_2217269e((int)this_01);
    if (param_1 == 0) {
      while (pvVar3 = (LPVOID)FUN_2217319d((int)this + 0x34), pvVar3 != (LPVOID)0x0) {
        PostMessageA(local_8,*(UINT *)((int)pvVar3 + 4),*(WPARAM *)((int)pvVar3 + 8),
                     *(LPARAM *)((int)pvVar3 + 0xc));
        FUN_2217150d(pvVar3);
      }
      WSAAsyncSelect(*(SOCKET *)((int)this + 4),local_8,0xd10,0x3f);
    }
    else {
      WSAAsyncSelect(*(SOCKET *)((int)this + 4),local_8,0,0);
      this_00 = (void *)((int)this + 0x34);
      FUN_2217b29b(this_01,*(int *)((int)this + 4),this_00);
      while (BVar1 = PeekMessageA(&local_2c,local_8,0xd10,0xd10,1), BVar1 != 0) {
        if (local_2c.wParam == *(WPARAM *)((int)this + 4)) {
          puVar2 = (undefined4 *)FUN_22171abf(0x1c);
          if (puVar2 != (undefined4 *)0x0) {
            ptVar5 = &local_2c;
            puVar6 = puVar2;
            for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = ptVar5->hwnd;
              ptVar5 = (tagMSG *)&ptVar5->message;
              puVar6 = puVar6 + 1;
            }
            FUN_221776cb(this_00,puVar2);
            this = local_c;
          }
        }
        else if (local_2c.wParam != 0xffffffff) {
          FUN_2217b206(local_10,local_2c.message,local_2c.wParam,local_2c.lParam);
        }
      }
      while (BVar1 = PeekMessageA(&local_2c,local_8,0xd12,0xd12,1), BVar1 != 0) {
        if (local_2c.wParam == *(WPARAM *)((int)this + 4)) {
          puVar2 = (undefined4 *)FUN_22171abf(0x1c);
          if (puVar2 != (undefined4 *)0x0) {
            ptVar5 = &local_2c;
            puVar6 = puVar2;
            for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = ptVar5->hwnd;
              ptVar5 = (tagMSG *)&ptVar5->message;
              puVar6 = puVar6 + 1;
            }
            FUN_221776cb(this_00,puVar2);
            this = local_c;
          }
        }
        else if (local_2c.wParam != 0xffffffff) {
          FUN_2217b206(local_10,local_2c.message,local_2c.wParam,local_2c.lParam);
        }
      }
    }
  }
  return;
}



void FUN_22172e1f(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_22172e4b(param_2,param_3);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x4c) + 0x40))((int *)(param_1 + -0x4c),param_2,param_3);
  }
  return;
}



undefined4 FUN_22172e4b(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 local_20 [4];
  int local_18;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_18 = 0;
  local_10 = 100;
  local_c = 0x32;
  local_20[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentX_22182198,local_20,param_2);
  local_10 = local_18;
  if (-1 < iVar1) {
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentY_221821ac,local_20,param_2);
    if (-1 < iVar1) {
      local_c = local_18;
      FUN_22172ed1(&local_10,(int *)(local_8 + 0x88));
      return 0;
    }
  }
  *(undefined4 *)(local_8 + 0x88) = 100;
  *(undefined4 *)(local_8 + 0x8c) = 0x32;
  return 0;
}



void __cdecl FUN_22172ed1(int *param_1,int *param_2)

{
  FUN_22172f13();
  *param_2 = (*param_1 * DAT_221821c0 + 0x4f6) / 0x9ec;
  param_2[1] = (param_1[1] * DAT_221821c4 + 0x4f6) / 0x9ec;
  return;
}



void FUN_22172f13(void)

{
  HDC hdc;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_221821c8 == '\0') {
    hdc = GetDC((HWND)0x0);
    DAT_221821c0 = GetDeviceCaps(hdc,0x58);
    DAT_221821c4 = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    DAT_221821c8 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  return;
}



undefined4 FUN_22172f6c(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_14 [4];
  uint local_c [2];
  
  FUN_22173010(param_1);
  if (PTR_u_Protocol_22182230 != (undefined *)0x0) {
    puVar4 = &DAT_22182240;
    do {
      local_14[0] = (undefined2)puVar4[-1];
      local_c[0] = 0;
      iVar1 = (**(code **)(*param_2 + 0xc))(param_2,puVar4[-4],local_14,param_3);
      uVar3 = *puVar4;
      puVar5 = local_c;
      if (iVar1 < 0) {
        puVar5 = puVar4 + -2;
      }
      puVar6 = (uint *)(puVar4[-3] + 0xfc + param_1);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)puVar6 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      }
      puVar5 = puVar4 + 1;
      puVar4 = puVar4 + 5;
    } while (*puVar5 != 0);
  }
  FUN_221731af(param_1);
  GetObjectA(*(HANDLE *)(param_1 + 0x110),0x18,local_2c);
  *(undefined4 *)(param_1 + 0x88) = local_28;
  *(undefined4 *)(param_1 + 0x8c) = local_24;
  return 0;
}



void __fastcall FUN_22173010(int param_1)

{
  if (*(BSTR *)(param_1 + 0xfc) != (BSTR)0x0) {
    SysFreeString(*(BSTR *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xf0))(1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}



undefined4 * __thiscall FUN_22173060(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_22173840;
  FUN_2217308e((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2217308e(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_22174320;
  if (param_1[1] != -1) {
    FUN_221735b5((int)param_1);
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
  }
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x13])(1);
  }
  FUN_221730c0(param_1);
  return;
}



void __fastcall FUN_221730c0(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  *param_1 = &PTR_FUN_221743d0;
  if (param_1[1] != -1) {
    FUN_221735e1((int)param_1);
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  iVar3 = param_1[6];
  if (iVar3 != 0) {
    while( true ) {
      bVar1 = FUN_22171504(iVar3);
      if (CONCAT31(extraout_var,bVar1) != 0) break;
      pvVar2 = (LPVOID)FUN_2217319d(param_1[6]);
      FUN_2217150d(pvVar2);
      iVar3 = param_1[6];
    }
    FUN_2217150d((LPVOID)param_1[6]);
  }
  puVar4 = param_1;
  this = (void *)FUN_221713f1();
  FUN_22173160(this,(int)puVar4);
  while( true ) {
    pvVar2 = (LPVOID)FUN_2217319d((int)(param_1 + 0xd));
    if (pvVar2 == (LPVOID)0x0) break;
    FUN_2217150d(pvVar2);
  }
  FUN_22171527(param_1 + 0xd);
  return;
}



undefined4 * __thiscall FUN_22173125(void *this,byte param_1)

{
  FUN_2217314d((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2217314d(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_22174468;
  *param_1 = &PTR_FUN_221742c8;
  *param_1 = &PTR_FUN_221742f8;
  return;
}



void __fastcall FUN_22173153(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_221742c8;
  *param_1 = &PTR_FUN_221742f8;
  return;
}



void __fastcall FUN_22173159(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_221742f8;
  return;
}



int __thiscall FUN_22173160(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_22173185((void *)((int)this + 0x5c),param_1);
  if (iVar2 != 0) {
    bVar1 = FUN_22171504((int)this + 0x5c);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_221717b6(this,0);
    }
  }
  return iVar2;
}



undefined4 __thiscall FUN_22173185(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar2 = *(int **)((int)this + 4);
  piVar4 = *(int **)((int)this + 4);
  while( true ) {
    piVar3 = piVar2;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    if (piVar3[1] == param_1) break;
    piVar2 = (int *)*piVar3;
    piVar4 = piVar3;
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (piVar3 == piVar4) {
    iVar1 = *piVar3;
    *(int *)((int)this + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  else {
    *piVar4 = *piVar3;
    if (piVar3 == *(int **)((int)this + 8)) {
      *(int **)((int)this + 8) = piVar4;
    }
  }
  FUN_2217150d(piVar3);
  return 1;
}



int __fastcall FUN_2217319d(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    FUN_2217150d(piVar1);
  }
  return iVar3;
}



bool __fastcall FUN_221731af(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(int *)(param_1 + 0xc0) + 0x70))(param_1 + 0xc0);
  if (*(undefined4 **)(param_1 + 0xf0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xf0))(1);
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  if (*(int *)(param_1 + 0x108) == 0) {
    puVar2 = (undefined4 *)FUN_22171a32(0x58,DAT_22182030);
    if (puVar2 == (undefined4 *)0x0) {
LAB_22175c41:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_221726e1(puVar2);
      puVar2[0x15] = 0;
      puVar2[0x14] = param_1;
      *puVar2 = &PTR_FUN_22173840;
    }
  }
  else {
    if (*(int *)(param_1 + 0x108) != 1) goto LAB_2217320a;
    puVar2 = (undefined4 *)FUN_22171a32(0x44,DAT_22182030);
    if (puVar2 == (undefined4 *)0x0) goto LAB_22175c41;
    FUN_22172701(puVar2);
    puVar2[0x10] = param_1;
    *puVar2 = &PTR_FUN_22174578;
  }
  *(undefined4 **)(param_1 + 0xf0) = puVar2;
LAB_2217320a:
  puVar1 = (uint *)(*(int *)(param_1 + 0xf0) + 0x20);
  *puVar1 = *puVar1 | 1;
  return *(int *)(param_1 + 0xf0) != 0;
}



undefined4 FUN_22173261(int param_1)

{
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x2c))();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return 0;
}



undefined4 __thiscall FUN_22173290(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*param_1 == -0x4e694d7c) {
    iVar3 = 0x10;
    bVar5 = true;
    piVar2 = param_1;
    pcVar4 = &DAT_22174610;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*piVar2 == *pcVar4;
      piVar2 = (int *)((int)piVar2 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      piVar2 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x1cU);
      *param_2 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  uVar1 = FUN_221732de(this,param_1,param_2);
  return uVar1;
}



undefined4 __thiscall FUN_221732de(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  
  if (*param_1 == 0x20400) {
    iVar2 = 0x10;
    bVar5 = true;
    piVar3 = param_1;
    pcVar4 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = (char)*piVar3 == *pcVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_221732f3;
LAB_22173327:
    piVar3 = *(int **)((int)this + 8);
    *param_2 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  else {
LAB_221732f3:
    if ((*(char *)((int)this + 0x19) != '\0') && (*param_1 == -0x20f4c2a0)) {
      iVar2 = 0x10;
      bVar5 = true;
      piVar3 = param_1;
      pcVar4 = (char *)&DAT_22174630;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = (char)*piVar3 == *pcVar4;
        piVar3 = (int *)((int)piVar3 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_22173327;
    }
    uVar1 = FUN_22173339(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_22173339(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004002;
}



undefined4 FUN_22173348(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar3 = *(int **)((&PTR_PTR_221820fc)[*(int *)(param_1 + -8) * 2] + 0x24);
  if ((piVar3 == (int *)0x0) || (*param_2 != *piVar3)) {
LAB_221766cc:
    if (*param_2 == 0x20400) {
      iVar2 = 0x10;
      bVar6 = true;
      piVar3 = param_2;
      pcVar5 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*piVar3 == *pcVar5;
        piVar3 = (int *)((int)piVar3 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_22173382;
    }
    if (*param_2 == -0x640443fe) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar5 = (char *)&DAT_22176ec0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*param_2 == *pcVar5;
        param_2 = (int *)((int)param_2 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        piVar3 = (int *)(param_1 + 0x10);
        goto LAB_22173388;
      }
    }
    uVar1 = 0x80004002;
  }
  else {
    iVar2 = 0x10;
    bVar6 = true;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = (char)*piVar4 == (char)*piVar3;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    } while (bVar6);
    if (!bVar6) goto LAB_221766cc;
LAB_22173382:
    piVar3 = (int *)(param_1 + 4);
LAB_22173388:
    *param_3 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_221733b9(int param_1,int *param_2)

{
  uint *lpMem;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = (int)*(short *)(param_1 + 10);
  if (iVar1 == 1) {
    if (*(int **)(param_1 + 4) != param_2) {
      return 0x80040200;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_221733e2;
  }
  if (iVar1 != 2) {
    iVar4 = 0;
    if (0 < iVar1) {
      piVar2 = *(int **)(param_1 + 4);
      do {
        if ((int *)*piVar2 == param_2) break;
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < iVar1);
    }
    if (iVar4 == iVar1) {
      return 0x80040200;
    }
    if (iVar4 < iVar1 + -1) {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar4 * 4);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4);
      for (uVar3 = (iVar1 - iVar4) * 4 - 4U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4) = 0;
    }
    goto LAB_221733e2;
  }
  lpMem = *(uint **)(param_1 + 4);
  piVar2 = (int *)*lpMem;
  if (piVar2 == param_2) {
LAB_2217681f:
    uVar3 = lpMem[1];
  }
  else {
    if ((int *)lpMem[1] != param_2) {
      return 0x80040200;
    }
    if (piVar2 == param_2) goto LAB_2217681f;
    uVar3 = ~-(uint)((int *)lpMem[1] != param_2) & (uint)piVar2;
  }
  if (uVar3 == 0) {
    return 0x80040200;
  }
  HeapFree(DAT_22182030,0,lpMem);
  *(uint *)(param_1 + 4) = uVar3;
LAB_221733e2:
  iVar1 = *param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  (**(code **)(iVar1 + 8))(param_2);
  return 0;
}



undefined4 * __thiscall FUN_2217344e(void *this,byte param_1)

{
  FUN_22173476((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_22173476(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_22173c00;
  param_1[7] = &PTR_LAB_22173be8;
  param_1[0xe] = &PTR_LAB_22173b88;
  param_1[0xf] = &PTR_LAB_22173b68;
  param_1[0x10] = &PTR_LAB_22173b38;
  param_1[0x11] = &PTR_LAB_22173b10;
  param_1[0x12] = &PTR_LAB_22173ad0;
  param_1[0x13] = &PTR_LAB_22173ab0;
  param_1[0x14] = &PTR_LAB_22173a88;
  param_1[0x15] = &PTR_LAB_22173a60;
  param_1[0x16] = &PTR_LAB_22173a50;
  param_1[0x17] = &PTR_LAB_22173a40;
  param_1[0x18] = &PTR_LAB_22173a28;
  param_1[0x19] = &PTR_LAB_22173a10;
  param_1[0x1a] = &PTR_LAB_22173a00;
  param_1[0x30] = &PTR_LAB_22173980;
  param_1[0x31] = &PTR_LAB_22173968;
  param_1[0x32] = &PTR_LAB_22173958;
  param_1[0x33] = &PTR_LAB_22173938;
  param_1[0x34] = &PTR_LAB_22173920;
  FUN_22173261((int)(param_1 + 0x30));
  if ((undefined4 *)param_1[0x3c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3c])(1);
    param_1[0x3c] = 0;
  }
  if ((undefined4 *)param_1[0x3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3b])(1);
  }
  param_1[0x3b] = 0;
  if ((BSTR)param_1[0x3f] != (BSTR)0x0) {
    SysFreeString((BSTR)param_1[0x3f]);
  }
  if ((HGDIOBJ)param_1[0x44] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x44]);
    param_1[0x44] = 0;
  }
  FUN_2217362b(param_1 + 0x3d);
  FUN_2217362b(param_1 + 0x38);
  FUN_2217362b(param_1 + 0x37);
  FUN_2217362b(param_1 + 0x36);
  FUN_2217362b(param_1 + 0x35);
  FUN_2217366f(param_1);
  return;
}



void __fastcall FUN_221735b5(int param_1)

{
  FUN_221735e1(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



void __fastcall FUN_221735e1(int param_1)

{
  void *this;
  HWND pHVar1;
  UINT Msg;
  u_int wMsg;
  WPARAM wParam;
  long lEvent;
  LPARAM lParam;
  
  this = (void *)FUN_221713f1();
  if ((this != (void *)0x0) && (*(int *)(param_1 + 4) != -1)) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x1c))();
    lEvent = 0;
    wMsg = 0xd10;
    pHVar1 = (HWND)FUN_2217269e((int)this);
    WSAAsyncSelect(*(SOCKET *)(param_1 + 4),pHVar1,wMsg,lEvent);
    closesocket(*(SOCKET *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_22177d40(this,*(uint *)(param_1 + 4));
    FUN_2217b233(this,*(int *)(param_1 + 4));
    FUN_22178e8a(this);
    lParam = 0;
    wParam = 0xffffffff;
    Msg = 0xd10;
    pHVar1 = (HWND)FUN_2217269e((int)this);
    PostMessageA(pHVar1,Msg,wParam,lParam);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  return;
}



undefined4 * __thiscall FUN_221735fd(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_221738f0;
  FUN_22173153((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2217362b(undefined4 *param_1)

{
  FUN_22173634((char *)*param_1);
  return;
}



void __cdecl FUN_22173634(char *param_1)

{
  if (((param_1 != (char *)0x0) && (param_1 != PTR_DAT_2218218c)) &&
     ((*param_1 != *PTR_DAT_2218218c ||
      (((param_1[1] != PTR_DAT_2218218c[1] || (param_1[2] != PTR_DAT_2218218c[2])) ||
       (param_1[3] != PTR_DAT_2218218c[3])))))) {
    FUN_22174d3f(param_1);
  }
  return;
}



void __fastcall FUN_2217366f(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_22173f68;
  param_1[7] = &PTR_LAB_22173f50;
  param_1[0xe] = &PTR_LAB_22173ef0;
  param_1[0xf] = &PTR_LAB_22173ed0;
  param_1[0x10] = &PTR_LAB_22173ea0;
  param_1[0x11] = &PTR_LAB_22173e78;
  param_1[0x12] = &PTR_LAB_22173e38;
  param_1[0x13] = &PTR_LAB_22173e18;
  param_1[0x14] = &PTR_LAB_22173df0;
  param_1[0x15] = &PTR_LAB_22173dc8;
  param_1[0x16] = &PTR_LAB_22173db8;
  param_1[0x17] = &PTR_LAB_22173da8;
  param_1[0x18] = &PTR_LAB_22173d90;
  param_1[0x19] = &PTR_LAB_22173d78;
  param_1[0x1a] = &PTR_LAB_22173d68;
  if ((HWND)param_1[0x2d] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[0x2d],-0x15,0);
    DestroyWindow((HWND)param_1[0x2d]);
  }
  piVar1 = (int *)param_1[0x1b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x1c];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x1d];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x2a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x2e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x21];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_22173776(param_1);
  return;
}



void __fastcall FUN_22173776(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_221741f0;
  param_1[7] = &PTR_LAB_221741d8;
  FUN_2217379f(param_1 + 0xb);
  FUN_2217379f(param_1 + 8);
  FUN_221737b9(param_1);
  return;
}



void __fastcall FUN_2217379f(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)param_1 + 10);
  *param_1 = &PTR_LAB_22174240;
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1]);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(param_1[1] + iVar3 * 4);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)param_1 + 10));
      }
      HeapFree(DAT_22182030,0,(LPVOID)param_1[1]);
    }
  }
  return;
}



void __fastcall FUN_221737b9(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_22174260;
  if (*(char *)(param_1 + 6) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    puVar2 = (&PTR_PTR_221820fc)[param_1[5] * 2];
    piVar1 = (int *)(puVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(puVar2 + 0x2c);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((&PTR_PTR_221820fc)[param_1[5] * 2] + 0x2c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  }
  *param_1 = &PTR_FUN_22174298;
  InterlockedDecrement(&DAT_22182110);
  return;
}



int FUN_22174673(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*param_2 == 0) {
    iVar1 = 0x10;
    bVar4 = true;
    piVar2 = param_2;
    pcVar3 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = (char)*piVar2 == *pcVar3;
      piVar2 = (int *)((int)piVar2 + 1);
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0,param_5,&param_2);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4,param_6);
      (**(code **)(*param_2 + 8))(param_2);
      return iVar1;
    }
  }
  return -0x7ff8ffa9;
}



HRESULT FUN_221746ee(HREFTYPE param_1,ITypeInfo *param_2,undefined4 param_3,undefined4 *param_4)

{
  ITypeInfo **ppTInfo;
  uint cchWideChar;
  undefined *puVar1;
  HREFTYPE HVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  HRESULT HVar6;
  CHAR local_18c [260];
  LPWSTR local_88 [31];
  byte local_c;
  ITypeLib *local_8;
  
  puVar5 = param_4;
  if (param_2 != (ITypeInfo *)0x0) {
    return -0x7ffdfff5;
  }
  if (param_4 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  HVar2 = param_1;
  puVar1 = (&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2];
  ppTInfo = (ITypeInfo **)(puVar1 + 0x2c);
  if (*(int *)(puVar1 + 0x2c) == 0) {
    HVar6 = LoadRegTypeLib((GUID *)PTR_DAT_22182294,*(WORD *)(puVar1 + 0x18),
                           *(WORD *)(puVar1 + 0x1c),0,&local_8);
    if (HVar6 < 0) {
      DVar3 = GetModuleFileNameA(DAT_22182008,local_18c,0x104);
      if (DVar3 == 0) {
        HVar6 = -0x7fffbffb;
        goto LAB_22174741;
      }
      iVar4 = lstrlenA(local_18c);
      cchWideChar = iVar4 * 2 + 2;
      FUN_22171f40(local_88,cchWideChar);
      MultiByteToWideChar(0,0,local_18c,-1,local_88[0],cchWideChar);
      HVar6 = LoadTypeLib(local_88[0],&local_8);
      if (HVar6 < 0) {
        if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_88[0]);
        }
        goto LAB_22174741;
      }
      if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
        HeapFree(DAT_22182030,0,local_88[0]);
      }
    }
    HVar6 = (*local_8->lpVtbl->GetTypeInfoOfGuid)
                      (local_8,*(GUID **)((&PTR_PTR_221820fc)[*(int *)(HVar2 + 0x14) * 2] + 0x20),
                       &param_2);
    (*local_8->lpVtbl->Release)(local_8);
    if (HVar6 < 0) goto LAB_22174741;
    HVar6 = (*param_2->lpVtbl->GetRefTypeOfImplType)(param_2,0xffffffff,&param_1);
    if (HVar6 < 0) {
      (*param_2->lpVtbl->Release)(param_2);
      goto LAB_22174741;
    }
    HVar6 = (*param_2->lpVtbl->GetRefTypeInfo)(param_2,param_1,ppTInfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (HVar6 < 0) goto LAB_22174741;
    *(undefined1 *)(HVar2 + 0x18) = 1;
    *(int *)((&PTR_PTR_221820fc)[*(int *)(HVar2 + 0x14) * 2] + 0x30) =
         *(int *)((&PTR_PTR_221820fc)[*(int *)(HVar2 + 0x14) * 2] + 0x30) + 1;
    puVar5 = param_4;
  }
  (*(*ppTInfo)->lpVtbl->AddRef)(*ppTInfo);
  *puVar5 = *ppTInfo;
  HVar6 = 0;
LAB_22174741:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  return HVar6;
}



int FUN_22174830(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  
  if (*param_3 == 0) {
    iVar1 = 0x10;
    bVar4 = true;
    piVar2 = param_3;
    pcVar3 = "";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = (char)*piVar2 == *pcVar3;
      piVar2 = (int *)((int)piVar2 + 1);
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0,param_4,&param_3);
      if (iVar1 < 0) {
        return iVar1;
      }
      SetErrorInfo(0,(IErrorInfo *)0x0);
      iVar1 = (**(code **)(*param_3 + 0x2c))
                        (param_3,param_1[2],param_2,param_5,param_6,param_7,param_8,param_9);
      (**(code **)(*param_3 + 8))(param_3);
      return iVar1;
    }
  }
  return -0x7ff8ffa9;
}



undefined4 FUN_221748a8(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  
  uVar1 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 4))();
  if (iVar2 == 0) {
    *param_2 = *(uint *)(uVar1 + 0x44);
  }
  else {
    local_8 = 0;
    param_1 = 0;
    FUN_22179101(*(void **)(uVar1 + 0x30),(LPSTR)0x0,&local_8,&param_1);
    *param_2 = param_1;
  }
  return 0;
}



void FUN_221748d3(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 4))();
  if (iVar1 == 0) {
    FUN_221748fb((void *)(param_1 + -0xc0),param_2);
  }
  else {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c54,0x9c54,0);
  }
  return;
}



undefined4 __thiscall FUN_221748fb(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 extraout_var;
  
  if ((param_1 < 0) || (0xffff < param_1)) {
    *(undefined4 *)((int)this + 0xf8) = 0x17c;
    puVar2 = (undefined4 *)FUN_2217498e(this,&param_1,0x17c);
    FUN_22174cbf((void *)((int)this + 0xf4),puVar2);
    FUN_2217362b(&param_1);
                    // WARNING: Load size is inaccurate
    uVar1 = (**(code **)(*this + 0x30))
                      (*(uint *)((int)this + 0xf8) | 0x800a0000,
                       CONCAT22(extraout_var,*(undefined2 *)((int)this + 0xf8)),0);
  }
  else {
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 1;
    *(int *)((int)this + 0x104) = param_1;
    FUN_22174978((void *)((int)this + 0x2c),2);
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_22174978(void *this,undefined4 param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)this + 10);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(**(int **)((int)this + 4) + 0xc))(*(int **)((int)this + 4),param_1);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 4) + iVar3 * 4);
          (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)this + 10));
      }
    }
  }
  return;
}



void * __thiscall FUN_2217498e(void *this,void *param_1,UINT param_2)

{
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_104 [256];
  
  local_104[0] = '\0';
  lpBuffer = local_104;
  cchBufferMax = 0xff;
                    // WARNING: Load size is inaccurate
  hInstance = (HINSTANCE)(**(code **)(*this + 0x28))();
  LoadStringA(hInstance,param_2,lpBuffer,cchBufferMax);
  FUN_221725cd(param_1,local_104);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HINSTANCE FUN_22174a20(LCID param_1)

{
  int iVar1;
  HINSTANCE pHVar2;
  bool bVar3;
  CHAR local_41c [260];
  CHAR local_318 [260];
  CHAR local_214 [253];
  undefined2 uStack_117;
  undefined1 auStack_115 [5];
  CHAR local_110 [260];
  undefined2 local_c;
  undefined1 local_a;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  pHVar2 = DAT_22182004;
  if ((DAT_22182004 == (HINSTANCE)0x0) || ((param_1 != 0 && (param_1 != _DAT_22182190)))) {
    if (param_1 == 0) {
      param_1 = _DAT_22182190;
    }
    iVar1 = GetLocaleInfoA(param_1,3,(LPSTR)&local_c,5);
    if ((iVar1 != 0) && (iVar1 = LoadStringA(DAT_22182008,0x3e9,local_318,0x104), iVar1 != 0)) {
      wsprintfA(local_214,s__s_s_DLL_22182298,local_318,&local_c);
      GetModuleFileNameA(DAT_22182008,local_41c,0x104);
      FUN_22174c65(local_41c,local_214,local_110);
      pHVar2 = LoadLibraryA(local_110);
      bVar3 = pHVar2 == (HMODULE)0x0;
      if (!bVar3) goto LAB_22174c00;
      iVar1 = lstrlenA((LPCSTR)&local_c);
      if (2 < iVar1) {
        local_a = 0;
        wsprintfA(local_214,s__s_s_DLL_221822a4,local_318,&local_c);
        FUN_22174c65(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
      bVar3 = pHVar2 == (HINSTANCE)0x0;
      if (!bVar3) goto LAB_22174c00;
      iVar1 = GetLocaleInfoA((uint)((ushort)_DAT_22182190 & 0x3ff | 0x400),3,(LPSTR)&local_c,5);
      if (iVar1 != 0) {
        iVar1 = lstrlenA(local_110);
        *(undefined2 *)((int)&uStack_117 + iVar1) = local_c;
        auStack_115[iVar1] = local_a;
        pHVar2 = LoadLibraryA(local_110);
        bVar3 = pHVar2 == (HMODULE)0x0;
        if (!bVar3) goto LAB_22174c00;
        wsprintfA(local_214,s__u__s_dll_221822b0,param_1,local_318);
        FUN_22174c65(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
    }
  }
  bVar3 = pHVar2 == (HINSTANCE)0x0;
LAB_22174c00:
  if (bVar3) {
    pHVar2 = DAT_22182008;
  }
  if ((DAT_22182004 == (HINSTANCE)0x0) && ((param_1 == 0 || (param_1 == _DAT_22182190)))) {
    DAT_22182004 = pHVar2;
  }
  if ((DAT_221822bc == 0) || ((param_1 != _DAT_22182190 && (param_1 != 0)))) {
    if (pHVar2 != DAT_22182008) {
      GetModuleFileNameA(pHVar2,local_110,0x104);
      iVar1 = FUN_2217cca0(local_110,1);
      if (((iVar1 == -1) || (iVar1 == 1)) &&
         ((pHVar2 = DAT_22182008, param_1 == 0 || (param_1 == _DAT_22182190)))) {
        DAT_22182004 = DAT_22182008;
      }
    }
    if ((param_1 == 0) || (param_1 == _DAT_22182190)) {
      DAT_221822bc = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  return pHVar2;
}



void __cdecl FUN_22174c65(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  char cVar1;
  
  lstrcpyA(param_3,param_1);
  cVar1 = *param_3;
  param_1 = param_3;
  while (cVar1 != '\0') {
    if (*param_3 == '\\') {
      param_1 = CharNextA(param_3);
    }
    param_3 = CharNextA(param_3);
    cVar1 = *param_3;
  }
  lstrcpyA(param_1,param_2);
  return;
}



void __cdecl FUN_22174cac(SIZE_T param_1)

{
  HeapAlloc(DAT_22182030,0,param_1);
  return;
}



void * __thiscall FUN_22174cbf(void *this,undefined4 *param_1)

{
  FUN_22174cd3(this,(LPCSTR)*param_1);
  return this;
}



int * __thiscall FUN_22174cd3(void *this,LPCSTR param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 != (LPCSTR)0x0) && (*param_1 != '\0')) {
    iVar2 = lstrlenA(param_1);
                    // WARNING: Load size is inaccurate
    if ((*this == 0) || (sVar1 = FUN_22174d36((undefined4 *)this), sVar1 < (short)iVar2)) {
                    // WARNING: Load size is inaccurate
      FUN_22173634(*this);
      uVar3 = FUN_22174cac((int)(short)iVar2 + 1);
      *(undefined4 *)this = uVar3;
    }
                    // WARNING: Load size is inaccurate
    lstrcpyA(*this,param_1);
    return (int *)this;
  }
                    // WARNING: Load size is inaccurate
  FUN_22173634(*this);
  *(undefined **)this = PTR_DAT_2218218c;
  return (int *)this;
}



void __fastcall FUN_22174d36(undefined4 *param_1)

{
  lstrlenA((LPCSTR)*param_1);
  return;
}



void __cdecl FUN_22174d3f(LPVOID param_1)

{
  HeapFree(DAT_22182030,0,param_1);
  return;
}



void __thiscall FUN_22174d52(void *this,undefined4 param_1,ushort param_2,undefined4 param_3)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int cchBufferMax;
  WCHAR local_304 [256];
  CHAR local_104 [256];
  
  lpBuffer = local_104;
  cchBufferMax = 0x100;
  uID = (uint)param_2;
                    // WARNING: Load size is inaccurate
  hInstance = (HINSTANCE)(**(code **)(*this + 0x28))();
  LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
  MultiByteToWideChar(0,0,local_104,-1,local_304,0x100);
                    // WARNING: Load size is inaccurate
  (**(code **)(*this + 0x2c))(param_1,local_304,param_3);
  return;
}



// WARNING: Variable defined which should be unmapped: param_2

undefined4 __thiscall FUN_22174db2(int param_1,undefined4 param_2,LPOLESTR param_3,DWORD param_4)

{
  uint cchWideChar;
  LPWSTR pWVar1;
  HRESULT HVar2;
  int iVar3;
  LPCSTR pCVar4;
  WCHAR local_28c [256];
  LPWSTR local_8c [31];
  byte local_10;
  IErrorInfo *local_c;
  ICreateErrorInfo *local_8;
  
  HVar2 = CreateErrorInfo(&local_8);
  if (-1 < HVar2) {
    if ((&DAT_221820f8)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    iVar3 = lstrlenA(pCVar4);
    cchWideChar = iVar3 * 2 + 2;
    FUN_22171f40(local_8c,cchWideChar);
    if ((&DAT_221820f8)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    MultiByteToWideChar(0,0,pCVar4,-1,local_8c[0],cchWideChar);
    pWVar1 = local_8c[0];
    (*local_8->lpVtbl->SetGUID)
              (local_8,*(GUID **)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x20));
    if ((&DAT_221820f8)[*(int *)(param_1 + 0x14) * 4] == 3) {
      iVar3 = *(int *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      iVar3 = *(int *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    (*local_8->lpVtbl->SetHelpFile)(local_8,(LPOLESTR)(-(uint)(iVar3 != 0) & (uint)pWVar1));
    (*local_8->lpVtbl->SetHelpContext)(local_8,param_4);
    (*local_8->lpVtbl->SetDescription)(local_8,param_3);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 4),-1,
                        local_28c,0x100);
    (*local_8->lpVtbl->SetSource)(local_8,local_28c);
    HVar2 = (*local_8->lpVtbl->QueryInterface)(local_8,(IID *)&DAT_22175710,&local_c);
    if (-1 < HVar2) {
      SetErrorInfo(0,local_c);
      (*local_c->lpVtbl->Release)(local_c);
    }
    (*local_8->lpVtbl->Release)(local_8);
    if ((local_8c[0] != (LPWSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_8c[0]);
    }
  }
  return param_2;
}



undefined4 * __thiscall FUN_22174f86(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_22174578;
  FUN_221730c0((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_22174fca(void *this,undefined4 *param_1)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_22174fe4(*(OLECHAR **)((int)this + 0xfc),(BSTR)0x0);
  *param_1 = pOVar1;
  return 0;
}



BSTR __cdecl FUN_22174fe4(OLECHAR *param_1,BSTR param_2)

{
  BSTR pOVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  BSTR pOVar5;
  
  if (param_1 != (OLECHAR *)0x0) {
    if (((uint)param_2 & 0xff) == 0) {
      pOVar1 = SysAllocString(param_1);
      return pOVar1;
    }
    if (((uint)param_2 & 0xff) != 1) {
      return param_2;
    }
    iVar2 = lstrlenW(param_1);
    uVar4 = iVar2 * 2 + 2;
    pOVar1 = (BSTR)CoTaskMemAlloc(uVar4);
    if (pOVar1 != (BSTR)0x0) {
      pOVar5 = pOVar1;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pOVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        pOVar5 = pOVar5 + 2;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(char *)pOVar5 = (char)*param_1;
        param_1 = (OLECHAR *)((int)param_1 + 1);
        pOVar5 = (BSTR)((int)pOVar5 + 1);
      }
      return pOVar1;
    }
  }
  return (BSTR)0x0;
}



void FUN_2217500c(int param_1,OLECHAR *param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x48) != 1) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 4))(), iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c54,0x9c54,0);
    return;
  }
  FUN_2217503a((void *)(param_1 + -0xc0),param_2);
  return;
}



undefined4 __thiscall FUN_2217503a(void *this,OLECHAR *param_1)

{
  uint cbMultiByte;
  BSTR lpString;
  int iVar1;
  undefined4 *puVar2;
  LPSTR local_84 [31];
  byte local_8;
  
  if (*(BSTR *)((int)this + 0xfc) != (BSTR)0x0) {
    SysFreeString(*(BSTR *)((int)this + 0xfc));
  }
  lpString = FUN_22174fe4(param_1,(BSTR)0x0);
  *(BSTR *)((int)this + 0xfc) = lpString;
  iVar1 = lstrlenW(lpString);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_22171f40(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0xfc),-1,local_84[0],cbMultiByte,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  puVar2 = FUN_221725cd(&param_1,local_84[0]);
  FUN_22174cbf((void *)((int)this + 0xe0),puVar2);
  FUN_2217362b(&param_1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 1;
  FUN_22174978((void *)((int)this + 0x2c),10);
  if ((local_84[0] != (LPCSTR)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_22182030,0,local_84[0]);
  }
  return 0;
}



void FUN_221750f0(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x48) != 1) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 4))(), iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c54,0x9c54,0);
    return;
  }
  FUN_2217511e((void *)(param_1 + -0xc0),param_2);
  return;
}



undefined4 __thiscall FUN_2217511e(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 extraout_var;
  
  if ((param_1 < 0) || (0xffff < param_1)) {
    *(undefined4 *)((int)this + 0xf8) = 0x9c4e;
    puVar2 = (undefined4 *)FUN_2217498e(this,&param_1,0x9c4e);
    FUN_22174cbf((void *)((int)this + 0xf4),puVar2);
    FUN_2217362b(&param_1);
                    // WARNING: Load size is inaccurate
    uVar1 = (**(code **)(*this + 0x30))
                      (*(uint *)((int)this + 0xf8) | 0x800a0000,
                       CONCAT22(extraout_var,*(undefined2 *)((int)this + 0xf8)),0);
  }
  else {
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 1;
    *(int *)((int)this + 0x100) = param_1;
    FUN_22174978((void *)((int)this + 0x2c),1);
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_221751c1(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x4c);
  iVar2 = FUN_22175207(piVar1,param_2);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_2,param_4);
    if (-1 < iVar2) {
      if (param_3 != 0) {
        *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffffffe;
      }
      piVar1 = *(int **)(param_1 + 0x5c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}



void __thiscall FUN_22175207(void *this,int *param_1)

{
  int iVar1;
  undefined2 local_1c [4];
  int local_14;
  int local_c;
  undefined4 local_8;
  
  FUN_2217525c((int *)((int)this + 0x88),&local_c);
  local_14 = local_c;
  local_1c[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,u__ExtentX_221822c0,local_1c);
  if (-1 < iVar1) {
    local_14 = local_8;
    (**(code **)(*param_1 + 0x10))(param_1,u__ExtentY_221822d4,local_1c);
  }
  return;
}



void __cdecl FUN_2217525c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_22172f13();
  iVar1 = DAT_221821c4;
  iVar2 = DAT_221821c4 >> 1;
  *param_2 = (*param_1 * 0x9ec + (DAT_221821c0 >> 1)) / DAT_221821c0;
  param_2[1] = (param_1[1] * 0x9ec + iVar2) / iVar1;
  return;
}



// WARNING: Type propagation algorithm not settling

int FUN_221752a2(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  LONG *pLVar5;
  char *pcVar6;
  _union_2685 *p_Var7;
  uint *puVar8;
  bool bVar9;
  undefined1 local_14 [16];
  
  VariantInit((VARIANTARG *)&((_union_2683 *)local_14)->n2);
  local_14._0_2_ = 3;
  local_14._8_4_ = 0x60000;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"_Version",(_union_2683 *)local_14);
  if (-1 < iVar1) {
    if (PTR_u_Protocol_22182230 != (undefined *)0x0) {
      puVar4 = &DAT_22182240;
      do {
        if (param_3 == 0) {
          uVar3 = *puVar4;
          bVar9 = true;
          pcVar6 = (char *)(puVar4[-3] + 0xfc + param_1);
          puVar8 = puVar4 + -2;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            bVar9 = *pcVar6 == (char)*puVar8;
            pcVar6 = pcVar6 + 1;
            puVar8 = (uint *)((int)puVar8 + 1);
          } while (bVar9);
          if (!bVar9) goto LAB_221752f0;
        }
        else {
LAB_221752f0:
          local_14._0_2_ = (undefined2)puVar4[-1];
          uVar3 = *puVar4;
          pLVar5 = (LONG *)(puVar4[-3] + 0xfc + param_1);
          p_Var7 = &(((_union_2683 *)local_14)->n2).n3;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            p_Var7->lVal = *pLVar5;
            pLVar5 = pLVar5 + 1;
            p_Var7 = (_union_2685 *)(&p_Var7->lVal + 1);
          }
          uVar2 = puVar4[-4];
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            p_Var7->bVal = (BYTE)*pLVar5;
            pLVar5 = (LONG *)((int)pLVar5 + 1);
            p_Var7 = (_union_2685 *)((int)p_Var7 + 1);
          }
          iVar1 = (**(code **)(*param_2 + 0x10))(param_2,uVar2,(_union_2683 *)local_14);
          if (iVar1 < 0) {
            return iVar1;
          }
        }
        puVar8 = puVar4 + 1;
        puVar4 = puVar4 + 5;
      } while (*puVar8 != 0);
    }
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_22175348(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_22175379((void *)(param_1 + -0x50),param_2);
  if (-1 < iVar2) {
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
    }
    piVar1 = *(int **)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



void __thiscall FUN_22175379(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_22175397(this,param_1);
  if (-1 < iVar1) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x3c))(this,param_1);
  }
  return;
}



void __thiscall FUN_22175397(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x12344321;
  local_8 = 8;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    FUN_2217525c((int *)((int)this + 0x88),local_14);
    (**(code **)(*param_1 + 0x10))(param_1,local_14,8,0);
  }
  return;
}



int FUN_221753ea(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0x248dd892;
  local_c = 0x60000;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,4,0);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_c,4,0);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x108,4,0);
      if (-1 < iVar1) {
        iVar1 = FUN_22175481(param_2,*(BSTR *)(param_1 + 0xfc));
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x100,4,0);
          if (-1 < iVar1) {
            iVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x104,4,0);
            if (-1 < iVar1) {
              iVar1 = 0;
            }
          }
        }
      }
    }
  }
  return iVar1;
}



void __cdecl FUN_22175481(int *param_1,BSTR param_2)

{
  int iVar1;
  UINT local_8;
  
  if (param_2 == (BSTR)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = SysStringLen(param_2);
  }
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8,4,0);
  if ((-1 < iVar1) && (0 < (int)local_8)) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2,local_8 * 2,0);
  }
  return;
}



int __thiscall FUN_221754e6(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  int local_c;
  int local_8;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    if ((local_c == 0x12344321) && (local_8 == 8)) {
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_14,8,0);
      if (-1 < iVar1) {
        FUN_22172ed1(local_14,(int *)((int)this + 0x88));
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



int FUN_22175548(uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  LPSTR local_88 [31];
  byte local_c;
  int local_8;
  
  piVar2 = param_2;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,&local_8,4,0);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&param_2,4,0);
    uVar1 = param_1;
    if (-1 < iVar3) {
      if ((local_8 == 0x248dd892) &&
         (((param_2 == (int *)0x60000 || (param_2 == (int *)0x50001)) || (param_2 == (int *)0x50000)
          ))) {
        FUN_22173010(param_1);
        iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar1 + 0x108,4,0);
        if (-1 < iVar3) {
          iVar3 = FUN_22175631(piVar2,(undefined4 *)(uVar1 + 0xfc));
          if (-1 < iVar3) {
            if (*(LPCWSTR *)(uVar1 + 0xfc) == (LPCWSTR)0x0) {
              puVar4 = FUN_221725cd(&param_1,(LPCSTR)0x0);
              FUN_22174cbf((void *)(uVar1 + 0xe0),puVar4);
              FUN_2217362b(&param_1);
            }
            else {
              iVar3 = lstrlenW(*(LPCWSTR *)(uVar1 + 0xfc));
              param_1 = iVar3 * 2 + 2;
              FUN_22171f40(local_88,param_1);
              WideCharToMultiByte(0,0,*(LPCWSTR *)(uVar1 + 0xfc),-1,local_88[0],param_1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
              puVar4 = FUN_221725cd(&param_1,local_88[0]);
              FUN_22174cbf((void *)(uVar1 + 0xe0),puVar4);
              FUN_2217362b(&param_1);
              if ((local_88[0] != (LPCSTR)0x0) && ((local_c & 1) != 0)) {
                HeapFree(DAT_22182030,0,local_88[0]);
              }
            }
            iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar1 + 0x100,4,0);
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,uVar1 + 0x104,4,0);
              if (-1 < iVar3) {
                FUN_221731af(uVar1);
                iVar3 = 0;
              }
            }
          }
        }
      }
      else {
        iVar3 = -0x7fff0001;
      }
    }
  }
  return iVar3;
}



void __cdecl FUN_22175631(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  BSTR pOVar3;
  
  puVar1 = param_2;
  if ((BSTR)*param_2 != (BSTR)0x0) {
    SysFreeString((BSTR)*param_2);
    *puVar1 = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&param_2,4,0);
  if ((-1 < iVar2) && (0 < (int)param_2)) {
    pOVar3 = SysAllocStringLen((OLECHAR *)0x0,(UINT)param_2);
    *puVar1 = pOVar3;
    (**(code **)(*param_1 + 0xc))(param_1,pOVar3,(int)param_2 * 2,0);
  }
  return;
}



undefined4 FUN_2217569b(void)

{
  return 1;
}



undefined4 FUN_22175a0d(void)

{
  int unaff_EBP;
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  int iStack_4;
  
  puVar1 = (undefined4 *)(unaff_EBP + -400);
  for (iStack_4 = 100; iStack_4 != 0; iStack_4 = iStack_4 + -1) {
    *unaff_EDI = *puVar1;
    puVar1 = puVar1 + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return 1;
}



undefined4 __fastcall switchD_2217294d::caseD_10a(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  if (in_EAX == 0x10a) {
    iVar1 = 0x10;
    bVar3 = true;
    pcVar2 = "\n\x01";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar3 = *unaff_ESI == *pcVar2;
      unaff_ESI = unaff_ESI + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar3);
    if (bVar3) {
      if (param_2 != 0) {
        iVar1 = *(int *)(param_2 + 0x54);
        *unaff_EBP = param_2 + 0x54;
        (**(code **)(iVar1 + 4))(param_2 + 0x54);
        return 0;
      }
      *unaff_EBP = 0;
    }
  }
  (**(code **)(*(int *)*unaff_EBP + 4))((int *)*unaff_EBP);
  return 0;
}



undefined4 __fastcall FUN_2217639a(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_22176de0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *unaff_ESI == *pcVar2;
    unaff_ESI = unaff_ESI + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x60);
      *unaff_EBP = param_2 + 0x60;
      (**(code **)(iVar1 + 4))(param_2 + 0x60);
      return 0;
    }
    *unaff_EBP = 0;
  }
  (**(code **)(*(int *)*unaff_EBP + 4))((int *)*unaff_EBP);
  return 0;
}



undefined4 __fastcall FUN_221763db(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_22176dd0;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *unaff_ESI == *pcVar2;
    unaff_ESI = unaff_ESI + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x5c);
      *unaff_EBP = param_2 + 0x5c;
      (**(code **)(iVar1 + 4))(param_2 + 0x5c);
      return 0;
    }
    *unaff_EBP = 0;
  }
  (**(code **)(*(int *)*unaff_EBP + 4))((int *)*unaff_EBP);
  return 0;
}



void __thiscall FUN_22176f38(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_22178d79(this,param_1);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    *(undefined4 *)((int)this + 0xc) = 2;
  }
  return;
}



undefined4 __thiscall FUN_22176f53(void *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  LPVOID pvVar3;
  undefined4 *puVar4;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  iVar2 = FUN_22178c4b(this,param_1,0x3f);
  if (iVar2 != 0) {
    *(undefined4 *)((int)this + 0xc) = 7;
    param_1 = 4;
    bVar1 = FUN_22179176(this,0x1001,(char *)&local_8,(int *)&param_1,0xffff);
    if ((CONCAT31(extraout_var,bVar1) == -1) ||
       (bVar1 = FUN_22179176(this,0x1002,(char *)&local_c,(int *)&param_1,0xffff),
       CONCAT31(extraout_var_00,bVar1) == -1)) {
      iVar2 = WSAGetLastError();
    }
    else {
      pvVar3 = FUN_22171a32(0x38,DAT_22182030);
      if (pvVar3 == (LPVOID)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_22177746(pvVar3,(int)local_8);
      }
      *(undefined4 **)((int)this + 0x4c) = puVar4;
      pvVar3 = FUN_22171a32(0x38,DAT_22182030);
      if (pvVar3 == (LPVOID)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_22177746(pvVar3,(int)local_c);
      }
      *(undefined4 **)((int)this + 0x48) = puVar4;
      if ((*(int *)((int)this + 0x4c) != 0) && (puVar4 != (undefined4 *)0x0)) {
        return 1;
      }
      iVar2 = 0x2728;
    }
    WSASetLastError(iVar2);
    *(undefined4 *)((int)this + 4) = 0xffffffff;
  }
  return 0;
}



int __fastcall FUN_2217702f(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_22178cc6(param_1);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x48))(1);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return iVar1;
}



void __thiscall FUN_22177069(void *this,int *param_1,sockaddr *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_22178e2c(this,param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0xc) = 2;
  }
  return;
}



int __thiscall FUN_221770ec(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  if ((int)param_2 < 0) {
    WSASetLastError(0x271e);
    iVar1 = -1;
  }
  else {
    local_8 = param_1;
    param_1 = (undefined4 *)param_2;
    if (param_3 == 2) {
      FUN_22177c5c(*(int *)((int)this + 0x48));
    }
    if (param_2 != 0) {
      do {
                    // WARNING: Load size is inaccurate
        iVar1 = (**(code **)(*this + 0x14))();
        if (iVar1 == 0) break;
        if (param_3 == 2) {
          FUN_22177cc5(*(void **)((int)this + 0x48),&local_10,&local_c);
        }
        else {
          FUN_2217781c(*(void **)((int)this + 0x48),&local_10,&local_c);
        }
        puVar2 = local_c;
        if (param_1 < local_c) {
          puVar2 = param_1;
        }
        param_1 = (undefined4 *)((int)param_1 - (int)puVar2);
        puVar5 = local_10;
        puVar6 = local_8;
        for (uVar4 = (uint)puVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = (uint)puVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        if (param_3 == 2) {
          local_8 = (undefined4 *)((int)local_8 + (int)puVar2);
          FUN_22177c78(*(void **)((int)this + 0x48),(int)puVar2);
        }
        else {
          local_8 = (undefined4 *)((int)local_8 + (int)puVar2);
          FUN_22177831(*(void **)((int)this + 0x48),(uint)puVar2);
        }
      } while (param_1 != (undefined4 *)0x0);
    }
    if (*(int *)((int)this + 0x44) != 0) {
                    // WARNING: Load size is inaccurate
      uVar4 = (**(code **)(*this + 0x14))();
                    // WARNING: Load size is inaccurate
      uVar3 = (**(code **)(*this + 0x1c))();
      if (uVar4 < uVar3) {
        *(undefined4 *)((int)this + 0x44) = 0;
        recv(*(SOCKET *)((int)this + 4),(char *)&param_3,1,2);
      }
    }
    iVar1 = param_2 - (int)param_1;
  }
  return iVar1;
}



uint __thiscall FUN_221771d1(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  int iVar3;
  tagMSG local_20;
  
  if (*(int *)((int)this + 4) == -1) {
    iVar3 = 0x2736;
  }
  else if ((int)param_2 < 0) {
    iVar3 = 0x271e;
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    iVar3 = FUN_221778fa(*(void **)((int)this + 0x4c),param_2,param_1);
    if (iVar3 != 0) {
                    // WARNING: Load size is inaccurate
      iVar3 = (**(code **)(*this + 0x10))();
                    // WARNING: Load size is inaccurate
      iVar1 = (**(code **)(*this + 0x18))();
      if (iVar3 == iVar1) {
        *(undefined4 *)((int)this + 0x40) = 1;
      }
      iVar3 = FUN_221713f1();
      hWnd = (HWND)FUN_2217269e(iVar3);
      BVar2 = PeekMessageA(&local_20,hWnd,0xd12,0xd12,0);
      if (BVar2 != 0) {
        return param_2;
      }
      PostMessageA(hWnd,0xd12,*(WPARAM *)((int)this + 4),2);
      return param_2;
    }
    iVar3 = 0x2747;
  }
  WSASetLastError(iVar3);
  return 0xffffffff;
}



undefined4 __thiscall FUN_22177276(void *this,sockaddr *param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iError;
  undefined4 uVar2;
  
  bVar1 = FUN_2217919b(this,param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    iError = WSAGetLastError();
    if (iError == 0x2733) {
      *(undefined4 *)((int)this + 0xc) = 6;
    }
    WSASetLastError(iError);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *(undefined4 *)((int)this + 0xc) = 7;
  }
  return uVar2;
}



void __thiscall FUN_221772fa(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_8;
  
  local_8 = (char *)this;
  FUN_22178f2a(this);
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x44) != 0) {
      return;
    }
    FUN_22177b44(*(void **)((int)this + 0x48),(int *)&local_8,&param_1);
    if (param_1 == 0) {
      return;
    }
    uVar2 = 0x7fffffff;
    if (param_1 < 0x80000000) {
      uVar2 = param_1;
    }
    iVar1 = recv(*(SOCKET *)((int)this + 4),local_8,uVar2,0);
    if (iVar1 != -1) {
      FUN_22177c25(*(void **)((int)this + 0x48),iVar1);
                    // WARNING: Load size is inaccurate
      iVar1 = (**(code **)(*this + 0x14))();
                    // WARNING: Load size is inaccurate
      iVar3 = (**(code **)(*this + 0x1c))();
      if (iVar1 == iVar3) {
        *(undefined4 *)((int)this + 0x44) = 1;
      }
                    // WARNING: Load size is inaccurate
      iVar1 = *this;
      uVar4 = (**(code **)(iVar1 + 0x14))();
      (**(code **)(iVar1 + 0x94))(uVar4);
      return;
    }
    uVar2 = WSAGetLastError();
    if (uVar2 == 0x2733) {
      return;
    }
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
  }
  else {
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
    *(undefined4 *)((int)this + 0xc) = 9;
    uVar2 = param_1;
  }
  (**(code **)(iVar1 + 0xac))(1,uVar2);
  return;
}



void __thiscall FUN_221773bb(void *this,int param_1)

{
  if (param_1 == 0) {
    FUN_221774d1((int *)this);
  }
  else {
                    // WARNING: Load size is inaccurate
    *(undefined4 *)((int)this + 0xc) = 9;
    (**(code **)(*this + 0xac))(2,param_1);
  }
  return;
}



void __fastcall FUN_221774d1(int *param_1)

{
  int iVar1;
  int len;
  uint uVar2;
  uint uVar3;
  char *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 != 0) {
    local_c = 0;
    while (iVar1 != 0) {
      FUN_2217781c((void *)param_1[0x13],&local_14,&local_10);
      if (local_10 == 0) break;
      len = local_10;
      if (0x7fffffff < local_10) {
        len = 0x7fffffff;
      }
      local_8 = send(param_1[1],local_14,len,0);
      if (local_8 == 0xffffffff) {
        local_c = WSAGetLastError();
      }
      if (local_8 == 0xffffffff) goto LAB_2217754f;
      iVar1 = iVar1 - local_8;
      FUN_22177831((void *)param_1[0x13],local_8);
    }
    if (local_8 == 0xffffffff) {
LAB_2217754f:
      if (local_c != 0x2733) {
        (**(code **)(*param_1 + 0xac))(2,local_c);
      }
    }
    if (param_1[0x10] != 0) {
      uVar2 = (**(code **)(*param_1 + 0x10))();
      uVar3 = (**(code **)(*param_1 + 0x18))();
      if (uVar2 < uVar3) {
        param_1[0x10] = 0;
        (**(code **)(*param_1 + 0xa8))();
      }
    }
  }
  return;
}



void __fastcall FUN_221775f9(int *param_1)

{
  u_short uVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  FUN_22178009((int)param_1);
  local_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  local_14 = 2;
  uVar1 = htons(*(u_short *)(param_1[0x1c9] + 8));
  local_14 = CONCAT22(uVar1,(undefined2)local_14);
  (**(code **)(*param_1 + 0xc))(&local_10);
  (**(code **)(*(int *)param_1[0x1c9] + 0x74))();
  iVar2 = (**(code **)(*(int *)param_1[0x1c9] + 0x84))(&local_14,0x10);
  if (iVar2 == 0) {
    iVar2 = WSAGetLastError();
    if (iVar2 != 0x2733) {
      (**(code **)(*(int *)param_1[0x1c9] + 0x6c))(iVar2);
    }
  }
  else {
    (**(code **)(*(int *)param_1[0x1c9] + 0x6c))(0);
  }
  return;
}



void __thiscall FUN_22177684(void *this,undefined4 param_1)

{
  FUN_22177fe6(this,param_1);
  (**(code **)(**(int **)((int)this + 0x724) + 0x6c))(param_1);
  return;
}



undefined4 * __thiscall FUN_221776a3(void *this,byte param_1)

{
  FUN_22171527((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_221776cb(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_22171abf(8);
  *puVar1 = 0;
  puVar1[1] = param_1;
  if (*(undefined4 **)((int)this + 8) == (undefined4 *)0x0) {
    *(undefined4 **)((int)this + 8) = puVar1;
    *(undefined4 **)((int)this + 4) = puVar1;
  }
  else {
    **(undefined4 **)((int)this + 8) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1;
  }
  return;
}



undefined4 __fastcall FUN_221776f8(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  return 0;
}



undefined4 __fastcall FUN_22177706(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  }
  return 0;
}



int FUN_22177714(int param_1)

{
  if (param_1 != 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  return param_1;
}



undefined4 __fastcall FUN_22177722(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 __fastcall FUN_22177726(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



undefined4 FUN_2217772a(int *param_1)

{
  int iVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    iVar1 = *(int *)*param_1;
    *param_1 = iVar1;
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}



undefined4 * __thiscall FUN_22177746(void *this,int param_1)

{
  uint uVar1;
  
  FUN_22171c79((undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_22176aa8;
  uVar1 = param_1 + 0x3ffU & 0xfffffc00;
  *(undefined4 *)((int)this + 0x34) = 0x40000000;
  if ((int)uVar1 < 0x400) {
    uVar1 = 0x400;
  }
  *(uint *)((int)this + 0x2c) = uVar1;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_22177792(void *this,byte param_1)

{
  FUN_221777ba((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_221777ba(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  *param_1 = &PTR_FUN_22176aa8;
  bVar1 = FUN_22171504((int)(param_1 + 1));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_22177831(param_1,param_1[0xc]);
  }
  FUN_22171527(param_1 + 1);
  return;
}



undefined4 __fastcall FUN_221777e6(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



undefined4 __fastcall FUN_221777ea(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



void __thiscall FUN_221777ee(void *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_221777e6((int)this);
  if (uVar1 <= param_1) {
    uVar2 = 0x40000000;
    if ((param_1 < 0x40000001) && (uVar2 = 0x400, 0x3ff < param_1)) {
      *(uint *)((int)this + 0x34) = param_1;
    }
    else {
      *(undefined4 *)((int)this + 0x34) = uVar2;
    }
  }
  return;
}



void __thiscall FUN_2217781c(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *param_2 = *(undefined4 *)((int)this + 0x14);
  return;
}



void __thiscall FUN_22177831(void *this,uint param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  LPVOID lpMem;
  undefined4 uVar2;
  undefined3 extraout_var_00;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var_01;
  int iVar5;
  uint uVar6;
  
  iVar5 = (int)this + 4;
  bVar1 = FUN_22171504(iVar5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar6 = param_1;
    if (*(uint *)((int)this + 0x14) <= param_1) {
      do {
        lpMem = (LPVOID)FUN_2217319d(iVar5);
        if (lpMem != (LPVOID)0x0) {
          HeapFree(DAT_22182030,0,lpMem);
        }
        uVar6 = uVar6 - *(int *)((int)this + 0x14);
        uVar2 = FUN_221776f8(iVar5);
        *(undefined4 *)((int)this + 0x10) = uVar2;
        bVar1 = FUN_22171504(iVar5);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          *(undefined4 *)((int)this + 0x28) = 0;
          *(undefined4 *)((int)this + 0x24) = 0;
          *(undefined4 *)((int)this + 0x14) = 0;
          break;
        }
        iVar3 = FUN_22177706(iVar5);
        if (*(int *)((int)this + 0x10) == iVar3) {
          uVar4 = *(uint *)((int)this + 0x24);
        }
        else {
          uVar4 = *(uint *)((int)this + 0x2c);
        }
        *(uint *)((int)this + 0x14) = uVar4;
      } while (uVar4 <= uVar6);
    }
    bVar1 = FUN_22171504(iVar5);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + uVar6;
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) - uVar6;
      uVar6 = 0;
      iVar3 = FUN_22177706(iVar5);
      iVar5 = FUN_221776f8(iVar5);
      if (iVar5 == iVar3) {
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x14);
      }
    }
    if (uVar6 == 0) {
      iVar5 = *(int *)((int)this + 0x30) - param_1;
    }
    else {
      iVar5 = 0;
    }
    *(int *)((int)this + 0x30) = iVar5;
  }
  return;
}



undefined4 __thiscall FUN_221778fa(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *lpMem;
  LPVOID pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint local_20;
  int *local_c;
  uint local_8;
  
  if (*(uint *)((int)this + 0x34) < param_1 + *(int *)((int)this + 0x30)) {
    return 0;
  }
  if (param_1 == 0) {
    return 1;
  }
  uVar7 = *(uint *)((int)this + 0x28);
  if (param_1 <= uVar7) {
    iVar2 = FUN_22177706((int)this + 4);
    iVar3 = FUN_221776f8((int)this + 4);
    if (iVar3 == iVar2) {
      puVar10 = (undefined4 *)(*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14));
      for (uVar7 = param_1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *param_2;
        param_2 = param_2 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = param_1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + param_1;
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) - param_1;
      *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + param_1;
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x24);
      return 1;
    }
    puVar10 = (undefined4 *)(iVar2 + *(int *)((int)this + 0x24));
    for (uVar7 = param_1 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *param_2;
      param_2 = param_2 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = param_1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + param_1;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) - param_1;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + param_1;
    return 1;
  }
  uVar1 = *(uint *)((int)this + 0x2c);
  uVar9 = param_1 - uVar7;
  uVar4 = uVar9 / uVar1;
  local_20 = uVar4 * uVar1;
  if (local_20 < uVar9) {
    local_20 = local_20 + uVar1;
    uVar4 = uVar4 + 1;
  }
  lpMem = (int *)HeapAlloc(DAT_22182030,0,uVar4 << 2);
  if (lpMem == (int *)0x0) {
    return 0;
  }
  local_8 = 0;
  local_c = lpMem;
  if (uVar4 != 0) {
    do {
      pvVar5 = HeapAlloc(DAT_22182030,0,*(SIZE_T *)((int)this + 0x2c));
      if (pvVar5 == (LPVOID)0x0) {
        if (-1 < (int)(local_8 - 1)) {
          piVar12 = lpMem + (local_8 - 1);
          do {
            HeapFree(DAT_22182030,0,(LPVOID)*piVar12);
            *piVar12 = 0;
            piVar12 = piVar12 + -1;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
        }
        HeapFree(DAT_22182030,0,lpMem);
        return 0;
      }
      local_8 = local_8 + 1;
      *local_c = (int)pvVar5;
      local_c = local_c + 1;
    } while (local_8 < uVar4);
  }
  uVar1 = uVar9;
  piVar12 = lpMem;
  if (uVar7 != 0) {
    iVar2 = FUN_22177706((int)this + 4);
    puVar10 = param_2;
    puVar13 = (undefined4 *)(iVar2 + *(int *)((int)this + 0x24));
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    param_2 = (undefined4 *)(uVar7 + (int)param_2);
  }
  while (uVar4 != 0) {
    FUN_221776cb((void *)((int)this + 4),*piVar12);
    uVar7 = *(uint *)((int)this + 0x2c);
    if (uVar1 <= *(uint *)((int)this + 0x2c)) {
      uVar7 = uVar1;
    }
    puVar10 = (undefined4 *)((int)param_2 + uVar7);
    puVar13 = (undefined4 *)*piVar12;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *param_2;
      param_2 = param_2 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar1 = uVar1 - uVar7;
    piVar12 = piVar12 + 1;
    uVar4 = uVar4 - 1;
    puVar11 = param_2;
    for (uVar7 = uVar7 & 3; param_2 = puVar10, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
  }
  iVar2 = (int)this + 4;
  *(uint *)((int)this + 0x28) = local_20 - uVar9;
  *(uint *)((int)this + 0x24) = *(int *)((int)this + 0x2c) - (local_20 - uVar9);
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + param_1;
  iVar3 = FUN_221776f8(iVar2);
  if (iVar3 == *lpMem) {
    uVar6 = FUN_221776f8(iVar2);
    *(undefined4 *)((int)this + 0x10) = uVar6;
    iVar3 = FUN_221776f8(iVar2);
    iVar2 = FUN_22177706(iVar2);
    if (iVar3 == iVar2) {
      uVar6 = *(undefined4 *)((int)this + 0x24);
      goto LAB_22177ae8;
    }
  }
  uVar6 = *(undefined4 *)((int)this + 0x2c);
LAB_22177ae8:
  *(undefined4 *)((int)this + 0x14) = uVar6;
  HeapFree(DAT_22182030,0,lpMem);
  return 1;
}



void __thiscall FUN_22177b44(void *this,int *param_1,uint *param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0x30) == *(int *)((int)this + 0x34)) {
    *param_2 = 0;
    *param_1 = 0;
  }
  this_00 = (void *)((int)this + 4);
  iVar1 = FUN_22177706((int)this_00);
  if ((*(int *)((int)this + 0x28) == 0) || (iVar1 == 0)) {
    pvVar5 = HeapAlloc(DAT_22182030,0,*(SIZE_T *)((int)this + 0x2c));
    *param_1 = (int)pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      *param_2 = 0;
    }
    else {
      FUN_221776cb(this_00,pvVar5);
      uVar4 = *(uint *)((int)this + 0x2c);
      uVar6 = *(int *)((int)this + 0x34) - *(int *)((int)this + 0x30);
      *(uint *)((int)this + 0x28) = uVar4;
      if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      *param_2 = uVar6;
      *(undefined4 *)((int)this + 0x24) = 0;
      iVar1 = FUN_221776f8((int)this_00);
      iVar2 = FUN_22177706((int)this_00);
      if (iVar1 == iVar2) {
        *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x24);
        uVar7 = FUN_221776f8((int)this_00);
        *(undefined4 *)((int)this + 0x10) = uVar7;
      }
    }
  }
  else {
    iVar2 = FUN_221776f8((int)this_00);
    iVar3 = FUN_22177706((int)this_00);
    if (iVar2 == iVar3) {
      iVar1 = *(int *)((int)this + 0x14) + *(int *)((int)this + 0x10);
    }
    else {
      iVar1 = *(int *)((int)this + 0x24) + iVar1;
    }
    *param_1 = iVar1;
    uVar4 = *(int *)((int)this + 0x34) - *(int *)((int)this + 0x30);
    if (*(uint *)((int)this + 0x28) < uVar4) {
      uVar4 = *(uint *)((int)this + 0x28);
    }
    *param_2 = uVar4;
  }
  return;
}



void __thiscall FUN_22177c25(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + param_1;
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) - param_1;
  iVar1 = FUN_22177706((int)this + 4);
  iVar2 = FUN_221776f8((int)this + 4);
  if (iVar2 == iVar1) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x24);
  }
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + param_1;
  return;
}



void __fastcall FUN_22177c5c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_22177722(param_1 + 4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  return;
}



void __thiscall FUN_22177c78(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == *(int *)((int)this + 0x20)) {
    iVar1 = FUN_2217772a((int *)((int)this + 0x18));
    *(int *)((int)this + 0x1c) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x20) = 0;
      return;
    }
    iVar1 = FUN_22177726((int)this + 4);
    if (*(int *)((int)this + 0x18) == iVar1) {
      iVar1 = *(int *)((int)this + 0x24);
    }
    else {
      iVar1 = *(int *)((int)this + 0x2c);
    }
  }
  else {
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_1;
    iVar1 = *(int *)((int)this + 0x20) - param_1;
  }
  *(int *)((int)this + 0x20) = iVar1;
  return;
}



void __thiscall FUN_22177cc5(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *(undefined4 *)((int)this + 0x1c);
  *param_2 = *(undefined4 *)((int)this + 0x20);
  return;
}



undefined4 * __thiscall FUN_22177cda(void *this,byte param_1)

{
  FUN_221718c2((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_22177d02(void *this,uint param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  FUN_22171428((void *)((int)this + 4),param_1,&local_8);
  return local_8;
}



void __thiscall FUN_22177d20(void *this,uint param_1,undefined4 param_2)

{
  FUN_22177d02(this,param_1);
  FUN_22171cc5((void *)((int)this + 4),param_1,param_2);
  return;
}



void __thiscall FUN_22177d40(void *this,uint param_1)

{
  FUN_22177d02(this,param_1);
  FUN_221717e8((void *)((int)this + 4),param_1);
  return;
}



undefined4 __thiscall FUN_22177d5c(void *this,uint param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  FUN_22171428((void *)((int)this + 0x24),param_1,&local_8);
  return local_8;
}



void __thiscall FUN_22177d7a(void *this,uint param_1,undefined4 param_2)

{
  FUN_22177d5c(this,param_1);
  FUN_22171cc5((void *)((int)this + 0x24),param_1,param_2);
  return;
}



void __thiscall FUN_22177d9a(void *this,uint param_1)

{
  FUN_22177d5c(this,param_1);
  FUN_221717e8((void *)((int)this + 0x24),param_1);
  return;
}



undefined4 * __thiscall FUN_22177db6(void *this,LPCSTR param_1)

{
  int iVar1;
  LPSTR lpString1;
  
  if ((param_1 == PTR_DAT_2218218c) || (param_1 == (LPCSTR)0x0)) {
    *(undefined **)this = PTR_DAT_2218218c;
  }
  else {
    iVar1 = lstrlenA(param_1);
    lpString1 = (LPSTR)FUN_22174cac(iVar1 + 1);
    *(LPSTR *)this = lpString1;
    lstrcpyA(lpString1,param_1);
  }
  return (undefined4 *)this;
}



undefined4 __fastcall FUN_22177def(undefined4 *param_1)

{
  return *param_1;
}



bool __thiscall FUN_22177df2(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
                    // WARNING: Load size is inaccurate
  pbVar2 = *this;
  if (pbVar2 == param_1) {
    bVar4 = true;
  }
  else {
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *param_1;
      if (bVar1 != *param_1) {
LAB_22177e2f:
        iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
        goto LAB_22177e24;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < param_1[1];
      if (bVar1 != param_1[1]) goto LAB_22177e2f;
      pbVar2 = pbVar2 + 2;
      param_1 = param_1 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_22177e24:
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}



undefined4 * __thiscall FUN_22177e36(void *this,byte param_1)

{
  FUN_22173153((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



bool __thiscall FUN_22177e5e(void *this,LPCSTR param_1)

{
  int iVar1;
  
                    // WARNING: Load size is inaccurate
  iVar1 = (**(code **)(*this + 0x18))();
  if (iVar1 == 0) {
    FUN_221726a2(this,param_1);
  }
  else {
    WSASetLastError(0x2734);
  }
  return iVar1 == 0;
}



bool __fastcall FUN_22177e8a(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar2 = (byte *)(param_1 + 0x618);
  pbVar4 = (byte *)&DAT_22176aac;
  do {
    bVar1 = *pbVar4;
    bVar5 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_22177ec1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_22177eb6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar5 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_22177ec1;
    pbVar4 = pbVar4 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_22177eb6:
  return iVar3 == 0;
}



int * __fastcall FUN_22177eda(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[0x1c7];
  if (iVar2 == 0) {
    return param_1 + 0x186;
  }
  if (iVar2 == 1) {
    iVar2 = FUN_221784d8(param_1,(char *)(param_1 + 0x186));
    if (iVar2 != 0) {
      param_1[0x1c7] = 3;
LAB_22177f52:
      piVar1 = (int *)FUN_221786de((int)param_1);
      return piVar1;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_2217859b((int)param_1);
    if (iVar2 != 0) {
      param_1[0x1c7] = 3;
      piVar1 = (int *)(**(code **)(*param_1 + 8))();
      return piVar1;
    }
  }
  else {
    if (iVar2 == 3) goto LAB_22177f52;
    if (iVar2 == 4) {
      iVar2 = param_1[0x1c8];
    }
    else {
      iVar2 = 0x271e;
    }
    WSASetLastError(iVar2);
  }
  return (int *)0x0;
}



undefined4 __thiscall FUN_22177f5b(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x71c);
  if (iVar2 == 0) {
LAB_22177fb6:
    uVar1 = 1;
    *param_1 = *(undefined4 *)((int)this + 0x718);
  }
  else {
    if (iVar2 == 1) {
      iVar2 = FUN_221784d8(this,(char *)((int)this + 0x618));
      if (iVar2 != 0) {
        *(undefined4 *)((int)this + 0x71c) = 3;
LAB_22177fa9:
        uVar1 = FUN_221786e5(this,param_1);
        return uVar1;
      }
    }
    else {
      if (iVar2 == 2) goto LAB_22177fb6;
      if (iVar2 == 3) goto LAB_22177fa9;
      if (iVar2 == 4) {
        iVar2 = *(int *)((int)this + 0x720);
      }
      else {
        iVar2 = 0x271e;
      }
      WSASetLastError(iVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}



char * __fastcall FUN_22177fc7(_union_1226 param_1)

{
  int iVar1;
  char *pcVar2;
  _union_1226 local_8;
  
  local_8 = param_1;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))(&local_8);
  if (iVar1 != 0) {
    pcVar2 = inet_ntoa((in_addr)local_8.S_un_b);
    return pcVar2;
  }
  return (char *)0x0;
}



void __thiscall FUN_22177fe6(void *this,undefined4 param_1)

{
  FUN_221786d4((int)this);
  *(undefined4 *)((int)this + 0x720) = param_1;
  *(undefined4 *)((int)this + 0x71c) = 4;
  return;
}



void __fastcall FUN_22178009(int param_1)

{
  FUN_22178690(param_1);
  *(undefined4 *)(param_1 + 0x71c) = 3;
  return;
}



bool __fastcall FUN_22178030(int param_1)

{
  void *this;
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x60c) == 0) {
    WSASetLastError(0x2735);
    bVar2 = false;
  }
  else {
    this = (void *)FUN_221713f1();
    FUN_22177d9a(this,*(uint *)(param_1 + 0x610));
    *(undefined4 *)(param_1 + 0x60c) = 0;
    iVar1 = WSACancelAsyncRequest(*(HANDLE *)(param_1 + 0x610));
    if (iVar1 == -1) {
      iVar1 = WSAGetLastError();
      WSASetLastError(iVar1);
      bVar2 = iVar1 == 0x2735;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}



BSTR __thiscall FUN_22178078(void *this,VARIANTARG *param_1,BSTR param_2,UINT *param_3)

{
  ushort uVar1;
  UINT *pUVar2;
  uint uVar3;
  UINT UVar4;
  BSTR pOVar5;
  SAFEARRAY *pSVar6;
  BSTR pOVar7;
  SAFEARRAYBOUND local_c;
  
  uVar1 = (param_1->n1).n2.vt;
  pOVar7 = (BSTR)((int)&param_1->n1 + 8);
  local_c.cElements = (ULONG)this;
  local_c.lLbound = (LONG)this;
  if ((uVar1 & 0x4000) == 0) {
    VariantClear(param_1);
  }
  else if (uVar1 == 0x4008) {
    SysFreeString((BSTR)**(undefined4 **)pOVar7);
  }
  else if (uVar1 == 0x6011) {
    SafeArrayDestroy((SAFEARRAY *)**(undefined4 **)pOVar7);
  }
  pUVar2 = param_3;
  (param_1->n1).n2.vt = (VARTYPE)param_2;
  uVar3 = (uint)param_2 & 0xffff;
  if (uVar3 < 9) {
    if (uVar3 == 8) {
      pOVar5 = SysAllocStringByteLen((LPCSTR)0x0,*param_3);
      *(BSTR *)pOVar7 = pOVar5;
      pOVar7 = pOVar5;
    }
    else if (uVar3 == 1) {
      pOVar7 = (BSTR)0x0;
    }
    else if ((uVar3 < 2) || (7 < uVar3)) goto LAB_221780c1;
  }
  else if (uVar3 < 0x12) {
    if ((uVar3 != 0x11) && ((uVar3 < 10 || (0xb < uVar3)))) goto LAB_221780c1;
  }
  else {
    if (uVar3 < 0x4008) {
      if (uVar3 < 0x4002) {
        if (uVar3 != 0x2011) goto LAB_221780c1;
        local_c.cElements = *param_3;
        local_c.lLbound = 0;
        pSVar6 = SafeArrayCreate(0x11,1,&local_c);
        *(SAFEARRAY **)pOVar7 = pSVar6;
        SafeArrayAccessData(pSVar6,&param_2);
        pOVar7 = param_2;
        goto LAB_221780eb;
      }
    }
    else {
      if (uVar3 == 0x4008) {
        pOVar5 = SysAllocStringByteLen((LPCSTR)0x0,*param_3);
        **(undefined4 **)pOVar7 = pOVar5;
        pOVar7 = (BSTR)**(int **)pOVar7;
        goto LAB_221780eb;
      }
      if (uVar3 < 0x400a) {
LAB_221780c1:
        *param_3 = 0xffffffff;
        return (BSTR)0x0;
      }
      if ((0x400b < uVar3) && (uVar3 != 0x4011)) {
        if (uVar3 == 0x6011) {
          local_c.cElements = *param_3;
          local_c.lLbound = 0;
          pSVar6 = SafeArrayCreate(0x11,1,&local_c);
          **(undefined4 **)pOVar7 = pSVar6;
          SafeArrayAccessData((SAFEARRAY *)**(undefined4 **)pOVar7,&param_2);
          pOVar7 = param_2;
          goto LAB_221780eb;
        }
        goto LAB_221780c1;
      }
    }
    pOVar7 = *(BSTR *)pOVar7;
  }
LAB_221780eb:
  UVar4 = FUN_221782ce((ushort *)param_1);
  *pUVar2 = UVar4;
  return pOVar7;
}



ushort * __cdecl FUN_221781d7(ushort *param_1,ushort *param_2,UINT *param_3)

{
  ushort uVar1;
  UINT UVar2;
  ushort *puVar3;
  
  puVar3 = param_1;
  if (*param_1 == 0x400c) {
    puVar3 = *(ushort **)(param_1 + 4);
  }
  UVar2 = FUN_221782ce(puVar3);
  *param_3 = UVar2;
  uVar1 = *puVar3;
  *param_2 = uVar1;
  if (uVar1 < 9) {
    if (uVar1 == 8) goto LAB_22178278;
    if (((uVar1 != 1) && (1 < uVar1)) && (uVar1 < 8)) {
LAB_22178228:
      return puVar3 + 4;
    }
  }
  else if (uVar1 < 0x12) {
    if ((uVar1 == 0x11) || ((9 < uVar1 && (uVar1 < 0xc)))) goto LAB_22178228;
  }
  else if (uVar1 == 0x2011) {
    if (*(SAFEARRAY **)(puVar3 + 4) != (SAFEARRAY *)0x0) {
      SafeArrayAccessData(*(SAFEARRAY **)(puVar3 + 4),&param_1);
      return param_1;
    }
  }
  else if (0x4001 < uVar1) {
    if (uVar1 < 0x4009) {
LAB_22178278:
      return *(ushort **)(puVar3 + 4);
    }
    if (0x4009 < uVar1) {
      if ((uVar1 < 0x400c) || (uVar1 == 0x4011)) goto LAB_22178278;
      if ((uVar1 == 0x6011) && ((SAFEARRAY *)**(undefined4 **)(puVar3 + 4) != (SAFEARRAY *)0x0)) {
        SafeArrayAccessData((SAFEARRAY *)**(undefined4 **)(puVar3 + 4),&param_1);
        return param_1;
      }
    }
  }
  return (ushort *)0x0;
}



void __cdecl FUN_22178294(short *param_1)

{
  SAFEARRAY *psa;
  
  if (*param_1 == 0x400c) {
    param_1 = *(short **)(param_1 + 4);
  }
  if (((*param_1 == 0x2011) && (psa = *(SAFEARRAY **)(param_1 + 4), psa != (SAFEARRAY *)0x0)) ||
     ((*param_1 == 0x6011 && (psa = (SAFEARRAY *)**(int **)(param_1 + 4), psa != (SAFEARRAY *)0x0)))
     ) {
    SafeArrayUnaccessData(psa);
  }
  return;
}



UINT __cdecl FUN_221782ce(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  UINT UVar3;
  BSTR bstr;
  int local_8;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  UVar3 = 8;
  if (uVar1 < 0x12) {
    if (uVar1 == 0x11) {
      return 1;
    }
    switch(uVar1) {
    case 1:
      return 0;
    case 2:
    case 0xb:
switchD_221782f1_caseD_5:
      return 2;
    case 3:
    case 4:
    case 10:
switchD_221782f1_caseD_5:
      return 4;
    case 5:
    case 6:
    case 7:
      return 8;
    case 8:
      bstr = *(BSTR *)(param_1 + 4);
LAB_221782fb:
      UVar3 = SysStringByteLen(bstr);
      return UVar3;
    }
  }
  else if (uVar1 < 0x4003) {
    if (uVar1 == 0x4002) {
      return 2;
    }
    if (uVar1 == 0x2011) {
      if (*(SAFEARRAY **)(param_1 + 4) == (SAFEARRAY *)0x0) {
        return 0;
      }
      SafeArrayGetDim(*(SAFEARRAY **)(param_1 + 4));
      SafeArrayGetElemsize(*(SAFEARRAY **)(puVar2 + 4));
      SafeArrayGetLBound(*(SAFEARRAY **)(puVar2 + 4),1,&local_8);
      SafeArrayGetUBound(*(SAFEARRAY **)(puVar2 + 4),1,(LONG *)&param_1);
      local_8 = (int)param_1 - local_8;
LAB_22178356:
      return local_8 + 1;
    }
  }
  else if (uVar1 < 0x4012) {
    if (uVar1 == 0x4011) {
      return 1;
    }
    switch(uVar1) {
    case 0x4003:
    case 0x4004:
    case 0x400a:
      goto switchD_221782f1_caseD_5;
    case 0x4005:
    case 0x4006:
    case 0x4007:
      goto switchD_221782f1_caseD_5;
    case 0x4008:
      bstr = (BSTR)**(undefined4 **)(param_1 + 4);
      goto LAB_221782fb;
    case 0x400b:
      goto switchD_221782f1_caseD_5;
    }
  }
  else if (uVar1 == 0x6011) {
    if ((SAFEARRAY *)**(undefined4 **)(param_1 + 4) == (SAFEARRAY *)0x0) {
      return 0;
    }
    SafeArrayGetDim((SAFEARRAY *)**(undefined4 **)(param_1 + 4));
    SafeArrayGetElemsize((SAFEARRAY *)**(undefined4 **)(puVar2 + 4));
    SafeArrayGetLBound((SAFEARRAY *)**(undefined4 **)(puVar2 + 4),1,&local_8);
    SafeArrayGetUBound((SAFEARRAY *)**(undefined4 **)(puVar2 + 4),1,(LONG *)&param_1);
    local_8 = (int)param_1 - local_8;
    goto LAB_22178356;
  }
  UVar3 = 0xffffffff;
switchD_221782f1_caseD_5:
  return UVar3;
}



VARIANTARG * __thiscall FUN_2217843b(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  VariantInit((VARIANTARG *)this);
  return (VARIANTARG *)this;
}



void __fastcall FUN_22178452(VARIANTARG *param_1)

{
  VariantClear(param_1);
  return;
}



VARIANTARG * __thiscall FUN_2217845a(void *this,VARTYPE param_1)

{
  HRESULT HVar1;
  VARIANTARG *pvarSrc;
  
  VariantClear((VARIANTARG *)this);
  pvarSrc = *(VARIANTARG **)((int)this + 0x10);
  if ((pvarSrc->n1).n2.vt != param_1) {
    HVar1 = VariantChangeType((VARIANTARG *)this,pvarSrc,0,param_1);
    pvarSrc = (VARIANTARG *)(~-(uint)(HVar1 != 0) & (uint)this);
  }
  return pvarSrc;
}



void __thiscall FUN_22178487(void *this,undefined4 param_1)

{
  VariantClear((VARIANTARG *)this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return;
}



undefined4 * __thiscall FUN_2217849c(void *this,byte param_1)

{
  FUN_22173159((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_221784d8(void *this,char *param_1)

{
  hostent *phVar1;
  void *this_00;
  HWND hWnd;
  HANDLE pvVar2;
  u_int wMsg;
  char *buf;
  int iVar3;
  
  if (*(int *)((int)this + 0x60c) == 0) {
    if (*(int *)((int)this + 0x608) == 0) {
      phVar1 = gethostbyname(param_1);
      if (phVar1 == (hostent *)0x0) {
        return 0;
      }
      lstrcpynA((LPSTR)((int)this + 0x503),phVar1->h_name,0xff);
      *(undefined4 *)((int)this + 0x604) = *(undefined4 *)*phVar1->h_addr_list;
      return 1;
    }
    if (*(int *)((int)this + 0x608) == 1) {
      this_00 = (void *)FUN_221713f1();
      buf = (char *)((int)this + 0x103);
      iVar3 = 0x400;
      wMsg = 0xd11;
      hWnd = (HWND)FUN_2217269e((int)this_00);
      pvVar2 = WSAAsyncGetHostByName(hWnd,wMsg,param_1,buf,iVar3);
      *(HANDLE *)((int)this + 0x610) = pvVar2;
      if (pvVar2 == (HANDLE)0x0) {
        return 0;
      }
      FUN_22177d7a(this_00,(uint)pvVar2,this);
      *(undefined4 *)((int)this + 0x614) = 0;
      *(undefined4 *)((int)this + 0x60c) = 1;
      iVar3 = 0x2733;
    }
    else {
      iVar3 = 0x271e;
    }
  }
  else {
    iVar3 = 0x2734;
  }
  WSASetLastError(iVar3);
  return 0;
}



undefined4 __fastcall FUN_2217859b(int param_1)

{
  hostent *phVar1;
  void *this;
  HWND hWnd;
  HANDLE pvVar2;
  u_int wMsg;
  char *addr;
  int type;
  char *buf;
  int iVar3;
  int buflen;
  
  if (*(int *)(param_1 + 0x60c) == 0) {
    if (*(int *)(param_1 + 0x608) == 0) {
      phVar1 = gethostbyaddr(&stack0x00000004,4,2);
      if (phVar1 == (hostent *)0x0) {
        return 0;
      }
      lstrcpynA((LPSTR)(param_1 + 0x503),phVar1->h_name,0xff);
      *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)*phVar1->h_addr_list;
      return 1;
    }
    if (*(int *)(param_1 + 0x608) != 1) {
      return 0;
    }
    this = (void *)FUN_221713f1();
    buf = (char *)(param_1 + 0x103);
    buflen = 0x400;
    type = 2;
    addr = &stack0x00000004;
    iVar3 = 4;
    wMsg = 0xd11;
    hWnd = (HWND)FUN_2217269e((int)this);
    pvVar2 = WSAAsyncGetHostByAddr(hWnd,wMsg,addr,iVar3,type,buf,buflen);
    *(HANDLE *)(param_1 + 0x610) = pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      return 0;
    }
    FUN_22177d7a(this,(uint)pvVar2,param_1);
    *(undefined4 *)(param_1 + 0x614) = 0;
    *(undefined4 *)(param_1 + 0x60c) = 1;
    iVar3 = 0x2733;
  }
  else {
    iVar3 = 0x2734;
  }
  WSASetLastError(iVar3);
  return 0;
}



void __fastcall FUN_22178690(int param_1)

{
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0x610) = 0;
  if (*(int *)(param_1 + 0x614) == 0) {
    lstrcpynA((LPSTR)(param_1 + 0x503),*(LPCSTR *)(param_1 + 0x103),0xff);
    *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)**(undefined4 **)(param_1 + 0x10f);
  }
  return;
}



void __fastcall FUN_221786d4(int param_1)

{
  *(undefined4 *)(param_1 + 0x60c) = 0;
  return;
}



int __fastcall FUN_221786de(int param_1)

{
  return param_1 + 0x503;
}



undefined4 __thiscall FUN_221786e5(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x604);
  return 1;
}



void __thiscall FUN_221786fb(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x608) = param_1;
  return;
}



undefined4 * __thiscall FUN_22178760(void *this,byte param_1)

{
  FUN_22178788((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_22178788(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_22176b00;
  param_1[5] = &PTR_LAB_22176ac0;
  if ((BSTR)param_1[0xd] != (BSTR)0x0) {
    SysFreeString((BSTR)param_1[0xd]);
  }
  FUN_2217d022(param_1);
  return;
}



undefined4 __thiscall FUN_221787af(void *this,HWND param_1,uint param_2,int *param_3,HWND param_4)

{
  HWND pHVar1;
  short sVar2;
  LRESULT LVar3;
  UINT UVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  
  if (param_2 == 0x110) {
    *(undefined4 *)((int)this + 0x40) = 1;
    FUN_22180765(param_1,0,0x22182690);
    *(undefined4 *)((int)this + 0x40) = 0;
    return 0;
  }
  if (param_2 != 0x111) {
    if (param_2 == 0x464) {
      puVar5 = (undefined4 *)FUN_2217d9c0(this,(uint *)&param_4);
      if ((puVar5 != (undefined4 *)0x0) &&
         (iVar6 = (**(code **)*puVar5)(puVar5,&DAT_22171590,&param_3), -1 < iVar6)) {
        (**(code **)(*param_3 + 0x20))(param_3,(WPARAM *)((int)this + 0x30));
        (**(code **)(*param_3 + 0x78))(param_3,(undefined4 *)((int)this + 0x34));
        (**(code **)(*param_3 + 0x40))(param_3,(int)this + 0x38);
        (**(code **)(*param_3 + 0x48))(param_3,(int)this + 0x3c);
        (**(code **)(*param_3 + 8))(param_3);
        *(undefined4 *)((int)this + 0x40) = 1;
        SendDlgItemMessageA(param_1,0xc9,0x14e,*(WPARAM *)((int)this + 0x30),0);
        FUN_22178a2c(param_1,0xca,*(LPCWSTR *)((int)this + 0x34));
        SetDlgItemInt(param_1,0xcb,*(UINT *)((int)this + 0x38),1);
        SetDlgItemInt(param_1,0xcc,*(UINT *)((int)this + 0x3c),1);
        *(undefined4 *)((int)this + 0x40) = 0;
        return 1;
      }
    }
    else if (param_2 == 0x465) {
      LVar3 = SendDlgItemMessageA(param_1,0xc9,0x147,0,0);
      *(LRESULT *)((int)this + 0x30) = LVar3;
      FUN_22178ac0(param_1,0xca,(undefined4 *)((int)this + 0x34));
      UVar4 = GetDlgItemInt(param_1,0xcb,(BOOL *)0x0,1);
      *(UINT *)((int)this + 0x38) = UVar4;
      UVar4 = GetDlgItemInt(param_1,0xcc,(BOOL *)0x0,1);
      *(UINT *)((int)this + 0x3c) = UVar4;
      puVar5 = (undefined4 *)FUN_2217d9c0(this,&param_2);
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return 1;
        }
        iVar6 = (**(code **)*puVar5)(puVar5,&DAT_22171590,&param_3);
        if (-1 < iVar6) {
          uVar7 = (**(code **)(*param_3 + 0x24))(param_3,*(undefined4 *)((int)this + 0x30));
          if (((((int)uVar7 < 0) ||
               (uVar7 = (**(code **)(*param_3 + 0x7c))(param_3,*(undefined4 *)((int)this + 0x34)),
               (int)uVar7 < 0)) ||
              (uVar7 = (**(code **)(*param_3 + 0x44))(param_3,*(undefined4 *)((int)this + 0x38)),
              (int)uVar7 < 0)) ||
             (uVar7 = (**(code **)(*param_3 + 0x4c))(param_3,*(undefined4 *)((int)this + 0x3c)),
             (int)uVar7 < 0)) {
            FUN_221805f3(uVar7,0);
            pHVar1 = param_4;
            if ((param_4 != (HWND)0x0) && (BVar8 = IsBadWritePtr(param_4,4), BVar8 == 0)) {
              pHVar1->unused = uVar7;
            }
            (**(code **)(*param_3 + 8))(param_3);
            return 1;
          }
          (**(code **)(*param_3 + 8))(param_3);
        }
        puVar5 = (undefined4 *)FUN_2217d9d0(this,&param_2);
      } while( true );
    }
    return 0;
  }
  uVar7 = (uint)param_3 & 0xffff;
  sVar2 = (short)((uint)param_3 >> 0x10);
  if (uVar7 == 0xc9) {
    if (sVar2 != 1) {
      return 0;
    }
    if (*(int *)((int)this + 0x40) != 0) {
      return 0;
    }
    iVar6 = *(int *)((int)this + 0x30);
    LVar3 = SendMessageA(param_4,0x147,0,0);
    *(LRESULT *)((int)this + 0x30) = LVar3;
    if (LVar3 == iVar6) {
      return 0;
    }
  }
  else {
    if (uVar7 < 0xca) {
      return 0;
    }
    if (0xcc < uVar7) {
      return 0;
    }
    if (sVar2 != 0x300) {
      return 0;
    }
    if (*(int *)((int)this + 0x40) != 0) {
      return 0;
    }
  }
  FUN_2217da4b((int)this);
  return 1;
}



undefined4 __cdecl FUN_22178a2c(HWND param_1,ushort param_2,LPCWSTR param_3)

{
  uint cbMultiByte;
  int iVar1;
  undefined4 uVar2;
  LPSTR local_84 [31];
  byte local_8;
  
  uVar2 = 0;
  if (param_3 == (LPCWSTR)0x0) {
    SetDlgItemTextA(param_1,(uint)param_2,"");
    uVar2 = 0;
  }
  else {
    iVar1 = lstrlenW(param_3);
    cbMultiByte = iVar1 * 2 + 2;
    FUN_22171f40(local_84,cbMultiByte);
    WideCharToMultiByte(0,0,param_3,-1,local_84[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    if (local_84[0] == (LPCSTR)0x0) {
      uVar2 = 0x8007000e;
    }
    else {
      SetDlgItemTextA(param_1,(uint)param_2,local_84[0]);
    }
    if ((local_84[0] != (LPCSTR)0x0) && ((local_8 & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_84[0]);
    }
  }
  return uVar2;
}



undefined4 __cdecl FUN_22178ac0(HWND param_1,ushort param_2,undefined4 *param_3)

{
  LPWSTR pWVar1;
  undefined4 uVar2;
  CHAR local_104 [256];
  
  uVar2 = 0;
  if ((BSTR)*param_3 != (BSTR)0x0) {
    SysFreeString((BSTR)*param_3);
    *param_3 = 0;
  }
  GetDlgItemTextA(param_1,(uint)param_2,local_104,0xff);
  pWVar1 = FUN_2217bb00(local_104,(LPWSTR)0x0);
  *param_3 = pWVar1;
  if (pWVar1 == (LPWSTR)0x0) {
    uVar2 = 0x8007000e;
  }
  return uVar2;
}



undefined4 * __thiscall FUN_22178b1f(void *this,byte param_1)

{
  FUN_221730c0((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall
FUN_22178b47(void *this,u_short param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  bool bVar1;
  SOCKET SVar2;
  undefined3 extraout_var;
  int iVar3;
  
  if (*(int *)((int)this + 4) == -1) {
    iVar3 = FUN_221713f1();
    if (iVar3 == 0) {
      iVar3 = 0x276d;
    }
    else {
      SVar2 = socket(param_5,param_2,param_4);
      if (SVar2 == 0xffffffff) {
        return 0;
      }
                    // WARNING: Load size is inaccurate
      iVar3 = (**(code **)(*this + 8))(SVar2,0xffffffff);
      if (iVar3 != 0) {
        if ((param_2 != 1) && (param_2 != 2)) {
          return 1;
        }
        bVar1 = FUN_22178d25(this,param_1,param_3);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          *(undefined4 *)((int)this + 0xc) = 1;
          return 1;
        }
      }
      iVar3 = WSAGetLastError();
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 0x2c))();
    }
  }
  else {
    iVar3 = 0x2735;
  }
  WSASetLastError(iVar3);
  return 0;
}



uint __thiscall
FUN_22178bce(void *this,undefined4 param_1,int param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  HWND hWnd;
  u_int wMsg;
  long lEvent;
  
                    // WARNING: Load size is inaccurate
  uVar1 = (**(code **)(*this + 0x80))(param_1,param_2,param_4,0,2);
  if (uVar1 != 0) {
    if (param_2 == 2) {
      param_2 = 1;
      FUN_22179151(this,0x20,(char *)&param_2,4,0xffff);
    }
    iVar2 = FUN_221713f1();
    wMsg = 0xd10;
    lEvent = param_3;
    hWnd = (HWND)FUN_2217269e(iVar2);
    iVar2 = WSAAsyncSelect(*(SOCKET *)((int)this + 4),hWnd,wMsg,lEvent);
    uVar1 = (uint)(iVar2 != -1);
    if (uVar1 == 0) {
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 0x2c))();
    }
  }
  return uVar1;
}



undefined4 __thiscall FUN_22178c4b(void *this,uint param_1,int param_2)

{
  void *this_00;
  HWND hWnd;
  u_int wMsg;
  int iVar1;
  
  if (param_1 == 0xffffffff) {
    iVar1 = 0x271e;
  }
  else if (*(int *)((int)this + 4) == -1) {
    this_00 = (void *)FUN_221713f1();
    if (this_00 != (void *)0x0) {
      *(uint *)((int)this + 4) = param_1;
      if (param_2 != -1) {
        wMsg = 0xd10;
        hWnd = (HWND)FUN_2217269e((int)this_00);
        iVar1 = WSAAsyncSelect(*(SOCKET *)((int)this + 4),hWnd,wMsg,param_2);
        if (iVar1 == -1) {
          *(undefined4 *)((int)this + 4) = 0xffffffff;
          return 0;
        }
      }
      FUN_22177d20(this_00,param_1,this);
      return 1;
    }
    iVar1 = 0x276d;
  }
  else {
    iVar1 = 0x2735;
  }
  WSASetLastError(iVar1);
  return 0;
}



int __fastcall FUN_22178cc6(int param_1)

{
  void *this;
  HWND hWnd;
  int iVar1;
  u_int wMsg;
  int iVar2;
  long lEvent;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == -1) {
    iVar2 = 0x2736;
  }
  else {
    this = (void *)FUN_221713f1();
    if (this != (void *)0x0) {
      lEvent = 0;
      wMsg = 0xd10;
      hWnd = (HWND)FUN_2217269e((int)this);
      iVar1 = WSAAsyncSelect(*(SOCKET *)(param_1 + 4),hWnd,wMsg,lEvent);
      if (iVar1 == -1) {
        return -1;
      }
      FUN_22177d40(this,*(uint *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      return iVar2;
    }
    iVar2 = 0x276d;
  }
  WSASetLastError(iVar2);
  return -1;
}



bool __thiscall FUN_22178d25(void *this,u_short param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  sockaddr local_14;
  
  iVar2 = FUN_221792fb(param_2,param_1,(undefined4 *)&local_14,0);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = FUN_22178d5c(this,&local_14,0x10);
  }
  return bVar1;
}



bool __thiscall FUN_22178d5c(void *this,sockaddr *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = bind(*(SOCKET *)((int)this + 4),param_1,param_2);
  return iVar1 != -1;
}



bool __thiscall FUN_22178d79(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = listen(*(SOCKET *)((int)this + 4),param_1);
  return iVar1 != -1;
}



undefined4 __thiscall FUN_22178d92(void *this,LPCSTR param_1,undefined4 param_2)

{
  int *this_00;
  u_short uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  LPCSTR local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  this_00 = *(int **)((int)this + 0x10);
  FUN_22177e5e(this_00,param_1);
  (**(code **)(*this_00 + 0x14))(*(int *)((int)this + 0x14) == 1);
  iVar2 = (**(code **)(*this_00 + 0xc))(&param_1);
  if (iVar2 == 0) {
    iVar2 = WSAGetLastError();
    if (iVar2 == 0x2733) {
      *(undefined2 *)((int)this + 8) = (undefined2)param_2;
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 0x78))();
    }
    WSASetLastError(iVar2);
    uVar3 = 0;
  }
  else {
    local_10 = (LPCSTR)0x0;
    uStack_c = 0;
    uStack_8 = 0;
    local_14 = 2;
    uVar1 = htons((u_short)param_2);
    local_14 = CONCAT22(uVar1,(undefined2)local_14);
    local_10 = param_1;
                    // WARNING: Load size is inaccurate
    uVar3 = (**(code **)(*this + 0x84))(&local_14,0x10);
  }
  return uVar3;
}



undefined4 __thiscall FUN_22178e2c(void *this,int *param_1,sockaddr *param_2,int *param_3)

{
  SOCKET SVar1;
  undefined4 uVar2;
  
  SVar1 = accept(*(SOCKET *)((int)this + 4),param_2,param_3);
  if (SVar1 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 8))(SVar1,0xffffffff);
  }
  return uVar2;
}



void __thiscall FUN_22178e54(void *this,char *param_1,int param_2,int param_3)

{
  recv(*(SOCKET *)((int)this + 4),param_1,param_2,param_3);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 1;
  return;
}



void FUN_22178e8a(void *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  tagMSG local_24;
  int local_8;
  
  if (param_1 != (void *)0x0) {
    hWnd = (HWND)FUN_2217269e((int)param_1);
    while (BVar1 = PeekMessageA(&local_24,hWnd,0xd10,0xd10,1), BVar1 != 0) {
      if ((local_24.wParam != *(WPARAM *)(local_8 + 4)) && (local_24.wParam != 0xffffffff)) {
        FUN_2217b206(param_1,local_24.message,local_24.wParam,local_24.lParam);
      }
    }
    while (BVar1 = PeekMessageA(&local_24,hWnd,0xd12,0xd12,1), BVar1 != 0) {
      if ((local_24.wParam != *(WPARAM *)(local_8 + 4)) && (local_24.wParam != 0xffffffff)) {
        FUN_2217b206(param_1,local_24.message,local_24.wParam,local_24.lParam);
      }
    }
  }
  return;
}



void __fastcall FUN_22178f2a(void *param_1)

{
  uint *puVar1;
  
  puVar1 = FUN_22179497(param_1,2);
  if (puVar1 != (uint *)0x0) {
    if ((puVar1[1] != 0) && (puVar1[2] != 0)) {
      FUN_221794ef(param_1,0);
    }
    puVar1[1] = 0;
  }
  return;
}



void __fastcall FUN_22178f5c(void *param_1)

{
  uint *puVar1;
  
  puVar1 = FUN_22179497(param_1,1);
  if (puVar1 != (uint *)0x0) {
    if ((puVar1[1] != 0) && (puVar1[2] != 0)) {
      FUN_221794ef(param_1,0);
    }
    puVar1[1] = 0;
  }
  return;
}



bool __thiscall FUN_22178f8c(void *this,long param_1)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = FUN_221713f1();
  if (iVar1 == 0) {
    iVar1 = 0x276d;
  }
  else {
    if (*(int *)((int)this + 4) != -1) {
      hWnd = (HWND)FUN_2217269e(iVar1);
      iVar1 = WSAAsyncSelect(*(SOCKET *)((int)this + 4),hWnd,0xd10,param_1);
      return iVar1 != -1;
    }
    iVar1 = 0x2736;
  }
  WSASetLastError(iVar1);
  return false;
}



int FUN_22178fda(uint param_1)

{
  void *this;
  int iVar1;
  
  this = (void *)FUN_221713f1();
  if (this == (void *)0x0) {
    WSASetLastError(0x276d);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_22177d02(this,param_1);
    if (iVar1 == 0) {
      WSASetLastError(0x2736);
    }
  }
  return iVar1;
}



LPSTR __cdecl FUN_22179013(LPCSTR param_1)

{
  int iVar1;
  HINSTANCE hInstance;
  DWORD DVar2;
  LPSTR lpString1;
  LPCSTR uID;
  LPSTR lpBuffer;
  
  iVar1 = FUN_221713f1();
  lpString1 = (LPSTR)(iVar1 + 0x68);
  iVar1 = 0xff;
  uID = param_1;
  lpBuffer = lpString1;
  hInstance = FUN_22174a20(0);
  iVar1 = LoadStringA(hInstance,(UINT)uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    DVar2 = FormatMessageA(0x1100,(LPCVOID)0x0,(DWORD)param_1,0x400,(LPSTR)&param_1,0,(va_list *)0x0
                          );
    if (DVar2 != 0) {
      lstrcpynA(lpString1,param_1,0xff);
      LocalFree(param_1);
    }
  }
  return lpString1;
}



bool __thiscall FUN_22179077(void *this,sockaddr *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = getpeername(*(SOCKET *)((int)this + 4),param_1,param_2);
  return iVar1 != -1;
}



undefined4 __thiscall FUN_22179094(void *this,LPSTR param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined1 local_18 [4];
  _union_1226 _Stack_14;
  char acStack_10 [8];
  int local_8;
  
  local_8 = 0x10;
  local_18._0_2_ = 0;
  local_18[2] = '\0';
  local_18[3] = '\0';
  _Stack_14.S_addr = 0;
  acStack_10[0] = '\0';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '\0';
  acStack_10[7] = '\0';
  bVar1 = FUN_22179077(this,(sockaddr *)local_18,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_22179294(local_18,(in_addr)_Stack_14.S_un_b,acStack_10._0_4_,acStack_10._4_4_,
                         param_1,param_2,param_3);
  }
  return uVar2;
}



bool __thiscall FUN_221790e4(void *this,sockaddr *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = getsockname(*(SOCKET *)((int)this + 4),param_1,param_2);
  return iVar1 != -1;
}



undefined4 __thiscall FUN_22179101(void *this,LPSTR param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined1 local_18 [4];
  _union_1226 _Stack_14;
  char acStack_10 [8];
  int local_8;
  
  local_8 = 0x10;
  local_18._0_2_ = 0;
  local_18[2] = '\0';
  local_18[3] = '\0';
  _Stack_14.S_addr = 0;
  acStack_10[0] = '\0';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '\0';
  acStack_10[7] = '\0';
  bVar1 = FUN_221790e4(this,(sockaddr *)local_18,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_22179294(local_18,(in_addr)_Stack_14.S_un_b,acStack_10._0_4_,acStack_10._4_4_,
                         param_1,param_2,param_3);
  }
  return uVar2;
}



bool __thiscall FUN_22179151(void *this,int param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = setsockopt(*(SOCKET *)((int)this + 4),param_4,param_1,param_2,param_3);
  return iVar1 != -1;
}



bool __thiscall FUN_22179176(void *this,int param_1,char *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = getsockopt(*(SOCKET *)((int)this + 4),param_4,param_1,param_2,param_3);
  return iVar1 != -1;
}



bool __thiscall FUN_2217919b(void *this,sockaddr *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = connect(*(SOCKET *)((int)this + 4),param_1,param_2);
  return iVar1 != -1;
}



void __thiscall
FUN_221791b8(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
                    // WARNING: Load size is inaccurate
  (**(code **)(*this + 0x88))(param_1,param_2,param_3,param_4,param_5);
  return;
}



undefined4 __thiscall
FUN_221791d6(void *this,undefined4 param_1,undefined4 param_2,u_short param_3,byte *param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  byte local_24 [16];
  undefined4 local_14 [4];
  
  local_24[0] = 0x32;
  local_24[1] = 0x35;
  local_24[2] = 0x35;
  local_24[3] = 0x2e;
  local_24[4] = 0x32;
  local_24[5] = 0x35;
  local_24[6] = 0x35;
  local_24[7] = 0x2e;
  local_24[8] = 0x32;
  local_24[9] = 0x35;
  local_24[10] = 0x35;
  local_24[0xb] = 0x2e;
  local_24[0xc] = 0x32;
  local_24[0xd] = 0x35;
  local_24[0xe] = 0x35;
  local_24[0xf] = 0;
  if (param_4 == (byte *)0x0) {
    param_4 = local_24;
  }
  iVar1 = FUN_221792fb(param_4,param_3,local_14,1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
                    // WARNING: Load size is inaccurate
    uVar2 = (**(code **)(*this + 0x8c))(param_1,param_2,local_14,0x10,param_5);
  }
  return uVar2;
}



void __thiscall
FUN_22179236(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
                    // WARNING: Load size is inaccurate
  (**(code **)(*this + 0x8c))(param_1,param_2,param_3,param_4,param_5);
  return;
}



void __thiscall
FUN_22179254(void *this,char *param_1,int param_2,sockaddr *param_3,int *param_4,int param_5)

{
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 1;
  recvfrom(*(SOCKET *)((int)this + 4),param_1,param_2,param_5,param_3,param_4);
  return;
}



void __thiscall
FUN_22179276(void *this,char *param_1,int param_2,sockaddr *param_3,int param_4,int param_5)

{
  sendto(*(SOCKET *)((int)this + 4),param_1,param_2,param_5,param_3,param_4);
  return;
}



undefined4 __cdecl
FUN_22179294(undefined4 param_1,in_addr param_2,undefined4 param_3,undefined4 param_4,LPSTR param_5,
            uint *param_6,uint *param_7)

{
  u_short uVar1;
  char *lpString2;
  uint uVar2;
  uint uVar3;
  LPSTR pCVar4;
  
  uVar1 = ntohs(param_1._2_2_);
  *param_7 = (uint)uVar1;
  if (param_5 != (LPSTR)0x0) {
    uVar3 = *param_6;
    pCVar4 = param_5;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pCVar4[0] = '\0';
      pCVar4[1] = '\0';
      pCVar4[2] = '\0';
      pCVar4[3] = '\0';
      pCVar4 = pCVar4 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar4 = '\0';
      pCVar4 = pCVar4 + 1;
    }
    lpString2 = inet_ntoa(param_2);
    if (lpString2 == (char *)0x0) {
      *param_6 = 0;
    }
    else {
      lstrcpynA(param_5,lpString2,*param_6 - 1);
      uVar3 = lstrlenA(param_5);
      *param_6 = uVar3;
    }
  }
  return 1;
}



undefined4 __cdecl FUN_221792fb(byte *param_1,u_short param_2,undefined4 *param_3,int param_4)

{
  byte bVar1;
  u_short uVar2;
  ulong uVar3;
  byte *pbVar4;
  int iVar5;
  hostent *phVar6;
  byte *pbVar7;
  bool bVar8;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined2 *)param_3 = 2;
  uVar2 = htons(param_2);
  *(u_short *)((int)param_3 + 2) = uVar2;
  if (param_1 == (byte *)0x0) {
    param_3[1] = 0;
  }
  else {
    uVar3 = inet_addr((char *)param_1);
    if (uVar3 == 0xffffffff) {
      pbVar4 = (byte *)&DAT_22176aac;
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_2217936e:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_2217935e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_2217936e;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_2217935e:
      if (iVar5 == 0) {
        if (param_4 != 0) {
          param_3[1] = 0xffffffff;
          return 1;
        }
LAB_2217937f:
        WSASetLastError(0x271e);
        return 0;
      }
      phVar6 = gethostbyname((char *)param_1);
      if (phVar6 == (hostent *)0x0) goto LAB_2217937f;
      uVar3 = *(ulong *)*phVar6->h_addr_list;
    }
    param_3[1] = uVar3;
  }
  return 1;
}



undefined4 __thiscall FUN_221793df(void *this,uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  fd_set local_318;
  fd_set local_214;
  fd_set local_110;
  timeval local_c;
  
  uVar2 = 1;
  local_c.tv_sec = 0;
  local_318.fd_array[0] = *(SOCKET *)((int)this + 4);
  local_c.tv_usec = 0;
  local_110.fd_count = 1;
  local_214.fd_count = 1;
  local_318.fd_count = 1;
  local_214.fd_array[0] = local_318.fd_array[0];
  local_110.fd_array[0] = local_318.fd_array[0];
  iVar1 = select(1,&local_110,&local_214,&local_318,&local_c);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    iVar1 = __WSAFDIsSet(*(SOCKET *)((int)this + 4),&local_110);
    if (iVar1 != 0) {
      *param_1 = *param_1 | 1;
    }
    iVar1 = __WSAFDIsSet(*(SOCKET *)((int)this + 4),&local_214);
    if (iVar1 != 0) {
      *param_1 = *param_1 | 2;
    }
    iVar1 = __WSAFDIsSet(*(SOCKET *)((int)this + 4),&local_318);
    if (iVar1 != 0) {
      *param_1 = *param_1 | 4;
    }
  }
  return uVar2;
}



uint * __thiscall FUN_22179497(void *this,ushort param_1)

{
  uint *puVar1;
  void *local_8;
  
  if (*(int *)((int)this + 0x18) == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (uint *)0x0;
    local_8 = this;
    local_8 = (void *)FUN_22177722(*(int *)((int)this + 0x18));
    if ((local_8 != (void *)0x0) &&
       (puVar1 = (uint *)FUN_22177714((int)local_8), local_8 != (void *)0x0)) {
      do {
        if (*puVar1 == (uint)param_1) {
          return puVar1;
        }
        puVar1 = (uint *)FUN_2217772a((int *)&local_8);
      } while (local_8 != (void *)0x0);
    }
  }
  return puVar1;
}



void __thiscall FUN_221794ef(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  
  this_00 = (void *)FUN_221713f1();
  if ((this_00 != (void *)0x0) && (*(int *)((int)this + 0x18) != 0)) {
    if (param_1 == 0) {
      piVar1 = (int *)((int)this + 0x1c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_22173160(this_00,(int)this);
      }
    }
    else {
      iVar2 = *(int *)((int)this + 0x1c);
      *(int *)((int)this + 0x1c) = iVar2 + 1;
      if (iVar2 == 0) {
        FUN_2217b305(this_00,this);
      }
    }
  }
  return;
}



uint * __thiscall FUN_2217952e(void *this,ushort param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_221713f1();
  if ((iVar1 == 0) || (*(int *)((int)this + 0x18) == 0)) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)FUN_22171abf(0xc);
    puVar2[1] = 0;
    *puVar2 = (uint)param_1;
    puVar2[2] = param_2;
    FUN_221776cb(*(void **)((int)this + 0x18),puVar2);
  }
  return puVar2;
}



void __thiscall FUN_22179588(void *this,uint param_1,ushort param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = FUN_221713f1();
  if ((iVar1 != 0) && (*(int *)((int)this + 0x18) != 0)) {
    puVar2 = FUN_22179497(this,param_2);
    if (puVar2 == (uint *)0x0) {
      FUN_2217952e(this,param_2,param_1);
    }
    else {
      if (param_1 == 0) {
        if ((puVar2[1] != 0) && (puVar2[2] != 0)) {
          FUN_221794ef(this,0);
        }
        puVar2[1] = 0;
      }
      puVar2[2] = param_1;
    }
  }
  return;
}



undefined4 __fastcall FUN_22179663(int *param_1)

{
  int *piVar1;
  undefined2 *puVar2;
  DWORD DVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  if (param_1[6] == 0) {
    local_c = 1;
  }
  else {
    local_8 = param_1;
    local_8 = (int *)FUN_22177722(param_1[6]);
    if (local_8 != (int *)0x0) {
      puVar2 = (undefined2 *)FUN_22177714((int)local_8);
      while (local_8 != (int *)0x0) {
        if (((*(int *)(puVar2 + 2) != 0) && (*(int *)(puVar2 + 4) != 0)) &&
           (DVar3 = GetTickCount(), *(uint *)(puVar2 + 4) <= DVar3 - *(int *)(puVar2 + 2))) {
          iVar4 = (**(code **)(*param_1 + 0x7c))(CONCAT22(extraout_var,*puVar2));
          if (iVar4 == 0) {
            *(undefined4 *)(puVar2 + 2) = 0;
            piVar1 = param_1 + 7;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              local_c = 1;
            }
          }
          else {
            *(DWORD *)(puVar2 + 2) = DVar3;
          }
        }
        puVar2 = (undefined2 *)FUN_2217772a((int *)&local_8);
      }
    }
  }
  return local_c;
}



void __fastcall FUN_221796f2(int *param_1)

{
  LPCSTR pCVar1;
  
  FUN_22178009((int)param_1);
  pCVar1 = (LPCSTR)(**(code **)(*param_1 + 0x10))();
  FUN_22174cd3((void *)(param_1[0x1c9] + 0xdc),pCVar1);
  return;
}



BSTR __cdecl FUN_22179721(LPCSTR param_1,int param_2)

{
  UINT ui;
  BSTR lpWideCharStr;
  
  if ((param_1 != (LPCSTR)0x0) && (0 < param_2)) {
    ui = MultiByteToWideChar(0,0,param_1,param_2,(LPWSTR)0x0,0);
    lpWideCharStr = SysAllocStringLen((OLECHAR *)0x0,ui);
    if (lpWideCharStr != (BSTR)0x0) {
      MultiByteToWideChar(0,0,param_1,param_2,lpWideCharStr,ui);
      return lpWideCharStr;
    }
  }
  return (BSTR)0x0;
}



void __fastcall FUN_221797a8(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  LPCSTR pCVar2;
  
  bVar1 = FUN_22177df2((void *)(param_1 + 0xd8),&DAT_22176b18);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    pCVar2 = (LPCSTR)(**(code **)(**(int **)(param_1 + 0xec) + 4))();
    if (pCVar2 != (LPCSTR)0x0) {
      FUN_22174cd3((void *)(param_1 + 0xd8),pCVar2);
    }
  }
  return;
}



int FUN_221797dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  LPWSTR pWVar3;
  
  FUN_221797a8(param_1 + -0xc0);
  iVar1 = FUN_22177def((undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    pCVar2 = "";
  }
  else {
    pCVar2 = (LPCSTR)FUN_22177def((undefined4 *)(param_1 + 0x18));
  }
  pWVar3 = FUN_2217bb00(pCVar2,(LPWSTR)0x0);
  *param_2 = pWVar3;
  return (-(uint)(pWVar3 != (LPWSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
}



void __fastcall FUN_221798c9(int param_1)

{
  FUN_2217fd2e(param_1,(undefined4 *)&DAT_221826cc);
  return;
}



undefined4 __thiscall FUN_221798de(void *this,int param_1)

{
  LPCSTR pCVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  undefined2 uVar5;
  undefined2 extraout_var_00;
  void *local_8;
  
  local_8 = this;
  pCVar1 = (LPCSTR)WSAGetLastError();
  *(LPCSTR *)((int)this + 0xf8) = pCVar1;
  if (pCVar1 == (LPCSTR)0x0) {
    puVar4 = (undefined4 *)FUN_2217498e(this,&local_8,0x9c51);
    FUN_22174cbf((void *)((int)this + 0xf4),puVar4);
    FUN_2217362b(&local_8);
    uVar5 = extraout_var_00;
  }
  else {
    pCVar2 = FUN_22179013(pCVar1);
    FUN_22174cd3((void *)((int)this + 0xf4),pCVar2);
    uVar5 = extraout_var;
  }
  if ((param_1 == 0) || (*(uint *)((int)this + 0xf8) == 0)) {
    uVar3 = 0;
  }
  else {
                    // WARNING: Load size is inaccurate
    uVar3 = (**(code **)(*this + 0x30))
                      (*(uint *)((int)this + 0xf8) | 0x800a0000,
                       CONCAT22(uVar5,*(undefined2 *)((int)this + 0xf8)),0);
  }
  return uVar3;
}



undefined4 __thiscall FUN_2217995d(void *this,VARIANTARG *param_1)

{
  HRESULT HVar1;
  VARIANTARG *pVVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  LPSTR local_9c [31];
  byte local_20;
  VARIANTARG local_1c;
  ushort local_a;
  UINT local_8;
  
  VariantInit(&local_1c);
  local_8 = 0xffffffff;
  pVVar2 = param_1;
  if (((param_1->n1).n2.vt == 9) &&
     (HVar1 = VariantChangeType(&local_1c,param_1,0,8), pVVar2 = (VARIANTARG *)0x0, HVar1 == 0)) {
    pVVar2 = &local_1c;
  }
  SetLastError(0);
  if (pVVar2 == (VARIANTARG *)0x0) {
LAB_22179b22:
    uVar6 = 0;
  }
  else {
    if ((pVVar2->n1).n2.vt == 0x400c) {
      pVVar2 = *(VARIANTARG **)((int)&pVVar2->n1 + 8);
    }
    if ((pVVar2->n1).n2.vt == 8) {
      local_8 = SysStringLen(*(BSTR *)((int)&pVVar2->n1 + 8));
      if ((int)local_8 < 1) {
        param_1 = (VARIANTARG *)0x0;
      }
      else {
        param_1 = (VARIANTARG *)
                  WideCharToMultiByte(0,0,*(LPCWSTR *)((int)&pVVar2->n1 + 8),local_8,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
        FUN_22171f40(local_9c,(uint)param_1);
        WideCharToMultiByte(0,0,*(LPCWSTR *)((int)&pVVar2->n1 + 8),local_8,local_9c[0],(int)param_1,
                            (LPCSTR)0x0,(LPBOOL)0x0);
                    // WARNING: Load size is inaccurate
        param_1 = (VARIANTARG *)(**(code **)(*this + 0x84))(local_9c[0],param_1);
        if ((local_9c[0] != (LPSTR)0x0) && ((local_20 & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_9c[0]);
        }
      }
      FUN_221798de(this,0);
LAB_22179a4d:
      pVVar2 = param_1;
      if ((int)param_1 < 1) {
        pVVar2 = (VARIANTARG *)0x0;
      }
      *(VARIANTARG **)((int)this + 0xe8) = pVVar2;
      VariantClear(&local_1c);
      if (*(uint *)((int)this + 0xf8) == 0) goto LAB_22179b22;
      uVar6 = CONCAT22((short)((uint)((int)this + 0xf8) >> 0x10),*(undefined2 *)((int)this + 0xf8));
                    // WARNING: Load size is inaccurate
      iVar7 = *this;
      uVar3 = *(uint *)((int)this + 0xf8) | 0x800a0000;
    }
    else {
      puVar4 = FUN_221781d7((ushort *)pVVar2,&local_a,&local_8);
      if (puVar4 != (ushort *)0x0) {
                    // WARNING: Load size is inaccurate
        param_1 = (VARIANTARG *)(**(code **)(*this + 0x84))(puVar4,local_8);
LAB_22179b09:
        FUN_221798de(this,0);
        FUN_22178294((short *)pVVar2);
        goto LAB_22179a4d;
      }
      if (-1 < (int)local_8) {
        param_1 = (VARIANTARG *)0x0;
        goto LAB_22179b09;
      }
      puVar5 = (undefined4 *)FUN_2217498e(this,&param_1,0x9c52);
      FUN_22174cbf((void *)((int)this + 0xf4),puVar5);
      FUN_2217362b(&param_1);
                    // WARNING: Load size is inaccurate
      iVar7 = *this;
      puVar5 = (undefined4 *)((int)this + 0xf8);
      *puVar5 = 0x9c52;
      uVar6 = CONCAT22((short)((uint)puVar5 >> 0x10),*(undefined2 *)puVar5);
      uVar3 = 0x800a9c52;
    }
    uVar6 = (**(code **)(iVar7 + 0x30))(uVar3,uVar6,0);
  }
  return uVar6;
}



void FUN_22179b26(undefined4 param_1,LPCSTR param_2)

{
  LPWSTR bstrString;
  LPWSTR bstrString_00;
  HWND hWnd;
  CHAR *lpCaption;
  UINT uType;
  CHAR local_114 [260];
  int local_10;
  undefined4 local_c;
  LPWSTR local_8;
  
  local_8 = FUN_2217bb00(param_2,(LPWSTR)0x0);
  GetModuleFileNameA(DAT_22182008,local_114,0x104);
  bstrString = FUN_2217bb00(local_114,(LPWSTR)0x0);
  bstrString_00 = FUN_2217bb00("",(LPWSTR)0x0);
  local_c = 0xffffffff;
  FUN_2217fd2e(local_10,(undefined4 *)&DAT_221826c0);
  if ((short)local_c == 0) {
    lpCaption = local_114;
    uType = 0;
    hWnd = GetActiveWindow();
    MessageBoxA(hWnd,param_2,lpCaption,uType);
  }
  SysFreeString(local_8);
  SysFreeString(bstrString);
  SysFreeString(bstrString_00);
  return;
}



void __fastcall FUN_22179bdc(int *param_1)

{
  HWND pHVar1;
  HINSTANCE hInstance;
  INT_PTR IVar2;
  LPCSTR lpTemplateName;
  code *pcVar3;
  LPARAM LVar4;
  
  FUN_2217f33a(param_1,1);
  LVar4 = 0;
  pcVar3 = FUN_22179c35;
  pHVar1 = GetActiveWindow();
  lpTemplateName = (LPCSTR)0x191;
  hInstance = (HINSTANCE)(**(code **)(*param_1 + 0x28))();
  IVar2 = DialogBoxParamA(hInstance,lpTemplateName,pHVar1,pcVar3,LVar4);
  if (IVar2 == -1) {
    LVar4 = 0;
    pcVar3 = FUN_22179c35;
    pHVar1 = GetActiveWindow();
    DialogBoxParamA(DAT_22182008,(LPCSTR)0x191,pHVar1,pcVar3,LVar4);
  }
  FUN_2217f33a(param_1,0);
  return;
}



undefined4 FUN_22179c35(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0x110) {
    SetDlgItemTextA(param_1,0xcd,"6.01.9782");
    uVar1 = 1;
  }
  else {
    if ((param_2 == 0x111) && ((param_3 == 1 || (param_3 == 2)))) {
      EndDialog(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_22179cc8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x48) == 0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x30) + 0x14))();
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x30))(0x4004667f,&param_1);
    iVar2 = FUN_221798de((void *)(iVar1 + -0xc0),1);
    if (iVar2 < 0) {
      return iVar2;
    }
    *(int *)(iVar1 + 0x24) = param_1;
  }
  *param_2 = param_1;
  return 0;
}



void __cdecl FUN_22179d22(HDC param_1,int param_2,int param_3,HANDLE param_4)

{
  HDC hdc;
  HGDIOBJ h;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
  hdc = CreateCompatibleDC(param_1);
  h = SelectObject(hdc,param_4);
  GetObjectA(param_4,0x18,local_1c);
  BitBlt(param_1,param_2,param_3,local_18,local_14,hdc,0,0,0xcc0020);
  SelectObject(hdc,h);
  DeleteDC(hdc);
  return;
}



undefined4 FUN_22179d82(int param_1,undefined4 param_2,HDC param_3,int *param_4)

{
  tagRECT local_14;
  
  FUN_22179d22(param_3,*param_4,param_4[1],*(HANDLE *)(param_1 + 0x110));
  local_14.left = *param_4;
  local_14.top = param_4[1];
  local_14.right = *(int *)(param_1 + 0x88) + local_14.left;
  local_14.bottom = *(int *)(param_1 + 0x8c) + local_14.top;
  DrawEdge(param_3,&local_14,9,0xf);
  return 0;
}



ATOM FUN_22179de0(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  pWVar3 = &local_2c;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pWVar3->style = 0;
    pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
  }
  local_2c.style = 0xb;
  local_2c.lpfnWndProc = FUN_2217ddd5;
  local_2c.hInstance = DAT_22182008;
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = (HBRUSH)0x6;
  local_2c.lpszClassName = *(LPCSTR *)(PTR_PTR_221820fc + 0x44);
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



int FUN_22179e53(int *param_1)

{
  int *this;
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  VARIANTARG *pVVar4;
  undefined3 extraout_var_00;
  uint uVar5;
  LPSTR pCVar6;
  undefined4 *puVar7;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar8;
  LPSTR local_9c [31];
  byte local_20;
  VARIANTARG local_1c;
  
  piVar1 = param_1;
  iVar3 = (**(code **)(*(int *)param_1[0xc] + 4))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(piVar1[-0x30] + 0x30))(0x800a9c54,0x9c54,0);
    return iVar3;
  }
  FUN_2217843b(&local_1c,0);
  bVar2 = FUN_2217a072((short *)&stack0x00000008);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_22178487(&local_1c,&stack0x00000008);
    pVVar4 = FUN_2217845a(&local_1c,8);
    if (pVVar4 != (VARIANTARG *)0x0) {
      iVar3 = (**(code **)(*piVar1 + 0x7c))(piVar1,*(undefined4 *)((int)&pVVar4->n1 + 8));
      if (iVar3 < 0) goto LAB_22179f34;
      goto LAB_22179ed2;
    }
LAB_22179efa:
    iVar3 = (**(code **)(piVar1[-0x30] + 0x30))(0x800a9c52,0x9c52,0);
  }
  else {
LAB_22179ed2:
    bVar2 = FUN_2217a072((short *)&stack0x00000018);
    if (CONCAT31(extraout_var_00,bVar2) == 0) {
      FUN_22178487(&local_1c,&stack0x00000018);
      pVVar4 = FUN_2217845a(&local_1c,3);
      if (pVVar4 == (VARIANTARG *)0x0) goto LAB_22179efa;
      iVar3 = (**(code **)(*piVar1 + 0x44))(piVar1,*(undefined4 *)((int)&pVVar4->n1 + 8));
      if (iVar3 < 0) {
LAB_22179f34:
        FUN_22178452(&local_1c);
        return iVar3;
      }
    }
    if ((piVar1[0x18] == 0) &&
       (uVar5 = FUN_22178bce((void *)piVar1[0xc],piVar1[0x11],1,0x3f,0), uVar5 == 0)) {
      iVar3 = FUN_221798de(piVar1 + -0x30,1);
    }
    else {
      iVar3 = lstrlenW((LPCWSTR)piVar1[0xf]);
      uVar5 = iVar3 * 2 + 2;
      FUN_22171f40(local_9c,uVar5);
      WideCharToMultiByte(0,0,(LPCWSTR)piVar1[0xf],-1,local_9c[0],uVar5,(LPCSTR)0x0,(LPBOOL)0x0);
      pCVar6 = local_9c[0];
      if (local_9c[0] == (LPCSTR)0x0) {
        pCVar6 = "";
      }
      param_1 = (int *)FUN_22178d92((void *)piVar1[0xc],pCVar6,piVar1[0x10]);
      this = piVar1 + -0x30;
      FUN_221798de(this,0);
      uVar8 = extraout_var_01;
      if ((param_1 == (int *)0x0) && (piVar1[0xe] == 0x2733)) {
        puVar7 = (undefined4 *)FUN_2217498e(this,&param_1,0x9c51);
        FUN_22174cbf(piVar1 + 0xd,puVar7);
        FUN_2217362b(&param_1);
        piVar1[0xe] = 0;
        uVar8 = extraout_var_02;
      }
      if (piVar1[0xe] == 0) {
        if ((local_9c[0] != (LPCSTR)0x0) && ((local_20 & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_9c[0]);
        }
        FUN_22178452(&local_1c);
        return 0;
      }
      iVar3 = (**(code **)(*this + 0x30))
                        (piVar1[0xe] | 0x800a0000,CONCAT22(uVar8,(short)piVar1[0xe]),0);
      if ((local_9c[0] != (LPCSTR)0x0) && ((local_20 & 1) != 0)) {
        HeapFree(DAT_22182030,0,local_9c[0]);
      }
    }
  }
  FUN_22178452(&local_1c);
  return iVar3;
}



bool __cdecl FUN_2217a072(short *param_1)

{
  return *param_1 == 10;
}



int FUN_2217a080(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x48) == 0) {
    if ((*(int *)(param_1 + 0x60) == 0) &&
       (uVar3 = FUN_22178bce(*(void **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x44),1,0x3f,0),
       uVar3 == 0)) {
      iVar2 = FUN_221798de((void *)(uVar1 - 0xc0),1);
      return iVar2;
    }
    iVar2 = (**(code **)(**(int **)(uVar1 + 0x30) + 0x34))(5);
    if ((iVar2 == 0) && (iVar2 = FUN_221798de((void *)(uVar1 - 0xc0),1), iVar2 < 0)) {
      return iVar2;
    }
    if ((*(int *)(uVar1 + 0x38) == 0) && (*(int *)(uVar1 + 0x44) == 0)) {
      param_1 = 0;
      FUN_22179101(*(void **)(uVar1 + 0x30),(LPSTR)0x0,&param_1,&local_8);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)(param_1 - 0xc0) + 0x30))(0x800a9c5a,0x9c46,0);
  }
  return iVar2;
}



int FUN_2217a119(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x30) + 4))();
  if (iVar1 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 8))(param_2,0x3f);
    iVar1 = FUN_221798de((void *)(param_1 + -0xc0),1);
    if (-1 < iVar1) {
      if (iVar2 != 0) {
        FUN_2217a59e(param_1 + -0xc0);
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c54,0x9c54,0);
  }
  return iVar1;
}



void __thiscall FUN_2217a1cb(void *this,VARIANTARG *param_1)

{
  int iVar1;
  BOOL BVar2;
  void *this_00;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  tagMSG local_20;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 4))();
  if (iVar1 == 7) {
    hWnd = *(HWND *)((int)this + 0xa0);
    while( true ) {
      BVar2 = PeekMessageA(&local_20,hWnd,0xd12,0xd12,1);
      if (BVar2 == 0) break;
      if ((local_20.wParam != *(WPARAM *)(*(int *)((int)this + 0xf0) + 4)) &&
         (local_20.wParam != 0xffffffff)) {
        UVar3 = local_20.message;
        WVar4 = local_20.wParam;
        LVar5 = local_20.lParam;
        this_00 = (void *)FUN_221713f1();
        FUN_2217b206(this_00,UVar3,WVar4,LVar5);
      }
      hWnd = *(HWND *)((int)this + 0xa0);
    }
    FUN_2217995d(this,param_1);
  }
  else {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x800a9c46,0x9c46,0);
  }
  return;
}



void __thiscall FUN_2217a261(void *this,VARIANTARG *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)((int)this + 0x120) == 0) {
    iVar1 = FUN_2217a286((int *)this);
  }
  if (iVar1 == 0) {
    FUN_2217995d(this,param_1);
  }
  return;
}



undefined4 __fastcall FUN_2217a286(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  uint local_c;
  int *local_8;
  
  local_c = (param_1[0x42] != 0) + 1;
  local_8 = param_1;
  (**(code **)(*(int *)param_1[0x3c] + 0x2c))();
  local_8 = (int *)0x0;
  sVar1 = FUN_22174d36(param_1 + 0x37);
  if (0 < sVar1) {
    local_8 = (int *)FUN_22177def(param_1 + 0x37);
  }
  FUN_22178bce((void *)param_1[0x3c],param_1[0x41],local_c & 0xffff,0x3f,local_8);
  FUN_221798de(param_1,0);
  if (param_1[0x3e] == 0) {
    param_1[0x48] = 1;
    if (param_1[0x41] == 0) {
      local_c = 0;
      FUN_22179101((void *)param_1[0x3c],(LPSTR)0x0,&local_c,(uint *)&local_8);
    }
    uVar2 = 0;
  }
  else {
    param_1[0x48] = 0;
    uVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1[0x3e] | 0x800a0000,CONCAT22(extraout_var,(short)param_1[0x3e]),0);
  }
  return uVar2;
}



void FUN_2217a346(int param_1,VARIANTARG *param_2)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_2217a3c7((void *)(param_1 + -0xc0),param_2);
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    FUN_2217a40a((void *)(param_1 + -0xc0),param_2);
  }
  else {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c5a,0x9c46,0);
  }
  return;
}



void __thiscall FUN_2217a3c7(void *this,VARIANTARG *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 4))();
  if (iVar1 == 7) {
    FUN_2217a6d1(this,0,(short *)&stack0x00000008,param_1,(short *)&stack0x00000018);
  }
  else {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x800a9c46,0x9c46,0);
  }
  return;
}



void __thiscall FUN_2217a40a(void *this,VARIANTARG *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 4))();
  if (iVar1 == 1) {
    FUN_2217a6d1(this,0,(short *)&stack0x00000008,param_1,(short *)&stack0x00000018);
  }
  else {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x800a9c46,0x9c46,0);
  }
  return;
}



void __thiscall FUN_2217a44d(void *this,VARIANTARG *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 4))();
  if (iVar1 == 1) {
    FUN_2217a6d1(this,2,(short *)&stack0x00000008,param_1,(short *)&stack0x00000018);
  }
  else {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x800a9c46,0x9c46,0);
  }
  return;
}



void __thiscall FUN_2217a490(void *this,VARIANTARG *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 4))();
  if (iVar1 == 7) {
    FUN_2217a6d1(this,2,(short *)&stack0x00000008,param_1,(short *)&stack0x00000018);
  }
  else {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x800a9c46,0x9c46,0);
  }
  return;
}



void FUN_2217a4d3(int param_1,VARIANTARG *param_2)

{
  if (*(int *)(param_1 + 0x48) == 0) {
    FUN_2217a490((void *)(param_1 + -0xc0),param_2);
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    FUN_2217a44d((void *)(param_1 + -0xc0),param_2);
  }
  else {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a9c5a,0x9c46,0);
  }
  return;
}



void __fastcall FUN_2217a554(int param_1)

{
  FUN_2217fd2e(param_1,(undefined4 *)&DAT_221826d8);
  return;
}



void __fastcall FUN_2217a562(int param_1)

{
  FUN_2217fd2e(param_1,(undefined4 *)&DAT_221826e4);
  return;
}



void __fastcall FUN_2217a577(int param_1)

{
  FUN_2217fd2e(param_1,(undefined4 *)&DAT_221826f0);
  return;
}



void __fastcall FUN_2217a590(int param_1)

{
  FUN_2217fd2e(param_1,(undefined4 *)&DAT_221826fc);
  return;
}



undefined4 __fastcall FUN_2217a59e(int param_1)

{
  int iVar1;
  CHAR local_8c [128];
  uint local_c [2];
  
  local_c[1] = 0x80;
  iVar1 = FUN_22179094(*(void **)(param_1 + 0xf0),local_8c,local_c + 1,local_c);
  if (iVar1 != 0) {
    FUN_22174cd3((void *)(param_1 + 0xd4),local_8c);
    *(uint *)(param_1 + 0x100) = local_c[0];
    local_c[1] = 0x80;
    iVar1 = FUN_22179101(*(void **)(param_1 + 0xf0),local_8c,local_c + 1,local_c);
    if (iVar1 != 0) {
      FUN_22174cd3((void *)(param_1 + 0xdc),local_8c);
      return 1;
    }
  }
  return 0;
}



int __thiscall FUN_2217a62b(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  in_addr in;
  u_short uVar1;
  int iVar2;
  char *pcVar3;
  undefined2 local_18;
  u_short uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_8 = 0x10;
  iVar2 = FUN_221791b8(*(void **)((int)this + 0xf0),param_1,param_2,&local_18,&local_8,param_3);
  if (0 < iVar2) {
    if (CONCAT22(uStack_12,local_14) != *(int *)((int)this + 0x128)) {
      if (*(BSTR *)((int)this + 0xfc) != (BSTR)0x0) {
        SysFreeString(*(BSTR *)((int)this + 0xfc));
        *(undefined4 *)((int)this + 0xfc) = 0;
      }
      FUN_22174cd3((void *)((int)this + 0xe0),"");
      *(uint *)((int)this + 0x124) = CONCAT22(uStack_16,local_18);
      *(uint *)((int)this + 0x128) = CONCAT22(uStack_12,local_14);
      in.S_un.S_un_w.s_w2 = uStack_12;
      in.S_un.S_un_w.s_w1 = local_14;
      *(undefined4 *)((int)this + 300) = uStack_10;
      *(undefined4 *)((int)this + 0x130) = uStack_c;
      pcVar3 = inet_ntoa(in);
      FUN_22174cd3((void *)((int)this + 0xd4),pcVar3);
    }
    uVar1 = ntohs(uStack_16);
    *(uint *)((int)this + 0x100) = (uint)uVar1;
  }
  return iVar2;
}



int __thiscall
FUN_2217a6d1(void *this,ULONG param_1,short *param_2,VARIANTARG *param_3,short *param_4)

{
  ushort uVar1;
  VARTYPE VVar2;
  LPCSTR pCVar3;
  bool bVar4;
  VARIANTARG *pVVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  VARIANTARG *pVVar7;
  BSTR pOVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  short *extraout_ECX;
  short *this_00;
  ULONG UVar11;
  VARIANTARG *pVVar12;
  uint uVar13;
  SAFEARRAY *psa;
  LPCSTR local_a8 [31];
  byte local_2c;
  VARIANTARG local_28;
  SAFEARRAYBOUND local_10;
  BSTR local_8;
  
  local_8 = (BSTR)0x2011;
  pVVar5 = FUN_2217843b(&local_28,0);
  if ((param_3->n1).n2.vt == 0x400c) {
    pVVar5 = *(VARIANTARG **)((int)&param_3->n1 + 8);
    param_3 = pVVar5;
  }
  pVVar12 = param_3;
  uVar1 = (param_3->n1).n2.vt;
  pOVar8 = (BSTR)CONCAT22((short)((uint)pVVar5 >> 0x10),uVar1);
  if ((uVar1 & 0x4000) == 0) {
    bVar4 = FUN_2217a072(param_2);
    if (CONCAT31(extraout_var,bVar4) != 0) {
      VVar2 = (pVVar12->n1).n2.vt;
      pOVar8 = (BSTR)CONCAT22((short)((uint3)extraout_var >> 8),VVar2);
      if (VVar2 != 0) goto LAB_2217a77d;
      goto LAB_2217a780;
    }
    FUN_22178487(&local_28,param_2);
    pVVar5 = FUN_2217845a(&local_28,2);
    if (pVVar5 != (VARIANTARG *)0x0) {
      local_8 = (BSTR)CONCAT22(local_8._2_2_,*(undefined2 *)((int)&pVVar5->n1 + 8));
    }
    if (((uint)local_8 & 0x4000) != 0) {
      local_8 = (BSTR)((uint)local_8 ^ 0x4000);
    }
    if ((pVVar5 != (VARIANTARG *)0x0) && (bVar4 = (short)local_8 != 0xc, bVar4)) goto LAB_2217a780;
                    // WARNING: Load size is inaccurate
    iVar6 = (**(code **)(*this + 0x30))(0x800a9c52,0x9c52,0);
LAB_2217a764:
    FUN_22178452(&local_28);
  }
  else {
LAB_2217a77d:
    local_8 = pOVar8;
LAB_2217a780:
    if (*(int *)((int)this + 0x108) == 0) {
      pVVar5 = (VARIANTARG *)(**(code **)(**(int **)((int)this + 0xf0) + 0x14))();
LAB_2217a797:
      this_00 = param_4;
      bVar4 = FUN_2217a072(param_4);
      if (CONCAT31(extraout_var_00,bVar4) == 0) {
        FUN_22178487(&local_28,param_4);
        pVVar7 = FUN_2217845a(&local_28,3);
        this_00 = extraout_ECX;
        if ((pVVar7 != (VARIANTARG *)0x0) &&
           (pVVar7 = *(VARIANTARG **)((int)&pVVar7->n1 + 8), (int)pVVar7 < (int)pVVar5)) {
          pVVar5 = pVVar7;
        }
      }
      if (((short)local_8 == 8) || ((short)local_8 == 0x4008)) {
        FUN_22171f40(local_a8,(uint)((int)&pVVar5->n1 + 1));
        pCVar3 = local_a8[0];
        if (*(int *)((int)this + 0x108) == 0) {
          param_1 = (**(code **)(**(int **)((int)this + 0xf0) + 0x38))(local_a8[0],pVVar5,param_1);
        }
        else {
          param_1 = FUN_2217a62b(this,local_a8[0],pVVar5,param_1);
        }
        FUN_221798de(this,0);
        pCVar3[(int)pVVar5] = '\0';
        pOVar8 = FUN_22179721(pCVar3,param_1);
        pVVar5 = param_3;
        if ((undefined1  [16])((undefined1  [16])param_3->n1 & (undefined1  [16])0x4000) ==
            (undefined1  [16])0x0) {
          VariantClear(param_3);
        }
        else {
          SysFreeString((BSTR)**(undefined4 **)((int)&param_3->n1 + 8));
        }
        if ((pVVar5->n1).n2.vt == 0x4008) {
          **(undefined4 **)((int)&pVVar5->n1 + 8) = pOVar8;
        }
        else {
          (pVVar5->n1).n2.vt = 8;
          *(BSTR *)((int)&pVVar5->n1 + 8) = pOVar8;
        }
        pVVar12 = param_3;
        if ((local_a8[0] != (LPCSTR)0x0) && ((local_2c & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_a8[0]);
          pVVar12 = param_3;
        }
LAB_2217a8dc:
        UVar11 = param_1;
        if ((int)param_1 < 1) {
          UVar11 = 0;
        }
        *(ULONG *)((int)this + 0xe4) = UVar11;
        if (*(uint *)((int)this + 0xf8) != 0) {
          uVar10 = CONCAT22((short)((uint)((int)this + 0xf8) >> 0x10),
                            *(undefined2 *)((int)this + 0xf8));
                    // WARNING: Load size is inaccurate
          iVar6 = *this;
          uVar13 = *(uint *)((int)this + 0xf8) | 0x800a0000;
LAB_2217a8a6:
          iVar6 = (**(code **)(iVar6 + 0x30))(uVar13,uVar10,0);
          goto LAB_2217a764;
        }
        if (((short)local_8 == 0x2011) || ((short)local_8 == 0x6011)) {
          local_10.lLbound = 0;
          if (((uint)local_8 & 0x4000) == 0) {
            psa = *(SAFEARRAY **)((int)&pVVar12->n1 + 8);
          }
          else {
            psa = (SAFEARRAY *)**(undefined4 **)((int)&pVVar12->n1 + 8);
          }
          local_10.cElements = UVar11;
          SafeArrayRedim(psa,&local_10);
        }
      }
      else {
        param_3 = pVVar5;
        pOVar8 = FUN_22178078(this_00,pVVar12,local_8,(UINT *)&param_3);
        if ((int)param_3 <= (int)pVVar5) {
          if ((int)param_3 < (int)pVVar5) {
            pVVar5 = param_3;
          }
          if (pOVar8 != (BSTR)0x0) {
            if (*(int *)((int)this + 0x108) == 0) {
              param_1 = (**(code **)(**(int **)((int)this + 0xf0) + 0x38))(pOVar8,pVVar5,param_1);
            }
            else {
              param_1 = FUN_2217a62b(this,pOVar8,pVVar5,param_1);
            }
            FUN_221798de(this,0);
            FUN_22178294((short *)pVVar12);
            goto LAB_2217a8dc;
          }
          puVar9 = (undefined4 *)FUN_2217498e(this,&param_1,0x9c52);
          FUN_22174cbf((void *)((int)this + 0xf4),puVar9);
          FUN_2217362b(&param_1);
                    // WARNING: Load size is inaccurate
          iVar6 = *this;
          puVar9 = (undefined4 *)((int)this + 0xf8);
          *puVar9 = 0x9c52;
          uVar10 = CONCAT22((short)((uint)puVar9 >> 0x10),*(undefined2 *)puVar9);
          uVar13 = 0x800a9c52;
          goto LAB_2217a8a6;
        }
        FUN_22178294((short *)pVVar12);
        *(undefined4 *)((int)this + 0xe4) = 0;
      }
    }
    else {
      pVVar5 = param_3;
      if (*(int *)((int)this + 0x108) != 1) goto LAB_2217a797;
      (**(code **)(**(int **)((int)this + 0xf0) + 0x30))(0x4004667f,(int *)((int)this + 0xe4));
      iVar6 = FUN_221798de(this,1);
      if (iVar6 < 0) {
        FUN_22178452(&local_28);
        return iVar6;
      }
      pVVar5 = *(VARIANTARG **)((int)this + 0xe4);
      pVVar12 = param_3;
      if (pVVar5 != (VARIANTARG *)0x0) goto LAB_2217a797;
    }
    FUN_22178452(&local_28);
    iVar6 = 0;
  }
  return iVar6;
}



void __thiscall FUN_2217aa4f(void *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)FUN_22177def((undefined4 *)((int)this + 0xe0));
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    FUN_22179236(*(void **)((int)this + 0xf0),param_1,param_2,(int)this + 0x124,0x10,0);
  }
  else {
    uVar3 = 0;
    pbVar2 = (byte *)FUN_22177def((undefined4 *)((int)this + 0xe0));
    FUN_221791d6(*(void **)((int)this + 0xf0),param_1,param_2,
                 (u_short)*(undefined4 *)((int)this + 0x100),pbVar2,uVar3);
  }
  return;
}



void __thiscall FUN_2217aab0(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(**(int **)((int)this + 0xf0) + 0x40))(param_1,param_2,0);
  return;
}



int * FUN_2217aac8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined3 extraout_var;
  VARIANTARG *pVVar4;
  undefined3 extraout_var_00;
  undefined4 *puVar5;
  LPSTR local_a0 [31];
  byte local_24;
  VARIANTARG local_20;
  uint local_8;
  
  piVar3 = param_1;
  iVar2 = (**(code **)(*(int *)param_1[0xc] + 4))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(piVar3[-0x30] + 0x30))(0x800a9c54,0x9c54,0);
    return piVar3;
  }
  FUN_2217843b(&local_20,0);
  bVar1 = FUN_2217a072((short *)&stack0x00000008);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_22178487(&local_20,&stack0x00000008);
    pVVar4 = FUN_2217845a(&local_20,3);
    if (pVVar4 != (VARIANTARG *)0x0) {
      param_1 = (int *)(**(code **)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)&pVVar4->n1 + 8));
      if ((int)param_1 < 0) goto LAB_2217ac1e;
      goto LAB_2217ab4c;
    }
LAB_2217ab7a:
    piVar3 = (int *)(**(code **)(piVar3[-0x30] + 0x30))(0x800a9c52,0x9c52,0);
  }
  else {
LAB_2217ab4c:
    bVar1 = FUN_2217a072((short *)&stack0x00000018);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      FUN_22178487(&local_20,&stack0x00000018);
      pVVar4 = FUN_2217845a(&local_20,8);
      if (pVVar4 == (VARIANTARG *)0x0) goto LAB_2217ab7a;
      iVar2 = lstrlenW(*(LPCWSTR *)((int)&pVVar4->n1 + 8));
      local_8 = iVar2 * 2 + 2;
      FUN_22171f40(local_a0,local_8);
      WideCharToMultiByte(0,0,*(LPCWSTR *)((int)&pVVar4->n1 + 8),-1,local_a0[0],local_8,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      puVar5 = FUN_221725cd(&local_8,local_a0[0]);
      FUN_22174cbf(piVar3 + 7,puVar5);
      FUN_2217362b(&local_8);
      if ((int)param_1 < 0) {
        if ((local_a0[0] != (LPCSTR)0x0) && ((local_24 & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_a0[0]);
        }
LAB_2217ac1e:
        FUN_22178452(&local_20);
        return param_1;
      }
      if ((local_a0[0] != (LPCSTR)0x0) && ((local_24 & 1) != 0)) {
        HeapFree(DAT_22182030,0,local_a0[0]);
      }
    }
    else {
      puVar5 = FUN_221725cd(&param_1,"");
      FUN_22174cbf(piVar3 + 7,puVar5);
      FUN_2217362b(&param_1);
    }
    piVar3 = (int *)FUN_2217a286(piVar3 + -0x30);
  }
  FUN_22178452(&local_20);
  return piVar3;
}



HRESULT FUN_2217aca5(int param_1,int param_2,ITypeInfo *param_3,uint *param_4)

{
  HRESULT HVar1;
  GUID *pGVar2;
  
  if ((param_3 == (ITypeInfo *)0x0) || (param_4 == (uint *)0x0)) {
    HVar1 = -0x7fffbffd;
  }
  else {
    if (param_2 == 3) {
      pGVar2 = (GUID *)&DAT_22176a88;
    }
    else {
      if (param_2 != 8) {
        return 1;
      }
      pGVar2 = (GUID *)&DAT_22176a98;
    }
    HVar1 = FUN_22180978(param_3,param_4,*(HRESULT *)(param_1 + -0xb8),pGVar2,(ITypeInfoVtbl *)0x0);
  }
  return HVar1;
}



void __thiscall FUN_2217af85(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == *(int *)((int)this + 0x4c)) {
    param_1 = FUN_22177722((int)this + 0x5c);
    if (param_1 != 0) {
      piVar2 = (int *)FUN_22177714(param_1);
      while (piVar1 = piVar2, param_1 != 0) {
        iVar3 = FUN_22179663(piVar1);
        piVar2 = (int *)FUN_2217772a(&param_1);
        if (iVar3 != 0) {
          FUN_22173185((void *)((int)this + 0x5c),(int)piVar1);
        }
      }
    }
  }
  return;
}



void __thiscall FUN_2217b026(void *this,uint param_1,uint param_2)

{
  FUN_2217b1c0(this);
  FUN_2217b138(this,param_1,param_2);
  return;
}



void FUN_2217b041(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1[8];
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      uVar1 = uVar1 | 2;
      while( true ) {
        param_1[8] = uVar1;
        (**(code **)(*param_1 + 0x5c))(param_2);
        if ((param_1[8] & 4U) == 0) break;
        uVar1 = param_1[8] & 0xfffffffb;
      }
      if ((*(byte *)(param_1 + 8) & 8) != 0) {
        (**(code **)(*param_1 + 0x70))(param_2);
        param_1[8] = param_1[8] & 0xfffffff7;
      }
      param_1[8] = param_1[8] & 0xfffffffd;
    }
    else {
      param_1[8] = uVar1 | 4;
    }
  }
  else {
    (**(code **)(*param_1 + 0x5c))(param_2);
  }
  return;
}



void FUN_2217b09d(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x60))(param_2);
  return;
}



void FUN_2217b0ad(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x6c))(param_2);
  return;
}



void FUN_2217b0bd(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x68))(param_2);
  return;
}



void FUN_2217b0cd(int *param_1,undefined4 param_2)

{
  int iVar1;
  u_long local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = ioctlsocket(param_1[1],0x4004667f,&local_8);
    if ((iVar1 != 0) || (local_8 == 0)) break;
    FUN_2217b041(param_1,param_2);
  }
  if ((param_1[8] & 2U) == 0) {
    (**(code **)(*param_1 + 0x70))(param_2);
  }
  else {
    param_1[8] = param_1[8] | 8;
  }
  return;
}



void FUN_2217b128(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 100))(param_2);
  return;
}



void __thiscall FUN_2217b138(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0xffffffff) || (param_2 != 0)) {
    piVar1 = (int *)FUN_22177d02(this,param_1);
    if (piVar1 != (int *)0x0) {
      uVar3 = param_2 & 0xffff;
      uVar2 = param_2 >> 0x10;
      if (uVar3 == 1) {
        FUN_2217b041(piVar1,uVar2);
      }
      else if (uVar3 == 2) {
        FUN_2217b09d(piVar1,uVar2);
      }
      else if (uVar3 == 4) {
        FUN_2217b128(piVar1,uVar2);
      }
      else if (uVar3 == 8) {
        FUN_2217b0bd(piVar1,uVar2);
      }
      else if (uVar3 == 0x10) {
        FUN_2217b0ad(piVar1,uVar2);
      }
      else if (uVar3 == 0x20) {
        FUN_2217b0cd(piVar1,uVar2);
      }
    }
  }
  return;
}



int __fastcall FUN_2217b1c0(void *param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  LPVOID pvVar4;
  undefined3 extraout_var_00;
  int iVar5;
  int iVar3;
  
  iVar1 = (int)param_1 + 0x50;
  iVar5 = 0;
  bVar2 = FUN_22171504(iVar1);
  iVar3 = CONCAT31(extraout_var,bVar2);
  while (iVar3 == 0) {
    pvVar4 = (LPVOID)FUN_2217319d(iVar1);
    FUN_2217b138(param_1,*(uint *)((int)pvVar4 + 8),*(uint *)((int)pvVar4 + 0xc));
    FUN_2217150d(pvVar4);
    iVar5 = iVar5 + 1;
    bVar2 = FUN_22171504(iVar1);
    iVar3 = CONCAT31(extraout_var_00,bVar2);
  }
  return iVar5;
}



void __thiscall FUN_2217b206(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_22171abf(0x1c);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  FUN_221776cb((void *)((int)this + 0x50),iVar1);
  return;
}



void __thiscall FUN_2217b233(void *this,int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_22177722((int)this + 0x50);
  if (local_8 != (void *)0x0) {
    pvVar3 = (LPVOID)FUN_22177714((int)local_8);
    while (pvVar2 = pvVar3, local_8 != (void *)0x0) {
      iVar1 = *(int *)((int)pvVar2 + 8);
      pvVar3 = (LPVOID)FUN_2217772a((int *)&local_8);
      if (iVar1 == param_1) {
        FUN_22173185((void *)((int)this + 0x50),(int)pvVar2);
        FUN_2217150d(pvVar2);
      }
    }
  }
  return;
}



void __thiscall FUN_2217b29b(void *this,int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_8;
  
  local_8 = this;
  local_8 = (void *)FUN_22177722((int)this + 0x50);
  if (local_8 != (void *)0x0) {
    iVar3 = FUN_22177714((int)local_8);
    while (iVar2 = iVar3, local_8 != (void *)0x0) {
      iVar1 = *(int *)(iVar2 + 8);
      iVar3 = FUN_2217772a((int *)&local_8);
      if (iVar1 == param_1) {
        FUN_22173185((void *)((int)this + 0x50),iVar2);
        FUN_221776cb(param_2,iVar2);
      }
    }
  }
  return;
}



void __thiscall FUN_2217b305(void *this,undefined4 param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_22171504((int)this + 0x5c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_221717b6(this,500);
  }
  FUN_221776cb((void *)((int)this + 0x5c),param_1);
  return;
}



void __fastcall FUN_2217b333(int param_1)

{
  FUN_2217a59e(*(int *)(param_1 + 0x50));
  FUN_2217a554(*(int *)(param_1 + 0x50));
  return;
}



void __fastcall FUN_2217b368(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  LPSTR pCVar3;
  CHAR local_d0 [128];
  undefined4 local_50 [16];
  uint local_10;
  uint local_c;
  uint local_8;
  
  FUN_22172701(local_50);
  iVar1 = (**(code **)(*param_1 + 0x28))(local_50,0,0);
  if (iVar1 != 0) {
    local_10 = 0x80;
    iVar1 = FUN_22179094(local_50,local_d0,&local_10,&local_c);
    if (iVar1 != 0) {
      FUN_22174cd3((void *)(param_1[0x14] + 0xd4),local_d0);
      *(uint *)(param_1[0x14] + 0x100) = local_c;
      local_8 = FUN_22178cc6((int)local_50);
      if (local_8 == 0xffffffff) {
        pCVar2 = (LPCSTR)WSAGetLastError();
        pCVar3 = FUN_22179013(pCVar2);
        FUN_22179b26((uint)pCVar2 | 0x800a0000,pCVar3);
      }
      FUN_2217a562(param_1[0x14]);
      iVar1 = FUN_22178fda(local_8);
      if (iVar1 == 0) {
        FUN_22178c4b(local_50,local_8,0);
        FUN_221735e1((int)local_50);
      }
      goto LAB_2217b3d2;
    }
  }
  pCVar2 = (LPCSTR)WSAGetLastError();
  pCVar3 = FUN_22179013(pCVar2);
  FUN_22179b26((uint)pCVar2 | 0x800a0000,pCVar3);
LAB_2217b3d2:
  FUN_221730c0(local_50);
  return;
}



void FUN_2217b45f(undefined4 param_1,LPCSTR param_2)

{
  LPCSTR pCVar1;
  LPSTR pCVar2;
  LPCSTR pCVar3;
  
  pCVar1 = param_2;
  pCVar2 = FUN_22179013(param_2);
  FUN_22177db6(&param_2,pCVar2);
  pCVar3 = (LPCSTR)FUN_22177def(&param_2);
  FUN_22179b26((uint)pCVar1 | 0x800a0000,pCVar3);
  FUN_2217362b(&param_2);
  return;
}



void __thiscall FUN_2217b4a1(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
                    // WARNING: Load size is inaccurate
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
  iVar1 = (**(code **)(*this + 0x10))();
  FUN_221773bb(this,param_1);
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
  if (param_1 == 0) {
                    // WARNING: Load size is inaccurate
    iVar2 = (**(code **)(*this + 0x10))();
    if (iVar2 < iVar1) {
      FUN_2217a577(*(int *)((int)this + 0x50));
      if (iVar2 == 0) {
        FUN_2217a590(*(int *)((int)this + 0x50));
      }
    }
  }
  return;
}



void __thiscall FUN_2217b4f0(void *this,LPCSTR param_1)

{
  int iVar1;
  LPSTR pCVar2;
  LPCSTR pCVar3;
  
  pCVar3 = param_1;
  if (param_1 == (LPCSTR)0x0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x30))(0x4004667f,*(int *)((int)this + 0x40) + 0xe4);
    FUN_221798de(*(void **)((int)this + 0x40),0);
    iVar1 = *(int *)((int)this + 0x40);
    if (*(int *)(iVar1 + 0xf8) != 0) {
      pCVar3 = (LPCSTR)FUN_22177def((undefined4 *)(iVar1 + 0xf4));
      FUN_22179b26(*(uint *)(iVar1 + 0xf8) | 0x800a0000,pCVar3);
    }
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffe;
    if (0 < *(int *)(*(int *)((int)this + 0x40) + 0xe4)) {
      FUN_221798c9(*(int *)((int)this + 0x40));
    }
    recv(*(SOCKET *)((int)this + 4),(char *)&param_1,1,(*(byte *)((int)this + 0x30) & 1) << 1);
  }
  else {
    pCVar2 = FUN_22179013(param_1);
    FUN_22179b26((uint)pCVar3 | 0x800a0000,pCVar2);
  }
  return;
}



void __cdecl FUN_2217b59f(short *param_1)

{
  FUN_22180c92(param_1,u_2c49f800_c2dd_11cf_9ad6_0080c7e7_22182130);
  return;
}



void FUN_2217b5b0(void)

{
  SysAllocString(u_2c49f800_c2dd_11cf_9ad6_0080c7e7_22182130);
  return;
}



undefined4 __cdecl
DLLGetDocumentation(undefined4 param_1,undefined4 param_2,LCID param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_104 [256];
  
                    // 0xb5bc  1  DLLGetDocumentation
  *param_5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182040);
  if ((param_3 != DAT_22182730) || (DAT_22182120 == (HMODULE)0x0)) {
    if ((DAT_22182120 != (HMODULE)0x0) &&
       ((DAT_22182120 != DAT_22182004 && (DAT_22182120 != DAT_22182008)))) {
      FreeLibrary(DAT_22182120);
    }
    DAT_22182120 = FUN_22174a20(param_3);
    DAT_22182730 = param_3;
  }
  iVar1 = LoadStringA(DAT_22182120,param_4 & 0xffff,local_104,0xff);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182040);
  if (0 < iVar1) {
    pWVar2 = FUN_2217bb00(local_104,(LPWSTR)0x0);
    *param_5 = pWVar2;
  }
  return 0;
}



HRESULT __fastcall DllRegisterServer(void *param_1)

{
  HRESULT HVar1;
  int iVar2;
  
                    // 0xb65d  4  DllRegisterServer
  HVar1 = FUN_2217b697(param_1);
  if (-1 < HVar1) {
    iVar2 = FUN_2217569b();
    HVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return HVar1;
}



int DllUnregisterServer(void)

{
  int iVar1;
  
                    // 0xb67a  5  DllUnregisterServer
  iVar1 = FUN_2217b98c();
  if (-1 < iVar1) {
    iVar1 = FUN_2217569b();
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return iVar1;
}



HRESULT __fastcall FUN_2217b697(void *param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  HRESULT HVar4;
  LPCSTR pCVar5;
  int iVar6;
  DWORD DVar7;
  LPCOLESTR szHelpDir;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  undefined2 extraout_var;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  uint uVar8;
  undefined **ppuVar9;
  LPCSTR lpString2;
  uint uVar10;
  CHAR local_228 [259];
  CHAR aCStack_125 [261];
  uint local_20;
  uint local_1c;
  LPWSTR local_18;
  ITypeLib *local_14;
  LPWSTR local_10;
  uint local_c;
  TLIBATTR *local_8;
  
  local_10 = (LPWSTR)0xffffffff;
  local_1c = 0xffffffff;
  uVar8 = 0;
  local_14 = (ITypeLib *)0x0;
  local_c = 0;
  local_18 = (LPWSTR)0x0;
  local_20 = 0;
  if (DAT_22182728 != 0) {
    GetModuleFileNameA(DAT_22182008,local_228,0x104);
    local_18 = FUN_2217bb00(local_228,(LPWSTR)0x0);
    HVar4 = LoadTypeLib(local_18,&local_14);
    if (HVar4 < 0) goto LAB_2217b8ab;
    (*local_14->lpVtbl->GetLibAttr)(local_14,&local_8);
    local_10 = (LPWSTR)(uint)local_8->wMajorVerNum;
    local_1c = (uint)local_8->wMinorVerNum;
    (*local_14->lpVtbl->ReleaseTLibAttr)(local_14,local_8);
    param_1 = extraout_ECX;
  }
  if (DAT_221820f8 != -1) {
    local_8 = (TLIBATTR *)&DAT_221820f8;
    ppuVar9 = &PTR_PTR_221820fc;
    do {
      if (*(int *)*ppuVar9 != 0) {
        if (uVar8 == 0) {
          if (local_c == 0) {
            local_c = FUN_2217cb39(param_1,aCStack_125 + 1,0x104);
            lstrcatA(aCStack_125 + 1,&DAT_2218234a);
            local_c = local_c + 1;
          }
          sVar1 = (short)(local_8->guid).Data1;
          puVar2 = *ppuVar9;
          if (sVar1 == 3) {
            param_1 = *(void **)(puVar2 + 0x20);
          }
          else {
            param_1 = *(void **)(puVar2 + 0x28);
          }
          if (param_1 != (void *)0x0) {
            if (sVar1 == 3) {
              pCVar5 = *(LPCSTR *)(puVar2 + 0x20);
            }
            else {
              pCVar5 = *(LPCSTR *)(puVar2 + 0x28);
            }
            iVar6 = lstrlenA(pCVar5);
            param_1 = extraout_ECX_00;
            if (0 < iVar6) {
              puVar2 = *ppuVar9;
              if ((short)(local_8->guid).Data1 == 3) {
                pCVar5 = *(LPCSTR *)(puVar2 + 0x20);
                lpString2 = *(LPCSTR *)(puVar2 + 0x20);
              }
              else {
                pCVar5 = *(LPCSTR *)(puVar2 + 0x28);
                lpString2 = *(LPCSTR *)(puVar2 + 0x28);
              }
              iVar6 = lstrlenA(pCVar5);
              lstrcpynA(aCStack_125 + local_c + 1,lpString2,iVar6 + 1);
              DVar7 = GetFileAttributesA(aCStack_125 + 1);
              uVar8 = ~DVar7 >> 4 & 1;
              param_1 = extraout_ECX_01;
            }
          }
          if (uVar8 == 0) {
            aCStack_125[local_c + 1] = '\0';
          }
          else {
            aCStack_125[local_c] = '\0';
          }
        }
        sVar1 = (short)(local_8->guid).Data1;
        if (sVar1 == 0) {
LAB_2217b972:
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_2217bbfa(puVar3[1],(LPCSTR)puVar3[2],(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_04;
        }
        else if (sVar1 == 1) {
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_2217bd99("MSWinsock",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],local_10,local_1c,
                       (undefined4 *)PTR_DAT_22182294,(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_03;
        }
        else if (sVar1 == 2) {
          uVar10 = 1;
          iVar6 = FUN_2217cf1f((int *)local_14,*(undefined4 *)*ppuVar9,(undefined2 *)&local_20);
          if (-1 < iVar6) {
            uVar10 = local_20 & 0x20;
          }
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_2217c2bc("MSWinsock",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],puVar3[7],
                       (int *)local_10,local_1c,(HKEY)PTR_DAT_22182294,(HKEY)*puVar3,puVar3[0xd],
                       CONCAT22(extraout_var,*(undefined2 *)(puVar3 + 0x10)),puVar3[3],uVar10);
          param_1 = extraout_ECX_02;
        }
        else if (sVar1 == 3) goto LAB_2217b972;
      }
      local_8 = (TLIBATTR *)(local_8->guid).Data4;
      ppuVar9 = ppuVar9 + 2;
    } while (*(short *)local_8 != -1);
  }
  if (DAT_22182728 != 0) {
    if ((uVar8 == 0) ||
       (szHelpDir = FUN_2217bb00(aCStack_125 + 1,(LPWSTR)0x1), local_10 = szHelpDir, uVar8 == 0)) {
      szHelpDir = (LPCOLESTR)&DAT_22182622;
    }
    HVar4 = RegisterTypeLib(local_14,local_18,szHelpDir);
    if (uVar8 != 0) {
      CoTaskMemFree(local_10);
    }
    (*local_14->lpVtbl->Release)(local_14);
    if (HVar4 < 0) goto LAB_2217b8ab;
  }
  HVar4 = 0;
LAB_2217b8ab:
  SysFreeString(local_18);
  return HVar4;
}



undefined4 FUN_2217b98c(void)

{
  uint cchWideChar;
  short sVar1;
  undefined4 *puVar2;
  HKEY pHVar3;
  ITypeLib *This;
  int iVar4;
  HRESULT HVar5;
  short *psVar6;
  CHAR local_194 [260];
  LPWSTR local_90 [31];
  byte local_14;
  TLIBATTR *local_10;
  ITypeLib *local_c;
  undefined **local_8;
  
  local_10 = (TLIBATTR *)0x0;
  local_c = (ITypeLib *)0x0;
  if (DAT_221820f8 != -1) {
    psVar6 = &DAT_221820f8;
    local_8 = &PTR_PTR_221820fc;
    do {
      puVar2 = (undefined4 *)*local_8;
      pHVar3 = (HKEY)*puVar2;
      if (pHVar3 != (HKEY)0x0) {
        sVar1 = *psVar6;
        if (sVar1 == 0) {
LAB_2217baf2:
          FUN_2217c5e5(pHVar3,(HKEY)0x0);
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          FUN_2217c683("MSWinsock",puVar2[1],puVar2[6],pHVar3);
        }
        else if (sVar1 == 3) goto LAB_2217baf2;
      }
      local_8 = local_8 + 2;
      psVar6 = psVar6 + 4;
    } while (*psVar6 != -1);
  }
  if (PTR_DAT_22182294 != (undefined *)0x0) {
    GetModuleFileNameA(DAT_22182008,local_194,0x104);
    iVar4 = lstrlenA(local_194);
    cchWideChar = iVar4 * 2 + 2;
    FUN_22171f40(local_90,cchWideChar);
    MultiByteToWideChar(0,0,local_194,-1,local_90[0],cchWideChar);
    HVar5 = LoadTypeLibEx(local_90[0],REGKIND_NONE,&local_c);
    if (-1 < HVar5) {
      HVar5 = (*local_c->lpVtbl->GetLibAttr)(local_c,&local_10);
      if (-1 < HVar5) {
        UnRegisterTypeLib((GUID *)PTR_DAT_22182294,local_10->wMajorVerNum,local_10->wMinorVerNum,
                          local_10->lcid,local_10->syskind);
      }
    }
    if ((local_90[0] != (LPCOLESTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_90[0]);
    }
  }
  if (local_10 != (TLIBATTR *)0x0) {
    (*local_c->lpVtbl->ReleaseTLibAttr)(local_c,local_10);
  }
  This = local_c;
  if (local_c != (ITypeLib *)0x0) {
    local_c = (ITypeLib *)0x0;
    (*This->lpVtbl->Release)(This);
  }
  return 0;
}



LPWSTR __cdecl FUN_2217bb00(LPCSTR param_1,LPWSTR param_2)

{
  int cchWideChar;
  
  if ((param_1 != (LPCSTR)0x0) &&
     (cchWideChar = MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)0x0,0), 0 < cchWideChar)) {
    if (((uint)param_2 & 0xff) == 0) {
      param_2 = SysAllocStringLen((OLECHAR *)0x0,cchWideChar - 1);
    }
    else if (((uint)param_2 & 0xff) == 1) {
      param_2 = (LPWSTR)CoTaskMemAlloc(cchWideChar * 2);
    }
    if (param_2 != (LPWSTR)0x0) {
      MultiByteToWideChar(0,0,param_1,-1,param_2,cchWideChar);
      param_2[cchWideChar + -1] = L'\0';
      return param_2;
    }
  }
  return (LPWSTR)0x0;
}



void __cdecl FUN_2217bb6e(ushort param_1,LPWSTR param_2)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  iVar1 = 0x200;
  uID = (uint)param_1;
  hInstance = FUN_22174a20(0);
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_2217bb00(local_204,param_2);
  return;
}



void __cdecl FUN_2217bbaf(undefined4 *param_1,LPSTR param_2)

{
  wsprintfA(param_2,s___08lX__04X__04X__02X_02X__02X_0_2218234c,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  return;
}



undefined4 __cdecl FUN_2217bbfa(undefined4 param_1,LPCSTR param_2,HKEY param_3,int param_4)

{
  int iVar1;
  LSTATUS LVar2;
  DWORD DVar3;
  BYTE local_13c [260];
  CHAR local_38 [40];
  DWORD local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  iVar1 = FUN_2217cb87(param_3);
  if (iVar1 == 0) {
    FUN_2217c5e5(param_3,(HKEY)0x0);
  }
  iVar1 = FUN_2217bbaf(param_3,local_38);
  if (iVar1 != 0) {
    wsprintfA((LPSTR)local_13c,s_CLSID__s_22182380,local_38);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_22182624,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    if (LVar2 == 0) {
      if (param_2 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_2218238c,param_1);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_2);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if ((((LVar2 == 0) &&
           (LVar2 = RegCreateKeyExA(local_c,s_InprocServer32_22182398,0,&DAT_22182628,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10), LVar2 == 0)) &&
          (DVar3 = GetModuleFileNameA(DAT_22182008,(LPSTR)local_13c,0x104), DVar3 != 0)) &&
         (LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,DVar3 + 1), LVar2 == 0)) {
        if (param_4 == 0) {
          RegDeleteValueA(local_8,s_ThreadingModel_221823c4);
        }
        else {
          LVar2 = RegSetValueExA(local_8,s_ThreadingModel_221823b4,0,1,(BYTE *)s_Apartment_221823a8,
                                 10);
          if (LVar2 != 0) goto LAB_2217bd40;
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        return 1;
      }
    }
  }
LAB_2217bd40:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return 0;
}



undefined4 __cdecl
FUN_2217bd99(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7,HKEY param_8,DWORD param_9)

{
  int iVar1;
  LSTATUS LVar2;
  HRESULT HVar3;
  BYTE local_13c [260];
  BYTE local_38 [40];
  int *local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_c = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  iVar1 = FUN_2217bbfa(param_2,param_3,param_8,param_9);
  if (iVar1 != 0) {
    lstrcpyA((LPSTR)local_13c,param_1);
    lstrcatA((LPSTR)local_13c,&DAT_221823d4);
    lstrcatA((LPSTR)local_13c,param_2);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_2218262c,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
    if (LVar2 == 0) {
      if (param_3 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_221823d8,param_2);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_3);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if (((LVar2 == 0) &&
          (LVar2 = RegCreateKeyExA(local_c,s_CLSID_221823e4,0,&DAT_22182630,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9), LVar2 == 0)) &&
         (iVar1 = FUN_2217bbaf(param_8,(LPSTR)local_38), iVar1 != 0)) {
        iVar1 = lstrlenA((LPCSTR)local_38);
        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
        if (LVar2 == 0) {
          RegCloseKey(local_8);
          LVar2 = RegCreateKeyExA(local_c,s_CurVer_221823ec,0,&DAT_22182634,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
          if (LVar2 == 0) {
            wsprintfA((LPSTR)local_13c,s__s__s__ld_221823f4,param_1,param_2,param_4);
            iVar1 = lstrlenA((LPCSTR)local_13c);
            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
            if (LVar2 == 0) {
              RegCloseKey(local_8);
              RegCloseKey(local_c);
              LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_22182638,0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
              if (LVar2 == 0) {
                if (param_3 == (LPCSTR)0x0) {
                  wsprintfA((LPSTR)local_13c,s__s_Object_22182400,param_2);
                }
                else {
                  lstrcpyA((LPSTR)local_13c,param_3);
                }
                iVar1 = lstrlenA((LPCSTR)local_13c);
                LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                if ((LVar2 == 0) &&
                   (LVar2 = RegCreateKeyExA(local_c,s_CLSID_2218240c,0,&DAT_2218263c,0,0x2001f,
                                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9),
                   LVar2 == 0)) {
                  iVar1 = lstrlenA((LPCSTR)local_38);
                  LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                  if (LVar2 == 0) {
                    RegCloseKey(local_8);
                    RegCloseKey(local_c);
                    iVar1 = FUN_2217bbaf(param_8,(LPSTR)local_38);
                    if (iVar1 != 0) {
                      wsprintfA((LPSTR)local_13c,s_CLSID__s_22182414,local_38);
                      LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_22182640,0,
                                              0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
                      if ((LVar2 == 0) &&
                         (LVar2 = RegCreateKeyExA(local_c,s_VersionIndependentProgID_22182420,0,
                                                  &DAT_22182644,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0
                                                  ,&local_8,&param_9), LVar2 == 0)) {
                        wsprintfA((LPSTR)local_13c,s__s__s_2218243c,param_1,param_2);
                        iVar1 = lstrlenA((LPCSTR)local_13c);
                        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                        if (LVar2 == 0) {
                          RegCloseKey(local_8);
                          LVar2 = RegCreateKeyExA(local_c,s_ProgID_22182444,0,&DAT_22182648,0,
                                                  0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                                                  &param_9);
                          if (LVar2 == 0) {
                            wsprintfA((LPSTR)local_13c,s__s__s__ld_2218244c,param_1,param_2,param_4)
                            ;
                            iVar1 = lstrlenA((LPCSTR)local_13c);
                            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                            if (LVar2 == 0) {
                              RegCloseKey(local_8);
                              RegCreateKeyExA(local_c,s_TypeLib_22182458,0,&DAT_2218264c,0,0x2001f,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
                              iVar1 = FUN_2217bbaf(param_7,(LPSTR)local_38);
                              if (iVar1 != 0) {
                                iVar1 = lstrlenA((LPCSTR)local_38);
                                LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                                if (LVar2 == 0) {
                                  RegCloseKey(local_8);
                                  LVar2 = RegCreateKeyExA(local_c,s_Version_22182460,0,&DAT_22182650
                                                          ,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                                                          &local_8,&param_9);
                                  if (LVar2 == 0) {
                                    wsprintfA((LPSTR)local_13c,s__ld__ld_22182468,param_5,param_6);
                                    iVar1 = lstrlenA((LPCSTR)local_13c);
                                    RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                                    HVar3 = CoCreateInstance((IID *)&DAT_22176d80,(LPUNKNOWN)0x0,1,
                                                             (IID *)&DAT_22176d90,&local_10);
                                    if (-1 < HVar3) {
                                      (**(code **)(*local_10 + 0x14))
                                                (local_10,param_8,1,&LAB_22176d70);
                                      (**(code **)(*local_10 + 8))(local_10);
                                    }
                                    RegCloseKey(local_8);
                                    RegCloseKey(local_c);
                                    return 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((local_c != (HKEY)0x0) && (RegCloseKey(local_8), local_c != (HKEY)0x0)) {
      RegCloseKey(local_c);
    }
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x2217c56f)
// WARNING: Removing unreachable block (ram,0x2217c576)
// WARNING: Removing unreachable block (ram,0x2217c581)
// WARNING: Removing unreachable block (ram,0x2217c589)
// WARNING: Removing unreachable block (ram,0x2217c59f)

bool __cdecl
FUN_2217c2bc(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,DWORD param_7,HKEY param_8,HKEY param_9,undefined4 param_10,uint param_11,
            DWORD param_12,int param_13)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LSTATUS LVar4;
  HRESULT HVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined4 local_1d8 [40];
  BYTE local_138 [260];
  CHAR local_34 [40];
  HKEY local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  iVar3 = FUN_2217bd99(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_12);
  if (iVar3 == 0) {
    return false;
  }
  FUN_2217bbaf(param_9,local_34);
  wsprintfA((LPSTR)local_138,s_CLSID__s_22182470,local_34);
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_138,0,0xf003f,&param_8);
  if (LVar4 != 0) {
    return false;
  }
  if (param_13 != 0) {
    param_12 = RegCreateKeyExA(param_8,s_Control_2218247c,0,&DAT_22182654,0,0xf003f,
                               (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
    if (param_12 != 0) goto LAB_2217c5bc;
    RegCloseKey(local_8);
    local_8 = (HKEY)0x0;
  }
  param_12 = RegCreateKeyExA(param_8,s_MiscStatus_22182484,0,&DAT_22182658,0,0xf003f,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
  if (param_12 == 0) {
    local_138[0] = '0';
    local_138[1] = 0;
    param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,2);
    if ((param_12 == 0) &&
       (param_12 = RegCreateKeyExA(local_8,&DAT_22182490,0,&DAT_2218265c,0,0xf003f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_7), param_12 == 0)) {
      wsprintfA((LPSTR)local_138,&DAT_22182494,param_10);
      iVar3 = lstrlenA((LPCSTR)local_138);
      param_12 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
      RegCloseKey(local_c);
      if (param_12 == 0) {
        RegCloseKey(local_8);
        local_8 = (HKEY)0x0;
        if (param_13 != 0) {
          GetModuleFileNameA(DAT_22182008,(LPSTR)local_138,0x104);
          wsprintfA(local_34,&DAT_22182498,param_11 & 0xffff);
          lstrcatA((LPSTR)local_138,local_34);
          param_12 = RegCreateKeyExA(param_8,s_ToolboxBitmap32_221824a0,0,&DAT_22182660,0,0xf003f,
                                     (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
          if (param_12 != 0) goto LAB_2217c5bc;
          iVar3 = lstrlenA((LPCSTR)local_138);
          param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
          if (param_12 != 0) goto LAB_2217c5bc;
        }
        HVar5 = CoCreateInstance((IID *)&DAT_22176d80,(LPUNKNOWN)0x0,1,(IID *)&DAT_22176d90,&param_6
                                );
        if (-1 < HVar5) {
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_22182718;
          do {
            if (0x2218273f < (int)ppuVar6) break;
            puVar2 = (undefined4 *)*ppuVar6;
            *puVar7 = *puVar2;
            param_11 = param_11 + 1;
            ppuVar6 = ppuVar6 + 1;
            puVar7[1] = puVar2[1];
            puVar1 = puVar7 + 3;
            puVar7[2] = puVar2[2];
            puVar7 = puVar7 + 4;
            *puVar1 = puVar2[3];
          } while ((int)param_11 < 4);
          (**(code **)(*param_6 + 0x14))(param_6,param_9,4,local_1d8);
          (**(code **)(*param_6 + 8))(param_6);
        }
      }
    }
  }
LAB_2217c5bc:
  if (param_8 != (HKEY)0x0) {
    RegCloseKey(param_8);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return param_12 == 0;
}



bool __cdecl FUN_2217c5e5(undefined4 *param_1,HKEY param_2)

{
  HKEY pHVar1;
  bool bVar2;
  int iVar3;
  LSTATUS LVar4;
  HKEY__ local_108 [65];
  
  pHVar1 = param_2;
  if (param_2 != (HKEY)0x0) {
    param_2->unused = 1;
  }
  iVar3 = FUN_2217bbaf(param_1,(LPSTR)local_108);
  if ((iVar3 != 0) &&
     (LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID_221824b0,0,0xf003f,&param_2), LVar4 == 0)) {
    iVar3 = FUN_2217cc2b(param_2,local_108);
    if ((iVar3 != 0) && (lstrcatA((LPSTR)local_108,s__InprocServer32_221824b8), pHVar1 != (HKEY)0x0)
       ) {
      pHVar1->unused = 0;
    }
    bVar2 = FUN_2217c7f7(param_2,(LPCSTR)local_108);
    RegCloseKey(param_2);
    return bVar2;
  }
  return false;
}



undefined4 __cdecl FUN_2217c683(undefined4 param_1,undefined4 param_2,int param_3,HKEY param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  undefined3 extraout_var_01;
  undefined4 uVar3;
  LSTATUS LVar4;
  BYTE local_118 [260];
  DWORD local_14;
  HKEY__ local_10;
  int local_c;
  HKEY local_8;
  
  bVar1 = FUN_2217c5e5(param_4,&local_10);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_2217c738:
    uVar3 = 0;
  }
  else {
    if (local_10.unused != 0) {
      wsprintfA((LPSTR)local_118,s__s__s__ld_221824c8,param_1,param_2,param_3);
      bVar1 = FUN_2217c7f7((HKEY)0x80000000,(LPCSTR)local_118);
      if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_2217c738;
      iVar2 = FUN_2217c87b(param_1,param_2,param_3,(int *)&local_8,&local_c);
      if (iVar2 == 0) {
        if (local_c == 0) {
          wsprintfA((LPSTR)local_118,s__s__s_221824d4,param_1,param_2);
          bVar1 = FUN_2217c7f7((HKEY)0x80000000,(LPCSTR)local_118);
          if (CONCAT31(extraout_var_01,bVar1) == 0) goto LAB_2217c738;
        }
      }
      else {
        FUN_2217c93d(param_1,param_2,local_8);
        wsprintfA((LPSTR)local_118,s__s__s_CurVer_221824dc,param_1,param_2);
        LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,0xf003f,&param_4);
        if (LVar4 != 0) {
          LVar4 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,&DAT_22182664,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&param_4,&local_14);
          if (LVar4 != 0) goto LAB_2217c7ef;
          wsprintfA((LPSTR)local_118,s__s__s__ld_221824ec,param_1,param_2,local_8);
          iVar2 = lstrlenA((LPCSTR)local_118);
          RegSetValueExA(param_4,(LPCSTR)0x0,0,1,local_118,iVar2 + 1);
        }
        RegCloseKey(param_4);
      }
    }
LAB_2217c7ef:
    uVar3 = 1;
  }
  return uVar3;
}



bool __cdecl FUN_2217c7f7(HKEY param_1,LPCSTR param_2)

{
  bool bVar1;
  LSTATUS LVar2;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  LVar2 = RegOpenKeyExA(param_1,param_2,0,0xf003f,&local_8);
  if (LVar2 == 0) {
    do {
      local_c = 0x104;
      LVar2 = RegEnumKeyExA(local_8,0,local_110,&local_c,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                            (PFILETIME)0x0);
      if (LVar2 != 0) break;
      bVar1 = FUN_2217c7f7(local_8,local_110);
    } while (CONCAT31(extraout_var,bVar1) != 0);
    RegCloseKey(local_8);
    LVar2 = RegDeleteKeyA(param_1,param_2);
    bVar1 = LVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



undefined4 __cdecl
FUN_2217c87b(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

{
  LSTATUS LVar1;
  int iVar2;
  CHAR local_114 [260];
  HKEY local_10;
  HKEY local_c;
  undefined4 local_8;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 1;
  }
  local_8 = 0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,&DAT_22182668,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    iVar2 = 0x20;
    do {
      if (param_3 != iVar2) {
        wsprintfA(local_114,s__s__s__ld_221824f8,param_1,param_2,iVar2);
        LVar1 = RegOpenKeyExA(local_c,local_114,0,0xf003f,&local_10);
        if (LVar1 == 0) {
          local_8 = 1;
          if (param_4 != (int *)0x0) {
            *param_4 = iVar2;
          }
          RegCloseKey(local_10);
          break;
        }
      }
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    RegCloseKey(local_c);
  }
  else {
    local_8 = 0;
  }
  return local_8;
}



bool __cdecl FUN_2217c93d(undefined4 param_1,undefined4 param_2,HKEY param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  wsprintfA(local_110,s__s__s__ld_22182504,param_1,param_2,param_3);
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,local_110,0,0xf003f,&param_3);
  if (LVar2 == 0) {
    wsprintfA(local_110,s__s__s_22182510,param_1,param_2);
    FUN_2217c7f7((HKEY)0x80000000,local_110);
    uVar3 = RegCreateKeyExA((HKEY)0x80000000,local_110,0,&DAT_2218266c,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if (uVar3 == 0) {
      bVar1 = FUN_2217ca14(param_3,local_8);
      uVar3 = (uint)(CONCAT31(extraout_var,bVar1) == 0);
    }
    RegCloseKey(param_3);
    RegCloseKey(local_8);
    bVar1 = uVar3 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



bool __cdecl FUN_2217ca14(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  int iVar2;
  bool bVar3;
  BYTE local_12c [260];
  _FILETIME local_28;
  DWORD local_20;
  DWORD local_1c;
  HKEY local_18;
  LSTATUS local_14;
  HKEY local_10;
  DWORD local_c;
  DWORD local_8;
  
  local_8 = 0x104;
  LVar1 = RegQueryValueExA(param_1,(LPCSTR)0x0,(LPDWORD)0x0,&local_1c,local_12c,&local_8);
  if ((LVar1 == 0) &&
     (local_14 = RegSetValueExA(param_2,(LPCSTR)0x0,0,local_1c,local_12c,local_8), local_14 == 0)) {
    local_c = 0;
    iVar2 = RegEnumKeyExA(param_1,0,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          &local_28);
    while( true ) {
      if ((iVar2 != 0) ||
         (local_14 = RegOpenKeyExA(param_1,(LPCSTR)local_12c,0,0xf003f,&local_10), local_14 != 0))
      goto LAB_2217cb25;
      local_14 = RegCreateKeyExA(param_2,(LPCSTR)local_12c,0,&DAT_22182670,0,0x2001f,
                                 (LPSECURITY_ATTRIBUTES)0x0,&local_18,&local_20);
      if (local_14 != 0) break;
      FUN_2217ca14(local_10,local_18);
      RegCloseKey(local_10);
      RegCloseKey(local_18);
      local_c = local_c + 1;
      iVar2 = RegEnumKeyExA(param_1,local_c,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_28);
    }
    RegCloseKey(local_10);
LAB_2217cb25:
    bVar3 = local_14 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



uint __thiscall FUN_2217cb39(void *this,LPSTR param_1,uint param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_c = DAT_22182518;
  _uStack_8 = CONCAT22((short)((uint)this >> 0x10),DAT_2218251c);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    UVar2 = GetWindowsDirectoryA(param_1,param_2);
    iVar3 = lstrlenA((LPCSTR)&local_c);
    uVar1 = UVar2 + iVar3;
    if (uVar1 < param_2) {
      lstrcatA(param_1,(LPCSTR)&local_c);
    }
  }
  return uVar1;
}



undefined4 __cdecl FUN_2217cb87(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_214 [260];
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = FUN_2217bbaf(param_1,local_110);
  if (iVar1 != 0) {
    wsprintfA(local_214,s_CLSID__s_22182520,local_110);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,local_214,0,&DAT_22182674,0,0x20019,
                            (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,s_Implemented_Categories_2218252c,0,0xf003f,&local_8);
      RegCloseKey(param_1);
      if (LVar2 == 0) {
        RegCloseKey(local_8);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_2217cc2b(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [260];
  
  wsprintfA(local_108,s__s_InprocServer_22182544,param_2);
  LVar1 = RegOpenKeyExA(param_1,local_108,0,0xf003f,&param_2);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(param_2);
  return 1;
}



char * __cdecl FUN_2217cc7d(LPCSTR param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lstrlenA(param_1);
  pcVar2 = param_1 + iVar1 + -1;
  while( true ) {
    if (pcVar2 < param_1) {
      return (char *)0x0;
    }
    if (*pcVar2 == '.') break;
    pcVar2 = pcVar2 + -1;
  }
  return pcVar2 + 1;
}



int FUN_2217cca0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  CHAR local_170 [260];
  undefined4 local_6c [2];
  uint local_64;
  uint local_60;
  undefined4 local_38 [2];
  uint local_30;
  uint local_2c;
  
  iVar4 = 2;
  DVar2 = GetModuleFileNameA(DAT_22182008,local_170,0x104);
  if (((DVar2 != 0) && (iVar3 = FUN_2217cd38(local_170,local_6c), iVar3 != 0)) &&
     (iVar3 = FUN_2217cd38(param_1,local_38), iVar3 != 0)) {
    if (param_2 == 0) {
      if ((local_64 == local_30) && (local_60 == local_2c)) {
        iVar4 = 0;
      }
      else {
        bVar6 = local_64 < local_30;
        if (local_64 == local_30) {
          bVar6 = local_2c < local_60;
        }
        iVar4 = (-(uint)bVar6 & 0xfffffffe) + 1;
      }
    }
    else {
      uVar1 = (ushort)(local_64 >> 0x10);
      uVar5 = (ushort)(local_30 >> 0x10);
      if (uVar5 == uVar1) {
        iVar4 = 0;
      }
      else {
        iVar4 = (-(uint)(uVar5 < uVar1) & 0xfffffffe) + 1;
      }
    }
  }
  return iVar4;
}



int FUN_2217cd38(undefined4 param_1,undefined4 *param_2)

{
  SIZE_T dwBytes;
  int iVar1;
  uint uVar2;
  LPVOID lpMem;
  undefined4 *puVar3;
  undefined4 *local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  lpMem = (LPVOID)0x0;
  puVar3 = param_2;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  dwBytes = FUN_2217cde6(param_1,&local_c);
  if (dwBytes != 0) {
    lpMem = HeapAlloc(DAT_22182030,0,dwBytes);
    if (lpMem == (LPVOID)0x0) {
      return local_8;
    }
    local_8 = FUN_2217ce49(param_1,local_c,dwBytes,lpMem);
    if ((local_8 != 0) &&
       (local_8 = FUN_2217ceb4(lpMem,&DAT_22182554,&local_14,&local_10), local_8 != 0)) {
      for (uVar2 = local_10 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_2 = *local_14;
        local_14 = local_14 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar2 = local_10 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)local_14;
        local_14 = (undefined4 *)((int)local_14 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  if (lpMem != (LPVOID)0x0) {
    HeapFree(DAT_22182030,0,lpMem);
  }
  return local_8;
}



int __cdecl FUN_2217cde6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_22182740 == (FARPROC)0x0) {
    if ((DAT_22182038 == (HMODULE)0x0) &&
       (DAT_22182038 = LoadLibraryA(s_VERSION_DLL_22182558), DAT_22182038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_22182740 = GetProcAddress(DAT_22182038,s_GetFileVersionInfoSizeA_22182564);
    if (DAT_22182740 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  iVar1 = (*DAT_22182740)(param_1,param_2);
  return iVar1;
}



int __cdecl
FUN_2217ce49(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_2218273c == (FARPROC)0x0) {
    if ((DAT_22182038 == (HMODULE)0x0) &&
       (DAT_22182038 = LoadLibraryA(s_VERSION_DLL_2218257c), DAT_22182038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_2218273c = GetProcAddress(DAT_22182038,s_GetFileVersionInfoA_22182588);
    if (DAT_2218273c == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  iVar1 = (*DAT_2218273c)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl
FUN_2217ceb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_22182738 == (FARPROC)0x0) {
    if ((DAT_22182038 == (HMODULE)0x0) &&
       (DAT_22182038 = LoadLibraryA(s_VERSION_DLL_2218259c), DAT_22182038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_22182738 = GetProcAddress(DAT_22182038,s_VerQueryValueA_221825a8);
    if (DAT_22182738 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  iVar1 = (*DAT_22182738)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl FUN_2217cf1f(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = param_3;
  if ((param_1 == (int *)0x0) || (param_3 == (undefined2 *)0x0)) {
    iVar2 = -0x7fffbffd;
  }
  else {
    iVar2 = *param_1;
    *param_3 = 0;
    iVar2 = (**(code **)(iVar2 + 0x18))(param_1,param_2,&param_1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&param_3);
      if (-1 < iVar2) {
        *puVar1 = param_3[0x1b];
        (**(code **)(*param_1 + 0x4c))(param_1,param_3);
      }
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return iVar2;
}



undefined4 * __thiscall FUN_2217cf86(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_22172590(this,param_1,this);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_22176bd0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_22176bb8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_22176b78;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_2217cfc6(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_22174298;
  InterlockedDecrement(&DAT_22182110);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_2217cffa(void *this,byte param_1)

{
  FUN_2217d022((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2217d022(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_22176bb8;
  param_1[5] = &PTR_LAB_22176b78;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_2217d911((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_22174298;
  InterlockedDecrement(&DAT_22182110);
  return;
}



undefined4 __thiscall FUN_2217d07c(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  
  *param_2 = 0;
  if (*param_1 == -0x4e694d73) {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = &DAT_22176db0;
    piVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == (char)*piVar4;
      pcVar3 = pcVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) goto LAB_2217d0a9;
LAB_2217d0c1:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x14U);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = piVar4;
    uVar1 = 0;
  }
  else {
LAB_2217d0a9:
    if (*param_1 == 0x1e44665) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = &DAT_22176da0;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == (char)*piVar4;
        pcVar3 = pcVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (bVar5);
      if (bVar5) goto LAB_2217d0c1;
    }
    uVar1 = FUN_22173339(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_2217d0ef(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *(int **)(param_1 + 4) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return 0;
}



uint FUN_2217d11c(int *param_1,HWND param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_2217d861((int)(param_1 + -5));
  if (-1 < (int)uVar1) {
    uVar1 = FUN_2217da06((int)(param_1 + -5));
    if (-1 < (int)uVar1) {
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
        SetParent((HWND)param_1[2],param_2);
        param_1[5] = param_1[5] | 1;
      }
      (**(code **)(*param_1 + 0x24))(param_1,param_3);
      ShowWindow((HWND)param_1[2],5);
      uVar1 = 0;
    }
  }
  return uVar1;
}



int FUN_2217d16e(int param_1)

{
  int local_8;
  
  local_8 = 0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
  SendMessageA(*(HWND *)(param_1 + 8),0x467,0,(LPARAM)&local_8);
  if (-1 < local_8) {
    if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffa;
    local_8 = 0;
  }
  return local_8;
}



undefined4 FUN_2217d1b6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  tagRECT local_14;
  
  FUN_2217d861(param_1 + -0x14);
  puVar4 = param_2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_2217bb6e(*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0xc) * 2] + 0x1a),
                       (LPWSTR)0x1);
  param_2[1] = uVar1;
  uVar1 = FUN_2217bb6e(*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0xc) * 2] + 0x1c),
                       (LPWSTR)0x1);
  param_2[4] = uVar1;
  pWVar2 = FUN_2217bb00(*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0xc) * 2] + 0x20),
                        (LPWSTR)0x1);
  iVar3 = *(int *)(param_1 + 0xc);
  param_2[5] = pWVar2;
  param_2[6] = *(undefined4 *)((&PTR_PTR_221820fc)[iVar3 * 2] + 0x24);
  if (((param_2[1] == 0) || (param_2[4] == 0)) || (pWVar2 == (LPWSTR)0x0)) {
    if ((LPVOID)param_2[4] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_2[4]);
      param_2[4] = 0;
    }
    if ((LPVOID)param_2[5] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_2[5]);
      param_2[5] = 0;
    }
    if ((LPVOID)param_2[1] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_2[1]);
      param_2[1] = 0;
    }
    uVar1 = 0x8007000e;
  }
  else {
    if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
      GetWindowRect(*(HWND *)(param_1 + 8),&local_14);
      param_2[2] = local_14.right - local_14.left;
      param_2[3] = local_14.bottom - local_14.top;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_2217d2a6(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (((uint)param_1[5] >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  FUN_2217d911((int)(param_1 + -5));
  uVar4 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = HeapAlloc(DAT_22182030,0,param_2 << 2);
    param_1[4] = (int)pvVar3;
    if (pvVar3 == (LPVOID)0x0) {
      uVar2 = 0x8007000e;
    }
    else {
      if (param_2 != 0) {
        do {
          piVar1 = *(int **)(param_3 + uVar4 * 4);
          *(int **)(param_1[4] + uVar4 * 4) = piVar1;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
      uVar2 = 0;
      param_1[6] = param_2;
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        uVar2 = FUN_2217da06((int)(param_1 + -5));
      }
    }
  }
  return uVar2;
}



int FUN_2217d3a0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  if (*(HWND *)(param_1 + 8) == (HWND)0x0) {
    local_8 = -0x7fff0001;
  }
  else {
    SendMessageA(*(HWND *)(param_1 + 8),0x465,0,(LPARAM)&local_8);
    if (-1 < local_8) {
      uVar1 = *(uint *)(param_1 + 0x14);
      if ((uVar1 >> 1 & 1) != 0) {
        *(uint *)(param_1 + 0x14) = uVar1 & 0xfffffffd;
        piVar2 = *(int **)(param_1 + 4);
        if ((piVar2 != (int *)0x0) && ((uVar1 & 4) == 0)) {
          (**(code **)(*piVar2 + 0xc))(piVar2,1);
        }
      }
      local_8 = 0;
    }
  }
  return local_8;
}



int FUN_2217d3fe(int param_1,LPCWSTR param_2)

{
  uint cbMultiByte;
  int iVar1;
  int iVar2;
  CHAR local_190 [260];
  LPSTR local_8c [31];
  byte local_10;
  LPCSTR local_c;
  uint local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  local_c = FUN_2217cc7d(*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0xc) * 2] + 0x20));
  if (local_c != (char *)0x0) {
    iVar2 = lstrcmpiA(local_c,&DAT_221825b8);
    if (iVar2 == 0) {
      lstrcpyA(local_190,*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      iVar2 = FUN_2217ff48(local_190,
                           *(undefined4 *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x24),
                           &param_1);
      local_8 = (uint)(-1 < iVar2);
      if (param_1 != 0) goto LAB_2217d544;
      iVar2 = lstrlenW(param_2);
      local_8 = iVar2 * 2 + 2;
      FUN_22171f40(local_8c,local_8);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_221825bc);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      local_8 = FUN_221804fb(*(undefined4 *)(iVar1 + 8),local_190,0xf,
                             *(undefined4 *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x24))
      ;
    }
    else {
      iVar2 = lstrcmpiA(local_c,&DAT_221825c0);
      if (iVar2 != 0) goto LAB_2217d544;
      iVar2 = lstrlenW(param_2);
      cbMultiByte = iVar2 * 2 + 2;
      FUN_22171f40(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_221825c4);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      lstrcatA(local_190,s_>LangRef_221825c8);
      local_8 = WinHelpA(*(HWND *)(iVar1 + 8),local_190,1,
                         *(ULONG_PTR *)((&PTR_PTR_221820fc)[*(int *)(iVar1 + 0xc) * 2] + 0x24));
    }
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_8c[0]);
    }
  }
LAB_2217d544:
  return (-(uint)(local_8 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 __cdecl FUN_2217d7ce(HWND param_1,HWND param_2,UINT param_3)

{
  uint uVar1;
  HWND hWnd;
  HWND pHVar2;
  
  uVar1 = SendMessageA(param_1,0x87,0,0);
  pHVar2 = param_2;
  if ((uVar1 & 6) == 0) {
    while (hWnd = pHVar2, hWnd != param_1) {
      pHVar2 = GetParent(hWnd);
      param_2 = hWnd;
    }
    do {
      param_2 = GetWindow(param_2,param_3);
      if (param_2 == (HWND)0x0) {
        return 1;
      }
      uVar1 = GetWindowLongA(param_2,-0x10);
    } while ((uVar1 & 0x18010000) != 0x10010000);
  }
  return 0;
}



undefined4 FUN_2217d837(int param_1,WPARAM param_2)

{
  undefined4 local_8;
  
  local_8 = 0x80004001;
  SendMessageA(*(HWND *)(param_1 + 8),0x466,param_2,(LPARAM)&local_8);
  return local_8;
}



uint __fastcall FUN_2217d861(int param_1)

{
  LPCSTR lpName;
  HINSTANCE pHVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPCDLGTEMPLATEA lpTemplate;
  HWND hWndParent;
  DWORD DVar2;
  code *lpDialogFunc;
  LPCSTR lpType;
  LPARAM dwInitParam;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    lpType = (LPCSTR)0x5;
    lpName = (LPCSTR)(uint)*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x20) * 2] + 0x18);
    pHVar1 = FUN_2217da66(param_1);
    hResInfo = FindResourceA(pHVar1,lpName,lpType);
    if (hResInfo != (HRSRC)0x0) {
      pHVar1 = FUN_2217da66(param_1);
      hResData = LoadResource(pHVar1,hResInfo);
      if ((hResData != (HGLOBAL)0x0) &&
         (lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData), lpTemplate != (LPCDLGTEMPLATEA)0x0))
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
        dwInitParam = 0;
        lpDialogFunc = FUN_2217d976;
        DAT_22182744 = param_1;
        hWndParent = FUN_221801d3();
        CreateDialogIndirectParamA(DAT_22182008,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
        DAT_22182744 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
        if (*(int *)(param_1 + 0x1c) != 0) {
          return 0;
        }
      }
    }
    DVar2 = GetLastError();
    if (DVar2 != 0) {
      DVar2 = GetLastError();
      return DVar2 & 0xffff | 0x80070000;
    }
  }
  return 0;
}



void __fastcall FUN_2217d911(int param_1)

{
  int *piVar1;
  uint uVar2;
  int local_4;
  
  local_4 = param_1;
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (*(HWND *)(param_1 + 0x1c) != (HWND)0x0)) {
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x467,0,(LPARAM)&local_4);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x24) + uVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x2c));
    }
    HeapFree(DAT_22182030,0,*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 FUN_2217d976(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 == (int *)0xffffffff) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      SetWindowLongA(param_1,-0x15,(LONG)DAT_22182744);
      piVar1 = DAT_22182744;
      DAT_22182744[7] = (int)param_1;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



void __thiscall FUN_2217d9c0(void *this,uint *param_1)

{
  *param_1 = 0;
  FUN_2217d9d0(this,param_1);
  return;
}



undefined4 __thiscall FUN_2217d9d0(void *this,uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = *param_1;
  if (uVar2 < *(uint *)((int)this + 0x2c)) {
    piVar3 = (int *)(*(int *)((int)this + 0x24) + uVar2 * 4);
    do {
      if (*piVar3 != 0) {
        uVar1 = *(undefined4 *)(*(int *)((int)this + 0x24) + uVar2 * 4);
        *param_1 = uVar2 + 1;
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x2c));
  }
  *param_1 = 0xffffffff;
  return 0;
}



undefined4 __fastcall FUN_2217da06(int param_1)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x464,0,(LPARAM)&local_8);
  if ((*(uint *)(param_1 + 0x28) >> 1 & 1) != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffd;
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1,1);
    }
  }
  return local_8;
}



void __fastcall FUN_2217da4b(int param_1)

{
  int *piVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x2217da74)

HINSTANCE __fastcall FUN_2217da66(int param_1)

{
  int *piVar1;
  HINSTANCE pHVar2;
  
  pHVar2 = DAT_22182004;
  if (DAT_22182004 == (HINSTANCE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    if ((DAT_22182194 == 0) && (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_22182190);
      DAT_22182194 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    pHVar2 = FUN_22174a20(0);
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_2217dac6(void *this,byte param_1)

{
  FUN_2217366f((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_2217daee(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 + -0x44) * 2] + 0x4a);
  if (uVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = (uint)uVar1;
    pvVar5 = CoTaskMemAlloc((uint)uVar1 << 4);
    if (pvVar5 == (LPVOID)0x0) {
      return 0x8007000e;
    }
    iVar2 = *(int *)(param_1 + -0x44);
    uVar3 = *param_2;
    param_2[1] = (uint)pvVar5;
    param_2 = (uint *)0x0;
    iVar2 = *(int *)((&PTR_PTR_221820fc)[iVar2 * 2] + 0x4c);
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        puVar4 = *(undefined4 **)(iVar2 + uVar6 * 4);
        puVar7 = (undefined4 *)(uVar6 * 0x10 + (int)pvVar5);
        param_2 = (uint *)((int)param_2 + 1);
        *puVar7 = *puVar4;
        uVar6 = (uint)param_2 & 0xffff;
        puVar7[1] = puVar4[1];
        puVar7[2] = puVar4[2];
        puVar7[3] = puVar4[3];
      } while (uVar6 < uVar3);
    }
  }
  return 0;
}



int __thiscall FUN_2217db70(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HWND hWndParent;
  CHAR local_94 [128];
  DWORD local_14;
  short local_e;
  BOOL local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0xa0) != 0) {
    return *(int *)((int)this + 0xa0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (*(short *)((&PTR_PTR_221820fc)[*(int *)((int)this + 0x14) * 2] + 0x48) == 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x50))();
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
      return 0;
    }
    *(undefined2 *)((&PTR_PTR_221820fc)[*(int *)((int)this + 0x14) * 2] + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
                    // WARNING: Load size is inaccurate
  local_14 = 0;
  local_8 = 0;
  local_94[0] = '\0';
  iVar1 = (**(code **)(*this + 0x58))(&local_8,&local_14,local_94);
  if (iVar1 == 0) {
    return 0;
  }
  local_8 = local_8 | 0x44000000;
  if (*(int *)((int)this + 0xa4) == 0) {
    pHVar2 = FUN_221801d3();
    *(HWND *)((int)this + 0xa4) = pHVar2;
  }
  local_c = IsWindowVisible(*(HWND *)((int)this + 0xa4));
  if ((*(int *)((&PTR_PTR_221820fc)[*(int *)((int)this + 0x14) * 2] + 0x58) == 0) ||
     (pHVar2 = FUN_221801d3(), *(HWND *)((int)this + 0xa4) == pHVar2)) {
    if (local_c != 0) goto LAB_2217dcc7;
  }
  else {
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
      iVar1 = FUN_2217e184(this,0xfffffd3e,0xb,(LONG *)&local_e);
      if ((iVar1 == 0) || (local_e == 0)) {
        *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
      }
      *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) | 2;
    }
    if ((*(byte *)((int)this + 0xbc) & 1) != 0) goto LAB_2217dcc7;
    pHVar2 = FUN_22180131((uint)(local_c == 0),*(HWND *)((int)this + 0xa4),param_1,param_2,
                          (int *)((int)this + 0x88));
    *(HWND *)((int)this + 0xb4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      return 0;
    }
    SetWindowLongA(pHVar2,-0x15,(LONG)this);
  }
  local_8 = local_8 | 0x10000000;
LAB_2217dcc7:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  pHVar2 = *(HWND *)((int)this + 0xb4);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  hWndParent = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    hWndParent = *(HWND *)((int)this + 0xa4);
  }
  DAT_22182748 = this;
  pHVar2 = CreateWindowExA(local_14,*(LPCSTR *)
                                     ((&PTR_PTR_221820fc)[*(int *)((int)this + 0x14) * 2] + 0x44),
                           local_94,local_8,~-(uint)(pHVar2 != (HWND)0x0) & param_1,
                           ~-(uint)(pHVar2 != (HWND)0x0) & param_2,*(int *)((int)this + 0x88),
                           *(int *)((int)this + 0x8c),hWndParent,(HMENU)0x0,DAT_22182008,(LPVOID)0x0
                          );
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffef;
  *(HWND *)((int)this + 0xa0) = pHVar2;
  DAT_22182748 = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (*(int *)((int)this + 0xa0) != 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x78))();
    if (iVar1 == 0) {
      DestroyWindow(*(HWND *)((int)this + 0xa0));
      return 0;
    }
    if (local_c != 0) {
      SetWindowPos(*(HWND *)((int)this + 0xa0),(HWND)0x0,0,0,0,0,(uint)(-(param_3 != 0) & 8U | 0x47)
                  );
    }
  }
  return *(int *)((int)this + 0xa0);
}



void __thiscall FUN_2217dda4(void *this,HWND param_1)

{
  HWND hWndChild;
  
  if (*(HWND *)((int)this + 0xa4) != param_1) {
    *(HWND *)((int)this + 0xa4) = param_1;
    if (*(HWND *)((int)this + 0xa0) != (HWND)0x0) {
      hWndChild = *(HWND *)((int)this + 0xa0);
      if (*(HWND *)((int)this + 0xb4) != (HWND)0x0) {
        hWndChild = *(HWND *)((int)this + 0xb4);
      }
      SetParent(hWndChild,param_1);
    }
  }
  return;
}



LRESULT FUN_2217ddd5(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4)

{
  int *piVar1;
  HWND hWnd;
  int *piVar2;
  int iVar3;
  HDC pHVar4;
  LRESULT LVar5;
  tagPAINTSTRUCT local_58;
  tagRECT local_18;
  undefined4 local_8;
  
  hWnd = param_1;
  piVar2 = (int *)GetWindowLongA(param_1,-0x15);
  piVar1 = DAT_22182748;
  param_1 = (HWND)0x0;
  if (piVar2 == (int *)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)DAT_22182748);
    piVar1[0x28] = (int)hWnd;
    piVar2 = piVar1;
  }
  else if (piVar2 == (int *)0xffffffff) {
    LVar5 = DefWindowProcA(hWnd,param_2,(WPARAM)param_3,param_4);
    return LVar5;
  }
  (**(code **)(*piVar2 + 4))();
  piVar1 = (int *)piVar2[0x20];
  if ((piVar1 != (int *)0x0) &&
     (iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,hWnd,param_2,param_3,param_4,&param_1,&local_8),
     iVar3 == 1)) goto LAB_2217deee;
  if (param_2 == 2) {
    (**(code **)(*piVar2 + 0x5c))();
LAB_2217df06:
    param_1 = (HWND)(**(code **)(*piVar2 + 0x4c))(param_2,param_3,param_4);
  }
  else {
    if (param_2 != 0xf) goto LAB_2217df06;
    pHVar4 = param_3;
    if (param_3 == (HDC)0x0) {
      pHVar4 = BeginPaint(hWnd,&local_58);
    }
    GetClientRect(hWnd,&local_18);
    (**(code **)(*piVar2 + 0x48))(piVar2,1,pHVar4,&local_18,0,0,1);
    if (param_3 == (HDC)0x0) {
      EndPaint(hWnd,&local_58);
    }
  }
  if (param_2 == 5) {
    if ((*(byte *)(piVar2 + 0x2c) & 0x10) == 0) {
      (**(code **)(*piVar2 + 0x34))();
    }
  }
  else if (6 < param_2) {
    if (param_2 < 9) {
      if (((*(byte *)(piVar2 + 0x2c) & 2) != 0) &&
         (piVar1 = (int *)piVar2[0x1c], piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x20))(piVar1,param_2 == 7);
      }
    }
    else if (param_2 == 0x82) {
      SetWindowLongA(hWnd,-0x15,-1);
      piVar2[0x29] = 0;
      piVar2[0x28] = 0;
    }
  }
  piVar1 = (int *)piVar2[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,hWnd,param_2,param_3,param_4,&param_1,local_8);
  }
LAB_2217deee:
  (**(code **)(*piVar2 + 8))();
  return (LRESULT)param_1;
}



bool __thiscall FUN_2217df70(void *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  HWND hWnd;
  
  if (*(int *)((int)this + 0xac) == 0) {
    if ((*(uint *)((int)this + 0xb0) >> 1 & 1) != 0) {
      if (param_1 == 0) {
        hWnd = *(HWND *)((int)this + 0xa4);
      }
      else {
        hWnd = *(HWND *)((int)this + 0xa0);
      }
      if (((*(uint *)((int)this + 0xb0) & 8) == 0) && (param_1 != 0)) {
        iVar1 = FUN_2217eb82(this,-4);
        return -1 < iVar1;
      }
      pHVar2 = SetFocus(hWnd);
      return (bool)('\x01' - (pHVar2 != hWnd));
    }
  }
  else if ((((*(byte *)((int)this + 0xb0) & 8) != 0) || (param_1 == 0)) ||
          (iVar1 = FUN_2217eb82(this,-4), -1 < iVar1)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xac) + 0x58))(*(int **)((int)this + 0xac),param_1);
    return iVar1 == 0;
  }
  return false;
}



bool __cdecl FUN_2217e00b(HWND param_1,uint param_2,WPARAM param_3,HWND param_4,LRESULT *param_5)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = (HWND)0x0;
  *param_5 = 0;
  if (param_2 < 0x3a) {
    if (param_2 == 0x39) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[2].unused;
      }
      goto LAB_2217e042;
    }
    if (param_2 == 0x2b) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[5].unused;
      }
      goto LAB_2217e042;
    }
    if (param_2 == 0x2c) {
      if (param_4 != (HWND)0x0) {
        hWnd = GetDlgItem(param_1,param_4[1].unused);
      }
      goto LAB_2217e042;
    }
    if (param_2 == 0x2d) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[3].unused;
      }
      goto LAB_2217e042;
    }
    if ((param_2 < 0x2e) || (0x2f < param_2)) goto LAB_2217e042;
  }
  else {
    if (param_2 == 0x4e) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4->unused;
      }
      goto LAB_2217e042;
    }
    if ((param_2 != 0x111) &&
       ((param_2 < 0x114 ||
        ((0x115 < param_2 &&
         ((param_2 < 0x133 ||
          ((0x138 < param_2 &&
           ((param_2 != 0x210 || (((short)param_3 != 1 && ((short)param_3 != 2))))))))))))))
    goto LAB_2217e042;
  }
  hWnd = param_4;
LAB_2217e042:
  if (hWnd != (HWND)0x0) {
    LVar1 = SendMessageA(hWnd,param_2 + 0x2000,param_3,(LPARAM)param_4);
    *param_5 = LVar1;
  }
  return hWnd != (HWND)0x0;
}



HWND FUN_2217e0fb(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  HWND lParam;
  bool bVar1;
  void *this;
  undefined3 extraout_var;
  LONG LVar2;
  undefined3 extraout_var_00;
  
  lParam = param_4;
  if (param_2 == 5) {
    LVar2 = GetWindowLongA(param_1,-0x15);
    if (LVar2 != 0) {
      MoveWindow(*(HWND *)(LVar2 + 0xa0),0,0,(uint)lParam & 0xffff,(uint)lParam >> 0x10,1);
    }
  }
  else if ((param_2 == 7) && (this = (void *)GetWindowLongA(param_1,-0x15), this != (void *)0x0)) {
    bVar1 = FUN_2217df70(this,1);
    return (HWND)CONCAT31(extraout_var,bVar1);
  }
  bVar1 = FUN_2217e00b(param_1,param_2,param_3,lParam,(LRESULT *)&param_4);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    param_4 = (HWND)DefWindowProcA(param_1,param_2,param_3,(LPARAM)lParam);
  }
  return param_4;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_2217e184(void *this,undefined4 param_1,ushort param_2,LONG *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  HRESULT HVar4;
  uint uVar5;
  int *piVar6;
  _union_2685 *p_Var7;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24 [16];
  _union_2683 local_14;
  
  piVar6 = *(int **)((int)this + 0x84);
  local_14.n2.vt = 0;
  local_14._8_4_ = 0;
  local_24._0_2_ = 0;
  local_24._8_4_ = 0;
  if (piVar6 == (int *)0x0) {
    puVar2 = *(undefined4 **)((int)this + 0x6c);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_22174620,(int *)((int)this + 0x84));
    }
    piVar6 = *(int **)((int)this + 0x84);
    if (piVar6 == (int *)0x0) {
      return 0;
    }
  }
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  iVar3 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&DAT_221756e8,0,2,&local_34,&local_14,0,0);
  if (-1 < iVar3) {
    HVar4 = VariantChangeType((VARIANTARG *)&((_union_2683 *)local_24)->n2,
                              (VARIANTARG *)&local_14.n2,0,param_2);
    if (-1 < HVar4) {
      bVar1 = (&DAT_22176b68)[param_2];
      p_Var7 = &(((_union_2683 *)local_24)->n2).n3;
      for (uVar5 = (uint)(bVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_3 = p_Var7->lVal;
        p_Var7 = (_union_2685 *)(&p_Var7->lVal + 1);
        param_3 = param_3 + 1;
      }
      for (uVar5 = bVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(BYTE *)param_3 = p_Var7->bVal;
        p_Var7 = (_union_2685 *)((int)p_Var7 + 1);
        param_3 = (LONG *)((int)param_3 + 1);
      }
      VariantClear((VARIANTARG *)&local_14.n2);
      return 1;
    }
    VariantClear((VARIANTARG *)&local_14.n2);
  }
  return 0;
}



uint __fastcall FUN_2217e244(void *param_1)

{
  int iVar1;
  uint local_8;
  
  if ((*(byte *)((int)param_1 + 0xbc) & 4) == 0) {
    local_8 = 1;
    iVar1 = FUN_2217e184(param_1,0xfffffd3b,0xb,(LONG *)&local_8);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)((int)param_1 + 0xbc) =
         (local_8 & 1) << 6 | *(uint *)((int)param_1 + 0xbc) & 0xffffffbf | 4;
  }
  return ~*(uint *)((int)param_1 + 0xbc) >> 6 & 1;
}



int FUN_2217e52f(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x78) >> 1 & 1) != 0) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1 + 8), iVar2 < 0)) {
    return iVar2;
  }
  if (((param_2 == 0) || (param_2 == 2)) && ((*(byte *)(param_1 + 0x78) & 1) != 0)) {
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    piVar1 = *(int **)(param_1 + 0x70);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_2217e596(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *lpMem;
  undefined4 *puVar6;
  int iVar7;
  HWND pHVar8;
  undefined4 *puVar9;
  LPWSTR in_stack_0000001c;
  LPWSTR pWVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  LPWSTR local_88 [31];
  byte local_c;
  void *local_8;
  
  if (param_2 == 0xfffffff9) {
LAB_2217e60c:
    uVar5 = FUN_2217e244((void *)(param_1 - 0x38));
    if (uVar5 != 0) {
      piVar2 = *(int **)(param_1 + 0x38);
      if ((piVar2 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2), iVar4 != -0x7fffbfff)) {
        return iVar4;
      }
      param_2 = -(uint)((void *)(param_1 - 0x38) != (void *)0x0) & param_1;
      iVar4 = lstrlenA(*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 4));
      uVar5 = iVar4 * 2 + 2;
      FUN_22171f40(local_88,uVar5);
      MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 4),-1,
                          local_88[0],uVar5);
      in_stack_0000001c = local_88[0];
      lpMem = (undefined4 *)
              HeapAlloc(DAT_22182030,0,
                        (uint)*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 0x4a)
                        << 4);
      if (lpMem == (undefined4 *)0x0) {
        if ((local_88[0] != (LPWSTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_22182030,0,local_88[0]);
        }
        return -0x7ff8fff2;
      }
      uVar5 = (uint)*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      if (uVar5 != 0) {
        puVar6 = *(undefined4 **)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 0x4c);
        puVar9 = lpMem;
        do {
          puVar3 = (undefined4 *)*puVar6;
          *puVar9 = *puVar3;
          puVar9[1] = puVar3[1];
          puVar1 = puVar9 + 3;
          puVar9[2] = puVar3[2];
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 4;
          uVar5 = uVar5 - 1;
          *puVar1 = puVar3[3];
        } while (uVar5 != 0);
      }
      local_8 = (void *)(param_1 - 0x38);
      FUN_2217f33a(local_8,1);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
      uVar15 = 0;
      uVar14 = 0;
      uVar5 = (uint)*(ushort *)((&PTR_PTR_221820fc)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      puVar12 = &param_2;
      uVar11 = 1;
      pWVar10 = in_stack_0000001c;
      puVar6 = lpMem;
      uVar13 = _DAT_22182190;
      iVar4 = GetSystemMetrics(1);
      iVar4 = iVar4 / 2;
      iVar7 = GetSystemMetrics(0);
      iVar7 = iVar7 / 2;
      pHVar8 = GetActiveWindow();
      in_stack_0000001c =
           (LPWSTR)OleCreatePropertyFrame
                             (pHVar8,iVar7,iVar4,pWVar10,uVar11,puVar12,uVar5,puVar6,uVar13,uVar14,
                              uVar15);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
      FUN_2217f33a(local_8,0);
      HeapFree(DAT_22182030,0,lpMem);
      if (local_88[0] != (LPWSTR)0x0) {
        if ((local_c & 1) != 0) {
          HeapFree(DAT_22182030,0,local_88[0]);
          return (int)in_stack_0000001c;
        }
        return (int)in_stack_0000001c;
      }
      return (int)in_stack_0000001c;
    }
LAB_2217e61d:
    iVar4 = 0;
  }
  else {
    if ((int)param_2 < -5) {
LAB_2217e5d3:
      if ((int)param_2 < 1) {
        return -0x7fffbfff;
      }
      iVar4 = (**(code **)(*(int *)(param_1 - 0x38) + 0x60))(param_2);
      if (iVar4 == 0x40180) {
        iVar4 = FUN_2217eb82((void *)(param_1 - 0x38),0);
        if (-1 < iVar4) {
          return 0x40180;
        }
        return iVar4;
      }
      return iVar4;
    }
    if (-4 < (int)param_2) {
      if (param_2 == 0xfffffffd) {
        (**(code **)(*(int *)(param_1 + 8) + 0x18))(param_1 + 8);
        if ((*(uint *)(param_1 + 0x78) >> 2 & 1) != 0) {
          FUN_2217f2a4((void *)(param_1 - 0x38),0);
        }
        goto LAB_2217e61d;
      }
      if (param_2 != 0xffffffff) {
        if ((int)param_2 < 0) {
          return -0x7fffbfff;
        }
        if (1 < (int)param_2) goto LAB_2217e5d3;
        goto LAB_2217e60c;
      }
    }
    if (in_stack_0000001c != (LPWSTR)0x0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)in_stack_0000001c;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((int)in_stack_0000001c + 4);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((int)in_stack_0000001c + 8);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)in_stack_0000001c + 0xc);
    }
    iVar4 = FUN_2217eb82((void *)(param_1 - 0x38),param_2);
  }
  return iVar4;
}



undefined4 FUN_2217e7fc(int param_1,uint *param_2)

{
  short sVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  LPVOID this;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar2 = (&PTR_PTR_221820fc)[*(int *)(param_1 + -0x24) * 2];
  uVar4 = *(uint *)(puVar2 + 0x34);
  if (((uVar4 & 0x400) == 0) || ((uVar4 & 0x100) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar4 = ~uVar4 >> 0xe & 1;
  sVar1 = *(short *)(puVar2 + 0x4a);
  uVar5 = (uint)*(ushort *)(puVar2 + 0x50);
  iVar10 = (-(uint)bVar3 & 4) + (uVar4 != 0) + uVar5 + (uint)(sVar1 != 0);
  if (iVar10 == 0) {
    uVar6 = 0x80040180;
  }
  else {
    puVar7 = (undefined4 *)HeapAlloc(DAT_22182030,0,iVar10 * 0x10);
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = puVar7;
      if (bVar3) {
        puVar8 = &DAT_22176c10;
        puVar11 = puVar7;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar8 = puVar7 + 0x10;
      }
      if (uVar4 != 0) {
        *puVar8 = 0xfffffffc;
        puVar8[1] = 0;
        puVar11 = puVar8 + 3;
        puVar8[2] = 0;
        puVar8 = puVar8 + 4;
        *puVar11 = 0;
      }
      if (sVar1 != 0) {
        *puVar8 = 1;
        puVar8[1] = 1000;
        puVar8[2] = 0;
        puVar8[3] = 2;
        puVar8 = puVar8 + 4;
      }
      if (uVar5 != 0) {
        puVar11 = *(undefined4 **)((&PTR_PTR_221820fc)[*(int *)(param_1 + -0x24) * 2] + 0x54);
        for (uVar4 = (uVar5 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      this = FUN_22171a32(0x40,DAT_22182030);
      if (this == (LPVOID)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_221802fc(this,(undefined4 *)&DAT_22176e80,iVar10,0x10,puVar7,&LAB_22180107);
      }
      uVar4 = -(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + 5);
      *param_2 = uVar4;
      if (uVar4 != 0) {
        (**(code **)(*(int *)(param_1 + -0x38) + 0x28))();
        return 0;
      }
    }
    uVar6 = 0x8007000e;
  }
  return uVar6;
}



int FUN_2217e996(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  if ((param_2 & 1) == 0) {
    iVar1 = -0x7ffbff95;
  }
  else if ((*(uint *)(param_1 + 0x84) >> 7 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x80;
    FUN_22172ed1(param_3,&local_c);
    local_10 = *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x50);
    iVar2 = (**(code **)(*(int *)(param_1 + -0x38) + 100))(&local_c);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x50) = local_c;
      *(undefined4 *)(param_1 + 0x54) = local_8;
    }
    if ((iVar1 != *(int *)(param_1 + 0x50)) || (local_10 != *(int *)(param_1 + 0x54))) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
    }
    if (*(int *)(param_1 + 0x74) == 0) {
      if ((*(uint *)(param_1 + 0x78) >> 1 & 1) == 0) {
        if (*(HWND *)(param_1 + 0x68) == (HWND)0x0) {
          (**(code **)(*(int *)(param_1 + -0x38) + 0x34))();
        }
        else {
          SetWindowPos(*(HWND *)(param_1 + 0x68),(HWND)0x0,0,0,*(int *)(param_1 + 0x50),
                       *(int *)(param_1 + 0x54),0x16);
        }
      }
      else if (*(int *)(param_1 + 0x68) != 0) {
        local_24 = *(int *)(param_1 + 0x58);
        local_20 = *(int *)(param_1 + 0x5c);
        local_1c = local_24 + *(int *)(param_1 + 0x50);
        local_18 = *(int *)(param_1 + 0x54) + local_20;
        piVar3 = *(int **)(param_1 + 0x74);
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(param_1 + 0x3c);
        }
        (**(code **)(*piVar3 + 0x38))(piVar3,&local_24);
      }
    }
    if (((*(byte *)(param_1 + 0x78) & 2) == 0) &&
       (piVar3 = *(int **)(param_1 + 0x34), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x20))(piVar3);
    }
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0x7f;
    iVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int __thiscall FUN_2217eb82(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_50 [5];
  undefined1 local_3c [16];
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  HWND local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puVar1 = *(undefined4 **)((int)this + 0x6c);
  local_8 = (int *)0x0;
  local_10 = 0;
  if (puVar1 == (undefined4 *)0x0) {
LAB_2217ee71:
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)((int)this + 0xac);
    if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x74) == 0)) {
      if (*(short *)((&PTR_PTR_221820fc)[*(int *)((int)this + 0x14) * 2] + 0x3e) != 0) {
        (**(code **)*puVar1)(puVar1,&DAT_22176eb0,piVar4);
      }
      if ((*piVar4 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_22176ea0,(int)this + 0x74),
         iVar3 < 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x6c))
                (*(undefined4 **)((int)this + 0x6c),&DAT_22176e90,&local_8);
    }
    else {
      local_8 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar5 = *(uint *)((int)this + 0xb0);
    if (((uVar5 & 2) != 0) && ((uVar5 & 4) != 0)) goto LAB_2217edd9;
    iVar3 = 1;
    local_c = uVar5 >> 1 & 1;
    if (local_c == 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) goto LAB_2217ec1e;
      iVar3 = (**(code **)(*piVar2 + 0x48))(piVar2);
      if (-1 < iVar3) {
        if (iVar3 != 0) {
          piVar2 = (int *)*piVar4;
          if (piVar2 != (int *)0x0) {
            iVar3 = *piVar2;
            *piVar4 = 0;
            (**(code **)(iVar3 + 8))(piVar2);
          }
          iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_22176ea0,(int)this + 0x74);
          if (iVar3 < 0) goto LAB_2217ec8b;
        }
        goto LAB_2217ec1e;
      }
    }
    else {
      iVar3 = 0;
LAB_2217ec1e:
      if (iVar3 == 0) {
LAB_2217eca8:
        if (local_c == 0) {
          if (local_8 == (int *)0x0) {
            iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x18))(*(int **)((int)this + 0x74));
          }
          else {
            iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,&local_10,*piVar4 != 0);
          }
          if (iVar3 < 0) goto LAB_2217ec8b;
          *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 2;
        }
        piVar4 = (int *)*piVar4;
        local_50[0] = 0x14;
        if (piVar4 == (int *)0x0) {
          piVar4 = *(int **)((int)this + 0x74);
        }
        iVar3 = (**(code **)(*piVar4 + 0xc))(piVar4,&local_14);
        if (-1 < iVar3) {
          piVar4 = *(int **)((int)this + 0x78);
          if (piVar4 != (int *)0x0) {
            iVar3 = *piVar4;
            *(undefined4 *)((int)this + 0x78) = 0;
            (**(code **)(iVar3 + 8))(piVar4);
          }
          piVar4 = *(int **)((int)this + 0x7c);
          if (piVar4 != (int *)0x0) {
            iVar3 = *piVar4;
            *(undefined4 *)((int)this + 0x7c) = 0;
            (**(code **)(iVar3 + 8))(piVar4);
          }
          piVar4 = *(int **)((int)this + 0xac);
          if (piVar4 == (int *)0x0) {
            piVar4 = *(int **)((int)this + 0x74);
          }
          iVar3 = (**(code **)(*piVar4 + 0x20))
                            (piVar4,(undefined4 *)((int)this + 0x78),
                             (undefined4 *)((int)this + 0x7c),&local_2c,local_3c,local_50);
          if (-1 < iVar3) {
            if (*(int *)((int)this + 0xac) != 0) {
              local_1c = local_24 - local_2c;
              local_18 = local_20 - local_28;
                    // WARNING: Load size is inaccurate
              iVar3 = (**(code **)(*this + 100))(&local_1c);
              if (iVar3 != 0) {
                *(int *)((int)this + 0x88) = local_1c;
                *(int *)((int)this + 0x8c) = local_18;
              }
              (**(code **)(*(int *)((int)this + 0x40) + 0x1c))((int)this + 0x40,&local_2c,local_3c);
            }
            if ((local_c == 0) && (*(int *)((int)this + 0xac) == 0)) {
              FUN_2217dda4(this,local_14);
              iVar3 = FUN_2217db70(this,local_2c,local_28,local_10);
              if (iVar3 == 0) goto LAB_2217ec37;
              piVar4 = *(int **)((int)this + 0x6c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x18))(piVar4);
              }
            }
LAB_2217edd9:
            piVar4 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            if ((*(byte *)((int)this + 0xb0) & 4) == 0) {
              FUN_2217f2a4(this,1);
            }
            if (((param_1 == 0) || (param_1 == -4)) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
              *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 8;
              piVar4 = *(int **)((int)this + 0xac);
              if (piVar4 == (int *)0x0) {
                piVar4 = *(int **)((int)this + 0x74);
              }
              (**(code **)(*piVar4 + 0x1c))(piVar4);
              FUN_2217df70(this,1);
              uVar5 = -(uint)(this != (void *)0x0) & (int)this + 0x44U;
              (**(code **)(**(int **)((int)this + 0x78) + 0x20))
                        (*(int **)((int)this + 0x78),uVar5,0);
              piVar4 = *(int **)((int)this + 0x7c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x20))(piVar4,uVar5,0);
              }
              (**(code **)(**(int **)((int)this + 0x78) + 0x1c))(*(int **)((int)this + 0x78),0);
              piVar4 = *(int **)((int)this + 0x7c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x1c))(piVar4,0);
              }
            }
            goto LAB_2217ee71;
          }
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x14))(*(int **)((int)this + 0x74));
        if (iVar3 == 0) goto LAB_2217eca8;
        if (-1 < iVar3) goto LAB_2217ec8b;
LAB_2217ec37:
        iVar3 = -0x7fffbffb;
      }
    }
LAB_2217ec8b:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffd;
  }
  return iVar3;
}



undefined4 FUN_2217ee86(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[0x1c] & 2U) != 0) {
    if (((uint)param_1[0x1c] >> 3 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    piVar2 = (int *)param_1[0x1b];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)param_1[0xd];
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2);
    param_1[0x1c] = param_1[0x1c] & 0xfffffff9;
    if ((HWND)param_1[0x18] != (HWND)0x0) {
      DestroyWindow((HWND)param_1[0x18]);
      if ((HWND)param_1[0x1d] != (HWND)0x0) {
        SetWindowLongA((HWND)param_1[0x1d],-0x15,0);
        DestroyWindow((HWND)param_1[0x1d]);
        param_1[0x1d] = 0;
      }
    }
    piVar2 = (int *)param_1[0xe];
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      param_1[0xe] = 0;
      (**(code **)(iVar1 + 8))(piVar2);
    }
    piVar2 = (int *)param_1[0xf];
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      param_1[0xf] = 0;
      (**(code **)(iVar1 + 8))(piVar2);
    }
  }
  return 0;
}



undefined4 FUN_2217ef0c(int param_1)

{
  int *piVar1;
  
  if ((*(uint *)(param_1 + 0x70) & 8) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffff7;
    piVar1 = *(int **)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,0,0);
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(*(int **)(param_1 + 0x38),0,0);
    piVar1 = *(int **)(param_1 + 0x6c);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x34);
    }
    (**(code **)(*piVar1 + 0x28))(piVar1,0);
  }
  return 0;
}



undefined4 FUN_2217ef56(int param_1,RECT *param_2,RECT *param_3)

{
  LPRECT lpRect;
  int X;
  BOOL BVar1;
  HRGN hRgn;
  HWND pHVar2;
  HWND pHVar3;
  uint uVar4;
  int cx;
  tagPOINT *lpPoint;
  tagRECT local_2c;
  tagRECT local_1c;
  tagPOINT local_c;
  
  *(LONG *)(param_1 + 0x50) = param_2->left;
  *(LONG *)(param_1 + 0x54) = param_2->top;
  *(LONG *)(param_1 + 0x58) = param_2->right;
  *(LONG *)(param_1 + 0x5c) = param_2->bottom;
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar4 = *(uint *)(param_1 + 0x7c) >> 5 & 1;
    if (param_3 != (RECT *)0x0) {
      BVar1 = IntersectRect(&local_2c,param_2,param_3);
      if (BVar1 != 0) {
        BVar1 = EqualRect(&local_2c,param_2);
        if (BVar1 == 0) {
          OffsetRect(&local_2c,-param_2->left,-param_2->top);
          pHVar2 = *(HWND *)(param_1 + 0x74);
          if (pHVar2 == (HWND)0x0) {
            pHVar2 = *(HWND *)(param_1 + 0x60);
          }
          BVar1 = 1;
          hRgn = CreateRectRgnIndirect(&local_2c);
          SetWindowRgn(pHVar2,hRgn,BVar1);
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x20;
          uVar4 = 0;
        }
      }
    }
    if (uVar4 != 0) {
      pHVar2 = *(HWND *)(param_1 + 0x74);
      if (pHVar2 == (HWND)0x0) {
        pHVar2 = *(HWND *)(param_1 + 0x60);
      }
      SetWindowRgn(pHVar2,(HRGN)0x0,1);
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xffffffdf;
    }
    pHVar2 = *(HWND *)(param_1 + 0x74);
    local_c.y = 0;
    local_c.x = 0;
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = *(HWND *)(param_1 + 0x60);
    }
    lpPoint = &local_c;
    pHVar2 = GetParent(pHVar2);
    ClientToScreen(pHVar2,lpPoint);
    pHVar2 = *(HWND *)(param_1 + 0x74);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = *(HWND *)(param_1 + 0x60);
    }
    GetWindowRect(pHVar2,&local_1c);
    OffsetRect(&local_1c,-local_c.x,-local_c.y);
    param_3 = (RECT *)0x14;
    X = param_2->left;
    if ((local_1c.left == X) && (local_1c.top == param_2->top)) {
      param_3 = (RECT *)0x16;
    }
    cx = param_2->right - X;
    if ((local_1c.right - local_1c.left == cx) &&
       (local_1c.bottom - local_1c.top == param_2->bottom - param_2->top)) {
      param_3 = (RECT *)((uint)param_3 | 1);
    }
    pHVar2 = *(HWND *)(param_1 + 0x74);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = *(HWND *)(param_1 + 0x60);
    }
    SetWindowPos(pHVar2,(HWND)0x0,X,param_2->top,cx,param_2->bottom - param_2->top,(UINT)param_3);
    pHVar2 = *(HWND *)(param_1 + 0x74);
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = *(HWND *)(param_1 + 0x60);
    }
    lpRect = (LPRECT)(param_1 + 0x50);
    GetWindowRect(pHVar2,lpRect);
    OffsetRect(lpRect,-local_c.x,-local_c.y);
    pHVar2 = *(HWND *)(param_1 + 0x60);
    if (pHVar2 != (HWND)0x0) {
      pHVar3 = *(HWND *)(param_1 + 0x74);
      if (*(HWND *)(param_1 + 0x74) == (HWND)0x0) {
        pHVar3 = pHVar2;
      }
      if (pHVar3 != pHVar2) {
        SetWindowPos(pHVar2,(HWND)0x0,0,0,*(int *)(param_1 + 0x58) - lpRect->left,
                     *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54),0x14);
      }
    }
  }
  return 0;
}



undefined4
FUN_2217f122(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((((6 < param_2) && (param_2 < 9)) && ((*(byte *)(param_1 + 0x70) & 2) != 0)) &&
     (piVar1 = *(int **)(param_1 + 0x30), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_2 == 7);
  }
  uVar2 = (**(code **)(*(int *)(param_1 + -0x40) + 0x4c))(param_2,param_3,param_4);
  *param_5 = uVar2;
  return 0;
}



undefined4 FUN_2217f170(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  
  iVar2 = (**(code **)(*(int *)(param_1 + -0x44) + 0x68))(param_2);
  if (iVar2 == 0) {
    if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
      uVar3 = 1;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x2c);
      cVar1 = FUN_221800cc();
      uVar3 = (**(code **)(iVar2 + 0x1c))
                        (*(undefined4 *)(param_1 + 0x2c),param_1,
                         (int)(short)CONCAT31(extraout_var,cVar1));
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



HRESULT FUN_2217f1d7(int param_1,ITypeLib *param_2)

{
  ITypeLib *ppTinfo;
  HRESULT HVar1;
  
  ppTinfo = param_2;
  param_2->lpVtbl = (ITypeLibVtbl *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  HVar1 = LoadRegTypeLib((GUID *)PTR_DAT_22182294,
                         *(WORD *)((&PTR_PTR_221820fc)[*(int *)(param_1 + -0x48) * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_221820fc)[*(int *)(param_1 + -0x48) * 2] + 0x1c),
                         (uint)DAT_22182190,&param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (-1 < HVar1) {
    HVar1 = (*param_2->lpVtbl->GetTypeInfoOfGuid)
                      (param_2,*(GUID **)(&PTR_PTR_221820fc)[*(int *)(param_1 + -0x48) * 2],
                       (ITypeInfo **)ppTinfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (-1 < HVar1) {
      HVar1 = 0;
    }
  }
  return HVar1;
}



void __fastcall FUN_2217f261(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if ((piVar1 != (int *)0x0) && ((*(byte *)(param_1 + 0xbd) & 1) == 0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1,1,0xffffffff);
    if ((*(uint *)(param_1 + 0xbc) >> 4 & 1) != 0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x1c))(param_1 + 0x48,1,0,0);
    }
  }
  return;
}



void __thiscall FUN_2217f2a4(void *this,uint param_1)

{
  uint uVar1;
  HWND pHVar2;
  int nCmdShow;
  
  *(uint *)((int)this + 0xb0) = (param_1 & 1) << 2 | *(uint *)((int)this + 0xb0) & 0xfffffffb;
  if (*(HWND *)((int)this + 0xa0) != (HWND)0x0) {
    pHVar2 = *(HWND *)((int)this + 0xa0);
    if (*(HWND *)((int)this + 0xb4) != (HWND)0x0) {
      pHVar2 = *(HWND *)((int)this + 0xb4);
    }
    uVar1 = GetWindowLongA(pHVar2,-0x10);
    uVar1 = uVar1 >> 0x1c & 1;
    if ((uVar1 == 0) || (param_1 != 0)) {
      if (uVar1 != 0) {
        return;
      }
      if (param_1 == 0) {
        return;
      }
      pHVar2 = *(HWND *)((int)this + 0xb4);
      if (pHVar2 == (HWND)0x0) {
        pHVar2 = *(HWND *)((int)this + 0xa0);
      }
      nCmdShow = 8;
    }
    else {
      pHVar2 = *(HWND *)((int)this + 0xb4);
      if (pHVar2 == (HWND)0x0) {
        pHVar2 = *(HWND *)((int)this + 0xa0);
      }
      nCmdShow = 0;
    }
    ShowWindow(pHVar2,nCmdShow);
  }
  return;
}



void __thiscall FUN_2217f33a(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_1 == 0);
  }
  return;
}



int FUN_2217f364(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"Contents",0,0x10,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x14))((int *)(param_1 + -4),param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



int FUN_2217f3a5(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,L"Contents",0x1011,0,0,&param_2);
  if (-1 < iVar1) {
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
    iVar1 = FUN_22175379((void *)(param_1 + -0x54),param_2);
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfe;
    *(uint *)(param_1 + 0x5c) = (uint)(-1 < iVar1) << 5 | *(uint *)(param_1 + 0x5c) & 0xffffffdf;
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



undefined4
FUN_2217f432(int param_1,int param_2,undefined4 param_3,int *param_4,LPCWSTR param_5,HDC param_6,
            HDC param_7,LONG *param_8,undefined4 param_9)

{
  HDC hdc;
  undefined4 uVar1;
  int iVar2;
  tagPOINT local_3c;
  LONG LStack_34;
  LONG LStack_30;
  tagSIZE local_2c;
  tagSIZE local_24;
  tagPOINT local_1c;
  tagPOINT local_14;
  uint local_c;
  char local_6;
  char local_5;
  
  hdc = param_7;
  local_c = 0;
  local_5 = '\0';
  local_6 = '\0';
  if (((param_2 == 1) || (param_2 == 0x10)) || (param_2 == 0x20)) {
    iVar2 = GetDeviceCaps(param_7,2);
    if ((iVar2 == 5) && (local_5 = '\x01', param_6 == (HDC)0x0)) {
      param_6 = FUN_2217f751(param_5);
      local_6 = '\x01';
    }
    if ((param_4 != (int *)0x0) && (*param_4 == 8)) {
      local_c = param_4[1] & 1;
    }
    if (param_8 == (LONG *)0x0) {
      local_3c.x = *(LONG *)(param_1 + 0x48);
      local_3c.y = *(LONG *)(param_1 + 0x4c);
      LStack_34 = *(LONG *)(param_1 + 0x50);
      LStack_30 = *(LONG *)(param_1 + 0x54);
    }
    else {
      local_3c.x = *param_8;
      local_3c.y = param_8[1];
      LStack_34 = param_8[2];
      LStack_30 = param_8[3];
      if (local_5 == '\0') {
        LPtoDP(param_7,&local_3c,2);
        SetViewportOrgEx(param_7,0,0,&local_1c);
        SetWindowOrgEx(param_7,0,0,&local_14);
        GetWindowExtEx(param_7,&local_24);
        GetViewportExtEx(param_7,&local_2c);
        param_7 = (HDC)SetMapMode(param_7,1);
      }
    }
    uVar1 = (**(code **)(*(int *)(param_1 + -0x48) + 0x48))
                      ((int *)(param_1 + -0x48),param_2,hdc,&local_3c,param_9,param_6,local_c);
    if ((param_8 != (LONG *)0x0) && (local_5 == '\0')) {
      SetWindowOrgEx(hdc,local_14.x,local_14.y,(LPPOINT)0x0);
      SetViewportOrgEx(hdc,local_1c.x,local_1c.y,(LPPOINT)0x0);
      SetWindowExtEx(hdc,local_24.cx,local_24.cy,(LPSIZE)0x0);
      SetViewportExtEx(hdc,local_2c.cx,local_2c.cy,(LPSIZE)0x0);
      SetMapMode(hdc,(int)param_7);
    }
    if (local_6 != '\0') {
      DeleteDC(param_6);
    }
  }
  else {
    uVar1 = 0x8004006b;
  }
  return uVar1;
}



undefined4 FUN_2217f655(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_14 [2];
  int local_c [2];
  
  iVar1 = (**(code **)(*(int *)(param_1 + -0x48) + 0x7c))(param_2,local_14);
  if (iVar1 == 0) {
    uVar2 = 0x8004006b;
  }
  else {
    FUN_2217525c(local_14,param_3);
    FUN_2217525c(local_c,param_3 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
FUN_2217f6c1(undefined4 param_1,int param_2,RECT *param_3,LONG param_4,LONG param_5,
            undefined4 param_6,uint *param_7)

{
  POINT pt;
  undefined4 uVar1;
  BOOL BVar2;
  
  if (param_2 == 1) {
    pt.y = param_5;
    pt.x = param_4;
    BVar2 = PtInRect(param_3,pt);
    *param_7 = -(uint)(BVar2 != 0) & 3;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8004006b;
  }
  return uVar1;
}



undefined4
FUN_2217f6f2(undefined4 param_1,int param_2,RECT *param_3,RECT *param_4,undefined4 param_5,
            uint *param_6)

{
  undefined4 uVar1;
  BOOL BVar2;
  tagRECT local_14;
  
  if (param_2 == 1) {
    BVar2 = IntersectRect(&local_14,param_3,param_4);
    *param_6 = -(uint)(BVar2 != 0) & 3;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8004006b;
  }
  return uVar1;
}



HDC __cdecl FUN_2217f751(LPCWSTR param_1)

{
  WCHAR WVar1;
  HDC pHVar2;
  int iVar3;
  uint uVar4;
  DEVMODEA *pDVar5;
  LPCWSTR pWVar6;
  WORD *pWVar7;
  DEVMODEA *pDVar8;
  DEVMODEA local_234;
  LPSTR local_198 [31];
  byte local_11c;
  LPSTR local_118 [31];
  byte local_9c;
  LPSTR local_98 [31];
  byte local_1c;
  LPSTR local_18;
  LPSTR local_14;
  LPCWSTR local_10;
  LPSTR local_c;
  DEVMODEA *local_8;
  
  pWVar6 = param_1;
  if (param_1 == (LPCWSTR)0x0) {
    pHVar2 = CreateDCA(s_DISPLAY_221825d4,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  }
  else {
    if (param_1[5] == L'\0') {
      param_1 = (LPCWSTR)0x0;
    }
    else {
      param_1 = (LPCWSTR)((int)param_1 + (uint)(ushort)param_1[5]);
    }
    WVar1 = pWVar6[2];
    local_8 = (DEVMODEA *)((uint)(ushort)pWVar6[3] + (int)pWVar6);
    local_10 = (LPCWSTR)((uint)(ushort)pWVar6[4] + (int)pWVar6);
    iVar3 = lstrlenW((LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6));
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_22171f40(local_118,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6),-1,local_118[0],
                        (int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = local_118[0];
    iVar3 = lstrlenW((LPCWSTR)local_8);
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_22171f40(local_98,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)local_8,-1,local_98[0],(int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_18 = local_98[0];
    iVar3 = lstrlenW(local_10);
    uVar4 = iVar3 * 2 + 2;
    FUN_22171f40(local_198,uVar4);
    WideCharToMultiByte(0,0,local_10,-1,local_198[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    local_c = local_198[0];
    if (param_1 == (LPCWSTR)0x0) {
      local_8 = (DEVMODEA *)0x0;
    }
    else {
      WideCharToMultiByte(0,0,param_1,-1,(LPSTR)&local_234,0x20,(LPCSTR)0x0,(LPBOOL)0x0);
      pWVar6 = param_1 + 0x20;
      pWVar7 = &local_234.dmSpecVersion;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pWVar7 = *(undefined4 *)pWVar6;
        pWVar6 = pWVar6 + 2;
        pWVar7 = pWVar7 + 2;
      }
      *pWVar7 = *pWVar6;
      WideCharToMultiByte(0,0,param_1 + 0x33,-1,(LPSTR)local_234.dmFormName,0x20,(LPCSTR)0x0,
                          (LPBOOL)0x0);
      pWVar6 = param_1 + 0x53;
      pWVar7 = &local_234.dmLogPixels;
      for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pWVar7 = *(undefined4 *)pWVar6;
        pWVar6 = pWVar6 + 2;
        pWVar7 = pWVar7 + 2;
      }
      *pWVar7 = *pWVar6;
      if (param_1[0x23] == L'\0') {
        local_8 = &local_234;
      }
      else {
        local_8 = (DEVMODEA *)HeapAlloc(DAT_22182030,0,(ushort)param_1[0x23] + 0x9c);
        if (local_8 == (DEVMODEA *)0x0) {
          if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
            HeapFree(DAT_22182030,0,local_198[0]);
          }
          if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
            HeapFree(DAT_22182030,0,local_98[0]);
          }
          if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
            HeapFree(DAT_22182030,0,local_118[0]);
          }
          return (HDC)0x0;
        }
        pDVar5 = &local_234;
        pDVar8 = local_8;
        for (iVar3 = 0x27; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined4 *)pDVar8->dmDeviceName = *(undefined4 *)pDVar5->dmDeviceName;
          pDVar5 = (DEVMODEA *)(pDVar5->dmDeviceName + 4);
          pDVar8 = (DEVMODEA *)(pDVar8->dmDeviceName + 4);
        }
        WVar1 = param_1[0x23];
        pWVar6 = param_1 + 0x6e;
        pDVar5 = local_8 + 1;
        for (uVar4 = (uint)((ushort)WVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pDVar5->dmDeviceName = *(undefined4 *)pWVar6;
          pWVar6 = pWVar6 + 2;
          pDVar5 = (DEVMODEA *)(pDVar5->dmDeviceName + 4);
        }
        for (uVar4 = (ushort)WVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          pDVar5->dmDeviceName[0] = (BYTE)*pWVar6;
          pWVar6 = (LPCWSTR)((int)pWVar6 + 1);
          pDVar5 = (DEVMODEA *)(pDVar5->dmDeviceName + 1);
        }
      }
      local_234.dmSize = 0x9c;
    }
    pHVar2 = CreateDCA(local_14,local_18,local_c,local_8);
    if (local_8 != &local_234) {
      HeapFree(DAT_22182030,0,local_8);
    }
    if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_198[0]);
    }
    if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_98[0]);
    }
    if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
      HeapFree(DAT_22182030,0,local_118[0]);
    }
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_2217fa29(void *this,byte param_1)

{
  FUN_221737b9((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_2217fa51(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 1;
    uVar1 = 0;
  }
  return uVar1;
}



bool FUN_2217fa6b(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = *(char **)((&PTR_PTR_221820fc)[*(int *)(param_1 + 0x14) * 2] + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}



undefined4 * __thiscall FUN_2217fab0(void *this,byte param_1)

{
  FUN_22173776((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_2217fcc5(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)this + 10);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(**(int **)((int)this + 4) + 0x18))
                (*(int **)((int)this + 4),param_1,&DAT_221756e8,0,1,param_2,0,0,0);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 4) + iVar3 * 4);
          (**(code **)(*piVar2 + 0x18))(piVar2,param_1,&DAT_221756e8,0,1,param_2,0,0,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)this + 10));
      }
    }
  }
  return;
}



void __cdecl FUN_2217fd2e(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  ushort *puVar7;
  undefined1 local_21c [512];
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  ushort *local_8;
  
  iVar2 = param_2[1];
  puVar7 = (ushort *)(local_21c + iVar2 * 0x10 + -0x10);
  if (0 < iVar2) {
    local_8 = (ushort *)param_2[2];
    puVar5 = (undefined8 *)(local_21c + iVar2 * 0x10 + -8);
    puVar3 = (undefined8 *)&stack0x0000000c;
    local_c = iVar2;
    do {
      uVar1 = *local_8;
      if (uVar1 == 0xc) {
        puVar4 = puVar3 + 2;
        *(undefined4 *)puVar7 = *(undefined4 *)puVar3;
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)((int)puVar3 + 4);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar3 + 1);
        *(undefined4 *)(puVar7 + 6) = *(undefined4 *)((int)puVar3 + 0xc);
      }
      else {
        *puVar7 = uVar1;
        if ((uVar1 & 0x4000) == 0) {
          cVar6 = (&DAT_22176b68)[uVar1];
        }
        else {
          cVar6 = '\x04';
        }
        if (cVar6 == '\x02') {
          puVar4 = (undefined8 *)((int)puVar3 + 4);
          *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
        }
        else if (cVar6 == '\x04') {
          if (uVar1 == 4) {
            puVar4 = (undefined8 *)((int)puVar3 + 4);
            *(undefined4 *)puVar5 = *(undefined4 *)puVar3;
          }
          else {
            puVar4 = (undefined8 *)((int)puVar3 + 4);
            *(undefined4 *)puVar5 = *(undefined4 *)puVar3;
          }
        }
        else if ((uVar1 == 5) || (uVar1 == 7)) {
          puVar4 = puVar3 + 1;
          *puVar5 = *puVar3;
        }
        else {
          puVar4 = puVar3 + 1;
          *(undefined4 *)puVar5 = *(undefined4 *)puVar3;
          *(undefined4 *)((int)puVar5 + 4) = *(undefined4 *)((int)puVar3 + 4);
        }
      }
      local_8 = local_8 + 1;
      puVar7 = puVar7 + -8;
      puVar5 = puVar5 + -2;
      local_c = local_c + -1;
      puVar3 = puVar4;
    } while (local_c != 0);
    local_c = 0;
  }
  local_1c = local_21c;
  local_14 = param_2[1];
  local_18 = 0;
  local_10 = 0;
  FUN_2217fcc5((void *)(param_1 + 0x20),*param_2,&local_1c);
  return;
}



LRESULT __thiscall FUN_2217fe63(void *this,UINT param_1,WPARAM param_2,LRESULT param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0xac);
  if (piVar1 == (int *)0x0) {
    param_3 = DefWindowProcA(*(HWND *)((int)this + 0xa0),param_1,param_2,param_3);
  }
  else {
    (**(code **)(*piVar1 + 0x74))(piVar1,param_1,param_2,param_3,&param_3);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_2217fea4(undefined4 *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *local_8;
  
  HVar2 = 0;
  local_8 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_22182114 == (int *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_22176d10,(LPUNKNOWN)0x0,1,(IID *)&DAT_22176d20,
                             &DAT_22182114);
    if (-1 < HVar2) {
      if (DAT_22182114 == (int *)0x0) {
        HVar2 = -0x7fffbffb;
      }
      else {
        iVar1 = (**(code **)*DAT_22182114)(DAT_22182114,&DAT_22176d00,&local_8);
        if (-1 < iVar1) {
          (**(code **)(*local_8 + 0x10))(local_8,_DAT_22182190);
        }
        HVar2 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (-1 < HVar2) {
    (**(code **)(*DAT_22182114 + 4))(DAT_22182114);
    *param_1 = DAT_22182114;
  }
  return HVar2;
}



int __cdecl FUN_2217ff48(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPWSTR bstrString;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_2217fea4(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x28))(local_8,0);
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      bstrString = FUN_2217bb00(param_1,(LPWSTR)0x0);
      iVar1 = (**(code **)(*local_8 + 0x24))(local_8,bstrString,param_2,4);
      SysFreeString(bstrString);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}



int FUN_22180062(int param_1,int param_2,undefined4 param_3,int *param_4,short *param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_22182124 == 0) {
    DAT_22182128 = FUN_22171ee7();
    DAT_22182124 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  iVar1 = FUN_2217b59f(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x7ffbfeee;
  }
  else {
    iVar1 = FUN_22172109(param_2,*(int *)(param_1 + 8),param_6,param_4);
  }
  return iVar1;
}



char FUN_221800cc(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



HWND __cdecl FUN_22180131(int param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  ATOM AVar1;
  HWND pHVar2;
  int iVar3;
  WNDCLASSA *pWVar4;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_22182118 == '\0') {
    pWVar4 = &local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4->style = 0;
      pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
    }
    local_2c.lpfnWndProc = FUN_2217e0fb;
    local_2c.hInstance = DAT_22182008;
    local_2c.lpszClassName = "CtlFrameWork_ReflectWindow";
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
      return (HWND)0x0;
    }
    DAT_22182118 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  pHVar2 = CreateWindowExA(0,"CtlFrameWork_ReflectWindow",(LPCSTR)0x0,
                           -(uint)(param_1 != 0) & 0x10000000 | 0x44000000,param_3,param_4,*param_5,
                           param_5[1],param_2,(HMENU)0x0,DAT_22182008,(LPVOID)0x0);
  return pHVar2;
}



HWND FUN_221801d3(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (DAT_2218211c == (HWND)0x0) {
    pWVar3 = &local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->style = 0;
      pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
    }
    local_2c.lpfnWndProc = DAT_2218272c;
    if (DAT_2218272c == (WNDPROC)0x0) {
      local_2c.lpfnWndProc = FUN_22180262;
    }
    local_2c.lpszClassName = s_CtlFrameWork_Parking_221825dc;
    local_2c.hInstance = DAT_22182008;
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 != 0) {
      DAT_2218211c = CreateWindowExA(0,s_CtlFrameWork_Parking_221825f4,(LPCSTR)0x0,0x80000000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_22182008,(LPVOID)0x0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  return DAT_2218211c;
}



LRESULT FUN_22180262(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  LRESULT local_8;
  
  bVar1 = FUN_2217e00b(param_1,param_2,param_3,param_4,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  return local_8;
}



undefined4 * __thiscall FUN_221802d4(void *this,byte param_1)

{
  FUN_2218035d((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_22182030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_221802fc(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  FUN_22172590(this,(undefined4 *)0x0,-(uint)(this != (void *)0x0) & (int)this + 0x14U);
  *(undefined ***)((int)this + 0x14U) = &PTR_LAB_22176ce0;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_1[3];
  *(undefined4 *)((int)this + 0x3c) = param_5;
  *(undefined ***)this = &PTR_FUN_22176ca8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_22176cc0;
  return (undefined4 *)this;
}



void __fastcall FUN_2218035d(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  *param_1 = &PTR_FUN_22176ca8;
  param_1[5] = &PTR_LAB_22176cc0;
  if (iVar1 == 0) {
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      HeapFree(DAT_22182030,0,(LPVOID)param_1[0xd]);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 8))(iVar1 + 0x14);
  }
  *param_1 = &PTR_FUN_22174298;
  InterlockedDecrement(&DAT_22182110);
  return;
}



bool FUN_22180405(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20);
  if (param_2 != 0) {
    do {
      if (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x1c)) break;
      (**(code **)(param_1 + 0x28))(param_3,iVar1,*(undefined4 *)(param_1 + 0x18));
      param_3 = param_3 + *(int *)(param_1 + 0x18);
      iVar1 = iVar1 + *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_8;
  }
  return local_8 < param_2;
}



undefined4 FUN_22180496(int *param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  LPVOID this;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pvVar1 = DAT_22182030;
  puVar3 = (undefined4 *)0x0;
  *param_2 = 0;
  this = FUN_22171a32(0x40,pvVar1);
  if (this != (LPVOID)0x0) {
    puVar3 = FUN_221802fc(this,param_1 + 1,param_1[5],param_1[6],param_1[8],param_1[10]);
  }
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    puVar3[0xe] = param_1 + -5;
    puVar3[0xc] = param_1[7];
    (**(code **)(*param_1 + 4))(param_1);
    uVar2 = 0;
    *param_2 = puVar3 + 5;
  }
  return uVar2;
}



int FUN_221804fb(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BYTE local_108 [260];
  
  if ((DAT_22182678 == (HMODULE)0x0) && (DAT_22182680 == 0)) {
    bVar1 = FUN_22180594(local_108);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_22182678 = LoadLibraryA((LPCSTR)local_108);
    }
    if (DAT_22182678 != (HMODULE)0x0) goto LAB_22180558;
    DAT_22182678 = LoadLibraryA("hhctrl.ocx");
    if (DAT_22182678 != (HMODULE)0x0) goto LAB_22180558;
LAB_22180573:
    DAT_22182680 = 1;
    iVar2 = 0;
  }
  else {
LAB_22180558:
    if (DAT_2218274c == (FARPROC)0x0) {
      DAT_2218274c = GetProcAddress(DAT_22182678,(LPCSTR)0xe);
      if (DAT_2218274c == (FARPROC)0x0) goto LAB_22180573;
    }
    iVar2 = (*DAT_2218274c)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



bool FUN_22180594(LPBYTE param_1)

{
  LSTATUS LVar1;
  bool bVar2;
  DWORD local_c;
  HKEY local_8;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,
                        "CLSID\\{ADB880A6-D8FF-11CF-9377-00AA003B7A11}\\InprocServer32",0,0x20019,
                        &local_8);
  if (LVar1 == 0) {
    local_c = 0x104;
    LVar1 = RegQueryValueExA(local_8,"",(LPDWORD)0x0,(LPDWORD)0x0,param_1,&local_c);
    bVar2 = LVar1 == 0;
    RegCloseKey(local_8);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



void __cdecl FUN_221805f3(uint param_1,ushort param_2)

{
  HINSTANCE pHVar1;
  HRESULT HVar2;
  HWND hWnd;
  UINT UVar3;
  CHAR *lpText;
  CHAR *pCVar4;
  int iVar5;
  CHAR local_250 [256];
  CHAR local_150 [256];
  CHAR local_50 [64];
  BSTR local_10;
  BSTR local_c;
  IErrorInfo *local_8;
  
  local_8 = (IErrorInfo *)0x0;
  local_10 = (LPCWSTR)0x0;
  local_c = (LPCWSTR)0x0;
  pHVar1 = FUN_22174a20(0);
  HVar2 = GetErrorInfo(0,&local_8);
  if ((HVar2 < 0) || (local_8 == (IErrorInfo *)0x0)) {
    LoadStringA(pHVar1,(uint)param_2,local_250,0x100);
    if (param_1 == 0x8007000e) {
      pCVar4 = local_150;
      iVar5 = 0x100;
      UVar3 = 7;
      pHVar1 = FUN_22174a20(0);
      LoadStringA(pHVar1,UVar3,pCVar4,iVar5);
    }
    else {
      local_150[0] = '\0';
    }
  }
  else {
    HVar2 = (*local_8->lpVtbl->GetDescription)(local_8,&local_c);
    if (HVar2 < 0) goto LAB_221806ee;
    HVar2 = (*local_8->lpVtbl->GetSource)(local_8,&local_10);
    if (HVar2 < 0) goto LAB_221806ee;
    WideCharToMultiByte(0,0,local_c,-1,local_150,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    WideCharToMultiByte(0,0,local_10,-1,local_250,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  if (local_150[0] == '\0') {
    pCVar4 = local_50;
    iVar5 = 0x40;
    UVar3 = 0x7919;
    pHVar1 = FUN_22174a20(0);
    LoadStringA(pHVar1,UVar3,pCVar4,iVar5);
    wsprintfA(local_150,local_50,param_1 & 0xffff);
  }
  MessageBeep(0x30);
  pCVar4 = local_250;
  UVar3 = 0x40030;
  lpText = local_150;
  hWnd = GetActiveWindow();
  MessageBoxA(hWnd,lpText,pCVar4,UVar3);
LAB_221806ee:
  if (local_10 != (BSTR)0x0) {
    SysFreeString(local_10);
  }
  if (local_c != (BSTR)0x0) {
    SysFreeString(local_c);
  }
  if (local_8 != (IErrorInfo *)0x0) {
    (*local_8->lpVtbl->Release)(local_8);
  }
  return;
}



HRESULT __cdecl FUN_22180765(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HRESULT HVar2;
  HWND pHVar3;
  int *piVar4;
  ITypeInfo *pIVar5;
  uint uVar6;
  ITypeLib *local_c;
  ITypeInfo *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  HVar2 = LoadRegTypeLib((GUID *)PTR_DAT_22182294,*(WORD *)((&PTR_PTR_221820fc)[param_2 * 2] + 0x18)
                         ,*(WORD *)((&PTR_PTR_221820fc)[param_2 * 2] + 0x1c),(uint)DAT_22182190,
                         &local_c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
  if (-1 < HVar2) {
    piVar4 = (int *)(param_3 + 4);
    iVar1 = *(int *)(param_3 + 4);
    while (iVar1 != 0) {
      HVar2 = (*local_c->lpVtbl->GetTypeInfoOfGuid)(local_c,(GUID *)*piVar4,&local_8);
      if (HVar2 < 0) goto LAB_2218080b;
      uVar6 = 0;
      pIVar5 = local_8;
      pHVar3 = GetDlgItem(param_1,(uint)*(ushort *)(piVar4 + -1));
      HVar2 = FUN_2218081a(pHVar3,(int *)pIVar5,uVar6);
      (*local_8->lpVtbl->Release)(local_8);
      if (HVar2 < 0) goto LAB_2218080b;
      piVar4 = piVar4 + 2;
      iVar1 = *piVar4;
    }
    HVar2 = 0;
LAB_2218080b:
    (*local_c->lpVtbl->Release)(local_c);
  }
  return HVar2;
}



int __cdecl FUN_2218081a(HWND param_1,int *param_2,uint param_3)

{
  uint cbMultiByte;
  int *piVar1;
  int iVar2;
  LPCWSTR pWVar3;
  CHAR local_110 [128];
  LPSTR local_90 [31];
  byte local_14;
  int local_10;
  undefined4 *local_c;
  LPCWSTR local_8;
  
  piVar1 = param_2;
  SendMessageA(param_1,0x14b,0,0);
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_10);
  if (-1 < iVar2) {
    if ((param_3 == 0) || ((int)(uint)*(ushort *)(local_10 + 0x2e) < (int)param_3)) {
      param_3 = (uint)*(ushort *)(local_10 + 0x2e);
    }
    param_2 = (int *)0x0;
    if (0 < (int)param_3) {
      do {
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,&local_c);
        if (iVar2 < 0) goto LAB_22180968;
        if ((*(byte *)(local_c + 7) & 0x40) == 0) {
          local_8 = (LPCWSTR)0x0;
          (**(code **)(*piVar1 + 0x30))(piVar1,*local_c,&local_8,0,0,0);
          pWVar3 = local_8;
          if (local_8 == (LPCWSTR)0x0) {
            pWVar3 = (LPCWSTR)&DAT_22182688;
          }
          iVar2 = lstrlenW(pWVar3);
          cbMultiByte = iVar2 * 2 + 2;
          FUN_22171f40(local_90,cbMultiByte);
          pWVar3 = local_8;
          if (local_8 == (LPCWSTR)0x0) {
            pWVar3 = (LPCWSTR)&DAT_2218268c;
          }
          WideCharToMultiByte(0,0,pWVar3,-1,local_90[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
          wsprintfA(local_110,s__ld____s_2218260c,*(undefined4 *)(local_c[2] + 8),local_90[0]);
          SendMessageA(param_1,0x143,0,(LPARAM)local_110);
          SysFreeString(local_8);
          if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
            HeapFree(DAT_22182030,0,local_90[0]);
          }
        }
        (**(code **)(*piVar1 + 0x54))(piVar1,local_c);
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < (int)param_3);
    }
    iVar2 = 0;
LAB_22180968:
    (**(code **)(*piVar1 + 0x4c))(piVar1,local_10);
  }
  return iVar2;
}



HRESULT __cdecl
FUN_22180978(ITypeInfo *param_1,uint *param_2,HRESULT param_3,GUID *param_4,ITypeInfoVtbl *param_5)

{
  uint cbMultiByte;
  ITypeInfo *pIVar1;
  uint *puVar2;
  ITypeLib *pIVar3;
  ITypeInfoVtbl *pIVar4;
  LPVOID pvVar5;
  HRESULT HVar6;
  int iVar7;
  _func_6467 *p_Var8;
  ITypeInfoVtbl *pIVar9;
  CHAR local_118 [128];
  LPSTR local_98 [31];
  byte local_1c;
  LPCWSTR local_18;
  VARDESC *local_14;
  ITypeInfoVtbl *local_10;
  ITypeLib *local_c;
  TYPEATTR *local_8;
  
  pIVar1 = param_1;
  local_8 = (TYPEATTR *)0x0;
  local_10 = (ITypeInfoVtbl *)0x0;
  if ((param_1 == (ITypeInfo *)0x0) || (param_2 == (uint *)0x0)) {
LAB_22180af3:
    HVar6 = 0;
  }
  else {
    *param_2 = 0;
    param_1->lpVtbl = (ITypeInfoVtbl *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    param_3 = LoadRegTypeLib((GUID *)PTR_DAT_22182294,
                             *(WORD *)((&PTR_PTR_221820fc)[param_3 * 2] + 0x18),
                             *(WORD *)((&PTR_PTR_221820fc)[param_3 * 2] + 0x1c),(uint)DAT_22182190,
                             &local_c);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_22182018);
    if (param_3 < 0) {
      return param_3;
    }
    param_3 = (*local_c->lpVtbl->GetTypeInfoOfGuid)(local_c,param_4,&param_1);
    if ((param_3 < 0) || (param_3 = (*param_1->lpVtbl->GetTypeAttr)(param_1,&local_8), param_3 < 0))
    {
LAB_22180bfb:
      if (pIVar1->lpVtbl != (ITypeInfoVtbl *)0x0) {
        if (pIVar1[1].lpVtbl != (ITypeInfoVtbl *)0x0) {
          iVar7 = 0;
          if (0 < (int)pIVar1->lpVtbl) {
            do {
              p_Var8 = (&(pIVar1[1].lpVtbl)->QueryInterface)[iVar7];
              if (p_Var8 != (_func_6467 *)0x0) {
                CoTaskMemFree(p_Var8);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)pIVar1->lpVtbl);
          }
          CoTaskMemFree(pIVar1[1].lpVtbl);
        }
        pIVar1->lpVtbl = (ITypeInfoVtbl *)0x0;
      }
      puVar2 = param_2;
      if (*param_2 != 0) {
        if ((LPVOID)param_2[1] != (LPVOID)0x0) {
          CoTaskMemFree((LPVOID)param_2[1]);
        }
        *puVar2 = 0;
      }
      if (local_8 != (TYPEATTR *)0x0) {
        (*param_1->lpVtbl->ReleaseTypeAttr)(param_1,local_8);
      }
      pIVar1 = param_1;
      if (param_1 != (ITypeInfo *)0x0) {
        param_1 = (ITypeInfo *)0x0;
        (*pIVar1->lpVtbl->Release)(pIVar1);
      }
      pIVar3 = local_c;
      if (local_c == (ITypeLib *)0x0) {
        return param_3;
      }
      local_c = (ITypeLib *)0x0;
      (*pIVar3->lpVtbl->Release)(pIVar3);
      return param_3;
    }
    if (((int)param_5 < 1) || ((int)(uint)local_8->cVars <= (int)param_5)) {
      param_5 = (ITypeInfoVtbl *)(uint)local_8->cVars;
    }
    pIVar9 = param_5;
    pIVar1->lpVtbl = param_5;
    *param_2 = (uint)param_5;
    pIVar4 = (ITypeInfoVtbl *)CoTaskMemAlloc((int)param_5 << 2);
    pIVar1[1].lpVtbl = pIVar4;
    if (pIVar4 != (ITypeInfoVtbl *)0x0) {
      pvVar5 = CoTaskMemAlloc((int)pIVar9 << 2);
      param_2[1] = (uint)pvVar5;
      if (pvVar5 != (LPVOID)0x0) {
        param_4 = (GUID *)0x0;
        if (0 < (int)pIVar9) {
          do {
            param_3 = (*param_1->lpVtbl->GetVarDesc)(param_1,(UINT)param_4,&local_14);
            if (param_3 < 0) goto LAB_22180bfb;
            if ((local_14->wVarFlags & 0x40) == 0) {
              (*param_1->lpVtbl->GetDocumentation)
                        (param_1,local_14->memid,&local_18,(BSTR *)0x0,(DWORD *)0x0,(BSTR *)0x0);
              iVar7 = lstrlenW(local_18);
              cbMultiByte = iVar7 * 2 + 2;
              FUN_22171f40(local_98,cbMultiByte);
              WideCharToMultiByte(0,0,local_18,-1,local_98[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
              wsprintfA(local_118,s__ld____s_22182618,
                        *(undefined4 *)((int)&((local_14->u).lpvarValue)->n1 + 8),local_98[0]);
              pIVar9 = local_10;
              iVar7 = (int)local_10 * 4;
              p_Var8 = (_func_6467 *)FUN_2217bb00(local_118,(LPWSTR)0x1);
              (&(pIVar1[1].lpVtbl)->QueryInterface)[(int)pIVar9] = p_Var8;
              *(undefined4 *)(iVar7 + param_2[1]) =
                   *(undefined4 *)((int)&((local_14->u).lpvarValue)->n1 + 8);
              SysFreeString(local_18);
              (*param_1->lpVtbl->ReleaseVarDesc)(param_1,local_14);
              if ((&(pIVar1[1].lpVtbl)->QueryInterface)[(int)pIVar9] == (_func_6467 *)0x0) {
                param_3 = -0x7ff8fff2;
                if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
                  HeapFree(DAT_22182030,0,local_98[0]);
                }
                goto LAB_22180bfb;
              }
              local_10 = (ITypeInfoVtbl *)((int)&local_10->QueryInterface + 1);
              pIVar9 = param_5;
              if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
                HeapFree(DAT_22182030,0,local_98[0]);
                pIVar9 = param_5;
              }
            }
            else {
              (*param_1->lpVtbl->ReleaseVarDesc)(param_1,local_14);
            }
            param_4 = (GUID *)((int)&param_4->Data1 + 1);
          } while ((int)param_4 < (int)pIVar9);
        }
        pIVar1->lpVtbl = local_10;
        *param_2 = (uint)local_10;
        if (local_8 != (TYPEATTR *)0x0) {
          (*param_1->lpVtbl->ReleaseTypeAttr)(param_1,local_8);
        }
        pIVar1 = param_1;
        if (param_1 != (ITypeInfo *)0x0) {
          param_1 = (ITypeInfo *)0x0;
          (*pIVar1->lpVtbl->Release)(pIVar1);
        }
        pIVar3 = local_c;
        if (local_c != (ITypeLib *)0x0) {
          local_c = (ITypeLib *)0x0;
          (*pIVar3->lpVtbl->Release)(pIVar3);
        }
        goto LAB_22180af3;
      }
    }
    HVar6 = -0x7ff8fff2;
  }
  return HVar6;
}



undefined4 __cdecl FUN_22180c7d(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = 2;
  param_1[4] = param_2;
  return 0;
}



bool __cdecl FUN_22180c92(short *param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == param_2) {
    cVar2 = '\x01';
  }
  else if ((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) {
    cVar2 = '\0';
  }
  else {
    if (*param_1 != 0) {
      psVar3 = param_1;
      do {
        sVar1 = *(short *)(((int)param_2 - (int)param_1) + (int)psVar3);
        if ((sVar1 == 0) || (*psVar3 != sVar1)) break;
        iVar4 = iVar4 + 1;
        psVar3 = psVar3 + 1;
      } while (*psVar3 != 0);
    }
    cVar2 = '\x01' - (param_1[iVar4] != param_2[iVar4]);
  }
  return (bool)cVar2;
}



void WSASetLastError(int iError)

{
                    // WARNING: Could not recover jumptable at 0x22180ced. Too many branches
                    // WARNING: Treating indirect jump as call
  WSASetLastError(iError);
  return;
}



int WSAGetLastError(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180cf3. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WSAGetLastError();
  return iVar1;
}



int ioctlsocket(SOCKET s,long cmd,u_long *argp)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180cf9. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = ioctlsocket(s,cmd,argp);
  return iVar1;
}



int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180cff. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}



int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d05. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}



u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d0b. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = htons(hostshort);
  return uVar1;
}



ulong inet_addr(char *cp)

{
  ulong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d11. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = inet_addr(cp);
  return uVar1;
}



int gethostname(char *name,int namelen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d17. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = gethostname(name,namelen);
  return iVar1;
}



HANDLE WSAAsyncGetHostByName(HWND hWnd,u_int wMsg,char *name,char *buf,int buflen)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d1d. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = WSAAsyncGetHostByName(hWnd,wMsg,name,buf,buflen);
  return pvVar1;
}



hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d23. Too many branches
                    // WARNING: Treating indirect jump as call
  phVar1 = gethostbyname(name);
  return phVar1;
}



HANDLE WSAAsyncGetHostByAddr(HWND hWnd,u_int wMsg,char *addr,int len,int type,char *buf,int buflen)

{
  HANDLE pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d29. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = WSAAsyncGetHostByAddr(hWnd,wMsg,addr,len,type,buf,buflen);
  return pvVar1;
}



hostent * gethostbyaddr(char *addr,int len,int type)

{
  hostent *phVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d2f. Too many branches
                    // WARNING: Treating indirect jump as call
  phVar1 = gethostbyaddr(addr,len,type);
  return phVar1;
}



int WSACancelAsyncRequest(HANDLE hAsyncTaskHandle)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d35. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WSACancelAsyncRequest(hAsyncTaskHandle);
  return iVar1;
}



char * inet_ntoa(in_addr in)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d3b. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = inet_ntoa(in);
  return pcVar1;
}



SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d41. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = socket(af,type,protocol);
  return SVar1;
}



int WSAAsyncSelect(SOCKET s,HWND hWnd,u_int wMsg,long lEvent)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d47. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = WSAAsyncSelect(s,hWnd,wMsg,lEvent);
  return iVar1;
}



int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d4d. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}



int listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d53. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = listen(s,backlog);
  return iVar1;
}



SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d59. Too many branches
                    // WARNING: Treating indirect jump as call
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}



int closesocket(SOCKET s)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d5f. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = closesocket(s);
  return iVar1;
}



int getpeername(SOCKET s,sockaddr *name,int *namelen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d65. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = getpeername(s,name,namelen);
  return iVar1;
}



int getsockname(SOCKET s,sockaddr *name,int *namelen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d6b. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = getsockname(s,name,namelen);
  return iVar1;
}



int setsockopt(SOCKET s,int level,int optname,char *optval,int optlen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d71. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = setsockopt(s,level,optname,optval,optlen);
  return iVar1;
}



int getsockopt(SOCKET s,int level,int optname,char *optval,int *optlen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d77. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = getsockopt(s,level,optname,optval,optlen);
  return iVar1;
}



int connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d7d. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = connect(s,name,namelen);
  return iVar1;
}



int recvfrom(SOCKET s,char *buf,int len,int flags,sockaddr *from,int *fromlen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d83. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = recvfrom(s,buf,len,flags,from,fromlen);
  return iVar1;
}



int sendto(SOCKET s,char *buf,int len,int flags,sockaddr *to,int tolen)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d89. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = sendto(s,buf,len,flags,to,tolen);
  return iVar1;
}



u_short ntohs(u_short netshort)

{
  u_short uVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d8f. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = ntohs(netshort);
  return uVar1;
}



int shutdown(SOCKET s,int how)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d95. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = shutdown(s,how);
  return iVar1;
}



int __WSAFDIsSet(SOCKET param_1,fd_set *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180d9b. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = __WSAFDIsSet(param_1,param_2);
  return iVar1;
}



int select(int nfds,fd_set *readfds,fd_set *writefds,fd_set *exceptfds,timeval *timeout)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x22180da1. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = select(nfds,readfds,writefds,exceptfds,timeout);
  return iVar1;
}


