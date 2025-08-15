typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
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

typedef struct tagDRAWTEXTPARAMS tagDRAWTEXTPARAMS, *PtagDRAWTEXTPARAMS;

struct tagDRAWTEXTPARAMS {
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
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

typedef struct tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;

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

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

typedef struct tagPALETTEENTRY PALETTEENTRY;

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct _devicemodeA DEVMODEA;

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

typedef void *HANDLE;

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

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

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

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

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

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef WCHAR *LPWCH;

typedef WCHAR *LPCWSTR;

typedef long HRESULT;

typedef LONG *PLONG;

typedef CHAR *LPCH;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef short SHORT;

typedef DWORD ACCESS_MASK;

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

typedef struct IPersistStreamVtbl IPersistStreamVtbl, *PIPersistStreamVtbl;

typedef struct IPersistStream IPersistStream, *PIPersistStream;

struct IPersistStreamVtbl {
    HRESULT (*QueryInterface)(struct IPersistStream *, IID *, void **);
    ULONG (*AddRef)(struct IPersistStream *);
    ULONG (*Release)(struct IPersistStream *);
    HRESULT (*GetClassID)(struct IPersistStream *, CLSID *);
    HRESULT (*IsDirty)(struct IPersistStream *);
    HRESULT (*Load)(struct IPersistStream *, struct IStream *);
    HRESULT (*Save)(struct IPersistStream *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IPersistStream *, ULARGE_INTEGER *);
};

struct IPersistStream {
    struct IPersistStreamVtbl *lpVtbl;
};

typedef struct IEnumFORMATETCVtbl IEnumFORMATETCVtbl, *PIEnumFORMATETCVtbl;

typedef struct IEnumFORMATETC IEnumFORMATETC, *PIEnumFORMATETC;

struct IEnumFORMATETCVtbl {
    HRESULT (*QueryInterface)(struct IEnumFORMATETC *, IID *, void **);
    ULONG (*AddRef)(struct IEnumFORMATETC *);
    ULONG (*Release)(struct IEnumFORMATETC *);
    HRESULT (*Next)(struct IEnumFORMATETC *, ULONG, FORMATETC *, ULONG *);
    HRESULT (*Skip)(struct IEnumFORMATETC *, ULONG);
    HRESULT (*Reset)(struct IEnumFORMATETC *);
    HRESULT (*Clone)(struct IEnumFORMATETC *, struct IEnumFORMATETC **);
};

struct IEnumFORMATETC {
    struct IEnumFORMATETCVtbl *lpVtbl;
};

typedef struct IDataObjectVtbl IDataObjectVtbl, *PIDataObjectVtbl;

typedef struct IDataObject IDataObject, *PIDataObject;

struct IDataObject {
    struct IDataObjectVtbl *lpVtbl;
};

struct IDataObjectVtbl {
    HRESULT (*QueryInterface)(struct IDataObject *, IID *, void **);
    ULONG (*AddRef)(struct IDataObject *);
    ULONG (*Release)(struct IDataObject *);
    HRESULT (*GetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*GetDataHere)(struct IDataObject *, FORMATETC *, STGMEDIUM *);
    HRESULT (*QueryGetData)(struct IDataObject *, FORMATETC *);
    HRESULT (*GetCanonicalFormatEtc)(struct IDataObject *, FORMATETC *, FORMATETC *);
    HRESULT (*SetData)(struct IDataObject *, FORMATETC *, STGMEDIUM *, BOOL);
    HRESULT (*EnumFormatEtc)(struct IDataObject *, DWORD, struct IEnumFORMATETC **);
    HRESULT (*DAdvise)(struct IDataObject *, FORMATETC *, DWORD, struct IAdviseSink *, DWORD *);
    HRESULT (*DUnadvise)(struct IDataObject *, DWORD);
    HRESULT (*EnumDAdvise)(struct IDataObject *, struct IEnumSTATDATA **);
};

typedef struct IStream *LPSTREAM;

typedef STGMEDIUM *LPSTGMEDIUM;

typedef struct IDataObject *LPDATAOBJECT;

typedef struct IPersistStream *LPPERSISTSTREAM;

typedef ULONG_PTR SIZE_T;

typedef struct IDropSource IDropSource, *PIDropSource;

typedef struct IDropSourceVtbl IDropSourceVtbl, *PIDropSourceVtbl;

struct IDropSourceVtbl {
    HRESULT (*QueryInterface)(struct IDropSource *, IID *, void **);
    ULONG (*AddRef)(struct IDropSource *);
    ULONG (*Release)(struct IDropSource *);
    HRESULT (*QueryContinueDrag)(struct IDropSource *, BOOL, DWORD);
    HRESULT (*GiveFeedback)(struct IDropSource *, DWORD);
};

struct IDropSource {
    struct IDropSourceVtbl *lpVtbl;
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

typedef struct IDropTarget IDropTarget, *PIDropTarget;

typedef struct IDropTarget *LPDROPTARGET;

typedef struct IDropTargetVtbl IDropTargetVtbl, *PIDropTargetVtbl;

struct IDropTargetVtbl {
    HRESULT (*QueryInterface)(struct IDropTarget *, IID *, void **);
    ULONG (*AddRef)(struct IDropTarget *);
    ULONG (*Release)(struct IDropTarget *);
    HRESULT (*DragEnter)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
    HRESULT (*DragOver)(struct IDropTarget *, DWORD, POINTL, DWORD *);
    HRESULT (*DragLeave)(struct IDropTarget *);
    HRESULT (*Drop)(struct IDropTarget *, struct IDataObject *, DWORD, POINTL, DWORD *);
};

struct IDropTarget {
    struct IDropTargetVtbl *lpVtbl;
};

typedef struct IOleAdviseHolder *LPOLEADVISEHOLDER;

typedef struct IDropSource *LPDROPSOURCE;

typedef struct tagPOINT *LPPOINT;

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef struct HMETAFILE__ HMETAFILE__, *PHMETAFILE__;

struct HMETAFILE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HPEN__ HPEN__, *PHPEN__;

struct HPEN__ {
    int unused;
};

typedef int (*FARPROC)(void);

typedef WORD ATOM;

typedef struct HRGN__ HRGN__, *PHRGN__;

typedef struct HRGN__ *HRGN;

struct HRGN__ {
    int unused;
};

typedef struct tagRECT *LPRECT;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef struct HMETAFILE__ *HMETAFILE;

typedef struct HKEY__ *HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef DWORD COLORREF;

typedef struct HFONT__ *HFONT;

typedef DWORD *LPDWORD;

typedef struct HPEN__ *HPEN;

typedef struct HPALETTE__ *HPALETTE;

typedef int *LPINT;

typedef struct _FILETIME *PFILETIME;

typedef struct tagSIZE *LPSIZE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef HKEY *PHKEY;

typedef WORD *LPWORD;

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

typedef enum tagREGKIND {
    REGKIND_DEFAULT=0,
    REGKIND_REGISTER=1,
    REGKIND_NONE=2
} tagREGKIND;

typedef enum tagREGKIND REGKIND;

typedef struct IUnknown *LPUNKNOWN;



int DAT_20dc2000;
undefined *DAT_20dc2004;
uint DAT_20dc200c;
undefined DAT_20dc2018;
undefined DAT_20dc2014;
undefined DAT_20dc2010;
LPSTR DAT_20dc2020;
LPSTR DAT_20dc2008;
int DAT_20dc201c;
HANDLE DAT_20dc2024;
pointer PTR_LOOP_20dc2038;
undefined4 DAT_20dc4178;
undefined DAT_20dc4168;
undefined DAT_20dc416c;
uint DAT_20dc4170;
undefined DAT_20dc4194;
HANDLE DAT_20dc4190;
HMODULE DAT_20dc4164;
undefined DAT_20dc419c;
HMODULE DAT_20dc4160;
HMODULE DAT_20dc4198;
int *DAT_20dc48cc;
int DAT_20dc48c8;
undefined *PTR_LAB_20da18f0;
undefined4 DAT_20dc48c8;
undefined2 DAT_20dc4898;
HWND DAT_20dc48d0;
char DAT_20dc48d4;
HINSTANCE DAT_20dc4164;
string s_CtlFrameWork_Parking_20dc5228;
HMODULE DAT_20dc48d8;
undefined DAT_20dc41a0;
int DAT_20dc4758;
undefined4 DAT_20dc41c0;
int DAT_20dc48f0;
undefined4 DAT_20dc201c;
undefined1 DAT_20dc48ec;
undefined4 *DAT_20dc48f4;
int DAT_20dc5534;
undefined DAT_20dc48dc;
undefined DAT_20dc48e0;
undefined DAT_20dc48e4;
undefined DAT_20dc48e8;
undefined4 DAT_20dc4060;
int DAT_20dc54d0;
int DAT_20dc2048;
undefined *PTR_PTR_LOOP_20dc203c;
int DAT_20dc48f8;
int DAT_20dc48fc;
uint DAT_20dc4900;
UINT DAT_20dc4904;
undefined4 DAT_20dc4064;
undefined *PTR_PTR_LOOP_20dc4908;
UINT DAT_20dc4b08;
undefined4 DAT_20dc4b0c;
undefined DAT_20dc4b1c;
undefined DAT_20dc4b10;
undefined DAT_20dc4b14;
undefined DAT_20dc4b18;
int DAT_20dc4b20;
undefined4 DAT_20dc4910;
undefined4 DAT_20dc4a00;
undefined1 DAT_20dc5348;
uint DAT_20dc4b20;
int DAT_20dc54f0;
LCID DAT_20dc4b0c;
undefined1 DAT_20dc4b28;
LCID DAT_20dc4c28;
UINT DAT_20dc54f0;
LCID DAT_20dc54e0;
int DAT_20dc4c2c;
byte *DAT_20dc2020;
undefined DAT_20dc4c38;
undefined DAT_20dc4c34;
undefined DAT_20dc4c30;
undefined DAT_20dc4c40;
char *DAT_20dc2008;
undefined DAT_20dc4d44;
undefined *DAT_20dc4d58;
undefined DAT_20dc4d48;
undefined DAT_20dc4d4c;
undefined DAT_20dc4d50;
undefined DAT_20dc4d54;
undefined4 DAT_20dc4758;
undefined4 DAT_20dc41b8;
string s_VBFrameworkMapClassObject_20dc5240;
short DAT_20dc4898;
pointer PTR_PTR_20dc489c;
int DAT_20dc4d5c;
int DAT_20dc4d60;
string s_Licenses_20dc4d68;
undefined *PTR_LAB_20da7588;
undefined *PTR_LAB_20da75a0;
undefined *PTR_LAB_20da75b0;
undefined *PTR_LAB_20da75c8;
undefined *PTR_LAB_20da75e8;
undefined *PTR_LAB_20da7600;
undefined *PTR_LAB_20da7610;
undefined *PTR_LAB_20da7628;
undefined *PTR_LAB_20da7640;
undefined *PTR_LAB_20da7650;
undefined *PTR_LAB_20da7660;
undefined *PTR_LAB_20da7688;
undefined *PTR_LAB_20da76b0;
undefined *PTR_LAB_20da76d0;
undefined *PTR_LAB_20da7710;
undefined *PTR_LAB_20da7738;
undefined *PTR_LAB_20da7768;
undefined *PTR_LAB_20da7a58;
undefined *PTR_LAB_20da7a78;
undefined *PTR_LAB_20da7ad8;
undefined *PTR_FUN_20da7af0;
undefined *PTR_LAB_20da7b78;
undefined *PTR_LAB_20da7e68;
undefined *PTR_LAB_20da7e80;
undefined *PTR_LAB_20da7e90;
undefined *PTR_LAB_20da7ea8;
undefined *PTR_LAB_20da7ec8;
undefined DAT_20dc4d78;
undefined *PTR_LAB_20da7ee0;
undefined *PTR_LAB_20da7ef0;
undefined *PTR_LAB_20da7f08;
undefined *PTR_LAB_20da7f20;
undefined *PTR_LAB_20da7f30;
undefined *PTR_LAB_20da7f40;
undefined *PTR_LAB_20da7f68;
undefined *PTR_LAB_20da7f90;
undefined *PTR_LAB_20da7fb0;
undefined *PTR_LAB_20da7ff0;
undefined *PTR_LAB_20da8018;
undefined *PTR_LAB_20da8048;
undefined *PTR_LAB_20da8068;
undefined *PTR_LAB_20da80c8;
undefined *PTR_FUN_20da80e0;
undefined *PTR_LAB_20da8168;
undefined *PTR_LAB_20da8178;
undefined *PTR_LAB_20da8190;
undefined *PTR_LAB_20da81a8;
undefined *PTR_LAB_20da81b8;
undefined *PTR_LAB_20da81c8;
undefined *PTR_LAB_20da81f0;
undefined *PTR_LAB_20da8218;
undefined *PTR_LAB_20da8238;
undefined *PTR_LAB_20da8278;
undefined *PTR_LAB_20da82a0;
undefined *PTR_LAB_20da82d0;
undefined *PTR_LAB_20da82f0;
undefined *PTR_LAB_20da8350;
undefined *PTR_FUN_20da8368;
undefined *PTR_LAB_20da83a0;
undefined *PTR_LAB_20da83b8;
undefined *PTR_FUN_20da83d8;
undefined *PTR_FUN_20da8410;
undefined *PTR_FUN_20da8428;
undefined *PTR_LAB_20da8438;
undefined *PTR_LAB_20da8450;
undefined1 DAT_20da17f8;
undefined4 DAT_20da84a0;
undefined4 DAT_20da8480;
undefined1 DAT_20da84c0;
undefined1 DAT_20da84b0;
undefined1 DAT_20db0090;
undefined1 DAT_20db00b0;
undefined1 DAT_20da84d0;
undefined1 DAT_20db00d0;
undefined1 DAT_20daf9c0;
undefined1 DAT_20db00e0;
undefined DAT_20dc4dc8;
undefined2 DAT_20dc4dd0;
undefined DAT_20da8550;
undefined1 DAT_20da8560;
undefined1 DAT_20da8570;
UINT DAT_20dc4dd8;
UINT DAT_20dc4dd4;
int DAT_20dc4ddc;
int DAT_20dc4de0;
undefined DAT_20da85a0;
undefined DAT_20daf818;
undefined4 DAT_20da85b0;
undefined1 DAT_20da85c0;
unicode u__ExtentX_20dc4de4;
unicode u__ExtentY_20dc4df8;
int DAT_20dc4e0c;
int DAT_20dc4e10;
char DAT_20dc4e14;
undefined *PTR_LAB_20dc4e18;
unicode u_OLEDropMode_20dc4e20;
unicode u_OLEDragMode_20dc5278;
undefined1 DAT_20db0170;
undefined DAT_20da85e8;
undefined DAT_20da85f8;
undefined DAT_20db0160;
void *DAT_20dc4e38;
undefined *PTR_PTR_20dc489c;
undefined FUN_20da59e3;
int *DAT_20dc4e38;
int DAT_20dc4170;
undefined1 DAT_20da8500;
undefined1 DAT_20da84f0;
undefined *PTR_GetStockObject_20da13a8;
undefined *PTR_SelectObject_20da1398;
undefined DAT_20da8608;
undefined LAB_20da8618;
string s_%u\%s.dll_20dc4e54;
HINSTANCE DAT_20dc4160;
int DAT_20dc4e60;
string s_%s%s.DLL_20dc4e3c;
string s_%s%s.DLL_20dc4e48;
undefined DAT_20dab700;
undefined *PTR_SetWindowLongA_20da11d0;
undefined DAT_20dab710;
undefined DAT_20dab770;
undefined DAT_20dab780;
undefined DAT_20daf728;
undefined *PTR_LAB_20dab790;
undefined DAT_20dab7b0;
undefined4 DAT_20dab7c0;
undefined4 DAT_20dab7d8;
undefined4 DAT_20dab7f0;
undefined4 DAT_20dab808;
undefined DAT_20dc4e64;
undefined DAT_20dc4f04;
undefined DAT_20dc4ef8;
undefined DAT_20dc4eec;
unicode u__ExtentX_20dc4f28;
unicode u__ExtentY_20dc4f3c;
unicode u_OLEDropMode_20dc4f50;
unicode u_OLEDragMode_20dc5260;
undefined DAT_20daf580;
undefined1 DAT_20db00c0;
undefined1 DAT_20db00a0;
undefined DAT_20daf568;
undefined DAT_20dc4ec8;
undefined DAT_20dc4e80;
undefined DAT_20dc4e8c;
undefined DAT_20dc4ebc;
undefined DAT_20dc4ed4;
undefined DAT_20dc4e98;
undefined DAT_20dc4ea4;
undefined DAT_20dc4eb0;
undefined DAT_20dc4ee0;
undefined DAT_20dc4f10;
undefined DAT_20dc4f1c;
undefined *PTR_LAB_20daf768;
undefined *PTR_FUN_20daf7a8;
undefined *PTR_LAB_20daf928;
undefined *PTR_FUN_20daf968;
undefined *PTR_LAB_20daf7c0;
undefined *PTR_FUN_20daf800;
undefined LAB_20db5edb;
undefined DAT_20db0040;
undefined1 DAT_20dab720;
LCID DAT_20dc54a0;
uint DAT_20dc54a8;
undefined *PTR_LeaveCriticalSection_20da10f8;
int DAT_20dc54ac;
undefined4 DAT_20dc41bc;
undefined1 DAT_20dc41c4;
undefined4 DAT_20daf8b0;
undefined DAT_20db0150;
undefined LAB_20dba7d7;
ushort DAT_20dc4dc8;
string s_DISPLAY_20dc4f68;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_20dc4f70;
undefined DAT_20dc52b4;
string s_CLSID\%s_20dc4fa4;
string s_%s_Object_20dc4fb0;
string s_InprocServer32_20dc4fbc;
string s_Apartment_20dc4fcc;
string s_ThreadingModel_20dc4fd8;
string s_ThreadingModel_20dc4fe8;
undefined DAT_20dc52b0;
undefined LAB_20db01b0;
undefined DAT_20db01c0;
undefined DAT_20db01d0;
undefined DAT_20dc4ff8;
string s_%s_Object_20dc4ffc;
string s_CLSID_20dc5008;
string s_CurVer_20dc5010;
string s_%s.%s.%ld_20dc5018;
string s_%s_Object_20dc5024;
string s_CLSID_20dc5030;
string s_CLSID\%s_20dc5038;
string s_VersionIndependentProgID_20dc5044;
string s_%s.%s_20dc5060;
string s_ProgID_20dc5068;
string s_%s.%s.%ld_20dc5070;
string s_TypeLib_20dc507c;
string s_Version_20dc5084;
string s_%ld.%ld_20dc508c;
undefined DAT_20dc52b8;
undefined DAT_20dc52bc;
undefined DAT_20dc52c0;
undefined DAT_20dc52c4;
undefined DAT_20dc52c8;
undefined DAT_20dc52cc;
undefined DAT_20dc52d0;
undefined DAT_20dc52d4;
undefined DAT_20dc52d8;
undefined DAT_20dc52dc;
string s_CLSID\%s_20dc5094;
string s_Control_20dc50a0;
string s_MiscStatus_20dc50a8;
undefined DAT_20dc50b4;
undefined DAT_20dc50b8;
undefined DAT_20dc50bc;
string s_ToolboxBitmap32_20dc50c4;
undefined DAT_20dc52e0;
undefined DAT_20dc52e4;
undefined DAT_20dc52e8;
undefined DAT_20dc52ec;
pointer PTR_DAT_20dc5328;
string s_CLSID_20dc50d4;
string s_\InprocServer32_20dc50dc;
string s_%s.%s.%ld_20dc50ec;
string s_%s.%s_20dc50f8;
string s_%s.%s\CurVer_20dc5100;
string s_%s.%s.%ld_20dc5110;
undefined DAT_20dc52f0;
string s_%s.%s.%ld_20dc511c;
undefined DAT_20dc52f4;
string s_%s.%s.%ld_20dc5128;
string s_%s.%s_20dc5134;
undefined DAT_20dc52f8;
undefined DAT_20dc52fc;
undefined4 DAT_20dc513c;
undefined2 DAT_20dc5140;
string s_CLSID\%s_20dc5144;
string s_Implemented_Categories_20dc5150;
undefined DAT_20dc5300;
string s_%s\InprocServer_20dc5168;
undefined DAT_20dc5178;
FARPROC DAT_20dc54b8;
string s_VERSION.DLL_20dc517c;
string s_GetFileVersionInfoSizeA_20dc5188;
FARPROC DAT_20dc54b4;
string s_VERSION.DLL_20dc51a0;
string s_GetFileVersionInfoA_20dc51ac;
FARPROC DAT_20dc54b0;
string s_VERSION.DLL_20dc51c0;
string s_VerQueryValueA_20dc51cc;
undefined *PTR_LAB_20daf980;
undefined1 DAT_20db01f0;
undefined1 DAT_20db01e0;
undefined DAT_20dc51dc;
undefined DAT_20dc51e0;
undefined DAT_20dc51e4;
undefined DAT_20dc51e8;
string s_>LangRef_20dc51ec;
int DAT_20dc54bc;
undefined FUN_20dba64b;
int *DAT_20dc54bc;
short DAT_20dc4dd0;
undefined2 DAT_20dc4dc8;
undefined FUN_20db732c;
WNDPROC DAT_20dc549c;
string s_CtlFrameWork_Parking_20dc51f8;
string s_CtlFrameWork_Parking_20dc5210;
undefined FUN_20dba932;
undefined *PTR_FUN_20daf9d0;
undefined *PTR_LAB_20daf9e8;
undefined *PTR_LAB_20dafa08;
undefined DAT_20dc5302;
int DAT_20dc5340;
undefined DAT_20dc525a;
undefined4 DAT_20dc48cc;
undefined DAT_20dafa58;
undefined DAT_20dafa68;
undefined DAT_20dafa78;
undefined4 DAT_20dc4d60;
HMODULE DAT_20dc5308;
int DAT_20dc5310;
FARPROC DAT_20dc54c0;
int DAT_20dc54c4;
int DAT_20dc54c8;
undefined *PTR___exit_20dc5344;
undefined4 DAT_20dc4b08;
undefined *DAT_20dc54cc;
int DAT_20dc4060;
undefined DAT_20dafd5c;
undefined4 DAT_20dc5350;
undefined DAT_20dc53e0;
undefined4 DAT_20dc2048;
FARPROC DAT_20dc54f4;
FARPROC DAT_20dc54f8;
FARPROC DAT_20dc54fc;
undefined *DAT_20dc5500;
undefined DAT_20dc53e8;
undefined DAT_20dc53f0;
undefined DAT_20dc5400;
undefined *PTR_LAB_20dafdb8;
undefined DAT_20dc53e4;
undefined DAT_20da8540;
string s_%ld_-_%s_20dc5290;
int DAT_20dc547c;
undefined DAT_20dc4dd4;
undefined2 DAT_20dc5410;
undefined DAT_20dc5414;
undefined DAT_20dc5418;
uint DAT_20dc4dd4;
UINT DAT_20dc5508;
UINT DAT_20dc5524;
int *DAT_20dc4dd8;
int *DAT_20dc4dd4;
undefined *PTR_LAB_20dafdd0;
undefined *PTR_LAB_20dafde0;
undefined *PTR_FUN_20dafe10;
undefined *PTR_LAB_20dafe48;
undefined1 DAT_20da17d8;
undefined1 DAT_20da17e8;
undefined4 DAT_20dc5324;
uint DAT_20dc4dd8;
undefined *PTR_FUN_20dafe78;
undefined *PTR_LAB_20dafeb0;
undefined DAT_20daf548;
undefined4 DAT_20dc5320;
undefined *PTR_LAB_20dafee0;
undefined *PTR_FUN_20dafef0;
undefined *PTR_LAB_20daff28;
undefined *PTR_LAB_20daff60;
undefined1 DAT_20da8470;
undefined *DAT_20dc5514;
undefined *PTR_FUN_20daff98;
undefined DAT_20db0250;
undefined LAB_20dbf407;
undefined DAT_20dc5318;
undefined *PTR_s_DragFinish_20dc5480;
undefined DAT_20dc552c;
int DAT_20dc5528;
int DAT_20dc5524;
int DAT_20dc5504;
int DAT_20dc5508;
uint DAT_20dc5518;
HGDIOBJ DAT_20dc551c;
int DAT_20dc5518;
HPALETTE DAT_20dc551c;
undefined4 DAT_20dafff8;
undefined UNK_20db0037;
HPALETTE DAT_20dc550c;
undefined1 DAT_20db0038;
UINT DAT_20dc5530;
ushort DAT_20dc5498;
undefined *PTR_PeekMessageA_20da111c;
undefined *PTR_PostMessageA_20da120c;
undefined *PTR_PostMessageW_20da1138;
undefined *PTR_PeekMessageW_20da1134;
string s_WM_DBCS_TRAILBYTE_20dc529c;

int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_20dc2000 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_20dc2004 != (code *)0x0) {
      iVar1 = (*DAT_20dc2004)(param_1,param_2,param_3);
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_20da14ac(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_20dae79f();
      return iVar1;
    }
  }
  iVar1 = FUN_20da1658(param_1,param_2);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_20da14ac(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_20da14ac(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_20dc2004 != (code *)0x0)) {
      iVar1 = (*DAT_20dc2004)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_20da14ac(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      return 1;
    }
    if (0 < DAT_20dc2000) {
      DAT_20dc2000 = DAT_20dc2000 + -1;
      if (DAT_20dc201c == 0) {
        FUN_20da19fd();
      }
      FUN_20da1a7b();
      FUN_20da1ae2();
      return 1;
    }
    return 0;
  }
  DAT_20dc200c = GetVersion();
  iVar1 = FUN_20da1b19();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_20dc2018 = DAT_20dc200c >> 8 & 0xff;
  _DAT_20dc2014 = DAT_20dc200c & 0xff;
  _DAT_20dc2010 = _DAT_20dc2014 * 0x100 + _DAT_20dc2018;
  DAT_20dc200c = DAT_20dc200c >> 0x10;
  DAT_20dc2020 = GetCommandLineA();
  DAT_20dc2008 = FUN_20da1c3f();
  if ((DAT_20dc2020 != (LPSTR)0x0) && (DAT_20dc2008 != (LPSTR)0x0)) {
    FUN_20da1d83();
    FUN_20da1f5c();
    FUN_20da2478();
    FUN_20da26c9();
    FUN_20da27af();
    DAT_20dc2000 = DAT_20dc2000 + 1;
    return 1;
  }
  FUN_20da1ae2();
  return 0;
}



void __cdecl FUN_20da1595(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = (byte *)FUN_20da15df(param_1,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_20da1aa5(local_4,(int)param_1,pbVar1);
      return;
    }
    HeapFree(DAT_20dc2024,0,lpMem);
  }
  return;
}



int __cdecl FUN_20da15df(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_20dc2038;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_20dc2038) {
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



void __cdecl FUN_20da1636(undefined4 *param_1,undefined4 *param_2)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_20da1658(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  ushort uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    FUN_20da1955();
    FUN_20da19b5();
    if ((DAT_20dc4160 != (HMODULE)0x0) && (DAT_20dc4160 != DAT_20dc4164)) {
      FreeLibrary(DAT_20dc4160);
    }
    if (DAT_20dc4198 != (HMODULE)0x0) {
      FreeLibrary(DAT_20dc4198);
      DAT_20dc4198 = (HMODULE)0x0;
    }
  }
  else if (param_2 == 1) {
    DVar1 = GetVersion();
    bVar3 = 0x7fffffff < DVar1;
    uVar2 = CONCAT11((char)DVar1,(char)(DVar1 >> 8));
    DAT_20dc4170 = 0;
    if (bVar3) {
      DAT_20dc4170 = (uint)(0x409 < uVar2);
      _DAT_20dc4194 = 1;
    }
    else {
      _DAT_20dc4194 = (uint)(0x333 < uVar2);
    }
    _DAT_20dc416c = (uint)bVar3;
    _DAT_20dc4168 = (uint)!bVar3;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if ((DAT_20dc4190 == (HANDLE)0x0) &&
       (DAT_20dc4190 = GetProcessHeap(), DAT_20dc4190 == (HANDLE)0x0)) {
      return 0;
    }
    DAT_20dc4164 = param_1;
    DisableThreadLibraryCalls(param_1);
    _DAT_20dc419c = GetSystemMetrics(0x2a);
    FUN_20da27e1();
    return 1;
  }
  return 1;
}



undefined4 FUN_20da1741(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[1];
  if (*piVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_20da1929(param_1);
      FUN_20da193b(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x1910  2  DllCanUnloadNow
  if (DAT_20dc48cc != (int *)0x0) {
    (**(code **)(*DAT_20dc48cc + 8))(DAT_20dc48cc);
    DAT_20dc48cc = (int *)0x0;
  }
  return (uint)(DAT_20dc48c8 != 0);
}



void __fastcall FUN_20da1929(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_20da18f0;
  InterlockedDecrement(&DAT_20dc48c8);
  return;
}



void __cdecl FUN_20da193b(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_20dc4190,0,param_1);
  }
  return;
}



void FUN_20da1955(void)

{
  short *psVar1;
  
  if (DAT_20dc4898 != -1) {
    psVar1 = &DAT_20dc4898;
    do {
      if ((*psVar1 == 2) && (*(short *)(*(int *)(psVar1 + 2) + 0x48) != 0)) {
        UnregisterClassA(*(LPCSTR *)(*(int *)(psVar1 + 2) + 0x44),DAT_20dc4164);
      }
      psVar1 = psVar1 + 4;
    } while (*psVar1 != -1);
  }
  if (DAT_20dc48d0 != (HWND)0x0) {
    DestroyWindow(DAT_20dc48d0);
    DAT_20dc48d0 = (HWND)0x0;
    UnregisterClassA(s_CtlFrameWork_Parking_20dc5228,DAT_20dc4164);
  }
  if (DAT_20dc48d4 != '\0') {
    UnregisterClassA("CtlFrameWork_ReflectWindow",DAT_20dc4164);
    DAT_20dc48d4 = '\0';
  }
  return;
}



void FUN_20da19b5(void)

{
  FUN_20da19d3();
  if (((DAT_20dc48d8 != (HMODULE)0x0) && (DAT_20dc48d8 != DAT_20dc4160)) &&
     (DAT_20dc48d8 != DAT_20dc4164)) {
    FreeLibrary(DAT_20dc48d8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_20dc41a0);
  return;
}



void FUN_20da19d3(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_20dc4758) {
    puVar1 = &DAT_20dc41c0;
    do {
      if ((HGDIOBJ)*puVar1 != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x12;
    } while (iVar2 < DAT_20dc4758);
  }
  return;
}



void FUN_20da19fd(void)

{
  FUN_20da1a0c(0,0,1);
  return;
}



void __cdecl FUN_20da1a0c(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  if (DAT_20dc48f0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_20dc201c = 1;
  DAT_20dc48ec = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_20dc48f4 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_20dc5534 + -4), puVar1 = DAT_20dc48f4, DAT_20dc48f4 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_20dc48f4;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_20da1636((undefined4 *)&DAT_20dc48dc,(undefined4 *)&DAT_20dc48e0);
  }
  FUN_20da1636((undefined4 *)&DAT_20dc48e4,(undefined4 *)&DAT_20dc48e8);
  if (param_3 == 0) {
    DAT_20dc48f0 = 1;
                    // WARNING: Subroutine does not return
    ExitProcess(param_1);
  }
  return;
}



void FUN_20da1a7b(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_20dc4060;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      FUN_20da1595((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x20dc4160);
  return;
}



void __cdecl FUN_20da1aa5(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_20dc54d0 = DAT_20dc54d0 + 1, DAT_20dc54d0 == 0x20)) {
    FUN_20dbb6df(0x10);
  }
  return;
}



void FUN_20da1ae2(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_20dc2038;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_20dc2038);
  HeapDestroy(DAT_20dc2024);
  return;
}



undefined4 FUN_20da1b19(void)

{
  undefined **ppuVar1;
  
  DAT_20dc2024 = HeapCreate(1,0x1000,0);
  if (DAT_20dc2024 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_20da1b48();
  if (ppuVar1 != (undefined **)0x0) {
    return 1;
  }
  HeapDestroy(DAT_20dc2024);
  return 0;
}



undefined ** FUN_20da1b48(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_20dc2048 == -1) {
    lpMem = &PTR_LOOP_20dc2038;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_20dc2024,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_20dc2038) {
        if (PTR_LOOP_20dc2038 == (undefined *)0x0) {
          PTR_LOOP_20dc2038 = (undefined *)&PTR_LOOP_20dc2038;
        }
        if (PTR_PTR_LOOP_20dc203c == (undefined *)0x0) {
          PTR_PTR_LOOP_20dc203c = (undefined *)&PTR_LOOP_20dc2038;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_20dc2038;
        lpMem[1] = PTR_PTR_LOOP_20dc203c;
        PTR_PTR_LOOP_20dc203c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_20dc2038) {
    HeapFree(DAT_20dc2024,0,lpMem);
  }
  return (undefined **)0x0;
}



LPSTR FUN_20da1c3f(void)

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
  if (DAT_20dc48f8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_20dc48f8 = 2;
    }
    else {
      DAT_20dc48f8 = 1;
    }
  }
  if (DAT_20dc48f8 == 1) {
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
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_20da1cfd(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_20da1595(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_20dc48f8 == 2) &&
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
    pCVar7 = (LPSTR)FUN_20da1cfd((uint)pCVar9);
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



void __cdecl FUN_20da1cfd(uint param_1)

{
  FUN_20da1d11(param_1,DAT_20dc48fc);
  return;
}



int __cdecl FUN_20da1d11(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_20da1d49(param_1);
      }
      else {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN_20dbb935(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}



void __cdecl FUN_20da1d49(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_20dc4900) &&
     (piVar1 = FUN_20da1e7f(param_1 + 0xfU >> 4), piVar1 != (int *)0x0)) {
    return;
  }
  HeapAlloc(DAT_20dc2024,0,dwBytes);
  return;
}



void FUN_20da1d83(void)

{
  byte bVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT UStack_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (undefined4 *)FUN_20da1cfd(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_20dc4904 = 0x20;
  DAT_20dc4060 = puVar2;
  if (puVar2 < puVar2 + 0x40) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2 = puVar2 + 2;
    } while (puVar2 < DAT_20dc4060 + 0x40);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)((int)pUVar8 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_20dc4904 < (int)UStack_48) {
      piVar6 = &DAT_20dc4064;
      do {
        puVar2 = (undefined4 *)FUN_20da1cfd(0x100);
        if (puVar2 == (undefined4 *)0x0) {
          UStack_48 = DAT_20dc4904;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_20dc4904 = DAT_20dc4904 + 0x20;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x100));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_20dc4904 < (int)UStack_48);
    }
    uVar7 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar5), DVar3 != 0)))) {
          iVar4 = (int)(&DAT_20dc4060)[(int)uVar7 >> 5];
          *(undefined4 *)(iVar4 + (uVar7 & 0x1f) * 8) = *(undefined4 *)pbVar5;
          *(byte *)(iVar4 + (uVar7 & 0x1f) * 8 + 4) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar7 < (int)UStack_48);
    }
  }
  iVar4 = 0;
  do {
    puVar2 = DAT_20dc4060 + iVar4 * 2;
    if (DAT_20dc4060[iVar4 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar4 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar4 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_20da1e0a;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_20da1e0a;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_20da1e0a;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_20da1e0a:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      SetHandleCount(DAT_20dc4904);
      return;
    }
  } while( true );
}



int * __cdecl FUN_20da1e7f(uint param_1)

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
  
  local_4 = (int *)PTR_PTR_LOOP_20dc4908;
  do {
    if (local_4[4] != -1) {
      puVar10 = (uint *)local_4[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      if (puVar10 < local_4 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
            piVar5 = (int *)FUN_20da1f07(piVar8,*puVar10,param_1);
            if (piVar5 != (int *)0x0) {
              PTR_PTR_LOOP_20dc4908 = (undefined *)local_4;
              *puVar10 = *puVar10 - param_1;
              local_4[2] = (int)puVar10;
              return piVar5;
            }
            puVar10[1] = param_1;
          }
          puVar10 = puVar10 + 2;
          piVar8 = piVar8 + 0x400;
        } while (puVar10 < local_4 + 0x806);
        piVar8 = FUN_20daedf5(local_4);
        return piVar8;
      }
      puVar2 = (uint *)local_4[2];
      piVar8 = (int *)local_4[4];
      for (puVar10 = (uint *)(local_4 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_20da1f07(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_20dc4908 = (undefined *)local_4;
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
  } while (local_4 != (int *)PTR_PTR_LOOP_20dc4908);
  ppuVar7 = &PTR_LOOP_20dc2038;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_20dc2038) {
      ppuVar7 = FUN_20da1b48();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)ppuVar7[4];
      *(char *)(piVar8 + 2) = (char)param_1;
      PTR_PTR_LOOP_20dc4908 = (undefined *)ppuVar7;
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
  PTR_PTR_LOOP_20dc4908 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar6);
  *(char *)(piVar8 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar8[1] = piVar8[1] - param_1;
  *piVar8 = (int)piVar8 + param_1 + 8;
  return piVar8 + 0x40;
}



void __thiscall FUN_20da1ef5(void *this)

{
  int iVar1;
  uint unaff_EBX;
  uint *unaff_EBP;
  int *unaff_ESI;
  uint *unaff_EDI;
  uint *puVar2;
  undefined *in_stack_00000010;
  
  while( true ) {
    do {
      puVar2 = unaff_EDI;
      unaff_EDI = puVar2 + 2;
      unaff_ESI = unaff_ESI + 0x400;
      if (unaff_EBP <= unaff_EDI) {
        FUN_20daedf5(this);
        return;
      }
    } while (((int)*unaff_EDI < (int)unaff_EBX) || (puVar2[3] <= unaff_EBX));
    iVar1 = FUN_20da1f07(unaff_ESI,*unaff_EDI,unaff_EBX);
    if (iVar1 != 0) break;
    puVar2[3] = unaff_EBX;
    this = in_stack_00000010;
  }
  PTR_PTR_LOOP_20dc4908 = in_stack_00000010;
  *unaff_EDI = *unaff_EDI - unaff_EBX;
  *(uint **)(in_stack_00000010 + 8) = unaff_EDI;
  return;
}



int __cdecl FUN_20da1f07(int *param_1,uint param_2,uint param_3)

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
            goto LAB_20daf0ae;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_20daf094;
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
LAB_20daf0ae:
            param_1[1] = 0;
          }
LAB_20daf094:
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



void FUN_20da1f5c(void)

{
  FUN_20da1f67(-3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_20da1f67(int param_1)

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
  
  CodePage = FUN_20da201a(param_1);
  if (CodePage == DAT_20dc4b08) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_20dbb43f();
    FUN_20da204a();
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_20dc4910;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_20dc4a00;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x20dc4920);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_20dc5348)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_20dc4a00 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_20dc4b1c = 1;
      DAT_20dc4b08 = CodePage;
      DAT_20dc4b0c = FUN_20dbb3df(CodePage);
      _DAT_20dc4b10 = *(undefined4 *)(iVar10 + 0x20dc4914);
      _DAT_20dc4b14 = *(undefined4 *)(iVar10 + 0x20dc4918);
      _DAT_20dc4b18 = *(undefined4 *)(iVar10 + 0x20dc491c);
      FUN_20da204a();
      return 0;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_20dc4a00);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 != 1) {
    if (DAT_20dc4b20 == 0) {
      return 0xffffffff;
    }
    FUN_20dbb43f();
    FUN_20da204a();
    return 0;
  }
  puVar14 = &DAT_20dc4a00;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  DAT_20dc4b0c = 0;
  if (local_14.MaxCharSize < 2) {
    _DAT_20dc4b1c = 0;
    DAT_20dc4b08 = CodePage;
  }
  else {
    DAT_20dc4b08 = CodePage;
    if (local_14.LeadByte[0] != '\0') {
      pBVar11 = local_14.LeadByte + 1;
      do {
        bVar3 = *pBVar11;
        if (bVar3 == 0) break;
        for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
          *(byte *)((int)&DAT_20dc4a00 + uVar7 + 1) = *(byte *)((int)&DAT_20dc4a00 + uVar7 + 1) | 4;
        }
        pBVar1 = pBVar11 + 1;
        pBVar11 = pBVar11 + 2;
      } while (*pBVar1 != 0);
    }
    uVar7 = 1;
    do {
      *(byte *)((int)&DAT_20dc4a00 + uVar7 + 1) = *(byte *)((int)&DAT_20dc4a00 + uVar7 + 1) | 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xff);
    DAT_20dc4b0c = FUN_20dbb3df(CodePage);
    _DAT_20dc4b1c = 1;
  }
  _DAT_20dc4b10 = 0;
  _DAT_20dc4b14 = 0;
  _DAT_20dc4b18 = 0;
  FUN_20da204a();
  return 0;
}



int __cdecl FUN_20da201a(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_20dc4b20 = 1;
                    // WARNING: Could not recover jumptable at 0x20daeba1. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_20dc4b20 = 1;
                    // WARNING: Could not recover jumptable at 0x20da2044. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_20dc54f0;
  }
  DAT_20dc4b20 = (uint)bVar2;
  return param_1;
}



void FUN_20da204a(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  BYTE *pBVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR aCStack_500 [256];
  WCHAR aWStack_400 [128];
  WCHAR aWStack_300 [128];
  WORD aWStack_200 [256];
  
  BVar1 = GetCPInfo(DAT_20dc4b08,&local_514);
  if (BVar1 != 1) {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((uVar2 < 0x61) || (0x7a < uVar2)) {
          (&DAT_20dc4b28)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) =
               *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) | 0x20;
          (&DAT_20dc4b28)[uVar2] = (char)uVar2 + -0x20;
        }
      }
      else {
        *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) = *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) | 0x10
        ;
        (&DAT_20dc4b28)[uVar2] = (char)uVar2 + ' ';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    aCStack_500[uVar2] = (CHAR)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  aCStack_500[0] = ' ';
  if (local_514.LeadByte[0] != 0) {
    pBVar6 = local_514.LeadByte + 1;
    do {
      uVar2 = (uint)local_514.LeadByte[0];
      if (uVar2 <= *pBVar6) {
        uVar3 = (*pBVar6 - uVar2) + 1;
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
      local_514.LeadByte[0] = pBVar6[1];
      pBVar6 = pBVar6 + 2;
    } while (local_514.LeadByte[0] != 0);
  }
  FUN_20da218f(1,aCStack_500,0x100,aWStack_200,DAT_20dc4b08,DAT_20dc4b0c,0);
  FUN_20da22c4(DAT_20dc4b0c,0x100,aCStack_500,(LPCWSTR)0x100,aWStack_400,0x100,DAT_20dc4b08,0);
  FUN_20da22c4(DAT_20dc4b0c,0x200,aCStack_500,(LPCWSTR)0x100,aWStack_300,0x100,DAT_20dc4b08,0);
  uVar2 = 0;
  puVar5 = aWStack_200;
  do {
    if ((*puVar5 & 1) == 0) {
      if ((*puVar5 & 2) == 0) {
        (&DAT_20dc4b28)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) = *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) | 0x20
        ;
        (&DAT_20dc4b28)[uVar2] = *(undefined1 *)((int)aWStack_300 + uVar2);
      }
    }
    else {
      *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) = *(byte *)((int)&DAT_20dc4a00 + uVar2 + 1) | 0x10;
      (&DAT_20dc4b28)[uVar2] = *(undefined1 *)((int)aWStack_400 + uVar2);
    }
    uVar2 = uVar2 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar2 < 0x100);
  return;
}



BOOL __cdecl
FUN_20da218f(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_20dc4c28 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_20dc4c28 = 2;
    }
    else {
      DAT_20dc4c28 = 1;
    }
  }
  if (DAT_20dc4c28 != 2) {
    param_6 = DAT_20dc4c28;
    if (DAT_20dc4c28 == 1) {
      param_6 = 0;
      if (param_5 == 0) {
        param_5 = DAT_20dc54f0;
      }
      iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar2 != 0) {
        lpWideCharStr = (LPCWSTR)FUN_20da226a(2,iVar2);
        if (lpWideCharStr != (LPCWSTR)0x0) {
          iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
          if (iVar2 != 0) {
            BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
            FUN_20da1595((undefined *)lpWideCharStr);
            return BVar1;
          }
        }
      }
      FUN_20da1595((undefined *)lpWideCharStr);
    }
    return param_6;
  }
  if (param_6 == 0) {
    param_6 = DAT_20dc54e0;
  }
  BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  return BVar1;
}



int * __cdecl FUN_20da226a(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint dwBytes;
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
      if (DAT_20dc4900 < dwBytes) {
LAB_20da22a3:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        piVar3 = FUN_20da1e7f(dwBytes >> 4);
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
          goto LAB_20da22a3;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_20dc2024,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_20dc48fc == 0)) {
      return piVar3;
    }
    iVar1 = FUN_20dbb935(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



int __cdecl
FUN_20da22c4(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cchSrc;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_20dc4c2c == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_20dc4c2c = 2;
    }
    else {
      DAT_20dc4c2c = 1;
    }
  }
  cchSrc = param_4;
  if (0 < (int)param_4) {
    cchSrc = (LPCWSTR)FUN_20da244a(param_3,(int)param_4);
  }
  if (DAT_20dc4c2c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cchSrc,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_20dc4c2c != 1) {
    return DAT_20dc4c2c;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_20dc54f0;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cchSrc,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_20da1cfd(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cchSrc,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_20da1cfd(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_20daf174;
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
      if (param_6 == 0) goto LAB_20da242d;
      if (param_6 < iVar2) goto LAB_20daf174;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_20da242d:
      FUN_20da1595((undefined *)lpWideCharStr);
      FUN_20da1595((undefined *)param_4);
      return iVar2;
    }
  }
LAB_20daf174:
  FUN_20da1595((undefined *)lpWideCharStr);
  FUN_20da1595((undefined *)param_4);
  return 0;
}



int __cdecl FUN_20da244a(char *param_1,int param_2)

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
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_20da2478(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_20dc4c40,0x104);
  _DAT_20dc4c38 = &DAT_20dc4c40;
  pbVar2 = DAT_20dc2020;
  if (*DAT_20dc2020 == 0) {
    pbVar2 = &DAT_20dc4c40;
  }
  FUN_20da250f(pbVar2,(undefined4 *)0x0,(byte *)0x0,&iStack_8,&iStack_4);
  puVar1 = (undefined4 *)FUN_20da1cfd(iStack_4 + iStack_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_20da250f(pbVar2,puVar1,(byte *)(puVar1 + iStack_8),&iStack_8,&iStack_4);
  _DAT_20dc4c34 = puVar1;
  _DAT_20dc4c30 = iStack_8 + -1;
  return;
}



void __cdecl FUN_20da250f(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
    FUN_20dae995();
    return;
  }
  do {
    *piVar6 = *piVar6 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = *param_1;
      param_3 = param_3 + 1;
    }
    bVar2 = *param_1;
    pbVar7 = param_1 + 1;
    param_5 = (int *)(uint)bVar2;
    if ((*(byte *)((int)param_5 + 0x20dc4a01) & 4) != 0) {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      pbVar7 = param_1 + 2;
    }
    if (bVar2 == 0x20) break;
    if (bVar2 == 0) goto LAB_20daea06;
    param_1 = pbVar7;
  } while (bVar2 != 9);
  if (bVar2 == 0) {
LAB_20daea06:
    pbVar7 = pbVar7 + -1;
  }
  else if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
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
          if ((*(byte *)((int)&DAT_20dc4a00 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_20da260b;
        }
        if ((*(byte *)((int)&DAT_20dc4a00 + bVar2 + 1) & 4) != 0) {
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
LAB_20da260b:
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

void FUN_20da26c9(void)

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
  cVar2 = *DAT_20dc2008;
  pcVar7 = DAT_20dc2008;
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
  piVar3 = (int *)FUN_20da1cfd(iVar8 * 4 + 4);
  _DAT_20dc4d44 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_20dc2008;
  local_4 = piVar3;
  pcVar7 = DAT_20dc2008;
  do {
    if (cVar2 == '\0') {
      FUN_20da1595(DAT_20dc2008);
      DAT_20dc2008 = (char *)0x0;
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
      iVar8 = FUN_20da1cfd(uVar4);
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



void FUN_20da27af(void)

{
  if (DAT_20dc4d58 != (code *)0x0) {
    (*DAT_20dc4d58)();
  }
  FUN_20da1636((undefined4 *)&DAT_20dc4d50,(undefined4 *)&DAT_20dc4d54);
  FUN_20da1636((undefined4 *)&DAT_20dc4d48,(undefined4 *)&DAT_20dc4d4c);
  return;
}



void FUN_20da27e1(void)

{
  FUN_20da27f2();
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_20dc41a0);
  return;
}



void FUN_20da27f2(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_20dc41b8;
  for (iVar1 = 0x168; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_20dc4758 = 0x14;
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
  
                    // 0x280d  3  DllGetClassObject
  if (ppv == (LPVOID *)0x0) {
    HVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_20da2870((char *)rclsid);
    if (iVar1 == -1) {
      if (((DAT_20dc4164 != (HMODULE)0x0) &&
          (pFVar4 = GetProcAddress(DAT_20dc4164,s_VBFrameworkMapClassObject_20dc5240),
          pFVar4 != (FARPROC)0x0)) && (iVar5 = (*pFVar4)(rclsid,local_14), -1 < iVar5)) {
        iVar1 = FUN_20da2870(local_14);
      }
      if (iVar1 == -1) {
        return -0x7ffbfeef;
      }
    }
    this = (void *)FUN_20da28aa(0xc);
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_20da28c5(this,iVar1);
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



int __cdecl FUN_20da2870(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (DAT_20dc4898 != -1) {
    ppuVar4 = &PTR_PTR_20dc489c;
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



void __cdecl FUN_20da28aa(SIZE_T param_1)

{
  if (DAT_20dc4190 == (HANDLE)0x0) {
    DAT_20dc4190 = GetProcessHeap();
    if (DAT_20dc4190 == (HANDLE)0x0) {
      return;
    }
  }
  HeapAlloc(DAT_20dc4190,0,param_1);
  return;
}



undefined4 * __thiscall FUN_20da28c5(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_20da18f0;
  InterlockedIncrement(&DAT_20dc48c8);
  *(undefined4 *)((int)this + 4) = 1;
  return (undefined4 *)this;
}



int FUN_20da293b(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if (DAT_20dc4d5c == 0) {
      DAT_20dc4d60 = FUN_20da29a4();
      DAT_20dc4d5c = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if (DAT_20dc4d60 == 0) {
      iVar1 = -0x7ffbfeee;
    }
    else {
      iVar1 = FUN_20da2bc6(param_2,*(int *)(param_1 + 8),param_4,param_3);
    }
  }
  return iVar1;
}



undefined4 FUN_20da29a4(void)

{
  uint cbMultiByte;
  int iVar1;
  undefined4 uVar2;
  HKEY local_84 [31];
  byte local_8;
  
  iVar1 = lstrlenW(L"72E67120-5959-11cf-91F6-C2863C385E30");
  cbMultiByte = iVar1 * 2 + 2;
  FUN_20da29fd(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,L"72E67120-5959-11cf-91F6-C2863C385E30",-1,(LPSTR)local_84[0],cbMultiByte,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  uVar2 = FUN_20da2a39(local_84[0]);
  if ((local_84[0] != (HKEY)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_20dc4190,0,local_84[0]);
  }
  return uVar2;
}



undefined4 * __thiscall FUN_20da29fd(void *this,uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x79) {
    puVar1 = (undefined2 *)((int)this + 4);
  }
  else {
    puVar1 = (undefined2 *)HeapAlloc(DAT_20dc4190,0,param_1);
  }
  *(undefined2 **)this = puVar1;
  *(uint *)((int)this + 0x7c) = (uint)(0x78 < param_1) | *(uint *)((int)this + 0x7c) & 0xfffffffe;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return (undefined4 *)this;
}



undefined4 __cdecl FUN_20da2a39(HKEY param_1)

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
    LVar2 = RegOpenKeyA((HKEY)0x80000000,s_Licenses_20dc4d68,&local_c);
    if (LVar2 == 0) {
      if ((char)lpSubKey->unused != '\0') {
        LVar2 = RegOpenKeyA(local_c,(LPCSTR)lpSubKey,&param_1);
        if (LVar2 == 0) {
          bVar1 = FUN_20da2ab2(param_1,(byte *)lpSubKey,local_d4);
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



bool __cdecl FUN_20da2ab2(HKEY param_1,byte *param_2,char *param_3)

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
    FUN_20da2b1e(param_2,param_3,local_d0);
    LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)local_d0,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrcmpA((LPCSTR)local_d0,param_3);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



void __cdecl FUN_20da2b1e(byte *param_1,char *param_2,byte *param_3)

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



int __cdecl FUN_20da2bc6(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*(code **)((&PTR_PTR_20dc489c)[param_2 * 2] + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)((&PTR_PTR_20dc489c)[param_2 * 2] + 0x14))(), -1 < iVar2)) {
    if (*(code **)((&PTR_PTR_20dc489c)[param_2 * 2] + 0x10) == (code *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      piVar1 = (int *)(**(code **)((&PTR_PTR_20dc489c)[param_2 * 2] + 0x10))(param_1);
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



LPVOID __cdecl FUN_20da2c52(SIZE_T param_1,HANDLE param_2)

{
  LPVOID pvVar1;
  
  if ((param_2 == (HANDLE)0x0) && (param_2 = GetProcessHeap(), param_2 == (HANDLE)0x0)) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(param_2,0,param_1);
  return pvVar1;
}



undefined4 * __thiscall FUN_20da2c6e(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)((int)this + 0xd4);
  FUN_20da2e51(this,param_1,0,-(uint)(this != (void *)0x0) & (uint)puVar3);
  puVar1 = (undefined4 *)((int)this + 200);
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_20da7ec8;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_20da7ea8;
  *puVar1 = &PTR_LAB_20da7e90;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_20da7e80;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_20da7e68;
  *puVar3 = &PTR_LAB_20da7b78;
  FUN_20da3062((void *)((int)this + 0xd8),this,0,1,&DAT_20dc4d78,3,4,0);
  FUN_20da30dd((void *)((int)this + 0x124),-(uint)(this != (void *)0x0) & (uint)puVar1,0xfffffe00,0,
               1);
  *(undefined ***)this = &PTR_FUN_20da7af0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_20da7ad8;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_20da7a78;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_20da7a58;
  *puVar3 = &PTR_LAB_20da7768;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_20da7738;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_20da7710;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_20da76d0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_20da76b0;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_20da7688;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_20da7660;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_20da7650;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_20da7640;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_20da7628;
  *(undefined ***)((int)this + 100) = &PTR_LAB_20da7610;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_20da7600;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_20da75e8;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_20da75c8;
  *puVar1 = &PTR_LAB_20da75b0;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_20da75a0;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_20da7588;
  puVar3 = (undefined4 *)((int)this + 0x144);
  for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)((int)this + 0x1b8);
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x218) = 0xffffffff;
  FUN_20da310f((int)this);
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined4 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined2 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_20da2e51(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_20da2faa(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_20da82f0;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_20da82d0;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_20da82a0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_20da8278;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_20da8238;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_20da8218;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_20da81f0;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_20da81c8;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_20da81b8;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_20da81a8;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_20da8190;
  *(undefined ***)((int)this + 100) = &PTR_LAB_20da8178;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_20da8168;
  *(undefined ***)this = &PTR_FUN_20da80e0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_20da80c8;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_20da8068;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_20da8048;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_20da8018;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_20da7ff0;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_20da7fb0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_20da7f90;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_20da7f68;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_20da7f40;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_20da7f30;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_20da7f20;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_20da7f08;
  *(undefined ***)((int)this + 100) = &PTR_LAB_20da7ef0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_20da7ee0;
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
FUN_20da2faa(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_20da2ffa(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_20da83a0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_20da83b8;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_20da83b8;
  *(undefined1 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined ***)this = &PTR_FUN_20da8368;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_20da8350;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_20da2ffa(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_20da3025(this,param_1,param_3);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = &PTR_FUN_20da83d8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_20da3025(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((int)this + 0xc);
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_20da8428;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_20da8410;
  InterlockedIncrement(&DAT_20dc48c8);
  return (undefined4 *)this;
}



void __thiscall
FUN_20da3062(void *this,undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_5;
  *(undefined4 *)((int)this + 0x24) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_4;
  *(uint *)((int)this + 0x2c) =
       (((param_7 & 1) << 1 | param_3 & 1) << 1 | param_2 & 1) << 8 |
       *(uint *)((int)this + 0x2c) & 0xfffff800;
  *(undefined ***)this = &PTR_LAB_20da8438;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  return;
}



void __thiscall
FUN_20da30dd(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined ***)this = &PTR_LAB_20da8450;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return;
}



void __fastcall FUN_20da310f(int param_1)

{
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x144) = 2;
  *(undefined4 *)(param_1 + 0x148) = 2;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x150) = 1;
  *(undefined4 *)(param_1 + 0x158) = 0x80000005;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000008;
  *(undefined4 *)(param_1 + 0x160) = 0x8000000f;
  *(undefined4 *)(param_1 + 0x164) = 0x80000012;
  *(undefined4 *)(param_1 + 0x168) = 0x8000000d;
  *(undefined4 *)(param_1 + 0x16c) = 0x8000000e;
  *(undefined4 *)(param_1 + 0x170) = 0x808080;
  *(undefined4 *)(param_1 + 0x174) = 0xc0c0c0;
  *(undefined4 *)(param_1 + 0x180) = 1;
  *(undefined4 *)(param_1 + 0x184) = 1;
  *(undefined4 *)(param_1 + 0x18c) = 1;
  *(undefined2 *)(param_1 + 0x198) = 1;
  *(undefined2 *)(param_1 + 0x19a) = 1;
  *(undefined2 *)(param_1 + 0x19e) = 1;
  *(undefined2 *)(param_1 + 0x1a0) = 2;
  *(undefined2 *)(param_1 + 0x1a2) = 3;
  *(undefined2 *)(param_1 + 0x1ac) = 1;
  *(undefined2 *)(param_1 + 0x1ae) = 1;
  *(undefined2 *)(param_1 + 0x1b2) = 1;
  return;
}



undefined4 FUN_20da31e6(int param_1,int *param_2,int *param_3)

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



int FUN_20da322c(int param_1)

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



undefined4 __thiscall FUN_20da3269(void *this,uint *param_1,int *param_2)

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
  if (uVar3 == 0x5f4df280) {
    iVar2 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = &DAT_20da17f8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_20da3288;
    uVar3 = (int)this + 0xd4;
LAB_20da32d1:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & uVar3);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *param_2 = (int)piVar4;
    uVar1 = 0;
  }
  else {
LAB_20da3288:
    if (uVar3 == 0x9bfbbc00) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xd0;
        goto LAB_20da32d1;
      }
    }
    if (uVar3 == 0x376bd3aa) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_20da84a0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xc4;
        goto LAB_20da32d1;
      }
    }
    if (uVar3 == 0x4d07fc10) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_20da8480;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xc0;
        goto LAB_20da32d1;
      }
    }
    uVar1 = FUN_20da3305(this,param_1,param_2);
  }
  return uVar1;
}



undefined4 __thiscall FUN_20da3305(void *this,uint *param_1,int *param_2)

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
      if (!bVar5) goto LAB_20dad981;
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
        if (uVar1 != 0x10a) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      default:
        goto switchD_20da33b0_caseD_10b;
      case 0x10c:
        if (uVar1 != 0x10c) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      case 0x10d:
        if (uVar1 != 0x10d) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x48);
          *param_2 = (int)this + 0x48;
          (**(code **)(iVar3 + 4))((int)this + 0x48);
          return 0;
        }
        break;
      case 0x112:
        if (uVar1 != 0x112) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x38);
          *param_2 = (int)this + 0x38;
          (**(code **)(iVar3 + 4))((int)this + 0x38);
          return 0;
        }
        break;
      case 0x113:
        if (uVar1 != 0x113) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x40);
          *param_2 = (int)this + 0x40;
          (**(code **)(iVar3 + 4))((int)this + 0x40);
          return 0;
        }
        break;
      case 0x114:
        if (uVar1 != 0x114) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
        break;
      case 0x117:
        if (uVar1 != 0x117) goto LAB_20dad981;
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
        if (!bVar5) goto LAB_20dad981;
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
      pcVar4 = &DAT_20db00e0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_20dad981;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x40);
        *param_2 = (int)this + 0x40;
        (**(code **)(iVar3 + 4))((int)this + 0x40);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xd97180) goto switchD_20da33b0_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_20daf9c0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_20dad981;
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
      pcVar4 = &DAT_20db00d0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_20dad981;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x37d84f60) goto switchD_20da33b0_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_20da84d0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_20dad981;
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
        uVar2 = FUN_20dad890(this,(int)this);
        return uVar2;
      }
switchD_20da33b0_caseD_10b:
      uVar2 = FUN_20da5443(this,(int *)param_1,param_2);
      return uVar2;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_20db00b0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_20dad981;
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
        uVar2 = FUN_20dad912(this,(int)this);
        return uVar2;
      }
      goto switchD_20da33b0_caseD_10b;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_20da84c0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_20dad981;
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
    pcVar4 = &DAT_20db0090;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_20dad981;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x58);
      *param_2 = (int)this + 0x58;
      (**(code **)(iVar3 + 4))((int)this + 0x58);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xcf51ed10) goto switchD_20da33b0_caseD_10b;
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_20da84b0;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_20dad981;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 100);
      *param_2 = (int)this + 100;
      (**(code **)(iVar3 + 4))((int)this + 100);
      return 0;
    }
  }
  *param_2 = 0;
LAB_20dad981:
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_20da357e(int param_1,uint *param_2,uint *param_3)

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
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    _DAT_20dc4dc8 = param_2[0xb];
    DAT_20dc4dd0 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  }
  if ((param_2[5] & 0x40) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 3;
  }
  piVar5 = (int *)param_2[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    puVar4 = (uint *)FUN_20da4760((void *)(param_1 + -0x38),param_2[3],param_3 + 4);
    if ((int)puVar4 < 0) {
      piVar5 = (int *)param_2[3];
      param_2 = puVar4;
      goto LAB_20dadba3;
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
    puVar2 = (&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x50) * 2];
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
LAB_20dadba3:
  (**(code **)(*piVar5 + 8))(piVar5);
  return (int)param_2;
}



undefined4 __fastcall FUN_20da374a(void *param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  iVar1 = FUN_20da37a0(param_1,0xfffffd24,0xb,(LONG *)((int)&uStack_8 + 2));
  if (iVar1 != 0) {
    *(int *)((int)param_1 + 400) = (int)uStack_8._2_2_;
  }
  FUN_20da385c((void *)((int)param_1 + 0xd8),*(int *)((int)param_1 + 0x6c));
  if (*(int *)((int)param_1 + 0x6c) == 0) {
    (**(code **)(*(int *)((int)param_1 + 0x124) + 0x18))();
  }
  FUN_20da3919(param_1);
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_20da37a0(void *this,undefined4 param_1,ushort param_2,LONG *param_3)

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
      (**(code **)*puVar2)(puVar2,&DAT_20da8570,(int *)((int)this + 0x84));
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
  iVar3 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&DAT_20da8560,0,2,&local_34,&local_14,0,0);
  if (-1 < iVar3) {
    HVar4 = VariantChangeType((VARIANTARG *)&((_union_2683 *)local_24)->n2,
                              (VARIANTARG *)&local_14.n2,0,param_2);
    if (-1 < HVar4) {
      bVar1 = (&DAT_20da8550)[param_2];
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



undefined4 __thiscall FUN_20da385c(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if ((param_1 != 0) && (DAT_20dc4dd4 == 0)) {
    DAT_20dc4dd4 = RegisterClipboardFormatA("Rich Text Format");
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if ((param_1 != 0) && (DAT_20dc4dd8 == 0)) {
    DAT_20dc4dd8 = RegisterClipboardFormatA("Link");
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  piVar1 = *(int **)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(undefined4 *)((int)this + 0x14) = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(undefined4 *)((int)this + 8) = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(undefined4 *)((int)this + 0x18) = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = *(int **)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    *(undefined4 *)((int)this + 0x1c) = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  if (*(LPVOID *)((int)this + 0x38) != (LPVOID)0x0) {
    HeapFree(DAT_20dc4190,0,*(LPVOID *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return 0;
}



void __fastcall FUN_20da3919(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_20da39a4(param_1,*(int *)((int)param_1 + 0x148));
  FUN_20da3f74(param_1,*(int *)((int)param_1 + 0x144));
  iVar2 = *(int *)((int)param_1 + 0x14c);
  uVar1 = *(undefined4 *)((int)param_1 + 0x150);
  *(int *)((int)param_1 + 0x1fc) = iVar2;
  *(int *)((int)param_1 + 0x204) = iVar2;
  *(undefined4 *)((int)param_1 + 0x200) = uVar1;
  *(undefined4 *)((int)param_1 + 0x208) = uVar1;
  if (*(short *)((int)param_1 + 0x1a4) == 1) {
    *(int *)((int)param_1 + 0x20c) = iVar2;
    *(int *)((int)param_1 + 0x210) = *(int *)((int)param_1 + 0x148) + -1;
  }
  else {
    if (*(short *)((int)param_1 + 0x1a4) == 2) {
      iVar2 = *(int *)((int)param_1 + 0x144) + -1;
    }
    *(int *)((int)param_1 + 0x20c) = iVar2;
    *(undefined4 *)((int)param_1 + 0x210) = uVar1;
  }
  uVar1 = FUN_20da41db(*(int *)((int)param_1 + 0x154));
  *(undefined4 *)((int)param_1 + 0x1bc) = uVar1;
  FUN_20da4248(param_1,0xffffffff);
  FUN_20da43e5(param_1);
  FUN_20da3c81(param_1);
  return;
}



undefined4 __thiscall FUN_20da39a4(void *this,int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  SIZE_T cb;
  undefined4 *puVar6;
  
  iVar1 = param_1;
  if (param_1 != *(int *)((int)this + 0x1f8)) {
    iVar5 = 1;
    if (0 < *(int *)((int)this + 500)) {
      iVar5 = *(int *)((int)this + 500);
    }
    if ((int)(350000 / (longlong)iVar5) < param_1) {
      return 0xb;
    }
    if (param_1 < *(int *)((int)this + 0x1f8)) {
      puVar6 = (undefined4 *)((int)this + 0x1ec);
      if (param_1 == 0) {
        if ((LPVOID)*puVar6 != (LPVOID)0x0) {
          CoTaskMemFree((LPVOID)*puVar6);
          *puVar6 = 0;
        }
      }
      else {
        pvVar2 = CoTaskMemRealloc((LPVOID)*puVar6,param_1 * 0xc);
        *puVar6 = pvVar2;
      }
      param_1 = 0;
      if (0 < *(int *)((int)this + 500)) {
        iVar5 = 0;
        do {
          iVar3 = iVar1;
          if (iVar1 < *(int *)((int)this + 0x1f8)) {
            do {
              FUN_20da7102(this,param_1,iVar3);
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)this + 0x1f8));
          }
          if (iVar1 == 0) {
            pvVar2 = *(LPVOID *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8));
            if (pvVar2 != (LPVOID)0x0) {
              CoTaskMemFree(pvVar2);
              *(undefined4 *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)) = 0;
            }
          }
          else {
            pvVar2 = CoTaskMemRealloc(*(LPVOID *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)),
                                      iVar1 * 0xc);
            if (pvVar2 == (LPVOID)0x0) {
              return 0xb;
            }
            *(LPVOID *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)) = pvVar2;
          }
          param_1 = param_1 + 1;
          iVar5 = iVar5 + 0x10;
        } while (param_1 < *(int *)((int)this + 500));
      }
    }
    else {
      cb = param_1 * 0xc;
      pvVar2 = CoTaskMemRealloc(*(LPVOID *)((int)this + 0x1ec),cb);
      if (pvVar2 == (LPVOID)0x0) {
        return 0xb;
      }
      iVar5 = *(int *)((int)this + 0x1f8);
      *(LPVOID *)((int)this + 0x1ec) = pvVar2;
      if (iVar5 < param_1) {
        iVar3 = iVar5 * 0xc;
        iVar5 = param_1 - iVar5;
        do {
          *(undefined4 *)(iVar3 + *(int *)((int)this + 0x1ec)) = 0xffffffff;
          *(undefined1 *)(iVar3 + 6 + *(int *)((int)this + 0x1ec)) = 0;
          *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0x1ec)) = 0;
          *(undefined1 *)(iVar3 + 4 + *(int *)((int)this + 0x1ec)) = 9;
          *(undefined1 *)(iVar3 + 5 + *(int *)((int)this + 0x1ec)) = 100;
          iVar3 = iVar3 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = 0;
      if (0 < *(int *)((int)this + 500)) {
        iVar5 = 0;
        do {
          pvVar2 = CoTaskMemRealloc(*(LPVOID *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)),cb);
          if (pvVar2 == (LPVOID)0x0) {
            return 0xb;
          }
          *(LPVOID *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)) = pvVar2;
          puVar6 = (undefined4 *)
                   (*(int *)(iVar5 + 0xc + *(int *)((int)this + 0x1e8)) +
                   *(int *)((int)this + 0x1f8) * 0xc);
          for (uVar4 = (iVar1 - *(int *)((int)this + 0x1f8)) * 3 & 0x3fffffff; uVar4 != 0;
              uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          param_1 = param_1 + 1;
          for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          iVar5 = iVar5 + 0x10;
        } while (param_1 < *(int *)((int)this + 500));
      }
    }
    *(int *)((int)this + 0x1f8) = iVar1;
    *(int *)((int)this + 0x148) = iVar1;
    if (iVar1 < *(int *)((int)this + 0x150)) {
      *(int *)((int)this + 0x150) = iVar1;
    }
    iVar5 = iVar1 + -1;
    if (iVar5 < *(int *)((int)this + 0x208)) {
      *(int *)((int)this + 0x208) = iVar5;
    }
    if (iVar5 < *(int *)((int)this + 0x210)) {
      *(int *)((int)this + 0x210) = iVar5;
    }
    iVar5 = *(int *)((int)this + 0x150);
    if ((*(int *)((int)this + 0x208) < iVar5) && (iVar5 < iVar1)) {
      *(int *)((int)this + 0x210) = iVar5;
      *(int *)((int)this + 0x208) = iVar5;
      FUN_20da3c27(this,(RECT *)0x0);
    }
    FUN_20da3c81(this);
  }
  return 0;
}



void __thiscall FUN_20da3c27(void *this,RECT *param_1)

{
  if ((*(uint *)((int)this + 0xb0) >> 1 & 1) == 0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x34))();
  }
  else {
    FUN_20da62ec(this,param_1,1);
  }
  return;
}



void __fastcall FUN_20da3c48(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (((piVar1 != (int *)0x0) && ((*(byte *)(param_1 + 0xbd) & 1) == 0)) &&
     ((**(code **)(*piVar1 + 0x10))(piVar1,1,0xffffffff), (*(uint *)(param_1 + 0xbc) >> 4 & 1) != 0)
     ) {
    (**(code **)(*(int *)(param_1 + 0x48) + 0x1c))(param_1 + 0x48,1,0,0);
  }
  return;
}



void __fastcall FUN_20da3c81(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  tagRECT local_18;
  int local_8;
  
  iVar2 = 0;
  if (((*(int *)((int)param_1 + 0x180) != 0) && (*(HWND *)((int)param_1 + 0xa0) != (HWND)0x0)) &&
     (*(int *)((int)param_1 + 0x244) == 0)) {
    *(undefined4 *)((int)param_1 + 0x244) = 1;
    SetScrollRange(*(HWND *)((int)param_1 + 0xa0),1,0,0,0);
    SetScrollRange(*(HWND *)((int)param_1 + 0xa0),0,0,0,0);
    if ((*(short *)((int)param_1 + 0x1a2) == 2) ||
       (iVar3 = local_8, *(short *)((int)param_1 + 0x1a2) == 3)) {
      GetClientRect(*(HWND *)((int)param_1 + 0xa0),&local_18);
      if ((*(short *)((int)param_1 + 0x1ac) != 0) && (*(short *)((int)param_1 + 0x1ae) != 0)) {
        local_18.bottom = local_18.bottom + 2;
      }
      if (0 < *(int *)((int)param_1 + 0x14c)) {
        do {
          uVar1 = FUN_20da5cca(param_1,iVar2);
          local_18.bottom = local_18.bottom - uVar1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int)param_1 + 0x14c));
      }
      iVar3 = *(int *)((int)param_1 + 0x144);
      do {
        iVar2 = iVar3;
        iVar3 = iVar2 + -1;
        if (iVar3 < *(int *)((int)param_1 + 0x14c)) goto LAB_20da3d58;
        uVar1 = FUN_20da5cca(param_1,iVar3);
        local_18.bottom = local_18.bottom - uVar1;
      } while (local_18.top < local_18.bottom);
      if (iVar3 < *(int *)((int)param_1 + 0x144) + -1) {
        iVar3 = iVar2;
      }
LAB_20da3d58:
      iVar2 = *(int *)((int)param_1 + 0x14c);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      SetScrollRange(*(HWND *)((int)param_1 + 0xa0),1,iVar2,iVar3,0);
      if (iVar3 < *(int *)((int)param_1 + 0x1fc)) {
        *(int *)((int)param_1 + 0x1fc) = iVar3;
      }
    }
    if ((*(short *)((int)param_1 + 0x1a2) == 1) || (*(short *)((int)param_1 + 0x1a2) == 3)) {
      GetClientRect(*(HWND *)((int)param_1 + 0xa0),&local_18);
      iVar2 = 0;
      if ((*(short *)((int)param_1 + 0x1ac) != 0) && (*(short *)((int)param_1 + 0x1ae) != 0)) {
        local_18.bottom = local_18.bottom + 2;
      }
      if (0 < *(int *)((int)param_1 + 0x150)) {
        do {
          uVar1 = FUN_20da5d02(param_1,iVar2);
          local_18.right = local_18.right - uVar1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int)param_1 + 0x150));
      }
      iVar3 = *(int *)((int)param_1 + 0x148);
      do {
        iVar2 = iVar3;
        iVar3 = iVar2 + -1;
        if (iVar3 < *(int *)((int)param_1 + 0x150)) goto LAB_20da3e12;
        uVar1 = FUN_20da5d02(param_1,iVar3);
        local_18.right = local_18.right - uVar1;
      } while (local_18.left < local_18.right);
      if (iVar3 < *(int *)((int)param_1 + 0x148) + -1) {
        iVar3 = iVar2;
      }
LAB_20da3e12:
      iVar2 = *(int *)((int)param_1 + 0x150);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      SetScrollRange(*(HWND *)((int)param_1 + 0xa0),0,iVar2,iVar3,0);
      local_8 = iVar3;
      if (iVar3 < *(int *)((int)param_1 + 0x200)) {
        *(int *)((int)param_1 + 0x200) = iVar3;
      }
    }
    if ((iVar3 != *(int *)((int)param_1 + 0x150)) &&
       ((*(short *)((int)param_1 + 0x1a2) == 2 || (*(short *)((int)param_1 + 0x1a2) == 3)))) {
      GetClientRect(*(HWND *)((int)param_1 + 0xa0),&local_18);
      iVar2 = 0;
      if ((*(short *)((int)param_1 + 0x1ac) != 0) && (*(short *)((int)param_1 + 0x1ae) != 0)) {
        local_18.bottom = local_18.bottom + 2;
      }
      if (0 < *(int *)((int)param_1 + 0x14c)) {
        do {
          uVar1 = FUN_20da5cca(param_1,iVar2);
          local_18.bottom = local_18.bottom - uVar1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int)param_1 + 0x14c));
      }
      iVar2 = *(int *)((int)param_1 + 0x144);
      do {
        iVar3 = iVar2;
        iVar2 = iVar3 + -1;
        if (iVar2 < *(int *)((int)param_1 + 0x14c)) goto LAB_20da3f3d;
        uVar1 = FUN_20da5cca(param_1,iVar2);
        local_18.bottom = local_18.bottom - uVar1;
      } while (local_18.top < local_18.bottom);
      if (iVar2 < *(int *)((int)param_1 + 0x144) + -1) {
        iVar2 = iVar3;
      }
LAB_20da3f3d:
      iVar3 = *(int *)((int)param_1 + 0x14c);
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      SetScrollRange(*(HWND *)((int)param_1 + 0xa0),1,iVar3,iVar2,0);
      if (iVar2 < *(int *)((int)param_1 + 0x1fc)) {
        *(int *)((int)param_1 + 0x1fc) = iVar2;
      }
    }
    if (*(int *)((int)param_1 + 400) == 0) {
      iVar2 = *(int *)((int)param_1 + 0x200);
    }
    else {
      iVar2 = (local_8 - *(int *)((int)param_1 + 0x200)) + *(int *)((int)param_1 + 0x150);
    }
    SetScrollPos(*(HWND *)((int)param_1 + 0xa0),0,iVar2,1);
    SetScrollPos(*(HWND *)((int)param_1 + 0xa0),1,*(int *)((int)param_1 + 0x1fc),1);
    *(undefined4 *)((int)param_1 + 0x244) = 0;
  }
  return;
}



undefined4 __thiscall FUN_20da3f74(void *this,int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_c;
  int local_8;
  
  if (param_1 != *(int *)((int)this + 500)) {
    iVar4 = 1;
    if (0 < *(int *)((int)this + 0x148)) {
      iVar4 = *(int *)((int)this + 0x148);
    }
    if ((int)(350000 / (longlong)iVar4) < param_1) {
      return 0xb;
    }
    if (param_1 == 0) {
      local_c = 0;
    }
    else {
      local_c = ((param_1 + -1) / 100 + 1) * 100;
    }
    if (param_1 < *(int *)((int)this + 500)) {
      local_8 = param_1;
      iVar4 = param_1 << 4;
      do {
        iVar2 = 0;
        if (0 < *(int *)((int)this + 0x1f8)) {
          do {
            FUN_20da7102(this,local_8,iVar2);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)((int)this + 0x1f8));
        }
        pvVar1 = *(LPVOID *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8));
        if (pvVar1 != (LPVOID)0x0) {
          CoTaskMemFree(pvVar1);
          *(undefined4 *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) = 0;
        }
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x10;
      } while (local_8 < *(int *)((int)this + 500));
      if (local_c != *(int *)((int)this + 0x1f0)) {
        puVar5 = (undefined4 *)((int)this + 0x1e8);
        if (local_c == 0) {
          if ((LPVOID)*puVar5 != (LPVOID)0x0) {
            CoTaskMemFree((LPVOID)*puVar5);
          }
          *puVar5 = 0;
        }
        else {
          pvVar1 = CoTaskMemRealloc((LPVOID)*puVar5,local_c << 4);
          *puVar5 = pvVar1;
        }
      }
    }
    else {
      if (local_c != *(int *)((int)this + 0x1f0)) {
        pvVar1 = CoTaskMemRealloc(*(LPVOID *)((int)this + 0x1e8),local_c << 4);
        if (pvVar1 == (LPVOID)0x0) {
          return 0xb;
        }
        *(LPVOID *)((int)this + 0x1e8) = pvVar1;
        iVar4 = *(int *)((int)this + 0x1f0);
        if (iVar4 < local_c) {
          iVar2 = iVar4 << 4;
          iVar4 = local_c - iVar4;
          do {
            puVar5 = (undefined4 *)(iVar2 + *(int *)((int)this + 0x1e8));
            iVar2 = iVar2 + 0x10;
            iVar4 = iVar4 + -1;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
          } while (iVar4 != 0);
        }
      }
      local_8 = *(int *)((int)this + 500);
      if (local_8 < param_1) {
        iVar4 = local_8 << 4;
        do {
          iVar2 = *(int *)((int)this + 0x148);
          puVar5 = (undefined4 *)CoTaskMemAlloc(iVar2 * 0xc);
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = puVar5;
            for (uVar3 = iVar2 * 3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
          *(undefined4 **)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) = puVar5;
          puVar5 = (undefined4 *)(*(int *)((int)this + 0x1e8) + iVar4);
          if (puVar5[3] == 0) {
            return 0xb;
          }
          *puVar5 = 0xffffffff;
          *(undefined1 *)(iVar4 + 8 + *(int *)((int)this + 0x1e8)) = 0;
          *(undefined4 *)(iVar4 + 4 + *(int *)((int)this + 0x1e8)) = 0;
          local_8 = local_8 + 1;
          iVar4 = iVar4 + 0x10;
        } while (local_8 < param_1);
      }
    }
    *(int *)((int)this + 500) = param_1;
    *(int *)((int)this + 0x144) = param_1;
    *(int *)((int)this + 0x1f0) = local_c;
    if (param_1 < *(int *)((int)this + 0x14c)) {
      *(int *)((int)this + 0x14c) = param_1;
    }
    iVar4 = param_1 + -1;
    if (iVar4 < *(int *)((int)this + 0x204)) {
      *(int *)((int)this + 0x204) = iVar4;
    }
    if (iVar4 < *(int *)((int)this + 0x20c)) {
      *(int *)((int)this + 0x20c) = iVar4;
    }
    iVar4 = *(int *)((int)this + 0x14c);
    if ((*(int *)((int)this + 0x204) < iVar4) && (iVar4 < param_1)) {
      *(int *)((int)this + 0x20c) = iVar4;
      *(int *)((int)this + 0x204) = iVar4;
      FUN_20da3c27(this,(RECT *)0x0);
    }
    FUN_20da3c81(this);
  }
  return 0;
}



void __cdecl FUN_20da41db(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4ddc == 0) {
    FUN_20da4216();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  MulDiv(DAT_20dc4ddc,param_1,0x5a0);
  return;
}



void FUN_20da4216(void)

{
  HDC hdc;
  
  hdc = GetDC((HWND)0x0);
  DAT_20dc4de0 = GetDeviceCaps(hdc,0x58);
  DAT_20dc4ddc = GetDeviceCaps(hdc,0x5a);
  ReleaseDC((HWND)0x0,hdc);
  return;
}



void __thiscall FUN_20da4248(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  HBRUSH pHVar2;
  HPEN pHVar3;
  
  CVar1 = param_1;
  if ((int)param_1 < -1) {
    return;
  }
  if ((int)param_1 < 1) {
    if (*(HGDIOBJ *)((int)this + 0x1d8) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x1d8));
    }
    OleTranslateColor(*(undefined4 *)((int)this + 0x158),0,&param_1);
    pHVar2 = CreateSolidBrush(param_1);
    *(HBRUSH *)((int)this + 0x1d8) = pHVar2;
    if (-1 < (int)CVar1) {
      return;
    }
LAB_20da42a3:
    if (*(HGDIOBJ *)((int)this + 0x1dc) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x1dc));
    }
    OleTranslateColor(*(undefined4 *)((int)this + 0x160),0,&param_1);
    pHVar2 = CreateSolidBrush(param_1);
    *(HBRUSH *)((int)this + 0x1dc) = pHVar2;
    if (-1 < (int)CVar1) {
      return;
    }
LAB_20da42d7:
    if (*(HGDIOBJ *)((int)this + 0x1e0) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x1e0));
    }
    OleTranslateColor(*(undefined4 *)((int)this + 0x168),0,&param_1);
    pHVar2 = CreateSolidBrush(param_1);
    *(HBRUSH *)((int)this + 0x1e0) = pHVar2;
    if (-1 < (int)CVar1) {
      return;
    }
LAB_20da430b:
    if (*(HGDIOBJ *)((int)this + 0x1e4) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x1e4));
    }
    OleTranslateColor(*(undefined4 *)((int)this + 0x170),0,&param_1);
    pHVar2 = CreateSolidBrush(param_1);
    *(HBRUSH *)((int)this + 0x1e4) = pHVar2;
    if (-1 < (int)CVar1) {
      return;
    }
  }
  else {
    if (param_1 == 1) goto LAB_20da42a3;
    if (param_1 == 2) goto LAB_20da42d7;
    if (param_1 == 3) goto LAB_20da430b;
    if (param_1 != 4) {
      if (param_1 != 5) {
        return;
      }
      goto LAB_20da4379;
    }
  }
  if (*(HGDIOBJ *)((int)this + 0x1d0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x1d0));
  }
  OleTranslateColor(*(undefined4 *)((int)this + 0x174),0,&param_1);
  pHVar3 = CreatePen(0,(int)*(short *)((int)this + 0x1b2),param_1);
  *(HPEN *)((int)this + 0x1d0) = pHVar3;
  if (-1 < (int)CVar1) {
    return;
  }
LAB_20da4379:
  if (*(HGDIOBJ *)((int)this + 0x1d4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)this + 0x1d4));
  }
  OleTranslateColor(*(undefined4 *)((int)this + 0x178),0,&param_1);
  pHVar3 = CreatePen(0,(int)*(short *)((int)this + 0x1b2),param_1);
  *(HPEN *)((int)this + 0x1d4) = pHVar3;
  return;
}



int __fastcall FUN_20da43e5(void *param_1)

{
  int *piVar1;
  HDC hdc;
  int iVar2;
  uint uVar3;
  HFONT h;
  BYTE *local_94 [31];
  byte local_18;
  int local_14;
  HFONT local_10;
  HDC local_c;
  HFONT local_8;
  
  hdc = GetDC((HWND)0x0);
  local_c = hdc;
  FUN_20da44f3(param_1);
  local_10 = FUN_20da4716((int)param_1);
  h = local_10;
  if ((local_10 == (HFONT)0x0) &&
     ((piVar1 = *(int **)((int)param_1 + 0x224), piVar1 == (int *)0x0 ||
      (iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,&local_8), h = local_8, iVar2 != 0)))) {
    local_8 = (HFONT)0x0;
  }
  else {
    local_8 = (HFONT)SelectObject(hdc,h);
  }
  uVar3 = FUN_20da4739(hdc,"Hj",2);
  *(uint *)((int)param_1 + 0x1b8) = (uVar3 >> 0x10) + 3;
  if (*(LPCWSTR *)((int)param_1 + 0x220) != (LPCWSTR)0x0) {
    iVar2 = lstrlenW(*(LPCWSTR *)((int)param_1 + 0x220));
    uVar3 = iVar2 * 2 + 2;
    FUN_20da29fd(local_94,uVar3);
    WideCharToMultiByte(0,0,*(LPCWSTR *)((int)param_1 + 0x220),-1,(LPSTR)local_94[0],uVar3,
                        (LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = FUN_20da96d0(param_1,local_c,local_94[0]);
    if ((local_94[0] != (BYTE *)0x0) && ((local_18 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_94[0]);
    }
  }
  if (local_8 != (HFONT)0x0) {
    SelectObject(local_c,local_8);
  }
  if (local_10 != (HFONT)0x0) {
    FUN_20db7138(local_10);
  }
  ReleaseDC((HWND)0x0,local_c);
  return local_14;
}



void __fastcall FUN_20da44f3(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *local_8;
  
  puVar1 = (undefined4 *)((int)param_1 + 0x224);
  if (*(int *)((int)param_1 + 0x224) != 0) {
    return;
  }
  local_8 = (int *)0x0;
  uVar3 = FUN_20da456d(param_1,(int *)&local_8);
  if (uVar3 != 0) {
    iVar4 = (**(code **)(*local_8 + 0x50))(local_8,puVar1);
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (-1 < iVar4) {
      (**(code **)(*(int *)((int)param_1 + 0x124) + 0x14))(*puVar1);
      *(uint *)((int)param_1 + 0x1b4) = *(uint *)((int)param_1 + 0x1b4) | 4;
      goto LAB_20da4564;
    }
  }
  OleCreateFontIndirect(&DAT_20daf818,&DAT_20da85a0,puVar1);
  *(uint *)((int)param_1 + 0x1b4) = *(uint *)((int)param_1 + 0x1b4) & 0xfffffffb;
  (**(code **)(*(int *)((int)param_1 + 0x124) + 0x14))(*puVar1);
LAB_20da4564:
  FUN_20da43e5(param_1);
  return;
}



uint __thiscall FUN_20da456d(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  *param_1 = 0;
  uVar2 = FUN_20da37a0(this,0xfffffd41,9,(LONG *)&param_1);
  if (uVar2 != 0) {
    (**(code **)*param_1)(param_1,&DAT_20da85a0,piVar1);
    (**(code **)(*param_1 + 8))(param_1);
    uVar2 = (uint)(*piVar1 != 0);
  }
  return uVar2;
}



int __fastcall FUN_20da4600(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)&PTR_LAB_20da8450;
  if ((undefined4 *)param_1[2] == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_20da4a18((undefined4 *)param_1[2],&DAT_20da85b0,param_1,param_1[3],1);
  if (param_1[7] != 0) {
    (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[5] = 0;
  return iVar1;
}



int FUN_20da4644(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  iVar2 = (**(code **)*param_1)(param_1,&DAT_20da85c0,&param_1);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_8);
    (**(code **)(*param_1 + 8))(param_1);
    piVar1 = param_3;
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_8 + 0x14))(local_8,param_3,param_4);
      (**(code **)(*local_8 + 8))(local_8);
      if ((param_5 == 0) && (-1 < iVar2)) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  return iVar2;
}



HFONT __fastcall FUN_20da4716(int param_1)

{
  int *piVar1;
  int iVar2;
  HFONT pHVar3;
  longlong lVar4;
  LOGFONTA local_44;
  HANDLE local_8;
  
  if (((*(float *)(param_1 + 0x21c) != 0.0) &&
      (piVar1 = *(int **)(param_1 + 0x224), piVar1 != (int *)0x0)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,&local_8), iVar2 == 0)) {
    GetObjectA(local_8,0x3c,&local_44);
    lVar4 = __ftol();
    local_44.lfWidth = FUN_20da41db((int)lVar4);
    local_44.lfWidth = -local_44.lfWidth;
    pHVar3 = FUN_20db6f95(&local_44);
    return pHVar3;
  }
  return (HFONT)0x0;
}



undefined4 __cdecl FUN_20da4739(HDC param_1,LPCSTR param_2,int param_3)

{
  tagSIZE local_c;
  
  GetTextExtentPoint32A(param_1,param_2,param_3,&local_c);
  return CONCAT22((undefined2)local_c.cy,(undefined2)local_c.cx);
}



undefined4 __thiscall FUN_20da4760(void *this,undefined4 param_1,undefined4 *param_2)

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
    puVar4 = (undefined4 *)HeapAlloc(DAT_20dc4190,0,0x20);
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
      pvVar3 = HeapReAlloc(DAT_20dc4190,0,*(LPVOID *)((int)this + 4),iVar2 * 4 + 0x20);
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



void FUN_20da478c(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7fffbffb;
  if (*(char *)((int)param_1 + 8) == '\0') {
    if (*(int *)((&PTR_PTR_20dc489c)[*(int *)((int)param_1 + -0xc) * 2] + 0x24) != 0) {
      iVar2 = (**(code **)*param_2)
                        (param_2,*(int *)((&PTR_PTR_20dc489c)[*(int *)((int)param_1 + -0xc) * 2] +
                                         0x24),&param_2);
    }
    if (-1 < iVar2) goto LAB_20da47c9;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_20da8570,&param_2);
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_20da85b0,&param_2);
  }
  if (iVar2 < 0) {
    return;
  }
LAB_20da47c9:
  FUN_20da4760(param_1,param_2,param_3);
  return;
}



void FUN_20da4879(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_20da48a5(param_2,param_3);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x4c) + 0x40))((int *)(param_1 + -0x4c),param_2,param_3);
  }
  return;
}



undefined4 FUN_20da48a5(int *param_1,undefined4 param_2)

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
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentX_20dc4de4,local_20,param_2);
  local_10 = local_18;
  if (-1 < iVar1) {
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentY_20dc4df8,local_20,param_2);
    if (-1 < iVar1) {
      local_c = local_18;
      FUN_20da492b(&local_10,(int *)(local_8 + 0x88));
      return 0;
    }
  }
  *(undefined4 *)(local_8 + 0x88) = 100;
  *(undefined4 *)(local_8 + 0x8c) = 0x32;
  return 0;
}



void __cdecl FUN_20da492b(int *param_1,int *param_2)

{
  FUN_20da496d();
  *param_2 = (*param_1 * DAT_20dc4e0c + 0x4f6) / 0x9ec;
  param_2[1] = (param_1[1] * DAT_20dc4e10 + 0x4f6) / 0x9ec;
  return;
}



void FUN_20da496d(void)

{
  HDC hdc;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4e14 == '\0') {
    hdc = GetDC((HWND)0x0);
    DAT_20dc4e0c = GetDeviceCaps(hdc,0x58);
    DAT_20dc4e10 = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    DAT_20dc4e14 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return;
}



int FUN_20da4a18(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  piVar1 = param_3;
  if (param_5 == 0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  iVar2 = (**(code **)*param_1)(param_1,&DAT_20da85c0,&param_3);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_3 + 0x10))(param_3,param_2,&local_8);
    (**(code **)(*param_3 + 8))(param_3);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_8 + 0x18))(local_8,param_4);
      (**(code **)(*local_8 + 8))(local_8);
      if ((param_5 == 0) && (iVar2 < 0)) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
  }
  return iVar2;
}



int __thiscall FUN_20da4aa2(int *param_1,int param_2,int *param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  iVar2 = (**(code **)(*param_1 + 0x18))(param_1,0,0,&local_c);
  if (iVar2 < 0) {
    return unaff_EDI;
  }
  local_20 = param_2;
  local_10 = local_c;
  local_1c = param_3;
  local_14 = param_5;
  local_18 = param_4;
  iVar2 = FUN_20da520f((BSTR)&local_20,3,4,(ushort *)(param_1 + 0x51),(BSTR)0x2);
  if (((((((((-1 < iVar2) &&
            (iVar2 = FUN_20da520f((BSTR)&local_20,3,5,(ushort *)(param_1 + 0x52),(BSTR)0x2),
            -1 < iVar2)) &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,3,6,(ushort *)(param_1 + 0x53),(BSTR)0x1),
           -1 < iVar2)) &&
          ((iVar2 = FUN_20da520f((BSTR)&local_20,3,7,(ushort *)(param_1 + 0x54),(BSTR)0x1),
           -1 < iVar2 &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,3,0x21,(ushort *)(param_1 + 0x55),(BSTR)0x0),
           -1 < iVar2)))) &&
         ((iVar2 = FUN_20da520f((BSTR)&local_20,3,-0x1f5,(ushort *)(param_1 + 0x56),(BSTR)0x80000005
                               ), -1 < iVar2 &&
          ((iVar2 = FUN_20da520f((BSTR)&local_20,3,-0x201,(ushort *)(param_1 + 0x57),
                                 (BSTR)0x80000008), -1 < iVar2 &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,3,0xe,(ushort *)(param_1 + 0x58),(BSTR)0x8000000f),
           -1 < iVar2)))))) &&
        (iVar2 = FUN_20da520f((BSTR)&local_20,3,0xf,(ushort *)(param_1 + 0x59),(BSTR)0x80000012),
        -1 < iVar2)) &&
       ((((iVar2 = FUN_20da520f((BSTR)&local_20,3,0x10,(ushort *)(param_1 + 0x5a),(BSTR)0x8000000d),
          -1 < iVar2 &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,3,0x11,(ushort *)(param_1 + 0x5b),(BSTR)0x8000000e),
          -1 < iVar2)) &&
         (iVar2 = FUN_20da520f((BSTR)&local_20,3,0x12,(ushort *)(param_1 + 0x5c),(BSTR)0x808080),
         -1 < iVar2)) &&
        (((iVar2 = FUN_20da520f((BSTR)&local_20,3,0x24,(ushort *)(param_1 + 0x5d),(BSTR)0xc0c0c0),
          -1 < iVar2 &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,3,0x25,(ushort *)(param_1 + 0x5e),(BSTR)0x0),
          -1 < iVar2)) &&
         ((iVar2 = FUN_20da520f((BSTR)&local_20,0xb,0x13,(ushort *)(param_1 + 0x5f),(BSTR)0x0),
          -1 < iVar2 &&
          ((iVar2 = FUN_20da520f((BSTR)&local_20,0xb,0x19,(ushort *)(param_1 + 0x60),(BSTR)0x1),
           -1 < iVar2 &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,0xb,0x33,(ushort *)(param_1 + 0x61),(BSTR)0x1),
           -1 < iVar2)))))))))) &&
      (((iVar2 = FUN_20da520f((BSTR)&local_20,0xb,0x16,(ushort *)(param_1 + 0x62),(BSTR)0x0),
        -1 < iVar2 &&
        (((iVar2 = FUN_20da520f((BSTR)&local_20,0xb,-0x202,(ushort *)(param_1 + 99),(BSTR)0x1),
          -1 < iVar2 &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,0xb,-0x263,(ushort *)(param_1 + 100),(BSTR)0x0),
          -1 < iVar2)) &&
         (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x14,(ushort *)(param_1 + 0x65),(BSTR)0x0),
         -1 < iVar2)))) &&
       (((iVar2 = FUN_20da520f((BSTR)&local_20,2,0x15,(ushort *)((int)param_1 + 0x196),(BSTR)0x0),
         -1 < iVar2 &&
         (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x17,(ushort *)(param_1 + 0x66),(BSTR)0x1),
         -1 < iVar2)) &&
        (((iVar2 = FUN_20da520f((BSTR)&local_20,2,0x18,(ushort *)((int)param_1 + 0x19a),(BSTR)0x1),
          -1 < iVar2 &&
          ((iVar2 = FUN_20da520f((BSTR)&local_20,2,-0x1ff,(ushort *)(param_1 + 0x67),(BSTR)0x0),
           -1 < iVar2 &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x22,(ushort *)((int)param_1 + 0x19e),(BSTR)0x1),
           -1 < iVar2)))) &&
         (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x23,(ushort *)(param_1 + 0x68),(BSTR)0x2),
         -1 < iVar2)))))))) &&
     (((((((iVar2 = FUN_20da520f((BSTR)&local_20,2,0x1a,(ushort *)((int)param_1 + 0x1a2),(BSTR)0x3),
           -1 < iVar2 &&
           (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x2f,(ushort *)(param_1 + 0x69),(BSTR)0x0),
           -1 < iVar2)) &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x30,(ushort *)((int)param_1 + 0x1a6),(BSTR)0x0),
          -1 < iVar2)) &&
         ((iVar2 = FUN_20da520f((BSTR)&local_20,2,0x34,(ushort *)(param_1 + 0x6a),(BSTR)0x0),
          -1 < iVar2 &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x32,(ushort *)((int)param_1 + 0x1aa),(BSTR)0x0),
          -1 < iVar2)))) &&
        ((iVar2 = FUN_20da520f((BSTR)&local_20,2,-0x1f8,(ushort *)(param_1 + 0x6b),(BSTR)0x1),
         -1 < iVar2 &&
         ((iVar2 = FUN_20da520f((BSTR)&local_20,2,-0x208,(ushort *)((int)param_1 + 0x1ae),(BSTR)0x1)
          , -1 < iVar2 &&
          (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x35,(ushort *)(param_1 + 0x6c),(BSTR)0x0),
          -1 < iVar2)))))) &&
       (iVar2 = FUN_20da520f((BSTR)&local_20,2,0x59,(ushort *)((int)param_1 + 0x1b2),(BSTR)0x1),
       -1 < iVar2)) &&
      (iVar2 = FUN_20da520f((BSTR)&local_20,8,2,(ushort *)(param_1 + 0x88),(BSTR)0x0), -1 < iVar2)))
     ) {
    if (param_2 == 0) {
      if (((*(byte *)(param_1 + 0x6d) & 4) == 0) &&
         (iVar2 = FUN_20da520f((BSTR)&local_20,0x29a,-0x200,(ushort *)(param_1 + 0x89),(BSTR)0x0),
         iVar2 < 0)) goto LAB_20da5094;
    }
    else {
      local_8 = 0;
      FUN_20da520f((BSTR)&local_20,0x29a,-0x200,(ushort *)&local_8,(BSTR)0x0);
      if (local_8 != 0) {
        piVar1 = (int *)param_1[0x89];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        param_1[0x6d] = param_1[0x6d] & 0xfffffffb;
        param_1[0x89] = local_8;
      }
    }
    iVar2 = FUN_20da520f((BSTR)&local_20,0x29b,0x36,(ushort *)(param_1 + 0x8a),(BSTR)0x0);
    if (-1 < iVar2) {
      if (param_2 == 0) {
        FUN_20dab585(param_1 + 0x36,param_3,param_4);
      }
      else {
        FUN_20da53c3(param_1 + 0x36,param_3,param_5);
      }
    }
  }
LAB_20da5094:
  piVar1 = local_c;
  if (local_c != (int *)0x0) {
    local_c = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return unaff_EDI;
}



HRESULT FUN_20da5109(HREFTYPE param_1,ITypeInfo *param_2,undefined4 param_3,undefined4 *param_4)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  HVar2 = param_1;
  puVar1 = (&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2];
  ppTInfo = (ITypeInfo **)(puVar1 + 0x2c);
  if (*(int *)(puVar1 + 0x2c) == 0) {
    HVar6 = LoadRegTypeLib((GUID *)PTR_LAB_20dc4e18,*(WORD *)(puVar1 + 0x18),
                           *(WORD *)(puVar1 + 0x1c),0,&local_8);
    if (HVar6 < 0) {
      DVar3 = GetModuleFileNameA(DAT_20dc4164,local_18c,0x104);
      if (DVar3 == 0) {
        HVar6 = -0x7fffbffb;
        goto LAB_20da515c;
      }
      iVar4 = lstrlenA(local_18c);
      cchWideChar = iVar4 * 2 + 2;
      FUN_20da29fd(local_88,cchWideChar);
      MultiByteToWideChar(0,0,local_18c,-1,local_88[0],cchWideChar);
      HVar6 = LoadTypeLib(local_88[0],&local_8);
      if (HVar6 < 0) {
        if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_20dc4190,0,local_88[0]);
        }
        goto LAB_20da515c;
      }
      if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
        HeapFree(DAT_20dc4190,0,local_88[0]);
      }
    }
    HVar6 = (*local_8->lpVtbl->GetTypeInfoOfGuid)
                      (local_8,*(GUID **)((&PTR_PTR_20dc489c)[*(int *)(HVar2 + 0x14) * 2] + 0x20),
                       &param_2);
    (*local_8->lpVtbl->Release)(local_8);
    if (HVar6 < 0) goto LAB_20da515c;
    HVar6 = (*param_2->lpVtbl->GetRefTypeOfImplType)(param_2,0xffffffff,&param_1);
    if (HVar6 < 0) {
      (*param_2->lpVtbl->Release)(param_2);
      goto LAB_20da515c;
    }
    HVar6 = (*param_2->lpVtbl->GetRefTypeInfo)(param_2,param_1,ppTInfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (HVar6 < 0) goto LAB_20da515c;
    *(undefined1 *)(HVar2 + 0x18) = 1;
    *(int *)((&PTR_PTR_20dc489c)[*(int *)(HVar2 + 0x14) * 2] + 0x30) =
         *(int *)((&PTR_PTR_20dc489c)[*(int *)(HVar2 + 0x14) * 2] + 0x30) + 1;
    puVar5 = param_4;
  }
  (*(*ppTInfo)->lpVtbl->AddRef)(*ppTInfo);
  *puVar5 = *ppTInfo;
  HVar6 = 0;
LAB_20da515c:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return HVar6;
}



int __cdecl FUN_20da520f(BSTR param_1,uint param_2,int param_3,ushort *param_4,BSTR param_5)

{
  undefined4 uVar1;
  int *piVar2;
  BSTR pOVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  UINT UVar7;
  bool bVar8;
  _union_2683 local_1c;
  undefined1 local_c [4];
  int *local_8;
  
  pOVar3 = param_1;
  local_8 = *(int **)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_1 + 6);
  iVar6 = *(int *)(param_1 + 4);
  param_3 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))
                      (*(int **)(param_1 + 8),param_3,&param_1,1,local_c);
  if (param_3 < 0) {
    return param_3;
  }
  VariantInit((VARIANTARG *)&local_1c.n2);
  local_1c.n2.vt = (VARTYPE)param_2;
  local_1c._8_4_ = (BSTR)0x0;
  if (*(int *)pOVar3 != 0) {
    if (((VARTYPE)param_2 == 0x29a) || ((VARTYPE)param_2 == 0x29b)) {
      local_1c._8_4_ = (BSTR)0x0;
      local_1c.n2.vt = 0xd;
      iVar6 = (**(code **)(*local_8 + 0xc))(local_8,param_1,&local_1c,uVar1);
      puVar4 = param_4;
      if (-1 < iVar6) {
        piVar2 = *(int **)param_4;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *(undefined4 *)puVar4 = local_1c._8_4_;
      }
    }
    else {
      param_3 = (**(code **)(*local_8 + 0xc))(local_8,param_1,&local_1c,uVar1);
      if (param_3 < 0) {
        param_3 = 0;
      }
      else {
        uVar5 = param_2 & 0xffff;
        if (uVar5 == 2) {
          *param_4 = local_1c._8_2_;
        }
        else if ((uVar5 == 3) || (uVar5 == 8)) {
          *(undefined4 *)param_4 = local_1c._8_4_;
        }
        else if (uVar5 == 0xb) {
          *(int *)param_4 = (int)(short)local_1c._8_2_;
        }
      }
    }
    goto LAB_20da528d;
  }
  uVar5 = param_2 & 0xffff;
  if (uVar5 == 2) {
LAB_20da532b:
    local_1c._10_2_ = 0;
    local_1c._8_2_ = *param_4;
    if (iVar6 == 0) {
      bVar8 = *param_4 == (ushort)param_5;
LAB_20dad570:
      if (bVar8) goto LAB_20da528d;
    }
  }
  else if (uVar5 == 3) {
    local_1c._8_4_ = *(undefined4 *)param_4;
    if (iVar6 == 0) {
      bVar8 = (BSTR)local_1c._8_4_ == param_5;
      goto LAB_20dad570;
    }
  }
  else if (uVar5 == 8) {
    local_1c._8_4_ = *(undefined4 *)param_4;
    if (iVar6 == 0) {
      UVar7 = SysStringLen((BSTR)local_1c._8_4_);
      bVar8 = UVar7 == 0;
      goto LAB_20dad570;
    }
  }
  else {
    if (uVar5 == 0xb) goto LAB_20da532b;
    if ((uVar5 < 0x29a) || (0x29b < uVar5)) goto LAB_20da528d;
    local_1c.n2.vt = 0xd;
    local_1c._8_4_ = *(undefined4 *)param_4;
    if ((BSTR)local_1c._8_4_ == (BSTR)0x0) goto LAB_20da528d;
    if ((VARTYPE)param_2 != 0x29a) {
      param_2 = 0xffffffff;
      (**(code **)(*(int *)local_1c._8_4_ + 0x14))(local_1c._8_4_,&param_2);
      if (((VARTYPE)param_2 == -1) || ((VARTYPE)param_2 == 0)) goto LAB_20da528d;
    }
  }
  param_3 = (**(code **)(*local_8 + 0x10))(local_8,param_1,&local_1c);
LAB_20da528d:
  SysFreeString(param_1);
  return param_3;
}



undefined4 __thiscall FUN_20da53c3(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  _union_2683 local_14;
  
  VariantInit((VARIANTARG *)&local_14.n2);
  local_14.n2.vt = 2;
  if ((*(uint *)((int)this + 0x2c) >> 8 & 1) != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u_OLEDragMode_20dc5278,&local_14,param_2);
    if (iVar1 < 0) {
      local_14._8_4_ = local_14._8_4_ & 0xffff0000;
    }
    *(uint *)((int)this + 0x2c) =
         (local_14._8_4_ & 3) << 4 | *(uint *)((int)this + 0x2c) & 0xffffffcf;
  }
  if ((*(uint *)((int)this + 0x2c) >> 9 & 1) != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u_OLEDropMode_20dc4e20,&local_14,param_2);
    if (iVar1 < 0) {
      local_14._8_4_ = 0;
    }
    *(uint *)((int)this + 0x2c) =
         (local_14._8_4_ & 3) << 6 | *(uint *)((int)this + 0x2c) & 0xffffff3f;
  }
  return 0;
}



undefined4 __thiscall FUN_20da5443(void *this,int *param_1,undefined4 *param_2)

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
    pcVar4 = &DAT_20da85c0;
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
  uVar1 = FUN_20da5491(this,param_1,param_2);
  return uVar1;
}



undefined4 __thiscall FUN_20da5491(void *this,int *param_1,undefined4 *param_2)

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
    if (!bVar5) goto LAB_20da54a6;
LAB_20da54d2:
    piVar3 = *(int **)((int)this + 8);
    *param_2 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  else {
LAB_20da54a6:
    if ((*(char *)((int)this + 0x19) != '\0') && (*param_1 == -0x20f4c2a0)) {
      iVar2 = 0x10;
      bVar5 = true;
      piVar3 = param_1;
      pcVar4 = &DAT_20db0170;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = (char)*piVar3 == *pcVar4;
        piVar3 = (int *)((int)piVar3 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_20da54d2;
    }
    uVar1 = FUN_20da54e4(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_20da54e4(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004002;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_20da54fd(uint param_1,uint param_2)

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
LAB_20dadc87:
    uVar5 = FUN_20da63fe((void *)(param_1 - 0x38));
    if (uVar5 != 0) {
      piVar2 = *(int **)(param_1 + 0x38);
      if ((piVar2 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2), iVar4 != -0x7fffbfff)) {
        return iVar4;
      }
      param_2 = -(uint)((void *)(param_1 - 0x38) != (void *)0x0) & param_1;
      iVar4 = lstrlenA(*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 4));
      uVar5 = iVar4 * 2 + 2;
      FUN_20da29fd(local_88,uVar5);
      MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 4),-1,
                          local_88[0],uVar5);
      in_stack_0000001c = local_88[0];
      lpMem = (undefined4 *)
              HeapAlloc(DAT_20dc4190,0,
                        (uint)*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 0x4a)
                        << 4);
      if (lpMem == (undefined4 *)0x0) {
        if ((local_88[0] != (LPWSTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_20dc4190,0,local_88[0]);
        }
        return -0x7ff8fff2;
      }
      uVar5 = (uint)*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      if (uVar5 != 0) {
        puVar6 = *(undefined4 **)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 0x4c);
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
      FUN_20db7da5(local_8,1);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      uVar15 = 0;
      uVar14 = 0;
      uVar5 = (uint)*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      puVar12 = &param_2;
      uVar11 = 1;
      pWVar10 = in_stack_0000001c;
      puVar6 = lpMem;
      uVar13 = _DAT_20dc4dc8;
      iVar4 = GetSystemMetrics(1);
      iVar4 = iVar4 / 2;
      iVar7 = GetSystemMetrics(0);
      iVar7 = iVar7 / 2;
      pHVar8 = GetActiveWindow();
      in_stack_0000001c =
           (LPWSTR)OleCreatePropertyFrame
                             (pHVar8,iVar7,iVar4,pWVar10,uVar11,puVar12,uVar5,puVar6,uVar13,uVar14,
                              uVar15);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      FUN_20db7da5(local_8,0);
      HeapFree(DAT_20dc4190,0,lpMem);
      if (local_88[0] != (LPWSTR)0x0) {
        if ((local_c & 1) != 0) {
          HeapFree(DAT_20dc4190,0,local_88[0]);
          return (int)in_stack_0000001c;
        }
        return (int)in_stack_0000001c;
      }
      return (int)in_stack_0000001c;
    }
LAB_20dadc98:
    iVar4 = 0;
  }
  else {
    if ((int)param_2 < -5) {
LAB_20dadc45:
      if ((int)param_2 < 1) {
        return -0x7fffbfff;
      }
      iVar4 = (**(code **)(*(int *)(param_1 - 0x38) + 0x60))(param_2);
      if (iVar4 == 0x40180) {
        iVar4 = FUN_20da5548((void *)(param_1 - 0x38),0);
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
          FUN_20da6032((void *)(param_1 - 0x38),0);
        }
        goto LAB_20dadc98;
      }
      if (param_2 != 0xffffffff) {
        if ((int)param_2 < 0) {
          return -0x7fffbfff;
        }
        if (1 < (int)param_2) goto LAB_20dadc45;
        goto LAB_20dadc87;
      }
    }
    if (in_stack_0000001c != (LPWSTR)0x0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)in_stack_0000001c;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((int)in_stack_0000001c + 4);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((int)in_stack_0000001c + 8);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)in_stack_0000001c + 0xc);
    }
    iVar4 = FUN_20da5548((void *)(param_1 - 0x38),param_2);
  }
  return iVar4;
}



int __thiscall FUN_20da5548(void *this,int param_1)

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
LAB_20da5725:
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)((int)this + 0xac);
    if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x74) == 0)) {
      if (*(short *)((&PTR_PTR_20dc489c)[*(int *)((int)this + 0x14) * 2] + 0x3e) != 0) {
        (**(code **)*puVar1)(puVar1,&DAT_20db0160,piVar4);
      }
      if ((*piVar4 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_20da85f8,(int)this + 0x74),
         iVar3 < 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x6c))
                (*(undefined4 **)((int)this + 0x6c),&DAT_20da85e8,&local_8);
    }
    else {
      local_8 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar5 = *(uint *)((int)this + 0xb0);
    if (((uVar5 & 2) != 0) && ((uVar5 & 4) != 0)) goto LAB_20da56f6;
    iVar3 = 1;
    local_c = uVar5 >> 1 & 1;
    if (local_c == 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) goto LAB_20da55f1;
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
                            (*(undefined4 **)((int)this + 0x6c),&DAT_20da85f8,(int)this + 0x74);
          if (iVar3 < 0) goto LAB_20daded1;
        }
        goto LAB_20da55f1;
      }
    }
    else {
      iVar3 = 0;
LAB_20da55f1:
      if (iVar3 == 0) {
LAB_20da5608:
        if (local_c == 0) {
          if (local_8 == (int *)0x0) {
            iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x18))(*(int **)((int)this + 0x74));
          }
          else {
            iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,&local_10,*piVar4 != 0);
          }
          if (iVar3 < 0) goto LAB_20daded1;
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
              FUN_20da579c(this,local_14);
              iVar3 = FUN_20da57bd(this,local_2c,local_28,local_10);
              if (iVar3 == 0) goto LAB_20dadeee;
              piVar4 = *(int **)((int)this + 0x6c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x18))(piVar4);
              }
            }
LAB_20da56f6:
            piVar4 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            if ((*(byte *)((int)this + 0xb0) & 4) == 0) {
              FUN_20da6032(this,1);
            }
            if (((param_1 == 0) || (param_1 == -4)) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
              *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 8;
              piVar4 = *(int **)((int)this + 0xac);
              if (piVar4 == (int *)0x0) {
                piVar4 = *(int **)((int)this + 0x74);
              }
              (**(code **)(*piVar4 + 0x1c))(piVar4);
              FUN_20da633a(this,1);
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
            goto LAB_20da5725;
          }
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x14))(*(int **)((int)this + 0x74));
        if (iVar3 == 0) goto LAB_20da5608;
        if (-1 < iVar3) goto LAB_20daded1;
LAB_20dadeee:
        iVar3 = -0x7fffbffb;
      }
    }
LAB_20daded1:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffd;
  }
  return iVar3;
}



void __thiscall FUN_20da579c(void *this,HWND param_1)

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



int __thiscall FUN_20da57bd(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HWND hWndParent;
  CHAR local_94 [128];
  DWORD local_14;
  short local_e;
  int local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0xa0) != 0) {
    return *(int *)((int)this + 0xa0);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (*(short *)((&PTR_PTR_20dc489c)[*(int *)((int)this + 0x14) * 2] + 0x48) == 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x50))();
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      return 0;
    }
    *(undefined2 *)((&PTR_PTR_20dc489c)[*(int *)((int)this + 0x14) * 2] + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
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
    pHVar2 = FUN_20dba8a3();
    *(HWND *)((int)this + 0xa4) = pHVar2;
  }
  local_c = IsWindowVisible(*(HWND *)((int)this + 0xa4));
  if ((*(int *)((&PTR_PTR_20dc489c)[*(int *)((int)this + 0x14) * 2] + 0x58) == 0) ||
     (pHVar2 = FUN_20dba8a3(), *(HWND *)((int)this + 0xa4) == pHVar2)) {
    if (local_c != 0) goto LAB_20da5867;
  }
  else {
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
      iVar1 = FUN_20da37a0(this,0xfffffd3e,0xb,(LONG *)&local_e);
      if ((iVar1 == 0) || (local_e == 0)) {
        *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
      }
      *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) | 2;
    }
    if ((*(byte *)((int)this + 0xbc) & 1) != 0) goto LAB_20da5867;
    pHVar2 = FUN_20dba801((uint)(local_c == 0),*(HWND *)((int)this + 0xa4),param_1,param_2,
                          (int *)((int)this + 0x88));
    *(HWND *)((int)this + 0xb4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      return 0;
    }
    SetWindowLongA(pHVar2,-0x15,(LONG)this);
  }
  local_8 = local_8 | 0x10000000;
LAB_20da5867:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  pHVar2 = *(HWND *)((int)this + 0xb4);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  hWndParent = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    hWndParent = *(HWND *)((int)this + 0xa4);
  }
  DAT_20dc4e38 = this;
  pHVar2 = CreateWindowExA(local_14,*(LPCSTR *)
                                     ((&PTR_PTR_20dc489c)[*(int *)((int)this + 0x14) * 2] + 0x44),
                           local_94,local_8,~-(uint)(pHVar2 != (HWND)0x0) & param_1,
                           ~-(uint)(pHVar2 != (HWND)0x0) & param_2,*(int *)((int)this + 0x88),
                           *(int *)((int)this + 0x8c),hWndParent,(HMENU)0x0,DAT_20dc4164,(LPVOID)0x0
                          );
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffef;
  *(HWND *)((int)this + 0xa0) = pHVar2;
  DAT_20dc4e38 = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
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



ATOM FUN_20da5943(void)

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
  local_2c.lpfnWndProc = FUN_20da59e3;
  local_2c.hInstance = DAT_20dc4164;
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = (HBRUSH)0x6;
  local_2c.lpszClassName = *(LPCSTR *)(PTR_PTR_20dc489c + 0x44);
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



LRESULT FUN_20da59e3(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4)

{
  HWND hWnd;
  int *piVar1;
  HDC pHVar2;
  int iVar3;
  LRESULT LVar4;
  int *piVar5;
  tagPAINTSTRUCT local_58;
  tagRECT local_18;
  undefined4 local_8;
  
  hWnd = param_1;
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  piVar5 = DAT_20dc4e38;
  param_1 = (HWND)0x0;
  if (piVar1 == (int *)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)DAT_20dc4e38);
    piVar5[0x28] = (int)hWnd;
  }
  else {
    piVar5 = piVar1;
    if (piVar1 == (int *)0xffffffff) {
      LVar4 = DefWindowProcA(hWnd,param_2,(WPARAM)param_3,param_4);
      return LVar4;
    }
  }
  (**(code **)(*piVar5 + 4))();
  piVar1 = (int *)piVar5[0x20];
  if ((piVar1 != (int *)0x0) &&
     (iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,hWnd,param_2,param_3,param_4,&param_1,&local_8),
     iVar3 == 1)) goto LAB_20da5a7a;
  if (param_2 == 2) {
    (**(code **)(*piVar5 + 0x5c))();
LAB_20da5a34:
    param_1 = (HWND)(**(code **)(*piVar5 + 0x4c))(param_2,param_3,param_4);
  }
  else {
    if (param_2 != 0xf) goto LAB_20da5a34;
    pHVar2 = param_3;
    if (param_3 == (HDC)0x0) {
      pHVar2 = BeginPaint(hWnd,&local_58);
    }
    GetClientRect(hWnd,&local_18);
    (**(code **)(*piVar5 + 0x48))(piVar5,1,pHVar2,&local_18,0,0,1);
    if (param_3 == (HDC)0x0) {
      EndPaint(hWnd,&local_58);
    }
  }
  if (param_2 == 5) {
    if ((*(byte *)(piVar5 + 0x2c) & 0x10) == 0) {
      (**(code **)(*piVar5 + 0x34))();
    }
  }
  else if (6 < param_2) {
    if (param_2 < 9) {
      if (((*(byte *)(piVar5 + 0x2c) & 2) != 0) &&
         (piVar1 = (int *)piVar5[0x1c], piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x20))(piVar1,param_2 == 7);
      }
    }
    else if (param_2 == 0x82) {
      SetWindowLongA(hWnd,-0x15,-1);
      piVar5[0x29] = 0;
      piVar5[0x28] = 0;
    }
  }
  piVar1 = (int *)piVar5[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,hWnd,param_2,param_3,param_4,&param_1,local_8);
  }
LAB_20da5a7a:
  (**(code **)(*piVar5 + 8))();
  return (LRESULT)param_1;
}



LRESULT __thiscall FUN_20da5b62(void *this,UINT param_1,uint param_2,LPARAM param_3)

{
  POINT pt;
  POINT pt_00;
  LRESULT LVar1;
  int iVar2;
  BOOL BVar3;
  ushort uVar4;
  RECT local_1c;
  tagPOINT local_c;
  short sVar5;
  
  if (param_1 < 6) {
    if (param_1 == 5) {
      FUN_20da3c81(this);
    }
    else if ((param_1 == 1) && (*(HWND *)((int)this + 0xa0) != (HWND)0x0)) {
      EnableWindow(*(HWND *)((int)this + 0xa0),*(BOOL *)((int)this + 0x18c));
    }
    goto LAB_20da5ba1;
  }
  if (param_1 < 0x15) {
    if (param_1 == 0x14) {
      return 1;
    }
    if (param_1 != 7) {
      if (param_1 != 8) goto LAB_20da5ba1;
      *(undefined4 *)((int)this + 0x294) = 0;
    }
    if (*(short *)((int)this + 0x19a) == 2) {
      FUN_20da92f2(this,&local_1c,1);
    }
    else {
      FUN_20da616d(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),&local_1c.left);
    }
    FUN_20da3c27(this,&local_1c);
    goto LAB_20da5ba1;
  }
  uVar4 = (ushort)(param_2 >> 0x10);
  sVar5 = (short)((uint)param_3 >> 0x10);
  if (param_1 < 0x21) {
    if (param_1 == 0x20) {
      iVar2 = FUN_20daa0f2(this,param_2,(short)param_3);
      if (iVar2 != 0) {
        return 0;
      }
    }
    else if (param_1 == 0x18) {
      param_1 = FUN_20da5d2f((HWND)((int)this + 0xd8),param_2);
    }
    goto LAB_20da5ba1;
  }
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      FUN_20db1834((int)this);
    }
    else if (param_1 == 0x87) {
      return 0x81;
    }
    goto LAB_20da5ba1;
  }
  if (param_1 < 0x114) {
    if (param_1 == 0x113) {
      GetCursorPos(&local_c);
      ScreenToClient(*(HWND *)((int)this + 0xa0),&local_c);
      FUN_20db22a5(this,local_c.x,(HDC)local_c.y);
      return 0;
    }
    if (param_1 == 0x101) {
      FUN_20db1857((int)this);
    }
    else if (param_1 == 0x102) {
      LVar1 = FUN_20db14f8(this,param_2,param_3);
      return LVar1;
    }
    goto LAB_20da5ba1;
  }
  if (param_1 < 0x203) {
    if (0x1ff < param_1) {
      local_c.x = (LONG)(short)param_3;
      local_c.y = (LONG)sVar5;
      if (param_1 == 0x200) {
        iVar2 = FUN_20db22a5(this,local_c.x,(HDC)(int)sVar5);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_20db18b1((int)this);
        return 0;
      }
      if (param_1 == 0x201) {
        iVar2 = FUN_20db209a(this);
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined4 *)((int)this + 0x284) = *(undefined4 *)((int)this + 0x204);
        *(undefined4 *)((int)this + 0x288) = *(undefined4 *)((int)this + 0x208);
        *(undefined4 *)((int)this + 0x28c) = *(undefined4 *)((int)this + 0x20c);
        *(undefined4 *)((int)this + 0x290) = *(undefined4 *)((int)this + 0x210);
        FUN_20db20ea(this,local_c.x,local_c.y);
        FUN_20db187a(this,1);
        return 0;
      }
      if (param_1 != 0x202) {
        return 0;
      }
      iVar2 = FUN_20db2815(this);
      if (iVar2 == 0) {
        return 0;
      }
      if ((((*(int *)((int)this + 0x284) != *(int *)((int)this + 0x204)) ||
           (*(int *)((int)this + 0x288) != *(int *)((int)this + 0x208))) ||
          (*(int *)((int)this + 0x28c) != *(int *)((int)this + 0x20c))) ||
         (*(int *)((int)this + 0x290) != *(int *)((int)this + 0x210))) {
        FUN_20db1916((int)this);
      }
      FUN_20db18dd(this,1);
      GetClientRect(*(HWND *)((int)this + 0xa0),&local_1c);
      if ((*(int *)((int)this + 0x294) == 0) &&
         (pt.y._0_2_ = (short)local_c.y, pt.x = local_c.x,
         pt.y._2_2_ = (short)((uint)local_c.y >> 0x10), BVar3 = PtInRect(&local_1c,pt), BVar3 != 0))
      {
        FUN_20db1818((int)this);
      }
      *(undefined4 *)((int)this + 0x294) = 0;
      return 0;
    }
    if (param_1 == 0x114) {
      LVar1 = FUN_20db051d(this,param_2 & 0xffff,(uint)uVar4);
      return LVar1;
    }
    if (param_1 == 0x115) {
      LVar1 = FUN_20db02d8(this,param_2 & 0xffff,(uint)uVar4);
      return LVar1;
    }
    goto LAB_20da5ba1;
  }
  if (0x281 < param_1) {
    if (param_1 == 0x47d) {
      LVar1 = FUN_20dac36d();
      return LVar1;
    }
    goto LAB_20da5ba1;
  }
  if (param_1 == 0x281) {
    if (DAT_20dc4170 != 0) {
      PostMessageA(*(HWND *)((int)this + 0xa0),0x10e,0,0);
    }
    goto LAB_20da5ba1;
  }
  if (param_1 != 0x203) {
    if (param_1 < 0x204) goto LAB_20da5ba1;
    if (param_1 < 0x206) {
LAB_20dac2b4:
      local_c.x = (LONG)(short)param_3;
      local_c.y = (LONG)sVar5;
      if (param_1 == 0x204) {
        uVar4 = 2;
LAB_20dac32e:
        FUN_20db187a(this,uVar4);
      }
      else {
        if (param_1 == 0x205) {
          uVar4 = 2;
        }
        else {
          if (param_1 == 0x207) {
            uVar4 = 4;
            goto LAB_20dac32e;
          }
          if (param_1 != 0x208) goto LAB_20da5ba1;
          uVar4 = 4;
        }
        FUN_20db18dd(this,uVar4);
        GetClientRect(*(HWND *)((int)this + 0xa0),&local_1c);
        if ((*(int *)((int)this + 0x294) == 0) &&
           (pt_00.y._0_2_ = (short)local_c.y, pt_00.x = local_c.x,
           pt_00.y._2_2_ = (short)((uint)local_c.y >> 0x10), BVar3 = PtInRect(&local_1c,pt_00),
           BVar3 != 0)) {
          FUN_20db1818((int)this);
        }
        *(undefined4 *)((int)this + 0x294) = 0;
      }
      goto LAB_20da5ba1;
    }
    if (param_1 != 0x206) {
      if (param_1 < 0x207) goto LAB_20da5ba1;
      if (param_1 < 0x209) goto LAB_20dac2b4;
      if (param_1 != 0x209) goto LAB_20da5ba1;
    }
  }
  *(undefined4 *)((int)this + 0x294) = 1;
  FUN_20db1826((int)this);
LAB_20da5ba1:
  LVar1 = FUN_20da5c9a(this,param_1,param_2,param_3);
  return LVar1;
}



LRESULT __thiscall FUN_20da5c9a(void *this,UINT param_1,WPARAM param_2,LRESULT param_3)

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



uint __thiscall FUN_20da5cca(void *this,int param_1)

{
  uint uVar1;
  
  if (((param_1 < 0) || (*(int *)((int)this + 0x144) <= param_1)) ||
     (uVar1 = *(uint *)(param_1 * 0x10 + *(int *)((int)this + 0x1e8)), 0x7fffffff < uVar1)) {
    uVar1 = *(uint *)((int)this + 0x1b8);
    if ((int)*(uint *)((int)this + 0x1b8) <= (int)*(uint *)((int)this + 0x1bc)) {
      uVar1 = *(uint *)((int)this + 0x1bc);
    }
  }
  return uVar1;
}



uint __thiscall FUN_20da5d02(void *this,int param_1)

{
  uint uVar1;
  
  if (((param_1 < 0) || (*(int *)((int)this + 0x148) <= param_1)) ||
     (uVar1 = *(uint *)(*(int *)((int)this + 0x1ec) + param_1 * 0xc), 0x7fffffff < uVar1)) {
    uVar1 = *(int *)((int)this + 0x1b8) << 2;
  }
  return uVar1;
}



HRESULT __thiscall FUN_20da5d2f(HWND param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  LPVOID this;
  undefined4 uVar4;
  LPDROPTARGET pDropTarget;
  HRESULT HVar5;
  HRESULT unaff_EDI;
  HWND local_8;
  
  local_8 = param_1;
  if ((((param_1[0xb].unused & 8) == 0) &&
      (((bVar3 = FUN_20da5e41((int)param_1), CONCAT31(extraout_var,bVar3) != 0 ||
        ((*(byte *)(param_1[1].unused + 0xb0) & 2) == 0)) ||
       (*(int *)(param_1[1].unused + 0xac) != 0)))) ||
     (FUN_20da5f45(param_1,(int *)&local_8), local_8 == (HWND)0x0)) goto LAB_20da5d57;
  if (param_2 != 0) {
    if (((param_1[0xb].unused & 0xc0U) != 0) && ((param_1[0xb].unused & 8U) == 0)) {
      this = FUN_20da2c52(0x18,DAT_20dc4190);
      if (this == (LPVOID)0x0) {
        pDropTarget = (LPDROPTARGET)0x0;
      }
      else {
        uVar4 = FUN_20daa1ec((int)param_1);
        pDropTarget = (LPDROPTARGET)FUN_20daa276(this,param_1,param_1,uVar4);
      }
      param_1[3].unused = (int)pDropTarget;
      if (pDropTarget == (LPDROPTARGET)0x0) {
        return unaff_EDI;
      }
      HVar5 = RegisterDragDrop(local_8,pDropTarget);
      param_1[0xb].unused = (uint)(-1 < HVar5) << 3 | param_1[0xb].unused & 0xfffffff7U;
      goto LAB_20da5d57;
    }
    if ((param_2 != 0) && ((param_1[0xb].unused & 0xc0) != 0)) goto LAB_20da5d57;
  }
  if ((param_1[0xb].unused & 8U) != 0) {
    param_1[0xb].unused = param_1[0xb].unused & 0xfffffff7;
    RevokeDragDrop(local_8);
  }
LAB_20da5d57:
  if ((param_2 == 0) || ((param_1[0xb].unused & 8) == 0)) {
    piVar1 = (int *)param_1[3].unused;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      param_1[3].unused = 0;
      (**(code **)(iVar2 + 8))(piVar1);
    }
    param_1[10].unused = 0;
  }
  return unaff_EDI;
}



bool __fastcall FUN_20da5e41(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  VARIANTARG local_1c;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  VariantInit(&local_1c);
  if ((*(int *)(param_1 + 0x18) != 0) ||
     ((((puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + 0x1c),
        iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da8500,&local_8), -1 < iVar3 &&
        (iVar3 = (**(code **)(*local_8 + 0x10))(local_8,&local_c), -1 < iVar3)) &&
       (local_c != (int *)0x0)) &&
      (iVar3 = (**(code **)*local_c)(local_c,&DAT_20da8570,(undefined4 *)(param_1 + 0x18)),
      -1 < iVar3)))) {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    piVar1 = *(int **)(param_1 + 0x18);
    (**(code **)(*piVar1 + 0x18))(piVar1,0xfffffd3b,&DAT_20da8560,0,2,&local_2c,&local_1c,0,0);
  }
  piVar1 = local_8;
  if (local_8 != (int *)0x0) {
    local_8 = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = local_c;
  if (local_c != (int *)0x0) {
    local_c = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return local_1c.n1._8_1_ == '\0';
}



int __thiscall FUN_20da5f45(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *local_c;
  int *local_8;
  
  piVar1 = (int *)((int)this + 0x28);
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar4 = *piVar1;
  *param_1 = 0;
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 4) + 0x1c);
    iVar4 = (**(code **)*puVar2)(puVar2,&DAT_20da8500,&local_8);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)*local_8)(local_8,&DAT_20da84f0,&local_c);
    piVar3 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)(*local_c + 0xc))(local_c,piVar1);
    piVar3 = local_c;
    if (local_c != (int *)0x0) {
      local_c = (int *)0x0;
      (**(code **)(*piVar3 + 8))(piVar3);
    }
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  *param_1 = *piVar1;
  return 0;
}



void __thiscall FUN_20da6032(void *this,uint param_1)

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



int FUN_20da60db(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
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



void __thiscall FUN_20da616d(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_20da61c1(this,param_1);
  param_3[1] = iVar1;
  iVar1 = FUN_20da6224(this,param_2);
  *param_3 = iVar1;
  uVar2 = FUN_20da5cca(this,param_1);
  param_3[3] = uVar2 + param_3[1];
  uVar2 = FUN_20da5d02(this,param_2);
  param_3[2] = uVar2 + *param_3;
  FUN_20da62c2(this,param_1,param_2,param_3);
  return;
}



int __thiscall FUN_20da61c1(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      if (*(int *)((int)this + 0x14c) <= iVar2) break;
      uVar1 = FUN_20da5cca(this,iVar2);
      iVar3 = iVar3 + uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  if (*(int *)((int)this + 0x14c) <= param_1) {
    iVar2 = *(int *)((int)this + 0x1fc);
    if (param_1 < iVar2) {
      while ((iVar2 = iVar2 + -1, param_1 <= iVar2 && (-1 < iVar2))) {
        uVar1 = FUN_20da5cca(this,iVar2);
        iVar3 = iVar3 - uVar1;
      }
    }
    else {
      for (; (iVar2 < param_1 && (iVar2 < *(int *)((int)this + 0x144))); iVar2 = iVar2 + 1) {
        uVar1 = FUN_20da5cca(this,iVar2);
        iVar3 = iVar3 + uVar1;
      }
    }
  }
  return iVar3;
}



int __thiscall FUN_20da6224(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  tagRECT local_14;
  
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)((int)this + 400) != 0) {
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
    iVar2 = local_14.right;
  }
  if (0 < param_1) {
    do {
      if (*(int *)((int)this + 0x150) <= iVar3) break;
      if (*(int *)((int)this + 400) == 0) {
        uVar1 = FUN_20da5d02(this,iVar3);
      }
      else {
        uVar1 = FUN_20da5d02(this,iVar3);
        uVar1 = -uVar1;
      }
      iVar2 = iVar2 + uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  if (*(int *)((int)this + 0x150) <= param_1) {
    iVar3 = *(int *)((int)this + 0x200);
    if (param_1 < iVar3) {
      while ((iVar3 = iVar3 + -1, param_1 <= iVar3 && (-1 < iVar3))) {
        if (*(int *)((int)this + 400) == 0) {
          uVar1 = FUN_20da5d02(this,iVar3);
        }
        else {
          uVar1 = FUN_20da5d02(this,iVar3);
          uVar1 = -uVar1;
        }
        iVar2 = iVar2 - uVar1;
      }
    }
    else {
      for (; (iVar3 < param_1 && (iVar3 < *(int *)((int)this + 0x148))); iVar3 = iVar3 + 1) {
        if (*(int *)((int)this + 400) == 0) {
          uVar1 = FUN_20da5d02(this,iVar3);
        }
        else {
          uVar1 = FUN_20da5d02(this,iVar3);
          uVar1 = -uVar1;
        }
        iVar2 = iVar2 + uVar1;
      }
    }
  }
  if (*(int *)((int)this + 400) != 0) {
    uVar1 = FUN_20da5d02(this,param_1);
    iVar2 = iVar2 - uVar1;
  }
  return iVar2;
}



void __thiscall FUN_20da62c2(void *this,int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int local_8;
  
  local_18 = *param_3;
  iStack_14 = param_3[1];
  iStack_10 = param_3[2];
  iStack_c = param_3[3];
  if ((((*(short *)((int)this + 0x1a6) != 0) && (-1 < param_1)) && (-1 < param_2)) &&
     ((param_1 < *(int *)((int)this + 0x144) && (param_2 < *(int *)((int)this + 0x148))))) {
    local_8 = param_2 * 0xc;
    if (*(char *)(*(int *)((int)this + 0x1ec) + 6 + param_2 * 0xc) != '\0') {
      if (param_1 < *(int *)((int)this + 0x1fc)) {
        if (0 < param_1) {
          iVar2 = param_1 << 4;
          iVar4 = param_1;
          do {
            if ((*(byte *)(*(int *)(iVar2 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_8) & 1)
                == 0) break;
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + -0x10;
            uVar1 = FUN_20da5cca(this,iVar4);
            param_3[1] = param_3[1] - uVar1;
          } while (0 < iVar4);
        }
        if (param_1 < *(int *)((int)this + 0x1fc)) {
          iVar2 = param_1 << 4;
          iVar4 = param_1;
          do {
            if ((*(byte *)(*(int *)(iVar2 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_8) & 2)
                == 0) break;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x10;
            uVar1 = FUN_20da5cca(this,iVar4);
            param_3[3] = param_3[3] + uVar1;
          } while (iVar4 < *(int *)((int)this + 0x1fc));
        }
      }
      else {
        if (*(int *)((int)this + 0x1fc) < param_1) {
          iVar2 = param_1 << 4;
          iVar4 = param_1;
          do {
            if ((*(byte *)(*(int *)(iVar2 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_8) & 1)
                == 0) break;
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + -0x10;
            uVar1 = FUN_20da5cca(this,iVar4);
            param_3[1] = param_3[1] - uVar1;
          } while (*(int *)((int)this + 0x1fc) < iVar4);
        }
        if (param_1 < *(int *)((int)this + 0x144) + -1) {
          iVar2 = param_1 << 4;
          iVar4 = param_1;
          do {
            if ((*(byte *)(*(int *)(iVar2 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_8) & 2)
                == 0) break;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x10;
            uVar1 = FUN_20da5cca(this,iVar4);
            param_3[3] = param_3[3] + uVar1;
          } while (iVar4 < *(int *)((int)this + 0x144) + -1);
        }
      }
    }
    iVar4 = 0x10;
    bVar7 = true;
    piVar3 = param_3;
    piVar5 = &local_18;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = (char)*piVar3 == (char)*piVar5;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    } while (bVar7);
    if ((bVar7) &&
       (iVar4 = param_1 * 0x10, *(char *)(iVar4 + 8 + *(int *)((int)this + 0x1e8)) != '\0')) {
      if (param_2 < *(int *)((int)this + 0x200)) {
        iVar2 = local_8;
        iVar6 = param_2;
        if (0 < param_2) {
          do {
            if ((*(byte *)(*(int *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + iVar2) & 4) ==
                0) break;
            if (*(int *)((int)this + 400) == 0) {
              uVar1 = FUN_20da5d02(this,iVar6 + -1);
              *param_3 = *param_3 - uVar1;
            }
            else {
              uVar1 = FUN_20da5d02(this,iVar6 + -1);
              param_3[2] = param_3[2] + uVar1;
            }
            iVar6 = iVar6 + -1;
            iVar2 = iVar2 + -0xc;
          } while (0 < iVar6);
        }
        iVar2 = local_8;
        if (param_2 < *(int *)((int)this + 0x200)) {
          do {
            if ((*(byte *)(*(int *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + iVar2) & 8) ==
                0) {
              return;
            }
            if (*(int *)((int)this + 400) == 0) {
              uVar1 = FUN_20da5d02(this,param_2 + 1);
              param_3[2] = param_3[2] + uVar1;
            }
            else {
              uVar1 = FUN_20da5d02(this,param_2 + 1);
              *param_3 = *param_3 - uVar1;
            }
            iVar2 = iVar2 + 0xc;
            param_2 = param_2 + 1;
          } while (param_2 < *(int *)((int)this + 0x200));
        }
      }
      else {
        iVar2 = param_2;
        iVar6 = local_8;
        if (*(int *)((int)this + 0x200) < param_2) {
          do {
            if ((*(byte *)(*(int *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + iVar6) & 4) ==
                0) break;
            if (*(int *)((int)this + 400) == 0) {
              uVar1 = FUN_20da5d02(this,iVar2 + -1);
              *param_3 = *param_3 - uVar1;
            }
            else {
              uVar1 = FUN_20da5d02(this,iVar2 + -1);
              param_3[2] = param_3[2] + uVar1;
            }
            iVar2 = iVar2 + -1;
            iVar6 = iVar6 + -0xc;
          } while (*(int *)((int)this + 0x200) < iVar2);
        }
        iVar2 = local_8;
        if (param_2 < *(int *)((int)this + 0x148) + -1) {
          do {
            if ((*(byte *)(*(int *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + iVar2) & 8) ==
                0) {
              return;
            }
            if (*(int *)((int)this + 400) == 0) {
              uVar1 = FUN_20da5d02(this,param_2 + 1);
              param_3[2] = param_3[2] + uVar1;
            }
            else {
              uVar1 = FUN_20da5d02(this,param_2 + 1);
              *param_3 = *param_3 - uVar1;
            }
            param_2 = param_2 + 1;
            iVar2 = iVar2 + 0xc;
          } while (param_2 < *(int *)((int)this + 0x148) + -1);
        }
      }
    }
  }
  return;
}



uint __thiscall FUN_20da62ec(void *this,RECT *param_1,BOOL param_2)

{
  int *piVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = *(int **)((int)this + 0xac);
  if (piVar1 == (int *)0x0) {
    if ((*(HWND *)((int)this + 0xa0) != (HWND)0x0) &&
       (BVar2 = IsWindowVisible(*(HWND *)((int)this + 0xa0)), BVar2 != 0)) {
      uVar3 = InvalidateRect(*(HWND *)((int)this + 0xa0),param_1,param_2);
      return uVar3;
    }
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x34))();
    uVar3 = 1;
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 100))(piVar1,param_1,param_2);
    uVar3 = (uint)(iVar4 == 0);
  }
  return uVar3;
}



bool __thiscall FUN_20da633a(void *this,int param_1)

{
  HWND pHVar1;
  int iVar2;
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
        iVar2 = FUN_20da5548(this,-4);
        return -1 < iVar2;
      }
      pHVar1 = SetFocus(hWnd);
      return (bool)('\x01' - (pHVar1 != hWnd));
    }
  }
  else if ((((*(byte *)((int)this + 0xb0) & 8) != 0) || (param_1 == 0)) ||
          (iVar2 = FUN_20da5548(this,-4), -1 < iVar2)) {
    iVar2 = (**(code **)(**(int **)((int)this + 0xac) + 0x58))(*(int **)((int)this + 0xac),param_1);
    return iVar2 == 0;
  }
  return false;
}



undefined4
FUN_20da6394(void *param_1,undefined4 param_2,HDC param_3,int *param_4,undefined4 param_5,
            HDC param_6)

{
  uint uVar1;
  HDC hdc;
  HBITMAP h;
  HGDIOBJ h_00;
  int iVar2;
  HBRUSH pHVar3;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  if (param_6 == (HDC)0x0) {
    local_1c.left = *param_4;
    local_1c.top = param_4[1];
    local_1c.right = param_4[2];
    local_1c.bottom = param_4[3];
    if ((*(short *)((int)param_1 + 0x1ac) != 0) && (uVar1 = FUN_20da63fe(param_1), uVar1 != 0)) {
      iVar2 = -1 - (uint)(*(short *)((int)param_1 + 0x1ae) != 0);
      InflateRect(&local_1c,iVar2,iVar2);
    }
    FUN_20da6458(param_1,param_3,&local_1c.left);
    if ((*(short *)((int)param_1 + 0x1ac) != 0) && (uVar1 = FUN_20da63fe(param_1), uVar1 != 0)) {
      local_1c.left = *param_4;
      local_1c.top = param_4[1];
      local_1c.right = param_4[2];
      local_1c.bottom = param_4[3];
      if (*(short *)((int)param_1 + 0x1ae) == 0) {
        pHVar3 = (HBRUSH)GetStockObject(4);
        FrameRect(param_3,&local_1c,pHVar3);
      }
      else {
        DrawEdge(param_3,&local_1c,10,0xf);
      }
    }
  }
  else {
    (**(code **)(*(int *)((int)param_1 + 0x38) + 0x48))((int)param_1 + 0x38,1,&local_c);
    FUN_20da492b(&local_c,&local_c);
    iVar2 = GetDeviceCaps(param_6,2);
    if (iVar2 == 2) {
      param_6 = CreateCompatibleDC((HDC)0x0);
      hdc = param_6;
    }
    else {
      hdc = CreateCompatibleDC(param_6);
    }
    if (((hdc != (HDC)0x0) && (h = CreateCompatibleBitmap(param_6,local_c,local_8), hdc != (HDC)0x0)
        ) && (h != (HBITMAP)0x0)) {
      h_00 = SelectObject(hdc,h);
      SetRect(&local_2c,0,0,local_c,local_8);
      FUN_20da6458(param_1,hdc,&local_2c.left);
      if (*(short *)((int)param_1 + 0x1ac) != 0) {
        if (*(short *)((int)param_1 + 0x1ae) == 0) {
          pHVar3 = (HBRUSH)GetStockObject(4);
          FrameRect(hdc,&local_2c,pHVar3);
        }
        else {
          DrawEdge(hdc,&local_2c,10,0xf);
        }
      }
      StretchBlt(param_3,*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],hdc,0,0,
                 local_c,local_8,0xcc0020);
      SelectObject(hdc,h_00);
      DeleteDC(hdc);
      DeleteObject(h);
    }
  }
  return 0;
}



uint __fastcall FUN_20da63fe(void *param_1)

{
  int iVar1;
  uint local_8;
  
  if ((*(byte *)((int)param_1 + 0xbc) & 4) == 0) {
    local_8 = 1;
    iVar1 = FUN_20da37a0(param_1,0xfffffd3b,0xb,(LONG *)&local_8);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)((int)param_1 + 0xbc) =
         (local_8 & 1) << 6 | *(uint *)((int)param_1 + 0xbc) & 0xffffffbf | 4;
  }
  return ~*(uint *)((int)param_1 + 0xbc) >> 6 & 1;
}



void __thiscall FUN_20da6458(void *this,HDC param_1,int *param_2)

{
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x180) != 0) || (uVar3 = FUN_20da63fe(this), uVar3 != 0)) {
    if ((*(int *)((int)this + 0xa0) == 0) ||
       (pHVar1 = GetFocus(), *(HWND *)((int)this + 0xa0) != pHVar1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    FUN_20da64a0(this,param_1,param_2,iVar2,0);
  }
  return;
}



void __thiscall FUN_20da64a0(void *this,HDC param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  LONG xLeft;
  int yTop;
  HFONT h;
  int yBottom;
  tagRECT local_30;
  LONG local_20 [2];
  int local_18;
  int local_14;
  HFONT local_10;
  HGDIOBJ local_c;
  HFONT local_8;
  
  if (*(int *)((int)this + 0x214) != 0) {
    FUN_20da9067((int)this);
  }
  *(undefined4 *)((int)this + 0x214) = 0;
  SetBkMode(param_1,1);
  local_c = SelectObject(param_1,*(HGDIOBJ *)((int)this + 0x1d0));
  FUN_20da44f3(this);
  local_10 = FUN_20da4716((int)this);
  h = local_10;
  if ((local_10 == (HFONT)0x0) &&
     ((piVar1 = *(int **)((int)this + 0x224), piVar1 == (int *)0x0 ||
      (iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,&local_8), h = local_8, iVar2 != 0)))) {
    local_8 = (HFONT)0x0;
  }
  else {
    local_8 = (HFONT)SelectObject(param_1,h);
  }
  if (param_4 == 0) {
    iVar2 = *(int *)((int)this + 0x1fc);
  }
  else {
    iVar2 = *(int *)((int)this + 0x14c);
    if (iVar2 < *(int *)((int)this + 0x1c4)) {
      iVar2 = *(int *)((int)this + 0x1c4);
    }
  }
  local_14 = param_2[1];
  if (*(int *)((int)this + 400) == 0) {
    local_18 = *param_2;
  }
  else {
    local_20[0] = param_2[2];
  }
  FUN_20da6685(this,param_1,param_2,local_20,param_3,param_4,0,*(int *)((int)this + 0x14c));
  FUN_20da6685(this,param_1,param_2,local_20,param_3,param_4,iVar2,*(int *)((int)this + 0x144));
  if (param_4 != 0) goto LAB_20da65d6;
  if (*(int *)((int)this + 400) == 0) {
    iVar2 = param_2[2];
    if (local_18 < iVar2) {
      yBottom = param_2[3];
      yTop = param_2[1];
      xLeft = local_18;
LAB_20da661f:
      SetRect(&local_30,xLeft,yTop,iVar2,yBottom);
      FillRect(param_1,&local_30,*(HBRUSH *)((int)this + 0x1e4));
    }
  }
  else {
    iVar2 = *param_2;
    if (iVar2 < local_20[0]) {
      yBottom = param_2[3];
      yTop = param_2[1];
      xLeft = local_20[0];
      goto LAB_20da661f;
    }
  }
  if (local_14 < param_2[3]) {
    SetRect(&local_30,*param_2,local_14,param_2[2],param_2[3]);
    FillRect(param_1,&local_30,*(HBRUSH *)((int)this + 0x1e4));
  }
  if (*(int *)((int)this + 400) == 0) {
    if ((param_2[2] <= local_18) && (param_2[3] <= local_14)) goto LAB_20da65d6;
    local_20[0] = -2;
  }
  else {
    if ((local_20[0] <= *param_2) && (param_2[3] <= local_14)) goto LAB_20da65d6;
    local_18 = param_2[2] + 2;
  }
  local_20[1] = 0xfffffffe;
  FUN_20da6ab5(this,param_1,-1,-1,local_20);
LAB_20da65d6:
  if (local_c != (HGDIOBJ)0x0) {
    SelectObject(param_1,local_c);
  }
  if (local_8 != (HFONT)0x0) {
    SelectObject(param_1,local_8);
  }
  if (local_10 != (HFONT)0x0) {
    FUN_20db7138(local_10);
  }
  return;
}



void __thiscall
FUN_20da6685(void *this,HDC param_1,int *param_2,LONG *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_2;
  if (param_6 < param_7) {
    do {
      param_3[1] = param_3[3];
      uVar1 = FUN_20da5cca(this,param_6);
      param_3[3] = param_3[3] + uVar1;
      if (((param_5 != 0) && (param_2[3] < param_3[3])) ||
         ((param_5 == 0 && (param_2[3] <= param_3[1])))) break;
      if (*(int *)((int)this + 400) == 0) {
        param_3[2] = *param_2;
      }
      else {
        *param_3 = param_2[2];
      }
      iVar2 = 0;
      if (0 < *(int *)((int)this + 0x150)) {
        do {
          if (*(int *)((int)this + 400) == 0) {
            *param_3 = param_3[2];
            uVar1 = FUN_20da5d02(this,iVar2);
            param_3[2] = param_3[2] + uVar1;
            if (param_5 != 0) {
              if (param_2[2] < param_3[2]) break;
              if (param_5 != 0) goto LAB_20da6726;
            }
            if (param_2[2] <= *param_3) break;
          }
          else {
            param_3[2] = *param_3;
            uVar1 = FUN_20da5d02(this,iVar2);
            *param_3 = *param_3 - uVar1;
            if (param_5 != 0) {
              if (*param_3 < *param_2) break;
              if (param_5 != 0) goto LAB_20da6726;
            }
            if (param_3[2] <= *param_2) break;
          }
LAB_20da6726:
          FUN_20da67be(this,param_1,param_6,iVar2,param_3,(int)param_2,param_4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int)this + 0x150));
      }
      for (piVar3 = *(int **)((int)this + 0x200); (int)piVar3 < *(int *)((int)this + 0x148);
          piVar3 = (int *)((int)piVar3 + 1)) {
        if (*(int *)((int)this + 400) == 0) {
          *param_3 = param_3[2];
          uVar1 = FUN_20da5d02(this,(int)piVar3);
          param_3[2] = param_3[2] + uVar1;
          if (param_5 != 0) {
            if (param_2[2] < param_3[2]) break;
            if (param_5 != 0) goto LAB_20da6786;
          }
          if (param_2[2] <= *param_3) break;
        }
        else {
          param_3[2] = *param_3;
          uVar1 = FUN_20da5d02(this,(int)piVar3);
          *param_3 = *param_3 - uVar1;
          if (param_5 != 0) {
            if (*param_3 < *param_2) break;
            if (param_5 != 0) goto LAB_20da6786;
          }
          if (param_3[2] <= *param_2) break;
        }
LAB_20da6786:
        FUN_20da67be(this,param_1,param_6,(int)piVar3,param_3,(int)param_2,param_4);
      }
      param_6 = param_6 + 1;
    } while (param_6 < param_7);
  }
  if (param_5 != 0) {
    *(int *)((int)this + 0x1cc) = param_6;
    *(int **)((int)this + 0x1c8) = piVar3;
    MoveToEx(param_1,*param_3,param_3[3],(LPPOINT)0x0);
  }
  return;
}



void __thiscall
FUN_20da67be(void *this,HDC param_1,int param_2,int param_3,LONG *param_4,int param_5,int param_6)

{
  byte *pbVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  RECT local_48;
  RECT local_38;
  LPCSTR local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  byte local_5;
  
  local_20 = param_2 * 0x10;
  iVar4 = local_20 + *(int *)((int)this + 0x1e8);
  local_18 = param_3 * 0xc;
  puVar2 = (undefined4 *)(*(int *)(iVar4 + 0xc) + local_18);
  local_1c = (int *)puVar2[2];
  local_28 = (LPCSTR)*puVar2;
  local_5 = *(byte *)(puVar2 + 1);
  local_10 = 0;
  local_c = 0;
  local_24 = 0;
  local_38.left = *param_4;
  local_38.top = param_4[1];
  local_38.right = param_4[2];
  local_38.bottom = param_4[3];
  if (((param_6 == 0) || (param_2 != *(int *)((int)this + 0x204))) ||
     (param_3 != *(int *)((int)this + 0x208))) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  iVar3 = 1;
  if ((*(short *)((int)this + 0x1a6) != 0) &&
     ((*(char *)(iVar4 + 8) != '\0' ||
      (*(char *)(*(int *)((int)this + 0x1ec) + 6 + local_18) != '\0')))) {
    if ((param_2 == *(int *)((int)this + 0x1fc)) && ((local_5 & 2) != 0)) {
      local_c = iVar3;
    }
    iVar4 = *(int *)((int)this + 0x200);
    if ((param_3 == iVar4) && ((local_5 & 8) != 0)) {
      local_10 = iVar3;
    }
    if (((local_14 != 0) && (iVar4 <= param_3)) && ((local_5 & 3) != 0)) {
      local_c = iVar3;
    }
    if ((local_10 == 0) || (local_c == 0)) {
      if (((((*(int *)((int)this + 0x1fc) < param_2) && ((local_5 & 1) != 0)) ||
           ((iVar4 < param_3 && ((local_5 & 4) != 0)))) && (local_10 == 0)) && (local_c == 0)) {
        local_24 = iVar3;
      }
    }
    else {
      local_48.left = *param_4;
      local_48.top = param_4[1];
      local_48.right = param_4[2];
      local_48.bottom = param_4[3];
      FUN_20db2af5(this,param_2,param_3,&local_48.left,(int)param_4,param_5,1);
    }
    if ((local_24 == 0) || (local_14 != 0)) {
      iVar4 = local_10;
      if ((local_10 != 0) && (local_c != 0)) {
        iVar4 = 0;
      }
      FUN_20db2af5(this,param_2,param_3,&local_38.left,(int)param_4,param_5,iVar4);
    }
  }
  if ((local_24 != 0) && (local_14 == 0)) goto LAB_20da68ca;
  if ((local_10 != 0) && (local_c != 0)) {
    FUN_20da690e(this,param_1,param_2,param_3,&local_48,local_1c,param_6);
  }
  FUN_20da690e(this,param_1,param_2,param_3,&local_38,local_1c,param_6);
  if (((local_10 != 0) && (local_c != 0)) && (local_14 == 0)) {
    FUN_20da69f6(this,param_1,param_2,param_3,&local_48,(int)local_1c,param_6,local_28);
  }
  FUN_20da69f6(this,param_1,param_2,param_3,&local_38,(int)local_1c,param_6,local_28);
  iVar4 = local_20;
  if (local_10 == 0) {
    if (local_c == 0) {
LAB_20da6898:
      if (local_10 != 0) {
        pbVar1 = (byte *)(*(int *)(local_20 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_18);
        *pbVar1 = *pbVar1 & 0xc;
      }
    }
    else {
      pbVar1 = (byte *)(*(int *)(local_20 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_18);
      *pbVar1 = *pbVar1 & 3;
    }
  }
  else {
    if (local_c == 0) goto LAB_20da6898;
    pbVar1 = (byte *)(*(int *)(local_20 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_18);
    *pbVar1 = *pbVar1 ^ 3;
    FUN_20da6ab5(this,param_1,param_2,param_3,&local_48.left);
    *(byte *)(*(int *)(iVar4 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_18) = local_5 & 3;
  }
  FUN_20da6ab5(this,param_1,param_2,param_3,&local_38.left);
  *(byte *)(*(int *)(local_20 + 0xc + *(int *)((int)this + 0x1e8)) + 4 + local_18) = local_5;
LAB_20da68ca:
  if (local_14 != 0) {
    FUN_20da6c44(this,param_1,&local_38);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x20dacb68)

void __thiscall
FUN_20da690e(void *this,HDC param_1,int param_2,int param_3,RECT *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  HBRUSH hbr;
  
  if ((*(short *)((int)this + 0x1a6) == 0) &&
     ((*(short *)((int)this + 0x19a) == 1 ||
      ((param_6 != 0 && (*(short *)((int)this + 0x19a) == 2)))))) {
    iVar1 = *(int *)((int)this + 0x204);
    if (iVar1 < param_2) {
LAB_20da6971:
      if (*(int *)((int)this + 0x20c) < param_2) goto LAB_20da6955;
    }
    else if (param_2 < *(int *)((int)this + 0x20c)) {
      if (param_2 < iVar1) goto LAB_20da6955;
      goto LAB_20da6971;
    }
    iVar2 = *(int *)((int)this + 0x208);
    if (iVar2 < param_3) {
LAB_20da69ae:
      if (*(int *)((int)this + 0x210) < param_3) goto LAB_20da6955;
    }
    else if (param_3 < *(int *)((int)this + 0x210)) {
      if (param_3 < iVar2) goto LAB_20da6955;
      goto LAB_20da69ae;
    }
    if ((*(short *)((int)this + 0x198) == 0) || (param_2 != iVar1)) {
      hbr = *(HBRUSH *)((int)this + 0x1e0);
      goto LAB_20da69c9;
    }
    if (param_3 != iVar2) {
      FUN_20dacb26();
      return;
    }
  }
LAB_20da6955:
  if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
    FUN_20dacb31();
    return;
  }
  if ((param_2 < *(int *)((int)this + 0x14c)) || (param_3 < *(int *)((int)this + 0x150))) {
    hbr = *(HBRUSH *)((int)this + 0x1dc);
  }
  else {
    hbr = *(HBRUSH *)((int)this + 0x1d8);
  }
LAB_20da69c9:
  FillRect(param_1,param_4,hbr);
  if ((param_5 != (int *)0x0) && (param_5[4] != 0)) {
    FUN_20dacb55();
    return;
  }
  return;
}



void __thiscall
FUN_20da69f6(void *this,HDC param_1,int param_2,int param_3,LPRECT param_4,int param_5,int param_6,
            LPCSTR param_7)

{
  short sVar1;
  DWORD color;
  undefined4 uVar2;
  HGDIOBJ local_8;
  
  if ((param_7 != (LPCSTR)0x0) && (*param_7 != '\0')) {
    local_8 = (HGDIOBJ)0x0;
    if ((param_5 != 0) && (*(HGDIOBJ *)(param_5 + 0xc) != (HGDIOBJ)0x0)) {
      local_8 = SelectObject(param_1,*(HGDIOBJ *)(param_5 + 0xc));
    }
    color = FUN_20da99c5(this,param_2,param_3,param_5,param_6);
    SetTextColor(param_1,color);
    InflateRect(param_4,-3,-1);
    if ((param_5 == 0) || (*(char *)(param_5 + 9) == 'd')) {
      if ((param_2 < *(int *)((int)this + 0x14c)) || (param_3 < *(int *)((int)this + 0x150))) {
        sVar1 = *(short *)((int)this + 0x196);
      }
      else {
        sVar1 = *(short *)((int)this + 0x194);
      }
    }
    else {
      sVar1 = (short)*(char *)(param_5 + 9);
    }
    uVar2 = FUN_20da9a8f(this,param_2,param_3,param_5);
    FUN_20da9ae0(this,param_1,param_7,&param_4->left,*(COLORREF *)((int)this + 0x17c),(short)uVar2,
                 sVar1);
    InflateRect(param_4,3,1);
    if ((param_5 != 0) && (*(int *)(param_5 + 0xc) != 0)) {
      if (local_8 == (HGDIOBJ)0x0) {
        local_8 = GetStockObject(0xd);
      }
      SelectObject(param_1,local_8);
    }
  }
  return;
}



void __thiscall FUN_20da6ab5(void *this,HDC param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  short sVar2;
  HGDIOBJ pvVar3;
  code *pcVar4;
  int i;
  undefined4 uVar5;
  
  pcVar4 = SelectObject_exref;
  if ((param_2 < *(int *)((int)this + 0x14c)) || (param_3 < *(int *)((int)this + 0x150))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_2 < 0) || (param_3 < 0)) {
    sVar2 = 1;
  }
  else if (bVar1) {
    sVar2 = *(short *)((int)this + 0x1a0);
  }
  else {
    sVar2 = *(short *)((int)this + 0x19e);
  }
  if (sVar2 == 1) {
    if (bVar1) {
      SelectObject(param_1,*(HGDIOBJ *)((int)this + 0x1d4));
    }
    FUN_20da6b9c(param_1,param_4,0xc);
    if (!bVar1) {
      return;
    }
    uVar5 = *(undefined4 *)((int)this + 0x1d0);
  }
  else {
    if (sVar2 == 2) {
      pvVar3 = GetStockObject(7);
      pcVar4 = SelectObject_exref;
      SelectObject(param_1,pvVar3);
      FUN_20da6b9c(param_1,param_4,0xc);
      i = 6;
    }
    else {
      if (sVar2 != 3) {
        return;
      }
      pvVar3 = GetStockObject(6);
      pcVar4 = SelectObject_exref;
      SelectObject(param_1,pvVar3);
      FUN_20da6b9c(param_1,param_4,0xc);
      i = 7;
    }
    pvVar3 = GetStockObject(i);
    (*pcVar4)(param_1,pvVar3);
    FUN_20da6b9c(param_1,param_4,3);
    uVar5 = *(undefined4 *)((int)this + 0x1d0);
  }
  (*pcVar4)(param_1,uVar5);
  return;
}



void FUN_20da6b9c(HDC param_1,int *param_2,uint param_3)

{
  int iVar1;
  int x;
  
  param_2[2] = param_2[2] + -1;
  param_2[3] = param_2[3] + -1;
  if (param_3 == 0xc) {
    MoveToEx(param_1,*param_2,param_2[3],(LPPOINT)0x0);
    LineTo(param_1,param_2[2],param_2[3]);
    iVar1 = param_2[1] + -1;
LAB_20da6bdd:
    LineTo(param_1,param_2[2],iVar1);
  }
  else {
    if ((param_3 & 8) != 0) {
      MoveToEx(param_1,*param_2,param_2[3],(LPPOINT)0x0);
      iVar1 = param_2[3];
      goto LAB_20da6bdd;
    }
    if ((param_3 & 4) != 0) {
      FUN_20dacb86(param_2[2]);
      return;
    }
  }
  if (param_3 == 3) {
    MoveToEx(param_1,*param_2,param_2[3],(LPPOINT)0x0);
    LineTo(param_1,*param_2,param_2[1]);
    iVar1 = param_2[1];
    x = param_2[2];
  }
  else if ((param_3 & 2) == 0) {
    if ((param_3 & 1) == 0) goto LAB_20da6bff;
    MoveToEx(param_1,*param_2,param_2[1],(LPPOINT)0x0);
    iVar1 = param_2[1];
    x = param_2[2];
  }
  else {
    MoveToEx(param_1,*param_2,param_2[3],(LPPOINT)0x0);
    iVar1 = param_2[1];
    x = *param_2;
  }
  LineTo(param_1,x,iVar1);
LAB_20da6bff:
  param_2[2] = param_2[2] + 1;
  param_2[3] = param_2[3] + 1;
  return;
}



void __thiscall FUN_20da6c44(void *this,HDC param_1,LPRECT param_2)

{
  param_2->right = param_2->right + -1;
  param_2->bottom = param_2->bottom + -1;
  if (*(short *)((int)this + 0x198) != 1) {
    if (*(short *)((int)this + 0x198) != 2) goto LAB_20da6c6c;
    InflateRect(param_2,-1,-1);
    DrawFocusRect(param_1,param_2);
    InflateRect(param_2,1,1);
  }
  DrawFocusRect(param_1,param_2);
LAB_20da6c6c:
  param_2->right = param_2->right + 1;
  param_2->bottom = param_2->bottom + 1;
  return;
}



undefined4 FUN_20da6c78(int *param_1)

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



int FUN_20da6cf4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x78) >> 1 & 1) == 0) ||
     (iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1 + 8), -1 < iVar2)) {
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
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_20da6d2f(int *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  piVar2 = param_1;
  if ((param_1[-0x19] != 0) && (param_2 == (int *)0x4c)) {
    *param_4 = 1;
    piVar1 = (int *)param_1[0x5c];
    if (piVar1 != (int *)0x0) {
      param_1[0x5c] = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (param_3 != 0) {
      iVar3 = (*(code *)**(undefined4 **)piVar2[-0x19])
                        ((undefined4 *)piVar2[-0x19],&DAT_20da8608,&param_1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = (**(code **)(*param_1 + 0xc))(param_1,0x4c,&param_2,0);
      piVar1 = param_1;
      if (param_1 != (int *)0x0) {
        param_1 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      param_3 = (**(code **)*param_2)(param_2,&LAB_20da8618,&param_4);
      piVar1 = param_2;
      if (param_2 != (int *)0x0) {
        param_2 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (param_3 < 0) {
        return param_3;
      }
      iVar3 = (**(code **)(*param_4 + 0x28))(param_4,0,&LAB_20da8618,&local_8);
      piVar1 = param_4;
      if (param_4 != (int *)0x0) {
        param_4 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (iVar3 < 0) {
        return iVar3;
      }
      piVar1 = piVar2 + -0x34;
      piVar2[0x5c] = local_8;
      FUN_20da3c27(piVar1,(RECT *)0x0);
      piVar2[0x51] = 1;
      iVar3 = FUN_20daab2a(piVar1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = FUN_20daae0a(piVar1);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar3 = FUN_20daaf1c(piVar1);
      return iVar3;
    }
  }
  return 0;
}



undefined4 FUN_20da6e61(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar3 = *(int **)((&PTR_PTR_20dc489c)[*(int *)(param_1 + -8) * 2] + 0x24);
  if ((piVar3 == (int *)0x0) || (*param_2 != *piVar3)) {
LAB_20da6eab:
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
      if (bVar6) goto LAB_20da6e8f;
    }
    if (*param_2 == -0x640443fe) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar5 = (char *)&DAT_20da85b0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*param_2 == *pcVar5;
        param_2 = (int *)((int)param_2 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        piVar3 = (int *)(param_1 + 0x10);
        goto LAB_20da6e95;
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
    if (!bVar6) goto LAB_20da6eab;
LAB_20da6e8f:
    piVar3 = (int *)(param_1 + 4);
LAB_20da6e95:
    *param_3 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_20da6efc(int param_1,int *param_2)

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
    goto LAB_20da6f25;
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
    goto LAB_20da6f25;
  }
  lpMem = *(uint **)(param_1 + 4);
  piVar2 = (int *)*lpMem;
  if (piVar2 == param_2) {
LAB_20dae2f2:
    uVar3 = lpMem[1];
  }
  else {
    if ((int *)lpMem[1] != param_2) {
      return 0x80040200;
    }
    if (piVar2 == param_2) goto LAB_20dae2f2;
    uVar3 = ~-(uint)((int *)lpMem[1] != param_2) & (uint)piVar2;
  }
  if (uVar3 == 0) {
    return 0x80040200;
  }
  HeapFree(DAT_20dc4190,0,lpMem);
  *(uint *)(param_1 + 4) = uVar3;
LAB_20da6f25:
  iVar1 = *param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  (**(code **)(iVar1 + 8))(param_2);
  return 0;
}



void __fastcall FUN_20da6f66(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(param_1 + 0x38,0);
  FUN_20da6f7e(param_1);
  return;
}



void __fastcall FUN_20da6f7e(int param_1)

{
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



undefined4 * __thiscall FUN_20da6f95(void *this,byte param_1)

{
  FUN_20da6fbd((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20da6fbd(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_20da7af0;
  param_1[7] = &PTR_LAB_20da7ad8;
  param_1[0xe] = &PTR_LAB_20da7a78;
  param_1[0xf] = &PTR_LAB_20da7a58;
  param_1[0x10] = &PTR_LAB_20da7738;
  param_1[0x11] = &PTR_LAB_20da7710;
  param_1[0x12] = &PTR_LAB_20da76d0;
  param_1[0x13] = &PTR_LAB_20da76b0;
  param_1[0x14] = &PTR_LAB_20da7688;
  param_1[0x15] = &PTR_LAB_20da7660;
  param_1[0x16] = &PTR_LAB_20da7650;
  param_1[0x17] = &PTR_LAB_20da7640;
  param_1[0x18] = &PTR_LAB_20da7628;
  param_1[0x19] = &PTR_LAB_20da7610;
  param_1[0x1a] = &PTR_LAB_20da7600;
  param_1[0x30] = &PTR_LAB_20da75e8;
  param_1[0x31] = &PTR_LAB_20da75c8;
  param_1[0x32] = &PTR_LAB_20da75b0;
  param_1[0x33] = &PTR_LAB_20da75a0;
  param_1[0x34] = &PTR_LAB_20da7588;
  param_1[0x35] = &PTR_LAB_20da7768;
  FUN_20da3f74(param_1,0);
  FUN_20da39a4(param_1,0);
  FUN_20da717b((int)param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  FUN_20da71fe();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  piVar1 = (int *)param_1[0x89];
  if (piVar1 != (int *)0x0) {
    param_1[0x89] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x8a];
  if (piVar1 != (int *)0x0) {
    param_1[0x8a] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((BSTR)param_1[0x88] != (BSTR)0x0) {
    SysFreeString((BSTR)param_1[0x88]);
  }
  FUN_20da7228((int)param_1);
  FUN_20da4600(param_1 + 0x49);
  FUN_20da72c3(param_1 + 0x36);
  FUN_20da7328(param_1);
  return;
}



void __thiscall FUN_20da7102(void *this,int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1 * 0x10;
  iVar2 = param_2 * 0xc;
  pvVar1 = *(LPVOID *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar2);
  if (pvVar1 != (LPVOID)0x0) {
    CoTaskMemFree(pvVar1);
  }
  pvVar1 = *(LPVOID *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + 8 + iVar2);
  if (pvVar1 != (LPVOID)0x0) {
    if (*(HGDIOBJ *)((int)pvVar1 + 0xc) != (HGDIOBJ)0x0) {
      FUN_20db7138(*(HGDIOBJ *)((int)pvVar1 + 0xc));
    }
    FUN_20dab673((void *)((int)pvVar1 + 0x10),(undefined4 *)0x0);
    CoTaskMemFree(pvVar1);
  }
  puVar4 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar2);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  return;
}



void __fastcall FUN_20da717b(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x1d8) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1d8));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1dc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1dc));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1e0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1e0));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1e4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1e4));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1d0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1d0));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1d4) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1d4));
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  return;
}



void FUN_20da71fe(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_20dc4758) {
    puVar1 = &DAT_20dc41c0;
    do {
      if (((HGDIOBJ)*puVar1 != (HGDIOBJ)0x0) && (puVar1[-2] == 0)) {
        DeleteObject((HGDIOBJ)*puVar1);
        *puVar1 = 0;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x12;
    } while (iVar2 < DAT_20dc4758);
  }
  return;
}



void __fastcall FUN_20da7228(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x240);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x240) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_20da724e((uint *)(param_1 + 0x230));
  return;
}



void __cdecl FUN_20da724e(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    if (param_1[1] != 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        do {
          CoTaskMemFree(*(LPVOID *)(param_1[1] + uVar2 * 4));
          uVar2 = uVar2 + 1;
        } while (uVar2 < *param_1);
      }
      CoTaskMemFree((LPVOID)param_1[1]);
      param_1[1] = 0;
    }
    if ((LPVOID)param_1[3] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_1[3]);
      param_1[3] = 0;
    }
    if (param_1[2] != 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        do {
          FUN_20dab657(param_1[2] + iVar1);
          uVar2 = uVar2 + 1;
          iVar1 = iVar1 + 0x18;
        } while (uVar2 < *param_1);
      }
      CoTaskMemFree((LPVOID)param_1[2]);
      param_1[2] = 0;
    }
    *param_1 = 0;
  }
  return;
}



void __fastcall FUN_20da72c3(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_20da8438;
  FUN_20da7319((int)param_1);
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[3] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[5] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[2] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[7] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  if ((LPVOID)param_1[0xe] != (LPVOID)0x0) {
    HeapFree(DAT_20dc4190,0,(LPVOID)param_1[0xe]);
    param_1[0xe] = 0;
  }
  return;
}



void __fastcall FUN_20da7319(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    while (0 < *(int *)(param_1 + 0x40)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + -4 + *(int *)(param_1 + 0x40) * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
    HeapFree(DAT_20dc4190,0,*(LPVOID *)(param_1 + 0x3c));
  }
  return;
}



void __fastcall FUN_20da7328(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_20da80e0;
  param_1[7] = &PTR_LAB_20da80c8;
  param_1[0xe] = &PTR_LAB_20da8068;
  param_1[0xf] = &PTR_LAB_20da8048;
  param_1[0x10] = &PTR_LAB_20da8018;
  param_1[0x11] = &PTR_LAB_20da7ff0;
  param_1[0x12] = &PTR_LAB_20da7fb0;
  param_1[0x13] = &PTR_LAB_20da7f90;
  param_1[0x14] = &PTR_LAB_20da7f68;
  param_1[0x15] = &PTR_LAB_20da7f40;
  param_1[0x16] = &PTR_LAB_20da7f30;
  param_1[0x17] = &PTR_LAB_20da7f20;
  param_1[0x18] = &PTR_LAB_20da7f08;
  param_1[0x19] = &PTR_LAB_20da7ef0;
  param_1[0x1a] = &PTR_LAB_20da7ee0;
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
  FUN_20da742f(param_1);
  return;
}



void __fastcall FUN_20da742f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20da8368;
  param_1[7] = &PTR_LAB_20da8350;
  FUN_20da7458(param_1 + 0xb);
  FUN_20da7458(param_1 + 8);
  FUN_20da7472(param_1);
  return;
}



void __fastcall FUN_20da7458(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)param_1 + 10);
  *param_1 = &PTR_LAB_20da83b8;
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
      HeapFree(DAT_20dc4190,0,(LPVOID)param_1[1]);
    }
  }
  return;
}



void __fastcall FUN_20da7472(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_20da83d8;
  if (*(char *)(param_1 + 6) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    puVar2 = (&PTR_PTR_20dc489c)[param_1[5] * 2];
    piVar1 = (int *)(puVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(puVar2 + 0x2c);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((&PTR_PTR_20dc489c)[param_1[5] * 2] + 0x2c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  }
  *param_1 = &PTR_FUN_20da8410;
  InterlockedDecrement(&DAT_20dc48c8);
  return;
}



undefined4 FUN_20da74d1(int param_1)

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



void __thiscall FUN_20da8667(void *this,undefined4 param_1)

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



undefined4 __thiscall FUN_20da86e7(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 2:
                    // WARNING: Load size is inaccurate
    uVar1 = (**(code **)(*this + 0x30))(0x800a017c,0x7dd,0);
    break;
  case 3:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 4:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 5:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 6:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 7:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 8:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 9:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 10:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0xb:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0xc:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0xd:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0xe:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0xf:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x10:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x11:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x12:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x13:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x14:
    uVar1 = FUN_20da8709();
    return uVar1;
  case 0x15:
    uVar1 = FUN_20da8709();
    return uVar1;
  default:
    uVar1 = FUN_20da8709();
    return uVar1;
  }
  return uVar1;
}



void FUN_20da8709(void)

{
  int in_EAX;
  
  (**(code **)(in_EAX + 0x30))();
  return;
}



void __thiscall FUN_20da875f(void *this,undefined4 param_1,ushort param_2,undefined4 param_3)

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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

HINSTANCE FUN_20da8810(LCID param_1)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  pHVar2 = DAT_20dc4160;
  if ((DAT_20dc4160 == (HINSTANCE)0x0) || ((param_1 != 0 && (param_1 != _DAT_20dc4dc8)))) {
    if (param_1 == 0) {
      param_1 = _DAT_20dc4dc8;
    }
    iVar1 = GetLocaleInfoA(param_1,3,(LPSTR)&local_c,5);
    if ((iVar1 != 0) && (iVar1 = LoadStringA(DAT_20dc4164,0x3e9,local_318,0x104), iVar1 != 0)) {
      wsprintfA(local_214,s__s_s_DLL_20dc4e3c,local_318,&local_c);
      GetModuleFileNameA(DAT_20dc4164,local_41c,0x104);
      FUN_20da8a55(local_41c,local_214,local_110);
      pHVar2 = LoadLibraryA(local_110);
      bVar3 = pHVar2 == (HMODULE)0x0;
      if (!bVar3) goto LAB_20da89f0;
      iVar1 = lstrlenA((LPCSTR)&local_c);
      if (2 < iVar1) {
        local_a = 0;
        wsprintfA(local_214,s__s_s_DLL_20dc4e48,local_318,&local_c);
        FUN_20da8a55(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
      bVar3 = pHVar2 == (HINSTANCE)0x0;
      if (!bVar3) goto LAB_20da89f0;
      iVar1 = GetLocaleInfoA((uint)((ushort)_DAT_20dc4dc8 & 0x3ff | 0x400),3,(LPSTR)&local_c,5);
      if (iVar1 != 0) {
        iVar1 = lstrlenA(local_110);
        *(undefined2 *)((int)&uStack_117 + iVar1) = local_c;
        auStack_115[iVar1] = local_a;
        pHVar2 = LoadLibraryA(local_110);
        bVar3 = pHVar2 == (HMODULE)0x0;
        if (!bVar3) goto LAB_20da89f0;
        wsprintfA(local_214,s__u__s_dll_20dc4e54,param_1,local_318);
        FUN_20da8a55(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
    }
  }
  bVar3 = pHVar2 == (HINSTANCE)0x0;
LAB_20da89f0:
  if (bVar3) {
    pHVar2 = DAT_20dc4164;
  }
  if ((DAT_20dc4160 == (HINSTANCE)0x0) && ((param_1 == 0 || (param_1 == _DAT_20dc4dc8)))) {
    DAT_20dc4160 = pHVar2;
  }
  if ((DAT_20dc4e60 == 0) || ((param_1 != _DAT_20dc4dc8 && (param_1 != 0)))) {
    if (pHVar2 != DAT_20dc4164) {
      GetModuleFileNameA(pHVar2,local_110,0x104);
      iVar1 = FUN_20db9a03(local_110,1);
      if (((iVar1 == -1) || (iVar1 == 1)) &&
         ((pHVar2 = DAT_20dc4164, param_1 == 0 || (param_1 == _DAT_20dc4dc8)))) {
        DAT_20dc4160 = DAT_20dc4164;
      }
    }
    if ((param_1 == 0) || (param_1 == _DAT_20dc4dc8)) {
      DAT_20dc4e60 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return pHVar2;
}



void __cdecl FUN_20da8a55(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

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



// WARNING: Variable defined which should be unmapped: param_2

undefined4 __thiscall FUN_20da8a9c(int param_1,undefined4 param_2,LPOLESTR param_3,DWORD param_4)

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
    if ((&DAT_20dc4898)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    iVar3 = lstrlenA(pCVar4);
    cchWideChar = iVar3 * 2 + 2;
    FUN_20da29fd(local_8c,cchWideChar);
    if ((&DAT_20dc4898)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    MultiByteToWideChar(0,0,pCVar4,-1,local_8c[0],cchWideChar);
    pWVar1 = local_8c[0];
    (*local_8->lpVtbl->SetGUID)
              (local_8,*(GUID **)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x20));
    if ((&DAT_20dc4898)[*(int *)(param_1 + 0x14) * 4] == 3) {
      iVar3 = *(int *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      iVar3 = *(int *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    (*local_8->lpVtbl->SetHelpFile)(local_8,(LPOLESTR)(-(uint)(iVar3 != 0) & (uint)pWVar1));
    (*local_8->lpVtbl->SetHelpContext)(local_8,param_4);
    (*local_8->lpVtbl->SetDescription)(local_8,param_3);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 4),-1,
                        local_28c,0x100);
    (*local_8->lpVtbl->SetSource)(local_8,local_28c);
    HVar2 = (*local_8->lpVtbl->QueryInterface)(local_8,(IID *)&DAT_20dab700,&local_c);
    if (-1 < HVar2) {
      SetErrorInfo(0,local_c);
      (*local_c->lpVtbl->Release)(local_c);
    }
    (*local_8->lpVtbl->Release)(local_8);
    if ((local_8c[0] != (LPWSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_8c[0]);
    }
  }
  return param_2;
}



int FUN_20da8c28(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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



void __fastcall FUN_20da8cfd(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(HWND *)(param_1 + 0xa0) == (HWND)0x0) {
    return;
  }
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0xa0),-0x10);
  uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0xa0),-0x14);
  if (*(short *)(param_1 + 0x1ac) == 0) {
    uVar1 = uVar1 & 0xff7fffff;
  }
  else {
    if (*(short *)(param_1 + 0x1ae) != 0) {
      SetWindowLongA(*(HWND *)(param_1 + 0xa0),-0x10,uVar1 & 0xff7fffff);
      uVar2 = uVar2 | 0x200;
      goto LAB_20da8d53;
    }
    uVar1 = uVar1 | 0x800000;
  }
  SetWindowLongA(*(HWND *)(param_1 + 0xa0),-0x10,uVar1);
  uVar2 = uVar2 & 0xfffffdff;
LAB_20da8d53:
  SetWindowLongA(*(HWND *)(param_1 + 0xa0),-0x14,uVar2);
  SetWindowPos(*(HWND *)(param_1 + 0xa0),(HWND)0x0,0,0,0,0,0x27);
  return;
}



undefined4 FUN_20da8db0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) != param_2) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x84) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0xfffffe0b);
    FUN_20da4248((void *)(param_1 + -0xd4),0);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_20da8e23(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x9c)) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x9c) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x12);
    FUN_20da4248((void *)(param_1 + -0xd4),3);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_20da8e9e(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x8c)) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x8c) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0xe);
    FUN_20da4248((void *)(param_1 + -0xd4),1);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_20da8f19(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x94)) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x94) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x10);
    FUN_20da4248((void *)(param_1 + -0xd4),2);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



void __fastcall FUN_20da9067(int param_1)

{
  byte *pbVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  LPCSTR pCVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  if ((*(short *)(param_1 + 0x1a6) != 0) && (*(int *)(param_1 + 0x180) != 0)) {
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      iVar5 = 0;
      do {
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0x144)) {
          iVar2 = 0;
          do {
            *(undefined1 *)(*(int *)(iVar2 + 0xc + *(int *)(param_1 + 0x1e8)) + 4 + iVar5) = 0;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + 0x10;
          } while (iVar4 < *(int *)(param_1 + 0x144));
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar7 < *(int *)(param_1 + 0x148));
    }
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      iVar7 = 0;
      do {
        iVar5 = 0;
        if (*(char *)(iVar7 + 6 + *(int *)(param_1 + 0x1ec)) != '\0') {
          iVar4 = *(int *)(param_1 + 0x144);
          local_c = 0;
          if (iVar4 != 1 && -1 < iVar4 + -1) {
            do {
              if ((((*(short *)(param_1 + 0x1a6) != 2) && (*(short *)(param_1 + 0x1a6) != 4)) ||
                  (iVar7 < 1)) ||
                 ((*(byte *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0xc + iVar5) + -8 + iVar7) & 2) !=
                  0)) {
                if (((iVar5 < 0) || (iVar4 <= local_c)) ||
                   ((iVar7 < 0 || (*(int *)(param_1 + 0x148) <= local_8)))) {
                  pCVar6 = (LPCSTR)0x0;
                }
                else {
                  pCVar6 = *(LPCSTR *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0xc + iVar5) + iVar7);
                }
                if (pCVar6 != (LPCSTR)0x0) {
                  if (((local_c + 1 < 0) || (iVar4 <= local_c + 1)) ||
                     ((iVar7 < 0 || (*(int *)(param_1 + 0x148) <= local_8)))) {
                    pCVar3 = (LPCSTR)0x0;
                  }
                  else {
                    pCVar3 = *(LPCSTR *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0x1c + iVar5) + iVar7)
                    ;
                  }
                  if ((((pCVar3 != (LPCSTR)0x0) && (*pCVar6 != '\0')) && (*pCVar3 != '\0')) &&
                     (iVar4 = lstrcmpA(pCVar6,pCVar3), iVar4 == 0)) {
                    pbVar1 = (byte *)(*(int *)(iVar5 + 0xc + *(int *)(param_1 + 0x1e8)) + 4 + iVar7)
                    ;
                    *pbVar1 = *pbVar1 | 2;
                    pbVar1 = (byte *)(*(int *)(iVar5 + 0x1c + *(int *)(param_1 + 0x1e8)) + 4 + iVar7
                                     );
                    *pbVar1 = *pbVar1 | 1;
                  }
                }
              }
              iVar4 = *(int *)(param_1 + 0x144);
              local_c = local_c + 1;
              iVar5 = iVar5 + 0x10;
            } while (local_c < iVar4 + -1);
          }
        }
        local_8 = local_8 + 1;
        iVar7 = iVar7 + 0xc;
      } while (local_8 < *(int *)(param_1 + 0x148));
    }
    local_c = 0;
    if (0 < *(int *)(param_1 + 0x144)) {
      iVar7 = 0;
      do {
        iVar5 = 0;
        if (*(char *)(iVar7 + 8 + *(int *)(param_1 + 0x1e8)) != '\0') {
          iVar4 = *(int *)(param_1 + 0x148);
          local_8 = 0;
          if (iVar4 != 1 && -1 < iVar4 + -1) {
            do {
              if (((*(short *)(param_1 + 0x1a6) != 3) && (*(short *)(param_1 + 0x1a6) != 4)) ||
                 ((iVar7 < 1 ||
                  ((*(byte *)(*(int *)(iVar7 + -4 + *(int *)(param_1 + 0x1e8)) + 4 + iVar5) & 8) !=
                   0)))) {
                if (((iVar7 < 0) || (*(int *)(param_1 + 0x144) <= local_c)) ||
                   ((iVar5 < 0 || (iVar4 <= local_8)))) {
                  pCVar6 = (LPCSTR)0x0;
                }
                else {
                  pCVar6 = *(LPCSTR *)(*(int *)(iVar7 + 0xc + *(int *)(param_1 + 0x1e8)) + iVar5);
                }
                if (pCVar6 != (LPCSTR)0x0) {
                  if ((((iVar7 < 0) || (*(int *)(param_1 + 0x144) <= local_c)) || (local_8 + 1 < 0))
                     || (iVar4 <= local_8 + 1)) {
                    pCVar3 = (LPCSTR)0x0;
                  }
                  else {
                    pCVar3 = *(LPCSTR *)
                              (*(int *)(iVar7 + 0xc + *(int *)(param_1 + 0x1e8)) + 0xc + iVar5);
                  }
                  if (((pCVar3 != (LPCSTR)0x0) && (*pCVar6 != '\0')) &&
                     ((*pCVar3 != '\0' && (iVar4 = lstrcmpA(pCVar6,pCVar3), iVar4 == 0)))) {
                    pbVar1 = (byte *)(*(int *)(iVar7 + 0xc + *(int *)(param_1 + 0x1e8)) + 4 + iVar5)
                    ;
                    *pbVar1 = *pbVar1 | 8;
                    pbVar1 = (byte *)(*(int *)(iVar7 + 0xc + *(int *)(param_1 + 0x1e8)) + 0x10 +
                                     iVar5);
                    *pbVar1 = *pbVar1 | 4;
                  }
                }
              }
              iVar4 = *(int *)(param_1 + 0x148);
              local_8 = local_8 + 1;
              iVar5 = iVar5 + 0xc;
            } while (local_8 < iVar4 + -1);
          }
        }
        local_c = local_c + 1;
        iVar7 = iVar7 + 0x10;
      } while (local_c < *(int *)(param_1 + 0x144));
    }
  }
  return;
}



undefined4 FUN_20da9136(int param_1,int param_2)

{
  void *this;
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0xe;
  }
  else {
    if (param_2 <= *(int *)(param_1 + 0x74) + -1) {
      this = (void *)(param_1 + -0xd4);
      FUN_20da91a6(this,-1,param_2);
      FUN_20da3c81(this);
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
      FUN_20da8667((void *)(param_1 + -0xa8),7);
      FUN_20da3c27(this,(RECT *)0x0);
      return 0;
    }
    uVar1 = 0x14;
  }
  uVar1 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar1);
  return uVar1;
}



void __thiscall FUN_20da91a6(void *this,int param_1,int param_2)

{
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x144))) &&
     (param_1 != *(int *)((int)this + 0x14c))) {
    *(int *)((int)this + 0x20c) = param_1;
    *(int *)((int)this + 0x204) = param_1;
    *(int *)((int)this + 0x1fc) = param_1;
    *(int *)((int)this + 0x14c) = param_1;
  }
  if (((-1 < param_2) && (param_2 <= *(int *)((int)this + 0x148))) &&
     (param_2 != *(int *)((int)this + 0x150))) {
    *(int *)((int)this + 0x210) = param_2;
    *(int *)((int)this + 0x208) = param_2;
    *(int *)((int)this + 0x200) = param_2;
    *(int *)((int)this + 0x150) = param_2;
  }
  return;
}



undefined4 FUN_20da9201(int param_1,int param_2)

{
  void *this;
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0xd;
  }
  else {
    if (param_2 <= *(int *)(param_1 + 0x70) + -1) {
      this = (void *)(param_1 + -0xd4);
      FUN_20da91a6(this,param_2,-1);
      FUN_20da3c81(this);
      *(undefined4 *)(param_1 + 0x140) = 1;
      *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
      FUN_20da8667((void *)(param_1 + -0xa8),6);
      FUN_20da3c27(this,(RECT *)0x0);
      return 0;
    }
    uVar1 = 0x13;
  }
  uVar1 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar1);
  return uVar1;
}



undefined4 FUN_20da928d(int param_1,int param_2)

{
  undefined4 uVar1;
  tagRECT local_14;
  
  if ((param_2 < 0) || (2 < param_2)) {
    uVar1 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
  }
  else {
    *(short *)(param_1 + 0xc4) = (short)param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x17);
    FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
    FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_20da92f2(void *this,LPRECT param_1,int param_2)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_2 == 0) && (*(short *)((int)this + 0x19a) == 0)) {
    FUN_20da616d(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),&param_1->left);
  }
  else {
    FUN_20da616d(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),&local_14);
    FUN_20da616d(this,*(int *)((int)this + 0x20c),*(int *)((int)this + 0x210),&local_24);
    if (local_18 < local_8) {
      local_18 = local_8;
    }
    if (local_1c < local_c) {
      local_1c = local_c;
    }
    if (local_10 < local_20) {
      local_20 = local_10;
    }
    if (local_24 <= local_14) {
      local_14 = local_24;
    }
    SetRect(param_1,local_14,local_20,local_1c,local_18);
  }
  return;
}



undefined4 FUN_20da937e(int param_1,undefined4 param_2)

{
  FUN_20da44f3((void *)(param_1 + -0xd4));
  (**(code **)**(undefined4 **)(param_1 + 0x150))
            (*(undefined4 **)(param_1 + 0x150),&DAT_20dab710,param_2);
  return 0;
}



int FUN_20da93a8(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_2 != (undefined4 *)0x0) &&
     (iVar2 = (**(code **)*param_2)(param_2,&DAT_20da85a0,&local_8), iVar2 < 0)) {
    return iVar2;
  }
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x150) = local_8;
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffb;
  *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
  FUN_20da8667((void *)(param_1 + -0xa8),0xfffffe00);
  if (param_2 == (undefined4 *)0x0) {
    FUN_20da44f3((void *)(param_1 + -0xd4));
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x50) + 0x14))(*(undefined4 *)(param_1 + 0x150));
    FUN_20da43e5((void *)(param_1 + -0xd4));
  }
  FUN_20da3c81((void *)(param_1 + -0xd4));
  FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  return 0;
}



undefined4 FUN_20da9465(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x88) != param_2) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x88) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0xfffffdff);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_20da94cd(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x90)) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x90) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0xf);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_20da953d(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(int *)(param_1 + 0x98)) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
      return uVar2;
    }
    *(int *)(param_1 + 0x98) = param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x11);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return 0;
}



LPWSTR __cdecl FUN_20da95d3(LPCSTR param_1,BSTR param_2)

{
  int cchWideChar;
  
  if ((param_1 != (LPCSTR)0x0) &&
     (cchWideChar = MultiByteToWideChar(0,0,param_1,-1,(LPWSTR)0x0,0), 0 < cchWideChar)) {
    if (((uint)param_2 & 0xff) == 0) {
      param_2 = SysAllocStringLen((OLECHAR *)0x0,cchWideChar - 1);
    }
    else if (((uint)param_2 & 0xff) == 1) {
      param_2 = (BSTR)CoTaskMemAlloc(cchWideChar * 2);
    }
    if (param_2 != (LPWSTR)0x0) {
      MultiByteToWideChar(0,0,param_1,-1,param_2,cchWideChar);
      param_2[cchWideChar + -1] = L'\0';
      return param_2;
    }
  }
  return (LPWSTR)0x0;
}



BSTR __cdecl FUN_20da96a8(OLECHAR *param_1,BSTR param_2)

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



int __thiscall FUN_20da96d0(void *this,HDC param_1,BYTE *param_2)

{
  BYTE BVar1;
  uint uVar2;
  BYTE *pBVar3;
  int iVar4;
  int iVar5;
  BYTE *lpsz;
  int *piVar6;
  int iVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  BYTE *local_8;
  
  lpsz = param_2;
  uVar2 = FUN_20da63fe(this);
  if (uVar2 != 0) {
    iVar4 = 0;
    iVar7 = 0;
    if (0 < *(int *)((int)this + 0x148)) {
      do {
        iVar5 = FUN_20da98db(this,0,iVar7,(LPCSTR)0x0,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        *(undefined4 *)(*(int *)((int)this + 0x1ec) + iVar4) = 0xffffffff;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar7 < *(int *)((int)this + 0x148));
    }
    iVar4 = 1;
    if (1 < *(int *)((int)this + 0x144)) {
      do {
        iVar7 = FUN_20da98db(this,iVar4,0,(LPCSTR)0x0,0);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0x144));
    }
  }
  if ((param_2 != (BYTE *)0x0) && (BVar1 = *param_2, BVar1 != '\0')) {
    if (*(int *)((int)this + 0x14c) == 0) {
      return 0x15;
    }
    local_10 = 1;
    pBVar3 = param_2;
    do {
      if ((BVar1 == ';') || (BVar1 == '\n')) break;
      if ((BVar1 == '|') || (BVar1 == '\t')) {
        local_10 = local_10 + 1;
      }
      pBVar3 = (BYTE *)CharNextA((LPCSTR)pBVar3);
      BVar1 = *pBVar3;
    } while (BVar1 != '\0');
    if ((*(int *)((int)this + 0x148) < local_10) &&
       (iVar4 = FUN_20da39a4(this,local_10), iVar4 != 0)) {
      return iVar4;
    }
    if ((*(int *)((int)this + 0x144) == 0) && (iVar4 = FUN_20da3f74(this,1), iVar4 != 0)) {
      return iVar4;
    }
    BVar1 = *pBVar3;
    local_c = 0;
    if ((BVar1 != '\0') && ((BVar1 == ';' || (BVar1 == '\n')))) {
      if (*(int *)((int)this + 0x150) == 0) {
        return 0x15;
      }
      local_c = 1;
      while( true ) {
        pBVar3 = (BYTE *)CharNextA((LPCSTR)pBVar3);
        BVar1 = *pBVar3;
        if (BVar1 == '\0') break;
        if (((BVar1 == '|') || (BVar1 == '\t')) || (BVar1 == '\n')) {
          local_c = local_c + 1;
        }
      }
      if ((*(int *)((int)this + 0x144) < local_c) &&
         (iVar4 = FUN_20da3f74(this,local_c), iVar4 != 0)) {
        return iVar4;
      }
    }
    local_8 = param_2;
    param_2 = (BYTE *)0x9;
    local_14 = 0;
    if (0 < local_10) {
      local_18 = 0;
      do {
        iVar4 = (int)(char)*local_8;
        if (iVar4 < 0xb) {
          if (iVar4 < 9) {
LAB_20da9793:
            if (iVar4 != 0) goto LAB_20da9795;
          }
LAB_20da97da:
          *(char *)(local_18 + 4 + *(int *)((int)this + 0x1ec)) = (char)param_2;
          if (((char)param_2 != '\t') && (lpsz < local_8)) {
            lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
          }
          uVar2 = FUN_20da4739(param_1,(LPCSTR)lpsz,(int)local_8 - (int)lpsz);
          piVar6 = (int *)(*(int *)((int)this + 0x1ec) + local_18);
          iVar4 = (uVar2 & 0xffff) + 6;
          if (*piVar6 < iVar4) {
            *piVar6 = iVar4;
          }
          pBVar3 = lpsz;
          param_2 = lpsz;
          if (lpsz == local_8) {
            FUN_20da98db(this,0,local_14,(LPCSTR)0x0,0);
          }
          else {
            for (; pBVar3 < local_8; pBVar3 = (BYTE *)CharNextA((LPCSTR)pBVar3)) {
              iVar4 = FUN_20da98ae(pBVar3);
              if (iVar4 != 0) {
                param_2 = pBVar3;
              }
            }
            pBVar3 = (BYTE *)CharNextA((LPCSTR)param_2);
            while ((lpsz < pBVar3 && (iVar4 = FUN_20da98ae(lpsz), iVar4 == 0))) {
              lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
            }
            iVar4 = FUN_20da98db(this,0,local_14,(LPCSTR)lpsz,(int)pBVar3 - (int)lpsz);
            if (iVar4 != 0) {
              return iVar4;
            }
          }
          param_2 = (BYTE *)0x9;
          lpsz = (BYTE *)CharNextA((LPCSTR)local_8);
          local_14 = local_14 + 1;
          local_18 = local_18 + 0xc;
        }
        else {
          if (iVar4 == 0x3b) goto LAB_20da97da;
          if (iVar4 == 0x3c) {
            param_2 = (BYTE *)0x1;
          }
          else if (iVar4 == 0x3e) {
            param_2 = (BYTE *)0x7;
          }
          else {
            if (iVar4 != 0x5e) {
              iVar4 = iVar4 + -0x7c;
              goto LAB_20da9793;
            }
            param_2 = (BYTE *)0x4;
          }
        }
LAB_20da9795:
        local_8 = (BYTE *)CharNextA((LPCSTR)local_8);
      } while (local_14 < local_10);
    }
    local_14 = 0;
    if (0 < local_c) {
      do {
        BVar1 = *local_8;
        if ((BVar1 == '\0') || (('\b' < (char)BVar1 && (((char)BVar1 < '\v' || (BVar1 == '|')))))) {
          uVar2 = FUN_20da4739(param_1,(LPCSTR)lpsz,(int)local_8 - (int)lpsz);
          iVar4 = (uVar2 & 0xffff) + 6;
          if (**(int **)((int)this + 0x1ec) < iVar4) {
            **(int **)((int)this + 0x1ec) = iVar4;
          }
          pBVar3 = lpsz;
          param_2 = lpsz;
          if (lpsz == local_8) {
            FUN_20da98db(this,local_14,0,(LPCSTR)0x0,0);
          }
          else {
            for (; pBVar3 < local_8; pBVar3 = (BYTE *)CharNextA((LPCSTR)pBVar3)) {
              iVar4 = FUN_20da98ae(pBVar3);
              if (iVar4 != 0) {
                param_2 = pBVar3;
              }
            }
            pBVar3 = (BYTE *)CharNextA((LPCSTR)param_2);
            while ((lpsz < pBVar3 && (iVar4 = FUN_20da98ae(lpsz), iVar4 == 0))) {
              lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
            }
            iVar4 = FUN_20da98db(this,local_14,0,(LPCSTR)lpsz,(int)pBVar3 - (int)lpsz);
            if (iVar4 != 0) {
              return iVar4;
            }
          }
          lpsz = (BYTE *)CharNextA((LPCSTR)local_8);
          local_14 = local_14 + 1;
        }
        local_8 = (BYTE *)CharNextA((LPCSTR)local_8);
      } while (local_14 < local_c);
    }
  }
  return 0;
}



undefined4 __cdecl FUN_20da98ae(BYTE *param_1)

{
  BYTE BVar1;
  BOOL BVar2;
  
  BVar2 = IsDBCSLeadByte(*param_1);
  if ((BVar2 == 0) &&
     ((((BVar1 = *param_1, BVar1 == ' ' || (BVar1 == '\t')) || (BVar1 == '\n')) || (BVar1 == '\r')))
     ) {
    return 0;
  }
  return 1;
}



undefined4 __thiscall FUN_20da98db(void *this,int param_1,int param_2,LPCSTR param_3,int param_4)

{
  LPCSTR pCVar1;
  CHAR CVar2;
  LPVOID pv;
  int iVar3;
  LPSTR pCVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (*(int *)((int)this + 0x144) <= param_1)) ||
     (*(int *)((int)this + 0x148) <= param_2)) {
    uVar5 = 3;
  }
  else {
    iVar3 = param_1 * 0x10;
    iVar6 = param_2 * 0xc;
    pv = *(LPVOID *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar6);
    if (pv != (LPVOID)0x0) {
      CoTaskMemFree(pv);
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar6) = 0;
    }
    if ((param_3 != (LPCSTR)0x0) && (*param_3 != '\0')) {
      if (param_4 != 0) {
        if (param_4 < 0) {
          pCVar4 = FUN_20da998f(param_3);
          *(LPSTR *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar6) = pCVar4;
        }
        else {
          pCVar1 = param_3 + param_4;
          CVar2 = *pCVar1;
          *pCVar1 = '\0';
          pCVar4 = FUN_20da998f(param_3);
          *(LPSTR *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3) + iVar6) = pCVar4;
          *pCVar1 = CVar2;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



LPSTR __cdecl FUN_20da998f(LPCSTR param_1)

{
  int iVar1;
  LPSTR pCVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = lstrlenA(param_1);
    if (iVar1 != 0) {
      pCVar2 = (LPSTR)CoTaskMemAlloc(iVar1 + 1);
      if (pCVar2 != (LPSTR)0x0) {
        pCVar2 = lstrcpyA(pCVar2,param_1);
        return pCVar2;
      }
    }
  }
  return (LPSTR)0x0;
}



DWORD __thiscall FUN_20da99c5(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  
  if ((*(short *)((int)this + 0x1a6) == 0) &&
     ((*(short *)((int)this + 0x19a) == 1 ||
      ((param_4 != 0 && (*(short *)((int)this + 0x19a) == 2)))))) {
    iVar1 = *(int *)((int)this + 0x204);
    if (iVar1 < param_1) {
LAB_20da9a38:
      if (*(int *)((int)this + 0x20c) < param_1) goto LAB_20da9a00;
    }
    else if (param_1 < *(int *)((int)this + 0x20c)) {
      if (param_1 < iVar1) goto LAB_20da9a00;
      goto LAB_20da9a38;
    }
    iVar2 = *(int *)((int)this + 0x208);
    if (iVar2 < param_2) {
LAB_20da9a4a:
      if (*(int *)((int)this + 0x210) < param_2) goto LAB_20da9a00;
    }
    else if (param_2 < *(int *)((int)this + 0x210)) {
      if (param_2 < iVar2) goto LAB_20da9a00;
      goto LAB_20da9a4a;
    }
    if ((*(short *)((int)this + 0x198) == 0) || (param_1 != iVar1)) {
      uVar4 = *(uint *)((int)this + 0x16c);
      goto LAB_20da9a1a;
    }
    if (param_2 != iVar2) {
      DVar3 = FUN_20dacc74((int)this);
      return DVar3;
    }
  }
LAB_20da9a00:
  if ((param_3 != 0) && (uVar4 = *(uint *)(param_3 + 4), uVar4 != 0)) {
    if ((uVar4 & 0x80000000) != 0) {
      DVar3 = GetSysColor(uVar4 & 0xffff);
      return DVar3;
    }
    return uVar4 & 0xffffff;
  }
  if ((param_1 < *(int *)((int)this + 0x14c)) || (param_2 < *(int *)((int)this + 0x150))) {
    uVar4 = *(uint *)((int)this + 0x164);
  }
  else {
    uVar4 = *(uint *)((int)this + 0x15c);
  }
LAB_20da9a1a:
  if ((uVar4 & 0x80000000) == 0) {
    DVar3 = uVar4 & 0xffffff;
  }
  else {
    DVar3 = GetSysColor(uVar4 & 0xffff);
  }
  return DVar3;
}



undefined4 __thiscall FUN_20da9a8f(void *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  if (((param_3 == 0) ||
      (uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_3 + 8)),
      *(char *)(param_3 + 8) == 'd')) &&
     ((*(int *)((int)this + 0x14c) <= param_1 ||
      (cVar1 = *(char *)(*(int *)((int)this + 0x1ec) + 5 + param_2 * 0xc),
      uVar2 = CONCAT31((int3)((uint)(param_2 * 3) >> 8),cVar1), cVar1 == 'd')))) {
    uStack_c = CONCAT22((short)((uint)(param_2 * 3) >> 0x10),
                        (short)*(char *)(*(int *)((int)this + 0x1ec) + 4 + param_2 * 0xc));
  }
  else {
    uStack_c = CONCAT22((short)((uint)uVar2 >> 0x10),(short)(char)uVar2);
  }
  if ((short)uStack_c == 9) {
    cVar1 = **(char **)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10) + param_2 * 0xc
                       );
    if (((((cVar1 < '0') || ('9' < cVar1)) && (cVar1 != '+')) && ((cVar1 != '-' && (cVar1 != '.'))))
       && ((cVar1 != '(' && (*(int *)((int)this + 400) == 0)))) {
      uStack_c = 1;
    }
    else {
      uStack_c = 7;
    }
  }
  return uStack_c;
}



void __thiscall
FUN_20da9ae0(void *this,HDC param_1,LPCSTR param_2,LONG *param_3,COLORREF param_4,undefined2 param_5
            ,short param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  COLORREF CVar4;
  int iVar5;
  uint uVar6;
  tagRECT local_1c;
  void *local_c;
  uint local_8;
  
  uVar3 = 0;
  uVar6 = 2;
  if (*(int *)((int)this + 400) != 0) {
    uVar6 = 0;
    uVar3 = 2;
  }
  switch(param_5) {
  case 0:
    goto switchD_20da9b08_caseD_0;
  case 1:
    uVar3 = uVar3 | 4;
    goto switchD_20da9b08_caseD_0;
  case 2:
    uVar3 = uVar3 | 8;
switchD_20da9b08_caseD_0:
    local_8 = uVar3;
    break;
  case 3:
    local_8 = 1;
    break;
  case 4:
    local_8 = 5;
    break;
  case 5:
    local_8 = 9;
    break;
  case 6:
    goto switchD_20da9b08_caseD_6;
  case 7:
    uVar6 = uVar6 | 4;
    goto switchD_20da9b08_caseD_6;
  case 8:
    uVar6 = uVar6 | 8;
switchD_20da9b08_caseD_6:
    local_8 = uVar6;
  }
  local_1c.left = *param_3;
  local_1c.top = param_3[1];
  local_1c.right = param_3[2];
  local_8 = local_8 | (-(uint)(param_4 != 0) & 0xfffffff0) + 0x20 | 0x800;
  local_1c.bottom = param_3[3];
  local_c = this;
  if (param_4 != 0) {
    DrawTextA(param_1,param_2,-1,&local_1c,(int)(short)local_8 | 0x400);
    iVar1 = param_3[3];
    iVar2 = param_3[1];
    iVar5 = local_1c.bottom - local_1c.top;
    if (iVar1 - iVar2 < local_1c.bottom - local_1c.top) {
      iVar5 = iVar1 - iVar2;
    }
    local_1c.left = *param_3;
    local_1c.right = param_3[2];
    switch(param_5) {
    case 0:
    case 3:
    case 6:
      local_1c.bottom = iVar5 + iVar2;
      break;
    case 1:
    case 4:
    case 7:
      local_1c.top = ((iVar2 - iVar5) + iVar1) / 2;
      local_1c.bottom = local_1c.top + iVar5;
      break;
    case 2:
    case 5:
    case 8:
      local_1c.top = iVar1 - iVar5;
      local_1c.bottom = iVar1;
    }
  }
  _param_5 = 0xc0;
  param_4 = 0xc0;
  if (param_6 == 1) {
    _param_5 = 0x808080;
LAB_20dad0fc:
    param_4 = 0xffffff;
  }
  else {
    if (param_6 == 2) {
      param_4 = 0x808080;
    }
    else {
      if (param_6 == 3) goto LAB_20dad0fc;
      if (param_6 != 4) goto LAB_20da9b67;
    }
    _param_5 = 0xffffff;
  }
LAB_20da9b67:
  if (_param_5 != 0xc0) {
    CVar4 = GetTextColor(param_1);
    OffsetRect(&local_1c,1,1);
    SetTextColor(param_1,_param_5);
    if (*(int *)((int)local_c + 400) == 0) {
      DrawTextA(param_1,param_2,-1,&local_1c,(int)(short)local_8);
    }
    else {
      DrawTextExA(param_1,param_2,-1,&local_1c,(int)(short)local_8 | 0x20000,(LPDRAWTEXTPARAMS)0x0);
    }
    OffsetRect(&local_1c,-1,-1);
    SetTextColor(param_1,CVar4);
  }
  if (param_4 != 0xc0) {
    CVar4 = GetTextColor(param_1);
    OffsetRect(&local_1c,-1,-1);
    SetTextColor(param_1,param_4);
    if (*(int *)((int)local_c + 400) == 0) {
      DrawTextA(param_1,param_2,-1,&local_1c,(int)(short)local_8);
    }
    else {
      DrawTextExA(param_1,param_2,-1,&local_1c,(int)(short)local_8 | 0x20000,(LPDRAWTEXTPARAMS)0x0);
    }
    OffsetRect(&local_1c,1,1);
    SetTextColor(param_1,CVar4);
  }
  if (*(int *)((int)local_c + 400) == 0) {
    DrawTextA(param_1,param_2,-1,&local_1c,(int)(short)local_8);
  }
  else {
    DrawTextExA(param_1,param_2,-1,&local_1c,(int)(short)local_8 | 0x20000,(LPDRAWTEXTPARAMS)0x0);
  }
  return;
}



undefined4 FUN_20da9c3b(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = OleTranslateColor(param_2,0,&param_2);
  if (iVar1 < 0) {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x24);
    FUN_20da4248((void *)(param_1 + -0xd4),4);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_20da9cb5(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = OleTranslateColor(param_2,0,&param_2);
  if (iVar1 < 0) {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = uVar2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x25);
    FUN_20da4248((void *)(param_1 + -0xd4),5);
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_20da9f24(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + 0x154);
  if (*(int *)(param_1 + 0x154) == 0) {
    OleCreatePictureIndirect(0,&DAT_20dab780,0,puVar1);
  }
  puVar1 = (undefined4 *)*puVar1;
  iVar2 = (**(code **)*puVar1)(puVar1,&DAT_20dab770,&param_1);
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar3 = param_1;
  }
  *param_2 = iVar3;
  return 0;
}



int __thiscall FUN_20da9f6e(void *this,int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = (int *)this;
  if (param_2 == (undefined4 *)0x0) {
    piVar1 = (int *)param_1[0x55];
    if (piVar1 != (int *)0x0) {
      param_1[0x55] = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
LAB_20da9fe1:
    if ((short)param_1[0x37] == 99) {
      (**(code **)(*param_1 + 0x1fc))(param_1,99);
    }
    param_1[-9] = param_1[-9] | 1;
    FUN_20da8667(param_1 + -0x2a,0x36);
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_20dab780,&local_8);
    if ((-1 < iVar2) && (iVar2 = (**(code **)(*local_8 + 0x14))(local_8,&param_2), -1 < iVar2)) {
      if ((-2 < (short)param_2) && (((short)param_2 < 1 || ((short)param_2 == 3)))) {
        piVar1 = (int *)param_1[0x55];
        if (piVar1 != (int *)0x0) {
          param_1[0x55] = 0;
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        param_1[0x55] = (int)local_8;
        goto LAB_20da9fe1;
      }
      iVar2 = FUN_20da86e7(param_1 + -0x35,2);
    }
    piVar1 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
  }
  return iVar2;
}



undefined4 FUN_20daa063(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  tagPOINT local_c;
  
  if ((param_2 == 99) || ((-1 < param_2 && (param_2 < 0x10)))) {
    *(short *)(param_1 + 0xdc) = (short)param_2;
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x35);
    if (*(int *)(param_1 + -0x34) != 0) {
      GetCursorPos(&local_c);
      uVar1 = SendMessageA(*(HWND *)(param_1 + -0x34),0x84,0,
                           CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
      SendMessageA(*(HWND *)(param_1 + -0x34),0x20,(WPARAM)*(HWND *)(param_1 + -0x34),
                   uVar1 & 0xffff | 0x2000000);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
  }
  return uVar2;
}



undefined4 __thiscall FUN_20daa0f2(void *this,undefined4 param_1,short param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  BOOL BVar4;
  HCURSOR local_8;
  
  local_8 = (HCURSOR)0x0;
  uVar3 = FUN_20da63fe(this);
  if ((((uVar3 == 0) && (BVar4 = IsWindow(*(HWND *)((int)this + 0xa0)), BVar4 != 0)) &&
      (sVar1 = *(short *)((int)this + 0x1b0), sVar1 != 0)) && (param_2 == 1)) {
    if (sVar1 == 99) {
      piVar2 = *(int **)((int)this + 0x228);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar2 + 0xc))(piVar2,&local_8);
    }
    else {
      local_8 = LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(&DAT_20daf728 + sVar1 * 4));
    }
    if (local_8 != (HCURSOR)0x0) {
      SetCursor(local_8);
      return 1;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_20daa147(void *this,uint *param_1)

{
  *param_1 = *(uint *)((int)this + 0x2c) >> 6 & 3;
  return 0;
}



uint FUN_20daa15b(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_20daa18e((void *)(param_1 + 4),param_2);
  if (-1 < (int)uVar1) {
    *(uint *)(param_1 + -0x24) = *(uint *)(param_1 + -0x24) | 1;
    FUN_20da8667((void *)(param_1 + -0xa8),0x60f);
  }
  return uVar1;
}



uint __thiscall FUN_20daa18e(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if ((uVar1 & 0x200) != 0) {
    if (((int)param_1 < 0) || ((int)(((uVar1 >> 10 & 1) != 0) + 1) < (int)param_1)) {
      uVar1 = FUN_20daa2ae(this,0x17c);
      return uVar1;
    }
    if (param_1 != (uVar1 >> 6 & 3)) {
      *(uint *)((int)this + 0x2c) = (param_1 & 3) << 6 | uVar1 & 0xffffff3f;
      FUN_20da5d2f((HWND)this,(uint)(0 < (int)param_1));
    }
  }
  return 0;
}



void __fastcall FUN_20daa1ec(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LPVOID pvVar5;
  int *piVar6;
  uint *puVar7;
  int local_8;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
    for (piVar6 = *(int **)(param_1 + 0x30);
        (*(int **)(param_1 + 0x30) != (int *)0x0 && (*piVar6 != 0)); piVar6 = piVar6 + 2) {
      iVar4 = iVar4 + 1;
    }
    pvVar5 = HeapAlloc(DAT_20dc4190,0,(iVar4 + 1) * 0xc);
    *(LPVOID *)(param_1 + 0x38) = pvVar5;
    if (pvVar5 != (LPVOID)0x0) {
      puVar1 = *(uint **)(param_1 + 0x30);
      local_8 = 0;
      if (puVar1 != (uint *)0x0) {
        iVar4 = 0;
        puVar7 = puVar1;
        do {
          uVar2 = *puVar7;
          if (uVar2 == 0) break;
          uVar3 = puVar7[1];
          *(uint *)(iVar4 + (int)pvVar5) = uVar2;
          local_8 = local_8 + 1;
          *(uint *)(iVar4 + 4 + (int)pvVar5) = uVar3;
          *(uint *)(iVar4 + 8 + (int)pvVar5) = uVar2 | 0x800a0000;
          puVar7 = puVar7 + 2;
          iVar4 = iVar4 + 0xc;
        } while (puVar1 != (uint *)0x0);
      }
      *(undefined4 *)((int)pvVar5 + local_8 * 0xc) = 0;
    }
  }
  return;
}



void __thiscall FUN_20daa276(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_20dab790;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



uint __thiscall FUN_20daa2ae(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = *(int **)((int)this + 0x30);
  if (piVar1 == (int *)0x0) {
    uVar2 = -(uint)(param_1 != 0) & 0x80004005;
  }
  else {
    iVar3 = 0;
    piVar4 = piVar1;
    do {
      if ((*piVar4 == 0) || (*piVar4 == param_1)) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (piVar1 != (int *)0x0);
    if (piVar1[iVar3 * 2] == 0) {
      uVar2 = 0;
    }
    else if (piVar1[iVar3 * 2] == 0x17c) {
      uVar2 = (**(code **)(**(int **)((int)this + 4) + 0x30))
                        (0x800a017c,
                         CONCAT22((short)((uint)(piVar1 + iVar3 * 2) >> 0x10),
                                  (short)(piVar1 + iVar3 * 2)[1]),0x17c);
    }
    else {
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}



undefined4 * __thiscall FUN_20daa31e(void *this,byte param_1)

{
  FUN_20daa346((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20daa346(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_20dab790;
  return;
}



undefined4 FUN_20daa72c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x70) <= iVar1)) {
      uVar5 = 0xd;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x134);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x74))) {
        puVar3 = *(undefined4 **)
                  (*(int *)(*(int *)(param_1 + 0x114) + 0xc + iVar1 * 0x10) + 8 + iVar2 * 0xc);
        if (puVar3 == (undefined4 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar3;
        }
        *param_2 = uVar5;
        return 0;
      }
      uVar5 = 0xe;
    }
  }
  else {
    uVar5 = 5;
  }
  uVar5 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar5);
  return uVar5;
}



undefined4 FUN_20daa7a0(int param_1,undefined4 param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  RECT local_14;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x130) < 0) || (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 0x130))) {
    uVar3 = 0xd;
  }
  else if ((*(int *)(param_1 + 0x134) < 0) ||
          (*(int *)(param_1 + 0x74) <= *(int *)(param_1 + 0x134))) {
    uVar3 = 0xe;
  }
  else {
    iVar2 = OleTranslateColor(param_2,0,&param_1);
    if (-1 < iVar2) {
      if ((*(short *)(iVar1 + 200) == 0) ||
         ((*(int *)(iVar1 + 0x130) == *(int *)(iVar1 + 0x138) &&
          (*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 0x13c))))) {
        this = (void *)(iVar1 + -0xd4);
        FUN_20daa870(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134),0,param_2,(LOGFONTA *)0x0)
        ;
        iVar2 = FUN_20daa925(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134));
        if (iVar2 == 0) {
          return 0;
        }
        FUN_20da616d(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134),&local_14.left);
      }
      else {
        FUN_20db0ed9((void *)(iVar1 + -0xd4),0,param_2,(LOGFONTA *)0x0);
        FUN_20da92f2((void *)(iVar1 + -0xd4),&local_14,1);
      }
      FUN_20da3c27((void *)(iVar1 + -0xd4),&local_14);
      return 0;
    }
    uVar3 = 2;
  }
  uVar3 = FUN_20da86e7((void *)(iVar1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 __thiscall
FUN_20daa870(void *this,int param_1,int param_2,int param_3,undefined4 param_4,LOGFONTA *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  HFONT pHVar3;
  
  if ((param_1 < 0) || (*(int *)((int)this + 0x144) <= param_1)) {
    uVar1 = 0xd;
  }
  else if ((param_2 < 0) || (*(int *)((int)this + 0x148) <= param_2)) {
    uVar1 = 0xe;
  }
  else {
    puVar2 = *(undefined4 **)
              (*(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10) + 8 + param_2 * 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)CoTaskMemAlloc(0x14);
      if (puVar2 == (undefined4 *)0x0) {
        uVar1 = FUN_20da86e7(this,1);
        return uVar1;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 2) = 100;
      *(undefined1 *)((int)puVar2 + 9) = 100;
      *(undefined4 **)
       (*(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10) + 8 + param_2 * 0xc) = puVar2;
    }
    if (param_3 == 0) {
      *puVar2 = param_4;
    }
    else if (param_3 == 1) {
      puVar2[1] = param_4;
    }
    else if (param_3 == 2) {
      *(undefined1 *)(puVar2 + 2) = (undefined1)param_4;
    }
    else if (param_3 == 3) {
      *(undefined1 *)((int)puVar2 + 9) = (undefined1)param_4;
    }
    else if (param_3 == 4) {
      *(undefined1 *)((int)puVar2 + 10) = (undefined1)param_4;
    }
    else if (param_3 == 5) {
      if ((HGDIOBJ)puVar2[3] != (HGDIOBJ)0x0) {
        FUN_20db7138((HGDIOBJ)puVar2[3]);
      }
      pHVar3 = (HFONT)0x0;
      if (param_5 != (LOGFONTA *)0x0) {
        pHVar3 = FUN_20db6f95(param_5);
      }
      puVar2[3] = pHVar3;
    }
    else {
      if (param_3 != 6) {
        return 2;
      }
      FUN_20dab673(puVar2 + 4,&param_5->lfHeight);
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 __thiscall FUN_20daa925(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  tagRECT local_14;
  
  if (*(HWND *)((int)this + 0xa0) == (HWND)0x0) {
LAB_20dabb06:
    uVar2 = 0;
  }
  else {
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
    iVar3 = 0;
    iVar4 = 0;
    if (0 < param_1) {
      do {
        if (*(int *)((int)this + 0x14c) <= iVar4) break;
        uVar1 = FUN_20da5cca(this,iVar4);
        iVar3 = iVar3 + uVar1;
        if (local_14.bottom < iVar3) goto LAB_20dabb06;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1);
    }
    if (*(int *)((int)this + 0x14c) <= param_1) {
      iVar4 = *(int *)((int)this + 0x1fc);
      if (param_1 < iVar4) goto LAB_20dabb06;
      for (; (iVar4 < param_1 && (iVar4 < *(int *)((int)this + 0x144))); iVar4 = iVar4 + 1) {
        uVar1 = FUN_20da5cca(this,iVar4);
        iVar3 = iVar3 + uVar1;
        if (local_14.bottom < iVar3) goto LAB_20dabb06;
      }
    }
    iVar3 = 0;
    iVar4 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)((int)this + 0x150) <= iVar4) break;
        uVar1 = FUN_20da5d02(this,iVar4);
        iVar3 = iVar3 + uVar1;
        if (local_14.right < iVar3) goto LAB_20dabb06;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
    if (*(int *)((int)this + 0x150) <= param_2) {
      iVar4 = *(int *)((int)this + 0x200);
      if (param_2 < iVar4) goto LAB_20dabb06;
      for (; (iVar4 < param_2 && (iVar4 < *(int *)((int)this + 0x148))); iVar4 = iVar4 + 1) {
        uVar1 = FUN_20da5d02(this,iVar4);
        iVar3 = iVar3 + uVar1;
        if (local_14.right < iVar3) goto LAB_20dabb06;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_20daa9e5(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x70) <= iVar1)) {
      uVar4 = 0xd;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x134);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x74))) {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x114) + 0xc + iVar1 * 0x10) + 8 + iVar2 * 0xc)
        ;
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar1 + 4);
        }
        *param_2 = uVar4;
        return 0;
      }
      uVar4 = 0xe;
    }
  }
  else {
    uVar4 = 5;
  }
  uVar4 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar4);
  return uVar4;
}



undefined4 FUN_20daaa5a(int param_1,undefined4 param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  RECT local_14;
  
  iVar1 = param_1;
  if ((*(int *)(param_1 + 0x130) < 0) || (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 0x130))) {
    uVar3 = 0xd;
  }
  else if ((*(int *)(param_1 + 0x134) < 0) ||
          (*(int *)(param_1 + 0x74) <= *(int *)(param_1 + 0x134))) {
    uVar3 = 0xe;
  }
  else {
    iVar2 = OleTranslateColor(param_2,0,&param_1);
    if (-1 < iVar2) {
      if ((*(short *)(iVar1 + 200) == 0) ||
         ((*(int *)(iVar1 + 0x130) == *(int *)(iVar1 + 0x138) &&
          (*(int *)(iVar1 + 0x134) == *(int *)(iVar1 + 0x13c))))) {
        this = (void *)(iVar1 + -0xd4);
        FUN_20daa870(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134),1,param_2,(LOGFONTA *)0x0)
        ;
        iVar2 = FUN_20daa925(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134));
        if (iVar2 == 0) {
          return 0;
        }
        FUN_20da616d(this,*(int *)(iVar1 + 0x130),*(int *)(iVar1 + 0x134),&local_14.left);
      }
      else {
        FUN_20db0ed9((void *)(iVar1 + -0xd4),1,param_2,(LOGFONTA *)0x0);
        FUN_20da92f2((void *)(iVar1 + -0xd4),&local_14,1);
      }
      FUN_20da3c27((void *)(iVar1 + -0xd4),&local_14);
      return 0;
    }
    uVar3 = 2;
  }
  uVar3 = FUN_20da86e7((void *)(iVar1 + -0xd4),uVar3);
  return uVar3;
}



int __fastcall FUN_20daab2a(void *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  LPSTR pCVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPVOID *ppvVar10;
  SIZE_T cb;
  undefined4 local_f4 [6];
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4 [6];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94 [6];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [6];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  LPVOID local_34;
  SIZE_T local_30;
  LPVOID local_2c;
  LPVOID local_28 [5];
  uint local_14;
  int *local_10;
  uint local_c;
  void *local_8;
  
  piVar3 = *(int **)((int)param_1 + 0x240);
  if (piVar3 == (int *)0x0) {
    return 1;
  }
  puVar1 = (uint *)((int)param_1 + 0x230);
  local_8 = param_1;
  FUN_20da724e(puVar1);
  iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,&DAT_20dab7b0,&local_10,&local_2c);
  if (iVar2 < 0) {
    return iVar2;
  }
  puVar4 = &DAT_20dab7f0;
  puVar9 = local_f4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  local_dc = 0;
  local_d8 = 0;
  local_d0 = 4;
  local_d4 = 0xffffffff;
  local_cc = 0;
  local_c8 = 0x1e;
  puVar4 = &DAT_20dab7d8;
  puVar9 = local_c4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  local_ac = 8;
  local_a8 = 0;
  local_a0 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_9c = 0;
  local_98 = 0xb;
  puVar4 = &DAT_20dab7c0;
  puVar9 = local_94;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  local_7c = 0xc;
  local_78 = 0x32;
  local_70 = 0xffffffff;
  local_74 = 0xffffffff;
  local_6c = 0;
  local_68 = 0x1fb;
  puVar4 = &DAT_20dab808;
  puVar9 = local_64;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  local_48 = 0;
  local_3c = 0;
  local_4c = 0x24;
  local_40 = 0xffffffff;
  local_44 = 0xffffffff;
  local_38 = 3;
  iVar2 = (**(code **)(*local_10 + 0x10))(local_10,4,local_f4,0x28,0);
  piVar3 = local_10;
  if (iVar2 < 0) {
    if (local_10 == (int *)0x0) {
      return iVar2;
    }
    local_10 = (int *)0x0;
    (**(code **)(*piVar3 + 8))(piVar3);
    return iVar2;
  }
  ppvVar10 = local_28;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppvVar10 = (LPVOID)0x0;
    ppvVar10 = ppvVar10 + 1;
  }
  local_28[0] = local_2c;
  local_28[1] = (LPVOID)0x1;
  iVar2 = (**(code **)(*local_10 + 0x18))(local_10,0,0,local_28);
  piVar3 = local_10;
  pvVar5 = local_28[2];
  local_34 = local_28[2];
  if (local_10 != (int *)0x0) {
    local_10 = (int *)0x0;
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  uVar7 = 0;
  if (iVar2 < 0) {
    return iVar2;
  }
  local_c = 0;
  if (local_14 != 0) {
    piVar3 = (int *)((int)pvVar5 + 4);
    uVar8 = local_14;
    do {
      if ((((piVar3[1] != 0) && (*piVar3 != -1)) && (*piVar3 != -2)) && (piVar3[8] != 0x41)) {
        uVar7 = uVar7 + 1;
      }
      piVar3 = piVar3 + 10;
      uVar8 = uVar8 - 1;
      local_c = uVar7;
    } while (uVar8 != 0);
  }
  uVar7 = local_c;
  if (local_c == 0) {
LAB_20daadae:
    if (local_28[2] != (LPVOID)0x0) {
      CoTaskMemFree(local_28[2]);
    }
    if (local_28[3] != (LPVOID)0x0) {
      CoTaskMemFree(local_28[3]);
    }
    iVar2 = 0;
  }
  else {
    cb = local_c << 2;
    *puVar1 = local_c;
    local_30 = cb;
    puVar4 = (undefined4 *)CoTaskMemAlloc(cb);
    *(undefined4 **)((int)param_1 + 0x234) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      for (uVar7 = uVar7 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      pvVar5 = CoTaskMemAlloc(cb);
      uVar7 = 0;
      *(LPVOID *)((int)param_1 + 0x23c) = pvVar5;
      if (pvVar5 != (LPVOID)0x0) {
        pvVar5 = CoTaskMemAlloc(local_c * 0x18);
        *(LPVOID *)((int)param_1 + 0x238) = pvVar5;
        if (pvVar5 != (LPVOID)0x0) {
          local_c = 0;
          if (local_14 != 0) {
            local_8 = (void *)0x0;
            piVar3 = (int *)((int)local_34 + 4);
            do {
              if (*puVar1 <= uVar7) break;
              if (((piVar3[1] != 0) && (*piVar3 != -1)) && ((*piVar3 != -2 && (piVar3[8] != 0x41))))
              {
                pCVar6 = FUN_20da998f((LPCSTR)piVar3[-1]);
                *(LPSTR *)(*(int *)((int)param_1 + 0x234) + uVar7 * 4) = pCVar6;
                *(int *)(*(int *)((int)param_1 + 0x23c) + uVar7 * 4) = piVar3[8];
                FUN_20daadd1((undefined4 *)((int)local_8 + *(int *)((int)param_1 + 0x238)),
                             piVar3 + 2);
                uVar7 = uVar7 + 1;
                local_8 = (void *)((int)local_8 + 0x18);
              }
              local_c = local_c + 1;
              piVar3 = piVar3 + 10;
            } while (local_c < local_14);
          }
          goto LAB_20daadae;
        }
      }
    }
    iVar2 = FUN_20da86e7(local_8,1);
  }
  return iVar2;
}



undefined4 __cdecl FUN_20daadd1(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  LPWSTR lpString1;
  
  param_1[4] = param_2[4];
  iVar1 = param_2[4];
  if (iVar1 == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  else {
    if (iVar1 == 1) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_2[3];
      param_1[5] = param_2[5];
      return 1;
    }
    if (iVar1 != 2) {
      return 1;
    }
  }
  iVar1 = lstrlenW((LPCWSTR)param_2[5]);
  lpString1 = (LPWSTR)FUN_20da28aa(iVar1 + 1);
  param_1[5] = lpString1;
  if (lpString1 != (LPWSTR)0x0) {
    lstrcpyW(lpString1,(LPCWSTR)param_2[5]);
    return 1;
  }
  return 0;
}



int __fastcall FUN_20daae0a(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (*(int *)((int)param_1 + 0x230) != 0) {
    FUN_20da39a4(param_1,*(int *)((int)param_1 + 0x150) + *(int *)((int)param_1 + 0x230));
    (**(code **)(*(int *)((int)param_1 + 0xd4) + 0x278))((int)param_1 + 0xd4);
    uVar2 = 0;
    if (*(int *)((int)param_1 + 0x230) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)param_1 + 0x23c) + uVar2 * 4);
        if ((iVar1 < 2) ||
           (((6 < iVar1 && (iVar1 != 0x14)) && ((iVar1 < 0x1f8 || (0x1fa < iVar1)))))) {
          uVar3 = 1;
        }
        else {
          uVar3 = 7;
        }
        iVar1 = uVar2 + *(int *)((int)param_1 + 0x150);
        uVar2 = uVar2 + 1;
        *(undefined1 *)(*(int *)((int)param_1 + 0x1ec) + 4 + iVar1 * 0xc) = uVar3;
      } while (uVar2 < *(uint *)((int)param_1 + 0x230));
    }
    if ((*(int *)((int)param_1 + 0x14c) != 0) && (uVar2 = 0, *(int *)((int)param_1 + 0x230) != 0)) {
      do {
        iVar1 = FUN_20da98db(param_1,0,uVar2 + *(int *)((int)param_1 + 0x150),
                             *(LPCSTR *)(*(int *)((int)param_1 + 0x234) + uVar2 * 4),-1);
        if (iVar1 < 0) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)param_1 + 0x230));
    }
  }
  return 0;
}



int __fastcall FUN_20daaf1c(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint local_30 [2];
  LPVOID local_28;
  LPVOID local_24;
  uint local_1c;
  LPVOID local_18;
  undefined4 *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  if ((*(int *)((int)param_1 + 0x230) == 0) ||
     (local_10 = *(int **)((int)param_1 + 0x240), local_10 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    FUN_20da3f74(param_1,*(int *)((int)param_1 + 0x14c));
    FUN_20da39a4(param_1,*(int *)((int)param_1 + 0x230) + *(int *)((int)param_1 + 0x150));
    uVar3 = *(int *)((int)param_1 + 0x230) * 0x30;
    local_14 = (undefined4 *)CoTaskMemAlloc(uVar3);
    if (local_14 != (undefined4 *)0x0) {
      puVar4 = local_14;
      for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      if (local_14 != (undefined4 *)0x0) {
        uVar3 = 0;
        if (*(int *)((int)param_1 + 0x230) != 0) {
          local_c = 0;
          puVar4 = local_14 + 7;
          do {
            FUN_20daadd1(puVar4 + -7,(undefined4 *)(local_c + *(int *)((int)param_1 + 0x238)));
            local_c = local_c + 0x18;
            puVar4[-1] = uVar3 << 2;
            *puVar4 = 0;
            puVar4[2] = 0xffffffff;
            puVar4[1] = 0xffffffff;
            puVar4[3] = 0;
            puVar4[4] = 0x1e;
            uVar3 = uVar3 + 1;
            puVar4 = puVar4 + 0xc;
          } while (uVar3 < *(uint *)((int)param_1 + 0x230));
        }
        piVar1 = local_10;
        iVar2 = (**(code **)(*local_10 + 0x10))
                          (local_10,*(int *)((int)param_1 + 0x230),local_14,
                           *(int *)((int)param_1 + 0x230) << 2,0);
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)(*piVar1 + 0x20))(piVar1,1,&DAT_20dc4e64,0,0,0), -1 < iVar2)) {
          local_10 = *(int **)((int)param_1 + 0x14c);
          puVar5 = local_30;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_30[0] = 100 / *(uint *)((int)param_1 + 0x230);
          if (local_30[0] == 0) {
            local_30[0] = 1;
          }
          local_30[1] = 1;
          do {
            iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,local_30);
            if ((iVar2 < 0) ||
               (iVar2 = FUN_20da3f74(param_1,local_1c + *(int *)((int)param_1 + 0x144)), iVar2 != 0)
               ) break;
            local_c = 0;
            local_18 = local_28;
            if (local_1c != 0) {
              do {
                uVar3 = *(uint *)((int)param_1 + 0x230);
                local_8 = 0;
                if (uVar3 != 0) {
                  do {
                    iVar2 = FUN_20da98db(param_1,(int)local_10,
                                         local_8 + *(int *)((int)param_1 + 0x150),
                                         *(LPCSTR *)
                                          ((int)local_18 + (local_c * uVar3 + local_8) * 4),-1);
                    if (iVar2 != 0) goto LAB_20dab103;
                    local_8 = local_8 + 1;
                    uVar3 = *(uint *)((int)param_1 + 0x230);
                  } while (local_8 < uVar3);
                }
                if (iVar2 != 0) break;
                local_10 = (int *)((int)local_10 + 1);
                local_c = local_c + 1;
              } while (local_c < local_1c);
            }
LAB_20dab103:
            if (local_28 != (LPVOID)0x0) {
              CoTaskMemFree(local_28);
            }
            if (local_24 != (LPVOID)0x0) {
              CoTaskMemFree(local_24);
            }
            local_24 = (LPVOID)0x0;
            local_28 = (LPVOID)0x0;
          } while (local_30[0] == local_1c);
        }
        CoTaskMemFree(local_14);
        return iVar2;
      }
    }
    iVar2 = FUN_20da86e7(param_1,1);
  }
  return iVar2;
}



void FUN_20dab148(int param_1)

{
  if (*(HWND *)(param_1 + -0x34) != (HWND)0x0) {
    InvalidateRect(*(HWND *)(param_1 + -0x34),(RECT *)0x0,0);
    UpdateWindow(*(HWND *)(param_1 + -0x34));
  }
  return;
}



undefined4 FUN_20dab16c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  LPWSTR pWVar4;
  LPCSTR pCVar5;
  undefined4 uVar6;
  
  uVar3 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    iVar2 = *(int *)(param_1 + 0x134);
    if ((((iVar1 < 0) || (*(int *)(param_1 + 0x70) <= iVar1)) || (iVar2 < 0)) ||
       (*(int *)(param_1 + 0x74) <= iVar2)) {
      pCVar5 = (LPCSTR)0x0;
    }
    else {
      pCVar5 = *(LPCSTR *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(param_1 + 0x114)) + iVar2 * 0xc);
    }
    if (pCVar5 == (LPCSTR)0x0) {
      pCVar5 = "";
    }
    pWVar4 = FUN_20da95d3(pCVar5,(BSTR)0x0);
    *param_2 = pWVar4;
    if (pWVar4 != (LPWSTR)0x0) {
      return 0;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 5;
  }
  uVar6 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar6);
  return uVar6;
}



undefined4 __thiscall FUN_20dab234(void *this,int param_1,int param_2,short param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  undefined4 uVar4;
  tagRECT local_18;
  int local_8;
  
  iVar1 = *(int *)((int)this + 0x204);
  local_8 = 1;
  if ((iVar1 == *(int *)((int)this + 0x20c)) &&
     (*(int *)((int)this + 0x208) == *(int *)((int)this + 0x210))) {
    local_8 = 0;
  }
  if (param_1 < 0) {
    param_1 = iVar1;
  }
  if (param_2 < 0) {
    param_2 = *(int *)((int)this + 0x208);
  }
  if (param_1 < *(int *)((int)this + 0x144)) {
    if (param_2 < *(int *)((int)this + 0x148)) {
      if ((param_1 == iVar1) && (param_2 == *(int *)((int)this + 0x208))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_20dab362((int)this);
      }
      if (param_3 != 0) {
        FUN_20db090c(this,param_1,param_2);
      }
      FUN_20da92f2(this,&local_18,0);
      FUN_20da3c27(this,&local_18);
      if (-1 < param_1) {
        *(int *)((int)this + 0x20c) = param_1;
        *(int *)((int)this + 0x204) = param_1;
      }
      if (-1 < param_2) {
        *(int *)((int)this + 0x210) = param_2;
        *(int *)((int)this + 0x208) = param_2;
      }
      FUN_20da616d(this,*(int *)((int)this + 0x20c),*(int *)((int)this + 0x210),&local_18.left);
      FUN_20da3c27(this,&local_18);
      BVar3 = IsWindow(*(HWND *)((int)this + 0xa0));
      if (BVar3 != 0) {
        UpdateWindow(*(HWND *)((int)this + 0xa0));
      }
      if ((param_4 != 0) && ((bVar2 || (local_8 != 0)))) {
        FUN_20db1916((int)this);
      }
      if (bVar2) {
        FUN_20dab400((int)this);
        FUN_20dab40e((int)this);
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 0xe;
    }
  }
  else {
    uVar4 = 0xd;
  }
  return uVar4;
}



void __fastcall FUN_20dab362(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4f04);
  return;
}



void __cdecl FUN_20dab370(int param_1,undefined4 *param_2)

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
          cVar6 = (&DAT_20da8550)[uVar1];
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
  FUN_20dab3c4((void *)(param_1 + 0x20),*param_2,&local_1c);
  return;
}



void __thiscall FUN_20dab3c4(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)this + 10);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(**(int **)((int)this + 4) + 0x18))
                (*(int **)((int)this + 4),param_1,&DAT_20da8560,0,1,param_2,0,0,0);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 4) + iVar3 * 4);
          (**(code **)(*piVar2 + 0x18))(piVar2,param_1,&DAT_20da8560,0,1,param_2,0,0,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)this + 10));
      }
    }
  }
  return;
}



void __fastcall FUN_20dab400(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4ef8);
  return;
}



void __fastcall FUN_20dab40e(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4eec);
  return;
}



int FUN_20dab465(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x4c);
  iVar2 = FUN_20dab4ab(piVar1,param_2);
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



void __thiscall FUN_20dab4ab(void *this,int *param_1)

{
  int iVar1;
  undefined2 local_1c [4];
  int local_14;
  int local_c;
  undefined4 local_8;
  
  FUN_20dab500((int *)((int)this + 0x88),&local_c);
  local_14 = local_c;
  local_1c[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,u__ExtentX_20dc4f28,local_1c);
  if (-1 < iVar1) {
    local_14 = local_8;
    (**(code **)(*param_1 + 0x10))(param_1,u__ExtentY_20dc4f3c,local_1c);
  }
  return;
}



void __cdecl FUN_20dab500(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_20da496d();
  iVar1 = DAT_20dc4e10;
  iVar2 = DAT_20dc4e10 >> 1;
  *param_2 = (*param_1 * 0x9ec + (DAT_20dc4e0c >> 1)) / DAT_20dc4e0c;
  param_2[1] = (param_1[1] * 0x9ec + iVar2) / iVar1;
  return;
}



void FUN_20dab546(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined2 local_14 [4];
  undefined4 local_c;
  
  local_14[0] = 3;
  local_c = 0x60000;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"_Version",local_14);
  if (-1 < iVar1) {
    FUN_20da4aa2(param_1,0,param_2,param_3,0);
  }
  return;
}



int __thiscall FUN_20dab585(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  _union_2683 local_14;
  
  VariantInit((VARIANTARG *)&local_14.n2);
  uVar1 = *(uint *)((int)this + 0x2c);
  if (((uVar1 & 0x100) != 0) && (((uVar1 & 0x30) != 0 || (param_2 != 0)))) {
    local_14._8_2_ = (ushort)(uVar1 >> 4) & 3;
    local_14.n2.vt = 2;
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,u_OLEDragMode_20dc5260,&local_14);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  uVar1 = *(uint *)((int)this + 0x2c);
  if (((uVar1 & 0x200) != 0) && (((uVar1 & 0xc0) != 0 || (param_2 != 0)))) {
    local_14._8_2_ = (ushort)(uVar1 >> 6) & 3;
    local_14.n2.vt = 2;
    (**(code **)(*param_1 + 0x10))(param_1,u_OLEDropMode_20dc4f50,&local_14);
  }
  return 0;
}



undefined4 FUN_20dab5ee(undefined4 param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < -0x207) {
    if (param_2 != -0x208) {
      if (param_2 != -0x263) {
LAB_20dac399:
        if ((-1 < param_2) && (param_2 < 0x69)) {
          *param_3 = *(undefined4 *)(&DAT_20daf580 + param_2 * 4);
          return 0;
        }
        return 0x80020003;
      }
LAB_20dab62d:
      *param_3 = 0xfffffffa;
      return 0;
    }
  }
  else {
    if (param_2 == -0x202) {
LAB_20dac3c6:
      *param_3 = 0xfffffffe;
      return 0;
    }
    if (param_2 != -0x201) {
      if (param_2 == -0x200) {
        *param_3 = 0xfffffffd;
        return 0;
      }
      if (param_2 == -0x1ff) goto LAB_20dab62d;
      if ((param_2 != -0x1f8) && (param_2 != -0x1f5)) {
        if (param_2 != 0x67) goto LAB_20dac399;
        goto LAB_20dac3c6;
      }
    }
  }
  *param_3 = 0xfffffffb;
  return 0;
}



undefined4 __cdecl FUN_20dab657(int param_1)

{
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x10) == 2)) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x14));
  }
  return 1;
}



void __thiscall FUN_20dab673(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
                    // WARNING: Load size is inaccurate
  piVar1 = *this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_1 != (undefined4 *)0x0) &&
     (iVar2 = (**(code **)*param_1)(param_1,&DAT_20dab780,&local_8), -1 < iVar2)) {
    *(undefined4 *)this = local_8;
    return;
  }
  *(undefined4 *)this = 0;
  return;
}



undefined4 FUN_20dac36d(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  void *unaff_ESI;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar1 = FUN_20db2b7e(unaff_ESI,*(undefined4 **)(unaff_EBP + 0x10));
  }
  else {
    uVar1 = 0x6f7ce;
  }
  return uVar1;
}



void FUN_20dacb26(void)

{
  HBRUSH hbr;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  hbr = *(HBRUSH *)(unaff_ESI + 0x1e0);
  FillRect(*(HDC *)(unaff_EBP + 8),*(RECT **)(unaff_EBP + 0x14),hbr);
  if ((unaff_EBX != 0) && (*(int *)(unaff_EBX + 0x10) != 0)) {
    FUN_20dacb55();
    return;
  }
  if (*(int *)(unaff_EBP + -4) != 0) {
    DeleteObject(hbr);
  }
  return;
}



void FUN_20dacb31(void)

{
  undefined4 in_EAX;
  HBRUSH hbr;
  int unaff_EBX;
  int unaff_EBP;
  
  OleTranslateColor(in_EAX,0,unaff_EBP + 0x18);
  hbr = CreateSolidBrush(*(COLORREF *)(unaff_EBP + 0x18));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FillRect(*(HDC *)(unaff_EBP + 8),*(RECT **)(unaff_EBP + 0x14),hbr);
  if ((unaff_EBX != 0) && (*(int *)(unaff_EBX + 0x10) != 0)) {
    FUN_20dacb55();
    return;
  }
  if (*(int *)(unaff_EBP + -4) != 0) {
    DeleteObject(hbr);
  }
  return;
}



void FUN_20dacb55(void)

{
  int unaff_EBX;
  int unaff_EBP;
  HGDIOBJ unaff_EDI;
  
  FUN_20db293a(*(HDC *)(unaff_EBP + 8),unaff_EBX,*(int **)(unaff_EBP + 0x14));
  if (*(int *)(unaff_EBP + -4) != 0) {
    DeleteObject(unaff_EDI);
  }
  return;
}



void __fastcall FUN_20dacb86(undefined4 param_1)

{
  code *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  code *unaff_EDI;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (*unaff_EBX)(*(undefined4 *)(unaff_EBP + 8),param_1);
  (*unaff_EDI)(*(undefined4 *)(unaff_EBP + 8),unaff_ESI[2],unaff_ESI[1] + -1);
  if (*(int *)(unaff_EBP + 0x10) == 3) {
    (*unaff_EBX)(*(undefined4 *)(unaff_EBP + 8),*unaff_ESI,unaff_ESI[3],0);
    (*unaff_EDI)(*(undefined4 *)(unaff_EBP + 8),*unaff_ESI,unaff_ESI[1]);
    uVar3 = unaff_ESI[1];
    uVar2 = unaff_ESI[2];
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
  }
  else {
    if ((*(byte *)(unaff_EBP + 0x10) & 2) == 0) {
      if ((*(byte *)(unaff_EBP + 0x10) & 1) == 0) goto LAB_20da6bff;
      (*unaff_EBX)(*(undefined4 *)(unaff_EBP + 8),*unaff_ESI,unaff_ESI[1],0);
      uVar3 = unaff_ESI[1];
      uVar2 = unaff_ESI[2];
    }
    else {
      (*unaff_EBX)(*(undefined4 *)(unaff_EBP + 8),*unaff_ESI,unaff_ESI[3],0);
      uVar3 = unaff_ESI[1];
      uVar2 = *unaff_ESI;
    }
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
  }
  (*unaff_EDI)(uVar1,uVar2,uVar3);
LAB_20da6bff:
  unaff_ESI[2] = unaff_ESI[2] + 1;
  unaff_ESI[3] = unaff_ESI[3] + 1;
  return;
}



DWORD __fastcall FUN_20dacc74(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  uVar1 = *(uint *)(param_1 + 0x16c);
  if ((uVar1 & 0x80000000) == 0) {
    DVar2 = uVar1 & 0xffffff;
  }
  else {
    DVar2 = GetSysColor(uVar1 & 0xffff);
  }
  return DVar2;
}



void __fastcall switchD_20da9c09::caseD_0(int param_1)

{
  short sVar1;
  HDC hdc;
  int in_EAX;
  COLORREF CVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0xc) = param_1 + in_EAX;
  sVar1 = *(short *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0x18) = 0xc0;
  *(undefined4 *)(unaff_EBP + 0x14) = 0xc0;
  if (sVar1 == 1) {
    *(undefined4 *)(unaff_EBP + 0x18) = 0x808080;
LAB_20dad0fc:
    *(undefined4 *)(unaff_EBP + 0x14) = 0xffffff;
  }
  else {
    if (sVar1 == 2) {
      *(undefined4 *)(unaff_EBP + 0x14) = 0x808080;
    }
    else {
      if (sVar1 == 3) goto LAB_20dad0fc;
      if (sVar1 != 4) goto LAB_20da9b67;
    }
    *(undefined4 *)(unaff_EBP + 0x18) = 0xffffff;
  }
LAB_20da9b67:
  hdc = *(HDC *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + 0x18) != 0xc0) {
    CVar2 = GetTextColor(hdc);
    *(COLORREF *)(unaff_EBP + 0x1c) = CVar2;
    OffsetRect((LPRECT)(unaff_EBP + -0x18),1,1);
    SetTextColor(hdc,*(COLORREF *)(unaff_EBP + 0x18));
    if (*(int *)(*(int *)(unaff_EBP + -8) + 400) == 0) {
      DrawTextA(hdc,*(LPCSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
                (int)*(short *)(unaff_EBP + -4));
    }
    else {
      DrawTextExA(hdc,*(LPSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
                  (int)*(short *)(unaff_EBP + -4) | 0x20000,(LPDRAWTEXTPARAMS)0x0);
    }
    OffsetRect((LPRECT)(unaff_EBP + -0x18),-1,-1);
    SetTextColor(hdc,*(COLORREF *)(unaff_EBP + 0x1c));
  }
  if (*(int *)(unaff_EBP + 0x14) != 0xc0) {
    CVar2 = GetTextColor(hdc);
    *(COLORREF *)(unaff_EBP + 0x1c) = CVar2;
    OffsetRect((LPRECT)(unaff_EBP + -0x18),-1,-1);
    SetTextColor(hdc,*(COLORREF *)(unaff_EBP + 0x14));
    if (*(int *)(*(int *)(unaff_EBP + -8) + 400) == 0) {
      DrawTextA(hdc,*(LPCSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
                (int)*(short *)(unaff_EBP + -4));
    }
    else {
      DrawTextExA(hdc,*(LPSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
                  (int)*(short *)(unaff_EBP + -4) | 0x20000,(LPDRAWTEXTPARAMS)0x0);
    }
    OffsetRect((LPRECT)(unaff_EBP + -0x18),1,1);
    SetTextColor(hdc,*(COLORREF *)(unaff_EBP + 0x1c));
  }
  if (*(int *)(*(int *)(unaff_EBP + -8) + 400) == 0) {
    DrawTextA(hdc,*(LPCSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
              (int)*(short *)(unaff_EBP + -4));
  }
  else {
    DrawTextExA(hdc,*(LPSTR *)(unaff_EBP + 0xc),-1,(LPRECT)(unaff_EBP + -0x18),
                (int)*(short *)(unaff_EBP + -4) | 0x20000,(LPDRAWTEXTPARAMS)0x0);
  }
  return;
}



undefined4 switchD_20da86f4::caseD_0(void)

{
  return 0;
}



undefined4 __fastcall switchD_20da33b0::caseD_10a(undefined4 param_1,int param_2)

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



undefined4 __fastcall FUN_20dad890(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_20db00c0;
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



undefined4 __fastcall FUN_20dad912(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_20db00a0;
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



undefined4 FUN_20dae79f(void)

{
  return 0;
}



void FUN_20dae995(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int in_EAX;
  byte *pbVar6;
  uint uVar7;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  int *unaff_EDI;
  undefined4 *in_stack_00000018;
  int *in_stack_00000020;
  
  pbVar6 = (byte *)(in_EAX + 1);
  bVar2 = *(byte *)(in_EAX + 1);
  while ((bVar2 != 0x22 && (bVar2 != 0))) {
    if (((*(byte *)((int)&DAT_20dc4a00 + bVar2 + 1) & (byte)unaff_EBX) != 0) &&
       (*unaff_EDI = *unaff_EDI + 1, unaff_ESI != (byte *)0x0)) {
      *unaff_ESI = *pbVar6;
      unaff_ESI = unaff_ESI + 1;
      pbVar6 = pbVar6 + 1;
    }
    *unaff_EDI = *unaff_EDI + 1;
    if (unaff_ESI != (byte *)0x0) {
      *unaff_ESI = *pbVar6;
      unaff_ESI = unaff_ESI + 1;
    }
    pbVar1 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar1;
  }
  *unaff_EDI = *unaff_EDI + 1;
  if (unaff_ESI != (byte *)0x0) {
    *unaff_ESI = 0;
    unaff_ESI = unaff_ESI + 1;
  }
  if (*pbVar6 == 0x22) {
    pbVar6 = pbVar6 + 1;
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar6 != 0) {
    for (; (*pbVar6 == 0x20 || (*pbVar6 == 9)); pbVar6 = pbVar6 + 1) {
    }
    if (*pbVar6 == 0) break;
    if (unaff_EBP != (undefined4 *)0x0) {
      *unaff_EBP = unaff_ESI;
      in_stack_00000018 = (undefined4 *)((int)unaff_EBP + unaff_EBX);
    }
    *in_stack_00000020 = *in_stack_00000020 + 1;
    while( true ) {
      uVar7 = 0;
      bVar3 = true;
      bVar2 = *pbVar6;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        uVar7 = uVar7 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar6 == 0x22) {
        if ((uVar7 & 1) == 0) {
          if ((bVar4) && (pbVar6[1] == 0x22)) {
            pbVar6 = pbVar6 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar7 = uVar7 >> 1;
      }
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        if (unaff_ESI != (byte *)0x0) {
          *unaff_ESI = 0x5c;
          unaff_ESI = unaff_ESI + 1;
        }
        *unaff_EDI = *unaff_EDI + 1;
      }
      bVar2 = *pbVar6;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (unaff_ESI == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_20dc4a00 + bVar2 + 1) & 4) != 0) {
            pbVar6 = pbVar6 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
          *unaff_EDI = *unaff_EDI + 1;
          goto LAB_20da260b;
        }
        if ((*(byte *)((int)&DAT_20dc4a00 + bVar2 + 1) & 4) != 0) {
          *unaff_ESI = bVar2;
          unaff_ESI = unaff_ESI + 1;
          pbVar6 = pbVar6 + 1;
          *unaff_EDI = *unaff_EDI + 1;
        }
        *unaff_ESI = *pbVar6;
        unaff_ESI = unaff_ESI + 1;
        *unaff_EDI = *unaff_EDI + 1;
        pbVar6 = pbVar6 + 1;
      }
      else {
LAB_20da260b:
        pbVar6 = pbVar6 + 1;
      }
    }
    if (unaff_ESI != (byte *)0x0) {
      *unaff_ESI = 0;
      unaff_ESI = unaff_ESI + 1;
    }
    unaff_EBX = 4;
    *unaff_EDI = *unaff_EDI + 1;
    unaff_EBP = in_stack_00000018;
  }
  if (unaff_EBP != (undefined4 *)0x0) {
    *unaff_EBP = 0;
  }
  *in_stack_00000020 = *in_stack_00000020 + 1;
  return;
}



int * __thiscall FUN_20daedf5(void *this)

{
  undefined **ppuVar1;
  uint *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint unaff_EBX;
  undefined **ppuVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  bool bVar10;
  undefined4 *in_stack_00000010;
  undefined **ppuStack00000018;
  
code_r0x20daedf5:
  puVar2 = *(uint **)((int)this + 8);
  piVar9 = *(int **)((int)this + 0x10);
  for (puVar8 = (uint *)((int)this + 0x18); puVar8 < puVar2; puVar8 = puVar8 + 2) {
    if (((int)unaff_EBX <= (int)*puVar8) && (unaff_EBX < puVar8[1])) {
      piVar4 = (int *)FUN_20da1f07(piVar9,*puVar8,unaff_EBX);
      if (piVar4 != (int *)0x0) {
        PTR_PTR_LOOP_20dc4908 = (undefined *)in_stack_00000010;
        *puVar8 = *puVar8 - unaff_EBX;
        in_stack_00000010[2] = puVar8;
        return piVar4;
      }
      puVar8[1] = unaff_EBX;
      this = in_stack_00000010;
    }
    piVar9 = piVar9 + 0x400;
  }
                    // WARNING: Load size is inaccurate
  while (this = *this, (undefined *)this != PTR_PTR_LOOP_20dc4908) {
    if (*(int *)((int)this + 0x10) != -1) goto code_r0x20da1e9e;
  }
  ppuVar6 = &PTR_LOOP_20dc2038;
  while ((ppuVar6[4] == (undefined *)0xffffffff || (ppuVar6[3] == (undefined *)0x0))) {
    ppuVar6 = (undefined **)*ppuVar6;
    if (ppuVar6 == &PTR_LOOP_20dc2038) {
      ppuVar6 = FUN_20da1b48();
      if (ppuVar6 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar9 = (int *)ppuVar6[4];
      *(char *)(piVar9 + 2) = (char)unaff_EBX;
      PTR_PTR_LOOP_20dc4908 = (undefined *)ppuVar6;
      *piVar9 = (int)piVar9 + unaff_EBX + 8;
      piVar9[1] = 0xf0 - unaff_EBX;
      ppuVar6[6] = ppuVar6[6] + -(unaff_EBX & 0xff);
      return piVar9 + 0x40;
    }
  }
  ppuStack00000018 = (undefined **)ppuVar6[3];
  puVar3 = *ppuStack00000018;
  piVar9 = (int *)(ppuVar6[4] + ((int)ppuStack00000018 + (-0x18 - (int)ppuVar6) >> 3) * 0x1000);
  ppuVar5 = ppuStack00000018;
  for (iVar7 = 0; (puVar3 == (undefined *)0xffffffff && (iVar7 < 0x10)); iVar7 = iVar7 + 1) {
    puVar3 = ppuVar5[2];
    ppuVar5 = ppuVar5 + 2;
  }
  piVar4 = (int *)VirtualAlloc(piVar9,iVar7 << 0xc,0x1000,4);
  if (piVar4 != piVar9) {
    return (int *)0x0;
  }
  ppuVar5 = ppuStack00000018;
  if (0 < iVar7) {
    piVar4 = piVar9 + 1;
    do {
      *piVar4 = 0xf0;
      piVar4[-1] = (int)(piVar4 + 1);
      *(undefined1 *)(piVar4 + 0x3d) = 0xff;
      *ppuVar5 = (undefined *)0xf0;
      ppuVar5[1] = (undefined *)0xf1;
      piVar4 = piVar4 + 0x400;
      ppuVar5 = ppuVar5 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  ppuVar1 = ppuVar6 + 0x806;
  bVar10 = ppuVar5 < ppuVar1;
  if (bVar10) {
    do {
      if (*ppuVar5 == (undefined *)0xffffffff) break;
      ppuVar5 = ppuVar5 + 2;
    } while (ppuVar5 < ppuVar1);
    bVar10 = ppuVar5 < ppuVar1;
  }
  PTR_PTR_LOOP_20dc4908 = (undefined *)ppuVar6;
  ppuVar6[3] = (undefined *)(-(uint)bVar10 & (uint)ppuVar5);
  *(char *)(piVar9 + 2) = (char)unaff_EBX;
  ppuVar6[2] = (undefined *)ppuStack00000018;
  *ppuStack00000018 = *ppuStack00000018 + -unaff_EBX;
  piVar9[1] = piVar9[1] - unaff_EBX;
  *piVar9 = (int)piVar9 + unaff_EBX + 8;
  return piVar9 + 0x40;
code_r0x20da1e9e:
  puVar8 = *(uint **)((int)this + 8);
  piVar9 = (int *)(((int)puVar8 + (-0x18 - (int)this) >> 3) * 0x1000 + *(int *)((int)this + 0x10));
  in_stack_00000010 = (undefined4 *)this;
  if (puVar8 < (uint *)((int)this + 0x2018)) {
    do {
      if (((int)unaff_EBX <= (int)*puVar8) && (unaff_EBX < puVar8[1])) {
        piVar4 = (int *)FUN_20da1f07(piVar9,*puVar8,unaff_EBX);
        if (piVar4 != (int *)0x0) {
          PTR_PTR_LOOP_20dc4908 = (undefined *)this;
          *puVar8 = *puVar8 - unaff_EBX;
          *(uint **)((int)this + 8) = puVar8;
          return piVar4;
        }
        puVar8[1] = unaff_EBX;
      }
      puVar8 = puVar8 + 2;
      piVar9 = piVar9 + 0x400;
    } while (puVar8 < (uint *)((int)this + 0x2018));
    piVar9 = FUN_20daedf5(this);
    return piVar9;
  }
  goto code_r0x20daedf5;
}



undefined4 __thiscall FUN_20db0260(void *this,LPRECT param_1)

{
  FUN_20db090c(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208));
  FUN_20da616d(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),&param_1->left);
  if (*(short *)((int)this + 0x1ac) == 0) {
LAB_20db02d0:
    param_1->right = param_1->right + -1;
    param_1->bottom = param_1->bottom + -1;
  }
  else {
    if (*(short *)((int)this + 0x1ae) == 0) {
      if ((*(short *)((int)this + 0x1ac) == 0) || (*(short *)((int)this + 0x1ae) != 0))
      goto LAB_20db02d0;
    }
    else {
      OffsetRect(param_1,2,2);
    }
    param_1->left = param_1->left + 1;
    param_1->top = param_1->top + 1;
  }
  return 1;
}



undefined4 __thiscall FUN_20db02d8(void *this,int param_1,int param_2)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  BVar1 = IsWindow(*(HWND *)((int)this + 0xa0));
  if (((BVar1 != 0) && (*(short *)((int)this + 0x1a2) != 0)) && (*(short *)((int)this + 0x1a2) != 1)
     ) {
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_1c);
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x14c)) {
      do {
        uVar2 = FUN_20da5cca(this,iVar3);
        local_1c.top = local_1c.top + uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x14c));
    }
    switch(param_1) {
    case 0:
      iVar3 = *(int *)((int)this + 0x1fc);
      while ((0 < iVar3 && (uVar2 = FUN_20da5cca(this,iVar3), uVar2 == 0))) {
        iVar3 = iVar3 + -1;
      }
      param_2 = *(int *)((int)this + 0x1fc);
      do {
        param_2 = param_2 + -1;
        if (param_2 < 1) break;
        uVar2 = FUN_20da5cca(this,param_2);
      } while (uVar2 == 0);
      break;
    case 1:
      iVar3 = *(int *)((int)this + 0x1fc);
      while ((iVar3 < *(int *)((int)this + 0x144) + -1 &&
             (uVar2 = FUN_20da5cca(this,iVar3), uVar2 == 0))) {
        iVar3 = iVar3 + 1;
      }
      param_2 = *(int *)((int)this + 0x1fc);
      do {
        param_2 = param_2 + 1;
        if (*(int *)((int)this + 0x144) + -1 <= param_2) break;
        uVar2 = FUN_20da5cca(this,param_2);
      } while (uVar2 == 0);
      break;
    case 2:
      param_2 = FUN_20db077c(this,*(int *)((int)this + 0x1fc));
      break;
    case 3:
      param_2 = FUN_20db07db(this,*(int *)((int)this + 0x1fc));
      break;
    case 5:
      if (*(int *)((int)this + 0x188) == 0) {
        return 0;
      }
    case 4:
      break;
    case 6:
      param_2 = *(int *)((int)this + 0x14c);
      break;
    case 7:
      param_2 = *(int *)((int)this + 0x144) + -1;
      break;
    default:
      goto switchD_20db034d_default;
    }
    if (param_2 < *(int *)((int)this + 0x14c)) {
      param_2 = *(int *)((int)this + 0x14c);
    }
    iVar3 = *(int *)((int)this + 0x144) + -1;
    if (iVar3 < param_2) {
      param_2 = iVar3;
    }
    GetScrollRange(*(HWND *)((int)this + 0xa0),1,&local_c,&local_8);
    if (local_c != local_8) {
      if (param_2 < local_c) {
        param_2 = local_c;
      }
      if (local_8 < param_2) {
        param_2 = local_8;
      }
      iVar3 = *(int *)((int)this + 0x1fc);
      if (param_2 != iVar3) {
        param_1 = 0;
        if (param_2 < iVar3) {
          while (iVar3 = iVar3 + -1, param_2 <= iVar3) {
            uVar2 = FUN_20da5cca(this,iVar3);
            param_1 = param_1 + uVar2;
          }
        }
        else {
          for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
            uVar2 = FUN_20da5cca(this,iVar3);
            param_1 = param_1 - uVar2;
          }
        }
        *(int *)((int)this + 0x1fc) = param_2;
        ScrollWindow(*(HWND *)((int)this + 0xa0),0,param_1,&local_1c,&local_1c);
        if (*(short *)((int)this + 0x1a6) != 0) {
          FUN_20db1a1f(this,(int)&local_1c);
        }
        SetScrollPos(*(HWND *)((int)this + 0xa0),1,param_2,1);
        FUN_20db1924((int)this);
      }
    }
  }
switchD_20db034d_default:
  return 0;
}



undefined4 __thiscall FUN_20db051d(void *this,int param_1,int param_2)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  BVar1 = IsWindow(*(HWND *)((int)this + 0xa0));
  if (BVar1 == 0) {
    return 0;
  }
  if (*(short *)((int)this + 0x1a2) == 0) {
    return 0;
  }
  if (*(short *)((int)this + 0x1a2) == 2) {
    return 0;
  }
  GetClientRect(*(HWND *)((int)this + 0xa0),&local_1c);
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x150)) {
    do {
      if (*(int *)((int)this + 400) == 0) {
        uVar2 = FUN_20da5d02(this,iVar3);
        local_1c.left = local_1c.left + uVar2;
      }
      else {
        uVar2 = FUN_20da5d02(this,iVar3);
        local_1c.right = local_1c.right - uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x150));
  }
  if (*(int *)((int)this + 400) == 0) {
    switch(param_1) {
    case 0:
      goto switchD_20db05a2_caseD_1;
    case 1:
      goto switchD_20db05a2_caseD_0;
    case 2:
      goto switchD_20db05a2_caseD_3;
    case 3:
      goto switchD_20db05a2_caseD_2;
    case 4:
      goto switchD_20db05a2_caseD_4;
    case 5:
      goto switchD_20db05a2_caseD_5;
    case 6:
      goto switchD_20db05a2_caseD_7;
    case 7:
      goto switchD_20db05a2_caseD_6;
    default:
      goto switchD_20db05a2_default;
    }
  }
  switch(param_1) {
  case 0:
    goto switchD_20db05a2_caseD_0;
  case 1:
switchD_20db05a2_caseD_1:
    iVar3 = *(int *)((int)this + 0x200);
    goto LAB_20db0654;
  case 2:
switchD_20db05a2_caseD_2:
    param_2 = FUN_20db08a3(this,*(int *)((int)this + 0x200));
    break;
  case 3:
switchD_20db05a2_caseD_3:
    param_2 = FUN_20db0844(this,*(int *)((int)this + 0x200));
    break;
  case 4:
    goto switchD_20db05a2_caseD_4;
  case 5:
switchD_20db05a2_caseD_5:
    if (*(int *)((int)this + 0x188) == 0) {
      return 0;
    }
    goto switchD_20db05a2_caseD_4;
  case 6:
switchD_20db05a2_caseD_6:
    iVar3 = *(int *)((int)this + 0x148);
LAB_20db0654:
    param_2 = iVar3 + -1;
    break;
  case 7:
switchD_20db05a2_caseD_7:
    param_2 = *(int *)((int)this + 0x150);
    break;
  default:
    goto switchD_20db05a2_default;
  }
LAB_20db05c9:
  if (param_2 < *(int *)((int)this + 0x150)) {
    param_2 = *(int *)((int)this + 0x150);
  }
  iVar3 = *(int *)((int)this + 0x148) + -1;
  if (iVar3 < param_2) {
    param_2 = iVar3;
  }
  GetScrollRange(*(HWND *)((int)this + 0xa0),0,&local_c,&local_8);
  if (local_c != local_8) {
    if (param_2 < local_c) {
      param_2 = local_c;
    }
    if (local_8 < param_2) {
      param_2 = local_8;
    }
    iVar3 = *(int *)((int)this + 0x200);
    if (param_2 != iVar3) {
      param_1 = 0;
      if (param_2 < iVar3) {
        while (iVar3 = iVar3 + -1, param_2 <= iVar3) {
          if (*(int *)((int)this + 400) == 0) {
            uVar2 = FUN_20da5d02(this,iVar3);
          }
          else {
            uVar2 = FUN_20da5d02(this,iVar3);
            uVar2 = -uVar2;
          }
          param_1 = param_1 + uVar2;
        }
      }
      else {
        for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
          if (*(int *)((int)this + 400) == 0) {
            uVar2 = FUN_20da5d02(this,iVar3);
          }
          else {
            uVar2 = FUN_20da5d02(this,iVar3);
            uVar2 = -uVar2;
          }
          param_1 = param_1 - uVar2;
        }
      }
      *(int *)((int)this + 0x200) = param_2;
      ScrollWindow(*(HWND *)((int)this + 0xa0),param_1,0,&local_1c,&local_1c);
      if (*(short *)((int)this + 0x1a6) != 0) {
        FUN_20db194f(this,&local_1c.left);
      }
      if (*(int *)((int)this + 400) != 0) {
        param_2 = (local_8 - param_2) + *(int *)((int)this + 0x150);
      }
      SetScrollPos(*(HWND *)((int)this + 0xa0),0,param_2,1);
      FUN_20db1924((int)this);
    }
  }
switchD_20db05a2_default:
  return 0;
switchD_20db05a2_caseD_4:
  goto LAB_20db05c9;
switchD_20db05a2_caseD_0:
  param_2 = *(int *)((int)this + 0x200) + 1;
  goto LAB_20db05c9;
}



int __thiscall FUN_20db077c(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x14c)) {
    do {
      uVar1 = FUN_20da5cca(this,iVar2);
      local_14.bottom = local_14.bottom - uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x14c));
  }
  while( true ) {
    if (param_1 <= *(int *)((int)this + 0x14c)) {
      return param_1;
    }
    uVar1 = FUN_20da5cca(this,param_1);
    local_14.bottom = local_14.bottom - uVar1;
    if (local_14.bottom < 1) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}



int __thiscall FUN_20db07db(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x14c)) {
    do {
      uVar1 = FUN_20da5cca(this,iVar2);
      local_14.bottom = local_14.bottom - uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x14c));
  }
  iVar2 = *(int *)((int)this + 0x144);
  while( true ) {
    if (iVar2 + -1 <= param_1) {
      return param_1;
    }
    uVar1 = FUN_20da5cca(this,param_1);
    local_14.bottom = local_14.bottom - uVar1;
    if (local_14.bottom < 1) break;
    iVar2 = *(int *)((int)this + 0x144);
    param_1 = param_1 + 1;
  }
  return param_1;
}



int __thiscall FUN_20db0844(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x150)) {
    do {
      uVar1 = FUN_20da5d02(this,iVar2);
      local_14.right = local_14.right - uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x150));
  }
  while( true ) {
    if (param_1 <= *(int *)((int)this + 0x150)) {
      return param_1;
    }
    uVar1 = FUN_20da5d02(this,param_1);
    local_14.right = local_14.right - uVar1;
    if (local_14.right < 1) break;
    param_1 = param_1 + -1;
  }
  return param_1;
}



int __thiscall FUN_20db08a3(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x150)) {
    do {
      uVar1 = FUN_20da5d02(this,iVar2);
      local_14.right = local_14.right - uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x150));
  }
  iVar2 = *(int *)((int)this + 0x148);
  while( true ) {
    if (iVar2 + -1 <= param_1) {
      return param_1;
    }
    uVar1 = FUN_20da5d02(this,param_1);
    local_14.right = local_14.right - uVar1;
    if (local_14.right < 1) break;
    iVar2 = *(int *)((int)this + 0x148);
    param_1 = param_1 + 1;
  }
  return param_1;
}



int __thiscall FUN_20db090c(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_20db095d(this,param_1);
  iVar2 = FUN_20db0a30(this,param_2);
  if ((iVar1 != *(int *)((int)this + 0x1fc)) && (iVar1 = FUN_20db02d8(this,4,iVar1), iVar1 != 0)) {
    return iVar1;
  }
  if ((iVar2 != *(int *)((int)this + 0x200)) && (iVar1 = FUN_20db051d(this,4,iVar2), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}



int __thiscall FUN_20db095d(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  tagRECT local_14;
  
  iVar3 = 0;
  if ((-1 < param_1) && (*(HWND *)((int)this + 0xa0) != (HWND)0x0)) {
    if ((param_1 < *(int *)((int)this + 0x1fc)) && (*(int *)((int)this + 0x14c) <= param_1)) {
      return param_1;
    }
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
    iVar1 = FUN_20da61c1(this,param_1);
    uVar2 = FUN_20da5cca(this,param_1);
    iVar4 = uVar2 + iVar1;
    if (local_14.bottom <= iVar4) {
      if (0 < *(int *)((int)this + 0x14c)) {
        do {
          uVar2 = FUN_20da5cca(this,iVar3);
          local_14.top = local_14.top + uVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 0x14c));
      }
      if (local_14.top + 1 < iVar1) {
        for (iVar3 = *(int *)((int)this + 0x1fc); iVar3 < *(int *)((int)this + 0x144);
            iVar3 = iVar3 + 1) {
          uVar2 = FUN_20da5cca(this,iVar3);
          iVar4 = iVar4 - uVar2;
          if ((iVar4 < local_14.bottom) || ((int)(iVar4 - uVar2) <= local_14.top)) break;
        }
        if (*(int *)((int)this + 0x144) + -1 <= iVar3) {
          return iVar3;
        }
        return iVar3 + 1;
      }
    }
  }
  return *(int *)((int)this + 0x1fc);
}



int __thiscall FUN_20db0a30(void *this,int param_1)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  int dy;
  tagRECT local_24;
  tagRECT local_14;
  
  if ((-1 < param_1) && (BVar1 = IsWindow(*(HWND *)((int)this + 0xa0)), BVar1 != 0)) {
    if ((param_1 < *(int *)((int)this + 0x200)) && (*(int *)((int)this + 0x150) <= param_1)) {
      return param_1;
    }
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_14);
    FUN_20da616d(this,0,param_1,&local_24.left);
    if (local_14.right <= local_24.right) {
      iVar3 = 0;
      if (0 < *(int *)((int)this + 0x150)) {
        do {
          uVar2 = FUN_20da5d02(this,iVar3);
          local_14.left = local_14.left + uVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)((int)this + 0x150));
      }
      if (local_14.left + 1 < local_24.left) {
        for (iVar3 = *(int *)((int)this + 0x200); iVar3 < *(int *)((int)this + 0x148);
            iVar3 = iVar3 + 1) {
          dy = 0;
          uVar2 = FUN_20da5d02(this,iVar3);
          OffsetRect(&local_24,-uVar2,dy);
          if ((local_24.right < local_14.right) || (local_24.left <= local_14.left)) break;
        }
        if (*(int *)((int)this + 0x148) + -1 <= iVar3) {
          return iVar3;
        }
        return iVar3 + 1;
      }
    }
  }
  return *(int *)((int)this + 0x200);
}



undefined4 __thiscall FUN_20db0b0e(void *this,int param_1,int param_2,short param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  RECT *pRVar3;
  BOOL BVar4;
  int iVar5;
  tagRECT local_34;
  tagRECT local_24;
  tagRECT local_14;
  
  if (*(int *)((int)this + 0x144) <= param_1) {
    return 0xd;
  }
  if (*(int *)((int)this + 0x148) <= param_2) {
    return 0xe;
  }
  if (param_1 < 0) {
    param_1 = *(int *)((int)this + 0x20c);
  }
  if (param_2 < 0) {
    param_2 = *(int *)((int)this + 0x210);
  }
  if ((((param_1 == *(int *)((int)this + 0x20c)) && (param_2 == *(int *)((int)this + 0x210))) &&
      (1 < *(int *)((int)this + 0x148) - *(int *)((int)this + 0x150))) &&
     (1 < *(int *)((int)this + 0x144) - *(int *)((int)this + 0x14c))) {
    return 0;
  }
  iVar2 = param_1;
  iVar5 = param_2;
  if (param_3 != 1) {
    if (param_3 == 2) {
      iVar2 = *(int *)((int)this + 0x204);
      iVar5 = *(int *)((int)this + 0x208);
    }
    else if (param_3 == 3) {
      iVar5 = *(int *)((int)this + 0x200);
    }
    else {
      if (param_3 != 4) goto LAB_20db0ba9;
      iVar2 = *(int *)((int)this + 0x1fc);
    }
  }
  FUN_20db090c(this,iVar2,iVar5);
LAB_20db0ba9:
  FUN_20da92f2(this,&local_14,0);
  *(int *)((int)this + 0x20c) = param_1;
  *(int *)((int)this + 0x210) = param_2;
  FUN_20da92f2(this,&local_24,0);
  iVar2 = FUN_20db0c60(&local_34,&local_24.left,&local_14.left);
  if (iVar2 == 0) {
    FUN_20da3c27(this,&local_14);
    pRVar3 = &local_24;
  }
  else {
    pRVar3 = &local_34;
  }
  FUN_20da3c27(this,pRVar3);
  BVar4 = IsWindow(*(HWND *)((int)this + 0xa0));
  if (BVar4 != 0) {
    UpdateWindow(*(HWND *)((int)this + 0xa0));
  }
  if ((param_4 != 0) && (uVar1 = GetKeyState(1), (uVar1 & 0x8000) == 0)) {
    FUN_20db1916((int)this);
  }
  return 0;
}



undefined4 FUN_20db0c60(LPRECT param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int xRight;
  int yBottom;
  int xLeft;
  int yTop;
  
  yTop = param_2[1];
  iVar1 = param_3[1];
  if ((yTop == iVar1) && (yBottom = param_2[3], yBottom == param_3[3])) {
    xLeft = *param_2;
    iVar2 = *param_3;
    if (xLeft == iVar2) {
      xLeft = param_2[2];
      iVar1 = param_3[2];
      xRight = xLeft;
      if (xLeft <= iVar1) {
        xRight = iVar1;
      }
      if (iVar1 <= xLeft) {
        xLeft = iVar1;
      }
      goto LAB_20db0ca6;
    }
    if (param_2[2] == param_3[2]) {
      xRight = xLeft;
      if (xLeft <= iVar2) {
        xRight = iVar2;
      }
      if (iVar2 <= xLeft) {
        xLeft = iVar2;
      }
      goto LAB_20db0ca6;
    }
  }
  xLeft = *param_2;
  if ((xLeft != *param_3) || (xRight = param_2[2], xRight != param_3[2])) {
    return 0;
  }
  iVar2 = param_2[3];
  if (yTop == iVar1) {
    iVar1 = param_3[3];
    yBottom = iVar2;
    if (iVar2 <= iVar1) {
      yBottom = iVar1;
    }
    yTop = iVar2;
    if (iVar1 <= iVar2) {
      yTop = iVar1;
    }
  }
  else {
    if (iVar2 != param_3[3]) {
      return 0;
    }
    yBottom = yTop;
    if (yTop <= iVar1) {
      yBottom = iVar1;
    }
    if (iVar1 <= yTop) {
      yTop = iVar1;
    }
  }
LAB_20db0ca6:
  SetRect(param_1,xLeft,yTop,xRight,yBottom);
  return 1;
}



void __thiscall FUN_20db0d24(void *this,int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  bool bVar7;
  tagRECT local_18;
  int local_8;
  
  piVar3 = param_1;
  iVar5 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x14c)) {
    do {
      uVar4 = FUN_20da5cca(this,local_8);
      iVar5 = iVar5 + uVar4;
      iVar1 = param_1[1];
      bVar7 = SBORROW4(iVar1,iVar5);
      iVar2 = iVar1 - iVar5;
      if (iVar1 <= iVar5) goto LAB_20db0d61;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 0x14c));
  }
  bVar7 = SBORROW4(param_1[1],iVar5);
  iVar2 = param_1[1] - iVar5;
LAB_20db0d61:
  if ((bVar7 == iVar2 < 0) &&
     (local_8 = *(int *)((int)this + 0x1fc), local_8 < *(int *)((int)this + 0x144) + -1)) {
    do {
      uVar4 = FUN_20da5cca(this,local_8);
      iVar5 = iVar5 + uVar4;
      if (param_1[1] <= iVar5) break;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)((int)this + 0x144) + -1);
  }
  LVar6 = 0;
  if (*(int *)((int)this + 400) == 0) {
    param_1 = (int *)0x0;
    if (0 < *(int *)((int)this + 0x150)) {
      do {
        uVar4 = FUN_20da5d02(this,(int)param_1);
        LVar6 = LVar6 + uVar4;
        if (*piVar3 <= LVar6) break;
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < *(int *)((int)this + 0x150));
    }
  }
  else {
    GetClientRect(*(HWND *)((int)this + 0xa0),&local_18);
    param_1 = (int *)0x0;
    LVar6 = local_18.right;
    if (0 < *(int *)((int)this + 0x150)) {
      do {
        uVar4 = FUN_20da5d02(this,(int)param_1);
        LVar6 = LVar6 - uVar4;
        if (LVar6 <= *piVar3) break;
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < *(int *)((int)this + 0x150));
    }
  }
  if (*(int *)((int)this + 400) == 0) {
    if ((LVar6 <= *piVar3) &&
       (param_1 = *(int **)((int)this + 0x200), (int)param_1 < *(int *)((int)this + 0x148) + -1)) {
      do {
        uVar4 = FUN_20da5d02(this,(int)param_1);
        LVar6 = LVar6 + uVar4;
        if (*piVar3 <= LVar6) break;
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < *(int *)((int)this + 0x148) + -1);
    }
  }
  else if ((*piVar3 <= LVar6) &&
          (param_1 = *(int **)((int)this + 0x200), (int)param_1 < *(int *)((int)this + 0x148) + -1))
  {
    do {
      uVar4 = FUN_20da5d02(this,(int)param_1);
      LVar6 = LVar6 - uVar4;
      if (LVar6 <= *piVar3) break;
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)((int)this + 0x148) + -1);
  }
  if (param_2 == 0) {
    if (local_8 < *(int *)((int)this + 0x14c)) {
      local_8 = *(int *)((int)this + 0x14c);
    }
    if ((int)param_1 < (int)*(int **)((int)this + 0x150)) {
      param_1 = *(int **)((int)this + 0x150);
    }
  }
  *piVar3 = (int)param_1;
  piVar3[1] = local_8;
  return;
}



int __thiscall FUN_20db0ed9(void *this,int param_1,undefined4 param_2,LOGFONTA *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x204);
  iVar3 = *(int *)((int)this + 0x20c);
  iVar2 = local_c;
  if (iVar3 <= local_c) {
    iVar2 = iVar3;
  }
  if (local_c <= iVar3) {
    local_c = iVar3;
  }
  local_8 = *(int *)((int)this + 0x208);
  iVar3 = *(int *)((int)this + 0x210);
  local_10 = local_8;
  if (iVar3 <= local_8) {
    local_10 = iVar3;
  }
  if (local_8 <= iVar3) {
    local_8 = iVar3;
  }
  do {
    iVar3 = local_10;
    if (local_c < iVar2) {
      return 0;
    }
    for (; iVar3 <= local_8; iVar3 = iVar3 + 1) {
      iVar1 = FUN_20daa870(this,iVar2,iVar3,param_1,param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



undefined4 __thiscall FUN_20db0f5b(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar5 = FUN_20da3f74(this,*(int *)((int)this + 0x144) + 1);
  if (iVar5 == 0) {
    iVar5 = *(int *)((int)this + 0x144);
    if (param_1 <= iVar5) {
      iVar4 = *(int *)((int)this + 0x1e8);
      puVar7 = (undefined4 *)(iVar5 * 0x10 + -0x10 + iVar4);
      uVar6 = *puVar7;
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      FUN_20db6d61((undefined1 *)((param_1 + 1) * 0x10 + iVar4),
                   (undefined1 *)(param_1 * 0x10 + iVar4),((param_1 + 1) * 0xfffffff + iVar5) * 0x10
                  );
      puVar7 = (undefined4 *)(*(int *)((int)this + 0x1e8) + param_1 * 0x10);
      *puVar7 = uVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 0xb;
  }
  return uVar6;
}



void __thiscall FUN_20db0fde(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_1 < *(int *)((int)this + 0x144) + -1) {
    puVar5 = (undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x1e8));
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    FUN_20db6d61((undefined1 *)puVar5,
                 (undefined1 *)((param_1 + 1) * 0x10 + *(int *)((int)this + 0x1e8)),
                 ((param_1 + 1) * 0xfffffff + *(int *)((int)this + 0x144)) * 0x10);
    puVar5 = (undefined4 *)
             (*(int *)((int)this + 0x144) * 0x10 + -0x10 + *(int *)((int)this + 0x1e8));
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
    puVar5[2] = uVar3;
    puVar5[3] = uVar4;
  }
  FUN_20da3f74(this,*(int *)((int)this + 0x144) + -1);
  return;
}



int __thiscall FUN_20db1062(void *this,LPCSTR param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x204);
  iVar3 = *(int *)((int)this + 0x20c);
  iVar2 = local_c;
  if (iVar3 <= local_c) {
    iVar2 = iVar3;
  }
  if (local_c <= iVar3) {
    local_c = iVar3;
  }
  local_8 = *(int *)((int)this + 0x208);
  iVar3 = *(int *)((int)this + 0x210);
  local_10 = local_8;
  if (iVar3 <= local_8) {
    local_10 = iVar3;
  }
  if (local_8 <= iVar3) {
    local_8 = iVar3;
  }
  do {
    iVar3 = local_10;
    if (local_c < iVar2) {
      return 0;
    }
    for (; iVar3 <= local_8; iVar3 = iVar3 + 1) {
      iVar1 = FUN_20da98db(this,iVar2,iVar3,param_1,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



undefined4 __thiscall FUN_20db10da(void *this,LPSTR param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  LPSTR pCVar2;
  undefined4 uVar3;
  LPSTR lpsz;
  undefined4 *puVar4;
  
  if ((param_2 < 0) || (*(int *)((int)this + 0x144) <= param_2)) {
    uVar3 = 0xd;
  }
  else {
    iVar1 = param_2 * 0x10;
    param_2 = param_3;
    if (param_3 <= param_4) {
      puVar4 = (undefined4 *)(*(int *)(iVar1 + 0xc + *(int *)((int)this + 0x1e8)) + param_3 * 0xc);
      lpsz = param_1;
      do {
        pCVar2 = param_1;
        if (lpsz == (LPCSTR)0x0) break;
        for (; (*pCVar2 != '\0' && (*pCVar2 != '\t')); pCVar2 = CharNextA(pCVar2)) {
        }
        lpsz = (LPSTR)(~-(uint)(*pCVar2 != '\t') & (uint)pCVar2);
        if (lpsz != (LPCSTR)0x0) {
          *lpsz = '\0';
        }
        if ((LPVOID)*puVar4 != (LPVOID)0x0) {
          CoTaskMemFree((LPVOID)*puVar4);
          *puVar4 = 0;
        }
        pCVar2 = FUN_20da998f(param_1);
        *puVar4 = pCVar2;
        if (lpsz != (LPCSTR)0x0) {
          *lpsz = '\t';
          param_1 = CharNextA(lpsz);
        }
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 3;
      } while (param_2 <= param_4);
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 __thiscall FUN_20db118d(void *this,LPSTR param_1)

{
  char cVar1;
  int iVar2;
  LPCSTR lpsz;
  LPSTR pCVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x204);
  iVar2 = *(int *)((int)this + 0x20c);
  iVar5 = local_8;
  if (iVar2 <= local_8) {
    iVar5 = iVar2;
  }
  if (local_8 <= iVar2) {
    local_8 = iVar2;
  }
  local_10 = *(int *)((int)this + 0x208);
  iVar2 = *(int *)((int)this + 0x210);
  local_14 = local_10;
  if (iVar2 <= local_10) {
    local_14 = iVar2;
  }
  if (local_10 <= iVar2) {
    local_10 = iVar2;
  }
  if ((iVar5 < 0) || (*(int *)((int)this + 0x144) <= local_8)) {
    uVar4 = 0xd;
  }
  else if ((local_14 < 0) || (pCVar3 = param_1, *(int *)((int)this + 0x148) <= local_10)) {
    uVar4 = 0xe;
  }
  else {
    while ((iVar5 <= local_8 && (param_1 != (LPCSTR)0x0))) {
      cVar1 = *pCVar3;
      lpsz = pCVar3;
      while ((cVar1 != '\0' && (cVar1 != '\r'))) {
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      }
      param_1 = (LPSTR)(~-(uint)(*lpsz != '\r') & (uint)lpsz);
      if (param_1 != (LPCSTR)0x0) {
        *param_1 = '\0';
      }
      FUN_20db10da(this,pCVar3,iVar5,local_14,local_10);
      if (param_1 != (LPCSTR)0x0) {
        *param_1 = '\r';
        pCVar3 = CharNextA(param_1);
      }
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



LPSTR __fastcall FUN_20db1288(int param_1)

{
  int iVar1;
  LPSTR lpString1;
  LPCSTR lpString2;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  LPSTR pCVar9;
  int local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  iVar8 = *(int *)(param_1 + 0x204);
  iVar4 = *(int *)(param_1 + 0x20c);
  local_c = iVar8;
  if (iVar4 <= iVar8) {
    local_c = iVar4;
  }
  if (iVar4 < iVar8) {
    iVar4 = iVar8;
  }
  local_8 = *(int *)(param_1 + 0x208);
  iVar8 = *(int *)(param_1 + 0x210);
  iVar5 = iVar8;
  if (local_8 < iVar8) {
    iVar5 = local_8;
  }
  if (local_8 <= iVar8) {
    local_8 = iVar8;
  }
  if ((((-1 < local_c) && (iVar4 < *(int *)(param_1 + 0x144))) && (-1 < iVar5)) &&
     (local_8 < *(int *)(param_1 + 0x148))) {
    local_18 = 0;
    if (local_c <= iVar4) {
      iVar8 = local_c << 4;
      local_1c = (iVar4 - local_c) + 1;
      do {
        if (iVar5 <= local_8) {
          puVar6 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x1e8) + 0xc + iVar8) + iVar5 * 0xc);
          iVar7 = (local_8 - iVar5) + 1;
          do {
            if ((LPCSTR)*puVar6 != (LPCSTR)0x0) {
              iVar1 = lstrlenA((LPCSTR)*puVar6);
              local_18 = local_18 + iVar1;
            }
            puVar6 = puVar6 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar8 = iVar8 + 0x10;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    uVar3 = ((local_8 - iVar5) * ((iVar4 - local_c) + 1) - local_c) + local_18 + 1 + iVar4;
    lpString1 = (LPSTR)CoTaskMemAlloc(uVar3);
    if (lpString1 != (LPSTR)0x0) {
      pCVar9 = lpString1;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        pCVar9[0] = '\0';
        pCVar9[1] = '\0';
        pCVar9[2] = '\0';
        pCVar9[3] = '\0';
        pCVar9 = pCVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pCVar9 = '\0';
        pCVar9 = pCVar9 + 1;
      }
      if (lpString1 != (LPSTR)0x0) {
        local_14 = local_c;
        if (iVar4 < local_c) {
          return lpString1;
        }
        local_18 = local_c << 4;
        do {
          if (iVar5 <= local_8) {
            puVar6 = (undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x1e8) + 0xc + local_18) + iVar5 * 0xc);
            iVar8 = iVar5;
            do {
              if ((LPCSTR)*puVar6 != (LPCSTR)0x0) {
                lstrcatA(lpString1,(LPCSTR)*puVar6);
              }
              if ((local_14 < iVar4) || (iVar8 < local_8)) {
                lpString2 = "\r";
                if (iVar8 != local_8) {
                  lpString2 = "\t";
                }
                lstrcatA(lpString1,lpString2);
              }
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 3;
            } while (iVar8 <= local_8);
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x10;
        } while (local_14 <= iVar4);
        return lpString1;
      }
    }
  }
  return (LPSTR)0x0;
}



HRESULT FUN_20db1462(int param_1,int param_2,ITypeInfo *param_3,uint *param_4)

{
  HRESULT HVar1;
  
  if (param_2 == 0x60f) {
    HVar1 = FUN_20dbc8c8(param_3,param_4,*(HRESULT *)(param_1 + -0xb0),(GUID *)&DAT_20daf568,
                         (ITypeInfoVtbl *)0x0);
  }
  else if ((param_3 == (ITypeInfo *)0x0) || (param_4 == (uint *)0x0)) {
    HVar1 = -0x7fffbffd;
  }
  else {
    HVar1 = 1;
  }
  return HVar1;
}



LRESULT __thiscall FUN_20db14f8(void *this,WPARAM param_1,LPARAM param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  LVar2 = 0;
  iVar1 = FUN_20dbfe38(*(HWND *)((int)this + 0xa0),&param_1,(undefined *)&param_2,(int)this,
                       (undefined4 *)&DAT_20dc4ec8);
  if (iVar1 != 0) {
    LVar2 = DefWindowProcA(*(HWND *)((int)this + 0xa0),0x102,param_1,param_2);
  }
  return LVar2;
}



int __fastcall FUN_20db1542(int param_1)

{
  HDC hdc;
  BOOL BVar1;
  int iVar2;
  tagTEXTMETRICA local_3c;
  
  iVar2 = *(int *)(param_1 + 0x218);
  if (iVar2 == -1) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    hdc = GetDC((HWND)0x0);
    BVar1 = GetTextMetricsA(hdc,&local_3c);
    if ((BVar1 != 0) && ((local_3c.tmCharSet == 0xb2 || (local_3c.tmCharSet == 0xb1)))) {
      *(undefined4 *)(param_1 + 0x218) = 1;
    }
    ReleaseDC((HWND)0x0,hdc);
    iVar2 = *(int *)(param_1 + 0x218);
  }
  return iVar2;
}



char FUN_20db17dd(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



void __fastcall FUN_20db1818(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4e80);
  return;
}



void __fastcall FUN_20db1826(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4e8c);
  return;
}



void __fastcall FUN_20db1834(int param_1)

{
  FUN_20db17dd();
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4ebc);
  return;
}



void __fastcall FUN_20db1857(int param_1)

{
  FUN_20db17dd();
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4ed4);
  return;
}



void __thiscall FUN_20db187a(void *this,ushort param_1)

{
  *(ushort *)((int)this + 0x29c) = *(ushort *)((int)this + 0x29c) | param_1;
  FUN_20db17dd();
  FUN_20dab370((int)this,(undefined4 *)&DAT_20dc4e98);
  return;
}



void __fastcall FUN_20db18b1(int param_1)

{
  FUN_20db17dd();
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4ea4);
  return;
}



void __thiscall FUN_20db18dd(void *this,ushort param_1)

{
  *(ushort *)((int)this + 0x29c) = *(ushort *)((int)this + 0x29c) & ~param_1;
  FUN_20db17dd();
  FUN_20dab370((int)this,(undefined4 *)&DAT_20dc4eb0);
  return;
}



void __fastcall FUN_20db1916(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4ee0);
  return;
}



void __fastcall FUN_20db1924(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4f10);
  return;
}



void __fastcall FUN_20db1932(int param_1)

{
  FUN_20dab370(param_1,(undefined4 *)&DAT_20dc4f1c);
  return;
}



void __thiscall FUN_20db194f(void *this,LONG *param_1)

{
  LONG *pLVar1;
  int iVar2;
  int iVar3;
  RECT local_14;
  
  pLVar1 = param_1;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x14c)) {
    param_1 = (LONG *)0x0;
    do {
      if (*(char *)(*(int *)((int)this + 0x1e8) + 8 + (int)param_1) != '\0') {
        FUN_20da616d(this,iVar3,0,&local_14.left);
        if (pLVar1[3] < local_14.top) {
          return;
        }
        local_14.left = *pLVar1;
        local_14.right = pLVar1[2];
        FUN_20da3c27(this,&local_14);
      }
      param_1 = param_1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x14c));
  }
  iVar3 = *(int *)((int)this + 0x1fc);
  if (iVar3 < *(int *)((int)this + 0x144)) {
    iVar2 = iVar3 << 4;
    do {
      if (*(char *)(*(int *)((int)this + 0x1e8) + 8 + iVar2) != '\0') {
        FUN_20da616d(this,iVar3,0,&local_14.left);
        if (pLVar1[3] < local_14.top) {
          return;
        }
        local_14.left = *pLVar1;
        local_14.right = pLVar1[2];
        FUN_20da3c27(this,&local_14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)((int)this + 0x144));
  }
  return;
}



void __thiscall FUN_20db1a1f(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RECT local_14;
  
  iVar1 = param_1;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x150)) {
    param_1 = 0;
    do {
      if (*(char *)(*(int *)((int)this + 0x1ec) + 6 + param_1) != '\0') {
        FUN_20da616d(this,0,iVar3,&local_14.left);
        if (*(int *)(iVar1 + 8) < local_14.left) {
          return;
        }
        local_14.top = *(LONG *)(iVar1 + 4);
        local_14.bottom = *(LONG *)(iVar1 + 0xc);
        FUN_20da3c27(this,&local_14);
      }
      param_1 = param_1 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x150));
  }
  iVar3 = *(int *)((int)this + 0x200);
  if (iVar3 < *(int *)((int)this + 0x148)) {
    iVar2 = iVar3 * 0xc;
    do {
      if (*(char *)(*(int *)((int)this + 0x1ec) + 6 + iVar2) != '\0') {
        FUN_20da616d(this,0,iVar3,&local_14.left);
        if (*(int *)(iVar1 + 8) < local_14.left) {
          return;
        }
        local_14.top = *(LONG *)(iVar1 + 4);
        local_14.bottom = *(LONG *)(iVar1 + 0xc);
        FUN_20da3c27(this,&local_14);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < *(int *)((int)this + 0x148));
  }
  return;
}



int __thiscall FUN_20db1af2(void *this,int param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = param_1;
  local_10 = param_2;
  local_c = param_2;
  if (*(short *)((int)this + 0x1a6) == 0) {
    iVar1 = FUN_20da98db(this,param_1,param_2,param_3,param_4);
  }
  else {
    if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < *(int *)((int)this + 0x144))) &&
       (param_2 < *(int *)((int)this + 0x148))) {
      iVar2 = param_2 * 0xc;
      if (*(char *)(*(int *)((int)this + 0x1ec) + 6 + iVar2) != '\0') {
        local_14 = *(int *)((int)this + 0x14c);
        if (param_1 < local_14) {
          iVar4 = 0;
        }
        else {
          iVar4 = local_14;
          local_14 = *(int *)((int)this + 0x144) + -1;
        }
        if (iVar4 < param_1) {
          piVar6 = (int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10);
          do {
            if ((*(byte *)(iVar2 + 4 + *piVar6) & 1) == 0) break;
            local_8 = local_8 + -1;
            piVar6 = piVar6 + -4;
          } while (iVar4 < local_8);
        }
        if (param_1 < local_14) {
          piVar6 = (int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10);
          do {
            if ((*(byte *)(*piVar6 + 4 + iVar2) & 2) == 0) break;
            param_1 = param_1 + 1;
            piVar6 = piVar6 + 4;
          } while (param_1 < local_14);
        }
      }
      if ((local_8 == param_1) &&
         (iVar1 = iVar1 * 0x10 + *(int *)((int)this + 0x1e8), *(char *)(iVar1 + 8) != '\0')) {
        iVar4 = *(int *)((int)this + 0x150);
        if (param_2 < iVar4) {
          iVar5 = 0;
          iVar3 = iVar4;
        }
        else {
          iVar3 = *(int *)((int)this + 0x148) + -1;
          iVar5 = iVar4;
        }
        if (iVar5 < param_2) {
          pbVar7 = (byte *)(*(int *)(iVar1 + 0xc) + 4 + iVar2);
          do {
            if ((*pbVar7 & 4) == 0) break;
            local_10 = local_10 + -1;
            pbVar7 = pbVar7 + -0xc;
          } while (iVar5 < local_10);
        }
        if (param_2 < iVar3) {
          pbVar7 = (byte *)(*(int *)(iVar1 + 0xc) + 4 + iVar2);
          do {
            if ((*pbVar7 & 8) == 0) break;
            local_c = local_c + 1;
            pbVar7 = pbVar7 + 0xc;
          } while (local_c < iVar3);
        }
      }
      for (; iVar1 = local_10, local_8 <= param_1; local_8 = local_8 + 1) {
        for (; iVar1 <= local_c; iVar1 = iVar1 + 1) {
          iVar2 = FUN_20da98db(this,local_8,iVar1,param_3,param_4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 __thiscall FUN_20db1ccc(void *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  uVar1 = GetKeyState(0x11);
  uVar2 = GetKeyState(0x10);
  iVar6 = -1;
  iVar5 = -1;
  switch(param_1) {
  case 0x21:
    if ((uVar1 & 0x8000) == 0) {
      if ((uVar2 & 0x8000) == 0) {
        iVar5 = *(int *)((int)this + 0x204);
      }
      else {
        iVar5 = *(int *)((int)this + 0x20c);
      }
      iVar5 = FUN_20db077c(this,iVar5);
      goto LAB_20db1d35;
    }
LAB_20db1e8e:
    iVar5 = *(int *)((int)this + 0x14c);
    goto LAB_20db1d35;
  case 0x22:
    if ((uVar1 & 0x8000) == 0) {
      if ((uVar2 & 0x8000) == 0) {
        iVar5 = *(int *)((int)this + 0x204);
      }
      else {
        iVar5 = *(int *)((int)this + 0x20c);
      }
      iVar5 = FUN_20db07db(this,iVar5);
      goto LAB_20db1d35;
    }
    break;
  case 0x23:
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = *(int *)((int)this + 0x144) + -1;
    }
    goto LAB_20db1df1;
  case 0x24:
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = *(int *)((int)this + 0x14c);
    }
LAB_20db1e67:
    iVar6 = *(int *)((int)this + 0x150);
    goto LAB_20db1d35;
  case 0x25:
    if (*(int *)((int)this + 400) != 0) {
      if ((uVar1 & 0x8000) == 0) {
LAB_20db1d25:
        if ((uVar2 & 0x8000) == 0) {
          iVar6 = *(int *)((int)this + 0x208);
        }
        else {
          iVar6 = *(int *)((int)this + 0x210);
        }
        iVar6 = iVar6 + 1;
        goto LAB_20db1d35;
      }
      goto LAB_20db1e67;
    }
    if ((uVar1 & 0x8000) != 0) goto LAB_20db1e67;
LAB_20db1dd1:
    if ((uVar2 & 0x8000) == 0) {
      iVar6 = *(int *)((int)this + 0x208);
    }
    else {
      iVar6 = *(int *)((int)this + 0x210);
    }
    goto LAB_20db1ddc;
  case 0x26:
    if ((uVar1 & 0x8000) != 0) goto LAB_20db1e8e;
    if ((uVar2 & 0x8000) == 0) {
      iVar5 = *(int *)((int)this + 0x204);
    }
    else {
      iVar5 = *(int *)((int)this + 0x20c);
    }
    goto LAB_20db1e29;
  case 0x27:
    if (*(int *)((int)this + 400) == 0) {
      if ((uVar1 & 0x8000) == 0) goto LAB_20db1d25;
    }
    else if ((uVar1 & 0x8000) == 0) goto LAB_20db1dd1;
LAB_20db1df1:
    iVar6 = *(int *)((int)this + 0x148);
LAB_20db1ddc:
    iVar6 = iVar6 + -1;
    goto LAB_20db1d35;
  case 0x28:
    if ((uVar1 & 0x8000) == 0) {
      if ((uVar2 & 0x8000) == 0) {
        iVar5 = *(int *)((int)this + 0x204);
      }
      else {
        iVar5 = *(int *)((int)this + 0x20c);
      }
      iVar5 = iVar5 + 1;
      goto LAB_20db1d35;
    }
    break;
  default:
    return 0;
  }
  iVar5 = *(int *)((int)this + 0x144);
LAB_20db1e29:
  iVar5 = iVar5 + -1;
LAB_20db1d35:
  if ((-1 < iVar5) && (iVar4 = *(int *)((int)this + 0x144), iVar4 != 0)) {
    if (iVar5 < *(int *)((int)this + 0x14c)) {
      iVar5 = *(int *)((int)this + 0x14c);
    }
    if (iVar4 <= iVar5) {
      iVar5 = iVar4 + -1;
    }
    uVar3 = FUN_20da5cca(this,iVar5);
    if (uVar3 == 0) {
      if ((uVar2 & 0x8000) == 0) {
        iVar4 = *(int *)((int)this + 0x204);
      }
      else {
        iVar4 = *(int *)((int)this + 0x20c);
      }
      if (iVar5 == iVar4) {
        param_1 = 0;
      }
      else {
        param_1 = ((iVar5 <= iVar4) - 1 & 2) - 1;
      }
      iVar4 = iVar5;
      if (param_1 != 0) {
        do {
          iVar5 = iVar4;
          uVar3 = FUN_20da5cca(this,iVar5);
          if ((uVar3 != 0) || (iVar4 = param_1 + iVar5, iVar4 < *(int *)((int)this + 0x14c))) break;
        } while (iVar4 <= *(int *)((int)this + 0x144) + -1);
      }
      iVar4 = iVar5;
      if (param_1 != 0) {
        do {
          iVar5 = iVar4;
          uVar3 = FUN_20da5cca(this,iVar5);
          if ((uVar3 != 0) || (iVar4 = iVar5 - param_1, iVar4 < *(int *)((int)this + 0x14c))) break;
        } while (iVar4 <= *(int *)((int)this + 0x144) + -1);
      }
    }
  }
  if ((-1 < iVar6) && (iVar4 = *(int *)((int)this + 0x148), iVar4 != 0)) {
    if (iVar6 < *(int *)((int)this + 0x150)) {
      iVar6 = *(int *)((int)this + 0x150);
    }
    if (iVar4 <= iVar6) {
      iVar6 = iVar4 + -1;
    }
    uVar3 = FUN_20da5d02(this,iVar6);
    if (uVar3 == 0) {
      if ((uVar2 & 0x8000) == 0) {
        iVar4 = *(int *)((int)this + 0x208);
      }
      else {
        iVar4 = *(int *)((int)this + 0x210);
      }
      if (iVar6 == iVar4) {
        param_1 = 0;
      }
      else {
        param_1 = ((iVar6 <= iVar4) - 1 & 2) - 1;
      }
      iVar4 = iVar6;
      if (param_1 != 0) {
        do {
          iVar6 = iVar4;
          uVar3 = FUN_20da5d02(this,iVar6);
          if ((uVar3 != 0) || (iVar4 = param_1 + iVar6, iVar4 < *(int *)((int)this + 0x150))) break;
        } while (iVar4 <= *(int *)((int)this + 0x148) + -1);
      }
      iVar4 = iVar6;
      if (param_1 != 0) {
        do {
          iVar6 = iVar4;
          uVar3 = FUN_20da5d02(this,iVar6);
          if ((uVar3 != 0) || (iVar4 = iVar6 - param_1, iVar4 < *(int *)((int)this + 0x150))) break;
        } while (iVar4 <= *(int *)((int)this + 0x148) + -1);
      }
    }
  }
  sVar7 = *(short *)((int)this + 0x1a4);
  if (sVar7 == 0) {
    if ((uVar2 & 0x8000) == 0) {
      FUN_20dab234(this,iVar5,iVar6,2,1);
      return 1;
    }
    sVar7 = 1;
  }
  else if (sVar7 == 1) {
    if ((uVar2 & 0x8000) == 0) {
      FUN_20dab234(this,iVar5,-1,0,1);
    }
    iVar6 = *(int *)((int)this + 0x148) + -1;
    sVar7 = 3;
  }
  else {
    if (sVar7 != 2) {
      return 1;
    }
    if ((uVar2 & 0x8000) == 0) {
      FUN_20dab234(this,-1,iVar6,0,1);
    }
    sVar7 = 4;
    iVar5 = *(int *)((int)this + 0x144) + -1;
  }
  FUN_20db0b0e(this,iVar5,iVar6,sVar7,1);
  return 1;
}



undefined4 __fastcall FUN_20db209a(void *param_1)

{
  HCURSOR hCursor;
  
  FUN_20da633a(param_1,1);
  SetCapture(*(HWND *)((int)param_1 + 0xa0));
  *(undefined4 *)((int)param_1 + 0x248) = 1;
  if (*(int *)((int)param_1 + 0x254) != 0) {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)((*(int *)((int)param_1 + 0x254) != 2) + 0x7f84));
    SetCursor(hCursor);
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_20db20ea(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)((int)this + 0x264);
  *piVar1 = param_1;
  *(undefined4 *)((int)this + 0x268) = param_2;
  FUN_20db0d24(this,piVar1,1);
  iVar4 = *(int *)((int)this + 0x184);
  *(undefined4 *)((int)this + 0x250) = 0;
  if (((iVar4 == 0) || (*(int *)((int)this + 0x1fc) <= *(int *)((int)this + 0x268))) ||
     (*(int *)((int)this + 0x200) <= *piVar1)) {
    sVar2 = *(short *)((int)this + 0x1a4);
    if ((sVar2 != 2) &&
       (((iVar4 == 0 || (sVar2 == 1)) ||
        (*(int *)((int)this + 0x1fc) <= *(int *)((int)this + 0x268))))) {
      if ((sVar2 == 1) || ((iVar4 != 0 && (*piVar1 < *(int *)((int)this + 0x200))))) {
        *(undefined4 *)((int)this + 0x250) = 1;
        if (*(int *)((int)this + 0x268) < *(int *)((int)this + 0x14c)) {
          *(int *)((int)this + 0x268) = *(int *)((int)this + 0x14c);
        }
        uVar3 = GetKeyState(0x10);
        if ((uVar3 & 0x8000) == 0) {
          iVar4 = *(int *)((int)this + 0x268);
        }
        else {
          iVar4 = *(int *)((int)this + 0x204);
        }
        FUN_20dab234(this,iVar4,*(int *)((int)this + 0x150),0,0);
        iVar4 = *(int *)((int)this + 0x148) + -1;
      }
      else {
        if (*(int *)((int)this + 0x268) < *(int *)((int)this + 0x1fc)) {
          *(int *)((int)this + 0x268) = *(int *)((int)this + 0x1fc);
        }
        if (*piVar1 < *(int *)((int)this + 0x200)) {
          *piVar1 = *(int *)((int)this + 0x200);
        }
        uVar3 = GetKeyState(0x10);
        if ((uVar3 & 0x8000) == 0) {
          FUN_20dab234(this,*(int *)((int)this + 0x268),*piVar1,0,0);
          return 1;
        }
        iVar4 = *piVar1;
      }
      iVar5 = *(int *)((int)this + 0x268);
      goto LAB_20db21eb;
    }
    *(undefined4 *)((int)this + 0x250) = 2;
    if (*piVar1 < *(int *)((int)this + 0x150)) {
      *piVar1 = *(int *)((int)this + 0x150);
    }
    uVar3 = GetKeyState(0x10);
    if ((uVar3 & 0x8000) == 0) {
      iVar4 = *piVar1;
    }
    else {
      iVar4 = *(int *)((int)this + 0x208);
    }
    FUN_20dab234(this,*(int *)((int)this + 0x14c),iVar4,0,0);
    iVar4 = *piVar1;
  }
  else {
    *(undefined4 *)((int)this + 0x250) = 4;
    FUN_20dab234(this,*(int *)((int)this + 0x14c),*(int *)((int)this + 0x150),2,0);
    iVar4 = *(int *)((int)this + 0x148) + -1;
  }
  iVar5 = *(int *)((int)this + 0x144) + -1;
LAB_20db21eb:
  FUN_20db0b0e(this,iVar5,iVar4,0,1);
  return 1;
}



undefined4 __thiscall FUN_20db22a5(void *this,int param_1,HDC param_2)

{
  int *piVar1;
  LPRECT lpRect;
  ushort uVar2;
  BOOL BVar3;
  uint uVar4;
  HCURSOR pHVar5;
  int iVar6;
  undefined4 uVar7;
  UINT_PTR UVar8;
  uint uVar9;
  short sVar10;
  
  if (((*(int *)((int)this + 0x248) != 0) || (*(int *)((int)this + 0x24c) != 0)) &&
     (uVar2 = GetKeyState(1), (uVar2 & 0x8000) == 0)) {
    if ((*(int *)((int)this + 0x24c) != 0) &&
       (BVar3 = KillTimer(*(HWND *)((int)this + 0xa0),100), BVar3 != 0)) {
      *(undefined4 *)((int)this + 0x24c) = 0;
    }
    *(undefined4 *)((int)this + 0x248) = 0;
  }
  if (*(int *)((int)this + 0x248) != 0) goto LAB_20db2483;
  piVar1 = (int *)((int)this + 0x26c);
  *(int *)((int)this + 0x264) = param_1;
  *piVar1 = param_1;
  *(HDC *)((int)this + 0x270) = param_2;
  *(HDC *)((int)this + 0x268) = param_2;
  FUN_20db0d24(this,piVar1,1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  FUN_20da616d(this,*(int *)((int)this + 0x270),*piVar1,(int *)((int)this + 0x274));
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  *(undefined4 *)((int)this + 0x254) = 0;
  if ((*(int *)((int)this + 0x270) < *(int *)((int)this + 0x14c)) &&
     ((*(short *)((int)this + 0x1a8) == 1 || (*(short *)((int)this + 0x1a8) == 3)))) {
    if (*(int *)((int)this + 400) == 0) {
LAB_20db23a5:
      uVar4 = *(int *)((int)this + 0x27c) - *(int *)((int)this + 0x264);
      uVar9 = (int)uVar4 >> 0x1f;
      if (2 < (int)((uVar4 ^ uVar9) - uVar9)) goto LAB_20db240f;
    }
    else {
      uVar4 = *(int *)((int)this + 0x274) - *(int *)((int)this + 0x264);
      uVar9 = (int)uVar4 >> 0x1f;
      if (2 < (int)((uVar4 ^ uVar9) - uVar9)) {
        if (*(int *)((int)this + 400) != 0) goto LAB_20db240f;
        goto LAB_20db23a5;
      }
    }
    pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f84);
    SetCursor(pHVar5);
    *(undefined4 *)((int)this + 0x254) = 2;
    *(int *)((int)this + 0x260) = *piVar1;
    *(undefined4 *)((int)this + 600) = 0xfffffc18;
    if (*(int *)((int)this + 400) == 0) {
      uVar7 = *(undefined4 *)((int)this + 0x274);
    }
    else {
      uVar7 = *(undefined4 *)((int)this + 0x27c);
    }
  }
  else {
LAB_20db240f:
    if ((*(int *)((int)this + 0x150) <= *piVar1) ||
       (((*(short *)((int)this + 0x1a8) != 2 && (*(short *)((int)this + 0x1a8) != 3)) ||
        (uVar4 = *(int *)((int)this + 0x280) - *(int *)((int)this + 0x268),
        uVar9 = (int)uVar4 >> 0x1f, 2 < (int)((uVar4 ^ uVar9) - uVar9))))) {
LAB_20db2483:
      if (*(int *)((int)this + 0x248) == 0) {
        return 1;
      }
      if (*(int *)((int)this + 0x254) != 0) {
        lpRect = (LPRECT)((int)this + 0x274);
        *(int *)((int)this + 0x264) = param_1;
        *(HDC *)((int)this + 0x268) = param_2;
        GetClientRect(*(HWND *)((int)this + 0xa0),lpRect);
        if (*(int *)((int)this + 0x254) == 2) {
          pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f84);
          SetCursor(pHVar5);
          if (*(int *)((int)this + 400) == 0) {
            iVar6 = *(int *)((int)this + 0x27c) + -2;
            if (iVar6 <= *(int *)((int)this + 0x264)) {
              *(int *)((int)this + 0x264) = iVar6;
            }
            if (*(int *)((int)this + 0x264) < *(int *)((int)this + 0x25c)) {
              *(int *)((int)this + 0x264) = *(int *)((int)this + 0x25c);
            }
            if (*(int *)((int)this + 600) == *(int *)((int)this + 0x264)) {
              return 0;
            }
            param_2 = GetDC(*(HWND *)((int)this + 0xa0));
            iVar6 = *(int *)((int)this + 600);
            lpRect->left = iVar6;
            *(int *)((int)this + 0x27c) = iVar6 + 2;
            DrawFocusRect(param_2,lpRect);
            iVar6 = *(int *)((int)this + 0x264);
            lpRect->left = iVar6;
            *(int *)((int)this + 0x27c) = iVar6 + 2;
            DrawFocusRect(param_2,lpRect);
          }
          else {
            iVar6 = lpRect->left + 2;
            if (*(int *)((int)this + 0x264) <= iVar6) {
              *(int *)((int)this + 0x264) = iVar6;
            }
            if (*(int *)((int)this + 0x25c) < *(int *)((int)this + 0x264)) {
              *(int *)((int)this + 0x264) = *(int *)((int)this + 0x25c);
            }
            if (*(int *)((int)this + 600) == *(int *)((int)this + 0x264)) {
              return 0;
            }
            param_2 = GetDC(*(HWND *)((int)this + 0xa0));
            iVar6 = *(int *)((int)this + 600) + -2;
            lpRect->left = iVar6;
            *(int *)((int)this + 0x27c) = iVar6;
            DrawFocusRect(param_2,lpRect);
            iVar6 = *(int *)((int)this + 0x264) + -2;
            lpRect->left = iVar6;
            *(int *)((int)this + 0x27c) = iVar6;
            DrawFocusRect(param_2,lpRect);
          }
          uVar7 = *(undefined4 *)((int)this + 0x264);
        }
        else {
          pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f85);
          SetCursor(pHVar5);
          iVar6 = *(int *)((int)this + 0x280) + -2;
          if (iVar6 <= *(int *)((int)this + 0x268)) {
            *(int *)((int)this + 0x268) = iVar6;
          }
          if (*(int *)((int)this + 0x268) < *(int *)((int)this + 0x25c)) {
            *(int *)((int)this + 0x268) = *(int *)((int)this + 0x25c);
          }
          if (*(int *)((int)this + 600) == *(int *)((int)this + 0x268)) {
            return 0;
          }
          param_2 = GetDC(*(HWND *)((int)this + 0xa0));
          *(int *)((int)this + 0x278) = *(int *)((int)this + 600);
          *(int *)((int)this + 0x280) = *(int *)((int)this + 600) + 2;
          DrawFocusRect(param_2,lpRect);
          *(int *)((int)this + 0x278) = *(int *)((int)this + 0x268);
          *(int *)((int)this + 0x280) = *(int *)((int)this + 0x268) + 2;
          DrawFocusRect(param_2,lpRect);
          uVar7 = *(undefined4 *)((int)this + 0x268);
        }
        *(undefined4 *)((int)this + 600) = uVar7;
        ReleaseDC(*(HWND *)((int)this + 0xa0),param_2);
        return 0;
      }
      if (*(int *)((int)this + 0x248) == 0) {
        return 1;
      }
      if (*(int *)((int)this + 0x250) == 4) {
        return 1;
      }
      if ((*(int *)((int)this + 0x24c) == 0) &&
         (UVar8 = SetTimer(*(HWND *)((int)this + 0xa0),100,0x32,(TIMERPROC)0x0), UVar8 != 0)) {
        *(undefined4 *)((int)this + 0x24c) = 1;
      }
      piVar1 = (int *)((int)this + 0x264);
      *piVar1 = param_1;
      *(HDC *)((int)this + 0x268) = param_2;
      FUN_20db0d24(this,piVar1,0);
      if ((*(short *)((int)this + 0x1a4) == 1) || (*(int *)((int)this + 0x250) == 1)) {
        *piVar1 = *(int *)((int)this + 0x148) + -1;
      }
      else if ((*(short *)((int)this + 0x1a4) == 2) || (*(int *)((int)this + 0x250) == 2)) {
        *(int *)((int)this + 0x268) = *(int *)((int)this + 0x144) + -1;
      }
      iVar6 = *(int *)((int)this + 0x1fc);
      if (((*(int *)((int)this + 0x268) < iVar6) && (*(int *)((int)this + 0x14c) < iVar6)) &&
         (*(int *)((int)this + 0x268) = iVar6 + -1, *(int *)((int)this + 0x14c) < iVar6 + -1)) {
        do {
          uVar4 = FUN_20da5cca(this,*(int *)((int)this + 0x268));
          if (uVar4 != 0) break;
          *(int *)((int)this + 0x268) = *(int *)((int)this + 0x268) + -1;
        } while (*(int *)((int)this + 0x14c) < *(int *)((int)this + 0x268));
      }
      iVar6 = *(int *)((int)this + 0x200);
      if (((*piVar1 < iVar6) && (*(int *)((int)this + 0x150) < iVar6)) &&
         (*piVar1 = iVar6 + -1, *(int *)((int)this + 0x150) < iVar6 + -1)) {
        do {
          uVar4 = FUN_20da5d02(this,*piVar1);
          if (uVar4 != 0) break;
          *piVar1 = *piVar1 + -1;
        } while (*(int *)((int)this + 0x150) < *piVar1);
      }
      iVar6 = (int)*(short *)((int)this + 0x1a4);
      if (*(short *)((int)this + 0x1a4) == 0) {
        iVar6 = *(int *)((int)this + 0x250);
      }
      if (iVar6 == 0) {
        sVar10 = 1;
      }
      else if (iVar6 == 1) {
        sVar10 = 3;
      }
      else {
        if (iVar6 != 2) {
          return 1;
        }
        sVar10 = 4;
      }
      FUN_20db0b0e(this,*(int *)((int)this + 0x268),*piVar1,sVar10,1);
      return 1;
    }
    pHVar5 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f85);
    SetCursor(pHVar5);
    *(undefined4 *)((int)this + 0x254) = 1;
    *(undefined4 *)((int)this + 0x260) = *(undefined4 *)((int)this + 0x270);
    uVar7 = *(undefined4 *)((int)this + 0x278);
    *(undefined4 *)((int)this + 600) = 0xfffffc18;
  }
  *(undefined4 *)((int)this + 0x25c) = uVar7;
  return 0;
}



undefined4 __fastcall FUN_20db2815(void *param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  if ((*(int *)((int)param_1 + 0x24c) != 0) &&
     (BVar3 = KillTimer(*(HWND *)((int)param_1 + 0xa0),100), BVar3 != 0)) {
    *(undefined4 *)((int)param_1 + 0x24c) = 0;
  }
  if (*(int *)((int)param_1 + 0x248) == 0) {
    *(undefined4 *)((int)param_1 + 0x250) = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 0x254);
    if (iVar1 != 0) {
      iVar2 = *(int *)((int)param_1 + 600);
      if (0 < iVar2) {
        if ((iVar1 == 2) && (*(int *)((int)param_1 + 400) != 0)) {
          *(int *)((int)param_1 + 600) = *(int *)((int)param_1 + 0x25c) - iVar2;
        }
        else {
          *(int *)((int)param_1 + 600) = iVar2 - *(int *)((int)param_1 + 0x25c);
        }
        if (*(int *)((int)param_1 + 600) < 1) {
          *(undefined4 *)((int)param_1 + 600) = 1;
        }
        if (iVar1 == 1) {
          *(undefined4 *)(*(int *)((int)param_1 + 0x260) * 0x10 + *(int *)((int)param_1 + 0x1e8)) =
               *(undefined4 *)((int)param_1 + 600);
        }
        else {
          *(undefined4 *)(*(int *)((int)param_1 + 0x1ec) + *(int *)((int)param_1 + 0x260) * 0xc) =
               *(undefined4 *)((int)param_1 + 600);
        }
        FUN_20da3c81(param_1);
        FUN_20da3c27(param_1,(RECT *)0x0);
      }
      *(undefined4 *)((int)param_1 + 0x250) = 0;
      *(undefined4 *)((int)param_1 + 0x248) = 0;
      ReleaseCapture();
      return 0;
    }
    if ((*(int *)((int)param_1 + 0x250) == 0) && (*(short *)((int)param_1 + 0x1a4) == 0)) {
      FUN_20db090c(param_1,*(int *)((int)param_1 + 0x20c),*(int *)((int)param_1 + 0x210));
    }
    *(undefined4 *)((int)param_1 + 0x250) = 0;
    *(undefined4 *)((int)param_1 + 0x248) = 0;
    ReleaseCapture();
  }
  return 1;
}



void FUN_20db293a(HDC param_1,int param_2,int *param_3)

{
  int *this;
  int *piVar1;
  short sVar2;
  int iVar3;
  int dy;
  int dx;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  tagRECT local_14;
  
  this = (int *)(param_2 + 0x10);
  sVar2 = FUN_20db6f75(this);
  piVar1 = param_3;
  if (sVar2 == 1) {
    (**(code **)(*(int *)*this + 0xc))((int *)*this,&param_3);
    GetObjectA(param_3,0x18,local_2c);
LAB_20db2976:
    SetRect(&local_14,0,0,local_28,local_24);
    iVar3 = (int)*(char *)(param_2 + 10);
  }
  else {
    if (sVar2 != 2) {
      if (sVar2 != 3) {
        return;
      }
      iVar3 = GetSystemMetrics(0xc);
      local_28 = GetSystemMetrics(0xb);
      local_24 = iVar3;
      goto LAB_20db2976;
    }
    local_14.left = *param_3;
    local_14.top = param_3[1];
    local_14.right = param_3[2];
    local_14.bottom = param_3[3];
    iVar3 = 9;
  }
  OffsetRect(&local_14,*piVar1,piVar1[1]);
  dx = ((local_14.left - local_14.right) - *piVar1) + piVar1[2];
  dy = ((local_14.top - local_14.bottom) - piVar1[1]) + piVar1[3];
  switch(iVar3) {
  case 0:
    break;
  case 1:
    dy = dy / 2;
  case 2:
    dx = 0;
LAB_20db29f5:
    OffsetRect(&local_14,dx,dy);
    break;
  case 3:
    dy = 0;
    goto LAB_20db2a14;
  case 4:
    dy = dy / 2;
  case 5:
LAB_20db2a14:
    dx = dx / 2;
    goto LAB_20db29f5;
  case 6:
    dy = 0;
    goto LAB_20db29f5;
  case 7:
    dy = dy / 2;
  case 8:
    goto LAB_20db29f5;
  case 9:
    local_14.left = *piVar1;
    local_14.top = piVar1[1];
    local_14.right = piVar1[2];
    local_14.bottom = piVar1[3];
    break;
  case 10:
    SaveDC(param_1);
    ExcludeClipRect(param_1,piVar1[2],0,20000,20000);
    ExcludeClipRect(param_1,0,piVar1[3],20000,20000);
    iVar3 = local_14.right - local_14.left;
    param_3 = (int *)(local_14.bottom - local_14.top);
    do {
      do {
        FUN_20db6f14(this,param_1,&local_14.left,piVar1);
        OffsetRect(&local_14,iVar3,0);
      } while (local_14.left < piVar1[2]);
      local_14.left = *piVar1;
      local_14.right = local_14.left + iVar3;
      OffsetRect(&local_14,0,(int)param_3);
    } while (local_14.top < piVar1[3]);
    RestoreDC(param_1,-1);
  default:
    goto switchD_20db29c3_default;
  }
  FUN_20db6f14(this,param_1,&local_14.left,piVar1);
switchD_20db29c3_default:
  return;
}



void __thiscall
FUN_20db2af5(void *this,int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10);
  iVar3 = param_2 * 0xc;
  bVar1 = *(byte *)(iVar2 + 4 + iVar3);
  if (param_6 != 0) {
    *(byte *)(iVar2 + 4 + iVar3) = bVar1 & 0xc;
  }
  FUN_20da616d(this,param_1,param_2,param_3);
  iVar2 = *(int *)(param_5 + 0xc);
  if ((*(int *)(param_4 + 0xc) < iVar2) && (iVar2 < param_3[3])) {
    param_3[3] = iVar2;
  }
  iVar2 = *(int *)(param_5 + 8);
  if ((*(int *)(param_4 + 8) < iVar2) && (iVar2 < param_3[2])) {
    param_3[2] = iVar2;
  }
  *(byte *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_1 * 0x10) + 4 + iVar3) = bVar1;
  return;
}



undefined4 __thiscall FUN_20db2b7e(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int yTop;
  int xLeft;
  LPSIZE lpsz;
  tagRECT local_28;
  tagPOINT local_18;
  tagPOINT local_10;
  undefined4 local_8;
  
  if (param_1 == (undefined4 *)0x0) {
    SetRect((LPRECT)((int)this + 0x1c0),0,0,0,0);
    uVar1 = 0;
  }
  else {
    SetMapMode((HDC)*param_1,6);
    local_10.y = 1000;
    local_10.x = 1000;
    DPtoLP((HDC)*param_1,&local_10,1);
    uVar2 = FUN_20db6a68(local_10.x);
    local_10.x = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    uVar2 = FUN_20da41db(local_10.y);
    local_10.y = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    SetMapMode((HDC)*param_1,8);
    lpsz = (LPSIZE)0x0;
    iVar3 = MulDiv(param_1[9],local_10.y,1000);
    iVar4 = MulDiv(param_1[8],local_10.x,1000);
    SetWindowExtEx((HDC)*param_1,iVar4,iVar3,lpsz);
    SetViewportExtEx((HDC)*param_1,param_1[8],param_1[9],(LPSIZE)0x0);
    iVar3 = MulDiv(param_1[5],local_10.y,1000);
    iVar4 = MulDiv(param_1[4],local_10.x,1000);
    yTop = MulDiv(param_1[3],local_10.y,1000);
    xLeft = MulDiv(param_1[2],local_10.x,1000);
    SetRect(&local_28,xLeft,yTop,iVar4,iVar3);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if (0 < *(int *)((int)this + 0x298)) {
      local_28.top = *(int *)((int)this + 0x298);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    uVar1 = *(undefined4 *)((int)this + 0x1fc);
    local_8 = *(undefined4 *)((int)this + 0x200);
    iVar3 = *(int *)((int)this + 0x14c);
    if (*(int *)((int)this + 0x14c) <= *(int *)((int)this + 0x1c4)) {
      iVar3 = *(int *)((int)this + 0x1c4);
    }
    *(int *)((int)this + 0x1fc) = iVar3;
    iVar3 = *(int *)((int)this + 0x150);
    if (*(int *)((int)this + 0x150) <= *(int *)((int)this + 0x1c0)) {
      iVar3 = *(int *)((int)this + 0x1c0);
    }
    *(int *)((int)this + 0x200) = iVar3;
    FUN_20da64a0(this,(HDC)*param_1,&local_28.left,0,1);
    *(undefined4 *)((int)this + 0x1fc) = uVar1;
    *(undefined4 *)((int)this + 0x200) = local_8;
    SetMapMode((HDC)*param_1,1);
    if (*(int *)((int)this + 0x148) + -1 < *(int *)((int)this + 0x1c8)) {
      *(undefined4 *)((int)this + 0x298) = 0xffffffff;
      if (*(int *)((int)this + 0x144) + -1 < *(int *)((int)this + 0x1cc)) {
        GetCurrentPositionEx((HDC)*param_1,&local_18);
        iVar3 = MulDiv(local_18.y,1000,local_10.y);
        param_1[5] = iVar3;
        return 0xffffffff;
      }
      *(undefined4 *)((int)this + 0x1c0) = 0;
      *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1cc);
    }
    else {
      *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1c8);
      *(LONG *)((int)this + 0x298) = local_28.top;
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * __thiscall FUN_20db2ddf(void *this,byte param_1)

{
  FUN_20db2e07((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20db2e07(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_20daf7a8;
  param_1[5] = &PTR_LAB_20daf768;
  *param_1 = &PTR_FUN_20daf968;
  param_1[5] = &PTR_LAB_20daf928;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_20dba5e6((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_20da8410;
  InterlockedDecrement(&DAT_20dc48c8);
  return;
}



void __fastcall FUN_20db2e14(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_20daf968;
  param_1[5] = &PTR_LAB_20daf928;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_20dba5e6((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_20da8410;
  InterlockedDecrement(&DAT_20dc48c8);
  return;
}



uint __thiscall FUN_20db2e6e(void *this,HWND param_1,int *param_2,uint param_3,uint *param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  UINT UVar4;
  HWND pHVar5;
  LRESULT LVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  void *local_8;
  
  local_8 = this;
  if (param_2 == (int *)0x110) {
    FUN_20db6b13(param_1,0xd0,3000);
    FUN_20db6b13(param_1,0xd1,0xbb9);
    FUN_20db6b13(param_1,0xd3,0xbba);
    FUN_20db6b13(param_1,0xd7,0xbbb);
    FUN_20db6b13(param_1,0xd5,0xbbc);
    FUN_20db6b13(param_1,0xd9,0xbbd);
    FUN_20db6b13(param_1,0xe0,0xbc2);
  }
  else if (param_2 == (int *)0x111) {
    sVar1 = (short)(param_3 >> 0x10);
    switch(param_3 & 0xffff) {
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
      bVar7 = sVar1 == 0x300;
      break;
    case 0xd0:
    case 0xd1:
    case 0xd3:
    case 0xd5:
    case 0xd7:
    case 0xd9:
    case 0xe0:
      bVar7 = sVar1 == 1;
      break;
    default:
      goto LAB_20db3104;
    case 0xdb:
      bVar7 = sVar1 == 0;
    }
    if (bVar7) {
      FUN_20dba720((int)this);
    }
  }
  else if (param_2 == (int *)0x464) {
    puVar2 = (undefined4 *)FUN_20dba695(this,(uint *)&local_8);
    if ((puVar2 != (undefined4 *)0x0) &&
       (iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da17f8,&param_2), -1 < iVar3)) {
      FUN_20db32fd(param_1,param_2);
      (**(code **)(*param_2 + 8))(param_2);
      return 1;
    }
  }
  else if (param_2 == (int *)0x465) {
    puVar2 = (undefined4 *)FUN_20dba695(this,(uint *)&local_8);
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 1;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da17f8,&param_2);
      if (-1 < iVar3) {
        UVar4 = GetDlgItemInt(param_1,0xcc,(BOOL *)0x0,1);
        param_3 = (**(code **)(*param_2 + 0x20))(param_2,UVar4);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xcc;
LAB_20db30e7:
          pHVar5 = GetDlgItem(param_1,iVar3);
          SetFocus(pHVar5);
          (**(code **)(*param_2 + 8))(param_2);
          *param_4 = param_3;
          return param_3;
        }
        UVar4 = GetDlgItemInt(param_1,0xcd,(BOOL *)0x0,1);
        param_3 = (**(code **)(*param_2 + 0x28))(param_2,UVar4);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xcd;
          goto LAB_20db30e7;
        }
        UVar4 = GetDlgItemInt(param_1,0xce,(BOOL *)0x0,1);
        param_3 = (**(code **)(*param_2 + 0x30))(param_2,UVar4);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xce;
          goto LAB_20db30e7;
        }
        UVar4 = GetDlgItemInt(param_1,0xcf,(BOOL *)0x0,1);
        param_3 = (**(code **)(*param_2 + 0x38))(param_2,UVar4);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xcf;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd0);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 0x13c))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd0;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd1);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 0x164))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd1;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd3);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 0x1d8))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd3;
          goto LAB_20db30e7;
        }
        UVar4 = IsDlgButtonChecked(param_1,0xdb);
        param_3 = (**(code **)(*param_2 + 0x1d0))(param_2,UVar4);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xdb;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd7);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 0x1c0))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd7;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd5);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 300))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd5;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xd9);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        param_3 = (**(code **)(*param_2 + 0x124))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd9;
          goto LAB_20db30e7;
        }
        UVar4 = 0x147;
        uVar8 = param_3;
        uVar9 = param_3;
        pHVar5 = GetDlgItem(param_1,0xe0);
        LVar6 = SendMessageA(pHVar5,UVar4,uVar8,uVar9);
        if (0xf < LVar6) {
          LVar6 = 99;
        }
        param_3 = (**(code **)(*param_2 + 0x1fc))(param_2,LVar6);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xe0;
          goto LAB_20db30e7;
        }
        (**(code **)(*param_2 + 8))(param_2);
      }
      puVar2 = (undefined4 *)FUN_20dba6a5(this,(uint *)&local_8);
    } while( true );
  }
LAB_20db3104:
  return 0;
}



void FUN_20db32fd(HWND param_1,int *param_2)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM WVar3;
  UINT UVar4;
  LPARAM LVar5;
  WPARAM local_8;
  
  piVar1 = param_2;
  (**(code **)(*param_2 + 0x1c))(param_2,&local_8);
  SetDlgItemInt(param_1,0xcc,local_8,0);
  (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
  SetDlgItemInt(param_1,0xcd,local_8,0);
  (**(code **)(*piVar1 + 0x2c))(piVar1,&local_8);
  SetDlgItemInt(param_1,0xce,local_8,0);
  (**(code **)(*piVar1 + 0x34))(piVar1,&local_8);
  SetDlgItemInt(param_1,0xcf,local_8,0);
  (**(code **)(*piVar1 + 0x138))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd0);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x160))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd1);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x1d4))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd3);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x1cc))(piVar1,&param_2);
  CheckDlgButton(param_1,0xdb,(int)(short)param_2);
  (**(code **)(*piVar1 + 0x1bc))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd7);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x128))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd5);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x120))(piVar1,&local_8);
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd9);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  (**(code **)(*piVar1 + 0x1f8))(piVar1,&local_8);
  if (local_8 == 99) {
    local_8 = 0xf;
  }
  LVar5 = 0;
  UVar4 = 0x14e;
  WVar3 = local_8;
  pHVar2 = GetDlgItem(param_1,0xe0);
  SendMessageA(pHVar2,UVar4,WVar3,LVar5);
  return;
}



undefined4 * __thiscall FUN_20db34ed(void *this,byte param_1)

{
  FUN_20db3515((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20db3515(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20daf800;
  param_1[5] = &PTR_LAB_20daf7c0;
  FUN_20db2e14(param_1);
  return;
}



uint __thiscall FUN_20db3527(void *this,HWND param_1,int *param_2,uint param_3,uint *param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND pHVar4;
  LRESULT LVar5;
  bool bVar6;
  uint uVar7;
  UINT UVar8;
  uint uVar9;
  WPARAM wParam;
  LPARAM lParam;
  CHAR local_210 [512];
  void *local_10;
  BSTR local_c;
  uint local_8;
  
  local_10 = this;
  if (param_2 == (int *)0x110) {
    FUN_20db6b13(param_1,0xde,0xbbe);
    FUN_20db6b13(param_1,0xd2,0xbbf);
    FUN_20db6b13(param_1,0xd8,0xbc0);
    FUN_20db6b13(param_1,0xd4,0xbbe);
    FUN_20db6b13(param_1,0xd6,0xbbf);
    FUN_20db6b13(param_1,0xda,0xbc1);
  }
  else if (param_2 == (int *)0x111) {
    sVar1 = (short)(param_3 >> 0x10);
    switch(param_3 & 0xffff) {
    case 0xd2:
    case 0xd4:
    case 0xd6:
    case 0xd8:
    case 0xda:
    case 0xde:
      bVar6 = sVar1 == 1;
      break;
    default:
      goto LAB_20db3771;
    case 0xdc:
      bVar6 = sVar1 == 0;
      break;
    case 0xdd:
    case 0xdf:
      bVar6 = sVar1 == 0x300;
    }
    if (bVar6) {
      FUN_20dba720((int)this);
    }
  }
  else if (param_2 == (int *)0x464) {
    puVar2 = (undefined4 *)FUN_20dba695(this,&local_8);
    if ((puVar2 != (undefined4 *)0x0) &&
       (iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da17f8,&param_2), -1 < iVar3)) {
      FUN_20db3918(param_1,param_2);
      (**(code **)(*param_2 + 8))(param_2);
      return 1;
    }
  }
  else if (param_2 == (int *)0x465) {
    puVar2 = (undefined4 *)FUN_20dba695(this,&local_8);
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 1;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da17f8,&param_2);
      if (-1 < iVar3) {
        lParam = 0;
        wParam = 0;
        UVar8 = 0x147;
        pHVar4 = GetDlgItem(param_1,0xde);
        LVar5 = SendMessageA(pHVar4,UVar8,wParam,lParam);
        param_3 = (**(code **)(*param_2 + 0x16c))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xde;
LAB_20db3754:
          pHVar4 = GetDlgItem(param_1,iVar3);
          SetFocus(pHVar4);
          (**(code **)(*param_2 + 8))(param_2);
          *param_4 = param_3;
          return param_3;
        }
        UVar8 = 0x147;
        uVar7 = param_3;
        uVar9 = param_3;
        pHVar4 = GetDlgItem(param_1,0xd2);
        LVar5 = SendMessageA(pHVar4,UVar8,uVar7,uVar9);
        param_3 = (**(code **)(*param_2 + 0x10c))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd2;
          goto LAB_20db3754;
        }
        UVar8 = 0x147;
        uVar7 = param_3;
        uVar9 = param_3;
        pHVar4 = GetDlgItem(param_1,0xd8);
        LVar5 = SendMessageA(pHVar4,UVar8,uVar7,uVar9);
        param_3 = (**(code **)(*param_2 + 0x1c8))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd8;
          goto LAB_20db3754;
        }
        UVar8 = GetDlgItemInt(param_1,0xdf,(BOOL *)0x0,0);
        param_3 = (**(code **)(*param_2 + 0x15c))(param_2,UVar8);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xdf;
          goto LAB_20db3754;
        }
        UVar8 = 0x147;
        uVar7 = param_3;
        uVar9 = param_3;
        pHVar4 = GetDlgItem(param_1,0xd4);
        LVar5 = SendMessageA(pHVar4,UVar8,uVar7,uVar9);
        param_3 = (**(code **)(*param_2 + 0x174))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd4;
          goto LAB_20db3754;
        }
        UVar8 = 0x147;
        uVar7 = param_3;
        uVar9 = param_3;
        pHVar4 = GetDlgItem(param_1,0xd6);
        LVar5 = SendMessageA(pHVar4,UVar8,uVar7,uVar9);
        param_3 = (**(code **)(*param_2 + 0x114))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xd6;
          goto LAB_20db3754;
        }
        UVar8 = 0x147;
        uVar7 = param_3;
        uVar9 = param_3;
        pHVar4 = GetDlgItem(param_1,0xda);
        LVar5 = SendMessageA(pHVar4,UVar8,uVar7,uVar9);
        param_3 = (**(code **)(*param_2 + 0x20c))(param_2,LVar5);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xda;
          goto LAB_20db3754;
        }
        UVar8 = IsDlgButtonChecked(param_1,0xdc);
        param_3 = (**(code **)(*param_2 + 0xbc))(param_2,UVar8);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xdc;
          goto LAB_20db3754;
        }
        GetDlgItemTextA(param_1,0xdd,local_210,0x200);
        local_c = FUN_20da95d3(local_210,(BSTR)0x0);
        param_3 = (**(code **)(*param_2 + 0x44))(param_2,local_c);
        SysFreeString(local_c);
        if (param_3 != 0) {
          FUN_20db6b8e(param_3);
          iVar3 = 0xdd;
          goto LAB_20db3754;
        }
        (**(code **)(*param_2 + 8))(param_2);
      }
      puVar2 = (undefined4 *)FUN_20dba6a5(local_10,&local_8);
    } while( true );
  }
LAB_20db3771:
  return 0;
}



void FUN_20db3918(HWND param_1,int *param_2)

{
  uint cbMultiByte;
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  WPARAM WVar4;
  UINT UVar5;
  LPARAM LVar6;
  LPSTR local_8c [31];
  byte local_10;
  LPCWSTR local_c;
  WPARAM local_8;
  
  piVar1 = param_2;
  (**(code **)(*param_2 + 0x168))(param_2,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  WVar4 = local_8;
  pHVar2 = GetDlgItem(param_1,0xde);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  (**(code **)(*piVar1 + 0x108))(piVar1,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  WVar4 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd2);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  (**(code **)(*piVar1 + 0x1c4))(piVar1,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  WVar4 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd8);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  (**(code **)(*piVar1 + 0x158))(piVar1,&local_8);
  SetDlgItemInt(param_1,0xdf,local_8,0);
  (**(code **)(*piVar1 + 0x170))(piVar1,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  WVar4 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd4);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  (**(code **)(*piVar1 + 0x110))(piVar1,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  WVar4 = local_8;
  pHVar2 = GetDlgItem(param_1,0xd6);
  SendMessageA(pHVar2,UVar5,WVar4,LVar6);
  (**(code **)(*piVar1 + 0x208))(piVar1,&local_8);
  LVar6 = 0;
  UVar5 = 0x14e;
  pHVar2 = GetDlgItem(param_1,0xda);
  SendMessageA(pHVar2,UVar5,local_8,LVar6);
  (**(code **)(*piVar1 + 0xb8))(piVar1,&param_2);
  CheckDlgButton(param_1,0xdc,(int)(short)param_2);
  (**(code **)(*piVar1 + 0x40))(piVar1,&local_c);
  iVar3 = lstrlenW(local_c);
  cbMultiByte = iVar3 * 2 + 2;
  FUN_20da29fd(local_8c,cbMultiByte);
  WideCharToMultiByte(0,0,local_c,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  SetDlgItemTextA(param_1,0xdd,local_8c[0]);
  SysFreeString(local_c);
  if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
    HeapFree(DAT_20dc4190,0,local_8c[0]);
  }
  return;
}



undefined4 FUN_20db3ad9(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x128);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3b4f(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 300);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3bc5(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x130);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3bfa(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x134);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3c2f(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x138);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3ca8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x13c);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db3d21(int param_1,LPCWSTR param_2)

{
  void *this;
  uint cbMultiByte;
  LPCWSTR lpString;
  int iVar1;
  undefined4 uVar2;
  LPSTR local_94 [31];
  byte local_18;
  tagRECT local_14;
  
  lpString = param_2;
  if (param_2 == (LPCWSTR)0x0) {
    lpString = L"";
  }
  iVar1 = lstrlenW(lpString);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_20da29fd(local_94,cbMultiByte);
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = L"";
  }
  WideCharToMultiByte(0,0,param_2,-1,local_94[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((*(short *)(param_1 + 200) == 0) ||
     ((*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x138) &&
      (*(int *)(param_1 + 0x134) == *(int *)(param_1 + 0x13c))))) {
    this = (void *)(param_1 + -0xd4);
    if (*(short *)(param_1 + 0xd2) == 0) {
      iVar1 = FUN_20da98db(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),local_94[0],-1);
    }
    else {
      iVar1 = FUN_20db1af2(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),local_94[0],-1);
    }
    if (iVar1 != 0) goto LAB_20db3e26;
    *(undefined4 *)(param_1 + 0x140) = 1;
    iVar1 = FUN_20daa925(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134));
    if (iVar1 == 0) goto LAB_20db3dd3;
    FUN_20da616d(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),&local_14.left);
  }
  else {
    iVar1 = FUN_20db1062((void *)(param_1 + -0xd4),local_94[0],-1);
    if (iVar1 != 0) {
LAB_20db3e26:
      uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),iVar1);
      if (local_94[0] == (LPCSTR)0x0) {
        return uVar2;
      }
      if ((local_18 & 1) == 0) {
        return uVar2;
      }
      HeapFree(DAT_20dc4190,0,local_94[0]);
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x140) = 1;
    FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
  }
  FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
LAB_20db3dd3:
  if ((local_94[0] != (LPCSTR)0x0) && ((local_18 & 1) != 0)) {
    HeapFree(DAT_20dc4190,0,local_94[0]);
  }
  return 0;
}



undefined4 FUN_20db3f24(int param_1,int param_2,int param_3,LPCWSTR param_4)

{
  void *this;
  uint cbMultiByte;
  LPCWSTR lpString;
  int iVar1;
  undefined4 uVar2;
  LPSTR local_94 [31];
  byte local_18;
  RECT local_14;
  
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x70) <= param_2)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x74) <= param_3)) {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),3);
  }
  else {
    lpString = param_4;
    if (param_4 == (LPCWSTR)0x0) {
      lpString = L"";
    }
    iVar1 = lstrlenW(lpString);
    cbMultiByte = iVar1 * 2 + 2;
    FUN_20da29fd(local_94,cbMultiByte);
    if (param_4 == (LPCWSTR)0x0) {
      param_4 = L"";
    }
    WideCharToMultiByte(0,0,param_4,-1,local_94[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    this = (void *)(param_1 + -0xd4);
    iVar1 = FUN_20da98db(this,param_2,param_3,local_94[0],-1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 1;
      iVar1 = FUN_20daa925(this,param_2,param_3);
      if (iVar1 != 0) {
        FUN_20da616d(this,param_2,param_3,&local_14.left);
        FUN_20da3c27(this,&local_14);
      }
      if ((local_94[0] != (LPCSTR)0x0) && ((local_18 & 1) != 0)) {
        HeapFree(DAT_20dc4190,0,local_94[0]);
      }
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_20da86e7(this,iVar1);
      if ((local_94[0] != (LPCSTR)0x0) && ((local_18 & 1) != 0)) {
        HeapFree(DAT_20dc4190,0,local_94[0]);
      }
    }
  }
  return uVar2;
}



undefined4 FUN_20db40b4(int param_1,LONG *param_2)

{
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(param_1 + -0x34),&local_c);
  FUN_20db0d24((void *)(param_1 + -0xd4),&local_c.x,1);
  *param_2 = local_c.y;
  return 0;
}



undefined4 FUN_20db40f4(int param_1,LONG *param_2)

{
  tagPOINT local_c;
  
  GetCursorPos(&local_c);
  ScreenToClient(*(HWND *)(param_1 + -0x34),&local_c);
  FUN_20db0d24((void *)(param_1 + -0xd4),&local_c.x,1);
  *param_2 = local_c.x;
  return 0;
}



undefined4 FUN_20db4134(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  tagRECT local_14;
  
  FUN_20db0260((void *)(param_1 + -0xd4),&local_14);
  uVar1 = FUN_20db6aa1(local_14.left);
  *param_2 = uVar1;
  return 0;
}



undefined4 FUN_20db4160(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  tagRECT local_14;
  
  FUN_20db0260((void *)(param_1 + -0xd4),&local_14);
  uVar1 = FUN_20db6ada(local_14.top);
  *param_2 = uVar1;
  return 0;
}



undefined4 FUN_20db418c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  tagRECT local_14;
  
  FUN_20db0260((void *)(param_1 + -0xd4),&local_14);
  uVar1 = FUN_20db6aa1(local_14.right - local_14.left);
  *param_2 = uVar1;
  return 0;
}



undefined4 FUN_20db41bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  tagRECT local_14;
  
  FUN_20db0260((void *)(param_1 + -0xd4),&local_14);
  uVar1 = FUN_20db6aa1(local_14.bottom - local_14.top);
  *param_2 = uVar1;
  return 0;
}



undefined4 FUN_20db41ec(int param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar5 == 0) {
    iVar2 = *(int *)(param_1 + 0x130);
    if ((iVar2 < 0) || (*(int *)(param_1 + 0x70) <= iVar2)) {
      uVar6 = 0xd;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x134);
      if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x74))) {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x114) + 0xc + iVar2 * 0x10) + 8 + iVar3 * 0xc)
        ;
        if ((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + 8), cVar1 == 'd')) {
          sVar4 = 0;
        }
        else {
          sVar4 = (short)cVar1;
        }
        *param_2 = sVar4;
        return 0;
      }
      uVar6 = 0xe;
    }
  }
  else {
    uVar6 = 5;
  }
  uVar6 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar6);
  return uVar6;
}



undefined4 FUN_20db4268(int param_1,short param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  tagRECT local_14;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x70) <= iVar2)) {
    uVar3 = 0xd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x74) <= iVar1)) {
      uVar3 = 0xe;
    }
    else {
      if ((-1 < param_2) && (param_2 < 10)) {
        if ((*(short *)(param_1 + 200) == 0) ||
           ((iVar2 == *(int *)(param_1 + 0x138) && (iVar1 == *(int *)(param_1 + 0x13c))))) {
          this = (void *)(param_1 + -0xd4);
          FUN_20daa870(this,iVar2,iVar1,2,(int)param_2,(LOGFONTA *)0x0);
          iVar2 = FUN_20daa925(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134));
          if (iVar2 == 0) {
            return 0;
          }
          FUN_20da616d(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),&local_14.left);
        }
        else {
          FUN_20db0ed9((void *)(param_1 + -0xd4),2,(int)param_2,(LOGFONTA *)0x0);
          FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
        }
        FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
        return 0;
      }
      uVar3 = 10;
    }
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 FUN_20db4377(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar3 == 0) {
    iVar4 = *(int *)(param_1 + 0x130);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x70) <= iVar4)) {
      uVar5 = 0xd;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x134);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x74))) {
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x114) + 0xc + iVar4 * 0x10) + 8 + iVar2 * 0xc)
        ;
        if ((iVar4 == 0) || (cVar1 = *(char *)(iVar4 + 9), cVar1 == 'd')) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)cVar1;
        }
        *param_2 = iVar4;
        return 0;
      }
      uVar5 = 0xe;
    }
  }
  else {
    uVar5 = 5;
  }
  uVar5 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar5);
  return uVar5;
}



undefined4 FUN_20db43f2(int param_1,int param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  tagRECT local_14;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x70) <= iVar2)) {
    uVar3 = 0xd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x74) <= iVar1)) {
      uVar3 = 0xe;
    }
    else {
      if ((-1 < param_2) && (param_2 < 5)) {
        if ((*(short *)(param_1 + 200) == 0) ||
           ((iVar2 == *(int *)(param_1 + 0x138) && (iVar1 == *(int *)(param_1 + 0x13c))))) {
          this = (void *)(param_1 + -0xd4);
          FUN_20daa870(this,iVar2,iVar1,3,param_2,(LOGFONTA *)0x0);
          iVar2 = FUN_20daa925(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134));
          if (iVar2 == 0) {
            return 0;
          }
          FUN_20da616d(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),&local_14.left);
        }
        else {
          FUN_20db0ed9((void *)(param_1 + -0xd4),3,param_2,(LOGFONTA *)0x0);
          FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
        }
        FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
        return 0;
      }
      uVar3 = 2;
    }
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 FUN_20db44f8(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar4 == 0) {
    iVar1 = *(int *)(param_1 + 0x130);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x70) <= iVar1)) {
      uVar5 = 0xd;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x134);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x74))) {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x114) + 0xc + iVar1 * 0x10) + 8 + iVar2 * 0xc)
        ;
        if (iVar1 == 0) {
          sVar3 = 0;
        }
        else {
          sVar3 = (short)*(char *)(iVar1 + 10);
        }
        *param_2 = sVar3;
        return 0;
      }
      uVar5 = 0xe;
    }
  }
  else {
    uVar5 = 5;
  }
  uVar5 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar5);
  return uVar5;
}



undefined4 FUN_20db456e(int param_1,short param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  tagRECT local_14;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x70) <= iVar2)) {
    uVar3 = 0xd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x74) <= iVar1)) {
      uVar3 = 0xe;
    }
    else {
      if ((-1 < param_2) && (param_2 < 0xb)) {
        if ((*(short *)(param_1 + 200) == 0) ||
           ((iVar2 == *(int *)(param_1 + 0x138) && (iVar1 == *(int *)(param_1 + 0x13c))))) {
          this = (void *)(param_1 + -0xd4);
          FUN_20daa870(this,iVar2,iVar1,4,(int)param_2,(LOGFONTA *)0x0);
          iVar2 = FUN_20daa925(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134));
          if (iVar2 == 0) {
            return 0;
          }
          FUN_20da616d(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),&local_14.left);
        }
        else {
          FUN_20db0ed9((void *)(param_1 + -0xd4),4,(int)param_2,(LOGFONTA *)0x0);
          FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
        }
        FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
        return 0;
      }
      uVar3 = 10;
    }
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 FUN_20db46d4(int param_1,LPCWSTR param_2)

{
  void *this;
  uint cbMultiByte;
  LPCWSTR lpString;
  int iVar1;
  undefined4 uVar2;
  LPSTR local_94 [31];
  byte local_18;
  tagRECT local_14;
  
  lpString = param_2;
  if (param_2 == (LPCWSTR)0x0) {
    lpString = L"";
  }
  iVar1 = lstrlenW(lpString);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_20da29fd(local_94,cbMultiByte);
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = L"";
  }
  WideCharToMultiByte(0,0,param_2,-1,local_94[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  this = (void *)(param_1 + -0xd4);
  iVar1 = FUN_20db118d(this,local_94[0]);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 1;
    FUN_20da92f2(this,&local_14,1);
    FUN_20da3c27(this,&local_14);
    if ((local_94[0] != (LPSTR)0x0) && ((local_18 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_94[0]);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,iVar1);
    if ((local_94[0] != (LPSTR)0x0) && ((local_18 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_94[0]);
    }
  }
  return uVar2;
}



undefined4 FUN_20db47b8(int param_1,short param_2)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || (9 < param_2)) {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),2);
  }
  else {
    this = (void *)(param_1 + -0xd4);
    iVar1 = FUN_20db672f(this,param_2);
    if (iVar1 != 0) {
      FUN_20da86e7(this,2);
    }
    FUN_20da3c81(this);
    *(undefined4 *)(param_1 + 0x140) = 1;
    FUN_20da3c27(this,(RECT *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_20db4831(int param_1,undefined4 *param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = param_1;
  this = (void *)(param_1 + -0xd4);
  uVar4 = FUN_20da63fe(this);
  if (uVar4 == 0) {
    iVar1 = *(int *)(iVar3 + 0x130);
    if ((iVar1 < 0) || (*(int *)(iVar3 + 0x70) <= iVar1)) {
      uVar5 = 0xd;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x134);
      if ((-1 < iVar2) && (iVar2 < *(int *)(iVar3 + 0x74))) {
        iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x114) + 0xc + iVar1 * 0x10) + 8 + iVar2 * 0xc);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 0x10) == 0)) {
          FUN_20db6ea2(&param_1);
          FUN_20db6eb5(&param_1);
          uVar5 = FUN_20db6ef3(&param_1);
          *param_2 = uVar5;
          FUN_20db6ea8(&param_1);
        }
        else {
          uVar5 = FUN_20db6ef3((int *)(iVar3 + 0x10));
          *param_2 = uVar5;
        }
        return 0;
      }
      uVar5 = 0xe;
    }
  }
  else {
    uVar5 = 5;
  }
  uVar5 = FUN_20da86e7(this,uVar5);
  return uVar5;
}



undefined4 FUN_20db48db(int param_1,LOGFONTA *param_2)

{
  void *this;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  tagRECT local_14;
  
  iVar2 = *(int *)(param_1 + 0x130);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x70) <= iVar2)) {
    uVar3 = 0xd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x74))) {
      if ((*(short *)(param_1 + 200) == 0) ||
         ((iVar2 == *(int *)(param_1 + 0x138) && (iVar1 == *(int *)(param_1 + 0x13c))))) {
        this = (void *)(param_1 + -0xd4);
        FUN_20daa870(this,iVar2,iVar1,6,0,param_2);
        iVar2 = FUN_20daa925(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134));
        if (iVar2 == 0) {
          return 0;
        }
        FUN_20da616d(this,*(int *)(param_1 + 0x130),*(int *)(param_1 + 0x134),&local_14.left);
      }
      else {
        FUN_20db0ed9((void *)(param_1 + -0xd4),6,0,param_2);
        FUN_20da92f2((void *)(param_1 + -0xd4),&local_14,1);
      }
      FUN_20da3c27((void *)(param_1 + -0xd4),&local_14);
      return 0;
    }
    uVar3 = 0xe;
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



int FUN_20db49cc(int param_1,undefined4 *param_2)

{
  int *piVar1;
  HBITMAP ho;
  uint uVar2;
  HDC hdc;
  HDC hdc_00;
  int iVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 local_38;
  HBITMAP local_34;
  undefined4 local_30;
  tagRECT local_28;
  undefined4 local_18;
  HGDIOBJ local_14;
  int *local_10;
  HBITMAP local_c;
  int local_8;
  
  iVar3 = param_1;
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    do {
      uVar2 = FUN_20da5cca((void *)(param_1 + -0xd4),iVar4);
      local_8 = local_8 + uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x78));
  }
  iVar4 = *(int *)(param_1 + 0x128);
  if (iVar4 < *(int *)(param_1 + 0x70)) {
    do {
      uVar2 = FUN_20da5cca((void *)(param_1 + -0xd4),iVar4);
      local_8 = local_8 + uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x70));
  }
  iVar4 = 0;
  piVar1 = (int *)(param_1 + 0x7c);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      uVar2 = FUN_20da5d02((void *)(iVar3 + -0xd4),iVar4);
      param_1 = param_1 + uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar3 + 0x7c));
  }
  iVar4 = *(int *)(iVar3 + 300);
  if (iVar4 < *(int *)(iVar3 + 0x74)) {
    do {
      uVar2 = FUN_20da5d02((void *)(iVar3 + -0xd4),iVar4);
      param_1 = param_1 + uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar3 + 0x74));
  }
  if (*(short *)(iVar3 + 0xd6) == 1) {
    hdc_00 = CreateCompatibleDC((HDC)0x0);
    if (hdc_00 == (HDC)0x0) goto LAB_20db4b8b;
    local_c = CreateBitmap(param_1,local_8,1,1,(void *)0x0);
  }
  else {
    hdc = GetDC(*(HWND *)(iVar3 + -0x34));
    hdc_00 = CreateCompatibleDC(hdc);
    local_c = CreateCompatibleBitmap(hdc,param_1,local_8);
    ReleaseDC(*(HWND *)(iVar3 + -0x34),hdc);
  }
  if ((hdc_00 != (HDC)0x0) && (local_c != (HBITMAP)0x0)) {
    local_14 = SelectObject(hdc_00,local_c);
    SetRect(&local_28,0,0,param_1,local_8);
    FUN_20da64a0((void *)(iVar3 + -0xd4),hdc_00,&local_28.left,0,0);
    SelectObject(hdc_00,local_14);
    DeleteDC(hdc_00);
    ho = local_c;
    local_30 = 0;
    local_38 = 1;
    local_3c = 0x14;
    local_34 = local_c;
    iVar3 = OleCreatePictureIndirect(&local_3c,&DAT_20dab780,1,&local_10);
    if (-1 < iVar3) {
      iVar3 = (**(code **)*local_10)(local_10,&DAT_20dab770,&local_18);
      piVar1 = local_10;
      if (local_10 != (int *)0x0) {
        local_10 = (int *)0x0;
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      if (-1 < iVar3) {
        *param_2 = local_18;
        return iVar3;
      }
    }
    DeleteObject(ho);
    return iVar3;
  }
LAB_20db4b8b:
  iVar3 = FUN_20da86e7((void *)(iVar3 + -0xd4),1);
  return iVar3;
}



undefined4 FUN_20db4b9a(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  tagRECT local_14;
  
  if (param_2 == 0x110) {
    GetWindowRect(param_1,&local_14);
    iVar1 = GetSystemMetrics(0);
    iVar2 = GetSystemMetrics(1);
    MoveWindow(param_1,(iVar1 - (local_14.right - local_14.left)) / 2,
               (iVar2 - (local_14.bottom - local_14.top)) / 3,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
  }
  else {
    if ((param_2 != 0x111) || ((param_3 != 1 && (param_3 != 2)))) {
      return 0;
    }
    EndDialog(param_1,1);
  }
  return 1;
}



undefined4 FUN_20db4d82(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 < -1) || (*(int *)(param_1 + 0x74) <= param_2)) {
    uVar3 = 0xe;
  }
  else {
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = 0;
      param_2 = *(int *)(param_1 + 0x74) + -1;
    }
    if (-2 < param_3) {
      if (param_3 < 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = FUN_20db6a68(param_3);
      }
      if (iVar2 <= param_2) {
        iVar1 = iVar2 * 0xc;
        iVar2 = (param_2 - iVar2) + 1;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x118) + iVar1) = uVar3;
          iVar1 = iVar1 + 0xc;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_20da3c81((void *)(param_1 + -0xd4));
      FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
      return 0;
    }
    uVar3 = 0x11;
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 FUN_20db4e4b(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 < -1) || (*(int *)(param_1 + 0x70) <= param_2)) {
    uVar3 = 0xd;
  }
  else {
    iVar2 = param_2;
    if (param_2 < 0) {
      param_2 = 0;
      iVar2 = *(int *)(param_1 + 0x70) + -1;
    }
    if (-2 < param_3) {
      if (param_3 < 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = FUN_20da41db(param_3);
      }
      if (param_2 <= iVar2) {
        iVar1 = param_2 << 4;
        iVar2 = (iVar2 - param_2) + 1;
        do {
          *(undefined4 *)(*(int *)(param_1 + 0x114) + iVar1) = uVar3;
          iVar1 = iVar1 + 0x10;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_20da3c81((void *)(param_1 + -0xd4));
      FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
      return 0;
    }
    uVar3 = 0x10;
  }
  uVar3 = FUN_20da86e7((void *)(param_1 + -0xd4),uVar3);
  return uVar3;
}



undefined4 FUN_20db4fed(int param_1,int param_2,int param_3)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (void *)(param_1 + -0xd4);
  iVar1 = FUN_20db67fa(this,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 1;
    FUN_20da3c27(this,(RECT *)0x0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,iVar1);
  }
  return uVar2;
}



undefined4 FUN_20db5030(int param_1,int param_2,int param_3)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (void *)(param_1 + -0xd4);
  iVar1 = FUN_20db68ac(this,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x140) = 1;
    FUN_20da3c27(this,(RECT *)0x0);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,iVar1);
  }
  return uVar2;
}



undefined4 FUN_20db514f(int param_1,LPCWSTR param_2,short param_3)

{
  uint cbMultiByte;
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  LPCWSTR lpString;
  undefined4 uVar4;
  LPSTR local_98 [31];
  byte local_1c;
  VARIANTARG local_18;
  void *local_8;
  
  iVar1 = param_1;
  if (param_3 == 10) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  else {
    VariantInit(&local_18);
    HVar2 = VariantChangeType(&local_18,(VARIANTARG *)&param_3,0,3);
    if (HVar2 != 0) {
      uVar4 = 2;
      goto LAB_20db51b7;
    }
    param_1 = local_18.n1._8_4_;
  }
  if ((param_1 < 0) || (*(int *)(iVar1 + 0x70) < param_1)) {
    uVar4 = 8;
  }
  else if (param_1 < *(int *)(iVar1 + 0x78)) {
    uVar4 = 7;
  }
  else {
    local_8 = (void *)(iVar1 + -0xd4);
    iVar3 = FUN_20db0f5b(local_8,param_1);
    if (iVar3 == 0) {
      lpString = param_2;
      if (param_2 == (LPCWSTR)0x0) {
        lpString = L"";
      }
      iVar3 = lstrlenW(lpString);
      cbMultiByte = iVar3 * 2 + 2;
      FUN_20da29fd(local_98,cbMultiByte);
      if (param_2 == (LPCWSTR)0x0) {
        param_2 = L"";
      }
      WideCharToMultiByte(0,0,param_2,-1,local_98[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      FUN_20db10da(local_8,local_98[0],param_1,0,*(int *)(iVar1 + 0x74) + -1);
      FUN_20da3c81(local_8);
      FUN_20da3c27(local_8,(RECT *)0x0);
      if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
        HeapFree(DAT_20dc4190,0,local_98[0]);
      }
      return 0;
    }
    uVar4 = 1;
  }
LAB_20db51b7:
  uVar4 = FUN_20da86e7((void *)(iVar1 + -0xd4),uVar4);
  return uVar4;
}



undefined4 __thiscall FUN_20db52e1(void *this,LPVOID param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  HANDLE h;
  void *local_8;
  
  iVar3 = *(int *)((int)this + 0x204);
  if ((((iVar3 < 0) || (iVar1 = *(int *)((int)this + 0x208), iVar1 < 0)) ||
      (*(int *)((int)this + 0x144) <= iVar3)) ||
     ((*(int *)((int)this + 0x148) <= iVar1 ||
      (((iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + iVar3 * 0x10) + 8 +
                         iVar1 * 0xc), local_8 = this, iVar3 == 0 ||
        (h = *(HANDLE *)(iVar3 + 0xc), h == (HANDLE)0x0)) &&
       ((piVar2 = *(int **)((int)this + 0x224), piVar2 == (int *)0x0 ||
        (iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,&local_8), h = local_8, iVar3 != 0)))))))) {
    uVar4 = 0;
  }
  else {
    GetObjectA(h,0x3c,param_1);
    uVar4 = 1;
  }
  return uVar4;
}



void __thiscall FUN_20db5363(void *this,LOGFONTA *param_1)

{
  int iVar1;
  tagRECT local_14;
  
  if ((*(short *)((int)this + 0x19c) == 0) ||
     ((*(int *)((int)this + 0x204) == *(int *)((int)this + 0x20c) &&
      (*(int *)((int)this + 0x208) == *(int *)((int)this + 0x210))))) {
    FUN_20daa870(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),5,0,param_1);
    iVar1 = FUN_20daa925(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208));
    if (iVar1 == 0) {
      return;
    }
    FUN_20da616d(this,*(int *)((int)this + 0x204),*(int *)((int)this + 0x208),&local_14.left);
  }
  else {
    FUN_20db0ed9(this,5,0,param_1);
    FUN_20da92f2(this,&local_14,1);
  }
  FUN_20da3c27(this,&local_14);
  return;
}



int FUN_20db5412(int param_1,undefined4 *param_2)

{
  void *this;
  uint uVar1;
  int iVar2;
  LPWSTR pWVar3;
  CHAR *pCVar4;
  undefined1 local_40 [28];
  CHAR local_24 [32];
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    iVar2 = FUN_20db52e1(this,local_40);
    if (iVar2 == 0) {
      pCVar4 = "";
    }
    else {
      pCVar4 = local_24;
    }
    pWVar3 = FUN_20da95d3(pCVar4,(BSTR)0x0);
    *param_2 = pWVar3;
    iVar2 = (-(uint)(pWVar3 != (LPWSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  else {
    iVar2 = FUN_20da86e7(this,5);
  }
  return iVar2;
}



undefined4 FUN_20db5473(int param_1,LPCWSTR param_2)

{
  uint cbMultiByte;
  LPSTR lpString2;
  LPCWSTR pWVar1;
  int iVar2;
  HDC hdc;
  LOGFONTA *pLVar3;
  tagLOGFONTA local_fc;
  LOGFONTA local_c0;
  LPSTR local_84 [31];
  byte local_8;
  
  pWVar1 = param_2;
  if (param_2 == (LPCWSTR)0x0) {
    pWVar1 = L"";
  }
  iVar2 = lstrlenW(pWVar1);
  cbMultiByte = iVar2 * 2 + 2;
  FUN_20da29fd(local_84,cbMultiByte);
  pWVar1 = L"";
  if (param_2 != (LPCWSTR)0x0) {
    pWVar1 = param_2;
  }
  WideCharToMultiByte(0,0,pWVar1,-1,local_84[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  lpString2 = local_84[0];
  if ((local_84[0] == (LPCSTR)0x0) || (*local_84[0] == '\0')) {
    pLVar3 = (LOGFONTA *)0x0;
  }
  else {
    iVar2 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_c0);
    if (iVar2 == 0) goto LAB_20db5570;
    lstrcpynA(local_c0.lfFaceName,lpString2,0x20);
    local_fc.lfCharSet = '\x01';
    iVar2 = GetSystemMetrics(0x4a);
    local_fc.lfPitchAndFamily = -(iVar2 != 0) & 8;
    lstrcpynA(local_fc.lfFaceName,local_c0.lfFaceName,0x20);
    hdc = GetDC(*(HWND *)(param_1 + -0x34));
    EnumFontFamiliesExA(hdc,&local_fc,(FONTENUMPROCA)&LAB_20db5edb,(LPARAM)&local_c0.lfCharSet,0);
    ReleaseDC(*(HWND *)(param_1 + -0x34),hdc);
    pLVar3 = &local_c0;
  }
  FUN_20db5363((void *)(param_1 + -0xd4),pLVar3);
LAB_20db5570:
  if ((local_84[0] != (LPCSTR)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_20dc4190,0,local_84[0]);
  }
  return 0;
}



undefined4 FUN_20db55a0(int param_1,float *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40 [15];
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0.0;
    iVar3 = FUN_20db52e1(this,local_40);
    if (iVar3 != 0) {
      iVar3 = FUN_20db6ada(-local_40[0]);
      *param_2 = (float)iVar3 * 0.05;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db55ff(int param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  LOGFONTA *pLVar3;
  LOGFONTA local_40;
  
  if (param_2 == 0.0) {
    pLVar3 = (LOGFONTA *)0x0;
  }
  else {
    iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = __ftol();
    local_40.lfHeight = FUN_20da41db((int)lVar2);
    local_40.lfHeight = -local_40.lfHeight;
    pLVar3 = &local_40;
  }
  FUN_20db5363((void *)(param_1 + -0xd4),pLVar3);
  return 0;
}



undefined4 FUN_20db5665(int param_1,undefined2 *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [16];
  int local_30;
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0;
    iVar3 = FUN_20db52e1(this,local_40);
    if ((iVar3 != 0) && (699 < local_30)) {
      *param_2 = 0xffff;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db56b7(int param_1,short param_2)

{
  int iVar1;
  LOGFONTA local_40;
  
  iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
  if (iVar1 != 0) {
    local_40.lfWeight = (-(uint)(param_2 != 0) & 300) + 400;
    FUN_20db5363((void *)(param_1 + -0xd4),&local_40);
  }
  return 0;
}



undefined4 FUN_20db56fe(int param_1,undefined2 *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [20];
  char local_2c;
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0;
    iVar3 = FUN_20db52e1(this,local_40);
    if ((iVar3 != 0) && (local_2c != '\0')) {
      *param_2 = 0xffff;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db574d(int param_1,short param_2)

{
  int iVar1;
  LOGFONTA local_40;
  
  iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
  if (iVar1 != 0) {
    local_40.lfItalic = param_2 != 0;
    FUN_20db5363((void *)(param_1 + -0xd4),&local_40);
  }
  return 0;
}



undefined4 FUN_20db578a(int param_1,undefined2 *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [21];
  char local_2b;
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0;
    iVar3 = FUN_20db52e1(this,local_40);
    if ((iVar3 != 0) && (local_2b != '\0')) {
      *param_2 = 0xffff;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db57d9(int param_1,short param_2)

{
  int iVar1;
  LOGFONTA local_40;
  
  iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
  if (iVar1 != 0) {
    local_40.lfUnderline = param_2 != 0;
    FUN_20db5363((void *)(param_1 + -0xd4),&local_40);
  }
  return 0;
}



undefined4 FUN_20db5816(int param_1,undefined2 *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [22];
  char local_2a;
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0;
    iVar3 = FUN_20db52e1(this,local_40);
    if ((iVar3 != 0) && (local_2a != '\0')) {
      *param_2 = 0xffff;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db5865(int param_1,short param_2)

{
  int iVar1;
  LOGFONTA local_40;
  
  iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
  if (iVar1 != 0) {
    local_40.lfStrikeOut = param_2 != 0;
    FUN_20db5363((void *)(param_1 + -0xd4),&local_40);
  }
  return 0;
}



undefined4 FUN_20db58a2(int param_1,float *param_2)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [4];
  int local_3c;
  
  this = (void *)(param_1 + -0xd4);
  uVar1 = FUN_20da63fe(this);
  if (uVar1 == 0) {
    *param_2 = 0.0;
    iVar3 = FUN_20db52e1(this,local_40);
    if (iVar3 != 0) {
      iVar3 = FUN_20db6ada(-local_3c);
      *param_2 = (float)iVar3 * 0.05;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7(this,5);
  }
  return uVar2;
}



undefined4 FUN_20db5901(int param_1)

{
  int iVar1;
  longlong lVar2;
  LOGFONTA local_40;
  
  iVar1 = FUN_20db52e1((void *)(param_1 + -0xd4),&local_40);
  if (iVar1 != 0) {
    lVar2 = __ftol();
    local_40.lfWidth = FUN_20da41db((int)lVar2);
    local_40.lfWidth = -local_40.lfWidth;
    FUN_20db5363((void *)(param_1 + -0xd4),&local_40);
  }
  return 0;
}



undefined4 FUN_20db594c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_20da63fe((void *)(param_1 + -0xd4));
  if (uVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x148);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_20da86e7((void *)(param_1 + -0xd4),5);
  }
  return uVar2;
}



undefined4 FUN_20db5a4a(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x70) <= param_2)) {
    uVar1 = FUN_20da86e7((void *)(param_1 + -0xd4),0xd);
  }
  else {
    FUN_20da616d((void *)(param_1 + -0xd4),param_2,0,&local_14);
    uVar1 = FUN_20db6ada(local_10);
    *param_3 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_20db5a94(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_14 [4];
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x74) <= param_2)) {
    uVar1 = FUN_20da86e7((void *)(param_1 + -0xd4),0xe);
  }
  else {
    FUN_20da616d((void *)(param_1 + -0xd4),0,param_2,local_14);
    uVar1 = FUN_20db6aa1(local_14[0]);
    *param_3 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



int * FUN_20db5b9d(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x10))(piVar1,param_2);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return piVar1;
}



// WARNING: Type propagation algorithm not settling

undefined4 FUN_20db5bd6(int param_1,undefined4 *param_2)

{
  int *piVar1;
  VARIANTARG local_24;
  undefined1 local_14 [16];
  
  local_14._0_2_ = 6;
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,&(((_union_2683 *)local_14)->n2).n3);
  }
  VariantInit(&local_24);
  VariantChangeType(&local_24,(VARIANTARG *)&((_union_2683 *)local_14)->n2,0,4);
  *param_2 = local_24.n1._8_4_;
  return 0;
}



undefined4 FUN_20db5c23(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  _union_2683 local_24;
  VARIANTARG local_14;
  
  if (*(int *)(param_1 + 0x150) == 0) {
    uVar1 = 0;
  }
  else {
    local_24._8_4_ = param_2;
    local_24.n2.vt = 4;
    VariantInit(&local_14);
    VariantChangeType(&local_14,(VARIANTARG *)&local_24.n2,0,6);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x150) + 0x18))
                      (*(int **)(param_1 + 0x150),local_14.n1._8_4_,local_14.n1._12_4_);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return uVar1;
}



undefined4 FUN_20db5c95(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x150);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,&local_8);
    iVar2 = local_8;
  }
  *param_2 = -(ushort)(iVar2 != 0);
  return 0;
}



int * FUN_20db5cc8(int param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x20))(piVar1,(int)param_2);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return piVar1;
}



undefined4 FUN_20db5d03(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x150);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    iVar2 = local_8;
  }
  *param_2 = -(ushort)(iVar2 != 0);
  return 0;
}



int * FUN_20db5d36(int param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x28))(piVar1,(int)param_2);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return piVar1;
}



undefined4 FUN_20db5d71(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x150);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,&local_8);
    iVar2 = local_8;
  }
  *param_2 = -(ushort)(iVar2 != 0);
  return 0;
}



int * FUN_20db5da4(int param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x38))(piVar1,(int)param_2);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return piVar1;
}



undefined4 FUN_20db5ddf(int param_1,short *param_2)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  piVar1 = *(int **)(param_1 + 0x150);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,&local_8);
    iVar2 = local_8;
  }
  *param_2 = -(ushort)(iVar2 != 0);
  return 0;
}



int * FUN_20db5e12(int param_1,short param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x150);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x30))(piVar1,(int)param_2);
    FUN_20da3c81((void *)(param_1 + -0xd4));
    FUN_20da3c27((void *)(param_1 + -0xd4),(RECT *)0x0);
  }
  return piVar1;
}



undefined4 FUN_20db5e4d(int param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = FUN_20db1542(param_1 + -0xd4);
  if (iVar1 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = -(ushort)(*(int *)(param_1 + 0xbc) != 0);
  }
  return 0;
}



undefined4 FUN_20db5e82(int param_1,short param_2)

{
  HWND this;
  int iVar1;
  
  this = (HWND)(param_1 + -0xd4);
  iVar1 = FUN_20db1542((int)this);
  if (iVar1 != 0) {
    if ((int)param_2 != *(int *)(param_1 + 0xbc)) {
      *(int *)(param_1 + 0xbc) = (int)param_2;
      FUN_20da8667((void *)(param_1 + -0xa8),0xfffffd9d);
      if (*(int *)(param_1 + -0x34) != 0) {
        FUN_20db73bf(this);
      }
      FUN_20da3c27(this,(RECT *)0x0);
    }
  }
  return 0;
}



HRESULT FUN_20db5eed(void *param_1,LPSTREAM param_2)

{
  LPSTREAM pIVar1;
  LPSTREAM This;
  int *piVar2;
  HRESULT HVar3;
  UINT UVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  ULONG local_8;
  
  pIVar1 = param_2;
  local_1c = 0x506f6f42;
  local_18 = 0x60000;
  local_14 = 0x80;
  HVar3 = (*param_2->lpVtbl->Write)(param_2,&local_1c,0xc,(ULONG *)0x0);
  if ((-1 < HVar3) && (HVar3 = FUN_20daa147((void *)((int)param_1 + 0xd8),&local_10), -1 < HVar3)) {
    *(uint *)((int)param_1 + 0x1b4) =
         (local_10 ^ *(uint *)((int)param_1 + 0x1b4)) & 3 ^ *(uint *)((int)param_1 + 0x1b4);
    HVar3 = (*pIVar1->lpVtbl->Write)(pIVar1,(void *)((int)param_1 + 0x144),0x74,(ULONG *)0x0);
    if (-1 < HVar3) {
      if (*(BSTR *)((int)param_1 + 0x220) == (BSTR)0x0) {
        local_8 = 0;
      }
      else {
        UVar4 = SysStringLen(*(BSTR *)((int)param_1 + 0x220));
        local_8 = UVar4 * 2 + 2;
      }
      HVar3 = (*pIVar1->lpVtbl->Write)(pIVar1,&local_8,4,(ULONG *)0x0);
      if ((-1 < HVar3) &&
         ((local_8 == 0 ||
          (HVar3 = (*pIVar1->lpVtbl->Write)
                             (pIVar1,*(void **)((int)param_1 + 0x220),local_8,(ULONG *)0x0),
          -1 < HVar3)))) {
        FUN_20da44f3(param_1);
        HVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x224))
                          (*(undefined4 **)((int)param_1 + 0x224),&DAT_20db0040,&param_2);
        if (-1 < HVar3) {
          HVar3 = OleSaveToStream((LPPERSISTSTREAM)param_2,pIVar1);
          This = param_2;
          if (param_2 != (LPSTREAM)0x0) {
            param_2 = (LPSTREAM)0x0;
            (*This->lpVtbl->Release)(This);
          }
          if ((-1 < HVar3) &&
             (HVar3 = (**(code **)(*(int *)((int)param_1 + 0xd4) + 0x200))
                                ((int)param_1 + 0xd4,&local_c), piVar2 = local_c, -1 < HVar3)) {
            if (local_c != (int *)0x0) {
              local_c = (int *)0x0;
              (**(code **)(*piVar2 + 8))(piVar2);
            }
            HVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x228))
                              (*(undefined4 **)((int)param_1 + 0x228),&DAT_20db0040,&param_2);
            if ((-1 < HVar3) &&
               (HVar3 = OleSaveToStream((LPPERSISTSTREAM)param_2,pIVar1), pIVar1 = param_2,
               param_2 != (LPSTREAM)0x0)) {
              param_2 = (LPSTREAM)0x0;
              (*pIVar1->lpVtbl->Release)(pIVar1);
            }
          }
        }
      }
    }
  }
  return HVar3;
}



uint FUN_20db6074(void *param_1,LPSTREAM param_2)

{
  LPVOID *ppvObj;
  int *piVar1;
  LPSTREAM This;
  LPSTREAM This_00;
  uint uVar2;
  BSTR bstrString;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  ULONG local_c;
  int *local_8;
  
  This = param_2;
  uVar2 = (*param_2->lpVtbl->Read)(param_2,&local_1c,0xc,(ULONG *)0x0);
  if (-1 < (int)uVar2) {
    if ((local_1c == 0x506f6f42) &&
       (((local_18 == 0x60000 || (local_18 == 0x10005)) || (local_18 == 5)))) {
      local_c = local_14 - 0xc;
      (*This->lpVtbl->Read)(This,(void *)((int)param_1 + 0x144),local_c,(ULONG *)0x0);
      uVar2 = FUN_20daa18e((void *)((int)param_1 + 0xd8),*(uint *)((int)param_1 + 0x1b4) & 3);
      if ((-1 < (int)uVar2) &&
         (uVar2 = (*This->lpVtbl->Read)(This,&local_c,4,(ULONG *)0x0), -1 < (int)uVar2)) {
        if (local_c != 0) {
          bstrString = SysAllocStringLen((OLECHAR *)0x0,local_c);
          if (bstrString == (BSTR)0x0) {
            return 0x8007000e;
          }
          uVar2 = (*This->lpVtbl->Read)(This,bstrString,local_c,(ULONG *)0x0);
          if ((int)uVar2 < 0) {
            SysFreeString(bstrString);
            return uVar2;
          }
          *(BSTR *)((int)param_1 + 0x220) = bstrString;
        }
        FUN_20da44f3(param_1);
        local_10 = (int *)((int)param_1 + 0x124);
        (**(code **)(*(int *)((int)param_1 + 0x124) + 0x18))();
        piVar1 = *(int **)((int)param_1 + 0x224);
        ppvObj = (LPVOID *)((int)param_1 + 0x224);
        if (local_18 == 5) {
          uVar2 = (**(code **)*piVar1)(piVar1,&DAT_20db0040,&local_8);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = (**(code **)(*local_8 + 0x14))(local_8,This);
          piVar1 = local_8;
          if (local_8 != (int *)0x0) {
            local_8 = (int *)0x0;
            (**(code **)(*piVar1 + 8))(piVar1);
          }
        }
        else {
          if (piVar1 != (int *)0x0) {
            *ppvObj = (LPVOID)0x0;
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          uVar2 = OleLoadFromStream(This,(IID *)&DAT_20da85a0,ppvObj);
        }
        if (-1 < (int)uVar2) {
          if (local_18 == 5) {
            uVar2 = (**(code **)(*(int *)((int)param_1 + 0xd4) + 0x200))
                              ((int)param_1 + 0xd4,&param_2);
            This_00 = param_2;
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            if (param_2 != (LPSTREAM)0x0) {
              param_2 = (LPSTREAM)0x0;
              (*This_00->lpVtbl->Release)(This_00);
            }
            uVar2 = (**(code **)**(undefined4 **)((int)param_1 + 0x228))
                              (*(undefined4 **)((int)param_1 + 0x228),&DAT_20db0040,&local_8);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = (**(code **)(*local_8 + 0x14))(local_8,This);
            piVar1 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar1 + 8))(piVar1);
            }
          }
          else {
            piVar1 = *(int **)((int)param_1 + 0x228);
            if (piVar1 != (int *)0x0) {
              *(LPVOID *)((int)param_1 + 0x228) = (LPVOID)0x0;
              (**(code **)(*piVar1 + 8))(piVar1);
            }
            uVar2 = OleLoadFromStream(param_2,(IID *)&DAT_20dab780,(LPVOID *)((int)param_1 + 0x228))
            ;
            if ((int)uVar2 < 0) {
              return uVar2;
            }
          }
          FUN_20da3919(param_1);
          (**(code **)(*local_10 + 0x14))(*ppvObj);
        }
      }
    }
    else {
      uVar2 = 0x8000ffff;
    }
  }
  return uVar2;
}



int __thiscall FUN_20db6295(void *this,int *param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *lpString1;
  int iVar4;
  byte *lpString2;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((param_2 == -1) || (param_3 == -1)) {
LAB_20db64a3:
    iVar4 = 2;
  }
  else {
    if (param_2 != param_3) {
      if (*param_1 == 9) {
        FUN_20db1932((int)this);
        return 0;
      }
      iVar4 = param_1[1];
      if (iVar4 <= param_1[2]) {
        iVar5 = iVar4 * 0xc;
        do {
          lpString1 = *(byte **)(*(int *)(*(int *)((int)this + 0x1e8) + 0xc + param_2 * 0x10) +
                                iVar5);
          if (lpString1 == (byte *)0x0) {
            lpString1 = &DAT_20dab720;
          }
          lpString2 = *(byte **)(*(int *)(param_3 * 0x10 + 0xc + *(int *)((int)this + 0x1e8)) +
                                iVar5);
          if (lpString2 == (byte *)0x0) {
            lpString2 = &DAT_20dab720;
          }
          iVar3 = *param_1;
          if (iVar3 < 7) {
            if (iVar3 < 5) {
              if (0 < iVar3) {
                if (iVar3 < 3) {
                  bVar1 = *lpString1;
                  if ((((((char)bVar1 < '0') || ('9' < (char)bVar1)) && (bVar1 != 0x2b)) &&
                      (((bVar1 != 0x2d && (bVar1 != 0x2e)) && (bVar1 != 0x28)))) ||
                     (((bVar1 = *lpString2, (char)bVar1 < '0' || ('9' < (char)bVar1)) &&
                      ((bVar1 != 0x2b && (((bVar1 != 0x2d && (bVar1 != 0x2e)) && (bVar1 != 0x28)))))
                      ))) {
                    iVar3 = lstrcmpiA((LPCSTR)lpString1,(LPCSTR)lpString2);
                    sVar2 = (short)iVar3;
LAB_20db63ed:
                    if (sVar2 == 0) goto LAB_20db639a;
                  }
                  else {
                    fVar7 = FUN_20db6daa(lpString1);
                    fVar8 = FUN_20db6daa(lpString2);
                    if ((float10)(double)fVar7 < fVar8) {
                      sVar2 = -1;
                    }
                    else {
                      if ((float10)(double)fVar7 <= fVar8) {
                        sVar2 = 0;
                        goto LAB_20db63ed;
                      }
                      sVar2 = 1;
                    }
                  }
                  bVar6 = *param_1 == 1;
LAB_20db6475:
                  if (bVar6) {
                    return (int)sVar2;
                  }
                  return -(int)sVar2;
                }
                if (iVar3 < 5) {
                  fVar7 = FUN_20db6daa(lpString1);
                  fVar8 = FUN_20db6daa(lpString2);
                  if ((float10)(double)fVar7 < fVar8) {
                    sVar2 = -1;
                  }
                  else {
                    if ((float10)(double)fVar7 <= fVar8) goto LAB_20db639a;
                    sVar2 = 1;
                  }
                  bVar6 = *param_1 == 3;
                  goto LAB_20db6475;
                }
              }
              goto LAB_20db64a3;
            }
            iVar3 = lstrcmpiA((LPCSTR)lpString1,(LPCSTR)lpString2);
            sVar2 = (short)iVar3;
            if (sVar2 != 0) {
              bVar6 = *param_1 == 5;
              goto LAB_20db6475;
            }
          }
          else {
            if ((iVar3 < 7) || (8 < iVar3)) goto LAB_20db64a3;
            iVar3 = lstrcmpA((LPCSTR)lpString1,(LPCSTR)lpString2);
            sVar2 = (short)iVar3;
            if (sVar2 != 0) {
              bVar6 = *param_1 == 7;
              goto LAB_20db6475;
            }
          }
LAB_20db639a:
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0xc;
        } while (iVar4 <= param_1[2]);
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}



undefined4 __thiscall FUN_20db64ab(void *this,int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_8;
  
  if (param_2 < param_3) {
    do {
      iVar9 = (param_3 + param_2) / 2;
      iVar5 = FUN_20db6295(this,param_1,param_2,iVar9);
      if (1 < iVar5) {
        return 2;
      }
      if (0 < iVar5) {
        puVar10 = (undefined4 *)(param_2 * 0x10 + *(int *)((int)this + 0x1e8));
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        puVar8 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10[3] = puVar8[3];
        puVar10 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      iVar5 = FUN_20db6295(this,param_1,param_2,param_3);
      if (1 < iVar5) {
        return 2;
      }
      if (0 < iVar5) {
        puVar10 = (undefined4 *)(param_2 * 0x10 + *(int *)((int)this + 0x1e8));
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        puVar8 = (undefined4 *)(param_3 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10[3] = puVar8[3];
        puVar10 = (undefined4 *)(param_3 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      iVar5 = FUN_20db6295(this,param_1,iVar9,param_3);
      if (1 < iVar5) {
        return 2;
      }
      if (0 < iVar5) {
        puVar10 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        puVar8 = (undefined4 *)(param_3 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10[3] = puVar8[3];
        puVar10 = (undefined4 *)(param_3 * 0x10 + *(int *)((int)this + 0x1e8));
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      puVar10 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      iVar6 = param_3 * 0x10;
      uVar4 = puVar10[3];
      puVar8 = (undefined4 *)(iVar6 + -0x10 + *(int *)((int)this + 0x1e8));
      *puVar10 = *puVar8;
      puVar10[1] = puVar8[1];
      puVar10[2] = puVar8[2];
      puVar10[3] = puVar8[3];
      puVar10 = (undefined4 *)(iVar6 + -0x10 + *(int *)((int)this + 0x1e8));
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      iVar5 = param_3 + -1;
      local_8 = param_2;
      iVar9 = iVar5;
      if (param_2 < iVar5) {
        while( true ) {
          do {
            local_8 = local_8 + 1;
            iVar7 = FUN_20db6295(this,param_1,local_8,iVar5);
            if (1 < iVar7) {
              return 2;
            }
          } while (iVar7 < 0);
          do {
            iVar9 = iVar9 + -1;
            iVar7 = FUN_20db6295(this,param_1,iVar9,iVar5);
            if (1 < iVar7) {
              return 2;
            }
          } while (0 < iVar7);
          if (iVar9 <= local_8) break;
          puVar10 = (undefined4 *)(local_8 * 0x10 + *(int *)((int)this + 0x1e8));
          uVar1 = *puVar10;
          uVar2 = puVar10[1];
          uVar3 = puVar10[2];
          uVar4 = puVar10[3];
          puVar8 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
          *puVar10 = *puVar8;
          puVar10[1] = puVar8[1];
          puVar10[2] = puVar8[2];
          puVar10[3] = puVar8[3];
          puVar10 = (undefined4 *)(iVar9 * 0x10 + *(int *)((int)this + 0x1e8));
          *puVar10 = uVar1;
          puVar10[1] = uVar2;
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
        }
      }
      puVar8 = (undefined4 *)(local_8 * 0x10 + *(int *)((int)this + 0x1e8));
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar10 = (undefined4 *)(iVar6 + -0x10 + *(int *)((int)this + 0x1e8));
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      puVar8[2] = puVar10[2];
      puVar8[3] = puVar10[3];
      puVar10 = (undefined4 *)(iVar6 + -0x10 + *(int *)((int)this + 0x1e8));
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10[2] = uVar3;
      puVar10[3] = uVar4;
      if (param_3 - local_8 < local_8 - param_2) {
        iVar5 = FUN_20db64ab(this,param_1,local_8 + 1,param_3);
        if (iVar5 != 0) {
          return 2;
        }
        param_3 = local_8 + -1;
      }
      else {
        iVar5 = FUN_20db64ab(this,param_1,param_2,local_8 + -1);
        if (iVar5 != 0) {
          return 2;
        }
        param_2 = local_8 + 1;
      }
    } while (param_2 < param_3);
  }
  return 0;
}



undefined4 __thiscall FUN_20db672f(void *this,short param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)((int)this + 0x20c);
  iVar5 = *(int *)((int)this + 0x204);
  local_8 = iVar2;
  if (iVar5 <= iVar2) {
    local_8 = iVar5;
  }
  if (iVar5 < iVar2) {
    iVar5 = iVar2;
  }
  iVar2 = *(int *)((int)this + 0x210);
  local_c = *(int *)((int)this + 0x208);
  local_10 = iVar2;
  if (local_c <= iVar2) {
    local_10 = local_c;
  }
  if (local_c < iVar2) {
    local_c = iVar2;
  }
  if (local_8 == iVar5) {
    local_8 = *(int *)((int)this + 0x14c);
    iVar5 = *(int *)((int)this + 0x144) + -1;
  }
  if ((((local_8 < 0) || (*(int *)((int)this + 0x144) <= iVar5)) || (local_10 < 0)) ||
     (*(int *)((int)this + 0x148) <= local_c)) {
    uVar4 = 3;
  }
  else {
    local_14 = (int)param_1;
    bVar1 = true;
    iVar2 = local_8;
    do {
      if (iVar5 <= iVar2) goto LAB_20db67d5;
      iVar3 = FUN_20db6295(this,&local_14,iVar2,iVar2 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar3 < 1);
    bVar1 = false;
LAB_20db67d5:
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_20db64ab(this,&local_14,local_8,iVar5);
    }
  }
  return uVar4;
}



undefined4 __thiscall FUN_20db67fa(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  if (param_2 != param_1) {
    if ((((param_2 < 0) || (param_1 < 0)) || (*(int *)((int)this + 0x144) <= param_2)) ||
       (*(int *)((int)this + 0x144) <= param_1)) {
      return 3;
    }
    iVar5 = *(int *)((int)this + 0x1e8);
    puVar7 = (undefined4 *)(param_1 * 0x10 + iVar5);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    if (param_2 < param_1) {
      iVar8 = param_2 * 0xfffffff + param_1;
      iVar6 = param_2 * 0x10;
      puVar7 = (undefined4 *)((param_2 + 1) * 0x10 + iVar5);
    }
    else {
      iVar8 = param_1 * 0xfffffff + param_2;
      iVar6 = (param_1 + 1) * 0x10;
    }
    FUN_20db6d61((undefined1 *)puVar7,(undefined1 *)(iVar6 + iVar5),iVar8 * 0x10);
    puVar7 = (undefined4 *)(param_2 * 0x10 + *(int *)((int)this + 0x1e8));
    *puVar7 = uVar1;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
  return 0;
}



undefined4 __thiscall FUN_20db68ac(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 != param_1) {
    if ((((param_2 < 0) || (param_1 < 0)) || (*(int *)((int)this + 0x148) <= param_2)) ||
       (*(int *)((int)this + 0x148) <= param_1)) {
      return 3;
    }
    iVar9 = *(int *)((int)this + 0x1ec);
    iVar5 = param_1 * 0xc;
    puVar6 = (undefined4 *)(iVar5 + iVar9);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    if (param_2 < param_1) {
      iVar8 = param_2 * 0xc;
      iVar7 = (param_1 - param_2) * 0xc;
      iVar4 = (param_2 + 1) * 0xc;
      FUN_20db6d61((undefined1 *)(iVar4 + iVar9),(undefined1 *)(iVar8 + iVar9),iVar7);
      puVar6 = (undefined4 *)(iVar8 + *(int *)((int)this + 0x1ec));
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      param_2 = 0;
      if (0 < *(int *)((int)this + 0x144)) {
        param_1 = 0;
        do {
          iVar9 = *(int *)(param_1 + 0xc + *(int *)((int)this + 0x1e8));
          puVar6 = (undefined4 *)(iVar9 + iVar5);
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          FUN_20db6d61((undefined1 *)(iVar9 + iVar4),(undefined1 *)(iVar9 + iVar8),iVar7);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc + *(int *)((int)this + 0x1e8)) + iVar8);
          param_2 = param_2 + 1;
          *puVar6 = uVar1;
          puVar6[1] = uVar2;
          puVar6[2] = uVar3;
          param_1 = param_1 + 0x10;
        } while (param_2 < *(int *)((int)this + 0x144));
      }
    }
    else {
      iVar7 = (param_2 - param_1) * 0xc;
      iVar4 = (param_1 + 1) * 0xc;
      FUN_20db6d61((undefined1 *)puVar6,(undefined1 *)(iVar4 + iVar9),iVar7);
      iVar9 = param_2 * 0xc;
      puVar6 = (undefined4 *)(iVar9 + *(int *)((int)this + 0x1ec));
      param_2 = 0;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      if (0 < *(int *)((int)this + 0x144)) {
        param_1 = 0;
        do {
          iVar8 = *(int *)(param_1 + 0xc + *(int *)((int)this + 0x1e8));
          puVar6 = (undefined4 *)(iVar5 + iVar8);
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar3 = puVar6[2];
          FUN_20db6d61((undefined1 *)puVar6,(undefined1 *)(iVar8 + iVar4),iVar7);
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0xc + *(int *)((int)this + 0x1e8)) + iVar9);
          param_2 = param_2 + 1;
          *puVar6 = uVar1;
          puVar6[1] = uVar2;
          puVar6[2] = uVar3;
          param_1 = param_1 + 0x10;
        } while (param_2 < *(int *)((int)this + 0x144));
      }
    }
  }
  return 0;
}



void __cdecl FUN_20db6a68(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4de0 == 0) {
    FUN_20da4216();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  MulDiv(DAT_20dc4de0,param_1,0x5a0);
  return;
}



void __cdecl FUN_20db6aa1(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4de0 == 0) {
    FUN_20da4216();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  MulDiv(param_1,0x5a0,DAT_20dc4de0);
  return;
}



void __cdecl FUN_20db6ada(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4ddc == 0) {
    FUN_20da4216();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  MulDiv(param_1,0x5a0,DAT_20dc4ddc);
  return;
}



void __cdecl FUN_20db6b13(HWND param_1,int param_2,UINT param_3)

{
  HINSTANCE hInstance;
  LPCSTR lpsz;
  CHAR CVar1;
  undefined1 *puVar2;
  LPCSTR lParam;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  cchBufferMax = 0x200;
  hInstance = FUN_20da8810(0);
  LoadStringA(hInstance,param_3,lpBuffer,cchBufferMax);
  lParam = local_204;
  while( true ) {
    CVar1 = *lParam;
    lpsz = lParam;
    while ((CVar1 != '\0' && (CVar1 != ';'))) {
      lpsz = CharNextA(lpsz);
      CVar1 = *lpsz;
    }
    puVar2 = (undefined1 *)(~-(uint)(*lpsz != ';') & (uint)lpsz);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
    SendDlgItemMessageA(param_1,param_2,0x143,0,(LPARAM)lParam);
    if (puVar2 == (undefined1 *)0x0) break;
    lParam = puVar2 + 1;
  }
  return;
}



void __cdecl FUN_20db6b8e(undefined4 param_1)

{
  HRESULT HVar1;
  HINSTANCE hInstance;
  UINT uID;
  CHAR *lpBuffer;
  int cchBufferMax;
  CHAR local_250 [256];
  char local_150 [256];
  CHAR local_50 [64];
  BSTR local_10;
  BSTR local_c;
  IErrorInfo *local_8;
  
  local_8 = (IErrorInfo *)0x0;
  local_c = (LPCWSTR)0x0;
  local_10 = (LPCWSTR)0x0;
  HVar1 = GetErrorInfo(0,&local_8);
  if ((-1 < HVar1) && (local_8 != (IErrorInfo *)0x0)) {
    HVar1 = (*local_8->lpVtbl->GetDescription)(local_8,&local_c);
    if (-1 < HVar1) {
      HVar1 = (*local_8->lpVtbl->GetSource)(local_8,&local_10);
      if (-1 < HVar1) {
        WideCharToMultiByte(0,0,local_c,-1,local_150,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        WideCharToMultiByte(0,0,local_10,-1,local_250,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
        if (local_150[0] == '\0') {
          lpBuffer = local_50;
          cchBufferMax = 0x40;
          uID = 0x7d8;
          hInstance = FUN_20da8810(0);
          LoadStringA(hInstance,uID,lpBuffer,cchBufferMax);
          wsprintfA(local_150,local_50,param_1);
        }
        MessageBeep(0x30);
        MessageBoxA((HWND)0x0,local_150,local_250,0x2030);
      }
    }
  }
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



void __cdecl FUN_20db6ca0(short *param_1)

{
  FUN_20dc0249(param_1,L"72E67120-5959-11cf-91F6-C2863C385E30");
  return;
}



void FUN_20db6cb1(void)

{
  SysAllocString(L"72E67120-5959-11cf-91F6-C2863C385E30");
  return;
}



undefined4 __cdecl
DLLGetDocumentation(undefined4 param_1,undefined4 param_2,LCID param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_104 [256];
  
                    // 0x16cbd  1  DLLGetDocumentation
  *param_5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc41a0);
  if ((param_3 != DAT_20dc54a0) || (DAT_20dc48d8 == (HMODULE)0x0)) {
    if ((DAT_20dc48d8 != (HMODULE)0x0) &&
       ((DAT_20dc48d8 != DAT_20dc4160 && (DAT_20dc48d8 != DAT_20dc4164)))) {
      FreeLibrary(DAT_20dc48d8);
    }
    DAT_20dc48d8 = FUN_20da8810(param_3);
    DAT_20dc54a0 = param_3;
  }
  iVar1 = LoadStringA(DAT_20dc48d8,param_4 & 0xffff,local_104,0xff);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc41a0);
  if (0 < iVar1) {
    pWVar2 = FUN_20da95d3(local_104,(BSTR)0x0);
    *param_5 = pWVar2;
  }
  return 0;
}



undefined1 * __cdecl FUN_20db6d61(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = param_1;
  if ((param_2 < param_1) && (puVar3 = param_2 + param_3, param_1 < puVar3)) {
    puVar2 = param_1 + param_3 + -1;
    if (param_3 != 0) {
      do {
        puVar3 = puVar3 + -1;
        *puVar2 = *puVar3;
        puVar2 = puVar2 + -1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return puVar1;
}



float10 __cdecl FUN_20db6daa(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  float10 fVar6;
  int local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc54a8 == 0) {
    GetProfileStringA("intl","sDecimal",".",(LPSTR)&local_8,2);
    DAT_20dc54a8 = (uint)(char)local_8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    fVar6 = (float10)0.0;
  }
  else {
    do {
      iVar2 = FUN_20da98ae(param_1);
      if (iVar2 != 0) break;
      param_1 = param_1 + 1;
    } while (*param_1 != 0);
    uVar3 = (uint)*param_1;
    pbVar5 = param_1 + 1;
    if ((uVar3 == 0x2d) || (uVar4 = uVar3, uVar3 == 0x2b)) {
      uVar4 = (uint)*pbVar5;
      pbVar5 = param_1 + 2;
    }
    local_8 = 0;
    while ((0x2f < uVar4 && (uVar4 < 0x3a))) {
      local_8 = (uVar4 - 0x30) + local_8 * 10;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uint)bVar1;
    }
    iVar2 = 0;
    param_1 = (byte *)0x0;
    if (uVar4 == DAT_20dc54a8) {
      while( true ) {
        uVar4 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((uVar4 < 0x30) || (0x39 < uVar4)) break;
        iVar2 = iVar2 + 1;
        param_1 = (byte *)((uVar4 - 0x30) + (int)param_1 * 10);
      }
    }
    fVar6 = (float10)(int)param_1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      fVar6 = fVar6 * (float10)0.1;
    }
    fVar6 = fVar6 + (float10)local_8;
    if (uVar3 == 0x2d) {
      fVar6 = -fVar6;
    }
  }
  return fVar6;
}



void __fastcall FUN_20db6ea2(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void __fastcall FUN_20db6ea8(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



bool __fastcall FUN_20db6eb5(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_14 = 0;
  local_18 = 0x14;
  iVar2 = OleCreatePictureIndirect(&local_18,&DAT_20dab780,0,param_1);
  return -1 < iVar2;
}



undefined4 __fastcall FUN_20db6ef3(int *param_1)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)*param_1;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_20dab770,&local_8);
  }
  return local_8;
}



void __thiscall FUN_20db6f14(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  void *local_c;
  void *local_8;
  
                    // WARNING: Load size is inaccurate
  piVar1 = *this;
  if (piVar1 != (int *)0x0) {
    local_c = this;
    local_8 = this;
    (**(code **)(*piVar1 + 0x18))(piVar1,&local_c);
                    // WARNING: Load size is inaccurate
    (**(code **)(**this + 0x1c))(*this,&local_8);
                    // WARNING: Load size is inaccurate
    (**(code **)(**this + 0x20))
              (*this,param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0,
               (int)local_8 + -1,local_c,-(int)local_8,param_3);
  }
  return;
}



undefined2 __fastcall FUN_20db6f75(int *param_1)

{
  int *piVar1;
  undefined4 uStack_8;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 0xffff;
  }
  uStack_8 = param_1;
  (**(code **)(*piVar1 + 0x14))(piVar1,(int)&uStack_8 + 2);
  return uStack_8._2_2_;
}



HFONT __cdecl FUN_20db6f95(LOGFONTA *param_1)

{
  int iVar1;
  int iVar2;
  HFONT pHVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  LOGFONTA *pLVar8;
  LONG *pLVar9;
  bool bVar10;
  char *local_c;
  int iStack_4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4758 == 0) {
    FUN_20da27f2();
  }
  pcVar7 = LeaveCriticalSection_exref;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar2 = 0;
  if (0 < DAT_20dc4758) {
    local_c = &DAT_20dc41c4;
    do {
      if (*(int *)(local_c + -4) != 0) {
        iVar5 = 0x3c;
        bVar10 = true;
        pLVar8 = param_1;
        pcVar4 = local_c;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar10 = (char)pLVar8->lfHeight == *pcVar4;
          pLVar8 = (LOGFONTA *)((int)&pLVar8->lfHeight + 1);
          pcVar4 = pcVar4 + 1;
        } while (bVar10);
        if (bVar10) {
          (&DAT_20dc41b8)[iVar2 * 0x12] = (&DAT_20dc41b8)[iVar2 * 0x12] + 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
          return (HFONT)(&DAT_20dc41c0)[iVar2 * 0x12];
        }
      }
      iVar2 = iVar2 + 1;
      local_c = local_c + 0x48;
    } while (iVar2 < DAT_20dc4758);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  pHVar3 = CreateFontIndirectA(param_1);
  if (pHVar3 != (HFONT)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    iVar2 = 0;
    if (0 < DAT_20dc4758) {
      piVar6 = &DAT_20dc41c0;
      do {
        if (*piVar6 == 0) {
          (&DAT_20dc41c0)[iVar2 * 0x12] = pHVar3;
          pLVar9 = (LONG *)(&DAT_20dc41c4 + iVar2 * 0x48);
          for (iVar5 = 0xf; iVar1 = DAT_20dc54ac, iVar5 != 0; iVar5 = iVar5 + -1) {
            *pLVar9 = param_1->lfHeight;
            param_1 = (LOGFONTA *)&param_1->lfWidth;
            pLVar9 = pLVar9 + 1;
          }
          DAT_20dc54ac = DAT_20dc54ac + 1;
          (&DAT_20dc41b8)[iVar2 * 0x12] = 1;
          (&DAT_20dc41bc)[iVar2 * 0x12] = iVar1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
          return pHVar3;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 0x12;
      } while (iVar2 < DAT_20dc4758);
    }
    local_c = (char *)0x0;
    pcVar4 = (char *)0xffffffff;
    if (0 < DAT_20dc4758) {
      piVar6 = &DAT_20dc41bc;
      do {
        if ((piVar6[-1] == 0) && (((int)pcVar4 < 0 || (*piVar6 < iStack_4)))) {
          iStack_4 = *piVar6;
          pcVar4 = local_c;
        }
        local_c = (char *)((int)local_c + 1);
        piVar6 = piVar6 + 0x12;
      } while ((int)local_c < DAT_20dc4758);
    }
    if (-1 < (int)pcVar4) {
      DeleteObject((HGDIOBJ)(&DAT_20dc41c0)[(int)pcVar4 * 0x12]);
      iVar5 = DAT_20dc54ac;
      (&DAT_20dc41c0)[(int)pcVar4 * 0x12] = pHVar3;
      pLVar9 = (LONG *)(&DAT_20dc41c4 + (int)pcVar4 * 0x48);
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar9 = param_1->lfHeight;
        param_1 = (LOGFONTA *)&param_1->lfWidth;
        pLVar9 = pLVar9 + 1;
      }
      DAT_20dc54ac = DAT_20dc54ac + 1;
      (&DAT_20dc41b8)[(int)pcVar4 * 0x12] = 1;
      (&DAT_20dc41bc)[(int)pcVar4 * 0x12] = iVar5;
      pcVar7 = LeaveCriticalSection_exref;
    }
    (*pcVar7)(&DAT_20dc4178);
  }
  return pHVar3;
}



void __cdecl FUN_20db7138(HGDIOBJ param_1)

{
  int iVar1;
  int *piVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar1 = 0;
  if (0 < DAT_20dc4758) {
    piVar2 = &DAT_20dc41c0;
    do {
      if (param_1 == (HGDIOBJ)*piVar2) {
        if (0 < (int)(&DAT_20dc41b8)[iVar1 * 0x12]) {
          (&DAT_20dc41b8)[iVar1 * 0x12] = (&DAT_20dc41b8)[iVar1 * 0x12] + -1;
        }
        goto LAB_20db716e;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x12;
    } while (iVar1 < DAT_20dc4758);
  }
  DeleteObject(param_1);
LAB_20db716e:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return;
}



undefined4 * __thiscall FUN_20db7192(void *this,byte param_1)

{
  FUN_20da7328((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_20db71ba(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x44) * 2] + 0x4a);
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
    iVar2 = *(int *)((&PTR_PTR_20dc489c)[iVar2 * 2] + 0x4c);
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



bool __cdecl FUN_20db723c(HWND param_1,uint param_2,WPARAM param_3,HWND param_4,LRESULT *param_5)

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
      goto LAB_20db7273;
    }
    if (param_2 == 0x2b) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[5].unused;
      }
      goto LAB_20db7273;
    }
    if (param_2 == 0x2c) {
      if (param_4 != (HWND)0x0) {
        hWnd = GetDlgItem(param_1,param_4[1].unused);
      }
      goto LAB_20db7273;
    }
    if (param_2 == 0x2d) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[3].unused;
      }
      goto LAB_20db7273;
    }
    if ((param_2 < 0x2e) || (0x2f < param_2)) goto LAB_20db7273;
  }
  else {
    if (param_2 == 0x4e) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4->unused;
      }
      goto LAB_20db7273;
    }
    if ((param_2 != 0x111) &&
       ((param_2 < 0x114 ||
        ((0x115 < param_2 &&
         ((param_2 < 0x133 ||
          ((0x138 < param_2 &&
           ((param_2 != 0x210 || (((short)param_3 != 1 && ((short)param_3 != 2))))))))))))))
    goto LAB_20db7273;
  }
  hWnd = param_4;
LAB_20db7273:
  if (hWnd != (HWND)0x0) {
    LVar1 = SendMessageA(hWnd,param_2 + 0x2000,param_3,(LPARAM)param_4);
    *param_5 = LVar1;
  }
  return hWnd != (HWND)0x0;
}



HWND FUN_20db732c(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

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
    bVar1 = FUN_20da633a(this,1);
    return (HWND)CONCAT31(extraout_var,bVar1);
  }
  bVar1 = FUN_20db723c(param_1,param_2,param_3,lParam,(LRESULT *)&param_4);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    param_4 = (HWND)DefWindowProcA(param_1,param_2,param_3,(LPARAM)lParam);
  }
  return param_4;
}



undefined4 FUN_20db73b5(void)

{
  return 1;
}



int __fastcall FUN_20db73bf(HWND param_1)

{
  uint uVar1;
  int iVar2;
  HWND pHStack_4;
  
  uVar1 = param_1[0x2c].unused;
  pHStack_4 = param_1;
  if ((HWND)param_1[0x28].unused != (HWND)0x0) {
    pHStack_4 = GetWindow((HWND)param_1[0x28].unused,3);
  }
  if (((uint)param_1[0x2c].unused >> 1 & 1) == 0) {
    if ((HWND)param_1[0x28].unused != (HWND)0x0) {
      DestroyWindow((HWND)param_1[0x28].unused);
      if ((HWND)param_1[0x2d].unused != (HWND)0x0) {
        DestroyWindow((HWND)param_1[0x2d].unused);
        param_1[0x2d].unused = 0;
      }
      FUN_20da57bd(param_1,0,0,0);
    }
  }
  else {
    iVar2 = (**(code **)(param_1[0x10].unused + 0x14))(param_1 + 0x10);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = FUN_20da5548(param_1,((uVar1 >> 3 & 1) != 0) - 5);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if ((HWND)param_1[0x28].unused != (HWND)0x0) {
    SetWindowPos((HWND)param_1[0x28].unused,pHStack_4,0,0,0,0,0x13);
  }
  return (-(uint)(param_1[0x28].unused != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 FUN_20db7710(int param_1,uint *param_2)

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
  
  puVar2 = (&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x24) * 2];
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
    puVar7 = (undefined4 *)HeapAlloc(DAT_20dc4190,0,iVar10 * 0x10);
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = puVar7;
      if (bVar3) {
        puVar8 = &DAT_20daf8b0;
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
        puVar11 = *(undefined4 **)((&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x24) * 2] + 0x54);
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
      this = FUN_20da2c52(0x40,DAT_20dc4190);
      if (this == (LPVOID)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_20dba9ac(this,(undefined4 *)&DAT_20db0150,iVar10,0x10,puVar7,&LAB_20dba7d7);
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



int FUN_20db78af(int param_1,uint param_2,int *param_3)

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
    FUN_20da492b(param_3,&local_c);
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



undefined4 FUN_20db7a89(int param_1,RECT *param_2,RECT *param_3)

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
FUN_20db7c55(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

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



undefined4 FUN_20db7ca3(int param_1,undefined4 param_2)

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
      cVar1 = FUN_20dba79c();
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



HRESULT FUN_20db7d0a(int param_1,ITypeLib *param_2)

{
  ITypeLib *ppTinfo;
  HRESULT HVar1;
  
  ppTinfo = param_2;
  param_2->lpVtbl = (ITypeLibVtbl *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  HVar1 = LoadRegTypeLib((GUID *)PTR_LAB_20dc4e18,
                         *(WORD *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x48) * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x48) * 2] + 0x1c),
                         (uint)DAT_20dc4dc8,&param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (-1 < HVar1) {
    HVar1 = (*param_2->lpVtbl->GetTypeInfoOfGuid)
                      (param_2,*(GUID **)(&PTR_PTR_20dc489c)[*(int *)(param_1 + -0x48) * 2],
                       (ITypeInfo **)ppTinfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (-1 < HVar1) {
      HVar1 = 0;
    }
  }
  return HVar1;
}



void __thiscall FUN_20db7da5(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_1 == 0);
  }
  return;
}



int FUN_20db7de4(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_20db7ef5((void *)(param_1 + -0x50),param_2);
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



int FUN_20db7e27(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"Contents",0,0x10,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x14))((int *)(param_1 + -4),param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



int FUN_20db7e68(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,L"Contents",0x1011,0,0,&param_2);
  if (-1 < iVar1) {
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
    iVar1 = FUN_20db7ef5((void *)(param_1 + -0x54),param_2);
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfe;
    *(uint *)(param_1 + 0x5c) = (uint)(-1 < iVar1) << 5 | *(uint *)(param_1 + 0x5c) & 0xffffffdf;
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



void __thiscall FUN_20db7ef5(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_20db7f74(this,param_1);
  if (-1 < iVar1) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x3c))(this,param_1);
  }
  return;
}



int __thiscall FUN_20db7f13(void *this,int *param_1)

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
        FUN_20da492b(local_14,(int *)((int)this + 0x88));
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



void __thiscall FUN_20db7f74(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x12344321;
  local_8 = 8;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    FUN_20dab500((int *)((int)this + 0x88),local_14);
    (**(code **)(*param_1 + 0x10))(param_1,local_14,8,0);
  }
  return;
}



undefined4
FUN_20db7fc7(int param_1,int param_2,undefined4 param_3,int *param_4,LPCWSTR param_5,HDC param_6,
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
      param_6 = FUN_20db82e6(param_5);
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



undefined4 FUN_20db81ea(int param_1,undefined4 param_2,int *param_3)

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
    FUN_20dab500(local_14,param_3);
    FUN_20dab500(local_c,param_3 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
FUN_20db8256(undefined4 param_1,int param_2,RECT *param_3,LONG param_4,LONG param_5,
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
FUN_20db8287(undefined4 param_1,int param_2,RECT *param_3,RECT *param_4,undefined4 param_5,
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



HDC __cdecl FUN_20db82e6(LPCWSTR param_1)

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
    pHVar2 = CreateDCA(s_DISPLAY_20dc4f68,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
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
    FUN_20da29fd(local_118,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6),-1,local_118[0],
                        (int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = local_118[0];
    iVar3 = lstrlenW((LPCWSTR)local_8);
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_20da29fd(local_98,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)local_8,-1,local_98[0],(int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_18 = local_98[0];
    iVar3 = lstrlenW(local_10);
    uVar4 = iVar3 * 2 + 2;
    FUN_20da29fd(local_198,uVar4);
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
        local_8 = (DEVMODEA *)HeapAlloc(DAT_20dc4190,0,(ushort)param_1[0x23] + 0x9c);
        if (local_8 == (DEVMODEA *)0x0) {
          if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
            HeapFree(DAT_20dc4190,0,local_198[0]);
          }
          if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
            HeapFree(DAT_20dc4190,0,local_98[0]);
          }
          if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
            HeapFree(DAT_20dc4190,0,local_118[0]);
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
      HeapFree(DAT_20dc4190,0,local_8);
    }
    if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_198[0]);
    }
    if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_98[0]);
    }
    if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_118[0]);
    }
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_20db85be(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_20da8410;
  InterlockedDecrement(&DAT_20dc48c8);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_20db85f2(void *this,byte param_1)

{
  FUN_20da7472((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_20db861a(undefined4 param_1,undefined4 *param_2)

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



bool FUN_20db8634(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = *(char **)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x14) * 2] + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}



undefined4 * __thiscall FUN_20db8682(void *this,byte param_1)

{
  FUN_20da742f((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __cdecl FUN_20db88d1(ushort param_1,BSTR param_2)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  iVar1 = 0x200;
  uID = (uint)param_1;
  hInstance = FUN_20da8810(0);
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_20da95d3(local_204,param_2);
  return;
}



void __cdecl FUN_20db8912(undefined4 *param_1,LPSTR param_2)

{
  wsprintfA(param_2,s___08lX__04X__04X__02X_02X__02X_0_20dc4f70,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  return;
}



undefined4 __cdecl FUN_20db895d(undefined4 param_1,LPCSTR param_2,HKEY param_3,int param_4)

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
  iVar1 = FUN_20db98ea(param_3);
  if (iVar1 == 0) {
    FUN_20db9348(param_3,(HKEY)0x0);
  }
  iVar1 = FUN_20db8912(param_3,local_38);
  if (iVar1 != 0) {
    wsprintfA((LPSTR)local_13c,s_CLSID__s_20dc4fa4,local_38);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_20dc52b0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    if (LVar2 == 0) {
      if (param_2 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_20dc4fb0,param_1);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_2);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if ((((LVar2 == 0) &&
           (LVar2 = RegCreateKeyExA(local_c,s_InprocServer32_20dc4fbc,0,&DAT_20dc52b4,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10), LVar2 == 0)) &&
          (DVar3 = GetModuleFileNameA(DAT_20dc4164,(LPSTR)local_13c,0x104), DVar3 != 0)) &&
         (LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,DVar3 + 1), LVar2 == 0)) {
        if (param_4 == 0) {
          RegDeleteValueA(local_8,s_ThreadingModel_20dc4fe8);
        }
        else {
          LVar2 = RegSetValueExA(local_8,s_ThreadingModel_20dc4fd8,0,1,(BYTE *)s_Apartment_20dc4fcc,
                                 10);
          if (LVar2 != 0) goto LAB_20db8aa3;
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        return 1;
      }
    }
  }
LAB_20db8aa3:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return 0;
}



undefined4 __cdecl
FUN_20db8afc(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar1 = FUN_20db895d(param_2,param_3,param_8,param_9);
  if (iVar1 != 0) {
    lstrcpyA((LPSTR)local_13c,param_1);
    lstrcatA((LPSTR)local_13c,&DAT_20dc4ff8);
    lstrcatA((LPSTR)local_13c,param_2);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_20dc52b8,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
    if (LVar2 == 0) {
      if (param_3 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_20dc4ffc,param_2);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_3);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if (((LVar2 == 0) &&
          (LVar2 = RegCreateKeyExA(local_c,s_CLSID_20dc5008,0,&DAT_20dc52bc,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9), LVar2 == 0)) &&
         (iVar1 = FUN_20db8912(param_8,(LPSTR)local_38), iVar1 != 0)) {
        iVar1 = lstrlenA((LPCSTR)local_38);
        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
        if (LVar2 == 0) {
          RegCloseKey(local_8);
          LVar2 = RegCreateKeyExA(local_c,s_CurVer_20dc5010,0,&DAT_20dc52c0,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
          if (LVar2 == 0) {
            wsprintfA((LPSTR)local_13c,s__s__s__ld_20dc5018,param_1,param_2,param_4);
            iVar1 = lstrlenA((LPCSTR)local_13c);
            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
            if (LVar2 == 0) {
              RegCloseKey(local_8);
              RegCloseKey(local_c);
              LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_20dc52c4,0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
              if (LVar2 == 0) {
                if (param_3 == (LPCSTR)0x0) {
                  wsprintfA((LPSTR)local_13c,s__s_Object_20dc5024,param_2);
                }
                else {
                  lstrcpyA((LPSTR)local_13c,param_3);
                }
                iVar1 = lstrlenA((LPCSTR)local_13c);
                LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                if ((LVar2 == 0) &&
                   (LVar2 = RegCreateKeyExA(local_c,s_CLSID_20dc5030,0,&DAT_20dc52c8,0,0x2001f,
                                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9),
                   LVar2 == 0)) {
                  iVar1 = lstrlenA((LPCSTR)local_38);
                  LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                  if (LVar2 == 0) {
                    RegCloseKey(local_8);
                    RegCloseKey(local_c);
                    iVar1 = FUN_20db8912(param_8,(LPSTR)local_38);
                    if (iVar1 != 0) {
                      wsprintfA((LPSTR)local_13c,s_CLSID__s_20dc5038,local_38);
                      LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_20dc52cc,0,
                                              0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
                      if ((LVar2 == 0) &&
                         (LVar2 = RegCreateKeyExA(local_c,s_VersionIndependentProgID_20dc5044,0,
                                                  &DAT_20dc52d0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0
                                                  ,&local_8,&param_9), LVar2 == 0)) {
                        wsprintfA((LPSTR)local_13c,s__s__s_20dc5060,param_1,param_2);
                        iVar1 = lstrlenA((LPCSTR)local_13c);
                        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                        if (LVar2 == 0) {
                          RegCloseKey(local_8);
                          LVar2 = RegCreateKeyExA(local_c,s_ProgID_20dc5068,0,&DAT_20dc52d4,0,
                                                  0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                                                  &param_9);
                          if (LVar2 == 0) {
                            wsprintfA((LPSTR)local_13c,s__s__s__ld_20dc5070,param_1,param_2,param_4)
                            ;
                            iVar1 = lstrlenA((LPCSTR)local_13c);
                            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                            if (LVar2 == 0) {
                              RegCloseKey(local_8);
                              RegCreateKeyExA(local_c,s_TypeLib_20dc507c,0,&DAT_20dc52d8,0,0x2001f,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
                              iVar1 = FUN_20db8912(param_7,(LPSTR)local_38);
                              if (iVar1 != 0) {
                                iVar1 = lstrlenA((LPCSTR)local_38);
                                LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                                if (LVar2 == 0) {
                                  RegCloseKey(local_8);
                                  LVar2 = RegCreateKeyExA(local_c,s_Version_20dc5084,0,&DAT_20dc52dc
                                                          ,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                                                          &local_8,&param_9);
                                  if (LVar2 == 0) {
                                    wsprintfA((LPSTR)local_13c,s__ld__ld_20dc508c,param_5,param_6);
                                    iVar1 = lstrlenA((LPCSTR)local_13c);
                                    RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                                    HVar3 = CoCreateInstance((IID *)&DAT_20db01c0,(LPUNKNOWN)0x0,1,
                                                             (IID *)&DAT_20db01d0,&local_10);
                                    if (-1 < HVar3) {
                                      (**(code **)(*local_10 + 0x14))
                                                (local_10,param_8,1,&LAB_20db01b0);
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



// WARNING: Removing unreachable block (ram,0x20db92d2)
// WARNING: Removing unreachable block (ram,0x20db92d9)
// WARNING: Removing unreachable block (ram,0x20db92e4)
// WARNING: Removing unreachable block (ram,0x20db92ec)
// WARNING: Removing unreachable block (ram,0x20db9302)

bool __cdecl
FUN_20db901f(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar3 = FUN_20db8afc(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_12);
  if (iVar3 == 0) {
    return false;
  }
  FUN_20db8912(param_9,local_34);
  wsprintfA((LPSTR)local_138,s_CLSID__s_20dc5094,local_34);
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_138,0,0xf003f,&param_8);
  if (LVar4 != 0) {
    return false;
  }
  if (param_13 != 0) {
    param_12 = RegCreateKeyExA(param_8,s_Control_20dc50a0,0,&DAT_20dc52e0,0,0xf003f,
                               (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
    if (param_12 != 0) goto LAB_20db931f;
    RegCloseKey(local_8);
    local_8 = (HKEY)0x0;
  }
  param_12 = RegCreateKeyExA(param_8,s_MiscStatus_20dc50a8,0,&DAT_20dc52e4,0,0xf003f,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
  if (param_12 == 0) {
    local_138[0] = '0';
    local_138[1] = 0;
    param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,2);
    if ((param_12 == 0) &&
       (param_12 = RegCreateKeyExA(local_8,&DAT_20dc50b4,0,&DAT_20dc52e8,0,0xf003f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_7), param_12 == 0)) {
      wsprintfA((LPSTR)local_138,&DAT_20dc50b8,param_10);
      iVar3 = lstrlenA((LPCSTR)local_138);
      param_12 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
      RegCloseKey(local_c);
      if (param_12 == 0) {
        RegCloseKey(local_8);
        local_8 = (HKEY)0x0;
        if (param_13 != 0) {
          GetModuleFileNameA(DAT_20dc4164,(LPSTR)local_138,0x104);
          wsprintfA(local_34,&DAT_20dc50bc,param_11 & 0xffff);
          lstrcatA((LPSTR)local_138,local_34);
          param_12 = RegCreateKeyExA(param_8,s_ToolboxBitmap32_20dc50c4,0,&DAT_20dc52ec,0,0xf003f,
                                     (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
          if (param_12 != 0) goto LAB_20db931f;
          iVar3 = lstrlenA((LPCSTR)local_138);
          param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
          if (param_12 != 0) goto LAB_20db931f;
        }
        HVar5 = CoCreateInstance((IID *)&DAT_20db01c0,(LPUNKNOWN)0x0,1,(IID *)&DAT_20db01d0,&param_6
                                );
        if (-1 < HVar5) {
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_20dc5328;
          do {
            if (0x20dc534f < (int)ppuVar6) break;
            puVar2 = (undefined4 *)*ppuVar6;
            *puVar7 = *puVar2;
            param_11 = param_11 + 1;
            ppuVar6 = ppuVar6 + 1;
            puVar7[1] = puVar2[1];
            puVar1 = puVar7 + 3;
            puVar7[2] = puVar2[2];
            puVar7 = puVar7 + 4;
            *puVar1 = puVar2[3];
          } while ((int)param_11 < 6);
          (**(code **)(*param_6 + 0x14))(param_6,param_9,6,local_1d8);
          (**(code **)(*param_6 + 8))(param_6);
        }
      }
    }
  }
LAB_20db931f:
  if (param_8 != (HKEY)0x0) {
    RegCloseKey(param_8);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return param_12 == 0;
}



bool __cdecl FUN_20db9348(undefined4 *param_1,HKEY param_2)

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
  iVar3 = FUN_20db8912(param_1,(LPSTR)local_108);
  if ((iVar3 != 0) &&
     (LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID_20dc50d4,0,0xf003f,&param_2), LVar4 == 0)) {
    iVar3 = FUN_20db998e(param_2,local_108);
    if ((iVar3 != 0) && (lstrcatA((LPSTR)local_108,s__InprocServer32_20dc50dc), pHVar1 != (HKEY)0x0)
       ) {
      pHVar1->unused = 0;
    }
    bVar2 = FUN_20db955a(param_2,(LPCSTR)local_108);
    RegCloseKey(param_2);
    return bVar2;
  }
  return false;
}



undefined4 __cdecl FUN_20db93e6(undefined4 param_1,undefined4 param_2,int param_3,HKEY param_4)

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
  
  bVar1 = FUN_20db9348(param_4,&local_10);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_20db949b:
    uVar3 = 0;
  }
  else {
    if (local_10.unused != 0) {
      wsprintfA((LPSTR)local_118,s__s__s__ld_20dc50ec,param_1,param_2,param_3);
      bVar1 = FUN_20db955a((HKEY)0x80000000,(LPCSTR)local_118);
      if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_20db949b;
      iVar2 = FUN_20db95de(param_1,param_2,param_3,(int *)&local_8,&local_c);
      if (iVar2 == 0) {
        if (local_c == 0) {
          wsprintfA((LPSTR)local_118,s__s__s_20dc50f8,param_1,param_2);
          bVar1 = FUN_20db955a((HKEY)0x80000000,(LPCSTR)local_118);
          if (CONCAT31(extraout_var_01,bVar1) == 0) goto LAB_20db949b;
        }
      }
      else {
        FUN_20db96a0(param_1,param_2,local_8);
        wsprintfA((LPSTR)local_118,s__s__s_CurVer_20dc5100,param_1,param_2);
        LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,0xf003f,&param_4);
        if (LVar4 != 0) {
          LVar4 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,&DAT_20dc52f0,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&param_4,&local_14);
          if (LVar4 != 0) goto LAB_20db9552;
          wsprintfA((LPSTR)local_118,s__s__s__ld_20dc5110,param_1,param_2,local_8);
          iVar2 = lstrlenA((LPCSTR)local_118);
          RegSetValueExA(param_4,(LPCSTR)0x0,0,1,local_118,iVar2 + 1);
        }
        RegCloseKey(param_4);
      }
    }
LAB_20db9552:
    uVar3 = 1;
  }
  return uVar3;
}



bool __cdecl FUN_20db955a(HKEY param_1,LPCSTR param_2)

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
      bVar1 = FUN_20db955a(local_8,local_110);
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
FUN_20db95de(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

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
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,&DAT_20dc52f4,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    iVar2 = 0x20;
    do {
      if (param_3 != iVar2) {
        wsprintfA(local_114,s__s__s__ld_20dc511c,param_1,param_2,iVar2);
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



bool __cdecl FUN_20db96a0(undefined4 param_1,undefined4 param_2,HKEY param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  wsprintfA(local_110,s__s__s__ld_20dc5128,param_1,param_2,param_3);
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,local_110,0,0xf003f,&param_3);
  if (LVar2 == 0) {
    wsprintfA(local_110,s__s__s_20dc5134,param_1,param_2);
    FUN_20db955a((HKEY)0x80000000,local_110);
    uVar3 = RegCreateKeyExA((HKEY)0x80000000,local_110,0,&DAT_20dc52f8,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if (uVar3 == 0) {
      bVar1 = FUN_20db9777(param_3,local_8);
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



bool __cdecl FUN_20db9777(HKEY param_1,HKEY param_2)

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
      goto LAB_20db9888;
      local_14 = RegCreateKeyExA(param_2,(LPCSTR)local_12c,0,&DAT_20dc52fc,0,0x2001f,
                                 (LPSECURITY_ATTRIBUTES)0x0,&local_18,&local_20);
      if (local_14 != 0) break;
      FUN_20db9777(local_10,local_18);
      RegCloseKey(local_10);
      RegCloseKey(local_18);
      local_c = local_c + 1;
      iVar2 = RegEnumKeyExA(param_1,local_c,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_28);
    }
    RegCloseKey(local_10);
LAB_20db9888:
    bVar3 = local_14 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



uint __thiscall FUN_20db989c(void *this,LPSTR param_1,uint param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_c = DAT_20dc513c;
  _uStack_8 = CONCAT22((short)((uint)this >> 0x10),DAT_20dc5140);
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



undefined4 __cdecl FUN_20db98ea(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_214 [260];
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = FUN_20db8912(param_1,local_110);
  if (iVar1 != 0) {
    wsprintfA(local_214,s_CLSID__s_20dc5144,local_110);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,local_214,0,&DAT_20dc5300,0,0x20019,
                            (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,s_Implemented_Categories_20dc5150,0,0xf003f,&local_8);
      RegCloseKey(param_1);
      if (LVar2 == 0) {
        RegCloseKey(local_8);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_20db998e(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [260];
  
  wsprintfA(local_108,s__s_InprocServer_20dc5168,param_2);
  LVar1 = RegOpenKeyExA(param_1,local_108,0,0xf003f,&param_2);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(param_2);
  return 1;
}



char * __cdecl FUN_20db99e0(LPCSTR param_1)

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



int FUN_20db9a03(undefined4 param_1,int param_2)

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
  DVar2 = GetModuleFileNameA(DAT_20dc4164,local_170,0x104);
  if (((DVar2 != 0) && (iVar3 = FUN_20db9a9b(local_170,local_6c), iVar3 != 0)) &&
     (iVar3 = FUN_20db9a9b(param_1,local_38), iVar3 != 0)) {
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



int FUN_20db9a9b(undefined4 param_1,undefined4 *param_2)

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
  dwBytes = FUN_20db9b49(param_1,&local_c);
  if (dwBytes != 0) {
    lpMem = HeapAlloc(DAT_20dc4190,0,dwBytes);
    if (lpMem == (LPVOID)0x0) {
      return local_8;
    }
    local_8 = FUN_20db9bac(param_1,local_c,dwBytes,lpMem);
    if ((local_8 != 0) &&
       (local_8 = FUN_20db9c17(lpMem,&DAT_20dc5178,&local_14,&local_10), local_8 != 0)) {
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
    HeapFree(DAT_20dc4190,0,lpMem);
  }
  return local_8;
}



int __cdecl FUN_20db9b49(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc54b8 == (FARPROC)0x0) {
    if ((DAT_20dc4198 == (HMODULE)0x0) &&
       (DAT_20dc4198 = LoadLibraryA(s_VERSION_DLL_20dc517c), DAT_20dc4198 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_20dc54b8 = GetProcAddress(DAT_20dc4198,s_GetFileVersionInfoSizeA_20dc5188);
    if (DAT_20dc54b8 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar1 = (*DAT_20dc54b8)(param_1,param_2);
  return iVar1;
}



int __cdecl
FUN_20db9bac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc54b4 == (FARPROC)0x0) {
    if ((DAT_20dc4198 == (HMODULE)0x0) &&
       (DAT_20dc4198 = LoadLibraryA(s_VERSION_DLL_20dc51a0), DAT_20dc4198 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_20dc54b4 = GetProcAddress(DAT_20dc4198,s_GetFileVersionInfoA_20dc51ac);
    if (DAT_20dc54b4 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar1 = (*DAT_20dc54b4)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl
FUN_20db9c17(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc54b0 == (FARPROC)0x0) {
    if ((DAT_20dc4198 == (HMODULE)0x0) &&
       (DAT_20dc4198 = LoadLibraryA(s_VERSION_DLL_20dc51c0), DAT_20dc4198 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_20dc54b0 = GetProcAddress(DAT_20dc4198,s_VerQueryValueA_20dc51cc);
    if (DAT_20dc54b0 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar1 = (*DAT_20dc54b0)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl FUN_20db9c82(int *param_1,undefined4 param_2,undefined2 *param_3)

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



undefined4 * __thiscall FUN_20db9ce9(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_20da3025(this,param_1,this);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_20daf980;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_20daf968;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_20daf928;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_20db9d29(void *this,byte param_1)

{
  FUN_20db2e14((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_20db9d51(void *this,int *param_1,undefined4 *param_2)

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
    pcVar3 = &DAT_20db01f0;
    piVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == (char)*piVar4;
      pcVar3 = pcVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) goto LAB_20db9d7e;
LAB_20db9d96:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x14U);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = piVar4;
    uVar1 = 0;
  }
  else {
LAB_20db9d7e:
    if (*param_1 == 0x1e44665) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = &DAT_20db01e0;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == (char)*piVar4;
        pcVar3 = pcVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (bVar5);
      if (bVar5) goto LAB_20db9d96;
    }
    uVar1 = FUN_20da54e4(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_20db9dc4(int param_1,int *param_2)

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



uint FUN_20db9df1(int *param_1,HWND param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_20dba536((int)(param_1 + -5));
  if (-1 < (int)uVar1) {
    uVar1 = FUN_20dba6db((int)(param_1 + -5));
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



int FUN_20db9e43(int param_1)

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



undefined4 FUN_20db9e8b(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  tagRECT local_14;
  
  FUN_20dba536(param_1 + -0x14);
  puVar4 = param_2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_20db88d1(*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0xc) * 2] + 0x1a),
                       (BSTR)0x1);
  param_2[1] = uVar1;
  uVar1 = FUN_20db88d1(*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0xc) * 2] + 0x1c),
                       (BSTR)0x1);
  param_2[4] = uVar1;
  pWVar2 = FUN_20da95d3(*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0xc) * 2] + 0x20),
                        (BSTR)0x1);
  iVar3 = *(int *)(param_1 + 0xc);
  param_2[5] = pWVar2;
  param_2[6] = *(undefined4 *)((&PTR_PTR_20dc489c)[iVar3 * 2] + 0x24);
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



undefined4 FUN_20db9f7b(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (((uint)param_1[5] >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  FUN_20dba5e6((int)(param_1 + -5));
  uVar4 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = HeapAlloc(DAT_20dc4190,0,param_2 << 2);
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
        uVar2 = FUN_20dba6db((int)(param_1 + -5));
      }
    }
  }
  return uVar2;
}



int FUN_20dba075(int param_1)

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



int FUN_20dba0d3(int param_1,LPCWSTR param_2)

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
  local_c = FUN_20db99e0(*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0xc) * 2] + 0x20));
  if (local_c != (char *)0x0) {
    iVar2 = lstrcmpiA(local_c,&DAT_20dc51dc);
    if (iVar2 == 0) {
      lstrcpyA(local_190,*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      iVar2 = FUN_20dbb0f2(local_190,
                           *(undefined4 *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x24),
                           &param_1);
      local_8 = (uint)(-1 < iVar2);
      if (param_1 != 0) goto LAB_20dba219;
      iVar2 = lstrlenW(param_2);
      local_8 = iVar2 * 2 + 2;
      FUN_20da29fd(local_8c,local_8);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_20dc51e0);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      local_8 = FUN_20dbb276(*(undefined4 *)(iVar1 + 8),local_190,0xf,
                             *(undefined4 *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x24))
      ;
    }
    else {
      iVar2 = lstrcmpiA(local_c,&DAT_20dc51e4);
      if (iVar2 != 0) goto LAB_20dba219;
      iVar2 = lstrlenW(param_2);
      cbMultiByte = iVar2 * 2 + 2;
      FUN_20da29fd(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_20dc51e8);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      lstrcatA(local_190,s_>LangRef_20dc51ec);
      local_8 = WinHelpA(*(HWND *)(iVar1 + 8),local_190,1,
                         *(ULONG_PTR *)((&PTR_PTR_20dc489c)[*(int *)(iVar1 + 0xc) * 2] + 0x24));
    }
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_8c[0]);
    }
  }
LAB_20dba219:
  return (-(uint)(local_8 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 __cdecl FUN_20dba4a3(HWND param_1,HWND param_2,UINT param_3)

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



undefined4 FUN_20dba50c(int param_1,WPARAM param_2)

{
  undefined4 local_8;
  
  local_8 = 0x80004001;
  SendMessageA(*(HWND *)(param_1 + 8),0x466,param_2,(LPARAM)&local_8);
  return local_8;
}



uint __fastcall FUN_20dba536(int param_1)

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
    lpName = (LPCSTR)(uint)*(ushort *)((&PTR_PTR_20dc489c)[*(int *)(param_1 + 0x20) * 2] + 0x18);
    pHVar1 = FUN_20dba73b(param_1);
    hResInfo = FindResourceA(pHVar1,lpName,lpType);
    if (hResInfo != (HRSRC)0x0) {
      pHVar1 = FUN_20dba73b(param_1);
      hResData = LoadResource(pHVar1,hResInfo);
      if ((hResData != (HGLOBAL)0x0) &&
         (lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData), lpTemplate != (LPCDLGTEMPLATEA)0x0))
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
        dwInitParam = 0;
        lpDialogFunc = FUN_20dba64b;
        DAT_20dc54bc = param_1;
        hWndParent = FUN_20dba8a3();
        CreateDialogIndirectParamA(DAT_20dc4164,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
        DAT_20dc54bc = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
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



void __fastcall FUN_20dba5e6(int param_1)

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
    HeapFree(DAT_20dc4190,0,*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 FUN_20dba64b(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 == (int *)0xffffffff) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      SetWindowLongA(param_1,-0x15,(LONG)DAT_20dc54bc);
      piVar1 = DAT_20dc54bc;
      DAT_20dc54bc[7] = (int)param_1;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



void __thiscall FUN_20dba695(void *this,uint *param_1)

{
  *param_1 = 0;
  FUN_20dba6a5(this,param_1);
  return;
}



undefined4 __thiscall FUN_20dba6a5(void *this,uint *param_1)

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



undefined4 __fastcall FUN_20dba6db(int param_1)

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



void __fastcall FUN_20dba720(int param_1)

{
  int *piVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x20dba749)

HINSTANCE __fastcall FUN_20dba73b(int param_1)

{
  int *piVar1;
  HINSTANCE pHVar2;
  
  pHVar2 = DAT_20dc4160;
  if (DAT_20dc4160 == (HINSTANCE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if ((DAT_20dc4dd0 == 0) && (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_20dc4dc8);
      DAT_20dc4dd0 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    pHVar2 = FUN_20da8810(0);
  }
  return pHVar2;
}



char FUN_20dba79c(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



HWND __cdecl FUN_20dba801(int param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  ATOM AVar1;
  HWND pHVar2;
  int iVar3;
  WNDCLASSA *pWVar4;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc48d4 == '\0') {
    pWVar4 = &local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4->style = 0;
      pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
    }
    local_2c.lpfnWndProc = FUN_20db732c;
    local_2c.hInstance = DAT_20dc4164;
    local_2c.lpszClassName = "CtlFrameWork_ReflectWindow";
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      return (HWND)0x0;
    }
    DAT_20dc48d4 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  pHVar2 = CreateWindowExA(0,"CtlFrameWork_ReflectWindow",(LPCSTR)0x0,
                           -(uint)(param_1 != 0) & 0x10000000 | 0x44000000,param_3,param_4,*param_5,
                           param_5[1],param_2,(HMENU)0x0,DAT_20dc4164,(LPVOID)0x0);
  return pHVar2;
}



HWND FUN_20dba8a3(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc48d0 == (HWND)0x0) {
    pWVar3 = &local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->style = 0;
      pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
    }
    local_2c.lpfnWndProc = DAT_20dc549c;
    if (DAT_20dc549c == (WNDPROC)0x0) {
      local_2c.lpfnWndProc = FUN_20dba932;
    }
    local_2c.lpszClassName = s_CtlFrameWork_Parking_20dc51f8;
    local_2c.hInstance = DAT_20dc4164;
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 != 0) {
      DAT_20dc48d0 = CreateWindowExA(0,s_CtlFrameWork_Parking_20dc5210,(LPCSTR)0x0,0x80000000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_20dc4164,(LPVOID)0x0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return DAT_20dc48d0;
}



LRESULT FUN_20dba932(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  LRESULT local_8;
  
  bVar1 = FUN_20db723c(param_1,param_2,param_3,param_4,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  return local_8;
}



undefined4 * __thiscall FUN_20dba984(void *this,byte param_1)

{
  FUN_20dbaa0d((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_20dba9ac(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  FUN_20da3025(this,(undefined4 *)0x0,-(uint)(this != (void *)0x0) & (int)this + 0x14U);
  *(undefined ***)((int)this + 0x14U) = &PTR_LAB_20dafa08;
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
  *(undefined ***)this = &PTR_FUN_20daf9d0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_20daf9e8;
  return (undefined4 *)this;
}



void __fastcall FUN_20dbaa0d(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  *param_1 = &PTR_FUN_20daf9d0;
  param_1[5] = &PTR_LAB_20daf9e8;
  if (iVar1 == 0) {
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      HeapFree(DAT_20dc4190,0,(LPVOID)param_1[0xd]);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 8))(iVar1 + 0x14);
  }
  *param_1 = &PTR_FUN_20da8410;
  InterlockedDecrement(&DAT_20dc48c8);
  return;
}



bool FUN_20dbaab5(int param_1,uint param_2,int param_3,uint *param_4)

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



undefined4 FUN_20dbab46(int *param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  LPVOID this;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pvVar1 = DAT_20dc4190;
  puVar3 = (undefined4 *)0x0;
  *param_2 = 0;
  this = FUN_20da2c52(0x40,pvVar1);
  if (this != (LPVOID)0x0) {
    puVar3 = FUN_20dba9ac(this,param_1 + 1,param_1[5],param_1[6],param_1[8],param_1[10]);
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



HRESULT __fastcall DllRegisterServer(void *param_1)

{
  HRESULT HVar1;
  int iVar2;
  
                    // 0x1abab  4  DllRegisterServer
  HVar1 = FUN_20dbabe5(param_1);
  if (-1 < HVar1) {
    iVar2 = FUN_20db73b5();
    HVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return HVar1;
}



int DllUnregisterServer(void)

{
  int iVar1;
  
                    // 0x1abc8  5  DllUnregisterServer
  iVar1 = FUN_20dbaeda();
  if (-1 < iVar1) {
    iVar1 = FUN_20db73b5();
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return iVar1;
}



HRESULT __fastcall FUN_20dbabe5(void *param_1)

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
  if (DAT_20dc5340 != 0) {
    GetModuleFileNameA(DAT_20dc4164,local_228,0x104);
    local_18 = FUN_20da95d3(local_228,(BSTR)0x0);
    HVar4 = LoadTypeLib(local_18,&local_14);
    if (HVar4 < 0) goto LAB_20dbadf9;
    (*local_14->lpVtbl->GetLibAttr)(local_14,&local_8);
    local_10 = (LPWSTR)(uint)local_8->wMajorVerNum;
    local_1c = (uint)local_8->wMinorVerNum;
    (*local_14->lpVtbl->ReleaseTLibAttr)(local_14,local_8);
    param_1 = extraout_ECX;
  }
  if (DAT_20dc4898 != -1) {
    local_8 = (TLIBATTR *)&DAT_20dc4898;
    ppuVar9 = &PTR_PTR_20dc489c;
    do {
      if (*(int *)*ppuVar9 != 0) {
        if (uVar8 == 0) {
          if (local_c == 0) {
            local_c = FUN_20db989c(param_1,aCStack_125 + 1,0x104);
            lstrcatA(aCStack_125 + 1,&DAT_20dc525a);
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
LAB_20dbaec0:
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_20db895d(puVar3[1],(LPCSTR)puVar3[2],(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_04;
        }
        else if (sVar1 == 1) {
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_20db8afc("MSFlexGridLib",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],local_10,
                       local_1c,(undefined4 *)PTR_LAB_20dc4e18,(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_03;
        }
        else if (sVar1 == 2) {
          uVar10 = 1;
          iVar6 = FUN_20db9c82((int *)local_14,*(undefined4 *)*ppuVar9,(undefined2 *)&local_20);
          if (-1 < iVar6) {
            uVar10 = local_20 & 0x20;
          }
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_20db901f("MSFlexGridLib",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],puVar3[7],
                       (int *)local_10,local_1c,(HKEY)PTR_LAB_20dc4e18,(HKEY)*puVar3,puVar3[0xd],
                       CONCAT22(extraout_var,*(undefined2 *)(puVar3 + 0x10)),puVar3[3],uVar10);
          param_1 = extraout_ECX_02;
        }
        else if (sVar1 == 3) goto LAB_20dbaec0;
      }
      local_8 = (TLIBATTR *)(local_8->guid).Data4;
      ppuVar9 = ppuVar9 + 2;
    } while (*(short *)local_8 != -1);
  }
  if (DAT_20dc5340 != 0) {
    if ((uVar8 == 0) ||
       (szHelpDir = FUN_20da95d3(aCStack_125 + 1,(BSTR)0x1), local_10 = szHelpDir, uVar8 == 0)) {
      szHelpDir = (LPCOLESTR)&DAT_20dc5302;
    }
    HVar4 = RegisterTypeLib(local_14,local_18,szHelpDir);
    if (uVar8 != 0) {
      CoTaskMemFree(local_10);
    }
    (*local_14->lpVtbl->Release)(local_14);
    if (HVar4 < 0) goto LAB_20dbadf9;
  }
  HVar4 = 0;
LAB_20dbadf9:
  SysFreeString(local_18);
  return HVar4;
}



undefined4 FUN_20dbaeda(void)

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
  if (DAT_20dc4898 != -1) {
    psVar6 = &DAT_20dc4898;
    local_8 = &PTR_PTR_20dc489c;
    do {
      puVar2 = (undefined4 *)*local_8;
      pHVar3 = (HKEY)*puVar2;
      if (pHVar3 != (HKEY)0x0) {
        sVar1 = *psVar6;
        if (sVar1 == 0) {
LAB_20dbb040:
          FUN_20db9348(pHVar3,(HKEY)0x0);
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          FUN_20db93e6("MSFlexGridLib",puVar2[1],puVar2[6],pHVar3);
        }
        else if (sVar1 == 3) goto LAB_20dbb040;
      }
      local_8 = local_8 + 2;
      psVar6 = psVar6 + 4;
    } while (*psVar6 != -1);
  }
  if (PTR_LAB_20dc4e18 != (undefined *)0x0) {
    GetModuleFileNameA(DAT_20dc4164,local_194,0x104);
    iVar4 = lstrlenA(local_194);
    cchWideChar = iVar4 * 2 + 2;
    FUN_20da29fd(local_90,cchWideChar);
    MultiByteToWideChar(0,0,local_194,-1,local_90[0],cchWideChar);
    HVar5 = LoadTypeLibEx(local_90[0],REGKIND_NONE,&local_c);
    if (-1 < HVar5) {
      HVar5 = (*local_c->lpVtbl->GetLibAttr)(local_c,&local_10);
      if (-1 < HVar5) {
        UnRegisterTypeLib((GUID *)PTR_LAB_20dc4e18,local_10->wMajorVerNum,local_10->wMinorVerNum,
                          local_10->lcid,local_10->syskind);
      }
    }
    if ((local_90[0] != (LPCOLESTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_20dc4190,0,local_90[0]);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __cdecl FUN_20dbb04e(undefined4 *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *local_8;
  
  HVar2 = 0;
  local_8 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc48cc == (int *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_20dafa68,(LPUNKNOWN)0x0,1,(IID *)&DAT_20dafa78,
                             &DAT_20dc48cc);
    if (-1 < HVar2) {
      if (DAT_20dc48cc == (int *)0x0) {
        HVar2 = -0x7fffbffb;
      }
      else {
        iVar1 = (**(code **)*DAT_20dc48cc)(DAT_20dc48cc,&DAT_20dafa58,&local_8);
        if (-1 < iVar1) {
          (**(code **)(*local_8 + 0x10))(local_8,_DAT_20dc4dc8);
        }
        HVar2 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (-1 < HVar2) {
    (**(code **)(*DAT_20dc48cc + 4))(DAT_20dc48cc);
    *param_1 = DAT_20dc48cc;
  }
  return HVar2;
}



int __cdecl FUN_20dbb0f2(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPWSTR bstrString;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_20dbb04e(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x28))(local_8,0);
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      bstrString = FUN_20da95d3(param_1,(BSTR)0x0);
      iVar1 = (**(code **)(*local_8 + 0x24))(local_8,bstrString,param_2,4);
      SysFreeString(bstrString);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}



int FUN_20dbb20c(int param_1,int param_2,undefined4 param_3,int *param_4,short *param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc4d5c == 0) {
    DAT_20dc4d60 = FUN_20da29a4();
    DAT_20dc4d5c = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  iVar1 = FUN_20db6ca0(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x7ffbfeee;
  }
  else {
    iVar1 = FUN_20da2bc6(param_2,*(int *)(param_1 + 8),param_6,param_4);
  }
  return iVar1;
}



int FUN_20dbb276(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BYTE local_108 [260];
  
  if ((DAT_20dc5308 == (HMODULE)0x0) && (DAT_20dc5310 == 0)) {
    bVar1 = FUN_20dbb30f(local_108);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_20dc5308 = LoadLibraryA((LPCSTR)local_108);
    }
    if (DAT_20dc5308 != (HMODULE)0x0) goto LAB_20dbb2d3;
    DAT_20dc5308 = LoadLibraryA("hhctrl.ocx");
    if (DAT_20dc5308 != (HMODULE)0x0) goto LAB_20dbb2d3;
LAB_20dbb2ee:
    DAT_20dc5310 = 1;
    iVar2 = 0;
  }
  else {
LAB_20dbb2d3:
    if (DAT_20dc54c0 == (FARPROC)0x0) {
      DAT_20dc54c0 = GetProcAddress(DAT_20dc5308,(LPCSTR)0xe);
      if (DAT_20dc54c0 == (FARPROC)0x0) goto LAB_20dbb2ee;
    }
    iVar2 = (*DAT_20dc54c0)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



bool FUN_20dbb30f(LPBYTE param_1)

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



// Library Function - Single Match
//  __ftol
// 
// Library: Visual Studio

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_20dc54c4 == 1) || ((DAT_20dc54c4 == 0 && (DAT_20dc54c8 == 1)))) {
    FUN_20dbb471();
  }
  FUN_20dbb4ae(param_1);
  (*(code *)PTR___exit_20dc5344)(0xff);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_20da1a0c(_Code,1,0);
  return;
}



undefined4 __cdecl FUN_20dbb3df(undefined4 param_1)

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

void FUN_20dbb43f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_20dc4a00;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_20dc4b08 = 0;
  _DAT_20dc4b1c = 0;
  DAT_20dc4b0c = 0;
  _DAT_20dc4b10 = 0;
  _DAT_20dc4b14 = 0;
  _DAT_20dc4b18 = 0;
  return;
}



void FUN_20dbb471(void)

{
  if ((DAT_20dc54c4 == 1) || ((DAT_20dc54c4 == 0 && (DAT_20dc54c8 == 1)))) {
    FUN_20dbb4ae(0xfc);
    if (DAT_20dc54cc != (code *)0x0) {
      (*DAT_20dc54cc)();
    }
    FUN_20dbb4ae(0xff);
  }
  return;
}



void __cdecl FUN_20dbb4ae(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar13;
  DWORD local_1a8;
  char acStack_1a4 [100];
  uint auStack_140 [15];
  undefined4 local_104;
  
  piVar2 = &DAT_20dc5350;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_20dc53e0);
  if (param_1 == (&DAT_20dc5350)[iVar8 * 2]) {
    if ((DAT_20dc54c4 == 1) || ((DAT_20dc54c4 == 0 && (DAT_20dc54c8 == 1)))) {
      if ((DAT_20dc4060 == 0) ||
         (hFile = *(HANDLE *)(DAT_20dc4060 + 0x10), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar9 = *(char **)(iVar8 * 8 + 0x20dc5354);
      uVar5 = 0xffffffff;
      pcVar13 = pcVar9;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar9,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)&local_104,0x104);
      if (DVar3 == 0) {
        pcVar9 = "<program name unknown>";
        puVar10 = &local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = *(undefined2 *)pcVar9;
        *(char *)((int)puVar10 + 2) = pcVar9[2];
      }
      uVar5 = 0xffffffff;
      puVar7 = &local_104;
      pcVar9 = (char *)&local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar9 = (char *)&local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        puVar7 = (uint *)((int)auStack_140 + ~uVar5);
        FUN_20dbb83b(puVar7,(uint *)&DAT_20dafd5c,3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar13 = acStack_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar13 = pcVar13 + 4;
      }
      *(undefined2 *)pcVar13 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        puVar11 = puVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        puVar11 = (uint *)((int)puVar7 + 1);
        uVar6 = *puVar7;
        puVar7 = puVar11;
      } while ((char)uVar6 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar9 = acStack_1a4;
      do {
        pcVar13 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar13 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar13;
      } while (cVar1 != '\0');
      pcVar9 = (char *)((int)puVar11 - uVar5);
      pcVar13 = pcVar13 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = "\n\n";
      do {
        pcVar13 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar9 = acStack_1a4;
      do {
        pcVar12 = pcVar9;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      pcVar9 = pcVar13 + -uVar5;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar9 = *(char **)(iVar8 * 8 + 0x20dc5354);
      do {
        pcVar13 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar13 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar13;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar9 = acStack_1a4;
      do {
        pcVar12 = pcVar9;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar12 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar12;
      } while (cVar1 != '\0');
      pcVar9 = pcVar13 + -uVar5;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar13 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_20dbb7ac(acStack_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



void __cdecl FUN_20dbb684(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_PTR_LOOP_20dc4908 == param_1) {
    PTR_PTR_LOOP_20dc4908 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_20dc2038) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_20dc2024,0,param_1);
    return;
  }
  DAT_20dc2048 = 0xffffffff;
  return;
}



void __cdecl FUN_20dbb6df(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_PTR_LOOP_20dc203c;
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
            DAT_20dc54d0 = DAT_20dc54d0 + -1;
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
          FUN_20dbb684(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_PTR_LOOP_20dc203c) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_20dbb7ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_20dc54f4 != (FARPROC)0x0) {
LAB_20dbb7fc:
    if (DAT_20dc54f8 != (FARPROC)0x0) {
      iVar1 = (*DAT_20dc54f8)();
    }
    if ((iVar1 != 0) && (DAT_20dc54fc != (FARPROC)0x0)) {
      iVar1 = (*DAT_20dc54fc)(iVar1);
    }
    iVar1 = (*DAT_20dc54f4)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_20dc54f4 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_20dc54f4 != (FARPROC)0x0) {
      DAT_20dc54f8 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_20dc54fc = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_20dbb7fc;
    }
  }
  return 0;
}



uint * __cdecl FUN_20dbb83b(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar5 = param_1;
  if (((uint)param_2 & 3) != 0) {
    while( true ) {
      uVar4 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return param_1;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)param_2 & 3) == 0) {
        uVar4 = param_3 >> 2;
        goto joined_r0x20dbb886;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = param_3 >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_20dbb8b2;
        goto LAB_20dbb906;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return param_1;
  }
  uVar4 = param_3 >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *param_2;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x20dbb902:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_20dbb906:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          param_3 = param_3 & 3;
          if (param_3 != 0) goto LAB_20dbb8b2;
          return param_1;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x20dbb902;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x20dbb902;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x20dbb902;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x20dbb886:
    } while (uVar4 != 0);
    param_3 = param_3 & 3;
    if (param_3 == 0) {
      return param_1;
    }
  }
  do {
    cVar3 = (char)*param_2;
    param_2 = (uint *)((int)param_2 + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (param_3 = param_3 - 1, param_3 != 0) {
LAB_20dbb8b2:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return param_1;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return param_1;
}



undefined4 __cdecl FUN_20dbb935(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_20dc5500 != (code *)0x0) {
    iVar1 = (*DAT_20dc5500)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined4 * __thiscall FUN_20dbb955(void *this,byte param_1)

{
  FUN_20da72c3((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_20da193b(this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_20dbba05(void *this,int param_1)

{
  if ((param_1 == -0x2c1) && (*(LPVOID *)((int)this + 0x38) != (LPVOID)0x0)) {
    HeapFree(DAT_20dc4190,0,*(LPVOID *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return;
}



int __thiscall FUN_20dbba30(void *this,DWORD *param_1)

{
  HANDLE pvVar1;
  IDataObject *pDataObj;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 *puVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 *local_20;
  DWORD local_1c;
  DWORD local_18;
  undefined4 *local_14;
  IDropSource *local_10;
  undefined4 *local_c;
  IDataObject *local_8;
  
  local_18 = 0;
  local_8 = (IDataObject *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = (IDropSource *)0x0;
  local_2c = 0x60e;
  local_28 = 2;
  local_24 = &DAT_20dc53e8;
  local_38 = 0x611;
  local_34 = 1;
  local_30 = &DAT_20dc53e0;
  if ((*(byte *)((int)this + 0x2c) & 1) != 0) {
    iVar4 = FUN_20dbbcee((int *)this,0x2a2,*(int **)((int)this + 0x38));
    return iVar4;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 1;
  uVar3 = GetKeyState(1);
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffd | (uVar3 & 0x8000) >> 0xe;
  uVar3 = GetKeyState(2);
  pvVar1 = DAT_20dc4190;
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffb | (uVar3 & 0x8000) >> 0xd;
  pvVar5 = FUN_20da2c52(0x34,pvVar1);
  puVar7 = (undefined4 *)0x0;
  if (pvVar5 == (LPVOID)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    uVar6 = FUN_20daa1ec((int)this);
    local_c = FUN_20dbe947(pvVar5,*(undefined4 *)((int)this + 0x24),this,uVar6);
  }
  if (local_c != (undefined4 *)0x0) {
    pvVar5 = FUN_20da2c52(0x38,DAT_20dc4190);
    if (pvVar5 == (LPVOID)0x0) {
      local_8 = (IDataObject *)0x0;
    }
    else {
      uVar6 = FUN_20daa1ec((int)this);
      local_8 = (IDataObject *)
                FUN_20dbe31f(pvVar5,*(undefined4 *)((int)this + 4),(int)local_c,this,uVar6);
    }
    if (local_8 != (IDataObject *)0x0) {
      pvVar5 = FUN_20da2c52(0x38,DAT_20dc4190);
      if (pvVar5 == (LPVOID)0x0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_20daa1ec((int)this);
        puVar7 = FUN_20dbde12(pvVar5,(int *)local_8,0,*(undefined4 *)((int)this + 0x20),local_c,this
                              ,uVar6);
      }
      if (puVar7 == (undefined4 *)0x0) {
LAB_20dbbc75:
        iVar4 = -0x7ff8fff2;
      }
      else {
        if ((((*(uint *)((int)this + 0x2c) & 0x100) != 0) &&
            (((byte)*(uint *)((int)this + 0x2c) & 0x30) == 0x10)) &&
           (iVar4 = FUN_20dbc411(this,(int)puVar7,&local_18), iVar4 < 0)) goto LAB_20dbbb2e;
        local_20 = puVar7 + 7;
        FUN_20dab370(*(int *)((int)this + 4),&local_2c);
        bVar2 = FUN_20dbc570(this);
        if (((CONCAT31(extraout_var,bVar2) == 0) && (puVar7[10] != 0)) &&
           ((*(int *)(puVar7[10] + 0xc) != 0 && (local_18 != 0)))) {
          ReleaseCapture();
          if ((*(byte *)((int)this + 0x2c) & 6) == 0) {
            FUN_20dbc5ce(this);
          }
          pDataObj = local_8;
          pvVar1 = DAT_20dc4190;
          local_8[6].lpVtbl = (IDataObjectVtbl *)0x1;
          pvVar5 = FUN_20da2c52(0xc,pvVar1);
          if (pvVar5 == (LPVOID)0x0) {
            local_10 = (LPDROPSOURCE)0x0;
          }
          else {
            local_10 = (IDropSource *)FUN_20dbc26b(pvVar5,this);
          }
          if (local_10 == (LPDROPSOURCE)0x0) goto LAB_20dbbc75;
          iVar4 = DoDragDrop(pDataObj,local_10,local_18,&local_1c);
          if (iVar4 < 0) goto LAB_20dbbb2e;
          bVar2 = FUN_20dbc570(this);
          if (CONCAT31(extraout_var_00,bVar2) == 0) {
            FUN_20dab370(*(int *)((int)this + 4),&local_38);
            bVar2 = FUN_20dbc570(this);
            if (CONCAT31(extraout_var_01,bVar2) == 0) {
              if (param_1 != (DWORD *)0x0) {
                *param_1 = local_1c;
              }
              iVar4 = 0;
              goto LAB_20dbbb2e;
            }
          }
        }
        iVar4 = 0x40101;
      }
      goto LAB_20dbbb2e;
    }
  }
  iVar4 = -0x7ff8fff2;
  puVar7 = local_14;
LAB_20dbbb2e:
  if (local_c != (undefined4 *)0x0) {
    (**(code **)(local_c[7] + 8))(local_c + 7);
  }
  if (local_8 != (IDataObject *)0x0) {
    (*local_8->lpVtbl->Release)(local_8);
  }
  if (local_10 != (IDropSource *)0x0) {
    (*local_10->lpVtbl->Release)(local_10);
  }
  if (puVar7 != (undefined4 *)0x0) {
    FUN_20dbdefb((int)puVar7);
    (**(code **)(puVar7[7] + 8))(puVar7 + 7);
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffe;
  return iVar4;
}



undefined4 __cdecl FUN_20dbbcee(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 0;
  piVar3 = param_3;
  if (param_3 != (int *)0x0) {
    for (; *piVar3 != 0; piVar3 = piVar3 + 3) {
      if (*piVar3 == param_2) {
        uVar2 = (**(code **)(*param_1 + 0xc))
                          (param_1,param_3[iVar1 * 3 + 2],(short)param_3[iVar1 * 3 + 1],
                           param_3[iVar1 * 3 + 1]);
        return uVar2;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return 0x8000ffff;
}



undefined4
FUN_20dbbd9c(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            uint *param_6)

{
  int iVar1;
  void *pvVar2;
  HWND pHVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  LPVOID this;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined3 extraout_var;
  uint *puVar9;
  byte bVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  piVar4 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  uVar5 = param_3;
  piVar4[3] = param_3;
  local_c = *param_6;
  iVar1 = *(int *)(piVar4[1] + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
    *(undefined4 *)(piVar4[1] + 0x10) = 0;
  }
  this = FUN_20da2c52(0x38,DAT_20dc4190);
  if (this == (LPVOID)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_20dbde12(this,(int *)0x0,param_2,*(undefined4 *)(piVar4[1] + 0x20),0,piVar4[5],
                          piVar4[4]);
  }
  pvVar2 = (void *)piVar4[1];
  *(undefined4 **)((int)pvVar2 + 0x10) = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    uVar8 = 0x8007000e;
  }
  else {
    if (((byte)*(undefined4 *)((int)pvVar2 + 0x2c) & 0xc0) == 0x40) {
      local_20 = 0x612;
      local_14 = 0;
      local_10 = 0;
      local_1c = 7;
      local_18 = &DAT_20dc53f0;
      param_2 = 0;
      param_3 = 0;
      param_1 = (int *)0x0;
      bVar10 = (byte)uVar5;
      FUN_20dbc71d(bVar10,&param_3);
      FUN_20dbc6f4(bVar10,(uint *)&param_1);
      FUN_20dbc744((void *)piVar4[1],*(HWND *)(piVar4[1] + 4),&param_4,&local_14);
      puVar9 = param_6;
      local_8 = *(int *)(piVar4[1] + 0x10);
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = local_8 + 0x1c;
      }
      FUN_20dab370(*(int *)(piVar4[1] + 4),&local_20);
    }
    else {
      pHVar3 = *(HWND *)((int)pvVar2 + 4);
      if (((pHVar3[0x2c].unused & 2) == 0) || (pHVar3[0x2b].unused != 0)) {
        FUN_20dbc744(pvVar2,pHVar3,&param_4,(undefined4 *)0x0);
      }
      FUN_20dbc43f((void *)piVar4[1],*(int *)(piVar4[1] + 0x10),param_6,uVar5,&param_4,0);
      puVar9 = param_6;
    }
    pvVar2 = (void *)piVar4[1];
    *puVar9 = *puVar9 & local_c;
    bVar6 = FUN_20dbc570(pvVar2);
    if (CONCAT31(extraout_var,bVar6) == 0) {
      (**(code **)(*piVar4 + 8))(piVar4);
      uVar8 = 0;
    }
    else {
      (**(code **)(*piVar4 + 8))();
      uVar8 = 0x8000ffff;
    }
  }
  return uVar8;
}



undefined4
FUN_20dbbf28(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  void *pvVar1;
  HWND pHVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  byte bVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  puVar5 = param_5;
  uVar4 = param_2;
  pvVar1 = (void *)piVar3[1];
  local_c = *param_5;
  piVar3[3] = param_2;
  if (((byte)*(undefined4 *)((int)pvVar1 + 0x2c) & 0xc0) == 0x40) {
    param_2 = 0;
    param_1 = (int *)0x0;
    local_20 = 0x612;
    local_14 = 0;
    local_10 = 0;
    local_1c = 7;
    local_18 = &DAT_20dc53f0;
    param_5 = (uint *)0x2;
    bVar8 = (byte)uVar4;
    FUN_20dbc71d(bVar8,&param_2);
    FUN_20dbc6f4(bVar8,(uint *)&param_1);
    FUN_20dbc744((void *)piVar3[1],*(HWND *)(piVar3[1] + 4),&param_3,&local_14);
    local_8 = *(int *)(piVar3[1] + 0x10);
    if (local_8 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = local_8 + 0x1c;
    }
    FUN_20dab370(*(int *)(piVar3[1] + 4),&local_20);
  }
  else {
    pHVar2 = *(HWND *)((int)pvVar1 + 4);
    if (((pHVar2[0x2c].unused & 2) == 0) || (pHVar2[0x2b].unused != 0)) {
      FUN_20dbc744(pvVar1,pHVar2,&param_3,(undefined4 *)0x0);
    }
    FUN_20dbc43f((void *)piVar3[1],*(int *)(piVar3[1] + 0x10),puVar5,uVar4,&param_3,2);
  }
  pvVar1 = (void *)piVar3[1];
  *puVar5 = *puVar5 & local_c;
  bVar6 = FUN_20dbc570(pvVar1);
  if (CONCAT31(extraout_var,bVar6) == 0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    uVar7 = 0;
  }
  else {
    (**(code **)(*piVar3 + 8))();
    uVar7 = 0x8000ffff;
  }
  return uVar7;
}



undefined4 FUN_20dbc051(int *param_1)

{
  void *this;
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14 [4];
  
  (**(code **)(*param_1 + 4))(param_1);
  this = (void *)param_1[1];
  local_14[2] = 0;
  local_14[1] = 1;
  local_2c = 0x612;
  local_28 = 7;
  local_24 = &DAT_20dc53f0;
  if (*(int *)((int)this + 0x10) != 0) {
    if (((byte)*(undefined4 *)((int)this + 0x2c) & 0xc0) == 0x40) {
      FUN_20dbc71d((byte)param_1[3],&local_18);
      FUN_20dbc6f4((byte)param_1[3],local_14);
      iVar1 = *(int *)(param_1[1] + 0x10);
      if (iVar1 == 0) {
        local_14[3] = 0;
      }
      else {
        local_14[3] = iVar1 + 0x1c;
      }
      FUN_20dab370(*(int *)(param_1[1] + 4),&local_2c);
    }
    else {
      local_20 = 0;
      local_1c = 0;
      FUN_20dbc43f(this,*(int *)((int)this + 0x10),local_14 + 2,0,&local_20,1);
    }
    iVar1 = *(int *)(param_1[1] + 0x10);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
      *(undefined4 *)(param_1[1] + 0x10) = 0;
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}



undefined4
FUN_20dbc142(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  HWND pHVar2;
  int *piVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  piVar3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  pvVar6 = (void *)piVar3[1];
  if (((byte)*(undefined4 *)((int)pvVar6 + 0x2c) & 0xc0) == 0x40) {
    local_8 = 0;
    param_1 = (int *)0x0;
    local_20 = 0x613;
    local_14 = 0;
    local_1c = 6;
    local_18 = &DAT_20dc5400;
    local_10 = 0;
    FUN_20dbc71d((byte)param_3,&local_8);
    FUN_20dbc6f4((byte)param_3,(uint *)&param_1);
    FUN_20dbc744((void *)piVar3[1],*(HWND *)(piVar3[1] + 4),&param_4,&local_14);
    local_c = *(int *)(piVar3[1] + 0x10);
    if (local_c == 0) {
      local_c = 0;
    }
    else {
      local_c = local_c + 0x1c;
    }
    FUN_20dab370(*(int *)(piVar3[1] + 4),&local_20);
  }
  else {
    pHVar2 = *(HWND *)((int)pvVar6 + 4);
    if (((pHVar2[0x2c].unused & 2) == 0) || (pHVar2[0x2b].unused != 0)) {
      FUN_20dbc744(pvVar6,pHVar2,&param_4,(undefined4 *)0x0);
    }
    FUN_20dbc43f((void *)piVar3[1],*(int *)(piVar3[1] + 0x10),param_6,param_3,&param_4,3);
  }
  pvVar6 = (void *)piVar3[1];
  iVar1 = *(int *)((int)pvVar6 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
    pvVar6 = (void *)piVar3[1];
    *(undefined4 *)((int)pvVar6 + 0x10) = 0;
  }
  bVar4 = FUN_20dbc570(pvVar6);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    uVar5 = 0;
  }
  else {
    (**(code **)(*piVar3 + 8))();
    uVar5 = 0x8000ffff;
  }
  return uVar5;
}



void __thiscall FUN_20dbc26b(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_20dafdb8;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  return;
}



undefined4 * __thiscall FUN_20dbc284(void *this,byte param_1)

{
  FUN_20dbc2ac((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20dbc2ac(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_20dafdb8;
  return;
}



uint FUN_20dbc38b(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  int local_8;
  
  local_8 = 1;
  local_14 = 0x60f;
  local_10 = 2;
  local_c = &DAT_20dc53e4;
  uVar2 = *(uint *)((int)*(void **)(param_1 + 4) + 0x2c);
  if ((((uVar2 & 0x100) != 0) && (((byte)uVar2 & 0x30) == 0x10)) &&
     (uVar2 = FUN_20dbc478(*(void **)(param_1 + 4),param_2,&local_8), (int)uVar2 < 0)) {
    return uVar2;
  }
  FUN_20dab370(*(int *)(*(int *)(param_1 + 4) + 4),&local_14);
  bVar1 = FUN_20dbc570(*(void **)(param_1 + 4));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = -(uint)(local_8 != 0) & 0x40102;
  }
  else {
    uVar2 = 0x8000ffff;
  }
  return uVar2;
}



undefined4 __thiscall FUN_20dbc411(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x40) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3c) + 0xc))
                      ((int *)**(undefined4 **)((int)this + 0x3c),
                       -(uint)(param_1 != 0) & param_1 + 0x1cU,param_2);
  }
  return uVar1;
}



undefined4 __thiscall
FUN_20dbc43f(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x40) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3c) + 0x14))
                      ((int *)**(undefined4 **)((int)this + 0x3c),
                       -(uint)(param_1 != 0) & param_1 + 0x1cU,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}



undefined4 __thiscall FUN_20dbc478(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x40) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)**(undefined4 **)((int)this + 0x3c) + 0x18))
                      ((int *)**(undefined4 **)((int)this + 0x3c),param_1,param_2);
  }
  return uVar1;
}



int __thiscall FUN_20dbc498(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_c;
  int *local_8;
  
  piVar1 = (int *)((int)this + 0x14);
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar3 = *piVar1;
  *param_1 = 0;
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)(*(int *)((int)this + 4) + 0x1c);
    iVar3 = (**(code **)*puVar2)(puVar2,&DAT_20da8500,&local_8);
    if (iVar3 < 0) goto LAB_20dbc4ed;
    iVar3 = (**(code **)(*local_8 + 0x10))(local_8,&local_c);
    if (iVar3 < 0) goto LAB_20dbc4ed;
    if (local_c == (int *)0x0) {
      iVar3 = -0x7fffbffe;
      goto LAB_20dbc4ed;
    }
    iVar3 = (**(code **)*local_c)(local_c,&DAT_20da8540,piVar1);
    if (iVar3 < 0) goto LAB_20dbc4ed;
  }
  (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
  iVar3 = 0;
  *param_1 = *piVar1;
LAB_20dbc4ed:
  piVar1 = local_8;
  if (local_8 != (int *)0x0) {
    local_8 = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = local_c;
  if (local_c != (int *)0x0) {
    local_c = (int *)0x0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return iVar3;
}



int __fastcall FUN_20dbc53a(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0x1c))
                        (*(int *)(param_1 + 4) + 0x1c,&DAT_20db00d0,puVar1), iVar2 < 0)) {
    return iVar2;
  }
  (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
  *unaff_retaddr = *puVar1;
  return 0;
}



bool __fastcall FUN_20dbc570(void *param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = *(int *)((int)param_1 + 4);
  local_8 = 0;
  if (((*(byte *)(iVar1 + 0xb0) & 2) == 0) || (*(int *)(iVar1 + 0xac) != 0)) {
    if ((*(int *)(iVar1 + 0xac) != 0) || (*(int *)(iVar1 + 0x74) != 0)) {
      piVar2 = *(int **)(iVar1 + 0xac);
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(iVar1 + 0x74);
      }
      (**(code **)(*piVar2 + 0xc))(piVar2,&local_8);
    }
  }
  else {
    FUN_20da5f45(param_1,&local_8);
  }
  return local_8 == 0;
}



void __fastcall FUN_20dbc5ce(void *param_1)

{
  int iVar1;
  int *piVar2;
  tagRECT local_24;
  tagPOINT local_14;
  int *local_c;
  HWND local_8;
  
  if (((*(byte *)(*(int *)((int)param_1 + 4) + 0xb0) & 2) == 0) ||
     (*(int *)(*(int *)((int)param_1 + 4) + 0xac) != 0)) {
    iVar1 = FUN_20dbc53a((int)param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*local_c + 0x28))(local_c,1,&local_24);
    (**(code **)(*local_c + 8))(local_c);
    if (iVar1 < 0) {
      return;
    }
    FUN_20da492b(&local_24.left,&local_24.left);
    FUN_20da492b(&local_24.right,&local_24.right);
    iVar1 = *(int *)((int)param_1 + 4);
    if ((*(int *)(iVar1 + 0xac) != 0) || (*(int *)(iVar1 + 0x74) != 0)) {
      piVar2 = *(int **)(iVar1 + 0xac);
      if (piVar2 == (int *)0x0) {
        piVar2 = *(int **)(iVar1 + 0x74);
      }
      iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_8);
      if (iVar1 < 0) {
        return;
      }
      MapWindowPoints(local_8,(HWND)0x0,(LPPOINT)&local_24,2);
    }
  }
  else {
    FUN_20da5f45(param_1,(int *)&local_8);
    GetWindowRect(local_8,&local_24);
  }
  GetCursorPos(&local_14);
  if ((((local_14.x < local_24.left) || (local_24.right < local_14.x)) ||
      (local_14.y < local_24.top)) || (local_24.bottom < local_14.y)) {
    local_14.x = (local_24.right - local_24.left) / 2 + local_24.left;
    local_14.y = (local_24.bottom - local_24.top) / 2 + local_24.top;
    SetCursorPos(local_14.x,local_14.y);
  }
  return;
}



void __cdecl FUN_20dbc6f4(byte param_1,uint *param_2)

{
  *param_2 = 0;
  if ((param_1 & 4) != 0) {
    *param_2 = 1;
  }
  if ((param_1 & 8) != 0) {
    *param_2 = *param_2 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    *param_2 = *param_2 | 4;
  }
  return;
}



void __cdecl FUN_20dbc71d(byte param_1,uint *param_2)

{
  *param_2 = 0;
  if ((param_1 & 1) != 0) {
    *param_2 = 1;
  }
  if ((param_1 & 2) != 0) {
    *param_2 = *param_2 | 2;
  }
  if ((param_1 & 0x10) != 0) {
    *param_2 = *param_2 | 4;
  }
  return;
}



void __thiscall FUN_20dbc744(void *this,HWND param_1,int *param_2,undefined4 *param_3)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_28;
  int local_24;
  tagPOINT local_18;
  void *local_10;
  int *local_c;
  int *local_8;
  
  puVar5 = param_3;
  pHVar1 = param_1;
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  local_10 = this;
  if (((param_1[0x2c].unused & 2) == 0) || (param_1[0x2b].unused != 0)) {
    piVar2 = (int *)param_1[0x2b].unused;
    piVar4 = piVar2;
    if (piVar2 == (int *)0x0) {
      piVar4 = (int *)param_1[0x1d].unused;
    }
    if (piVar4 != (int *)0x0) {
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)param_1[0x1d].unused;
      }
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&param_1);
      if (iVar3 < 0) {
        return;
      }
      local_18.x = *param_2;
      local_18.y = param_2[1];
      ScreenToClient(param_1,&local_18);
      iVar3 = FUN_20dbc53a((int)local_10);
      if (iVar3 < 0) {
        return;
      }
      iVar3 = (**(code **)(*local_c + 0x28))(local_c,1,&local_28);
      (**(code **)(*local_c + 8))(local_c);
      puVar5 = param_3;
      if (iVar3 < 0) {
        return;
      }
    }
  }
  else {
    iVar3 = FUN_20da5f45(this,(int *)&param_1);
    if (iVar3 < 0) {
      return;
    }
    local_18.x = *param_2;
    local_18.y = param_2[1];
    ScreenToClient(param_1,&local_18);
  }
  FUN_20dab500(&local_18.x,&local_18.x);
  if (((*(byte *)(*(int *)((int)local_10 + 4) + 0xb0) & 2) == 0) ||
     (*(int *)(*(int *)((int)local_10 + 4) + 0xac) != 0)) {
    local_18.x = local_18.x - local_28;
    local_18.y = local_18.y - local_24;
  }
  if (puVar5 != (undefined4 *)0x0) {
    iVar3 = FUN_20dbc498(local_10,(int *)&local_8);
    if (iVar3 < 0) {
      return;
    }
    iVar3 = (**(code **)(*local_8 + 0x18))(local_8,&local_18,puVar5,5);
    piVar2 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (iVar3 < 0) {
      return;
    }
  }
  if (((pHVar1[0x2c].unused & 2) == 0) || (pHVar1[0x2b].unused != 0)) {
    FUN_20da492b(&local_18.x,&local_18.x);
    *param_2 = local_18.x;
    param_2[1] = local_18.y;
  }
  return;
}



HRESULT __cdecl
FUN_20dbc8c8(ITypeInfo *param_1,uint *param_2,HRESULT param_3,GUID *param_4,ITypeInfoVtbl *param_5)

{
  uint cbMultiByte;
  ITypeInfo *pIVar1;
  uint *puVar2;
  GUID *pGVar3;
  ITypeInfoVtbl *pIVar4;
  ITypeLib *pIVar5;
  ITypeInfoVtbl *pIVar6;
  LPVOID pvVar7;
  int iVar8;
  _func_6467 *p_Var9;
  HRESULT HVar10;
  CHAR local_114 [128];
  LPSTR local_94 [31];
  byte local_18;
  LPCWSTR local_14;
  VARDESC *local_10;
  ITypeLib *local_c;
  TYPEATTR *local_8;
  
  pIVar1 = param_1;
  local_8 = (TYPEATTR *)0x0;
  if ((param_1 == (ITypeInfo *)0x0) || (param_2 == (uint *)0x0)) {
LAB_20dbcb00:
    HVar10 = 0;
  }
  else {
    *param_2 = 0;
    param_1->lpVtbl = (ITypeInfoVtbl *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    param_3 = LoadRegTypeLib((GUID *)PTR_LAB_20dc4e18,
                             *(WORD *)((&PTR_PTR_20dc489c)[param_3 * 2] + 0x18),
                             *(WORD *)((&PTR_PTR_20dc489c)[param_3 * 2] + 0x1c),(uint)DAT_20dc4dc8,
                             &local_c);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if (param_3 < 0) {
      return param_3;
    }
    param_3 = (*local_c->lpVtbl->GetTypeInfoOfGuid)(local_c,param_4,&param_1);
    if ((param_3 < 0) || (param_3 = (*param_1->lpVtbl->GetTypeAttr)(param_1,&local_8), param_3 < 0))
    {
LAB_20dbcb07:
      if (pIVar1->lpVtbl != (ITypeInfoVtbl *)0x0) {
        if (pIVar1[1].lpVtbl != (ITypeInfoVtbl *)0x0) {
          iVar8 = 0;
          if (0 < (int)pIVar1->lpVtbl) {
            do {
              p_Var9 = (&(pIVar1[1].lpVtbl)->QueryInterface)[iVar8];
              if (p_Var9 != (_func_6467 *)0x0) {
                CoTaskMemFree(p_Var9);
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)pIVar1->lpVtbl);
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
      pIVar5 = local_c;
      if (local_c == (ITypeLib *)0x0) {
        return param_3;
      }
      local_c = (ITypeLib *)0x0;
      (*pIVar5->lpVtbl->Release)(pIVar5);
      return param_3;
    }
    if (((int)param_5 < 1) || ((int)(uint)local_8->cVars <= (int)param_5)) {
      param_5 = (ITypeInfoVtbl *)(uint)local_8->cVars;
    }
    pIVar4 = param_5;
    pIVar1->lpVtbl = param_5;
    *param_2 = (uint)param_5;
    pIVar6 = (ITypeInfoVtbl *)CoTaskMemAlloc((int)param_5 << 2);
    pIVar1[1].lpVtbl = pIVar6;
    if (pIVar6 != (ITypeInfoVtbl *)0x0) {
      pvVar7 = CoTaskMemAlloc((int)pIVar4 << 2);
      param_2[1] = (uint)pvVar7;
      if (pvVar7 != (LPVOID)0x0) {
        param_4 = (GUID *)0x0;
        if (0 < (int)pIVar4) {
          do {
            param_3 = (*param_1->lpVtbl->GetVarDesc)(param_1,(UINT)param_4,&local_10);
            if (param_3 < 0) goto LAB_20dbcb07;
            (*param_1->lpVtbl->GetDocumentation)
                      (param_1,local_10->memid,&local_14,(BSTR *)0x0,(DWORD *)0x0,(BSTR *)0x0);
            iVar8 = lstrlenW(local_14);
            cbMultiByte = iVar8 * 2 + 2;
            FUN_20da29fd(local_94,cbMultiByte);
            WideCharToMultiByte(0,0,local_14,-1,local_94[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
            wsprintfA(local_114,s__ld____s_20dc5290,
                      *(undefined4 *)((int)&((local_10->u).lpvarValue)->n1 + 8),local_94[0]);
            pGVar3 = param_4;
            p_Var9 = (_func_6467 *)FUN_20da95d3(local_114,(BSTR)0x1);
            (&(pIVar1[1].lpVtbl)->QueryInterface)[(int)pGVar3] = p_Var9;
            *(undefined4 *)(param_2[1] + (int)pGVar3 * 4) =
                 *(undefined4 *)((int)&((local_10->u).lpvarValue)->n1 + 8);
            SysFreeString(local_14);
            (*param_1->lpVtbl->ReleaseVarDesc)(param_1,local_10);
            if ((&(pIVar1[1].lpVtbl)->QueryInterface)[(int)pGVar3] == (_func_6467 *)0x0) {
              if ((local_94[0] != (LPSTR)0x0) && ((local_18 & 1) != 0)) {
                HeapFree(DAT_20dc4190,0,local_94[0]);
              }
              goto LAB_20dbcbaa;
            }
            if ((local_94[0] != (LPSTR)0x0) && ((local_18 & 1) != 0)) {
              HeapFree(DAT_20dc4190,0,local_94[0]);
            }
            param_4 = (GUID *)((int)&pGVar3->Data1 + 1);
          } while ((int)param_4 < (int)param_5);
        }
        if (local_8 != (TYPEATTR *)0x0) {
          (*param_1->lpVtbl->ReleaseTypeAttr)(param_1,local_8);
        }
        pIVar1 = param_1;
        if (param_1 != (ITypeInfo *)0x0) {
          param_1 = (ITypeInfo *)0x0;
          (*pIVar1->lpVtbl->Release)(pIVar1);
        }
        pIVar5 = local_c;
        if (local_c != (ITypeLib *)0x0) {
          local_c = (ITypeLib *)0x0;
          (*pIVar5->lpVtbl->Release)(pIVar5);
        }
        goto LAB_20dbcb00;
      }
    }
LAB_20dbcbaa:
    HVar10 = -0x7ff8fff2;
  }
  return HVar10;
}



undefined4 __cdecl FUN_20dbcbb4(VARIANTARG *param_1,undefined2 param_2)

{
  VariantClear(param_1);
  (param_1->n1).n2.vt = 2;
  *(undefined2 *)((int)&param_1->n1 + 8) = param_2;
  return 0;
}



undefined4 __cdecl FUN_20dbcbd2(short param_1,int *param_2)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  
  *param_2 = -1;
  if (DAT_20dc547c != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    if (DAT_20dc547c != 0) {
      bVar1 = false;
      psVar2 = &DAT_20dc5410;
      do {
        if (*psVar2 == -0x40ff) {
          *psVar2 = (short)DAT_20dc4dd4;
LAB_20dbcc17:
          bVar1 = true;
        }
        else if (*psVar2 == 0) goto LAB_20dbcc17;
        psVar2 = psVar2 + 6;
      } while (!bVar1);
      DAT_20dc547c = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  }
  iVar3 = 0;
  psVar2 = &DAT_20dc5410;
  while( true ) {
    if (*psVar2 == 0) {
      return 0x8004006a;
    }
    if (*psVar2 == param_1) break;
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
  }
  *param_2 = iVar3;
  return 0;
}



undefined4 __cdecl FUN_20dbcc5e(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  sVar3 = (short)param_1;
  iVar1 = FUN_20dbcbd2(sVar3,&param_1);
  uVar2 = 1;
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(&DAT_20dc5414 + param_1 * 0xc);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = -1;
  param_2[7] = -1;
  *param_2 = sVar3;
  param_2[4] = 1;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 8) = uVar2;
  return 0;
}



void __cdecl FUN_20dbcca2(int *param_1,int param_2)

{
  int iVar1;
  short local_18 [10];
  
  iVar1 = FUN_20dbcc5e(param_2,local_18);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x14))(param_1,local_18);
  }
  return;
}



uint __cdecl
FUN_20dbccc9(VARIANTARG *param_1,int *param_2,ushort *param_3,VARIANTARG *param_4,int *param_5,
            int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  puVar3 = param_3;
  piVar2 = param_2;
  uVar6 = (ushort)param_2;
  *param_3 = uVar6;
  VariantInit(param_4);
  if (((param_1->n1).n2.vt == 9) &&
     (puVar1 = *(undefined4 **)((int)&param_1->n1 + 8),
     iVar4 = (**(code **)*puVar1)(puVar1,&DAT_20dab780,&param_2), -1 < iVar4)) {
    uVar5 = FUN_20dbd03a(param_2,uVar6,puVar3,param_5,param_6);
    (**(code **)(*param_2 + 8))(param_2);
    if (-1 < (int)uVar5) {
      VariantCopyInd(param_4,param_1);
      return 0;
    }
    return uVar5;
  }
  uVar5 = (uint)piVar2 & 0xffff;
  if ((uVar5 < 2) || ((3 < uVar5 && ((uVar5 < 8 || ((9 < uVar5 && (uVar5 != 0xe)))))))) {
    if (uVar6 == 0) {
      *puVar3 = 1;
    }
    iVar4 = FUN_20dbcbd2(*puVar3,(int *)&param_3);
    if (iVar4 < 0) {
      if ((param_1->n1).n2.vt != 0x2011) {
        iVar4 = 0x2a3;
        goto LAB_20dbcdaa;
      }
      uVar5 = VariantCopy(param_4,param_1);
    }
    else {
      uVar5 = VariantChangeType(param_4,param_1,0,*(VARTYPE *)(&DAT_20dc5418 + (int)param_3 * 0xc));
    }
    if (uVar5 != 0x80020005) {
      if (-1 < (int)uVar5) {
        return 0;
      }
      return uVar5;
    }
  }
  iVar4 = 0x1cd;
LAB_20dbcdaa:
  uVar5 = FUN_20dbbcee(param_5,iVar4,param_6);
  return uVar5;
}



uint __cdecl
FUN_20dbcdd3(short *param_1,ushort *param_2,int param_3,ushort param_4,int param_5,short param_6)

{
  if (((param_1 == (short *)0x0) || (param_2 == (ushort *)0x0)) || (param_3 == 0)) {
    return 0x80070057;
  }
  if ((((param_4 == 0) || (*param_2 == param_4)) || ((param_4 == 1 && (*param_2 == DAT_20dc4dd4))))
     && (*(int *)(param_2 + 8) == param_5)) {
    return -(uint)(*param_1 != param_6) & 0x8000ffff;
  }
  return 0x8000ffff;
}



uint __cdecl FUN_20dbce35(short *param_1,ushort *param_2,undefined4 *param_3)

{
  uint uVar1;
  UINT UVar2;
  HGLOBAL pvVar3;
  
  uVar1 = FUN_20dbcdd3(param_1,param_2,(int)param_3,1,1,8);
  if (-1 < (int)uVar1) {
    UVar2 = SysStringLen(*(BSTR *)(param_1 + 4));
    pvVar3 = GlobalAlloc(0x2000,UVar2 * 2 + 2);
    param_3[1] = pvVar3;
    if (pvVar3 == (HGLOBAL)0x0) {
      uVar1 = 0x8007000e;
    }
    else {
      param_3[2] = 0;
      *param_3 = 1;
      uVar1 = FUN_20dbcfc6(param_1,param_2,(int)param_3);
      if ((int)uVar1 < 0) {
        GlobalFree((HGLOBAL)param_3[1]);
        param_3[1] = 0;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



undefined4 * __cdecl FUN_20dbceb3(short *param_1,ushort *param_2,undefined4 *param_3)

{
  SAFEARRAY *psa;
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HGLOBAL hMem;
  uint uVar4;
  undefined4 *local_10;
  SAFEARRAY *local_c;
  uint local_8;
  
  puVar2 = param_3;
  psVar1 = param_1;
  param_3 = (undefined4 *)FUN_20dbcdd3(param_1,param_2,(int)param_3,0,1,0x2011);
  if ((int)param_3 < 0) {
    return param_3;
  }
  psa = *(SAFEARRAY **)(psVar1 + 4);
  local_c = psa;
  if (psa == (SAFEARRAY *)0x0) {
    param_1 = (short *)0x0;
    param_2 = (ushort *)0xffffffff;
  }
  else {
    puVar3 = (undefined4 *)SafeArrayGetLBound(psa,1,(LONG *)&param_1);
    if ((int)puVar3 < 0) {
      return puVar3;
    }
    param_3 = (undefined4 *)SafeArrayGetUBound(psa,1,(LONG *)&param_2);
    if ((int)param_3 < 0) {
      return param_3;
    }
  }
  local_8 = (int)param_2 + (1 - (int)param_1);
  uVar4 = local_8;
  if (local_8 < 2) {
    uVar4 = 1;
  }
  hMem = GlobalAlloc(0x2000,uVar4);
  puVar2[1] = hMem;
  if (hMem == (HGLOBAL)0x0) {
    return (undefined4 *)0x8007000e;
  }
  puVar2[2] = 0;
  *puVar2 = 1;
  puVar3 = (undefined4 *)GlobalLock(hMem);
  if (local_8 == 0) {
    *(undefined1 *)puVar3 = 0;
  }
  else {
    param_3 = (undefined4 *)SafeArrayAccessData(local_c,&local_10);
    if ((int)param_3 < 0) goto LAB_20dbcf98;
    for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *local_10;
      local_10 = local_10 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar4 = local_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)local_10;
      local_10 = (undefined4 *)((int)local_10 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    SafeArrayUnaccessData(local_c);
  }
  GlobalUnlock((HGLOBAL)puVar2[1]);
LAB_20dbcf98:
  if (((int)param_3 < 0) && ((HGLOBAL)puVar2[1] != (HGLOBAL)0x0)) {
    GlobalUnlock((HGLOBAL)puVar2[1]);
    GlobalFree((HGLOBAL)puVar2[1]);
    puVar2[1] = 0;
  }
  return param_3;
}



uint __cdecl FUN_20dbcfc6(short *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  SIZE_T SVar2;
  LPSTR pCVar3;
  
  uVar1 = FUN_20dbcdd3(param_1,param_2,param_3,1,1,8);
  if (-1 < (int)uVar1) {
    SVar2 = GlobalSize(*(HGLOBAL *)(param_3 + 4));
    if ((int)SVar2 < 2) {
      uVar1 = 0x80030070;
    }
    else {
      pCVar3 = (LPSTR)GlobalLock(*(HGLOBAL *)(param_3 + 4));
      if (pCVar3 == (LPSTR)0x0) {
        uVar1 = 0x80070057;
      }
      else {
        FUN_20dbf479(pCVar3,*(LPCWSTR *)(param_1 + 4),SVar2);
        pCVar3[SVar2 - 1] = '\0';
        GlobalUnlock(*(HGLOBAL *)(param_3 + 4));
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



uint __cdecl FUN_20dbd03a(int *param_1,ushort param_2,ushort *param_3,int *param_4,int *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = param_3;
  uVar1 = param_2;
  _param_2 = 0;
  *param_3 = uVar1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x14))(param_1,&param_2);
  }
  if (param_2 == 0) {
    iVar4 = 0x17c;
LAB_20dbd06d:
    uVar3 = FUN_20dbbcee(param_4,iVar4,param_5);
  }
  else {
    if (param_2 == 1) {
      if (uVar1 == 0) {
        *puVar2 = 8;
      }
      else if ((uVar1 != 2) && ((uVar1 < 8 || (9 < uVar1)))) goto LAB_20dbd094;
    }
    else if (param_2 == 2) {
      if (uVar1 == 0) {
        *puVar2 = 3;
      }
      else if (uVar1 != 3) {
        uVar3 = FUN_20dbf55c(0x1cd);
        return uVar3;
      }
    }
    else {
      if (param_2 != 4) {
LAB_20dbd094:
        iVar4 = 0x1cd;
        goto LAB_20dbd06d;
      }
      if (uVar1 == 0) {
        *puVar2 = 0xe;
      }
      else if (uVar1 != 0xe) goto LAB_20dbd094;
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint __cdecl
FUN_20dbd0e8(uint param_1,HMETAFILE param_2,ushort *param_3,undefined4 *param_4,int *param_5,
            HBITMAP param_6)

{
  ushort uVar1;
  HMETAFILE this;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  HENHMETAFILE pHVar5;
  HGLOBAL hMem;
  HBITMAP pHVar6;
  undefined4 *puVar7;
  HBITMAP local_8;
  
  iVar4 = (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),&DAT_20dab780,&local_8);
  puVar2 = param_3;
  if ((iVar4 < 0) ||
     (param_1 = FUN_20dbd03a(&local_8->unused,*param_3,(ushort *)&param_1,param_5,&param_6->unused),
     (int)param_1 < 0)) {
    return 0x8000ffff;
  }
  param_6 = (HBITMAP)0x0;
  if (local_8 != (HBITMAP)0x0) {
    (**(code **)(local_8->unused + 0x14))(local_8,&param_6);
  }
  puVar3 = param_4;
  this = param_2;
  if ((short)param_6 == 0) {
    param_1 = 0x80004005;
    goto LAB_20dbd157;
  }
  uVar1 = *puVar2;
  *param_4 = *(undefined4 *)(puVar2 + 8);
  param_4[2] = 0;
  if ((short)param_6 == 1) {
    if (uVar1 == 2) {
      pHVar5 = (HENHMETAFILE)param_2->unused;
      if (pHVar5 == (HENHMETAFILE)0x0) {
        param_6 = (HBITMAP)0x0;
        param_2 = (HMETAFILE)0x0;
        param_1 = (**(code **)(local_8->unused + 0xc))(local_8,&param_6);
        if ((int)param_1 < 0) goto LAB_20dbd234;
        (**(code **)(local_8->unused + 0x10))(local_8,&param_2);
        if (param_2 == (HMETAFILE)0x0) {
          pHVar6 = FUN_20dc008d(local_8,0,0);
          this->unused = (int)pHVar6;
        }
        else {
          param_1 = FUN_20dbda3b(this,param_6,param_2);
          if ((int)param_1 < 0) goto LAB_20dbd157;
        }
        pHVar5 = (HENHMETAFILE)this->unused;
      }
      this->unused = 0;
LAB_20dbd26e:
      puVar3[1] = pHVar5;
      goto LAB_20dbd157;
    }
    if (uVar1 == 8) {
      iVar4 = (**(code **)(local_8->unused + 0xc))(local_8,&param_6);
      if ((-1 < iVar4) &&
         (param_1 = (**(code **)(local_8->unused + 0x10))(local_8,&param_2), -1 < (int)param_1)) {
        pHVar5 = (HENHMETAFILE)FUN_20dbf5e7(param_6,(HPALETTE)param_2);
        if (pHVar5 == (HENHMETAFILE)0x0) goto LAB_20dbd1c1;
        goto LAB_20dbd26e;
      }
    }
    else if (uVar1 == 9) {
      pHVar5 = (HENHMETAFILE)param_2[1].unused;
      if (pHVar5 == (HENHMETAFILE)0x0) {
        param_1 = (**(code **)(local_8->unused + 0xc))(local_8,&param_6);
        if ((int)param_1 < 0) goto LAB_20dbd234;
        (**(code **)(local_8->unused + 0x10))(local_8,&param_2);
        if (param_2 == (HMETAFILE)0x0) {
          pHVar5 = (HENHMETAFILE)0x0;
        }
        else {
          param_1 = FUN_20dbda3b(this,param_6,param_2);
          if ((int)param_1 < 0) goto LAB_20dbd157;
          pHVar5 = (HENHMETAFILE)this[1].unused;
        }
      }
      else {
        param_2[1].unused = 0;
      }
      goto LAB_20dbd26e;
    }
  }
  else if ((short)param_6 == 2) {
    if (uVar1 == 3) {
      hMem = GlobalAlloc(0x2000,0x10);
      if (hMem != (HGLOBAL)0x0) {
        (**(code **)(local_8->unused + 0xc))(local_8,&param_2);
        param_2 = CopyMetaFileA(param_2,(LPCSTR)0x0);
        if (param_2 != (HMETAFILE)0x0) {
          puVar7 = (undefined4 *)GlobalLock(hMem);
          puVar7[3] = param_2;
          *puVar7 = 8;
          (**(code **)(local_8->unused + 0x18))(local_8,&param_6);
          (**(code **)(local_8->unused + 0x1c))(local_8,&param_5);
          puVar7[1] = param_6;
          puVar7[2] = param_5;
          GlobalUnlock(hMem);
          puVar3[1] = hMem;
          goto LAB_20dbd157;
        }
        GlobalFree(hMem);
      }
      goto LAB_20dbd1c1;
    }
  }
  else if ((((short)param_6 == 4) && (uVar1 == 0xe)) &&
          (param_1 = (**(code **)(local_8->unused + 0xc))(local_8,&param_2), -1 < (int)param_1)) {
    pHVar5 = CopyEnhMetaFileA((HENHMETAFILE)param_2,(LPCSTR)0x0);
    if (pHVar5 != (HENHMETAFILE)0x0) goto LAB_20dbd26e;
LAB_20dbd1c1:
    param_1 = 0x8007000e;
    goto LAB_20dbd157;
  }
LAB_20dbd234:
  param_1 = 0x8000ffff;
LAB_20dbd157:
  if (local_8 != (HBITMAP)0x0) {
    (**(code **)(local_8->unused + 8))(local_8);
  }
  return param_1;
}



undefined4 __cdecl FUN_20dbd393(LPSTGMEDIUM param_1,VARIANTARG *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  LPWSTR pWVar3;
  
  VariantInit(param_2);
  *param_3 = 0;
  if (param_1->tymed == 1) {
    pCVar2 = (LPCSTR)GlobalLock((param_1->u).hGlobal);
    if (pCVar2 == (LPCSTR)0x0) {
      uVar1 = 0x80070057;
    }
    else {
      (param_2->n1).n2.vt = 8;
      pWVar3 = FUN_20da95d3(pCVar2,(BSTR)0x0);
      *(LPWSTR *)((int)&param_2->n1 + 8) = pWVar3;
      GlobalUnlock((param_1->u).hGlobal);
      if (*(int *)((int)&param_2->n1 + 8) == 0) {
        uVar1 = 0x8007000e;
      }
      else {
        ReleaseStgMedium(param_1);
        *param_3 = 1;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x8000ffff;
  }
  return uVar1;
}



HRESULT __cdecl FUN_20dbd407(SAFEARRAY *param_1,VARIANTARG *param_2,undefined4 *param_3)

{
  int iVar1;
  HGLOBAL hMem;
  SAFEARRAY *pSVar2;
  SAFEARRAY *psa;
  uint uVar3;
  undefined4 *puVar4;
  SAFEARRAYBOUND local_1c;
  undefined4 *local_14;
  SIZE_T local_10;
  HRESULT local_c;
  undefined4 *local_8;
  
  pSVar2 = param_1;
  VariantInit(param_2);
  *param_3 = 0;
  iVar1._0_2_ = param_1->cDims;
  iVar1._2_2_ = param_1->fFeatures;
  if (iVar1 == 1) {
    local_8 = (undefined4 *)GlobalLock((HGLOBAL)param_1->cbElements);
    if (local_8 == (undefined4 *)0x0) {
      local_c = -0x7ff8ffa9;
    }
    else {
      local_1c.cElements = GlobalSize((HGLOBAL)param_1->cbElements);
      local_1c.lLbound = 1;
      local_10 = local_1c.cElements;
      psa = SafeArrayCreate(0x11,1,&local_1c);
      if (psa == (SAFEARRAY *)0x0) {
        local_c = -0x7ff8fff2;
      }
      else {
        local_c = SafeArrayAccessData(psa,&local_14);
        if (-1 < local_c) {
          if (local_10 != 0) {
            puVar4 = local_8;
            for (uVar3 = local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *local_14 = *puVar4;
              puVar4 = puVar4 + 1;
              local_14 = local_14 + 1;
            }
            for (uVar3 = local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)local_14 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              local_14 = (undefined4 *)((int)local_14 + 1);
            }
          }
          SafeArrayUnaccessData(psa);
          hMem = (HGLOBAL)param_1->cbElements;
          param_1 = (SAFEARRAY *)0x0;
          (param_2->n1).n2.vt = 0x2011;
          *(SAFEARRAY **)((int)&param_2->n1 + 8) = psa;
          GlobalUnlock(hMem);
          local_8 = (undefined4 *)0x0;
          ReleaseStgMedium((LPSTGMEDIUM)pSVar2);
          *param_3 = 1;
          psa = param_1;
        }
      }
      param_1 = psa;
      if (param_1 != (SAFEARRAY *)0x0) {
        SafeArrayDestroy(param_1);
      }
      if (local_8 != (undefined4 *)0x0) {
        GlobalUnlock((HGLOBAL)pSVar2->cbElements);
      }
    }
  }
  else {
    local_c = -0x7fff0001;
  }
  return local_c;
}



// WARNING: Variable defined which should be unmapped: param_2

int __cdecl
FUN_20dbd504(LPSTGMEDIUM param_1,short param_2,HBITMAP param_3,VARIANTARG *param_4,
            undefined4 *param_5)

{
  _union_2260 hMem;
  int *piVar1;
  _union_2260 _Var2;
  int iVar3;
  BITMAPINFOHEADER *pBVar4;
  LPVOID pvVar5;
  undefined2 in_stack_0000000a;
  undefined2 local_40 [2];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  _union_2260 local_24;
  _union_2260 local_20;
  int local_1c;
  STGMEDIUM local_18;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  VariantInit(param_4);
  *param_5 = 0;
  hMem = (_union_2260)(param_1->u).hGlobal;
  if ((hMem.hBitmap == (HBITMAP)0x0) && (param_2 != 9)) {
    return _param_2;
  }
  local_2c = 0x14;
  if (param_2 == 2) {
    local_34 = 0xffffffff;
    local_28 = 1;
    local_40[0] = 9;
    local_3c = 0;
    local_38 = 1;
    local_30 = 0x10;
    local_24 = hMem;
    iVar3 = (**(code **)(param_3->unused + 0xc))(param_3,local_40,&local_18);
    if (iVar3 < 0) {
      local_20.hBitmap = (HBITMAP)0x0;
    }
    else {
      local_20 = local_18.u;
    }
    _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_20dab780,1,&local_8);
    if (_param_2 < 0) {
      ReleaseStgMedium(&local_18);
LAB_20dbd598:
      local_8 = (int *)0x0;
    }
LAB_20dbd5ee:
    if (_param_2 < 0) goto LAB_20dbd61a;
    *param_5 = 1;
    iVar3 = (**(code **)*local_8)(local_8,&DAT_20da8570,&local_c);
    piVar1 = local_c;
    if (-1 < iVar3) {
      local_c = (int *)0x0;
      _param_2 = 0;
      (param_4->n1).n2.vt = 9;
      *(int **)((int)&param_4->n1 + 8) = piVar1;
      goto LAB_20dbd61a;
    }
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 8) {
        pBVar4 = (BITMAPINFOHEADER *)GlobalLock(hMem.hGlobal);
        if (pBVar4 != (BITMAPINFOHEADER *)0x0) {
          _Var2.hBitmap = FUN_20dbf84e(pBVar4,&param_3);
          GlobalUnlock(hMem.hGlobal);
          if (_Var2.hBitmap != (HBITMAP)0x0) {
            local_20.hBitmap = param_3;
            local_28 = 1;
            local_24.hBitmap = _Var2.hBitmap;
            _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_20dab780,1,&local_8);
            if (-1 < _param_2) {
              ReleaseStgMedium(param_1);
              goto LAB_20dbd745;
            }
            DeleteObject(_Var2.hMetaFilePict);
            if (param_3 != (HBITMAP)0x0) {
              DeleteObject(param_3);
            }
            goto LAB_20dbd5ea;
          }
        }
LAB_20dbd6e7:
        _param_2 = -0x7ff8fff2;
        goto LAB_20dbd61a;
      }
      if (param_2 == 9) {
        _Var2.hBitmap = CreateBitmap(1,1,DAT_20dc5524,DAT_20dc5508,(void *)0x0);
        if (_Var2.hBitmap == (HBITMAP)0x0) goto LAB_20dbd6e7;
        local_28 = 1;
        local_24.hBitmap = _Var2.hBitmap;
        local_20 = hMem;
        _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_20dab780,1,&local_8);
        if (_param_2 < 0) {
          DeleteObject(_Var2.hMetaFilePict);
          goto LAB_20dbd5ea;
        }
      }
      else {
        if (param_2 != 0xe) {
          return _param_2;
        }
        local_28 = 4;
        local_24 = hMem;
        _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_20dab780,1,&local_8);
        if (_param_2 < 0) goto LAB_20dbd598;
      }
      goto LAB_20dbd5ee;
    }
    pvVar5 = GlobalLock(hMem.hGlobal);
    if (pvVar5 != (LPVOID)0x0) {
      local_20.hBitmap = (HBITMAP)((*(int *)((int)pvVar5 + 4) * 0x5a0 + 0x4f6) / 0x9ec);
      local_1c = (*(int *)((int)pvVar5 + 8) * 0x5a0 + 0x4f6) / 0x9ec;
      local_24 = *(_union_2260 *)((int)pvVar5 + 0xc);
      local_28 = 2;
      GlobalUnlock(hMem.hGlobal);
      if (local_20.hBitmap == (HBITMAP)0x0) {
        local_1c = 1;
        local_20 = (_union_2260)0x1;
      }
      _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_20dab780,1,&local_8);
      if (_param_2 < 0) {
LAB_20dbd5ea:
        local_8 = (int *)0x0;
      }
      else {
        GlobalFree(hMem.hGlobal);
LAB_20dbd745:
        *param_5 = 1;
      }
      goto LAB_20dbd5ee;
    }
  }
  _param_2 = -0x7fff0001;
LAB_20dbd61a:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return _param_2;
}



int __cdecl FUN_20dbd7dc(LPCWSTR param_1,undefined4 *param_2)

{
  SIZE_T dwBytes;
  LPCSTR pCVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  LPSTR local_a0 [31];
  byte local_24;
  int local_20;
  int local_1c;
  int local_18;
  LPCWSTR local_14;
  int local_10;
  int *local_c;
  LPCSTR local_8;
  
  pWVar5 = param_1 + 0xe;
  iVar7 = 0;
  local_18 = 0;
  local_c = (int *)0x0;
  local_14 = pWVar5;
  local_10 = (**(code **)(*(int *)pWVar5 + 0x20))(pWVar5,&local_1c);
  if (-1 < local_10) {
    iVar2 = 0;
    if (local_1c < 1) {
LAB_20dbd906:
      local_8 = (LPCSTR)GlobalAlloc(0x2000,iVar7 + 0x15);
      if (local_8 == (LPCSTR)0x0) {
LAB_20dbd91c:
        local_10 = -0x7ff8fff2;
        pWVar6 = param_1;
      }
      else {
        piVar3 = (int *)GlobalLock(local_8);
        if (piVar3 == (int *)0x0) {
          local_10 = -0x7fff0001;
          pWVar6 = (LPCWSTR)0x0;
        }
        else {
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
          piVar3[4] = 0;
          *piVar3 = 0x14;
          piVar8 = local_c;
          piVar9 = piVar3 + 5;
          for (uVar4 = iVar7 + 1U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *piVar9 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar9 = piVar9 + 1;
          }
          for (uVar4 = iVar7 + 1U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(char *)piVar9 = (char)*piVar8;
            piVar8 = (int *)((int)piVar8 + 1);
            piVar9 = (int *)((int)piVar9 + 1);
          }
          *(undefined1 *)(*piVar3 + local_18 + (int)piVar3) = 0;
          HeapFree(DAT_20dc4190,0,local_c);
          pCVar1 = local_8;
          local_c = (int *)0x0;
          GlobalUnlock(local_8);
          local_8 = (LPCSTR)0x0;
          *param_2 = pCVar1;
          pWVar6 = (LPCWSTR)0x0;
        }
      }
    }
    else {
      while( true ) {
        local_20 = iVar2 + 1;
        local_10 = (**(code **)(*(int *)pWVar5 + 0x1c))(pWVar5,local_20,&param_1);
        pWVar6 = param_1;
        if (local_10 < 0) break;
        if (param_1 != (LPCWSTR)0x0) {
          iVar2 = lstrlenW(param_1);
          uVar4 = iVar2 * 2 + 2;
          FUN_20da29fd(local_a0,uVar4);
          WideCharToMultiByte(0,0,param_1,-1,local_a0[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
          local_8 = local_a0[0];
          iVar2 = lstrlenA(local_a0[0]);
          dwBytes = iVar2 + 2 + iVar7;
          if (local_c == (int *)0x0) {
            piVar3 = (int *)HeapAlloc(DAT_20dc4190,0,dwBytes);
          }
          else {
            piVar3 = (int *)HeapReAlloc(DAT_20dc4190,0,local_c,dwBytes);
          }
          if (piVar3 == (int *)0x0) {
            if ((local_a0[0] != (LPSTR)0x0) && ((local_24 & 1) != 0)) {
              HeapFree(DAT_20dc4190,0,local_a0[0]);
            }
            goto LAB_20dbd91c;
          }
          local_c = piVar3;
          lstrcpyA((LPSTR)((int)piVar3 + iVar7),local_8);
          iVar2 = lstrlenA(local_8);
          *(undefined1 *)((int)piVar3 + iVar7 + iVar2) = 0;
          iVar7 = iVar7 + iVar2 + 1;
          local_18 = iVar7;
          if (param_1 != (LPCWSTR)0x0) {
            SysFreeString(param_1);
          }
          pWVar5 = local_14;
          if ((local_a0[0] != (LPSTR)0x0) && ((local_24 & 1) != 0)) {
            HeapFree(DAT_20dc4190,0,local_a0[0]);
            pWVar5 = local_14;
          }
        }
        iVar2 = local_20;
        if (local_1c <= local_20) goto LAB_20dbd906;
      }
    }
    if (local_c != (int *)0x0) {
      HeapFree(DAT_20dc4190,0,local_c);
    }
    if (pWVar6 != (LPCWSTR)0x0) {
      GlobalUnlock(local_8);
    }
    if (local_8 != (LPCSTR)0x0) {
      GlobalFree(local_8);
    }
  }
  return local_10;
}



void __fastcall FUN_20dbda14(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
  }
  if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



uint __thiscall FUN_20dbda3b(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)this;
  local_8 = (undefined4 *)this;
  FUN_20dbda14((undefined4 *)this);
  local_8 = param_1;
  local_c = param_2;
  uVar1 = FUN_20dbf911(&local_8,&local_c);
  if (uVar1 == 0) {
    *(undefined4 **)this = local_8;
    *(undefined4 **)((int)this + 4) = local_c;
    uVar1 = 0;
  }
  else {
    if ((local_8 != (undefined4 *)0x0) && (local_8 != param_1)) {
      DeleteObject(local_8);
    }
    if ((local_c != (undefined4 *)0x0) && (local_c != param_2)) {
      DeleteObject(local_c);
    }
    uVar1 = FUN_20dbf55c(uVar1);
  }
  return uVar1;
}



void __thiscall FUN_20dbdab1(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



int __fastcall FUN_20dbdad1(int *param_1)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  int iStack_4;
  
  param_1[3] = 0;
  iStack_4 = 0;
  if (param_1[3] == 0) {
    iVar3 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        HVar1 = FUN_20dbdd95((undefined2 *)(param_1[2] + iVar2));
        if (HVar1 < 0) {
          iStack_4 = HVar1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x30;
      } while (iVar3 < *param_1);
    }
    if ((LPVOID)param_1[2] != (LPVOID)0x0) {
      HeapFree(DAT_20dc4190,0,(LPVOID)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    iStack_4 = FUN_20dbbcee((int *)param_1[4],0x2a0,(int *)param_1[5]);
  }
  return iStack_4;
}



HRESULT __fastcall FUN_20dbdad5(int *param_1)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  HRESULT local_4;
  
  local_4 = 0;
  if (param_1[3] == 0) {
    iVar3 = 0;
    if (0 < *param_1) {
      iVar2 = 0;
      do {
        HVar1 = FUN_20dbdd95((undefined2 *)(param_1[2] + iVar2));
        if (HVar1 < 0) {
          local_4 = HVar1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x30;
      } while (iVar3 < *param_1);
    }
    if ((LPVOID)param_1[2] != (LPVOID)0x0) {
      HeapFree(DAT_20dc4190,0,(LPVOID)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_4 = FUN_20dbbcee((int *)param_1[4],0x2a0,(int *)param_1[5]);
  }
  return local_4;
}



int __thiscall FUN_20dbdafc(void *this,int param_1)

{
  return *(int *)((int)this + 8) + param_1 * 0x30;
}



uint __thiscall FUN_20dbdb5a(void *this,VARIANTARG *param_1,VARIANTARG *param_2)

{
  uint uVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  VARIANTARG local_2c;
  VARIANTARG local_1c;
  int local_c;
  int *local_8;
  
  local_c = 0;
  VariantInit(&local_2c);
  if (((param_2->n1).n2.vt == 10) && (*(int *)((int)&param_2->n1 + 8) == -0x7ffdfffc)) {
    if ((param_1->n1).n2.vt == 10) {
      if (*(int *)((int)&param_1->n1 + 8) == -0x7ffdfffc) {
        piVar3 = *(int **)((int)this + 0x14);
        iVar4 = 0x2a1;
        goto LAB_20dbdba2;
      }
      goto LAB_20dbdbb4;
    }
LAB_20dbdc17:
    VariantInit(&local_1c);
    uVar1 = VariantChangeType(&local_1c,param_1,0,2);
    if ((int)uVar1 < 0) goto LAB_20dbdc09;
  }
  else {
LAB_20dbdbb4:
    if (((param_1->n1).n2.vt != 10) || (*(int *)((int)&param_1->n1 + 8) != -0x7ffdfffc))
    goto LAB_20dbdc17;
    local_1c.n1._8_4_ = (int *)0x0;
  }
  piVar3 = DAT_20dc4dd8;
  if (((short)local_1c.n1._8_4_ != -0x4100) &&
     (piVar3 = (int *)local_1c.n1._8_4_, (short)local_1c.n1._8_4_ == -0x40ff)) {
    piVar3 = DAT_20dc4dd4;
  }
  if (((ushort)piVar3 < 0xc000) ||
     (iVar4 = GetClipboardFormatNameA((uint)piVar3 & 0xffff,(LPSTR)&local_1c.n1.n2.wReserved2,10),
     iVar4 != 0)) {
    if ((((param_2->n1).n2.vt == 10) && (*(int *)((int)&param_2->n1 + 8) == -0x7ffdfffc)) ||
       (uVar1 = FUN_20dbccc9(param_2,piVar3,(ushort *)&local_8,&local_2c,*(int **)((int)this + 0x10)
                             ,*(int **)((int)this + 0x14)), piVar3 = local_8, -1 < (int)uVar1)) {
      local_8 = piVar3;
      if (((short)local_8 == 0xf) &&
         (((param_2->n1).n2.vt != 10 || (*(int *)((int)&param_2->n1 + 8) != -0x7ffdfffc)))) {
        piVar3 = *(int **)((int)this + 0x14);
        iVar4 = 5;
LAB_20dbdba2:
        uVar1 = FUN_20dbbcee(*(int **)((int)this + 0x10),iVar4,piVar3);
        return uVar1;
      }
      psVar2 = FUN_20dbdd63(this,(short)local_8);
      if (psVar2 == (short *)0x0) {
        if (*(int *)((int)this + 0xc) != 0) {
          piVar3 = *(int **)((int)this + 0x14);
          iVar4 = 0x2a0;
          goto LAB_20dbdba2;
        }
        uVar1 = FUN_20dbddb0((int *)this);
        if ((int)uVar1 < 0) goto LAB_20dbdc09;
                    // WARNING: Load size is inaccurate
        psVar2 = (short *)(*this * 0x30 + *(int *)((int)this + 8));
        param_1 = (VARIANTARG *)(psVar2 + 4);
        VariantInit(param_1);
        local_c = 1;
      }
      else {
        param_1 = (VARIANTARG *)(psVar2 + 4);
        VariantClear(param_1);
      }
      uVar1 = FUN_20dbcc5e((int)local_8,psVar2 + 0xc);
      if (-1 < (int)uVar1) {
        *psVar2 = (short)local_8;
        if (((param_2->n1).n2.vt != 10) || (*(int *)((int)&param_2->n1 + 8) != -0x7ffdfffc)) {
          param_2 = &local_2c;
        }
        uVar1 = VariantCopyInd(param_1,param_2);
        if ((-1 < (int)uVar1) && (local_c != 0)) {
                    // WARNING: Load size is inaccurate
          *(int *)this = *this + 1;
        }
      }
    }
  }
  else {
    uVar1 = FUN_20dbbcee(*(int **)((int)this + 0x10),0x1cd,*(int **)((int)this + 0x14));
  }
LAB_20dbdc09:
  VariantClear(&local_2c);
  return uVar1;
}



short * __thiscall FUN_20dbdd63(void *this,short param_1)

{
  int iVar1;
  short *psVar2;
  
                    // WARNING: Load size is inaccurate
  iVar1 = 0;
  if (0 < *this) {
    psVar2 = *(short **)((int)this + 8);
    do {
      if (*psVar2 == param_1) {
        return *(short **)((int)this + 8) + iVar1 * 0x18;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 0x18;
    } while (iVar1 < *this);
  }
  return (short *)0x0;
}



HRESULT FUN_20dbdd95(undefined2 *param_1)

{
  HRESULT HVar1;
  
  *param_1 = 0;
  HVar1 = VariantClear((VARIANTARG *)(param_1 + 4));
  if (-1 < HVar1) {
    HVar1 = 0;
  }
  return HVar1;
}



undefined4 __fastcall FUN_20dbddb0(int *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 < param_1[1]) {
    return 1;
  }
  if ((LPVOID)param_1[2] == (LPVOID)0x0) {
    iVar2 = 5;
    pvVar1 = HeapAlloc(DAT_20dc4190,0,0xf0);
    param_1[2] = (int)pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
LAB_20dbde0b:
      param_1[1] = iVar2;
      return 0;
    }
  }
  else {
    iVar2 = param_1[1] + 5;
    pvVar1 = HeapReAlloc(DAT_20dc4190,0,(LPVOID)param_1[2],iVar2 * 0x30);
    if (pvVar1 != (LPVOID)0x0) {
      param_1[2] = (int)pvVar1;
      goto LAB_20dbde0b;
    }
  }
  return 0x8007000e;
}



undefined4 * __thiscall
FUN_20dbde12(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  FUN_20da2ffa(this,(undefined4 *)0x0,param_3,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *(undefined4 *)((int)this + 0x24) = param_2;
  *puVar1 = &PTR_LAB_20dafe48;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_20da7e80;
  *(undefined ***)this = &PTR_FUN_20dafe10;
  *puVar1 = &PTR_LAB_20dafde0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_20dafdd0;
  *(int **)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_4;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar2 = *(int **)((int)this + 0x24);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  iVar3 = *(int *)((int)this + 0x2c);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x1c) + 4))(iVar3 + 0x1c);
  }
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_5;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_20dbde9d(void *this,byte param_1)

{
  FUN_20dbdec5((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20dbdec5(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_20dafe10;
  param_1[7] = &PTR_LAB_20dafde0;
  param_1[8] = &PTR_LAB_20dafdd0;
  FUN_20dbdefb((int)param_1);
  iVar1 = param_1[0xb];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
  }
  FUN_20da7472(param_1);
  return;
}



void __fastcall FUN_20dbdefb(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



undefined4 __thiscall FUN_20dbdf22(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar4 = *param_1;
  *param_2 = 0;
  if (iVar4 == 0x2334d2b1) {
    iVar3 = 0x10;
    bVar7 = true;
    piVar5 = param_1;
    pcVar6 = &DAT_20da17d8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_20dbdf4b;
LAB_20dbdfc4:
    uVar1 = (int)this + 0x1c;
  }
  else {
LAB_20dbdf4b:
    if (iVar4 == 0x10e) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = "\x0e\x01";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        piVar5 = *(int **)((int)this + 0x24);
        if (piVar5 == (int *)0x0) {
          piVar5 = *(int **)((int)this + 0x28);
        }
        goto LAB_20dbdf6e;
      }
    }
    if (iVar4 == 0x2334d2b3) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = &DAT_20da17e8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        if (*(int *)((int)this + 0x2c) == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(*(int *)((int)this + 0x2c) + 0x1c);
        }
        goto LAB_20dbdf6e;
      }
    }
    if (iVar4 == 0x20400) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = "";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) goto LAB_20dbdfc4;
    }
    if (iVar4 != -0x20f4c2a0) {
LAB_20dbdff1:
      uVar2 = FUN_20da5491(this,param_1,param_2);
      return uVar2;
    }
    iVar4 = 0x10;
    bVar7 = true;
    piVar5 = param_1;
    pcVar6 = &DAT_20db0170;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_20dbdff1;
    uVar1 = (int)this + 0x20;
  }
  piVar5 = (int *)(-(uint)(this != (void *)0x0) & uVar1);
LAB_20dbdf6e:
  (**(code **)(*piVar5 + 4))(piVar5);
  *param_2 = (int)piVar5;
  return 0;
}



uint FUN_20dbe003(int param_1,int *param_2)

{
  int iVar1;
  LPVOID this;
  undefined4 *this_00;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar2 = FUN_20dbbcee(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
      return uVar2;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      this = FUN_20da2c52(0x34,DAT_20dc4190);
      if (this == (LPVOID)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_20dbe947(this,DAT_20dc5324,*(undefined4 *)(param_1 + 0x18),
                               *(undefined4 *)(param_1 + 0x14));
      }
      *(undefined4 **)(param_1 + 0x10) = this_00;
      if (this_00 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      uVar2 = FUN_20dbed64(this_00,*(int **)(param_1 + 8));
      if ((int)uVar2 < 0) {
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        return uVar2;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 0x1c;
  }
  *param_2 = iVar3;
  (**(code **)(*(int *)(iVar1 + 0x1c) + 4))(iVar1 + 0x1c);
  return 0;
}



uint FUN_20dbe0b6(int param_1,uint param_2,VARIANTARG *param_3)

{
  short sVar1;
  uint uVar2;
  uint unaff_EDI;
  int iVar3;
  int *piVar4;
  short local_28 [10];
  STGMEDIUM local_14;
  PVOID local_8;
  
  local_8 = (PVOID)0x0;
  uVar2 = DAT_20dc4dd8;
  if (((short)param_2 != -0x4100) && (uVar2 = param_2, (short)param_2 == -0x40ff)) {
    uVar2 = DAT_20dc4dd4;
  }
  VariantInit(param_3);
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 0x1a9;
    goto LAB_20dbe0ed;
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_20dbbcee(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
    goto LAB_20dbe1c3;
  }
  iVar3 = FUN_20dbcc5e(uVar2,local_28);
  if (iVar3 < 0) {
LAB_20dbe145:
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 0x1cd;
LAB_20dbe0ed:
    FUN_20dbbcee(*(int **)(param_1 + 0x18),iVar3,piVar4);
    return unaff_EDI;
  }
  sVar1 = (short)uVar2;
  if (sVar1 == 0xf) {
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 5;
    goto LAB_20dbe0ed;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),local_28);
  if (iVar3 != 0) goto LAB_20dbe145;
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),local_28,&local_14);
  if (iVar3 < 0) goto LAB_20dbe1c3;
  local_8 = (PVOID)0x1;
  if (sVar1 == 1) {
LAB_20dbe1fa:
    FUN_20dbd393(&local_14,param_3,&param_2);
  }
  else if (sVar1 < 2) {
LAB_20dbe1da:
    if ((uVar2 & 0xffff) == DAT_20dc4dd4) goto LAB_20dbe1fa;
    FUN_20dbd407((SAFEARRAY *)&local_14,param_3,&param_2);
  }
  else {
    if (3 < sVar1) {
      if (7 < sVar1) {
        if ((sVar1 < 10) || (sVar1 == 0xe)) goto LAB_20dbe19e;
        if (sVar1 == 0xf) {
          FUN_20dbf55c(0xd);
          goto LAB_20dbe1c3;
        }
      }
      goto LAB_20dbe1da;
    }
LAB_20dbe19e:
    FUN_20dbd504(&local_14,local_28[0],*(HBITMAP *)(param_1 + 8),param_3,&param_2);
  }
  if (param_2 != 0) {
    local_8 = (PVOID)0x0;
  }
LAB_20dbe1c3:
  if (local_8 != (PVOID)0x0) {
    ReleaseStgMedium(&local_14);
  }
  return unaff_EDI;
}



void FUN_20dbe29e(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_20dbbcee(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x28))(iVar1 + 0x1c), iVar1 < 0)) {
      return;
    }
    FUN_20dbdad5((int *)(*(int *)(param_1 + 0xc) + 0xc));
  }
  return;
}



undefined4 * __thiscall
FUN_20dbe31f(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_LAB_20dafeb0;
  FUN_20dbdab1((void *)((int)this + 0xc),param_3,param_4);
  *(undefined ***)this = &PTR_FUN_20dafe78;
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(int *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = 1;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_4;
  (**(code **)(iVar1 + 4))((int *)(param_2 + 0x1c));
  piVar2 = (int *)(*(int *)((int)this + 0x2c) + 0x1c);
  (**(code **)(*piVar2 + 0x28))(piVar2);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (undefined4 *)this;
}



void __fastcall FUN_20dbe382(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20dafe78;
  (**(code **)(*(int *)(param_1[0xb] + 0x1c) + 8))((int *)(param_1[0xb] + 0x1c));
  FUN_20dbda14(param_1 + 9);
  FUN_20dbdad1(param_1 + 3);
  return;
}



undefined4 FUN_20dbe3a9(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = "";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = "\x0e\x01";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *pcVar2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}



undefined4 FUN_20dbe400(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1 + 0xc;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[0xc];
  if (*piVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_20dbe382(param_1);
      HeapFree(DAT_20dc4190,0,param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * FUN_20dbe42d(int *param_1,ushort *param_2,undefined4 *param_3)

{
  short *psVar1;
  int *this;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = param_3;
  this = param_1;
  if ((param_3 == (undefined4 *)0x0) || (param_2 == (ushort *)0x0)) {
    return (undefined4 *)0x80070057;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x30))(param_1,param_2,&param_3);
  if (puVar2 != (undefined4 *)0x0) {
    if ((int)puVar2 < 0) {
      return puVar2;
    }
    return (undefined4 *)0x80040064;
  }
  iVar3 = FUN_20dbdafc(this + 3,(int)param_3);
  puVar2 = (undefined4 *)FUN_20dbe583(this,(uint)param_3);
  if ((int)puVar2 < 0) {
    return puVar2;
  }
  psVar1 = (short *)(iVar3 + 8);
  if ((*(short *)(iVar3 + 8) == 10) && (*(int *)(iVar3 + 0x10) == -0x7ffdfffc)) {
    puVar2 = (undefined4 *)
             (**(code **)(*(int *)(this[0xb] + 0x1c) + 0x20))((int *)(this[0xb] + 0x1c),&param_1);
    if ((int)puVar2 < 0) {
      return puVar2;
    }
    if ((*param_2 != 0xf) || ((int)param_1 < 1)) {
      puVar4 = (undefined4 *)FUN_20dbbcee((int *)this[2],0x2a4,(int *)this[1]);
      return puVar4;
    }
  }
  uVar5 = (uint)*param_2;
  if (uVar5 < 10) {
    if (7 < uVar5) {
LAB_20dbe55f:
      puVar4 = (undefined4 *)
               FUN_20dbd0e8((uint)psVar1,(HMETAFILE)(this + 9),param_2,puVar4,(int *)this[2],
                            (HBITMAP)this[1]);
      return puVar4;
    }
    if (uVar5 == 1) goto LAB_20dbe511;
    if ((1 < uVar5) && (uVar5 < 4)) goto LAB_20dbe55f;
  }
  else {
    if (uVar5 == 0xe) goto LAB_20dbe55f;
    if (uVar5 == 0xf) {
      puVar2 = (undefined4 *)FUN_20dbd7dc((LPCWSTR)this[0xb],&param_2);
      if ((int)puVar2 < 0) {
        return puVar2;
      }
      puVar4[2] = 0;
      *puVar4 = 1;
      puVar4[1] = param_2;
      return puVar2;
    }
    if (uVar5 == 0xbf01) {
      return (undefined4 *)0x80004001;
    }
  }
  if (uVar5 != DAT_20dc4dd4) {
    puVar4 = FUN_20dbceb3(psVar1,param_2,puVar4);
    return puVar4;
  }
LAB_20dbe511:
  puVar4 = (undefined4 *)FUN_20dbce35(psVar1,param_2,puVar4);
  return puVar4;
}



undefined4 __thiscall FUN_20dbe583(void *this,uint param_1)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined2 local_c;
  undefined2 local_a;
  int *local_8;
  
  piVar7 = (int *)0x0;
  local_18 = &local_c;
  local_c = 0x4009;
  local_a = 0x4002;
  local_20 = 0x610;
  local_1c = 2;
  local_8 = (int *)0x0;
  puVar1 = (ushort *)FUN_20dbdafc((void *)((int)this + 0xc),param_1);
  if (((puVar1[4] == 10) && (*(int *)(puVar1 + 8) == -0x7ffdfffc)) &&
     ((*puVar1 != 0xf ||
      (piVar2 = (int *)(*(int *)((int)this + 0x2c) + 0x1c),
      (**(code **)(*piVar2 + 0x20))(piVar2,&local_10), (int)local_10 < 1)))) {
    local_10 = FUN_20dbe90d((int *)this);
    if (local_10 == (undefined4 *)0x0) {
      uVar6 = 0x8007000e;
    }
    else {
      piVar7 = local_10 + 7;
      (**(code **)(*piVar7 + 4))(piVar7);
      uVar3 = (uint)*puVar1;
      if (uVar3 == DAT_20dc4dd8) {
        param_1 = 0xbf00;
      }
      else {
        param_1 = 0xbf01;
        if (uVar3 != DAT_20dc4dd4) {
          param_1 = uVar3;
        }
      }
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x34) + 0x1c);
      iVar5 = (**(code **)*puVar4)(puVar4,&DAT_20daf548,&local_8);
      if (-1 < iVar5) {
        (**(code **)(*local_8 + 0x10))(local_8,piVar7,param_1);
        (**(code **)(*local_8 + 8))(local_8);
      }
      local_14 = piVar7;
      FUN_20dab370(*(int *)((int)this + 0x34),&local_20);
      uVar6 = 0;
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_20dbdefb((int)local_10);
      (**(code **)(local_10[7] + 8))(local_10 + 7);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



uint FUN_20dbe6ba(int *param_1,ushort *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_2;
  if ((param_2 == (ushort *)0x0) || (param_3 == (undefined4 *)0x0)) {
    uVar2 = 0x80070057;
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2,&param_2);
    if (uVar2 == 0) {
      iVar3 = FUN_20dbdafc(param_1 + 3,(int)param_2);
      if (*(int *)(puVar1 + 8) == 1) {
        uVar2 = FUN_20dbe583(param_1,(uint)param_2);
        if (-1 < (int)uVar2) {
          if ((*(short *)(iVar3 + 8) == 10) && (*(int *)(iVar3 + 0x10) == -0x7ffdfffc)) {
            uVar2 = 0x80004005;
          }
          else if (*puVar1 == 1) {
            uVar2 = FUN_20dbcfc6((short *)(iVar3 + 8),puVar1,(int)param_3);
          }
          else {
            uVar2 = 0x80004001;
          }
        }
      }
      else {
        uVar2 = 0x80040069;
      }
    }
    else if (-1 < (int)uVar2) {
      uVar2 = 0x80040064;
    }
  }
  return uVar2;
}



void FUN_20dbe760(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&param_1);
  return;
}



undefined4 FUN_20dbe831(undefined4 *param_1,int param_2,uint *param_3)

{
  int *this;
  int iVar1;
  HANDLE hHeap;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *local_8;
  
  hHeap = DAT_20dc4190;
  local_8 = (undefined4 *)0x0;
  if (param_2 == 1) {
    if (param_3 == (uint *)0x0) {
      uVar2 = 0x80070057;
    }
    else {
      *param_3 = 0;
      if (hHeap != (HANDLE)0x0) {
        this = param_1 + 3;
        local_8 = (undefined4 *)HeapAlloc(hHeap,0,param_1[3] * 0x14);
        if (local_8 != (undefined4 *)0x0) {
          param_2 = 0;
          param_1 = local_8;
          if (0 < *this) {
            do {
              iVar3 = FUN_20dbdafc(this,param_2);
              param_2 = param_2 + 1;
              iVar1 = *this;
              puVar6 = (undefined4 *)(iVar3 + 0x18);
              puVar7 = param_1;
              for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              param_1 = param_1 + 5;
            } while (param_2 < iVar1);
          }
          uVar4 = FUN_20dbf3cb(*this,local_8);
          *param_3 = uVar4;
          if (uVar4 != 0) {
            return 0;
          }
        }
      }
      if (local_8 != (undefined4 *)0x0) {
        HeapFree(hHeap,0,local_8);
      }
      uVar2 = 0x8007000e;
    }
  }
  else {
    uVar2 = 0x80004001;
  }
  return uVar2;
}



undefined4 * __cdecl FUN_20dbe90d(int *param_1)

{
  int iVar1;
  LPVOID this;
  undefined4 *puVar2;
  
  iVar1 = param_1[0xb];
  this = FUN_20da2c52(0x38,DAT_20dc4190);
  if (this == (LPVOID)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_20dbde12(this,param_1,0,DAT_20dc5320,iVar1,param_1[2],param_1[1]);
  }
  return puVar2;
}



undefined4 * __thiscall
FUN_20dbe947(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  FUN_20da2ffa(this,(undefined4 *)0x0,param_1,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *puVar1 = &PTR_LAB_20daff60;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_20da7e80;
  *puVar1 = &PTR_LAB_20daff28;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined ***)this = &PTR_FUN_20dafef0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_20dafee0;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_20dbe99f(void *this,byte param_1)

{
  FUN_20dbe9c7((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20dbe9c7(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20dafef0;
  param_1[7] = &PTR_LAB_20daff28;
  param_1[8] = &PTR_LAB_20dafee0;
  if ((SAFEARRAY *)param_1[0xb] != (SAFEARRAY *)0x0) {
    SafeArrayDestroy((SAFEARRAY *)param_1[0xb]);
  }
  FUN_20da7472(param_1);
  return;
}



undefined4 __thiscall FUN_20dbe9f5(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  bool bVar7;
  
  *param_2 = 0;
  iVar3 = *param_1;
  if (iVar3 == 0x2334d2b3) {
    iVar2 = 0x10;
    bVar7 = true;
    piVar5 = param_1;
    pcVar6 = &DAT_20da17e8;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_20dbea1e;
LAB_20dbea37:
    uVar4 = (int)this + 0x1c;
LAB_20dbea3c:
    piVar5 = (int *)(-(uint)(this != (void *)0x0) & uVar4);
    (**(code **)(*piVar5 + 4))(piVar5);
    *param_2 = piVar5;
    uVar1 = 0;
  }
  else {
LAB_20dbea1e:
    if (iVar3 == 0x20400) {
      iVar2 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = "";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) goto LAB_20dbea37;
    }
    if (iVar3 == -0x20f4c2a0) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = &DAT_20db0170;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar4 = (int)this + 0x20;
        goto LAB_20dbea3c;
      }
    }
    uVar1 = FUN_20da5491(this,param_1,param_2);
  }
  return uVar1;
}



int FUN_20dbea85(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_20dbee88(param_1 + -0x1c);
  puVar1 = param_3;
  if (-1 < iVar2) {
    *param_3 = 0;
    if ((param_2 < 1) || (*(int *)(param_1 + 0x14) < param_2)) {
      iVar2 = -0x7ffdfff5;
    }
    else {
      iVar2 = SafeArrayGetElement(*(SAFEARRAY **)(param_1 + 0x10),&param_2,&local_8);
      if (-1 < iVar2) {
        *puVar1 = local_8;
      }
    }
  }
  return iVar2;
}



int FUN_20dbeaea(void *param_1,void *param_2,short param_3,undefined4 param_4,int param_5)

{
  void *pvVar1;
  int iVar2;
  undefined1 local_20 [12];
  LONG local_14;
  int local_10;
  int local_c;
  ULONG local_8;
  
  if ((param_3 == 10) && (param_5 == -0x7ffdfffc)) {
    local_8 = *(int *)((int)param_1 + 0x14) + 1;
  }
  else {
    VariantInit((VARIANTARG *)local_20);
    iVar2 = VariantChangeType((VARIANTARG *)local_20,(VARIANTARG *)&param_3,0,3);
    if (iVar2 < 0) goto LAB_20dbebbc;
    local_8 = local_20._8_4_;
    if (((int)local_20._8_4_ < 1) || (*(int *)((int)param_1 + 0x14) + 1 < (int)local_20._8_4_)) {
      iVar2 = -0x7ffdfff5;
      goto LAB_20dbebbc;
    }
  }
  pvVar1 = param_1;
  iVar2 = FUN_20dbee88((int)param_1 + -0x1c);
  if (-1 < iVar2) {
    iVar2 = SafeArrayGetUBound(*(SAFEARRAY **)((int)pvVar1 + 0x10),1,&local_10);
    if (-1 < iVar2) {
      if (local_10 < *(int *)((int)pvVar1 + 0x14) + 1) {
        local_20._8_4_ = local_10 + 10;
        local_14 = 1;
        iVar2 = SafeArrayRedim(*(SAFEARRAY **)((int)pvVar1 + 0x10),(SAFEARRAYBOUND *)(local_20 + 8))
        ;
        if (iVar2 < 0) goto LAB_20dbebbc;
      }
      local_c = *(int *)((int)pvVar1 + 0x14);
      if ((int)local_8 <= local_c) {
        do {
          local_14 = local_c + 1;
          iVar2 = SafeArrayGetElement(*(SAFEARRAY **)((int)pvVar1 + 0x10),&local_c,&param_1);
          if (iVar2 < 0) {
            param_1 = (void *)0x0;
          }
          SafeArrayPutElement(*(SAFEARRAY **)((int)pvVar1 + 0x10),&local_14,param_1);
          local_c = local_c + -1;
        } while ((int)local_8 <= local_c);
      }
      SafeArrayPutElement(*(SAFEARRAY **)((int)pvVar1 + 0x10),(LONG *)&local_8,param_2);
      *(int *)((int)pvVar1 + 0x14) = *(int *)((int)pvVar1 + 0x14) + 1;
    }
  }
LAB_20dbebbc:
  VariantClear((VARIANTARG *)&param_3);
  return iVar2;
}



HRESULT FUN_20dbec11(int param_1)

{
  HRESULT HVar1;
  
  HVar1 = 0;
  if (*(SAFEARRAY **)(param_1 + 0x10) != (SAFEARRAY *)0x0) {
    HVar1 = SafeArrayDestroy(*(SAFEARRAY **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return HVar1;
}



int FUN_20dbec32(int param_1)

{
  LONG *rgIndices;
  int iVar1;
  VARIANTARG local_20;
  int local_10;
  void *local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = FUN_20dbee88(param_1 + -0x1c);
  if (-1 < local_8) {
    VariantInit(&local_20);
    local_8 = VariantChangeType(&local_20,(VARIANTARG *)&stack0x00000008,0,3);
    if (-1 < local_8) {
      if (0 < (int)local_20.n1._8_4_) {
        rgIndices = (LONG *)(iVar1 + 0x14);
        if ((int)local_20.n1._8_4_ <= *(int *)(iVar1 + 0x14)) {
          param_1 = local_20.n1._8_4_;
          if ((int)local_20.n1._8_4_ < *(int *)(iVar1 + 0x14)) {
            do {
              local_10 = param_1 + 1;
              local_8 = SafeArrayGetElement(*(SAFEARRAY **)(iVar1 + 0x10),&local_10,&local_c);
              if (local_8 < 0) {
                local_c = (void *)0x0;
              }
              SafeArrayPutElement(*(SAFEARRAY **)(iVar1 + 0x10),&param_1,local_c);
              param_1 = param_1 + 1;
            } while (param_1 < *rgIndices);
          }
          SafeArrayPutElement(*(SAFEARRAY **)(iVar1 + 0x10),rgIndices,(void *)0x0);
          *rgIndices = *rgIndices + -1;
          VariantClear((VARIANTARG *)&stack0x00000008);
          return local_8;
        }
      }
      local_8 = -0x7ffdfff5;
    }
  }
  return local_8;
}



int FUN_20dbecf3(int param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_EAX;
  HRESULT HVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  *param_2 = 0;
  iVar1 = FUN_20dbee88(param_1 + -0x1c);
  if (-1 < iVar1) {
    HVar2 = FUN_20dbef2f(*(SAFEARRAY **)(param_1 + 0x10),*(int *)(param_1 + 0x14),&local_8);
    iVar1 = extraout_EAX;
    if (-1 < extraout_EAX) {
      iVar1 = (**(code **)*local_8)(local_8,&DAT_20da8470,HVar2);
      if (-1 < iVar1) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar1;
}



uint __thiscall FUN_20dbed64(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  LPCSTR lpMem;
  short local_34 [10];
  STGMEDIUM local_20;
  int *local_14;
  void *local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = this;
  uVar1 = FUN_20dbf4bf();
  if (uVar1 == 0) {
    (**(code **)(*(int *)((int)this + 0x1c) + 0x28))((int)this + 0x1c);
    local_8 = FUN_20dbcc5e(0xf,local_34);
    if (-1 < (int)local_8) {
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_34,&local_20);
      if (iVar2 < 0) {
        local_8 = FUN_20dbbcee(*(int **)((int)this + 0x28),0x1cd,*(int **)((int)this + 0x24));
      }
      else {
        if ((local_20.tymed != 1) || (local_20.u.hBitmap == (HBITMAP)0x0)) {
          return 0x8000ffff;
        }
        local_c = 1;
        iVar2 = FUN_20dbf4bf();
        if (iVar2 == 0) {
          local_14 = (int *)(*DAT_20dc5514)(local_20.u.hBitmap,0xffffffff,0,0);
          param_1 = (int *)0x0;
          if (local_14 != (int *)0x0) {
            while( true ) {
              iVar2 = (*DAT_20dc5514)(local_20.u.hBitmap,param_1,0,0);
              lpMem = (LPCSTR)HeapAlloc(DAT_20dc4190,0,iVar2 + 1U);
              if (lpMem == (LPCSTR)0x0) break;
              (*DAT_20dc5514)(local_20.u.hBitmap,param_1,lpMem,iVar2 + 1U);
              local_8 = FUN_20dbeec8(local_10,lpMem);
              HeapFree(DAT_20dc4190,0,lpMem);
              if (((int)local_8 < 0) || (param_1 = (int *)((int)param_1 + 1), local_14 <= param_1))
              break;
            }
          }
        }
      }
    }
    if (local_c != 0) {
      ReleaseStgMedium(&local_20);
    }
  }
  else {
    local_8 = FUN_20dbf55c(uVar1);
  }
  return local_8;
}



int __fastcall FUN_20dbee88(int param_1)

{
  int iVar1;
  SAFEARRAY *pSVar2;
  SAFEARRAYBOUND local_c;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_c.cElements = 10;
    local_c.lLbound = 1;
    pSVar2 = SafeArrayCreate(8,1,&local_c);
    *(SAFEARRAY **)(param_1 + 0x2c) = pSVar2;
    iVar1 = (-(uint)(pSVar2 != (SAFEARRAY *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 __thiscall FUN_20dbeec8(void *this,LPCSTR param_1)

{
  LPWSTR bstrString;
  undefined4 uVar1;
  _union_2683 local_14;
  
  bstrString = FUN_20da95d3(param_1,(BSTR)0x0);
  if (bstrString == (LPWSTR)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    VariantInit((VARIANTARG *)&local_14.n2);
    local_14.n2.vt = 10;
    local_14._8_4_ = 0x80020004;
    uVar1 = (**(code **)(*(int *)((int)this + 0x1c) + 0x24))
                      ((int *)((int)this + 0x1c),bstrString,local_14._0_4_,local_14.decVal.Hi32,
                       0x80020004,local_14._12_4_);
    SysFreeString(bstrString);
  }
  return uVar1;
}



HRESULT __cdecl FUN_20dbef2f(SAFEARRAY *param_1,int param_2,undefined4 *param_3)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  int *this;
  HRESULT HVar3;
  HRESULT unaff_EBX;
  
  pvVar1 = DAT_20dc4190;
  *param_3 = 0;
  puVar2 = (undefined4 *)FUN_20da2c52(0x18,pvVar1);
  if (puVar2 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = (int *)FUN_20dbef93(puVar2);
  }
  if (this != (int *)0x0) {
    (**(code **)(*this + 4))(this);
    HVar3 = FUN_20dbefef(this,param_1,param_2);
    if (-1 < HVar3) {
      *param_3 = this;
      return unaff_EBX;
    }
  }
  if (this != (int *)0x0) {
    (**(code **)(*this + 8))(this);
  }
  return unaff_EBX;
}



void __fastcall FUN_20dbef93(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20daff98;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}



undefined4 * __thiscall FUN_20dbefaa(void *this,byte param_1)

{
  FUN_20dbefd2((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_20dc4190,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_20dbefd2(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_20daff98;
  if ((SAFEARRAY *)param_1[5] != (SAFEARRAY *)0x0) {
    SafeArrayDestroy((SAFEARRAY *)param_1[5]);
  }
  param_1[5] = 0;
  return;
}



HRESULT __thiscall FUN_20dbefef(void *this,SAFEARRAY *param_1,int param_2)

{
  SAFEARRAY **ppsaOut;
  int iVar1;
  int iVar2;
  void *local_c;
  void *local_8;
  
  *(undefined4 *)((int)this + 0x14) = 0;
  ppsaOut = (SAFEARRAY **)((int)this + 0x14);
  local_c = this;
  local_8 = this;
  local_8 = (void *)SafeArrayCopy(param_1,ppsaOut);
  if (-1 < (int)local_8) {
    local_8 = (void *)SafeArrayGetLBound(param_1,1,(LONG *)((int)this + 4));
    if ((-1 < (int)local_8) &&
       (local_8 = (void *)SafeArrayGetUBound(param_1,1,(LONG *)&local_c), -1 < (int)local_8)) {
      iVar1 = *(LONG *)((int)this + 4);
      iVar2 = (int)local_c + (1 - iVar1);
      if (param_2 < iVar2) {
        iVar2 = param_2;
      }
      *(int *)((int)this + 8) = iVar2;
      *(int *)((int)this + 0xc) = iVar1;
      return 0;
    }
  }
  if (*ppsaOut != (SAFEARRAY *)0x0) {
    SafeArrayDestroy(*ppsaOut);
  }
  *ppsaOut = (SAFEARRAY *)0x0;
  return (HRESULT)local_8;
}



undefined4 FUN_20dbf071(int *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = param_2;
  pcVar3 = "";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = "\x04\x04\x02";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *param_2 == *pcVar2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar4);
    if (!bVar4) {
      *param_3 = 0;
      return 0x80004002;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  *param_3 = param_1;
  return 0;
}



uint FUN_20dbf0e4(int param_1,uint param_2,VARIANTARG *param_3,uint *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  VARIANTARG *pvarg;
  int iVar5;
  uint uVar6;
  uint uVar7;
  VARIANTARG *pvarg_00;
  undefined4 local_8;
  
  iVar5 = param_1;
  uVar7 = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  piVar1 = (int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  piVar2 = (int *)(param_1 + 8);
  pvarg_00 = param_3;
  param_1 = iVar3;
  if (iVar3 < *piVar1 + *piVar2) {
    do {
      if (param_2 <= uVar7) break;
      local_8 = 0;
      uVar6 = SafeArrayGetElement(*(SAFEARRAY **)(iVar5 + 0x14),&param_1,&local_8);
      uVar4 = param_2;
      pvarg = param_3;
      if ((int)uVar6 < 0) {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          VariantClear(pvarg);
          pvarg = pvarg + 1;
        }
        return uVar6;
      }
      VariantInit(pvarg_00);
      param_1 = param_1 + 1;
      (pvarg_00->n1).n2.vt = 8;
      *(undefined4 *)((int)&pvarg_00->n1 + 8) = local_8;
      uVar7 = uVar7 + 1;
      pvarg_00 = pvarg_00 + 1;
    } while (param_1 < *(int *)(iVar5 + 4) + *(int *)(iVar5 + 8));
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7;
  }
  *(int *)(iVar5 + 0xc) = param_1;
  return (uint)(uVar7 < param_2);
}



// WARNING: Variable defined which should be unmapped: param_2

undefined4 * FUN_20dbf1c3(int param_1,undefined4 *param_2)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 *puVar3;
  int *this;
  
  pvVar2 = DAT_20dc4190;
  *param_2 = 0;
  puVar3 = (undefined4 *)FUN_20da2c52(0x18,pvVar2);
  if (puVar3 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = (int *)FUN_20dbef93(puVar3);
  }
  if (this == (int *)0x0) {
    param_2 = (undefined4 *)0x8007000e;
    puVar3 = param_2;
  }
  else {
    (**(code **)(*this + 4))(this);
    puVar3 = (undefined4 *)FUN_20dbefef(this,*(SAFEARRAY **)(param_1 + 0x14),*(int *)(param_1 + 8));
    if (-1 < (int)puVar3) {
      iVar1 = *(int *)(param_1 + 0xc);
      *param_2 = this;
      this[3] = iVar1;
      param_2 = puVar3;
      return param_2;
    }
  }
  param_2 = puVar3;
  if (this != (int *)0x0) {
    (**(code **)(*this + 8))(this);
  }
  return param_2;
}



uint __cdecl FUN_20dbf3cb(undefined4 param_1,undefined4 param_2)

{
  LPVOID this;
  undefined4 *puVar1;
  
  this = FUN_20da2c52(0x40,DAT_20dc4190);
  if (this == (LPVOID)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_20dba9ac(this,(undefined4 *)&DAT_20db0250,param_1,0x14,param_2,&LAB_20dbf407);
  }
  return -(uint)(puVar1 != (undefined4 *)0x0) & (uint)(puVar1 + 5);
}



void __cdecl FUN_20dbf419(undefined2 *param_1,undefined2 *param_2)

{
  SIZE_T *pSVar1;
  
  pSVar1 = *(SIZE_T **)(param_2 + 2);
  *param_1 = *param_2;
  pSVar1 = FUN_20dbf44a(pSVar1);
  *(SIZE_T **)(param_1 + 2) = pSVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



SIZE_T * __cdecl FUN_20dbf44a(SIZE_T *param_1)

{
  SIZE_T *pSVar1;
  uint uVar2;
  uint uVar3;
  SIZE_T *pSVar4;
  
  if (param_1 != (SIZE_T *)0x0) {
    pSVar1 = (SIZE_T *)CoTaskMemAlloc(*param_1);
    if (pSVar1 != (SIZE_T *)0x0) {
      uVar3 = *param_1;
      pSVar4 = pSVar1;
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pSVar4 = *param_1;
        param_1 = param_1 + 1;
        pSVar4 = pSVar4 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(char *)pSVar4 = (char)*param_1;
        param_1 = (SIZE_T *)((int)param_1 + 1);
        pSVar4 = (SIZE_T *)((int)pSVar4 + 1);
      }
    }
    return pSVar1;
  }
  return (SIZE_T *)0x0;
}



LPSTR __cdecl FUN_20dbf479(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = (LPCWSTR)&DAT_20dc5318;
  }
  if (param_3 == 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = WideCharToMultiByte(0,0,param_2,-1,param_1,param_3 + -1,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  if (iVar1 == 0) {
    param_1[param_3 + -1] = '\0';
  }
  return param_1;
}



void FUN_20dbf4bf(void)

{
  FUN_20dbf4dd("SHELL32.DLL",(int *)&DAT_20dc552c,0x30,1,3,&PTR_s_DragFinish_20dc5480);
  return;
}



undefined4 __cdecl
FUN_20dbf4dd(LPCSTR param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (*param_2 == 0) {
    hModule = LoadLibraryA(param_1);
    if (hModule == (HMODULE)0x0) {
LAB_20dbf545:
      if (hModule != (HMODULE)0x0) {
        FreeLibrary(hModule);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      return param_3;
    }
    param_1 = (LPCSTR)0x0;
    if (param_5 != 0) {
      do {
        pFVar1 = GetProcAddress(hModule,(LPCSTR)*param_6);
        *(FARPROC *)param_6[1] = pFVar1;
        if (pFVar1 == (FARPROC)0x0) goto LAB_20dbf545;
        param_1 = param_1 + 1;
        param_6 = param_6 + 2;
      } while (param_1 < param_5);
    }
    *param_2 = (int)hModule;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  return 0;
}



uint __cdecl FUN_20dbf55c(uint param_1)

{
  if (param_1 == 0) {
    return 0x80004005;
  }
  if (param_1 != 7) {
    return param_1 | 0x800a0000;
  }
  return 0x8007000e;
}



void FUN_20dbf57b(void)

{
  HDC hdc;
  
  if (DAT_20dc5528 == 0) {
    hdc = GetDC((HWND)0x0);
    DAT_20dc5524 = GetDeviceCaps(hdc,0xe);
    DAT_20dc5504 = GetDeviceCaps(hdc,0x68);
    DAT_20dc5508 = GetDeviceCaps(hdc,0xc);
    DAT_20dc5528 = 1;
    DAT_20dc5518 = (uint)(DAT_20dc5504 != 0);
    DAT_20dc551c = GetStockObject(0xf);
    ReleaseDC((HWND)0x0,hdc);
  }
  return;
}



HGLOBAL __cdecl FUN_20dbf5e7(HBITMAP param_1,HPALETTE param_2)

{
  BYTE BVar1;
  LPBITMAPINFO ptVar2;
  HDC hdc;
  int iVar3;
  DWORD *pDVar4;
  LPBITMAPINFO ptVar5;
  RGBQUAD *pPalEntries;
  LPBITMAPINFO ptVar6;
  uint uVar7;
  uint uVar8;
  DWORD local_60 [2];
  UINT local_58;
  undefined2 local_54;
  ushort local_52;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  int local_34;
  UINT local_30;
  ushort local_28;
  ushort uStack_26;
  uint local_20;
  BYTE *local_1c;
  HGLOBAL local_18;
  LPBITMAPINFO local_14;
  HGLOBAL local_10;
  LPBITMAPINFO local_c;
  DWORD local_8;
  
  local_8 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc5528 == 0) {
    FUN_20dbf57b();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (param_1 == (HBITMAP)0x0) {
    return (HGLOBAL)0x0;
  }
  GetObjectA(param_1,0x18,local_38);
  if (DAT_20dc5518 != 0) {
    if (param_2 == (HPALETTE)0x0) {
      param_2 = DAT_20dc551c;
    }
    if (((DAT_20dc5504 == 0x100) && ((uint)local_28 * (uint)uStack_26 == 8)) &&
       (GetObjectA(param_2,4,&local_8), 0x100 < local_8)) {
      local_8 = 0;
    }
  }
  local_52 = local_28 * uStack_26;
  local_60[1] = local_34;
  local_60[0] = 0x28;
  local_4c = ((uint)local_52 * local_34 + 0x1f >> 5) * local_30 * 4;
  local_58 = local_30;
  local_54 = 1;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_1c = (BYTE *)FUN_20dbfa08((int *)local_60);
  local_10 = GlobalAlloc(0x42,(int)&((HBITMAP)(local_1c + 0x28))->unused + local_4c);
  if (local_10 == (HGLOBAL)0x0) {
    return (HGLOBAL)0x0;
  }
  ptVar2 = (LPBITMAPINFO)GlobalLock(local_10);
  local_14 = ptVar2;
  if (local_8 != 0) {
    local_18 = GlobalAlloc(0,local_60[0] + 0x400);
    if (local_18 == (HGLOBAL)0x0) goto LAB_20dbf709;
    ptVar2 = (LPBITMAPINFO)GlobalLock(local_18);
  }
  pDVar4 = local_60;
  ptVar5 = ptVar2;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    (ptVar5->bmiHeader).biSize = *pDVar4;
    pDVar4 = pDVar4 + 1;
    ptVar5 = (LPBITMAPINFO)&(ptVar5->bmiHeader).biWidth;
  }
  local_c = ptVar2;
  hdc = GetDC((HWND)0x0);
  if (DAT_20dc5518 != 0) {
    param_2 = SelectPalette(hdc,param_2,1);
    RealizePalette(hdc);
  }
  local_1c = &local_14->bmiColors[0].rgbBlue + (int)((HBITMAP)(local_1c + 0x28) + -10);
  iVar3 = GetDIBits(hdc,param_1,0,local_58,local_1c,local_c,(uint)(local_8 != 0));
  uVar7 = (uint)(iVar3 != 0);
  local_20 = uVar7;
  if (DAT_20dc5518 != 0) {
    param_2 = SelectPalette(hdc,param_2,1);
  }
  ReleaseDC((HWND)0x0,hdc);
  ptVar2 = local_14;
  if (local_8 != 0) {
    if (uVar7 != 0) {
      ptVar5 = local_c;
      ptVar6 = local_14;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        (ptVar6->bmiHeader).biSize = (ptVar5->bmiHeader).biSize;
        ptVar5 = (LPBITMAPINFO)&(ptVar5->bmiHeader).biWidth;
        ptVar6 = (LPBITMAPINFO)&(ptVar6->bmiHeader).biWidth;
      }
      (local_14->bmiHeader).biClrUsed = local_8;
      param_1 = (HBITMAP)local_1c;
      iVar3 = FUN_20dbfa08((int *)local_14);
      uVar7 = 0;
      if (local_4c != 0) {
        do {
          (&ptVar2->bmiColors[0].rgbBlue)[uVar7 + iVar3] =
               (&local_c->bmiColors[0].rgbBlue)[(uint)(byte)param_1->unused * 2];
          uVar7 = uVar7 + 1;
          param_1 = (HBITMAP)((int)&param_1->unused + 1);
        } while (uVar7 < local_4c);
      }
      pPalEntries = ptVar2->bmiColors;
      GetPaletteEntries(param_2,0,local_8,(LPPALETTEENTRY)pPalEntries);
      uVar8 = 0;
      uVar7 = local_20;
      if (local_8 != 0) {
        do {
          BVar1 = pPalEntries->rgbBlue;
          pPalEntries->rgbBlue = pPalEntries->rgbRed;
          pPalEntries->rgbRed = BVar1;
          uVar8 = uVar8 + 1;
          pPalEntries = pPalEntries + 1;
        } while (uVar8 < local_8);
      }
    }
    GlobalUnlock(local_18);
    GlobalFree(local_18);
  }
  GlobalUnlock(local_10);
  if (uVar7 != 0) {
    return local_10;
  }
LAB_20dbf709:
  GlobalFree(local_10);
  return (HGLOBAL)0x0;
}



HBITMAP __cdecl FUN_20dbf84e(BITMAPINFOHEADER *param_1,undefined4 *param_2)

{
  HDC hdc;
  int iVar1;
  HBITMAP pHVar2;
  HPALETTE hPal;
  HPALETTE local_4;
  
  hPal = (HPALETTE)0x0;
  local_4 = (HPALETTE)0x0;
  hdc = GetDC((HWND)0x0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc5528 == 0) {
    FUN_20dbf57b();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc5518 != 0) {
    hPal = FUN_20dbfa23((int *)param_1);
    if (hPal != (HPALETTE)0x0) {
      local_4 = SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
  }
  iVar1 = FUN_20dbfa08((int *)param_1);
  pHVar2 = CreateDIBitmap(hdc,param_1,4,(void *)((int)&param_1->biSize + iVar1 + param_1->biSize),
                          (BITMAPINFO *)param_1,0);
  if (DAT_20dc5518 != 0) {
    if (local_4 != (HPALETTE)0x0) {
      SelectPalette(hdc,local_4,0);
      RealizePalette(hdc);
    }
    if ((pHVar2 == (HBITMAP)0x0) && (hPal != (HPALETTE)0x0)) {
      DeleteObject(hPal);
    }
  }
  *param_2 = hPal;
  ReleaseDC((HWND)0x0,hdc);
  return pHVar2;
}



undefined4 __cdecl FUN_20dbf911(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  BITMAPINFOHEADER *pBVar2;
  HBITMAP pHVar3;
  undefined4 **ppuVar4;
  
  puVar1 = param_1;
  if ((HPALETTE)*param_2 == (HPALETTE)0x0) {
    pHVar3 = FUN_20dbf983((HBITMAP)*param_1);
    if (pHVar3 != (HBITMAP)0x0) {
      *puVar1 = pHVar3;
      return 0;
    }
  }
  else {
    hMem = FUN_20dbf5e7((HBITMAP)*param_1,(HPALETTE)*param_2);
    if (hMem != (HGLOBAL)0x0) {
      ppuVar4 = &param_1;
      pBVar2 = (BITMAPINFOHEADER *)GlobalLock(hMem);
      pHVar3 = FUN_20dbf84e(pBVar2,ppuVar4);
      GlobalUnlock(hMem);
      GlobalFree(hMem);
      if (pHVar3 != (HBITMAP)0x0) {
        *puVar1 = pHVar3;
        *param_2 = param_1;
        return 0;
      }
    }
  }
  return 7;
}



HBITMAP __cdecl FUN_20dbf983(HBITMAP param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID lpvBits;
  LONG LVar2;
  SIZE_T dwBytes;
  HBITMAP pHVar3;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  ushort local_c;
  ushort local_a;
  
  iVar1 = GetObjectA(param_1,0x18,local_1c);
  if (iVar1 != 0) {
    dwBytes = (uint)local_c * local_14 * local_10;
    hMem = GlobalAlloc(0x42,dwBytes);
    if (hMem != (HGLOBAL)0x0) {
      lpvBits = GlobalLock(hMem);
      LVar2 = GetBitmapBits(param_1,dwBytes,lpvBits);
      if (LVar2 == 0) {
        pHVar3 = (HBITMAP)0x0;
      }
      else {
        pHVar3 = CreateBitmap(local_18,local_14,(uint)local_c,(uint)local_a,lpvBits);
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
      return pHVar3;
    }
  }
  return (HBITMAP)0x0;
}



int __cdecl FUN_20dbfa08(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_20dbfc03(param_1);
  if (*param_1 == 0xc) {
    return iVar1 * 3;
  }
  return iVar1 << 2;
}



HPALETTE __cdecl FUN_20dbfa23(int *param_1)

{
  BYTE BVar1;
  int iVar2;
  uint uVar3;
  LOGPALETTE *plpal;
  BYTE *pBVar4;
  uint *puVar5;
  uint uVar6;
  PALETTEENTRY *pPVar7;
  HPALETTE pHVar8;
  bool bVar9;
  bool bVar10;
  uint local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (DAT_20dc5528 == 0) {
    FUN_20dbf57b();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  if (param_1 != (int *)0x0) {
    uVar3 = FUN_20dbfc03(param_1);
    if (uVar3 == 0) {
      pHVar8 = FUN_20dbfc3b();
      return pHVar8;
    }
    bVar9 = uVar3 < 0x11;
    plpal = (LOGPALETTE *)HeapAlloc(DAT_20dc4190,0,DAT_20dc5504 * 4 + 8);
    if (plpal != (LOGPALETTE *)0x0) {
      iVar2 = *param_1;
      local_8 = 0;
      pBVar4 = (BYTE *)(iVar2 + (int)param_1);
      plpal->palNumEntries = 0;
      plpal->palVersion = 0x300;
      pPVar7 = plpal->palPalEntry;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        param_1 = (int *)0x1;
        bVar10 = false;
        puVar5 = &DAT_20dafff8;
        do {
          if (&UNK_20db0037 < puVar5) break;
          bVar10 = (uint)CONCAT21(CONCAT11(*pBVar4,pBVar4[1]),pBVar4[2]) == *puVar5;
          if (bVar10) {
            if (((uint)param_1 & local_8) != 0) goto LAB_20dbfb4b;
            local_8 = local_8 | (uint)param_1;
          }
          param_1 = (int *)((int)param_1 << 1);
          puVar5 = puVar5 + 1;
        } while (!bVar10);
        if ((bVar9) && (bVar10)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        BVar1 = pBVar4[2];
        pPVar7->peFlags = '\0';
        pPVar7->peRed = BVar1;
        pPVar7->peGreen = pBVar4[1];
        pPVar7->peBlue = *pBVar4;
        pPVar7 = pPVar7 + 1;
        plpal->palNumEntries = plpal->palNumEntries + 1;
LAB_20dbfb4b:
        if (iVar2 == 0xc) {
          pBVar4 = pBVar4 + 3;
        }
        else {
          pBVar4 = pBVar4 + 4;
        }
      }
      pHVar8 = (HPALETTE)0x0;
      if (!bVar9) {
        param_1 = (int *)0x0;
        if (local_8 != 0xffff) {
          pBVar4 = "";
          do {
            uVar3 = (uint)plpal->palNumEntries;
            if (DAT_20dc5504 <= (int)uVar3) break;
            uVar6 = 1 << ((byte)param_1 & 0x1f);
            if ((local_8 & uVar6) == 0) {
              local_8 = local_8 | uVar6;
              BVar1 = *pBVar4;
              plpal->palNumEntries = plpal->palNumEntries + 1;
              plpal->palPalEntry[uVar3].peRed = BVar1;
              plpal->palPalEntry[uVar3].peGreen = pBVar4[1];
              plpal->palPalEntry[uVar3].peBlue = (BYTE)((uint)*(undefined4 *)pBVar4 >> 0x10);
              plpal->palPalEntry[uVar3].peFlags = '\0';
            }
            param_1 = (int *)((int)param_1 + 1);
            pBVar4 = pBVar4 + 4;
          } while (local_8 != 0xffff);
        }
        pHVar8 = CreatePalette(plpal);
      }
      HeapFree(DAT_20dc4190,0,plpal);
      return pHVar8;
    }
  }
  return (HPALETTE)0x0;
}



int __cdecl FUN_20dbfc03(int *param_1)

{
  short sVar1;
  
  if (*param_1 == 0xc) {
    sVar1 = *(short *)((int)param_1 + 10);
  }
  else {
    if (param_1[8] != 0) {
      return param_1[8];
    }
    sVar1 = *(short *)((int)param_1 + 0xe);
  }
  if (sVar1 == 1) {
    return 2;
  }
  if (sVar1 == 4) {
    return 0x10;
  }
  if (sVar1 == 8) {
    return 0x100;
  }
  return 0;
}



HPALETTE FUN_20dbfc3b(void)

{
  BYTE BVar1;
  BYTE BVar2;
  LOGPALETTE *plpal;
  HPALETTE pHVar3;
  HDC hdc;
  DWORD color;
  COLORREF CVar4;
  uint uVar5;
  int iVar6;
  BYTE *pBVar7;
  LOGPALETTE *pLVar8;
  uint uVar9;
  uint local_14;
  BYTE *local_10;
  BYTE *local_c;
  int local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  pHVar3 = DAT_20dc550c;
  if (DAT_20dc550c == (HPALETTE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
    plpal = (LOGPALETTE *)HeapAlloc(DAT_20dc4190,0,0x408);
    if (plpal == (LOGPALETTE *)0x0) {
      pHVar3 = (HPALETTE)0x0;
    }
    else {
      plpal->palNumEntries = 0x100;
      plpal->palVersion = 0x300;
      local_8 = 0;
      hdc = GetDC((HWND)0x0);
      local_10 = &plpal->palPalEntry[0].peFlags;
      local_c = &plpal->palPalEntry[0].peBlue;
      local_14 = 0;
      pBVar7 = &plpal->palPalEntry[0].peGreen;
      iVar6 = local_8;
      pLVar8 = plpal;
      do {
        local_8 = iVar6;
        color = GetSysColor(local_14);
        pLVar8->palPalEntry[0].peRed = (BYTE)color;
        *pBVar7 = (BYTE)(color >> 8);
        *local_c = (BYTE)(color >> 0x10);
        *local_10 = '\0';
        pLVar8 = pLVar8 + 1;
        CVar4 = GetNearestColor(hdc,color);
        *(char *)&pLVar8->palVersion = (char)CVar4;
        pBVar7[4] = (char)(CVar4 >> 8);
        local_c[4] = (char)(CVar4 >> 0x10);
        local_10[4] = 0;
        local_c = local_c + 8;
        local_10 = local_10 + 8;
        pBVar7 = pBVar7 + 8;
        local_14 = local_14 + 1;
        iVar6 = local_8 + 2;
      } while (local_14 < 0x14);
      ReleaseDC((HWND)0x0,hdc);
      local_14 = 0;
      local_10 = &plpal[1].palPalEntry[local_8].peGreen;
      do {
        uVar9 = 0;
        local_c = local_10;
        do {
          BVar1 = (&DAT_20db0038)[uVar9];
          uVar5 = 0;
          pBVar7 = local_c + 0x18;
          do {
            ((PALETTEENTRY *)(local_c + -1))->peRed = (&DAT_20db0038)[local_14];
            BVar2 = (&DAT_20db0038)[uVar5];
            *local_c = BVar1;
            local_c[1] = BVar2;
            local_c[2] = '\0';
            local_c = local_c + 4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < 6);
          uVar9 = uVar9 + 1;
          local_c = pBVar7;
        } while (uVar9 < 6);
        local_14 = local_14 + 1;
        local_10 = local_10 + 0x90;
      } while (local_14 < 6);
      if (local_8 + 0xdaU < 0x100) {
        pBVar7 = &plpal[0x6d].palPalEntry[local_8].peGreen;
        iVar6 = 0x100 - (local_8 + 0xdaU);
        do {
          ((PALETTEENTRY *)(pBVar7 + -1))->peRed = 0xff;
          *pBVar7 = '\0';
          pBVar7[1] = '\0';
          pBVar7[2] = '\0';
          pBVar7 = pBVar7 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      pHVar3 = CreatePalette(plpal);
      DAT_20dc550c = pHVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
      HeapFree(DAT_20dc4190,0,plpal);
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_20dc4178);
  }
  return pHVar3;
}



undefined4 __cdecl
FUN_20dbfe38(HWND param_1,uint *param_2,undefined *param_3,int param_4,undefined4 *param_5)

{
  code *pcVar1;
  LPARAM lParam;
  undefined4 in_EAX;
  BOOL BVar2;
  uint wParam;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  _OSVERSIONINFOA local_bc;
  tagMSG local_28;
  code *local_c;
  uint local_8;
  
  local_8 = CONCAT22((short)((uint)in_EAX >> 0x10),(short)*param_2);
  if (param_1 != (HWND)0x0) {
    if (DAT_20dc5530 == 0) {
      DAT_20dc5530 = RegisterWindowMessageA(s_WM_DBCS_TRAILBYTE_20dc529c);
    }
    if (DAT_20dc5498 == 0xffff) {
      local_bc.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_bc);
      DAT_20dc5498 = (ushort)(local_bc.dwPlatformId == 2);
    }
    pcVar5 = PeekMessageA_exref;
    BVar2 = PeekMessageA(&local_28,param_1,0,0,2);
    if ((((BVar2 == 0) || (DAT_20dc5530 != local_28.message)) || (*param_2 != local_28.wParam)) ||
       (*(int *)param_3 != local_28.lParam)) {
      local_28.lParam = 0;
      BVar2 = IsDBCSLeadByte((BYTE)local_8);
      if ((BVar2 != 0) && (BVar2 = PeekMessageA(&local_28,param_1,0x102,0x102,3), BVar2 != 0)) {
        local_8 = local_8 * 0x100 + (local_28.wParam & 0xff);
      }
      if ((param_4 != 0) && (param_5 != (undefined4 *)0x0)) {
        FUN_20dab370(param_4,param_5);
      }
      lParam = local_28.lParam;
      pcVar1 = PostMessageA_exref;
      if ((ushort)local_8 == 0) {
        *param_2 = 0;
        return 0;
      }
      if (0xff < (ushort)local_8) {
        wParam = local_8 & 0xff;
        PostMessageA(param_1,DAT_20dc5530,wParam,local_28.lParam);
        if (DAT_20dc5498 == 0) {
          local_c = pcVar1;
          param_3 = pcVar5;
          PostMessageA(param_1,0x102,wParam,lParam);
        }
        else {
          local_c = PostMessageW_exref;
          param_3 = PeekMessageW_exref;
          uVar3 = FUN_20dc0043(local_8);
          PostMessageW(param_1,0x102,uVar3 & 0xffff,lParam);
          pcVar5 = PeekMessageA_exref;
        }
        PostMessageA(param_1,DAT_20dc5530,wParam,lParam);
        while ((iVar4 = (*(code *)param_3)(&local_28,param_1,0,0,3), iVar4 != 0 &&
               (((local_28.message != DAT_20dc5530 || (wParam != local_28.wParam)) ||
                (lParam != local_28.lParam))))) {
          (*local_c)(local_28.hwnd,local_28.message,local_28.wParam,local_28.lParam);
        }
        if (DAT_20dc5498 != 0) {
          (*pcVar5)(&local_28,param_1,0x102,0x102,3);
        }
        local_8 = local_8 >> 8 & 0xff;
      }
      *param_2 = local_8 & 0xff;
    }
    else {
      PeekMessageA(&local_28,param_1,DAT_20dc5530,DAT_20dc5530,3);
    }
  }
  return 1;
}



uint __cdecl FUN_20dc0043(uint param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  char cVar4;
  WCHAR local_8 [2];
  
  uVar1 = param_1;
  cVar4 = (char)(param_1 >> 8);
  uVar2 = (undefined1)param_1;
  if (cVar4 == '\0') {
    param_1 = param_1 & 0xffff00ff;
  }
  else {
    param_1._3_1_ = SUB41(uVar1,3);
    param_1._0_3_ = (uint3)CONCAT11(uVar2,cVar4);
  }
  iVar3 = MultiByteToWideChar(0,0,(LPCSTR)&param_1,-1,local_8,2);
  if (iVar3 == 0) {
    local_8[0] = L'\0';
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),local_8[0]);
}



HBITMAP __cdecl FUN_20dc008d(HBITMAP param_1,int param_2,int param_3)

{
  HBITMAP pHVar1;
  HGDIOBJ h;
  BOOL BVar2;
  undefined4 local_1c;
  int local_18;
  int local_14;
  HDC local_10;
  HDC local_c;
  HDC local_8;
  
  pHVar1 = param_1;
  if (param_1 == (HBITMAP)0x0) {
    param_1 = (HBITMAP)0x0;
  }
  else {
    param_1 = (HBITMAP)0x0;
    local_c = (HDC)0x0;
    local_8 = (HDC)0x0;
    local_10 = GetDC((HWND)0x0);
    if (((local_10 != (HDC)0x0) && (local_c = CreateCompatibleDC(local_10), local_c != (HDC)0x0)) &&
       (local_8 = CreateCompatibleDC(local_10), local_8 != (HDC)0x0)) {
      FUN_20dc01bb(&pHVar1->unused,&local_18,&local_14);
      if (param_2 == 0) {
        param_2 = local_18;
      }
      if (param_3 == 0) {
        param_3 = local_14;
      }
      param_1 = CreateCompatibleBitmap(local_10,param_2,param_3);
      if (param_1 != (HBITMAP)0x0) {
        (**(code **)(pHVar1->unused + 0x2c))(pHVar1,local_c,&local_1c,0);
        h = SelectObject(local_8,param_1);
        BVar2 = StretchBlt(local_8,0,0,param_2,param_3,local_c,0,0,local_18,local_14,0xcc0020);
        (**(code **)(pHVar1->unused + 0x2c))(pHVar1,local_1c,0,0);
        param_1 = (HBITMAP)SelectObject(local_8,h);
        if (BVar2 == 0) {
          DeleteObject(param_1);
          param_1 = (HBITMAP)0x0;
        }
      }
    }
    if (local_10 != (HDC)0x0) {
      ReleaseDC((HWND)0x0,local_10);
    }
    if (local_c != (HDC)0x0) {
      DeleteDC(local_c);
    }
    if (local_8 != (HDC)0x0) {
      DeleteDC(local_8);
    }
  }
  return param_1;
}



void __cdecl FUN_20dc01bb(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = param_3;
  piVar1 = param_2;
  if ((param_2 != (int *)0x0) && (param_3 != (undefined4 *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,&param_2);
    (**(code **)(*param_1 + 0x1c))(param_1,&param_3);
    iVar3 = FUN_20dc0201((int)param_2);
    *piVar1 = iVar3;
    uVar4 = FUN_20dc0225(param_3);
    *puVar2 = uVar4;
  }
  return;
}



int __cdecl FUN_20dc0201(int param_1)

{
  int local_14 [2];
  int local_c [2];
  
  local_c[1] = 0;
  local_c[0] = param_1;
  FUN_20da492b(local_c,local_14);
  return local_14[0];
}



undefined4 __cdecl FUN_20dc0225(undefined4 param_1)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = param_1;
  FUN_20da492b(&local_c,&local_14);
  return local_10;
}



bool __cdecl FUN_20dc0249(short *param_1,short *param_2)

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


