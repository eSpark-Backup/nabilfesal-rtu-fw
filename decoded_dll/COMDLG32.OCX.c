typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
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

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

typedef struct tagTEXTMETRICA TEXTMETRICA;

typedef int (*OLDFONTENUMPROCA)(LOGFONTA *, TEXTMETRICA *, DWORD, LPARAM);

struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef OLDFONTENUMPROCA FONTENUMPROCA;

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct tagLOGFONTA *LPLOGFONTA;

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

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

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
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

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

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

typedef WCHAR *PCNZWCH;

typedef short SHORT;

typedef DWORD ACCESS_MASK;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef CHAR *PCNZCH;

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

typedef STGMEDIUM *LPSTGMEDIUM;

typedef ULONG_PTR *PDWORD_PTR;

typedef ULONG_PTR SIZE_T;

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

typedef DWORD COLORREF;

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

typedef struct tagCHOOSECOLORA tagCHOOSECOLORA, *PtagCHOOSECOLORA;

typedef UINT_PTR (*LPCCHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagCHOOSECOLORA {
    DWORD lStructSize;
    HWND hwndOwner;
    HWND hInstance;
    COLORREF rgbResult;
    COLORREF *lpCustColors;
    DWORD Flags;
    LPARAM lCustData;
    LPCCHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
};

typedef UINT_PTR (*LPSETUPHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagPDA tagPDA, *PtagPDA;

typedef UINT_PTR (*LPPRINTHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagPDA {
    DWORD lStructSize;
    HWND hwndOwner;
    HGLOBAL hDevMode;
    HGLOBAL hDevNames;
    HDC hDC;
    DWORD Flags;
    WORD nFromPage;
    WORD nToPage;
    WORD nMinPage;
    WORD nMaxPage;
    WORD nCopies;
    HINSTANCE hInstance;
    LPARAM lCustData;
    LPPRINTHOOKPROC lpfnPrintHook;
    LPSETUPHOOKPROC lpfnSetupHook;
    LPCSTR lpPrintTemplateName;
    LPCSTR lpSetupTemplateName;
    HGLOBAL hPrintTemplate;
    HGLOBAL hSetupTemplate;
};

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

typedef struct tagCHOOSEFONTA tagCHOOSEFONTA, *PtagCHOOSEFONTA;

typedef struct tagCHOOSEFONTA CHOOSEFONTA;

typedef UINT_PTR (*LPCFHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagCHOOSEFONTA {
    DWORD lStructSize;
    HWND hwndOwner;
    HDC hDC;
    LPLOGFONTA lpLogFont;
    INT iPointSize;
    DWORD Flags;
    COLORREF rgbColors;
    LPARAM lCustData;
    LPCFHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    HINSTANCE hInstance;
    LPSTR lpszStyle;
    WORD nFontType;
    WORD ___MISSING_ALIGNMENT__;
    INT nSizeMin;
    INT nSizeMax;
};

typedef struct tagPDA *LPPRINTDLGA;

typedef struct tagCHOOSECOLORA *LPCHOOSECOLORA;

typedef struct tagOFNA *LPOPENFILENAMEA;

typedef CHOOSEFONTA *LPCHOOSEFONTA;

typedef enum tagREGKIND {
    REGKIND_DEFAULT=0,
    REGKIND_REGISTER=1,
    REGKIND_NONE=2
} tagREGKIND;

typedef enum tagREGKIND REGKIND;

typedef struct IUnknown *LPUNKNOWN;



undefined DAT_217b3008;
uint DAT_217b31ac;
undefined DAT_217b31b0;
undefined DAT_217b31b4;
undefined DAT_217b31b8;
HANDLE DAT_217b3020;
HMODULE DAT_217b31a4;
undefined DAT_217b31a8;
int DAT_217b31a0;
HMODULE DAT_217b31bc;
undefined1 DAT_217a1308;
undefined4 DAT_217a2298;
undefined4 DAT_217a2258;
undefined4 DAT_217a2248;
undefined4 DAT_217a2268;
undefined4 DAT_217a2278;
undefined1 DAT_217a22b8;
undefined1 DAT_217a22a8;
undefined1 DAT_217a7a38;
undefined1 DAT_217a22c8;
undefined1 DAT_217a22d8;
undefined1 DAT_217a7a68;
undefined1 DAT_217a78f0;
undefined1 DAT_217a7a78;
undefined1 DAT_217a2348;
int *DAT_217b3004;
int DAT_217b3000;
undefined4 DAT_217a79d8;
pointer PTR_PTR_217b3154;
undefined *PTR_LAB_217a1aa8;
undefined *PTR_LAB_217a1ac0;
undefined *PTR_LAB_217a1af0;
undefined *PTR_LAB_217a1b10;
undefined *PTR_LAB_217a1b28;
undefined *PTR_LAB_217a1b38;
undefined *PTR_LAB_217a1b48;
undefined *PTR_LAB_217a1b60;
undefined *PTR_LAB_217a1b78;
undefined *PTR_LAB_217a1b88;
undefined *PTR_LAB_217a1b98;
undefined *PTR_LAB_217a1bc0;
undefined *PTR_LAB_217a1be8;
undefined *PTR_LAB_217a1c08;
undefined *PTR_LAB_217a1c48;
undefined *PTR_LAB_217a1d78;
undefined *PTR_LAB_217a1da0;
undefined *PTR_LAB_217a1dd0;
undefined *PTR_LAB_217a1df0;
undefined *PTR_LAB_217a1e50;
undefined *PTR_FUN_217a1e68;
undefined *PTR_LAB_217a1ef0;
undefined *PTR_LAB_217a1f00;
undefined *PTR_LAB_217a1f18;
undefined *PTR_LAB_217a1f30;
undefined *PTR_LAB_217a1f40;
undefined *PTR_LAB_217a1f50;
undefined *PTR_LAB_217a1f78;
undefined *PTR_LAB_217a1fa0;
undefined *PTR_LAB_217a1fc0;
undefined *PTR_LAB_217a2000;
undefined *PTR_LAB_217a2028;
undefined *PTR_LAB_217a2058;
undefined *PTR_LAB_217a2078;
undefined *PTR_LAB_217a20d8;
undefined *PTR_FUN_217a20f0;
undefined *PTR_LAB_217a2178;
undefined *PTR_FUN_217a2190;
undefined *PTR_LAB_217a21c8;
undefined *PTR_FUN_217a21e8;
undefined *PTR_FUN_217a2220;
undefined4 DAT_217b3000;
undefined *PTR_LAB_217a1490;
undefined2 DAT_217b3150;
HWND DAT_217b31e0;
char DAT_217b31dc;
HINSTANCE DAT_217b31a4;
string s_CtlFrameWork_Parking_217b37c0;
HMODULE DAT_217b31d8;
int DAT_217b31e8;
HMODULE DAT_217b31e4;
HMODULE DAT_217b31a0;
undefined DAT_217b31c0;
int DAT_217b36dc;
int DAT_217b36e0;
char DAT_217b36e4;
short DAT_217b3150;
UINT DAT_217b36f8;
undefined *PTR_LAB_217a30f0;
undefined *PTR_LAB_217a3108;
undefined *PTR_LAB_217a3138;
undefined *PTR_LAB_217a3158;
undefined *PTR_LAB_217a3170;
undefined *PTR_LAB_217a3180;
undefined *PTR_LAB_217a32b0;
undefined *PTR_LAB_217a32c0;
undefined *PTR_LAB_217a32d8;
undefined *PTR_LAB_217a32f0;
undefined *PTR_LAB_217a3300;
undefined *PTR_LAB_217a3310;
undefined *PTR_LAB_217a3338;
undefined *PTR_LAB_217a3360;
undefined *PTR_LAB_217a3380;
undefined *PTR_LAB_217a33c0;
undefined *PTR_LAB_217a33e8;
undefined *PTR_LAB_217a3418;
undefined *PTR_LAB_217a3438;
undefined *PTR_LAB_217a3498;
undefined *PTR_FUN_217a34b0;
int DAT_217b3560;
uint DAT_217b3700;
undefined2 DAT_217b36d8;
undefined1 DAT_217a2928;
undefined s_(6z!Licenses_217b3708;
int DAT_217b36e8;
undefined4 DAT_217b36f0;
string s_(6z!Licenses_217b3708;
int DAT_217b36f0;
unicode u__ExtentX_217b3718;
unicode u__ExtentY_217b372c;
pointer PTR_u_CancelError_217b3438;
undefined DAT_217a4330;
string s_%u\%s.dll_217b3758;
HINSTANCE DAT_217b31a0;
LCID DAT_217b3700;
int DAT_217b3764;
string s_%s%s.DLL_217b3740;
string s_%s%s.DLL_217b374c;
undefined *DAT_217b3790;
undefined *DAT_217b3794;
undefined *DAT_217b378c;
undefined4 DAT_217b31d8;
undefined FUN_217a5048;
unicode u__ExtentX_217b3798;
unicode u__ExtentY_217b37ac;
int DAT_217b31bc;
undefined4 DAT_217b31a4;
undefined1 DAT_217a7a58;
undefined1 DAT_217a7a48;
LCID DAT_217b3e84;
pointer PTR_u_CancelError_217b3b30;
undefined *PTR_PTR_217b3154;
undefined FUN_217add31;
undefined DAT_217a79c8;
undefined DAT_217b3e28;
undefined FUN_217a92ce;
undefined *PTR_LAB_217a74c8;
undefined *PTR_LAB_217a74e0;
undefined *PTR_FUN_217a7520;
undefined *PTR_LAB_217a7538;
undefined *PTR_LAB_217a7550;
undefined *PTR_LAB_217a7568;
undefined *PTR_FUN_217a75a8;
undefined *PTR_LAB_217a7848;
undefined *PTR_FUN_217a7888;
undefined *PTR_LAB_217a75c0;
undefined *PTR_LAB_217a75d8;
undefined *PTR_FUN_217a7618;
undefined *PTR_LAB_217a7630;
undefined *PTR_LAB_217a7648;
undefined *PTR_FUN_217a7688;
undefined *PTR_LAB_217a76a0;
undefined *PTR_LAB_217a76b8;
undefined *PTR_FUN_217a76f8;
undefined *PTR_LAB_217a7710;
undefined *PTR_FUN_217a7750;
pointer PTR_FUN_217a7768;
undefined DAT_217a79e8;
int DAT_217b3e8c;
undefined DAT_217a79f8;
undefined DAT_217b3aa2;
int DAT_217b3e80;
undefined DAT_217b37d6;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_217b37d8;
undefined DAT_217b3aa8;
string s_CLSID\%s_217b380c;
string s_%s_Object_217b3818;
string s_InprocServer32_217b3824;
string s_Apartment_217b3834;
string s_ThreadingModel_217b3840;
string s_ThreadingModel_217b3850;
undefined DAT_217b3aa4;
undefined LAB_217a7a08;
undefined DAT_217a7a18;
undefined DAT_217a7a28;
undefined DAT_217b3860;
string s_%s_Object_217b3864;
string s_CLSID_217b3870;
string s_CurVer_217b3878;
string s_%s.%s.%ld_217b3880;
string s_%s_Object_217b388c;
string s_CLSID_217b3898;
string s_CLSID\%s_217b38a0;
string s_VersionIndependentProgID_217b38ac;
string s_%s.%s_217b38c8;
string s_ProgID_217b38d0;
string s_%s.%s.%ld_217b38d8;
string s_TypeLib_217b38e4;
string s_Version_217b38ec;
string s_%ld.%ld_217b38f4;
undefined DAT_217b3aac;
undefined DAT_217b3ab0;
undefined DAT_217b3ab4;
undefined DAT_217b3ab8;
undefined DAT_217b3abc;
undefined DAT_217b3ac0;
undefined DAT_217b3ac4;
undefined DAT_217b3ac8;
undefined DAT_217b3acc;
undefined DAT_217b3ad0;
string s_CLSID\%s_217b38fc;
string s_Control_217b3908;
string s_MiscStatus_217b3910;
undefined DAT_217b391c;
undefined DAT_217b3920;
undefined DAT_217b3924;
string s_ToolboxBitmap32_217b392c;
undefined DAT_217b3ad4;
undefined DAT_217b3ad8;
undefined DAT_217b3adc;
undefined DAT_217b3ae0;
pointer PTR_DAT_217b3b18;
string s_CLSID_217b393c;
string s_\InprocServer32_217b3944;
string s_%s.%s.%ld_217b3954;
string s_%s.%s_217b3960;
string s_%s.%s\CurVer_217b3968;
string s_%s.%s.%ld_217b3978;
undefined DAT_217b3ae4;
string s_%s.%s.%ld_217b3984;
undefined DAT_217b3ae8;
string s_%s.%s.%ld_217b3990;
string s_%s.%s_217b399c;
undefined DAT_217b3aec;
undefined DAT_217b3af0;
undefined4 DAT_217b39a4;
undefined2 DAT_217b39a8;
string s_CLSID\%s_217b39ac;
string s_Implemented_Categories_217b39b8;
undefined DAT_217b3af4;
string s_%s\InprocServer_217b39d0;
undefined DAT_217b39e0;
FARPROC DAT_217b3e98;
string s_VERSION.DLL_217b39e4;
string s_GetFileVersionInfoSizeA_217b39f0;
FARPROC DAT_217b3e94;
string s_VERSION.DLL_217b3a08;
string s_GetFileVersionInfoA_217b3a14;
FARPROC DAT_217b3e90;
string s_VERSION.DLL_217b3a28;
string s_VerQueryValueA_217b3a34;
void *DAT_217b3e9c;
int *DAT_217b3e9c;
undefined1 DAT_217a3618;
undefined DAT_217a77c0;
undefined4 DAT_217b3700;
undefined4 DAT_217a77d0;
undefined DAT_217a7af8;
undefined LAB_217b0985;
undefined DAT_217a7b08;
undefined DAT_217a7b18;
undefined DAT_217b3700;
string s_DISPLAY_217b3a44;
undefined *PTR_LAB_217a78a0;
undefined1 DAT_217a7b68;
undefined1 DAT_217a7b58;
undefined DAT_217b3a4c;
undefined DAT_217b3a50;
undefined DAT_217b3a54;
undefined DAT_217b3a58;
string s_>LangRef_217b3a5c;
int DAT_217b3ea0;
undefined FUN_217b063c;
int *DAT_217b3ea0;
short DAT_217b36d8;
undefined4 DAT_217b3004;
undefined DAT_217a7958;
undefined DAT_217a7968;
undefined DAT_217a7978;
undefined FUN_217ae057;
undefined *PTR_LAB_217b3b10;
string s_CtlFrameWork_Parking_217b3a68;
string s_CtlFrameWork_Parking_217b3a80;
undefined FUN_217b0ae0;
undefined *PTR_FUN_217a7900;
undefined *PTR_LAB_217a7918;
undefined *PTR_LAB_217a7938;
HMODULE DAT_217b3af8;
int DAT_217b3b00;
FARPROC DAT_217b3ea4;
string s_%ld_-_%s_217b3a98;
undefined DAT_217b3b08;
undefined DAT_217b3b0c;
int DAT_217b31ac;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(HMODULE param_1,int param_2)

{
  ushort uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    FUN_217a27a9();
    FUN_217a2801();
    if ((DAT_217b31a0 != 0) && ((HMODULE)DAT_217b31a0 != DAT_217b31a4)) {
      uVar3 = FUN_217a68f5();
      return uVar3;
    }
    if (DAT_217b31bc != (HMODULE)0x0) {
      FreeLibrary(DAT_217b31bc);
      DAT_217b31bc = (HMODULE)0x0;
    }
  }
  else if (param_2 == 1) {
    DVar2 = GetVersion();
    bVar4 = 0x7fffffff < DVar2;
    uVar1 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    _DAT_217b31b4 = 0;
    if (bVar4) {
      _DAT_217b31b4 = (uint)(0x409 < uVar1);
      _DAT_217b31b8 = 1;
    }
    else {
      _DAT_217b31b8 = (uint)(0x333 < uVar1);
    }
    _DAT_217b31b0 = (uint)bVar4;
    DAT_217b31ac = (uint)!bVar4;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    if ((DAT_217b3020 == (HANDLE)0x0) &&
       (DAT_217b3020 = GetProcessHeap(), DAT_217b3020 == (HANDLE)0x0)) {
      return 0;
    }
    DAT_217b31a4 = param_1;
    DisableThreadLibraryCalls(param_1);
    _DAT_217b31a8 = GetSystemMetrics(0x2a);
    FUN_217a38be();
    return 1;
  }
  return 1;
}



undefined4 FUN_217a15a7(int param_1,int *param_2,int *param_3)

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



int FUN_217a15ed(int param_1)

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



undefined4 __thiscall FUN_217a162a(void *this,uint *param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  bool bVar7;
  
  *param_2 = 0;
  uVar2 = *param_1;
  if (uVar2 == 0x83039c2) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = &DAT_217a1308;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_217a1649;
LAB_217a5c87:
    uVar2 = (int)this + 0xc0;
LAB_217a5cac:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & uVar2);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = (int)piVar4;
    return 0;
  }
LAB_217a1649:
  if (uVar2 == 0x376bd3aa) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_217a2298;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 0xcc;
      goto LAB_217a5cac;
    }
  }
  if (uVar2 == 0x7ff19dc0) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_217a2258;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) goto LAB_217a5c87;
  }
  if (uVar2 == 0xf9043c86) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_217a2248;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) goto LAB_217a5c87;
  }
  if (uVar2 == 0x4d07fc10) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_217a2268;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 200;
      goto LAB_217a5cac;
    }
  }
  if (uVar2 == 0x10e) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = "\x0e\x01";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 0xd0;
      goto LAB_217a5cac;
    }
  }
  if (uVar2 == 0xcb5bdc81) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_217a2278;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 0xd4;
      goto LAB_217a5cac;
    }
  }
  uVar1 = FUN_217a16a5(this,param_1,param_2);
  return uVar1;
}



undefined4 __thiscall FUN_217a16a5(void *this,uint *param_1,int *param_2)

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
      if (!bVar5) goto LAB_217a6da0;
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
        if (uVar1 != 0x10a) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      default:
        goto switchD_217a1750_caseD_10b;
      case 0x10c:
        if (uVar1 != 0x10c) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      case 0x10d:
        if (uVar1 != 0x10d) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x48);
          *param_2 = (int)this + 0x48;
          (**(code **)(iVar3 + 4))((int)this + 0x48);
          return 0;
        }
        break;
      case 0x112:
        if (uVar1 != 0x112) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x38);
          *param_2 = (int)this + 0x38;
          (**(code **)(iVar3 + 4))((int)this + 0x38);
          return 0;
        }
        break;
      case 0x113:
        if (uVar1 != 0x113) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x40);
          *param_2 = (int)this + 0x40;
          (**(code **)(iVar3 + 4))((int)this + 0x40);
          return 0;
        }
        break;
      case 0x114:
        if (uVar1 != 0x114) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
        break;
      case 0x117:
        if (uVar1 != 0x117) goto LAB_217a6da0;
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
        if (!bVar5) goto LAB_217a6da0;
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
      pcVar4 = &DAT_217a7a78;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_217a6da0;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x40);
        *param_2 = (int)this + 0x40;
        (**(code **)(iVar3 + 4))((int)this + 0x40);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xd97180) goto switchD_217a1750_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_217a78f0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_217a6da0;
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
      pcVar4 = &DAT_217a7a68;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_217a6da0;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x37d84f60) goto switchD_217a1750_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_217a22d8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_217a6da0;
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
        uVar2 = FUN_217a6cf0(this,(int)this);
        return uVar2;
      }
switchD_217a1750_caseD_10b:
      uVar2 = FUN_217a1a56(this,(int *)param_1,param_2);
      return uVar2;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_217a22c8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_217a6da0;
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
        uVar2 = FUN_217a6d31(this,(int)this);
        return uVar2;
      }
      goto switchD_217a1750_caseD_10b;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_217a22b8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_217a6da0;
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
    pcVar4 = &DAT_217a7a38;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_217a6da0;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x58);
      *param_2 = (int)this + 0x58;
      (**(code **)(iVar3 + 4))((int)this + 0x58);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xcf51ed10) goto switchD_217a1750_caseD_10b;
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_217a22a8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_217a6da0;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 100);
      *param_2 = (int)this + 100;
      (**(code **)(iVar3 + 4))((int)this + 100);
      return 0;
    }
  }
  *param_2 = 0;
LAB_217a6da0:
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}



undefined4 __thiscall FUN_217a1a56(void *this,int *param_1,undefined4 *param_2)

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
    pcVar4 = &DAT_217a2348;
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
  uVar1 = FUN_217a28dd(this,param_1,param_2);
  return uVar1;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x2358  1  DllCanUnloadNow
  if (DAT_217b3004 != (int *)0x0) {
    (**(code **)(*DAT_217b3004 + 8))(DAT_217b3004);
    DAT_217b3004 = (int *)0x0;
  }
  return (uint)(DAT_217b3000 != 0);
}



undefined4 FUN_217a2371(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar3 = *(int **)((&PTR_PTR_217b3154)[*(int *)(param_1 + -8) * 2] + 0x24);
  if ((piVar3 == (int *)0x0) || (*param_2 != *piVar3)) {
LAB_217a6ff0:
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
      if (bVar6) goto LAB_217a23ab;
    }
    if (*param_2 == -0x640443fe) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar5 = (char *)&DAT_217a79d8;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*param_2 == *pcVar5;
        param_2 = (int *)((int)param_2 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        piVar3 = (int *)(param_1 + 0x10);
        goto LAB_217a23b1;
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
    if (!bVar6) goto LAB_217a6ff0;
LAB_217a23ab:
    piVar3 = (int *)(param_1 + 4);
LAB_217a23b1:
    *param_3 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_217a23e2(int param_1,int *param_2)

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
    goto LAB_217a240b;
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
    goto LAB_217a240b;
  }
  lpMem = *(uint **)(param_1 + 4);
  piVar2 = (int *)*lpMem;
  if (piVar2 == param_2) {
LAB_217a7143:
    uVar3 = lpMem[1];
  }
  else {
    if ((int *)lpMem[1] != param_2) {
      return 0x80040200;
    }
    if (piVar2 == param_2) goto LAB_217a7143;
    uVar3 = ~-(uint)((int *)lpMem[1] != param_2) & (uint)piVar2;
  }
  if (uVar3 == 0) {
    return 0x80040200;
  }
  HeapFree(DAT_217b3020,0,lpMem);
  *(uint *)(param_1 + 4) = uVar3;
LAB_217a240b:
  iVar1 = *param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  (**(code **)(iVar1 + 8))(param_2);
  return 0;
}



undefined4 * __thiscall FUN_217a2477(void *this,byte param_1)

{
  FUN_217a249f((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217a249f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a1e68;
  param_1[7] = &PTR_LAB_217a1e50;
  param_1[0xe] = &PTR_LAB_217a1df0;
  param_1[0xf] = &PTR_LAB_217a1dd0;
  param_1[0x10] = &PTR_LAB_217a1da0;
  param_1[0x11] = &PTR_LAB_217a1d78;
  param_1[0x12] = &PTR_LAB_217a1c08;
  param_1[0x13] = &PTR_LAB_217a1be8;
  param_1[0x14] = &PTR_LAB_217a1bc0;
  param_1[0x15] = &PTR_LAB_217a1b98;
  param_1[0x16] = &PTR_LAB_217a1b88;
  param_1[0x17] = &PTR_LAB_217a1b78;
  param_1[0x18] = &PTR_LAB_217a1b60;
  param_1[0x19] = &PTR_LAB_217a1b48;
  param_1[0x1a] = &PTR_LAB_217a1b38;
  param_1[0x30] = &PTR_LAB_217a1c48;
  param_1[0x31] = &PTR_LAB_217a1b28;
  param_1[0x32] = &PTR_LAB_217a1b10;
  param_1[0x33] = &PTR_LAB_217a1af0;
  param_1[0x34] = &PTR_LAB_217a1ac0;
  param_1[0x35] = &PTR_LAB_217a1aa8;
  SysFreeString((BSTR)param_1[0x44]);
  SysFreeString((BSTR)param_1[0x46]);
  SysFreeString((BSTR)param_1[0x47]);
  SysFreeString((BSTR)param_1[0x48]);
  SysFreeString((BSTR)param_1[0x43]);
  SysFreeString((BSTR)param_1[0x45]);
  SysFreeString((BSTR)param_1[0x49]);
  SysFreeString((BSTR)param_1[0x4a]);
  SysFreeString((BSTR)param_1[0x4b]);
  FUN_217a25b8(param_1 + 0x51);
  if ((HICON)param_1[0x4e] != (HICON)0x0) {
    DestroyIcon((HICON)param_1[0x4e]);
  }
  FUN_217a25d6(param_1);
  return;
}



undefined4 __fastcall FUN_217a25b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[6];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    param_1[2] = param_1[2] + -1;
    puVar2 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}



void __fastcall FUN_217a25d6(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_217a20f0;
  param_1[7] = &PTR_LAB_217a20d8;
  param_1[0xe] = &PTR_LAB_217a2078;
  param_1[0xf] = &PTR_LAB_217a2058;
  param_1[0x10] = &PTR_LAB_217a2028;
  param_1[0x11] = &PTR_LAB_217a2000;
  param_1[0x12] = &PTR_LAB_217a1fc0;
  param_1[0x13] = &PTR_LAB_217a1fa0;
  param_1[0x14] = &PTR_LAB_217a1f78;
  param_1[0x15] = &PTR_LAB_217a1f50;
  param_1[0x16] = &PTR_LAB_217a1f40;
  param_1[0x17] = &PTR_LAB_217a1f30;
  param_1[0x18] = &PTR_LAB_217a1f18;
  param_1[0x19] = &PTR_LAB_217a1f00;
  param_1[0x1a] = &PTR_LAB_217a1ef0;
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
  FUN_217a26dd(param_1);
  return;
}



void __fastcall FUN_217a26dd(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a2190;
  param_1[7] = &PTR_LAB_217a2178;
  FUN_217a2706(param_1 + 0xb);
  FUN_217a2706(param_1 + 8);
  FUN_217a2720(param_1);
  return;
}



void __fastcall FUN_217a2706(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)param_1 + 10);
  *param_1 = &PTR_LAB_217a21c8;
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
      HeapFree(DAT_217b3020,0,(LPVOID)param_1[1]);
    }
  }
  return;
}



void __fastcall FUN_217a2720(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_217a21e8;
  if (*(char *)(param_1 + 6) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    puVar2 = (&PTR_PTR_217b3154)[param_1[5] * 2];
    piVar1 = (int *)(puVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(puVar2 + 0x2c);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((&PTR_PTR_217b3154)[param_1[5] * 2] + 0x2c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  }
  *param_1 = &PTR_FUN_217a2220;
  InterlockedDecrement(&DAT_217b3000);
  return;
}



void __fastcall FUN_217a277d(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_217a1490;
  InterlockedDecrement(&DAT_217b3000);
  return;
}



void __cdecl FUN_217a278f(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_217b3020,0,param_1);
  }
  return;
}



void FUN_217a27a9(void)

{
  short *psVar1;
  
  if (DAT_217b3150 != -1) {
    psVar1 = &DAT_217b3150;
    do {
      if ((*psVar1 == 2) && (*(short *)(*(int *)(psVar1 + 2) + 0x48) != 0)) {
        FUN_217a690b();
        return;
      }
      psVar1 = psVar1 + 4;
    } while (*psVar1 != -1);
  }
  if (DAT_217b31e0 != (HWND)0x0) {
    DestroyWindow(DAT_217b31e0);
    DAT_217b31e0 = (HWND)0x0;
    UnregisterClassA(s_CtlFrameWork_Parking_217b37c0,DAT_217b31a4);
  }
  if (DAT_217b31dc != '\0') {
    UnregisterClassA("CtlFrameWork_ReflectWindow",DAT_217b31a4);
    DAT_217b31dc = '\0';
  }
  return;
}



void FUN_217a2801(void)

{
  if (DAT_217b31d8 != (HMODULE)0x0) {
    FreeLibrary(DAT_217b31d8);
    DAT_217b31d8 = (HMODULE)0x0;
  }
  if (DAT_217b31e8 != 0) {
    UnregisterClassA("NewHelpWindow",DAT_217b31a4);
  }
  if (((DAT_217b31e4 != (HMODULE)0x0) && (DAT_217b31e4 != DAT_217b31a0)) &&
     (DAT_217b31e4 != DAT_217b31a4)) {
    FreeLibrary(DAT_217b31e4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_217b31c0);
  return;
}



void __cdecl FUN_217a2844(int *param_1,int *param_2)

{
  FUN_217a2886();
  *param_2 = (*param_1 * DAT_217b36dc + 0x4f6) / 0x9ec;
  param_2[1] = (param_1[1] * DAT_217b36e0 + 0x4f6) / 0x9ec;
  return;
}



void FUN_217a2886(void)

{
  HDC hdc;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b36e4 == '\0') {
    hdc = GetDC((HWND)0x0);
    DAT_217b36dc = GetDeviceCaps(hdc,0x58);
    DAT_217b36e0 = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    DAT_217b36e4 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return;
}



undefined4 __thiscall FUN_217a28dd(void *this,int *param_1,undefined4 *param_2)

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
    if (bVar5) {
      piVar3 = *(int **)((int)this + 8);
      *param_2 = piVar3;
      (**(code **)(*piVar3 + 4))(piVar3);
      return 0;
    }
  }
  uVar1 = FUN_217a4047(param_1,param_2);
  return uVar1;
}



HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  void *this;
  int *piVar2;
  HRESULT HVar3;
  
                    // 0x2938  2  DllGetClassObject
  if (ppv == (LPVOID *)0x0) {
    HVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_217a2998((char *)rclsid);
    if (iVar1 == -1) {
      HVar3 = -0x7ffbfeef;
    }
    else {
      this = (void *)FUN_217a29d2(0xc);
      if (this == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_217a29ed(this,iVar1);
      }
      if (piVar2 == (int *)0x0) {
        HVar3 = -0x7ff8fff2;
      }
      else {
        HVar3 = (**(code **)*piVar2)(piVar2,riid,ppv);
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
  }
  return HVar3;
}



int __cdecl FUN_217a2998(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (DAT_217b3150 != -1) {
    ppuVar4 = &PTR_PTR_217b3154;
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



void __cdecl FUN_217a29d2(SIZE_T param_1)

{
  if (DAT_217b3020 == (HANDLE)0x0) {
    DAT_217b3020 = GetProcessHeap();
    if (DAT_217b3020 == (HANDLE)0x0) {
      return;
    }
  }
  HeapAlloc(DAT_217b3020,0,param_1);
  return;
}



undefined4 * __thiscall FUN_217a29ed(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_217a1490;
  InterlockedIncrement(&DAT_217b3000);
  *(undefined4 *)((int)this + 4) = 1;
  return (undefined4 *)this;
}



int __cdecl FUN_217a2a70(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*(code **)((&PTR_PTR_217b3154)[param_2 * 2] + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)((&PTR_PTR_217b3154)[param_2 * 2] + 0x14))(), -1 < iVar2)) {
    if (*(code **)((&PTR_PTR_217b3154)[param_2 * 2] + 0x10) == (code *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      piVar1 = (int *)(**(code **)((&PTR_PTR_217b3154)[param_2 * 2] + 0x10))(param_1);
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



LPVOID __cdecl FUN_217a2afc(SIZE_T param_1,HANDLE param_2)

{
  LPVOID pvVar1;
  
  if ((param_2 == (HANDLE)0x0) && (param_2 = GetProcessHeap(), param_2 == (HANDLE)0x0)) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(param_2,0,param_1);
  return pvVar1;
}



undefined4 * __thiscall FUN_217a2b18(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0xc0);
  FUN_217a2ce1(this,param_1,0,-(uint)(this != (void *)0x0) & (uint)puVar2);
  *puVar2 = &PTR_LAB_217a3180;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_217a3170;
  *(undefined ***)((int)this + 200) = &PTR_LAB_217a3158;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_217a3138;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_217a3108;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_217a30f0;
  FUN_217a2eee((undefined4 *)((int)this + 0x144));
  *(undefined ***)this = &PTR_FUN_217a1e68;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_217a1e50;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_217a1df0;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_217a1dd0;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_217a1da0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_217a1d78;
  *puVar2 = &PTR_LAB_217a1c48;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_217a1c08;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_217a1be8;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_217a1bc0;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_217a1b98;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_217a1b88;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_217a1b78;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_217a1b60;
  *(undefined ***)((int)this + 100) = &PTR_LAB_217a1b48;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_217a1b38;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_217a1b28;
  *(undefined ***)((int)this + 200) = &PTR_LAB_217a1b10;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_217a1af0;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_217a1ac0;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_217a1aa8;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  iVar1 = GetSystemMetrics(0xb);
  *(int *)((int)this + 0x88) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(uint *)((int)this + 0x13c) = *(uint *)((int)this + 0x13c) & 0xfffffffe;
  *(int *)((int)this + 0x8c) = iVar1;
  puVar2 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)((int)this + 0xec) = 1;
  *(undefined4 *)((int)this + 0x104) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b36f8 == 0) {
    DAT_217b36f8 = RegisterWindowMessageA("commdlg_help");
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  FUN_217a2efb();
  *(undefined4 *)((int)this + 0x140) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_217a2ce1(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_217a2e3a(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_217a3438;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_217a3418;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_217a33e8;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_217a33c0;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_217a3380;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_217a3360;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_217a3338;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_217a3310;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_217a3300;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_217a32f0;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_217a32d8;
  *(undefined ***)((int)this + 100) = &PTR_LAB_217a32c0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_217a32b0;
  *(undefined ***)this = &PTR_FUN_217a20f0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_217a20d8;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_217a2078;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_217a2058;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_217a2028;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_217a2000;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_217a1fc0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_217a1fa0;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_217a1f78;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_217a1f50;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_217a1f40;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_217a1f30;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_217a1f18;
  *(undefined ***)((int)this + 100) = &PTR_LAB_217a1f00;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_217a1ef0;
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
FUN_217a2e3a(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_217a2e8a(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_217a3498;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_217a21c8;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_217a21c8;
  *(undefined1 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined ***)this = &PTR_FUN_217a2190;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_217a2178;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_217a2e8a(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_217a2eb1(this,param_1,param_3);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = &PTR_FUN_217a21e8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_217a2eb1(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((int)this + 0xc);
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_217a34b0;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_217a2220;
  InterlockedIncrement(&DAT_217b3000);
  return (undefined4 *)this;
}



void __fastcall FUN_217a2eee(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_217a2efb(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3560 == 0) {
    DAT_217b3560 = 0x41000000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return;
}



int FUN_217a2f38(int param_1,uint *param_2,uint *param_3)

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
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    DAT_217b3700 = param_2[0xb];
    DAT_217b36d8 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  }
  if ((param_2[5] & 0x40) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 3;
  }
  piVar5 = (int *)param_2[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    puVar4 = (uint *)FUN_217a3087((void *)(param_1 + -0x38),param_2[3],param_3 + 4);
    if ((int)puVar4 < 0) {
      piVar5 = (int *)param_2[3];
      param_2 = puVar4;
      goto LAB_217a6e17;
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
    puVar2 = (&PTR_PTR_217b3154)[*(int *)(param_1 + -0x50) * 2];
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
LAB_217a6e17:
  (**(code **)(*piVar5 + 8))(piVar5);
  return (int)param_2;
}



void FUN_217a3037(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7fffbffb;
  if (*(char *)((int)param_1 + 8) == '\0') {
    if (*(int *)((&PTR_PTR_217b3154)[*(int *)((int)param_1 + -0xc) * 2] + 0x24) != 0) {
      iVar2 = (**(code **)*param_2)
                        (param_2,*(int *)((&PTR_PTR_217b3154)[*(int *)((int)param_1 + -0xc) * 2] +
                                         0x24),&param_2);
    }
    if (-1 < iVar2) goto LAB_217a3074;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_217a2928,&param_2);
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_217a79d8,&param_2);
  }
  if (iVar2 < 0) {
    return;
  }
LAB_217a3074:
  FUN_217a3087(param_1,param_2,param_3);
  return;
}



undefined4 __thiscall FUN_217a3087(void *this,undefined4 param_1,undefined4 *param_2)

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
    puVar4 = (undefined4 *)HeapAlloc(DAT_217b3020,0,0x20);
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
      pvVar3 = HeapReAlloc(DAT_217b3020,0,*(LPVOID *)((int)this + 4),iVar2 * 4 + 0x20);
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



undefined4 * __thiscall FUN_217a34bc(void *this,uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x79) {
    puVar1 = (undefined2 *)((int)this + 4);
  }
  else {
    puVar1 = (undefined2 *)HeapAlloc(DAT_217b3020,0,param_1);
  }
  *(undefined2 **)this = puVar1;
  *(uint *)((int)this + 0x7c) = (uint)(0x78 < param_1) | *(uint *)((int)this + 0x7c) & 0xfffffffe;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return (undefined4 *)this;
}



HRESULT FUN_217a3510(HREFTYPE param_1,ITypeInfo *param_2,undefined4 param_3,undefined4 *param_4)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  HVar2 = param_1;
  puVar1 = (&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2];
  ppTInfo = (ITypeInfo **)(puVar1 + 0x2c);
  if (*(int *)(puVar1 + 0x2c) == 0) {
    HVar6 = LoadRegTypeLib((GUID *)s__6z_Licenses_217b3708._0_4_,*(WORD *)(puVar1 + 0x18),
                           *(WORD *)(puVar1 + 0x1c),0,&local_8);
    if (HVar6 < 0) {
      DVar3 = GetModuleFileNameA(DAT_217b31a4,local_18c,0x104);
      if (DVar3 == 0) {
        HVar6 = -0x7fffbffb;
        goto LAB_217a3563;
      }
      iVar4 = lstrlenA(local_18c);
      cchWideChar = iVar4 * 2 + 2;
      FUN_217a34bc(local_88,cchWideChar);
      MultiByteToWideChar(0,0,local_18c,-1,local_88[0],cchWideChar);
      HVar6 = LoadTypeLib(local_88[0],&local_8);
      if (HVar6 < 0) {
        if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_88[0]);
        }
        goto LAB_217a3563;
      }
      if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
        HeapFree(DAT_217b3020,0,local_88[0]);
      }
    }
    HVar6 = (*local_8->lpVtbl->GetTypeInfoOfGuid)
                      (local_8,*(GUID **)((&PTR_PTR_217b3154)[*(int *)(HVar2 + 0x14) * 2] + 0x20),
                       &param_2);
    (*local_8->lpVtbl->Release)(local_8);
    if (HVar6 < 0) goto LAB_217a3563;
    HVar6 = (*param_2->lpVtbl->GetRefTypeOfImplType)(param_2,0xffffffff,&param_1);
    if (HVar6 < 0) {
      (*param_2->lpVtbl->Release)(param_2);
      goto LAB_217a3563;
    }
    HVar6 = (*param_2->lpVtbl->GetRefTypeInfo)(param_2,param_1,ppTInfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (HVar6 < 0) goto LAB_217a3563;
    *(undefined1 *)(HVar2 + 0x18) = 1;
    *(int *)((&PTR_PTR_217b3154)[*(int *)(HVar2 + 0x14) * 2] + 0x30) =
         *(int *)((&PTR_PTR_217b3154)[*(int *)(HVar2 + 0x14) * 2] + 0x30) + 1;
    puVar5 = param_4;
  }
  (*(*ppTInfo)->lpVtbl->AddRef)(*ppTInfo);
  *puVar5 = *ppTInfo;
  HVar6 = 0;
LAB_217a3563:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return HVar6;
}



int FUN_217a3642(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_8,4,0);
  if (-1 < iVar2) {
    if (local_8 == 0x12344321) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,0xfffffffc,0xffffffff,1,0);
      if (-1 < iVar2) {
        iVar2 = FUN_217a3693(param_1,piVar1);
      }
    }
    else if (((short)((uint)local_8 >> 0x10) == 1) && ((short)local_8 == 0)) {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_c,4,0);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_10,4,0);
        if (-1 < iVar2) {
          local_1c = local_c;
          local_18 = local_10;
          FUN_217a2844(&local_1c,(int *)(param_1 + 0x38));
          iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,local_14,4,0);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,1,0);
            if (-1 < iVar2) {
              *(uint *)(param_1 + 0x88) =
                   ((uint)param_2 & 1) << 4 | *(uint *)(param_1 + 0x88) & 0xffffffef;
              iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0xb0,4,0);
              if (-1 < iVar2) {
                iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0x94,2,0);
                if (-1 < iVar2) {
                  SysFreeString(*(BSTR *)(param_1 + 0xcc));
                  iVar2 = FUN_217aba79(this,piVar1,(undefined4 *)(param_1 + 0xcc));
                  if (-1 < iVar2) {
                    SysFreeString(*(BSTR *)(param_1 + 0xbc));
                    iVar2 = FUN_217aba79(this_00,piVar1,(undefined4 *)(param_1 + 0xbc));
                    if (-1 < iVar2) {
                      SysFreeString(*(BSTR *)(param_1 + 0xc0));
                      iVar2 = FUN_217aba79(this_01,piVar1,(undefined4 *)(param_1 + 0xc0));
                      if (-1 < iVar2) {
                        SysFreeString(*(BSTR *)(param_1 + 200));
                        iVar2 = FUN_217aba79(this_02,piVar1,(undefined4 *)(param_1 + 200));
                        if (-1 < iVar2) {
                          iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0x9a,2,0);
                          if (-1 < iVar2) {
                            iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0xa8,4,0);
                            if (-1 < iVar2) {
                              iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,1,0);
                              if (-1 < iVar2) {
                                *(uint *)(param_1 + 0x88) =
                                     (uint)param_2 & 1 | *(uint *)(param_1 + 0x88) & 0xfffffffe;
                                iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,1,0);
                                if (-1 < iVar2) {
                                  *(uint *)(param_1 + 0x88) =
                                       ((uint)param_2 & 1) << 1 |
                                       *(uint *)(param_1 + 0x88) & 0xfffffffd;
                                  SysFreeString(*(BSTR *)(param_1 + 0xdc));
                                  iVar2 = FUN_217aba79(this_03,piVar1,(undefined4 *)(param_1 + 0xdc)
                                                      );
                                  if (-1 < iVar2) {
                                    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_1 + 0xac,4,0);
                                    if (-1 < iVar2) {
                                      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,1,0);
                                      if (-1 < iVar2) {
                                        *(uint *)(param_1 + 0x88) =
                                             ((uint)param_2 & 1) << 2 |
                                             *(uint *)(param_1 + 0x88) & 0xfffffffb;
                                        iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,1,0);
                                        if (-1 < iVar2) {
                                          *(uint *)(param_1 + 0x88) =
                                               ((uint)param_2 & 1) << 3 |
                                               *(uint *)(param_1 + 0x88) & 0xfffffff7;
                                          iVar2 = (**(code **)(*piVar1 + 0xc))
                                                            (piVar1,param_1 + 0x8c,2,0);
                                          if (-1 < iVar2) {
                                            iVar2 = (**(code **)(*piVar1 + 0xc))
                                                              (piVar1,param_1 + 0x96,2,0);
                                            if (-1 < iVar2) {
                                              iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                (piVar1,param_1 + 0xa4,4,0);
                                              if (-1 < iVar2) {
                                                SysFreeString(*(BSTR *)(param_1 + 0xd4));
                                                iVar2 = FUN_217aba79(this_04,piVar1,
                                                                     (undefined4 *)(param_1 + 0xd4))
                                                ;
                                                if (-1 < iVar2) {
                                                  SysFreeString(*(BSTR *)(param_1 + 0xd8));
                                                  iVar2 = FUN_217aba79(this_05,piVar1,
                                                                       (undefined4 *)
                                                                       (param_1 + 0xd8));
                                                  if (-1 < iVar2) {
                                                    SysFreeString(*(BSTR *)(param_1 + 0xd0));
                                                    iVar2 = FUN_217aba79(this_06,piVar1,
                                                                         (undefined4 *)
                                                                         (param_1 + 0xd0));
                                                    if (-1 < iVar2) {
                                                      iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                        (piVar1,param_1 + 0x92,2,0);
                                                      if (-1 < iVar2) {
                                                        iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                          (piVar1,param_1 + 0x90,2,0
                                                                          );
                                                        if (-1 < iVar2) {
                                                          iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                            (piVar1,param_1 + 0x98,2
                                                                             ,0);
                                                          if (-1 < iVar2) {
                                                            iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                              (piVar1,&param_2,1,0);
                                                            if (-1 < iVar2) {
                                                              *(uint *)(param_1 + 0x88) =
                                                                   ((uint)param_2 & 1) << 5 |
                                                                   *(uint *)(param_1 + 0x88) &
                                                                   0xffffffdf;
                                                              iVar2 = (**(code **)(*piVar1 + 0xc))
                                                                                (piVar1,param_1 + 
                                                  0x8e,2,0);
                                                  if (-1 < iVar2) {
                                                    *(uint *)(param_1 + 0x60) =
                                                         *(uint *)(param_1 + 0x60) & 0xfffffffe;
                                                    iVar2 = 0;
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
    else {
      iVar2 = -0x7fff0001;
    }
  }
  return iVar2;
}



void FUN_217a3693(int param_1,int *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)(param_1 + -0x50);
  iVar1 = FUN_217a36b8(this,param_2);
  if (-1 < iVar1) {
    (**(code **)(*this + 0x38))(this,param_2);
  }
  return;
}



int __thiscall FUN_217a36b8(void *this,int *param_1)

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
        FUN_217a2844(local_14,(int *)((int)this + 0x88));
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



int FUN_217a371a(int param_1,int *param_2)

{
  UINT UVar1;
  int iVar2;
  UINT *pUVar3;
  BSTR pOVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  UINT *pUVar8;
  undefined4 *puVar9;
  int local_44;
  int local_40;
  SIZE_T local_3c;
  undefined4 local_38 [11];
  uint local_c;
  UINT *local_8;
  
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_44,0x3c,0);
  if (-1 < iVar2) {
    if ((local_44 == -0x6fbc37a) &&
       (((local_40 == 0x60000 || (local_40 == 0x50001)) || (local_40 == 0x50000)))) {
      puVar7 = local_38;
      puVar9 = (undefined4 *)(param_1 + 0xd8);
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      pUVar3 = (UINT *)HeapAlloc(DAT_217b3020,0,local_3c);
      if (pUVar3 == (UINT *)0x0) {
        iVar2 = -0x7ff8fff2;
      }
      else {
        local_8 = pUVar3;
        iVar2 = (**(code **)(*param_2 + 0xc))(param_2,pUVar3,local_3c,0);
        if (-1 < iVar2) {
          if ((local_c & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x11c));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x11c) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 1 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x10c));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x10c) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 2 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x110));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x110) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 3 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x118));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x118) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 4 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 300));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 300) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 5 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x124));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x124) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 7 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x128));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x128) = pOVar4;
            pUVar8 = pUVar3 + 1;
            for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar8;
              pUVar8 = pUVar8 + 1;
              pOVar4 = pOVar4 + 2;
            }
            pUVar3 = (UINT *)((int)(pUVar3 + 1) + uVar6);
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar8;
              pUVar8 = (UINT *)((int)pUVar8 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          if ((local_c >> 6 & 1) != 0) {
            UVar1 = *pUVar3;
            SysFreeString(*(BSTR *)(param_1 + 0x120));
            pOVar4 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
            uVar6 = UVar1 * 2;
            *(BSTR *)(param_1 + 0x120) = pOVar4;
            for (uVar5 = uVar6 >> 2; pUVar3 = pUVar3 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
              *(UINT *)pOVar4 = *pUVar3;
              pOVar4 = pOVar4 + 2;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)pOVar4 = (char)*pUVar3;
              pUVar3 = (UINT *)((int)pUVar3 + 1);
              pOVar4 = (BSTR)((int)pOVar4 + 1);
            }
          }
          iVar2 = 0;
        }
        HeapFree(DAT_217b3020,0,local_8);
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffffe;
      }
    }
    else {
      iVar2 = -0x7fff0001;
    }
  }
  return iVar2;
}



int FUN_217a385b(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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



void FUN_217a38be(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_217b31c0);
  return;
}



int FUN_217a38ca(int param_1,int param_2,undefined4 param_3,int *param_4,short *param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b36e8 == 0) {
    DAT_217b36f0 = FUN_217a3931();
    DAT_217b36e8 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  iVar1 = FUN_217a3b84(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x7ffbfeee;
  }
  else {
    iVar1 = FUN_217a2a70(param_2,*(int *)(param_1 + 8),param_6,param_4);
  }
  return iVar1;
}



undefined4 FUN_217a3931(void)

{
  uint cbMultiByte;
  int iVar1;
  undefined4 uVar2;
  HKEY local_108 [31];
  byte local_8c;
  HKEY local_88 [31];
  byte local_c;
  HKEY local_8;
  
  iVar1 = lstrlenW(L"DB4C0D00-400B-101B-A3C9-08002B2F49FB");
  local_8 = (HKEY)(iVar1 * 2 + 2);
  FUN_217a34bc(local_108,(uint)local_8);
  WideCharToMultiByte(0,0,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB",-1,(LPSTR)local_108[0],
                      (int)local_8,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = local_108[0];
  iVar1 = lstrlenW(L"4D553650-6ABE-11cf-8ADB-00AA00C00905");
  cbMultiByte = iVar1 * 2 + 2;
  FUN_217a34bc(local_88,cbMultiByte);
  WideCharToMultiByte(0,0,L"4D553650-6ABE-11cf-8ADB-00AA00C00905",-1,(LPSTR)local_88[0],cbMultiByte,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = FUN_217a39f7(local_88[0]);
  if (iVar1 == 0) {
    iVar1 = FUN_217a39f7(local_8);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_217a39c3;
    }
  }
  uVar2 = 1;
LAB_217a39c3:
  if ((local_88[0] != (HKEY)0x0) && ((local_c & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_88[0]);
  }
  if ((local_108[0] != (HKEY)0x0) && ((local_8c & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_108[0]);
  }
  return uVar2;
}



undefined4 __cdecl FUN_217a39f7(HKEY param_1)

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
    LVar2 = RegOpenKeyA((HKEY)0x80000000,s__6z_Licenses_217b3708 + 4,&local_c);
    if (LVar2 == 0) {
      if ((char)lpSubKey->unused != '\0') {
        LVar2 = RegOpenKeyA(local_c,(LPCSTR)lpSubKey,&param_1);
        if (LVar2 == 0) {
          bVar1 = FUN_217a3a70(param_1,(byte *)lpSubKey,local_d4);
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



bool __cdecl FUN_217a3a70(HKEY param_1,byte *param_2,char *param_3)

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
    FUN_217a3adc(param_2,param_3,local_d0);
    LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)local_d0,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrcmpA((LPCSTR)local_d0,param_3);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



void __cdecl FUN_217a3adc(byte *param_1,char *param_2,byte *param_3)

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



undefined4 __cdecl FUN_217a3b84(short *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_217a3bb4(param_1,L"4D553650-6ABE-11cf-8ADB-00AA00C00905");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_217a3bb4(param_1,L"28C4C820-401A-101B-A3C9-08002B2F49FB");
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_217a3bb4(param_1,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB");
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}



bool __cdecl FUN_217a3bb4(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == param_2) {
    cVar3 = '\x01';
  }
  else if ((param_1 == (short *)0x0) || (param_2 == (short *)0x0)) {
    cVar3 = '\0';
  }
  else {
    if (*param_1 != 0) {
      psVar2 = param_1;
      do {
        sVar1 = *(short *)(((int)param_2 - (int)param_1) + (int)psVar2);
        if ((sVar1 == 0) || (*psVar2 != sVar1)) break;
        iVar4 = iVar4 + 1;
        psVar2 = psVar2 + 1;
      } while (*psVar2 != 0);
    }
    cVar3 = '\x01' - (param_1[iVar4] != param_2[iVar4]);
  }
  return (bool)cVar3;
}



int FUN_217a3d18(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    if (DAT_217b36e8 == 0) {
      DAT_217b36f0 = FUN_217a3931();
      DAT_217b36e8 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    if (DAT_217b36f0 == 0) {
      iVar1 = -0x7ffbfeee;
    }
    else {
      iVar1 = FUN_217a2a70(param_2,*(int *)(param_1 + 8),param_4,param_3);
    }
  }
  return iVar1;
}



void FUN_217a3d6f(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_217a3d9b(param_2,param_3);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x4c) + 0x40))((int *)(param_1 + -0x4c),param_2,param_3);
  }
  return;
}



undefined4 FUN_217a3d9b(int *param_1,undefined4 param_2)

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
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentX_217b3718,local_20,param_2);
  local_10 = local_18;
  if (-1 < iVar1) {
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentY_217b372c,local_20,param_2);
    if (-1 < iVar1) {
      local_c = local_18;
      FUN_217a2844(&local_10,(int *)(local_8 + 0x88));
      return 0;
    }
  }
  *(undefined4 *)(local_8 + 0x88) = 100;
  *(undefined4 *)(local_8 + 0x8c) = 0x32;
  return 0;
}



int FUN_217a3e21(void *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  byte *pbVar2;
  byte local_54 [80];
  
  pbVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2 = pbVar2 + 4;
  }
  iVar1 = FUN_217a3e6b(param_2,(int *)&PTR_u_CancelError_217b3438,(int)local_54,param_3);
  if (-1 < iVar1) {
    FUN_217a3ee9(param_1,local_54);
    *(uint *)((int)param_1 + 0xb0) = *(uint *)((int)param_1 + 0xb0) & 0xfffffffe;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Type propagation algorithm not settling

undefined4 __cdecl FUN_217a3e6b(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  BSTR pOVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  _union_2685 *p_Var6;
  uint *puVar7;
  undefined1 local_14 [16];
  
  VariantInit((VARIANTARG *)&((_union_2683 *)local_14)->n2);
  if (*param_2 != 0) {
    puVar5 = (uint *)(param_2 + 4);
    do {
      local_14._0_2_ = (undefined2)puVar5[-1];
      local_14._8_4_ = (OLECHAR *)0x0;
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1,puVar5[-4],(_union_2683 *)local_14,param_4);
      if (iVar1 < 0) {
        uVar4 = *puVar5;
        p_Var6 = (_union_2685 *)(puVar5 + -2);
LAB_217a3e9b:
        puVar7 = (uint *)(puVar5[-3] + param_3);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = p_Var6->lVal;
          p_Var6 = (_union_2685 *)(&p_Var6->lVal + 1);
          puVar7 = puVar7 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(BYTE *)puVar7 = p_Var6->bVal;
          p_Var6 = (_union_2685 *)((int)p_Var6 + 1);
          puVar7 = (uint *)((int)puVar7 + 1);
        }
      }
      else {
        if (local_14._0_2_ != 8) {
          uVar4 = *puVar5;
          p_Var6 = &(((_union_2683 *)local_14)->n2).n3;
          goto LAB_217a3e9b;
        }
        uVar4 = puVar5[-3];
        pOVar2 = SysAllocString((OLECHAR *)local_14._8_4_);
        *(BSTR *)(uVar4 + param_3) = pOVar2;
        VariantClear((VARIANTARG *)&((_union_2683 *)local_14)->n2);
      }
      puVar7 = puVar5 + 2;
      puVar5 = puVar5 + 6;
    } while (*puVar7 != 0);
  }
  return 0;
}



undefined4 __thiscall FUN_217a3ee9(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((int)this + 0xd8);
  uVar2 = (*param_1 & 1) << 4;
  *(uint *)((int)this + 0xd8) = uVar2 | uVar1 & 0xffffffef;
  uVar3 = param_1[2] & 1;
  *(uint *)((int)this + 0xd8) = uVar3 | uVar2 | uVar1 & 0xffffffee;
  uVar4 = (param_1[4] & 1) << 1;
  *(uint *)((int)this + 0xd8) = uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffec;
  uVar5 = (param_1[6] & 1) << 2;
  *(uint *)((int)this + 0xd8) = uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffe8;
  uVar6 = (param_1[8] & 1) << 3;
  *(uint *)((int)this + 0xd8) = uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffe0;
  *(uint *)((int)this + 0xd8) =
       (param_1[10] & 1) << 5 | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffc0;
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)((int)this + 0xe4) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0xea) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)((int)this + 0xdc) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)((int)this + 0xde) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)((int)this + 0xe6) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)((int)this + 0xe2) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined2 *)((int)this + 0xe0) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)((int)this + 0xe8) = *(undefined2 *)(param_1 + 0x1e);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x48);
  *(undefined2 *)((int)this + 0xec) = *(undefined2 *)(param_1 + 0x4c);
  return 0;
}



undefined4 FUN_217a4047(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004002;
}



int FUN_217a4085(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
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



void __thiscall FUN_217a40fd(void *this,undefined4 param_1)

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



void __thiscall FUN_217a4113(void *this,undefined4 param_1,ushort param_2,undefined4 param_3)

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

undefined4 __thiscall FUN_217a41c4(int param_1,undefined4 param_2,LPOLESTR param_3,DWORD param_4)

{
  uint cchWideChar;
  HRESULT HVar1;
  int iVar2;
  WCHAR local_290 [256];
  LPWSTR local_90 [31];
  byte local_14;
  LPWSTR local_10;
  IErrorInfo *local_c;
  ICreateErrorInfo *local_8;
  
  HVar1 = CreateErrorInfo(&local_8);
  if (-1 < HVar1) {
    iVar2 = lstrlenA(*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 0x28));
    cchWideChar = iVar2 * 2 + 2;
    FUN_217a34bc(local_90,cchWideChar);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 0x28),-1
                        ,local_90[0],cchWideChar);
    local_10 = local_90[0];
    (*local_8->lpVtbl->SetGUID)
              (local_8,*(GUID **)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 0x20));
    (*local_8->lpVtbl->SetHelpFile)
              (local_8,(LPOLESTR)
                       (-(uint)(*(int *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 0x28)
                               != 0) & (uint)local_10));
    (*local_8->lpVtbl->SetHelpContext)(local_8,param_4);
    (*local_8->lpVtbl->SetDescription)(local_8,param_3);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 4),-1,
                        local_290,0x100);
    (*local_8->lpVtbl->SetSource)(local_8,local_290);
    HVar1 = (*local_8->lpVtbl->QueryInterface)(local_8,(IID *)&DAT_217a4330,&local_c);
    if (-1 < HVar1) {
      SetErrorInfo(0,local_c);
      (*local_c->lpVtbl->Release)(local_c);
    }
    (*local_8->lpVtbl->Release)(local_8);
    if ((local_90[0] != (LPWSTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_90[0]);
    }
  }
  return param_2;
}



HINSTANCE FUN_217a45b1(LCID param_1)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  pHVar2 = DAT_217b31a0;
  if ((DAT_217b31a0 == (HINSTANCE)0x0) || ((param_1 != 0 && (param_1 != DAT_217b3700)))) {
    if (param_1 == 0) {
      param_1 = DAT_217b3700;
    }
    iVar1 = GetLocaleInfoA(param_1,3,(LPSTR)&local_c,5);
    if ((iVar1 != 0) && (iVar1 = LoadStringA(DAT_217b31a4,0x3e9,local_318,0x104), iVar1 != 0)) {
      wsprintfA(local_214,s__s_s_DLL_217b3740,local_318,&local_c);
      GetModuleFileNameA(DAT_217b31a4,local_41c,0x104);
      FUN_217a47f6(local_41c,local_214,local_110);
      pHVar2 = LoadLibraryA(local_110);
      bVar3 = pHVar2 == (HMODULE)0x0;
      if (!bVar3) goto LAB_217a4791;
      iVar1 = lstrlenA((LPCSTR)&local_c);
      if (2 < iVar1) {
        local_a = 0;
        wsprintfA(local_214,s__s_s_DLL_217b374c,local_318,&local_c);
        FUN_217a47f6(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
      bVar3 = pHVar2 == (HINSTANCE)0x0;
      if (!bVar3) goto LAB_217a4791;
      iVar1 = GetLocaleInfoA((uint)((ushort)DAT_217b3700 & 0x3ff | 0x400),3,(LPSTR)&local_c,5);
      if (iVar1 != 0) {
        iVar1 = lstrlenA(local_110);
        *(undefined2 *)((int)&uStack_117 + iVar1) = local_c;
        auStack_115[iVar1] = local_a;
        pHVar2 = LoadLibraryA(local_110);
        bVar3 = pHVar2 == (HMODULE)0x0;
        if (!bVar3) goto LAB_217a4791;
        wsprintfA(local_214,s__u__s_dll_217b3758,param_1,local_318);
        FUN_217a47f6(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
    }
  }
  bVar3 = pHVar2 == (HINSTANCE)0x0;
LAB_217a4791:
  if (bVar3) {
    pHVar2 = DAT_217b31a4;
  }
  if ((DAT_217b31a0 == (HINSTANCE)0x0) && ((param_1 == 0 || (param_1 == DAT_217b3700)))) {
    DAT_217b31a0 = pHVar2;
  }
  if ((DAT_217b3764 == 0) || ((param_1 != DAT_217b3700 && (param_1 != 0)))) {
    if (pHVar2 != DAT_217b31a4) {
      GetModuleFileNameA(pHVar2,local_110,0x104);
      iVar1 = FUN_217ad73c(local_110,1);
      if (((iVar1 == -1) || (iVar1 == 1)) &&
         ((pHVar2 = DAT_217b31a4, param_1 == 0 || (param_1 == DAT_217b3700)))) {
        DAT_217b31a0 = DAT_217b31a4;
      }
    }
    if ((param_1 == 0) || (param_1 == DAT_217b3700)) {
      DAT_217b3764 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return pHVar2;
}



void __cdecl FUN_217a47f6(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

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



undefined4 FUN_217a4935(int param_1,undefined4 *param_2)

{
  UINT ui;
  BSTR pOVar1;
  
  if (*(BSTR *)(param_1 + 0x50) == (BSTR)0x0) {
    pOVar1 = SysAllocString(L"");
  }
  else {
    ui = SysStringLen(*(BSTR *)(param_1 + 0x50));
    pOVar1 = SysAllocStringLen(*(OLECHAR **)(param_1 + 0x50),ui);
  }
  *param_2 = pOVar1;
  return 0;
}



int __thiscall FUN_217a4adf(void *this,short param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 < 1) {
LAB_217a6598:
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
    uVar5 = 0x17c;
    uVar4 = 0x17c;
    uVar3 = 0x800a017c;
  }
  else {
    if (param_1 < 3) {
      iVar1 = FUN_217a8328(this,param_1);
    }
    else if (param_1 == 3) {
      iVar1 = FUN_217a88ae(this);
    }
    else if (param_1 == 4) {
      iVar1 = FUN_217a892c(this);
    }
    else if (param_1 == 5) {
      iVar1 = FUN_217a4b2b((int *)this);
    }
    else {
      if (param_1 != 6) goto LAB_217a6598;
      iVar1 = FUN_217a8c75((int)this);
    }
    if (iVar1 != -0x7fffbffb) {
      return iVar1;
    }
    DVar2 = CommDlgExtendedError();
    iVar1 = (int)(short)DVar2;
    if (iVar1 != 0) {
                    // WARNING: Load size is inaccurate
      iVar1 = (**(code **)(*this + 0x30))
                        (0x7fffU - iVar1 | 0x800a0000,0x7fff - iVar1,0x7fffU - iVar1);
      return iVar1;
    }
    if ((*(uint *)((int)this + 0xd8) >> 4 & 1) == 0) {
      return 0;
    }
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
    uVar5 = 0x7ff3;
    uVar4 = 0x7ff3;
    uVar3 = 0x800a7ff3;
  }
  iVar1 = (**(code **)(iVar1 + 0x30))(uVar3,uVar4,uVar5);
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x217a66ef)

void __fastcall FUN_217a4b2b(int *param_1)

{
  undefined2 uVar1;
  BOOL BVar2;
  LPVOID pvVar3;
  ushort *puVar4;
  LPCSTR pCVar5;
  short sVar6;
  int iVar7;
  tagPDA *ptVar8;
  tagPDA *ptVar9;
  bool bVar10;
  CHAR local_1b4 [256];
  CHAR local_b4 [32];
  tagPDA local_94;
  tagPDA local_50;
  ULONG_PTR local_c;
  int local_8;
  
  ptVar8 = &local_94;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    ptVar8->lStructSize = 0;
    ptVar8 = (tagPDA *)&ptVar8->hwndOwner;
  }
  *(undefined2 *)&ptVar8->lStructSize = 0;
  local_8 = 0;
  local_c = 0;
  local_50.lStructSize = 0x42;
  local_50.hDevMode = (HGLOBAL)0x0;
  local_50.hDevNames = (HGLOBAL)0x0;
  local_94.lStructSize = 0x42;
  local_94.Flags = 0x400;
  BVar2 = PrintDlgA(&local_94);
  if ((param_1[0x3e] & 0x400U) == 0) {
    if ((BVar2 != 0) && (local_94.hDevMode != (HGLOBAL)0x0)) {
      pvVar3 = GlobalLock(local_94.hDevMode);
      sVar6 = (short)param_1[0x39];
      if (param_1[0x41] == 0) {
        *(short *)((int)pvVar3 + 0x36) = sVar6;
        *(short *)((int)pvVar3 + 0x2c) = (short)param_1[0x3b];
        *(undefined2 *)((int)pvVar3 + 0x2e) = *(undefined2 *)((int)param_1 + 0xee);
        *(short *)((int)pvVar3 + 0x38) = (short)param_1[0x3c];
        sVar6 = *(short *)((int)param_1 + 0xf2);
LAB_217a6622:
        *(short *)((int)pvVar3 + 0x3e) = sVar6;
      }
      else {
        if (sVar6 != 1) {
          *(short *)((int)pvVar3 + 0x36) = sVar6;
        }
        if ((short)param_1[0x3b] != 1) {
          *(short *)((int)pvVar3 + 0x2c) = (short)param_1[0x3b];
        }
        if (*(short *)((int)param_1 + 0xee) != 0) {
          *(short *)((int)pvVar3 + 0x2e) = *(short *)((int)param_1 + 0xee);
        }
        if ((short)param_1[0x3c] != 0) {
          *(short *)((int)pvVar3 + 0x38) = (short)param_1[0x3c];
        }
        sVar6 = *(short *)((int)param_1 + 0xf2);
        if (sVar6 != 0) goto LAB_217a6622;
      }
      GlobalUnlock(local_94.hDevMode);
      local_50.hDevMode = local_94.hDevMode;
      local_50.hDevNames = local_94.hDevNames;
    }
    local_50.Flags = param_1[0x3e] & 0xfffc0fff;
    local_50.hInstance = (HINSTANCE)0x0;
    local_50.nFromPage = *(WORD *)(param_1 + 0x37);
    local_50.nToPage = *(WORD *)((int)param_1 + 0xde);
    local_50.nMinPage = *(WORD *)(param_1 + 0x38);
    local_50.nMaxPage = *(WORD *)((int)param_1 + 0xe2);
    local_50.nCopies = *(WORD *)(param_1 + 0x39);
    FUN_217a8ddb(param_1,1,&local_50.hwndOwner);
    local_8 = 0;
    BVar2 = PrintDlgA(&local_50);
    if (BVar2 == 0) {
      local_8 = -0x7fffbffb;
    }
    FUN_217a8ddb(param_1,0,(undefined4 *)0x0);
  }
  else {
    ptVar8 = &local_94;
    ptVar9 = &local_50;
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar9->lStructSize = ptVar8->lStructSize;
      ptVar8 = (tagPDA *)&ptVar8->hwndOwner;
      ptVar9 = (tagPDA *)&ptVar9->hwndOwner;
    }
    *(short *)&ptVar9->lStructSize = (short)ptVar8->lStructSize;
  }
  if (-1 < local_8) {
    bVar10 = local_50.hDevMode == (HGLOBAL)0x0;
    if (bVar10) goto LAB_217a4ce2;
    pvVar3 = GlobalLock(local_50.hDevMode);
    *(undefined2 *)(param_1 + 0x39) = *(undefined2 *)((int)pvVar3 + 0x36);
    *(undefined2 *)(param_1 + 0x3b) = *(undefined2 *)((int)pvVar3 + 0x2c);
    *(undefined2 *)((int)param_1 + 0xee) = *(undefined2 *)((int)pvVar3 + 0x2e);
    *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)((int)pvVar3 + 0x38);
    uVar1 = *(undefined2 *)((int)pvVar3 + 0x3e);
    param_1[0x41] = 0;
    *(undefined2 *)((int)param_1 + 0xf2) = uVar1;
    if (((*(byte *)(param_1 + 0x36) & 0x20) != 0) && (local_50.hDevNames != (HGLOBAL)0x0)) {
      puVar4 = (ushort *)GlobalLock(local_50.hDevNames);
      wsprintfA(local_1b4,"%s.drv",(int)puVar4 + (uint)*puVar4);
      FUN_217a4d49(0,0,0,(int)puVar4 + (uint)puVar4[1],(int)puVar4 + (uint)puVar4[2],pvVar3,0,9);
      pCVar5 = FUN_217a4e1d((LPCSTR)((int)puVar4 + (uint)puVar4[2]),local_b4);
      wsprintfA(local_1b4,"%s,%s,%s",(int)puVar4 + (uint)puVar4[1],(int)puVar4 + (uint)*puVar4,
                pCVar5);
      WriteProfileStringA("Windows","Device",local_1b4);
      SendMessageTimeoutA((HWND)0xffff,0x1a,0,0x217a4e70,2,10000,&local_c);
      GlobalUnlock(local_50.hDevNames);
    }
    GlobalUnlock(local_50.hDevMode);
  }
  bVar10 = local_50.hDevMode == (HGLOBAL)0x0;
LAB_217a4ce2:
  if (!bVar10) {
    GlobalFree(local_50.hDevMode);
  }
  if (local_50.hDevNames != (HGLOBAL)0x0) {
    GlobalFree(local_50.hDevNames);
  }
  if (-1 < local_8) {
    param_1[0x3e] = local_50.Flags;
    *(WORD *)(param_1 + 0x37) = local_50.nFromPage;
    *(WORD *)((int)param_1 + 0xde) = local_50.nToPage;
    *(WORD *)(param_1 + 0x38) = local_50.nMinPage;
    *(WORD *)((int)param_1 + 0xe2) = local_50.nMaxPage;
    param_1[0x42] = (int)local_50.hDC;
  }
  return;
}



BOOL PrintDlgA(LPPRINTDLGA pPD)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x217a4d43. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = PrintDlgA(pPD);
  return BVar1;
}



undefined4 __cdecl
FUN_217a4d49(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_217a4da7("WINSPOOL.DRV",&DAT_217b31d8,4,0x217b3768);
  if (-1 < iVar1) {
    (*DAT_217b3790)(param_4,&param_2,0);
    uVar2 = (*DAT_217b3794)(param_1,param_2,param_4,param_3,param_6,param_8);
    (*DAT_217b378c)(param_2);
    return uVar2;
  }
  return 0xffffffff;
}



undefined4 __cdecl FUN_217a4da7(LPCSTR param_1,int *param_2,uint param_3,int param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (*param_2 == 0) {
    hModule = LoadLibraryA(param_1);
    if (hModule == (HMODULE)0x0) {
LAB_217a6824:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
      return 0x800401f8;
    }
    param_1 = (LPCSTR)0x0;
    if (param_3 != 0) {
      puVar2 = (undefined4 *)(param_4 + 4);
      do {
        pFVar1 = GetProcAddress(hModule,(LPCSTR)puVar2[-1]);
        *(FARPROC *)*puVar2 = pFVar1;
        if (*(int *)*puVar2 == 0) goto LAB_217a6824;
        param_1 = param_1 + 1;
        puVar2 = puVar2 + 2;
      } while (param_1 < param_3);
    }
    *param_2 = (int)hModule;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return 0;
}



LPCSTR FUN_217a4e1d(LPCSTR param_1,LPSTR param_2)

{
  int iVar1;
  CHAR local_130 [300];
  
  GetProfileStringA("Ports",param_1,"NotFound",local_130,299);
  iVar1 = lstrcmpiA("NotFound",local_130);
  if ((iVar1 == 0) && (iVar1 = lstrlenA(param_1), param_1[iVar1 + -1] != ':')) {
    lstrcpyA(param_2,param_1);
    lstrcatA(param_2,":");
    GetProfileStringA("Ports",param_2,"NotFound",local_130,299);
    iVar1 = lstrcmpiA("NotFound",local_130);
    if (iVar1 != 0) {
      return param_2;
    }
  }
  return param_1;
}



undefined4 FUN_217a4f09(int param_1,LPCWSTR param_2)

{
  uint cbMultiByte;
  uint uVar1;
  HDC hdc;
  int iVar2;
  BSTR pOVar3;
  LPSTR local_90 [31];
  byte local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = 0;
  while( true ) {
    if (((byte)*(uint *)(param_1 + 0x38) & 3) == 3) {
      if (local_8 == 0) {
        local_8 = 2;
      }
      else {
        local_c = 1;
        local_8 = 1;
      }
    }
    else {
      local_c = 1;
      local_8 = *(uint *)(param_1 + 0x38);
    }
    uVar1 = local_8 & 2;
    if (uVar1 == 0) {
      hdc = GetDC((HWND)0x0);
    }
    else {
      hdc = (HDC)FUN_217a8ba6();
    }
    iVar2 = lstrlenW(param_2);
    cbMultiByte = iVar2 * 2 + 2;
    FUN_217a34bc(local_90,cbMultiByte);
    WideCharToMultiByte(0,0,param_2,-1,local_90[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    local_10 = FUN_217a4ffa(hdc,local_90[0]);
    if (uVar1 == 0) {
      ReleaseDC((HWND)0x0,hdc);
    }
    else {
      DeleteDC(hdc);
    }
    if (local_10 != 0) break;
    if (local_c != 0) goto LAB_217a4fb7;
    if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_90[0]);
    }
  }
  SysFreeString(*(BSTR *)(param_1 + 0x6c));
  pOVar3 = SysAllocString(param_2);
  *(BSTR *)(param_1 + 0x6c) = pOVar3;
  *(uint *)(param_1 + -0x10) = *(uint *)(param_1 + -0x10) | 1;
  FUN_217a40fd((void *)(param_1 + -0x94),8);
LAB_217a4fb7:
  if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_90[0]);
  }
  return 0;
}



undefined4 __cdecl FUN_217a4ffa(HDC param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_c;
  char *local_8;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  if (pcVar2 != param_2) {
    while (pcVar2 = pcVar2 + -1, param_2 <= pcVar2) {
      if (*pcVar2 != ' ') {
        if (pcVar2 < param_2) {
          return 1;
        }
        local_c = 0;
        local_8 = param_2;
        EnumFontFamiliesA(param_1,(LPCSTR)0x0,FUN_217a5048,(LPARAM)&local_c);
        return local_c;
      }
      *pcVar2 = '\0';
    }
  }
  return 1;
}



undefined4 FUN_217a5048(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 == 0) {
    iVar1 = lstrcmpiA((LPCSTR)(param_1 + 0x1c),(LPCSTR)param_4[1]);
    if (iVar1 != 0) {
      return 1;
    }
    lstrcpyA((LPSTR)param_4[1],(LPCSTR)(param_1 + 0x1c));
    *param_4 = 1;
  }
  return 0;
}



int FUN_217a549f(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x4c);
  iVar2 = FUN_217a54e5(piVar1,param_2);
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



void __thiscall FUN_217a54e5(void *this,int *param_1)

{
  int iVar1;
  undefined2 local_1c [4];
  int local_14;
  int local_c;
  undefined4 local_8;
  
  FUN_217a553a((int *)((int)this + 0x88),&local_c);
  local_14 = local_c;
  local_1c[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,u__ExtentX_217b3798,local_1c);
  if (-1 < iVar1) {
    local_14 = local_8;
    (**(code **)(*param_1 + 0x10))(param_1,u__ExtentY_217b37ac,local_1c);
  }
  return;
}



void __cdecl FUN_217a553a(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_217a2886();
  iVar1 = DAT_217b36e0;
  iVar2 = DAT_217b36e0 >> 1;
  *param_2 = (*param_1 * 0x9ec + (DAT_217b36dc >> 1)) / DAT_217b36dc;
  param_2[1] = (param_1[1] * 0x9ec + iVar2) / iVar1;
  return;
}



int FUN_217a5580(void *param_1,int *param_2,int param_3)

{
  int iVar1;
  ushort local_64 [40];
  undefined2 local_14 [4];
  undefined4 local_c;
  
  local_14[0] = 3;
  local_c = 0x60000;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"_Version",local_14);
  if (-1 < iVar1) {
    FUN_217a55d6(param_1,local_64);
    iVar1 = FUN_217a5707(param_2,(int *)&PTR_u_CancelError_217b3438,(int)local_64,param_3);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined4 __thiscall FUN_217a55d6(void *this,ushort *param_1)

{
  *param_1 = (ushort)(*(uint *)((int)this + 0xd8) >> 4) & 1;
  param_1[1] = *(byte *)((int)this + 0xd8) & 1;
  param_1[2] = (ushort)(*(uint *)((int)this + 0xd8) >> 1) & 1;
  param_1[3] = (ushort)(*(uint *)((int)this + 0xd8) >> 2) & 1;
  param_1[4] = (ushort)(*(uint *)((int)this + 0xd8) >> 3) & 1;
  param_1[5] = (ushort)(*(uint *)((int)this + 0xd8) >> 5) & 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0xfc);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0x100);
  param_1[8] = *(ushort *)((int)this + 0xe4);
  param_1[9] = *(ushort *)((int)this + 0xea);
  param_1[10] = *(ushort *)((int)this + 0xdc);
  param_1[0xb] = *(ushort *)((int)this + 0xde);
  param_1[0xc] = *(ushort *)((int)this + 0xe6);
  param_1[0xd] = *(ushort *)((int)this + 0xe2);
  param_1[0xe] = *(ushort *)((int)this + 0xe0);
  param_1[0xf] = *(ushort *)((int)this + 0xe8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0xf4);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0xf8);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x11c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)this + 0x10c);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((int)this + 0x110);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x118);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 300);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x124);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x128);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x120);
  *(int *)(param_1 + 0x26) = (int)*(short *)((int)this + 0xec);
  return 0;
}



// WARNING: Type propagation algorithm not settling

int __cdecl FUN_217a5707(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  UINT UVar2;
  uint uVar3;
  uint uVar4;
  VARTYPE *pVVar5;
  LONG *pLVar6;
  char *pcVar7;
  _union_2685 *p_Var8;
  VARTYPE *pVVar9;
  bool bVar10;
  undefined1 local_14 [16];
  
  VariantInit((VARIANTARG *)&((_union_2683 *)local_14)->n2);
  if (*param_2 != 0) {
    pVVar5 = (VARTYPE *)(param_2 + 3);
    do {
      if (*pVVar5 == 8) {
        param_2 = (int *)(*(int *)(pVVar5 + -4) + param_3);
      }
      if (param_4 == 0) {
        if (*pVVar5 != 8) {
          iVar1 = *(int *)(pVVar5 + 2);
          bVar10 = true;
          pcVar7 = (char *)(*(int *)(pVVar5 + -4) + param_3);
          pVVar9 = pVVar5 + -2;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar10 = *pcVar7 == (char)*pVVar9;
            pcVar7 = pcVar7 + 1;
            pVVar9 = (VARTYPE *)((int)pVVar9 + 1);
          } while (bVar10);
          if (!bVar10) goto LAB_217a5784;
        }
        if ((*pVVar5 == 8) && (UVar2 = SysStringLen((BSTR)*param_2), UVar2 != 0)) goto LAB_217a5784;
      }
      else {
LAB_217a5784:
        local_14._0_2_ = *pVVar5;
        if (local_14._0_2_ == 8) {
          local_14._8_4_ = SysAllocString((OLECHAR *)*param_2);
        }
        else {
          uVar4 = *(uint *)(pVVar5 + 2);
          pLVar6 = (LONG *)(*(int *)(pVVar5 + -4) + param_3);
          p_Var8 = &(((_union_2683 *)local_14)->n2).n3;
          for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            p_Var8->lVal = *pLVar6;
            pLVar6 = pLVar6 + 1;
            p_Var8 = (_union_2685 *)(&p_Var8->lVal + 1);
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            p_Var8->bVal = (BYTE)*pLVar6;
            pLVar6 = (LONG *)((int)pLVar6 + 1);
            p_Var8 = (_union_2685 *)((int)p_Var8 + 1);
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x10))
                          (param_1,*(int *)(pVVar5 + -6),(_union_2683 *)local_14);
        VariantClear((VARIANTARG *)&((_union_2683 *)local_14)->n2);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      pVVar9 = pVVar5 + 6;
      pVVar5 = pVVar5 + 0xc;
    } while (*(int *)pVVar9 != 0);
  }
  return 0;
}



int FUN_217a57b4(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_217a57e5((void *)(param_1 + -0x50),param_2);
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



void __thiscall FUN_217a57e5(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_217a5803(this,param_1);
  if (-1 < iVar1) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x3c))(this,param_1);
  }
  return;
}



void __thiscall FUN_217a5803(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x12344321;
  local_8 = 8;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    FUN_217a553a((int *)((int)this + 0x88),local_14);
    (**(code **)(*param_1 + 0x10))(param_1,local_14,8,0);
  }
  return;
}



int FUN_217a5856(UINT param_1,int *param_2)

{
  BSTR pOVar1;
  UINT UVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50 [11];
  uint local_24;
  UINT local_20;
  UINT local_1c;
  UINT local_18;
  UINT local_14;
  UINT local_10;
  UINT local_c;
  UINT local_8;
  
  UVar2 = param_1;
  local_54 = 0;
  local_5c = 0xf9043c86;
  local_58 = 0x60000;
  puVar5 = local_50;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pOVar1 = *(BSTR *)(param_1 + 0x11c);
  puVar5 = (undefined4 *)(param_1 + 0xd8);
  puVar6 = local_50;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1 = SysStringLen(pOVar1);
  local_8 = SysStringLen(*(BSTR *)(UVar2 + 0x10c));
  local_c = SysStringLen(*(BSTR *)(UVar2 + 0x110));
  local_10 = SysStringLen(*(BSTR *)(UVar2 + 0x118));
  local_14 = SysStringLen(*(BSTR *)(UVar2 + 300));
  local_18 = SysStringLen(*(BSTR *)(UVar2 + 0x124));
  local_1c = SysStringLen(*(BSTR *)(UVar2 + 0x128));
  local_20 = SysStringLen(*(BSTR *)(UVar2 + 0x120));
  piVar3 = param_2;
  local_24 = local_24 & 0xffffff00 | (uint)(0 < (int)param_1) | (uint)(0 < (int)local_8) << 1 |
             (uint)(0 < (int)local_c) << 2 | (uint)(0 < (int)local_10) << 3 |
             (uint)(0 < (int)local_14) << 4 | (uint)(0 < (int)local_18) << 5 |
             (uint)(0 < (int)local_1c) << 7 | (uint)(0 < (int)local_20) << 6;
  local_54 = (-(uint)(param_1 != 0) & param_1 * 2 + 4) + (-(uint)(local_c != 0) & local_c * 2 + 4) +
             (-(uint)(local_8 != 0) & local_8 * 2 + 4) + (-(uint)(local_14 != 0) & local_14 * 2 + 4)
             + (-(uint)(local_10 != 0) & local_10 * 2 + 4) +
             (-(uint)(local_1c != 0) & local_1c * 2 + 4) +
             (-(uint)(local_18 != 0) & local_18 * 2 + 4) +
             (-(uint)(local_20 != 0) & local_20 * 2 + 4);
  iVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_5c,0x3c,0);
  if ((((((-1 < iVar4) &&
         (((local_24 & 1) == 0 ||
          ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&param_1,4,0), -1 < iVar4 &&
           (iVar4 = (**(code **)(*piVar3 + 0x10))
                              (piVar3,*(undefined4 *)(UVar2 + 0x11c),param_1 * 2,0), -1 < iVar4)))))
         ) && (((local_24 >> 1 & 1) == 0 ||
               ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_8,4,0), -1 < iVar4 &&
                (iVar4 = (**(code **)(*piVar3 + 0x10))
                                   (piVar3,*(undefined4 *)(UVar2 + 0x10c),local_8 * 2,0), -1 < iVar4
                )))))) &&
       (((((local_24 >> 2 & 1) == 0 ||
          ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_c,4,0), -1 < iVar4 &&
           (iVar4 = (**(code **)(*piVar3 + 0x10))
                              (piVar3,*(undefined4 *)(UVar2 + 0x110),local_c * 2,0), -1 < iVar4))))
         && (((local_24 >> 3 & 1) == 0 ||
             ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_10,4,0), -1 < iVar4 &&
              (iVar4 = (**(code **)(*piVar3 + 0x10))
                                 (piVar3,*(undefined4 *)(UVar2 + 0x118),local_10 * 2,0), -1 < iVar4)
              ))))) &&
        (((local_24 >> 4 & 1) == 0 ||
         ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_14,4,0), -1 < iVar4 &&
          (iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(UVar2 + 300),local_14 * 2,0)
          , -1 < iVar4)))))))) &&
      (((local_24 >> 5 & 1) == 0 ||
       ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_18,4,0), -1 < iVar4 &&
        (iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(UVar2 + 0x124),local_18 * 2,0)
        , -1 < iVar4)))))) &&
     ((((local_24 >> 7 & 1) == 0 ||
       ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_1c,4,0), -1 < iVar4 &&
        (iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(UVar2 + 0x128),local_1c * 2,0)
        , -1 < iVar4)))) &&
      (((local_24 >> 6 & 1) == 0 ||
       ((iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_20,4,0), -1 < iVar4 &&
        (iVar4 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(UVar2 + 0x120),local_20 * 2,0)
        , -1 < iVar4)))))))) {
    iVar4 = 0;
  }
  return iVar4;
}



int FUN_217a5add(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + -0x4c) + 0x74))();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1;
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 FUN_217a5b01(void)

{
  return 1;
}



undefined4 FUN_217a68f5(void)

{
  code *unaff_ESI;
  int unaff_EDI;
  
  (*unaff_ESI)();
  if (DAT_217b31bc != unaff_EDI) {
    (*unaff_ESI)(DAT_217b31bc);
    DAT_217b31bc = unaff_EDI;
  }
  return 1;
}



void FUN_217a690b(void)

{
  int in_EAX;
  short *psVar1;
  short *unaff_ESI;
  code *unaff_EDI;
  
  (*unaff_EDI)(*(undefined4 *)(in_EAX + 0x44),DAT_217b31a4);
  do {
    psVar1 = unaff_ESI;
    unaff_ESI = psVar1 + 4;
    if (*unaff_ESI == -1) {
      if (DAT_217b31e0 != (HWND)0x0) {
        DestroyWindow(DAT_217b31e0);
        DAT_217b31e0 = (HWND)0x0;
        (*unaff_EDI)(s_CtlFrameWork_Parking_217b37c0,DAT_217b31a4);
      }
      if (DAT_217b31dc != '\0') {
        (*unaff_EDI)("CtlFrameWork_ReflectWindow",DAT_217b31a4);
        DAT_217b31dc = '\0';
      }
      return;
    }
  } while ((*unaff_ESI != 2) || (*(short *)(*(int *)(psVar1 + 6) + 0x48) == 0));
  FUN_217a690b();
  return;
}



undefined4 __fastcall switchD_217a1750::caseD_10a(undefined4 param_1,int param_2)

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



undefined4 __fastcall FUN_217a6cf0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_217a7a58;
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



undefined4 __fastcall FUN_217a6d31(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_217a7a48;
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



void FUN_217a7b78(void)

{
  SysAllocString(L"28C4C820-401A-101B-A3C9-08002B2F49FB");
  return;
}



undefined4 __cdecl
DLLGetDocumentation(undefined4 param_1,undefined4 param_2,LCID param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_104 [256];
  
                    // 0x7b9d  5  DLLGetDocumentation
  *param_5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b31c0);
  if ((param_3 != DAT_217b3e84) || (DAT_217b31e4 == (HMODULE)0x0)) {
    if ((DAT_217b31e4 != (HMODULE)0x0) &&
       ((DAT_217b31e4 != DAT_217b31a0 && (DAT_217b31e4 != DAT_217b31a4)))) {
      FreeLibrary(DAT_217b31e4);
    }
    DAT_217b31e4 = FUN_217a45b1(param_3);
    DAT_217b3e84 = param_3;
  }
  iVar1 = LoadStringA(DAT_217b31e4,param_4 & 0xffff,local_104,0xff);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b31c0);
  if (0 < iVar1) {
    pWVar2 = FUN_217ac59c(local_104,(LPWSTR)0x0);
    *param_5 = pWVar2;
  }
  return 0;
}



undefined4 FUN_217a7c3e(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    uVar2 = 0x80004003;
  }
  else {
    if (*param_1 != 0) {
      piVar1 = param_1 + 2;
      do {
        uVar4 = piVar1[3];
        piVar5 = piVar1;
        piVar6 = (int *)(piVar1[-1] + param_2);
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)piVar6 = (char)*piVar5;
          piVar5 = (int *)((int)piVar5 + 1);
          piVar6 = (int *)((int)piVar6 + 1);
        }
        piVar5 = piVar1 + 5;
        piVar1 = piVar1 + 7;
      } while (*piVar5 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 __thiscall FUN_217a7c89(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((int)this + 0xd8);
  uVar2 = (*param_1 & 1) << 4;
  *(uint *)((int)this + 0xd8) = uVar2 | uVar1 & 0xffffffef;
  uVar3 = param_1[2] & 1;
  *(uint *)((int)this + 0xd8) = uVar3 | uVar2 | uVar1 & 0xffffffee;
  uVar4 = (param_1[4] & 1) << 1;
  *(uint *)((int)this + 0xd8) = uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffec;
  uVar5 = (param_1[6] & 1) << 2;
  *(uint *)((int)this + 0xd8) = uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffe8;
  uVar6 = (param_1[8] & 1) << 3;
  *(uint *)((int)this + 0xd8) = uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffe0;
  *(uint *)((int)this + 0xd8) =
       (param_1[10] & 1) << 5 | uVar6 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 & 0xffffffc0;
  *(float *)((int)this + 0xfc) = (float)(int)*(short *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)((int)this + 0xe4) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0xea) = *(undefined2 *)(param_1 + 0x12);
  *(undefined2 *)((int)this + 0xdc) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)((int)this + 0xde) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)((int)this + 0xe6) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)((int)this + 0xe2) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined2 *)((int)this + 0xe0) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)((int)this + 0xe8) = *(undefined2 *)(param_1 + 0x1e);
  *(int *)((int)this + 0xf4) = (int)*(short *)(param_1 + 0x20);
  *(int *)((int)this + 0xf8) = (int)*(short *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x44);
  return 0;
}



LPSTGMEDIUM FUN_217a7df8(int param_1,ushort *param_2,LPSTGMEDIUM param_3,int param_4)

{
  LPOLESTR pOVar1;
  uint uVar2;
  int iVar3;
  LPSTGMEDIUM pSVar4;
  byte *pbVar5;
  byte local_4c [72];
  
  if (param_3->tymed == 4) {
    uVar2 = FUN_217ac09b();
    param_2 = (ushort *)(uint)(*param_2 == uVar2);
    pSVar4 = param_3;
    if (param_2 != (ushort *)0x0) {
      pOVar1 = (param_3->u).lpszFileName;
      pbVar5 = local_4c;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar5[0] = 0;
        pbVar5[1] = 0;
        pbVar5[2] = 0;
        pbVar5[3] = 0;
        pbVar5 = pbVar5 + 4;
      }
      FUN_217a7c3e((int *)&PTR_u_CancelError_217b3b30,(int)local_4c);
      pSVar4 = (LPSTGMEDIUM)
               FUN_217abc78((int *)pOVar1,(int *)&PTR_u_CancelError_217b3b30,(LPCSTR)local_4c);
      if (-1 < (int)pSVar4) {
        FUN_217a7c89((void *)(param_1 + -0xd0),local_4c);
      }
    }
  }
  else {
    pSVar4 = (LPSTGMEDIUM)0x80040069;
  }
  if (param_4 != 0) {
    ReleaseStgMedium(param_3);
  }
  if (-1 < (int)pSVar4) {
    pSVar4 = (LPSTGMEDIUM)((-(uint)(param_2 != (ushort *)0x0) & 0x7ffbff9c) + 0x80040064);
  }
  return pSVar4;
}



undefined4 FUN_217a7eb5(void *param_1,undefined4 param_2,HDC param_3,int *param_4)

{
  int iVar1;
  HICON pHVar2;
  
  iVar1 = GetDeviceCaps(param_3,2);
  if (iVar1 == 5) {
    FUN_217a7f17(param_1,param_3,param_4);
  }
  else {
    if (*(int *)((int)param_1 + 0x138) == 0) {
      pHVar2 = LoadIconA(DAT_217b31a4,(LPCSTR)0xa);
      *(undefined4 *)((int)param_1 + 0x138) = pHVar2;
    }
    DrawIcon(param_3,*param_4,param_4[1],*(HICON *)((int)param_1 + 0x138));
  }
  return 0;
}



void __thiscall FUN_217a7f17(void *this,HDC param_1,int *param_2)

{
  HDC hdc;
  UINT nBitCount;
  UINT nPlanes;
  void *lpBits;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  HDC local_18;
  HBITMAP local_14;
  HGDIOBJ local_10;
  int local_c;
  int local_8;
  
  if ((*(byte *)((int)this + 0x13c) & 1) == 0) {
    local_8 = *(int *)((int)this + 0x88);
    *(uint *)((int)this + 0x13c) = *(uint *)((int)this + 0x13c) | 1;
    local_c = *(int *)((int)this + 0x8c);
    local_18 = GetDC((HWND)0x0);
    hdc = CreateCompatibleDC(local_18);
    lpBits = (void *)0x0;
    nBitCount = GetDeviceCaps(hdc,0xc);
    nPlanes = GetDeviceCaps(hdc,0xe);
    local_14 = CreateBitmap(local_8,local_c,nPlanes,nBitCount,lpBits);
    local_10 = SelectObject(hdc,local_14);
    local_28 = 0;
    local_24 = 0;
    local_20 = local_8;
    local_1c = local_c;
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x48))(this,1,hdc,&local_28,&local_28,hdc,1);
    FUN_217a7ff4(param_1,hdc,param_2,1);
    SelectObject(hdc,local_10);
    DeleteObject(local_14);
    ReleaseDC((HWND)0x0,local_18);
    DeleteDC(hdc);
    *(uint *)((int)this + 0x13c) = *(uint *)((int)this + 0x13c) & 0xfffffffe;
  }
  return;
}



undefined4 __cdecl FUN_217a7ff4(HDC param_1,HDC param_2,int *param_3,int param_4)

{
  int iVar1;
  UINT DestHeight;
  RGBQUAD *pRVar2;
  int iVar3;
  BYTE *pBVar4;
  LPBITMAPINFO lpbmi;
  UINT cEntries;
  undefined1 local_34 [4];
  LONG local_30;
  UINT local_2c;
  char cStack_24;
  WORD local_22;
  undefined4 local_1c;
  HBITMAP local_18;
  LONG local_14;
  HBITMAP local_10;
  LPPALETTEENTRY local_c;
  LPVOID local_8;
  
  local_c = (LPPALETTEENTRY)0x0;
  lpbmi = (LPBITMAPINFO)0x0;
  local_8 = (LPVOID)0x0;
  local_1c = 0;
  local_18 = CreateBitmap(1,1,1,1,(void *)0x0);
  if (local_18 != (HBITMAP)0x0) {
    local_10 = (HBITMAP)SelectObject(param_2,local_18);
    if (local_10 != (HBITMAP)0x0) {
      SelectObject(param_2,local_10);
      DeleteObject(local_18);
      iVar1 = GetObjectA(local_10,0x18,local_34);
      if (iVar1 != 0) {
        cEntries = 1 << ((char)local_22 * cStack_24 & 0x1fU);
        lpbmi = (LPBITMAPINFO)HeapAlloc(DAT_217b3020,0,cEntries * 4 + 0x28);
        if (lpbmi != (LPBITMAPINFO)0x0) {
          iVar1 = *param_3;
          if (param_4 == 0) {
            local_18 = (HBITMAP)param_3[1];
            local_14 = local_30;
            DestHeight = local_2c;
          }
          else {
            local_18 = (HBITMAP)param_3[1];
            local_14 = param_3[2] - iVar1;
            DestHeight = param_3[3] - (int)local_18;
          }
          (lpbmi->bmiHeader).biSize = 0x28;
          (lpbmi->bmiHeader).biWidth = local_30;
          (lpbmi->bmiHeader).biHeight = local_2c;
          (lpbmi->bmiHeader).biPlanes = 1;
          (lpbmi->bmiHeader).biCompression = 0;
          (lpbmi->bmiHeader).biBitCount = local_22;
          (lpbmi->bmiHeader).biSizeImage = 0;
          (lpbmi->bmiHeader).biXPelsPerMeter = 0;
          (lpbmi->bmiHeader).biYPelsPerMeter = 0;
          (lpbmi->bmiHeader).biClrUsed = 0;
          (lpbmi->bmiHeader).biClrImportant = 0;
          if ((int)cEntries < 0x101) {
            local_c = (LPPALETTEENTRY)HeapAlloc(DAT_217b3020,0,cEntries << 2);
            if (local_c == (LPPALETTEENTRY)0x0) goto LAB_217a81b4;
            GetSystemPaletteEntries(param_2,0,cEntries,local_c);
            if (0 < (int)cEntries) {
              pBVar4 = &local_c->peGreen;
              pRVar2 = lpbmi->bmiColors;
              do {
                pRVar2->rgbRed = ((tagPALETTEENTRY *)(pBVar4 + -1))->peRed;
                pRVar2->rgbBlue = pBVar4[1];
                pRVar2->rgbGreen = *pBVar4;
                pRVar2 = pRVar2 + 1;
                pBVar4 = pBVar4 + 4;
                cEntries = cEntries - 1;
              } while (cEntries != 0);
            }
          }
          local_8 = HeapAlloc(DAT_217b3020,0,((uint)local_22 * local_30 + 0x1f >> 5) * local_2c * 4)
          ;
          if (local_8 != (LPVOID)0x0) {
            iVar3 = GetDIBits(param_2,local_10,0,local_2c,local_8,lpbmi,0);
            if (iVar3 != 0) {
              iVar1 = StretchDIBits(param_1,iVar1,(int)local_18,local_14,DestHeight,0,0,local_30,
                                    local_2c,local_8,lpbmi,0,0xcc0020);
              if (iVar1 != -1) {
                local_1c = 1;
              }
            }
          }
        }
      }
    }
  }
LAB_217a81b4:
  if (local_8 != (LPVOID)0x0) {
    HeapFree(DAT_217b3020,0,local_8);
  }
  if (lpbmi != (LPBITMAPINFO)0x0) {
    HeapFree(DAT_217b3020,0,lpbmi);
  }
  if (local_c != (LPPALETTEENTRY)0x0) {
    HeapFree(DAT_217b3020,0,local_c);
  }
  return local_1c;
}



ATOM FUN_217a8206(void)

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
  local_2c.lpfnWndProc = FUN_217add31;
  local_2c.hInstance = DAT_217b31a4;
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = (HBRUSH)0x6;
  local_2c.lpszClassName = *(LPCSTR *)(PTR_PTR_217b3154 + 0x44);
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



HWND __fastcall FUN_217a8293(int param_1)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  int *local_10;
  int *local_c;
  HWND local_8;
  
  local_8 = (HWND)0x0;
  local_c = (int *)0x0;
  (**(code **)(*(int *)(param_1 + 0x38) + 0x10))((int *)(param_1 + 0x38),&local_10);
  if (local_10 != (int *)0x0) {
    iVar2 = (**(code **)*local_10)(local_10,&DAT_217a79c8,&local_c);
    if ((-1 < iVar2) && (local_c != (int *)0x0)) {
      (**(code **)(*local_c + 0xc))(local_c,&local_8);
      piVar1 = local_c;
      if (local_c != (int *)0x0) {
        local_c = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    piVar1 = local_10;
    if (local_10 != (int *)0x0) {
      local_10 = (int *)0x0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  if (local_8 == (HWND)0x0) {
    local_8 = GetActiveWindow();
  }
  DVar3 = GetWindowThreadProcessId(local_8,(LPDWORD)0x0);
  DVar4 = GetCurrentThreadId();
  if (DVar3 != DVar4) {
    local_8 = (HWND)0x0;
  }
  return local_8;
}



int __thiscall FUN_217a8328(void *this,short param_1)

{
  OLECHAR *psz;
  UINT UVar1;
  BSTR pOVar2;
  int iVar3;
  LPWSTR pWVar4;
  int iVar5;
  tagOFNA *ptVar6;
  LPSTR pCVar7;
  LPCSTR pCVar8;
  LPCSTR pCVar9;
  LPBOOL pBVar10;
  int iStack_170;
  LPCSTR local_16c;
  BSTR pOStack_168;
  LPCSTR local_164;
  LPSTR local_160;
  LPSTR local_15c;
  LPSTR local_158;
  int local_154;
  tagOFNA local_150 [3];
  
  local_154 = -1;
  psz = *(OLECHAR **)((int)this + 0x118);
  ptVar6 = local_150;
  for (iVar5 = 0x13; iVar5 != 0; iVar5 = iVar5 + -1) {
    ptVar6->lStructSize = 0;
    ptVar6 = (tagOFNA *)&ptVar6->hwndOwner;
  }
  local_164 = (LPCSTR)0x0;
  local_158 = (LPSTR)0x0;
  local_15c = (LPSTR)0x0;
  local_160 = (LPSTR)0x0;
  local_16c = (LPCSTR)0x0;
  local_150[0].lStructSize = 0x4c;
  pOStack_168 = SysAllocString(psz);
  UVar1 = SysStringLen(pOStack_168);
  if (UVar1 == 0) {
    local_150[0].lpstrFilter = (LPCSTR)0x0;
LAB_217a838d:
    local_150[0].nFilterIndex = (DWORD)*(short *)((int)this + 0xea);
    local_150[0].hInstance = (HINSTANCE)0x0;
    local_150[0].lpstrCustomFilter = (LPSTR)0x0;
    local_150[0].nMaxCustFilter = 0;
    if (*(int *)((int)this + 0x110) == 0) {
      pOVar2 = SysAllocString(L"");
      *(BSTR *)((int)this + 0x110) = pOVar2;
      if (pOVar2 == (BSTR)0x0) goto LAB_217a85a2;
    }
    pBVar10 = (LPBOOL)0x0;
    pCVar8 = (LPCSTR)0x0;
    iVar5 = 0;
    pCVar7 = (LPSTR)0x0;
    UVar1 = SysStringLen(*(BSTR *)((int)this + 0x110));
    iStack_170 = WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x110),UVar1,pCVar7,iVar5,pCVar8,
                                     pBVar10);
    local_16c = (LPCSTR)HeapAlloc(DAT_217b3020,0,(int)*(short *)((int)this + 0xe8));
    if (*(short *)((int)this + 0xe8) < iStack_170) {
      iStack_170 = (int)*(short *)((int)this + 0xe8);
    }
    if (local_16c != (LPCSTR)0x0) {
      pBVar10 = (LPBOOL)0x0;
      pCVar9 = (LPCSTR)0x0;
      local_16c[iStack_170] = '\0';
      pCVar8 = local_16c;
      iVar5 = iStack_170;
      UVar1 = SysStringLen(*(BSTR *)((int)this + 0x110));
      WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x110),UVar1,pCVar8,iVar5,pCVar9,pBVar10);
      if (((*(uint *)((int)this + 0xf8) & 0x80200) != 0) && (iVar5 = 0, 0 < iStack_170)) {
        do {
          if ((iVar5 == iStack_170 + -2) && (local_16c[iVar5 + 1] == '\0')) break;
          if (local_16c[iVar5] == '\0') {
            local_16c[iVar5] = ' ';
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iStack_170);
      }
      if (*(int *)((int)this + 0x120) == 0) {
        pOVar2 = SysAllocString(L"");
        *(BSTR *)((int)this + 0x120) = pOVar2;
        if (pOVar2 == (BSTR)0x0) goto LAB_217a85a2;
      }
      pBVar10 = (LPBOOL)0x0;
      pCVar8 = (LPCSTR)0x0;
      iVar5 = 0;
      pCVar7 = (LPSTR)0x0;
      UVar1 = SysStringLen(*(BSTR *)((int)this + 0x120));
      iVar5 = WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x120),UVar1,pCVar7,iVar5,pCVar8,
                                  pBVar10);
      local_158 = (LPSTR)HeapAlloc(DAT_217b3020,0,iVar5 + 1);
      if (local_158 != (LPSTR)0x0) {
        pBVar10 = (LPBOOL)0x0;
        pCVar8 = (LPCSTR)0x0;
        local_158[iVar5] = '\0';
        pCVar7 = local_158;
        UVar1 = SysStringLen(*(BSTR *)((int)this + 0x120));
        WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x120),UVar1,pCVar7,iVar5,pCVar8,pBVar10);
        if (*(int *)((int)this + 0x10c) == 0) {
          pOVar2 = SysAllocString(L"");
          *(BSTR *)((int)this + 0x10c) = pOVar2;
          if (pOVar2 == (BSTR)0x0) goto LAB_217a85a2;
        }
        pBVar10 = (LPBOOL)0x0;
        pCVar8 = (LPCSTR)0x0;
        iVar5 = 0;
        pCVar7 = (LPSTR)0x0;
        UVar1 = SysStringLen(*(BSTR *)((int)this + 0x10c));
        iVar5 = WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x10c),UVar1,pCVar7,iVar5,pCVar8,
                                    pBVar10);
        local_15c = (LPSTR)HeapAlloc(DAT_217b3020,0,iVar5 + 1);
        if (local_15c != (LPSTR)0x0) {
          pBVar10 = (LPBOOL)0x0;
          pCVar8 = (LPCSTR)0x0;
          local_15c[iVar5] = '\0';
          pCVar7 = local_15c;
          UVar1 = SysStringLen(*(BSTR *)((int)this + 0x10c));
          WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x10c),UVar1,pCVar7,iVar5,pCVar8,pBVar10)
          ;
          if (*(int *)((int)this + 0x11c) == 0) {
            pOVar2 = SysAllocString(L"");
            *(BSTR *)((int)this + 0x11c) = pOVar2;
            if (pOVar2 == (BSTR)0x0) goto LAB_217a85a2;
          }
          pBVar10 = (LPBOOL)0x0;
          pCVar8 = (LPCSTR)0x0;
          iVar5 = 0;
          pCVar7 = (LPSTR)0x0;
          UVar1 = SysStringLen(*(BSTR *)((int)this + 0x11c));
          iVar5 = WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x11c),UVar1,pCVar7,iVar5,pCVar8,
                                      pBVar10);
          local_160 = (LPSTR)HeapAlloc(DAT_217b3020,0,iVar5 + 1);
          if (local_160 != (LPSTR)0x0) {
            pBVar10 = (LPBOOL)0x0;
            pCVar8 = (LPCSTR)0x0;
            local_160[iVar5] = '\0';
            pCVar7 = local_160;
            UVar1 = SysStringLen(*(BSTR *)((int)this + 0x11c));
            WideCharToMultiByte(0,0,*(LPCWSTR *)((int)this + 0x11c),UVar1,pCVar7,iVar5,pCVar8,
                                pBVar10);
            local_150[0].nMaxFile = (DWORD)*(short *)((int)this + 0xe8);
            local_150[0].lpstrFileTitle = (LPSTR)&local_150[0].pvReserved;
            local_150[0].Flags = *(uint *)((int)this + 0xf8) & 0xffffff1f;
            local_150[0].pvReserved._0_1_ = 0;
            local_150[0].nMaxFileTitle = 0x104;
            local_150[0].lCustData = 0;
            local_150[0].lpfnHook = (LPOFNHOOKPROC)0x0;
            local_150[0].lpTemplateName = (LPCSTR)0x0;
            local_150[0].lpstrFile = local_16c;
            local_150[0].lpstrInitialDir = local_158;
            local_150[0].lpstrTitle = local_15c;
            local_150[0].lpstrDefExt = local_160;
            FUN_217a8ddb(this,1,&local_150[0].hwndOwner);
            iVar5 = 0;
            if (param_1 == 1) {
              iVar3 = GetOpenFileNameA(local_150);
            }
            else {
              iVar3 = GetSaveFileNameA(local_150);
            }
            if (iVar3 == 0) {
              iVar5 = -0x7fffbffb;
            }
            FUN_217a8ddb(this,0,(undefined4 *)0x0);
            if (-1 < iVar5) {
              SysFreeString(*(BSTR *)((int)this + 0x114));
              SysFreeString(*(BSTR *)((int)this + 0x110));
              *(undefined4 *)((int)this + 0x110) = 0;
              if (((*(uint *)((int)this + 0xf8) & 0x80000) != 0) &&
                 ((*(uint *)((int)this + 0xf8) & 0x200) != 0)) {
                iVar3 = 0;
                iVar5 = local_154;
                if (0 < (int)(local_150[0].nMaxFile - 1)) {
                  do {
                    if ((local_150[0].lpstrFile[iVar3] == '\0') &&
                       (iVar5 = iVar3, local_150[0].lpstrFile[iVar3 + 1] == '\0')) break;
                    iVar3 = iVar3 + 1;
                    iVar5 = local_154;
                  } while (iVar3 < (int)(local_150[0].nMaxFile - 1));
                }
                local_154 = iVar5;
                if (0 < local_154) {
                  UVar1 = MultiByteToWideChar(0,0,local_16c,local_154,(LPWSTR)0x0,0);
                  pOVar2 = SysAllocStringLen((OLECHAR *)0x0,UVar1);
                  *(BSTR *)((int)this + 0x110) = pOVar2;
                  if (pOVar2 == (BSTR)0x0) {
                    iVar5 = -0x7ff8fff2;
                    goto LAB_217a85b7;
                  }
                  MultiByteToWideChar(0,0,local_16c,local_154,pOVar2,UVar1);
                }
              }
              if (*(int *)((int)this + 0x110) == 0) {
                pWVar4 = FUN_217ac59c(local_16c,(LPWSTR)0x0);
                *(LPWSTR *)((int)this + 0x110) = pWVar4;
              }
              pWVar4 = FUN_217ac59c((LPCSTR)&local_150[0].pvReserved,(LPWSTR)0x0);
              *(LPWSTR *)((int)this + 0x114) = pWVar4;
              *(undefined2 *)((int)this + 0xea) = (undefined2)local_150[0].nFilterIndex;
              iVar5 = 0;
            }
            goto LAB_217a85b7;
          }
        }
      }
    }
  }
  else {
    if (*pOStack_168 == L'|') {
      SysFreeString(pOStack_168);
      UVar1 = SysStringLen(*(BSTR *)((int)this + 0x118));
      pOStack_168 = SysAllocStringLen((OLECHAR *)0x0,UVar1 + 4);
      lstrcpynA((LPSTR)pOStack_168," ",2);
      UVar1 = SysStringLen(*(BSTR *)((int)this + 0x118));
      lstrcpynA((LPSTR)(pOStack_168 + 1),*(LPCSTR *)((int)this + 0x118),UVar1 << 1);
    }
    pBVar10 = (LPBOOL)0x0;
    pCVar8 = (LPCSTR)0x0;
    iVar5 = 0;
    pCVar7 = (LPSTR)0x0;
    UVar1 = SysStringLen(pOStack_168);
    iVar5 = WideCharToMultiByte(0,0,pOStack_168,UVar1,pCVar7,iVar5,pCVar8,pBVar10);
    local_164 = (LPCSTR)HeapAlloc(DAT_217b3020,0,iVar5 + 3);
    if (local_164 != (LPCSTR)0x0) {
      pBVar10 = (LPBOOL)0x0;
      pCVar9 = (LPCSTR)0x0;
      local_164[iVar5] = '\0';
      pCVar8 = local_164;
      UVar1 = SysStringLen(pOStack_168);
      WideCharToMultiByte(0,0,pOStack_168,UVar1,pCVar8,iVar5,pCVar9,pBVar10);
      pCVar8 = local_164;
      local_150[0].lpstrFilter = local_164;
      while (*pCVar8 != '\0') {
        if (*pCVar8 == '|') {
          *pCVar8 = '\0';
          pCVar8 = pCVar8 + 1;
        }
        else {
          pCVar8 = CharNextA(pCVar8);
        }
      }
      *pCVar8 = '\0';
      pCVar8[1] = '\0';
      pCVar8[2] = '\0';
      goto LAB_217a838d;
    }
  }
LAB_217a85a2:
                    // WARNING: Load size is inaccurate
  iVar5 = (**(code **)(*this + 0x30))(0x800a7ff0,0x7ff0,0x7ff0);
LAB_217a85b7:
  if (local_164 != (LPCSTR)0x0) {
    HeapFree(DAT_217b3020,0,local_164);
  }
  if (local_16c != (LPCSTR)0x0) {
    HeapFree(DAT_217b3020,0,local_16c);
  }
  if (local_158 != (LPSTR)0x0) {
    HeapFree(DAT_217b3020,0,local_158);
  }
  if (local_160 != (LPSTR)0x0) {
    HeapFree(DAT_217b3020,0,local_160);
  }
  if (local_15c != (LPSTR)0x0) {
    HeapFree(DAT_217b3020,0,local_15c);
  }
  SysFreeString(pOStack_168);
  *(DWORD *)((int)this + 0xf8) = local_150[0].Flags;
  return iVar5;
}



int __fastcall FUN_217a88ae(void *param_1)

{
  int iVar1;
  BOOL BVar2;
  tagCHOOSECOLORA local_2c;
  COLORREF local_8;
  
  local_2c.lStructSize = 0x24;
  iVar1 = OleTranslateColor(*(undefined4 *)((int)param_1 + 0x100),0,&local_8);
  if (-1 < iVar1) {
    local_2c.rgbResult = local_8;
    local_2c.Flags = *(uint *)((int)param_1 + 0xf8) & 0xffffff8f;
    local_2c.lpCustColors = (COLORREF *)&DAT_217b3e28;
    FUN_217a8ddb(param_1,1,&local_2c.hwndOwner);
    iVar1 = 0;
    BVar2 = ChooseColorA(&local_2c);
    if (BVar2 == 0) {
      iVar1 = -0x7fffbffb;
    }
    FUN_217a8ddb(param_1,0,(undefined4 *)0x0);
    if (-1 < iVar1) {
      *(COLORREF *)((int)param_1 + 0x100) = local_2c.rgbResult;
    }
  }
  return iVar1;
}



int __fastcall FUN_217a892c(void *param_1)

{
  uint uVar1;
  BSTR pOVar2;
  int iVar3;
  BOOL BVar4;
  LPWSTR pWVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  LPSTR local_104 [31];
  byte local_88;
  CHOOSEFONTA local_84;
  tagLOGFONTA local_48;
  int local_c;
  HDC local_8;
  
  local_8 = GetDC((HWND)0x0);
  local_c = GetDeviceCaps(local_8,0x5a);
  lVar8 = __ftol();
  local_48.lfHeight = (LONG)lVar8;
  ReleaseDC((HWND)0x0,local_8);
  if ((*(byte *)((int)param_1 + 0xf8) & 2) == 0) {
    local_8 = GetDC((HWND)0x0);
  }
  else {
    local_8 = (HDC)FUN_217a8ba6();
  }
  local_48.lfItalic = (byte)(*(uint *)((int)param_1 + 0xd8) >> 1) & 1;
  local_48.lfWidth = 0;
  local_48.lfUnderline = (byte)(*(uint *)((int)param_1 + 0xd8) >> 3) & 1;
  local_48.lfStrikeOut = (byte)(*(uint *)((int)param_1 + 0xd8) >> 2) & 1;
  local_48.lfWeight = (-(uint)((*(byte *)((int)param_1 + 0xd8) & 1) != 0) & 300) + 400;
  if (*(int *)((int)param_1 + 300) == 0) {
    pOVar2 = SysAllocString(L" ");
    *(BSTR *)((int)param_1 + 300) = pOVar2;
    if (pOVar2 == (BSTR)0x0) {
      return -0x7ff8fff2;
    }
  }
  iVar3 = lstrlenW(*(LPCWSTR *)((int)param_1 + 300));
  uVar1 = iVar3 * 2 + 2;
  FUN_217a34bc(local_104,uVar1);
  WideCharToMultiByte(0,0,*(LPCWSTR *)((int)param_1 + 300),-1,local_104[0],uVar1,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  lstrcpynA(local_48.lfFaceName,local_104[0],0x1f);
  local_48.lfFaceName[0x1f] = '\0';
  local_84.hDC = local_8;
  local_84.lpLogFont = &local_48;
  local_84.lStructSize = 0x3c;
  local_84.nSizeMin = (INT)*(short *)((int)param_1 + 0xe0);
  local_84.lpszStyle = (LPSTR)0x0;
  local_84.nSizeMax = (INT)*(short *)((int)param_1 + 0xe2);
  local_84.nFontType = 0x8000;
  local_84.Flags = *(uint *)((int)param_1 + 0xf8) & 0xfffffd47 | 0x40;
  OleTranslateColor(*(undefined4 *)((int)param_1 + 0x100),0,&local_84.rgbColors);
  lVar8 = __ftol();
  local_84.iPointSize = (INT)lVar8;
  FUN_217a8ddb(param_1,1,&local_84.hwndOwner);
  local_c = 0;
  BVar4 = ChooseFontA(&local_84);
  if (BVar4 == 0) {
    local_c = -0x7fffbffb;
  }
  FUN_217a8ddb(param_1,0,(undefined4 *)0x0);
  if (-1 < local_c) {
    *(COLORREF *)((int)param_1 + 0x100) = local_84.rgbColors;
    *(float *)((int)param_1 + 0xfc) = (float)local_84.iPointSize * 0.1;
    SysFreeString(*(BSTR *)((int)param_1 + 300));
    pWVar5 = FUN_217ac59c(local_48.lfFaceName,(LPWSTR)0x0);
    *(LPWSTR *)((int)param_1 + 300) = pWVar5;
    uVar1 = *(uint *)((int)param_1 + 0xd8);
    uVar6 = (((local_48.lfUnderline & 1) << 1 | local_48.lfStrikeOut & 1) << 1 |
            local_48.lfItalic & 1) << 1;
    uVar7 = uVar6 | uVar1 & 0xfffffff1;
    *(uint *)((int)param_1 + 0xd8) = uVar7;
    if (local_48.lfWeight == 400) {
      uVar7 = uVar6 | uVar1 & 0xfffffff0;
    }
    else {
      if (local_48.lfWeight != 700) goto LAB_217a8b5b;
      uVar7 = uVar7 | 1;
    }
    *(uint *)((int)param_1 + 0xd8) = uVar7;
  }
LAB_217a8b5b:
  if ((*(byte *)((int)param_1 + 0xf8) & 2) == 0) {
    ReleaseDC((HWND)0x0,local_8);
  }
  else {
    DeleteDC(local_8);
  }
  if ((local_104[0] != (LPCSTR)0x0) && ((local_88 & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_104[0]);
  }
  return local_c;
}



void FUN_217a8ba6(void)

{
  char cVar1;
  DWORD DVar2;
  LPCSTR lpsz;
  LPSTR lpsz_00;
  char local_88 [128];
  LPCSTR local_8;
  
  DVar2 = GetProfileStringA("Windows","Device","",local_88,0x80);
  if (DVar2 == 0) {
    return;
  }
  lpsz = local_88;
  while ((local_88[0] != '\0' && (local_88[0] != ','))) {
    lpsz = CharNextA(lpsz);
    local_88[0] = *lpsz;
  }
  if (*lpsz != '\0') {
    *lpsz = '\0';
    lpsz = lpsz + 1;
  }
  for (; (*lpsz != '\0' && (*lpsz < '!')); lpsz = CharNextA(lpsz)) {
  }
  local_8 = lpsz;
  for (; ((cVar1 = *lpsz, cVar1 != '\0' && (cVar1 != ',')) && (' ' < cVar1)); lpsz = CharNextA(lpsz)
      ) {
  }
  if (*lpsz != '\0') {
    *lpsz = '\0';
    lpsz = lpsz + 1;
  }
  for (; (cVar1 = *lpsz, lpsz_00 = lpsz, cVar1 != '\0' && ((cVar1 < '!' || (cVar1 == ','))));
      lpsz = CharNextA(lpsz)) {
  }
  for (; (*lpsz_00 != '\0' && (' ' < *lpsz_00)); lpsz_00 = CharNextA(lpsz_00)) {
  }
  *lpsz_00 = '\0';
  CreateDCA(local_8,local_88,lpsz,(DEVMODEA *)0x0);
  return;
}



BOOL __fastcall FUN_217a8c75(int param_1)

{
  uint cbMultiByte;
  BSTR pOVar1;
  int iVar2;
  UINT uCommand;
  BOOL BVar3;
  LPSTR dwData;
  LPSTR local_108 [31];
  byte local_8c;
  LPSTR local_88 [31];
  byte local_c;
  LPSTR local_8;
  
  if (*(int *)(param_1 + 0x128) == 0) {
    pOVar1 = SysAllocString(L"");
    *(BSTR *)(param_1 + 0x128) = pOVar1;
    if (pOVar1 == (BSTR)0x0) {
      return -0x7ff8fff2;
    }
  }
  if (*(int *)(param_1 + 0x124) == 0) {
    pOVar1 = SysAllocString(L"");
    *(BSTR *)(param_1 + 0x124) = pOVar1;
    if (pOVar1 == (BSTR)0x0) {
      return -0x7ff8fff2;
    }
  }
  iVar2 = lstrlenW(*(LPCWSTR *)(param_1 + 0x128));
  local_8 = (LPSTR)(iVar2 * 2 + 2);
  FUN_217a34bc(local_108,(uint)local_8);
  WideCharToMultiByte(0,0,*(LPCWSTR *)(param_1 + 0x128),-1,local_108[0],(int)local_8,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  local_8 = local_108[0];
  iVar2 = lstrlenW(*(LPCWSTR *)(param_1 + 0x124));
  cbMultiByte = iVar2 * 2 + 2;
  FUN_217a34bc(local_88,cbMultiByte);
  WideCharToMultiByte(0,0,*(LPCWSTR *)(param_1 + 0x124),-1,local_88[0],cbMultiByte,(LPCSTR)0x0,
                      (LPBOOL)0x0);
  uCommand = (UINT)*(short *)(param_1 + 0xe6);
  if (uCommand == 1) {
LAB_217a8dd3:
    dwData = *(LPSTR *)(param_1 + 0xf4);
  }
  else {
    if (uCommand != 3) {
      if ((uCommand == 5) || (uCommand == 8)) goto LAB_217a8dd3;
      if ((0x100 < (int)uCommand) &&
         ((dwData = local_8, (int)uCommand < 0x103 || (uCommand == 0x105)))) goto LAB_217a8d74;
    }
    dwData = (LPSTR)0x0;
  }
LAB_217a8d74:
  BVar3 = WinHelpA((HWND)0x0,local_88[0],uCommand,(ULONG_PTR)dwData);
  if ((local_88[0] != (LPCSTR)0x0) && ((local_c & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_88[0]);
  }
  if ((local_108[0] != (LPSTR)0x0) && ((local_8c & 1) != 0)) {
    HeapFree(DAT_217b3020,0,local_108[0]);
  }
  return BVar3;
}



void __thiscall FUN_217a8ddb(void *this,int param_1,undefined4 *param_2)

{
  HWND pHVar1;
  
  if (param_1 == 0) {
    FUN_217a8e45(this,(HWND)0x1);
    DestroyWindow(*(HWND *)((int)this + 0x134));
    *(undefined4 *)((int)this + 0x134) = 0;
    if (*(HWND *)((int)this + 0x130) != (HWND)0x0) {
      SetActiveWindow(*(HWND *)((int)this + 0x130));
    }
  }
  else {
    pHVar1 = GetActiveWindow();
    *(HWND *)((int)this + 0x130) = pHVar1;
    pHVar1 = FUN_217a8e45(this,(HWND)0x0);
    FUN_217a91d2(this,pHVar1);
    *param_2 = *(undefined4 *)((int)this + 0x134);
  }
  return;
}



HWND __thiscall FUN_217a8e45(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  BOOL BVar6;
  UINT uCmd;
  HWND local_8;
  
  iVar5 = 0;
  local_8 = (HWND)0x0;
  if (param_1 == (HWND)0x0) {
    local_8 = FUN_217a8293((int)this);
    if (local_8 != (HWND)0x0) {
      GetWindowThreadProcessId(local_8,(LPDWORD)0x0);
      uCmd = 5;
      pHVar2 = GetDesktopWindow();
      while (param_1 = GetWindow(pHVar2,uCmd), param_1 != (HWND)0x0) {
        DVar3 = GetWindowThreadProcessId(local_8,(LPDWORD)0x0);
        DVar4 = GetWindowThreadProcessId(param_1,(LPDWORD)0x0);
        if (((DVar4 == DVar3) && (param_1 != *(HWND *)((int)this + 0x134))) &&
           (BVar6 = IsWindowEnabled(param_1), BVar6 != 0)) {
          FUN_217ab916((void *)((int)this + 0x144),3,&param_1,1);
          EnableWindow(param_1,0);
        }
        uCmd = 2;
        pHVar2 = param_1;
      }
    }
  }
  else {
    for (iVar1 = *(int *)((int)this + 0x144); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      BVar6 = 1;
      pHVar2 = (HWND)FUN_217ab9ab((undefined4 *)((int)this + 0x144),iVar5);
      EnableWindow(pHVar2,BVar6);
      iVar5 = iVar5 + 1;
    }
    FUN_217a25b8((undefined4 *)((int)this + 0x144));
  }
  return local_8;
}



undefined4 FUN_217a8f63(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = param_2;
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x40) != param_2) {
    iVar3 = OleTranslateColor(param_2,0,&param_1);
    if (iVar3 < 0) {
      uVar4 = (**(code **)(*(int *)(iVar1 + -0xc0) + 0x30))(0x800a017c,0x17c,0x17c);
      return uVar4;
    }
    *(int *)(iVar1 + 0x40) = iVar2;
    *(uint *)(iVar1 + -0x10) = *(uint *)(iVar1 + -0x10) | 1;
    FUN_217a40fd((void *)(iVar1 + -0x94),6);
  }
  return 0;
}



bool __thiscall FUN_217a91d2(void *this,HWND param_1)

{
  HWND hWnd;
  LONG Y;
  int iVar1;
  WNDCLASSA *pWVar2;
  int nWidth;
  int nHeight;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  WNDCLASSA local_3c;
  tagRECT local_14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b31e8 == 0) {
    pWVar2 = &local_3c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      pWVar2->style = 0;
      pWVar2 = (WNDCLASSA *)&pWVar2->lpfnWndProc;
    }
    local_3c.hInstance = DAT_217b31a4;
    local_3c.lpfnWndProc = FUN_217a92ce;
    local_3c.lpszClassName = "NewHelpClass";
    RegisterClassA(&local_3c);
    DAT_217b31e8 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (param_1 == (HWND)0x0) {
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    param_1 = (HWND)0x0;
    nHeight = 0;
    nWidth = 0;
    hInstance = DAT_217b31a4;
    iVar1 = GetSystemMetrics(1);
    Y = iVar1 / 4;
    local_14.left = GetSystemMetrics(0);
    local_14.left = local_14.left / 4;
  }
  else {
    GetWindowRect(param_1,&local_14);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    nHeight = 0;
    nWidth = 0;
    Y = local_14.top;
    hInstance = DAT_217b31a4;
  }
  hWnd = CreateWindowExA(0,"NewHelpClass","",0x80000000,local_14.left,Y,nWidth,nHeight,param_1,hMenu
                         ,hInstance,lpParam);
  *(HWND *)((int)this + 0x134) = hWnd;
  if (hWnd != (HWND)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)this);
    ShowWindow(*(HWND *)((int)this + 0x134),1);
  }
  return hWnd != (HWND)0x0;
}



LRESULT FUN_217a92ce(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  LONG LVar1;
  LRESULT LVar2;
  
  if (param_2 != 0x19) {
    if (param_2 != DAT_217b36f8) {
      LVar2 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar2;
    }
    LVar1 = GetWindowLongA(param_1,-0x15);
    FUN_217a8c75(LVar1);
  }
  return 0;
}



uint FUN_217a935d(int param_1,undefined4 param_2,byte param_3,byte param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = true;
  bVar1 = false;
  if ((param_3 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      bVar1 = bVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      bVar1 = bVar2;
    }
  }
  if ((param_3 & 2) != 0) {
    bVar1 = bVar2;
  }
  return -(uint)!bVar1 & 0x80004005;
}



undefined4 * __thiscall FUN_217a9628(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_217afcda(this,param_1,param_2);
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_217a7538;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined ***)this = &PTR_FUN_217a7520;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_217a74e0;
  *(undefined ***)((int)this + 0x30) = &PTR_LAB_217a74c8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_217a965d(void *this,byte param_1)

{
  FUN_217a9863((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_217a9685(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  
  *param_2 = 0;
  if (*param_1 == -0x640443fe) {
    iVar2 = 0x10;
    bVar5 = true;
    piVar3 = param_1;
    pcVar4 = (char *)&DAT_217a79d8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = (char)*piVar3 == *pcVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      piVar3 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x30U);
      (**(code **)(*piVar3 + 4))(piVar3);
      *param_2 = piVar3;
      return 0;
    }
  }
  uVar1 = FUN_217afd42(this,param_1,param_2);
  return uVar1;
}



int __thiscall FUN_217a96d6(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_8;
  
  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  puVar2 = (undefined4 *)FUN_217b0686(this,(uint *)&local_8);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (**(code **)*puVar2)(puVar2,&DAT_217a2348,&param_1);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1,&DAT_217a79d8,piVar1);
      piVar1 = param_1;
      if (param_1 != (int *)0x0) {
        param_1 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (-1 < iVar3) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}



int __fastcall FUN_217a9736(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (param_1[0xd] != 0) {
    local_8 = param_1;
    iVar2 = FUN_217a96d6(param_1,(int *)&local_8);
    if (iVar2 < 0) {
      return iVar2;
    }
    if (iVar2 != 1) {
      iVar2 = (**(code **)(*local_8 + 0x18))(local_8,param_1[0xd]);
      piVar1 = local_8;
      if (local_8 != (int *)0x0) {
        local_8 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (iVar2 < 0) {
        return iVar2;
      }
      param_1[0xd] = 0;
    }
  }
  return 0;
}



int __fastcall FUN_217a9787(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = FUN_217a96d6(param_1,(int *)&local_8);
  if ((-1 < iVar2) && (iVar2 != 1)) {
    iVar2 = (**(code **)(*local_8 + 0x14))
                      (local_8,-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0xc),param_1 + 0xd)
    ;
    piVar1 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (-1 < iVar2) {
      iVar2 = 0;
    }
  }
  return iVar2;
}



undefined4 * __thiscall FUN_217a9827(void *this,byte param_1)

{
  FUN_217a984f((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217a984f(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_217a75a8;
  param_1[5] = &PTR_LAB_217a7568;
  param_1[0xc] = &PTR_LAB_217a7550;
  *param_1 = &PTR_FUN_217a7888;
  param_1[5] = &PTR_LAB_217a7848;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_217b05d7((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_217a2220;
  InterlockedDecrement(&DAT_217b3000);
  return;
}



void __fastcall FUN_217a9863(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_217a7888;
  param_1[5] = &PTR_LAB_217a7848;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_217b05d7((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_217a2220;
  InterlockedDecrement(&DAT_217b3000);
  return;
}



int FUN_217a98bd(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  uint local_10;
  UINT local_c;
  int *local_8;
  
  iVar1 = param_1;
  puVar3 = (undefined4 *)FUN_217b0686((void *)(param_1 + -0x30),&local_10);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&local_8);
    if (-1 < iVar4) {
      if (((param_2 == 0) || (param_2 == 7)) || (param_2 == 0x12)) {
        (**(code **)(*local_8 + 0x54))(local_8,&local_c);
        (**(code **)(*local_8 + 0xac))(local_8,&param_1);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x6f,local_c,1);
        lParam = 0;
        wParam = (uint)((short)param_1 != 0);
        Msg = 0xf1;
        hWnd = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x6a);
        SendMessageA(hWnd,Msg,wParam,lParam);
      }
      piVar2 = local_8;
      if (local_8 != (int *)0x0) {
        local_8 = (int *)0x0;
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



undefined4 __thiscall
FUN_217a996b(void *this,HWND param_1,int *param_2,LPCSTR param_3,uint *param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  BOOL BVar5;
  HWND pHVar6;
  uint uVar7;
  UINT UVar8;
  WPARAM wParam;
  LPARAM LVar9;
  uint *local_33c [31];
  byte local_2c0;
  LPSTR local_2bc [31];
  byte local_240;
  LPSTR local_23c [31];
  byte local_1c0;
  LPSTR local_1bc [31];
  byte local_140;
  CHAR local_13c [128];
  LPSTR local_bc [31];
  byte local_40;
  uint local_3c;
  LPSTR local_38;
  LPSTR local_34;
  int *local_30;
  LPSTR local_2c;
  UINT local_28;
  LRESULT local_24;
  UINT local_20;
  UINT local_1c;
  BSTR local_18;
  BSTR local_14;
  BSTR local_10;
  BSTR local_c;
  BSTR local_8;
  
  local_30 = (int *)this;
  if (param_2 == (int *)0x2) {
LAB_217aa16e:
    FUN_217a9736((int *)this);
LAB_217a9d35:
    uVar2 = 1;
  }
  else {
    if (param_2 == (int *)0x111) {
      uVar7 = (uint)param_3 & 0xffff;
      if (((0x66 < uVar7) &&
          (((uVar7 < 0x6b || (uVar7 == 0x6f)) ||
           ((0x70 < uVar7 && (((uVar7 < 0x73 || (uVar7 == 0x76)) || (uVar7 == 0x80)))))))) &&
         (((sVar1 = (short)((uint)param_3 >> 0x10), sVar1 == 0x300 || (sVar1 == 0)) || (sVar1 == 1))
         )) {
        FUN_217b0711((int)this);
      }
    }
    else if (param_2 == (int *)0x464) {
      puVar3 = (undefined4 *)FUN_217b0686(this,&local_3c);
      if ((puVar3 != (undefined4 *)0x0) &&
         (iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&param_2), -1 < iVar4)) {
        (**(code **)(*param_2 + 0x2c))(param_2,&local_14);
        (**(code **)(*param_2 + 0x24))(param_2,&local_18);
        (**(code **)(*param_2 + 0x44))(param_2,&local_c);
        (**(code **)(*param_2 + 0x34))(param_2,&local_10);
        (**(code **)(*param_2 + 0x54))(param_2,&local_1c);
        (**(code **)(*param_2 + 0x3c))(param_2,&local_8);
        (**(code **)(*param_2 + 0xf4))(param_2,&local_28);
        (**(code **)(*param_2 + 0xd4))(param_2,&local_20);
        (**(code **)(*param_2 + 0xac))(param_2,&local_24);
        iVar4 = lstrlenW(local_14);
        uVar7 = iVar4 * 2 + 2;
        FUN_217a34bc(local_bc,uVar7);
        WideCharToMultiByte(0,0,local_14,-1,local_bc[0],uVar7,(LPCSTR)0x0,(LPBOOL)0x0);
        param_3 = local_bc[0];
        iVar4 = lstrlenW(local_18);
        param_4 = (uint *)(iVar4 * 2 + 2);
        FUN_217a34bc(local_23c,(uint)param_4);
        WideCharToMultiByte(0,0,local_18,-1,local_23c[0],(int)param_4,(LPCSTR)0x0,(LPBOOL)0x0);
        local_2c = local_23c[0];
        iVar4 = lstrlenW(local_c);
        param_4 = (uint *)(iVar4 * 2 + 2);
        FUN_217a34bc(local_2bc,(uint)param_4);
        WideCharToMultiByte(0,0,local_c,-1,local_2bc[0],(int)param_4,(LPCSTR)0x0,(LPBOOL)0x0);
        local_38 = local_2bc[0];
        iVar4 = lstrlenW(local_10);
        param_4 = (uint *)(iVar4 * 2 + 2);
        FUN_217a34bc(local_33c,(uint)param_4);
        WideCharToMultiByte(0,0,local_10,-1,(LPSTR)local_33c[0],(int)param_4,(LPCSTR)0x0,(LPBOOL)0x0
                           );
        param_4 = local_33c[0];
        iVar4 = lstrlenW(local_8);
        uVar7 = iVar4 * 2 + 2;
        FUN_217a34bc(local_1bc,uVar7);
        WideCharToMultiByte(0,0,local_8,-1,local_1bc[0],uVar7,(LPCSTR)0x0,(LPBOOL)0x0);
        local_34 = local_1bc[0];
        SetDlgItemTextA(param_1,0x69,param_3);
        SetDlgItemTextA(param_1,0x67,local_2c);
        SetDlgItemTextA(param_1,0x68,local_38);
        SetDlgItemTextA(param_1,0x80,(LPCSTR)param_4);
        SetDlgItemInt(param_1,0x6f,local_1c,1);
        SetDlgItemTextA(param_1,0x71,local_34);
        SetDlgItemInt(param_1,0x72,(int)(short)local_28,1);
        SetDlgItemInt(param_1,0x76,(int)(short)local_20,1);
        LVar9 = 0;
        uVar7 = (uint)((short)local_24 != 0);
        UVar8 = 0xf1;
        pHVar6 = GetDlgItem(param_1,0x6a);
        SendMessageA(pHVar6,UVar8,uVar7,LVar9);
        SysFreeString(local_14);
        SysFreeString(local_18);
        SysFreeString(local_c);
        SysFreeString(local_10);
        SysFreeString(local_8);
        (**(code **)(*param_2 + 8))(param_2);
        iVar4 = FUN_217a9787(local_30);
        if ((-1 < iVar4) && (iVar4 != 1)) {
          if ((local_1bc[0] != (LPSTR)0x0) && ((local_140 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_1bc[0]);
          }
          if ((local_33c[0] != (uint *)0x0) && ((local_2c0 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_33c[0]);
          }
          if ((local_2bc[0] != (LPSTR)0x0) && ((local_240 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_2bc[0]);
          }
          if ((local_23c[0] != (LPSTR)0x0) && ((local_1c0 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_23c[0]);
          }
          if ((local_bc[0] != (LPCSTR)0x0) && ((local_40 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_bc[0]);
          }
          goto LAB_217a9d35;
        }
        if ((local_1bc[0] != (LPSTR)0x0) && ((local_140 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_1bc[0]);
        }
        if ((local_33c[0] != (uint *)0x0) && ((local_2c0 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_33c[0]);
        }
        if ((local_2bc[0] != (LPSTR)0x0) && ((local_240 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_2bc[0]);
        }
        if ((local_23c[0] != (LPSTR)0x0) && ((local_1c0 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_23c[0]);
        }
        if ((local_bc[0] != (LPCSTR)0x0) && ((local_40 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_bc[0]);
        }
      }
    }
    else {
      if (param_2 == (int *)0x465) {
        puVar3 = (undefined4 *)FUN_217b0686(this,(uint *)&local_2c);
        while (puVar3 != (undefined4 *)0x0) {
          iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&param_2);
          if (-1 < iVar4) {
            GetDlgItemTextA(param_1,0x69,local_13c,0xff);
            local_14 = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x30))(param_2,local_14);
            SysFreeString(local_14);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            GetDlgItemTextA(param_1,0x67,local_13c,0xff);
            local_18 = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x28))(param_2,local_18);
            SysFreeString(local_18);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            GetDlgItemTextA(param_1,0x68,local_13c,0xff);
            local_c = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x48))(param_2,local_c);
            SysFreeString(local_c);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            GetDlgItemTextA(param_1,0x80,local_13c,0xff);
            local_10 = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x38))(param_2,local_10);
            SysFreeString(local_10);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            local_1c = GetDlgItemInt(param_1,0x6f,(BOOL *)0x0,1);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x58))(param_2,local_1c);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            GetDlgItemTextA(param_1,0x71,local_13c,0xff);
            local_8 = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0x40))(param_2,local_8);
            SysFreeString(local_8);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            local_28 = GetDlgItemInt(param_1,0x72,(BOOL *)0x0,1);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0xf8))(param_2,local_28);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            local_20 = GetDlgItemInt(param_1,0x76,(BOOL *)0x0,1);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0xd8))(param_2,local_20);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            LVar9 = 0;
            wParam = 0;
            UVar8 = 0xf0;
            pHVar6 = GetDlgItem(param_1,0x6a);
            local_24 = SendMessageA(pHVar6,UVar8,wParam,LVar9);
            param_3 = (LPCSTR)(**(code **)(*param_2 + 0xb0))(param_2,local_24);
            if ((((int)param_3 < 0) && (FUN_217b0e4a((uint)param_3,0), param_4 != (uint *)0x0)) &&
               (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
              *param_4 = (uint)param_3;
            }
            (**(code **)(*param_2 + 8))(param_2);
          }
          puVar3 = (undefined4 *)FUN_217b0696(local_30,(uint *)&local_2c);
        }
        goto LAB_217a9d35;
      }
      if (param_2 == (int *)0x467) goto LAB_217aa16e;
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * __thiscall FUN_217aa1c6(void *this,byte param_1)

{
  FUN_217aa1ee((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217aa1ee(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a7618;
  param_1[5] = &PTR_LAB_217a75d8;
  param_1[0xc] = &PTR_LAB_217a75c0;
  FUN_217a9863(param_1);
  return;
}



int FUN_217aa207(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  uint local_10;
  UINT local_c;
  int *local_8;
  
  iVar1 = param_1;
  puVar3 = (undefined4 *)FUN_217b0686((void *)(param_1 + -0x30),&local_10);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&local_8);
    if (-1 < iVar4) {
      if (((param_2 == 0) || (param_2 == 7)) || (param_2 == 0x12)) {
        (**(code **)(*local_8 + 0x54))(local_8,&local_c);
        (**(code **)(*local_8 + 0xac))(local_8,&param_1);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x6f,local_c,1);
        lParam = 0;
        wParam = (uint)((short)param_1 != 0);
        Msg = 0xf1;
        hWnd = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x6a);
        SendMessageA(hWnd,Msg,wParam,lParam);
      }
      piVar2 = local_8;
      if (local_8 != (int *)0x0) {
        local_8 = (int *)0x0;
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



undefined4 __thiscall FUN_217aa2b5(void *this,HWND param_1,UINT param_2,int *param_3,uint *param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  BOOL BVar6;
  HWND pHVar7;
  UINT UVar8;
  WPARAM wParam;
  LPARAM LVar9;
  uint local_14;
  int *local_10;
  LRESULT local_c;
  UINT local_8;
  
  local_10 = (int *)this;
  if (param_2 == 2) {
LAB_217aa522:
    FUN_217a9736((int *)this);
LAB_217aa415:
    uVar2 = 1;
  }
  else {
    if (param_2 == 0x111) {
      uVar5 = (uint)param_3 & 0xffff;
      if (((uVar5 == 0x6a) || ((0x6d < uVar5 && ((uVar5 < 0x70 || (uVar5 == 0x80)))))) &&
         ((sVar1 = (short)((uint)param_3 >> 0x10), sVar1 == 0x300 || ((sVar1 == 0 || (sVar1 == 1))))
         )) {
        FUN_217b0711((int)this);
      }
    }
    else if (param_2 == 0x464) {
      puVar3 = (undefined4 *)FUN_217b0686(this,(uint *)&param_4);
      if ((puVar3 != (undefined4 *)0x0) &&
         (iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&param_3), -1 < iVar4)) {
        (**(code **)(*param_3 + 0x4c))(param_3,&param_2);
        (**(code **)(*param_3 + 0x54))(param_3,&local_8);
        (**(code **)(*param_3 + 0xac))(param_3,&local_c);
        SetDlgItemInt(param_1,0x6e,param_2,1);
        SetDlgItemInt(param_1,0x6f,local_8,1);
        LVar9 = 0;
        uVar5 = (uint)((short)local_c != 0);
        UVar8 = 0xf1;
        pHVar7 = GetDlgItem(param_1,0x6a);
        SendMessageA(pHVar7,UVar8,uVar5,LVar9);
        (**(code **)(*param_3 + 8))(param_3);
        iVar4 = FUN_217a9787(local_10);
        if ((-1 < iVar4) && (iVar4 != 1)) {
          return 1;
        }
      }
    }
    else {
      if (param_2 == 0x465) {
        puVar3 = (undefined4 *)FUN_217b0686(this,&local_14);
        while (puVar3 != (undefined4 *)0x0) {
          iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&param_3);
          if (-1 < iVar4) {
            param_2 = GetDlgItemInt(param_1,0x6e,(BOOL *)0x0,1);
            uVar5 = (**(code **)(*param_3 + 0x50))(param_3,param_2);
            if ((((int)uVar5 < 0) && (FUN_217b0e4a(uVar5,0), param_4 != (uint *)0x0)) &&
               (BVar6 = IsBadWritePtr(param_4,4), BVar6 == 0)) {
              *param_4 = uVar5;
            }
            local_8 = GetDlgItemInt(param_1,0x6f,(BOOL *)0x0,1);
            uVar5 = (**(code **)(*param_3 + 0x58))(param_3,local_8);
            if ((((int)uVar5 < 0) && (FUN_217b0e4a(uVar5,0), param_4 != (uint *)0x0)) &&
               (BVar6 = IsBadWritePtr(param_4,4), BVar6 == 0)) {
              *param_4 = uVar5;
            }
            LVar9 = 0;
            wParam = 0;
            UVar8 = 0xf0;
            pHVar7 = GetDlgItem(param_1,0x6a);
            local_c = SendMessageA(pHVar7,UVar8,wParam,LVar9);
            uVar5 = (**(code **)(*param_3 + 0xb0))(param_3,local_c);
            if ((((int)uVar5 < 0) && (FUN_217b0e4a(uVar5,0), param_4 != (uint *)0x0)) &&
               (BVar6 = IsBadWritePtr(param_4,4), BVar6 == 0)) {
              *param_4 = uVar5;
            }
            (**(code **)(*param_3 + 8))(param_3);
          }
          puVar3 = (undefined4 *)FUN_217b0696(local_10,&local_14);
        }
        goto LAB_217aa415;
      }
      if (param_2 == 0x467) goto LAB_217aa522;
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * __thiscall FUN_217aa57a(void *this,byte param_1)

{
  FUN_217aa5a2((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217aa5a2(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a7688;
  param_1[5] = &PTR_LAB_217a7648;
  param_1[0xc] = &PTR_LAB_217a7630;
  FUN_217a9863(param_1);
  return;
}



int FUN_217aa5bb(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  uint local_14;
  UINT local_10;
  int *local_c;
  short local_8;
  short local_6;
  
  iVar1 = param_1;
  puVar3 = (undefined4 *)FUN_217b0686((void *)(param_1 + -0x30),&local_14);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&local_c);
    if (-1 < iVar4) {
      if (((param_2 == 0) || (param_2 == 7)) ||
         ((0xe < param_2 && ((param_2 < 0x11 || (param_2 == 0x12)))))) {
        (**(code **)(*local_c + 0x54))(local_c,&local_10);
        (**(code **)(*local_c + 0xac))(local_c,&param_1);
        (**(code **)(*local_c + 0x94))(local_c,&local_6);
        (**(code **)(*local_c + 0x9c))(local_c,&local_8);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x6f,local_10,1);
        lParam = 0;
        wParam = (uint)((short)param_1 != 0);
        Msg = 0xf1;
        hWnd = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x6a);
        SendMessageA(hWnd,Msg,wParam,lParam);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x79,(int)local_6,1);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x78,(int)local_8,1);
      }
      piVar2 = local_c;
      if (local_c != (int *)0x0) {
        local_c = (int *)0x0;
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



undefined4 __thiscall FUN_217aa6ba(void *this,HWND param_1,uint param_2,int *param_3,uint *param_4)

{
  uint *lp;
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  BOOL BVar4;
  HWND pHVar5;
  uint uVar6;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  int local_30;
  uint local_2c;
  int *local_28;
  LRESULT local_24;
  LRESULT local_20;
  UINT local_1c;
  UINT local_18;
  UINT local_14;
  UINT local_10;
  UINT local_c;
  UINT local_8;
  
  local_28 = (int *)this;
  if (param_2 != 2) {
    if (param_2 == 0x110) {
      FUN_217b0fbc(param_1,0,0x217b3e70);
      return 0;
    }
    if (param_2 == 0x111) {
      uVar6 = (uint)param_3 & 0xffff;
      if (uVar6 < 0x6b) {
        if ((uVar6 != 0x6a) && (uVar6 != 0x66)) {
          return 0;
        }
      }
      else if (uVar6 != 0x6f) {
        if (uVar6 < 0x78) {
          return 0;
        }
        if (0x79 < uVar6) {
          if (uVar6 < 0x80) {
            return 0;
          }
          if ((0x83 < uVar6) && (uVar6 != 0x88)) {
            return 0;
          }
        }
      }
      sVar1 = (short)((uint)param_3 >> 0x10);
      if (((sVar1 != 0x300) && (sVar1 != 0)) && (sVar1 != 1)) {
        return 0;
      }
      FUN_217b0711((int)this);
      return 0;
    }
    if (param_2 == 0x464) {
      puVar2 = (undefined4 *)FUN_217b0686(this,&param_2);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,&DAT_217a1308,&param_3);
      if (iVar3 < 0) {
        return 0;
      }
      (**(code **)(*param_3 + 0xa4))(param_3,&local_8);
      (**(code **)(*param_3 + 0x54))(param_3,&local_c);
      (**(code **)(*param_3 + 0x84))(param_3,&local_10);
      (**(code **)(*param_3 + 0x8c))(param_3,&local_14);
      (**(code **)(*param_3 + 0x94))(param_3,&local_18);
      (**(code **)(*param_3 + 0x9c))(param_3,&local_1c);
      (**(code **)(*param_3 + 0xcc))(param_3,&local_20);
      (**(code **)(*param_3 + 0xac))(param_3,&local_24);
      (**(code **)(*param_3 + 0x128))(param_3,&local_30);
      SetDlgItemInt(param_1,0x81,(int)(short)local_8,1);
      SetDlgItemInt(param_1,0x6f,local_c,1);
      SetDlgItemInt(param_1,0x82,(int)(short)local_10,1);
      SetDlgItemInt(param_1,0x83,(int)(short)local_14,1);
      SetDlgItemInt(param_1,0x79,(int)(short)local_18,1);
      SetDlgItemInt(param_1,0x78,(int)(short)local_1c,1);
      LVar9 = 0;
      uVar6 = (uint)((short)local_20 != 0);
      UVar7 = 0xf1;
      pHVar5 = GetDlgItem(param_1,0x66);
      SendMessageA(pHVar5,UVar7,uVar6,LVar9);
      LVar9 = 0;
      uVar6 = (uint)((short)local_24 != 0);
      UVar7 = 0xf1;
      pHVar5 = GetDlgItem(param_1,0x6a);
      SendMessageA(pHVar5,UVar7,uVar6,LVar9);
      LVar9 = 0;
      uVar6 = (uint)(local_30 != 1);
      UVar7 = 0x14e;
      pHVar5 = GetDlgItem(param_1,0x88);
      SendMessageA(pHVar5,UVar7,uVar6,LVar9);
      (**(code **)(*param_3 + 8))(param_3);
      iVar3 = FUN_217a9787(local_28);
      if (iVar3 < 0) {
        return 0;
      }
      if (iVar3 == 1) {
        return 0;
      }
      return 1;
    }
    if (param_2 == 0x465) {
      puVar2 = (undefined4 *)FUN_217b0686(this,&local_2c);
      lp = param_4;
      while (puVar2 != (undefined4 *)0x0) {
        iVar3 = (**(code **)*puVar2)(puVar2,&DAT_217a1308,&param_3);
        if (-1 < iVar3) {
          local_8 = GetDlgItemInt(param_1,0x81,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0xa8))(param_3,local_8);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          local_c = GetDlgItemInt(param_1,0x6f,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0x58))(param_3,local_c);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          local_10 = GetDlgItemInt(param_1,0x82,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0x88))(param_3,local_10);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          local_14 = GetDlgItemInt(param_1,0x83,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0x90))(param_3,local_14);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          local_18 = GetDlgItemInt(param_1,0x79,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0x98))(param_3,local_18);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          local_1c = GetDlgItemInt(param_1,0x78,(BOOL *)0x0,1);
          param_2 = (**(code **)(*param_3 + 0xa0))(param_3,local_1c);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          LVar9 = 0;
          WVar8 = 0;
          UVar7 = 0xf0;
          pHVar5 = GetDlgItem(param_1,0x66);
          local_20 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
          param_2 = (**(code **)(*param_3 + 0xd0))(param_3,local_20);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          LVar9 = 0;
          WVar8 = 0;
          UVar7 = 0xf0;
          pHVar5 = GetDlgItem(param_1,0x6a);
          local_24 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
          param_2 = (**(code **)(*param_3 + 0xb0))(param_3,local_24);
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          LVar9 = 0;
          WVar8 = 0;
          UVar7 = 0x147;
          pHVar5 = GetDlgItem(param_1,0x88);
          param_2 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
          param_2 = (**(code **)(*param_3 + 300))(param_3,(param_2 != 0) + '\x01');
          if ((((int)param_2 < 0) && (FUN_217b0e4a(param_2,0), lp != (uint *)0x0)) &&
             (BVar4 = IsBadWritePtr(lp,4), BVar4 == 0)) {
            *lp = param_2;
          }
          (**(code **)(*param_3 + 8))(param_3);
        }
        puVar2 = (undefined4 *)FUN_217b0696(local_28,&local_2c);
      }
      return 1;
    }
    if (param_2 != 0x467) {
      return 0;
    }
  }
  FUN_217a9736((int *)this);
  return 1;
}



undefined4 * __thiscall FUN_217aac49(void *this,byte param_1)

{
  FUN_217aac71((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217aac71(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a76f8;
  param_1[5] = &PTR_LAB_217a76b8;
  param_1[0xc] = &PTR_LAB_217a76a0;
  FUN_217a9863(param_1);
  return;
}



int FUN_217aac8a(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  uint local_14;
  UINT local_10;
  int *local_c;
  short local_8;
  short local_6;
  
  iVar1 = param_1;
  puVar3 = (undefined4 *)FUN_217b0686((void *)(param_1 + -0x30),&local_14);
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (**(code **)*puVar3)(puVar3,&DAT_217a1308,&local_c);
    if (-1 < iVar4) {
      if (((param_2 == 0) || (param_2 == 7)) ||
         ((0xe < param_2 && ((param_2 < 0x11 || (param_2 == 0x12)))))) {
        (**(code **)(*local_c + 0xac))(local_c,&param_1);
        (**(code **)(*local_c + 0x54))(local_c,&local_10);
        (**(code **)(*local_c + 0x94))(local_c,&local_6);
        (**(code **)(*local_c + 0x9c))(local_c,&local_8);
        lParam = 0;
        wParam = (uint)((short)param_1 != 0);
        Msg = 0xf1;
        hWnd = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x6a);
        SendMessageA(hWnd,Msg,wParam,lParam);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x6f,local_10,1);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x79,(int)local_6,1);
        SetDlgItemInt(*(HWND *)(iVar1 + -0x14),0x78,(int)local_8,1);
      }
      piVar2 = local_c;
      if (local_c != (int *)0x0) {
        local_c = (int *)0x0;
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



undefined4 __thiscall FUN_217aad89(void *this,HWND param_1,int param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  UINT UVar8;
  HWND pHVar9;
  WPARAM WVar10;
  LPARAM LVar11;
  CHAR local_23c [256];
  CHAR local_13c [128];
  LPSTR local_bc [31];
  byte local_40;
  double local_3c;
  float local_34;
  uint local_30;
  LRESULT local_2c;
  LRESULT local_28;
  UINT local_24;
  UINT local_20;
  UINT local_1c;
  LRESULT local_18;
  LRESULT local_14;
  LRESULT local_10;
  int *local_c;
  BSTR local_8;
  
  local_c = (int *)this;
  if (param_2 == 2) {
LAB_217ab44f:
    FUN_217a9736((int *)this);
LAB_217ab16e:
    uVar3 = 1;
  }
  else {
    if (param_2 == 0x111) {
      uVar6 = (uint)param_3 & 0xffff;
      if ((((uVar6 == 0x6a) || (uVar6 == 0x6f)) ||
          ((0x77 < uVar6 && ((uVar6 < 0x7f || (uVar6 == 0x84)))))) &&
         ((sVar2 = (short)((uint)param_3 >> 0x10), sVar2 == 0x300 || ((sVar2 == 0 || (sVar2 == 1))))
         )) {
        FUN_217b0711((int)this);
      }
    }
    else if (param_2 == 0x464) {
      puVar4 = (undefined4 *)FUN_217b0686(this,(uint *)&param_4);
      if ((puVar4 != (undefined4 *)0x0) &&
         (iVar5 = (**(code **)*puVar4)(puVar4,&DAT_217a1308,&param_3), -1 < iVar5)) {
        (**(code **)(*param_3 + 0x5c))(param_3,&local_8);
        (**(code **)(*param_3 + 0xe4))(param_3,&local_34);
        (**(code **)(*param_3 + 0x94))(param_3,&local_20);
        (**(code **)(*param_3 + 0x9c))(param_3,&local_24);
        (**(code **)(*param_3 + 0x54))(param_3,&local_1c);
        (**(code **)(*param_3 + 0xac))(param_3,&local_2c);
        (**(code **)(*param_3 + 100))(param_3,&local_28);
        (**(code **)(*param_3 + 0x6c))(param_3,&local_10);
        (**(code **)(*param_3 + 0x7c))(param_3,&local_14);
        (**(code **)(*param_3 + 0x74))(param_3,&local_18);
        iVar5 = lstrlenW(local_8);
        uVar6 = iVar5 * 2 + 2;
        FUN_217a34bc(local_bc,uVar6);
        WideCharToMultiByte(0,0,local_8,-1,local_bc[0],uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        SetDlgItemTextA(param_1,0x7e,local_bc[0]);
        FUN_217abbb4((double)local_34,local_23c,0xff);
        SetDlgItemTextA(param_1,0x84,local_23c);
        SetDlgItemInt(param_1,0x79,(int)(short)local_20,1);
        SetDlgItemInt(param_1,0x78,(int)(short)local_24,1);
        SetDlgItemInt(param_1,0x6f,local_1c,1);
        LVar11 = 0;
        uVar6 = (uint)((short)local_2c != 0);
        UVar8 = 0xf1;
        pHVar9 = GetDlgItem(param_1,0x6a);
        SendMessageA(pHVar9,UVar8,uVar6,LVar11);
        LVar11 = 0;
        uVar6 = (uint)((short)local_28 != 0);
        UVar8 = 0xf1;
        pHVar9 = GetDlgItem(param_1,0x7d);
        SendMessageA(pHVar9,UVar8,uVar6,LVar11);
        LVar11 = 0;
        uVar6 = (uint)((short)local_10 != 0);
        UVar8 = 0xf1;
        pHVar9 = GetDlgItem(param_1,0x7c);
        SendMessageA(pHVar9,UVar8,uVar6,LVar11);
        LVar11 = 0;
        uVar6 = (uint)((short)local_14 != 0);
        UVar8 = 0xf1;
        pHVar9 = GetDlgItem(param_1,0x7b);
        SendMessageA(pHVar9,UVar8,uVar6,LVar11);
        LVar11 = 0;
        uVar6 = (uint)((short)local_18 != 0);
        UVar8 = 0xf1;
        pHVar9 = GetDlgItem(param_1,0x7a);
        SendMessageA(pHVar9,UVar8,uVar6,LVar11);
        SysFreeString(local_8);
        (**(code **)(*param_3 + 8))(param_3);
        iVar5 = FUN_217a9787(local_c);
        if ((-1 < iVar5) && (iVar5 != 1)) {
          if ((local_bc[0] != (LPCSTR)0x0) && ((local_40 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_bc[0]);
          }
          goto LAB_217ab16e;
        }
        if ((local_bc[0] != (LPCSTR)0x0) && ((local_40 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_bc[0]);
        }
      }
    }
    else {
      if (param_2 == 0x465) {
        puVar4 = (undefined4 *)FUN_217b0686(this,&local_30);
        while (puVar4 != (undefined4 *)0x0) {
          iVar5 = (**(code **)*puVar4)(puVar4,&DAT_217a1308,&param_3);
          if (-1 < iVar5) {
            GetDlgItemTextA(param_1,0x7e,local_13c,0xff);
            local_8 = FUN_217ac59c(local_13c,(LPWSTR)0x0);
            uVar6 = (**(code **)(*param_3 + 0x60))(param_3,local_8);
            SysFreeString(local_8);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            UVar8 = GetDlgItemTextA(param_1,0x84,local_13c,0xff);
            if ((UVar8 == 0) || (iVar5 = FUN_217abb45(local_13c,&local_3c), iVar5 < 0)) {
              FUN_217b11cf(*(HWND *)((int)local_c + 0x1c),0,0x84,1);
              puVar1 = param_4;
              if ((param_4 != (uint *)0x0) && (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
                *puVar1 = 0x80004004;
              }
              goto LAB_217aadc4;
            }
            uVar6 = (**(code **)(*param_3 + 0xe8))(param_3,(float)local_3c);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            local_20 = GetDlgItemInt(param_1,0x79,(BOOL *)0x0,1);
            uVar6 = (**(code **)(*param_3 + 0x98))(param_3,local_20);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            local_24 = GetDlgItemInt(param_1,0x78,(BOOL *)0x0,1);
            uVar6 = (**(code **)(*param_3 + 0xa0))(param_3,local_24);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            local_1c = GetDlgItemInt(param_1,0x6f,(BOOL *)0x0,1);
            uVar6 = (**(code **)(*param_3 + 0x58))(param_3,local_1c);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            LVar11 = 0;
            WVar10 = 0;
            UVar8 = 0xf0;
            pHVar9 = GetDlgItem(param_1,0x6a);
            local_2c = SendMessageA(pHVar9,UVar8,WVar10,LVar11);
            uVar6 = (**(code **)(*param_3 + 0xb0))(param_3,local_2c);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            LVar11 = 0;
            WVar10 = 0;
            UVar8 = 0xf0;
            pHVar9 = GetDlgItem(param_1,0x7d);
            local_28 = SendMessageA(pHVar9,UVar8,WVar10,LVar11);
            uVar6 = (**(code **)(*param_3 + 0x68))(param_3,local_28);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            LVar11 = 0;
            WVar10 = 0;
            UVar8 = 0xf0;
            pHVar9 = GetDlgItem(param_1,0x7c);
            local_10 = SendMessageA(pHVar9,UVar8,WVar10,LVar11);
            uVar6 = (**(code **)(*param_3 + 0x70))(param_3,local_10);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            LVar11 = 0;
            WVar10 = 0;
            UVar8 = 0xf0;
            pHVar9 = GetDlgItem(param_1,0x7b);
            local_14 = SendMessageA(pHVar9,UVar8,WVar10,LVar11);
            uVar6 = (**(code **)(*param_3 + 0x80))(param_3,local_14);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            LVar11 = 0;
            WVar10 = 0;
            UVar8 = 0xf0;
            pHVar9 = GetDlgItem(param_1,0x7a);
            local_18 = SendMessageA(pHVar9,UVar8,WVar10,LVar11);
            uVar6 = (**(code **)(*param_3 + 0x78))(param_3,local_18);
            if ((((int)uVar6 < 0) && (FUN_217b0e4a(uVar6,0), param_4 != (uint *)0x0)) &&
               (BVar7 = IsBadWritePtr(param_4,4), BVar7 == 0)) {
              *param_4 = uVar6;
            }
            (**(code **)(*param_3 + 8))(param_3);
          }
          puVar4 = (undefined4 *)FUN_217b0696(local_c,&local_30);
        }
        goto LAB_217ab16e;
      }
      if (param_2 == 0x467) goto LAB_217ab44f;
    }
LAB_217aadc4:
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 * __thiscall FUN_217ab4b0(void *this,byte param_1)

{
  FUN_217ab4d8((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217ab4d8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a7750;
  param_1[5] = &PTR_LAB_217a7710;
  FUN_217a9863(param_1);
  return;
}



undefined4 __thiscall FUN_217ab4ea(void *this,HWND param_1,BSTR param_2,int *param_3,uint *param_4)

{
  LPSTR lpString;
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  CHAR local_198 [128];
  uint *local_118 [31];
  byte local_9c;
  LPSTR local_98 [31];
  byte local_1c;
  uint local_18;
  void *local_14;
  UINT local_10;
  UINT local_c;
  BSTR local_8;
  
  local_14 = this;
  if (param_2 == (BSTR)0x111) {
    uVar4 = (uint)param_3 & 0xffff;
    if (((((uVar4 == 0x6b) || (uVar4 == 0x75)) || (uVar4 == 0x77)) || (uVar4 == 0x87)) &&
       (((sVar1 = (short)((uint)param_3 >> 0x10), sVar1 == 0x300 || (sVar1 == 0)) || (sVar1 == 1))))
    {
      FUN_217b0711((int)this);
    }
  }
  else if (param_2 == (BSTR)0x464) {
    puVar2 = (undefined4 *)FUN_217b0686(this,(uint *)&local_14);
    if ((puVar2 != (undefined4 *)0x0) &&
       (iVar3 = (**(code **)*puVar2)(puVar2,&DAT_217a1308,&param_3), -1 < iVar3)) {
      (**(code **)(*param_3 + 0xdc))(param_3,&local_c);
      (**(code **)(*param_3 + 0xbc))(param_3,&local_10);
      (**(code **)(*param_3 + 0xc4))(param_3,&local_8);
      (**(code **)(*param_3 + 0xb4))(param_3,&param_2);
      iVar3 = lstrlenW(local_8);
      uVar4 = iVar3 * 2 + 2;
      FUN_217a34bc(local_118,uVar4);
      WideCharToMultiByte(0,0,local_8,-1,(LPSTR)local_118[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
      param_4 = local_118[0];
      iVar3 = lstrlenW(param_2);
      uVar4 = iVar3 * 2 + 2;
      FUN_217a34bc(local_98,uVar4);
      WideCharToMultiByte(0,0,param_2,-1,local_98[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
      lpString = local_98[0];
      SetDlgItemInt(param_1,0x75,local_c,1);
      SetDlgItemInt(param_1,0x87,(int)(short)local_10,1);
      SetDlgItemTextA(param_1,0x77,(LPCSTR)param_4);
      SetDlgItemTextA(param_1,0x6b,lpString);
      SysFreeString(param_2);
      SysFreeString(local_8);
      (**(code **)(*param_3 + 8))(param_3);
      if ((local_98[0] != (LPCSTR)0x0) && ((local_1c & 1) != 0)) {
        HeapFree(DAT_217b3020,0,local_98[0]);
      }
      if (local_118[0] == (uint *)0x0) {
        return 1;
      }
      if ((local_9c & 1) == 0) {
        return 1;
      }
      HeapFree(DAT_217b3020,0,local_118[0]);
      return 1;
    }
  }
  else if (param_2 == (BSTR)0x465) {
    puVar2 = (undefined4 *)FUN_217b0686(this,&local_18);
    while (puVar2 != (undefined4 *)0x0) {
      iVar3 = (**(code **)*puVar2)(puVar2,&DAT_217a1308,&param_3);
      if (-1 < iVar3) {
        local_c = GetDlgItemInt(param_1,0x75,(BOOL *)0x0,1);
        uVar4 = (**(code **)(*param_3 + 0xe0))(param_3,local_c);
        if ((((int)uVar4 < 0) && (FUN_217b0e4a(uVar4,0), param_4 != (uint *)0x0)) &&
           (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
          *param_4 = uVar4;
        }
        local_10 = GetDlgItemInt(param_1,0x87,(BOOL *)0x0,1);
        uVar4 = (**(code **)(*param_3 + 0xc0))(param_3,local_10);
        if ((((int)uVar4 < 0) && (FUN_217b0e4a(uVar4,0), param_4 != (uint *)0x0)) &&
           (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
          *param_4 = uVar4;
        }
        GetDlgItemTextA(param_1,0x77,local_198,0xff);
        local_8 = FUN_217ac59c(local_198,(LPWSTR)0x0);
        uVar4 = (**(code **)(*param_3 + 200))(param_3,local_8);
        SysFreeString(local_8);
        if ((((int)uVar4 < 0) && (FUN_217b0e4a(uVar4,0), param_4 != (uint *)0x0)) &&
           (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
          *param_4 = uVar4;
        }
        GetDlgItemTextA(param_1,0x6b,local_198,0xff);
        param_2 = FUN_217ac59c(local_198,(LPWSTR)0x0);
        uVar4 = (**(code **)(*param_3 + 0xb8))(param_3,param_2);
        SysFreeString(param_2);
        if ((((int)uVar4 < 0) && (FUN_217b0e4a(uVar4,0), param_4 != (uint *)0x0)) &&
           (BVar5 = IsBadWritePtr(param_4,4), BVar5 == 0)) {
          *param_4 = uVar4;
        }
        (**(code **)(*param_3 + 8))(param_3);
      }
      puVar2 = (undefined4 *)FUN_217b0696(local_14,&local_18);
    }
    return 1;
  }
  return 0;
}



undefined4 * __fastcall FUN_217ab8c2(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a7768;
  VariantInit((VARIANTARG *)(param_1 + 2));
  param_1[6] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_217ab8dd(void *this,byte param_1)

{
  FUN_217ab905((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_217ab905(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_217a7768;
  VariantClear((VARIANTARG *)(param_1 + 2));
  return;
}



undefined4 __thiscall FUN_217ab916(void *this,short param_1,undefined4 *param_2,short param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_217a2afc(0x20,DAT_217b3020);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_217ab8c2(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x8007000e;
  }
  else {
    *(short *)(puVar1 + 2) = param_1;
    if ((param_1 == 3) || (param_1 == 0x13)) {
      puVar1[4] = *param_2;
      if (param_3 == 0) {
                    // WARNING: Load size is inaccurate
        puVar1[6] = *this;
        *(undefined4 **)this = puVar1;
        if (puVar1[6] == 0) {
          *(undefined4 **)((int)this + 4) = puVar1;
        }
      }
      else {
        if (*(int *)((int)this + 4) != 0) {
          *(undefined4 **)(*(int *)((int)this + 4) + 0x18) = puVar1;
        }
        puVar1[6] = 0;
                    // WARNING: Load size is inaccurate
        *(undefined4 **)((int)this + 4) = puVar1;
        if (*this == 0) {
          *(undefined4 **)this = puVar1;
        }
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      uVar2 = 0;
    }
    else {
      (**(code **)*puVar1)(1);
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}



int __thiscall FUN_217ab9ab(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (*(int *)((int)this + 8) <= param_1)) {
    iVar1 = 0;
  }
  else {
                    // WARNING: Load size is inaccurate
    iVar1 = *this;
    for (iVar2 = 0; (iVar1 != 0 && (iVar2 < param_1)); iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    iVar1 = (int)*(short *)(iVar1 + 0x10);
  }
  return iVar1;
}



undefined4 FUN_217ab9d5(HWND param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 == 0x111) {
    bVar1 = (short)param_3 == 1;
  }
  else {
    if (param_2 != 0x112) {
      return 0;
    }
    bVar1 = param_3 == 0xf060;
  }
  if (bVar1) {
    EndDialog(param_1,1);
  }
  return 0;
}



void __cdecl FUN_217aba06(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  uint local_c;
  ushort local_6;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&param_1,1,0);
  if (-1 < iVar2) {
    if ((char)param_1 == -1) {
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_6,2,0);
      if (iVar2 < 0) {
        return;
      }
      if (local_6 == 0xfffe) {
        local_c = 0xffffffff;
      }
      else if (local_6 == 0xffff) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_c,4,0);
        if (iVar2 < 0) {
          return;
        }
      }
      else {
        local_c = (uint)local_6;
      }
    }
    else {
      local_c = (uint)param_1 & 0xff;
    }
    *param_2 = local_c;
  }
  return;
}



int __thiscall FUN_217aba79(void *this,int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  BSTR lpMem;
  LPWSTR pWVar4;
  BSTR local_c;
  
  piVar2 = param_1;
  *param_2 = 0;
  iVar3 = FUN_217aba06(param_1,(uint *)&param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  if (param_1 == (int *)0xffffffff) {
    bVar1 = false;
    iVar3 = FUN_217aba06(piVar2,(uint *)&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lpMem = (BSTR)HeapAlloc(DAT_217b3020,0,(int)param_1 + 1);
    if (lpMem == (BSTR)0x0) {
      return -0x7ff8fff2;
    }
    *(undefined1 *)((int)lpMem + (int)param_1) = 0;
    local_c = (BSTR)this;
  }
  else {
    lpMem = SysAllocStringLen((OLECHAR *)0x0,(UINT)param_1);
    if (lpMem == (BSTR)0x0) {
      return -0x7ff8fff2;
    }
    param_1 = (int *)((int)param_1 * 2);
    local_c = lpMem;
  }
  iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,lpMem,param_1,0);
  if (-1 < iVar3) {
    if (bVar1) {
      pWVar4 = FUN_217ac59c((LPCSTR)lpMem,(LPWSTR)0x0);
      *param_2 = pWVar4;
      HeapFree(DAT_217b3020,0,lpMem);
    }
    else {
      *param_2 = local_c;
    }
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 __cdecl FUN_217abb45(LPCSTR param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  HRESULT HVar2;
  _union_2683 local_14;
  
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    VariantInit((VARIANTARG *)&local_14.n2);
    local_14.n2.vt = 8;
    local_14._8_4_ = FUN_217ac59c(param_1,(LPWSTR)0x0);
    if ((LPWSTR)local_14._8_4_ == (LPWSTR)0x0) {
      return 0x8007000e;
    }
    HVar2 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_14.n2,0,5);
    if (HVar2 < 0) {
      VariantClear((VARIANTARG *)&local_14.n2);
      return 0x80020005;
    }
    uVar1 = CONCAT44(local_14._12_4_,local_14._8_4_);
  }
  *param_2 = uVar1;
  return 0;
}



int __cdecl FUN_217abbb4(double param_1,LPSTR param_2,int param_3)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  _union_2683 local_14;
  
  VariantInit((VARIANTARG *)&local_14.n2);
  local_14.n2.vt = 5;
  local_14.n2.n3 = (_union_2685)((param_1 - -5e-05) * 1000.0 * 0.001);
  HVar1 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_14.n2,0,6);
  if ((HVar1 < 0) ||
     (HVar1 = VariantChangeType((VARIANTARG *)&local_14.n2,(VARIANTARG *)&local_14.n2,0,8),
     HVar1 < 0)) {
    return -0x7ff8fff2;
  }
  *param_2 = '\0';
  iVar2 = WideCharToMultiByte(0,0,(LPCWSTR)local_14._8_4_,-1,param_2,param_3,(LPCSTR)0x0,(LPBOOL)0x0
                             );
  VariantClear((VARIANTARG *)&local_14.n2);
  iVar3 = 0;
  if (param_2 != (LPSTR)0x0) {
    while( true ) {
      if ((param_2[iVar3] == '\0') || (iVar2 <= iVar3)) goto LAB_217abc64;
      if (param_2[iVar3] == '.') break;
      iVar3 = iVar3 + 1;
    }
    if (iVar2 <= iVar3 + 3) {
      iVar3 = iVar2 + -4;
    }
    param_2[iVar3 + 3] = '\0';
  }
LAB_217abc64:
  return ((iVar2 < 1) - 1 & 0x7fffbffb) + 0x80004005;
}



int __cdecl FUN_217abc78(int *param_1,int *param_2,LPCSTR param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_118 [54];
  short local_40 [12];
  int local_28;
  undefined4 local_24 [2];
  undefined1 local_1c [4];
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_40,0x1c,0);
  if (-1 < iVar2) {
    if (local_40[0] == -2) {
      iVar2 = (**(code **)(*param_1 + 0x14))(param_1,local_28 * 0x14,0,1,0);
      if (((-1 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_1c,8,0), -1 < iVar2)
          ) && (iVar2 = (**(code **)(*param_1 + 0x14))(param_1,0,0,1,&local_c), -1 < iVar2)) {
        param_1 = (int *)0x0;
        if (0 < (short)local_18) {
          do {
            iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_14,8,0);
            if (iVar2 < 0) {
              return iVar2;
            }
            (**(code **)(*piVar1 + 0x14))(piVar1,0,0,1,local_24);
            if (local_14 == 0) {
              iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_c + -4 + local_10,0,0,0);
              if (iVar2 < 0) {
                return iVar2;
              }
              piVar3 = local_118;
              for (iVar2 = 0x36; iVar2 != 0; iVar2 = iVar2 + -1) {
                *piVar3 = 0;
                piVar3 = piVar3 + 1;
              }
              iVar2 = FUN_217abde5(piVar1,local_c,local_8,local_18,param_2,local_118);
LAB_217abd65:
              if (iVar2 < 0) {
                return iVar2;
              }
            }
            else {
              iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_c + -8 + local_10,0,0,0);
              if (iVar2 < 0) {
                return iVar2;
              }
              iVar2 = 0;
              piVar3 = local_118;
              do {
                if (local_14 == *piVar3) {
                  iVar2 = FUN_217abea0(piVar1,(SIZE_T)(param_2 + local_118[iVar2 * 2 + 1] * 7),
                                       param_3);
                  goto LAB_217abd65;
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar3 + 2;
              } while (iVar2 < 0x1b);
            }
            iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_24[0],0,0,0);
            if (iVar2 < 0) {
              return iVar2;
            }
            param_1 = (int *)((int)param_1 + 1);
          } while ((short)param_1 < (short)local_18);
        }
        iVar2 = 0;
      }
    }
    else {
      iVar2 = -0x7fff0001;
    }
  }
  return iVar2;
}



int __cdecl
FUN_217abde5(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5,
            undefined4 *param_6)

{
  int iVar1;
  LPWSTR pv;
  int *piVar2;
  int iVar3;
  CHAR local_110 [256];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = 0;
  if (param_4 != 0) {
    do {
      iVar3 = 0;
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_10,8,0);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_110,local_c,0);
      if (iVar1 < 0) {
        return iVar1;
      }
      pv = FUN_217ac59c(local_110,(LPWSTR)0x1);
      iVar1 = *param_5;
      piVar2 = param_5;
      while (iVar1 != 0) {
        iVar1 = FUN_217b132c(pv,(LPCWSTR)*piVar2,0,-1,-1);
        if (iVar1 == 2) {
          *param_6 = local_10;
          param_6[1] = iVar3;
          param_6 = param_6 + 2;
          break;
        }
        piVar2 = piVar2 + 7;
        iVar3 = iVar3 + 1;
        iVar1 = *piVar2;
      }
      CoTaskMemFree(pv);
      local_8 = local_8 + 1;
    } while (local_8 < param_4);
  }
  return 0;
}



int __cdecl FUN_217abea0(int *param_1,SIZE_T param_2,LPCSTR param_3)

{
  short sVar1;
  int *piVar2;
  SIZE_T SVar3;
  int iVar4;
  HGLOBAL hMem;
  LPVOID pvVar5;
  LPWSTR pWVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  CHAR *pCVar10;
  LPCSTR pCVar11;
  CHAR *pCVar12;
  CHAR local_c [4];
  undefined1 local_8 [4];
  
  SVar3 = param_2;
  sVar1 = *(short *)(param_2 + 0x10);
  if (sVar1 == 8) {
    pCVar11 = param_3 + *(int *)(param_2 + 4);
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_8,4,0);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,&param_2,4,0);
    if (iVar4 < 0) {
      return iVar4;
    }
    param_3 = (LPCSTR)HeapAlloc(DAT_217b3020,0,param_2);
    if (param_3 == (LPCSTR)0x0) {
      return -0x7ff8fff2;
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,param_3,param_2,0);
    if (-1 < iVar4) {
      SysFreeString(*(BSTR *)pCVar11);
      pWVar6 = FUN_217ac59c(param_3,(LPWSTR)0x0);
      *(LPWSTR *)pCVar11 = pWVar6;
    }
    HeapFree(DAT_217b3020,0,param_3);
  }
  else {
    if (sVar1 != 0xd) {
      if (sVar1 == 0x41) {
        pCVar11 = param_3 + *(int *)(param_2 + 4);
        iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_8,4,0);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (**(code **)(*param_1 + 0xc))(param_1,&param_2,4,0);
        if (-1 < iVar4) {
          if (*(HGLOBAL *)pCVar11 != (HGLOBAL)0x0) {
            GlobalFree(*(HGLOBAL *)pCVar11);
          }
          hMem = GlobalAlloc(2,param_2);
          *(HGLOBAL *)pCVar11 = hMem;
          pvVar5 = GlobalLock(hMem);
          iVar4 = (**(code **)(*param_1 + 0xc))(param_1,pvVar5,param_2,0);
          GlobalUnlock(*(HGLOBAL *)pCVar11);
          if (-1 < iVar4) {
            return 0;
          }
          GlobalFree(*(HGLOBAL *)pCVar11);
          pCVar11[0] = '\0';
          pCVar11[1] = '\0';
          pCVar11[2] = '\0';
          pCVar11[3] = '\0';
          return iVar4;
        }
        return iVar4;
      }
      iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_8,4,0);
      if (iVar4 < 0) {
        return iVar4;
      }
      iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_c,4,0);
      if (-1 < iVar4) {
        uVar8 = *(uint *)(SVar3 + 0x14);
        pCVar10 = local_c;
        pCVar12 = param_3 + *(int *)(SVar3 + 4);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pCVar12 = *(undefined4 *)pCVar10;
          pCVar10 = pCVar10 + 4;
          pCVar12 = pCVar12 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pCVar12 = *pCVar10;
          pCVar10 = pCVar10 + 1;
          pCVar12 = pCVar12 + 1;
        }
        return 0;
      }
      return iVar4;
    }
    if ((*(byte *)(param_2 + 0x18) & 2) == 0) {
      return 0;
    }
    piVar9 = (int *)(param_3 + *(int *)(param_2 + 4));
    piVar2 = (int *)*piVar9;
    if (piVar2 != (int *)0x0) {
      *piVar9 = 0;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,local_8,4,0);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,&param_2,4,0);
    if (iVar4 < 0) {
      return iVar4;
    }
    param_2 = param_2 - 0x10;
    (**(code **)(*param_1 + 0x14))(param_1,0x10,0,1,0);
    iVar4 = OleLoadPicture(param_1,param_2,1,&DAT_217a79e8,piVar9);
  }
  if (-1 < iVar4) {
    return 0;
  }
  return iVar4;
}



int FUN_217ac09b(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3e8c == 0) {
    DAT_217b3e8c = FUN_217ac0cf((undefined4 *)&DAT_217a79f8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return DAT_217b3e8c;
}



void __cdecl FUN_217ac0cf(undefined4 *param_1)

{
  CHAR local_2c [40];
  
  wsprintfA(local_2c,"{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  RegisterClipboardFormatA(local_2c);
  return;
}



// Library Function - Single Match
//  __ftol
// 
// Library: Visual Studio

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



HRESULT __fastcall DllRegisterServer(void *param_1)

{
  HRESULT HVar1;
  int iVar2;
  
                    // 0xc151  3  DllRegisterServer
  HVar1 = FUN_217ac18b(param_1);
  if (-1 < HVar1) {
    iVar2 = FUN_217a5b01();
    HVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return HVar1;
}



int DllUnregisterServer(void)

{
  int iVar1;
  
                    // 0xc16e  4  DllUnregisterServer
  iVar1 = FUN_217ac428();
  if (-1 < iVar1) {
    iVar1 = FUN_217a5b01();
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return iVar1;
}



HRESULT __fastcall FUN_217ac18b(void *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  HRESULT HVar3;
  int iVar4;
  DWORD DVar5;
  LPCOLESTR szHelpDir;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined2 extraout_var;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  uint uVar6;
  undefined **ppuVar7;
  uint uVar8;
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
  uVar6 = 0;
  local_14 = (ITypeLib *)0x0;
  local_c = 0;
  local_18 = (LPWSTR)0x0;
  local_20 = 0;
  if (DAT_217b3e80 != 0) {
    GetModuleFileNameA(DAT_217b31a4,local_228,0x104);
    local_18 = FUN_217ac59c(local_228,(LPWSTR)0x0);
    HVar3 = LoadTypeLib(local_18,&local_14);
    if (HVar3 < 0) goto LAB_217ac367;
    (*local_14->lpVtbl->GetLibAttr)(local_14,&local_8);
    local_10 = (LPWSTR)(uint)local_8->wMajorVerNum;
    local_1c = (uint)local_8->wMinorVerNum;
    (*local_14->lpVtbl->ReleaseTLibAttr)(local_14,local_8);
    param_1 = extraout_ECX;
  }
  if (DAT_217b3150 != -1) {
    local_8 = (TLIBATTR *)&DAT_217b3150;
    ppuVar7 = &PTR_PTR_217b3154;
    do {
      if (*(int *)*ppuVar7 != 0) {
        if (uVar6 == 0) {
          if (local_c == 0) {
            local_c = FUN_217ad5d5(param_1,aCStack_125 + 1,0x104);
            lstrcatA(aCStack_125 + 1,&DAT_217b37d6);
            local_c = local_c + 1;
            param_1 = extraout_ECX_00;
          }
          if ((*(LPCSTR *)(*ppuVar7 + 0x28) != (LPCSTR)0x0) &&
             (iVar4 = lstrlenA(*(LPCSTR *)(*ppuVar7 + 0x28)), param_1 = extraout_ECX_01, 0 < iVar4))
          {
            iVar4 = lstrlenA(*(LPCSTR *)(*ppuVar7 + 0x28));
            lstrcpynA(aCStack_125 + local_c + 1,*(LPCSTR *)(*ppuVar7 + 0x28),iVar4 + 1);
            DVar5 = GetFileAttributesA(aCStack_125 + 1);
            uVar6 = ~DVar5 >> 4 & 1;
            param_1 = extraout_ECX_02;
          }
          if (uVar6 == 0) {
            aCStack_125[local_c + 1] = '\0';
          }
          else {
            aCStack_125[local_c] = '\0';
          }
        }
        sVar1 = (short)(local_8->guid).Data1;
        if (sVar1 == 0) {
LAB_217ac40e:
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_217ac696(puVar2[1],(LPCSTR)puVar2[2],(HKEY)*puVar2,puVar2[3]);
          param_1 = extraout_ECX_05;
        }
        else if (sVar1 == 1) {
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_217ac835("MSComDlg",(LPCSTR)puVar2[1],(LPCSTR)puVar2[2],puVar2[6],local_10,local_1c,
                       (undefined4 *)s__6z_Licenses_217b3708._0_4_,(HKEY)*puVar2,puVar2[3]);
          param_1 = extraout_ECX_04;
        }
        else if (sVar1 == 2) {
          uVar8 = 1;
          iVar4 = FUN_217ad9bb((int *)local_14,*(undefined4 *)*ppuVar7,(undefined2 *)&local_20);
          if (-1 < iVar4) {
            uVar8 = local_20 & 0x20;
          }
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_217acd58("MSComDlg",(LPCSTR)puVar2[1],(LPCSTR)puVar2[2],puVar2[6],puVar2[7],
                       (int *)local_10,local_1c,(HKEY)s__6z_Licenses_217b3708._0_4_,(HKEY)*puVar2,
                       puVar2[0xd],CONCAT22(extraout_var,*(undefined2 *)(puVar2 + 0x10)),puVar2[3],
                       uVar8);
          param_1 = extraout_ECX_03;
        }
        else if (sVar1 == 3) goto LAB_217ac40e;
      }
      local_8 = (TLIBATTR *)(local_8->guid).Data4;
      ppuVar7 = ppuVar7 + 2;
    } while (*(short *)local_8 != -1);
  }
  if (DAT_217b3e80 != 0) {
    if ((uVar6 == 0) ||
       (szHelpDir = FUN_217ac59c(aCStack_125 + 1,(LPWSTR)0x1), local_10 = szHelpDir, uVar6 == 0)) {
      szHelpDir = (LPCOLESTR)&DAT_217b3aa2;
    }
    HVar3 = RegisterTypeLib(local_14,local_18,szHelpDir);
    if (uVar6 != 0) {
      CoTaskMemFree(local_10);
    }
    (*local_14->lpVtbl->Release)(local_14);
    if (HVar3 < 0) goto LAB_217ac367;
  }
  HVar3 = 0;
LAB_217ac367:
  SysFreeString(local_18);
  return HVar3;
}



undefined4 FUN_217ac428(void)

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
  if (DAT_217b3150 != -1) {
    psVar6 = &DAT_217b3150;
    local_8 = &PTR_PTR_217b3154;
    do {
      puVar2 = (undefined4 *)*local_8;
      pHVar3 = (HKEY)*puVar2;
      if (pHVar3 != (HKEY)0x0) {
        sVar1 = *psVar6;
        if (sVar1 == 0) {
LAB_217ac58e:
          FUN_217ad081(pHVar3,(HKEY)0x0);
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          FUN_217ad11f("MSComDlg",puVar2[1],puVar2[6],pHVar3);
        }
        else if (sVar1 == 3) goto LAB_217ac58e;
      }
      local_8 = local_8 + 2;
      psVar6 = psVar6 + 4;
    } while (*psVar6 != -1);
  }
  if (s__6z_Licenses_217b3708._0_4_ != 0) {
    GetModuleFileNameA(DAT_217b31a4,local_194,0x104);
    iVar4 = lstrlenA(local_194);
    cchWideChar = iVar4 * 2 + 2;
    FUN_217a34bc(local_90,cchWideChar);
    MultiByteToWideChar(0,0,local_194,-1,local_90[0],cchWideChar);
    HVar5 = LoadTypeLibEx(local_90[0],REGKIND_NONE,&local_c);
    if (-1 < HVar5) {
      HVar5 = (*local_c->lpVtbl->GetLibAttr)(local_c,&local_10);
      if (-1 < HVar5) {
        UnRegisterTypeLib((GUID *)s__6z_Licenses_217b3708._0_4_,local_10->wMajorVerNum,
                          local_10->wMinorVerNum,local_10->lcid,local_10->syskind);
      }
    }
    if ((local_90[0] != (LPCOLESTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_90[0]);
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



LPWSTR __cdecl FUN_217ac59c(LPCSTR param_1,LPWSTR param_2)

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



void __cdecl FUN_217ac60a(ushort param_1,LPWSTR param_2)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  iVar1 = 0x200;
  uID = (uint)param_1;
  hInstance = FUN_217a45b1(0);
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_217ac59c(local_204,param_2);
  return;
}



void __cdecl FUN_217ac64b(undefined4 *param_1,LPSTR param_2)

{
  wsprintfA(param_2,s___08lX__04X__04X__02X_02X__02X_0_217b37d8,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  return;
}



undefined4 __cdecl FUN_217ac696(undefined4 param_1,LPCSTR param_2,HKEY param_3,int param_4)

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
  iVar1 = FUN_217ad623(param_3);
  if (iVar1 == 0) {
    FUN_217ad081(param_3,(HKEY)0x0);
  }
  iVar1 = FUN_217ac64b(param_3,local_38);
  if (iVar1 != 0) {
    wsprintfA((LPSTR)local_13c,s_CLSID__s_217b380c,local_38);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_217b3aa4,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    if (LVar2 == 0) {
      if (param_2 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_217b3818,param_1);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_2);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if ((((LVar2 == 0) &&
           (LVar2 = RegCreateKeyExA(local_c,s_InprocServer32_217b3824,0,&DAT_217b3aa8,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10), LVar2 == 0)) &&
          (DVar3 = GetModuleFileNameA(DAT_217b31a4,(LPSTR)local_13c,0x104), DVar3 != 0)) &&
         (LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,DVar3 + 1), LVar2 == 0)) {
        if (param_4 == 0) {
          RegDeleteValueA(local_8,s_ThreadingModel_217b3850);
        }
        else {
          LVar2 = RegSetValueExA(local_8,s_ThreadingModel_217b3840,0,1,(BYTE *)s_Apartment_217b3834,
                                 10);
          if (LVar2 != 0) goto LAB_217ac7dc;
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        return 1;
      }
    }
  }
LAB_217ac7dc:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return 0;
}



undefined4 __cdecl
FUN_217ac835(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar1 = FUN_217ac696(param_2,param_3,param_8,param_9);
  if (iVar1 != 0) {
    lstrcpyA((LPSTR)local_13c,param_1);
    lstrcatA((LPSTR)local_13c,&DAT_217b3860);
    lstrcatA((LPSTR)local_13c,param_2);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_217b3aac,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
    if (LVar2 == 0) {
      if (param_3 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_217b3864,param_2);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_3);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if (((LVar2 == 0) &&
          (LVar2 = RegCreateKeyExA(local_c,s_CLSID_217b3870,0,&DAT_217b3ab0,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9), LVar2 == 0)) &&
         (iVar1 = FUN_217ac64b(param_8,(LPSTR)local_38), iVar1 != 0)) {
        iVar1 = lstrlenA((LPCSTR)local_38);
        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
        if (LVar2 == 0) {
          RegCloseKey(local_8);
          LVar2 = RegCreateKeyExA(local_c,s_CurVer_217b3878,0,&DAT_217b3ab4,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
          if (LVar2 == 0) {
            wsprintfA((LPSTR)local_13c,s__s__s__ld_217b3880,param_1,param_2,param_4);
            iVar1 = lstrlenA((LPCSTR)local_13c);
            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
            if (LVar2 == 0) {
              RegCloseKey(local_8);
              RegCloseKey(local_c);
              LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_217b3ab8,0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
              if (LVar2 == 0) {
                if (param_3 == (LPCSTR)0x0) {
                  wsprintfA((LPSTR)local_13c,s__s_Object_217b388c,param_2);
                }
                else {
                  lstrcpyA((LPSTR)local_13c,param_3);
                }
                iVar1 = lstrlenA((LPCSTR)local_13c);
                LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                if ((LVar2 == 0) &&
                   (LVar2 = RegCreateKeyExA(local_c,s_CLSID_217b3898,0,&DAT_217b3abc,0,0x2001f,
                                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9),
                   LVar2 == 0)) {
                  iVar1 = lstrlenA((LPCSTR)local_38);
                  LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                  if (LVar2 == 0) {
                    RegCloseKey(local_8);
                    RegCloseKey(local_c);
                    iVar1 = FUN_217ac64b(param_8,(LPSTR)local_38);
                    if (iVar1 != 0) {
                      wsprintfA((LPSTR)local_13c,s_CLSID__s_217b38a0,local_38);
                      LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_217b3ac0,0,
                                              0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
                      if ((LVar2 == 0) &&
                         (LVar2 = RegCreateKeyExA(local_c,s_VersionIndependentProgID_217b38ac,0,
                                                  &DAT_217b3ac4,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0
                                                  ,&local_8,&param_9), LVar2 == 0)) {
                        wsprintfA((LPSTR)local_13c,s__s__s_217b38c8,param_1,param_2);
                        iVar1 = lstrlenA((LPCSTR)local_13c);
                        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                        if (LVar2 == 0) {
                          RegCloseKey(local_8);
                          LVar2 = RegCreateKeyExA(local_c,s_ProgID_217b38d0,0,&DAT_217b3ac8,0,
                                                  0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                                                  &param_9);
                          if (LVar2 == 0) {
                            wsprintfA((LPSTR)local_13c,s__s__s__ld_217b38d8,param_1,param_2,param_4)
                            ;
                            iVar1 = lstrlenA((LPCSTR)local_13c);
                            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                            if (LVar2 == 0) {
                              RegCloseKey(local_8);
                              RegCreateKeyExA(local_c,s_TypeLib_217b38e4,0,&DAT_217b3acc,0,0x2001f,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
                              iVar1 = FUN_217ac64b(param_7,(LPSTR)local_38);
                              if (iVar1 != 0) {
                                iVar1 = lstrlenA((LPCSTR)local_38);
                                LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                                if (LVar2 == 0) {
                                  RegCloseKey(local_8);
                                  LVar2 = RegCreateKeyExA(local_c,s_Version_217b38ec,0,&DAT_217b3ad0
                                                          ,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                                                          &local_8,&param_9);
                                  if (LVar2 == 0) {
                                    wsprintfA((LPSTR)local_13c,s__ld__ld_217b38f4,param_5,param_6);
                                    iVar1 = lstrlenA((LPCSTR)local_13c);
                                    RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                                    HVar3 = CoCreateInstance((IID *)&DAT_217a7a18,(LPUNKNOWN)0x0,1,
                                                             (IID *)&DAT_217a7a28,&local_10);
                                    if (-1 < HVar3) {
                                      (**(code **)(*local_10 + 0x14))
                                                (local_10,param_8,1,&LAB_217a7a08);
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



// WARNING: Removing unreachable block (ram,0x217ad00b)
// WARNING: Removing unreachable block (ram,0x217ad012)
// WARNING: Removing unreachable block (ram,0x217ad01d)
// WARNING: Removing unreachable block (ram,0x217ad025)
// WARNING: Removing unreachable block (ram,0x217ad03b)

bool __cdecl
FUN_217acd58(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar3 = FUN_217ac835(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_12);
  if (iVar3 == 0) {
    return false;
  }
  FUN_217ac64b(param_9,local_34);
  wsprintfA((LPSTR)local_138,s_CLSID__s_217b38fc,local_34);
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_138,0,0xf003f,&param_8);
  if (LVar4 != 0) {
    return false;
  }
  if (param_13 != 0) {
    param_12 = RegCreateKeyExA(param_8,s_Control_217b3908,0,&DAT_217b3ad4,0,0xf003f,
                               (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
    if (param_12 != 0) goto LAB_217ad058;
    RegCloseKey(local_8);
    local_8 = (HKEY)0x0;
  }
  param_12 = RegCreateKeyExA(param_8,s_MiscStatus_217b3910,0,&DAT_217b3ad8,0,0xf003f,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
  if (param_12 == 0) {
    local_138[0] = '0';
    local_138[1] = 0;
    param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,2);
    if ((param_12 == 0) &&
       (param_12 = RegCreateKeyExA(local_8,&DAT_217b391c,0,&DAT_217b3adc,0,0xf003f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_7), param_12 == 0)) {
      wsprintfA((LPSTR)local_138,&DAT_217b3920,param_10);
      iVar3 = lstrlenA((LPCSTR)local_138);
      param_12 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
      RegCloseKey(local_c);
      if (param_12 == 0) {
        RegCloseKey(local_8);
        local_8 = (HKEY)0x0;
        if (param_13 != 0) {
          GetModuleFileNameA(DAT_217b31a4,(LPSTR)local_138,0x104);
          wsprintfA(local_34,&DAT_217b3924,param_11 & 0xffff);
          lstrcatA((LPSTR)local_138,local_34);
          param_12 = RegCreateKeyExA(param_8,s_ToolboxBitmap32_217b392c,0,&DAT_217b3ae0,0,0xf003f,
                                     (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
          if (param_12 != 0) goto LAB_217ad058;
          iVar3 = lstrlenA((LPCSTR)local_138);
          param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
          if (param_12 != 0) goto LAB_217ad058;
        }
        HVar5 = CoCreateInstance((IID *)&DAT_217a7a18,(LPUNKNOWN)0x0,1,(IID *)&DAT_217a7a28,&param_6
                                );
        if (-1 < HVar5) {
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_217b3b18;
          do {
            if (0x217b3b3f < (int)ppuVar6) break;
            puVar2 = (undefined4 *)*ppuVar6;
            *puVar7 = *puVar2;
            param_11 = param_11 + 1;
            ppuVar6 = ppuVar6 + 1;
            puVar7[1] = puVar2[1];
            puVar1 = puVar7 + 3;
            puVar7[2] = puVar2[2];
            puVar7 = puVar7 + 4;
            *puVar1 = puVar2[3];
          } while ((int)param_11 < 5);
          (**(code **)(*param_6 + 0x14))(param_6,param_9,5,local_1d8);
          (**(code **)(*param_6 + 8))(param_6);
        }
      }
    }
  }
LAB_217ad058:
  if (param_8 != (HKEY)0x0) {
    RegCloseKey(param_8);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return param_12 == 0;
}



bool __cdecl FUN_217ad081(undefined4 *param_1,HKEY param_2)

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
  iVar3 = FUN_217ac64b(param_1,(LPSTR)local_108);
  if ((iVar3 != 0) &&
     (LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID_217b393c,0,0xf003f,&param_2), LVar4 == 0)) {
    iVar3 = FUN_217ad6c7(param_2,local_108);
    if ((iVar3 != 0) && (lstrcatA((LPSTR)local_108,s__InprocServer32_217b3944), pHVar1 != (HKEY)0x0)
       ) {
      pHVar1->unused = 0;
    }
    bVar2 = FUN_217ad293(param_2,(LPCSTR)local_108);
    RegCloseKey(param_2);
    return bVar2;
  }
  return false;
}



undefined4 __cdecl FUN_217ad11f(undefined4 param_1,undefined4 param_2,int param_3,HKEY param_4)

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
  
  bVar1 = FUN_217ad081(param_4,&local_10);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_217ad1d4:
    uVar3 = 0;
  }
  else {
    if (local_10.unused != 0) {
      wsprintfA((LPSTR)local_118,s__s__s__ld_217b3954,param_1,param_2,param_3);
      bVar1 = FUN_217ad293((HKEY)0x80000000,(LPCSTR)local_118);
      if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_217ad1d4;
      iVar2 = FUN_217ad317(param_1,param_2,param_3,(int *)&local_8,&local_c);
      if (iVar2 == 0) {
        if (local_c == 0) {
          wsprintfA((LPSTR)local_118,s__s__s_217b3960,param_1,param_2);
          bVar1 = FUN_217ad293((HKEY)0x80000000,(LPCSTR)local_118);
          if (CONCAT31(extraout_var_01,bVar1) == 0) goto LAB_217ad1d4;
        }
      }
      else {
        FUN_217ad3d9(param_1,param_2,local_8);
        wsprintfA((LPSTR)local_118,s__s__s_CurVer_217b3968,param_1,param_2);
        LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,0xf003f,&param_4);
        if (LVar4 != 0) {
          LVar4 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,&DAT_217b3ae4,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&param_4,&local_14);
          if (LVar4 != 0) goto LAB_217ad28b;
          wsprintfA((LPSTR)local_118,s__s__s__ld_217b3978,param_1,param_2,local_8);
          iVar2 = lstrlenA((LPCSTR)local_118);
          RegSetValueExA(param_4,(LPCSTR)0x0,0,1,local_118,iVar2 + 1);
        }
        RegCloseKey(param_4);
      }
    }
LAB_217ad28b:
    uVar3 = 1;
  }
  return uVar3;
}



bool __cdecl FUN_217ad293(HKEY param_1,LPCSTR param_2)

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
      bVar1 = FUN_217ad293(local_8,local_110);
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
FUN_217ad317(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

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
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,&DAT_217b3ae8,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    iVar2 = 0x20;
    do {
      if (param_3 != iVar2) {
        wsprintfA(local_114,s__s__s__ld_217b3984,param_1,param_2,iVar2);
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



bool __cdecl FUN_217ad3d9(undefined4 param_1,undefined4 param_2,HKEY param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  wsprintfA(local_110,s__s__s__ld_217b3990,param_1,param_2,param_3);
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,local_110,0,0xf003f,&param_3);
  if (LVar2 == 0) {
    wsprintfA(local_110,s__s__s_217b399c,param_1,param_2);
    FUN_217ad293((HKEY)0x80000000,local_110);
    uVar3 = RegCreateKeyExA((HKEY)0x80000000,local_110,0,&DAT_217b3aec,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if (uVar3 == 0) {
      bVar1 = FUN_217ad4b0(param_3,local_8);
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



bool __cdecl FUN_217ad4b0(HKEY param_1,HKEY param_2)

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
      goto LAB_217ad5c1;
      local_14 = RegCreateKeyExA(param_2,(LPCSTR)local_12c,0,&DAT_217b3af0,0,0x2001f,
                                 (LPSECURITY_ATTRIBUTES)0x0,&local_18,&local_20);
      if (local_14 != 0) break;
      FUN_217ad4b0(local_10,local_18);
      RegCloseKey(local_10);
      RegCloseKey(local_18);
      local_c = local_c + 1;
      iVar2 = RegEnumKeyExA(param_1,local_c,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_28);
    }
    RegCloseKey(local_10);
LAB_217ad5c1:
    bVar3 = local_14 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



uint __thiscall FUN_217ad5d5(void *this,LPSTR param_1,uint param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_c = DAT_217b39a4;
  _uStack_8 = CONCAT22((short)((uint)this >> 0x10),DAT_217b39a8);
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



undefined4 __cdecl FUN_217ad623(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_214 [260];
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = FUN_217ac64b(param_1,local_110);
  if (iVar1 != 0) {
    wsprintfA(local_214,s_CLSID__s_217b39ac,local_110);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,local_214,0,&DAT_217b3af4,0,0x20019,
                            (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,s_Implemented_Categories_217b39b8,0,0xf003f,&local_8);
      RegCloseKey(param_1);
      if (LVar2 == 0) {
        RegCloseKey(local_8);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_217ad6c7(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [260];
  
  wsprintfA(local_108,s__s_InprocServer_217b39d0,param_2);
  LVar1 = RegOpenKeyExA(param_1,local_108,0,0xf003f,&param_2);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(param_2);
  return 1;
}



char * __cdecl FUN_217ad719(LPCSTR param_1)

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



int FUN_217ad73c(undefined4 param_1,int param_2)

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
  DVar2 = GetModuleFileNameA(DAT_217b31a4,local_170,0x104);
  if (((DVar2 != 0) && (iVar3 = FUN_217ad7d4(local_170,local_6c), iVar3 != 0)) &&
     (iVar3 = FUN_217ad7d4(param_1,local_38), iVar3 != 0)) {
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



int FUN_217ad7d4(undefined4 param_1,undefined4 *param_2)

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
  dwBytes = FUN_217ad882(param_1,&local_c);
  if (dwBytes != 0) {
    lpMem = HeapAlloc(DAT_217b3020,0,dwBytes);
    if (lpMem == (LPVOID)0x0) {
      return local_8;
    }
    local_8 = FUN_217ad8e5(param_1,local_c,dwBytes,lpMem);
    if ((local_8 != 0) &&
       (local_8 = FUN_217ad950(lpMem,&DAT_217b39e0,&local_14,&local_10), local_8 != 0)) {
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
    HeapFree(DAT_217b3020,0,lpMem);
  }
  return local_8;
}



int __cdecl FUN_217ad882(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3e98 == (FARPROC)0x0) {
    if ((DAT_217b31bc == (HMODULE)0x0) &&
       (DAT_217b31bc = LoadLibraryA(s_VERSION_DLL_217b39e4), DAT_217b31bc == (HMODULE)0x0)) {
      return 0;
    }
    DAT_217b3e98 = GetProcAddress(DAT_217b31bc,s_GetFileVersionInfoSizeA_217b39f0);
    if (DAT_217b3e98 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  iVar1 = (*DAT_217b3e98)(param_1,param_2);
  return iVar1;
}



int __cdecl
FUN_217ad8e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3e94 == (FARPROC)0x0) {
    if ((DAT_217b31bc == (HMODULE)0x0) &&
       (DAT_217b31bc = LoadLibraryA(s_VERSION_DLL_217b3a08), DAT_217b31bc == (HMODULE)0x0)) {
      return 0;
    }
    DAT_217b3e94 = GetProcAddress(DAT_217b31bc,s_GetFileVersionInfoA_217b3a14);
    if (DAT_217b3e94 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  iVar1 = (*DAT_217b3e94)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl
FUN_217ad950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3e90 == (FARPROC)0x0) {
    if ((DAT_217b31bc == (HMODULE)0x0) &&
       (DAT_217b31bc = LoadLibraryA(s_VERSION_DLL_217b3a28), DAT_217b31bc == (HMODULE)0x0)) {
      return 0;
    }
    DAT_217b3e90 = GetProcAddress(DAT_217b31bc,s_VerQueryValueA_217b3a34);
    if (DAT_217b3e90 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  iVar1 = (*DAT_217b3e90)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl FUN_217ad9bb(int *param_1,undefined4 param_2,undefined2 *param_3)

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



undefined4 * __thiscall FUN_217ada22(void *this,byte param_1)

{
  FUN_217a25d6((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_217ada4a(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 + -0x44) * 2] + 0x4a);
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
    iVar2 = *(int *)((&PTR_PTR_217b3154)[iVar2 * 2] + 0x4c);
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



int __thiscall FUN_217adacc(void *this,uint param_1,uint param_2,int param_3)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (*(short *)((&PTR_PTR_217b3154)[*(int *)((int)this + 0x14) * 2] + 0x48) == 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x50))();
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
      return 0;
    }
    *(undefined2 *)((&PTR_PTR_217b3154)[*(int *)((int)this + 0x14) * 2] + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
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
    pHVar2 = FUN_217b0a51();
    *(HWND *)((int)this + 0xa4) = pHVar2;
  }
  local_c = IsWindowVisible(*(HWND *)((int)this + 0xa4));
  if ((*(int *)((&PTR_PTR_217b3154)[*(int *)((int)this + 0x14) * 2] + 0x58) == 0) ||
     (pHVar2 = FUN_217b0a51(), *(HWND *)((int)this + 0xa4) == pHVar2)) {
    if (local_c != 0) goto LAB_217adc23;
  }
  else {
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
      iVar1 = FUN_217ae0e0(this,0xfffffd3e,0xb,(LONG *)&local_e);
      if ((iVar1 == 0) || (local_e == 0)) {
        *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
      }
      *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) | 2;
    }
    if ((*(byte *)((int)this + 0xbc) & 1) != 0) goto LAB_217adc23;
    pHVar2 = FUN_217b09af((uint)(local_c == 0),*(HWND *)((int)this + 0xa4),param_1,param_2,
                          (int *)((int)this + 0x88));
    *(HWND *)((int)this + 0xb4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      return 0;
    }
    SetWindowLongA(pHVar2,-0x15,(LONG)this);
  }
  local_8 = local_8 | 0x10000000;
LAB_217adc23:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  pHVar2 = *(HWND *)((int)this + 0xb4);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  hWndParent = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    hWndParent = *(HWND *)((int)this + 0xa4);
  }
  DAT_217b3e9c = this;
  pHVar2 = CreateWindowExA(local_14,*(LPCSTR *)
                                     ((&PTR_PTR_217b3154)[*(int *)((int)this + 0x14) * 2] + 0x44),
                           local_94,local_8,~-(uint)(pHVar2 != (HWND)0x0) & param_1,
                           ~-(uint)(pHVar2 != (HWND)0x0) & param_2,*(int *)((int)this + 0x88),
                           *(int *)((int)this + 0x8c),hWndParent,(HMENU)0x0,DAT_217b31a4,(LPVOID)0x0
                          );
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffef;
  *(HWND *)((int)this + 0xa0) = pHVar2;
  DAT_217b3e9c = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
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



void __thiscall FUN_217add00(void *this,HWND param_1)

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



LRESULT FUN_217add31(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4)

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
  piVar1 = DAT_217b3e9c;
  param_1 = (HWND)0x0;
  if (piVar2 == (int *)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)DAT_217b3e9c);
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
     iVar3 == 1)) goto LAB_217ade4a;
  if (param_2 == 2) {
    (**(code **)(*piVar2 + 0x5c))();
LAB_217ade62:
    param_1 = (HWND)(**(code **)(*piVar2 + 0x4c))(param_2,param_3,param_4);
  }
  else {
    if (param_2 != 0xf) goto LAB_217ade62;
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
LAB_217ade4a:
  (**(code **)(*piVar2 + 8))();
  return (LRESULT)param_1;
}



bool __thiscall FUN_217adecc(void *this,int param_1)

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
        iVar1 = FUN_217aeae2(this,-4);
        return -1 < iVar1;
      }
      pHVar2 = SetFocus(hWnd);
      return (bool)('\x01' - (pHVar2 != hWnd));
    }
  }
  else if ((((*(byte *)((int)this + 0xb0) & 8) != 0) || (param_1 == 0)) ||
          (iVar1 = FUN_217aeae2(this,-4), -1 < iVar1)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xac) + 0x58))(*(int **)((int)this + 0xac),param_1);
    return iVar1 == 0;
  }
  return false;
}



bool __cdecl FUN_217adf67(HWND param_1,uint param_2,WPARAM param_3,HWND param_4,LRESULT *param_5)

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
      goto LAB_217adf9e;
    }
    if (param_2 == 0x2b) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[5].unused;
      }
      goto LAB_217adf9e;
    }
    if (param_2 == 0x2c) {
      if (param_4 != (HWND)0x0) {
        hWnd = GetDlgItem(param_1,param_4[1].unused);
      }
      goto LAB_217adf9e;
    }
    if (param_2 == 0x2d) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[3].unused;
      }
      goto LAB_217adf9e;
    }
    if ((param_2 < 0x2e) || (0x2f < param_2)) goto LAB_217adf9e;
  }
  else {
    if (param_2 == 0x4e) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4->unused;
      }
      goto LAB_217adf9e;
    }
    if ((param_2 != 0x111) &&
       ((param_2 < 0x114 ||
        ((0x115 < param_2 &&
         ((param_2 < 0x133 ||
          ((0x138 < param_2 &&
           ((param_2 != 0x210 || (((short)param_3 != 1 && ((short)param_3 != 2))))))))))))))
    goto LAB_217adf9e;
  }
  hWnd = param_4;
LAB_217adf9e:
  if (hWnd != (HWND)0x0) {
    LVar1 = SendMessageA(hWnd,param_2 + 0x2000,param_3,(LPARAM)param_4);
    *param_5 = LVar1;
  }
  return hWnd != (HWND)0x0;
}



HWND FUN_217ae057(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

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
    bVar1 = FUN_217adecc(this,1);
    return (HWND)CONCAT31(extraout_var,bVar1);
  }
  bVar1 = FUN_217adf67(param_1,param_2,param_3,lParam,(LRESULT *)&param_4);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    param_4 = (HWND)DefWindowProcA(param_1,param_2,param_3,(LPARAM)lParam);
  }
  return param_4;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_217ae0e0(void *this,undefined4 param_1,ushort param_2,LONG *param_3)

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
      (**(code **)*puVar2)(puVar2,&DAT_217a2928,(int *)((int)this + 0x84));
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
  iVar3 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&DAT_217a3618,0,2,&local_34,&local_14,0,0);
  if (-1 < iVar3) {
    HVar4 = VariantChangeType((VARIANTARG *)&((_union_2683 *)local_24)->n2,
                              (VARIANTARG *)&local_14.n2,0,param_2);
    if (-1 < HVar4) {
      bVar1 = (&DAT_217a77c0)[param_2];
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



uint __fastcall FUN_217ae1a0(void *param_1)

{
  int iVar1;
  uint local_8;
  
  if ((*(byte *)((int)param_1 + 0xbc) & 4) == 0) {
    local_8 = 1;
    iVar1 = FUN_217ae0e0(param_1,0xfffffd3b,0xb,(LONG *)&local_8);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)((int)param_1 + 0xbc) =
         (local_8 & 1) << 6 | *(uint *)((int)param_1 + 0xbc) & 0xffffffbf | 4;
  }
  return ~*(uint *)((int)param_1 + 0xbc) >> 6 & 1;
}



int FUN_217ae499(int param_1,int param_2)

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



int FUN_217ae500(uint param_1,uint param_2)

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
  LPWSTR pWVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  LPWSTR local_8c [31];
  byte local_10;
  void *local_c;
  LPWSTR local_8;
  
  if (param_2 == 0xfffffff9) {
LAB_217ae576:
    uVar5 = FUN_217ae1a0((void *)(param_1 - 0x38));
    if (uVar5 != 0) {
      piVar2 = *(int **)(param_1 + 0x38);
      if ((piVar2 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2), iVar4 != -0x7fffbfff)) {
        return iVar4;
      }
      param_2 = -(uint)((void *)(param_1 - 0x38) != (void *)0x0) & param_1;
      iVar4 = lstrlenA(*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 4));
      uVar5 = iVar4 * 2 + 2;
      FUN_217a34bc(local_8c,uVar5);
      MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 4),-1,
                          local_8c[0],uVar5);
      local_8 = local_8c[0];
      lpMem = (undefined4 *)
              HeapAlloc(DAT_217b3020,0,
                        (uint)*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 0x4a)
                        << 4);
      if (lpMem == (undefined4 *)0x0) {
        if ((local_8c[0] != (LPWSTR)0x0) && ((local_10 & 1) != 0)) {
          HeapFree(DAT_217b3020,0,local_8c[0]);
        }
        return -0x7ff8fff2;
      }
      uVar5 = (uint)*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      if (uVar5 != 0) {
        puVar6 = *(undefined4 **)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 0x4c);
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
      local_c = (void *)(param_1 - 0x38);
      FUN_217af296(local_c,1);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
      uVar15 = 0;
      uVar14 = 0;
      uVar5 = (uint)*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      puVar12 = &param_2;
      uVar11 = 1;
      pWVar10 = local_8;
      puVar6 = lpMem;
      uVar13 = DAT_217b3700;
      iVar4 = GetSystemMetrics(1);
      iVar4 = iVar4 / 2;
      iVar7 = GetSystemMetrics(0);
      iVar7 = iVar7 / 2;
      pHVar8 = GetActiveWindow();
      local_8 = (LPWSTR)OleCreatePropertyFrame
                                  (pHVar8,iVar7,iVar4,pWVar10,uVar11,puVar12,uVar5,puVar6,uVar13,
                                   uVar14,uVar15);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
      FUN_217af296(local_c,0);
      HeapFree(DAT_217b3020,0,lpMem);
      if (local_8c[0] != (LPWSTR)0x0) {
        if ((local_10 & 1) != 0) {
          HeapFree(DAT_217b3020,0,local_8c[0]);
          return (int)local_8;
        }
        return (int)local_8;
      }
      return (int)local_8;
    }
LAB_217ae587:
    iVar4 = 0;
  }
  else {
    if ((int)param_2 < -5) {
LAB_217ae53d:
      if ((int)param_2 < 1) {
        return -0x7fffbfff;
      }
      iVar4 = (**(code **)(*(int *)(param_1 - 0x38) + 0x60))(param_2);
      if (iVar4 == 0x40180) {
        iVar4 = FUN_217aeae2((void *)(param_1 - 0x38),0);
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
          FUN_217af1fd((void *)(param_1 - 0x38),0);
        }
        goto LAB_217ae587;
      }
      if (param_2 != 0xffffffff) {
        if ((int)param_2 < 0) {
          return -0x7fffbfff;
        }
        if (1 < (int)param_2) goto LAB_217ae53d;
        goto LAB_217ae576;
      }
    }
    iVar4 = FUN_217aeae2((void *)(param_1 - 0x38),param_2);
  }
  return iVar4;
}



undefined4 FUN_217ae758(int param_1,uint *param_2)

{
  short sVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  LPVOID this;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  puVar2 = (&PTR_PTR_217b3154)[*(int *)(param_1 + -0x24) * 2];
  uVar4 = *(uint *)(puVar2 + 0x34);
  if (((uVar4 & 0x400) == 0) || ((uVar4 & 0x100) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar10 = (uint)*(ushort *)(puVar2 + 0x50);
  uVar4 = ~uVar4 >> 0xe & 1;
  sVar1 = *(short *)(puVar2 + 0x4a);
  iVar9 = (uint)(uVar4 != 0) + (-(uint)bVar3 & 4) + uVar10 + (uint)(sVar1 != 0);
  if (iVar9 == 0) {
    uVar5 = 0x80040180;
  }
  else {
    puVar6 = (undefined4 *)HeapAlloc(DAT_217b3020,0,iVar9 * 0x10);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      if (bVar3) {
        puVar7 = &DAT_217a77d0;
        puVar11 = puVar6;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        puVar7 = puVar6 + 0x10;
      }
      if (uVar4 != 0) {
        *puVar7 = 0xfffffffc;
        puVar7[1] = 0;
        puVar11 = puVar7 + 3;
        puVar7[2] = 0;
        puVar7 = puVar7 + 4;
        *puVar11 = 0;
      }
      if (sVar1 != 0) {
        *puVar7 = 1;
        puVar7[1] = 1000;
        puVar7[2] = 0;
        puVar7[3] = 2;
        puVar7 = puVar7 + 4;
      }
      if (uVar10 != 0) {
        puVar11 = *(undefined4 **)((&PTR_PTR_217b3154)[*(int *)(param_1 + -0x24) * 2] + 0x54);
        for (uVar4 = (uVar10 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      this = FUN_217a2afc(0x40,DAT_217b3020);
      if (this == (LPVOID)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_217b0b53(this,(undefined4 *)&DAT_217a7af8,iVar9,0x10,puVar6,&LAB_217b0985);
      }
      uVar4 = -(uint)(puVar6 != (undefined4 *)0x0) & (uint)(puVar6 + 5);
      *param_2 = uVar4;
      if (uVar4 != 0) {
        (**(code **)(*(int *)(param_1 + -0x38) + 0x28))();
        return 0;
      }
    }
    uVar5 = 0x8007000e;
  }
  return uVar5;
}



int FUN_217ae8f6(int param_1,uint param_2,int *param_3)

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
    FUN_217a2844(param_3,&local_c);
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



int __thiscall FUN_217aeae2(void *this,int param_1)

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
LAB_217aedca:
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)((int)this + 0xac);
    if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x74) == 0)) {
      if (*(short *)((&PTR_PTR_217b3154)[*(int *)((int)this + 0x14) * 2] + 0x3e) != 0) {
        (**(code **)*puVar1)(puVar1,&DAT_217a7b18,piVar4);
      }
      if ((*piVar4 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_217a79c8,(int)this + 0x74),
         iVar3 < 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x6c))
                (*(undefined4 **)((int)this + 0x6c),&DAT_217a7b08,&local_8);
    }
    else {
      local_8 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar5 = *(uint *)((int)this + 0xb0);
    if (((uVar5 & 2) != 0) && ((uVar5 & 4) != 0)) goto LAB_217aed2e;
    iVar3 = 1;
    local_c = uVar5 >> 1 & 1;
    if (local_c == 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) goto LAB_217aeb7e;
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
                            (*(undefined4 **)((int)this + 0x6c),&DAT_217a79c8,(int)this + 0x74);
          if (iVar3 < 0) goto LAB_217aebeb;
        }
        goto LAB_217aeb7e;
      }
    }
    else {
      iVar3 = 0;
LAB_217aeb7e:
      if (iVar3 == 0) {
LAB_217aec08:
        if (local_c == 0) {
          if (local_8 == (int *)0x0) {
            iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x18))(*(int **)((int)this + 0x74));
          }
          else {
            iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,&local_10,*piVar4 != 0);
          }
          if (iVar3 < 0) goto LAB_217aebeb;
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
            local_1c = local_24 - local_2c;
            local_18 = local_20 - local_28;
                    // WARNING: Load size is inaccurate
            iVar3 = (**(code **)(*this + 100))(&local_1c);
            if (iVar3 != 0) {
              *(int *)((int)this + 0x88) = local_1c;
              *(int *)((int)this + 0x8c) = local_18;
            }
            (**(code **)(*(int *)((int)this + 0x40) + 0x1c))((int)this + 0x40,&local_2c,local_3c);
            if ((local_c == 0) && (*(int *)((int)this + 0xac) == 0)) {
              FUN_217add00(this,local_14);
              iVar3 = FUN_217adacc(this,local_2c,local_28,local_10);
              if (iVar3 == 0) goto LAB_217aeb97;
              piVar4 = *(int **)((int)this + 0x6c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x18))(piVar4);
              }
            }
LAB_217aed2e:
            piVar4 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            if ((*(byte *)((int)this + 0xb0) & 4) == 0) {
              FUN_217af1fd(this,1);
            }
            if (((param_1 == 0) || (param_1 == -4)) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
              *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 8;
              piVar4 = *(int **)((int)this + 0xac);
              if (piVar4 == (int *)0x0) {
                piVar4 = *(int **)((int)this + 0x74);
              }
              (**(code **)(*piVar4 + 0x1c))(piVar4);
              FUN_217adecc(this,1);
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
            goto LAB_217aedca;
          }
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x14))(*(int **)((int)this + 0x74));
        if (iVar3 == 0) goto LAB_217aec08;
        if (-1 < iVar3) goto LAB_217aebeb;
LAB_217aeb97:
        iVar3 = -0x7fffbffb;
      }
    }
LAB_217aebeb:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffd;
  }
  return iVar3;
}



undefined4 FUN_217aeddf(int *param_1)

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



undefined4 FUN_217aee65(int param_1)

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



undefined4 FUN_217aeeaf(int param_1,RECT *param_2,RECT *param_3)

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
FUN_217af07b(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

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



undefined4 FUN_217af0c9(int param_1,undefined4 param_2)

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
      cVar1 = FUN_217b094a();
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



HRESULT FUN_217af130(int param_1,ITypeLib *param_2)

{
  ITypeLib *ppTinfo;
  HRESULT HVar1;
  
  ppTinfo = param_2;
  param_2->lpVtbl = (ITypeLibVtbl *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  HVar1 = LoadRegTypeLib((GUID *)s__6z_Licenses_217b3708._0_4_,
                         *(WORD *)((&PTR_PTR_217b3154)[*(int *)(param_1 + -0x48) * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_217b3154)[*(int *)(param_1 + -0x48) * 2] + 0x1c),
                         (uint)(ushort)DAT_217b3700,&param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (-1 < HVar1) {
    HVar1 = (*param_2->lpVtbl->GetTypeInfoOfGuid)
                      (param_2,*(GUID **)(&PTR_PTR_217b3154)[*(int *)(param_1 + -0x48) * 2],
                       (ITypeInfo **)ppTinfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (-1 < HVar1) {
      HVar1 = 0;
    }
  }
  return HVar1;
}



void __fastcall FUN_217af1ba(int param_1)

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



void __thiscall FUN_217af1fd(void *this,uint param_1)

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



void __thiscall FUN_217af296(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_1 == 0);
  }
  return;
}



int FUN_217af2c1(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"Contents",0,0x10,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x14))((int *)(param_1 + -4),param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



int FUN_217af302(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,L"Contents",0x1011,0,0,&param_2);
  if (-1 < iVar1) {
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
    iVar1 = FUN_217a57e5((void *)(param_1 + -0x54),param_2);
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfe;
    *(uint *)(param_1 + 0x5c) = (uint)(-1 < iVar1) << 5 | *(uint *)(param_1 + 0x5c) & 0xffffffdf;
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



undefined4
FUN_217af38f(int param_1,int param_2,undefined4 param_3,int *param_4,LPCWSTR param_5,HDC param_6,
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
      param_6 = FUN_217af6ae(param_5);
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



undefined4 FUN_217af5b2(int param_1,undefined4 param_2,int *param_3)

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
    FUN_217a553a(local_14,param_3);
    FUN_217a553a(local_c,param_3 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
FUN_217af61e(undefined4 param_1,int param_2,RECT *param_3,LONG param_4,LONG param_5,
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
FUN_217af64f(undefined4 param_1,int param_2,RECT *param_3,RECT *param_4,undefined4 param_5,
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



HDC __cdecl FUN_217af6ae(LPCWSTR param_1)

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
    pHVar2 = CreateDCA(s_DISPLAY_217b3a44,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
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
    FUN_217a34bc(local_118,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6),-1,local_118[0],
                        (int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = local_118[0];
    iVar3 = lstrlenW((LPCWSTR)local_8);
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_217a34bc(local_98,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)local_8,-1,local_98[0],(int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_18 = local_98[0];
    iVar3 = lstrlenW(local_10);
    uVar4 = iVar3 * 2 + 2;
    FUN_217a34bc(local_198,uVar4);
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
        local_8 = (DEVMODEA *)HeapAlloc(DAT_217b3020,0,(ushort)param_1[0x23] + 0x9c);
        if (local_8 == (DEVMODEA *)0x0) {
          if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_198[0]);
          }
          if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_98[0]);
          }
          if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_118[0]);
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
      HeapFree(DAT_217b3020,0,local_8);
    }
    if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_198[0]);
    }
    if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_98[0]);
    }
    if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_118[0]);
    }
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_217af986(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_217a2220;
  InterlockedDecrement(&DAT_217b3000);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_217af9ba(void *this,byte param_1)

{
  FUN_217a2720((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_217af9e2(undefined4 param_1,undefined4 *param_2)

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



bool FUN_217af9fc(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = *(char **)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x14) * 2] + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}



undefined4 * __thiscall FUN_217afa4a(void *this,byte param_1)

{
  FUN_217a26dd((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



LRESULT __thiscall FUN_217afc99(void *this,UINT param_1,WPARAM param_2,LRESULT param_3)

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



undefined4 * __thiscall FUN_217afcda(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_217a2eb1(this,param_1,this);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_217a78a0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_217a7888;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_217a7848;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_217afd1a(void *this,byte param_1)

{
  FUN_217a9863((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_217afd42(void *this,int *param_1,undefined4 *param_2)

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
    pcVar3 = &DAT_217a7b68;
    piVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == (char)*piVar4;
      pcVar3 = pcVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) goto LAB_217afd6f;
LAB_217afd87:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x14U);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = piVar4;
    uVar1 = 0;
  }
  else {
LAB_217afd6f:
    if (*param_1 == 0x1e44665) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = &DAT_217a7b58;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == (char)*piVar4;
        pcVar3 = pcVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (bVar5);
      if (bVar5) goto LAB_217afd87;
    }
    uVar1 = FUN_217a4047(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_217afdb5(int param_1,int *param_2)

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



uint FUN_217afde2(int *param_1,HWND param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_217b0527((int)(param_1 + -5));
  if (-1 < (int)uVar1) {
    uVar1 = FUN_217b06cc((int)(param_1 + -5));
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



int FUN_217afe34(int param_1)

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



undefined4 FUN_217afe7c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  tagRECT local_14;
  
  FUN_217b0527(param_1 + -0x14);
  puVar4 = param_2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_217ac60a(*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0xc) * 2] + 0x1a),
                       (LPWSTR)0x1);
  param_2[1] = uVar1;
  uVar1 = FUN_217ac60a(*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0xc) * 2] + 0x1c),
                       (LPWSTR)0x1);
  param_2[4] = uVar1;
  pWVar2 = FUN_217ac59c(*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0xc) * 2] + 0x20),
                        (LPWSTR)0x1);
  iVar3 = *(int *)(param_1 + 0xc);
  param_2[5] = pWVar2;
  param_2[6] = *(undefined4 *)((&PTR_PTR_217b3154)[iVar3 * 2] + 0x24);
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



undefined4 FUN_217aff6c(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (((uint)param_1[5] >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  FUN_217b05d7((int)(param_1 + -5));
  uVar4 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = HeapAlloc(DAT_217b3020,0,param_2 << 2);
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
        uVar2 = FUN_217b06cc((int)(param_1 + -5));
      }
    }
  }
  return uVar2;
}



int FUN_217b0066(int param_1)

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



int FUN_217b00c4(int param_1,LPCWSTR param_2)

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
  local_c = FUN_217ad719(*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0xc) * 2] + 0x20));
  if (local_c != (char *)0x0) {
    iVar2 = lstrcmpiA(local_c,&DAT_217b3a4c);
    if (iVar2 == 0) {
      lstrcpyA(local_190,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      iVar2 = FUN_217b0830(local_190,
                           *(undefined4 *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x24),
                           &param_1);
      local_8 = (uint)(-1 < iVar2);
      if (param_1 != 0) goto LAB_217b020a;
      iVar2 = lstrlenW(param_2);
      local_8 = iVar2 * 2 + 2;
      FUN_217a34bc(local_8c,local_8);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_217b3a50);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      local_8 = FUN_217b0d52(*(undefined4 *)(iVar1 + 8),local_190,0xf,
                             *(undefined4 *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x24))
      ;
    }
    else {
      iVar2 = lstrcmpiA(local_c,&DAT_217b3a54);
      if (iVar2 != 0) goto LAB_217b020a;
      iVar2 = lstrlenW(param_2);
      cbMultiByte = iVar2 * 2 + 2;
      FUN_217a34bc(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_217b3a58);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      lstrcatA(local_190,s_>LangRef_217b3a5c);
      local_8 = WinHelpA(*(HWND *)(iVar1 + 8),local_190,1,
                         *(ULONG_PTR *)((&PTR_PTR_217b3154)[*(int *)(iVar1 + 0xc) * 2] + 0x24));
    }
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_217b3020,0,local_8c[0]);
    }
  }
LAB_217b020a:
  return (-(uint)(local_8 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 __cdecl FUN_217b0494(HWND param_1,HWND param_2,UINT param_3)

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



undefined4 FUN_217b04fd(int param_1,WPARAM param_2)

{
  undefined4 local_8;
  
  local_8 = 0x80004001;
  SendMessageA(*(HWND *)(param_1 + 8),0x466,param_2,(LPARAM)&local_8);
  return local_8;
}



uint __fastcall FUN_217b0527(int param_1)

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
    lpName = (LPCSTR)(uint)*(ushort *)((&PTR_PTR_217b3154)[*(int *)(param_1 + 0x20) * 2] + 0x18);
    pHVar1 = FUN_217b072c(param_1);
    hResInfo = FindResourceA(pHVar1,lpName,lpType);
    if (hResInfo != (HRSRC)0x0) {
      pHVar1 = FUN_217b072c(param_1);
      hResData = LoadResource(pHVar1,hResInfo);
      if ((hResData != (HGLOBAL)0x0) &&
         (lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData), lpTemplate != (LPCDLGTEMPLATEA)0x0))
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
        dwInitParam = 0;
        lpDialogFunc = FUN_217b063c;
        DAT_217b3ea0 = param_1;
        hWndParent = FUN_217b0a51();
        CreateDialogIndirectParamA(DAT_217b31a4,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
        DAT_217b3ea0 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
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



void __fastcall FUN_217b05d7(int param_1)

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
    HeapFree(DAT_217b3020,0,*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 FUN_217b063c(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 == (int *)0xffffffff) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      SetWindowLongA(param_1,-0x15,(LONG)DAT_217b3ea0);
      piVar1 = DAT_217b3ea0;
      DAT_217b3ea0[7] = (int)param_1;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



void __thiscall FUN_217b0686(void *this,uint *param_1)

{
  *param_1 = 0;
  FUN_217b0696(this,param_1);
  return;
}



undefined4 __thiscall FUN_217b0696(void *this,uint *param_1)

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



undefined4 __fastcall FUN_217b06cc(int param_1)

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



void __fastcall FUN_217b0711(int param_1)

{
  int *piVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x217b073a)

HINSTANCE __fastcall FUN_217b072c(int param_1)

{
  int *piVar1;
  HINSTANCE pHVar2;
  
  pHVar2 = DAT_217b31a0;
  if (DAT_217b31a0 == (HINSTANCE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    if ((DAT_217b36d8 == 0) && (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_217b3700);
      DAT_217b36d8 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
    pHVar2 = FUN_217a45b1(0);
  }
  return pHVar2;
}



int __cdecl FUN_217b078c(undefined4 *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *local_8;
  
  HVar2 = 0;
  local_8 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b3004 == (int *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_217a7968,(LPUNKNOWN)0x0,1,(IID *)&DAT_217a7978,
                             &DAT_217b3004);
    if (-1 < HVar2) {
      if (DAT_217b3004 == (int *)0x0) {
        HVar2 = -0x7fffbffb;
      }
      else {
        iVar1 = (**(code **)*DAT_217b3004)(DAT_217b3004,&DAT_217a7958,&local_8);
        if (-1 < iVar1) {
          (**(code **)(*local_8 + 0x10))(local_8,DAT_217b3700);
        }
        HVar2 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (-1 < HVar2) {
    (**(code **)(*DAT_217b3004 + 4))(DAT_217b3004);
    *param_1 = DAT_217b3004;
  }
  return HVar2;
}



int __cdecl FUN_217b0830(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPWSTR bstrString;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_217b078c(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x28))(local_8,0);
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      bstrString = FUN_217ac59c(param_1,(LPWSTR)0x0);
      iVar1 = (**(code **)(*local_8 + 0x24))(local_8,bstrString,param_2,4);
      SysFreeString(bstrString);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}



char FUN_217b094a(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



HWND __cdecl FUN_217b09af(int param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  ATOM AVar1;
  HWND pHVar2;
  int iVar3;
  WNDCLASSA *pWVar4;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b31dc == '\0') {
    pWVar4 = &local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4->style = 0;
      pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
    }
    local_2c.lpfnWndProc = FUN_217ae057;
    local_2c.hInstance = DAT_217b31a4;
    local_2c.lpszClassName = "CtlFrameWork_ReflectWindow";
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
      return (HWND)0x0;
    }
    DAT_217b31dc = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  pHVar2 = CreateWindowExA(0,"CtlFrameWork_ReflectWindow",(LPCSTR)0x0,
                           -(uint)(param_1 != 0) & 0x10000000 | 0x44000000,param_3,param_4,*param_5,
                           param_5[1],param_2,(HMENU)0x0,DAT_217b31a4,(LPVOID)0x0);
  return pHVar2;
}



HWND FUN_217b0a51(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (DAT_217b31e0 == (HWND)0x0) {
    pWVar3 = &local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->style = 0;
      pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
    }
    local_2c.lpfnWndProc = (WNDPROC)PTR_LAB_217b3b10;
    if (PTR_LAB_217b3b10 == (undefined *)0x0) {
      local_2c.lpfnWndProc = FUN_217b0ae0;
    }
    local_2c.lpszClassName = s_CtlFrameWork_Parking_217b3a68;
    local_2c.hInstance = DAT_217b31a4;
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 != 0) {
      DAT_217b31e0 = CreateWindowExA(0,s_CtlFrameWork_Parking_217b3a80,(LPCSTR)0x0,0x80000000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_217b31a4,(LPVOID)0x0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  return DAT_217b31e0;
}



LRESULT FUN_217b0ae0(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  LRESULT local_8;
  
  bVar1 = FUN_217adf67(param_1,param_2,param_3,param_4,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  return local_8;
}



undefined4 * __thiscall FUN_217b0b2b(void *this,byte param_1)

{
  FUN_217b0bb4((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_217b3020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_217b0b53(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  FUN_217a2eb1(this,(undefined4 *)0x0,-(uint)(this != (void *)0x0) & (int)this + 0x14U);
  *(undefined ***)((int)this + 0x14U) = &PTR_LAB_217a7938;
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
  *(undefined ***)this = &PTR_FUN_217a7900;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_217a7918;
  return (undefined4 *)this;
}



void __fastcall FUN_217b0bb4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  *param_1 = &PTR_FUN_217a7900;
  param_1[5] = &PTR_LAB_217a7918;
  if (iVar1 == 0) {
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      HeapFree(DAT_217b3020,0,(LPVOID)param_1[0xd]);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 8))(iVar1 + 0x14);
  }
  *param_1 = &PTR_FUN_217a2220;
  InterlockedDecrement(&DAT_217b3000);
  return;
}



bool FUN_217b0c5c(int param_1,uint param_2,int param_3,uint *param_4)

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



undefined4 FUN_217b0ced(int *param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  LPVOID this;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pvVar1 = DAT_217b3020;
  puVar3 = (undefined4 *)0x0;
  *param_2 = 0;
  this = FUN_217a2afc(0x40,pvVar1);
  if (this != (LPVOID)0x0) {
    puVar3 = FUN_217b0b53(this,param_1 + 1,param_1[5],param_1[6],param_1[8],param_1[10]);
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



int FUN_217b0d52(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BYTE local_108 [260];
  
  if ((DAT_217b3af8 == (HMODULE)0x0) && (DAT_217b3b00 == 0)) {
    bVar1 = FUN_217b0deb(local_108);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_217b3af8 = LoadLibraryA((LPCSTR)local_108);
    }
    if (DAT_217b3af8 != (HMODULE)0x0) goto LAB_217b0daf;
    DAT_217b3af8 = LoadLibraryA("hhctrl.ocx");
    if (DAT_217b3af8 != (HMODULE)0x0) goto LAB_217b0daf;
LAB_217b0dca:
    DAT_217b3b00 = 1;
    iVar2 = 0;
  }
  else {
LAB_217b0daf:
    if (DAT_217b3ea4 == (FARPROC)0x0) {
      DAT_217b3ea4 = GetProcAddress(DAT_217b3af8,(LPCSTR)0xe);
      if (DAT_217b3ea4 == (FARPROC)0x0) goto LAB_217b0dca;
    }
    iVar2 = (*DAT_217b3ea4)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



bool FUN_217b0deb(LPBYTE param_1)

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



void __cdecl FUN_217b0e4a(uint param_1,ushort param_2)

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
  pHVar1 = FUN_217a45b1(0);
  HVar2 = GetErrorInfo(0,&local_8);
  if ((HVar2 < 0) || (local_8 == (IErrorInfo *)0x0)) {
    LoadStringA(pHVar1,(uint)param_2,local_250,0x100);
    if (param_1 == 0x8007000e) {
      pCVar4 = local_150;
      iVar5 = 0x100;
      UVar3 = 7;
      pHVar1 = FUN_217a45b1(0);
      LoadStringA(pHVar1,UVar3,pCVar4,iVar5);
    }
    else {
      local_150[0] = '\0';
    }
  }
  else {
    HVar2 = (*local_8->lpVtbl->GetDescription)(local_8,&local_c);
    if (HVar2 < 0) goto LAB_217b0f45;
    HVar2 = (*local_8->lpVtbl->GetSource)(local_8,&local_10);
    if (HVar2 < 0) goto LAB_217b0f45;
    WideCharToMultiByte(0,0,local_c,-1,local_150,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    WideCharToMultiByte(0,0,local_10,-1,local_250,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  if (local_150[0] == '\0') {
    pCVar4 = local_50;
    iVar5 = 0x40;
    UVar3 = 0x7919;
    pHVar1 = FUN_217a45b1(0);
    LoadStringA(pHVar1,UVar3,pCVar4,iVar5);
    wsprintfA(local_150,local_50,param_1 & 0xffff);
  }
  MessageBeep(0x30);
  pCVar4 = local_250;
  UVar3 = 0x40030;
  lpText = local_150;
  hWnd = GetActiveWindow();
  MessageBoxA(hWnd,lpText,pCVar4,UVar3);
LAB_217b0f45:
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



HRESULT __cdecl FUN_217b0fbc(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HRESULT HVar2;
  HWND pHVar3;
  int *piVar4;
  ITypeInfo *pIVar5;
  uint uVar6;
  ITypeLib *local_c;
  ITypeInfo *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  HVar2 = LoadRegTypeLib((GUID *)s__6z_Licenses_217b3708._0_4_,
                         *(WORD *)((&PTR_PTR_217b3154)[param_2 * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_217b3154)[param_2 * 2] + 0x1c),
                         (uint)(ushort)DAT_217b3700,&local_c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_217b3008);
  if (-1 < HVar2) {
    piVar4 = (int *)(param_3 + 4);
    iVar1 = *(int *)(param_3 + 4);
    while (iVar1 != 0) {
      HVar2 = (*local_c->lpVtbl->GetTypeInfoOfGuid)(local_c,(GUID *)*piVar4,&local_8);
      if (HVar2 < 0) goto LAB_217b1062;
      uVar6 = 0;
      pIVar5 = local_8;
      pHVar3 = GetDlgItem(param_1,(uint)*(ushort *)(piVar4 + -1));
      HVar2 = FUN_217b1071(pHVar3,(int *)pIVar5,uVar6);
      (*local_8->lpVtbl->Release)(local_8);
      if (HVar2 < 0) goto LAB_217b1062;
      piVar4 = piVar4 + 2;
      iVar1 = *piVar4;
    }
    HVar2 = 0;
LAB_217b1062:
    (*local_c->lpVtbl->Release)(local_c);
  }
  return HVar2;
}



int __cdecl FUN_217b1071(HWND param_1,int *param_2,uint param_3)

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
        if (iVar2 < 0) goto LAB_217b11bf;
        if ((*(byte *)(local_c + 7) & 0x40) == 0) {
          local_8 = (LPCWSTR)0x0;
          (**(code **)(*piVar1 + 0x30))(piVar1,*local_c,&local_8,0,0,0);
          pWVar3 = local_8;
          if (local_8 == (LPCWSTR)0x0) {
            pWVar3 = (LPCWSTR)&DAT_217b3b08;
          }
          iVar2 = lstrlenW(pWVar3);
          cbMultiByte = iVar2 * 2 + 2;
          FUN_217a34bc(local_90,cbMultiByte);
          pWVar3 = local_8;
          if (local_8 == (LPCWSTR)0x0) {
            pWVar3 = (LPCWSTR)&DAT_217b3b0c;
          }
          WideCharToMultiByte(0,0,pWVar3,-1,local_90[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
          wsprintfA(local_110,s__ld____s_217b3a98,*(undefined4 *)(local_c[2] + 8),local_90[0]);
          SendMessageA(param_1,0x143,0,(LPARAM)local_110);
          SysFreeString(local_8);
          if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
            HeapFree(DAT_217b3020,0,local_90[0]);
          }
        }
        (**(code **)(*piVar1 + 0x54))(piVar1,local_c);
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < (int)param_3);
    }
    iVar2 = 0;
LAB_217b11bf:
    (**(code **)(*piVar1 + 0x4c))(piVar1,local_10);
  }
  return iVar2;
}



void __cdecl FUN_217b11cf(HWND param_1,UINT param_2,int param_3,int param_4)

{
  HINSTANCE pHVar1;
  HWND wParam;
  UINT uID;
  CHAR *pCVar2;
  int iVar3;
  LPARAM lParam;
  CHAR local_284 [256];
  BYTE local_184 [128];
  CHAR local_104 [256];
  
  if (param_4 != 0) {
    pCVar2 = local_104;
    iVar3 = 0x100;
    uID = 0x791a;
    pHVar1 = FUN_217a45b1(0);
    LoadStringA(pHVar1,uID,pCVar2,iVar3);
    FUN_217b12b1(param_1,param_3,local_184,0x80);
    wsprintfA(local_284,local_104,local_184);
    pCVar2 = local_104;
    local_104[0] = '\0';
    iVar3 = 0x100;
    pHVar1 = FUN_217a45b1(0);
    LoadStringA(pHVar1,param_2,pCVar2,iVar3);
    MessageBeep(0x30);
    MessageBoxA((HWND)0x0,local_284,local_104,0x2030);
  }
  SendDlgItemMessageA(param_1,param_3,0xb1,0,-0x10000);
  lParam = 1;
  wParam = GetDlgItem(param_1,param_3);
  PostMessageA(param_1,0x28,(WPARAM)wParam,lParam);
  return;
}



void __cdecl FUN_217b12b1(HWND param_1,int param_2,BYTE *param_3,int param_4)

{
  BYTE BVar1;
  HWND pHVar2;
  BOOL BVar3;
  BYTE *pBVar4;
  UINT uCmd;
  
  uCmd = 3;
  pBVar4 = param_3;
  pHVar2 = GetDlgItem(param_1,param_2);
  pHVar2 = GetWindow(pHVar2,uCmd);
  GetWindowTextA(pHVar2,(LPSTR)pBVar4,param_4);
  BVar1 = *param_3;
  pBVar4 = param_3;
  while (BVar1 != '\0') {
    BVar1 = *param_3;
    if (((BVar1 != '&') || (param_3[1] == '&')) && ((BVar1 != ':' || (param_3[1] != '\0')))) {
      if (param_3 != pBVar4) {
        *pBVar4 = BVar1;
        BVar3 = IsDBCSLeadByte(*param_3);
        if (BVar3 != 0) {
          pBVar4[1] = param_3[1];
        }
      }
      pBVar4 = (BYTE *)CharNextA((LPCSTR)pBVar4);
    }
    param_3 = (BYTE *)CharNextA((LPCSTR)param_3);
    BVar1 = *param_3;
  }
  *pBVar4 = '\0';
  return;
}



int FUN_217b132c(LPCWSTR param_1,LPCWSTR param_2,int param_3,int param_4,int param_5)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  int iVar2;
  LPSTR local_8c [31];
  byte local_10;
  LPSTR local_c;
  uint local_8;
  
  if ((param_1 == (LPCWSTR)0x0) || (*param_1 == L'\0')) {
    if ((param_2 == (LPCWSTR)0x0) || (*param_2 == L'\0')) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  else if ((param_2 == (LPCWSTR)0x0) || (*param_2 == L'\0')) {
    iVar1 = 3;
  }
  else {
    local_8 = (uint)(param_3 == 0);
    if (DAT_217b31ac == 0) {
      iVar1 = lstrlenW(param_1);
      iVar1 = iVar1 * 2 + 2;
      iVar2 = lstrlenW(param_2);
      iVar2 = iVar2 * 2 + 2;
      FUN_217a34bc(local_8c,iVar2 + iVar1);
      lpMultiByteStr = local_8c[0] + iVar1;
      local_c = local_8c[0];
      param_1 = (LPCWSTR)WideCharToMultiByte(0,0,param_1,param_4,local_8c[0],iVar1,(LPCSTR)0x0,
                                             (LPBOOL)0x0);
      iVar1 = WideCharToMultiByte(0,0,param_2,param_5,lpMultiByteStr,iVar2,(LPCSTR)0x0,(LPBOOL)0x0);
      if (param_4 == -1) {
        param_1 = (LPCWSTR)0xffffffff;
      }
      if (param_5 == -1) {
        iVar1 = -1;
      }
      iVar1 = CompareStringA(0x400,local_8,local_c,(int)param_1,lpMultiByteStr,iVar1);
      if ((local_8c[0] != (LPSTR)0x0) && ((local_10 & 1) != 0)) {
        HeapFree(DAT_217b3020,0,local_8c[0]);
      }
    }
    else {
      iVar1 = CompareStringW(0x400,local_8,param_1,param_4,param_2,param_5);
    }
  }
  return iVar1;
}



DWORD CommDlgExtendedError(void)

{
  DWORD DVar1;
  
                    // WARNING: Could not recover jumptable at 0x217b146b. Too many branches
                    // WARNING: Treating indirect jump as call
  DVar1 = CommDlgExtendedError();
  return DVar1;
}



BOOL GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x217b1471. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}



BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x217b1477. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}



BOOL ChooseColorA(LPCHOOSECOLORA param_1)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x217b147d. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ChooseColorA(param_1);
  return BVar1;
}



BOOL ChooseFontA(LPCHOOSEFONTA param_1)

{
  BOOL BVar1;
  
                    // WARNING: Could not recover jumptable at 0x217b1483. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ChooseFontA(param_1);
  return BVar1;
}


