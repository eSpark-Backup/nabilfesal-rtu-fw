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

typedef struct tagACCEL tagACCEL, *PtagACCEL;

struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
};

typedef struct tagWNDCLASSA WNDCLASSA;

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagACCEL *LPACCEL;

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

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

typedef struct tagTEXTMETRICA TEXTMETRICA;

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

typedef struct _OUTLINETEXTMETRICA _OUTLINETEXTMETRICA, *P_OUTLINETEXTMETRICA;

typedef struct tagPANOSE tagPANOSE, *PtagPANOSE;

typedef struct tagPANOSE PANOSE;

typedef CHAR *PSTR;

struct tagPANOSE {
    BYTE bFamilyType;
    BYTE bSerifStyle;
    BYTE bWeight;
    BYTE bProportion;
    BYTE bContrast;
    BYTE bStrokeVariation;
    BYTE bArmStyle;
    BYTE bLetterform;
    BYTE bMidline;
    BYTE bXHeight;
};

struct _OUTLINETEXTMETRICA {
    UINT otmSize;
    TEXTMETRICA otmTextMetrics;
    BYTE otmFiller;
    PANOSE otmPanoseNumber;
    UINT otmfsSelection;
    UINT otmfsType;
    int otmsCharSlopeRise;
    int otmsCharSlopeRun;
    int otmItalicAngle;
    UINT otmEMSquare;
    int otmAscent;
    int otmDescent;
    UINT otmLineGap;
    UINT otmsCapEmHeight;
    UINT otmsXHeight;
    RECT otmrcFontBox;
    int otmMacAscent;
    int otmMacDescent;
    UINT otmMacLineGap;
    UINT otmusMinimumPPEM;
    POINT otmptSubscriptSize;
    POINT otmptSubscriptOffset;
    POINT otmptSuperscriptSize;
    POINT otmptSuperscriptOffset;
    UINT otmsStrikeoutSize;
    int otmsStrikeoutPosition;
    int otmsUnderscoreSize;
    int otmsUnderscorePosition;
    PSTR otmpFamilyName;
    PSTR otmpFaceName;
    PSTR otmpStyleName;
    PSTR otmpFullName;
};

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

typedef struct _OUTLINETEXTMETRICA *LPOUTLINETEXTMETRICA;

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct _devicemodeA DEVMODEA;

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

typedef long HRESULT;

typedef wchar_t WCHAR;

typedef LONG *PLONG;

typedef CHAR *LPCH;

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

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef WCHAR *LPWSTR;

typedef short SHORT;

typedef WCHAR *LPWCH;

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

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

typedef struct HACCEL__ *HACCEL;

struct HACCEL__ {
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

typedef uint size_t;



HANDLE DAT_21314020;
int DAT_2131426c;
int DAT_21314270;
char DAT_21314274;
undefined DAT_21314008;
undefined1 DAT_212f1480;
undefined4 DAT_212f4c40;
undefined4 DAT_212f4c30;
undefined4 DAT_212f4c20;
undefined1 DAT_212f4c70;
undefined1 DAT_212f4c60;
undefined1 DAT_21302770;
undefined1 DAT_21302790;
undefined1 DAT_212f4c80;
undefined1 DAT_213027b0;
undefined1 DAT_21301f50;
undefined1 DAT_213027c0;
UINT DAT_21314280;
UINT DAT_2131427c;
undefined1 DAT_212f4dc0;
undefined1 DAT_212f4de0;
int *DAT_213144f8;
undefined DAT_21314560;
undefined DAT_21301c70;
undefined DAT_21314518;
undefined DAT_21314530;
undefined DAT_21314548;
undefined DAT_21314554;
undefined1 DAT_212f4c50;
undefined1 DAT_212f4dd0;
undefined1 DAT_212f4e18;
undefined DAT_212f4e38;
undefined *PTR_DAT_21314578;
HMODULE DAT_21314000;
pointer PTR_PTR_21314124;
int DAT_21314268;
undefined4 DAT_21314160;
undefined4 DAT_212f5500;
undefined *PTR_LAB_212f44e0;
undefined *PTR_LAB_212f44f8;
undefined *PTR_LAB_212f4508;
undefined *PTR_LAB_212f4600;
undefined *PTR_LAB_212f4620;
undefined *PTR_LAB_212f4630;
undefined *PTR_LAB_212f4648;
undefined *PTR_LAB_212f4660;
undefined *PTR_LAB_212f4670;
undefined *PTR_LAB_212f4680;
undefined *PTR_LAB_212f46a8;
undefined *PTR_LAB_212f46d0;
undefined *PTR_LAB_212f46f0;
undefined *PTR_LAB_212f4730;
undefined *PTR_LAB_212f4758;
undefined *PTR_LAB_212f4788;
undefined *PTR_LAB_212f47a8;
undefined *PTR_LAB_212f4808;
undefined *PTR_FUN_212f4820;
undefined *PTR_LAB_212f4bf8;
undefined *PTR_LAB_212f48b0;
undefined *PTR_LAB_212f48c0;
undefined *PTR_LAB_212f48d8;
undefined *PTR_LAB_212f48f0;
undefined *PTR_LAB_212f4900;
undefined *PTR_LAB_212f4910;
undefined *PTR_LAB_212f4938;
undefined *PTR_LAB_212f4960;
undefined *PTR_LAB_212f4980;
undefined *PTR_LAB_212f49c0;
undefined *PTR_LAB_212f49e8;
undefined *PTR_LAB_212f4a18;
undefined *PTR_LAB_212f4a38;
undefined *PTR_LAB_212f4a98;
undefined *PTR_FUN_212f4ab0;
undefined *PTR_LAB_212f4b38;
undefined *PTR_FUN_212f4b50;
undefined *PTR_LAB_212f4b88;
undefined *PTR_FUN_212f4ba8;
undefined *PTR_FUN_212f4be0;
undefined4 DAT_21314158;
undefined DAT_212f7380;
int DAT_2131457c;
int DAT_21314580;
undefined *PTR_LAB_212f7010;
undefined *PTR_LAB_212f7028;
undefined *PTR_LAB_212f7038;
undefined *PTR_LAB_212f7130;
undefined DAT_21314588;
undefined *PTR_LAB_212f7150;
undefined *PTR_LAB_212f7160;
undefined *PTR_LAB_212f7178;
undefined *PTR_LAB_212f7190;
undefined *PTR_LAB_212f71a0;
undefined *PTR_LAB_212f71b0;
undefined *PTR_LAB_212f71d8;
undefined *PTR_LAB_212f7200;
undefined *PTR_LAB_212f7220;
undefined *PTR_LAB_212f7260;
undefined *PTR_LAB_212f7288;
undefined *PTR_LAB_212f72b8;
undefined *PTR_LAB_212f72d8;
undefined *PTR_LAB_212f7338;
undefined *PTR_FUN_212f7350;
uint DAT_213145d0;
undefined2 DAT_21314278;
unicode u__ExtentX_213145d4;
unicode u__ExtentY_213145e8;
undefined *PTR_u_TabOrientation_213143c8;
undefined DAT_212f7370;
undefined4 DAT_213143d8;
undefined4 DAT_213145d0;
undefined DAT_212f7398;
undefined DAT_212f73a8;
undefined DAT_21302830;
void *DAT_213144f8;
HINSTANCE DAT_21314000;
undefined1 DAT_212f4ca0;
undefined DAT_212f4e28;
int DAT_213145fc;
undefined DAT_212f4ce0;
undefined *PTR_LineTo_212f13d0;
int DAT_21314600;
undefined *DAT_21314604;
uint DAT_2131460c;
undefined DAT_21314618;
undefined DAT_21314614;
undefined DAT_21314610;
LPSTR DAT_21314620;
LPSTR DAT_21314608;
int DAT_2131461c;
HANDLE DAT_21314624;
pointer PTR_LOOP_21314630;
undefined DAT_21316784;
undefined DAT_21316788;
undefined DAT_2131678c;
undefined DAT_21316790;
undefined DAT_21316798;
HMODULE DAT_21316780;
HMODULE DAT_21316794;
int *DAT_213167b8;
int DAT_21314158;
undefined *PTR_LAB_212f83f8;
undefined2 DAT_21314120;
HWND DAT_213167bc;
char DAT_213167c0;
string s_CtlFrameWork_Parking_21316e7c;
HMODULE DAT_213167c4;
undefined DAT_213167a0;
int DAT_213167dc;
undefined4 DAT_2131461c;
undefined1 DAT_213167d8;
undefined4 *DAT_213167e0;
int DAT_2131779c;
undefined DAT_213167c8;
undefined DAT_213167cc;
undefined DAT_213167d0;
undefined DAT_213167d4;
undefined4 DAT_21316680;
int DAT_2131775c;
int DAT_21314640;
undefined *PTR_PTR_LOOP_21314634;
int DAT_21316838;
int DAT_2131683c;
uint DAT_21316840;
UINT DAT_21316844;
undefined4 DAT_21316684;
undefined *PTR_PTR_LOOP_21316848;
UINT DAT_21314268;
undefined4 DAT_21316940;
undefined DAT_21316954;
undefined DAT_21316948;
undefined DAT_2131694c;
undefined DAT_21316950;
int DAT_21316958;
undefined4 DAT_21316850;
undefined1 DAT_21317160;
uint DAT_21316958;
int DAT_21317758;
LCID DAT_21316940;
undefined1 DAT_21316960;
LCID DAT_21316a60;
UINT DAT_21317758;
LCID DAT_21317748;
int DAT_21316a64;
byte *DAT_21314620;
undefined DAT_21316a70;
undefined DAT_21316a6c;
undefined DAT_21316a68;
undefined DAT_21316a78;
char *DAT_21314608;
undefined DAT_21316b7c;
undefined *PTR_FUN_21316b90;
undefined DAT_21316b80;
undefined DAT_21316b84;
undefined DAT_21316b88;
undefined DAT_21316b8c;
undefined DAT_21316b94;
undefined *PTR_LAB_21316b9c;
undefined *PTR_LAB_21316b98;
undefined *PTR_LAB_21316ba0;
undefined *PTR_LAB_21316ba4;
undefined *PTR_LAB_21316ba8;
undefined *PTR_LAB_21316bac;
undefined LAB_2130a865;
undefined LAB_2130a8d0;
undefined LAB_2130a8ec;
undefined LAB_2130ac88;
undefined FUN_2130a808;
string s_VBFrameworkMapClassObject_21316e94;
short DAT_21314120;
string s_Licenses_21316bb0;
undefined *PTR_PTR_21314124;
undefined DAT_00000006;
undefined FUN_212f206a;
undefined DAT_212f9e04;
undefined DAT_21301d34;
undefined DAT_21301d3c;
undefined DAT_21301d44;
undefined DAT_21301d4c;
unicode u__ExtentX_213167e4;
unicode u__ExtentY_213167f8;
undefined1 DAT_212f4c10;
string s_%u\%s.dll_21316824;
HINSTANCE DAT_21316780;
LCID DAT_213145d0;
int DAT_21316830;
string s_%s%s.DLL_2131680c;
string s_%s%s.DLL_21316818;
undefined DAT_212fcb30;
undefined4 DAT_21316834;
undefined4 DAT_21317248;
undefined4 DAT_2131724c;
undefined DAT_212fcb78;
undefined1 DAT_213027a0;
undefined1 DAT_21302780;
LCID DAT_213176bc;
undefined1 DAT_213143d0;
undefined DAT_21302710;
undefined4 DAT_212f14b0;
undefined4 DAT_212f14c0;
undefined4 DAT_212f14d0;
undefined DAT_21301b88;
undefined DAT_21301b98;
undefined DAT_21301ba8;
undefined DAT_21301bd8;
undefined DAT_213145d0;
undefined1 DAT_21302720;
undefined1 DAT_21301b68;
undefined DAT_21301cf8;
undefined1 DAT_21302730;
undefined1 DAT_21301b78;
undefined *PTR_LAB_21301db0;
undefined *PTR_LAB_21301dc8;
undefined *PTR_FUN_21301e08;
undefined *PTR_LAB_21301eb8;
undefined *PTR_FUN_21301ef8;
pointer PTR_DAT_21301d74;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_21316bbc;
undefined DAT_21316eb4;
string s_CLSID\%s_21316bf0;
string s_%s_Object_21316bfc;
string s_InprocServer32_21316c08;
string s_Apartment_21316c18;
string s_ThreadingModel_21316c24;
string s_ThreadingModel_21316c34;
undefined DAT_21316eb0;
undefined LAB_21302740;
undefined DAT_21302750;
undefined DAT_21302760;
undefined DAT_21316c44;
string s_%s_Object_21316c48;
string s_CLSID_21316c54;
string s_CurVer_21316c5c;
string s_%s.%s.%ld_21316c64;
string s_%s_Object_21316c70;
string s_CLSID_21316c7c;
string s_CLSID\%s_21316c84;
string s_VersionIndependentProgID_21316c90;
string s_%s.%s_21316cac;
string s_ProgID_21316cb4;
string s_%s.%s.%ld_21316cbc;
string s_TypeLib_21316cc8;
string s_Version_21316cd0;
string s_%ld.%ld_21316cd8;
undefined DAT_21316eb8;
undefined DAT_21316ebc;
undefined DAT_21316ec0;
undefined DAT_21316ec4;
undefined DAT_21316ec8;
undefined DAT_21316ecc;
undefined DAT_21316ed0;
undefined DAT_21316ed4;
undefined DAT_21316ed8;
undefined DAT_21316edc;
string s_CLSID\%s_21316ce0;
string s_Control_21316cec;
string s_MiscStatus_21316cf4;
undefined DAT_21316d00;
undefined DAT_21316d04;
undefined DAT_21316d08;
string s_ToolboxBitmap32_21316d10;
undefined DAT_21316ee0;
undefined DAT_21316ee4;
undefined DAT_21316ee8;
undefined DAT_21316eec;
pointer PTR_DAT_21316f18;
pointer PTR_DAT_21316f30;
string s_CLSID_21316d20;
string s_\InprocServer32_21316d28;
string s_%s.%s.%ld_21316d38;
string s_%s.%s_21316d44;
string s_%s.%s\CurVer_21316d4c;
string s_%s.%s.%ld_21316d5c;
undefined DAT_21316ef0;
string s_%s.%s.%ld_21316d68;
undefined DAT_21316ef4;
string s_%s.%s.%ld_21316d74;
string s_%s.%s_21316d80;
undefined DAT_21316ef8;
undefined DAT_21316efc;
undefined4 DAT_21316d88;
undefined2 DAT_21316d8c;
string s_CLSID\%s_21316d90;
string s_Implemented_Categories_21316d9c;
undefined DAT_21316f00;
string s_%s\InprocServer_21316db4;
undefined DAT_21316dc4;
FARPROC DAT_213176c8;
string s_VERSION.DLL_21316dc8;
string s_GetFileVersionInfoSizeA_21316dd4;
FARPROC DAT_213176c4;
string s_VERSION.DLL_21316dec;
string s_GetFileVersionInfoA_21316df8;
FARPROC DAT_213176c0;
string s_VERSION.DLL_21316e0c;
string s_VerQueryValueA_21316e18;
undefined4 DAT_21301e40;
undefined DAT_21302820;
undefined LAB_2130971e;
string s_DISPLAY_21316e28;
undefined *PTR_LAB_21301f10;
undefined1 DAT_21302880;
undefined1 DAT_21302870;
undefined DAT_21316e30;
undefined DAT_21316e34;
undefined DAT_21316e38;
undefined DAT_21316e3c;
string s_>LangRef_21316e40;
undefined FUN_213095cd;
int DAT_213176cc;
int *DAT_213176cc;
short DAT_21314278;
undefined FUN_21307ad0;
WNDPROC DAT_213176b8;
undefined FUN_21309879;
string s_CtlFrameWork_Parking_21316e4c;
string s_CtlFrameWork_Parking_21316e64;
undefined *PTR_FUN_21301f60;
undefined *PTR_LAB_21301f78;
undefined *PTR_LAB_21301f98;
undefined DAT_21316f02;
int DAT_21316f3c;
undefined DAT_21316eae;
undefined4 DAT_213167b8;
undefined DAT_21301fe8;
undefined DAT_21301ff8;
undefined DAT_21302008;
undefined4 DAT_21314580;
HMODULE DAT_21316f04;
int DAT_21316f0c;
FARPROC DAT_213176d0;
undefined DAT_0000000e;
undefined DAT_213176d4;
char DAT_21316f48;
int DAT_21316f44;
undefined *PTR_DAT_21316f50;
int DAT_213176d8;
int DAT_213176dc;
undefined *PTR___exit_21316f40;
char DAT_213176e4;
int *DAT_213176e0;
undefined1 DAT_21316f48;
uint DAT_213176e8;
int DAT_213176e8;
undefined1 DAT_213176ec;
undefined1 DAT_213176e4;
char DAT_213176f2;
undefined2 DAT_213176f0;
undefined DAT_21317718;
undefined DAT_21317710;
undefined DAT_21317714;
undefined DAT_2131771c;
undefined DAT_213176f4;
uint *DAT_21316f4c;
undefined4 DAT_21314268;
int DAT_21317338;
undefined DAT_21317738;
undefined4 DAT_21317240;
undefined4 DAT_21317244;
undefined4 DAT_21317250;
undefined4 DAT_21317254;
undefined4 DAT_21317168;
undefined DAT_21317258;
undefined DAT_21317268;
undefined *DAT_2131773c;
int DAT_21316680;
undefined DAT_213023a8;
undefined4 DAT_21317278;
undefined DAT_21317308;
undefined DAT_21317320;
byte DAT_21316f48;
undefined4 DAT_21314640;
FARPROC DAT_21317760;
FARPROC DAT_21317764;
FARPROC DAT_21317768;
undefined *DAT_2131776c;
undefined DAT_213175fc;
undefined DAT_21317608;
undefined *PTR_LAB_21302428;
undefined DAT_21317610;
undefined DAT_21317620;
undefined *PTR_LAB_21302448;
undefined DAT_21317600;
int DAT_2131769c;
undefined DAT_2131427c;
undefined2 DAT_21317630;
undefined DAT_21317634;
undefined DAT_21317638;
uint DAT_2131427c;
UINT DAT_21317774;
UINT DAT_21317790;
int *DAT_21314280;
int *DAT_2131427c;
undefined *PTR_LAB_21302460;
undefined *PTR_LAB_21302470;
undefined *PTR_FUN_213024a0;
undefined *PTR_LAB_213024d8;
undefined1 DAT_212f1460;
undefined1 DAT_212f1470;
undefined4 DAT_21316f38;
uint DAT_21314280;
undefined *PTR_FUN_21302508;
undefined *PTR_LAB_21302540;
undefined DAT_21301bb8;
undefined4 DAT_21316f34;
undefined *PTR_LAB_21302570;
undefined *PTR_FUN_21302580;
undefined *PTR_LAB_213025b8;
undefined *PTR_LAB_213025f0;
undefined *DAT_21317780;
undefined *PTR_FUN_21302628;
undefined DAT_213028e0;
undefined LAB_213110a0;
undefined DAT_21316f14;
undefined *PTR_s_DragFinish_213176a0;
undefined DAT_21317798;
int DAT_21317794;
int DAT_21317790;
int DAT_21317770;
int DAT_21317774;
uint DAT_21317784;
HGDIOBJ DAT_21317788;
int DAT_21317784;
HPALETTE DAT_21317788;
undefined4 DAT_21302688;
undefined UNK_213026c7;
HPALETTE DAT_21317778;
undefined1 DAT_213026c8;

void __cdecl FUN_212f1433(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_21314020,0,param_1);
  }
  return;
}



void __cdecl FUN_212f1575(SIZE_T param_1)

{
  if (DAT_21314020 == (HANDLE)0x0) {
    DAT_21314020 = GetProcessHeap();
    if (DAT_21314020 == (HANDLE)0x0) {
      return;
    }
  }
  HeapAlloc(DAT_21314020,0,param_1);
  return;
}



undefined4 * __thiscall FUN_212f159d(void *this,uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x79) {
    puVar1 = (undefined2 *)((int)this + 4);
  }
  else {
    puVar1 = (undefined2 *)HeapAlloc(DAT_21314020,0,param_1);
  }
  *(undefined2 **)this = puVar1;
  *(uint *)((int)this + 0x7c) = (uint)(0x78 < param_1) | *(uint *)((int)this + 0x7c) & 0xfffffffe;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return (undefined4 *)this;
}



LPVOID __cdecl FUN_212f15e6(SIZE_T param_1,HANDLE param_2)

{
  LPVOID pvVar1;
  
  if ((param_2 == (HANDLE)0x0) && (param_2 = GetProcessHeap(), param_2 == (HANDLE)0x0)) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(param_2,0,param_1);
  return pvVar1;
}



int __cdecl FUN_212f1602(int param_1)

{
  int local_14 [2];
  int local_c [2];
  
  local_c[1] = 0;
  local_c[0] = param_1;
  FUN_212f1626(local_c,local_14);
  return local_14[0];
}



void __cdecl FUN_212f1626(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_212f166c();
  iVar1 = DAT_21314270;
  iVar2 = DAT_21314270 >> 1;
  *param_2 = (*param_1 * 0x9ec + (DAT_2131426c >> 1)) / DAT_2131426c;
  param_2[1] = (param_1[1] * 0x9ec + iVar2) / iVar1;
  return;
}



void FUN_212f166c(void)

{
  HDC hdc;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_21314274 == '\0') {
    hdc = GetDC((HWND)0x0);
    DAT_2131426c = GetDeviceCaps(hdc,0x58);
    DAT_21314270 = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    DAT_21314274 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  return;
}



undefined4 FUN_212f16c5(int param_1,int *param_2,int *param_3)

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



int FUN_212f170b(int param_1)

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



undefined4 __thiscall FUN_212f1748(void *this,uint *param_1,int *param_2)

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
  if (uVar3 == 0x2a4fccb0) {
    iVar2 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = &DAT_212f1480;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_212f1767;
  }
  else {
LAB_212f1767:
    if (uVar3 == 0x376bd3aa) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_212f4c40;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xc0;
        goto LAB_212fcd10;
      }
    }
    if (uVar3 == 0x4d07fc10) {
      iVar2 = 0x10;
      bVar7 = true;
      puVar5 = param_1;
      pcVar6 = (char *)&DAT_212f4c30;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar7 = (char)*puVar5 == *pcVar6;
        puVar5 = (uint *)((int)puVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar3 = (int)this + 0xcc;
        goto LAB_212fcd10;
      }
    }
    if (uVar3 != 0xbdc217c6) {
LAB_212f178b:
      uVar1 = FUN_212f179f(this,param_1,param_2);
      return uVar1;
    }
    iVar2 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_212f4c20;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_212f178b;
  }
  uVar3 = (int)this + 0xc4;
LAB_212fcd10:
  piVar4 = (int *)(-(uint)(this != (void *)0x0) & uVar3);
  (**(code **)(*piVar4 + 4))(piVar4);
  *param_2 = (int)piVar4;
  return 0;
}



undefined4 __thiscall FUN_212f179f(void *this,uint *param_1,int *param_2)

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
      if (!bVar5) goto LAB_212ffffe;
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
        if (uVar1 != 0x10a) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      default:
        goto switchD_212f184a_caseD_10b;
      case 0x10c:
        if (uVar1 != 0x10c) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      case 0x10d:
        if (uVar1 != 0x10d) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x48);
          *param_2 = (int)this + 0x48;
          (**(code **)(iVar3 + 4))((int)this + 0x48);
          return 0;
        }
        break;
      case 0x112:
        if (uVar1 != 0x112) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x38);
          *param_2 = (int)this + 0x38;
          (**(code **)(iVar3 + 4))((int)this + 0x38);
          return 0;
        }
        break;
      case 0x113:
        if (uVar1 != 0x113) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x40);
          *param_2 = (int)this + 0x40;
          (**(code **)(iVar3 + 4))((int)this + 0x40);
          return 0;
        }
        break;
      case 0x114:
        if (uVar1 != 0x114) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
        break;
      case 0x117:
        if (uVar1 != 0x117) goto LAB_212ffffe;
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
        if (!bVar5) goto LAB_212ffffe;
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
      pcVar4 = &DAT_213027c0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_212ffffe;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x40);
        *param_2 = (int)this + 0x40;
        (**(code **)(iVar3 + 4))((int)this + 0x40);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xd97180) goto switchD_212f184a_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_21301f50;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_212ffffe;
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
      pcVar4 = &DAT_213027b0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_212ffffe;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x37d84f60) goto switchD_212f184a_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_212f4c80;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_212ffffe;
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
        uVar2 = FUN_212fff0d(this,(int)this);
        return uVar2;
      }
switchD_212f184a_caseD_10b:
      uVar2 = FUN_212f1fb7(this,(int *)param_1,param_2);
      return uVar2;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_21302790;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_212ffffe;
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
        uVar2 = FUN_212fff8f(this,(int)this);
        return uVar2;
      }
      goto switchD_212f184a_caseD_10b;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_212f4c70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_212ffffe;
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
    pcVar4 = &DAT_21302770;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_212ffffe;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x58);
      *param_2 = (int)this + 0x58;
      (**(code **)(iVar3 + 4))((int)this + 0x58);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xcf51ed10) goto switchD_212f184a_caseD_10b;
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_212f4c60;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_212ffffe;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 100);
      *param_2 = (int)this + 100;
      (**(code **)(iVar3 + 4))((int)this + 100);
      return 0;
    }
  }
  *param_2 = 0;
LAB_212ffffe:
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}



undefined4 __thiscall FUN_212f1ae4(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if ((param_1 != 0) && (DAT_2131427c == 0)) {
    DAT_2131427c = RegisterClipboardFormatA("Rich Text Format");
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if ((param_1 != 0) && (DAT_21314280 == 0)) {
    DAT_21314280 = RegisterClipboardFormatA("Link");
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
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
    HeapFree(DAT_21314020,0,*(LPVOID *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return 0;
}



undefined4 FUN_212f1bed(void)

{
  return 0;
}



LPWSTR __cdecl FUN_212f1d12(LPCSTR param_1,BSTR param_2)

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



void __cdecl FUN_212f1d78(undefined4 *param_1,short param_2,LPCSTR param_3)

{
  uint cbMultiByte;
  LPSTR lpString2;
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_160 [200];
  LPSTR local_98 [31];
  byte local_1c;
  char local_18 [20];
  
  iVar1 = lstrlenW((LPCWSTR)*param_1);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_212f159d(local_98,cbMultiByte);
  WideCharToMultiByte(0,0,(LPCWSTR)*param_1,-1,local_98[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  lpString2 = local_98[0];
  FUN_212f1e5d((int)param_2,local_18,10);
  lstrcpyA(local_160,lpString2);
  lstrcatA(local_160,"(");
  lstrcatA(local_160,local_18);
  lstrcatA(local_160,")");
  if (param_3 != (LPCSTR)0x0) {
    lstrcatA(local_160,".");
    lstrcatA(local_160,param_3);
  }
  SysFreeString((BSTR)*param_1);
  pWVar2 = FUN_212f1d12(local_160,(BSTR)0x0);
  *param_1 = pWVar2;
  if ((local_98[0] != (LPCSTR)0x0) && ((local_1c & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_98[0]);
  }
  return;
}



char * __cdecl FUN_212f1e5d(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_212f1e88(param_1,param_2,10,1);
    return param_2;
  }
  FUN_212f1e88(param_1,param_2,param_3,0);
  return param_2;
}



void __cdecl FUN_212f1e88(uint param_1,char *param_2,uint param_3,int param_4)

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



void __fastcall FUN_212f1ee0(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_212f1eff((int *)param_1[4]);
  param_1[4] = 0;
  return;
}



void __fastcall FUN_212f1eff(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar1 = (int *)*param_1;
      FUN_212f1433(param_1);
      param_1 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}



void __thiscall FUN_212f1f17(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    iVar1 = FUN_212f1f6c((undefined4 *)((int)this + 0x10),*(int *)((int)this + 0x14),0xc);
    iVar3 = *(int *)((int)this + 0x14);
    puVar2 = (undefined4 *)(iVar1 + -8 + iVar3 * 0xc);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(undefined4 *)((int)this + 0xc);
        *(undefined4 **)((int)this + 0xc) = puVar2;
        puVar2 = puVar2 + -3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  puVar2[2] = 0;
  return;
}



void FUN_212f1f6c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_212f1575(param_3 * param_2 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}



undefined4 * __thiscall FUN_212f1f8c(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 < *(int *)((int)this + 8)) {
                    // WARNING: Load size is inaccurate
    puVar1 = *this;
    if (param_1 != 0) {
      do {
        puVar1 = (undefined4 *)*puVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



undefined4 __thiscall FUN_212f1fb7(void *this,int *param_1,undefined4 *param_2)

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
    pcVar4 = &DAT_212f4dc0;
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
  uVar1 = FUN_212f2005(this,param_1,param_2);
  return uVar1;
}



undefined4 __thiscall FUN_212f2005(void *this,int *param_1,undefined4 *param_2)

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
    if (!bVar5) goto LAB_212f201a;
LAB_212f204e:
    piVar3 = *(int **)((int)this + 8);
    *param_2 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  else {
LAB_212f201a:
    if ((*(char *)((int)this + 0x19) != '\0') && (*param_1 == -0x20f4c2a0)) {
      iVar2 = 0x10;
      bVar5 = true;
      piVar3 = param_1;
      pcVar4 = &DAT_212f4de0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = (char)*piVar3 == *pcVar4;
        piVar3 = (int *)((int)piVar3 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_212f204e;
    }
    uVar1 = FUN_212f649e(param_1,param_2);
  }
  return uVar1;
}



LRESULT FUN_212f206a(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4)

{
  HWND hWnd;
  int *piVar1;
  int iVar2;
  HDC pHVar3;
  LRESULT LVar4;
  int *piVar5;
  tagPAINTSTRUCT local_58;
  tagRECT local_18;
  undefined4 local_8;
  
  hWnd = param_1;
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  piVar5 = DAT_213144f8;
  param_1 = (HWND)0x0;
  if (piVar1 == (int *)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)DAT_213144f8);
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
     (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,hWnd,param_2,param_3,param_4,&param_1,&local_8),
     iVar2 == 1)) goto LAB_212f2131;
  if (param_2 == 2) {
    (**(code **)(*piVar5 + 0x5c))();
LAB_212f20d8:
    param_1 = (HWND)(**(code **)(*piVar5 + 0x4c))(param_2,param_3,param_4);
  }
  else {
    if (param_2 != 0xf) goto LAB_212f20d8;
    pHVar3 = param_3;
    if (param_3 == (HDC)0x0) {
      pHVar3 = BeginPaint(hWnd,&local_58);
    }
    GetClientRect(hWnd,&local_18);
    (**(code **)(*piVar5 + 0x48))(piVar5,1,pHVar3,&local_18,0,0,1);
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
LAB_212f2131:
  (**(code **)(*piVar5 + 8))();
  return (LRESULT)param_1;
}



uint __thiscall FUN_212f2219(void *this,uint param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  BOOL BVar5;
  uint uVar6;
  HWND pHVar7;
  HDC pHVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 local_24 [20];
  POINT local_10;
  HCURSOR local_8;
  
  if (param_1 < 0x15) {
    if (param_1 == 0x14) {
      return 0;
    }
    if (param_1 == 7) {
      if (((*(uint *)((int)this + 0xb0) & 2) != 0) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
        FUN_212f6529(this,-4);
      }
    }
    else if (param_1 != 8) goto switchD_212f23c1_default;
    if ((*(short *)((int)this + 0xee) != 0) &&
       (uVar4 = FUN_212f2b80(this,(int)*(short *)((int)this + 0xde)), -1 < (int)uVar4)) {
      FUN_212f2ba1(this,(int *)(local_24 + 0xc),uVar4,0);
      FUN_212f2fa9(this,(RECT *)(local_24 + 0xc));
    }
    goto switchD_212f23c1_default;
  }
  if (param_1 < 0x19) {
    if (param_1 == 0x18) {
      FUN_212f253c((HWND)((int)this + 0x100),param_2);
    }
    else if (param_1 == 0x15) {
      uVar4 = DefWindowProcA(*(HWND *)((int)this + 0xa0),0x15,param_2,param_3);
      FUN_212f6b49((int)this);
      FUN_212f2fa9(this,(RECT *)0x0);
      return uVar4;
    }
    goto switchD_212f23c1_default;
  }
  if (param_1 < 0x2c) {
    if (param_1 == 0x2b) {
      return 0;
    }
    if ((((param_1 == 0x20) && (uVar4 = FUN_212f26e3(this), uVar4 == 0)) &&
        (sVar2 = *(short *)((int)this + 0xd8), sVar2 != 0)) &&
       (((short)param_3 == 1 || ((short)param_3 == 0x12)))) {
      if (sVar2 == 99) {
        piVar3 = *(int **)((int)this + 0x14c);
        if ((piVar3 != (int *)0x0) &&
           (iVar9 = (**(code **)(*piVar3 + 0xc))(piVar3,&local_8), iVar9 < 0)) {
          return 0;
        }
      }
      else {
        local_8 = LoadCursorA((HINSTANCE)0x0,*(LPCSTR *)(&DAT_21301c70 + sVar2 * 4));
      }
      if (local_8 != (HCURSOR)0x0) {
        SetCursor(local_8);
      }
      return (uint)(local_8 != (HCURSOR)0x0);
    }
    goto switchD_212f23c1_default;
  }
  if (param_1 < 0x103) {
    if (param_1 == 0x102) {
      BVar5 = IsDBCSLeadByte((BYTE)param_2);
      if ((BVar5 != 0) &&
         (BVar5 = PeekMessageA((LPMSG)local_24,*(HWND *)((int)this + 0xa0),0x102,0x102,3),
         BVar5 != 0)) {
        param_2 = (uint)local_24[8] + param_2 * 0x100;
      }
      FUN_212f9bef((int)this,(undefined4 *)&DAT_21314530);
      param_2 = param_2 & 0xffff;
    }
    else if ((param_1 == 0x46) && (sVar2 = *(short *)((int)this + 0xd4), -1 < sVar2)) {
      if (sVar2 < 2) {
        uVar4 = *(uint *)(param_3 + 0x10);
      }
      else {
        if (3 < sVar2) goto switchD_212f23c1_default;
        uVar4 = *(uint *)(param_3 + 0x14);
      }
      if (uVar4 != 0) {
        FUN_212f6cc6(this,uVar4);
      }
    }
    goto switchD_212f23c1_default;
  }
  if (0x281 < param_1) {
    if (param_1 == 0x30f) {
      iVar9 = *(int *)((int)this + 0x160) + *(short *)((int)this + 0xde) * 0x20;
      if ((iVar9 != 0) && (piVar3 = *(int **)(iVar9 + 4), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x14))(piVar3,&local_8);
        if (((short)local_8 != 0) &&
           (((**(code **)(**(int **)(iVar9 + 4) + 0x10))(*(int **)(iVar9 + 4),&local_10.y),
            (HPALETTE)local_10.y != (HPALETTE)0x0 &&
            (pHVar8 = GetDC(*(HWND *)((int)this + 0xa0)), pHVar8 == (HDC)0x0)))) {
          SelectPalette((HDC)0x0,(HPALETTE)local_10.y,0);
          RealizePalette((HDC)0x0);
          ReleaseDC(*(HWND *)((int)this + 0xa0),(HDC)0x0);
          return 1;
        }
      }
    }
    else if (param_1 == 0x311) {
      iVar9 = *(int *)((int)this + 0x160) + *(short *)((int)this + 0xde) * 0x20;
      if ((iVar9 != 0) && (piVar3 = *(int **)(iVar9 + 4), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x14))(piVar3,&local_8);
        if (((short)local_8 != 0) &&
           (((**(code **)(**(int **)(iVar9 + 4) + 0x10))(*(int **)(iVar9 + 4),&local_10.y),
            (HPALETTE)local_10.y != (HPALETTE)0x0 &&
            (pHVar8 = GetDC(*(HWND *)((int)this + 0xa0)), pHVar8 != (HDC)0x0)))) {
          SelectPalette(pHVar8,(HPALETTE)local_10.y,1);
          RealizePalette(pHVar8);
          FUN_212f2fa9(this,(RECT *)0x0);
          ReleaseDC(*(HWND *)((int)this + 0xa0),pHVar8);
        }
      }
    }
    else if (param_1 == 0x52c) {
      local_10.x = (LONG)(short)param_3;
      local_10.y = (LONG)(short)((uint)param_3 >> 0x10);
      uVar4 = FUN_212fa05e(this,&local_10);
      if (uVar4 == 100) {
        return 0;
      }
      uVar6 = FUN_212f26e3(this);
      if ((uVar6 == 0) && (pHVar7 = GetFocus(), pHVar7 != *(HWND *)((int)this + 0xa0))) {
        FUN_212f6f1c(this,1);
      }
      iVar9 = *(int *)((int)this + uVar4 * 4 + 0x180);
      puVar1 = (undefined2 *)((int)this + uVar4 * 4 + 0x180);
      if (iVar9 == 100) {
        return 0;
      }
      if (iVar9 == *(short *)((int)this + 0xde)) {
        return 0;
      }
      if (*(short *)(*(int *)((int)this + 0x160) + 0x1a + iVar9 * 0x20) == 0) {
        return 1;
      }
      (**(code **)(*(int *)((int)this + 0xc4) + 0x70))
                ((int)this + 0xc4,CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1));
      return 1;
    }
    goto switchD_212f23c1_default;
  }
  if (param_1 == 0x281) {
    return 0;
  }
  switch(param_1) {
  case 0x200:
    FUN_212f9f18();
    puVar10 = (undefined4 *)&DAT_21314554;
    break;
  case 0x201:
    uVar4 = DefWindowProcA(*(HWND *)((int)this + 0xa0),param_1,param_2,param_3);
    FUN_212f9f18();
    FUN_212f9bef((int)this,(undefined4 *)&DAT_21314548);
    SendMessageA(*(HWND *)((int)this + 0xa0),0x52c,0,param_3);
    return uVar4;
  case 0x202:
  case 0x205:
  case 0x208:
    FUN_212f9f18();
    puVar10 = (undefined4 *)&DAT_21314560;
    break;
  case 0x203:
    DefWindowProcA(*(HWND *)((int)this + 0xa0),param_1,param_2,param_3);
    SendMessageA(*(HWND *)((int)this + 0xa0),0x52c,0,param_3);
  case 0x206:
  case 0x209:
    FUN_212f9bef((int)this,(undefined4 *)&DAT_21314518);
    goto switchD_212f23c1_default;
  case 0x204:
  case 0x207:
    FUN_212f9f18();
    puVar10 = (undefined4 *)&DAT_21314548;
    break;
  default:
    goto switchD_212f23c1_default;
  }
  FUN_212f9bef((int)this,puVar10);
switchD_212f23c1_default:
  uVar4 = DefWindowProcA(*(HWND *)((int)this + 0xa0),param_1,param_2,param_3);
  return uVar4;
}



HRESULT __thiscall FUN_212f253c(HWND param_1,int param_2)

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
      (((bVar3 = FUN_212f25cb((int)param_1), CONCAT31(extraout_var,bVar3) != 0 ||
        ((*(byte *)(param_1[1].unused + 0xb0) & 2) == 0)) ||
       (*(int *)(param_1[1].unused + 0xac) != 0)))) ||
     (FUN_212f694a(param_1,(int *)&local_8), local_8 == (HWND)0x0)) goto LAB_212f2564;
  if (param_2 != 0) {
    if (((param_1[0xb].unused & 0xc0U) != 0) && ((param_1[0xb].unused & 8U) == 0)) {
      this = FUN_212f15e6(0x18,DAT_21314020);
      if (this == (LPVOID)0x0) {
        pDropTarget = (LPDROPTARGET)0x0;
      }
      else {
        uVar4 = FUN_2130db4a((int)param_1);
        pDropTarget = (LPDROPTARGET)FUN_2130dc23(this,param_1,param_1,uVar4);
      }
      param_1[3].unused = (int)pDropTarget;
      if (pDropTarget == (LPDROPTARGET)0x0) {
        return unaff_EDI;
      }
      HVar5 = RegisterDragDrop(local_8,pDropTarget);
      param_1[0xb].unused = (uint)(-1 < HVar5) << 3 | param_1[0xb].unused & 0xfffffff7U;
      goto LAB_212f2564;
    }
    if ((param_2 != 0) && ((param_1[0xb].unused & 0xc0) != 0)) goto LAB_212f2564;
  }
  if ((param_1[0xb].unused & 8U) != 0) {
    param_1[0xb].unused = param_1[0xb].unused & 0xfffffff7;
    RevokeDragDrop(local_8);
  }
LAB_212f2564:
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



bool __fastcall FUN_212f25cb(int param_1)

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
        iVar3 = (**(code **)*puVar2)(puVar2,&DAT_212f4c50,&local_8), -1 < iVar3 &&
        (iVar3 = (**(code **)(*local_8 + 0x10))(local_8,&local_c), -1 < iVar3)) &&
       (local_c != (int *)0x0)) &&
      (iVar3 = (**(code **)*local_c)(local_c,&DAT_212f4dd0,(undefined4 *)(param_1 + 0x18)),
      -1 < iVar3)))) {
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    piVar1 = *(int **)(param_1 + 0x18);
    (**(code **)(*piVar1 + 0x18))(piVar1,0xfffffd3b,&DAT_212f4e18,0,2,&local_2c,&local_1c,0,0);
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



uint __fastcall FUN_212f26e3(void *param_1)

{
  int iVar1;
  uint local_8;
  
  if ((*(byte *)((int)param_1 + 0xbc) & 4) == 0) {
    local_8 = 1;
    iVar1 = FUN_212f6a8b(param_1,0xfffffd3b,0xb,(LONG *)&local_8);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)((int)param_1 + 0xbc) =
         (local_8 & 1) << 6 | *(uint *)((int)param_1 + 0xbc) & 0xffffffbf | 4;
  }
  return ~*(uint *)((int)param_1 + 0xbc) >> 6 & 1;
}



undefined4 __cdecl FUN_212f273d(undefined4 param_1)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = param_1;
  FUN_212f1626(&local_c,&local_14);
  return local_10;
}



void __fastcall FUN_212f2761(void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  LPSTR local_128 [31];
  byte local_ac;
  LPSTR local_a8 [31];
  byte local_2c;
  undefined4 *local_28;
  LPCSTR local_24;
  undefined4 *local_20;
  void *local_1c;
  BSTR local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_14 = (int *)0x0;
  local_8 = (int *)0x0;
  if (*(int *)((int)param_1 + 0x4d4) == 0) {
    puVar5 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x15c);
    while (puVar5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar5;
      puVar3 = *(undefined4 **)(puVar5[2] + 4);
      while (puVar5 = puVar2, puVar3 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar3;
        *(undefined4 *)(puVar3[2] + 0xc) = 0;
        puVar3 = puVar5;
      }
    }
    local_1c = param_1;
    iVar4 = FUN_212f2975(param_1,&local_14);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*local_14 + 0xc))(local_14,0xd,3,&local_8);
      if (iVar4 == 0) {
        (**(code **)(*local_8 + 0x14))(local_8);
        while (iVar4 = (**(code **)(*local_8 + 0xc))(local_8,1,&local_10,0), iVar4 == 0) {
          (**(code **)(*local_10 + 8))(local_10);
          local_18 = FUN_212f7b70(local_10);
          if (local_18 != (BSTR)0x0) {
            iVar4 = lstrlenW(local_18);
            uVar1 = iVar4 * 2 + 2;
            FUN_212f159d(local_128,uVar1);
            WideCharToMultiByte(0,0,local_18,-1,local_128[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
            local_24 = local_128[0];
            local_c = 0;
            puVar5 = (undefined4 *)**(undefined4 **)((int)param_1 + 0x15c);
            do {
              if (puVar5 == (undefined4 *)0x0) break;
              local_28 = (undefined4 *)*puVar5;
              puVar5 = *(undefined4 **)(puVar5[2] + 4);
              if (local_c != 0) break;
              do {
                if (puVar5 == (undefined4 *)0x0) break;
                iVar4 = puVar5[2];
                local_20 = (undefined4 *)*puVar5;
                if (*(int *)(iVar4 + 0xc) == 0) {
                  iVar6 = lstrlenW(*(LPCWSTR *)(iVar4 + 8));
                  uVar1 = iVar6 * 2 + 2;
                  FUN_212f159d(local_a8,uVar1);
                  WideCharToMultiByte(0,0,*(LPCWSTR *)(iVar4 + 8),-1,local_a8[0],uVar1,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                  iVar6 = lstrcmpA(local_24,local_a8[0]);
                  if (iVar6 == 0) {
                    local_c = 1;
                    *(int **)(iVar4 + 0xc) = local_10;
                  }
                  param_1 = local_1c;
                  if ((local_a8[0] != (LPSTR)0x0) && ((local_2c & 1) != 0)) {
                    HeapFree(DAT_21314020,0,local_a8[0]);
                    param_1 = local_1c;
                  }
                }
                puVar5 = local_20;
              } while (local_c == 0);
              puVar5 = local_28;
            } while (local_c == 0);
            SysFreeString(local_18);
            if ((local_128[0] != (LPSTR)0x0) && ((local_ac & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_128[0]);
            }
          }
        }
        (**(code **)(*local_8 + 8))(local_8);
      }
      (**(code **)(*local_14 + 8))(local_14);
    }
    *(undefined4 *)((int)param_1 + 0x4d4) = 1;
  }
  return;
}



int __thiscall FUN_212f2975(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  *param_1 = 0;
  (**(code **)(*(int *)((int)this + 0x38) + 0x10))((int *)((int)this + 0x38),&local_8);
  if (local_8 != (int *)0x0) {
    iVar2 = (**(code **)*local_8)(local_8,&DAT_212f4e38,param_1);
    piVar1 = local_8;
    if (local_8 != (int *)0x0) {
      local_8 = (int *)0x0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}



int FUN_212f29d1(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
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



HRESULT FUN_212f2a61(HREFTYPE param_1,ITypeInfo *param_2,undefined4 param_3,undefined4 *param_4)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  HVar2 = param_1;
  puVar1 = (&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2];
  ppTInfo = (ITypeInfo **)(puVar1 + 0x2c);
  if (*(int *)(puVar1 + 0x2c) == 0) {
    HVar6 = LoadRegTypeLib((GUID *)PTR_DAT_21314578,*(WORD *)(puVar1 + 0x18),
                           *(WORD *)(puVar1 + 0x1c),0,&local_8);
    if (HVar6 < 0) {
      DVar3 = GetModuleFileNameA(DAT_21314000,local_18c,0x104);
      if (DVar3 == 0) {
        HVar6 = -0x7fffbffb;
        goto LAB_212f2ab4;
      }
      iVar4 = lstrlenA(local_18c);
      cchWideChar = iVar4 * 2 + 2;
      FUN_212f159d(local_88,cchWideChar);
      MultiByteToWideChar(0,0,local_18c,-1,local_88[0],cchWideChar);
      HVar6 = LoadTypeLib(local_88[0],&local_8);
      if (HVar6 < 0) {
        if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_21314020,0,local_88[0]);
        }
        goto LAB_212f2ab4;
      }
      if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
        HeapFree(DAT_21314020,0,local_88[0]);
      }
    }
    HVar6 = (*local_8->lpVtbl->GetTypeInfoOfGuid)
                      (local_8,*(GUID **)((&PTR_PTR_21314124)[*(int *)(HVar2 + 0x14) * 2] + 0x20),
                       &param_2);
    (*local_8->lpVtbl->Release)(local_8);
    if (HVar6 < 0) goto LAB_212f2ab4;
    HVar6 = (*param_2->lpVtbl->GetRefTypeOfImplType)(param_2,0xffffffff,&param_1);
    if (HVar6 < 0) {
      (*param_2->lpVtbl->Release)(param_2);
      goto LAB_212f2ab4;
    }
    HVar6 = (*param_2->lpVtbl->GetRefTypeInfo)(param_2,param_1,ppTInfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (HVar6 < 0) goto LAB_212f2ab4;
    *(undefined1 *)(HVar2 + 0x18) = 1;
    *(int *)((&PTR_PTR_21314124)[*(int *)(HVar2 + 0x14) * 2] + 0x30) =
         *(int *)((&PTR_PTR_21314124)[*(int *)(HVar2 + 0x14) * 2] + 0x30) + 1;
    puVar5 = param_4;
  }
  (*(*ppTInfo)->lpVtbl->AddRef)(*ppTInfo);
  *puVar5 = *ppTInfo;
  HVar6 = 0;
LAB_212f2ab4:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  return HVar6;
}



int __thiscall FUN_212f2b80(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x180);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 200);
  return -1;
}



void __thiscall FUN_212f2ba1(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagRECT local_18;
  uint local_8;
  
  piVar1 = param_1;
  iVar6 = *(int *)((int)this + 0x4cc);
  FUN_212f2e73(this,&local_18);
  if (*(short *)((int)this + 0xd6) == 0) {
    iVar6 = (-(uint)(iVar6 != 0) & 2) + 1;
  }
  else {
    iVar6 = 2;
  }
  InflateRect(&local_18,iVar6,iVar6);
  uVar3 = *(uint *)((int)this + 0x168);
  if (uVar3 == 0) {
    local_8 = param_2;
    uVar4 = 0;
  }
  else {
    local_8 = param_2 % uVar3;
    uVar4 = param_2 / uVar3;
  }
  sVar2 = *(short *)((int)this + 0xd4);
  iVar6 = uVar4 * uVar3;
  if (sVar2 == 0) {
    iVar5 = FUN_212f1602(1);
    local_18.left = local_18.left + (*(int *)((int)this + 0x4bc) / iVar5) * uVar4;
    iVar5 = local_18.top - (uVar4 + 1) * *(int *)((int)this + 0x17c);
    param_1[1] = iVar5;
    param_1[3] = *(int *)((int)this + 0x17c) + iVar5;
    if (*(short *)((int)this + 0xd6) == 0) {
LAB_212f2c65:
      local_18.left = (*(int *)((int)this + 0x4b0) + -1) * local_8 + local_18.left;
      *param_1 = local_18.left;
      if (local_8 == *(int *)((int)this + 0x168) - 1U) {
        iVar6 = *(int *)((int)this + 0x4b4);
      }
      else {
        iVar6 = *(int *)((int)this + 0x4b0);
      }
      param_1[2] = iVar6 + local_18.left;
      return;
    }
    *param_1 = local_18.left + 2;
    if (iVar6 < (int)param_2) {
      param_1 = (int *)((int)this + iVar6 * 4 + 0x180);
      local_8 = param_2 - iVar6;
      do {
        iVar6 = FUN_212f7de4(this,*param_1);
        param_1 = param_1 + 1;
        *piVar1 = *piVar1 + iVar6 + 0xe;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    iVar6 = FUN_212f7de4(this,*(int *)((int)this + param_2 * 4 + 0x180));
    piVar1[2] = iVar6 + 0xe + *piVar1;
    if (param_3 != 0) {
      return;
    }
    if (*(short *)((int)this + param_2 * 4 + 0x180) != *(short *)((int)this + 0xde)) {
      return;
    }
    iVar5 = 0;
    iVar6 = 1;
  }
  else {
    if (sVar2 == 1) {
      iVar6 = FUN_212f1602(1);
      piVar1 = (int *)((int)this + 0x17c);
      local_18.left = local_18.left + (*(int *)((int)this + 0x4bc) / iVar6) * uVar4;
      local_18.bottom = local_18.bottom + (uVar4 + 1) * *piVar1;
      param_1[3] = local_18.bottom;
      param_1[1] = local_18.bottom - *piVar1;
      if (*(short *)((int)this + 0xd6) != 0) {
        FUN_212fd873(piVar1,local_18.left);
        return;
      }
      goto LAB_212f2c65;
    }
    if (sVar2 != 2) {
      if (sVar2 != 3) {
        return;
      }
      iVar5 = FUN_212f1602(1);
      local_18.top = local_18.top + (*(int *)((int)this + 0x4bc) / iVar5) * uVar4;
      iVar5 = local_18.right + (uVar4 + 1) * *(int *)((int)this + 0x17c);
      param_1[2] = iVar5;
      *param_1 = iVar5 - *(int *)((int)this + 0x17c);
      if (*(short *)((int)this + 0xd6) == 0) {
        local_18.top = (*(int *)((int)this + 0x4b0) + -1) * local_8 + local_18.top;
        param_1[1] = local_18.top;
        if (local_8 == *(int *)((int)this + 0x168) - 1U) {
          iVar6 = *(int *)((int)this + 0x4b4);
        }
        else {
          iVar6 = *(int *)((int)this + 0x4b0);
        }
        param_1[3] = iVar6 + local_18.top;
        return;
      }
      param_1[1] = local_18.top + 2;
      if (iVar6 < (int)param_2) {
        param_1 = (int *)((int)this + iVar6 * 4 + 0x180);
        local_8 = param_2 - iVar6;
        do {
          iVar6 = FUN_212f7de4(this,*param_1);
          param_1 = param_1 + 1;
          piVar1[1] = piVar1[1] + iVar6 + 0xe;
          local_8 = local_8 - 1;
        } while (local_8 != 0);
      }
      iVar6 = FUN_212f7de4(this,*(int *)((int)this + param_2 * 4 + 0x180));
      piVar1[3] = iVar6 + 0xe + piVar1[1];
      if (param_3 != 0) {
        return;
      }
      if (*(short *)((int)this + param_2 * 4 + 0x180) != *(short *)((int)this + 0xde)) {
        return;
      }
      iVar5 = 1;
      iVar6 = 1;
      iVar7 = 0;
      goto LAB_212f2e66;
    }
    iVar5 = FUN_212f1602(1);
    local_18.bottom = local_18.bottom - (*(int *)((int)this + 0x4bc) / iVar5) * uVar4;
    iVar5 = local_18.left - (uVar4 + 1) * *(int *)((int)this + 0x17c);
    *param_1 = iVar5;
    param_1[2] = *(int *)((int)this + 0x17c) + iVar5;
    if (*(short *)((int)this + 0xd6) == 0) {
      local_18.bottom = (1 - *(int *)((int)this + 0x4b0)) * local_8 + local_18.bottom;
      param_1[3] = local_18.bottom;
      if (local_8 == *(int *)((int)this + 0x168) - 1U) {
        iVar6 = *(int *)((int)this + 0x4b4);
      }
      else {
        iVar6 = *(int *)((int)this + 0x4b0);
      }
      param_1[1] = local_18.bottom - iVar6;
      return;
    }
    param_1[3] = local_18.bottom + -2;
    if (iVar6 < (int)param_2) {
      param_1 = (int *)((int)this + iVar6 * 4 + 0x180);
      local_8 = param_2 - iVar6;
      do {
        iVar6 = FUN_212f7de4(this,*param_1);
        param_1 = param_1 + 1;
        piVar1[3] = piVar1[3] + (-0xe - iVar6);
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    iVar6 = FUN_212f7de4(this,*(int *)((int)this + param_2 * 4 + 0x180));
    piVar1[1] = (piVar1[3] - iVar6) + -0xe;
    if (param_3 != 0) {
      return;
    }
    if (*(short *)((int)this + param_2 * 4 + 0x180) != *(short *)((int)this + 0xde)) {
      return;
    }
    iVar5 = 1;
    iVar6 = 0;
  }
  iVar7 = 1;
LAB_212f2e66:
  FUN_212f3be2(piVar1,-2,iVar7,1,iVar6,iVar5);
  return;
}



void __thiscall FUN_212f2e73(void *this,LPRECT param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 1;
  SetRect(param_1,0,0,*(int *)((int)this + 0x88),*(int *)((int)this + 0x8c));
  sVar1 = *(short *)((int)this + 0xd4);
  if (sVar1 == 0) {
    param_1->top = param_1->top +
                   *(int *)((int)this + 0x17c) * *(int *)((int)this + 0x16c) +
                   (-(uint)(*(short *)((int)this + 0xd6) != 1) & 0xfffffffe) + 2;
  }
  else {
    if (sVar1 != 1) {
      if (sVar1 == 2) {
        param_1->left =
             param_1->left +
             *(int *)((int)this + 0x17c) * *(int *)((int)this + 0x16c) +
             (-(uint)(*(short *)((int)this + 0xd6) != 1) & 0xfffffffe) + 2;
        param_1->top = param_1->bottom - *(int *)((int)this + 0x4b8);
      }
      else if (sVar1 == 3) {
        param_1->right =
             param_1->right -
             (*(int *)((int)this + 0x17c) * *(int *)((int)this + 0x16c) +
             (-(uint)(*(short *)((int)this + 0xd6) != 1) & 0xfffffffe) + 2);
        param_1->bottom = *(int *)((int)this + 0x4b8) + param_1->top;
      }
      goto LAB_212f2ed2;
    }
    param_1->bottom =
         param_1->bottom -
         (*(int *)((int)this + 0x17c) * *(int *)((int)this + 0x16c) +
         (-(uint)(*(short *)((int)this + 0xd6) != 1) & 0xfffffffe) + 2);
  }
  param_1->right = *(int *)((int)this + 0x4b8) + param_1->left;
LAB_212f2ed2:
  if ((*(int *)((int)this + 0x4cc) != 0) && (*(short *)((int)this + 0xd6) == 0)) {
    iVar2 = 3;
  }
  if (*(short *)((int)this + 0xd6) == 1) {
    iVar2 = iVar2 + 1;
  }
  InflateRect(param_1,-iVar2,-iVar2);
  return;
}



void __thiscall FUN_212f2fa9(void *this,RECT *param_1)

{
  if ((*(uint *)((int)this + 0xb0) >> 1 & 1) == 0) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x34))();
  }
  else {
    FUN_212f2fc7(this,param_1,1);
  }
  return;
}



uint __thiscall FUN_212f2fc7(void *this,RECT *param_1,BOOL param_2)

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



undefined4
FUN_212f3015(void *param_1,undefined4 param_2,HDC param_3,RECT *param_4,undefined4 param_5,
            HDC param_6)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = GetDeviceCaps(param_3,2);
  if (iVar1 == 5) {
    FUN_212f2761(param_1);
    FUN_212f6eec(param_1,(int)*(short *)((int)param_1 + 0xde));
    FUN_21303a7f(param_1,param_3,param_6,&param_4->left);
  }
  else if ((*(int *)((int)param_1 + 0x4d8) == 0) && (*(int *)((int)param_1 + 0xa0) != 0)) {
    uVar2 = FUN_212f26e3(param_1);
    if (uVar2 != 0) {
      FUN_212f2761(param_1);
      FUN_212f6eec(param_1,(int)*(short *)((int)param_1 + 0xde));
    }
    FUN_212f3068(param_1,param_3,param_4);
  }
  return 0;
}



void __thiscall FUN_212f3068(void *this,HDC param_1,RECT *param_2)

{
  HDC hdc;
  int iVar1;
  RECT *pRVar2;
  tagRECT local_48;
  tagRECT local_38;
  HBITMAP local_28;
  HGDIOBJ local_24;
  int local_1c;
  uint local_18;
  HDC local_14;
  int local_10;
  int *local_c;
  HBRUSH local_8;
  
  CopyRect(&local_38,param_2);
  FUN_212f2e73(this,&local_48);
  hdc = CreateCompatibleDC(param_1);
  local_14 = hdc;
  local_28 = CreateCompatibleBitmap
                       (param_1,local_38.right - local_38.left,local_38.bottom - local_38.top);
  local_24 = SelectObject(hdc,local_28);
  OleTranslateColor(*(undefined4 *)((int)this + 0xf8),0,&local_18);
  iVar1 = FUN_212f31d8(local_18,&local_8);
  FillRect(hdc,&local_38,local_8);
  if (iVar1 != 0) {
    DeleteObject(local_8);
  }
  iVar1 = *(int *)((int)this + 0x16c);
  while (iVar1 = iVar1 + -1, local_10 = iVar1, -1 < iVar1) {
    pRVar2 = (RECT *)(iVar1 * *(int *)((int)this + 0x168));
    hdc = local_14;
    if ((int)pRVar2 < (int)&pRVar2->left + *(int *)((int)this + 0x168)) {
      local_c = (int *)((int)this + (int)pRVar2 * 4 + 0x180);
      param_2 = pRVar2;
      do {
        local_1c = *local_c;
        if ((local_1c != 100) && ((short)*local_c != *(short *)((int)this + 0xde))) {
          FUN_212f3232(this,local_14,local_1c,0);
          iVar1 = local_10;
        }
        param_2 = (RECT *)((int)&param_2->left + 1);
        local_c = local_c + 1;
        hdc = local_14;
      } while ((int)param_2 < (int)&pRVar2->left + *(int *)((int)this + 0x168));
    }
  }
  FUN_212f3232(this,hdc,(int)*(short *)((int)this + 0xde),0);
  BitBlt(param_1,local_38.left,local_38.top,local_38.right - local_38.left,
         local_38.bottom - local_38.top,hdc,0,0,0xcc0020);
  SelectObject(hdc,local_24);
  DeleteObject(local_28);
  DeleteDC(hdc);
  return;
}



undefined4 FUN_212f31d8(uint param_1,undefined4 *param_2)

{
  COLORREF color;
  HBRUSH pHVar1;
  HGDIOBJ pvVar2;
  int i;
  
  if (param_1 == 0) {
    i = 4;
  }
  else if (param_1 == 0x808080) {
    i = 2;
  }
  else if (param_1 == 0xc0c0c0) {
    i = 1;
  }
  else {
    if (param_1 != 0xffffff) {
      color = FUN_212f3220(param_1);
      pHVar1 = CreateSolidBrush(color);
      *param_2 = pHVar1;
      return 1;
    }
    i = 0;
  }
  pvVar2 = GetStockObject(i);
  *param_2 = pvVar2;
  return 0;
}



void FUN_212f3220(uint param_1)

{
  if ((param_1 & 0x80000000) != 0) {
    GetSysColor(param_1 & 0xffffff);
  }
  return;
}



void __thiscall FUN_212f3232(void *this,HDC param_1,int param_2,int param_3)

{
  uint uVar1;
  int local_14 [4];
  
  uVar1 = FUN_212f2b80(this,param_2);
  if (-1 < (int)uVar1) {
    FUN_212f2ba1(this,local_14,uVar1,param_3);
    FUN_212f3297(this,param_1);
  }
  return;
}



void __thiscall FUN_212f3297(void *this,HDC param_1)

{
  short sVar1;
  LPSTR lpString2;
  HRGN ho;
  uint uVar2;
  HGDIOBJ pvVar3;
  HGDIOBJ pvVar4;
  HGDIOBJ pvVar5;
  HBRUSH pHVar6;
  int iVar7;
  BOOL BVar8;
  HWND pHVar9;
  COLORREF color;
  uint uVar10;
  undefined4 *puVar11;
  undefined2 uStack00000018;
  RECT *in_stack_0000001c;
  HRGN pHStack00000020;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  POINT local_1e0 [11];
  LPSTR local_188 [31];
  byte local_10c;
  LOGFONTA local_108;
  HDC local_cc;
  LPSTR local_c8;
  tagRECT local_c4;
  undefined2 local_b4;
  int local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  HFONT local_a4;
  undefined2 local_a0;
  DWORD local_9c;
  DWORD local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  HRGN local_70;
  RECT *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  COLORREF local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  tagRECT local_40;
  undefined4 *local_30;
  HRGN local_2c;
  DWORD local_28;
  RECT local_24;
  HFONT local_14;
  LPSTR local_10;
  int local_c;
  HDC local_8;
  
  local_c = (in_stack_0000001c != (RECT *)0x0) + 1;
  if (*(uint *)((int)this + 0x168) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _uStack00000018 / *(uint *)((int)this + 0x168);
  }
  FUN_212f3808(this,uVar2);
  local_10 = (LPSTR)0x0;
  local_8 = param_1;
  if (param_1 == (HDC)0x0) {
    local_8 = GetWindowDC(*(HWND *)((int)this + 0xa0));
  }
  if ((*(int *)((int)this + 0x4cc) == 0) || (*(short *)((int)this + 0xd6) == 1)) {
    local_c = 0;
  }
  local_2c = FUN_212f3834(this,_uStack00000018,local_1e0,&local_48,0);
  pHStack00000020 = (HRGN)SelectClipRgn(local_8,local_2c);
  if (*(short *)((int)this + 0xd6) == 0) {
    pvVar3 = (HGDIOBJ)FUN_212f3ace(*(int *)((int)this + 0x158));
    pvVar4 = (HGDIOBJ)FUN_212f3b9d(*(int *)((int)this + 0x158));
    pvVar5 = (HGDIOBJ)FUN_212f3bc6(*(int *)((int)this + 0x158));
    pHVar6 = (HBRUSH)FUN_212f3c12(*(int *)((int)this + 0x158));
    FUN_212f73b8(local_8,*(HWND *)((int)this + 0xa0),local_48,local_44,&local_1e0[0].x,0xb,local_c,
                 (HGDIOBJ)0x1,pHVar6,pvVar5,pvVar4,pvVar3);
  }
  else {
    pvVar3 = (HGDIOBJ)FUN_212f3ace(*(int *)((int)this + 0x158));
    pvVar4 = (HGDIOBJ)FUN_212f3b9d(*(int *)((int)this + 0x158));
    pvVar5 = (HGDIOBJ)FUN_212f3bc6(*(int *)((int)this + 0x158));
    pHVar6 = (HBRUSH)FUN_212f3c12(*(int *)((int)this + 0x158));
    FUN_212f7f07(local_8,*(HWND *)((int)this + 0xa0),&local_1e0[0].x,0xb,in_stack_0000001c,
                 *(short *)((int)this + 0xd4),pHVar6,pvVar5,pvVar4,pvVar3);
  }
  SelectClipRgn(local_8,pHStack00000020);
  DeleteObject(local_2c);
  CopyRect(&local_40,(RECT *)&stack0x00000008);
  puVar11 = (undefined4 *)
            (*(int *)((int)this + _uStack00000018 * 4 + 0x180) * 0x20 + *(int *)((int)this + 0x160))
  ;
  local_30 = puVar11;
  OleTranslateColor(*(undefined4 *)((int)this + 0xfc),0,&local_28);
  if (*(int *)((int)this + 0x150) == 0) {
    FUN_212f5510(this,(int *)((int)this + 0x150));
  }
  (**(code **)(**(int **)((int)this + 0x150) + 0x4c))(*(int **)((int)this + 0x150),&local_14);
  GetObjectA(local_14,0x3c,&local_108);
  if (in_stack_0000001c != (RECT *)0x0) {
    local_108.lfWeight = (-(uint)(*(short *)((int)this + 0xd6) != 0) & 0xfffffe0c) + 900;
  }
  if (*(short *)((int)this + 0xd4) == 2) {
    local_108.lfEscapement = 900;
  }
  else if (*(short *)((int)this + 0xd4) == 3) {
    local_108.lfEscapement = -900;
  }
  local_14 = CreateFontIndirectA(&local_108);
  if (*(LPCWSTR)*puVar11 != L'\0') {
    iVar7 = lstrlenW((LPCWSTR)*puVar11);
    _uStack00000018 = iVar7 * 2 + 2;
    FUN_212f159d(local_188,_uStack00000018);
    WideCharToMultiByte(0,0,(LPCWSTR)*puVar11,-1,local_188[0],_uStack00000018,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    lpString2 = local_188[0];
    iVar7 = lstrlenA(local_188[0]);
    local_10 = (LPSTR)FUN_212f1575(iVar7 + 1);
    lstrcpyA(local_10,lpString2);
    if ((local_188[0] != (LPCSTR)0x0) && ((local_10c & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_188[0]);
    }
  }
  sVar1 = *(short *)((int)this + 0xd4);
  if (sVar1 == 0) {
    iVar15 = 0;
    iVar7 = 1;
LAB_212f34b9:
    FUN_212f3be2(&local_40.left,local_c,1,iVar7,1,iVar15);
    _uStack00000018 = 0;
  }
  else {
    if (sVar1 == 1) {
      iVar15 = 1;
      iVar7 = 0;
      goto LAB_212f34b9;
    }
    if (sVar1 == 2) {
      FUN_212f3be2(&local_40.left,local_c,1,1,0,1);
      _uStack00000018 = 1;
    }
    else if (sVar1 == 3) {
      FUN_212f3be2(&local_40.left,local_c,0,1,1,1);
      _uStack00000018 = 2;
    }
  }
  uVar2 = FUN_212f3c38((uint)this);
  if ((*(short *)((int)local_30 + 0x1a) == 0) ||
     (BVar8 = IsWindowEnabled(*(HWND *)((int)this + 0xa0)), BVar8 == 0)) {
    uVar10 = FUN_212f26e3(this);
    pHStack00000020 = (HRGN)0x1;
    if (uVar10 != 0) goto LAB_212f34f4;
  }
  else {
LAB_212f34f4:
    pHStack00000020 = (HRGN)0x0;
  }
  local_2c = CreateRectRgn(local_40.left + -1,local_40.top + -1,local_40.right + 1,
                           local_40.bottom + 1);
  if (*(short *)((int)this + 0xd6) == 0) {
    sVar1 = *(short *)((int)this + 0xd4);
    if (sVar1 == 0) {
      iVar15 = 0;
      iVar7 = 1;
LAB_212f3531:
      iVar13 = 1;
LAB_212f3533:
      iVar14 = 1;
      iVar12 = local_c + 1;
    }
    else {
      if (sVar1 == 1) {
        iVar15 = 1;
        iVar7 = 0;
        goto LAB_212f3531;
      }
      if (sVar1 != 2) {
        if (sVar1 != 3) goto LAB_212f353e;
        iVar15 = 1;
        iVar7 = 1;
        iVar13 = 0;
        goto LAB_212f3533;
      }
      iVar15 = 1;
      iVar14 = 0;
      iVar7 = 1;
      iVar13 = 1;
      iVar12 = local_c;
    }
    FUN_212f79ab(local_2c,iVar12,iVar13,iVar7,iVar14,iVar15);
  }
LAB_212f353e:
  if ((pHStack00000020 != (HRGN)0x0) &&
     ((*(short *)((int)this + 0xd4) == 2 || (*(short *)((int)this + 0xd4) == 3)))) {
    pHStack00000020 = (HRGN)0x0;
    local_28 = GetSysColor(0x11);
  }
  local_cc = local_8;
  local_c8 = local_10;
  CopyRect(&local_c4,&local_40);
  local_b4 = *(undefined2 *)((int)this + 0x4aa);
  local_ac = (undefined2)uVar2;
  local_b0 = (int)*(short *)((int)this + 0xec);
  local_a4 = local_14;
  local_a0 = uStack00000018;
  local_a8 = 0;
  local_9c = local_28;
  local_98 = FUN_212f3c69(*(int *)((int)this + 0x158));
  ho = local_2c;
  local_8c = (undefined2)(uVar2 >> 0x10);
  local_6c = &local_24;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = local_2c;
  local_68 = 0;
  local_64 = FUN_212f3c6d(*(int *)((int)this + 0x158));
  local_60 = FUN_212f3c71(*(int *)((int)this + 0x158));
  local_5c = (COLORREF)pHStack00000020;
  local_58 = 0;
  local_54 = 1;
  local_4c = 0;
  local_50 = local_30[1];
  if (local_98 == local_9c) {
    local_9c = (-(uint)(local_9c != 0) & 0xff000001) + 0xffffff;
  }
  FUN_212f3c75(&local_cc);
  DeleteObject(ho);
  DeleteObject(local_14);
  pHVar9 = GetFocus();
  if ((((pHVar9 == *(HWND *)((int)this + 0xa0)) && (in_stack_0000001c != (RECT *)0x0)) &&
      (*(short *)((int)this + 0xee) != 0)) && (uVar2 = FUN_212f26e3(this), uVar2 == 0)) {
    if (local_10 == (LPSTR)0x0) goto LAB_212f367e;
    color = FUN_212f3c69(*(int *)((int)this + 0x158));
    _uStack00000018 = SetBkColor(local_8,color);
    pHStack00000020 = (HRGN)SetTextColor(local_8,local_28);
    if (*(short *)((int)this + 0xd6) == 0) {
      FUN_212f7ada(&local_24.left,&local_40.left);
      in_stack_0000001c = &local_24;
      sVar1 = *(short *)((int)this + 0xd4);
      if (sVar1 == 0) {
        local_24.right = local_24.right + 2;
        local_24.bottom = local_24.bottom + 1;
      }
      else if (sVar1 == 1) {
        local_24.right = local_24.right + 2;
        local_24.top = local_24.top + 1;
      }
      else if (sVar1 == 2) {
        local_24.top = local_24.top + -2;
        local_24.right = local_24.right + 1;
      }
      else if (sVar1 == 3) {
        local_24.bottom = local_24.bottom + 2;
      }
      InflateRect(&local_24,1,1);
      FUN_212f7ada(&local_24.left,&local_40.left);
    }
    else {
      in_stack_0000001c = (RECT *)&stack0x00000008;
      FUN_212f3be2((int *)&stack0x00000008,3,0,0,1,1);
      FUN_212f3be2((int *)&stack0x00000008,2,1,1,0,0);
    }
    DrawFocusRect(local_8,in_stack_0000001c);
    SetBkColor(local_8,_uStack00000018);
    SetTextColor(local_8,(COLORREF)pHStack00000020);
  }
  if (local_10 != (LPSTR)0x0) {
    FUN_212f1433(local_10);
  }
LAB_212f367e:
  if (param_1 == (HDC)0x0) {
    ReleaseDC(*(HWND *)((int)this + 0xa0),local_8);
  }
  return;
}



int __thiscall FUN_212f3808(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1 * *(int *)((int)this + 0x168);
  iVar1 = iVar3 + -1 + *(int *)((int)this + 0x168);
  if (iVar3 <= iVar1) {
    piVar2 = (int *)((int)this + iVar1 * 4 + 0x180);
    do {
      if (*piVar2 != 100) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
    } while (iVar3 <= iVar1);
  }
  return 100;
}



HRGN __thiscall FUN_212f3834(void *this,uint param_1,POINT *param_2,int *param_3,int param_4)

{
  short sVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HRGN hrgnDst;
  HRGN hrgnSrc1;
  HRGN hrgnSrc2;
  int iVar8;
  POINT local_84 [11];
  LONG local_2c;
  int local_28;
  int local_24;
  int local_20;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  if (*(uint *)((int)this + 0x168) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 / *(uint *)((int)this + 0x168);
  }
  if ((uVar5 == 0) || (local_c = 5, param_4 != 0)) {
    local_c = 0;
  }
  local_8 = (*(int *)((int)this + 0x16c) - uVar5) + -1;
  if (*(short *)((int)this + 0xd6) == 1) {
    *(undefined2 *)((int)this + 0x4c0) = 2;
  }
  else {
    *(undefined2 *)((int)this + 0x4c0) = 4;
  }
  FUN_212f2ba1(this,&local_2c,param_1,0);
  GetWindowRect(*(HWND *)((int)this + 0xa0),&local_1c);
  FUN_212f3a25(&local_1c.left);
  if (param_2 == (POINT *)0x0) {
    param_2 = local_84;
  }
  sVar1 = *(short *)((int)this + 0xd4);
  if (sVar1 == 0) {
    local_1c.top = local_1c.top + (local_8 + 1) * *(int *)((int)this + 0x17c) + local_c;
    iVar6 = FUN_212f1602(1);
    local_1c.left = local_1c.left + (*(int *)((int)this + 0x4bc) / iVar6) * uVar5;
    local_1c.bottom = local_1c.bottom - uVar5 * *(int *)((int)this + 0x17c);
    iVar7 = FUN_212f1602(1);
    LVar3 = local_1c.top;
    iVar6 = *(int *)((int)this + 0x4bc);
    param_2->y = local_1c.top;
    LVar2 = local_2c;
    local_1c.right = local_1c.right - (iVar6 / iVar7) * local_8;
    param_2->x = local_2c;
    param_2[1].x = LVar2;
    param_2[1].y = local_28 + *(short *)((int)this + 0x4c0);
    iVar6 = local_2c + *(short *)((int)this + 0x4c0);
    param_2[2].y = local_28;
    param_2[2].x = iVar6;
    iVar6 = local_24 - *(short *)((int)this + 0x4c0);
    param_2[3].y = local_28;
    param_2[3].x = iVar6;
    param_2[4].x = local_24;
    LVar4 = local_1c.bottom;
    param_2[4].y = local_28 + *(short *)((int)this + 0x4c0);
    LVar2 = local_1c.right;
    param_2[6].x = local_1c.right;
    param_2[7].x = LVar2;
    LVar2 = local_1c.left;
    param_2[5].x = local_24;
    param_2[5].y = LVar3;
    param_2[6].y = LVar3;
    param_2[7].y = LVar4;
    param_2[8].x = LVar2;
    param_2[8].y = LVar4;
    param_2[9].x = LVar2;
    param_2[9].y = LVar3;
    param_2[10].x = local_2c;
    param_2[10].y = LVar3;
    if (param_3 != (int *)0x0) {
      *param_3 = local_24 - (local_24 - local_2c) / 2;
      param_3[1] = LVar4 - (LVar4 - LVar3) / 2;
    }
  }
  else if (sVar1 == 1) {
    local_1c.bottom = local_1c.bottom - ((local_8 + 1) * *(int *)((int)this + 0x17c) + local_c);
    iVar6 = FUN_212f1602(1);
    local_1c.left = local_1c.left + (*(int *)((int)this + 0x4bc) / iVar6) * uVar5;
    local_1c.top = local_1c.top + uVar5 * *(int *)((int)this + 0x17c);
    iVar8 = FUN_212f1602(1);
    LVar4 = local_1c.bottom;
    iVar6 = *(int *)((int)this + 0x4bc);
    param_2->y = local_1c.bottom;
    iVar7 = local_24;
    local_1c.right = local_1c.right - (iVar6 / iVar8) * local_8;
    param_2->x = local_24;
    param_2[1].x = iVar7;
    param_2[1].y = (local_20 - *(short *)((int)this + 0x4c0)) + -1;
    iVar6 = local_24 - *(short *)((int)this + 0x4c0);
    param_2[2].y = local_20;
    param_2[2].x = iVar6 + -1;
    sVar1 = *(short *)((int)this + 0x4c0);
    param_2[3].y = local_20;
    param_2[4].x = local_2c;
    param_2[3].x = local_2c + 1 + (int)sVar1;
    LVar3 = local_1c.top;
    param_2[4].y = (local_20 - *(short *)((int)this + 0x4c0)) + -1;
    LVar2 = local_1c.left;
    param_2[6].x = local_1c.left;
    param_2[7].x = LVar2;
    LVar2 = local_1c.right;
    param_2[5].x = local_2c;
    param_2[5].y = LVar4;
    param_2[6].y = LVar4;
    param_2[7].y = LVar3;
    param_2[8].x = LVar2;
    param_2[8].y = LVar3;
    param_2[9].x = LVar2;
    param_2[9].y = LVar4;
    param_2[10].x = local_24;
    param_2[10].y = LVar4;
    if (param_3 != (int *)0x0) {
      *param_3 = local_24 - (local_24 - local_2c) / 2;
      param_3[1] = LVar4 - (LVar4 - LVar3) / 2;
    }
  }
  else if (sVar1 == 2) {
    local_1c.left = local_1c.left + (local_8 + 1) * *(int *)((int)this + 0x17c) + local_c;
    iVar6 = FUN_212f1602(1);
    local_1c.bottom = local_1c.bottom - (*(int *)((int)this + 0x4bc) / iVar6) * uVar5;
    local_1c.right = local_1c.right - uVar5 * *(int *)((int)this + 0x17c);
    iVar8 = FUN_212f1602(1);
    LVar2 = local_1c.left;
    iVar7 = local_20;
    iVar6 = *(int *)((int)this + 0x4bc);
    param_2->y = local_20;
    param_2->x = LVar2;
    param_2[1].y = iVar7;
    local_1c.top = local_1c.top + (iVar6 / iVar8) * local_8;
    param_2[1].x = local_2c + 1 + (int)*(short *)((int)this + 0x4c0);
    iVar6 = local_28;
    sVar1 = *(short *)((int)this + 0x4c0);
    param_2[2].x = local_2c;
    param_2[2].y = (iVar7 - sVar1) + -1;
    param_2[3].y = iVar6 + *(short *)((int)this + 0x4c0);
    param_2[3].x = local_2c;
    param_2[4].y = local_28;
    LVar4 = local_1c.right;
    param_2[4].x = local_2c + *(short *)((int)this + 0x4c0);
    LVar3 = local_1c.top;
    param_2[5].y = local_28;
    param_2[6].y = LVar3;
    param_2[7].y = LVar3;
    LVar3 = local_1c.bottom;
    param_2[5].x = LVar2;
    param_2[6].x = LVar2;
    param_2[7].x = LVar4;
    param_2[8].y = LVar3;
    param_2[8].x = LVar4;
    param_2[9].y = LVar3;
    param_2[9].x = LVar2;
    param_2[10].y = local_20;
    param_2[10].x = LVar2;
    if (param_3 != (int *)0x0) {
      param_3[1] = local_20 - (local_20 - local_28) / 2;
      *param_3 = LVar4 - (LVar4 - LVar2) / 2;
    }
  }
  else if (sVar1 == 3) {
    local_1c.right = local_1c.right - ((local_8 + 1) * *(int *)((int)this + 0x17c) + local_c);
    iVar6 = FUN_212f1602(1);
    local_1c.top = local_1c.top + (*(int *)((int)this + 0x4bc) / iVar6) * uVar5;
    local_1c.left = local_1c.left + uVar5 * *(int *)((int)this + 0x17c);
    iVar8 = FUN_212f1602(1);
    LVar4 = local_1c.right;
    iVar6 = *(int *)((int)this + 0x4bc);
    param_2->x = local_1c.right;
    iVar7 = local_28;
    local_1c.bottom = local_1c.bottom - (iVar6 / iVar8) * local_8;
    param_2->y = local_28;
    param_2[1].y = iVar7;
    param_2[1].x = local_24 - *(short *)((int)this + 0x4c0);
    iVar6 = local_28 + *(short *)((int)this + 0x4c0);
    param_2[2].x = local_24;
    param_2[2].y = iVar6;
    iVar6 = local_20 - *(short *)((int)this + 0x4c0);
    param_2[3].x = local_24;
    param_2[3].y = iVar6 + -1;
    param_2[4].y = local_20;
    LVar2 = local_1c.left;
    param_2[4].x = (local_24 - *(short *)((int)this + 0x4c0)) + -1;
    LVar3 = local_1c.bottom;
    param_2[5].y = local_20;
    param_2[6].y = LVar3;
    param_2[7].y = LVar3;
    LVar3 = local_1c.top;
    param_2[5].x = LVar4;
    param_2[6].x = LVar4;
    param_2[7].x = LVar2;
    param_2[8].y = LVar3;
    param_2[8].x = LVar2;
    param_2[9].y = LVar3;
    param_2[9].x = LVar4;
    param_2[10].y = local_28;
    param_2[10].x = LVar4;
    if (param_3 != (int *)0x0) {
      param_3[1] = local_20 - (local_20 - local_28) / 2;
      *param_3 = LVar4 - (LVar4 - LVar2) / 2;
    }
  }
  hrgnDst = CreatePolygonRgn(param_2,6,1);
  if (param_4 == 0) {
    hrgnSrc1 = CreateRectRgn(local_1c.left,local_1c.top,local_1c.right,local_1c.bottom);
    hrgnSrc2 = FUN_212f3a3e(hrgnDst);
    CombineRgn(hrgnDst,hrgnSrc1,hrgnSrc2,2);
    DeleteObject(hrgnSrc1);
    DeleteObject(hrgnSrc2);
  }
  return hrgnDst;
}



void FUN_212f3a25(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  param_1[2] = param_1[2] - iVar1;
  param_1[3] = param_1[3] - param_1[1];
  param_1[1] = 0;
  return;
}



HRGN FUN_212f3a3e(HRGN param_1)

{
  HRGN hrgnDst;
  
  hrgnDst = CreateRectRgn(0,0,0,0);
  if (hrgnDst != (HRGN)0x0) {
    CombineRgn(hrgnDst,param_1,(HRGN)0x0,5);
  }
  return hrgnDst;
}



void __cdecl FUN_212f3a67(HDC param_1,uint *param_2,uint param_3,LPSIZE param_4)

{
  uint *lpString;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = param_3 * 2 + 2;
  lpString = (uint *)FUN_212f1575(uVar2);
  if (lpString != (uint *)0x0) {
    puVar3 = lpString;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    FUN_212f3aea(lpString,param_2,param_3);
    FUN_212f3b68((char *)lpString);
    uVar2 = 0xffffffff;
    puVar3 = lpString;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      uVar1 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar1 != '\0');
    GetTextExtentPoint32A(param_1,(LPCSTR)lpString,~uVar2 - 1,param_4);
    FUN_212f1433(lpString);
  }
  return;
}



void __fastcall FUN_212f3ace(int param_1)

{
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    pvVar1 = FUN_212f3b44(*(int *)(param_1 + 0xc));
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreatePen(0,1,*(COLORREF *)(param_1 + 0xc));
      *(HPEN *)(param_1 + 0x28) = pHVar2;
    }
  }
  return;
}



uint * __cdecl FUN_212f3aea(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_21314268 == 0) {
    puVar5 = FUN_2130b09f(param_1,param_2,param_3);
    return puVar5;
  }
  puVar5 = param_1;
  puVar4 = param_1;
  if (param_3 != 0) {
    do {
      bVar2 = (byte)*param_2;
      param_3 = param_3 - 1;
      bVar1 = *(byte *)((int)&DAT_21314160 + bVar2 + 1);
      *(byte *)puVar4 = bVar2;
      if ((bVar1 & 4) == 0) {
        puVar5 = (uint *)((int)puVar4 + 1);
        if (bVar2 == 0) break;
      }
      else {
        bVar2 = *(byte *)((int)param_2 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        *(byte *)((int)puVar4 + 1) = bVar2;
        puVar5 = (uint *)((int)puVar4 + 2);
        if (bVar2 == 0) {
          *(byte *)puVar4 = 0;
          break;
        }
      }
      param_2 = (uint *)((int)param_2 + 1);
      puVar4 = puVar5;
    } while (param_3 != 0);
  }
  if (param_3 != 0) {
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(byte *)puVar5 = 0;
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  return param_1;
}



HGDIOBJ FUN_212f3b44(int param_1)

{
  HGDIOBJ pvVar1;
  int i;
  
  if (param_1 == 0) {
    i = 7;
  }
  else {
    if (param_1 != 0xffffff) {
      return (HGDIOBJ)0x0;
    }
    i = 6;
  }
  pvVar1 = GetStockObject(i);
  return pvVar1;
}



void FUN_212f3b68(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = param_1;
  do {
    if (*pcVar2 == '&') {
      FUN_2130a4b1((undefined4 *)pcVar2,(undefined4 *)(pcVar2 + 1),
                   (uint)(param_1 + (~uVar3 - (int)pcVar2)));
    }
    pcVar2 = CharNextA(pcVar2);
  } while (*pcVar2 != '\0');
  return;
}



void __fastcall FUN_212f3b9d(int param_1)

{
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    pvVar1 = FUN_212f3b44(*(int *)(param_1 + 8));
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreatePen(0,1,*(COLORREF *)(param_1 + 8));
      *(HPEN *)(param_1 + 0x24) = pHVar2;
    }
  }
  return;
}



void __fastcall FUN_212f3bc6(int param_1)

{
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar1 = FUN_212f3b44(*(int *)(param_1 + 0x10));
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreatePen(0,1,*(COLORREF *)(param_1 + 0x10));
      *(HPEN *)(param_1 + 0x2c) = pHVar2;
    }
  }
  return;
}



void FUN_212f3be2(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_3 != 0) {
    *param_1 = *param_1 + param_2;
  }
  if (param_4 != 0) {
    param_1[1] = param_1[1] + param_2;
  }
  if (param_5 != 0) {
    param_1[2] = param_1[2] - param_2;
  }
  if (param_6 != 0) {
    param_1[3] = param_1[3] - param_2;
  }
  return;
}



void __fastcall FUN_212f3c12(int param_1)

{
  HGDIOBJ pvVar1;
  HBRUSH pHVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar1 = FUN_212f6fdb(*(int *)(param_1 + 4));
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreateSolidBrush(*(COLORREF *)(param_1 + 4));
      *(HBRUSH *)(param_1 + 0x30) = pHVar2;
    }
  }
  return;
}



uint __fastcall FUN_212f3c38(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_c;
  
  sVar1 = *(short *)(param_1 + 0xd4);
  if (sVar1 < 0) {
    return param_1;
  }
  if (sVar1 < 2) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x4a6);
    uVar3 = (uint)*(ushort *)(param_1 + 0x4a8) << 0x10;
    goto LAB_212f3c65;
  }
  uVar3 = 2;
  uVar2 = param_1;
  if (sVar1 == 2) {
    switch(*(undefined2 *)(param_1 + 0x4a8)) {
    case 0:
      uVar2 = uVar3;
      break;
    case 1:
      uStack_c = 8;
      uVar2 = uStack_c;
      break;
    case 2:
      uStack_c = 5;
      uVar2 = uStack_c;
      break;
    case 3:
      uVar2 = 0;
      break;
    case 4:
      uStack_c = 6;
      uVar2 = uStack_c;
      break;
    case 5:
      uStack_c = 3;
      uVar2 = uStack_c;
      break;
    case 6:
      uStack_c = 1;
      uVar2 = uStack_c;
      break;
    case 7:
      uStack_c = 7;
      uVar2 = uStack_c;
      break;
    case 8:
      uStack_c = 4;
      uVar2 = uStack_c;
      break;
    case 9:
      uStack_c = 0xc;
      uVar2 = uStack_c;
      break;
    case 10:
      uStack_c = 0xb;
      uVar2 = uStack_c;
      break;
    case 0xb:
      uStack_c = 9;
      uVar2 = uStack_c;
      break;
    case 0xc:
      uStack_c = 10;
      uVar2 = uStack_c;
      break;
    case 0xd:
      uStack_c = 0xd;
      uVar2 = uStack_c;
    }
    switch(*(undefined2 *)(param_1 + 0x4a6)) {
    case 0:
      param_1 = uVar3;
      break;
    case 1:
      uStack_c = 8;
      param_1 = uStack_c;
      break;
    case 2:
      uStack_c = 5;
      param_1 = uStack_c;
      break;
    case 3:
      param_1 = 0;
      break;
    case 4:
      uStack_c = 6;
      param_1 = uStack_c;
      break;
    case 5:
      uStack_c = 3;
      param_1 = uStack_c;
      break;
    case 6:
      goto switchD_212fde9a_caseD_8;
    case 7:
      goto switchD_212fde9a_caseD_7;
    case 8:
      goto switchD_212fde9a_caseD_6;
    }
  }
  else {
    if (sVar1 != 3) {
      return param_1;
    }
    switch(*(undefined2 *)(param_1 + 0x4a8)) {
    case 0:
      uStack_c = 3;
      uVar2 = uStack_c;
      break;
    case 1:
      uStack_c = 6;
      uVar2 = uStack_c;
      break;
    case 2:
      uVar2 = 0;
      break;
    case 3:
      uStack_c = 5;
      uVar2 = uStack_c;
      break;
    case 4:
      uStack_c = 8;
      uVar2 = uStack_c;
      break;
    case 5:
      uVar2 = uVar3;
      break;
    case 6:
      uStack_c = 4;
      uVar2 = uStack_c;
      break;
    case 7:
      uStack_c = 7;
      uVar2 = uStack_c;
      break;
    case 8:
      uStack_c = 1;
      uVar2 = uStack_c;
      break;
    case 9:
      uStack_c = 0xb;
      uVar2 = uStack_c;
      break;
    case 10:
      uStack_c = 0xc;
      uVar2 = uStack_c;
      break;
    case 0xb:
      uStack_c = 10;
      uVar2 = uStack_c;
      break;
    case 0xc:
      uStack_c = 9;
      uVar2 = uStack_c;
      break;
    case 0xd:
      uStack_c = 0xd;
      uVar2 = uStack_c;
    }
    switch(*(undefined2 *)(param_1 + 0x4a6)) {
    case 0:
      uStack_c = 3;
      param_1 = uStack_c;
      break;
    case 1:
      uStack_c = 6;
      param_1 = uStack_c;
      break;
    case 2:
      param_1 = 0;
      break;
    case 3:
      uStack_c = 5;
      param_1 = uStack_c;
      break;
    case 4:
      uStack_c = 8;
      param_1 = uStack_c;
      break;
    case 5:
      param_1 = uVar3;
      break;
    case 6:
switchD_212fde9a_caseD_6:
      uStack_c = 4;
      param_1 = uStack_c;
      break;
    case 7:
switchD_212fde9a_caseD_7:
      uStack_c = 7;
      param_1 = uStack_c;
      break;
    case 8:
switchD_212fde9a_caseD_8:
      uStack_c = 1;
      param_1 = uStack_c;
    }
  }
  uVar2 = uVar2 << 0x10;
  uVar3 = param_1 & 0xffff;
LAB_212f3c65:
  return uVar2 | uVar3;
}



undefined4 __fastcall FUN_212f3c69(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



undefined4 __fastcall FUN_212f3c6d(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



undefined4 __fastcall FUN_212f3c71(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



void FUN_212f3c75(undefined4 *param_1)

{
  RECT *lprcSrc;
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  HRGN pHVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  tagRECT local_48;
  tagRECT local_38;
  HRGN local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  HGDIOBJ local_18;
  HPALETTE local_14;
  HPALETTE local_10;
  uint local_c;
  uint local_8;
  
  puVar3 = param_1;
  lprcSrc = (RECT *)(param_1 + 2);
  local_18 = (HGDIOBJ)0x0;
  local_8 = 0;
  local_c = 0;
  local_14 = (HPALETTE)0x0;
  local_1c = 0;
  if (param_1[4] == lprcSrc->left || param_1[4] - lprcSrc->left < 0) {
    return;
  }
  if (param_1[5] == param_1[3] || (int)(param_1[5] - param_1[3]) < 0) {
    return;
  }
  if ((HGDIOBJ)param_1[10] != (HGDIOBJ)0x0) {
    local_18 = SelectObject((HDC)*param_1,(HGDIOBJ)param_1[10]);
  }
  if (puVar3[0x17] == 0) {
    pHVar7 = CreateRectRgn(lprcSrc->left,puVar3[3],puVar3[4],puVar3[5]);
    puVar3[0x17] = pHVar7;
    local_1c = 1;
  }
  local_28 = (HRGN)SelectClipRgn((HDC)*puVar3,(HRGN)puVar3[0x17]);
  CopyRect(&local_38,lprcSrc);
  CopyRect(&local_48,lprcSrc);
  sVar1 = *(short *)(puVar3 + 6);
  if ((sVar1 == 3) || (sVar1 == 1)) {
    local_38.right = local_38.right + -1;
    local_38.bottom = local_38.bottom + -1;
  }
  if ((sVar1 == 4) || (sVar1 == 2)) {
    local_38.right = local_38.right + -2;
    local_38.bottom = local_38.bottom + -2;
  }
  piVar2 = (int *)puVar3[0x1f];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,&local_8);
    uVar5 = FUN_212f1602(1);
    local_8 = local_8 / uVar5;
    (**(code **)(*(int *)puVar3[0x1f] + 0x1c))((int *)puVar3[0x1f],&local_c);
    uVar5 = FUN_212f273d(1);
    local_c = local_c / uVar5;
    (**(code **)(*(int *)puVar3[0x1f] + 0x14))((int *)puVar3[0x1f],&param_1);
    if ((short)param_1 == 1) {
      if (puVar3[0x14] != 0) {
        local_8 = local_8 / (uint)puVar3[0x14];
      }
      uVar5 = puVar3[0x16];
    }
    else {
      if ((short)param_1 != 2) goto LAB_212f3d27;
      if (puVar3[0xe] != 0) {
        local_8 = local_8 / (uint)puVar3[0xe];
      }
      uVar5 = puVar3[0xf];
    }
    if (uVar5 != 0) {
      local_c = local_c / uVar5;
    }
  }
LAB_212f3d27:
  if (((puVar3[1] == 0) && (8 < *(short *)(puVar3 + 0x10))) && (*(short *)(puVar3 + 0x10) < 0xd)) {
    *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar3 + 8);
  }
  sVar1 = *(short *)(puVar3 + 0x10);
  if (9 < sVar1) {
    if (sVar1 != 10) {
      if (sVar1 == 0xb) {
        iVar10 = (int)*(short *)(puVar3 + 8);
        switch(iVar10) {
        case 0:
        case 3:
        case 6:
          local_38.top = local_38.top + 2 + local_c;
          break;
        case 1:
        case 4:
        case 7:
          local_38.top = local_38.top + 1 + local_c;
          break;
        case 2:
        case 5:
        case 8:
          if ((int)((local_38.top - local_c) + -1) < (int)puVar3[3]) {
            local_38.top = local_c + 1 + puVar3[3];
          }
        }
        if (-1 < iVar10) {
          if (iVar10 < 3) {
            local_48.left = local_38.left;
LAB_212fe942:
            local_48.right = (local_8 - 1) + local_48.left;
          }
          else if (iVar10 < 6) {
            local_48.left = (local_38.right - local_8) + 1;
            local_48.right = local_38.right;
          }
          else if (iVar10 < 9) {
            local_48.left = ((local_38.right - local_38.left) / 2 - (local_8 >> 1)) + local_38.left;
            goto LAB_212fe942;
          }
        }
        FUN_212f3fd7(puVar3,&local_38);
        local_48.bottom = local_38.top + -1;
        local_48.top = (local_48.bottom - local_c) + 1;
        goto LAB_212f3e29;
      }
      if (sVar1 != 0xc) {
        if (sVar1 == 0xd) {
          FUN_212f3fd7(puVar3,&local_38);
          local_14 = (HPALETTE)0x1;
          goto LAB_212f3e29;
        }
        if (sVar1 == 0xe) {
          FUN_212f3fd7(puVar3,&local_38);
          local_48.left = local_48.left + puVar3[0x11];
          local_48.right = (local_8 - 1) + local_48.left;
        }
        else {
          if (sVar1 != 0xf) goto LAB_212f3e29;
          FUN_212f3fd7(puVar3,&local_38);
          local_48.right = local_48.right - puVar3[0x11];
          local_48.left = (local_48.right - local_8) + 1;
        }
        local_48.top = local_48.top + puVar3[0x12];
        goto LAB_212fe829;
      }
      iVar10 = (int)*(short *)(puVar3 + 8);
      switch(iVar10) {
      case 0:
      case 3:
      case 6:
        if ((int)puVar3[5] < (int)(local_c + 1 + local_38.bottom)) {
          local_38.bottom = (puVar3[5] - local_c) + -1;
        }
        break;
      case 1:
      case 4:
      case 7:
        iVar9 = -1;
        goto LAB_212fe883;
      case 2:
      case 5:
      case 8:
        iVar9 = -2;
LAB_212fe883:
        local_38.bottom = local_38.bottom + (iVar9 - local_c);
      }
      if (-1 < iVar10) {
        if (iVar10 < 3) {
          local_48.left = local_38.left;
LAB_212fe8b2:
          local_48.right = (local_8 - 1) + local_48.left;
        }
        else if (iVar10 < 6) {
          local_48.left = (local_38.right - local_8) + 1;
          local_48.right = local_38.right;
        }
        else if (iVar10 < 9) {
          local_48.left = ((local_38.right - local_38.left) / 2 - (local_8 >> 1)) + local_38.left;
          goto LAB_212fe8b2;
        }
      }
      FUN_212f3fd7(puVar3,&local_38);
      local_48.top = local_38.bottom + 1;
LAB_212fe829:
      local_48.bottom = (local_c - 1) + local_48.top;
      goto LAB_212f3e29;
    }
    iVar10 = (int)*(short *)(puVar3 + 8);
    if (-1 < iVar10) {
      if (iVar10 < 3) {
        if ((int)puVar3[4] < (int)(local_8 + 1 + local_38.right)) {
          local_38.right = (puVar3[4] - local_8) + -1;
        }
      }
      else {
        if (iVar10 < 6) {
          iVar9 = -1;
        }
        else {
          if (8 < iVar10) goto LAB_212fe9be;
          iVar9 = 1;
        }
        local_38.right = local_38.right + (iVar9 - local_8);
      }
    }
LAB_212fe9be:
    switch(iVar10) {
    case 0:
    case 3:
    case 6:
      local_48.top = local_38.top;
      goto LAB_212fe9e5;
    case 1:
    case 4:
    case 7:
      local_48.top = ((local_38.bottom - local_38.top) / 2 - (local_c >> 1)) + local_38.top;
LAB_212fe9e5:
      local_48.bottom = (local_c - 1) + local_48.top;
      break;
    case 2:
    case 5:
    case 8:
      local_48.bottom = local_38.bottom;
      local_48.top = (local_38.bottom - local_c) + 1;
    }
    FUN_212f3fd7(puVar3,&local_38);
    if (puVar3[0x1d] == 0) {
      local_48.left = local_38.right + 1;
    }
    else {
      local_48.left = local_38.right + 4;
    }
    local_48.right = (local_8 - 1) + local_48.left;
    goto LAB_212f3e29;
  }
  if (sVar1 != 9) {
    if ((-1 < sVar1) && (sVar1 < 9)) {
      FUN_212f3fd7(puVar3,&local_38);
      FUN_212f41ff(&local_48.left,local_8,local_c,*(undefined2 *)(puVar3 + 0x10));
    }
    goto LAB_212f3e29;
  }
  iVar10 = (int)*(short *)(puVar3 + 8);
  if (-1 < iVar10) {
    if (iVar10 < 3) {
      local_38.left = local_38.left + 2U + local_8;
    }
    else if (iVar10 < 6) {
      uVar5 = local_8;
      uVar8 = lprcSrc->left;
      if ((int)((local_38.left - local_8) + -1) < lprcSrc->left) goto LAB_212f3d69;
    }
    else {
      uVar5 = local_38.left;
      uVar8 = local_8;
      if (iVar10 < 9) {
LAB_212f3d69:
        local_38.left = uVar5 + 1 + uVar8;
      }
    }
  }
  switch(iVar10) {
  case 0:
  case 3:
  case 6:
    local_48.top = local_38.top;
    goto LAB_212f3dfd;
  case 1:
  case 4:
  case 7:
    local_48.top = ((local_38.bottom - local_38.top) / 2 - (local_c >> 1)) + local_38.top;
LAB_212f3dfd:
    local_48.bottom = (local_c - 1) + local_48.top;
    break;
  case 2:
  case 5:
  case 8:
    local_48.bottom = local_38.bottom;
    local_48.top = (local_38.bottom - local_c) + 1;
  }
  FUN_212f3fd7(puVar3,&local_38);
  if (puVar3[0x1d] == 0) {
    local_48.right = local_38.left - 1;
  }
  else {
    local_48.right = local_38.left - 4;
  }
  local_48.left = (local_48.right - local_8) + 1;
LAB_212f3e29:
  if ((LPRECT)puVar3[0x18] != (LPRECT)0x0) {
    CopyRect((LPRECT)puVar3[0x18],&local_38);
  }
  if ((LPRECT)puVar3[0x19] != (LPRECT)0x0) {
    CopyRect((LPRECT)puVar3[0x19],&local_48);
  }
  if (puVar3[0x20] == 0) {
    if ((puVar3[0x14] == 0) && (puVar3[0x16] == 0)) {
      piVar2 = (int *)puVar3[0x1f];
      if (piVar2 != (int *)0x0) {
        local_10 = (HPALETTE)0x0;
        local_14 = (HPALETTE)0x0;
        (**(code **)(*piVar2 + 0x14))(piVar2,&param_1);
        if ((short)param_1 == 1) {
          (**(code **)(*(int *)puVar3[0x1f] + 0x10))((int *)puVar3[0x1f],&local_10);
        }
        if (local_10 != (HPALETTE)0x0) {
          local_14 = SelectPalette((HDC)*puVar3,local_10,1);
          RealizePalette((HDC)*puVar3);
        }
        (**(code **)(*(int *)puVar3[0x1f] + 0x18))((int *)puVar3[0x1f],&local_24);
        (**(code **)(*(int *)puVar3[0x1f] + 0x1c))((int *)puVar3[0x1f],&local_20);
        (**(code **)(*(int *)puVar3[0x1f] + 0x20))
                  ((int *)puVar3[0x1f],*puVar3,local_48.left,local_48.top,
                   (local_48.right - local_48.left) + 1,(local_48.bottom - local_48.top) + 1,0,
                   local_20 + -1,local_24,-local_20,&local_48);
        if (local_14 != (HPALETTE)0x0) {
          FUN_212fea79();
          return;
        }
      }
    }
    else {
      (**(code **)(*(int *)puVar3[0x1f] + 0xc))((int *)puVar3[0x1f],&param_1);
      FUN_213062cf((HDC)*puVar3,param_1,&local_48.left,puVar3[0x13],puVar3[0x14],puVar3[0x15],
                   puVar3[0x16],(int)local_14);
    }
    uVar6 = FUN_212f3220(puVar3[0xd]);
    puVar3[0xd] = uVar6;
    if (puVar3[9] == 0) {
      local_14 = (HPALETTE)SetBkMode((HDC)*puVar3,1);
    }
    else {
      local_14 = (HPALETTE)SetBkMode((HDC)*puVar3,2);
      SetBkColor((HDC)*puVar3,puVar3[0xd]);
    }
    if (puVar3[1] != 0) {
      bVar4 = FUN_212f426d(*(undefined2 *)(puVar3 + 8),0);
      param_1 = (undefined4 *)CONCAT31(extraout_var,bVar4);
      if (*(short *)(puVar3 + 0xb) == 1) {
        local_38.top = local_38.top + -1;
      }
      else if (*(short *)(puVar3 + 0xb) == 2) {
        local_38.bottom = local_38.bottom + 1;
      }
      else {
        local_38.right = local_38.right + 1;
      }
      if (*(short *)(puVar3 + 6) == 0) {
        SetTextColor((HDC)*puVar3,puVar3[0xc]);
        FUN_212f4297(puVar3,&local_38.left);
      }
      if (*(short *)(puVar3 + 6) == 3) {
        OffsetRect(&local_38,1,1);
        SetTextColor((HDC)*puVar3,puVar3[0x1b]);
        FUN_212f4297(puVar3,&local_38.left);
        SetBkMode((HDC)*puVar3,1);
        SetTextColor((HDC)*puVar3,puVar3[0xc]);
        OffsetRect(&local_38,-1,-1);
        FUN_212f4297(puVar3,&local_38.left);
      }
      if (*(short *)(puVar3 + 6) == 4) {
        SetTextColor((HDC)*puVar3,puVar3[0x1a]);
        FUN_212f4297(puVar3,&local_38.left);
        SetBkMode((HDC)*puVar3,1);
        OffsetRect(&local_38,2,2);
        SetTextColor((HDC)*puVar3,puVar3[0x1b]);
        FUN_212f4297(puVar3,&local_38.left);
        SetTextColor((HDC)*puVar3,puVar3[0xc]);
        OffsetRect(&local_38,-1,-1);
        FUN_212f4297(puVar3,&local_38.left);
      }
      if (*(short *)(puVar3 + 6) == 1) {
        SetTextColor((HDC)*puVar3,puVar3[0x1b]);
        FUN_212f4297(puVar3,&local_38.left);
        SetBkMode((HDC)*puVar3,1);
        SetTextColor((HDC)*puVar3,puVar3[0xc]);
        OffsetRect(&local_38,1,1);
        FUN_212f4297(puVar3,&local_38.left);
      }
      if (*(short *)(puVar3 + 6) == 2) {
        SetTextColor((HDC)*puVar3,puVar3[0x1b]);
        FUN_212f4297(puVar3,&local_38.left);
        SetBkMode((HDC)*puVar3,1);
        OffsetRect(&local_38,2,2);
        SetTextColor((HDC)*puVar3,puVar3[0x1a]);
        FUN_212f4297(puVar3,&local_38.left);
        SetTextColor((HDC)*puVar3,puVar3[0xc]);
        OffsetRect(&local_38,-1,-1);
        FUN_212f4297(puVar3,&local_38.left);
      }
    }
    SetBkMode((HDC)*puVar3,(int)local_14);
  }
  if (local_18 != (HGDIOBJ)0x0) {
    SelectObject((HDC)*puVar3,local_18);
  }
  SelectClipRgn((HDC)*puVar3,local_28);
  if (local_1c != 0) {
    DeleteObject((HGDIOBJ)puVar3[0x17]);
  }
  return;
}



void FUN_212f3fd7(undefined4 *param_1,RECT *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  tagSIZE *ptVar4;
  tagRECT local_1c;
  tagSIZE local_c;
  
  CopyRect(&local_1c,param_2);
  pbVar1 = (byte *)param_1[1];
  if (pbVar1 == (byte *)0x0) {
    local_c.cx = 0;
    iVar2 = 0;
  }
  else if (param_1[7] == 0) {
    if ((*(short *)(param_1 + 0xb) == 3) || (*(short *)(param_1 + 0xb) == 0)) {
      ptVar4 = &local_c;
      uVar3 = FUN_2130a465(pbVar1);
      FUN_212f3a67((HDC)*param_1,(uint *)param_1[1],uVar3,ptVar4);
      iVar2 = local_c.cx;
      local_c.cx = local_c.cy;
    }
    else {
      ptVar4 = &local_c;
      uVar3 = FUN_2130a465(pbVar1);
      FUN_212f3a67((HDC)*param_1,(uint *)param_1[1],uVar3,ptVar4);
      iVar2 = local_c.cy;
    }
  }
  else {
    FUN_212f402f(param_1,&local_1c.left,1);
    local_c.cx = local_1c.bottom - local_1c.top;
    iVar2 = local_1c.right - local_1c.left;
  }
  FUN_212f41ff(&param_2->left,iVar2,local_c.cx,*(undefined2 *)(param_1 + 8));
  return;
}



int FUN_212f402f(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  COLORREF color;
  HPEN ho;
  int iVar6;
  int iVar7;
  tagPOINT tStack_40;
  tagSIZE local_38;
  HDC local_30;
  int iStack_2c;
  int *local_28;
  int local_24;
  int local_20;
  HDC local_1c;
  int iStack_18;
  HDC local_14;
  int iStack_10;
  int local_c;
  HDC local_8;
  
  piVar4 = param_2;
  puVar3 = param_1;
  local_20 = 0;
  local_30 = (HDC)param_1[1];
  sVar2 = *(short *)(param_1 + 0xb);
  if (sVar2 == 0) {
    local_c = param_2[1];
  }
  else if (sVar2 == 1) {
    param_1 = (undefined4 *)*param_2;
  }
  else if (sVar2 == 3) {
    local_c = param_2[3];
  }
  else {
    param_1 = (undefined4 *)param_2[2];
  }
  iVar7 = local_c;
  local_8 = local_30;
  if ((sVar2 == 3) || (sVar2 == 0)) {
    local_24 = param_2[2] - *param_2;
  }
  else {
    local_24 = param_2[3] - param_2[1];
  }
  do {
    local_1c = (HDC)0x0;
    param_2 = (int *)0x0;
    local_14 = local_8;
    while (cVar5 = (char)local_8->unused, cVar5 != '\0') {
      piVar1 = local_28;
      if (cVar5 == ' ') {
        do {
          local_8 = (HDC)CharNextA((LPCSTR)local_8);
          param_2 = (int *)((int)param_2 + 1);
        } while ((char)local_8->unused == ' ');
        cVar5 = (char)local_8->unused;
        piVar1 = param_2;
        local_1c = local_8;
        if (cVar5 == '\0') goto LAB_212f4102;
      }
      local_28 = piVar1;
      if ((cVar5 == '\r') || (cVar5 == '\n')) {
        local_1c = local_8;
        local_8 = (HDC)CharNextA((LPCSTR)local_8);
        cVar5 = (char)local_8->unused;
        if ((cVar5 == '\r') || (piVar1 = (int *)((int)param_2 + 1), cVar5 == '\n')) {
          local_8 = (HDC)CharNextA((LPCSTR)local_8);
          piVar1 = (int *)((int)param_2 + 2);
        }
        goto LAB_212f4102;
      }
      piVar1 = (int *)((int)param_2 + 1);
      FUN_212f3a67((HDC)*puVar3,(uint *)local_14,(uint)piVar1,&local_38);
      if (((local_24 < local_38.cx) && (0 < local_24)) && (1 < (int)piVar1)) {
        if (local_1c != (HDC)0x0) {
          param_2 = local_28;
          local_8 = local_1c;
        }
        break;
      }
      local_8 = (HDC)CharNextA((LPCSTR)local_8);
      param_2 = piVar1;
    }
    local_1c = local_8;
    piVar1 = param_2;
LAB_212f4102:
    param_2 = piVar1;
    FUN_212f3a67((HDC)*puVar3,(uint *)local_14,(uint)param_2,&local_38);
    iStack_18 = local_38.cx;
    iStack_10 = local_38.cy;
    if (local_38.cy == 0) {
      GetTextExtentPoint32A((HDC)*puVar3,"Ty",2,&local_38);
    }
    sVar2 = *(short *)(puVar3 + 8);
    if (-1 < sVar2) {
      if (sVar2 < 3) {
        sVar2 = *(short *)(puVar3 + 0xb);
        if (sVar2 == 0) {
          param_1 = (undefined4 *)*piVar4;
        }
        else if (sVar2 == 1) {
          iVar7 = piVar4[3];
          local_c = iVar7;
        }
        else if (sVar2 == 3) {
          param_1 = (undefined4 *)piVar4[2];
        }
        else {
          iVar7 = piVar4[1];
          local_c = iVar7;
        }
      }
      else if (sVar2 < 6) {
        sVar2 = *(short *)(puVar3 + 0xb);
        if (sVar2 == 0) {
          param_1 = (undefined4 *)(piVar4[2] - local_38.cx);
        }
        else if (sVar2 == 1) {
          iVar7 = piVar4[1];
          iVar6 = local_38.cx;
LAB_212ff17b:
          iVar7 = iVar7 + iVar6;
          local_c = iVar7;
        }
        else if (sVar2 == 3) {
          param_1 = (undefined4 *)(local_38.cx + *piVar4);
        }
        else {
          iVar7 = piVar4[3] - local_38.cx;
          local_c = iVar7;
        }
      }
      else if (sVar2 < 9) {
        sVar2 = *(short *)(puVar3 + 0xb);
        if (sVar2 == 0) {
          param_1 = (undefined4 *)((local_38.cx / -2 - (piVar4[2] - *piVar4) / 2) + piVar4[2]);
          iVar7 = local_c;
        }
        else {
          if (sVar2 == 1) {
            iStack_2c = (piVar4[3] - piVar4[1]) / 2;
            iVar7 = local_38.cx / 2;
            iVar6 = piVar4[1] + iStack_2c;
            goto LAB_212ff17b;
          }
          if (sVar2 == 3) {
            iStack_2c = (piVar4[2] - *piVar4) / 2;
            param_1 = (undefined4 *)(local_38.cx / 2 + *piVar4 + iStack_2c);
          }
          else {
            iVar7 = (local_38.cx / -2 - (piVar4[3] - piVar4[1]) / 2) + piVar4[3];
            local_c = iVar7;
          }
        }
      }
    }
    iStack_18 = local_38.cx;
    iStack_10 = local_38.cy;
    if (param_3 == 0) {
      if (puVar3[0x1e] == 0) {
        TextOutA((HDC)*puVar3,(int)param_1,iVar7,(LPCSTR)local_14,(int)local_1c - (int)local_14);
      }
      else {
        local_20 = FUN_212f42ca(puVar3,(int)param_1,iVar7,local_14,(int)param_2,&tStack_40);
      }
    }
    sVar2 = *(short *)(puVar3 + 0xb);
    iVar6 = iStack_10;
    if (sVar2 == 0) {
LAB_212f41ad:
      iVar7 = iVar7 + iVar6;
      local_c = iVar7;
    }
    else if (sVar2 == 1) {
      param_1 = (undefined4 *)((int)param_1 + iStack_10);
    }
    else {
      if (sVar2 == 3) {
        iVar6 = -iStack_10;
        goto LAB_212f41ad;
      }
      param_1 = (undefined4 *)((int)param_1 - iStack_10);
    }
    if ((char)local_8->unused == '\0') {
      if (param_3 == 0) {
        if (local_20 != 0) {
          color = GetTextColor((HDC)*puVar3);
          ho = CreatePen(0,1,color);
          FUN_21306212((HDC)*puVar3,ho,(LPCSTR)local_30,(int)*(short *)(puVar3 + 0xb),tStack_40.x,
                       tStack_40.y,local_20);
          DeleteObject(ho);
        }
        iVar7 = 0;
      }
      else {
        sVar2 = *(short *)(puVar3 + 0xb);
        if (sVar2 == 0) {
          piVar4[3] = iVar7;
          iVar7 = iVar7 - piVar4[1];
          if (iVar7 == iStack_10) {
            piVar4[2] = iStack_18 + *piVar4;
          }
        }
        else if (sVar2 == 1) {
          piVar4[2] = (int)param_1;
          iVar7 = (int)param_1 - *piVar4;
          if (iVar7 == iStack_10) {
            piVar4[1] = piVar4[3] - iStack_18;
          }
        }
        else if (sVar2 == 3) {
          piVar4[1] = iVar7;
          iVar7 = piVar4[3] - iVar7;
          if (iVar7 == iStack_10) {
            *piVar4 = piVar4[2] - iStack_18;
          }
        }
        else {
          iVar7 = piVar4[2] - (int)param_1;
          *piVar4 = (int)param_1;
          if (iVar7 == iStack_10) {
            piVar4[3] = piVar4[1] + iStack_18;
          }
        }
      }
      return iVar7;
    }
  } while( true );
}



int FUN_212f40fc(void)

{
  short sVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  LPSTR pCVar6;
  COLORREF color;
  HPEN pHVar7;
  int unaff_EBX;
  int iVar8;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
code_r0x212f40fc:
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -4);
LAB_212f4102:
  do {
    FUN_212f3a67((HDC)*unaff_EDI,*(uint **)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc),
                 (LPSIZE)(unaff_EBP + -0x34));
    iVar5 = *(int *)(unaff_EBP + -0x34);
    *(int *)(unaff_EBP + -0x14) = iVar5;
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x30);
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      GetTextExtentPoint32A((HDC)*unaff_EDI,"Ty",2,(LPSIZE)(unaff_EBP + -0x34));
      iVar5 = *(int *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -0xc) = *(undefined4 *)(unaff_EBP + -0x30);
    }
    sVar1 = *(short *)(unaff_EDI + 8);
    if (-1 < sVar1) {
      if (sVar1 < 3) {
        sVar1 = *(short *)(unaff_EDI + 0xb);
        if (sVar1 == 0) {
          iVar5 = *unaff_ESI;
LAB_212ff1a3:
          *(int *)(unaff_EBP + 8) = iVar5;
        }
        else {
          if (sVar1 == 1) {
            unaff_EBX = unaff_ESI[3];
          }
          else {
            if (sVar1 == 3) {
              iVar5 = unaff_ESI[2];
              goto LAB_212ff1a3;
            }
            unaff_EBX = unaff_ESI[1];
          }
LAB_212ff123:
          *(int *)(unaff_EBP + -8) = unaff_EBX;
        }
      }
      else if (sVar1 < 6) {
        sVar1 = *(short *)(unaff_EDI + 0xb);
        if (sVar1 == 0) {
          iVar5 = unaff_ESI[2] - iVar5;
          goto LAB_212ff1a3;
        }
        if (sVar1 == 1) {
          iVar8 = unaff_ESI[1];
          goto LAB_212ff17b;
        }
        if (sVar1 != 3) {
          unaff_EBX = unaff_ESI[3] - iVar5;
          goto LAB_212ff123;
        }
        iVar5 = iVar5 + *unaff_ESI;
LAB_212ff152:
        *(int *)(unaff_EBP + 8) = iVar5;
      }
      else if (sVar1 < 9) {
        sVar1 = *(short *)(unaff_EDI + 0xb);
        if (sVar1 != 0) {
          if (sVar1 != 1) {
            if (sVar1 == 3) {
              iVar8 = *unaff_ESI;
              iVar2 = unaff_ESI[2];
              *(int *)(unaff_EBP + 8) = iVar8;
              *(int *)(unaff_EBP + -0x28) = (iVar2 - iVar8) / 2;
              iVar5 = iVar5 / 2 + *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x28);
              goto LAB_212ff152;
            }
            *(int *)(unaff_EBP + -8) = (unaff_ESI[3] - unaff_ESI[1]) / 2;
            unaff_EBX = (iVar5 / -2 - *(int *)(unaff_EBP + -8)) + unaff_ESI[3];
            goto LAB_212ff123;
          }
          iVar5 = unaff_ESI[1];
          *(int *)(unaff_EBP + -0x28) = (unaff_ESI[3] - iVar5) / 2;
          iVar8 = *(int *)(unaff_EBP + -0x34) / 2;
          iVar5 = iVar5 + *(int *)(unaff_EBP + -0x28);
LAB_212ff17b:
          unaff_EBX = iVar8 + iVar5;
          goto LAB_212ff123;
        }
        unaff_EBX = *(int *)(unaff_EBP + -8);
        *(int *)(unaff_EBP + 8) = (iVar5 / -2 - (unaff_ESI[2] - *unaff_ESI) / 2) + unaff_ESI[2];
      }
    }
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      if (unaff_EDI[0x1e] == 0) {
        TextOutA((HDC)*unaff_EDI,*(int *)(unaff_EBP + 8),unaff_EBX,*(LPCSTR *)(unaff_EBP + -0x10),
                 *(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x10));
      }
      else {
        iVar5 = FUN_212f42ca(unaff_EDI,*(int *)(unaff_EBP + 8),unaff_EBX,*(HDC *)(unaff_EBP + -0x10)
                             ,*(int *)(unaff_EBP + 0xc),(LPPOINT)(unaff_EBP + -0x3c));
        *(int *)(unaff_EBP + -0x1c) = iVar5;
      }
    }
    sVar1 = *(short *)(unaff_EDI + 0xb);
    if (sVar1 == 0) {
      iVar5 = *(int *)(unaff_EBP + -0xc);
LAB_212f41ad:
      unaff_EBX = unaff_EBX + iVar5;
      *(int *)(unaff_EBP + -8) = unaff_EBX;
    }
    else if (sVar1 == 1) {
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0xc);
    }
    else {
      if (sVar1 == 3) {
        iVar5 = -*(int *)(unaff_EBP + -0xc);
        goto LAB_212f41ad;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0xc);
    }
    if (**(char **)(unaff_EBP + -4) == '\0') {
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          color = GetTextColor((HDC)*unaff_EDI);
          pHVar7 = CreatePen(0,1,color);
          *(HPEN *)(unaff_EBP + 0xc) = pHVar7;
          FUN_21306212((HDC)*unaff_EDI,pHVar7,*(LPCSTR *)(unaff_EBP + -0x2c),
                       (int)*(short *)(unaff_EDI + 0xb),*(int *)(unaff_EBP + -0x3c),
                       *(int *)(unaff_EBP + -0x38),*(int *)(unaff_EBP + -0x1c));
          DeleteObject(*(HGDIOBJ *)(unaff_EBP + 0xc));
        }
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          return 0;
        }
      }
      sVar1 = *(short *)(unaff_EDI + 0xb);
      if (sVar1 == 0) {
        unaff_ESI[3] = unaff_EBX;
        iVar5 = unaff_EBX - unaff_ESI[1];
        if (iVar5 == *(int *)(unaff_EBP + -0xc)) {
          unaff_ESI[2] = *(int *)(unaff_EBP + -0x14) + *unaff_ESI;
        }
      }
      else if (sVar1 == 1) {
        iVar5 = *(int *)(unaff_EBP + 8);
        unaff_ESI[2] = iVar5;
        iVar5 = iVar5 - *unaff_ESI;
        if (iVar5 == *(int *)(unaff_EBP + -0xc)) {
          unaff_ESI[1] = unaff_ESI[3] - *(int *)(unaff_EBP + -0x14);
        }
      }
      else if (sVar1 == 3) {
        unaff_ESI[1] = unaff_EBX;
        iVar5 = unaff_ESI[3] - unaff_EBX;
        if (iVar5 == *(int *)(unaff_EBP + -0xc)) {
          *unaff_ESI = unaff_ESI[2] - *(int *)(unaff_EBP + -0x14);
        }
      }
      else {
        iVar5 = unaff_ESI[2] - *(int *)(unaff_EBP + 8);
        *unaff_ESI = *(int *)(unaff_EBP + 8);
        if (iVar5 == *(int *)(unaff_EBP + -0xc)) {
          unaff_ESI[3] = unaff_ESI[1] + *(int *)(unaff_EBP + -0x14);
        }
      }
      return iVar5;
    }
    pcVar4 = *(char **)(unaff_EBP + -4);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(char **)(unaff_EBP + -0x10) = pcVar4;
    while( true ) {
      cVar3 = *pcVar4;
      if (cVar3 == '\0') goto code_r0x212f40fc;
      if (cVar3 == ' ') {
        do {
          pCVar6 = CharNextA(*(LPCSTR *)(unaff_EBP + -4));
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
          cVar3 = *pCVar6;
          *(LPSTR *)(unaff_EBP + -4) = pCVar6;
        } while (cVar3 == ' ');
        cVar3 = *pCVar6;
        if (cVar3 == '\0') {
          *(LPSTR *)(unaff_EBP + -0x18) = pCVar6;
          goto LAB_212f4102;
        }
        *(LPSTR *)(unaff_EBP + -0x18) = pCVar6;
        *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0xc);
      }
      if ((cVar3 == '\r') || (cVar3 == '\n')) break;
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      FUN_212f3a67((HDC)*unaff_EDI,*(uint **)(unaff_EBP + -0x10),*(uint *)(unaff_EBP + 0xc),
                   (LPSIZE)(unaff_EBP + -0x34));
      if (((*(int *)(unaff_EBP + -0x20) < *(int *)(unaff_EBP + -0x34)) &&
          (0 < *(int *)(unaff_EBP + -0x20))) && (1 < *(int *)(unaff_EBP + 0xc))) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + -1;
        }
        else {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -0x18);
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x24);
        }
        goto code_r0x212f40fc;
      }
      pcVar4 = CharNextA(*(LPCSTR *)(unaff_EBP + -4));
      *(char **)(unaff_EBP + -4) = pcVar4;
    }
    *(LPCSTR *)(unaff_EBP + -0x18) = *(LPCSTR *)(unaff_EBP + -4);
    pCVar6 = CharNextA(*(LPCSTR *)(unaff_EBP + -4));
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    *(LPSTR *)(unaff_EBP + -4) = pCVar6;
    if ((*pCVar6 == '\r') || (*pCVar6 == '\n')) {
      pCVar6 = CharNextA(*(LPCSTR *)(unaff_EBP + -4));
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      *(LPSTR *)(unaff_EBP + -4) = pCVar6;
    }
  } while( true );
}



void FUN_212f41ff(int *param_1,int param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  
  switch(param_4) {
  case 0:
    param_1[2] = *param_1 + -1 + param_2;
    goto LAB_212ff30b;
  case 1:
    iVar1 = ((param_1[3] - param_1[1]) / 2 - param_3 / 2) + param_1[1];
    param_1[1] = iVar1;
    param_1[2] = *param_1 + -1 + param_2;
    goto LAB_212f425f;
  case 2:
    param_1[1] = (param_1[3] - param_3) + 1;
    param_1[2] = *param_1 + -1 + param_2;
    break;
  case 3:
    *param_1 = (param_1[2] - param_2) + 1;
LAB_212ff30b:
    param_1[3] = param_1[1] + -1 + param_3;
    break;
  case 4:
    *param_1 = (param_1[2] - param_2) + 1;
    iVar1 = ((param_1[3] - param_1[1]) / 2 - param_3 / 2) + param_1[1];
    param_1[1] = iVar1;
    goto LAB_212f425f;
  case 5:
    param_1[1] = (param_1[3] - param_3) + 1;
    *param_1 = (param_1[2] - param_2) + 1;
    break;
  case 6:
    iVar1 = ((param_1[2] - *param_1) / 2 - param_2 / 2) + *param_1;
    *param_1 = iVar1;
    param_1[2] = param_2 + -1 + iVar1;
    iVar1 = param_1[1] + -1 + param_3;
    goto LAB_212f4263;
  case 7:
    iVar1 = ((param_1[2] - *param_1) / 2 - param_2 / 2) + *param_1;
    *param_1 = iVar1;
    param_1[2] = param_2 + -1 + iVar1;
    iVar1 = ((param_1[3] - param_1[1]) / 2 - param_3 / 2) + param_1[1];
    param_1[1] = iVar1;
LAB_212f425f:
    iVar1 = param_3 + -1 + iVar1;
LAB_212f4263:
    param_1[3] = iVar1;
    break;
  case 8:
    iVar1 = ((param_1[2] - *param_1) / 2 - param_2 / 2) + *param_1;
    *param_1 = iVar1;
    param_1[2] = param_2 + -1 + iVar1;
    param_1[1] = (param_1[3] - param_3) + 1;
  }
  return;
}



byte FUN_212f426d(undefined2 param_1,int param_2)

{
  byte bVar1;
  
  switch(param_1) {
  case 0:
    bVar1 = FUN_212f4287();
    return bVar1;
  case 1:
    bVar1 = 4;
    break;
  case 2:
    bVar1 = 8;
    break;
  case 3:
    bVar1 = 2;
    break;
  case 4:
    bVar1 = 6;
    break;
  case 5:
    bVar1 = 10;
    break;
  case 6:
    bVar1 = 1;
    break;
  case 7:
    bVar1 = 5;
    break;
  case 8:
    bVar1 = 9;
    break;
  default:
    bVar1 = FUN_212f4287();
    return bVar1;
  }
  if (param_2 == 0) {
    bVar1 = bVar1 | 0x20;
  }
  else {
    bVar1 = bVar1 | 0x10;
  }
  return bVar1;
}



byte FUN_212f4287(void)

{
  byte in_AL;
  byte bVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    bVar1 = in_AL | 0x20;
  }
  else {
    bVar1 = in_AL | 0x10;
  }
  return bVar1;
}



void FUN_212f4297(undefined4 *param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  HPEN ho;
  uint uVar4;
  int y;
  char *pcVar5;
  int iVar6;
  tagPOINT local_10;
  COLORREF local_8;
  
  puVar3 = param_1;
  local_8 = GetTextColor((HDC)*param_1);
  if (param_1[7] != 0) {
    FUN_212f402f(param_1,param_2,0);
    return;
  }
  sVar2 = *(short *)(param_1 + 0xb);
  param_1 = (undefined4 *)0x0;
  if (sVar2 == 1) {
    iVar6 = *param_2;
LAB_212fecc5:
    y = param_2[3];
  }
  else {
    if (sVar2 == 2) {
      iVar6 = param_2[2];
    }
    else {
      if (sVar2 == 3) {
        iVar6 = param_2[2];
        goto LAB_212fecc5;
      }
      iVar6 = *param_2;
    }
    y = param_2[1];
  }
  if (puVar3[0x1e] == 0) {
    uVar4 = 0xffffffff;
    pcVar5 = (char *)puVar3[1];
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    TextOutA((HDC)*puVar3,iVar6,y,(LPCSTR)puVar3[1],~uVar4 - 1);
  }
  else {
    param_1 = (undefined4 *)FUN_212f42ca(puVar3,iVar6,y,(HDC)puVar3[1],-1,&local_10);
  }
  if (param_1 != (undefined4 *)0x0) {
    if (puVar3[0x1c] == 0) {
      iVar6 = 0;
      uVar4 = local_8;
    }
    else {
      iVar6 = 2;
      uVar4 = -(uint)(puVar3[0xd] != 0x808080) & 0x808080;
    }
    ho = CreatePen(iVar6,1,uVar4);
    FUN_21306212((HDC)*puVar3,ho,(LPCSTR)puVar3[1],(int)*(short *)(puVar3 + 0xb),local_10.x,
                 local_10.y,(int)param_1);
    DeleteObject(ho);
  }
  return;
}



int FUN_212f42ca(undefined4 *param_1,int param_2,int param_3,HDC param_4,int param_5,LPPOINT param_6
                )

{
  undefined4 *puVar1;
  char cVar2;
  HGDIOBJ pvVar3;
  HDC pHVar4;
  HDC pHVar5;
  UINT iFirst;
  DWORD DVar6;
  int c;
  LOGFONTA local_68;
  tagSIZE local_2c;
  HFONT local_24;
  HGDIOBJ local_20;
  UINT local_1c;
  int local_18;
  UINT local_14;
  uint local_10;
  int local_c;
  HDC local_8;
  
  pHVar4 = param_4;
  puVar1 = param_1;
  local_8 = param_4;
  local_18 = 0;
  param_4 = (HDC)0x0;
  local_c = 0;
  local_14 = GetOutlineTextMetricsA((HDC)*param_1,0,(LPOUTLINETEXTMETRICA)0x0);
  local_10 = 0;
  pvVar3 = GetStockObject(0xd);
  pvVar3 = SelectObject((HDC)*param_1,pvVar3);
  SelectObject((HDC)*param_1,pvVar3);
  GetObjectA(pvVar3,0x3c,&local_68);
  if ((local_68.lfItalic != '\0') && (local_14 == 0)) {
    local_c = 1;
    param_4 = CreateCompatibleDC((HDC)*param_1);
    local_68.lfItalic = '\0';
    local_24 = CreateFontIndirectA(&local_68);
    local_20 = SelectObject(param_4,local_24);
  }
  if (param_5 == -1) {
    param_5 = FUN_2130a465((byte *)pHVar4);
  }
  pHVar5 = param_4;
  if (local_c == 0) {
    pHVar5 = (HDC)*param_1;
  }
  local_1c = SetTextAlign(pHVar5,1);
  MoveToEx((HDC)*param_1,param_2,param_3,(LPPOINT)0x0);
  if (local_c != 0) {
    MoveToEx(param_4,param_2,param_3,(LPPOINT)0x0);
  }
  param_1 = (undefined4 *)param_2;
  cVar2 = (char)pHVar4->unused;
  if (cVar2 != '\0') {
    while (param_5 != 0) {
      if (cVar2 == '&') {
        if (puVar1[0x1c] == 0) {
          local_14 = (int)pHVar4 - (int)local_8;
          TextOutA((HDC)*puVar1,param_2,param_3,(LPCSTR)local_8,local_14);
          if (local_c != 0) {
            TextOutA(param_4,param_2,param_3,(LPCSTR)local_8,local_14);
          }
        }
        else if (pHVar4 != local_8) {
          DVar6 = GetSysColor(0x11);
          SetTextColor((HDC)*puVar1,DVar6);
          local_14 = (int)pHVar4 - (int)local_8;
          TextOutA((HDC)*puVar1,(int)param_1,param_3,(LPCSTR)local_8,local_14);
          if (local_c == 0) {
LAB_212fee59:
            pHVar5 = (HDC)*puVar1;
          }
          else {
            DVar6 = GetSysColor(0x11);
            SetTextColor(param_4,DVar6);
            TextOutA(param_4,(int)param_1,param_3,(LPCSTR)local_8,local_14);
            pHVar5 = param_4;
            if (local_c == 0) goto LAB_212fee59;
          }
          FUN_212f3a67(pHVar5,(uint *)local_8,local_10,&local_2c);
          param_1 = (undefined4 *)((int)param_1 + local_2c.cx);
        }
        pHVar4 = (HDC)CharNextA((LPCSTR)pHVar4);
        param_5 = param_5 + -1;
        local_10 = 0;
        cVar2 = (char)pHVar4->unused;
        local_8 = pHVar4;
        if ((cVar2 == '\0') || (param_5 == 0)) break;
        if (cVar2 != '&') {
          pHVar5 = param_4;
          if (local_c == 0) {
            pHVar5 = (HDC)*puVar1;
          }
          GetCurrentPositionEx(pHVar5,param_6);
          if (puVar1[0x1c] != 0) {
            param_6->x = (LONG)param_1;
          }
          if (local_c == 0) {
LAB_212feedd:
            pHVar5 = (HDC)*puVar1;
          }
          else {
            param_2 = param_6->x;
            param_3 = param_6->y;
            pHVar5 = param_4;
            if (local_c == 0) goto LAB_212feedd;
          }
          iFirst = (UINT)(char)pHVar4->unused;
          GetCharWidthA(pHVar5,iFirst,iFirst,&local_18);
        }
      }
      pHVar4 = (HDC)CharNextA((LPCSTR)pHVar4);
      param_5 = param_5 + -1;
      local_10 = local_10 + 1;
      cVar2 = (char)pHVar4->unused;
      if (cVar2 == '\0') break;
    }
  }
  if (puVar1[0x1c] == 0) {
    c = (int)pHVar4 - (int)local_8;
    pHVar4 = (HDC)*puVar1;
LAB_212f43b7:
    TextOutA(pHVar4,param_2,param_3,(LPCSTR)local_8,c);
    pHVar4 = param_4;
    if (local_c != 0) goto LAB_212f43c5;
  }
  else {
    DVar6 = GetSysColor(0x11);
    SetTextColor((HDC)*puVar1,DVar6);
    c = (int)pHVar4 - (int)local_8;
    TextOutA((HDC)*puVar1,(int)param_1,param_3,(LPCSTR)local_8,c);
    if (local_c != 0) {
      DVar6 = GetSysColor(0x11);
      SetTextColor(param_4,DVar6);
      pHVar4 = param_4;
      param_2 = (int)param_1;
      goto LAB_212f43b7;
    }
  }
  pHVar4 = (HDC)*puVar1;
LAB_212f43c5:
  SetTextAlign(pHVar4,local_1c);
  if (local_c != 0) {
    SelectObject(param_4,local_20);
    DeleteDC(param_4);
    DeleteObject(local_24);
  }
  return local_18;
}



void __fastcall FUN_212f43e3(int param_1)

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



undefined4 FUN_212f441a(int param_1)

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



void __fastcall FUN_212f446a(int param_1)

{
  undefined4 *puVar1;
  LPVOID lpMem;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    lpMem = (LPVOID)puVar2[2];
    puVar2 = puVar1;
    if (lpMem != (LPVOID)0x0) {
      FUN_212f7d1a((int)lpMem);
      HeapFree(DAT_21314020,0,lpMem);
    }
  }
  FUN_212f1ee0((undefined4 *)(param_1 + 4));
  return;
}



void __thiscall FUN_212f44a8(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 * 0x20 + *(int *)((int)this + 0x160));
  if ((BSTR)*puVar2 != (BSTR)0x0) {
    SysFreeString((BSTR)*puVar2);
    *puVar2 = 0;
  }
  piVar1 = (int *)puVar2[1];
  if (piVar1 != (int *)0x0) {
    puVar2[1] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



int FUN_212f4f4a(int param_1,int param_2)

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



undefined4 FUN_212f4f78(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar3 = *(int **)((&PTR_PTR_21314124)[*(int *)(param_1 + -8) * 2] + 0x24);
  if ((piVar3 == (int *)0x0) || (*param_2 != *piVar3)) {
LAB_212f4fc2:
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
      if (bVar6) goto LAB_212f4fa6;
    }
    if (*param_2 == -0x640443fe) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar5 = (char *)&DAT_212f5500;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*param_2 == *pcVar5;
        param_2 = (int *)((int)param_2 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        piVar3 = (int *)(param_1 + 0x10);
        goto LAB_212f4fac;
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
    if (!bVar6) goto LAB_212f4fc2;
LAB_212f4fa6:
    piVar3 = (int *)(param_1 + 4);
LAB_212f4fac:
    *param_3 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_212f5013(int param_1,int *param_2)

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
    goto LAB_212f503c;
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
    goto LAB_212f503c;
  }
  lpMem = *(uint **)(param_1 + 4);
  piVar2 = (int *)*lpMem;
  if (piVar2 == param_2) {
LAB_2130094a:
    uVar3 = lpMem[1];
  }
  else {
    if ((int *)lpMem[1] != param_2) {
      return 0x80040200;
    }
    if (piVar2 == param_2) goto LAB_2130094a;
    uVar3 = ~-(uint)((int *)lpMem[1] != param_2) & (uint)piVar2;
  }
  if (uVar3 == 0) {
    return 0x80040200;
  }
  HeapFree(DAT_21314020,0,lpMem);
  *(uint *)(param_1 + 4) = uVar3;
LAB_212f503c:
  iVar1 = *param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  (**(code **)(iVar1 + 8))(param_2);
  return 0;
}



void __fastcall FUN_212f507d(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x38) + 0xc))(param_1 + 0x38,0);
  FUN_212f5095(param_1);
  return;
}



void __fastcall FUN_212f5095(int param_1)

{
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0xa0));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



undefined4 * __thiscall FUN_212f50ac(void *this,byte param_1)

{
  FUN_212f50d4((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_212f50d4(undefined4 *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = (int *)param_1[0x53];
  *param_1 = &PTR_FUN_212f4820;
  param_1[7] = &PTR_LAB_212f4808;
  param_1[0xe] = &PTR_LAB_212f47a8;
  param_1[0xf] = &PTR_LAB_212f4788;
  param_1[0x10] = &PTR_LAB_212f4758;
  param_1[0x11] = &PTR_LAB_212f4730;
  param_1[0x12] = &PTR_LAB_212f46f0;
  param_1[0x13] = &PTR_LAB_212f46d0;
  param_1[0x14] = &PTR_LAB_212f46a8;
  param_1[0x15] = &PTR_LAB_212f4680;
  param_1[0x16] = &PTR_LAB_212f4670;
  param_1[0x17] = &PTR_LAB_212f4660;
  param_1[0x18] = &PTR_LAB_212f4648;
  param_1[0x19] = &PTR_LAB_212f4630;
  param_1[0x1a] = &PTR_LAB_212f4620;
  param_1[0x30] = &PTR_LAB_212f4600;
  param_1[0x31] = &PTR_LAB_212f4508;
  param_1[0x32] = &PTR_LAB_212f44f8;
  param_1[0x33] = &PTR_LAB_212f44e0;
  if (piVar1 != (int *)0x0) {
    param_1[0x53] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x54];
  if (piVar1 != (int *)0x0) {
    param_1[0x54] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((HACCEL)param_1[0x55] != (HACCEL)0x0) {
    DestroyAcceleratorTable((HACCEL)param_1[0x55]);
  }
  pvVar2 = (LPVOID)param_1[0x56];
  if ((pvVar2 != (LPVOID)0x0) && (pvVar2 != (LPVOID)0x0)) {
    FUN_212f5288((int)pvVar2);
    HeapFree(DAT_21314020,0,pvVar2);
  }
  puVar4 = *(undefined4 **)param_1[0x57];
  while (puVar4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar4;
    pvVar2 = (LPVOID)puVar4[2];
    puVar4 = puVar3;
    if (pvVar2 != (LPVOID)0x0) {
      FUN_212f446a((int)pvVar2);
      HeapFree(DAT_21314020,0,pvVar2);
    }
  }
  iVar5 = 0;
  FUN_212f1ee0((undefined4 *)param_1[0x57]);
  puVar4 = (undefined4 *)param_1[0x57];
  if (puVar4 != (undefined4 *)0x0) {
    FUN_212f1ee0(puVar4);
    HeapFree(DAT_21314020,0,puVar4);
  }
  SysFreeString((BSTR)param_1[0x137]);
  if (param_1[0x58] != 0) {
    if (0 < *(short *)(param_1 + 0x37)) {
      do {
        FUN_212f44a8(param_1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)(param_1 + 0x37));
    }
    HeapFree(DAT_21314020,0,(LPVOID)param_1[0x58]);
  }
  FUN_212f52eb(param_1 + 0x40);
  FUN_212f5350(param_1);
  return;
}



void __fastcall FUN_212f5288(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 0x20) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x20));
  }
  if (*(HGDIOBJ *)(param_1 + 0x24) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x24));
  }
  if (*(HGDIOBJ *)(param_1 + 0x28) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x28));
  }
  if (*(HGDIOBJ *)(param_1 + 0x2c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x2c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x30) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x30));
  }
  if (*(HGDIOBJ *)(param_1 + 0x34) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x34));
  }
  if (*(HGDIOBJ *)(param_1 + 0x38) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x38));
  }
  if (*(HGDIOBJ *)(param_1 + 0x3c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x3c));
  }
  return;
}



void __fastcall FUN_212f52eb(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_212f4bf8;
  FUN_212f5341((int)param_1);
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
    HeapFree(DAT_21314020,0,(LPVOID)param_1[0xe]);
    param_1[0xe] = 0;
  }
  return;
}



void __fastcall FUN_212f5341(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    while (0 < *(int *)(param_1 + 0x40)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + -4 + *(int *)(param_1 + 0x40) * 4);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
    HeapFree(DAT_21314020,0,*(LPVOID *)(param_1 + 0x3c));
  }
  return;
}



void __fastcall FUN_212f5350(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_212f4ab0;
  param_1[7] = &PTR_LAB_212f4a98;
  param_1[0xe] = &PTR_LAB_212f4a38;
  param_1[0xf] = &PTR_LAB_212f4a18;
  param_1[0x10] = &PTR_LAB_212f49e8;
  param_1[0x11] = &PTR_LAB_212f49c0;
  param_1[0x12] = &PTR_LAB_212f4980;
  param_1[0x13] = &PTR_LAB_212f4960;
  param_1[0x14] = &PTR_LAB_212f4938;
  param_1[0x15] = &PTR_LAB_212f4910;
  param_1[0x16] = &PTR_LAB_212f4900;
  param_1[0x17] = &PTR_LAB_212f48f0;
  param_1[0x18] = &PTR_LAB_212f48d8;
  param_1[0x19] = &PTR_LAB_212f48c0;
  param_1[0x1a] = &PTR_LAB_212f48b0;
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
  FUN_212f5457(param_1);
  return;
}



void __fastcall FUN_212f5457(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_212f4b50;
  param_1[7] = &PTR_LAB_212f4b38;
  FUN_212f5480(param_1 + 0xb);
  FUN_212f5480(param_1 + 8);
  FUN_212f549a(param_1);
  return;
}



void __fastcall FUN_212f5480(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)param_1 + 10);
  *param_1 = &PTR_LAB_212f4b88;
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
      HeapFree(DAT_21314020,0,(LPVOID)param_1[1]);
    }
  }
  return;
}



void __fastcall FUN_212f549a(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_212f4ba8;
  if (*(char *)(param_1 + 6) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    puVar2 = (&PTR_PTR_21314124)[param_1[5] * 2];
    piVar1 = (int *)(puVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(puVar2 + 0x2c);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((&PTR_PTR_21314124)[param_1[5] * 2] + 0x2c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  }
  *param_1 = &PTR_FUN_212f4be0;
  InterlockedDecrement(&DAT_21314158);
  return;
}



uint __thiscall FUN_212f5510(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  *param_1 = 0;
  uVar2 = FUN_212f6a8b(this,0xfffffd41,9,(LONG *)&param_1);
  if (uVar2 != 0) {
    (**(code **)*param_1)(param_1,&DAT_212f7380,piVar1);
    (**(code **)(*param_1 + 8))(param_1);
    uVar2 = (uint)(*piVar1 != 0);
  }
  return uVar2;
}



int FUN_212f5551(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  if (param_4 == (undefined4 *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if (DAT_2131457c == 0) {
      DAT_21314580 = FUN_212f9583();
      DAT_2131457c = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if (DAT_21314580 == 0) {
      iVar1 = -0x7ffbfeee;
    }
    else {
      iVar1 = FUN_212f55ba(param_2,*(int *)(param_1 + 8),param_4,param_3);
    }
  }
  return iVar1;
}



int __cdecl FUN_212f55ba(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*(code **)((&PTR_PTR_21314124)[param_2 * 2] + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)((&PTR_PTR_21314124)[param_2 * 2] + 0x14))(), -1 < iVar2)) {
    if (*(code **)((&PTR_PTR_21314124)[param_2 * 2] + 0x10) == (code *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      piVar1 = (int *)(**(code **)((&PTR_PTR_21314124)[param_2 * 2] + 0x10))(param_1);
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



undefined4 * __thiscall FUN_212f5680(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0xc4);
  FUN_212f5862(this,param_1,0,-(uint)(this != (void *)0x0) & (uint)puVar2);
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_212f7130;
  *puVar2 = &PTR_LAB_212f7038;
  *(undefined ***)((int)this + 200) = &PTR_LAB_212f7028;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_212f7010;
  FUN_212f5a73((void *)((int)this + 0x100),this,0,1,&DAT_21314588,2,3,1);
  *(undefined ***)this = &PTR_FUN_212f4820;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_212f4808;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_212f47a8;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_212f4788;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_212f4758;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_212f4730;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_212f46f0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_212f46d0;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_212f46a8;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_212f4680;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_212f4670;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_212f4660;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_212f4648;
  *(undefined ***)((int)this + 100) = &PTR_LAB_212f4630;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_212f4620;
  *(undefined ***)((int)this + 0xc0) = &PTR_LAB_212f4600;
  *puVar2 = &PTR_LAB_212f4508;
  *(undefined ***)((int)this + 200) = &PTR_LAB_212f44f8;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_212f44e0;
  FUN_212f5aee(this,1);
  puVar2 = (undefined4 *)((int)this + 0xd4);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)((int)this + 0x172) = 0xffff;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined2 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x16c) = 1;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x4ac) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  iVar1 = FUN_212f1602(1);
  *(int *)((int)this + 0x4bc) = iVar1 * 10;
  *(undefined2 *)((int)this + 0x4c0) = 4;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined2 *)((int)this + 0x4a4) = 1;
  *(undefined2 *)((int)this + 0x4a6) = 7;
  *(undefined2 *)((int)this + 0x4a8) = 9;
  *(undefined2 *)((int)this + 0x4aa) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 1;
  *(undefined4 *)((int)this + 0x4d0) = 1;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  puVar2 = (undefined4 *)((int)this + 0x180);
  for (iVar1 = 0xc9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 100;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_212f5862(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_212f59bb(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_212f72d8;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_212f72b8;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_212f7288;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_212f7260;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_212f7220;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_212f7200;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_212f71d8;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_212f71b0;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_212f71a0;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_212f7190;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_212f7178;
  *(undefined ***)((int)this + 100) = &PTR_LAB_212f7160;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_212f7150;
  *(undefined ***)this = &PTR_FUN_212f4ab0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_212f4a98;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_212f4a38;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_212f4a18;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_212f49e8;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_212f49c0;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_212f4980;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_212f4960;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_212f4938;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_212f4910;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_212f4900;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_212f48f0;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_212f48d8;
  *(undefined ***)((int)this + 100) = &PTR_LAB_212f48c0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_212f48b0;
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
FUN_212f59bb(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_212f5a0b(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_212f7338;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_212f4b88;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_212f4b88;
  *(undefined1 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined ***)this = &PTR_FUN_212f4b50;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_212f4b38;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_212f5a0b(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_212f5a36(this,param_1,param_3);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x19) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = &PTR_FUN_212f4ba8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_212f5a36(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((int)this + 0xc);
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_212f7350;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_212f4be0;
  InterlockedIncrement(&DAT_21314158);
  return (undefined4 *)this;
}



void __thiscall
FUN_212f5a73(void *this,undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,uint param_7)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_5;
  *(undefined4 *)((int)this + 0x24) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_4;
  *(uint *)((int)this + 0x2c) =
       (((param_7 & 1) << 1 | param_3 & 1) << 1 | param_2 & 1) << 8 |
       *(uint *)((int)this + 0x2c) & 0xfffff800;
  *(undefined ***)this = &PTR_LAB_212f4bf8;
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



undefined4 __thiscall FUN_212f5aee(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x19) = param_1;
  return 0;
}



void __thiscall FUN_212f5afa(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  return;
}



int FUN_212f5b20(int param_1,uint *param_2,uint *param_3)

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
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    DAT_213145d0 = param_2[0xb];
    DAT_21314278 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  }
  if ((param_2[5] & 0x40) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 3;
  }
  piVar5 = (int *)param_2[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    puVar4 = (uint *)FUN_212f5c3c((void *)(param_1 + -0x38),param_2[3],param_3 + 4);
    if ((int)puVar4 < 0) {
      piVar5 = (int *)param_2[3];
      param_2 = puVar4;
      goto LAB_213001ea;
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
    puVar2 = (&PTR_PTR_21314124)[*(int *)(param_1 + -0x50) * 2];
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
LAB_213001ea:
  (**(code **)(*piVar5 + 8))(piVar5);
  return (int)param_2;
}



undefined4 __thiscall FUN_212f5c3c(void *this,undefined4 param_1,undefined4 *param_2)

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
    puVar4 = (undefined4 *)HeapAlloc(DAT_21314020,0,0x20);
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
      pvVar3 = HeapReAlloc(DAT_21314020,0,*(LPVOID *)((int)this + 4),iVar2 * 4 + 0x20);
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



void FUN_212f5c68(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7fffbffb;
  if (*(char *)((int)param_1 + 8) == '\0') {
    if (*(int *)((&PTR_PTR_21314124)[*(int *)((int)param_1 + -0xc) * 2] + 0x24) != 0) {
      iVar2 = (**(code **)*param_2)
                        (param_2,*(int *)((&PTR_PTR_21314124)[*(int *)((int)param_1 + -0xc) * 2] +
                                         0x24),&param_2);
    }
    if (-1 < iVar2) goto LAB_212f5ca5;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_212f4dd0,&param_2);
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_212f5500,&param_2);
  }
  if (iVar2 < 0) {
    return;
  }
LAB_212f5ca5:
  FUN_212f5c3c(param_1,param_2,param_3);
  return;
}



void FUN_212f5cb8(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_212f5ce4(param_2,param_3);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x4c) + 0x40))((int *)(param_1 + -0x4c),param_2,param_3);
  }
  return;
}



undefined4 FUN_212f5ce4(int *param_1,undefined4 param_2)

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
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentX_213145d4,local_20,param_2);
  local_10 = local_18;
  if (-1 < iVar1) {
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentY_213145e8,local_20,param_2);
    if (-1 < iVar1) {
      local_c = local_18;
      FUN_212f5d6a(&local_10,(int *)(local_8 + 0x88));
      return 0;
    }
  }
  *(undefined4 *)(local_8 + 0x88) = 100;
  *(undefined4 *)(local_8 + 0x8c) = 0x32;
  return 0;
}



void __cdecl FUN_212f5d6a(int *param_1,int *param_2)

{
  FUN_212f166c();
  *param_2 = (*param_1 * DAT_2131426c + 0x4f6) / 0x9ec;
  param_2[1] = (param_1[1] * DAT_21314270 + 0x4f6) / 0x9ec;
  return;
}



// WARNING: Type propagation algorithm not settling

undefined4 FUN_212f5dac(int *param_1,int *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  LPWSTR pWVar7;
  uint uVar8;
  uint uVar9;
  _union_2685 *p_Var10;
  uint *puVar11;
  LPSTR local_264 [31];
  byte local_1e8;
  LPSTR local_1e4 [31];
  byte local_168;
  CHAR local_164 [256];
  CHAR local_64 [32];
  void *local_44;
  int local_40;
  LPSTR local_3c;
  LPWSTR local_38;
  LPWSTR local_34;
  LPWSTR local_30;
  LPWSTR local_2c;
  LPCWSTR local_28;
  int local_24;
  BSTR local_20;
  undefined1 local_1c [16];
  uint *local_c;
  uint *local_8;
  
  local_1c._0_2_ = 3;
  local_1c._8_4_ = 0;
  (**(code **)(*param_2 + 0xc))(param_2,L"_Version",(_union_2683 *)local_1c,param_3);
  local_1c._8_4_ = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,L"_ExtentY",(_union_2683 *)local_1c,param_3);
  if (iVar3 < 0) {
    iVar3 = FUN_2130648f(0x1ef);
    param_1[0x23] = iVar3;
  }
  if (PTR_u_TabOrientation_213143c8 != (undefined *)0x0) {
    local_8 = &DAT_213143d8;
    do {
      puVar11 = local_8;
      local_1c._0_2_ = (undefined2)local_8[-1];
      local_1c._8_4_ = 0;
      iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_8[-4],(_union_2683 *)local_1c,param_3);
      puVar1 = local_8;
      uVar9 = *puVar11;
      if (iVar3 < 0) {
        p_Var10 = (_union_2685 *)(puVar11 + -2);
      }
      else {
        p_Var10 = &(((_union_2683 *)local_1c)->n2).n3;
      }
      local_8 = local_8 + 5;
      puVar11 = (uint *)(puVar1[-3] + 0xd4 + (int)param_1);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = p_Var10->lVal;
        p_Var10 = (_union_2685 *)(&p_Var10->lVal + 1);
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(BYTE *)puVar11 = p_Var10->bVal;
        p_Var10 = (_union_2685 *)((int)p_Var10 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
    } while (puVar1[1] != 0);
  }
  if (param_1[0x39] < 1) {
    iVar3 = FUN_212f1602(1);
    param_1[0x39] = iVar3 * 0x14;
  }
  local_1c._0_2_ = 0xd;
  local_1c._8_4_ = (undefined4 *)0x0;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,L"Font",(_union_2683 *)local_1c,param_3);
  if (-1 < iVar3) {
    iVar3 = (*(code *)**(undefined4 **)local_1c._8_4_)(local_1c._8_4_,&DAT_212f7380,param_1 + 0x54);
    VariantClear((VARIANTARG *)&((_union_2683 *)local_1c)->n2);
    if (-1 < iVar3) {
      *(undefined2 *)((int)param_1 + 0xf2) = 1;
    }
  }
  local_1c._0_2_ = 0xd;
  local_1c._8_4_ = (undefined4 *)0x0;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,L"MouseIcon",(_union_2683 *)local_1c,param_3);
  if (-1 < iVar3) {
    iVar3 = (*(code *)**(undefined4 **)local_1c._8_4_)(local_1c._8_4_,&DAT_212f7370,param_1 + 0x53);
    VariantClear((VARIANTARG *)&((_union_2683 *)local_1c)->n2);
    if (-1 < iVar3) {
      *(undefined2 *)(param_1 + 0x3d) = 1;
    }
  }
  param_1[0x5d] = (int)*(short *)((int)param_1 + 0xde);
  if ((LPVOID)param_1[0x58] != (LPVOID)0x0) {
    HeapFree(DAT_21314020,0,(LPVOID)param_1[0x58]);
  }
  pvVar4 = HeapAlloc(DAT_21314020,8,(int)(short)param_1[0x37] << 5);
  param_1[0x58] = (int)pvVar4;
  if (pvVar4 == (LPVOID)0x0) {
    uVar6 = (**(code **)(*param_1 + 0x30))(0x800a0007,7,7);
  }
  else {
    local_8 = (uint *)0x0;
    if (0 < (short)param_1[0x37]) {
      do {
        local_c = FUN_212f63cd(param_1,(int)local_8);
        SysFreeString((BSTR)*local_c);
        *local_c = 0;
        local_30 = FUN_212f1d12("TabCaption",(BSTR)0x0);
        FUN_212f1d78(&local_30,(short)local_8,(LPCSTR)0x0);
        local_1c._0_2_ = 8;
        local_1c._8_4_ = (LPCWSTR)0x0;
        iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_30,(_union_2683 *)local_1c,param_3);
        SysFreeString(local_30);
        if (iVar3 < 0) {
          FUN_212fad77((uint)local_8,local_64);
          pWVar7 = FUN_212f1d12(local_64,(BSTR)0x0);
          *local_c = (uint)pWVar7;
        }
        else {
          *local_c = local_1c._8_4_;
          iVar3 = lstrlenW((LPCWSTR)local_1c._8_4_);
          uVar9 = iVar3 * 2 + 2;
          FUN_212f159d(local_1e4,uVar9);
          WideCharToMultiByte(0,0,(LPCWSTR)*local_c,-1,local_1e4[0],uVar9,(LPCSTR)0x0,(LPBOOL)0x0);
          uVar2 = FUN_212f6412(local_1e4[0]);
          *(undefined1 *)(local_c + 7) = uVar2;
          if ((local_1e4[0] != (LPSTR)0x0) && ((local_168 & 1) != 0)) {
            HeapFree(DAT_21314020,0,local_1e4[0]);
          }
        }
        local_38 = FUN_212f1d12("TabPicture",(BSTR)0x0);
        FUN_212f1d78(&local_38,(short)local_8,(LPCSTR)0x0);
        local_1c._0_2_ = 0xd;
        local_1c._8_4_ = (undefined4 *)0x0;
        iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_38,(_union_2683 *)local_1c,param_3);
        SysFreeString(local_38);
        if (-1 < iVar3) {
          (*(code *)**(undefined4 **)local_1c._8_4_)(local_1c._8_4_,&DAT_212f7370,local_c + 1);
          VariantClear((VARIANTARG *)&((_union_2683 *)local_1c)->n2);
        }
        pvVar4 = FUN_212f15e6(0x20,DAT_21314020);
        if (pvVar4 == (LPVOID)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_212f6444(pvVar4,param_1);
        }
        FUN_212f646c((void *)param_1[0x57],puVar5);
        puVar5 = FUN_212f1f8c((void *)param_1[0x57],(int)local_8);
        if (puVar5 != (undefined4 *)0x0) {
          local_24 = puVar5[2];
          local_28 = FUN_212f1d12("Tab",(BSTR)0x0);
          FUN_212f1d78(&local_28,(short)local_8,(LPCSTR)0x0);
          iVar3 = lstrlenW(local_28);
          uVar9 = iVar3 * 2 + 2;
          FUN_212f159d(local_264,uVar9);
          WideCharToMultiByte(0,0,local_28,-1,local_264[0],uVar9,(LPCSTR)0x0,(LPBOOL)0x0);
          local_3c = local_264[0];
          SysFreeString(local_28);
          local_c = (uint *)0x0;
          lstrcpyA(local_164,local_3c);
          lstrcatA(local_164,".");
          lstrcatA(local_164,"ControlCount");
          local_20 = FUN_212f1d12(local_164,(BSTR)0x0);
          local_1c._0_2_ = 2;
          local_1c._8_4_ = local_1c._8_4_ & 0xffff0000;
          iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_20,(_union_2683 *)local_1c,param_3);
          SysFreeString(local_20);
          if (-1 < iVar3) {
            local_c = (uint *)local_1c._8_4_;
          }
          lstrcpyA(local_164,local_3c);
          lstrcatA(local_164,".");
          lstrcatA(local_164,"ControlEnabled");
          local_20 = FUN_212f1d12(local_164,(BSTR)0x0);
          local_1c._8_2_ = 0xffff;
          local_1c._0_2_ = 0xb;
          iVar3 = (**(code **)(*param_2 + 0xc))(param_2,local_20,(_union_2683 *)local_1c,param_3);
          SysFreeString(local_20);
          if (iVar3 < 0) {
            *(undefined4 *)(local_24 + 0x1c) = 1;
          }
          else {
            *(uint *)(local_24 + 0x1c) = (uint)(local_1c._8_2_ != 0);
          }
          local_40 = (int)(short)local_c;
          local_20 = (BSTR)0x0;
          if (0 < local_40) {
            local_44 = (void *)(local_24 + 4);
            do {
              puVar5 = (undefined4 *)FUN_212f15e6(0x34,DAT_21314020);
              if (puVar5 == (undefined4 *)0x0) {
                local_c = (uint *)0x0;
              }
              else {
                local_c = (uint *)FUN_212f7b1e(puVar5);
              }
              lstrcpyA(local_164,local_3c);
              lstrcatA(local_164,".");
              lstrcatA(local_164,"Control");
              local_2c = FUN_212f1d12(local_164,(BSTR)0x0);
              FUN_212f1d78(&local_2c,(short)local_20,(LPCSTR)0x0);
              local_1c._0_2_ = 8;
              local_1c._8_4_ = (undefined4 *)0x0;
              iVar3 = (**(code **)(*param_2 + 0xc))
                                (param_2,local_2c,(_union_2683 *)local_1c,param_3);
              SysFreeString(local_2c);
              if (-1 < iVar3) {
                local_c[2] = local_1c._8_4_;
                local_34 = FUN_212f1d12(local_164,(BSTR)0x0);
                FUN_212f1d78(&local_34,(short)local_20,"Enabled");
                local_1c._8_2_ = 0xffff;
                local_1c._0_2_ = 0xb;
                iVar3 = (**(code **)(*param_2 + 0xc))
                                  (param_2,local_34,(_union_2683 *)local_1c,param_3);
                SysFreeString(local_34);
                if (iVar3 == 0) {
                  *local_c = (uint)(local_1c._8_2_ != 0);
                }
                else {
                  *local_c = 1;
                }
              }
              FUN_212f7b49(local_44,local_c);
              local_20 = (BSTR)((int)local_20 + 1);
            } while ((int)local_20 < local_40);
          }
          if (local_8 == (uint *)(int)*(short *)((int)param_1 + 0xde)) {
            *(undefined4 *)(local_24 + 0x1c) = 1;
          }
          if ((local_264[0] != (LPSTR)0x0) && ((local_1e8 & 1) != 0)) {
            HeapFree(DAT_21314020,0,local_264[0]);
          }
        }
        local_8 = (uint *)((int)local_8 + 1);
      } while ((int)local_8 < (int)(short)param_1[0x37]);
    }
    param_1[0x2c] = param_1[0x2c] & 0xfffffffe;
    uVar6 = 0;
  }
  return uVar6;
}



undefined4 * __thiscall FUN_212f63cd(void *this,int param_1)

{
  BSTR pOVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 * 0x20 + *(int *)((int)this + 0x160));
  pOVar1 = SysAllocString(L"");
  *puVar2 = pOVar1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[5] = 0xffffff;
  *(undefined2 *)(puVar2 + 6) = 1;
  *(undefined2 *)((int)puVar2 + 0x1a) = 1;
  return puVar2;
}



// WARNING: Removing unreachable block (ram,0x212ff473)
// WARNING: Removing unreachable block (ram,0x212ff47b)

undefined1 FUN_212f6412(char *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  bVar2 = false;
  while( true ) {
    if (*param_1 == '\0') {
      return 0;
    }
    if (bVar2) break;
    bVar2 = *param_1 == '&';
    param_1 = param_1 + 1;
  }
  uVar1 = FUN_212f6437();
  return uVar1;
}



void FUN_212f6437(void)

{
  return;
}



undefined4 * __thiscall FUN_212f6444(void *this,undefined4 param_1)

{
  FUN_212f5afa((undefined4 *)((int)this + 4),10);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)this = param_1;
  FUN_212f1ee0((undefined4 *)((int)this + 4));
  return (undefined4 *)this;
}



void __thiscall FUN_212f646c(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_212f1f17(this,*(undefined4 *)((int)this + 4),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 4) == (int *)0x0) {
    *(int *)this = iVar1;
  }
  else {
    **(int **)((int)this + 4) = iVar1;
  }
  *(int *)((int)this + 4) = iVar1;
  return;
}



undefined4 FUN_212f649e(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004002;
}



int FUN_212f64ad(uint param_1,uint param_2)

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
LAB_2130029b:
    uVar5 = FUN_212f26e3((void *)(param_1 - 0x38));
    if (uVar5 != 0) {
      piVar2 = *(int **)(param_1 + 0x38);
      if ((piVar2 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2), iVar4 != -0x7fffbfff)) {
        return iVar4;
      }
      param_2 = -(uint)((void *)(param_1 - 0x38) != (void *)0x0) & param_1;
      iVar4 = lstrlenA(*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 4));
      uVar5 = iVar4 * 2 + 2;
      FUN_212f159d(local_88,uVar5);
      MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 4),-1,
                          local_88[0],uVar5);
      in_stack_0000001c = local_88[0];
      lpMem = (undefined4 *)
              HeapAlloc(DAT_21314020,0,
                        (uint)*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 0x4a)
                        << 4);
      if (lpMem == (undefined4 *)0x0) {
        if ((local_88[0] != (LPWSTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_21314020,0,local_88[0]);
        }
        return -0x7ff8fff2;
      }
      uVar5 = (uint)*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      if (uVar5 != 0) {
        puVar6 = *(undefined4 **)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 0x4c);
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
      FUN_212fa104(local_8,1);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      uVar15 = 0;
      uVar14 = 0;
      uVar5 = (uint)*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      puVar12 = &param_2;
      uVar11 = 1;
      pWVar10 = in_stack_0000001c;
      puVar6 = lpMem;
      uVar13 = DAT_213145d0;
      iVar4 = GetSystemMetrics(1);
      iVar4 = iVar4 / 2;
      iVar7 = GetSystemMetrics(0);
      iVar7 = iVar7 / 2;
      pHVar8 = GetActiveWindow();
      in_stack_0000001c =
           (LPWSTR)OleCreatePropertyFrame
                             (pHVar8,iVar7,iVar4,pWVar10,uVar11,puVar12,uVar5,puVar6,uVar13,uVar14,
                              uVar15);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      FUN_212fa104(local_8,0);
      HeapFree(DAT_21314020,0,lpMem);
      if (local_88[0] != (LPWSTR)0x0) {
        if ((local_c & 1) != 0) {
          HeapFree(DAT_21314020,0,local_88[0]);
          return (int)in_stack_0000001c;
        }
        return (int)in_stack_0000001c;
      }
      return (int)in_stack_0000001c;
    }
LAB_212f6525:
    iVar4 = 0;
  }
  else {
    if ((int)param_2 < -5) {
LAB_21300259:
      if ((int)param_2 < 1) {
        return -0x7fffbfff;
      }
      iVar4 = (**(code **)(*(int *)(param_1 - 0x38) + 0x60))(param_2);
      if (iVar4 == 0x40180) {
        iVar4 = FUN_212f6529((void *)(param_1 - 0x38),0);
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
          FUN_212f6e60((void *)(param_1 - 0x38),0);
        }
        goto LAB_212f6525;
      }
      if (param_2 != 0xffffffff) {
        if ((int)param_2 < 0) {
          return -0x7fffbfff;
        }
        if (1 < (int)param_2) goto LAB_21300259;
        goto LAB_2130029b;
      }
    }
    if (in_stack_0000001c != (LPWSTR)0x0) {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)in_stack_0000001c;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((int)in_stack_0000001c + 4);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((int)in_stack_0000001c + 8);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)((int)in_stack_0000001c + 0xc);
    }
    iVar4 = FUN_212f6529((void *)(param_1 - 0x38),param_2);
  }
  return iVar4;
}



int __thiscall FUN_212f6529(void *this,int param_1)

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
LAB_212f6706:
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)((int)this + 0xac);
    if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x74) == 0)) {
      if (*(short *)((&PTR_PTR_21314124)[*(int *)((int)this + 0x14) * 2] + 0x3e) != 0) {
        (**(code **)*puVar1)(puVar1,&DAT_21302830,piVar4);
      }
      if ((*piVar4 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_212f73a8,(int)this + 0x74),
         iVar3 < 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x6c))
                (*(undefined4 **)((int)this + 0x6c),&DAT_212f7398,&local_8);
    }
    else {
      local_8 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar5 = *(uint *)((int)this + 0xb0);
    if (((uVar5 & 2) != 0) && ((uVar5 & 4) != 0)) goto LAB_212f66d7;
    iVar3 = 1;
    local_c = uVar5 >> 1 & 1;
    if (local_c == 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) goto LAB_212f65d2;
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
                            (*(undefined4 **)((int)this + 0x6c),&DAT_212f73a8,(int)this + 0x74);
          if (iVar3 < 0) goto LAB_2130050c;
        }
        goto LAB_212f65d2;
      }
    }
    else {
      iVar3 = 0;
LAB_212f65d2:
      if (iVar3 == 0) {
LAB_212f65e9:
        if (local_c == 0) {
          if (local_8 == (int *)0x0) {
            iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x18))(*(int **)((int)this + 0x74));
          }
          else {
            iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,&local_10,*piVar4 != 0);
          }
          if (iVar3 < 0) goto LAB_2130050c;
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
              FUN_212f6795(this,local_14);
              iVar3 = FUN_212f67b6(this,local_2c,local_28,local_10);
              if (iVar3 == 0) goto LAB_21300529;
              piVar4 = *(int **)((int)this + 0x6c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x18))(piVar4);
              }
            }
LAB_212f66d7:
            piVar4 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            if ((*(byte *)((int)this + 0xb0) & 4) == 0) {
              FUN_212f6e60(this,1);
            }
            if (((param_1 == 0) || (param_1 == -4)) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
              *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 8;
              piVar4 = *(int **)((int)this + 0xac);
              if (piVar4 == (int *)0x0) {
                piVar4 = *(int **)((int)this + 0x74);
              }
              (**(code **)(*piVar4 + 0x1c))(piVar4);
              FUN_212f6f1c(this,1);
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
            goto LAB_212f6706;
          }
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x14))(*(int **)((int)this + 0x74));
        if (iVar3 == 0) goto LAB_212f65e9;
        if (-1 < iVar3) goto LAB_2130050c;
LAB_21300529:
        iVar3 = -0x7fffbffb;
      }
    }
LAB_2130050c:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffd;
  }
  return iVar3;
}



void __thiscall FUN_212f6795(void *this,HWND param_1)

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



int __thiscall FUN_212f67b6(void *this,uint param_1,uint param_2,int param_3)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (*(short *)((&PTR_PTR_21314124)[*(int *)((int)this + 0x14) * 2] + 0x48) == 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x50))();
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      return 0;
    }
    *(undefined2 *)((&PTR_PTR_21314124)[*(int *)((int)this + 0x14) * 2] + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
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
    pHVar2 = FUN_213097ea();
    *(HWND *)((int)this + 0xa4) = pHVar2;
  }
  local_c = IsWindowVisible(*(HWND *)((int)this + 0xa4));
  if ((*(int *)((&PTR_PTR_21314124)[*(int *)((int)this + 0x14) * 2] + 0x58) == 0) ||
     (pHVar2 = FUN_213097ea(), *(HWND *)((int)this + 0xa4) == pHVar2)) {
    if (local_c != 0) goto LAB_212f6860;
  }
  else {
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
      iVar1 = FUN_212f6a8b(this,0xfffffd3e,0xb,(LONG *)&local_e);
      if ((iVar1 == 0) || (local_e == 0)) {
        *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
      }
      *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) | 2;
    }
    if ((*(byte *)((int)this + 0xbc) & 1) != 0) goto LAB_212f6860;
    pHVar2 = FUN_21309748((uint)(local_c == 0),*(HWND *)((int)this + 0xa4),param_1,param_2,
                          (int *)((int)this + 0x88));
    *(HWND *)((int)this + 0xb4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      return 0;
    }
    SetWindowLongA(pHVar2,-0x15,(LONG)this);
  }
  local_8 = local_8 | 0x10000000;
LAB_212f6860:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  pHVar2 = *(HWND *)((int)this + 0xb4);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  hWndParent = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    hWndParent = *(HWND *)((int)this + 0xa4);
  }
  DAT_213144f8 = this;
  pHVar2 = CreateWindowExA(local_14,*(LPCSTR *)
                                     ((&PTR_PTR_21314124)[*(int *)((int)this + 0x14) * 2] + 0x44),
                           local_94,local_8,~-(uint)(pHVar2 != (HWND)0x0) & param_1,
                           ~-(uint)(pHVar2 != (HWND)0x0) & param_2,*(int *)((int)this + 0x88),
                           *(int *)((int)this + 0x8c),hWndParent,(HMENU)0x0,DAT_21314000,(LPVOID)0x0
                          );
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffef;
  *(HWND *)((int)this + 0xa0) = pHVar2;
  DAT_213144f8 = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
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



int __thiscall FUN_212f694a(void *this,int *param_1)

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
    iVar4 = (**(code **)*puVar2)(puVar2,&DAT_212f4c50,&local_8);
    if (iVar4 < 0) {
      return iVar4;
    }
    iVar4 = (**(code **)*local_8)(local_8,&DAT_212f4ca0,&local_c);
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



undefined4 __fastcall FUN_212f6a1a(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1);
  if (uVar1 != 0) {
    FUN_21305eee((int)param_1);
  }
  iVar2 = FUN_212f273d(1);
  *(int *)((int)param_1 + 0x17c) = *(int *)((int)param_1 + 0xe4) / iVar2;
  iVar2 = FUN_212f1602(1);
  *(int *)((int)param_1 + 0x178) = *(int *)((int)param_1 + 0xe8) / iVar2;
  FUN_212f6b49((int)param_1);
  FUN_212f6c5b(param_1);
  FUN_212f6cc6(param_1,0);
  FUN_212f6e1e((void *)((int)param_1 + 0x100),(int)*(short *)((int)param_1 + 0xda));
  return 1;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_212f6a8b(void *this,undefined4 param_1,ushort param_2,LONG *param_3)

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
      (**(code **)*puVar2)(puVar2,&DAT_212f4dd0,(int *)((int)this + 0x84));
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
  iVar3 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&DAT_212f4e18,0,2,&local_34,&local_14,0,0);
  if (-1 < iVar3) {
    HVar4 = VariantChangeType((VARIANTARG *)&((_union_2683 *)local_24)->n2,
                              (VARIANTARG *)&local_14.n2,0,param_2);
    if (-1 < HVar4) {
      bVar1 = (&DAT_212f4e28)[param_2];
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



void __fastcall FUN_212f6b49(int param_1)

{
  LPVOID pvVar1;
  short *psVar2;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x158);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_212f5288((int)pvVar1);
    HeapFree(DAT_21314020,0,pvVar1);
  }
  pvVar1 = FUN_212f15e6(0x40,DAT_21314020);
  if (pvVar1 == (LPVOID)0x0) {
    psVar2 = (short *)0x0;
  }
  else {
    psVar2 = FUN_212f6b93(pvVar1,1,0,0,0,0,*(int *)(param_1 + 0xfc),0);
  }
  *(short **)(param_1 + 0x158) = psVar2;
  return;
}



short * __thiscall
FUN_212f6b93(void *this,short param_1,DWORD param_2,DWORD param_3,undefined4 param_4,
            undefined4 param_5,int param_6,short param_7)

{
  DWORD DVar1;
  
  *(short *)this = param_1;
  *(short *)((int)this + 0x1c) = param_7;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0xc0c0c0;
  }
  else {
    if (param_1 == 1) {
      param_2 = GetSysColor(0xf);
    }
    *(DWORD *)((int)this + 4) = param_2;
  }
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    *(undefined4 *)((int)this + 8) = 0x808080;
  }
  else {
    if (*this == 1) {
      param_3 = GetSysColor(0x10);
    }
    *(DWORD *)((int)this + 8) = param_3;
  }
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    *(undefined4 *)((int)this + 0xc) = 0xffffff;
  }
  else if (*this == 1) {
    DVar1 = GetSysColor(0x14);
    *(DWORD *)((int)this + 0xc) = DVar1;
  }
  else {
    *(undefined4 *)((int)this + 0xc) = param_4;
  }
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else if (*this == 1) {
    DVar1 = GetSysColor(6);
    *(DWORD *)((int)this + 0x10) = DVar1;
  }
  else {
    *(undefined4 *)((int)this + 0x10) = param_5;
  }
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    *(undefined4 *)((int)this + 0x18) = 0xffffff;
    *(uint *)((int)this + 0x14) = (-(uint)(param_6 != 0) & 0xff7f7f80) + 0x808080;
  }
  else {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0xc);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (short *)this;
}



void __fastcall FUN_212f6c5b(void *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x4ac) = 0;
  iVar3 = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x180);
  do {
    *puVar4 = 100;
    if ((iVar3 < *(short *)((int)param_1 + 0xdc)) &&
       ((*(short *)(*(int *)((int)param_1 + 0x160) + 0x18 + iVar2) != 0 ||
        (uVar1 = FUN_212f26e3(param_1), uVar1 != 0)))) {
      *(int *)((int)param_1 + *(int *)((int)param_1 + 0x4ac) * 4 + 0x180) = iVar3;
      *(int *)((int)param_1 + 0x4ac) = *(int *)((int)param_1 + 0x4ac) + 1;
    }
    iVar2 = iVar2 + 0x20;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 < 0x1900);
  return;
}



void __thiscall FUN_212f6cc6(void *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = (uint)*(short *)((int)this + 0xe0);
  if (param_1 == 0) {
    if ((*(short *)((int)this + 0xd4) == 0) || (*(short *)((int)this + 0xd4) == 1)) {
      param_1 = *(uint *)((int)this + 0x88);
    }
    else {
      param_1 = *(uint *)((int)this + 0x8c);
    }
  }
  if (local_8 == 0) {
    local_c = *(uint *)((int)this + 0x178);
    if (local_c == 0) {
      uVar2 = (ulonglong)param_1 / (ulonglong)*(uint *)((int)this + 0x4ac);
      local_c = (uint)uVar2;
      local_8 = (uint)(param_1 / uVar2);
    }
    else {
      local_8 = param_1 / local_c;
    }
  }
  else {
    local_c = param_1 / local_8;
  }
  if (local_8 == 0) {
    local_8 = 1;
  }
  uVar1 = *(uint *)((int)this + 0x178);
  if (((int)uVar1 < (int)local_c) && (uVar1 != 0)) {
    local_c = uVar1;
  }
  uVar1 = local_c;
  if (param_1 % local_8 != 0) {
    local_c = local_c + param_1 % local_8;
  }
  local_10 = *(uint *)((int)this + 0x4ac) / local_8;
  if (*(uint *)((int)this + 0x4ac) % local_8 != 0) {
    local_10 = local_10 + 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213145fc == 0) {
    iVar3 = FUN_212f1602(1);
    DAT_213145fc = 1;
    FUN_212f6cc6(this,param_1 - (*(int *)((int)this + 0x4bc) / iVar3) * (local_10 - 1));
    DAT_213145fc = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    *(uint *)((int)this + 0x4b0) = uVar1 + 1;
    *(uint *)((int)this + 0x4b4) = local_c;
    *(uint *)((int)this + 0x168) = local_8;
    *(uint *)((int)this + 0x16c) = local_10;
    *(uint *)((int)this + 0x4b8) = param_1;
  }
  return;
}



uint __thiscall FUN_212f6e1e(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c);
  if ((uVar1 & 0x200) != 0) {
    if (((int)param_1 < 0) || ((int)(((uVar1 >> 10 & 1) != 0) + 1) < (int)param_1)) {
      uVar1 = FUN_2130e401(this,0x17c);
      return uVar1;
    }
    if (param_1 != (uVar1 >> 6 & 3)) {
      *(uint *)((int)this + 0x2c) = (param_1 & 3) << 6 | uVar1 & 0xffffff3f;
      FUN_212f253c((HWND)this,(uint)(0 < (int)param_1));
    }
  }
  return 0;
}



void __thiscall FUN_212f6e60(void *this,uint param_1)

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



undefined4 __thiscall FUN_212f6eec(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_212f2b80(this,param_1);
  if (-1 < (int)uVar1) {
    if (*(uint *)((int)this + 0x168) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar1 / *(uint *)((int)this + 0x168);
    }
    if (0 < (int)uVar1) {
      FUN_21305e3e(this,uVar1);
      return 1;
    }
  }
  return 0;
}



bool __thiscall FUN_212f6f1c(void *this,int param_1)

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
        iVar2 = FUN_212f6529(this,-4);
        return -1 < iVar2;
      }
      pHVar1 = SetFocus(hWnd);
      return (bool)('\x01' - (pHVar1 != hWnd));
    }
  }
  else if ((((*(byte *)((int)this + 0xb0) & 8) != 0) || (param_1 == 0)) ||
          (iVar2 = FUN_212f6529(this,-4), -1 < iVar2)) {
    iVar2 = (**(code **)(**(int **)((int)this + 0xac) + 0x58))(*(int **)((int)this + 0xac),param_1);
    return iVar2 == 0;
  }
  return false;
}



undefined4 __thiscall FUN_212f6f6c(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    puVar3 = puVar1;
    if (piVar2[3] != 0) {
      if (*(int *)((int)this + 0x1c) != 0) {
        FUN_212fa8cc((undefined *)piVar2,L"Left",0xfffedb08);
      }
                    // WARNING: Load size is inaccurate
      uVar4 = FUN_212f26e3(*this);
      if ((uVar4 == 0) && (iVar5 = FUN_212f7d42((int)piVar2,0), param_1 != 0)) {
        *piVar2 = iVar5;
      }
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 1;
}



HGDIOBJ FUN_212f6fdb(int param_1)

{
  HGDIOBJ pvVar1;
  int i;
  
  if (param_1 == 0) {
    i = 4;
  }
  else if (param_1 == 0x808080) {
    i = 3;
  }
  else if (param_1 == 0xc0c0c0) {
    i = 1;
  }
  else {
    if (param_1 != 0xffffff) {
      return (HGDIOBJ)0x0;
    }
    i = 0;
  }
  pvVar1 = GetStockObject(i);
  return pvVar1;
}



void FUN_212f73b8(HDC param_1,HWND param_2,int param_3,int param_4,int *param_5,int param_6,
                 int param_7,HGDIOBJ param_8,HBRUSH param_9,HGDIOBJ param_10,HGDIOBJ param_11,
                 HGDIOBJ param_12)

{
  int x;
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined3 extraout_var;
  tagRECT local_4c;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  HGDIOBJ local_2c;
  HGDIOBJ local_28;
  int local_24;
  HGDIOBJ local_20;
  HGDIOBJ local_1c;
  HGDIOBJ local_18;
  HGDIOBJ local_14;
  HGDIOBJ local_10;
  HGDIOBJ local_c;
  HGDIOBJ local_8;
  
  local_18 = (HGDIOBJ)0xffffffff;
  local_1c = (HGDIOBJ)0xffffffff;
  local_c = (HGDIOBJ)0x0;
  local_10 = (HGDIOBJ)0x0;
  local_8 = (HGDIOBJ)0x0;
  local_14 = (HGDIOBJ)0x0;
  if (param_8 == (HGDIOBJ)0x0) {
    param_8 = param_11;
    param_11 = param_12;
  }
  else {
    param_8 = param_12;
  }
  GetWindowRect(param_2,&local_4c);
  FUN_212f3a25(&local_4c.left);
  UnrealizeObject(param_9);
  SetBrushOrgEx(param_1,0,0,(LPPOINT)0x0);
  local_28 = SelectObject(param_1,param_9);
  FillRect(param_1,&local_4c,param_9);
  local_2c = SelectObject(param_1,param_10);
  FUN_212f76da(param_3,param_4,param_5,param_6,-1);
  param_9 = (HBRUSH)0x0;
  if (-1 < param_7) {
    do {
      MoveToEx(param_1,*param_5,param_5[1],(LPPOINT)0x0);
      param_12 = (HGDIOBJ)0x0;
      if (0 < param_6 + -1) {
        piVar3 = param_5 + 2;
        do {
          x = piVar3[-2];
          local_30 = piVar3[-1];
          local_3c = *piVar3;
          local_38 = piVar3[1];
          if (param_9 != (HBRUSH)0x0) {
            cVar1 = FUN_212f77e8(x,local_30,local_3c,local_38);
            local_20 = (HGDIOBJ)CONCAT31(extraout_var,cVar1);
            sVar2 = (short)local_20;
            if (sVar2 == 0) {
              local_8 = param_8;
              if (param_3 <= x) {
                local_8 = param_11;
              }
              if ((((1 < (int)param_9) && (1 < param_7)) && (local_8 != local_14)) &&
                 ((short)param_10 == 3)) {
                LineTo(param_1,x,local_30 + -1);
              }
            }
            else if (sVar2 == 1) {
              local_8 = param_8;
              if (param_4 <= local_30) {
                local_8 = param_11;
              }
            }
            else if (sVar2 == 2) {
              local_8 = param_8;
              if (param_4 <= local_30) {
                local_8 = param_11;
              }
              if ((param_9 == (HBRUSH)0x1) && (1 < param_7)) {
                local_18 = param_12;
                local_c = local_8;
              }
            }
            else if (((sVar2 == 3) && (local_8 = param_11, param_9 == (HBRUSH)0x1)) && (1 < param_7)
                    ) {
              if ((param_11 != local_14) && ((short)param_10 == 1)) {
                LineTo(param_1,x + -1,local_30);
                MoveToEx(param_1,x + 1,local_30 + 1,(LPPOINT)0x0);
              }
              local_1c = param_12;
              local_10 = param_11;
            }
            param_10 = local_20;
            SelectObject(param_1,local_8);
            local_14 = local_8;
          }
          LineTo(param_1,local_3c,local_38);
          param_12 = (HGDIOBJ)((int)param_12 + 1);
          piVar3 = piVar3 + 2;
        } while ((int)param_12 < param_6 + -1);
      }
      FUN_212f784b(param_3,param_4,param_5,param_6,1);
      param_9 = (HBRUSH)((int)&param_9->unused + 1);
    } while ((int)param_9 <= param_7);
  }
  if (local_c != (HGDIOBJ)0x0) {
    local_3c = param_5[(int)local_18 * 2];
    local_38 = param_5[(int)local_18 * 2 + 1];
    if (local_38 < param_4) {
      local_34 = param_5[(int)local_18 * 2 + 2] + 1;
      local_30 = param_5[(int)local_18 * 2 + 3] + -1;
    }
    else {
      local_34 = param_5[(int)local_18 * 2 + 2] + -1;
      local_30 = param_5[(int)local_18 * 2 + 3] + 1;
    }
  }
  if (local_10 != (HGDIOBJ)0x0) {
    local_24 = param_5[(int)local_1c * 2];
    local_20 = (HGDIOBJ)param_5[(int)local_1c * 2 + 1];
    if ((int)local_20 < param_4) {
      param_3 = param_5[(int)local_1c * 2 + 2] + 1;
      param_4 = param_5[(int)local_1c * 2 + 3] + 1;
    }
    else {
      param_4 = param_5[(int)local_1c * 2 + 3] + -1;
      param_3 = param_5[(int)local_1c * 2 + 2] + -1;
    }
  }
  if (local_c != (HGDIOBJ)0x0) {
    SelectObject(param_1,local_c);
    MoveToEx(param_1,local_3c,local_38,(LPPOINT)0x0);
    LineTo(param_1,local_34,local_30);
  }
  if (local_10 != (HGDIOBJ)0x0) {
    SelectObject(param_1,local_10);
    MoveToEx(param_1,local_24,(int)local_20,(LPPOINT)0x0);
    LineTo(param_1,param_3,param_4);
  }
  SelectObject(param_1,local_28);
  SelectObject(param_1,local_2c);
  return;
}



void FUN_212f76da(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  undefined4 local_8;
  
  piVar1 = param_3;
  if (1 < param_4) {
    if (((*param_3 == param_3[param_4 * 2 + -2]) &&
        (iVar4 = param_3[1], iVar4 == param_3[param_4 * 2 + -1])) && (2 < param_4)) {
      iVar9 = *param_3;
      iVar8 = param_3[param_4 * 2 + -3];
      iVar7 = param_3[param_4 * 2 + -4];
    }
    else {
      iVar4 = param_3[1];
      iVar9 = *param_3;
      iVar8 = param_3[param_4 * 2 + -1];
      iVar7 = param_3[param_4 * 2 + -2];
    }
    cVar2 = FUN_212f77e8(iVar7,iVar8,iVar9,iVar4);
    local_c = 0;
    if (0 < param_4) {
      piVar5 = param_3;
      local_8 = CONCAT31(extraout_var,cVar2);
      do {
        if (local_c < param_4 + -1) {
          iVar4 = piVar5[3];
          iVar9 = piVar5[2];
        }
        else if (((*piVar1 == *piVar5) && (piVar1[1] == piVar5[1])) && (2 < param_4)) {
          iVar4 = piVar1[3];
          iVar9 = piVar1[2];
        }
        else {
          iVar4 = piVar1[1];
          iVar9 = *piVar1;
        }
        cVar2 = FUN_212f77e8(*piVar5,piVar5[1],iVar9,iVar4);
        iVar4 = FUN_212f781d(param_1,param_2,*piVar5,piVar5[1]);
        sVar3 = (short)iVar4;
        if (sVar3 == 1) {
LAB_212f777c:
          *piVar5 = *piVar5 + param_5;
        }
        else {
          param_3._0_2_ = (short)CONCAT31(extraout_var_00,cVar2);
          if (sVar3 == 2) {
            if ((short)param_3 == 1) {
              piVar5[1] = piVar5[1] + param_5;
              if ((short)local_8 != 2) goto LAB_212f777c;
            }
            else {
              if ((short)param_3 == 2) {
                *piVar5 = *piVar5 + param_5;
                bVar6 = (short)local_8 == 0;
                goto LAB_212f77da;
              }
              *piVar5 = *piVar5 + param_5;
LAB_212f77dc:
              piVar5[1] = piVar5[1] + param_5;
            }
          }
          else if (sVar3 == 3) {
            if ((short)param_3 != 0) {
              if ((short)param_3 != 3) goto LAB_212f77dc;
              piVar5[1] = piVar5[1] + param_5;
              goto LAB_212f777c;
            }
            bVar6 = (short)local_8 == 3;
LAB_212f77da:
            if (!bVar6) goto LAB_212f77dc;
          }
        }
        local_c = local_c + 1;
        piVar5 = piVar5 + 2;
        local_8 = CONCAT31(extraout_var_00,cVar2);
      } while (local_c < param_4);
    }
  }
  return;
}



char FUN_212f77e8(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == param_3) {
    cVar1 = '\0';
  }
  else if (param_2 == param_4) {
    cVar1 = '\x01';
  }
  else {
    if (param_3 < param_1) {
      bVar2 = param_4 < param_2;
    }
    else {
      bVar2 = param_2 <= param_4;
    }
    cVar1 = bVar2 + '\x02';
  }
  return cVar1;
}



int FUN_212f781d(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_1) {
    iVar1 = ((param_2 <= param_4) - 1 & 0xfffffffd) + 3;
  }
  else {
    iVar1 = (param_2 <= param_4) + 1;
  }
  return iVar1;
}



undefined4 FUN_212f784b(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_8;
  
  iVar2 = param_5;
  piVar1 = param_3;
  if (param_4 < 2) {
    uVar6 = 0;
  }
  else {
    if (((*param_3 == param_3[param_4 * 2 + -2]) &&
        (iVar5 = param_3[1], iVar5 == param_3[param_4 * 2 + -1])) && (2 < param_4)) {
      iVar11 = *param_3;
      iVar10 = param_3[param_4 * 2 + -3];
      iVar9 = param_3[param_4 * 2 + -4];
    }
    else {
      iVar5 = param_3[1];
      iVar11 = *param_3;
      iVar10 = param_3[param_4 * 2 + -1];
      iVar9 = param_3[param_4 * 2 + -2];
    }
    cVar3 = FUN_212f77e8(iVar9,iVar10,iVar11,iVar5);
    local_8 = 0;
    if (0 < param_4) {
      piVar7 = param_3;
      param_3 = (int *)CONCAT31(extraout_var,cVar3);
      do {
        if (local_8 < param_4 + -1) {
          iVar5 = piVar7[3];
          iVar11 = piVar7[2];
        }
        else if (((*piVar1 == *piVar7) && (piVar1[1] == piVar7[1])) && (2 < param_4)) {
          iVar5 = piVar1[3];
          iVar11 = piVar1[2];
        }
        else {
          iVar5 = piVar1[1];
          iVar11 = *piVar1;
        }
        cVar3 = FUN_212f77e8(*piVar7,piVar7[1],iVar11,iVar5);
        iVar5 = FUN_212f781d(param_1,param_2,*piVar7,piVar7[1]);
        sVar4 = (short)iVar5;
        param_5._0_2_ = (short)(int *)CONCAT31(extraout_var_00,cVar3);
        if (sVar4 == 0) {
          if ((short)param_5 == 1) {
            piVar7[1] = piVar7[1] + iVar2;
            bVar8 = (short)param_3 == 2;
LAB_212f799b:
            if (!bVar8) {
              *piVar7 = *piVar7 + iVar2;
            }
          }
          else {
            if ((short)param_5 == 2) {
              *piVar7 = *piVar7 + iVar2;
              bVar8 = (short)param_3 == 0;
              goto LAB_212f7926;
            }
            *piVar7 = *piVar7 + iVar2;
LAB_212f7928:
            piVar7[1] = piVar7[1] + iVar2;
          }
        }
        else if (sVar4 == 1) {
          if ((short)param_5 == 0) {
            *piVar7 = *piVar7 - iVar2;
            bVar8 = (short)param_3 == 3;
LAB_212f7926:
            if (!bVar8) goto LAB_212f7928;
          }
          else {
            if ((short)param_5 != 3) {
              *piVar7 = *piVar7 - iVar2;
              goto LAB_212f7928;
            }
            piVar7[1] = piVar7[1] + iVar2;
            bVar8 = (short)param_3 == 1;
LAB_212f78f9:
            if (!bVar8) {
              *piVar7 = *piVar7 - iVar2;
            }
          }
        }
        else {
          if (sVar4 == 2) {
            if ((short)param_5 != 1) {
              if ((short)param_5 == 2) {
                *piVar7 = *piVar7 - iVar2;
                bVar8 = (short)param_3 == 0;
                goto LAB_212f78df;
              }
              *piVar7 = *piVar7 - iVar2;
              goto LAB_212f78e1;
            }
            piVar7[1] = piVar7[1] - iVar2;
            bVar8 = (short)param_3 == 2;
            goto LAB_212f78f9;
          }
          if (sVar4 == 3) {
            if ((short)param_5 == 0) {
              *piVar7 = *piVar7 + iVar2;
              bVar8 = (short)param_3 == 3;
LAB_212f78df:
              if (bVar8) goto LAB_212f792b;
            }
            else {
              if ((short)param_5 == 3) {
                piVar7[1] = piVar7[1] - iVar2;
                bVar8 = (short)param_3 == 1;
                goto LAB_212f799b;
              }
              *piVar7 = *piVar7 + iVar2;
            }
LAB_212f78e1:
            piVar7[1] = piVar7[1] - iVar2;
          }
        }
LAB_212f792b:
        local_8 = local_8 + 1;
        piVar7 = piVar7 + 2;
        param_3 = (int *)CONCAT31(extraout_var_00,cVar3);
      } while (local_8 < param_4);
    }
    uVar6 = 1;
  }
  return uVar6;
}



undefined4 FUN_212f79ab(HRGN param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  HRGN hrgn;
  undefined4 uVar1;
  int iMode;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  hrgn = FUN_212f3a3e(param_1);
  local_14 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (hrgn == (HRGN)0x0) {
    uVar1 = 0;
  }
  else {
    iMode = (param_2 < 1) + 1;
    if (param_3 != 0) {
      local_14 = param_2;
    }
    if (param_4 != 0) {
      local_8 = param_2;
    }
    if (param_5 != 0) {
      local_c = param_2;
    }
    if (param_6 != 0) {
      local_10 = param_2;
    }
    if ((local_14 != 0) || (local_8 != 0)) {
      OffsetRgn(hrgn,local_14,local_8);
      CombineRgn(param_1,param_1,hrgn,iMode);
      OffsetRgn(hrgn,-local_14,-local_8);
    }
    if ((local_c != 0) || (local_8 != 0)) {
      OffsetRgn(hrgn,-local_c,local_8);
      CombineRgn(param_1,param_1,hrgn,iMode);
      OffsetRgn(hrgn,local_c,-local_8);
    }
    if ((local_c != 0) || (local_10 != 0)) {
      OffsetRgn(hrgn,-local_c,-local_10);
      CombineRgn(param_1,param_1,hrgn,iMode);
      OffsetRgn(hrgn,local_c,local_10);
    }
    if ((local_14 != 0) || (local_10 != 0)) {
      OffsetRgn(hrgn,local_14,-local_10);
      CombineRgn(param_1,param_1,hrgn,iMode);
      OffsetRgn(hrgn,-local_14,local_10);
    }
    DeleteObject(hrgn);
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_212f7ada(int *param_1,int *param_2)

{
  if (param_1[1] < param_2[1]) {
    param_1[1] = param_2[1];
  }
  if (param_2[2] < param_1[2]) {
    param_1[2] = param_2[2];
  }
  if (param_2[3] < param_1[3]) {
    param_1[3] = param_2[3];
  }
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
  }
  if (param_2[2] < *param_1) {
    *param_1 = param_2[2];
  }
  return;
}



void __fastcall FUN_212f7b1e(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



void __thiscall FUN_212f7b49(void *this,undefined4 param_1)

{
  int iVar1;
  
                    // WARNING: Load size is inaccurate
  iVar1 = FUN_212f1f17(this,0,*this);
  *(undefined4 *)(iVar1 + 8) = param_1;
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    *(int *)((int)this + 4) = iVar1;
  }
  else {
    *(int *)(*this + 4) = iVar1;
  }
  *(int *)this = iVar1;
  return;
}



BSTR __cdecl FUN_212f7b70(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  VARIANTARG local_18;
  BSTR local_8;
  
  local_8 = (BSTR)0x0;
  bVar1 = FUN_212f7be0(param_1,L"Name",&local_18,0,0,0,0,2,1,(int *)0x0);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    local_8 = FUN_212f7cf2((OLECHAR *)local_18.n1._8_4_,(BSTR)0x0);
    VariantClear(&local_18);
    bVar1 = FUN_212f7be0(param_1,L"Index",&local_18,0,0,0,0,2,1,(int *)0x0);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      uVar2 = FUN_212f9b5c(&local_18);
      if (uVar2 != 0xffffffff) {
        FUN_212f1d78(&local_8,(short)uVar2,(LPCSTR)0x0);
      }
    }
  }
  return local_8;
}



bool __cdecl
FUN_212f7be0(int *param_1,undefined4 param_2,VARIANTARG *param_3,short param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int *param_10)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  piVar1 = param_1;
  local_8 = 0;
  iVar2 = 1;
  if (param_1 == (int *)0x0) goto LAB_212f7cc0;
  if (param_9 == 0) {
LAB_212f7c13:
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_212f4dd0,&param_1);
    if (iVar2 < 0) goto LAB_212f7cc0;
  }
  else {
    iVar2 = FUN_212f7ccc(param_1,&param_1);
    if (iVar2 < 0) goto LAB_212f7c13;
  }
  if (param_10 == (int *)0x0) {
    param_10 = &local_8;
  }
  if (*param_10 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_212f4e18,&param_2,1,0x800,&local_8);
    if (-1 < iVar2) {
      *param_10 = local_8;
      goto LAB_212f7c6b;
    }
  }
  else {
LAB_212f7c6b:
    if (-1 < iVar2) {
      if (param_3 != (VARIANTARG *)0x0) {
        VariantInit(param_3);
      }
      local_18 = param_5;
      local_10 = (int)param_4;
      local_14 = param_7;
      local_c = param_6;
      iVar2 = (**(code **)(*param_1 + 0x18))
                        (param_1,*param_10,&DAT_212f4e18,0x800,param_8,&local_18,param_3,0,0);
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
LAB_212f7cc0:
  return -1 < iVar2;
}



int __cdecl FUN_212f7ccc(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *local_c;
  int *local_8;
  
  iVar1 = (**(code **)*param_1)(param_1,&DAT_212f4c50,&local_c);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*local_c + 0x10))(local_c,&param_1);
    if ((iVar1 == 0) && (param_1 != (int *)0x0)) {
      iVar1 = (**(code **)*param_1)(param_1,&DAT_212f4ce0,&local_8);
      if (iVar1 == 0) {
        (**(code **)(*local_8 + 0x14))(local_8,param_2);
        (**(code **)(*local_8 + 8))(local_8);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar1;
}



BSTR __cdecl FUN_212f7cf2(OLECHAR *param_1,BSTR param_2)

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



void __fastcall FUN_212f7d1a(int param_1)

{
  if (*(BSTR *)(param_1 + 8) != (BSTR)0x0) {
    SysFreeString(*(BSTR *)(param_1 + 8));
  }
  return;
}



int FUN_212f7d42(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined3 extraout_var;
  _union_2683 local_18;
  int local_8;
  
  iVar3 = param_1;
  local_8 = 1;
  piVar1 = (int *)(param_1 + 0x30);
  puVar2 = (undefined4 *)(param_1 + 0xc);
  param_1 = *(int *)(param_1 + 0x30);
  bVar4 = FUN_212f7be0((int *)*puVar2,L"TabStop",(VARIANTARG *)&local_18.n2,0,0,0,0,2,0,&param_1);
  if (CONCAT31(extraout_var,bVar4) != 0) {
    local_8 = (int)(short)local_18._8_2_;
    *piVar1 = param_1;
    if (local_8 != param_2) {
      local_18._8_2_ = (undefined2)param_2;
      local_18.n2.vt = 0xb;
      param_2 = -3;
      FUN_212f7be0(*(int **)(iVar3 + 0xc),L"TabStop",(VARIANTARG *)0x0,1,&local_18,1,&param_2,4,0,
                   piVar1);
    }
  }
  return local_8;
}



int __thiscall FUN_212f7de4(void *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  tagSIZE *ptVar6;
  uint *local_a0 [31];
  byte local_24;
  HGDIOBJ local_20;
  HGDIOBJ local_1c;
  int local_18;
  tagSIZE local_14;
  HDC local_c;
  int local_8;
  
  piVar5 = (int *)(param_1 * 0x20 + *(int *)((int)this + 0x160));
  local_8 = 0;
  if ((*(short *)((int)this + 0xd4) == 2) || (local_18 = 0, *(short *)((int)this + 0xd4) == 3)) {
    local_18 = 1;
  }
  local_14.cy = 0;
  local_14.cx = 0;
  if (*piVar5 != 0) {
    local_c = CreateCompatibleDC((HDC)0x0);
    if (*(int *)((int)this + 0x150) == 0) {
      FUN_212f5510(this,(int *)((int)this + 0x150));
    }
    piVar1 = *(int **)((int)this + 0x150);
    (**(code **)(*piVar1 + 0x4c))(piVar1,&local_1c);
    local_20 = SelectObject(local_c,local_1c);
    iVar3 = lstrlenW((LPCWSTR)*piVar5);
    uVar4 = iVar3 * 2 + 2;
    FUN_212f159d(local_a0,uVar4);
    WideCharToMultiByte(0,0,(LPCWSTR)*piVar5,-1,(LPSTR)local_a0[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    puVar2 = local_a0[0];
    ptVar6 = &local_14;
    uVar4 = lstrlenA((LPCSTR)local_a0[0]);
    FUN_212f3a67(local_c,puVar2,uVar4,ptVar6);
    SelectObject(local_c,local_20);
    DeleteDC(local_c);
    if ((local_a0[0] != (uint *)0x0) && ((local_24 & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_a0[0]);
    }
  }
  piVar1 = (int *)piVar5[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,&param_1);
    if (((short)param_1 != 0) && ((short)param_1 != -1)) {
      iVar3 = *(int *)piVar5[1];
      if (local_18 == 0) {
        (**(code **)(iVar3 + 0x18))((int *)piVar5[1],&local_8);
      }
      else {
        (**(code **)(iVar3 + 0x1c))();
      }
    }
  }
  if (local_8 != 0) {
    if (local_14.cx != 0) {
      local_14.cx = local_14.cx + 2;
    }
    iVar3 = FUN_212f1602(1);
    local_14.cx = local_14.cx + local_8 / iVar3;
  }
  return local_14.cx;
}



void FUN_212f7f07(HDC param_1,HWND param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 short param_6,HBRUSH param_7,HGDIOBJ param_8,HGDIOBJ param_9,HGDIOBJ param_10)

{
  HGDIOBJ pvVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  tagRECT local_10;
  
  GetWindowRect(param_2,&local_10);
  FUN_212f3a25(&local_10.left);
  UnrealizeObject(param_7);
  SetBrushOrgEx(param_1,0,0,(LPPOINT)0x0);
  pvVar1 = SelectObject(param_1,param_7);
  FillRect(param_1,&local_10,param_7);
  SelectObject(param_1,pvVar1);
  pvVar1 = SelectObject(param_1,param_8);
  if (param_6 == 0) {
    MoveToEx(param_1,param_3[6] + -1,param_3[7],(LPPOINT)0x0);
    pcVar3 = LineTo_exref;
    LineTo(param_1,param_3[8] + -1,param_3[9]);
    LineTo(param_1,param_3[10] + -1,param_3[0xb] + 1);
    MoveToEx(param_1,param_3[0xc] + -1,param_3[0xd],(LPPOINT)0x0);
    LineTo(param_1,param_3[0xe] + -1,param_3[0xf] + -1);
    LineTo(param_1,param_3[0x10] + -1,param_3[0x11] + -1);
    SelectObject(param_1,param_9);
    MoveToEx(param_1,param_3[8] + -2,param_3[9],(LPPOINT)0x0);
    LineTo(param_1,param_3[10] + -2,param_3[0xb] + 1);
    MoveToEx(param_1,param_3[0xc] + -2,param_3[0xd] + 1,(LPPOINT)0x0);
    LineTo(param_1,param_3[0xe] + -2,param_3[0xf] + -2);
    LineTo(param_1,param_3[0x10],param_3[0x11] + -2);
    SelectObject(param_1,param_10);
    MoveToEx(param_1,param_3[0x10],param_3[0x11] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[0x12],param_3[0x13]);
    LineTo(param_1,param_3[0x14],param_3[0x15]);
    LineTo(param_1,param_3[2],param_3[3]);
    LineTo(param_1,param_3[4],param_3[5]);
    LineTo(param_1,param_3[6],param_3[7]);
    MoveToEx(param_1,param_3[10],param_3[0xb],(LPPOINT)0x0);
    iVar4 = param_3[0xd];
    iVar2 = param_3[0xc];
  }
  else if (param_6 == 1) {
    MoveToEx(param_1,param_3[0xc],param_3[0xd] + -1,(LPPOINT)0x0);
    pcVar3 = LineTo_exref;
    LineTo(param_1,param_3[10] + 1,param_3[0xb] + -1);
    MoveToEx(param_1,param_3[8] + 1,param_3[9] + 1,(LPPOINT)0x0);
    LineTo(param_1,param_3[6] + -2,param_3[7] + -1);
    LineTo(param_1,param_3[4] + 1,param_3[5] + -1);
    LineTo(param_1,param_3[2] + -1,param_3[3] + -1);
    LineTo(param_1,*param_3 + -1,param_3[1] + -1);
    LineTo(param_1,param_3[0x12] + -1,param_3[0x13] + -1);
    LineTo(param_1,param_3[0x10] + -1,param_3[0x11] + -1);
    SelectObject(param_1,param_9);
    MoveToEx(param_1,param_3[0xc] + 1,param_3[0xd] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[10] + 1,param_3[0xb] + -2);
    MoveToEx(param_1,param_3[6] + -1,param_3[7] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[4] + 1,param_3[5] + -2);
    MoveToEx(param_1,param_3[2] + -2,param_3[3],(LPPOINT)0x0);
    LineTo(param_1,*param_3 + -2,param_3[1] + -2);
    LineTo(param_1,param_3[0x12] + -2,param_3[0x13] + -2);
    LineTo(param_1,param_3[0x10] + -2,param_3[0x11]);
    SelectObject(param_1,param_10);
    MoveToEx(param_1,param_3[10],param_3[0xb] + -1,(LPPOINT)0x0);
    LineTo(param_1,param_3[8],param_3[9] + 1);
    MoveToEx(param_1,param_3[0xc],param_3[0xd] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[0xe],param_3[0xf]);
    iVar4 = param_3[0x11];
    iVar2 = param_3[0x10];
  }
  else if (param_6 == 2) {
    MoveToEx(param_1,param_3[4] + 1,param_3[5] + 1,(LPPOINT)0x0);
    pcVar3 = LineTo_exref;
    LineTo(param_1,param_3[2] + -1,param_3[3] + -1);
    LineTo(param_1,*param_3 + 1,param_3[1] + -1);
    MoveToEx(param_1,param_3[0x12],param_3[0x13] + -1,(LPPOINT)0x0);
    LineTo(param_1,param_3[0x10] + -1,param_3[0x11] + -1);
    LineTo(param_1,param_3[0xe] + -1,param_3[0xf] + -1);
    SelectObject(param_1,param_9);
    MoveToEx(param_1,param_3[2] + -1,param_3[3] + -2,(LPPOINT)0x0);
    LineTo(param_1,*param_3 + 1,param_3[1] + -2);
    MoveToEx(param_1,param_3[0x12] + 1,param_3[0x13] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[0x10] + -2,param_3[0x11] + -2);
    LineTo(param_1,param_3[0xe] + -2,param_3[0xf]);
    SelectObject(param_1,param_10);
    MoveToEx(param_1,param_3[0x12],param_3[0x13] + -2,(LPPOINT)0x0);
    LineTo(param_1,*param_3,param_3[1] + -2);
    MoveToEx(param_1,param_3[4],param_3[5],(LPPOINT)0x0);
    LineTo(param_1,param_3[6],param_3[7]);
    LineTo(param_1,param_3[8],param_3[9]);
    LineTo(param_1,param_3[10] + 1,param_3[0xb]);
    LineTo(param_1,param_3[0xc] + 1,param_3[0xd]);
    iVar4 = param_3[0xf];
    iVar2 = param_3[0xe];
  }
  else {
    if (param_6 != 3) goto LAB_212f808f;
    MoveToEx(param_1,param_3[0x12] + -1,param_3[0x13],(LPPOINT)0x0);
    pcVar3 = LineTo_exref;
    LineTo(param_1,*param_3 + -1,param_3[1] + 1);
    MoveToEx(param_1,param_3[2],param_3[3] + 1,(LPPOINT)0x0);
    LineTo(param_1,param_3[4] + -1,param_3[5]);
    LineTo(param_1,param_3[6] + -1,param_3[7]);
    LineTo(param_1,param_3[8],param_3[9] + -1);
    LineTo(param_1,param_3[10] + -1,param_3[0xb] + -1);
    LineTo(param_1,param_3[0xc] + -1,param_3[0xd] + -1);
    LineTo(param_1,param_3[0xe] + -1,param_3[0xf] + -1);
    SelectObject(param_1,param_9);
    MoveToEx(param_1,param_3[0xe] + 1,param_3[0xf] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[0xc] + -2,param_3[0xd] + -2);
    LineTo(param_1,param_3[10] + -2,param_3[0xb] + -2);
    LineTo(param_1,param_3[8] + 1,param_3[9] + -2);
    MoveToEx(param_1,param_3[6] + -2,param_3[7],(LPPOINT)0x0);
    LineTo(param_1,param_3[4] + -2,param_3[5] + -1);
    MoveToEx(param_1,*param_3 + -2,param_3[1],(LPPOINT)0x0);
    LineTo(param_1,param_3[0x12] + -2,param_3[0x13] + -1);
    SelectObject(param_1,param_10);
    MoveToEx(param_1,*param_3 + -1,param_3[1],(LPPOINT)0x0);
    LineTo(param_1,param_3[2],param_3[3]);
    MoveToEx(param_1,param_3[0xe],param_3[0xf] + -2,(LPPOINT)0x0);
    LineTo(param_1,param_3[0x10],param_3[0x11]);
    iVar4 = param_3[0x13];
    iVar2 = param_3[0x12];
  }
  (*pcVar3)(param_1,iVar2 + -1,iVar4);
LAB_212f808f:
  SelectObject(param_1,pvVar1);
  return;
}



int entry(HMODULE param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_21314600 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (DAT_21314604 != (code *)0x0) {
      iVar1 = (*DAT_21314604)(param_1,param_2,param_3);
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_212f8144(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_21300da0();
      return iVar1;
    }
  }
  iVar1 = FUN_212f82f0(param_1,param_2);
  if ((param_2 == 1) && (iVar1 == 0)) {
    FUN_212f8144(param_1,0);
  }
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar2 = FUN_212f8144(param_1,param_2);
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if ((iVar1 != 0) && (DAT_21314604 != (code *)0x0)) {
      iVar1 = (*DAT_21314604)(param_1,param_2,param_3);
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_212f8144(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      return 1;
    }
    if (0 < DAT_21314600) {
      DAT_21314600 = DAT_21314600 + -1;
      if (DAT_2131461c == 0) {
        FUN_212f84bc();
      }
      FUN_212f853a();
      FUN_212f85a1();
      return 1;
    }
    return 0;
  }
  DAT_2131460c = GetVersion();
  iVar1 = FUN_212f85d8();
  if (iVar1 == 0) {
    return 0;
  }
  _DAT_21314618 = DAT_2131460c >> 8 & 0xff;
  _DAT_21314614 = DAT_2131460c & 0xff;
  _DAT_21314610 = _DAT_21314614 * 0x100 + _DAT_21314618;
  DAT_2131460c = DAT_2131460c >> 0x10;
  DAT_21314620 = GetCommandLineA();
  DAT_21314608 = FUN_212f86fe();
  if ((DAT_21314620 != (LPSTR)0x0) && (DAT_21314608 != (LPSTR)0x0)) {
    FUN_212f8842();
    FUN_212f8a1b();
    FUN_212f8f37();
    FUN_212f9188();
    FUN_212f926e();
    DAT_21314600 = DAT_21314600 + 1;
    return 1;
  }
  FUN_212f85a1();
  return 0;
}



void __cdecl FUN_212f822d(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    pbVar1 = (byte *)FUN_212f8277(param_1,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_212f8564(local_4,(int)param_1,pbVar1);
      return;
    }
    HeapFree(DAT_21314624,0,lpMem);
  }
  return;
}



int __cdecl FUN_212f8277(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_21314630;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_21314630) {
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



void __cdecl FUN_212f82ce(undefined4 *param_1,undefined4 *param_2)

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

undefined4 FUN_212f82f0(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  ushort uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    FUN_212f8443();
    FUN_212f84a3();
    if ((DAT_21316780 != (HMODULE)0x0) && (DAT_21316780 != DAT_21314000)) {
      FreeLibrary(DAT_21316780);
    }
    if (DAT_21316794 != (HMODULE)0x0) {
      FreeLibrary(DAT_21316794);
      DAT_21316794 = (HMODULE)0x0;
    }
  }
  else if (param_2 == 1) {
    DVar1 = GetVersion();
    bVar3 = 0x7fffffff < DVar1;
    uVar2 = CONCAT11((char)DVar1,(char)(DVar1 >> 8));
    _DAT_2131678c = 0;
    if (bVar3) {
      _DAT_2131678c = (uint)(0x409 < uVar2);
      _DAT_21316790 = 1;
    }
    else {
      _DAT_21316790 = (uint)(0x333 < uVar2);
    }
    _DAT_21316788 = (uint)bVar3;
    _DAT_21316784 = (uint)!bVar3;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if ((DAT_21314020 == (HANDLE)0x0) &&
       (DAT_21314020 = GetProcessHeap(), DAT_21314020 == (HANDLE)0x0)) {
      return 0;
    }
    DAT_21314000 = param_1;
    DisableThreadLibraryCalls(param_1);
    _DAT_21316798 = GetSystemMetrics(0x2a);
    FUN_212f9471();
    return 1;
  }
  return 1;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x8418  2  DllCanUnloadNow
  if (DAT_213167b8 != (int *)0x0) {
    (**(code **)(*DAT_213167b8 + 8))(DAT_213167b8);
    DAT_213167b8 = (int *)0x0;
  }
  return (uint)(DAT_21314158 != 0);
}



void __fastcall FUN_212f8431(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_212f83f8;
  InterlockedDecrement(&DAT_21314158);
  return;
}



void FUN_212f8443(void)

{
  short *psVar1;
  
  if (DAT_21314120 != -1) {
    psVar1 = &DAT_21314120;
    do {
      if ((*psVar1 == 2) && (*(short *)(*(int *)(psVar1 + 2) + 0x48) != 0)) {
        UnregisterClassA(*(LPCSTR *)(*(int *)(psVar1 + 2) + 0x44),DAT_21314000);
      }
      psVar1 = psVar1 + 4;
    } while (*psVar1 != -1);
  }
  if (DAT_213167bc != (HWND)0x0) {
    DestroyWindow(DAT_213167bc);
    DAT_213167bc = (HWND)0x0;
    UnregisterClassA(s_CtlFrameWork_Parking_21316e7c,DAT_21314000);
  }
  if (DAT_213167c0 != '\0') {
    UnregisterClassA("CtlFrameWork_ReflectWindow",DAT_21314000);
    DAT_213167c0 = '\0';
  }
  return;
}



void FUN_212f84a3(void)

{
  if (((DAT_213167c4 != (HMODULE)0x0) && (DAT_213167c4 != DAT_21316780)) &&
     (DAT_213167c4 != DAT_21314000)) {
    FreeLibrary(DAT_213167c4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_213167a0);
  return;
}



void FUN_212f84bc(void)

{
  FUN_212f84cb(0,0,1);
  return;
}



void __cdecl FUN_212f84cb(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  if (DAT_213167dc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_2131461c = 1;
  DAT_213167d8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_213167e0 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_2131779c + -4), puVar1 = DAT_213167e0, DAT_213167e0 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_213167e0;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_212f82ce((undefined4 *)&DAT_213167c8,(undefined4 *)&DAT_213167cc);
  }
  FUN_212f82ce((undefined4 *)&DAT_213167d0,(undefined4 *)&DAT_213167d4);
  if (param_3 == 0) {
    DAT_213167dc = 1;
                    // WARNING: Subroutine does not return
    ExitProcess(param_1);
  }
  return;
}



void FUN_212f853a(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_21316680;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      FUN_212f822d((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x21316780);
  return;
}



void __cdecl FUN_212f8564(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_2131775c = DAT_2131775c + 1, DAT_2131775c == 0x20)) {
    FUN_2130d0c1(0x10);
  }
  return;
}



void FUN_212f85a1(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_21314630;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_21314630);
  HeapDestroy(DAT_21314624);
  return;
}



undefined4 FUN_212f85d8(void)

{
  undefined **ppuVar1;
  
  DAT_21314624 = HeapCreate(1,0x1000,0);
  if (DAT_21314624 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_212f8607();
  if (ppuVar1 != (undefined **)0x0) {
    return 1;
  }
  HeapDestroy(DAT_21314624);
  return 0;
}



undefined ** FUN_212f8607(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_21314640 == -1) {
    lpMem = &PTR_LOOP_21314630;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_21314624,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_21314630) {
        if (PTR_LOOP_21314630 == (undefined *)0x0) {
          PTR_LOOP_21314630 = (undefined *)&PTR_LOOP_21314630;
        }
        if (PTR_PTR_LOOP_21314634 == (undefined *)0x0) {
          PTR_PTR_LOOP_21314634 = (undefined *)&PTR_LOOP_21314630;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_21314630;
        lpMem[1] = PTR_PTR_LOOP_21314634;
        PTR_PTR_LOOP_21314634 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_21314630) {
    HeapFree(DAT_21314624,0,lpMem);
  }
  return (undefined **)0x0;
}



LPSTR FUN_212f86fe(void)

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
  if (DAT_21316838 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_21316838 = 2;
    }
    else {
      DAT_21316838 = 1;
    }
  }
  if (DAT_21316838 == 1) {
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
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_212f87bc(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_212f822d(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_21316838 == 2) &&
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
    pCVar7 = (LPSTR)FUN_212f87bc((uint)pCVar9);
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



void __cdecl FUN_212f87bc(uint param_1)

{
  FUN_212f87d0(param_1,DAT_2131683c);
  return;
}



int __cdecl FUN_212f87d0(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        iVar1 = FUN_212f8808(param_1);
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
      iVar1 = FUN_2130d736(param_1);
    } while (iVar1 != 0);
  }
  return 0;
}



void __cdecl FUN_212f8808(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if ((dwBytes <= DAT_21316840) &&
     (piVar1 = FUN_212f893e(param_1 + 0xfU >> 4), piVar1 != (int *)0x0)) {
    return;
  }
  HeapAlloc(DAT_21314624,0,dwBytes);
  return;
}



void FUN_212f8842(void)

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
  
  puVar2 = (undefined4 *)FUN_212f87bc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_21316844 = 0x20;
  DAT_21316680 = puVar2;
  if (puVar2 < puVar2 + 0x40) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2 = puVar2 + 2;
    } while (puVar2 < DAT_21316680 + 0x40);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)((int)pUVar8 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_21316844 < (int)UStack_48) {
      piVar6 = &DAT_21316684;
      do {
        puVar2 = (undefined4 *)FUN_212f87bc(0x100);
        if (puVar2 == (undefined4 *)0x0) {
          UStack_48 = DAT_21316844;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_21316844 = DAT_21316844 + 0x20;
        if (puVar2 < puVar2 + 0x40) {
          do {
            *(undefined1 *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(undefined1 *)((int)puVar2 + 5) = 10;
            puVar2 = puVar2 + 2;
          } while (puVar2 < (undefined4 *)(*piVar6 + 0x100));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_21316844 < (int)UStack_48);
    }
    uVar7 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar5), DVar3 != 0)))) {
          iVar4 = (int)(&DAT_21316680)[(int)uVar7 >> 5];
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
    puVar2 = DAT_21316680 + iVar4 * 2;
    if (DAT_21316680[iVar4 * 2] == -1) {
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
        goto LAB_212f88c9;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_212f88c9;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_212f88c9;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_212f88c9:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      SetHandleCount(DAT_21316844);
      return;
    }
  } while( true );
}



int * __cdecl FUN_212f893e(uint param_1)

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
  
  local_4 = (int *)PTR_PTR_LOOP_21316848;
  do {
    if (local_4[4] != -1) {
      puVar10 = (uint *)local_4[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      if (puVar10 < local_4 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
            piVar5 = (int *)FUN_212f89c6(piVar8,*puVar10,param_1);
            if (piVar5 != (int *)0x0) {
              PTR_PTR_LOOP_21316848 = (undefined *)local_4;
              *puVar10 = *puVar10 - param_1;
              local_4[2] = (int)puVar10;
              return piVar5;
            }
            puVar10[1] = param_1;
          }
          puVar10 = puVar10 + 2;
          piVar8 = piVar8 + 0x400;
        } while (puVar10 < local_4 + 0x806);
        piVar8 = FUN_213015b4(local_4);
        return piVar8;
      }
      puVar2 = (uint *)local_4[2];
      piVar8 = (int *)local_4[4];
      for (puVar10 = (uint *)(local_4 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_212f89c6(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_21316848 = (undefined *)local_4;
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
  } while (local_4 != (int *)PTR_PTR_LOOP_21316848);
  ppuVar7 = &PTR_LOOP_21314630;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_21314630) {
      ppuVar7 = FUN_212f8607();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)ppuVar7[4];
      *(char *)(piVar8 + 2) = (char)param_1;
      PTR_PTR_LOOP_21316848 = (undefined *)ppuVar7;
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
  PTR_PTR_LOOP_21316848 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar6);
  *(char *)(piVar8 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar8[1] = piVar8[1] - param_1;
  *piVar8 = (int)piVar8 + param_1 + 8;
  return piVar8 + 0x40;
}



void __thiscall FUN_212f89b4(void *this)

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
        FUN_213015b4(this);
        return;
      }
    } while (((int)*unaff_EDI < (int)unaff_EBX) || (puVar2[3] <= unaff_EBX));
    iVar1 = FUN_212f89c6(unaff_ESI,*unaff_EDI,unaff_EBX);
    if (iVar1 != 0) break;
    puVar2[3] = unaff_EBX;
    this = in_stack_00000010;
  }
  PTR_PTR_LOOP_21316848 = in_stack_00000010;
  *unaff_EDI = *unaff_EDI - unaff_EBX;
  *(uint **)(in_stack_00000010 + 8) = unaff_EDI;
  return;
}



int __cdecl FUN_212f89c6(int *param_1,uint param_2,uint param_3)

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
            goto LAB_2130186d;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_21301853;
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
LAB_2130186d:
            param_1[1] = 0;
          }
LAB_21301853:
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



void FUN_212f8a1b(void)

{
  FUN_212f8a26(-3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_212f8a26(int param_1)

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
  
  CodePage = FUN_212f8ad9(param_1);
  if (CodePage == DAT_21314268) {
    return 0;
  }
  if (CodePage == 0) {
    FUN_2130b02f();
    FUN_212f8b09();
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_21316850;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_21314160;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x21316860);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_21317160)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_21314160 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_21316954 = 1;
      DAT_21314268 = CodePage;
      DAT_21316940 = FUN_2130afcd(CodePage);
      _DAT_21316948 = *(undefined4 *)(iVar10 + 0x21316854);
      _DAT_2131694c = *(undefined4 *)(iVar10 + 0x21316858);
      _DAT_21316950 = *(undefined4 *)(iVar10 + 0x2131685c);
      FUN_212f8b09();
      return 0;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_21316940);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 != 1) {
    if (DAT_21316958 == 0) {
      return 0xffffffff;
    }
    FUN_2130b02f();
    FUN_212f8b09();
    return 0;
  }
  puVar14 = &DAT_21314160;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)puVar14 = 0;
  DAT_21316940 = 0;
  if (local_14.MaxCharSize < 2) {
    _DAT_21316954 = 0;
    DAT_21314268 = CodePage;
  }
  else {
    DAT_21314268 = CodePage;
    if (local_14.LeadByte[0] != '\0') {
      pBVar11 = local_14.LeadByte + 1;
      do {
        bVar3 = *pBVar11;
        if (bVar3 == 0) break;
        for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
          *(byte *)((int)&DAT_21314160 + uVar7 + 1) = *(byte *)((int)&DAT_21314160 + uVar7 + 1) | 4;
        }
        pBVar1 = pBVar11 + 1;
        pBVar11 = pBVar11 + 2;
      } while (*pBVar1 != 0);
    }
    uVar7 = 1;
    do {
      *(byte *)((int)&DAT_21314160 + uVar7 + 1) = *(byte *)((int)&DAT_21314160 + uVar7 + 1) | 8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0xff);
    DAT_21316940 = FUN_2130afcd(CodePage);
    _DAT_21316954 = 1;
  }
  _DAT_21316948 = 0;
  _DAT_2131694c = 0;
  _DAT_21316950 = 0;
  FUN_212f8b09();
  return 0;
}



int __cdecl FUN_212f8ad9(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_21316958 = 1;
                    // WARNING: Could not recover jumptable at 0x21300f3f. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_21316958 = 1;
                    // WARNING: Could not recover jumptable at 0x212f8b03. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_21317758;
  }
  DAT_21316958 = (uint)bVar2;
  return param_1;
}



void FUN_212f8b09(void)

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
  
  BVar1 = GetCPInfo(DAT_21314268,&local_514);
  if (BVar1 != 1) {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((uVar2 < 0x61) || (0x7a < uVar2)) {
          (&DAT_21316960)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_21314160 + uVar2 + 1) =
               *(byte *)((int)&DAT_21314160 + uVar2 + 1) | 0x20;
          (&DAT_21316960)[uVar2] = (char)uVar2 + -0x20;
        }
      }
      else {
        *(byte *)((int)&DAT_21314160 + uVar2 + 1) = *(byte *)((int)&DAT_21314160 + uVar2 + 1) | 0x10
        ;
        (&DAT_21316960)[uVar2] = (char)uVar2 + ' ';
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
  FUN_212f8c4e(1,aCStack_500,0x100,aWStack_200,DAT_21314268,DAT_21316940,0);
  FUN_212f8d83(DAT_21316940,0x100,aCStack_500,(LPCWSTR)0x100,aWStack_400,0x100,DAT_21314268,0);
  FUN_212f8d83(DAT_21316940,0x200,aCStack_500,(LPCWSTR)0x100,aWStack_300,0x100,DAT_21314268,0);
  uVar2 = 0;
  puVar5 = aWStack_200;
  do {
    if ((*puVar5 & 1) == 0) {
      if ((*puVar5 & 2) == 0) {
        (&DAT_21316960)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_21314160 + uVar2 + 1) = *(byte *)((int)&DAT_21314160 + uVar2 + 1) | 0x20
        ;
        (&DAT_21316960)[uVar2] = *(undefined1 *)((int)aWStack_300 + uVar2);
      }
    }
    else {
      *(byte *)((int)&DAT_21314160 + uVar2 + 1) = *(byte *)((int)&DAT_21314160 + uVar2 + 1) | 0x10;
      (&DAT_21316960)[uVar2] = *(undefined1 *)((int)aWStack_400 + uVar2);
    }
    uVar2 = uVar2 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar2 < 0x100);
  return;
}



BOOL __cdecl
FUN_212f8c4e(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_21316a60 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_21316a60 = 2;
    }
    else {
      DAT_21316a60 = 1;
    }
  }
  if (DAT_21316a60 != 2) {
    param_6 = DAT_21316a60;
    if (DAT_21316a60 == 1) {
      param_6 = 0;
      if (param_5 == 0) {
        param_5 = DAT_21317758;
      }
      iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar2 != 0) {
        lpWideCharStr = (LPCWSTR)FUN_212f8d29(2,iVar2);
        if (lpWideCharStr != (LPCWSTR)0x0) {
          iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
          if (iVar2 != 0) {
            BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
            FUN_212f822d((undefined *)lpWideCharStr);
            return BVar1;
          }
        }
      }
      FUN_212f822d((undefined *)lpWideCharStr);
    }
    return param_6;
  }
  if (param_6 == 0) {
    param_6 = DAT_21317748;
  }
  BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  return BVar1;
}



int * __cdecl FUN_212f8d29(int param_1,int param_2)

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
      if (DAT_21316840 < dwBytes) {
LAB_212f8d62:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        piVar3 = FUN_212f893e(dwBytes >> 4);
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
          goto LAB_212f8d62;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_21314624,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_2131683c == 0)) {
      return piVar3;
    }
    iVar1 = FUN_2130d736(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



int __cdecl
FUN_212f8d83(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cchSrc;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_21316a64 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_21316a64 = 2;
    }
    else {
      DAT_21316a64 = 1;
    }
  }
  cchSrc = param_4;
  if (0 < (int)param_4) {
    cchSrc = (LPCWSTR)FUN_212f8f09(param_3,(int)param_4);
  }
  if (DAT_21316a64 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cchSrc,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_21316a64 != 1) {
    return DAT_21316a64;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_21317758;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cchSrc,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_212f87bc(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cchSrc,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_212f87bc(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_21301484;
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
      if (param_6 == 0) goto LAB_212f8eec;
      if (param_6 < iVar2) goto LAB_21301484;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_212f8eec:
      FUN_212f822d((undefined *)lpWideCharStr);
      FUN_212f822d((undefined *)param_4);
      return iVar2;
    }
  }
LAB_21301484:
  FUN_212f822d((undefined *)lpWideCharStr);
  FUN_212f822d((undefined *)param_4);
  return 0;
}



int __cdecl FUN_212f8f09(char *param_1,int param_2)

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

void FUN_212f8f37(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_21316a78,0x104);
  _DAT_21316a70 = &DAT_21316a78;
  pbVar2 = DAT_21314620;
  if (*DAT_21314620 == 0) {
    pbVar2 = &DAT_21316a78;
  }
  FUN_212f8fce(pbVar2,(undefined4 *)0x0,(byte *)0x0,&iStack_8,&iStack_4);
  puVar1 = (undefined4 *)FUN_212f87bc(iStack_4 + iStack_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_212f8fce(pbVar2,puVar1,(byte *)(puVar1 + iStack_8),&iStack_8,&iStack_4);
  _DAT_21316a6c = puVar1;
  _DAT_21316a68 = iStack_8 + -1;
  return;
}



void __cdecl FUN_212f8fce(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
    FUN_213011c1();
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
    if ((*(byte *)((int)param_5 + 0x21314161) & 4) != 0) {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      pbVar7 = param_1 + 2;
    }
    if (bVar2 == 0x20) break;
    if (bVar2 == 0) goto LAB_21301232;
    param_1 = pbVar7;
  } while (bVar2 != 9);
  if (bVar2 == 0) {
LAB_21301232:
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
          if ((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_212f90ca;
        }
        if ((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) != 0) {
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
LAB_212f90ca:
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

void FUN_212f9188(void)

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
  cVar2 = *DAT_21314608;
  pcVar7 = DAT_21314608;
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
  piVar3 = (int *)FUN_212f87bc(iVar8 * 4 + 4);
  _DAT_21316b7c = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_21314608;
  local_4 = piVar3;
  pcVar7 = DAT_21314608;
  do {
    if (cVar2 == '\0') {
      FUN_212f822d(DAT_21314608);
      DAT_21314608 = (char *)0x0;
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
      iVar8 = FUN_212f87bc(uVar4);
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



void FUN_212f926e(void)

{
  if (PTR_FUN_21316b90 != (undefined *)0x0) {
    (*(code *)PTR_FUN_21316b90)();
  }
  FUN_212f82ce((undefined4 *)&DAT_21316b88,(undefined4 *)&DAT_21316b8c);
  FUN_212f82ce((undefined4 *)&DAT_21316b80,(undefined4 *)&DAT_21316b84);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_212f929e(void)

{
  FUN_212f92b5();
  _DAT_21316b94 = FUN_212f92ed();
  __setdefaultprecision();
  return;
}



void FUN_212f92b5(void)

{
  PTR_LAB_21316b9c = &LAB_2130a865;
  PTR_LAB_21316b98 = &LAB_2130ac88;
  PTR_LAB_21316ba0 = &LAB_2130a8ec;
  PTR_LAB_21316ba4 = FUN_2130a808;
  PTR_LAB_21316ba8 = &LAB_2130a8d0;
  PTR_LAB_21316bac = &LAB_2130ac88;
  return;
}



// WARNING: Removing unreachable block (ram,0x2130ae88)

int FUN_212f92ed(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA("KERNEL32");
  if ((hModule != (HMODULE)0x0) &&
     (pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent"), pFVar1 != (FARPROC)0x0)) {
    iVar2 = (*pFVar1)(0);
    return iVar2;
  }
  return 0;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 1998 Release

void __setdefaultprecision(void)

{
  FUN_212f932c((void *)0x10000,0x30000);
  return;
}



void __cdecl FUN_212f932c(void *param_1,uint param_2)

{
  FUN_212f9344(param_1,(uint)param_1,param_2 & 0xfff7ffff);
  return;
}



uint __thiscall FUN_212f9344(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_212f937f(local_8);
  FUN_212f93fc();
  return param_2 & param_1 | ~param_2 & uVar1;
}



uint __cdecl FUN_212f937f(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 < 0x401) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



void FUN_212f93fc(void)

{
  return;
}



void FUN_212f9471(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_213167a0);
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
  
                    // 0x947d  3  DllGetClassObject
  if (ppv == (LPVOID *)0x0) {
    HVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_212f94e0((char *)rclsid);
    if (iVar1 == -1) {
      if (((DAT_21314000 != (HMODULE)0x0) &&
          (pFVar4 = GetProcAddress(DAT_21314000,s_VBFrameworkMapClassObject_21316e94),
          pFVar4 != (FARPROC)0x0)) && (iVar5 = (*pFVar4)(rclsid,local_14), -1 < iVar5)) {
        iVar1 = FUN_212f94e0(local_14);
      }
      if (iVar1 == -1) {
        return -0x7ffbfeef;
      }
    }
    this = (void *)FUN_212f1575(0xc);
    if (this == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_212f951a(this,iVar1);
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



int __cdecl FUN_212f94e0(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (DAT_21314120 != -1) {
    ppuVar4 = &PTR_PTR_21314124;
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



undefined4 * __thiscall FUN_212f951a(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_212f83f8;
  InterlockedIncrement(&DAT_21314158);
  *(undefined4 *)((int)this + 4) = 1;
  return (undefined4 *)this;
}



undefined4 FUN_212f9583(void)

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
  FUN_212f159d(local_108,(uint)local_8);
  WideCharToMultiByte(0,0,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB",-1,(LPSTR)local_108[0],
                      (int)local_8,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = local_108[0];
  iVar1 = lstrlenW(L"190B7910-992A-11cf-8AFA-00AA00C00905");
  cbMultiByte = iVar1 * 2 + 2;
  FUN_212f159d(local_88,cbMultiByte);
  WideCharToMultiByte(0,0,L"190B7910-992A-11cf-8AFA-00AA00C00905",-1,(LPSTR)local_88[0],cbMultiByte,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = FUN_212f9649(local_88[0]);
  if (iVar1 == 0) {
    iVar1 = FUN_212f9649(local_8);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_212f9615;
    }
  }
  uVar2 = 1;
LAB_212f9615:
  if ((local_88[0] != (HKEY)0x0) && ((local_c & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_88[0]);
  }
  if ((local_108[0] != (HKEY)0x0) && ((local_8c & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_108[0]);
  }
  return uVar2;
}



undefined4 __cdecl FUN_212f9649(HKEY param_1)

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
    LVar2 = RegOpenKeyA((HKEY)0x80000000,s_Licenses_21316bb0,&local_c);
    if (LVar2 == 0) {
      if ((char)lpSubKey->unused != '\0') {
        LVar2 = RegOpenKeyA(local_c,(LPCSTR)lpSubKey,&param_1);
        if (LVar2 == 0) {
          bVar1 = FUN_212f96c2(param_1,(byte *)lpSubKey,local_d4);
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



bool __cdecl FUN_212f96c2(HKEY param_1,byte *param_2,char *param_3)

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
    FUN_212f972e(param_2,param_3,local_d0);
    LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)local_d0,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrcmpA((LPCSTR)local_d0,param_3);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



void __cdecl FUN_212f972e(byte *param_1,char *param_2,byte *param_3)

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



ATOM FUN_212f97d6(void)

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
  local_2c.lpfnWndProc = FUN_212f206a;
  local_2c.hInstance = DAT_21314000;
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = (HBRUSH)&DAT_00000006;
  local_2c.lpszClassName = *(LPCSTR *)(PTR_PTR_21314124 + 0x44);
  local_2c.cbWndExtra = 4;
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



undefined4 __fastcall FUN_212f9918(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  LPVOID lpMem;
  int iVar4;
  undefined3 extraout_var;
  BSTR pOVar5;
  undefined3 extraout_var_00;
  undefined4 *puVar6;
  tagRECT local_40;
  VARIANTARG local_30;
  undefined4 *local_20;
  LPVOID local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  local_20 = param_1;
  puVar3 = (undefined4 *)FUN_212f15e6(0x34,DAT_21314020);
  if (puVar3 == (undefined4 *)0x0) {
    lpMem = (LPVOID)0x0;
  }
  else {
    lpMem = (LPVOID)FUN_212f7b1e(puVar3);
  }
  local_18 = param_1 + 1;
  puVar3 = local_18;
  puVar6 = (undefined4 *)*local_18;
  while (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar6;
    local_1c = (LPVOID)puVar6[2];
    puVar6 = puVar1;
    if (local_1c != (LPVOID)0x0) {
      FUN_212f7d1a((int)local_1c);
      HeapFree(DAT_21314020,0,local_1c);
      puVar3 = local_18;
    }
  }
  FUN_212f1ee0(puVar3);
  iVar4 = FUN_212f2975((void *)*local_20,&local_14);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*local_14 + 0xc))(local_14,0xd,3,&local_10);
    if (iVar4 == 0) {
      (**(code **)(*local_10 + 0x14))(local_10);
      while (iVar4 = (**(code **)(*local_10 + 0xc))(local_10,1,&local_8,0), iVar4 == 0) {
        (**(code **)(*local_8 + 8))(local_8);
        *(int **)((int)lpMem + 0xc) = local_8;
        *(undefined4 *)((int)lpMem + 0x14) = 0;
        *(int *)((int)lpMem + 0x10) = 0;
        *(undefined4 *)((int)lpMem + 0x18) = 0;
        *(undefined4 *)((int)lpMem + 0x1c) = 0;
        *(undefined4 *)((int)lpMem + 0x20) = 0;
        *(undefined4 *)((int)lpMem + 0x24) = 0;
        *(undefined4 *)((int)lpMem + 0x28) = 0;
        *(undefined4 *)((int)lpMem + 0x2c) = 0;
        SetRectEmpty(&local_40);
        local_c = 0;
        bVar2 = FUN_212f7be0(local_8,&DAT_212f9e04,&local_30,0,0,0,0,2,1,&local_c);
        if (CONCAT31(extraout_var,bVar2) == 0) {
          local_c = 0;
          bVar2 = FUN_212f7be0(local_8,&DAT_21301d4c,&local_30,0,0,0,0,2,1,&local_c);
          if (CONCAT31(extraout_var_00,bVar2) != 0) {
            *(int *)((int)lpMem + 0x24) = local_c;
            local_40.top = FUN_212f9b5c(&local_30);
            FUN_212f7be0(local_8,&DAT_21301d44,&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x20));
            local_40.left = FUN_212f9b5c(&local_30);
            FUN_212f7be0(local_8,&DAT_21301d3c,&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x28));
            local_40.right = FUN_212f9b5c(&local_30);
            FUN_212f7be0(local_8,&DAT_21301d34,&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x2c));
            local_40.bottom = FUN_212f9b5c(&local_30);
          }
        }
        else {
          *(int *)((int)lpMem + 0x14) = local_c;
          local_40.top = FUN_212f9b5c(&local_30);
          FUN_212f7be0(local_8,L"Left",&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x10));
          local_40.left = FUN_212f9b5c(&local_30);
          FUN_212f7be0(local_8,L"Width",&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x18));
          local_40.right = FUN_212f9b5c(&local_30);
          local_40.right = local_40.right + local_40.left;
          FUN_212f7be0(local_8,L"Height",&local_30,0,0,0,0,2,1,(int *)((int)lpMem + 0x1c));
          local_40.bottom = FUN_212f9b5c(&local_30);
          local_40.bottom = local_40.bottom + local_40.top;
        }
        if (((local_40.left < 0) && (local_40.right < 0)) ||
           ((local_40.top < 0 && (local_40.bottom < 0)))) {
          *(undefined4 *)((int)lpMem + 0xc) = 0;
        }
        else {
          pOVar5 = FUN_212f7b70(local_8);
          *(BSTR *)((int)lpMem + 8) = pOVar5;
          FUN_212f7b49(local_18,lpMem);
          puVar3 = (undefined4 *)FUN_212f15e6(0x34,DAT_21314020);
          if (puVar3 == (undefined4 *)0x0) {
            lpMem = (LPVOID)0x0;
          }
          else {
            lpMem = (LPVOID)FUN_212f7b1e(puVar3);
          }
        }
      }
      (**(code **)(*local_10 + 8))(local_10);
    }
    (**(code **)(*local_14 + 8))(local_14);
  }
  if (lpMem != (LPVOID)0x0) {
    FUN_212f7d1a((int)lpMem);
    HeapFree(DAT_21314020,0,lpMem);
  }
  return 1;
}



uint __cdecl FUN_212f9b5c(VARIANTARG *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  uVar1 = (param_1->n1).n2.vt;
  if ((uVar1 & 0x4000) == 0) {
    if (uVar1 == 2) {
      uVar2 = (uint)*(short *)((int)&param_1->n1 + 8);
      goto LAB_212f9b93;
    }
    if (uVar1 == 3) {
      uVar2 = *(uint *)((int)&param_1->n1 + 8);
      goto LAB_212f9b93;
    }
    if (uVar1 == 4) {
LAB_212f9b8c:
      lVar3 = __ftol();
      uVar2 = (uint)lVar3;
      goto LAB_212f9b93;
    }
    if (uVar1 != 5) {
      if (uVar1 == 0x11) {
        uVar2 = (uint)*(byte *)((int)&param_1->n1 + 8);
      }
      goto LAB_212f9b93;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar2 = (uint)**(short **)((int)&param_1->n1 + 8);
      goto LAB_212f9b93;
    }
    if (uVar1 == 3) {
      uVar2 = **(uint **)((int)&param_1->n1 + 8);
      goto LAB_212f9b93;
    }
    if (uVar1 == 4) goto LAB_212f9b8c;
    if (uVar1 != 5) {
      if (uVar1 == 0x11) {
        uVar2 = (uint)**(byte **)((int)&param_1->n1 + 8);
      }
      goto LAB_212f9b93;
    }
  }
  lVar3 = __ftol();
  uVar2 = (uint)lVar3;
LAB_212f9b93:
  VariantClear(param_1);
  return uVar2;
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



void __thiscall FUN_212f9bc6(void *this,undefined4 param_1)

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



void __cdecl FUN_212f9bef(int param_1,undefined4 *param_2)

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
          cVar6 = (&DAT_212f4e28)[uVar1];
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
  FUN_212f9cae((void *)(param_1 + 0x20),*param_2,&local_1c);
  return;
}



void __thiscall FUN_212f9cae(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)this + 10);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(**(int **)((int)this + 4) + 0x18))
                (*(int **)((int)this + 4),param_1,&DAT_212f4e18,0,1,param_2,0,0,0);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 4) + iVar3 * 4);
          (**(code **)(*piVar2 + 0x18))(piVar2,param_1,&DAT_212f4e18,0,1,param_2,0,0,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)this + 10));
      }
    }
  }
  return;
}



int FUN_212f9d10(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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



undefined4 FUN_212f9e65(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(*(int *)(param_1 + -0x44) + 0x68))(param_2);
  if (iVar2 == 0) {
    if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
      uVar3 = 1;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x2c);
      cVar1 = FUN_212fa023();
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



char FUN_212f9f18(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



undefined4 __thiscall FUN_212f9f53(void *this,int param_1)

{
  int *piVar1;
  short sVar2;
  SHORT SVar3;
  HWND pHVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  undefined2 extraout_var;
  undefined2 uVar11;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 uVar12;
  int iVar13;
  
  pHVar4 = GetFocus();
  if (pHVar4 == *(HWND *)((int)this + 0xa0)) {
    uVar5 = FUN_212f2b80(this,(int)*(short *)((int)this + 0xde));
    if (-1 < (int)uVar5) {
      if (*(uint *)((int)this + 0x168) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar5 / *(uint *)((int)this + 0x168);
      }
      iVar7 = FUN_212f3808(this,uVar6);
      uVar8 = FUN_212f26e3(this);
      if (uVar8 == 0) {
        uVar12 = extraout_var_05;
        if ((param_1 == 0x25) ||
           (((uVar11 = extraout_var, param_1 == 9 &&
             (SVar3 = GetKeyState(0x11), uVar11 = extraout_var_00, ((int)SVar3 & 0x80000000U) != 0))
            && (SVar3 = GetKeyState(0x10), uVar12 = extraout_var_06, uVar11 = extraout_var_01,
               ((int)SVar3 & 0x80000000U) != 0)))) {
          iVar13 = uVar5 - 1;
          if ((int)(uVar5 - 1) < (int)(uVar6 * *(int *)((int)this + 0x168))) {
            iVar13 = iVar7;
          }
          if (*(short *)(*(int *)((int)this + 0x160) + 0x1a +
                        *(int *)((int)this + iVar13 * 4 + 0x180) * 0x20) != 0) {
            (**(code **)(*(int *)((int)this + 0xc4) + 0x70))
                      ((int)this + 0xc4,
                       CONCAT22(uVar12,*(undefined2 *)((int)this + iVar13 * 4 + 0x180)));
          }
        }
        else {
          if ((param_1 == 0x27) ||
             ((param_1 == 9 &&
              (SVar3 = GetKeyState(0x11), uVar11 = extraout_var_02, ((int)SVar3 & 0x80000000U) != 0)
              ))) {
            uVar5 = uVar5 + 1;
            if (iVar7 < (int)uVar5) {
              uVar5 = uVar6 * *(int *)((int)this + 0x168);
            }
            sVar2 = *(short *)(*(int *)((int)this + 0x160) + 0x1a +
                              *(int *)((int)this + uVar5 * 4 + 0x180) * 0x20);
          }
          else {
            if ((param_1 == 0x21) &&
               (SVar3 = GetKeyState(0x11), uVar11 = extraout_var_03, ((int)SVar3 & 0x80000000U) != 0
               )) {
              uVar6 = FUN_212f3808(this,1);
              do {
                uVar5 = uVar5 - 1;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar6;
                }
              } while (*(int *)((int)this + uVar5 * 4 + 0x180) == 100);
            }
            else {
              if ((param_1 != 0x22) ||
                 (SVar3 = GetKeyState(0x11), uVar11 = extraout_var_04,
                 ((int)SVar3 & 0x80000000U) == 0)) {
                if ((*(short *)((int)this + 0x4a4) != 1) ||
                   (((param_1 != 0x26 && (param_1 != 0x28)) || (*(uint *)((int)this + 0x16c) < 2))))
                goto LAB_212fa019;
                piVar1 = (int *)((int)this + 0xc4);
                (**(code **)(*(int *)((int)this + 0xc4) + 0x70))
                          (piVar1,CONCAT22(uVar11,*(undefined2 *)((int)this + uVar5 * 4 + 0x180)));
                if (param_1 == 0x28) {
                  iVar7 = (*(int *)((int)this + 0x16c) + -1) * *(int *)((int)this + 0x168);
                }
                else {
                  iVar7 = *(int *)((int)this + 0x168);
                }
                iVar7 = uVar5 + iVar7;
                if (*(int *)((int)this + iVar7 * 4 + 0x180) == 100) {
                  iVar7 = FUN_212f3808(this,0);
                }
                if (*(short *)(*(int *)((int)this + 0x160) + 0x1a +
                              *(int *)((int)this + iVar7 * 4 + 0x180) * 0x20) != 0) {
                  (**(code **)(*piVar1 + 0x70))
                            (piVar1,CONCAT22((short)((uint)*(int *)((int)this + 0x160) >> 0x10),
                                             *(undefined2 *)((int)this + iVar7 * 4 + 0x180)));
                }
                goto LAB_212fe28a;
              }
              do {
                uVar5 = uVar5 + 1;
                if (*(int *)((int)this + 0x168) + -1 < (int)uVar5) {
                  uVar5 = (*(int *)((int)this + 0x16c) + -1) * *(int *)((int)this + 0x168);
                }
              } while (*(int *)((int)this + uVar5 * 4 + 0x180) == 100);
            }
            sVar2 = *(short *)(*(int *)((int)this + 0x160) + 0x1a +
                              *(int *)((int)this + uVar5 * 4 + 0x180) * 0x20);
          }
          if (sVar2 != 0) {
            puVar10 = (undefined2 *)((int)this + uVar5 * 4 + 0x180);
            (**(code **)(*(int *)((int)this + 0xc4) + 0x70))
                      ((int)this + 0xc4,CONCAT22((short)((uint)puVar10 >> 0x10),*puVar10));
          }
        }
        goto LAB_212fe28a;
      }
    }
LAB_212fa019:
    uVar9 = 0;
  }
  else {
LAB_212fe28a:
    uVar9 = 1;
  }
  return uVar9;
}



char FUN_212fa023(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



uint __thiscall FUN_212fa05e(void *this,POINT *param_1)

{
  POINT *pPVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  RECT local_24;
  tagRECT local_14;
  
  pPVar1 = param_1;
  FUN_212f2e73(this,&local_14);
  iVar2 = FUN_212fa095(&local_14,param_1->x,param_1->y);
  if ((iVar2 == 0) && (uVar4 = 0, *(int *)((int)this + 0x16c) * *(int *)((int)this + 0x168) != 0)) {
    param_1 = (POINT *)((int)this + 0x180);
    do {
      if (param_1->x != 100) {
        FUN_212f2ba1(this,&local_24.left,uVar4,0);
        BVar3 = PtInRect(&local_24,*pPVar1);
        if (BVar3 != 0) {
          return uVar4;
        }
      }
      param_1 = (POINT *)&param_1->y;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)((int)this + 0x16c) * *(int *)((int)this + 0x168)));
  }
  return 100;
}



void FUN_212fa095(RECT *param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  tagRECT local_14;
  
  CopyRect(&local_14,param_1);
  local_14.bottom = local_14.bottom + 1;
  local_14.right = local_14.right + 1;
  pt.y = param_3;
  pt.x = param_2;
  PtInRect(&local_14,pt);
  return;
}



void __thiscall FUN_212fa104(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_1 == 0);
  }
  return;
}



undefined4 FUN_212fa11e(HWND param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_2 == 0x111) {
    bVar1 = (short)param_3 == 1;
  }
  else {
    if (param_2 != 0x112) {
      return 0;
    }
    if (param_3 == 0xf060) goto LAB_212fa14a;
    bVar1 = param_3 == 0xf160;
  }
  if (!bVar1) {
    return 0;
  }
LAB_212fa14a:
  EndDialog(param_1,1);
  return 0;
}



int FUN_212fa164(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x4c);
  iVar2 = FUN_212fa1aa(piVar1,param_2);
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



void __thiscall FUN_212fa1aa(void *this,int *param_1)

{
  int iVar1;
  undefined2 local_1c [4];
  int local_14;
  int local_c;
  undefined4 local_8;
  
  FUN_212f1626((int *)((int)this + 0x88),&local_c);
  local_14 = local_c;
  local_1c[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,u__ExtentX_213167e4,local_1c);
  if (-1 < iVar1) {
    local_14 = local_8;
    (**(code **)(*param_1 + 0x10))(param_1,u__ExtentY_213167f8,local_1c);
  }
  return;
}



int FUN_212fa1ff(void *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  BSTR pOVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int **ppiVar8;
  uint *puVar9;
  bool bVar10;
  short sVar11;
  CHAR local_1c8 [256];
  BSTR local_c8 [31];
  byte local_4c;
  undefined4 *local_48;
  BSTR local_44;
  BSTR local_40;
  LPWSTR local_3c;
  undefined4 *local_38;
  LPWSTR local_34;
  int local_30;
  BSTR local_2c;
  LPCWSTR local_28;
  BSTR local_24;
  BSTR local_20;
  int *local_1c;
  undefined2 local_18 [4];
  int *local_10 [3];
  
  puVar1 = param_2;
  local_18[0] = 3;
  local_10[0] = (int *)0x60000;
  (**(code **)(*param_2 + 0x10))(param_2,L"_Version",local_18);
  if (PTR_u_TabOrientation_213143c8 != (undefined *)0x0) {
    param_2 = &DAT_213143d8;
    do {
      if (param_3 == 0) {
        uVar6 = *param_2;
        bVar10 = true;
        pcVar7 = (char *)(param_2[-3] + 0xd4 + (int)param_1);
        puVar9 = param_2 + -2;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          bVar10 = *pcVar7 == (char)*puVar9;
          pcVar7 = pcVar7 + 1;
          puVar9 = (uint *)((int)puVar9 + 1);
        } while (bVar10);
        if (!bVar10) goto LAB_212fa245;
      }
      else {
LAB_212fa245:
        local_18[0] = (undefined2)param_2[-1];
        uVar6 = *param_2;
        puVar3 = (undefined4 *)(param_2[-3] + 0xd4 + (int)param_1);
        ppiVar8 = local_10;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *ppiVar8 = (int *)*puVar3;
          puVar3 = puVar3 + 1;
          ppiVar8 = ppiVar8 + 1;
        }
        uVar5 = param_2[-4];
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)ppiVar8 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          ppiVar8 = (int **)((int)ppiVar8 + 1);
        }
        iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,uVar5,local_18);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      puVar9 = param_2 + 1;
      param_2 = param_2 + 5;
    } while (*puVar9 != 0);
  }
  if (*(short *)((int)param_1 + 0xf4) != 0) {
    iVar2 = (**(code **)**(undefined4 **)((int)param_1 + 0x14c))
                      (*(undefined4 **)((int)param_1 + 0x14c),&DAT_212f4c10,local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_18[0] = 0xd;
    iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,L"MouseIcon",local_18);
    (**(code **)(*local_10[0] + 8))(local_10[0]);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  if (*(short *)((int)param_1 + 0xf2) != 0) {
    iVar2 = (**(code **)**(undefined4 **)((int)param_1 + 0x150))
                      (*(undefined4 **)((int)param_1 + 0x150),&DAT_212f4c10,local_10);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_18[0] = 0xd;
    iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,L"Font",local_18);
    (**(code **)(*local_10[0] + 8))(local_10[0]);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  FUN_212f2761(param_1);
  param_3 = 0;
  if (0 < *(short *)((int)param_1 + 0xdc)) {
    local_30 = 0;
    do {
      local_10[2] = (int *)(*(int *)((int)param_1 + 0x160) + local_30);
      sVar11 = (short)param_3;
      if (*(short *)*local_10[2] != 0) {
        local_34 = FUN_212f1d12("TabCaption",(BSTR)0x0);
        FUN_212f1d78(&local_34,sVar11,(LPCSTR)0x0);
        local_18[0] = 8;
        local_10[0] = (int *)*local_10[2];
        iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,local_34,local_18);
        SysFreeString(local_34);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      if (local_10[2][1] != 0) {
        local_3c = FUN_212f1d12("TabPicture",(BSTR)0x0);
        FUN_212f1d78(&local_3c,sVar11,(LPCSTR)0x0);
        (*(code *)**(undefined4 **)local_10[2][1])
                  ((undefined4 *)local_10[2][1],&DAT_212f4c10,local_10);
        local_18[0] = 0xd;
        iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,local_3c,local_18);
        (**(code **)(*local_10[0] + 8))(local_10[0]);
        SysFreeString(local_3c);
        if (iVar2 < 0) {
          return iVar2;
        }
      }
      puVar3 = FUN_212f1f8c(*(void **)((int)param_1 + 0x15c),param_3);
      if (puVar3 != (undefined4 *)0x0) {
        local_38 = (undefined4 *)puVar3[2];
        if (local_38[7] != 0) {
          FUN_212f9918(local_38);
        }
        local_28 = FUN_212f1d12("Tab",(BSTR)0x0);
        FUN_212f1d78(&local_28,sVar11,(LPCSTR)0x0);
        iVar2 = lstrlenW(local_28);
        uVar6 = iVar2 * 2 + 2;
        FUN_212f159d(local_c8,uVar6);
        WideCharToMultiByte(0,0,local_28,-1,(LPSTR)local_c8[0],uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        local_20 = local_c8[0];
        SysFreeString(local_28);
        lstrcpyA(local_1c8,(LPCSTR)local_20);
        lstrcatA(local_1c8,".");
        lstrcatA(local_1c8,"ControlEnabled");
        local_24 = FUN_212f1d12(local_1c8,(BSTR)0x0);
        local_18[0] = 0xb;
        local_10[0] = (int *)CONCAT22(local_10[0]._2_2_,-(ushort)(local_38[7] != 0));
        param_2 = (uint *)(**(code **)(*puVar1 + 0x10))(puVar1,local_24,local_18);
        SysFreeString(local_24);
        if ((int)param_2 < 0) {
joined_r0x212fcf13:
          if (local_c8[0] == (BSTR)0x0) {
            return (int)param_2;
          }
          if ((local_4c & 1) == 0) {
            return (int)param_2;
          }
LAB_212fcf22:
          HeapFree(DAT_21314020,0,local_c8[0]);
          return (int)param_2;
        }
        local_10[2] = (undefined4 *)0x0;
        local_48 = local_38 + 1;
        local_44 = (BSTR)*local_48;
        pOVar4 = local_44;
        while (pOVar4 != (BSTR)0x0) {
          local_24 = *(BSTR *)pOVar4;
          local_1c = *(int **)(pOVar4 + 4);
          if (local_1c[3] == 0) {
            if (local_1c != (int *)0x0) {
              FUN_212f7d1a((int)local_1c);
              HeapFree(DAT_21314020,0,local_1c);
            }
            FUN_212fb73b(local_48,(int *)local_44);
            local_44 = local_24;
            pOVar4 = local_24;
          }
          else {
            local_44 = local_24;
            SysFreeString((BSTR)local_1c[2]);
            pOVar4 = FUN_212f7b70((int *)local_1c[3]);
            local_1c[2] = (int)pOVar4;
            lstrcpyA(local_1c8,(LPCSTR)local_20);
            lstrcatA(local_1c8,".");
            lstrcatA(local_1c8,"Control");
            local_40 = FUN_212f1d12(local_1c8,(BSTR)0x0);
            FUN_212f1d78(&local_40,(short)local_10[2],(LPCSTR)0x0);
            local_18[0] = 8;
            local_10[0] = (int *)local_1c[2];
            param_2 = (uint *)(**(code **)(*puVar1 + 0x10))(puVar1,local_40,local_18);
            SysFreeString(local_40);
            if ((int)param_2 < 0) {
              if (local_c8[0] == (BSTR)0x0) {
                return (int)param_2;
              }
              if ((local_4c & 1) == 0) {
                return (int)param_2;
              }
              goto LAB_212fcf22;
            }
            if (*local_1c == 0) {
              local_2c = FUN_212f1d12(local_1c8,(BSTR)0x0);
              FUN_212f1d78(&local_2c,(short)local_10[2],"Enabled");
              local_18[0] = 0xb;
              local_10[0] = (int *)CONCAT22(local_10[0]._2_2_,-(ushort)(*local_1c != 0));
              iVar2 = (**(code **)(*puVar1 + 0x10))(puVar1,local_2c,local_18);
              SysFreeString(local_2c);
              if (iVar2 < 0) {
                iVar2 = FUN_212fcf47();
                return iVar2;
              }
            }
            local_10[2] = (int *)((int)local_10[2] + 1);
            pOVar4 = local_24;
          }
        }
        lstrcpyA(local_1c8,(LPCSTR)local_20);
        lstrcatA(local_1c8,".");
        lstrcatA(local_1c8,"ControlCount");
        local_20 = FUN_212f1d12(local_1c8,(BSTR)0x0);
        local_18[0] = 2;
        local_10[0] = (int *)CONCAT22(local_10[0]._2_2_,(short)local_38[3]);
        param_2 = (uint *)(**(code **)(*puVar1 + 0x10))(puVar1,local_20,local_18);
        SysFreeString(local_20);
        if ((int)param_2 < 0) goto joined_r0x212fcf13;
        if ((local_c8[0] != (BSTR)0x0) && ((local_4c & 1) != 0)) {
          HeapFree(DAT_21314020,0,local_c8[0]);
        }
      }
      param_3 = param_3 + 1;
      local_30 = local_30 + 0x20;
    } while (param_3 < *(short *)((int)param_1 + 0xdc));
  }
  return 0;
}



undefined4 __cdecl FUN_212fa8a5(HWND param_1)

{
  BOOL BVar1;
  
  while( true ) {
    if (param_1 == (HWND)0x0) {
      return 0;
    }
    BVar1 = IsIconic(param_1);
    if (BVar1 != 0) break;
    param_1 = GetParent(param_1);
  }
  return 1;
}



void FUN_212fa8cc(undefined *param_1,LPCWSTR param_2,uint param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  LPSTR local_124 [31];
  byte local_a8;
  LPSTR local_a4 [31];
  byte local_28;
  _union_2683 local_24;
  int *local_14;
  undefined *local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_1;
  iVar3 = lstrlenW(param_2);
  uVar4 = iVar3 * 2 + 2;
  FUN_212f159d(local_124,uVar4);
  WideCharToMultiByte(0,0,param_2,-1,local_124[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar3 = lstrcmpiA(local_124[0],"left");
  if (iVar3 == 0) {
    local_8 = *(int *)(param_1 + 0x10);
  }
  else {
    local_8 = *(int *)(param_1 + 0x14);
  }
  if (((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x24) == 0)) &&
     (bVar2 = FUN_212f7be0(*(int **)(param_1 + 0xc),param_2,(VARIANTARG *)&local_24.n2,0,0,0,0,2,1,
                           &local_8), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = lstrlenW(param_2);
    uVar4 = iVar3 * 2 + 2;
    FUN_212f159d(local_a4,uVar4);
    WideCharToMultiByte(0,0,param_2,-1,local_a4[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar3 = lstrcmpiA(local_a4[0],"left");
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x10) = local_8;
    }
    else {
      *(int *)(param_1 + 0x14) = local_8;
    }
    uVar4 = FUN_212f9b5c((VARIANTARG *)&local_24.n2);
    param_3 = param_3 + uVar4;
    if (uVar4 != param_3) {
      local_24.n2.vt = 4;
      local_24._8_4_ = (undefined4)(int)param_3;
      param_3 = 0xfffffffd;
      FUN_212f7be0(*(int **)(param_1 + 0xc),param_2,(VARIANTARG *)0x0,1,&local_24,1,&param_3,4,1,
                   &local_8);
    }
  }
  else {
    iVar3 = lstrlenW(param_2);
    uVar4 = iVar3 * 2 + 2;
    FUN_212f159d(local_a4,uVar4);
    WideCharToMultiByte(0,0,param_2,-1,local_a4[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    iVar3 = lstrcmpiA(local_a4[0],"left");
    if (iVar3 == 0) {
      param_2 = (LPCWSTR)(param_1 + 0x20);
      param_1 = &DAT_21301d44;
      local_10 = &DAT_21301d3c;
      local_14 = (int *)(puVar1 + 0x28);
    }
    else {
      param_2 = (LPCWSTR)(param_1 + 0x24);
      param_1 = &DAT_21301d4c;
      local_10 = &DAT_21301d34;
      local_14 = (int *)(puVar1 + 0x2c);
    }
    local_8 = *(int *)param_2;
    bVar2 = FUN_212f7be0(*(int **)(puVar1 + 0xc),param_1,(VARIANTARG *)&local_24.n2,0,0,0,0,2,1,
                         &local_8);
    if (CONCAT31(extraout_var_00,bVar2) != 0) {
      *(int *)param_2 = local_8;
      uVar4 = FUN_212f9b5c((VARIANTARG *)&local_24.n2);
      local_c = param_3 + uVar4;
      if (uVar4 != local_c) {
        local_24._8_4_ = (undefined4)(int)local_c;
        local_24.n2.vt = 4;
        local_c = 0xfffffffd;
        FUN_212f7be0(*(int **)(puVar1 + 0xc),param_1,(VARIANTARG *)0x0,1,&local_24,1,&local_c,4,1,
                     (int *)param_2);
        FUN_212f7be0(*(int **)(puVar1 + 0xc),local_10,(VARIANTARG *)&local_24.n2,0,0,0,0,2,1,
                     local_14);
        uVar4 = FUN_212f9b5c((VARIANTARG *)&local_24.n2);
        local_24.n2.vt = 4;
        local_24._8_4_ = (undefined4)(int)(uVar4 + param_3);
        param_2 = (LPCWSTR)0xfffffffd;
        FUN_212f7be0(*(int **)(puVar1 + 0xc),local_10,(VARIANTARG *)0x0,1,&local_24,1,&param_2,4,1,
                     local_14);
      }
    }
  }
  if ((local_a4[0] != (LPCSTR)0x0) && ((local_28 & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_a4[0]);
  }
  if ((local_124[0] != (LPCSTR)0x0) && ((local_a8 & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_124[0]);
  }
  return;
}



void __fastcall FUN_212faa39(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)param_1[1];
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    puVar3 = puVar1;
    if (piVar2[3] != 0) {
      if (param_1[7] == 0) {
        FUN_212fa8cc((undefined *)piVar2,L"Left",75000);
      }
      uVar4 = FUN_212f26e3((void *)*param_1);
      if (uVar4 == 0) {
        FUN_212f7d42((int)piVar2,*piVar2);
      }
    }
  }
  param_1[7] = 1;
  return;
}



undefined4 FUN_212faaa1(int *param_1,short param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  BOOL BVar7;
  int iVar8;
  tagRECT local_2c;
  tagRECT local_1c;
  int local_c;
  int *local_8;
  
  if ((param_2 < 1) || (99 < param_2)) {
    uVar5 = (**(code **)(param_1[-0x31] + 0x30))(0x800a017c,0x17c,0x17c);
  }
  else {
    if (param_2 != (short)param_1[6]) {
      if (param_2 < (short)param_1[6]) {
        piVar1 = param_1 + -0x31;
        uVar2 = FUN_212f26e3(piVar1);
        if ((uVar2 == 0) && (param_1[0x100] == 0)) {
          iVar3 = param_1[0x2c];
        }
        else {
          iVar3 = (int)*(short *)((int)param_1 + 0x1a);
        }
        iVar8 = (int)param_2;
        local_c = iVar8;
        if (iVar8 <= iVar3) {
          (**(code **)(*param_1 + 0x70))(param_1,0);
        }
        uVar2 = FUN_212f26e3(piVar1);
        if ((uVar2 == 0) && (param_1[0x100] == 0)) {
          iVar3 = param_1[0x2c];
        }
        else {
          iVar3 = (int)*(short *)((int)param_1 + 0x1a);
        }
        puVar4 = FUN_212f1f8c((void *)param_1[0x26],iVar3);
        FUN_212f9918((undefined4 *)puVar4[2]);
        iVar3 = (int)(short)param_1[6];
        while (iVar3 = iVar3 + -1, iVar8 <= iVar3) {
          puVar4 = FUN_212f1f8c((void *)param_1[0x26],iVar3);
          if (*(int *)(puVar4[2] + 0xc) != 0) {
            uVar5 = FUN_212fd3c8();
            return uVar5;
          }
        }
        iVar3 = (short)param_1[6] + -1;
        if (iVar8 <= iVar3) {
          do {
            FUN_212f44a8(piVar1,iVar3);
            local_8 = FUN_212f1f8c((void *)param_1[0x26],iVar3);
            pvVar6 = (LPVOID)local_8[2];
            if (pvVar6 != (LPVOID)0x0) {
              FUN_212f446a((int)pvVar6);
              HeapFree(DAT_21314020,0,pvVar6);
            }
            FUN_212fb73b((void *)param_1[0x26],local_8);
            iVar3 = iVar3 + -1;
          } while (local_c <= iVar3);
        }
      }
      iVar3 = (int)param_2;
      pvVar6 = HeapReAlloc(DAT_21314020,0,(LPVOID)param_1[0x27],iVar3 << 5);
      param_1[0x27] = (int)pvVar6;
      if (pvVar6 == (LPVOID)0x0) {
        uVar5 = (**(code **)(param_1[-0x31] + 0x30))(0x800a0007,7,7);
        return uVar5;
      }
      if ((short)param_1[6] < param_2) {
        for (iVar8 = (int)(short)param_1[6]; iVar8 < iVar3; iVar8 = iVar8 + 1) {
          FUN_212f63cd(param_1 + -0x31,iVar8);
          pvVar6 = FUN_212f15e6(0x20,DAT_21314020);
          if (pvVar6 == (LPVOID)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = FUN_212f6444(pvVar6,param_1 + -0x31);
          }
          FUN_212f646c((void *)param_1[0x26],puVar4);
        }
        FUN_212fad1f(param_1 + -0x31,(int)(short)param_1[6],iVar3 + -1);
      }
      piVar1 = param_1 + -0x31;
      FUN_212f2e73(piVar1,&local_2c);
      *(short *)(param_1 + 6) = param_2;
      FUN_212f6c5b(piVar1);
      iVar3 = 0;
      FUN_212f6cc6(piVar1,0);
      FUN_212f2e73(piVar1,&local_1c);
      BVar7 = EqualRect(&local_1c,&local_2c);
      if ((BVar7 == 0) && (0 < (short)param_1[6])) {
        do {
          puVar4 = FUN_212f1f8c((void *)param_1[0x26],iVar3);
          FUN_212fad9e((void *)puVar4[2],(short)param_1[4],&local_2c.left,&local_1c.left);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (short)param_1[6]);
      }
      uVar2 = FUN_212f26e3(piVar1);
      if ((uVar2 == 0) && (param_1[0x100] == 0)) {
        iVar3 = param_1[0x2c];
      }
      else {
        iVar3 = (int)*(short *)((int)param_1 + 0x1a);
      }
      FUN_212f6eec(piVar1,iVar3);
      FUN_212faf93(piVar1,param_1 + -0xf);
      FUN_212f2fa9(piVar1,(RECT *)0x0);
      param_1[-5] = param_1[-5] | 1;
      FUN_212f9bc6(param_1 + -0x26,1);
    }
    uVar5 = 0;
  }
  return uVar5;
}



void __thiscall FUN_212fad1f(void *this,uint param_1,int param_2)

{
  LPWSTR pWVar1;
  uint uVar2;
  undefined4 *puVar3;
  CHAR local_10 [12];
  
  if ((int)param_1 <= param_2) {
    uVar2 = param_1;
    param_1 = param_1 << 5;
    do {
      FUN_212fad77(uVar2,local_10);
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x160) + param_1);
      SysFreeString((BSTR)*puVar3);
      pWVar1 = FUN_212f1d12(local_10,(BSTR)0x0);
      param_1 = param_1 + 0x20;
      uVar2 = uVar2 + 1;
      *puVar3 = pWVar1;
    } while ((int)uVar2 <= param_2);
  }
  return;
}



void FUN_212fad77(uint param_1,LPSTR param_2)

{
  lstrcpyA(param_2,"Tab ");
  FUN_212f1e5d(param_1,param_2 + 4,10);
  return;
}



void __thiscall FUN_212fad9e(void *this,short param_1,int *param_2,int *param_3)

{
  uint cbMultiByte;
  int iVar1;
  int iVar2;
  int *piVar3;
  LPCWSTR lpString;
  int iVar4;
  int *piVar5;
  int *piVar6;
  wchar_t *pwVar7;
  LPSTR local_8c [31];
  byte local_10;
  HWND local_c;
  int iStack_8;
  
  FUN_212fae93((undefined4 *)this);
                    // WARNING: Load size is inaccurate
  (**(code **)(*(int *)(*this + 0xc4) + 0x44))((int *)(*this + 0xc4),&local_c);
  LockWindowUpdate(local_c);
                    // WARNING: Load size is inaccurate
  lpString = (LPCWSTR)FUN_212faf68(*this);
  iVar4 = lstrlenW(lpString);
  cbMultiByte = iVar4 * 2 + 2;
  FUN_212f159d(local_8c,cbMultiByte);
  WideCharToMultiByte(0,0,lpString,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  piVar6 = param_3 + 1;
  iVar4 = *param_3;
  iVar1 = param_3[3];
  iVar2 = param_2[3];
  param_3 = (int *)(param_3[2] - param_2[2]);
  piVar6 = (int *)(*piVar6 - param_2[1]);
  piVar5 = (int *)(iVar4 - *param_2);
  iVar4 = lstrcmpiA(local_8c[0],"Twip");
  param_2 = (int *)(iVar1 - iVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_21306451(1);
    piVar6 = (int *)((int)piVar6 * iVar4);
    iVar4 = FUN_21306413(1);
    piVar5 = (int *)((int)piVar5 * iVar4);
    iVar4 = FUN_21306413(1);
    param_2 = (int *)(iVar4 * (iVar1 - iVar2));
    iVar4 = FUN_21306413(1);
    param_3 = (int *)(iVar4 * (int)param_3);
  }
  piVar3 = *(int **)((int)this + 4);
  if (piVar3 == (int *)0x0) goto LAB_212fae43;
  iStack_8 = *piVar3;
  if ((param_1 == 0) || (piVar6 = param_2, param_1 == 1)) {
    pwVar7 = L"Top";
LAB_212fae80:
    FUN_212fa8cc((undefined *)piVar3[2],pwVar7,(uint)piVar6);
  }
  else {
    piVar6 = piVar5;
    if ((param_1 == 2) || (piVar6 = param_3, param_1 == 3)) {
      pwVar7 = L"Left";
      goto LAB_212fae80;
    }
  }
  if (iStack_8 != 0) {
    FUN_212fe495();
    return;
  }
LAB_212fae43:
  LockWindowUpdate((HWND)0x0);
  if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_8c[0]);
  }
  return;
}



void FUN_212fae65(void)

{
  short sVar1;
  undefined *puVar2;
  undefined4 *in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  uint unaff_EDI;
  wchar_t *pwVar3;
  
  puVar2 = (undefined *)in_EAX[2];
  *(undefined4 *)(unaff_EBP + -4) = *in_EAX;
  sVar1 = *(short *)(unaff_EBP + 8);
  if (sVar1 == 0) {
LAB_212fae7b:
    unaff_EBX = unaff_EDI;
    pwVar3 = L"Top";
  }
  else {
    if (sVar1 == 1) {
      unaff_EDI = *(uint *)(unaff_EBP + 0xc);
      goto LAB_212fae7b;
    }
    if (sVar1 != 2) {
      if (sVar1 != 3) goto LAB_212fae88;
      unaff_EBX = *(uint *)(unaff_EBP + 0x10);
    }
    pwVar3 = L"Left";
  }
  FUN_212fa8cc(puVar2,pwVar3,unaff_EBX);
LAB_212fae88:
  if (*(int *)(unaff_EBP + -4) == 0) {
    LockWindowUpdate((HWND)0x0);
    if ((*(int *)(unaff_EBP + -0x88) != 0) && ((*(byte *)(unaff_EBP + -0xc) & 1) != 0)) {
      HeapFree(DAT_21314020,0,*(LPVOID *)(unaff_EBP + -0x88));
    }
    return;
  }
  FUN_212fe495();
  return;
}



void __fastcall FUN_212fae93(undefined4 *param_1)

{
  int *piVar1;
  LPVOID lpMem;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  iVar3 = FUN_212f2975((void *)*param_1,&local_10);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*local_10 + 0xc))(local_10,0xd,3,&local_8);
    if (iVar3 == 0) {
      (**(code **)(*local_8 + 0x14))(local_8);
      iVar3 = *local_8;
      while (iVar3 = (**(code **)(iVar3 + 0xc))(local_8,1,&local_c,0), iVar3 == 0) {
        (**(code **)(*local_c + 8))(local_c);
        puVar4 = (undefined4 *)param_1[1];
        while (puVar4 != (undefined4 *)0x0) {
          iVar3 = puVar4[2];
          if (local_c == *(int **)(iVar3 + 0xc)) {
            *(undefined4 *)(iVar3 + 4) = 1;
            break;
          }
          puVar4 = (undefined4 *)*puVar4;
          if (*(int **)(iVar3 + 0xc) == (int *)0x0) {
            FUN_212fe688(iVar3);
            return;
          }
        }
        iVar3 = *local_8;
      }
      piVar2 = (int *)param_1[1];
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar2;
        lpMem = (LPVOID)piVar2[2];
        if (*(int *)((int)lpMem + 4) == 0) {
          *(undefined4 *)((int)lpMem + 0xc) = 0;
          if (lpMem != (LPVOID)0x0) {
            FUN_212f7d1a((int)lpMem);
            HeapFree(DAT_21314020,0,lpMem);
          }
          FUN_212fb73b(param_1 + 1,piVar2);
          piVar2 = piVar1;
        }
        else {
          *(undefined4 *)((int)lpMem + 4) = 0;
          piVar2 = piVar1;
        }
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
    (**(code **)(*local_10 + 8))(local_10);
  }
  return;
}



void __fastcall FUN_212faf21(int param_1)

{
  undefined4 *puVar1;
  LPVOID lpMem;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
code_r0x212faf21:
  *(undefined4 *)(param_1 + 4) = unaff_ESI;
  do {
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))(*(int **)(unaff_EBP + -4));
    if (iVar2 != 0) {
      puVar3 = *(undefined4 **)(unaff_EBX + 4);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
      if (puVar3 != unaff_EDI) {
        do {
          puVar1 = (undefined4 *)*puVar3;
          lpMem = (LPVOID)puVar3[2];
          if (*(int *)((int)lpMem + 4) == 0) {
            *(undefined4 *)((int)lpMem + 0xc) = 0;
            if (lpMem != (LPVOID)0x0) {
              FUN_212f7d1a((int)lpMem);
              HeapFree(DAT_21314020,0,lpMem);
            }
            FUN_212fb73b((void *)(unaff_EBX + 4),*(int **)(unaff_EBP + -0x10));
          }
          else {
            *(undefined4 *)((int)lpMem + 4) = 0;
          }
          *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
          puVar3 = puVar1;
        } while (puVar1 != (undefined4 *)0x0);
      }
      (**(code **)(**(int **)(unaff_EBP + -4) + 8))(*(int **)(unaff_EBP + -4));
      (**(code **)(**(int **)(unaff_EBP + -0xc) + 8))(*(int **)(unaff_EBP + -0xc));
      return;
    }
    (**(code **)(**(int **)(unaff_EBP + -8) + 8))(*(int **)(unaff_EBP + -8));
    puVar3 = *(undefined4 **)(unaff_EBX + 4);
    while (puVar3 != unaff_EDI) {
      param_1 = puVar3[2];
      if (*(undefined4 **)(unaff_EBP + -8) == *(undefined4 **)(param_1 + 0xc))
      goto code_r0x212faf21;
      puVar3 = (undefined4 *)*puVar3;
      if (*(undefined4 **)(param_1 + 0xc) == unaff_EDI) {
        FUN_212fe688(param_1);
        return;
      }
    }
  } while( true );
}



LONG __fastcall FUN_212faf68(void *param_1)

{
  LONG *pLVar1;
  int iVar2;
  BSTR pOVar3;
  
  pLVar1 = (LONG *)((int)param_1 + 0x4dc);
  if ((*(int *)((int)param_1 + 0x4dc) == 0) &&
     (iVar2 = FUN_212f6a8b(param_1,0xfffffd3d,8,pLVar1), iVar2 == 0)) {
    pOVar3 = SysAllocString(L"");
    *pLVar1 = (LONG)pOVar3;
  }
  return *pLVar1;
}



bool __thiscall FUN_212faf93(void *this,int *param_1)

{
  int iVar1;
  void *local_c;
  void *pvStack_8;
  
  local_c = this;
  pvStack_8 = this;
  FUN_212f1626(param_1,(int *)&local_c);
  iVar1 = (**(code **)(*(int *)((int)this + 0x38) + 0x44))((int *)((int)this + 0x38),1,&local_c);
  return -1 < iVar1;
}



int FUN_212fafc6(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  if ((param_2 & 1) == 0) {
    iVar3 = -0x7ffbff95;
  }
  else if ((*(uint *)(param_1 + 0x84) >> 7 & 1) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x80;
    FUN_212f5d6a(param_3,&local_c);
    local_10 = *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x50);
    iVar1 = (**(code **)(*(int *)(param_1 + -0x38) + 100))(&local_c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x50) = local_c;
      *(undefined4 *)(param_1 + 0x54) = local_8;
    }
    if ((iVar3 != *(int *)(param_1 + 0x50)) || (local_10 != *(int *)(param_1 + 0x54))) {
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
        piVar2 = *(int **)(param_1 + 0x74);
        if (piVar2 == (int *)0x0) {
          piVar2 = *(int **)(param_1 + 0x3c);
        }
        (**(code **)(*piVar2 + 0x38))(piVar2,&local_24);
      }
    }
    if (((*(byte *)(param_1 + 0x78) & 2) == 0) &&
       (piVar2 = *(int **)(param_1 + 0x34), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x20))(piVar2);
    }
    *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0x7f;
    iVar3 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 __thiscall FUN_212fb0b1(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x16c) * (*(int *)((int)this + 0xe4) + 3);
  local_8 = local_c;
  FUN_212f5d6a(&local_c,&local_c);
  if ((*(int *)((int)this + 0xe8) == 0) || (*(short *)((int)this + 0xd6) != 0)) {
    iVar4 = 0x29;
  }
  else {
    iVar4 = FUN_212f1602(1);
    iVar4 = *(int *)((int)this + 0xe8) / iVar4;
  }
  sVar1 = *(short *)((int)this + 0xd4);
  iVar4 = *(short *)((int)this + 0xe0) * iVar4;
  iVar5 = *param_1;
  iVar2 = param_1[1];
  iVar3 = iVar2;
  if (-1 < sVar1) {
    if (sVar1 < 2) {
      if (iVar2 < local_8) {
        iVar2 = local_8;
      }
      iVar3 = iVar2;
      if (iVar5 < iVar4) {
        iVar5 = iVar4;
      }
    }
    else if (sVar1 < 4) {
      if (iVar5 < local_8) {
        iVar5 = local_8;
      }
      iVar3 = iVar4;
      if (iVar4 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  *(int *)((int)this + 0x88) = iVar5;
  *(int *)((int)this + 0x8c) = iVar3;
  return 0;
}



void __thiscall FUN_212fb16c(void *this,undefined4 param_1,ushort param_2,undefined4 param_3)

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



HINSTANCE FUN_212fb1cc(LCID param_1)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  pHVar2 = DAT_21316780;
  if ((DAT_21316780 == (HINSTANCE)0x0) || ((param_1 != 0 && (param_1 != DAT_213145d0)))) {
    if (param_1 == 0) {
      param_1 = DAT_213145d0;
    }
    iVar1 = GetLocaleInfoA(param_1,3,(LPSTR)&local_c,5);
    if ((iVar1 != 0) && (iVar1 = LoadStringA(DAT_21314000,0x3e9,local_318,0x104), iVar1 != 0)) {
      wsprintfA(local_214,s__s_s_DLL_2131680c,local_318,&local_c);
      GetModuleFileNameA(DAT_21314000,local_41c,0x104);
      FUN_212fb411(local_41c,local_214,local_110);
      pHVar2 = LoadLibraryA(local_110);
      bVar3 = pHVar2 == (HMODULE)0x0;
      if (!bVar3) goto LAB_212fb3ac;
      iVar1 = lstrlenA((LPCSTR)&local_c);
      if (2 < iVar1) {
        local_a = 0;
        wsprintfA(local_214,s__s_s_DLL_21316818,local_318,&local_c);
        FUN_212fb411(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
      bVar3 = pHVar2 == (HINSTANCE)0x0;
      if (!bVar3) goto LAB_212fb3ac;
      iVar1 = GetLocaleInfoA((uint)((ushort)DAT_213145d0 & 0x3ff | 0x400),3,(LPSTR)&local_c,5);
      if (iVar1 != 0) {
        iVar1 = lstrlenA(local_110);
        *(undefined2 *)((int)&uStack_117 + iVar1) = local_c;
        auStack_115[iVar1] = local_a;
        pHVar2 = LoadLibraryA(local_110);
        bVar3 = pHVar2 == (HMODULE)0x0;
        if (!bVar3) goto LAB_212fb3ac;
        wsprintfA(local_214,s__u__s_dll_21316824,param_1,local_318);
        FUN_212fb411(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
    }
  }
  bVar3 = pHVar2 == (HINSTANCE)0x0;
LAB_212fb3ac:
  if (bVar3) {
    pHVar2 = DAT_21314000;
  }
  if ((DAT_21316780 == (HINSTANCE)0x0) && ((param_1 == 0 || (param_1 == DAT_213145d0)))) {
    DAT_21316780 = pHVar2;
  }
  if ((DAT_21316830 == 0) || ((param_1 != DAT_213145d0 && (param_1 != 0)))) {
    if (pHVar2 != DAT_21314000) {
      GetModuleFileNameA(pHVar2,local_110,0x104);
      iVar1 = FUN_21307650(local_110,1);
      if (((iVar1 == -1) || (iVar1 == 1)) &&
         ((pHVar2 = DAT_21314000, param_1 == 0 || (param_1 == DAT_213145d0)))) {
        DAT_21316780 = DAT_21314000;
      }
    }
    if ((param_1 == 0) || (param_1 == DAT_213145d0)) {
      DAT_21316830 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  return pHVar2;
}



void __cdecl FUN_212fb411(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

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

undefined4 __thiscall FUN_212fb458(int param_1,undefined4 param_2,LPOLESTR param_3,DWORD param_4)

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
    if ((&DAT_21314120)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    iVar3 = lstrlenA(pCVar4);
    cchWideChar = iVar3 * 2 + 2;
    FUN_212f159d(local_8c,cchWideChar);
    if ((&DAT_21314120)[*(int *)(param_1 + 0x14) * 4] == 3) {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      pCVar4 = *(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    MultiByteToWideChar(0,0,pCVar4,-1,local_8c[0],cchWideChar);
    pWVar1 = local_8c[0];
    (*local_8->lpVtbl->SetGUID)
              (local_8,*(GUID **)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x20));
    if ((&DAT_21314120)[*(int *)(param_1 + 0x14) * 4] == 3) {
      iVar3 = *(int *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x20);
    }
    else {
      iVar3 = *(int *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x28);
    }
    (*local_8->lpVtbl->SetHelpFile)(local_8,(LPOLESTR)(-(uint)(iVar3 != 0) & (uint)pWVar1));
    (*local_8->lpVtbl->SetHelpContext)(local_8,param_4);
    (*local_8->lpVtbl->SetDescription)(local_8,param_3);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 4),-1,
                        local_28c,0x100);
    (*local_8->lpVtbl->SetSource)(local_8,local_28c);
    HVar2 = (*local_8->lpVtbl->QueryInterface)(local_8,(IID *)&DAT_212fcb30,&local_c);
    if (-1 < HVar2) {
      SetErrorInfo(0,local_c);
      (*local_c->lpVtbl->Release)(local_c);
    }
    (*local_8->lpVtbl->Release)(local_8);
    if ((local_8c[0] != (LPWSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_8c[0]);
    }
  }
  return param_2;
}



undefined4 FUN_212fb5be(int param_1,RECT *param_2,RECT *param_3)

{
  LPRECT lpRect;
  int X;
  BOOL BVar1;
  HWND pHVar2;
  HRGN hRgn;
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



void __thiscall FUN_212fb73b(void *this,int *param_1)

{
                    // WARNING: Load size is inaccurate
  if (param_1 == *this) {
    *(int *)this = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  if (param_1 == *(int **)((int)this + 4)) {
    *(int *)((int)this + 4) = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  FUN_212fb768(this,param_1);
  return;
}



void __thiscall FUN_212fb768(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0xc);
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0xc) = param_1;
  if (*piVar1 == 0) {
    FUN_212f1ee0((undefined4 *)this);
  }
  return;
}



undefined4 FUN_212fb890(int param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_212f26e3((void *)(param_1 + -0xc4));
  if ((uVar1 == 0) && (*(int *)(param_1 + 0x400) == 0)) {
    uVar2 = (undefined2)*(undefined4 *)(param_1 + 0xb0);
  }
  else {
    uVar2 = *(undefined2 *)(param_1 + 0x1a);
  }
  *param_2 = uVar2;
  return 0;
}



undefined4 FUN_212fb8d4(HDC param_1,HGDIOBJ param_2)

{
  HDC this;
  short sVar1;
  HDC pHVar2;
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  HDC hdc;
  HINSTANCE pHVar7;
  UINT UVar8;
  CHAR *pCVar9;
  _OUTLINETEXTMETRICA local_268;
  CHAR local_194 [256];
  CHAR local_94 [100];
  tagRECT local_30;
  int local_20;
  int local_1c;
  HDC local_18;
  HDC local_14;
  undefined4 local_10;
  HGDIOBJ local_c;
  UINT local_8;
  
  pHVar2 = param_1;
  sVar1 = (short)param_1[4].unused;
  local_10 = CONCAT22((short)((uint)in_EAX >> 0x10),sVar1);
  if (param_2 != (HGDIOBJ)(int)sVar1) {
    if (((int)param_2 < 0) || (3 < (int)param_2)) {
      uVar6 = (**(code **)(param_1[-0x31].unused + 0x30))(0x800a017c,0x17c,0x17c);
      return uVar6;
    }
    this = param_1 + -0x31;
    *(short *)&param_1[4].unused = (short)param_2;
    uVar3 = FUN_212f26e3(this);
    if ((uVar3 != 0) &&
       (((sVar1 = (short)param_1[4].unused, sVar1 == 2 || (sVar1 == 3)) &&
        (param_1[0x103].unused != 0)))) {
      hdc = GetDC((HWND)param_1[-9].unused);
      (**(code **)(*(int *)param_1[0x23].unused + 0x4c))((int *)param_1[0x23].unused,&param_2);
      local_c = SelectObject(hdc,param_2);
      local_8 = GetOutlineTextMetricsA(hdc,0xd4,&local_268);
      SelectObject(hdc,local_c);
      ReleaseDC((HWND)param_1[-9].unused,hdc);
      if ((short)local_8 == 0) {
        pCVar9 = local_94;
        iVar4 = 100;
        UVar8 = 0x1390;
        pHVar7 = (HINSTANCE)(**(code **)(this->unused + 0x28))();
        LoadStringA(pHVar7,UVar8,pCVar9,iVar4);
        pCVar9 = local_194;
        iVar4 = 0x100;
        UVar8 = 0x138d;
        pHVar7 = (HINSTANCE)(**(code **)(this->unused + 0x28))();
        LoadStringA(pHVar7,UVar8,pCVar9,iVar4);
        MessageBeep(0);
        MessageBoxA((HWND)0x0,local_194,local_94,0x2040);
      }
      param_1[0x103].unused = 0;
      param_1 = hdc;
    }
    uVar3 = FUN_212f26e3(this);
    if ((uVar3 == 0) && (pHVar2[0x100].unused == 0)) {
      iVar4 = pHVar2[0x2c].unused;
    }
    else {
      iVar4 = (int)*(short *)((int)&pHVar2[6].unused + 2);
    }
    puVar5 = FUN_212f1f8c((void *)pHVar2[0x26].unused,iVar4);
    FUN_212f9918((undefined4 *)puVar5[2]);
    FUN_212f2ba1(this,&local_20,0,0);
    SetRect(&local_30,0,0,pHVar2[-0xf].unused,pHVar2[-0xe].unused);
    sVar1 = (short)pHVar2[4].unused;
    if (sVar1 != 0) {
      if (sVar1 == 1) {
        local_14 = (HDC)(local_30.bottom - local_1c);
      }
      else {
        local_14 = local_18;
        if ((sVar1 != 2) && (local_14 = param_1, sVar1 == 3)) {
          local_14 = (HDC)(local_30.right - local_20);
        }
      }
    }
    param_1 = (HDC)0x0;
    if (0 < (short)pHVar2[6].unused) {
      do {
        puVar5 = FUN_212f1f8c((void *)pHVar2[0x26].unused,(int)param_1);
        FUN_212fba37((void *)puVar5[2],(short)local_10,(short)pHVar2[4].unused,(uint)local_14);
        param_1 = (HDC)((int)&param_1->unused + 1);
      } while ((int)param_1 < (int)(short)pHVar2[6].unused);
    }
    FUN_212f6cc6(this,0);
    FUN_212faf93(this,&pHVar2[-0xf].unused);
    FUN_212f2fa9(this,(RECT *)0x0);
    pHVar2[-5].unused = pHVar2[-5].unused | 1;
    FUN_212f9bc6(pHVar2 + -0x26,5);
  }
  return 0;
}



void __thiscall FUN_212fba37(void *this,short param_1,short param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  LPCWSTR pWVar7;
  LPSTR local_8c [31];
  byte local_10;
  HWND local_c;
  LPCWSTR local_8;
  
  FUN_212fae93((undefined4 *)this);
                    // WARNING: Load size is inaccurate
  (**(code **)(*(int *)(*this + 0xc4) + 0x44))((int *)(*this + 0xc4),&local_c);
  LockWindowUpdate(local_c);
                    // WARNING: Load size is inaccurate
  local_8 = (LPCWSTR)FUN_212faf68(*this);
  iVar5 = lstrlenW(local_8);
  uVar1 = iVar5 * 2 + 2;
  FUN_212f159d(local_8c,uVar1);
  WideCharToMultiByte(0,0,local_8,-1,local_8c[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar5 = lstrcmpiA(local_8c[0],"Twip");
  if (iVar5 == 0) {
    iVar5 = FUN_21306413(1);
    local_8 = (LPCWSTR)(iVar5 * param_3);
    iVar5 = FUN_21306451(1);
    param_3 = iVar5 * param_3;
  }
  else {
    local_8 = (LPCWSTR)param_3;
  }
  puVar4 = *(undefined4 **)((int)this + 4);
joined_r0x212fbac4:
  if (puVar4 == (undefined4 *)0x0) {
    LockWindowUpdate((HWND)0x0);
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_8c[0]);
    }
    return;
  }
  puVar2 = (undefined4 *)*puVar4;
  puVar3 = (undefined *)puVar4[2];
  if (param_1 == 0) {
    pwVar6 = L"Top";
    uVar1 = param_3;
LAB_212fbb18:
    FUN_212fa8cc(puVar3,pwVar6,-uVar1);
  }
  else if (param_1 == 2) {
    pwVar6 = L"Left";
    uVar1 = (uint)local_8;
    goto LAB_212fbb18;
  }
  puVar4 = puVar2;
  if (param_2 != 0) goto code_r0x212fbae3;
  pwVar6 = L"Top";
  pWVar7 = (LPCWSTR)param_3;
  goto LAB_212fbb37;
code_r0x212fbae3:
  if (param_2 == 2) {
    pwVar6 = L"Left";
    pWVar7 = local_8;
LAB_212fbb37:
    FUN_212fa8cc(puVar3,pwVar6,(uint)pWVar7);
  }
  goto joined_r0x212fbac4;
}



undefined4 FUN_212fbb64(int param_1,short param_2)

{
  void *this;
  short sVar1;
  uint uVar2;
  int iVar3;
  RECT local_14;
  
  if (*(short *)(param_1 + 0x2a) != param_2) {
    this = (void *)(param_1 + -0xc4);
    *(short *)(param_1 + 0x2a) = param_2;
    uVar2 = FUN_212f26e3(this);
    if (uVar2 == 0) {
      uVar2 = FUN_212f26e3(this);
      if ((uVar2 == 0) && (*(int *)(param_1 + 0x400) == 0)) {
        sVar1 = (short)*(undefined4 *)(param_1 + 0xb0);
      }
      else {
        sVar1 = *(short *)(param_1 + 0x1a);
      }
      iVar3 = FUN_212f2b80(this,(int)sVar1);
      if (-1 < iVar3) {
        iVar3 = 0;
        uVar2 = FUN_212f2b80(this,(int)sVar1);
        FUN_212f2ba1(this,&local_14.left,uVar2,iVar3);
        FUN_212f2fa9(this,&local_14);
      }
    }
    *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
    FUN_212f9bc6((void *)(param_1 + -0x98),7);
  }
  return 0;
}



float10 __thiscall FUN_212fbc68(void *param_1,int param_2,int param_3)

{
  float local_14 [2];
  int local_c [2];
  
  local_c[1] = 0;
  local_c[0] = param_2;
  FUN_212fbc8f(param_1,local_c,local_14,param_3);
  return (float10)local_14[0];
}



void __thiscall FUN_212fbc8f(void *this,int *param_1,float *param_2,int param_3)

{
  uint cbMultiByte;
  LPSTR lpString1;
  LPCWSTR lpString;
  int iVar1;
  float10 fVar2;
  LPSTR local_84 [31];
  byte local_8;
  
  FUN_212fbd3c(this,param_1,param_2,(param_3 != 0) + 5);
  lpString = (LPCWSTR)FUN_212faf68(this);
  iVar1 = lstrlenW(lpString);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_212f159d(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,lpString,-1,local_84[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  lpString1 = local_84[0];
  iVar1 = lstrcmpiA(local_84[0],"Twip");
  if (iVar1 != 0) {
    iVar1 = lstrcmpiA(lpString1,"Pixel");
    if (iVar1 != 0) goto LAB_212fbd26;
  }
  fVar2 = FUN_212fbd6a((double)*param_2);
  *param_2 = (float)fVar2;
  fVar2 = FUN_212fbd6a((double)param_2[1]);
  param_2[1] = (float)fVar2;
LAB_212fbd26:
  if ((local_84[0] != (LPCSTR)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_84[0]);
  }
  return;
}



void __thiscall FUN_212fbd3c(void *this,int *param_1,float *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  piVar1 = *(int **)((int)this + 0x70);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1,param_2,param_3), -1 < iVar2)) {
    return;
  }
  if ((param_3 & 8) == 0) {
    *param_2 = (float)*param_1;
    param_2[1] = (float)param_1[1];
  }
  else {
    lVar3 = __ftol();
    *param_1 = (int)lVar3;
    lVar3 = __ftol();
    param_1[1] = (int)lVar3;
  }
  return;
}



float10 FUN_212fbd6a(double param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_212fbd9b(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20),&param_1);
  fVar2 = (float10)param_1;
  if ((float10)0.5 <= fVar1) {
    fVar2 = fVar2 - (float10)-1.0;
  }
  return fVar2;
}



float10 __cdecl FUN_212fbd9b(uint param_1,uint param_2,double *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar2 = param_1;
  dVar1 = (double)CONCAT44(param_2,param_1);
  uVar3 = FUN_212fbe52();
  FUN_212fbe52();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    *(undefined4 *)param_3 = DAT_21317248;
    *(undefined4 *)((int)param_3 + 4) = DAT_2131724c;
    iVar4 = FUN_2130bacb(param_1,param_2);
    if (iVar4 < 1) {
LAB_21300d3f:
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) - -1.0;
      param_1 = SUB84(dVar1,0);
      *param_3 = dVar1;
      fVar6 = FUN_2130b1e8(8,0x1c,uVar2,param_2,param_1,(int)((ulonglong)dVar1 >> 0x20),uVar3);
      return fVar6;
    }
    if (2 < iVar4) {
      if (iVar4 == 3) {
        *(uint *)param_3 = param_1;
        *(uint *)((int)param_3 + 4) = param_2;
        fVar6 = FUN_2130b199(0x1c,param_1,param_2);
        return fVar6;
      }
      goto LAB_21300d3f;
    }
    *(uint *)param_3 = param_1;
    *(uint *)((int)param_3 + 4) = param_2;
    fVar6 = FUN_2130ba67(0,0,param_1,param_2);
  }
  else {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == 0.0) {
      *(uint *)param_3 = param_1;
      *(uint *)((int)param_3 + 4) = param_2;
      goto LAB_212fbe03;
    }
    fVar5 = FUN_212fbe7a((double)CONCAT44(param_2,param_1));
    fVar6 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) -
            (float10)(double)fVar5;
    *param_3 = (double)fVar5;
  }
  dVar1 = (double)fVar6;
LAB_212fbe03:
  FUN_212fbe52();
  return (float10)dVar1;
}



int FUN_212fbe52(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



float10 __cdecl FUN_212fbe7a(double param_1)

{
  return (float10)ROUND(param_1);
}



int __thiscall FUN_212fbf50(void *this,float param_1,int param_2)

{
  int local_14 [2];
  float local_c [2];
  
  local_c[0] = param_1;
  local_c[1] = 0.0;
  FUN_212fbd3c(this,local_14,local_c,(param_2 != 0) + 9);
  return local_14[0];
}



undefined4 FUN_212fc077(int param_1,short param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*(short *)(param_1 + 0x18) + -1 < (int)param_2)) {
    uVar1 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x9c) + param_2 * 0x20;
    if (iVar2 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = -(ushort)(*(short *)(iVar2 + 0x18) != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_212fc0d4(int *param_1,short param_2,short param_3)

{
  int *this;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  short sVar4;
  
  if ((param_2 < 0) || ((short)param_1[6] + -1 < (int)param_2)) {
    uVar3 = (**(code **)(param_1[-0x31] + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    iVar1 = param_1[0x27] + param_2 * 0x20;
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x18) != param_3)) {
      this = param_1 + -0x31;
      *(short *)(iVar1 + 0x18) = param_3;
      FUN_212f6c5b(this);
      FUN_212f6cc6(this,0);
      uVar2 = FUN_212f26e3(this);
      if ((uVar2 == 0) && (param_1[0x100] == 0)) {
        sVar4 = (short)param_1[0x2c];
      }
      else {
        sVar4 = *(short *)((int)param_1 + 0x1a);
      }
      if (param_2 == sVar4) {
        (**(code **)(*param_1 + 0x70))(param_1,CONCAT22(extraout_var,(short)param_1[0x2f]));
      }
      FUN_212f6eec(this,(int)sVar4);
      FUN_212f2fa9(this,(RECT *)0x0);
      if ((param_2 == (short)param_1[0x2b]) && (param_3 == 0)) {
        *(short *)(param_1 + 0x2b) = 0;
      }
      param_1[-5] = param_1[-5] | 1;
      FUN_212f9bc6(param_1 + -0x26,0xf);
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_212fc1c7(int param_1,short param_2,short *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*(short *)(param_1 + 0x18) + -1 < (int)param_2)) {
    uVar1 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x9c) + param_2 * 0x20;
    if (iVar2 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = -(ushort)(*(short *)(iVar2 + 0x1a) != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_212fc224(int param_1,short param_2,short param_3)

{
  void *this;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  RECT local_14;
  
  if ((param_2 < 0) || (iVar4 = (int)param_2, *(short *)(param_1 + 0x18) + -1 < iVar4)) {
    uVar3 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c) + iVar4 * 0x20;
    if ((iVar1 != 0) && (*(short *)(iVar1 + 0x1a) != param_3)) {
      *(short *)(iVar1 + 0x1a) = param_3;
      if ((param_2 == *(short *)(param_1 + 0xac)) && (param_3 == 0)) {
        *(undefined2 *)(param_1 + 0xac) = 0;
      }
      this = (void *)(param_1 + -0xc4);
      uVar2 = FUN_212f2b80(this,iVar4);
      if (-1 < (int)uVar2) {
        FUN_212f2ba1(this,&local_14.left,uVar2,0);
        if (*(short *)(param_1 + 0x12) == 1) {
          local_14.right = *(LONG *)(param_1 + -0x3c);
          local_14.left = 0;
        }
        FUN_212f2fa9(this,&local_14);
      }
      *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
      FUN_212f9bc6((void *)(param_1 + -0x98),0x10);
    }
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_212fc2f0(int param_1,short param_2,undefined4 *param_3)

{
  OLECHAR *pOVar1;
  undefined4 *puVar2;
  BSTR pOVar3;
  int iVar4;
  
  if ((param_2 < 0) || (*(short *)(param_1 + 0x18) + -1 < (int)param_2)) {
    iVar4 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x9c) + param_2 * 0x20);
    if ((puVar2 == (undefined4 *)0x0) || (pOVar1 = (OLECHAR *)*puVar2, pOVar1 == (OLECHAR *)0x0)) {
      pOVar3 = SysAllocString(L"");
    }
    else {
      pOVar3 = FUN_212f7cf2(pOVar1,(BSTR)0x0);
    }
    *param_3 = pOVar3;
    iVar4 = (-(uint)(pOVar3 != (BSTR)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar4;
}



undefined4 FUN_212fc363(int param_1,short param_2,BSTR param_3)

{
  void *this;
  int *piVar1;
  undefined1 uVar2;
  UINT UVar3;
  LPCWSTR lpString;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  LPSTR local_94 [31];
  byte local_18;
  RECT local_14;
  
  if ((param_2 < 0) || (iVar6 = (int)param_2, *(short *)(param_1 + 0x18) + -1 < iVar6)) {
    iVar6 = *(int *)(param_1 + -0xc4);
    uVar10 = 0x17d;
    uVar9 = 0x17d;
    uVar8 = 0x800a017d;
  }
  else {
    if ((param_3 == (BSTR)0x0) || (UVar3 = SysStringLen(param_3), UVar3 < 0x801)) {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x9c) + iVar6 * 0x20);
      if (puVar7 == (undefined4 *)0x0) {
        return 0;
      }
      SysFreeString((BSTR)*puVar7);
      if (param_3 == (BSTR)0x0) {
        lpString = SysAllocString(L"");
      }
      else {
        lpString = FUN_212f7cf2(param_3,(BSTR)0x0);
      }
      *puVar7 = lpString;
      if (lpString != (LPCWSTR)0x0) {
        iVar4 = lstrlenW(lpString);
        uVar5 = iVar4 * 2 + 2;
        FUN_212f159d(local_94,uVar5);
        WideCharToMultiByte(0,0,(LPCWSTR)*puVar7,-1,local_94[0],uVar5,(LPCSTR)0x0,(LPBOOL)0x0);
        if (local_94[0] != (char *)0x0) {
          uVar2 = FUN_212f6412(local_94[0]);
          *(undefined1 *)(puVar7 + 7) = uVar2;
          piVar1 = *(int **)(param_1 + -0x54);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0xc))(piVar1);
          }
          this = (void *)(param_1 + -0xc4);
          uVar5 = FUN_212f2b80(this,iVar6);
          if (-1 < (int)uVar5) {
            FUN_212f2ba1(this,&local_14.left,uVar5,0);
            if (*(short *)(param_1 + 0x12) == 1) {
              local_14.right = *(LONG *)(param_1 + -0x3c);
              local_14.left = 0;
            }
            FUN_212f2fa9(this,&local_14);
          }
          *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
          FUN_212f9bc6((void *)(param_1 + -0x98),0x11);
          if (local_94[0] == (char *)0x0) {
            return 0;
          }
          if ((local_18 & 1) == 0) {
            return 0;
          }
          HeapFree(DAT_21314020,0,local_94[0]);
          return 0;
        }
      }
      return 0x8007000e;
    }
    iVar6 = *(int *)(param_1 + -0xc4);
    uVar10 = 0x17c;
    uVar9 = 0x17c;
    uVar8 = 0x800a017c;
  }
  uVar8 = (**(code **)(iVar6 + 0x30))(uVar8,uVar9,uVar10);
  return uVar8;
}



undefined4 FUN_212fc4d9(int param_1,short param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x2c) != param_2) {
    *(short *)(param_1 + 0x2c) = param_2;
    BVar1 = IsWindow(*(HWND *)(param_1 + -0x24));
    if (BVar1 != 0) {
      uVar2 = FUN_212f26e3((void *)(param_1 + -0xc4));
      if (uVar2 == 0) {
        EnableWindow(*(HWND *)(param_1 + -0x24),(int)param_2);
        FUN_212f2fa9((void *)(param_1 + -0xc4),(RECT *)0x0);
      }
    }
    *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
    FUN_212f9bc6((void *)(param_1 + -0x98),0xfffffdfe);
  }
  return 0;
}



int FUN_212fc56f(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined2 *)(param_1 + 0x2e) = 0;
    if (*(HWND *)(param_1 + -0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + -0x24),0x30,0,1);
    }
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_212f7380,&param_2);
    if (iVar2 < 0) {
      return iVar2;
    }
    piVar1 = *(int **)(param_1 + 0x8c);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x8c) = param_2;
    *(undefined2 *)(param_1 + 0x2e) = 1;
    *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
    FUN_212f9bc6((void *)(param_1 + -0x98),0xfffffe00);
    FUN_212f2fa9((void *)(param_1 + -0xc4),(RECT *)0x0);
  }
  return 0;
}



int FUN_212fc611(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_8;
  
  puVar3 = param_2;
  piVar1 = (int *)(param_1 + 0x88);
  *param_2 = 0;
  local_8 = 0;
  piVar2 = (int *)*piVar1;
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,&param_2), iVar4 < 0))
  {
    return iVar4;
  }
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    if ((short)param_2 != -1) goto LAB_212fc652;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
      iVar4 = FUN_212fc674();
      return iVar4;
    }
  }
  uStack_1c = 0x14;
  uStack_18 = 0;
  OleCreatePictureIndirect(&uStack_1c,&DAT_212f7370,0,piVar1);
LAB_212fc652:
  iVar4 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_212fcb78,&local_8);
  uVar5 = 0;
  if (-1 < iVar4) {
    uVar5 = local_8;
  }
  *puVar3 = uVar5;
  return 0;
}



undefined4 FUN_212fc674(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -0x18) = 0x14;
  *(int *)(unaff_EBP + -0x14) = unaff_EDI;
  OleCreatePictureIndirect(unaff_EBP + -0x18,&DAT_212f7370,unaff_EDI,unaff_ESI);
  iVar1 = (*(code *)**(undefined4 **)*unaff_ESI)
                    ((undefined4 *)*unaff_ESI,&DAT_212fcb78,unaff_EBP + -4);
  if (unaff_EDI <= iVar1) {
    unaff_EDI = *(int *)(unaff_EBP + -4);
  }
  *unaff_EBX = unaff_EDI;
  return 0;
}



int FUN_212fc691(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  int *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    piVar1 = *(int **)(param_1 + 0x88);
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined2 *)(param_1 + 0x30) = 0;
LAB_212fc786:
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_212f7370,&local_8);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = (**(code **)(*local_8 + 0x14))(local_8,&param_2);
    if (-1 < iVar2) {
      if ((((short)param_2 == 3) || ((short)param_2 == 0)) || ((short)param_2 == -1)) {
        local_c = 0;
        piVar1 = *(int **)(param_1 + 0x88);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(piVar1,&local_c);
        }
        if (((short)local_c != (short)param_2) || (((short)param_2 != 0 && ((short)param_2 != -1))))
        {
          piVar1 = *(int **)(param_1 + 0x88);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          *(int **)(param_1 + 0x88) = local_8;
          *(undefined2 *)(param_1 + 0x30) = 1;
          *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
          FUN_212f9bc6((void *)(param_1 + -0x98),0xd);
          goto LAB_212fc786;
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017c,0x17c,0x17c);
      }
    }
    (**(code **)(*local_8 + 8))(local_8);
  }
  return iVar2;
}



undefined4 FUN_212fc7a1(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  tagPOINT local_c;
  
  if (*(short *)(param_1 + 0x14) != param_2) {
    if ((param_2 < 0) || ((0xf < param_2 && (param_2 != 99)))) {
      uVar2 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017c,0x17c,0x17c);
      return uVar2;
    }
    *(short *)(param_1 + 0x14) = (short)param_2;
    if (*(int *)(param_1 + -0x24) != 0) {
      GetCursorPos(&local_c);
      uVar1 = SendMessageA(*(HWND *)(param_1 + -0x24),0x84,0,
                           CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
      SendMessageA(*(HWND *)(param_1 + -0x24),0x20,(WPARAM)*(HWND *)(param_1 + -0x24),
                   uVar1 & 0xffff | 0x2000000);
    }
    *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
    FUN_212f9bc6((void *)(param_1 + -0x98),0xc);
  }
  return 0;
}



void FUN_212fc840(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1 + -0x31);
  if ((uVar1 == 0) && (param_1[0x100] == 0)) {
    iVar2 = param_1[0x2c];
  }
  else {
    iVar2 = (int)*(short *)((int)param_1 + 0x1a);
  }
  (**(code **)(*param_1 + 0xd0))(param_1,iVar2,param_2);
  return;
}



int FUN_212fc876(int param_1,short param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = param_3;
  if ((param_2 < 0) || (*(short *)(param_1 + 0x18) + -1 < (int)param_2)) {
    iVar4 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
    return iVar4;
  }
  *param_3 = 0;
  iVar4 = *(int *)(param_1 + 0x9c) + param_2 * 0x20;
  if (iVar4 == 0) {
    return 0;
  }
  piVar1 = (int *)(iVar4 + 4);
  piVar2 = *(int **)(iVar4 + 4);
  if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,&param_2), iVar4 < 0))
  {
    return iVar4;
  }
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    if (param_2 != -1) goto LAB_212fc8de;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
  }
  local_18 = 0x14;
  local_14 = 0;
  OleCreatePictureIndirect(&local_18,&DAT_212f7370,0,piVar1);
LAB_212fc8de:
  param_1 = 0;
  iVar5 = (*(code *)**(undefined4 **)*piVar1)((undefined4 *)*piVar1,&DAT_212fcb78,&param_1);
  iVar4 = 0;
  if (-1 < iVar5) {
    iVar4 = param_1;
  }
  *puVar3 = iVar4;
  return 0;
}



void FUN_212fc903(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1 + -0x31);
  if ((uVar1 == 0) && (param_1[0x100] == 0)) {
    iVar2 = param_1[0x2c];
  }
  else {
    iVar2 = (int)*(short *)((int)param_1 + 0x1a);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,iVar2,param_2);
  return;
}



undefined4 FUN_212fc939(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (((short)param_2 < 0) || (*(short *)(param_1 + 0x18) + -1 < (int)(short)param_2)) {
    uVar3 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017d,0x17d,0x17d);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x9c) + (short)param_2 * 0x20;
    if (iVar4 != 0) {
      if (param_3 == (undefined4 *)0x0) {
        piVar1 = *(int **)(iVar4 + 4);
        if (piVar1 != (int *)0x0) {
          *(undefined4 *)(iVar4 + 4) = 0;
          (**(code **)(*piVar1 + 8))(piVar1);
        }
      }
      else {
        iVar2 = (**(code **)*param_3)(param_3,&DAT_212f7370,&param_2);
        if (iVar2 == 0) {
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            *(undefined4 *)(iVar4 + 4) = 0;
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          *(undefined4 *)(iVar4 + 4) = param_2;
        }
      }
      FUN_212f2fa9((void *)(param_1 + -0xc4),(RECT *)0x0);
      *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
      FUN_212f9bc6((void *)(param_1 + -0x98),0xe);
    }
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_212fca49(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1 + -0x31);
  if ((uVar1 == 0) && (param_1[0x100] == 0)) {
    iVar2 = param_1[0x2c];
  }
  else {
    iVar2 = (int)*(short *)((int)param_1 + 0x1a);
  }
  (**(code **)(*param_1 + 0xec))(param_1,iVar2,param_2);
  return;
}



void FUN_212fca7f(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1 + -0x31);
  if ((uVar1 == 0) && (param_1[0x100] == 0)) {
    iVar2 = param_1[0x2c];
  }
  else {
    iVar2 = (int)*(short *)((int)param_1 + 0x1a);
  }
  (**(code **)(*param_1 + 0xf0))(param_1,iVar2,param_2);
  return;
}



undefined4 FUN_212fcac7(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) != param_2) {
    iVar1 = OleTranslateColor(param_2,0,0);
    if (iVar1 < 0) {
      uVar2 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017c,0x17c,0x17c);
      return uVar2;
    }
    *(int *)(param_1 + 0x38) = param_2;
    *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
    FUN_212f9bc6((void *)(param_1 + -0x98),0xfffffdff);
    FUN_212f2fa9((void *)(param_1 + -0xc4),(RECT *)0x0);
  }
  return 0;
}



undefined4 FUN_212fcf47(void)

{
  int unaff_EBP;
  
  if ((*(int *)(unaff_EBP + -0xc4) != 0) && ((*(byte *)(unaff_EBP + -0x48) & 1) != 0)) {
    HeapFree(DAT_21314020,0,*(LPVOID *)(unaff_EBP + -0xc4));
  }
  return *(undefined4 *)(unaff_EBP + 0xc);
}



void FUN_212fd3c8(void)

{
  int unaff_EBP;
  
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x30))(0x800a017c,0x17c,0x17c);
  return;
}



void __fastcall FUN_212fd873(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  int *unaff_EDI;
  
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *unaff_EDI = param_2 + 2;
  if (unaff_EBX < iVar3) {
    *(int *)(unaff_EBP + 8) = (int)unaff_ESI + unaff_EBX * 4 + 0x180;
    *(int *)(unaff_EBP + -4) = iVar3 - unaff_EBX;
    do {
      iVar3 = FUN_212f7de4(unaff_ESI,**(int **)(unaff_EBP + 8));
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
      *unaff_EDI = *unaff_EDI + iVar3 + 0xe;
      piVar1 = (int *)(unaff_EBP + -4);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  iVar3 = *(int *)(unaff_EBP + 0xc);
  iVar4 = FUN_212f7de4(unaff_ESI,*(int *)((int)unaff_ESI + iVar3 * 4 + 0x180));
  iVar2 = *(int *)(unaff_EBP + 0x10);
  unaff_EDI[2] = iVar4 + 0xe + *unaff_EDI;
  if ((iVar2 == 0) &&
     (*(short *)((int)unaff_ESI + iVar3 * 4 + 0x180) == *(short *)((int)unaff_ESI + 0xde))) {
    FUN_212f3be2(unaff_EDI,-2,1,0,1,1);
  }
  return;
}



void FUN_212fe495(void)

{
  FUN_212fae65();
  return;
}



void __fastcall FUN_212fe688(int param_1)

{
  undefined4 *puVar1;
  LPVOID lpMem;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (*(undefined4 **)(param_1 + 4) == unaff_EDI) {
    FUN_212faf21(param_1);
    return;
  }
  do {
    while (in_EAX == unaff_EDI) {
LAB_212faee4:
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -4) + 0xc))(*(int **)(unaff_EBP + -4));
      if (iVar2 != 0) {
        puVar3 = *(undefined4 **)(unaff_EBX + 4);
        *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
        if (puVar3 != unaff_EDI) {
          do {
            puVar1 = (undefined4 *)*puVar3;
            lpMem = (LPVOID)puVar3[2];
            if (*(int *)((int)lpMem + 4) == 0) {
              *(undefined4 *)((int)lpMem + 0xc) = 0;
              if (lpMem != (LPVOID)0x0) {
                FUN_212f7d1a((int)lpMem);
                HeapFree(DAT_21314020,0,lpMem);
              }
              FUN_212fb73b((void *)(unaff_EBX + 4),*(int **)(unaff_EBP + -0x10));
            }
            else {
              *(undefined4 *)((int)lpMem + 4) = 0;
            }
            *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
            puVar3 = puVar1;
          } while (puVar1 != (undefined4 *)0x0);
        }
        (**(code **)(**(int **)(unaff_EBP + -4) + 8))(*(int **)(unaff_EBP + -4));
        (**(code **)(**(int **)(unaff_EBP + -0xc) + 8))(*(int **)(unaff_EBP + -0xc));
        return;
      }
      (**(code **)(**(int **)(unaff_EBP + -8) + 8))(*(int **)(unaff_EBP + -8));
      in_EAX = *(undefined4 **)(unaff_EBX + 4);
    }
    iVar2 = in_EAX[2];
    if (*(undefined4 **)(unaff_EBP + -8) == *(undefined4 **)(iVar2 + 0xc)) {
      *(undefined4 *)(iVar2 + 4) = unaff_ESI;
      goto LAB_212faee4;
    }
    in_EAX = (undefined4 *)*in_EAX;
    if (*(undefined4 **)(iVar2 + 0xc) == unaff_EDI) {
      FUN_212fe688(iVar2);
      return;
    }
  } while( true );
}



void switchD_212f3d79::caseD_0(void)

{
  int *piVar1;
  HDC hdc;
  COLORREF color;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  HPALETTE pHVar5;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x30);
  *(int *)(unaff_EBP + -0x38) = unaff_EDI + -1 + *(int *)(unaff_EBP + -0x30);
  FUN_212f3fd7(unaff_ESI,(RECT *)(unaff_EBP + -0x34));
  if (unaff_ESI[0x1d] == 0) {
    iVar3 = *(int *)(unaff_EBP + -0x34) + -1;
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x34) + -4;
  }
  *(int *)(unaff_EBP + -0x3c) = iVar3;
  *(int *)(unaff_EBP + -0x44) = (iVar3 - *(int *)(unaff_EBP + -4)) + 1;
  if ((LPRECT)unaff_ESI[0x18] != (LPRECT)0x0) {
    CopyRect((LPRECT)unaff_ESI[0x18],(RECT *)(unaff_EBP + -0x34));
  }
  if ((LPRECT)unaff_ESI[0x19] != (LPRECT)0x0) {
    CopyRect((LPRECT)unaff_ESI[0x19],(RECT *)(unaff_EBP + -0x44));
  }
  if (unaff_ESI[0x20] == 0) {
    if ((unaff_ESI[0x14] == 0) && (unaff_ESI[0x16] == 0)) {
      piVar1 = (int *)unaff_ESI[0x1f];
      if (piVar1 != (int *)0x0) {
        *(undefined4 *)(unaff_EBP + -0xc) = 0;
        iVar3 = *piVar1;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        (**(code **)(iVar3 + 0x14))(piVar1,unaff_EBP + 8);
        if (*(short *)(unaff_EBP + 8) == 1) {
          (**(code **)(*(int *)unaff_ESI[0x1f] + 0x10))((int *)unaff_ESI[0x1f],unaff_EBP + -0xc);
        }
        if (*(int *)(unaff_EBP + -0xc) != 0) {
          pHVar5 = SelectPalette((HDC)*unaff_ESI,*(HPALETTE *)(unaff_EBP + -0xc),1);
          hdc = (HDC)*unaff_ESI;
          *(HPALETTE *)(unaff_EBP + -0x10) = pHVar5;
          RealizePalette(hdc);
        }
        (**(code **)(*(int *)unaff_ESI[0x1f] + 0x18))((int *)unaff_ESI[0x1f],unaff_EBP + -0x20);
        (**(code **)(*(int *)unaff_ESI[0x1f] + 0x1c))((int *)unaff_ESI[0x1f],unaff_EBP + -0x1c);
        (**(code **)(*(int *)unaff_ESI[0x1f] + 0x20))
                  ((int *)unaff_ESI[0x1f],*unaff_ESI,*(undefined4 *)(unaff_EBP + -0x44),
                   *(undefined4 *)(unaff_EBP + -0x40),
                   (*(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x44)) + 1,
                   (*(int *)(unaff_EBP + -0x38) - *(int *)(unaff_EBP + -0x40)) + 1,0,
                   *(int *)(unaff_EBP + -0x1c) + -1,*(undefined4 *)(unaff_EBP + -0x20),
                   -*(int *)(unaff_EBP + -0x1c),unaff_EBP + -0x44);
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_212fea79();
          return;
        }
      }
    }
    else {
      (**(code **)(*(int *)unaff_ESI[0x1f] + 0xc))((int *)unaff_ESI[0x1f],unaff_EBP + 8);
      FUN_213062cf((HDC)*unaff_ESI,*(HANDLE *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x44),
                   unaff_ESI[0x13],unaff_ESI[0x14],unaff_ESI[0x15],unaff_ESI[0x16],
                   *(int *)(unaff_EBP + -0x10));
    }
    uVar4 = FUN_212f3220(unaff_ESI[0xd]);
    unaff_ESI[0xd] = uVar4;
    if (unaff_ESI[9] == 0) {
      iVar3 = SetBkMode((HDC)*unaff_ESI,1);
      *(int *)(unaff_EBP + -0x10) = iVar3;
    }
    else {
      iVar3 = SetBkMode((HDC)*unaff_ESI,2);
      color = unaff_ESI[0xd];
      *(int *)(unaff_EBP + -0x10) = iVar3;
      SetBkColor((HDC)*unaff_ESI,color);
    }
    if (unaff_ESI[1] != 0) {
      bVar2 = FUN_212f426d(*(undefined2 *)(unaff_ESI + 8),0);
      *(uint *)(unaff_EBP + 8) = CONCAT31(extraout_var,bVar2);
      if (*(short *)(unaff_ESI + 0xb) == 1) {
        *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + -1;
      }
      else if (*(short *)(unaff_ESI + 0xb) == 2) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      }
      else {
        *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
      }
      if (*(short *)(unaff_ESI + 6) == 0) {
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      }
      if (*(short *)(unaff_ESI + 6) == 3) {
        OffsetRect((LPRECT)(unaff_EBP + -0x34),1,1);
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetBkMode((HDC)*unaff_ESI,1);
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      }
      if (*(short *)(unaff_ESI + 6) == 4) {
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1a]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetBkMode((HDC)*unaff_ESI,1);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),2,2);
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      }
      if (*(short *)(unaff_ESI + 6) == 1) {
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetBkMode((HDC)*unaff_ESI,1);
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),1,1);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      }
      if (*(short *)(unaff_ESI + 6) == 2) {
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetBkMode((HDC)*unaff_ESI,1);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),2,2);
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1a]);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
        SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
        OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
        FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      }
    }
    SetBkMode((HDC)*unaff_ESI,*(int *)(unaff_EBP + -0x10));
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    SelectObject((HDC)*unaff_ESI,*(HGDIOBJ *)(unaff_EBP + -0x14));
  }
  SelectClipRgn((HDC)*unaff_ESI,*(HRGN *)(unaff_EBP + -0x24));
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    DeleteObject((HGDIOBJ)unaff_ESI[0x17]);
  }
  return;
}



void FUN_212fea79(void)

{
  COLORREF color;
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  code *unaff_EDI;
  
  (*unaff_EDI)(*unaff_ESI,*(undefined4 *)(unaff_EBP + -0x10),1);
  RealizePalette((HDC)*unaff_ESI);
  uVar2 = FUN_212f3220(unaff_ESI[0xd]);
  unaff_ESI[0xd] = uVar2;
  if (unaff_ESI[9] == 0) {
    iVar3 = SetBkMode((HDC)*unaff_ESI,1);
    *(int *)(unaff_EBP + -0x10) = iVar3;
  }
  else {
    iVar3 = SetBkMode((HDC)*unaff_ESI,2);
    color = unaff_ESI[0xd];
    *(int *)(unaff_EBP + -0x10) = iVar3;
    SetBkColor((HDC)*unaff_ESI,color);
  }
  if (unaff_ESI[1] != 0) {
    bVar1 = FUN_212f426d(*(undefined2 *)(unaff_ESI + 8),0);
    *(uint *)(unaff_EBP + 8) = CONCAT31(extraout_var,bVar1);
    if (*(short *)(unaff_ESI + 0xb) == 1) {
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + -1;
    }
    else if (*(short *)(unaff_ESI + 0xb) == 2) {
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    }
    else {
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
    }
    if (*(short *)(unaff_ESI + 6) == 0) {
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
    }
    if (*(short *)(unaff_ESI + 6) == 3) {
      OffsetRect((LPRECT)(unaff_EBP + -0x34),1,1);
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetBkMode((HDC)*unaff_ESI,1);
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
    }
    if (*(short *)(unaff_ESI + 6) == 4) {
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1a]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetBkMode((HDC)*unaff_ESI,1);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),2,2);
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
    }
    if (*(short *)(unaff_ESI + 6) == 1) {
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetBkMode((HDC)*unaff_ESI,1);
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),1,1);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
    }
    if (*(short *)(unaff_ESI + 6) == 2) {
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1b]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetBkMode((HDC)*unaff_ESI,1);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),2,2);
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0x1a]);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
      SetTextColor((HDC)*unaff_ESI,unaff_ESI[0xc]);
      OffsetRect((LPRECT)(unaff_EBP + -0x34),-1,-1);
      FUN_212f4297(unaff_ESI,(int *)(unaff_EBP + -0x34));
    }
  }
  SetBkMode((HDC)*unaff_ESI,*(int *)(unaff_EBP + -0x10));
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    SelectObject((HDC)*unaff_ESI,*(HGDIOBJ *)(unaff_EBP + -0x14));
  }
  SelectClipRgn((HDC)*unaff_ESI,*(HRGN *)(unaff_EBP + -0x24));
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    DeleteObject((HGDIOBJ)unaff_ESI[0x17]);
  }
  return;
}



void switchD_212f427d::caseD_0(void)

{
  FUN_212f4287();
  return;
}



void switchD_212f420e::caseD_0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  piVar1[2] = *piVar1 + -1 + *(int *)(unaff_EBP + 0xc);
  piVar1[3] = piVar1[1] + -1 + *(int *)(unaff_EBP + 0x10);
  return;
}



undefined4 __fastcall switchD_212f184a::caseD_10a(undefined4 param_1,int param_2)

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



undefined4 __fastcall FUN_212fff0d(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_213027a0;
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



undefined4 __fastcall FUN_212fff8f(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_21302780;
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



undefined4 FUN_21300da0(void)

{
  return 0;
}



void FUN_213011c1(void)

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
    if (((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & (byte)unaff_EBX) != 0) &&
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
          if ((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) != 0) {
            pbVar6 = pbVar6 + 1;
            *unaff_EDI = *unaff_EDI + 1;
          }
          *unaff_EDI = *unaff_EDI + 1;
          goto LAB_212f90ca;
        }
        if ((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) != 0) {
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
LAB_212f90ca:
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



int * __thiscall FUN_213015b4(void *this)

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
  
code_r0x213015b4:
  puVar2 = *(uint **)((int)this + 8);
  piVar9 = *(int **)((int)this + 0x10);
  for (puVar8 = (uint *)((int)this + 0x18); puVar8 < puVar2; puVar8 = puVar8 + 2) {
    if (((int)unaff_EBX <= (int)*puVar8) && (unaff_EBX < puVar8[1])) {
      piVar4 = (int *)FUN_212f89c6(piVar9,*puVar8,unaff_EBX);
      if (piVar4 != (int *)0x0) {
        PTR_PTR_LOOP_21316848 = (undefined *)in_stack_00000010;
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
  while (this = *this, (undefined *)this != PTR_PTR_LOOP_21316848) {
    if (*(int *)((int)this + 0x10) != -1) goto code_r0x212f895d;
  }
  ppuVar6 = &PTR_LOOP_21314630;
  while ((ppuVar6[4] == (undefined *)0xffffffff || (ppuVar6[3] == (undefined *)0x0))) {
    ppuVar6 = (undefined **)*ppuVar6;
    if (ppuVar6 == &PTR_LOOP_21314630) {
      ppuVar6 = FUN_212f8607();
      if (ppuVar6 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar9 = (int *)ppuVar6[4];
      *(char *)(piVar9 + 2) = (char)unaff_EBX;
      PTR_PTR_LOOP_21316848 = (undefined *)ppuVar6;
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
  PTR_PTR_LOOP_21316848 = (undefined *)ppuVar6;
  ppuVar6[3] = (undefined *)(-(uint)bVar10 & (uint)ppuVar5);
  *(char *)(piVar9 + 2) = (char)unaff_EBX;
  ppuVar6[2] = (undefined *)ppuStack00000018;
  *ppuStack00000018 = *ppuStack00000018 + -unaff_EBX;
  piVar9[1] = piVar9[1] - unaff_EBX;
  *piVar9 = (int)piVar9 + unaff_EBX + 8;
  return piVar9 + 0x40;
code_r0x212f895d:
  puVar8 = *(uint **)((int)this + 8);
  piVar9 = (int *)(((int)puVar8 + (-0x18 - (int)this) >> 3) * 0x1000 + *(int *)((int)this + 0x10));
  in_stack_00000010 = (undefined4 *)this;
  if (puVar8 < (uint *)((int)this + 0x2018)) {
    do {
      if (((int)unaff_EBX <= (int)*puVar8) && (unaff_EBX < puVar8[1])) {
        piVar4 = (int *)FUN_212f89c6(piVar9,*puVar8,unaff_EBX);
        if (piVar4 != (int *)0x0) {
          PTR_PTR_LOOP_21316848 = (undefined *)this;
          *puVar8 = *puVar8 - unaff_EBX;
          *(uint **)((int)this + 8) = puVar8;
          return piVar4;
        }
        puVar8[1] = unaff_EBX;
      }
      puVar8 = puVar8 + 2;
      piVar9 = piVar9 + 0x400;
    } while (puVar8 < (uint *)((int)this + 0x2018));
    piVar9 = FUN_213015b4(this);
    return piVar9;
  }
  goto code_r0x213015b4;
}



undefined4 __cdecl FUN_213028f0(short *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_2130d756(param_1,L"190B7910-992A-11cf-8AFA-00AA00C00905");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_2130d756(param_1,L"04746E60CE4F11CDB23C0000C076FE");
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_2130d756(param_1,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB");
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}



void FUN_2130292f(void)

{
  SysAllocString(L"04746E60CE4F11CDB23C0000C076FE");
  return;
}



undefined4 FUN_2130293b(void)

{
  return 1;
}



undefined4 __cdecl
DLLGetDocumentation(undefined4 param_1,undefined4 param_2,LCID param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_104 [256];
  
                    // 0x1293f  1  DLLGetDocumentation
  *param_5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_213167a0);
  if ((param_3 != DAT_213176bc) || (DAT_213167c4 == (HMODULE)0x0)) {
    if ((DAT_213167c4 != (HMODULE)0x0) &&
       ((DAT_213167c4 != DAT_21316780 && (DAT_213167c4 != DAT_21314000)))) {
      FreeLibrary(DAT_213167c4);
    }
    DAT_213167c4 = FUN_212fb1cc(param_3);
    DAT_213176bc = param_3;
  }
  iVar1 = LoadStringA(DAT_213167c4,param_4 & 0xffff,local_104,0xff);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_213167a0);
  if (0 < iVar1) {
    pWVar2 = FUN_212f1d12(local_104,(BSTR)0x0);
    *param_5 = pWVar2;
  }
  return 0;
}



undefined4 __fastcall FUN_213029e3(void *param_1)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  LPWSTR pWVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  CHAR local_28 [32];
  int *local_8;
  
  if (PTR_u_TabOrientation_213143c8 != (undefined *)0x0) {
    puVar4 = (undefined4 *)&DAT_213143d0;
    do {
      uVar8 = puVar4[2];
      puVar9 = puVar4;
      puVar10 = (undefined4 *)(puVar4[-1] + 0xd4 + (int)param_1);
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      piVar1 = puVar4 + 3;
      puVar4 = puVar4 + 5;
    } while (*piVar1 != 0);
  }
  iVar2 = FUN_212f1602(1);
  *(int *)((int)param_1 + 0xe4) = iVar2 * 0x14;
  pvVar3 = HeapAlloc(DAT_21314020,8,(int)*(short *)((int)param_1 + 0xdc) << 5);
  uVar8 = 0;
  *(LPVOID *)((int)param_1 + 0x160) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
LAB_21302b13:
    uVar6 = 0;
  }
  else {
    if (0 < *(short *)((int)param_1 + 0xdc)) {
      do {
        puVar4 = FUN_212f63cd(param_1,uVar8);
        FUN_212fad77(uVar8,local_28);
        SysFreeString((BSTR)*puVar4);
        pWVar5 = FUN_212f1d12(local_28,(BSTR)0x0);
        *puVar4 = pWVar5;
        pvVar3 = FUN_212f15e6(0x20,DAT_21314020);
        if (pvVar3 == (LPVOID)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_212f6444(pvVar3,param_1);
        }
        if (puVar4 == (undefined4 *)0x0) goto LAB_21302b13;
        if (uVar8 == 0) {
          puVar4[7] = 1;
        }
        FUN_212f646c(*(void **)((int)param_1 + 0x15c),puVar4);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)*(short *)((int)param_1 + 0xdc));
    }
    (**(code **)(*(int *)((int)param_1 + 0xc4) + 0x24))((int)param_1 + 0xc4,&local_8);
    (**(code **)(*local_8 + 8))(local_8);
    FUN_212f6e1e((void *)((int)param_1 + 0x100),(int)*(short *)((int)param_1 + 0xda));
    uVar6 = 1;
  }
  return uVar6;
}



void __thiscall FUN_21302b17(void *this,int param_1)

{
  FUN_2130d861((void *)((int)this + 0x100),param_1);
  if (param_1 == -0x2c3) {
    SysFreeString(*(BSTR *)((int)this + 0x4dc));
    *(undefined4 *)((int)this + 0x4dc) = 0;
  }
  return;
}



int FUN_21302b4c(LPACCEL param_1,undefined4 *param_2)

{
  LPACCEL ptVar1;
  ushort uVar2;
  LPACCEL paccel;
  int iVar3;
  BOOL BVar4;
  HACCEL pHVar5;
  LPACCEL ptVar6;
  int local_10;
  int local_c;
  int local_8;
  
  ptVar1 = param_1;
  local_8 = 0;
  FUN_21307d52(param_1,(int)param_2);
  paccel = (LPACCEL)HeapAlloc(DAT_21314020,8,(short)param_1[0x1a].cmd * 0xc);
  iVar3 = 0;
  if (paccel != (LPACCEL)0x0) {
    local_10 = 0;
    if (0 < (short)param_1[0x1a].cmd) {
      local_c = 0;
      param_1 = paccel + 1;
      ptVar6 = paccel;
      do {
        iVar3 = local_c + *(int *)&ptVar1[0x30].cmd;
        if (*(char *)(iVar3 + 0x1c) != '\0') {
          BVar4 = IsCharAlphaNumericA(*(char *)(iVar3 + 0x1c));
          ptVar6->fVirt = '\x13';
          if (BVar4 == 0) {
            uVar2 = VkKeyScanA(*(CHAR *)(iVar3 + 0x1c));
            if ((uVar2 & 0x100) != 0) {
              ptVar6->fVirt = ptVar6->fVirt | 4;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + 1;
            ptVar6->key = uVar2 & 0xff;
            ptVar6->cmd = 1;
            ptVar6 = ptVar6 + 1;
          }
          else {
            param_1->fVirt = '\x17';
            uVar2 = VkKeyScanA(*(CHAR *)(iVar3 + 0x1c));
            local_8 = local_8 + 2;
            param_1 = param_1 + 2;
            ptVar6[1].key = uVar2 & 0xff;
            ptVar6->key = uVar2 & 0xff;
            ptVar6[1].cmd = 1;
            ptVar6->cmd = 1;
            ptVar6 = ptVar6 + 2;
          }
        }
        local_10 = local_10 + 1;
        local_c = local_c + 0x20;
      } while (local_10 < (short)ptVar1[0x1a].cmd);
    }
    if (*(HACCEL *)&ptVar1[0x2e].cmd != (HACCEL)0x0) {
      DestroyAcceleratorTable(*(HACCEL *)&ptVar1[0x2e].cmd);
      *(undefined4 *)&ptVar1[0x2e].cmd = 0;
    }
    if (0 < local_8) {
      pHVar5 = CreateAcceleratorTableA(paccel,local_8);
      *(HACCEL *)&ptVar1[0x2e].cmd = pHVar5;
    }
    HeapFree(DAT_21314020,0,paccel);
    if (*(int *)&ptVar1[0x2e].cmd != 0) {
      *param_2 = 0x10;
      param_2[1] = *(undefined4 *)&ptVar1[0x2e].cmd;
      *(undefined2 *)(param_2 + 2) = (undefined2)local_8;
      param_2[3] = 0;
    }
    iVar3 = ((local_8 < 1) - 1 & 0x7fffbfff) + 0x80004001;
  }
  return iVar3;
}



undefined4 FUN_21302cc6(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  SHORT SVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  iVar1 = param_1;
  FUN_21307d67(param_1);
  bVar2 = FUN_212f9f18();
  iVar6 = *(short *)(param_1 + 0xa2) + 1;
  if (iVar6 < *(short *)(param_1 + 0xa0)) {
    param_1 = iVar6 * 0x20;
    do {
      iVar5 = param_1 + *(int *)(iVar1 + 0x124);
      SVar3 = VkKeyScanA(*(CHAR *)(iVar5 + 0x1c));
      if ((((char)SVar3 == *(char *)(param_2 + 8)) &&
          (((BVar4 = IsCharAlphaNumericA(*(CHAR *)(iVar5 + 0x1c)), BVar4 != 0 ||
            (local_8._1_1_ = (byte)((ushort)SVar3 >> 8), (local_8._1_1_ & 1) == (bVar2 & 1))) &&
           (*(short *)(iVar5 + 0x18) != 0)))) && (*(short *)(iVar5 + 0x1a) != 0)) {
        if (iVar6 == *(short *)(iVar1 + 0xa2)) {
          return 0;
        }
        (**(code **)(*(int *)(iVar1 + 0x88) + 0x70))(iVar1 + 0x88,iVar6);
        return 0;
      }
      param_1 = param_1 + 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(short *)(iVar1 + 0xa0));
  }
  param_1 = 0;
  if (-1 < *(short *)(iVar1 + 0xa2)) {
    local_8 = 0;
    do {
      iVar6 = local_8 + *(int *)(iVar1 + 0x124);
      SVar3 = VkKeyScanA(*(CHAR *)(iVar6 + 0x1c));
      if ((((char)SVar3 == *(char *)(param_2 + 8)) &&
          ((BVar4 = IsCharAlphaNumericA(*(CHAR *)(iVar6 + 0x1c)), BVar4 != 0 ||
           (((byte)((ushort)SVar3 >> 8) & 1) == (bVar2 & 1))))) &&
         ((*(short *)(iVar6 + 0x18) != 0 && (*(short *)(iVar6 + 0x1a) != 0)))) {
        if (param_1 == *(short *)(iVar1 + 0xa2)) {
          return 0;
        }
        (**(code **)(*(int *)(iVar1 + 0x88) + 0x70))(iVar1 + 0x88,param_1);
        return 0;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 0x20;
    } while (param_1 <= *(short *)(iVar1 + 0xa2));
  }
  return 0;
}



int FUN_21302e20(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*param_2 + 0x14))(param_2,0,0,1,&local_c);
  if (-1 < iVar2) {
    iVar2 = FUN_21308162(param_1,piVar1);
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_c,local_8,0,&local_c);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&param_2,4,0);
        if (-1 < iVar2) {
          if (param_2 == (int *)0x10000) {
            iVar2 = (**(code **)(*(int *)(param_1 + -0x50) + 0x84))(param_1 + -0x50,piVar1);
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
          }
          else {
            iVar2 = -0x7fff0001;
          }
        }
      }
    }
  }
  return iVar2;
}



HRESULT FUN_21302e9e(int *param_1,IStream *param_2)

{
  uint cbMultiByte;
  int *piVar1;
  IStream *pIVar2;
  undefined1 uVar3;
  HRESULT HVar4;
  LPVOID pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  LPWSTR pWVar10;
  int *this;
  LPSTR local_134 [31];
  byte local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  short local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  ULONG local_14;
  int local_10;
  int *local_c;
  LPCSTR local_8;
  
  pIVar2 = param_2;
  HVar4 = (*param_2->lpVtbl->Read)(param_2,&local_1c,0xc,(ULONG *)0x0);
  this = param_1;
  if (HVar4 < 0) {
    return HVar4;
  }
  if (local_1c == -0x531e531e) {
    if ((local_18 == 0x10001) || (local_18 == 0x20001)) {
      HVar4 = (*pIVar2->lpVtbl->Read)(pIVar2,&local_54,local_14,(ULONG *)0x0);
      if (HVar4 < 0) {
        return HVar4;
      }
      *(undefined2 *)(param_1 + 0x35) = local_54;
      *(undefined2 *)((int)param_1 + 0xd6) = local_52;
      *(undefined2 *)(param_1 + 0x36) = local_50;
      *(undefined2 *)(param_1 + 0x37) = local_4e;
      *(undefined2 *)((int)param_1 + 0xde) = local_4c;
      *(undefined2 *)(param_1 + 0x38) = local_4a;
      param_1[0x39] = local_48;
      param_1[0x3a] = local_44;
      *(undefined2 *)(param_1 + 0x3b) = local_40;
      *(undefined2 *)((int)param_1 + 0xee) = local_3e;
      *(undefined2 *)(param_1 + 0x3c) = local_3c;
      *(undefined2 *)((int)param_1 + 0xf2) = local_3a;
      *(undefined2 *)(param_1 + 0x3d) = local_38;
      param_1[0x3e] = local_34;
      *(undefined2 *)((int)param_1 + 0xda) = 0;
      param_1[0x3f] = local_30;
      this = param_1;
    }
    else {
      if (((local_18 != 0x30001) && (local_18 != 0x50001)) && (local_18 != 0x60000))
      goto LAB_21302eef;
      HVar4 = (*pIVar2->lpVtbl->Read)(pIVar2,param_1 + 0x35,local_14,(ULONG *)0x0);
      if (HVar4 < 0) {
        return HVar4;
      }
    }
    this[0x5d] = (int)*(short *)((int)this + 0xde);
    if ((short)this[0x3d] != 0) {
      if (((local_18 == 0x30001) || (local_18 == 0x10001)) || (local_18 == 0x20001)) {
        local_64 = 0;
        local_68 = 0x14;
        iVar7 = OleCreatePictureIndirect(&local_68,&DAT_212f7370,0,this + 0x53);
        if (iVar7 < 0) {
          return iVar7;
        }
        puVar8 = (undefined4 *)this[0x53];
        iVar7 = (**(code **)*puVar8)(puVar8,&DAT_21302710,&local_c);
        if (iVar7 < 0) {
          return iVar7;
        }
        HVar4 = (**(code **)(*local_c + 0x14))(local_c,param_2);
        (**(code **)(*local_c + 8))(local_c);
      }
      else {
        piVar6 = (int *)this[0x53];
        if (piVar6 != (int *)0x0) {
          this[0x53] = 0;
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        HVar4 = OleLoadFromStream(param_2,(IID *)&DAT_212f7370,(LPVOID *)(this + 0x53));
      }
      if (HVar4 < 0) {
        return HVar4;
      }
    }
    if (*(short *)((int)this + 0xf2) != 0) {
      if (((local_18 == 0x30001) || (local_18 == 0x10001)) || (local_18 == 0x20001)) {
        iVar7 = OleCreateFontIndirect(0,&DAT_212f7380,this + 0x54);
        if (iVar7 < 0) {
          return iVar7;
        }
        puVar8 = (undefined4 *)this[0x54];
        iVar7 = (**(code **)*puVar8)(puVar8,&DAT_21302710,&local_c);
        if (iVar7 < 0) {
          return iVar7;
        }
        HVar4 = (**(code **)(*local_c + 0x14))(local_c,param_2);
        (**(code **)(*local_c + 8))(local_c);
      }
      else {
        piVar6 = (int *)this[0x54];
        if (piVar6 != (int *)0x0) {
          this[0x54] = 0;
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        HVar4 = OleLoadFromStream(param_2,(IID *)&DAT_212f7380,(LPVOID *)(this + 0x54));
      }
      if (HVar4 < 0) {
        return HVar4;
      }
    }
    if ((LPVOID)this[0x58] != (LPVOID)0x0) {
      HeapFree(DAT_21314020,0,(LPVOID)this[0x58]);
    }
    pvVar5 = HeapAlloc(DAT_21314020,8,(int)(short)this[0x37] << 5);
    this[0x58] = (int)pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      HVar4 = (**(code **)(*this + 0x30))(0x800a0007,7,7);
    }
    else {
      local_10 = 0;
      if (0 < (short)this[0x37]) {
        do {
          piVar6 = FUN_212f63cd(this,local_10);
          if (local_18 == 0x10001) {
            local_8 = (LPCSTR)0x0;
            SysFreeString((BSTR)*piVar6);
            *piVar6 = 0;
            iVar7 = FUN_21303a1d((int *)param_2,(int *)&local_8);
            if (iVar7 < 0) {
              return iVar7;
            }
            pWVar10 = FUN_212f1d12(local_8,(BSTR)0x0);
            *piVar6 = (int)pWVar10;
            uVar3 = FUN_212f6412(local_8);
            *(undefined1 *)(piVar6 + 7) = uVar3;
            FUN_212f1433(local_8);
          }
          else if ((((local_18 == 0x20001) || (local_18 == 0x30001)) || (local_18 == 0x50001)) ||
                  (local_18 == 0x60000)) {
            iVar7 = FUN_213039a0((int *)param_2,piVar6);
            if (iVar7 < 0) {
              return iVar7;
            }
            iVar7 = lstrlenW((LPCWSTR)*piVar6);
            cbMultiByte = iVar7 * 2 + 2;
            FUN_212f159d(local_134,cbMultiByte);
            WideCharToMultiByte(0,0,(LPCWSTR)*piVar6,-1,local_134[0],cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
            uVar3 = FUN_212f6412(local_134[0]);
            *(undefined1 *)(piVar6 + 7) = uVar3;
            if ((local_134[0] != (LPSTR)0x0) && ((local_b8 & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_134[0]);
            }
          }
          HVar4 = (*param_2->lpVtbl->Read)(param_2,&local_2c,4,(ULONG *)0x0);
          if (HVar4 < 0) {
            return HVar4;
          }
          if (local_2c != 0) {
            if (((local_18 == 0x30001) || (local_18 == 0x10001)) || (local_18 == 0x20001)) {
              local_64 = 0;
              local_68 = 0x14;
              iVar7 = OleCreatePictureIndirect(&local_68,&DAT_212f7370,0,piVar6 + 1);
              if (iVar7 < 0) {
                return iVar7;
              }
              puVar8 = (undefined4 *)piVar6[1];
              iVar7 = (**(code **)*puVar8)(puVar8,&DAT_21302710,&local_c);
              if (iVar7 < 0) {
                return iVar7;
              }
              HVar4 = (**(code **)(*local_c + 0x14))(local_c,param_2);
              (**(code **)(*local_c + 8))(local_c);
            }
            else {
              piVar1 = (int *)piVar6[1];
              if (piVar1 != (int *)0x0) {
                piVar6[1] = 0;
                (**(code **)(*piVar1 + 8))(piVar1);
              }
              HVar4 = OleLoadFromStream(param_2,(IID *)&DAT_212f7370,(LPVOID *)(piVar6 + 1));
            }
            if (HVar4 < 0) {
              return HVar4;
            }
          }
          pvVar5 = FUN_212f15e6(0x20,DAT_21314020);
          if (pvVar5 == (LPVOID)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_212f6444(pvVar5,this);
          }
          FUN_212f646c((void *)this[0x57],puVar8);
          puVar8 = FUN_212f1f8c((void *)this[0x57],local_10);
          pIVar2 = param_2;
          if (puVar8 != (undefined4 *)0x0) {
            iVar7 = puVar8[2];
            local_28 = iVar7;
            HVar4 = (*param_2->lpVtbl->Read)(param_2,&param_1,2,(ULONG *)0x0);
            if (HVar4 < 0) {
              return HVar4;
            }
            puVar8 = (undefined4 *)(iVar7 + 0x1c);
            local_24 = puVar8;
            HVar4 = (*pIVar2->lpVtbl->Read)(pIVar2,puVar8,4,(ULONG *)0x0);
            if (HVar4 < 0) {
              return HVar4;
            }
            local_20 = 0;
            if (0 < (short)param_1) {
              do {
                puVar8 = (undefined4 *)FUN_212f15e6(0x34,DAT_21314020);
                if (puVar8 == (undefined4 *)0x0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  puVar9 = (uint *)FUN_212f7b1e(puVar8);
                }
                if (local_18 == 0x10001) {
                  local_8 = (LPCSTR)0x0;
                  HVar4 = FUN_21303a1d((int *)param_2,(int *)&local_8);
                  if (HVar4 < 0) {
                    return HVar4;
                  }
                  pWVar10 = FUN_212f1d12(local_8,(BSTR)0x0);
                  puVar9[2] = (uint)pWVar10;
                  FUN_212f1433(local_8);
                }
                else if (((((local_18 == 0x20001) || (local_18 == 0x30001)) || (local_18 == 0x50001)
                          ) || (local_18 == 0x60000)) &&
                        (HVar4 = FUN_213039a0((int *)param_2,(int *)(puVar9 + 2)), HVar4 < 0)) {
                  return HVar4;
                }
                if ((local_18 == 0x10001) || (local_18 == 0x20001)) {
                  HVar4 = (*param_2->lpVtbl->Read)(param_2,&local_b4,0x24,(ULONG *)0x0);
                  if (HVar4 < 0) {
                    return HVar4;
                  }
                  puVar9[4] = local_b4;
                  puVar9[5] = local_b0;
                  puVar9[6] = local_ac;
                  puVar9[7] = local_a8;
                  puVar9[8] = local_a4;
                  puVar9[9] = local_a0;
                  puVar9[10] = local_9c;
                  puVar9[0xb] = local_98;
                  puVar9[0xc] = local_94;
                  *puVar9 = 1;
                }
                else if (((local_18 == 0x30001) || (local_18 == 0x50001)) || (local_18 == 0x60000))
                {
                  HVar4 = (*param_2->lpVtbl->Read)(param_2,&local_90,0x26,(ULONG *)0x0);
                  if (HVar4 < 0) {
                    return HVar4;
                  }
                  puVar9[4] = local_90;
                  puVar9[5] = local_8c;
                  puVar9[6] = local_88;
                  puVar9[7] = local_84;
                  puVar9[8] = local_80;
                  puVar9[9] = local_7c;
                  puVar9[10] = local_78;
                  puVar9[0xb] = local_74;
                  puVar9[0xc] = local_70;
                  *puVar9 = (uint)(local_6c != 0);
                }
                FUN_212f7b49((void *)(local_28 + 4),puVar9);
                local_20 = local_20 + 1;
                puVar8 = local_24;
              } while (local_20 < (short)param_1);
            }
            if (local_10 == *(short *)((int)this + 0xde)) {
              *puVar8 = 1;
            }
          }
          local_10 = local_10 + 1;
        } while (local_10 < (short)this[0x37]);
      }
      this[0x2c] = this[0x2c] & 0xfffffffe;
    }
  }
  else {
LAB_21302eef:
    HVar4 = -0x7fff0001;
  }
  return HVar4;
}



HRESULT FUN_21303617(void *param_1,LPSTREAM param_2)

{
  LPSTREAM This;
  bool bVar1;
  HRESULT HVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int *piVar6;
  int local_5c [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined2 local_38;
  VARIANTARG local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  This = param_2;
  local_24 = 0xace1ace2;
  local_20 = 0x60000;
  local_1c = 0x2c;
  HVar2 = (*param_2->lpVtbl->Write)(param_2,&local_24,0xc,(ULONG *)0x0);
  if (HVar2 < 0) {
    return HVar2;
  }
  HVar2 = (*This->lpVtbl->Write)(This,(void *)((int)param_1 + 0xd4),0x2c,(ULONG *)0x0);
  if (HVar2 < 0) {
    return HVar2;
  }
  if (*(short *)((int)param_1 + 0xf4) != 0) {
    iVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x14c))
                      (*(undefined4 **)((int)param_1 + 0x14c),&DAT_21302710,&param_2);
    if (iVar3 < 0) {
      return iVar3;
    }
    local_8 = OleSaveToStream((LPPERSISTSTREAM)param_2,This);
    (*param_2->lpVtbl->Release)(param_2);
    if (local_8 < 0) {
      return local_8;
    }
  }
  if (*(short *)((int)param_1 + 0xf2) != 0) {
    iVar3 = (**(code **)**(undefined4 **)((int)param_1 + 0x150))
                      (*(undefined4 **)((int)param_1 + 0x150),&DAT_21302710,&param_2);
    if (iVar3 < 0) {
      return iVar3;
    }
    local_8 = OleSaveToStream((LPPERSISTSTREAM)param_2,This);
    (*param_2->lpVtbl->Release)(param_2);
    if (local_8 < 0) {
      return local_8;
    }
  }
  FUN_212f2761(param_1);
  local_8 = 0;
  if (0 < *(short *)((int)param_1 + 0xdc)) {
    local_c = 0;
    do {
      puVar5 = (undefined4 *)(local_c + *(int *)((int)param_1 + 0x160));
      iVar3 = FUN_21303939((int *)This,puVar5);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_10 = (uint)(puVar5[1] != 0);
      HVar2 = (*This->lpVtbl->Write)(This,&local_10,4,(ULONG *)0x0);
      if (HVar2 < 0) {
        return HVar2;
      }
      if (local_10 != 0) {
        iVar3 = (*(code *)**(undefined4 **)puVar5[1])
                          ((undefined4 *)puVar5[1],&DAT_21302710,&param_2);
        if (iVar3 < 0) {
          return iVar3;
        }
        HVar2 = OleSaveToStream((LPPERSISTSTREAM)param_2,This);
        (*param_2->lpVtbl->Release)(param_2);
        if (HVar2 < 0) {
          return HVar2;
        }
      }
      puVar5 = FUN_212f1f8c(*(void **)((int)param_1 + 0x15c),local_8);
      if (puVar5 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)puVar5[2];
        if (puVar5[7] != 0) {
          FUN_212f9918(puVar5);
        }
        local_18 = puVar5[3];
        HVar2 = (*This->lpVtbl->Write)(This,&local_18,2,(ULONG *)0x0);
        if (HVar2 < 0) {
          return HVar2;
        }
        HVar2 = (*This->lpVtbl->Write)(This,puVar5 + 7,4,(ULONG *)0x0);
        if (HVar2 < 0) {
          return HVar2;
        }
        puVar5 = (undefined4 *)puVar5[1];
        while (puVar5 != (undefined4 *)0x0) {
          local_14 = (undefined4 *)*puVar5;
          iVar3 = puVar5[2];
          iVar4 = FUN_21303939((int *)This,(undefined4 *)(iVar3 + 8));
          if (iVar4 < 0) {
            return iVar4;
          }
          piVar6 = local_5c;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          *(undefined2 *)piVar6 = 0;
          if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
            local_5c[1] = FUN_2130639b(*(int **)(iVar3 + 0xc),&DAT_212f9e04,1);
            local_5c[0] = FUN_2130639b(*(int **)(iVar3 + 0xc),L"Left",1);
            local_5c[2] = FUN_2130639b(*(int **)(iVar3 + 0xc),L"Width",1);
            local_5c[3] = FUN_2130639b(*(int **)(iVar3 + 0xc),L"Height",1);
            local_48 = FUN_2130639b(*(int **)(iVar3 + 0xc),&DAT_21301d4c,1);
            local_4c = FUN_2130639b(*(int **)(iVar3 + 0xc),&DAT_21301d44,1);
            local_44 = FUN_2130639b(*(int **)(iVar3 + 0xc),&DAT_21301d3c,1);
            local_40 = FUN_2130639b(*(int **)(iVar3 + 0xc),&DAT_21301d34,1);
            bVar1 = FUN_212f7be0(*(int **)(iVar3 + 0xc),L"TabStop",&local_34,0,0,0,0,2,0,&local_3c);
            if (CONCAT31(extraout_var,bVar1) == 0) {
              local_38 = 0xffff;
            }
            else {
              local_38 = local_34.n1._8_2_;
            }
          }
          HVar2 = (*This->lpVtbl->Write)(This,local_5c,0x26,(ULONG *)0x0);
          puVar5 = local_14;
          if (HVar2 < 0) {
            return HVar2;
          }
        }
      }
      local_8 = local_8 + 1;
      local_c = local_c + 0x20;
    } while (local_8 < *(short *)((int)param_1 + 0xdc));
  }
  return 0;
}



void __cdecl FUN_21303939(int *param_1,undefined4 *param_2)

{
  BSTR bstr;
  int iVar1;
  UINT local_8;
  
  bstr = (BSTR)*param_2;
  local_8 = 0;
  if ((bstr == (BSTR)0x0) || (*bstr == L'\0')) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_8,2,0);
  }
  else {
    local_8 = SysStringByteLen(bstr);
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8,2,0);
    if ((-1 < iVar1) && ((short)local_8 != 0)) {
      (**(code **)(*param_1 + 0x10))(param_1,*param_2,(int)(short)local_8,0);
    }
  }
  return;
}



int __cdecl FUN_213039a0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  BSTR pOVar3;
  
  piVar1 = param_2;
  if ((BSTR)*param_2 != (BSTR)0x0) {
    SysFreeString((BSTR)*param_2);
    *piVar1 = 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0xc))(param_1,&param_2,2,0);
  if (-1 < (int)piVar2) {
    if ((short)param_2 == 0) {
      pOVar3 = SysAllocString(L"");
      *piVar1 = (int)pOVar3;
    }
    else {
      pOVar3 = SysAllocStringByteLen((LPCSTR)0x0,(int)(short)param_2);
      *piVar1 = (int)pOVar3;
      if (pOVar3 != (BSTR)0x0) {
        piVar2 = (int *)(**(code **)(*param_1 + 0xc))(param_1,pOVar3,(int)(short)param_2,0);
        if ((int)piVar2 < 0) {
          return (int)piVar2;
        }
      }
    }
    param_1 = piVar2;
    piVar2 = (int *)0x8007000e;
    if (*piVar1 != 0) {
      piVar2 = param_1;
    }
  }
  return (int)piVar2;
}



int __cdecl FUN_21303a1d(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  iVar3 = (**(code **)(*param_1 + 0xc))(param_1,&param_1,2,0);
  if (-1 < iVar3) {
    iVar4 = FUN_212f1575((int)(short)param_1 + 1);
    piVar2 = param_2;
    *param_2 = iVar4;
    if (iVar4 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,(int)(short)param_1,0);
      if (iVar3 < 0) {
        return iVar3;
      }
      *(undefined1 *)(*piVar2 + (int)(short)param_1) = 0;
    }
    if (*piVar2 == 0) {
      iVar3 = -0x7ff8fff2;
    }
  }
  return iVar3;
}



void __thiscall FUN_21303a7f(void *this,HDC param_1,HDC param_2,int *param_3)

{
  HDC hdc;
  UINT nBitCount;
  UINT nPlanes;
  HGDIOBJ h;
  void *lpBits;
  tagRECT local_18;
  HBITMAP local_8;
  
  hdc = CreateCompatibleDC(param_2);
  if (hdc != (HDC)0x0) {
    lpBits = (void *)0x0;
    nBitCount = GetDeviceCaps(hdc,0xc);
    nPlanes = GetDeviceCaps(hdc,0xe);
    local_8 = CreateBitmap(*(int *)((int)this + 0x88),*(int *)((int)this + 0x8c),nPlanes,nBitCount,
                           lpBits);
    h = SelectObject(hdc,local_8);
    SetRect(&local_18,0,0,*(int *)((int)this + 0x88),*(int *)((int)this + 0x8c));
    FUN_212f3068(this,hdc,&local_18);
    StretchBlt(param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],hdc,0,0,
               *(int *)((int)this + 0x88),*(int *)((int)this + 0x8c),0xcc0020);
    SelectObject(hdc,h);
    DeleteObject(local_8);
    DeleteDC(hdc);
  }
  return;
}



undefined4 FUN_21303b98(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != -0x201) {
    if (param_2 == -0x200) {
      puVar1 = &DAT_212f14b0;
      goto LAB_21303bd6;
    }
    if (param_2 != -0x1f5) {
      if (param_2 != 0xd) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        return 0x80040200;
      }
      puVar1 = &DAT_212f14d0;
      goto LAB_21303bd6;
    }
  }
  puVar1 = &DAT_212f14c0;
LAB_21303bd6:
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  param_3[3] = puVar1[3];
  return 0;
}



HRESULT FUN_21303bef(int param_1,int param_2,ITypeInfo *param_3,uint *param_4)

{
  GUID *pGVar1;
  HRESULT HVar2;
  
  if (param_2 == 5) {
    pGVar1 = (GUID *)&DAT_21301ba8;
  }
  else if (param_2 == 9) {
    pGVar1 = (GUID *)&DAT_21301b98;
  }
  else if (param_2 == 0xc) {
    pGVar1 = (GUID *)&DAT_21301b88;
  }
  else {
    if (param_2 != 0x60f) {
      if ((param_3 != (ITypeInfo *)0x0) && (param_4 != (uint *)0x0)) {
        return 1;
      }
      return -0x7fffbffd;
    }
    pGVar1 = (GUID *)&DAT_21301bd8;
  }
  HVar2 = FUN_21303c8c(param_3,param_4,*(UINT *)(param_1 + -0xac),pGVar1);
  return HVar2;
}



HRESULT __cdecl FUN_21303c8c(ITypeInfo *param_1,uint *param_2,UINT param_3,GUID *param_4)

{
  uint cbMultiByte;
  ITypeInfo *pIVar1;
  uint *puVar2;
  UINT UVar3;
  ITypeLib *pIVar4;
  ITypeInfoVtbl *pIVar5;
  LPVOID pvVar6;
  int iVar7;
  _func_6467 *p_Var8;
  HRESULT HVar9;
  CHAR local_118 [128];
  LPSTR local_98 [31];
  byte local_1c;
  LPCWSTR local_18;
  VARDESC *local_14;
  ITypeLib *local_10;
  int local_c;
  TYPEATTR *local_8;
  
  pIVar1 = param_1;
  local_8 = (TYPEATTR *)0x0;
  if ((param_1 == (ITypeInfo *)0x0) || (param_2 == (uint *)0x0)) {
LAB_21303ec5:
    HVar9 = 0;
  }
  else {
    *param_2 = 0;
    param_1->lpVtbl = (ITypeInfoVtbl *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    local_c = LoadRegTypeLib((GUID *)PTR_DAT_21314578,
                             *(WORD *)((&PTR_PTR_21314124)[param_3 * 2] + 0x18),
                             *(WORD *)((&PTR_PTR_21314124)[param_3 * 2] + 0x1c),
                             (uint)(ushort)DAT_213145d0,&local_10);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if (local_c < 0) {
      return local_c;
    }
    local_c = (*local_10->lpVtbl->GetTypeInfoOfGuid)(local_10,param_4,&param_1);
    if ((local_c < 0) || (local_c = (*param_1->lpVtbl->GetTypeAttr)(param_1,&local_8), local_c < 0))
    {
LAB_21303ecc:
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
      pIVar4 = local_10;
      if (local_10 == (ITypeLib *)0x0) {
        return local_c;
      }
      local_10 = (ITypeLib *)0x0;
      (*pIVar4->lpVtbl->Release)(pIVar4);
      return local_c;
    }
    pIVar1->lpVtbl = (ITypeInfoVtbl *)(uint)local_8->cVars;
    *param_2 = (uint)local_8->cVars;
    pIVar5 = (ITypeInfoVtbl *)CoTaskMemAlloc((uint)local_8->cVars << 2);
    pIVar1[1].lpVtbl = pIVar5;
    if (pIVar5 != (ITypeInfoVtbl *)0x0) {
      pvVar6 = CoTaskMemAlloc((uint)local_8->cVars << 2);
      param_2[1] = (uint)pvVar6;
      if (pvVar6 != (LPVOID)0x0) {
        param_3 = 0;
        if (local_8->cVars != 0) {
          do {
            local_c = (*param_1->lpVtbl->GetVarDesc)(param_1,param_3,&local_14);
            if (local_c < 0) goto LAB_21303ecc;
            (*param_1->lpVtbl->GetDocumentation)
                      (param_1,local_14->memid,&local_18,(BSTR *)0x0,(DWORD *)0x0,(BSTR *)0x0);
            iVar7 = lstrlenW(local_18);
            cbMultiByte = iVar7 * 2 + 2;
            FUN_212f159d(local_98,cbMultiByte);
            WideCharToMultiByte(0,0,local_18,-1,local_98[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
            wsprintfA(local_118,"%ld - %s",*(undefined4 *)((int)&((local_14->u).lpvarValue)->n1 + 8)
                      ,local_98[0]);
            UVar3 = param_3;
            iVar7 = param_3 * 4;
            p_Var8 = (_func_6467 *)FUN_212f1d12(local_118,(BSTR)0x1);
            (&(pIVar1[1].lpVtbl)->QueryInterface)[UVar3] = p_Var8;
            *(undefined4 *)(iVar7 + param_2[1]) =
                 *(undefined4 *)((int)&((local_14->u).lpvarValue)->n1 + 8);
            SysFreeString(local_18);
            (*param_1->lpVtbl->ReleaseVarDesc)(param_1,local_14);
            if ((&(pIVar1[1].lpVtbl)->QueryInterface)[UVar3] == (_func_6467 *)0x0) {
              if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
                HeapFree(DAT_21314020,0,local_98[0]);
              }
              goto LAB_21303f6f;
            }
            if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_98[0]);
            }
            param_3 = param_3 + 1;
          } while ((int)param_3 < (int)(uint)local_8->cVars);
        }
        if (local_8 != (TYPEATTR *)0x0) {
          (*param_1->lpVtbl->ReleaseTypeAttr)(param_1,local_8);
        }
        pIVar1 = param_1;
        if (param_1 != (ITypeInfo *)0x0) {
          param_1 = (ITypeInfo *)0x0;
          (*pIVar1->lpVtbl->Release)(pIVar1);
        }
        pIVar4 = local_10;
        if (local_10 != (ITypeLib *)0x0) {
          local_10 = (ITypeLib *)0x0;
          (*pIVar4->lpVtbl->Release)(pIVar4);
        }
        goto LAB_21303ec5;
      }
    }
LAB_21303f6f:
    HVar9 = -0x7ff8fff2;
  }
  return HVar9;
}



undefined4 __cdecl FUN_21303f79(VARIANTARG *param_1,undefined2 param_2)

{
  VariantClear(param_1);
  (param_1->n1).n2.vt = 2;
  *(undefined2 *)((int)&param_1->n1 + 8) = param_2;
  return 0;
}



void FUN_21303f97(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x8c))(param_1,unaff_retaddr);
  }
  return;
}



int FUN_21303fbe(int param_1,BSTR param_2)

{
  int *piVar1;
  BSTR pOVar2;
  int iVar3;
  void *this;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  byte local_8 [4];
  
  pOVar2 = param_2;
  iVar3 = (**(code **)(*(int *)param_2 + 0xc))(param_2,&local_c,4,0);
  if ((-1 < iVar3) &&
     (iVar3 = (**(code **)(*(int *)pOVar2 + 0xc))(pOVar2,&local_10,4,0), -1 < iVar3)) {
    local_18 = local_c;
    local_14 = local_10;
    FUN_212f5d6a(&local_18,(int *)(param_1 + 0x88));
    iVar3 = (**(code **)(*(int *)pOVar2 + 0xc))(pOVar2,local_8,4,0);
    if (-1 < iVar3) {
      if ((local_8[0] & 2) != 0) {
        iVar3 = FUN_213045d9(this,(int *)pOVar2,&param_2);
        if (iVar3 < 0) {
          return iVar3;
        }
        SysFreeString(param_2);
      }
      if (((local_8[0] & 8) != 0) &&
         (iVar3 = (**(code **)(*(int *)pOVar2 + 0xc))(pOVar2,param_1 + 0xfc,4,0), iVar3 < 0)) {
        return iVar3;
      }
      if (((local_8[0] & 1) != 0) &&
         (iVar3 = (**(code **)(*(int *)pOVar2 + 0xc))(pOVar2,param_1 + 0xf8,4,0), iVar3 < 0)) {
        return iVar3;
      }
      if ((local_8[0] & 4) != 0) {
        iVar3 = (**(code **)(*(int *)pOVar2 + 0xc))(pOVar2,&param_2,1,0);
        if (iVar3 < 0) {
          return iVar3;
        }
        if ((char)param_2 != -1) {
          piVar1 = *(int **)(param_1 + 0x150);
          if (piVar1 != (int *)0x0) {
            *(undefined4 *)(param_1 + 0x150) = 0;
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          iVar3 = FUN_21304472((int *)pOVar2,(undefined4 *)(param_1 + 0x150));
          if (iVar3 < 0) {
            return iVar3;
          }
          *(undefined2 *)(param_1 + 0xf2) = 1;
        }
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}



int FUN_213040d8(int *param_1,int *param_2)

{
  uint cbMultiByte;
  int *this;
  undefined1 uVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  void *this_00;
  void *extraout_ECX;
  void *this_01;
  LPSTR local_ac [31];
  byte local_30;
  byte local_2c;
  undefined2 local_2b;
  undefined2 local_29;
  undefined2 local_27;
  undefined2 local_25;
  undefined2 local_23;
  int local_21;
  int local_1d;
  byte local_19;
  byte local_18;
  undefined2 local_17;
  int local_14;
  short local_10 [2];
  int local_c;
  int local_8;
  
  this = param_1;
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_2c,0x17,0);
  if (-1 < iVar2) {
    param_1[0x3a] = local_21;
    *(undefined2 *)(param_1 + 0x35) = local_27;
    *(ushort *)(param_1 + 0x3b) = (ushort)local_18;
    *(ushort *)((int)param_1 + 0xee) = (ushort)local_19;
    *(undefined2 *)((int)param_1 + 0xd6) = local_23;
    *(ushort *)(param_1 + 0x3c) = (ushort)local_2c;
    *(undefined2 *)(param_1 + 0x36) = local_17;
    *(undefined2 *)((int)param_1 + 0xde) = local_29;
    *(undefined2 *)(param_1 + 0x38) = local_2b;
    *(undefined2 *)(param_1 + 0x37) = local_25;
    param_1[0x39] = local_1d;
    if (local_1d < 1) {
      iVar2 = FUN_212f1602(1);
      param_1[0x39] = iVar2 * 0x14;
    }
    iVar2 = FUN_2130469e(param_2,param_1 + 0x53);
    if (-1 < iVar2) {
      *(ushort *)(param_1 + 0x3d) = (ushort)(param_1[0x53] != 0);
      param_1[0x5d] = (int)*(short *)((int)param_1 + 0xde);
      if ((LPVOID)param_1[0x58] != (LPVOID)0x0) {
        HeapFree(DAT_21314020,0,(LPVOID)param_1[0x58]);
      }
      pvVar3 = HeapAlloc(DAT_21314020,8,(int)(short)param_1[0x37] << 5);
      param_1[0x58] = (int)pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        iVar2 = (**(code **)(*param_1 + 0x30))(0x800a0007,7,7);
      }
      else {
        local_8 = 0;
        if (0 < (short)param_1[0x37]) {
          while( true ) {
            puVar4 = FUN_212f63cd(this,local_8);
            SysFreeString((BSTR)*puVar4);
            *puVar4 = 0;
            iVar2 = FUN_213045d9(this_00,param_2,puVar4);
            if (iVar2 < 0) break;
            iVar2 = lstrlenW((LPCWSTR)*puVar4);
            cbMultiByte = iVar2 * 2 + 2;
            FUN_212f159d(local_ac,cbMultiByte);
            WideCharToMultiByte(0,0,(LPCWSTR)*puVar4,-1,local_ac[0],cbMultiByte,(LPCSTR)0x0,
                                (LPBOOL)0x0);
            uVar1 = FUN_212f6412(local_ac[0]);
            *(undefined1 *)(puVar4 + 7) = uVar1;
            param_1 = (int *)FUN_2130469e(param_2,puVar4 + 1);
            if ((int)param_1 < 0) {
LAB_213043c4:
              if (local_ac[0] == (LPSTR)0x0) {
                return (int)param_1;
              }
              if ((local_30 & 1) == 0) {
                return (int)param_1;
              }
              HeapFree(DAT_21314020,0,local_ac[0]);
              return (int)param_1;
            }
            pvVar3 = FUN_212f15e6(0x20,DAT_21314020);
            if (pvVar3 == (LPVOID)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              puVar4 = FUN_212f6444(pvVar3,this);
            }
            FUN_212f646c((void *)this[0x57],puVar4);
            puVar4 = FUN_212f1f8c((void *)this[0x57],local_8);
            if (puVar4 != (undefined4 *)0x0) {
              local_14 = puVar4[2];
              param_1 = (int *)(**(code **)(*param_2 + 0xc))(param_2,local_10,3,0);
              if ((int)param_1 < 0) goto LAB_213043c4;
              local_c = 0;
              if (0 < local_10[0]) {
                do {
                  this_01 = DAT_21314020;
                  puVar4 = (undefined4 *)FUN_212f15e6(0x34,DAT_21314020);
                  if (puVar4 == (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)0x0;
                  }
                  else {
                    puVar4 = (undefined4 *)FUN_212f7b1e(puVar4);
                    this_01 = extraout_ECX;
                  }
                  param_1 = (int *)FUN_213045d9(this_01,param_2,puVar4 + 2);
                  if ((int)param_1 < 0) goto LAB_213043c4;
                  *puVar4 = 1;
                  FUN_212f7b49((void *)(local_14 + 4),puVar4);
                  local_c = local_c + 1;
                } while (local_c < local_10[0]);
              }
              if (local_8 == *(short *)((int)this + 0xde)) {
                *(undefined4 *)(local_14 + 0x1c) = 1;
              }
            }
            if ((local_ac[0] != (LPSTR)0x0) && ((local_30 & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_ac[0]);
            }
            local_8 = local_8 + 1;
            if ((short)this[0x37] <= local_8) {
              return (int)param_1;
            }
          }
        }
      }
    }
  }
  return iVar2;
}



int __cdecl FUN_21304472(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  IID *pIVar3;
  char *pcVar4;
  bool bVar5;
  IID local_20;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_10 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,&local_20,0x10,0);
  if (iVar1 < 0) goto LAB_2130452d;
  if (local_20.Data1 == 0xbe35203) {
    iVar1 = 0x10;
    bVar5 = true;
    pIVar3 = &local_20;
    pcVar4 = &DAT_21302720;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = (char)pIVar3->Data1 == *pcVar4;
      pIVar3 = (IID *)((int)&pIVar3->Data1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_213044bc;
LAB_213044d9:
    iVar1 = OleCreateFontIndirect(&DAT_21301cf8,&DAT_212f7380,&local_8);
  }
  else {
LAB_213044bc:
    if (local_20.Data1 == 0xfb8f0823) {
      iVar1 = 0x10;
      bVar5 = true;
      pIVar3 = &local_20;
      pcVar4 = &DAT_21301b68;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = (char)pIVar3->Data1 == *pcVar4;
        pIVar3 = (IID *)((int)&pIVar3->Data1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_213044d9;
    }
    iVar1 = CoCreateInstance(&local_20,(LPUNKNOWN)0x0,1,(IID *)&DAT_212f7380,&local_8);
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_8)(local_8,&DAT_21302710,&local_c);
    if ((-1 < iVar1) && (local_c != (int *)0x0)) {
      iVar2 = (**(code **)(*local_c + 0x14))(local_c,param_1);
      local_10 = (uint)(-1 < iVar2);
      (**(code **)(*local_c + 8))(local_c);
    }
  }
LAB_2130452d:
  if ((local_10 == 0) && (local_8 != (int *)0x0)) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  *param_2 = local_8;
  return iVar1;
}



void __cdecl FUN_21304566(int *param_1,uint *param_2)

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



int __thiscall FUN_213045d9(void *this,int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  BSTR lpMem;
  LPWSTR pWVar4;
  BSTR local_c;
  
  piVar2 = param_1;
  *param_2 = 0;
  iVar3 = FUN_21304566(param_1,(uint *)&param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  if (param_1 == (int *)0xffffffff) {
    bVar1 = false;
    iVar3 = FUN_21304566(piVar2,(uint *)&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lpMem = (BSTR)HeapAlloc(DAT_21314020,8,(int)param_1 + 1);
    local_c = (BSTR)this;
    if (lpMem != (BSTR)0x0) {
LAB_21304660:
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,lpMem,param_1,0);
      if (iVar3 < 0) {
        return iVar3;
      }
      if (bVar1) {
        pWVar4 = FUN_212f1d12((LPCSTR)lpMem,(BSTR)0x0);
        *param_2 = pWVar4;
        HeapFree(DAT_21314020,0,lpMem);
      }
      else {
        *param_2 = local_c;
      }
      return 0;
    }
  }
  else {
    lpMem = SysAllocStringLen((OLECHAR *)0x0,(UINT)param_1);
    if (lpMem != (BSTR)0x0) {
      param_1 = (int *)((int)param_1 * 2);
      local_c = lpMem;
      goto LAB_21304660;
    }
  }
  return -0x7ff8fff2;
}



int __cdecl FUN_2130469e(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  int local_18 [4];
  undefined1 local_8 [4];
  
  piVar1 = param_1;
  *param_2 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&param_1,1,local_8);
  if (iVar2 < 0) {
    return iVar2;
  }
  if ((char)param_1 == -1) {
    return iVar2;
  }
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,local_18,0x10,local_8);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (local_18[0] == 0) {
    iVar2 = 0x10;
    bVar5 = true;
    piVar3 = local_18;
    pcVar4 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = (char)*piVar3 == *pcVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      return 0;
    }
  }
  if (local_18[0] == 0xbe35204) {
    iVar2 = 0x10;
    bVar5 = true;
    piVar3 = local_18;
    pcVar4 = &DAT_21302730;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = (char)*piVar3 == *pcVar4;
      piVar3 = (int *)((int)piVar3 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_2130471a;
LAB_21304733:
    iVar2 = OleLoadPicture(piVar1,0,1,&DAT_212f7370,param_2);
  }
  else {
LAB_2130471a:
    if (local_18[0] == -0x470f7dc) {
      iVar2 = 0x10;
      bVar5 = true;
      piVar3 = local_18;
      pcVar4 = &DAT_21301b78;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = (char)*piVar3 == *pcVar4;
        piVar3 = (int *)((int)piVar3 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_21304733;
    }
    iVar2 = -0x7fff0001;
  }
  return iVar2;
}



undefined4 * __thiscall FUN_213049cb(void *this,byte param_1)

{
  FUN_213049f3((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_213049f3(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_21301e08;
  param_1[5] = &PTR_LAB_21301dc8;
  param_1[0xc] = &PTR_LAB_21301db0;
  *param_1 = &PTR_FUN_21301ef8;
  param_1[5] = &PTR_LAB_21301eb8;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_21309568((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_212f4be0;
  InterlockedDecrement(&DAT_21314158);
  return;
}



void __fastcall FUN_21304a07(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_21301ef8;
  param_1[5] = &PTR_LAB_21301eb8;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_21309568((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_212f4be0;
  InterlockedDecrement(&DAT_21314158);
  return;
}



undefined4 __thiscall FUN_21304a61(void *this,int *param_1,undefined4 *param_2)

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
    pcVar4 = (char *)&DAT_212f5500;
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
  uVar1 = FUN_21308cd3(this,param_1,param_2);
  return uVar1;
}



undefined4 FUN_21304ab2(int param_1,UINT param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  UINT UVar5;
  char *lpString;
  LRESULT LVar6;
  HWND pHVar7;
  longlong lVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  char local_1ac [260];
  LPSTR local_a8 [31];
  byte local_2c;
  uint local_28;
  WPARAM local_24;
  WPARAM local_20;
  WPARAM local_1c;
  WPARAM local_18;
  LPCWSTR local_14;
  float local_10;
  undefined4 local_c;
  int *local_8;
  
  iVar1 = param_1;
  puVar2 = (undefined4 *)FUN_21309617((void *)(param_1 + -0x30),&local_28);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)*puVar2)(puVar2,&DAT_212f1480,&local_8);
  if (iVar3 < 0) {
    return 0;
  }
  if ((int)param_2 < -0x201) {
    if (param_2 == 0xfffffdfe) {
      (**(code **)(*local_8 + 0x3c))(local_8,&param_1);
      uVar4 = (uint)((short)param_1 != 0);
      iVar3 = 0x7b;
      goto LAB_21304b29;
    }
    if (param_2 != 0xfffffdfa) goto switchD_21304b49_caseD_3;
LAB_21304d37:
    (**(code **)(*local_8 + 0x6c))(local_8,&local_c);
    (**(code **)(*local_8 + 0xec))(local_8,local_c);
    iVar3 = lstrlenW(local_14);
    uVar4 = iVar3 * 2 + 2;
    FUN_212f159d(local_a8,uVar4);
    WideCharToMultiByte(0,0,local_14,-1,local_a8[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
    SetDlgItemTextA(*(HWND *)(iVar1 + -0x14),0x71,local_a8[0]);
    SysFreeString(local_14);
    if ((local_a8[0] != (LPCSTR)0x0) && ((local_2c & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_a8[0]);
    }
    goto switchD_21304b49_caseD_3;
  }
  if (0x11 < (int)param_2) {
    if (param_2 != 0x60f) goto switchD_21304b49_caseD_3;
    (**(code **)(*local_8 + 0xc4))(local_8,&local_24);
    iVar3 = 0x7d;
    goto LAB_21304d05;
  }
  if (param_2 == 0x11) goto LAB_21304d37;
  switch(param_2) {
  case 1:
    (**(code **)(*local_8 + 0x54))(local_8,&local_c);
    UVar5 = (UINT)(short)local_c;
    iVar3 = 0x74;
    break;
  case 2:
    (**(code **)(*local_8 + 0x5c))(local_8,&local_c);
    UVar5 = (UINT)(short)local_c;
    iVar3 = 0x72;
    break;
  default:
    goto switchD_21304b49_caseD_3;
  case 4:
    (**(code **)(*local_8 + 0x6c))(local_8,&local_c);
    UVar5 = (UINT)(short)local_c;
    iVar3 = 0x6e;
    break;
  case 5:
    (**(code **)(*local_8 + 0x74))(local_8,&local_1c);
    iVar3 = 0x73;
    local_24 = local_1c;
    goto LAB_21304d05;
  case 7:
    (**(code **)(*local_8 + 0x88))(local_8,&param_1);
    uVar4 = (uint)((short)param_1 != 0);
    iVar3 = 0x7a;
    goto LAB_21304b29;
  case 8:
    (**(code **)(*local_8 + 0x90))(local_8,&param_1);
    uVar4 = (uint)((short)param_1 != 0);
    iVar3 = 0x79;
LAB_21304b29:
    CheckDlgButton(*(HWND *)(iVar1 + -0x14),iVar3,uVar4);
    goto switchD_21304b49_caseD_3;
  case 9:
    (**(code **)(*local_8 + 0x98))(local_8,&local_20);
    iVar3 = 0x75;
    local_24 = local_20;
LAB_21304d05:
    UVar5 = 0x14e;
    LVar10 = 0;
    pHVar7 = GetDlgItem(*(HWND *)(iVar1 + -0x14),iVar3);
    SendMessageA(pHVar7,UVar5,local_24,LVar10);
    goto switchD_21304b49_caseD_3;
  case 10:
    (**(code **)(*local_8 + 0xa0))(local_8,&local_10);
    lVar8 = __ftol();
    param_2 = (UINT)lVar8;
    if (local_10 - (float)(int)param_2 != 0.0) {
      lpString = FUN_2130a2b5(SUB84((double)local_10,0),(int)((ulonglong)(double)local_10 >> 0x20),7
                              ,local_1ac);
      iVar3 = 0x76;
LAB_21304be9:
      SetDlgItemTextA(*(HWND *)(iVar1 + -0x14),iVar3,lpString);
      goto switchD_21304b49_caseD_3;
    }
    iVar3 = 0x76;
    UVar5 = param_2;
    break;
  case 0xb:
    (**(code **)(*local_8 + 0xa8))(local_8,&local_10);
    lVar8 = __ftol();
    param_2 = (UINT)lVar8;
    if (local_10 - (float)(int)param_2 != 0.0) {
      lpString = FUN_2130a2b5(SUB84((double)local_10,0),(int)((ulonglong)(double)local_10 >> 0x20),7
                              ,local_1ac);
      iVar3 = 0x77;
      goto LAB_21304be9;
    }
    iVar3 = 0x77;
    UVar5 = param_2;
    break;
  case 0xc:
    (**(code **)(*local_8 + 0xb0))(local_8,&local_18);
    if (local_18 == 99) {
      LVar10 = 0;
      WVar9 = 0;
      UVar5 = 0x146;
      pHVar7 = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x78);
      LVar6 = SendMessageA(pHVar7,UVar5,WVar9,LVar10);
      local_18 = LVar6 - 1;
    }
    LVar10 = 0;
    UVar5 = 0x14e;
    WVar9 = local_18;
    pHVar7 = GetDlgItem(*(HWND *)(iVar1 + -0x14),0x78);
    SendMessageA(pHVar7,UVar5,WVar9,LVar10);
    goto switchD_21304b49_caseD_3;
  }
  SetDlgItemInt(*(HWND *)(iVar1 + -0x14),iVar3,UVar5,1);
switchD_21304b49_caseD_3:
  (**(code **)(*local_8 + 8))(local_8);
  return 0;
}



int __thiscall FUN_21304e29(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_8;
  
  piVar1 = param_1;
  *param_1 = 0;
  local_8 = this;
  puVar2 = (undefined4 *)FUN_21309617(this,(uint *)&local_8);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 1;
  }
  else {
    iVar3 = (**(code **)*puVar2)(puVar2,&DAT_212f4dc0,&param_1);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*param_1 + 0x10))(param_1,&DAT_212f5500,piVar1);
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



int __fastcall FUN_21304e89(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  
  if (param_1[0xd] != 0) {
    local_8 = param_1;
    iVar2 = FUN_21304e29(param_1,(int *)&local_8);
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



undefined4 __thiscall FUN_21304eda(void *this,HWND param_1,int *param_2,int *param_3,HWND param_4)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  LRESULT LVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  HWND pHVar8;
  int iVar9;
  short sVar10;
  float10 fVar11;
  longlong lVar12;
  void *wParam;
  int *piVar13;
  HWND *ppHVar14;
  UINT UVar15;
  WPARAM WVar16;
  LPARAM LVar17;
  CHAR local_2d4 [260];
  byte local_1d0 [260];
  LPSTR local_cc [31];
  byte local_50;
  char local_4c [32];
  BSTR local_2c;
  uint local_28;
  WPARAM local_24;
  WPARAM local_20;
  WPARAM local_1c;
  void *local_18;
  LPCWSTR local_14;
  int *local_10;
  UINT local_c;
  float local_8;
  
  pHVar8 = param_1;
  local_18 = this;
  if (param_2 == (int *)0x2) {
    FUN_21304e89((int *)this);
    goto switchD_21305881_caseD_7c;
  }
  if (param_2 == (int *)0x110) {
    SendDlgItemMessageA(param_1,0x6e,0xcf,1,0);
LAB_2130553c:
    uVar2 = 1;
  }
  else {
    if (param_2 != (int *)0x111) {
      if (param_2 == (int *)0x464) {
        iVar1 = FUN_21304e29(this,(int *)&local_10);
        if (iVar1 < 0) {
          if (param_4 != (HWND)0x0) {
            param_4->unused = iVar1;
          }
        }
        else {
          if (iVar1 == 1) goto switchD_21305881_caseD_7c;
          iVar1 = (**(code **)(*local_10 + 0x14))
                            (local_10,-(uint)(this != (void *)0x0) & (int)this + 0x30U,
                             (int)this + 0x34);
          piVar13 = local_10;
          if (local_10 != (int *)0x0) {
            local_10 = (int *)0x0;
            (**(code **)(*piVar13 + 8))(piVar13);
          }
          if (iVar1 < 0) {
            if (param_4 != (HWND)0x0) {
              param_4->unused = iVar1;
            }
          }
          else {
            puVar5 = (undefined4 *)FUN_21309617(this,&local_28);
            if ((puVar5 == (undefined4 *)0x0) ||
               (iVar1 = (**(code **)*puVar5)(puVar5,&DAT_212f1480,&param_3), iVar1 < 0))
            goto switchD_21305881_caseD_7c;
            (**(code **)(*param_3 + 0x6c))(param_3,&local_c);
            pHVar8 = param_1;
            SetDlgItemInt(param_1,0x6e,(int)(short)local_c,1);
            (**(code **)(*param_3 + 0xec))(param_3,local_c,&local_14);
            iVar1 = lstrlenW(local_14);
            uVar6 = iVar1 * 2 + 2;
            FUN_212f159d(local_cc,uVar6);
            WideCharToMultiByte(0,0,local_14,-1,local_cc[0],uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
            SetDlgItemTextA(pHVar8,0x71,local_cc[0]);
            SysFreeString(local_14);
            (**(code **)(*param_3 + 0x5c))(param_3,&local_c);
            SetDlgItemInt(pHVar8,0x72,(int)(short)local_c,1);
            (**(code **)(*param_3 + 0x54))(param_3,&local_c);
            SetDlgItemInt(pHVar8,0x74,(int)(short)local_c,1);
            (**(code **)(*param_3 + 0xa0))(param_3,&local_8);
            lVar12 = __ftol();
            param_4 = (HWND)lVar12;
            if (local_8 - (float)(int)param_4 == 0.0) {
              SetDlgItemInt(pHVar8,0x76,(UINT)param_4,1);
            }
            else {
              pcVar7 = FUN_2130a2b5(SUB84((double)local_8,0),
                                    (int)((ulonglong)(double)local_8 >> 0x20),7,local_2d4);
              SetDlgItemTextA(pHVar8,0x76,pcVar7);
            }
            (**(code **)(*param_3 + 0xa8))(param_3,&local_8);
            lVar12 = __ftol();
            param_4 = (HWND)lVar12;
            if (local_8 - (float)(int)param_4 == 0.0) {
              SetDlgItemInt(pHVar8,0x77,(UINT)param_4,1);
            }
            else {
              pcVar7 = FUN_2130a2b5(SUB84((double)local_8,0),
                                    (int)((ulonglong)(double)local_8 >> 0x20),7,local_2d4);
              SetDlgItemTextA(pHVar8,0x77,pcVar7);
            }
            (**(code **)(*param_3 + 0x90))(param_3,&param_2);
            CheckDlgButton(pHVar8,0x79,(uint)((short)param_2 != 0));
            (**(code **)(*param_3 + 0x88))(param_3,&param_2);
            CheckDlgButton(pHVar8,0x7a,(uint)((short)param_2 != 0));
            (**(code **)(*param_3 + 0x3c))(param_3,&param_2);
            CheckDlgButton(pHVar8,0x7b,(uint)((short)param_2 != 0));
            FUN_213059c1(pHVar8);
            (**(code **)(*param_3 + 0xb0))(param_3,&local_18);
            if (local_18 == (void *)0x63) {
              LVar17 = 0;
              WVar16 = 0;
              UVar15 = 0x146;
              pHVar8 = GetDlgItem(pHVar8,0x78);
              LVar4 = SendMessageA(pHVar8,UVar15,WVar16,LVar17);
              local_18 = (void *)(LVar4 + -1);
            }
            LVar17 = 0;
            UVar15 = 0x14e;
            wParam = local_18;
            pHVar8 = GetDlgItem(param_1,0x78);
            SendMessageA(pHVar8,UVar15,(WPARAM)wParam,LVar17);
            (**(code **)(*param_3 + 0x74))(param_3,&local_1c);
            LVar17 = 0;
            UVar15 = 0x14e;
            pHVar8 = GetDlgItem(param_1,0x73);
            SendMessageA(pHVar8,UVar15,local_1c,LVar17);
            (**(code **)(*param_3 + 0x98))(param_3,&local_24);
            LVar17 = 0;
            UVar15 = 0x14e;
            pHVar8 = GetDlgItem(param_1,0x75);
            SendMessageA(pHVar8,UVar15,local_24,LVar17);
            (**(code **)(*param_3 + 0xc4))(param_3,&local_20);
            LVar17 = 0;
            UVar15 = 0x14e;
            pHVar8 = GetDlgItem(param_1,0x7d);
            SendMessageA(pHVar8,UVar15,local_20,LVar17);
            (**(code **)(*param_3 + 8))(param_3);
            if ((local_cc[0] != (LPCSTR)0x0) && ((local_50 & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_cc[0]);
            }
          }
        }
      }
      else {
        if (param_2 != (int *)0x465) {
          if (param_2 == (int *)0x467) {
            iVar1 = FUN_21304e89((int *)this);
            param_4->unused = iVar1;
          }
          goto switchD_21305881_caseD_7c;
        }
        LVar17 = 0;
        WVar16 = 0;
        UVar15 = 0x147;
        pHVar3 = GetDlgItem(param_1,0x78);
        local_14 = (LPCWSTR)SendMessageA(pHVar3,UVar15,WVar16,LVar17);
        LVar17 = 0;
        WVar16 = 0;
        UVar15 = 0x146;
        pHVar3 = GetDlgItem(pHVar8,0x78);
        LVar4 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
        if (local_14 == (LPCWSTR)(LVar4 + -1)) {
          local_14 = (LPCWSTR)0x63;
        }
        LVar17 = 0;
        WVar16 = 0;
        UVar15 = 0x147;
        pHVar3 = GetDlgItem(pHVar8,0x73);
        local_28 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
        LVar17 = 0;
        WVar16 = 0;
        UVar15 = 0x147;
        pHVar3 = GetDlgItem(pHVar8,0x75);
        local_20 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
        LVar17 = 0;
        WVar16 = 0;
        UVar15 = 0x147;
        pHVar3 = GetDlgItem(pHVar8,0x7d);
        local_24 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
        puVar5 = (undefined4 *)FUN_21309617(local_18,&local_1c);
        while (puVar5 != (undefined4 *)0x0) {
          iVar1 = (**(code **)*puVar5)(puVar5,&DAT_212f1480,&param_2);
          if (-1 < iVar1) {
            (**(code **)(*param_2 + 0x54))(param_2,&local_c);
            param_1 = (HWND)GetDlgItemInt(pHVar8,0x74,(BOOL *)0x0,1);
            if ((short)param_1 == 0) {
              GetDlgItemTextA(pHVar8,0x74,(LPSTR)local_1d0,0x104);
              uVar6 = FUN_2130a3c2(local_1d0,(byte *)"1234567890.+-");
              if (uVar6 != 0) {
                param_1 = (HWND)0xffffffff;
              }
            }
            param_1 = (HWND)(**(code **)(*param_2 + 0x58))(param_2,param_1);
            if ((int)param_1 < 0) {
              FUN_21305b9d((uint)param_1);
              param_4->unused = (int)param_1;
              SetDlgItemInt(pHVar8,0x74,(int)(short)local_c,1);
              iVar1 = 0x74;
            }
            else {
              (**(code **)(*param_2 + 0xa0))(param_2,&local_8);
              GetDlgItemTextA(pHVar8,0x76,(LPSTR)local_1d0,0x104);
              uVar6 = FUN_2130a3c2(local_1d0,(byte *)"1234567890.+-");
              if (uVar6 == 0) {
                fVar11 = FUN_2130a36b(local_1d0);
                param_3 = (int *)(float)fVar11;
              }
              else {
                param_3 = (int *)0xbf800000;
              }
              param_1 = (HWND)(**(code **)(*param_2 + 0xa4))(param_2);
              if ((int)param_1 < 0) {
                FUN_21305b9d((uint)param_1);
                param_4->unused = (int)param_1;
                lVar12 = __ftol();
                param_4 = (HWND)lVar12;
                if (local_8 - (float)(int)param_4 == 0.0) {
                  SetDlgItemInt(pHVar8,0x76,(UINT)param_4,1);
                }
                else {
                  pcVar7 = FUN_2130a2b5(SUB84((double)local_8,0),
                                        (int)((ulonglong)(double)local_8 >> 0x20),7,local_4c);
                  SetDlgItemTextA(pHVar8,0x76,pcVar7);
                }
                iVar1 = 0x76;
              }
              else {
                (**(code **)(*param_2 + 0xa8))(param_2,&param_3);
                GetDlgItemTextA(pHVar8,0x77,(LPSTR)local_1d0,0x104);
                uVar6 = FUN_2130a3c2(local_1d0,(byte *)"1234567890.+-");
                if (uVar6 == 0) {
                  fVar11 = FUN_2130a36b(local_1d0);
                  param_3 = (int *)(float)fVar11;
                }
                else {
                  param_3 = (int *)0xbf800000;
                }
                param_1 = (HWND)(**(code **)(*param_2 + 0xac))(param_2);
                if ((int)param_1 < 0) {
                  FUN_21305b9d((uint)param_1);
                  param_4->unused = (int)param_1;
                  lVar12 = __ftol();
                  param_4 = (HWND)lVar12;
                  if (local_8 - (float)(int)param_4 == 0.0) {
                    SetDlgItemInt(pHVar8,0x77,(UINT)param_4,1);
                  }
                  else {
                    pcVar7 = FUN_2130a2b5(SUB84((double)local_8,0),
                                          (int)((ulonglong)(double)local_8 >> 0x20),7,local_4c);
                    SetDlgItemTextA(pHVar8,0x77,pcVar7);
                  }
                  iVar1 = 0x77;
                }
                else {
                  param_1 = (HWND)(**(code **)(*param_2 + 0xb4))(param_2,local_14);
                  if ((int)param_1 < 0) {
                    FUN_21305b9d((uint)param_1);
                    param_4->unused = (int)param_1;
                    iVar1 = 0x78;
                  }
                  else {
                    param_1 = (HWND)(**(code **)(*param_2 + 0x78))(param_2,local_28);
                    if ((int)param_1 < 0) {
                      FUN_21305b9d((uint)param_1);
                      param_4->unused = (int)param_1;
                      iVar1 = 0x73;
                    }
                    else {
                      param_1 = (HWND)(**(code **)(*param_2 + 0x9c))(param_2,local_20);
                      if ((int)param_1 < 0) {
                        FUN_21305b9d((uint)param_1);
                        param_4->unused = (int)param_1;
                        iVar1 = 0x75;
                      }
                      else {
                        param_1 = (HWND)(**(code **)(*param_2 + 200))(param_2,local_24);
                        if ((int)param_1 < 0) {
                          FUN_21305b9d((uint)param_1);
                          param_4->unused = (int)param_1;
                          iVar1 = 0x7d;
                        }
                        else {
                          UVar15 = IsDlgButtonChecked(pHVar8,0x79);
                          param_1 = (HWND)(**(code **)(*param_2 + 0x94))
                                                    (param_2,-(uint)(UVar15 != 0));
                          if ((int)param_1 < 0) {
                            FUN_21305b9d((uint)param_1);
                            param_4->unused = (int)param_1;
                            iVar1 = 0x79;
                          }
                          else {
                            UVar15 = IsDlgButtonChecked(pHVar8,0x7a);
                            param_1 = (HWND)(**(code **)(*param_2 + 0x8c))
                                                      (param_2,-(uint)(UVar15 != 0));
                            if ((int)param_1 < 0) {
                              FUN_21305b9d((uint)param_1);
                              param_4->unused = (int)param_1;
                              iVar1 = 0x7a;
                            }
                            else {
                              UVar15 = IsDlgButtonChecked(pHVar8,0x7b);
                              param_1 = (HWND)(**(code **)(*param_2 + 0x40))
                                                        (param_2,-(uint)(UVar15 != 0));
                              if ((int)param_1 < 0) {
                                FUN_21305b9d((uint)param_1);
                                param_4->unused = (int)param_1;
                                iVar1 = 0x7b;
                              }
                              else {
                                (**(code **)(*param_2 + 0x5c))(param_2,&local_c);
                                param_1 = (HWND)GetDlgItemInt(pHVar8,0x72,(BOOL *)0x0,1);
                                if ((short)param_1 == 0) {
                                  GetDlgItemTextA(pHVar8,0x72,(LPSTR)local_1d0,0x104);
                                  FUN_2130a3c2(local_1d0,(byte *)"1234567890.+-");
                                }
                                param_1 = (HWND)(**(code **)(*param_2 + 0x60))(param_2);
                                if (-1 < (int)param_1) {
                                  local_c = GetDlgItemInt(pHVar8,0x6e,(BOOL *)0x0,1);
                                  (**(code **)(*param_2 + 0x6c))(param_2,&local_10);
                                  if ((short)local_c == (short)local_10) {
                                    GetDlgItemTextA(pHVar8,0x71,local_2d4,0x104);
                                    local_2c = FUN_212f1d12(local_2d4,(BSTR)0x0);
                                    if (local_2c == (LPWSTR)0x0) {
                                      FUN_21305b9d(0x8007000e);
                                    }
                                    else {
                                      param_1 = (HWND)(**(code **)(*param_2 + 0xf0))();
                                      if ((int)param_1 < 0) {
                                        FUN_21305b9d((uint)param_1);
                                        param_4->unused = (int)param_1;
                                        iVar1 = 0x71;
                                        goto LAB_2130534a;
                                      }
                                      SysFreeString(local_2c);
                                    }
                                  }
                                  else {
                                    SetDlgItemInt(pHVar8,0x6e,(int)(short)local_10,1);
                                    (**(code **)(*param_2 + 0x70))(param_2,local_10);
                                  }
                                  (**(code **)(*param_2 + 8))(param_2);
                                  goto LAB_213052c0;
                                }
                                FUN_21305b9d((uint)param_1);
                                param_4->unused = (int)param_1;
                                SetDlgItemInt(pHVar8,0x72,(int)(short)local_c,1);
                                iVar1 = 0x72;
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
LAB_2130534a:
            LVar17 = 1;
            pHVar3 = GetDlgItem(pHVar8,iVar1);
            SendMessageA(pHVar8,0x28,(WPARAM)pHVar3,LVar17);
            (**(code **)(*param_2 + 8))(param_2);
            goto switchD_21305881_caseD_7c;
          }
LAB_213052c0:
          puVar5 = (undefined4 *)FUN_21309627(local_18,&local_1c);
        }
      }
      goto LAB_2130553c;
    }
    iVar1 = 1;
    sVar10 = (short)((uint)param_3 >> 0x10);
    switch((uint)param_3 & 0xffff) {
    case 0x6f:
      iVar1 = -1;
    case 0x70:
      puVar5 = (undefined4 *)FUN_21309617(this,(uint *)&param_3);
      if ((puVar5 != (undefined4 *)0x0) &&
         (iVar9 = (**(code **)*puVar5)(puVar5,&DAT_212f1480,&param_2), -1 < iVar9)) {
        (**(code **)(*param_2 + 0x6c))(param_2,&param_1);
        ppHVar14 = &param_4;
        piVar13 = param_2;
        (**(code **)(*param_2 + 0x5c))();
        param_1 = (HWND)((int)&param_1->unused + iVar1);
        if ((-1 < (short)param_1) && ((short)param_1 < (short)param_4)) {
          (**(code **)(*(int *)((int)this + 0x14) + 0x2c))((int)this + 0x14,piVar13,ppHVar14);
          (**(code **)(*param_2 + 0x70))(param_2,param_1);
        }
        (**(code **)(*param_2 + 8))(param_2);
      }
      break;
    case 0x71:
    case 0x72:
    case 0x74:
    case 0x76:
    case 0x77:
      if ((sVar10 == 0x300) && (LVar4 = SendMessageA(param_4,0xb8,0,0), LVar4 != 0)) {
        FUN_213096a2((int)this);
        SendMessageA(param_4,0xb9,0,0);
      }
      break;
    case 0x73:
    case 0x75:
    case 0x78:
    case 0x7d:
      if (sVar10 == 1) goto switchD_21305881_caseD_79;
      break;
    case 0x79:
    case 0x7a:
    case 0x7b:
switchD_21305881_caseD_79:
      FUN_213096a2((int)this);
    }
switchD_21305881_caseD_7c:
    uVar2 = 0;
  }
  return uVar2;
}



HRESULT __cdecl FUN_213059c1(HWND param_1)

{
  HRESULT HVar1;
  HWND pHVar2;
  undefined **ppuVar3;
  ITypeInfo *pIVar4;
  ITypeLib *local_c;
  ITypeInfo *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  HVar1 = LoadRegTypeLib((GUID *)PTR_DAT_21314578,*(WORD *)(PTR_PTR_21314124 + 0x18),
                         *(WORD *)(PTR_PTR_21314124 + 0x1c),(uint)(ushort)DAT_213145d0,&local_c);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (-1 < HVar1) {
    ppuVar3 = &PTR_DAT_21301d74;
    do {
      HVar1 = (*local_c->lpVtbl->GetTypeInfoOfGuid)(local_c,(GUID *)*ppuVar3,&local_8);
      if (HVar1 < 0) goto LAB_21305a61;
      pIVar4 = local_8;
      pHVar2 = GetDlgItem(param_1,(uint)*(ushort *)(ppuVar3 + -1));
      HVar1 = FUN_21305a70(pHVar2,(int *)pIVar4);
      (*local_8->lpVtbl->Release)(local_8);
      if (HVar1 < 0) goto LAB_21305a61;
      ppuVar3 = ppuVar3 + 2;
    } while (*ppuVar3 != (undefined *)0x0);
    HVar1 = 0;
LAB_21305a61:
    (*local_c->lpVtbl->Release)(local_c);
  }
  return HVar1;
}



int __cdecl FUN_21305a70(HWND param_1,int *param_2)

{
  uint cbMultiByte;
  int *piVar1;
  int iVar2;
  CHAR local_110 [128];
  LPSTR local_90 [31];
  byte local_14;
  undefined4 *local_10;
  LPCWSTR local_c;
  int local_8;
  
  piVar1 = param_2;
  SendMessageA(param_1,0x14b,0,0);
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_8);
  if (-1 < iVar2) {
    param_2 = (int *)0x0;
    if (*(short *)(local_8 + 0x2e) != 0) {
      do {
        iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,&local_10);
        if (iVar2 < 0) goto LAB_21305b8d;
        (**(code **)(*piVar1 + 0x30))(piVar1,*local_10,&local_c,0,0,0);
        iVar2 = lstrlenW(local_c);
        cbMultiByte = iVar2 * 2 + 2;
        FUN_212f159d(local_90,cbMultiByte);
        WideCharToMultiByte(0,0,local_c,-1,local_90[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
        wsprintfA(local_110,"%ld - %s",*(undefined4 *)(local_10[2] + 8),local_90[0]);
        SendMessageA(param_1,0x143,0,(LPARAM)local_110);
        SysFreeString(local_c);
        (**(code **)(*piVar1 + 0x54))(piVar1,local_10);
        if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
          HeapFree(DAT_21314020,0,local_90[0]);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < (int)(uint)*(ushort *)(local_8 + 0x2e));
    }
    iVar2 = 0;
LAB_21305b8d:
    (**(code **)(*piVar1 + 0x4c))(piVar1,local_8);
  }
  return iVar2;
}



void __cdecl FUN_21305b9d(uint param_1)

{
  HRESULT HVar1;
  HINSTANCE pHVar2;
  UINT UVar3;
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
  HVar1 = GetErrorInfo(0,&local_8);
  if ((HVar1 < 0) || (local_8 == (IErrorInfo *)0x0)) {
    pCVar4 = local_250;
    iVar5 = 0x100;
    UVar3 = 0x7d3;
    pHVar2 = FUN_212fb1cc(0);
    LoadStringA(pHVar2,UVar3,pCVar4,iVar5);
    if (param_1 == 0x8007000e) {
      pCVar4 = local_150;
      iVar5 = 0x100;
      UVar3 = 7;
      pHVar2 = FUN_212fb1cc(0);
      LoadStringA(pHVar2,UVar3,pCVar4,iVar5);
    }
    else {
      local_150[0] = '\0';
    }
  }
  else {
    HVar1 = (*local_8->lpVtbl->GetDescription)(local_8,&local_c);
    if (HVar1 < 0) goto LAB_21305c8a;
    HVar1 = (*local_8->lpVtbl->GetSource)(local_8,&local_10);
    if (HVar1 < 0) goto LAB_21305c8a;
    WideCharToMultiByte(0,0,local_c,-1,local_150,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    WideCharToMultiByte(0,0,local_10,-1,local_250,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  if (local_150[0] == '\0') {
    pCVar4 = local_50;
    iVar5 = 0x40;
    UVar3 = 0x138b;
    pHVar2 = FUN_212fb1cc(0);
    LoadStringA(pHVar2,UVar3,pCVar4,iVar5);
    wsprintfA(local_150,local_50,param_1 & 0xffff);
  }
  MessageBeep(0x30);
  MessageBoxA((HWND)0x0,local_150,local_250,0x2030);
LAB_21305c8a:
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



void FUN_21305d4d(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_212f26e3(param_1 + -0x31);
  if ((uVar1 == 0) && (param_1[0x100] == 0)) {
    iVar2 = param_1[0x2c];
  }
  else {
    iVar2 = (int)*(short *)((int)param_1 + 0x1a);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,iVar2,param_2);
  return;
}



uint FUN_21305dc6(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 < 0) || (1 < param_2)) {
    uVar1 = (**(code **)(*(int *)(param_1 + -0xc4) + 0x30))(0x800a017c,0x17c,0x17c);
  }
  else {
    uVar1 = FUN_212f6e1e((void *)(param_1 + 0x3c),(int)(short)param_2);
    if (-1 < (int)uVar1) {
      *(short *)(param_1 + 0x16) = (short)param_2;
      *(uint *)(param_1 + -0x14) = *(uint *)(param_1 + -0x14) | 1;
      FUN_212f9bc6((void *)(param_1 + -0x98),0x60f);
    }
  }
  return uVar1;
}



void __thiscall FUN_21305e3e(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)FUN_212f1575(*(int *)((int)this + 0x168) << 2);
  if (param_1 != 0) {
    do {
      puVar6 = (undefined4 *)((int)this + 0x180);
      puVar7 = puVar1;
      for (uVar2 = *(uint *)((int)this + 0x168) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      iVar5 = 0;
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      iVar3 = iVar5;
      if (*(int *)((int)this + 0x16c) != 1 && -1 < *(int *)((int)this + 0x16c) + -1) {
        do {
          iVar4 = *(int *)((int)this + 0x168);
          iVar5 = iVar3 + 1;
          puVar6 = (undefined4 *)((int)this + iVar5 * iVar4 * 4 + 0x180);
          puVar7 = (undefined4 *)((int)this + iVar3 * iVar4 * 4 + 0x180);
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          iVar3 = iVar5;
        } while (iVar5 < *(int *)((int)this + 0x16c) + -1);
      }
      iVar3 = *(int *)((int)this + 0x168);
      param_1 = param_1 + -1;
      puVar6 = puVar1;
      puVar7 = (undefined4 *)((int)this + iVar5 * iVar3 * 4 + 0x180);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    } while (param_1 != 0);
  }
  FUN_212f1433(puVar1);
  return;
}



void __fastcall FUN_21305eee(int param_1)

{
  LONG LVar1;
  
  SetWindowLongA(*(HWND *)(param_1 + 0xa0),0,param_1);
  LVar1 = SetWindowLongA(*(HWND *)(param_1 + 0xa0),-4,0x21305f1b);
  *(LONG *)(param_1 + 0x164) = LVar1;
  return;
}



LRESULT FUN_21305f1b(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  SHORT SVar1;
  void *this;
  int iVar2;
  LRESULT LVar3;
  
  this = (void *)GetWindowLongA(param_1,0);
  if (this == (void *)0x0) {
LAB_21305fce:
    LVar3 = 0;
  }
  else {
    if (((param_2 == 0x201) || (param_2 == 0x203)) && (*(int *)((int)this + 0x4c8) == 0)) {
      iVar2 = FUN_21305ff1(this,param_4);
      if (iVar2 == 0) {
        SVar1 = GetKeyState(0x11);
        if (((int)SVar1 & 0x80000000U) == 0) {
          SVar1 = GetKeyState(0x10);
          if (((int)SVar1 & 0x80000000U) == 0) {
            LVar3 = SendMessageA(param_1,0x52c,param_3,param_4);
            if (LVar3 != 0) {
              *(undefined4 *)((int)this + 0x4c8) = 1;
              SendMessageA(param_1,0x201,param_3,param_4);
              SendMessageA(param_1,0x202,param_3,param_4);
              *(undefined4 *)((int)this + 0x4c8) = 0;
              goto LAB_21305fce;
            }
          }
        }
      }
    }
    LVar3 = CallWindowProcA(*(WNDPROC *)((int)this + 0x164),param_1,param_2,param_3,param_4);
  }
  return LVar3;
}



undefined4 __thiscall FUN_21305ff1(void *this,undefined4 param_1)

{
  POINT pt;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  uint uVar4;
  BOOL BVar5;
  LPSTR local_bc [31];
  byte local_40;
  VARIANTARG local_3c;
  LONG local_2c;
  LPCWSTR local_28;
  undefined4 local_24;
  RECT local_20;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (int *)0x0;
  local_c = (int *)0x0;
  local_24 = 0;
  local_28 = (LPCWSTR)FUN_212faf68(this);
  iVar2 = lstrlenW(local_28);
  uVar4 = iVar2 * 2 + 2;
  FUN_212f159d(local_bc,uVar4);
  WideCharToMultiByte(0,0,local_28,-1,local_bc[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
  iVar2 = lstrcmpiA(local_bc[0],"Twip");
  local_2c = (LONG)(short)param_1;
  local_28 = (LPCWSTR)(int)(short)((uint)param_1 >> 0x10);
  iVar3 = FUN_212f2975(this,&local_10);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*local_10 + 0xc))(local_10,0xd,3,&local_c);
    if (iVar3 == 0) {
      (**(code **)(*local_c + 0x14))(local_c);
      do {
        do {
          iVar3 = (**(code **)(*local_c + 0xc))(local_c,1,&local_8,0);
          if (iVar3 != 0) goto LAB_213061d6;
          (**(code **)(*local_8 + 8))(local_8);
          bVar1 = FUN_212f7be0(local_8,&DAT_212f9e04,&local_3c,0,0,0,0,2,1,(int *)0x0);
        } while (CONCAT31(extraout_var,bVar1) == 0);
        local_20.top = FUN_212f9b5c(&local_3c);
        FUN_212f7be0(local_8,L"Left",&local_3c,0,0,0,0,2,1,(int *)0x0);
        local_20.left = FUN_212f9b5c(&local_3c);
        FUN_212f7be0(local_8,L"Width",&local_3c,0,0,0,0,2,1,(int *)0x0);
        uVar4 = FUN_212f9b5c(&local_3c);
        local_20.right = uVar4 + local_20.left;
        FUN_212f7be0(local_8,L"Height",&local_3c,0,0,0,0,2,1,(int *)0x0);
        uVar4 = FUN_212f9b5c(&local_3c);
        local_20.bottom = uVar4 + local_20.top;
        if (iVar2 == 0) {
          iVar3 = FUN_21306413(1);
          local_20.top = local_20.top / iVar3;
          iVar3 = FUN_21306451(1);
          local_20.bottom = local_20.bottom / iVar3;
          iVar3 = FUN_21306451(1);
          local_20.left = local_20.left / iVar3;
          iVar3 = FUN_21306413(1);
          local_20.right = local_20.right / iVar3;
        }
        pt.y = (LONG)local_28;
        pt.x = local_2c;
        BVar5 = PtInRect(&local_20,pt);
      } while (BVar5 == 0);
      local_24 = 1;
LAB_213061d6:
      (**(code **)(*local_c + 8))(local_c);
    }
    (**(code **)(*local_10 + 8))(local_10);
  }
  if ((local_bc[0] != (LPCSTR)0x0) && ((local_40 & 1) != 0)) {
    HeapFree(DAT_21314020,0,local_bc[0]);
  }
  return local_24;
}



int FUN_21306212(HDC param_1,HGDIOBJ param_2,LPCSTR param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  char cVar1;
  HGDIOBJ h;
  int iVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int x;
  tagSIZE local_c;
  
  h = SelectObject(param_1,param_2);
  uVar3 = 0xffffffff;
  pCVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar4;
    pCVar4 = pCVar4 + 1;
  } while (cVar1 != '\0');
  GetTextExtentPoint32A(param_1,param_3,~uVar3 - 1,&local_c);
  iVar2 = local_c.cy + -1;
  if (param_4 == 1) {
    param_5 = param_5 + -1 + iVar2;
    iVar2 = param_6 - param_7;
    x = param_5;
  }
  else if (param_4 == 2) {
    param_5 = param_5 + (-1 - iVar2);
    iVar2 = param_7 + param_6;
    x = param_5;
  }
  else {
    if (param_4 == 3) {
      iVar2 = -iVar2;
      x = param_5 - param_7;
    }
    else {
      x = param_7 + param_5;
    }
    param_6 = param_6 + iVar2;
    iVar2 = param_6;
  }
  MoveToEx(param_1,param_5,param_6,(LPPOINT)0x0);
  LineTo(param_1,x,iVar2);
  SelectObject(param_1,h);
  return param_7;
}



void FUN_213062cf(HDC param_1,HANDLE param_2,int *param_3,int param_4,uint param_5,int param_6,
                 uint param_7,int param_8)

{
  HDC hdc;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18;
  HDC local_8;
  
  hdc = CreateCompatibleDC(param_1);
  if (hdc != (HDC)0x0) {
    local_8 = hdc;
    SelectObject(hdc,param_2);
    GetObjectA(param_2,0x18,local_20);
    if (param_5 != 0) {
      local_1c = local_1c / param_5;
    }
    if (param_7 != 0) {
      local_18 = local_18 / param_7;
    }
    if (param_8 == 0) {
      BitBlt(param_1,*param_3,param_3[1],local_1c,local_18,hdc,local_1c * param_4,local_18 * param_6
             ,0xcc0020);
    }
    else {
      StretchBlt(param_1,*param_3,param_3[1],param_3[2] - *param_3,param_3[3] - param_3[1],local_8,
                 local_1c * param_4,local_18 * param_6,local_1c,local_18,0xcc0020);
    }
    DeleteDC(local_8);
  }
  return;
}



int __cdecl FUN_2130639b(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (param_3 == 0) {
    iVar2 = (**(code **)*param_1)(param_1,&DAT_212f4dd0,&param_1);
  }
  else {
    iVar2 = FUN_212f7ccc(param_1,&param_1);
    if (-1 < iVar2) goto LAB_213063ca;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_212f4dd0,&param_1);
  }
  if (iVar2 < 0) {
    return 0;
  }
LAB_213063ca:
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_212f4e18,&param_2,1,0x800,&param_3);
  (**(code **)(*param_1 + 8))(param_1);
  if (iVar2 < 0) {
    return 0;
  }
  return param_3;
}



int __cdecl FUN_21306413(int param_1)

{
  HDC hdc;
  int iVar1;
  
  hdc = CreateICA("Display",(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  DeleteDC(hdc);
  if (iVar1 == 0) {
    iVar1 = 0x60;
  }
  return (int)(0x5a0 / (longlong)iVar1) * param_1;
}



int __cdecl FUN_21306451(int param_1)

{
  HDC hdc;
  int iVar1;
  
  hdc = CreateICA("Display",(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  iVar1 = GetDeviceCaps(hdc,0x5a);
  DeleteDC(hdc);
  if (iVar1 == 0) {
    iVar1 = 0x60;
  }
  return (int)(0x5a0 / (longlong)iVar1) * param_1;
}



int __cdecl FUN_2130648f(int param_1)

{
  HDC hdc;
  int iVar1;
  
  hdc = CreateICA("Display",(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  iVar1 = GetDeviceCaps(hdc,0x5a);
  DeleteDC(hdc);
  if (iVar1 == 0) {
    iVar1 = 0x60;
  }
  iVar1 = (int)(0x5a0 / (longlong)iVar1);
  return (iVar1 / 2 + param_1) / iVar1;
}



int __cdecl FUN_213064d6(int param_1)

{
  int local_14 [2];
  int local_c [2];
  
  local_c[1] = 0;
  local_c[0] = param_1;
  FUN_212f5d6a(local_c,local_14);
  return local_14[0];
}



undefined4 __cdecl FUN_213064fa(undefined4 param_1)

{
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = param_1;
  FUN_212f5d6a(&local_c,&local_14);
  return local_10;
}



void __cdecl FUN_2130651e(ushort param_1,BSTR param_2)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  iVar1 = 0x200;
  uID = (uint)param_1;
  hInstance = FUN_212fb1cc(0);
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_212f1d12(local_204,param_2);
  return;
}



void __cdecl FUN_2130655f(undefined4 *param_1,LPSTR param_2)

{
  wsprintfA(param_2,s___08lX__04X__04X__02X_02X__02X_0_21316bbc,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  return;
}



undefined4 __cdecl FUN_213065aa(undefined4 param_1,LPCSTR param_2,HKEY param_3,int param_4)

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
  iVar1 = FUN_21307537(param_3);
  if (iVar1 == 0) {
    FUN_21306f95(param_3,(HKEY)0x0);
  }
  iVar1 = FUN_2130655f(param_3,local_38);
  if (iVar1 != 0) {
    wsprintfA((LPSTR)local_13c,s_CLSID__s_21316bf0,local_38);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21316eb0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    if (LVar2 == 0) {
      if (param_2 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_21316bfc,param_1);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_2);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if ((((LVar2 == 0) &&
           (LVar2 = RegCreateKeyExA(local_c,s_InprocServer32_21316c08,0,&DAT_21316eb4,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10), LVar2 == 0)) &&
          (DVar3 = GetModuleFileNameA(DAT_21314000,(LPSTR)local_13c,0x104), DVar3 != 0)) &&
         (LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,DVar3 + 1), LVar2 == 0)) {
        if (param_4 == 0) {
          RegDeleteValueA(local_8,s_ThreadingModel_21316c34);
        }
        else {
          LVar2 = RegSetValueExA(local_8,s_ThreadingModel_21316c24,0,1,(BYTE *)s_Apartment_21316c18,
                                 10);
          if (LVar2 != 0) goto LAB_213066f0;
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        return 1;
      }
    }
  }
LAB_213066f0:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return 0;
}



undefined4 __cdecl
FUN_21306749(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar1 = FUN_213065aa(param_2,param_3,param_8,param_9);
  if (iVar1 != 0) {
    lstrcpyA((LPSTR)local_13c,param_1);
    lstrcatA((LPSTR)local_13c,&DAT_21316c44);
    lstrcatA((LPSTR)local_13c,param_2);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21316eb8,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
    if (LVar2 == 0) {
      if (param_3 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_21316c48,param_2);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_3);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if (((LVar2 == 0) &&
          (LVar2 = RegCreateKeyExA(local_c,s_CLSID_21316c54,0,&DAT_21316ebc,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9), LVar2 == 0)) &&
         (iVar1 = FUN_2130655f(param_8,(LPSTR)local_38), iVar1 != 0)) {
        iVar1 = lstrlenA((LPCSTR)local_38);
        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
        if (LVar2 == 0) {
          RegCloseKey(local_8);
          LVar2 = RegCreateKeyExA(local_c,s_CurVer_21316c5c,0,&DAT_21316ec0,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
          if (LVar2 == 0) {
            wsprintfA((LPSTR)local_13c,s__s__s__ld_21316c64,param_1,param_2,param_4);
            iVar1 = lstrlenA((LPCSTR)local_13c);
            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
            if (LVar2 == 0) {
              RegCloseKey(local_8);
              RegCloseKey(local_c);
              LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21316ec4,0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
              if (LVar2 == 0) {
                if (param_3 == (LPCSTR)0x0) {
                  wsprintfA((LPSTR)local_13c,s__s_Object_21316c70,param_2);
                }
                else {
                  lstrcpyA((LPSTR)local_13c,param_3);
                }
                iVar1 = lstrlenA((LPCSTR)local_13c);
                LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                if ((LVar2 == 0) &&
                   (LVar2 = RegCreateKeyExA(local_c,s_CLSID_21316c7c,0,&DAT_21316ec8,0,0x2001f,
                                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9),
                   LVar2 == 0)) {
                  iVar1 = lstrlenA((LPCSTR)local_38);
                  LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                  if (LVar2 == 0) {
                    RegCloseKey(local_8);
                    RegCloseKey(local_c);
                    iVar1 = FUN_2130655f(param_8,(LPSTR)local_38);
                    if (iVar1 != 0) {
                      wsprintfA((LPSTR)local_13c,s_CLSID__s_21316c84,local_38);
                      LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21316ecc,0,
                                              0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
                      if ((LVar2 == 0) &&
                         (LVar2 = RegCreateKeyExA(local_c,s_VersionIndependentProgID_21316c90,0,
                                                  &DAT_21316ed0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0
                                                  ,&local_8,&param_9), LVar2 == 0)) {
                        wsprintfA((LPSTR)local_13c,s__s__s_21316cac,param_1,param_2);
                        iVar1 = lstrlenA((LPCSTR)local_13c);
                        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                        if (LVar2 == 0) {
                          RegCloseKey(local_8);
                          LVar2 = RegCreateKeyExA(local_c,s_ProgID_21316cb4,0,&DAT_21316ed4,0,
                                                  0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                                                  &param_9);
                          if (LVar2 == 0) {
                            wsprintfA((LPSTR)local_13c,s__s__s__ld_21316cbc,param_1,param_2,param_4)
                            ;
                            iVar1 = lstrlenA((LPCSTR)local_13c);
                            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                            if (LVar2 == 0) {
                              RegCloseKey(local_8);
                              RegCreateKeyExA(local_c,s_TypeLib_21316cc8,0,&DAT_21316ed8,0,0x2001f,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
                              iVar1 = FUN_2130655f(param_7,(LPSTR)local_38);
                              if (iVar1 != 0) {
                                iVar1 = lstrlenA((LPCSTR)local_38);
                                LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                                if (LVar2 == 0) {
                                  RegCloseKey(local_8);
                                  LVar2 = RegCreateKeyExA(local_c,s_Version_21316cd0,0,&DAT_21316edc
                                                          ,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                                                          &local_8,&param_9);
                                  if (LVar2 == 0) {
                                    wsprintfA((LPSTR)local_13c,s__ld__ld_21316cd8,param_5,param_6);
                                    iVar1 = lstrlenA((LPCSTR)local_13c);
                                    RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                                    HVar3 = CoCreateInstance((IID *)&DAT_21302750,(LPUNKNOWN)0x0,1,
                                                             (IID *)&DAT_21302760,&local_10);
                                    if (-1 < HVar3) {
                                      (**(code **)(*local_10 + 0x14))
                                                (local_10,param_8,1,&LAB_21302740);
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



bool __cdecl
FUN_21306c6c(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar3 = FUN_21306749(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_12);
  if (iVar3 == 0) {
    return false;
  }
  FUN_2130655f(param_9,local_34);
  wsprintfA((LPSTR)local_138,s_CLSID__s_21316ce0,local_34);
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_138,0,0xf003f,&param_8);
  if (LVar4 != 0) {
    return false;
  }
  if (param_13 != 0) {
    param_12 = RegCreateKeyExA(param_8,s_Control_21316cec,0,&DAT_21316ee0,0,0xf003f,
                               (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
    if (param_12 != 0) goto LAB_21306f6c;
    RegCloseKey(local_8);
    local_8 = (HKEY)0x0;
  }
  param_12 = RegCreateKeyExA(param_8,s_MiscStatus_21316cf4,0,&DAT_21316ee4,0,0xf003f,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
  if (param_12 == 0) {
    local_138[0] = '0';
    local_138[1] = 0;
    param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,2);
    if ((param_12 == 0) &&
       (param_12 = RegCreateKeyExA(local_8,&DAT_21316d00,0,&DAT_21316ee8,0,0xf003f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_7), param_12 == 0)) {
      wsprintfA((LPSTR)local_138,&DAT_21316d04,param_10);
      iVar3 = lstrlenA((LPCSTR)local_138);
      param_12 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
      RegCloseKey(local_c);
      if (param_12 == 0) {
        RegCloseKey(local_8);
        local_8 = (HKEY)0x0;
        if (param_13 != 0) {
          GetModuleFileNameA(DAT_21314000,(LPSTR)local_138,0x104);
          wsprintfA(local_34,&DAT_21316d08,param_11 & 0xffff);
          lstrcatA((LPSTR)local_138,local_34);
          param_12 = RegCreateKeyExA(param_8,s_ToolboxBitmap32_21316d10,0,&DAT_21316eec,0,0xf003f,
                                     (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
          if (param_12 != 0) goto LAB_21306f6c;
          iVar3 = lstrlenA((LPCSTR)local_138);
          param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
          if (param_12 != 0) goto LAB_21306f6c;
        }
        HVar5 = CoCreateInstance((IID *)&DAT_21302750,(LPUNKNOWN)0x0,1,(IID *)&DAT_21302760,&param_6
                                );
        if (-1 < HVar5) {
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_21316f18;
          do {
            if (0x21316f3f < (int)ppuVar6) break;
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
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_21316f30;
          do {
            if (0x21316f57 < (int)ppuVar6) break;
            puVar2 = (undefined4 *)*ppuVar6;
            *puVar7 = *puVar2;
            param_11 = param_11 + 1;
            ppuVar6 = ppuVar6 + 1;
            puVar7[1] = puVar2[1];
            puVar1 = puVar7 + 3;
            puVar7[2] = puVar2[2];
            puVar7 = puVar7 + 4;
            *puVar1 = puVar2[3];
          } while ((int)param_11 < 1);
          (**(code **)(*param_6 + 0x1c))(param_6,param_9,1,local_1d8);
          (**(code **)(*param_6 + 8))(param_6);
        }
      }
    }
  }
LAB_21306f6c:
  if (param_8 != (HKEY)0x0) {
    RegCloseKey(param_8);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return param_12 == 0;
}



bool __cdecl FUN_21306f95(undefined4 *param_1,HKEY param_2)

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
  iVar3 = FUN_2130655f(param_1,(LPSTR)local_108);
  if ((iVar3 != 0) &&
     (LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID_21316d20,0,0xf003f,&param_2), LVar4 == 0)) {
    iVar3 = FUN_213075db(param_2,local_108);
    if ((iVar3 != 0) && (lstrcatA((LPSTR)local_108,s__InprocServer32_21316d28), pHVar1 != (HKEY)0x0)
       ) {
      pHVar1->unused = 0;
    }
    bVar2 = FUN_213071a7(param_2,(LPCSTR)local_108);
    RegCloseKey(param_2);
    return bVar2;
  }
  return false;
}



undefined4 __cdecl FUN_21307033(undefined4 param_1,undefined4 param_2,int param_3,HKEY param_4)

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
  
  bVar1 = FUN_21306f95(param_4,&local_10);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_213070e8:
    uVar3 = 0;
  }
  else {
    if (local_10.unused != 0) {
      wsprintfA((LPSTR)local_118,s__s__s__ld_21316d38,param_1,param_2,param_3);
      bVar1 = FUN_213071a7((HKEY)0x80000000,(LPCSTR)local_118);
      if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_213070e8;
      iVar2 = FUN_2130722b(param_1,param_2,param_3,(int *)&local_8,&local_c);
      if (iVar2 == 0) {
        if (local_c == 0) {
          wsprintfA((LPSTR)local_118,s__s__s_21316d44,param_1,param_2);
          bVar1 = FUN_213071a7((HKEY)0x80000000,(LPCSTR)local_118);
          if (CONCAT31(extraout_var_01,bVar1) == 0) goto LAB_213070e8;
        }
      }
      else {
        FUN_213072ed(param_1,param_2,local_8);
        wsprintfA((LPSTR)local_118,s__s__s_CurVer_21316d4c,param_1,param_2);
        LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,0xf003f,&param_4);
        if (LVar4 != 0) {
          LVar4 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,&DAT_21316ef0,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&param_4,&local_14);
          if (LVar4 != 0) goto LAB_2130719f;
          wsprintfA((LPSTR)local_118,s__s__s__ld_21316d5c,param_1,param_2,local_8);
          iVar2 = lstrlenA((LPCSTR)local_118);
          RegSetValueExA(param_4,(LPCSTR)0x0,0,1,local_118,iVar2 + 1);
        }
        RegCloseKey(param_4);
      }
    }
LAB_2130719f:
    uVar3 = 1;
  }
  return uVar3;
}



bool __cdecl FUN_213071a7(HKEY param_1,LPCSTR param_2)

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
      bVar1 = FUN_213071a7(local_8,local_110);
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
FUN_2130722b(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

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
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,&DAT_21316ef4,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    iVar2 = 0x20;
    do {
      if (param_3 != iVar2) {
        wsprintfA(local_114,s__s__s__ld_21316d68,param_1,param_2,iVar2);
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



bool __cdecl FUN_213072ed(undefined4 param_1,undefined4 param_2,HKEY param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  wsprintfA(local_110,s__s__s__ld_21316d74,param_1,param_2,param_3);
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,local_110,0,0xf003f,&param_3);
  if (LVar2 == 0) {
    wsprintfA(local_110,s__s__s_21316d80,param_1,param_2);
    FUN_213071a7((HKEY)0x80000000,local_110);
    uVar3 = RegCreateKeyExA((HKEY)0x80000000,local_110,0,&DAT_21316ef8,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if (uVar3 == 0) {
      bVar1 = FUN_213073c4(param_3,local_8);
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



bool __cdecl FUN_213073c4(HKEY param_1,HKEY param_2)

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
      goto LAB_213074d5;
      local_14 = RegCreateKeyExA(param_2,(LPCSTR)local_12c,0,&DAT_21316efc,0,0x2001f,
                                 (LPSECURITY_ATTRIBUTES)0x0,&local_18,&local_20);
      if (local_14 != 0) break;
      FUN_213073c4(local_10,local_18);
      RegCloseKey(local_10);
      RegCloseKey(local_18);
      local_c = local_c + 1;
      iVar2 = RegEnumKeyExA(param_1,local_c,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_28);
    }
    RegCloseKey(local_10);
LAB_213074d5:
    bVar3 = local_14 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



uint __thiscall FUN_213074e9(void *this,LPSTR param_1,uint param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_c = DAT_21316d88;
  _uStack_8 = CONCAT22((short)((uint)this >> 0x10),DAT_21316d8c);
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



undefined4 __cdecl FUN_21307537(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_214 [260];
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = FUN_2130655f(param_1,local_110);
  if (iVar1 != 0) {
    wsprintfA(local_214,s_CLSID__s_21316d90,local_110);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,local_214,0,&DAT_21316f00,0,0x20019,
                            (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,s_Implemented_Categories_21316d9c,0,0xf003f,&local_8);
      RegCloseKey(param_1);
      if (LVar2 == 0) {
        RegCloseKey(local_8);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_213075db(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [260];
  
  wsprintfA(local_108,s__s_InprocServer_21316db4,param_2);
  LVar1 = RegOpenKeyExA(param_1,local_108,0,0xf003f,&param_2);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(param_2);
  return 1;
}



char * __cdecl FUN_2130762d(LPCSTR param_1)

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



int FUN_21307650(undefined4 param_1,int param_2)

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
  DVar2 = GetModuleFileNameA(DAT_21314000,local_170,0x104);
  if (((DVar2 != 0) && (iVar3 = FUN_213076e8(local_170,local_6c), iVar3 != 0)) &&
     (iVar3 = FUN_213076e8(param_1,local_38), iVar3 != 0)) {
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



int FUN_213076e8(undefined4 param_1,undefined4 *param_2)

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
  dwBytes = FUN_21307796(param_1,&local_c);
  if (dwBytes != 0) {
    lpMem = HeapAlloc(DAT_21314020,0,dwBytes);
    if (lpMem == (LPVOID)0x0) {
      return local_8;
    }
    local_8 = FUN_213077f9(param_1,local_c,dwBytes,lpMem);
    if ((local_8 != 0) &&
       (local_8 = FUN_21307864(lpMem,&DAT_21316dc4,&local_14,&local_10), local_8 != 0)) {
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
    HeapFree(DAT_21314020,0,lpMem);
  }
  return local_8;
}



int __cdecl FUN_21307796(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213176c8 == (FARPROC)0x0) {
    if ((DAT_21316794 == (HMODULE)0x0) &&
       (DAT_21316794 = LoadLibraryA(s_VERSION_DLL_21316dc8), DAT_21316794 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_213176c8 = GetProcAddress(DAT_21316794,s_GetFileVersionInfoSizeA_21316dd4);
    if (DAT_213176c8 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  iVar1 = (*DAT_213176c8)(param_1,param_2);
  return iVar1;
}



int __cdecl
FUN_213077f9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213176c4 == (FARPROC)0x0) {
    if ((DAT_21316794 == (HMODULE)0x0) &&
       (DAT_21316794 = LoadLibraryA(s_VERSION_DLL_21316dec), DAT_21316794 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_213176c4 = GetProcAddress(DAT_21316794,s_GetFileVersionInfoA_21316df8);
    if (DAT_213176c4 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  iVar1 = (*DAT_213176c4)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl
FUN_21307864(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213176c0 == (FARPROC)0x0) {
    if ((DAT_21316794 == (HMODULE)0x0) &&
       (DAT_21316794 = LoadLibraryA(s_VERSION_DLL_21316e0c), DAT_21316794 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_213176c0 = GetProcAddress(DAT_21316794,s_VerQueryValueA_21316e18);
    if (DAT_213176c0 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  iVar1 = (*DAT_213176c0)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl FUN_213078cf(int *param_1,undefined4 param_2,undefined2 *param_3)

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



undefined4 * __thiscall FUN_21307936(void *this,byte param_1)

{
  FUN_212f5350((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_2130795e(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 + -0x44) * 2] + 0x4a);
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
    iVar2 = *(int *)((&PTR_PTR_21314124)[iVar2 * 2] + 0x4c);
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



bool __cdecl FUN_213079e0(HWND param_1,uint param_2,WPARAM param_3,HWND param_4,LRESULT *param_5)

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
      goto LAB_21307a17;
    }
    if (param_2 == 0x2b) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[5].unused;
      }
      goto LAB_21307a17;
    }
    if (param_2 == 0x2c) {
      if (param_4 != (HWND)0x0) {
        hWnd = GetDlgItem(param_1,param_4[1].unused);
      }
      goto LAB_21307a17;
    }
    if (param_2 == 0x2d) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4[3].unused;
      }
      goto LAB_21307a17;
    }
    if ((param_2 < 0x2e) || (0x2f < param_2)) goto LAB_21307a17;
  }
  else {
    if (param_2 == 0x4e) {
      if (param_4 != (HWND)0x0) {
        hWnd = (HWND)param_4->unused;
      }
      goto LAB_21307a17;
    }
    if ((param_2 != 0x111) &&
       ((param_2 < 0x114 ||
        ((0x115 < param_2 &&
         ((param_2 < 0x133 ||
          ((0x138 < param_2 &&
           ((param_2 != 0x210 || (((short)param_3 != 1 && ((short)param_3 != 2))))))))))))))
    goto LAB_21307a17;
  }
  hWnd = param_4;
LAB_21307a17:
  if (hWnd != (HWND)0x0) {
    LVar1 = SendMessageA(hWnd,param_2 + 0x2000,param_3,(LPARAM)param_4);
    *param_5 = LVar1;
  }
  return hWnd != (HWND)0x0;
}



HWND FUN_21307ad0(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

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
    bVar1 = FUN_212f6f1c(this,1);
    return (HWND)CONCAT31(extraout_var,bVar1);
  }
  bVar1 = FUN_213079e0(param_1,param_2,param_3,lParam,(LRESULT *)&param_4);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    param_4 = (HWND)DefWindowProcA(param_1,param_2,param_3,(LPARAM)lParam);
  }
  return param_4;
}



undefined4 FUN_21307d52(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return 0;
}



void FUN_21307d67(int param_1)

{
  FUN_212f6529((void *)(param_1 + -0x3c),-4);
  return;
}



undefined4 FUN_21307df5(int param_1,uint *param_2)

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
  
  puVar2 = (&PTR_PTR_21314124)[*(int *)(param_1 + -0x24) * 2];
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
    puVar7 = (undefined4 *)HeapAlloc(DAT_21314020,0,iVar10 * 0x10);
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = puVar7;
      if (bVar3) {
        puVar8 = &DAT_21301e40;
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
        puVar11 = *(undefined4 **)((&PTR_PTR_21314124)[*(int *)(param_1 + -0x24) * 2] + 0x54);
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
      this = FUN_212f15e6(0x40,DAT_21314020);
      if (this == (LPVOID)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_213098f3(this,(undefined4 *)&DAT_21302820,iVar10,0x10,puVar7,&LAB_2130971e);
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



undefined4
FUN_2130804e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

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



HRESULT FUN_213080c2(int param_1,ITypeLib *param_2)

{
  ITypeLib *ppTinfo;
  HRESULT HVar1;
  
  ppTinfo = param_2;
  param_2->lpVtbl = (ITypeLibVtbl *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  HVar1 = LoadRegTypeLib((GUID *)PTR_DAT_21314578,
                         *(WORD *)((&PTR_PTR_21314124)[*(int *)(param_1 + -0x48) * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_21314124)[*(int *)(param_1 + -0x48) * 2] + 0x1c),
                         (uint)(ushort)DAT_213145d0,&param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (-1 < HVar1) {
    HVar1 = (*param_2->lpVtbl->GetTypeInfoOfGuid)
                      (param_2,*(GUID **)(&PTR_PTR_21314124)[*(int *)(param_1 + -0x48) * 2],
                       (ITypeInfo **)ppTinfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (-1 < HVar1) {
      HVar1 = 0;
    }
  }
  return HVar1;
}



void FUN_21308162(int param_1,int *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)(param_1 + -0x50);
  iVar1 = FUN_213082b6(this,param_2);
  if (-1 < iVar1) {
    (**(code **)(*this + 0x38))(this,param_2);
  }
  return;
}



int FUN_21308187(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_21308298((void *)(param_1 + -0x50),param_2);
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



int FUN_213081ca(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"Contents",0,0x10,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x14))((int *)(param_1 + -4),param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



int FUN_2130820b(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,L"Contents",0x1011,0,0,&param_2);
  if (-1 < iVar1) {
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
    iVar1 = FUN_21308298((void *)(param_1 + -0x54),param_2);
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xfe;
    *(uint *)(param_1 + 0x5c) = (uint)(-1 < iVar1) << 5 | *(uint *)(param_1 + 0x5c) & 0xffffffdf;
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



void __thiscall FUN_21308298(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_21308317(this,param_1);
  if (-1 < iVar1) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x3c))(this,param_1);
  }
  return;
}



int __thiscall FUN_213082b6(void *this,int *param_1)

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
        FUN_212f5d6a(local_14,(int *)((int)this + 0x88));
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



void __thiscall FUN_21308317(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x12344321;
  local_8 = 8;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    FUN_212f1626((int *)((int)this + 0x88),local_14);
    (**(code **)(*param_1 + 0x10))(param_1,local_14,8,0);
  }
  return;
}



undefined4
FUN_2130836a(int param_1,int param_2,undefined4 param_3,int *param_4,LPCWSTR param_5,HDC param_6,
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
      param_6 = FUN_21308689(param_5);
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



undefined4 FUN_2130858d(int param_1,undefined4 param_2,int *param_3)

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
    FUN_212f1626(local_14,param_3);
    FUN_212f1626(local_c,param_3 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
FUN_213085f9(undefined4 param_1,int param_2,RECT *param_3,LONG param_4,LONG param_5,
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
FUN_2130862a(undefined4 param_1,int param_2,RECT *param_3,RECT *param_4,undefined4 param_5,
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



HDC __cdecl FUN_21308689(LPCWSTR param_1)

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
    pHVar2 = CreateDCA(s_DISPLAY_21316e28,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
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
    FUN_212f159d(local_118,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6),-1,local_118[0],
                        (int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = local_118[0];
    iVar3 = lstrlenW((LPCWSTR)local_8);
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_212f159d(local_98,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)local_8,-1,local_98[0],(int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_18 = local_98[0];
    iVar3 = lstrlenW(local_10);
    uVar4 = iVar3 * 2 + 2;
    FUN_212f159d(local_198,uVar4);
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
        local_8 = (DEVMODEA *)HeapAlloc(DAT_21314020,0,(ushort)param_1[0x23] + 0x9c);
        if (local_8 == (DEVMODEA *)0x0) {
          if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
            HeapFree(DAT_21314020,0,local_198[0]);
          }
          if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
            HeapFree(DAT_21314020,0,local_98[0]);
          }
          if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
            HeapFree(DAT_21314020,0,local_118[0]);
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
      HeapFree(DAT_21314020,0,local_8);
    }
    if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_198[0]);
    }
    if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_98[0]);
    }
    if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_118[0]);
    }
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_21308961(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_212f4be0;
  InterlockedDecrement(&DAT_21314158);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21308995(void *this,byte param_1)

{
  FUN_212f549a((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_213089bd(undefined4 param_1,undefined4 *param_2)

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



bool FUN_213089d7(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = *(char **)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x14) * 2] + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}



undefined4 * __thiscall FUN_21308a1c(void *this,byte param_1)

{
  FUN_212f5457((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21308c6b(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_212f5a36(this,param_1,this);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21301f10;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_21301ef8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21301eb8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21308cab(void *this,byte param_1)

{
  FUN_21304a07((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_21308cd3(void *this,int *param_1,undefined4 *param_2)

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
    pcVar3 = &DAT_21302880;
    piVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == (char)*piVar4;
      pcVar3 = pcVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) goto LAB_21308d00;
LAB_21308d18:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x14U);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = piVar4;
    uVar1 = 0;
  }
  else {
LAB_21308d00:
    if (*param_1 == 0x1e44665) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = &DAT_21302870;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == (char)*piVar4;
        pcVar3 = pcVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (bVar5);
      if (bVar5) goto LAB_21308d18;
    }
    uVar1 = FUN_212f649e(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_21308d46(int param_1,int *param_2)

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



uint FUN_21308d73(int *param_1,HWND param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_213094b8((int)(param_1 + -5));
  if (-1 < (int)uVar1) {
    uVar1 = FUN_2130965d((int)(param_1 + -5));
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



int FUN_21308dc5(int param_1)

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



undefined4 FUN_21308e0d(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  tagRECT local_14;
  
  FUN_213094b8(param_1 + -0x14);
  puVar4 = param_2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_2130651e(*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0xc) * 2] + 0x1a),
                       (BSTR)0x1);
  param_2[1] = uVar1;
  uVar1 = FUN_2130651e(*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0xc) * 2] + 0x1c),
                       (BSTR)0x1);
  param_2[4] = uVar1;
  pWVar2 = FUN_212f1d12(*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0xc) * 2] + 0x20),
                        (BSTR)0x1);
  iVar3 = *(int *)(param_1 + 0xc);
  param_2[5] = pWVar2;
  param_2[6] = *(undefined4 *)((&PTR_PTR_21314124)[iVar3 * 2] + 0x24);
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



undefined4 FUN_21308efd(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (((uint)param_1[5] >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  FUN_21309568((int)(param_1 + -5));
  uVar4 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = HeapAlloc(DAT_21314020,0,param_2 << 2);
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
        uVar2 = FUN_2130965d((int)(param_1 + -5));
      }
    }
  }
  return uVar2;
}



int FUN_21308ff7(int param_1)

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



int FUN_21309055(int param_1,LPCWSTR param_2)

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
  local_c = FUN_2130762d(*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0xc) * 2] + 0x20));
  if (local_c != (char *)0x0) {
    iVar2 = lstrcmpiA(local_c,&DAT_21316e30);
    if (iVar2 == 0) {
      lstrcpyA(local_190,*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      iVar2 = FUN_2130a039(local_190,
                           *(undefined4 *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x24),
                           &param_1);
      local_8 = (uint)(-1 < iVar2);
      if (param_1 != 0) goto LAB_2130919b;
      iVar2 = lstrlenW(param_2);
      local_8 = iVar2 * 2 + 2;
      FUN_212f159d(local_8c,local_8);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_21316e34);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      local_8 = FUN_2130a1bd(*(undefined4 *)(iVar1 + 8),local_190,0xf,
                             *(undefined4 *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x24))
      ;
    }
    else {
      iVar2 = lstrcmpiA(local_c,&DAT_21316e38);
      if (iVar2 != 0) goto LAB_2130919b;
      iVar2 = lstrlenW(param_2);
      cbMultiByte = iVar2 * 2 + 2;
      FUN_212f159d(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_21316e3c);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      lstrcatA(local_190,s_>LangRef_21316e40);
      local_8 = WinHelpA(*(HWND *)(iVar1 + 8),local_190,1,
                         *(ULONG_PTR *)((&PTR_PTR_21314124)[*(int *)(iVar1 + 0xc) * 2] + 0x24));
    }
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_8c[0]);
    }
  }
LAB_2130919b:
  return (-(uint)(local_8 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 __cdecl FUN_21309425(HWND param_1,HWND param_2,UINT param_3)

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



undefined4 FUN_2130948e(int param_1,WPARAM param_2)

{
  undefined4 local_8;
  
  local_8 = 0x80004001;
  SendMessageA(*(HWND *)(param_1 + 8),0x466,param_2,(LPARAM)&local_8);
  return local_8;
}



uint __fastcall FUN_213094b8(int param_1)

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
    lpName = (LPCSTR)(uint)*(ushort *)((&PTR_PTR_21314124)[*(int *)(param_1 + 0x20) * 2] + 0x18);
    pHVar1 = FUN_213096bd(param_1);
    hResInfo = FindResourceA(pHVar1,lpName,lpType);
    if (hResInfo != (HRSRC)0x0) {
      pHVar1 = FUN_213096bd(param_1);
      hResData = LoadResource(pHVar1,hResInfo);
      if ((hResData != (HGLOBAL)0x0) &&
         (lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData), lpTemplate != (LPCDLGTEMPLATEA)0x0))
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
        dwInitParam = 0;
        lpDialogFunc = FUN_213095cd;
        DAT_213176cc = param_1;
        hWndParent = FUN_213097ea();
        CreateDialogIndirectParamA(DAT_21314000,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
        DAT_213176cc = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
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



void __fastcall FUN_21309568(int param_1)

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
    HeapFree(DAT_21314020,0,*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 FUN_213095cd(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 == (int *)0xffffffff) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      SetWindowLongA(param_1,-0x15,(LONG)DAT_213176cc);
      piVar1 = DAT_213176cc;
      DAT_213176cc[7] = (int)param_1;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



void __thiscall FUN_21309617(void *this,uint *param_1)

{
  *param_1 = 0;
  FUN_21309627(this,param_1);
  return;
}



undefined4 __thiscall FUN_21309627(void *this,uint *param_1)

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



undefined4 __fastcall FUN_2130965d(int param_1)

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



void __fastcall FUN_213096a2(int param_1)

{
  int *piVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x213096cb)

HINSTANCE __fastcall FUN_213096bd(int param_1)

{
  int *piVar1;
  HINSTANCE pHVar2;
  
  pHVar2 = DAT_21316780;
  if (DAT_21316780 == (HINSTANCE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if ((DAT_21314278 == 0) && (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_213145d0);
      DAT_21314278 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    pHVar2 = FUN_212fb1cc(0);
  }
  return pHVar2;
}



HWND __cdecl FUN_21309748(int param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  ATOM AVar1;
  HWND pHVar2;
  int iVar3;
  WNDCLASSA *pWVar4;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213167c0 == '\0') {
    pWVar4 = &local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4->style = 0;
      pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
    }
    local_2c.lpfnWndProc = FUN_21307ad0;
    local_2c.hInstance = DAT_21314000;
    local_2c.lpszClassName = "CtlFrameWork_ReflectWindow";
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      return (HWND)0x0;
    }
    DAT_213167c0 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  pHVar2 = CreateWindowExA(0,"CtlFrameWork_ReflectWindow",(LPCSTR)0x0,
                           -(uint)(param_1 != 0) & 0x10000000 | 0x44000000,param_3,param_4,*param_5,
                           param_5[1],param_2,(HMENU)0x0,DAT_21314000,(LPVOID)0x0);
  return pHVar2;
}



HWND FUN_213097ea(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213167bc == (HWND)0x0) {
    pWVar3 = &local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->style = 0;
      pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
    }
    local_2c.lpfnWndProc = DAT_213176b8;
    if (DAT_213176b8 == (WNDPROC)0x0) {
      local_2c.lpfnWndProc = FUN_21309879;
    }
    local_2c.lpszClassName = s_CtlFrameWork_Parking_21316e4c;
    local_2c.hInstance = DAT_21314000;
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 != 0) {
      DAT_213167bc = CreateWindowExA(0,s_CtlFrameWork_Parking_21316e64,(LPCSTR)0x0,0x80000000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_21314000,(LPVOID)0x0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  return DAT_213167bc;
}



LRESULT FUN_21309879(HWND param_1,uint param_2,WPARAM param_3,HWND param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  LRESULT local_8;
  
  bVar1 = FUN_213079e0(param_1,param_2,param_3,param_4,&local_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = DefWindowProcA(param_1,param_2,param_3,(LPARAM)param_4);
  }
  return local_8;
}



undefined4 * __thiscall FUN_213098cb(void *this,byte param_1)

{
  FUN_21309954((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_213098f3(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  FUN_212f5a36(this,(undefined4 *)0x0,-(uint)(this != (void *)0x0) & (int)this + 0x14U);
  *(undefined ***)((int)this + 0x14U) = &PTR_LAB_21301f98;
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
  *(undefined ***)this = &PTR_FUN_21301f60;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21301f78;
  return (undefined4 *)this;
}



void __fastcall FUN_21309954(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  *param_1 = &PTR_FUN_21301f60;
  param_1[5] = &PTR_LAB_21301f78;
  if (iVar1 == 0) {
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      HeapFree(DAT_21314020,0,(LPVOID)param_1[0xd]);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 8))(iVar1 + 0x14);
  }
  *param_1 = &PTR_FUN_212f4be0;
  InterlockedDecrement(&DAT_21314158);
  return;
}



bool FUN_213099fc(int param_1,uint param_2,int param_3,uint *param_4)

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



undefined4 FUN_21309a8d(int *param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  LPVOID this;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pvVar1 = DAT_21314020;
  puVar3 = (undefined4 *)0x0;
  *param_2 = 0;
  this = FUN_212f15e6(0x40,pvVar1);
  if (this != (LPVOID)0x0) {
    puVar3 = FUN_213098f3(this,param_1 + 1,param_1[5],param_1[6],param_1[8],param_1[10]);
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
  
                    // 0x19af2  4  DllRegisterServer
  HVar1 = FUN_21309b2c(param_1);
  if (-1 < HVar1) {
    iVar2 = FUN_2130293b();
    HVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return HVar1;
}



int DllUnregisterServer(void)

{
  int iVar1;
  
                    // 0x19b0f  5  DllUnregisterServer
  iVar1 = FUN_21309e21();
  if (-1 < iVar1) {
    iVar1 = FUN_2130293b();
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return iVar1;
}



HRESULT __fastcall FUN_21309b2c(void *param_1)

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
  if (DAT_21316f3c != 0) {
    GetModuleFileNameA(DAT_21314000,local_228,0x104);
    local_18 = FUN_212f1d12(local_228,(BSTR)0x0);
    HVar4 = LoadTypeLib(local_18,&local_14);
    if (HVar4 < 0) goto LAB_21309d40;
    (*local_14->lpVtbl->GetLibAttr)(local_14,&local_8);
    local_10 = (LPWSTR)(uint)local_8->wMajorVerNum;
    local_1c = (uint)local_8->wMinorVerNum;
    (*local_14->lpVtbl->ReleaseTLibAttr)(local_14,local_8);
    param_1 = extraout_ECX;
  }
  if (DAT_21314120 != -1) {
    local_8 = (TLIBATTR *)&DAT_21314120;
    ppuVar9 = &PTR_PTR_21314124;
    do {
      if (*(int *)*ppuVar9 != 0) {
        if (uVar8 == 0) {
          if (local_c == 0) {
            local_c = FUN_213074e9(param_1,aCStack_125 + 1,0x104);
            lstrcatA(aCStack_125 + 1,&DAT_21316eae);
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
LAB_21309e07:
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_213065aa(puVar3[1],(LPCSTR)puVar3[2],(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_04;
        }
        else if (sVar1 == 1) {
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_21306749("TabDlg",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],local_10,local_1c,
                       (undefined4 *)PTR_DAT_21314578,(HKEY)*puVar3,puVar3[3]);
          param_1 = extraout_ECX_03;
        }
        else if (sVar1 == 2) {
          uVar10 = 1;
          iVar6 = FUN_213078cf((int *)local_14,*(undefined4 *)*ppuVar9,(undefined2 *)&local_20);
          if (-1 < iVar6) {
            uVar10 = local_20 & 0x20;
          }
          puVar3 = (undefined4 *)*ppuVar9;
          FUN_21306c6c("TabDlg",(LPCSTR)puVar3[1],(LPCSTR)puVar3[2],puVar3[6],puVar3[7],
                       (int *)local_10,local_1c,(HKEY)PTR_DAT_21314578,(HKEY)*puVar3,puVar3[0xd],
                       CONCAT22(extraout_var,*(undefined2 *)(puVar3 + 0x10)),puVar3[3],uVar10);
          param_1 = extraout_ECX_02;
        }
        else if (sVar1 == 3) goto LAB_21309e07;
      }
      local_8 = (TLIBATTR *)(local_8->guid).Data4;
      ppuVar9 = ppuVar9 + 2;
    } while (*(short *)local_8 != -1);
  }
  if (DAT_21316f3c != 0) {
    if ((uVar8 == 0) ||
       (szHelpDir = FUN_212f1d12(aCStack_125 + 1,(BSTR)0x1), local_10 = szHelpDir, uVar8 == 0)) {
      szHelpDir = (LPCOLESTR)&DAT_21316f02;
    }
    HVar4 = RegisterTypeLib(local_14,local_18,szHelpDir);
    if (uVar8 != 0) {
      CoTaskMemFree(local_10);
    }
    (*local_14->lpVtbl->Release)(local_14);
    if (HVar4 < 0) goto LAB_21309d40;
  }
  HVar4 = 0;
LAB_21309d40:
  SysFreeString(local_18);
  return HVar4;
}



undefined4 FUN_21309e21(void)

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
  if (DAT_21314120 != -1) {
    psVar6 = &DAT_21314120;
    local_8 = &PTR_PTR_21314124;
    do {
      puVar2 = (undefined4 *)*local_8;
      pHVar3 = (HKEY)*puVar2;
      if (pHVar3 != (HKEY)0x0) {
        sVar1 = *psVar6;
        if (sVar1 == 0) {
LAB_21309f87:
          FUN_21306f95(pHVar3,(HKEY)0x0);
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          FUN_21307033("TabDlg",puVar2[1],puVar2[6],pHVar3);
        }
        else if (sVar1 == 3) goto LAB_21309f87;
      }
      local_8 = local_8 + 2;
      psVar6 = psVar6 + 4;
    } while (*psVar6 != -1);
  }
  if (PTR_DAT_21314578 != (undefined *)0x0) {
    GetModuleFileNameA(DAT_21314000,local_194,0x104);
    iVar4 = lstrlenA(local_194);
    cchWideChar = iVar4 * 2 + 2;
    FUN_212f159d(local_90,cchWideChar);
    MultiByteToWideChar(0,0,local_194,-1,local_90[0],cchWideChar);
    HVar5 = LoadTypeLibEx(local_90[0],REGKIND_NONE,&local_c);
    if (-1 < HVar5) {
      HVar5 = (*local_c->lpVtbl->GetLibAttr)(local_c,&local_10);
      if (-1 < HVar5) {
        UnRegisterTypeLib((GUID *)PTR_DAT_21314578,local_10->wMajorVerNum,local_10->wMinorVerNum,
                          local_10->lcid,local_10->syskind);
      }
    }
    if ((local_90[0] != (LPCOLESTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_21314020,0,local_90[0]);
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



int __cdecl FUN_21309f95(undefined4 *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *local_8;
  
  HVar2 = 0;
  local_8 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_213167b8 == (int *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_21301ff8,(LPUNKNOWN)0x0,1,(IID *)&DAT_21302008,
                             &DAT_213167b8);
    if (-1 < HVar2) {
      if (DAT_213167b8 == (int *)0x0) {
        HVar2 = -0x7fffbffb;
      }
      else {
        iVar1 = (**(code **)*DAT_213167b8)(DAT_213167b8,&DAT_21301fe8,&local_8);
        if (-1 < iVar1) {
          (**(code **)(*local_8 + 0x10))(local_8,DAT_213145d0);
        }
        HVar2 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (-1 < HVar2) {
    (**(code **)(*DAT_213167b8 + 4))(DAT_213167b8);
    *param_1 = DAT_213167b8;
  }
  return HVar2;
}



int __cdecl FUN_2130a039(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPWSTR bstrString;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_21309f95(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x28))(local_8,0);
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      bstrString = FUN_212f1d12(param_1,(BSTR)0x0);
      iVar1 = (**(code **)(*local_8 + 0x24))(local_8,bstrString,param_2,4);
      SysFreeString(bstrString);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}



int FUN_2130a153(int param_1,int param_2,undefined4 param_3,int *param_4,short *param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_2131457c == 0) {
    DAT_21314580 = FUN_212f9583();
    DAT_2131457c = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  iVar1 = FUN_213028f0(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x7ffbfeee;
  }
  else {
    iVar1 = FUN_212f55ba(param_2,*(int *)(param_1 + 8),param_6,param_4);
  }
  return iVar1;
}



int FUN_2130a1bd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BYTE local_108 [260];
  
  if ((DAT_21316f04 == (HMODULE)0x0) && (DAT_21316f0c == 0)) {
    bVar1 = FUN_2130a256(local_108);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_21316f04 = LoadLibraryA((LPCSTR)local_108);
    }
    if (DAT_21316f04 != (HMODULE)0x0) goto LAB_2130a21a;
    DAT_21316f04 = LoadLibraryA("hhctrl.ocx");
    if (DAT_21316f04 != (HMODULE)0x0) goto LAB_2130a21a;
LAB_2130a235:
    DAT_21316f0c = 1;
    iVar2 = 0;
  }
  else {
LAB_2130a21a:
    if (DAT_213176d0 == (FARPROC)0x0) {
      DAT_213176d0 = GetProcAddress(DAT_21316f04,&DAT_0000000e);
      if (DAT_213176d0 == (FARPROC)0x0) goto LAB_2130a235;
    }
    iVar2 = (*DAT_213176d0)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



bool FUN_2130a256(LPBYTE param_1)

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
    LVar1 = RegQueryValueExA(local_8,&DAT_213176d4,(LPDWORD)0x0,(LPDWORD)0x0,param_1,&local_c);
    bVar2 = LVar1 == 0;
    RegCloseKey(local_8);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



char * __cdecl FUN_2130a2b5(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  puVar3 = FUN_2130ad16();
  iVar1 = *(int *)(puVar3 + 4) + -1;
  if ((iVar1 < -1) || (param_3 + -1 < iVar1)) {
    pcVar4 = FUN_2130a93e(&param_1,param_4,param_3 + -1,0);
  }
  else {
    pcVar4 = FUN_2130aa81(&param_1,param_4,param_3 - *(int *)(puVar3 + 4));
  }
  cVar2 = *pcVar4;
  pcVar5 = pcVar4;
  while ((cVar2 != '\0' && (cVar2 != DAT_21316f48))) {
    pcVar6 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar6;
  }
  pcVar6 = pcVar5 + 1;
  if (*pcVar5 != '\0') {
    cVar2 = *pcVar6;
    while ((cVar2 != '\0' && (cVar2 != 'e'))) {
      pcVar5 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar5;
    }
    cVar2 = pcVar6[-1];
    pcVar5 = pcVar6;
    while (cVar2 == '0') {
      cVar2 = pcVar5[-2];
      pcVar5 = pcVar5 + -1;
    }
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar2;
    }
  }
  return pcVar4;
}



float10 __cdecl FUN_2130a36b(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  
  while( true ) {
    if (DAT_21316f44 < 2) {
      uVar2 = (byte)PTR_DAT_21316f50[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_2130af38((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  iVar4 = -1;
  pbVar5 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  puVar3 = FUN_2130ae97(param_1);
  return (float10)*(double *)(puVar3 + 4);
}



uint __cdecl FUN_2130a3c2(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  
  if (DAT_21314268 == 0) {
    sVar3 = _strspn((char *)param_1,(char *)param_2);
    return (uint)(param_1 + sVar3) & -(uint)(param_1[sVar3] != 0);
  }
  bVar2 = *param_1;
  while (bVar2 != 0) {
    bVar2 = *param_2;
    pbVar4 = param_2;
    while (bVar2 != 0) {
      bVar2 = *pbVar4;
      if ((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) == 0) {
        if (bVar2 == *param_1) break;
      }
      else {
        if (((bVar2 == *param_1) && (pbVar4[1] == param_1[1])) || (pbVar4[1] == 0)) break;
        pbVar4 = pbVar4 + 1;
      }
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar1;
    }
    if ((*pbVar4 == 0) ||
       (((*(byte *)((int)&DAT_21314160 + *param_1 + 1) & 4) != 0 &&
        (pbVar4 = param_1 + 1, param_1 = param_1 + 1, *pbVar4 == 0)))) break;
    pbVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar4;
  }
  return -(uint)(*param_1 != 0) & (uint)param_1;
}



int __cdecl FUN_2130a465(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_21314268 != 0) {
    iVar3 = 0;
    bVar2 = *param_1;
    for (; (bVar2 != 0 &&
           (((*(byte *)((int)&DAT_21314160 + bVar2 + 1) & 4) == 0 ||
            (pbVar1 = param_1 + 1, param_1 = param_1 + 1, *pbVar1 != 0)))); param_1 = param_1 + 1) {
      bVar2 = param_1[1];
      iVar3 = iVar3 + 1;
    }
    return iVar3;
  }
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (bVar2 != 0);
  return ~uVar4 - 1;
}



undefined4 * __cdecl FUN_2130a4b1(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_2130a661_caseD_2;
        case 3:
          goto switchD_2130a661_caseD_3;
        }
        goto switchD_2130a661_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_2130a661_caseD_0;
      case 1:
        goto switchD_2130a661_caseD_1;
      case 2:
        goto switchD_2130a661_caseD_2;
      case 3:
        goto switchD_2130a661_caseD_3;
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
              goto switchD_2130a661_caseD_2;
            case 3:
              goto switchD_2130a661_caseD_3;
            }
            goto switchD_2130a661_caseD_1;
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
              goto switchD_2130a661_caseD_2;
            case 3:
              goto switchD_2130a661_caseD_3;
            }
            goto switchD_2130a661_caseD_1;
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
              goto switchD_2130a661_caseD_2;
            case 3:
              goto switchD_2130a661_caseD_3;
            }
            goto switchD_2130a661_caseD_1;
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
switchD_2130a661_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_2130a661_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_2130a661_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_2130a661_caseD_0:
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
        goto switchD_2130a4e6_caseD_2;
      case 3:
        goto switchD_2130a4e6_caseD_3;
      }
      goto switchD_2130a4e6_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_2130a4e6_caseD_0;
    case 1:
      goto switchD_2130a4e6_caseD_1;
    case 2:
      goto switchD_2130a4e6_caseD_2;
    case 3:
      goto switchD_2130a4e6_caseD_3;
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
            goto switchD_2130a4e6_caseD_2;
          case 3:
            goto switchD_2130a4e6_caseD_3;
          }
          goto switchD_2130a4e6_caseD_1;
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
            goto switchD_2130a4e6_caseD_2;
          case 3:
            goto switchD_2130a4e6_caseD_3;
          }
          goto switchD_2130a4e6_caseD_1;
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
            goto switchD_2130a4e6_caseD_2;
          case 3:
            goto switchD_2130a4e6_caseD_3;
          }
          goto switchD_2130a4e6_caseD_1;
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
switchD_2130a4e6_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_2130a4e6_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_2130a4e6_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_2130a4e6_caseD_0:
  return param_1;
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_213176d8 == 1) || ((DAT_213176d8 == 0 && (DAT_213176dc == 1)))) {
    FUN_2130bcb6();
  }
  FUN_2130bcf3(param_1);
  (*(code *)PTR___exit_21316f40)(0xff);
  return;
}



void __cdecl FUN_2130a808(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_2130bec9((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_21316f44 < 2) {
        uVar3 = (byte)PTR_DAT_21316f50[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_2130af38((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_21316f48;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



undefined1 * __cdecl FUN_2130a93e(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = DAT_213176e0;
  if (DAT_213176e4 == '\0') {
    piVar2 = (int *)FUN_2130ad16();
    FUN_2130c4a6(param_2 + (uint)(*piVar2 == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)piVar2);
  }
  else {
    FUN_2130aced(param_2 + (*DAT_213176e0 == 0x2d),(uint)(0 < param_3));
  }
  puVar1 = param_2;
  if (*piVar2 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  if (0 < param_3) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_21316f48;
  }
  puVar4 = (undefined4 *)(puVar1 + param_3 + (uint)(DAT_213176e4 == '\0'));
  *puVar4 = 0x30302b65;
  *(undefined2 *)(puVar4 + 1) = 0x30;
  if (param_4 != 0) {
    *(undefined1 *)puVar4 = 0x45;
  }
  if (*(char *)piVar2[3] != '0') {
    iVar3 = piVar2[1] + -1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(undefined1 *)((int)puVar4 + 1) = 0x2d;
    }
    if (99 < iVar3) {
      *(char *)((int)puVar4 + 2) =
           *(char *)((int)puVar4 + 2) +
           (((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
           (char)((longlong)iVar3 * 0x51eb851f >> 0x3f));
      iVar3 = iVar3 % 100;
    }
    if (9 < iVar3) {
      *(char *)((int)puVar4 + 3) =
           *(char *)((int)puVar4 + 3) +
           (((char)(iVar3 / 10) + (char)(iVar3 >> 0x1f)) -
           (char)((longlong)iVar3 * 0x66666667 >> 0x3f));
      iVar3 = iVar3 % 10;
    }
    *(char *)(puVar4 + 1) = *(char *)(puVar4 + 1) + (char)iVar3;
  }
  return param_2;
}



char * __cdecl FUN_2130aa81(undefined4 param_1,char *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  
  piVar2 = DAT_213176e0;
  if (DAT_213176e4 == '\0') {
    piVar2 = (int *)FUN_2130ad16();
    FUN_2130c4a6(param_2 + (*piVar2 == 0x2d),piVar2[1] + param_3,(int)piVar2);
  }
  else if (DAT_213176e8 == param_3) {
    iVar1 = DAT_213176e8 + (*DAT_213176e0 == 0x2d);
    param_2[iVar1] = '0';
    (param_2 + iVar1)[1] = '\0';
  }
  pcVar4 = param_2;
  if (*piVar2 == 0x2d) {
    *param_2 = '-';
    pcVar4 = param_2 + 1;
  }
  if (piVar2[1] < 1) {
    FUN_2130aced(pcVar4,1);
    *pcVar4 = '0';
    pcVar4 = pcVar4 + 1;
  }
  else {
    pcVar4 = pcVar4 + piVar2[1];
  }
  if (0 < (int)param_3) {
    FUN_2130aced(pcVar4,1);
    *pcVar4 = DAT_21316f48;
    iVar1 = piVar2[1];
    if (iVar1 < 0) {
      if ((DAT_213176e4 != '\0') || (-iVar1 <= (int)param_3)) {
        param_3 = -iVar1;
      }
      FUN_2130aced(pcVar4 + 1,param_3);
      uVar3 = param_3 >> 2;
      pcVar4 = pcVar4 + 1;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        builtin_strncpy(pcVar4,"0000",4);
        pcVar4 = pcVar4 + 4;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar4 = '0';
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  return param_2;
}



void __cdecl FUN_2130ab89(undefined4 param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  DAT_213176e0 = (int *)FUN_2130ad16();
  DAT_213176e8 = DAT_213176e0[1] + -1;
  pcVar2 = param_2 + (*DAT_213176e0 == 0x2d);
  FUN_2130c4a6(pcVar2,param_3,(int)DAT_213176e0);
  DAT_213176ec = DAT_213176e8 < DAT_213176e0[1] + -1;
  DAT_213176e8 = DAT_213176e0[1] + -1;
  if ((-5 < DAT_213176e8) && (DAT_213176e8 < (int)param_3)) {
    if ((bool)DAT_213176ec) {
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      pcVar2[-1] = '\0';
    }
    FUN_2130ac62(param_1,param_2,param_3);
    return;
  }
  FUN_2130ac37(param_1,param_2,param_3,param_4);
  return;
}



void __cdecl FUN_2130ac37(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  DAT_213176e4 = 1;
  FUN_2130a93e(param_1,param_2,param_3,param_4);
  DAT_213176e4 = 0;
  return;
}



void __cdecl FUN_2130ac62(undefined4 param_1,char *param_2,uint param_3)

{
  DAT_213176e4 = 1;
  FUN_2130aa81(param_1,param_2,param_3);
  DAT_213176e4 = 0;
  return;
}



void __cdecl FUN_2130aced(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_2130a4b1((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_2130ad16(void)

{
  undefined4 in_stack_ffffffe4;
  undefined2 uVar1;
  uint local_c;
  uint local_8;
  undefined2 local_4;
  
  uVar1 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  FUN_2130ad89(&local_c,(uint *)&stack0x00000004);
  _DAT_21317718 = FUN_2130c537(local_c,local_8,CONCAT22(uVar1,local_4),0x11,0,&DAT_213176f0);
  _DAT_21317710 = (int)DAT_213176f2;
  _DAT_21317714 = (int)DAT_213176f0;
  _DAT_2131771c = &DAT_213176f4;
  return &DAT_21317710;
}



void __cdecl FUN_2130ad89(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  
  uVar4 = 0x80000000;
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar2 = *param_2;
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  if (uVar3 == 0) {
    uVar4 = 0;
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar6 = 0x3c01;
  }
  else if (uVar3 == 0x7ff) {
    iVar6 = 0x7fff;
  }
  else {
    iVar6 = uVar3 + 0x3c00;
  }
  uVar5 = (ushort)iVar6;
  uVar3 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | uVar4;
  param_1[1] = uVar3;
  *param_1 = uVar2 << 0xb;
  for (; uVar4 == 0; uVar4 = uVar4 & 0x80000000) {
    uVar4 = uVar3 * 2;
    uVar3 = *param_1 >> 0x1f | uVar4;
    iVar6 = iVar6 + 0xffff;
    uVar5 = (ushort)iVar6;
    param_1[1] = uVar3;
    *param_1 = *param_1 * 2;
  }
  *(ushort *)(param_1 + 2) = uVar5 | uVar1 & 0x8000;
  return;
}



// WARNING: Removing unreachable block (ram,0x2130ae88)

undefined4 FUN_2130ae47(void)

{
  return 0;
}



uint * __cdecl FUN_2130ae97(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_14;
  undefined4 uStack_10;
  ushort local_c [6];
  
  pbVar1 = param_1;
  uVar4 = 0;
  uVar2 = FUN_2130c8c4(local_c,(int *)&param_1,param_1,0,0,0,0);
  if ((uVar2 & 4) == 0) {
    iVar3 = FUN_2130c406(local_c,&local_14);
    if (((uVar2 & 2) != 0) || (iVar3 == 1)) {
      uVar4 = 0x80;
    }
    if (((uVar2 & 1) != 0) || (iVar3 == 2)) {
      uVar4 = uVar4 | 0x100;
    }
  }
  else {
    uVar4 = 0x200;
    local_14 = 0;
    uStack_10 = 0;
  }
  *DAT_21316f4c = uVar4;
  DAT_21316f4c[1] = (int)param_1 - (int)pbVar1;
  *(ulonglong *)(DAT_21316f4c + 4) = CONCAT44(uStack_10,local_14);
  return DAT_21316f4c;
}



uint __cdecl FUN_2130af38(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_21316f50 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_21316f50[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_212f8c4e(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



undefined4 __cdecl FUN_2130afcd(undefined4 param_1)

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

void FUN_2130b02f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_21314160;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_21314268 = 0;
  _DAT_21316954 = 0;
  DAT_21316940 = 0;
  _DAT_21316948 = 0;
  _DAT_2131694c = 0;
  _DAT_21316950 = 0;
  return;
}



// Library Function - Single Match
//  _strspn
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

size_t __cdecl _strspn(char *_Str,char *_Control)

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
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0);
  return sVar2;
}



uint * __cdecl FUN_2130b09f(uint *param_1,uint *param_2,uint param_3)

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
        goto joined_r0x2130b0ea;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = param_3 >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_2130b116;
        goto LAB_2130b16a;
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
joined_r0x2130b166:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_2130b16a:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          param_3 = param_3 & 3;
          if (param_3 != 0) goto LAB_2130b116;
          return param_1;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x2130b166;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x2130b166;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x2130b166;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x2130b0ea:
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
LAB_2130b116:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return param_1;
    }
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 __cdecl FUN_2130b199(int param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  if (DAT_21317338 == 0) {
    fVar1 = FUN_2130b938(1,param_1);
    return fVar1;
  }
  _DAT_21317738 = 0x21;
  FUN_212fbe52();
  return (float10)(double)CONCAT44(param_3,param_2);
}



float10 __cdecl
FUN_2130b1e8(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_58 [14];
  uint local_20;
  
  bVar1 = FUN_2130b608(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_20 = local_20 & 0xfffffffe;
    FUN_2130b2a4(local_58,&param_7,(byte)param_1,param_2,&param_3,&param_5);
  }
  iVar2 = FUN_2130ba30(param_1);
  if ((DAT_21317338 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_2130b938(iVar2,param_2);
    return fVar3;
  }
  FUN_2130b9e5(iVar2);
  FUN_212fbe52();
  return (float10)(double)CONCAT44(param_6,param_5);
}



void __cdecl
FUN_2130b2a4(uint *param_1,uint *param_2,byte param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *dwExceptionCode;
  
  puVar1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  dwExceptionCode = param_1;
  if ((param_3 & 0x10) != 0) {
    param_1[1] = param_1[1] | 1;
    dwExceptionCode = (uint *)0xc000008f;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = (uint *)0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = (uint *)0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = (uint *)0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = (uint *)0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = (~*param_2 & 1) << 4 | param_1[2] & 0xffffffef;
  param_1[2] = (~*param_2 & 4) << 1 | param_1[2] & 0xfffffff7;
  param_1[2] = ~*param_2 >> 1 & 4 | param_1[2] & 0xfffffffb;
  param_1[2] = ~*param_2 >> 3 & 2 | param_1[2] & 0xfffffffd;
  param_1[2] = ~*param_2 >> 5 & 1 | param_1[2] & 0xfffffffe;
  uVar3 = FUN_2130bc2a();
  puVar2 = param_6;
  if ((uVar3 & 1) != 0) {
    param_1[3] = param_1[3] | 0x10;
  }
  if ((uVar3 & 4) != 0) {
    param_1[3] = param_1[3] | 8;
  }
  if ((uVar3 & 8) != 0) {
    param_1[3] = param_1[3] | 4;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[3] = param_1[3] | 2;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[3] = param_1[3] | 1;
  }
  uVar3 = *puVar1 & 0xc00;
  if (uVar3 < 0x401) {
    if (uVar3 == 0x400) {
      *param_1 = *param_1 & 0xfffffffd | 1;
    }
    else if (uVar3 == 0) {
      *param_1 = *param_1 & 0xfffffffc;
    }
  }
  else if (uVar3 == 0x800) {
    *param_1 = *param_1 & 0xfffffffe | 2;
  }
  else if (uVar3 == 0xc00) {
    *param_1 = *param_1 | 3;
  }
  uVar3 = *puVar1 & 0x300;
  if (uVar3 == 0) {
    *param_1 = *param_1 & 0xffffffeb | 8;
  }
  else if (uVar3 == 0x200) {
    *param_1 = *param_1 & 0xffffffe7 | 4;
  }
  else if (uVar3 == 0x300) {
    *param_1 = *param_1 & 0xffffffe3;
  }
  *param_1 = *param_1 & 0xfffe001f | (param_4 & 0xfff) << 5;
  param_1[8] = param_1[8] | 1;
  param_1[8] = param_1[8] & 0xffffffe3 | 2;
  param_1[4] = *param_5;
  param_1[5] = param_5[1];
  param_1[0x14] = param_1[0x14] | 1;
  param_1[0x14] = param_1[0x14] & 0xffffffe3 | 2;
  param_1[0x10] = *param_6;
  param_1[0x11] = param_6[1];
  FUN_2130bc3a();
  RaiseException((DWORD)dwExceptionCode,0,1,(ULONG_PTR *)&param_1);
  if ((param_1[2] & 0x10) != 0) {
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  if ((param_1[2] & 8) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  if ((param_1[2] & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  if ((param_1[2] & 2) != 0) {
    *puVar1 = *puVar1 & 0xffffffef;
  }
  if ((param_1[2] & 1) != 0) {
    *puVar1 = *puVar1 & 0xffffffdf;
  }
  switch(*param_1 & 3) {
  case 0:
    uVar3 = *puVar1 & 0xfffff3ff;
    break;
  case 1:
    *puVar1 = *puVar1 & 0xfffff7ff | 0x400;
    goto switchD_2130b4fb_default;
  case 2:
    uVar3 = *puVar1 & 0xfffffbff | 0x800;
    break;
  case 3:
    uVar3 = *puVar1 | 0xc00;
    break;
  default:
    goto switchD_2130b4fb_default;
  }
  *puVar1 = uVar3;
switchD_2130b4fb_default:
  uVar3 = *param_1 >> 2 & 7;
  if (uVar3 == 0) {
    *puVar1 = *puVar1 & 0xfffff3ff | 0x300;
  }
  else {
    if (uVar3 == 1) {
      *puVar1 = *puVar1 & 0xfffff3ff | 0x200;
      *puVar2 = param_1[0x10];
      puVar2[1] = param_1[0x11];
      return;
    }
    if (uVar3 == 2) {
      *puVar1 = *puVar1 & 0xfffff3ff;
      *puVar2 = param_1[0x10];
      puVar2[1] = param_1[0x11];
      return;
    }
  }
  *puVar2 = param_1[0x10];
  puVar2[1] = param_1[0x11];
  return;
}



bool __cdecl FUN_2130b608(uint param_1,double *param_2,uint param_3)

{
  ulonglong uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  int local_14;
  undefined8 local_10;
  
  uVar5 = param_1 & 0x1f;
  bVar2 = true;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          bVar6 = (param_1 & 0x10) != 0;
          local_10 = *param_2;
          if (local_10 != 0.0) {
            fVar7 = FUN_2130bb27(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_14);
            local_14 = local_14 + -0x600;
            if (local_14 < -0x432) {
              bVar2 = true;
              *(undefined4 *)param_2 = 0;
              local_10 = 0.0;
              *(undefined4 *)((int)param_2 + 4) = 0;
            }
            else {
              local_10 = (double)(ulonglong)
                                 (SUB87((double)fVar7,0) & 0xfffffffffffff | 0x10000000000000);
              bVar2 = bVar6;
              if (local_14 < -0x3fd) {
                local_14 = -0x3fd - local_14;
                do {
                  if ((((ulonglong)local_10 & 1) != 0) && (!bVar2)) {
                    bVar2 = true;
                  }
                  uVar5 = (uint)local_10 >> 1;
                  uVar1 = (ulonglong)local_10 & 0x100000000;
                  local_10._0_4_ = uVar5;
                  if (uVar1 != 0) {
                    local_10._0_4_ = uVar5 | 0x80000000;
                  }
                  local_14 = local_14 + -1;
                  local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
                } while (local_14 != 0);
              }
              if ((double)fVar7 < 0.0) {
                local_10 = -local_10;
              }
              *(uint *)param_2 = (uint)local_10;
              *(uint *)((int)param_2 + 4) = local_10._4_4_;
            }
          }
          if (bVar2) {
            FUN_2130bc4b();
          }
          uVar5 = param_1 & 0x1d;
        }
      }
      else {
        FUN_2130bc4b();
        uVar4 = DAT_21317254;
        uVar3 = DAT_21317244;
        uVar5 = param_3 & 0xc00;
        if (uVar5 < 0x401) {
          if (uVar5 == 0x400) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_21317244,DAT_21317240);
              *param_2 = local_10;
              uVar5 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_21317250;
              *(undefined4 *)((int)param_2 + 4) = uVar4;
              uVar5 = param_1 & 0x1e;
            }
            goto LAB_2130b63d;
          }
          if (uVar5 == 0) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_21317244,DAT_21317240);
              *param_2 = local_10;
              uVar5 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_21317240;
              *(undefined4 *)((int)param_2 + 4) = uVar3;
              uVar5 = param_1 & 0x1e;
            }
            goto LAB_2130b63d;
          }
        }
        else if (uVar5 == 0x800) {
          if (0.0 < *param_2) {
            *(undefined4 *)param_2 = DAT_21317240;
            *(undefined4 *)((int)param_2 + 4) = uVar3;
            uVar5 = param_1 & 0x1e;
            goto LAB_2130b63d;
          }
          local_10 = -(double)CONCAT44(DAT_21317254,DAT_21317250);
          *param_2 = local_10;
        }
        else if (uVar5 == 0xc00) {
          if (*param_2 <= 0.0) {
            local_10 = -(double)CONCAT44(DAT_21317254,DAT_21317250);
            *param_2 = local_10;
            uVar5 = param_1 & 0x1e;
          }
          else {
            *(undefined4 *)param_2 = DAT_21317250;
            *(undefined4 *)((int)param_2 + 4) = uVar4;
            uVar5 = param_1 & 0x1e;
          }
          goto LAB_2130b63d;
        }
        uVar5 = param_1 & 0x1e;
      }
    }
    else {
      FUN_2130bc4b();
      uVar5 = param_1 & 0x1b;
    }
  }
  else {
    FUN_2130bc4b();
    uVar5 = param_1 & 0x17;
  }
LAB_2130b63d:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_2130bc4b();
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}



float10 __cdecl FUN_2130b938(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_2130ba0b(param_2);
  if (iVar1 != 0) {
    FUN_212fbe52();
    iVar1 = FUN_2130d063();
    if (iVar1 == 0) {
      FUN_2130b9e5(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_212fbe52();
  FUN_2130b9e5(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_2130b9e5(int param_1)

{
  if (param_1 == 1) {
    _DAT_21317738 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    _DAT_21317738 = 0x22;
    return;
  }
  return;
}



undefined4 __cdecl FUN_2130ba0b(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_21317168;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x2131716c);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x21317240);
  return 0;
}



int __cdecl FUN_2130ba30(uint param_1)

{
  if ((param_1 & 0x20) != 0) {
    return 5;
  }
  if ((param_1 & 8) != 0) {
    return 1;
  }
  if ((param_1 & 4) != 0) {
    return 2;
  }
  if ((param_1 & 1) != 0) {
    return 3;
  }
  return (param_1 & 2) << 1;
}



float10 __cdecl FUN_2130ba67(undefined4 param_1,uint param_2,undefined4 param_3,uint param_4)

{
  return (float10)(double)CONCAT44((param_4 ^ param_2) & 0x7fffffff ^ param_4,param_1);
}



float10 __cdecl FUN_2130ba92(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_4,param_1));
}



undefined4 __cdecl FUN_2130bacb(int param_1,uint param_2)

{
  if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    return 1;
  }
  if ((param_2 == 0xfff00000) && (param_1 == 0)) {
    return 2;
  }
  if ((param_2._2_2_ & 0x7ff8) == 0x7ff8) {
    return 3;
  }
  if (((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) {
    return 4;
  }
  return 0;
}



float10 __cdecl FUN_2130bb27(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  if ((double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)))
      == 0.0) {
    *param_3 = 0;
    return (float10)0.0;
  }
  if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    dVar2 = (double)CONCAT17(param_2._3_1_,
                             CONCAT16(param_2._2_1_,CONCAT24((undefined2)param_2,param_1)));
    iVar5 = -0x3fd;
    uVar4 = param_2;
    for (uVar3 = param_2 & 0x100000; uVar3 == 0; uVar3 = uVar3 & 0x100000) {
      uVar3 = uVar4 << 1;
      param_2._0_2_ = (undefined2)uVar3;
      param_2._2_1_ = (undefined1)(uVar3 >> 0x10);
      param_2._3_1_ = (byte)(uVar3 >> 0x18);
      uVar4 = uVar3;
      if ((param_1 & 0x80000000) != 0) {
        uVar4 = uVar3 | 1;
        param_2._0_2_ = (undefined2)uVar4;
      }
      param_1 = param_1 << 1;
      iVar5 = iVar5 + -1;
    }
    uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
    param_2._2_1_ = (undefined1)uVar1;
    param_2._3_1_ = (byte)(uVar1 >> 8);
    if (dVar2 < 0.0) {
      param_2._3_1_ = param_2._3_1_ | 0x80;
    }
    fVar6 = FUN_2130ba92(param_1,CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(undefined2)param_2))
                         ,0);
    *param_3 = iVar5;
    return (float10)(double)fVar6;
  }
  fVar6 = FUN_2130ba92(param_1,param_2,0);
  *param_3 = (short)((ushort)(param_2 >> 0x14) & 0x7ff) + -0x3fe;
  return (float10)(double)fVar6;
}



int FUN_2130bc2a(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



int FUN_2130bc3a(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_2130bc4b(void)

{
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_212f84cb(_Code,1,0);
  return;
}



void FUN_2130bcb6(void)

{
  if ((DAT_213176d8 == 1) || ((DAT_213176d8 == 0 && (DAT_213176dc == 1)))) {
    FUN_2130bcf3(0xfc);
    if (DAT_2131773c != (code *)0x0) {
      (*DAT_2131773c)();
    }
    FUN_2130bcf3(0xff);
  }
  return;
}



void __cdecl FUN_2130bcf3(int param_1)

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
  
  piVar2 = &DAT_21317278;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_21317308);
  if (param_1 == (&DAT_21317278)[iVar8 * 2]) {
    if ((DAT_213176d8 == 1) || ((DAT_213176d8 == 0 && (DAT_213176dc == 1)))) {
      if ((DAT_21316680 == 0) ||
         (hFile = *(HANDLE *)(DAT_21316680 + 0x10), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar9 = *(char **)(iVar8 * 8 + 0x2131727c);
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
        FUN_2130b09f(puVar7,(uint *)&DAT_213023a8,3);
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
      pcVar9 = *(char **)(iVar8 * 8 + 0x2131727c);
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
      FUN_2130d18e(acStack_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



uint __cdecl FUN_2130bec9(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_21317748 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_21316f44 < 2) {
        uVar2 = (byte)PTR_DAT_21316f50[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_2130af38(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_21316f50[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_212f8d83(DAT_21317748,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
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



undefined4 __cdecl FUN_2130bfc7(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if ((*(uint *)(param_1 + iVar3 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    piVar2 = (int *)(param_1 + iVar3 * 4);
    do {
      if (*piVar2 != 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < 3);
    return 1;
  }
  return 1;
}



void __cdecl FUN_2130c02d(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  iVar2 = FUN_2130d21d(*(uint *)(param_1 + iVar3 * 4),
                       1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                            0x1f),(uint *)(param_1 + iVar3 * 4));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    puVar4 = (uint *)(param_1 + iVar3 * 4);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_2130d21d(*puVar4,1,puVar4);
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}



undefined4 __cdecl FUN_2130c096(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_4;
  
  local_4 = 0;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if (((*(uint *)(param_1 + iVar3 * 4) & 1 << (bVar2 & 0x1f)) != 0) &&
     (iVar1 = FUN_2130bfc7(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_2130c02d(param_1,param_2 + -1);
  }
  *(uint *)(param_1 + iVar3 * 4) = *(uint *)(param_1 + iVar3 * 4) & -1 << (bVar2 & 0x1f);
  iVar3 = iVar3 + 1;
  if (iVar3 < 3) {
    puVar4 = (undefined4 *)(param_1 + iVar3 * 4);
    for (iVar1 = 3 - iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return local_4;
}



void __cdecl FUN_2130c133(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)((int)param_2 + iVar1) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __cdecl FUN_2130c150(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 __cdecl FUN_2130c15f(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



void __cdecl FUN_2130c17c(uint *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  uVar5 = 0;
  bVar2 = (((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2;
  param_2 = 3;
  puVar6 = param_1;
  do {
    uVar4 = *puVar6 >> (bVar2 & 0x1f) | uVar5;
    uVar5 = (~(-1 << (bVar2 & 0x1f)) & *puVar6) << (0x20 - bVar2 & 0x1f);
    *puVar6 = uVar4;
    param_2 = param_2 + -1;
    puVar6 = puVar6 + 1;
  } while (param_2 != 0);
  iVar7 = 2;
  iVar3 = 8;
  do {
    if (iVar7 < iVar1) {
      *(undefined4 *)((int)param_1 + iVar3) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + iVar3) = *(undefined4 *)((int)param_1 + iVar3 + iVar1 * -4);
    }
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return;
}



undefined4 __cdecl FUN_2130c22d(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c [3];
  
  uVar1 = param_1[5];
  local_14 = *(uint *)(param_1 + 1);
  local_18 = *(uint *)(param_1 + 3);
  uVar4 = uVar1 & 0x7fff;
  iVar5 = uVar4 - 0x3fff;
  local_10 = (uint)*param_1 << 0x10;
  if (iVar5 == -0x3fff) {
    iVar5 = 0;
    iVar2 = FUN_2130c15f((int *)&local_18);
    if (iVar2 == 0) {
      FUN_2130c150(&local_18);
      uVar3 = 2;
      goto LAB_2130c2a2;
    }
  }
  else {
    FUN_2130c133((int)local_c,&local_18);
    iVar2 = FUN_2130c096((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_2130c150(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_2130c2a2;
    }
    if (iVar5 <= iVar2) {
      FUN_2130c133((int)&local_18,local_c);
      FUN_2130c17c(&local_18,iVar2 - iVar5);
      FUN_2130c096((int)&local_18,param_3[2]);
      FUN_2130c17c(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_2130c2a2;
    }
    if (*param_3 <= iVar5) {
      FUN_2130c150(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_2130c17c(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_2130c2a2;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_2130c17c(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_2130c2a2:
  local_18 = iVar5 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_18;
  if (param_3[4] == 0x40) {
    param_2[1] = local_18;
    *param_2 = local_14;
    return uVar3;
  }
  if (param_3[4] == 0x20) {
    *param_2 = local_18;
  }
  return uVar3;
}



void __cdecl FUN_2130c406(ushort *param_1,uint *param_2)

{
  FUN_2130c22d(param_1,param_2,(int *)&DAT_21317308);
  return;
}



void __cdecl FUN_2130c41e(ushort *param_1,uint *param_2)

{
  FUN_2130c22d(param_1,param_2,(int *)&DAT_21317320);
  return;
}



void __cdecl FUN_2130c436(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_2130c8c4(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_2130c406(local_c,param_1);
  return;
}



void __cdecl FUN_2130c46e(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_2130c8c4(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_2130c41e(local_c,param_1);
  return;
}



void __cdecl FUN_2130c4a6(char *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar5 = *(char **)(param_3 + 0xc);
  pcVar7 = param_1 + 1;
  *param_1 = '0';
  pcVar1 = pcVar7;
  iVar6 = param_2;
  if (0 < param_2) {
    do {
      cVar2 = *pcVar5;
      if (cVar2 == '\0') {
        cVar2 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar1 = cVar2;
      pcVar1 = pcVar1 + 1;
      iVar6 = iVar6 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *pcVar1 = '\0';
  if ((-1 < iVar6) && ('4' < *pcVar5)) {
    cVar2 = pcVar1[-1];
    while (pcVar5 = pcVar1 + -1, cVar2 == '9') {
      *pcVar5 = '0';
      cVar2 = pcVar1[-2];
      pcVar1 = pcVar5;
    }
    *pcVar5 = *pcVar5 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    return;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



undefined4 __cdecl
FUN_2130c537(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined2 local_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined1 local_6;
  char cStack_5;
  
  psVar1 = param_6;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xcc;
  local_15 = 0xcc;
  local_14 = 0xcc;
  local_13 = 0xcc;
  uVar5 = param_3 & 0x7fff;
  local_12 = 0xfb;
  local_11 = 0x3f;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
LAB_2130c5b0:
    *(undefined1 *)(psVar1 + 1) = 0x20;
    *(undefined1 *)((int)psVar1 + 3) = 1;
    *(undefined1 *)(psVar1 + 2) = 0x30;
    *(undefined1 *)((int)psVar1 + 5) = 0;
    return 1;
  }
  if ((short)uVar5 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 != 0x80000000) || (param_1 != 0)) && ((param_2 & 0x40000000) == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e53;
      param_6[4] = 0x4e41;
      *(undefined1 *)((int)param_6 + 3) = 6;
      *(undefined1 *)(param_6 + 5) = 0;
      return 0;
    }
    if ((((param_3 & 0x8000) != 0) && (param_2 == 0xc0000000)) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = 0x44;
      return 0;
    }
    if ((param_2 == 0x80000000) && (param_1 == 0)) {
      param_6[2] = 0x2331;
      param_6[3] = 0x4e49;
      *(undefined1 *)((int)param_6 + 3) = 5;
      param_6[4] = 0x46;
      return 0;
    }
    param_6[2] = 0x2331;
    param_6[3] = 0x4e51;
    param_6[4] = 0x4e41;
    *(undefined1 *)((int)param_6 + 3) = 6;
    *(undefined1 *)(param_6 + 5) = 0;
    return 0;
  }
  local_6 = (undefined1)uVar5;
  cStack_5 = (char)(uVar5 >> 8);
  local_10 = 0;
  sVar10 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                  0x10);
  uStack_a = param_2;
  uStack_e = param_1;
  FUN_2130d6ac((int *)&local_10,-(int)sVar10,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar10 = sVar10 + 1;
    FUN_2130d3f4((int *)&local_10,(int *)&local_1c);
  }
  *psVar1 = sVar10;
  iVar9 = param_4;
  if (((param_5 & 1) != 0) && (iVar9 = param_4 + sVar10, param_4 + sVar10 < 1)) {
    *psVar1 = 0;
    goto LAB_2130c5b0;
  }
  if (0x15 < iVar9) {
    iVar9 = 0x15;
  }
  uVar2 = CONCAT11(cStack_5,local_6);
  local_6 = 0;
  cStack_5 = '\0';
  iVar6 = 8;
  iVar11 = uVar2 - 0x3ffe;
  do {
    FUN_2130d2a8((uint *)&local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar11 < 0) {
    for (uVar5 = -iVar11 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_2130d2d6((uint *)&local_10);
    }
  }
  psVar1 = psVar1 + 2;
  iVar9 = iVar9 + 1;
  psVar7 = psVar1;
  uVar5 = uStack_e;
  uVar3 = uStack_a;
  if (0 < iVar9) {
    do {
      uStack_a._2_2_ = (undefined2)(uVar3 >> 0x10);
      uStack_a._0_2_ = (undefined2)uVar3;
      uStack_e._2_2_ = (undefined2)(uVar5 >> 0x10);
      uStack_e._0_2_ = (undefined2)uVar5;
      param_1 = CONCAT22((undefined2)uStack_e,local_10);
      param_2 = CONCAT22((undefined2)uStack_a,uStack_e._2_2_);
      param_3 = CONCAT13(cStack_5,CONCAT12(local_6,uStack_a._2_2_));
      uStack_e = uVar5;
      uStack_a = uVar3;
      FUN_2130d2a8((uint *)&local_10);
      FUN_2130d2a8((uint *)&local_10);
      FUN_2130d240((uint *)&local_10,&param_1);
      FUN_2130d2a8((uint *)&local_10);
      cVar4 = cStack_5 + '0';
      cStack_5 = '\0';
      *(char *)psVar7 = cVar4;
      psVar7 = (short *)((int)psVar7 + 1);
      iVar9 = iVar9 + -1;
      uVar5 = uStack_e;
      uVar3 = uStack_a;
    } while (iVar9 != 0);
  }
  psVar8 = psVar7 + -1;
  if (*(char *)((int)psVar7 + -1) < '5') {
    if (psVar1 <= psVar8) {
      do {
        if ((char)*psVar8 != '0') break;
        psVar8 = (short *)((int)psVar8 + -1);
      } while (psVar1 <= psVar8);
      if (psVar1 <= psVar8) goto LAB_2130c854;
    }
    *(char *)psVar1 = '0';
    *param_6 = 0;
    *(undefined1 *)(param_6 + 1) = 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)((int)param_6 + 5) = 0;
    return 1;
  }
  if (psVar1 <= psVar8) {
    do {
      if ((char)*psVar8 != '9') break;
      *(char *)psVar8 = '0';
      psVar8 = (short *)((int)psVar8 + -1);
    } while (psVar1 <= psVar8);
    if (psVar1 <= psVar8) {
      *(char *)psVar8 = (char)*psVar8 + '\x01';
      goto LAB_2130c854;
    }
  }
  psVar8 = (short *)((int)psVar8 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar8 = *(char *)psVar8 + '\x01';
LAB_2130c854:
  cVar4 = ((char)psVar8 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar4;
  *(undefined1 *)((int)param_6 + cVar4 + 4) = 0;
  return 1;
}



undefined4 __cdecl
FUN_2130c8c4(ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int local_60;
  char *local_5c;
  uint local_54;
  byte *local_50;
  int local_4c;
  int local_48;
  undefined4 local_30;
  ushort local_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  byte *local_26;
  ushort local_22;
  char local_1c [23];
  char local_5;
  
  local_5c = local_1c;
  iVar8 = 0;
  uVar13 = 0;
  uVar5 = 0;
  local_4c = 1;
  local_54 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar6 = false;
  bVar7 = false;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_50 = param_3;
  for (pbVar11 = param_3;
      (((bVar10 = *pbVar11, bVar10 == 0x20 || (bVar10 == 9)) || (bVar10 == 10)) ||
      (pbVar14 = param_3, bVar10 == 0xd)); pbVar11 = pbVar11 + 1) {
  }
  do {
    bVar10 = *pbVar11;
    pbVar12 = pbVar11 + 1;
    param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
    switch(iVar8) {
    case 0:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_2130c95d;
      }
      if (bVar10 == DAT_21316f48) {
        iVar8 = 5;
      }
      else if (bVar10 == 0x2b) {
        uVar5 = 0;
        iVar8 = 2;
      }
      else if (bVar10 == 0x2d) {
        uVar5 = 0x8000;
        iVar8 = 2;
      }
      else {
        iVar8 = 1;
        if (bVar10 != 0x30) goto switchD_2130cc80_caseD_2c;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_2130c95d;
      }
      if (bVar10 == DAT_21316f48) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_2130cc80_caseD_2b;
        default:
          goto switchD_2130cc80_caseD_2c;
        case 0x30:
switchD_2130caf4_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_2130cc80_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_2130c95d;
      }
      if (bVar10 == DAT_21316f48) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_2130caf4_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_21316f44 < 2) {
          uVar9 = (byte)PTR_DAT_21316f50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_2130af38((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          bVar10 = *pbVar12;
          local_5c = local_5c + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
        else {
          bVar10 = *pbVar12;
          local_60 = local_60 + 1;
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
          pbVar12 = pbVar12 + 1;
        }
      }
      local_54 = uVar13;
      if (bVar10 != DAT_21316f48) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_2130cc80_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_2130cc80_caseD_44;
        }
switchD_2130cc80_caseD_2c:
        iVar8 = 10;
        goto LAB_2130c95d;
      }
      iVar8 = 4;
      break;
    case 4:
      bVar4 = true;
      if (uVar13 == 0) {
        while (bVar10 == 0x30) {
          bVar10 = *pbVar12;
          local_60 = local_60 + -1;
          pbVar12 = pbVar12 + 1;
          param_3._1_3_ = (undefined3)((uint)param_3 >> 8);
          param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
        }
      }
      while( true ) {
        bVar2 = true;
        if (DAT_21316f44 < 2) {
          uVar9 = (byte)PTR_DAT_21316f50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_2130af38((uint)param_3 & 0xff,4);
        }
        if (uVar9 == 0) break;
        if (uVar13 < 0x19) {
          uVar13 = uVar13 + 1;
          *local_5c = bVar10 - 0x30;
          local_5c = local_5c + 1;
          local_60 = local_60 + -1;
        }
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_54 = uVar13;
      switch(bVar10) {
      case 0x2b:
      case 0x2d:
switchD_2130cc80_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_2130cc80_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_2130cc80_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_21316f44 < 2) {
        uVar9 = (byte)PTR_DAT_21316f50[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_2130af38((uint)bVar10,4);
      }
      if (uVar9 == 0) {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      else {
        iVar8 = 4;
        pbVar12 = pbVar11;
      }
      break;
    case 6:
      pbVar11 = pbVar11 + -1;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_2130c95d;
      }
      if (bVar10 == 0x2b) {
LAB_2130ce8d:
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_2130cd2d;
LAB_2130ce7b:
        local_4c = -1;
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_2130c95d;
      }
LAB_2130cd2d:
      if (bVar10 == 0x30) {
        iVar8 = 8;
      }
      else {
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 8:
      bVar3 = true;
      while (bVar10 == 0x30) {
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      }
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_2130cc80_caseD_2c;
      iVar8 = 9;
LAB_2130c95d:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_21316f44 < 2) {
          uVar13 = (byte)PTR_DAT_21316f50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_2130af38((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_2130cdf8;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_48 = 0x1451;
LAB_2130cdf8:
      while( true ) {
        if (DAT_21316f44 < 2) {
          uVar13 = (byte)PTR_DAT_21316f50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_2130af38((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      iVar8 = 10;
      pbVar12 = pbVar12 + -1;
      uVar13 = local_54;
      pbVar14 = local_50;
      break;
    case 0xb:
      if (param_7 == 0) goto switchD_2130cc80_caseD_2c;
      if (bVar10 == 0x2b) goto LAB_2130ce8d;
      if (bVar10 == 0x2d) goto LAB_2130ce7b;
      iVar8 = 10;
      pbVar12 = pbVar11;
      pbVar14 = pbVar11;
      local_50 = pbVar11;
    }
    pbVar11 = pbVar12;
  } while (iVar8 != 10);
  *param_2 = (int)pbVar12;
  if (bVar2) {
    if (0x18 < uVar13) {
      if ('\x04' < local_5) {
        local_5 = local_5 + '\x01';
      }
      local_5c = local_5c + -1;
      local_60 = local_60 + 1;
      uVar13 = 0x18;
    }
    if (uVar13 == 0) {
      local_2c = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      goto LAB_2130ca38;
    }
    cVar1 = local_5c[-1];
    while (cVar1 == '\0') {
      uVar13 = uVar13 - 1;
      local_60 = local_60 + 1;
      cVar1 = local_5c[-2];
      local_5c = local_5c + -1;
    }
    FUN_2130d303(local_1c,uVar13,(uint *)&local_2c);
    if (local_4c < 0) {
      local_48 = -local_48;
    }
    uVar13 = local_48 + local_60;
    if (!bVar3) {
      uVar13 = uVar13 + param_5;
    }
    if (!bVar4) {
      uVar13 = uVar13 - param_6;
    }
    if ((int)uVar13 < 0x1451) {
      if (-0x1451 < (int)uVar13) {
        FUN_2130d6ac((int *)&local_2c,uVar13,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,uStack_2a);
        param_3 = local_26;
        goto LAB_2130ca38;
      }
      bVar7 = true;
    }
    else {
      bVar6 = true;
    }
  }
  local_2c = (ushort)param_3;
  pbVar11 = param_3;
  local_22 = local_2c;
LAB_2130ca38:
  if (bVar2) {
    if (bVar6) {
      pbVar11 = (byte *)0x0;
      local_22 = 0x7fff;
      param_3 = (byte *)0x80000000;
      local_2c = 0;
      local_30 = 2;
    }
    else if (bVar7) {
      local_2c = 0;
      local_22 = 0;
      param_3 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      local_30 = 1;
    }
  }
  else {
    local_2c = 0;
    local_22 = 0;
    param_3 = (byte *)0x0;
    pbVar11 = (byte *)0x0;
    local_30 = 4;
  }
  *param_1 = local_2c;
  *(byte **)(param_1 + 1) = pbVar11;
  *(byte **)(param_1 + 3) = param_3;
  param_1[5] = local_22 | uVar5;
  return local_30;
}



undefined4 FUN_2130d063(void)

{
  return 0;
}



void __cdecl FUN_2130d066(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_PTR_LOOP_21316848 == param_1) {
    PTR_PTR_LOOP_21316848 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_21314630) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_21314624,0,param_1);
    return;
  }
  DAT_21314640 = 0xffffffff;
  return;
}



void __cdecl FUN_2130d0c1(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_PTR_LOOP_21314634;
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
            DAT_2131775c = DAT_2131775c + -1;
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
          FUN_2130d066(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_PTR_LOOP_21314634) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_2130d18e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_21317760 != (FARPROC)0x0) {
LAB_2130d1de:
    if (DAT_21317764 != (FARPROC)0x0) {
      iVar1 = (*DAT_21317764)();
    }
    if ((iVar1 != 0) && (DAT_21317768 != (FARPROC)0x0)) {
      iVar1 = (*DAT_21317768)(iVar1);
    }
    iVar1 = (*DAT_21317760)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_21317760 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_21317760 != (FARPROC)0x0) {
      DAT_21317764 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_21317768 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_2130d1de;
    }
  }
  return 0;
}



undefined4 __cdecl FUN_2130d21d(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 + param_1;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



void __cdecl FUN_2130d240(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_2130d21d(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_2130d21d(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_2130d21d(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_2130d21d(param_1[2],param_2[2],param_1 + 2);
  return;
}



void __cdecl FUN_2130d2a8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



void __cdecl FUN_2130d2d6(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



void __cdecl FUN_2130d303(char *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  uint local_c;
  uint local_8;
  uint local_4;
  
  puVar2 = param_3;
  sVar3 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_c = *puVar2;
      local_8 = puVar2[1];
      local_4 = puVar2[2];
      FUN_2130d2a8(puVar2);
      FUN_2130d2a8(puVar2);
      FUN_2130d240(puVar2,&local_c);
      FUN_2130d2a8(puVar2);
      local_c = (uint)*param_1;
      local_8 = 0;
      local_4 = 0;
      FUN_2130d240(puVar2,&local_c);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  uVar1 = puVar2[2];
  while (uVar1 == 0) {
    sVar3 = sVar3 + -0x10;
    puVar2[2] = puVar2[1] >> 0x10;
    uVar1 = puVar2[2];
    puVar2[1] = *puVar2 >> 0x10 | puVar2[1] << 0x10;
    *puVar2 = *puVar2 << 0x10;
  }
  uVar1 = puVar2[2];
  while ((uVar1 & 0x8000) == 0) {
    FUN_2130d2a8(puVar2);
    sVar3 = sVar3 + -1;
    uVar1 = puVar2[2];
  }
  *(short *)((int)puVar2 + 10) = sVar3;
  return;
}



void __cdecl FUN_2130d3f4(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  short *local_20;
  int local_18;
  int local_14;
  int local_10;
  byte local_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  short local_8;
  undefined2 uStack_6;
  undefined2 local_4;
  ushort uStack_2;
  
  local_14 = 0;
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar3 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar1 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = uVar3 + uVar1;
  local_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < uVar1) || (0x7ffe < uVar3)) || (0xbffd < uVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  if (uVar4 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar1 == 0) && (uVar4 = uVar4 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar3 == 0) && (uVar4 = uVar4 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  local_20 = &local_8;
  local_18 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar5) {
      puVar8 = (ushort *)(param_2 + 2);
      puVar7 = (ushort *)(local_18 * 2 + (int)param_1);
      local_10 = iVar5;
      do {
        iVar2 = FUN_2130d21d(*(uint *)(local_20 + -2),(uint)*puVar8 * (uint)*puVar7,
                             (uint *)(local_20 + -2));
        if (iVar2 != 0) {
          *local_20 = *local_20 + 1;
        }
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  uVar4 = uVar4 + 0xc002;
  while ((0 < (short)uVar4 && ((uStack_2 & 0x8000) == 0))) {
    FUN_2130d2a8((uint *)&local_c);
    uVar4 = uVar4 - 1;
  }
  if ((short)uVar4 < 1) {
    uVar4 = uVar4 - 1;
    if ((short)uVar4 < 0) {
      iVar5 = -(int)(short)uVar4;
      uVar4 = uVar4 + (short)iVar5;
      do {
        if ((local_c & 1) != 0) {
          local_14 = local_14 + 1;
        }
        FUN_2130d2d6((uint *)&local_c);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_14 != 0) {
      local_c = local_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,local_c)) ||
     (iVar2 = CONCAT22(local_4,uStack_6), iVar5 = CONCAT22(local_8,uStack_a),
     (CONCAT22(uStack_a,CONCAT11(uStack_b,local_c)) & 0x1ffff) == 0x18000)) {
    if (CONCAT22(local_8,uStack_a) == -1) {
      iVar5 = 0;
      if (CONCAT22(local_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar4 = uVar4 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
      }
      else {
        iVar2 = CONCAT22(local_4,uStack_6) + 1;
      }
    }
    else {
      iVar5 = CONCAT22(local_8,uStack_a) + 1;
      iVar2 = CONCAT22(local_4,uStack_6);
    }
  }
  local_8 = (short)((uint)iVar5 >> 0x10);
  uStack_a = (undefined2)iVar5;
  local_4 = (undefined2)((uint)iVar2 >> 0x10);
  uStack_6 = (undefined2)iVar2;
  if (0x7ffe < uVar4) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  *(undefined2 *)param_1 = uStack_a;
  *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,local_8);
  *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,local_4);
  *(ushort *)((int)param_1 + 10) = uVar4 | uVar6;
  return;
}



void __cdecl FUN_2130d6ac(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  int local_4;
  
  iVar3 = 0x213172e0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x21317440;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      iVar3 = iVar3 + 0x54;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        piVar2 = (int *)(iVar3 + uVar1 * 0xc);
        if (0x7fff < *(ushort *)(iVar3 + uVar1 * 0xc)) {
          local_c = (undefined2)*piVar2;
          uStack_a._0_2_ = (undefined2)((uint)*piVar2 >> 0x10);
          uStack_a._2_2_ = (undefined2)piVar2[1];
          uStack_6 = (undefined2)((uint)piVar2[1] >> 0x10);
          local_4 = piVar2[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          piVar2 = (int *)&local_c;
        }
        FUN_2130d3f4(param_1,piVar2);
      }
    }
  }
  return;
}



undefined4 __cdecl FUN_2130d736(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_2131776c != (code *)0x0) {
    iVar1 = (*DAT_2131776c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



bool __cdecl FUN_2130d756(short *param_1,short *param_2)

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



undefined4 * __thiscall FUN_2130d7b1(void *this,byte param_1)

{
  FUN_212f52eb((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_212f1433(this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_2130d861(void *this,int param_1)

{
  if ((param_1 == -0x2c1) && (*(LPVOID *)((int)this + 0x38) != (LPVOID)0x0)) {
    HeapFree(DAT_21314020,0,*(LPVOID *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return;
}



int __thiscall FUN_2130d88c(void *this,DWORD *param_1)

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
  local_24 = &DAT_21317608;
  local_38 = 0x611;
  local_34 = 1;
  local_30 = &DAT_213175fc;
  if ((*(byte *)((int)this + 0x2c) & 1) != 0) {
    iVar4 = FUN_2130dbd4((int *)this,0x2a2,*(int **)((int)this + 0x38));
    return iVar4;
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) | 1;
  uVar3 = GetKeyState(1);
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffd | (uVar3 & 0x8000) >> 0xe;
  uVar3 = GetKeyState(2);
  pvVar1 = DAT_21314020;
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffb | (uVar3 & 0x8000) >> 0xd;
  pvVar5 = FUN_212f15e6(0x34,pvVar1);
  puVar7 = (undefined4 *)0x0;
  if (pvVar5 == (LPVOID)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    uVar6 = FUN_2130db4a((int)this);
    local_c = FUN_2131060c(pvVar5,*(undefined4 *)((int)this + 0x24),this,uVar6);
  }
  if (local_c != (undefined4 *)0x0) {
    pvVar5 = FUN_212f15e6(0x38,DAT_21314020);
    if (pvVar5 == (LPVOID)0x0) {
      local_8 = (IDataObject *)0x0;
    }
    else {
      uVar6 = FUN_2130db4a((int)this);
      local_8 = (IDataObject *)
                FUN_2130ffe4(pvVar5,*(undefined4 *)((int)this + 4),(int)local_c,this,uVar6);
    }
    if (local_8 != (IDataObject *)0x0) {
      pvVar5 = FUN_212f15e6(0x38,DAT_21314020);
      if (pvVar5 == (LPVOID)0x0) {
        local_14 = (undefined4 *)0x0;
      }
      else {
        uVar6 = FUN_2130db4a((int)this);
        puVar7 = FUN_2130fad7(pvVar5,(int *)local_8,0,*(undefined4 *)((int)this + 0x20),local_c,this
                              ,uVar6);
      }
      if (puVar7 == (undefined4 *)0x0) {
LAB_2130dad1:
        iVar4 = -0x7ff8fff2;
      }
      else {
        if ((((*(uint *)((int)this + 0x2c) & 0x100) != 0) &&
            (((byte)*(uint *)((int)this + 0x2c) & 0x30) == 0x10)) &&
           (iVar4 = FUN_2130e37a(this,(int)puVar7,&local_18), iVar4 < 0)) goto LAB_2130d98a;
        local_20 = puVar7 + 7;
        FUN_212f9bef(*(int *)((int)this + 4),&local_2c);
        bVar2 = FUN_2130e53f(this);
        if (((CONCAT31(extraout_var,bVar2) == 0) && (puVar7[10] != 0)) &&
           ((*(int *)(puVar7[10] + 0xc) != 0 && (local_18 != 0)))) {
          ReleaseCapture();
          if ((*(byte *)((int)this + 0x2c) & 6) == 0) {
            FUN_2130e59d(this);
          }
          pDataObj = local_8;
          pvVar1 = DAT_21314020;
          local_8[6].lpVtbl = (IDataObjectVtbl *)0x1;
          pvVar5 = FUN_212f15e6(0xc,pvVar1);
          if (pvVar5 == (LPVOID)0x0) {
            local_10 = (LPDROPSOURCE)0x0;
          }
          else {
            local_10 = (IDropSource *)FUN_2130e1c7(pvVar5,this);
          }
          if (local_10 == (LPDROPSOURCE)0x0) goto LAB_2130dad1;
          iVar4 = DoDragDrop(pDataObj,local_10,local_18,&local_1c);
          if (iVar4 < 0) goto LAB_2130d98a;
          bVar2 = FUN_2130e53f(this);
          if (CONCAT31(extraout_var_00,bVar2) == 0) {
            FUN_212f9bef(*(int *)((int)this + 4),&local_38);
            bVar2 = FUN_2130e53f(this);
            if (CONCAT31(extraout_var_01,bVar2) == 0) {
              if (param_1 != (DWORD *)0x0) {
                *param_1 = local_1c;
              }
              iVar4 = 0;
              goto LAB_2130d98a;
            }
          }
        }
        iVar4 = 0x40101;
      }
      goto LAB_2130d98a;
    }
  }
  iVar4 = -0x7ff8fff2;
  puVar7 = local_14;
LAB_2130d98a:
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
    FUN_2130fbc0((int)puVar7);
    (**(code **)(puVar7[7] + 8))(puVar7 + 7);
  }
  *(uint *)((int)this + 0x2c) = *(uint *)((int)this + 0x2c) & 0xfffffffe;
  return iVar4;
}



void __fastcall FUN_2130db4a(int param_1)

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
    pvVar5 = HeapAlloc(DAT_21314020,0,(iVar4 + 1) * 0xc);
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



undefined4 __cdecl FUN_2130dbd4(int *param_1,int param_2,int *param_3)

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



void __thiscall FUN_2130dc23(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_21302428;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



undefined4 * __thiscall FUN_2130dc4e(void *this,byte param_1)

{
  FUN_2130dc76((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2130dc76(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_21302428;
  return;
}



undefined4
FUN_2130dcf8(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
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
  this = FUN_212f15e6(0x38,DAT_21314020);
  if (this == (LPVOID)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_2130fad7(this,(int *)0x0,param_2,*(undefined4 *)(piVar4[1] + 0x20),0,piVar4[5],
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
      local_18 = &DAT_21317610;
      param_2 = 0;
      param_3 = 0;
      param_1 = (int *)0x0;
      bVar10 = (byte)uVar5;
      FUN_2130e6ec(bVar10,&param_3);
      FUN_2130e6c3(bVar10,(uint *)&param_1);
      FUN_2130e713((void *)piVar4[1],*(HWND *)(piVar4[1] + 4),&param_4,&local_14);
      puVar9 = param_6;
      local_8 = *(int *)(piVar4[1] + 0x10);
      if (local_8 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = local_8 + 0x1c;
      }
      FUN_212f9bef(*(int *)(piVar4[1] + 4),&local_20);
    }
    else {
      pHVar3 = *(HWND *)((int)pvVar2 + 4);
      if (((pHVar3[0x2c].unused & 2) == 0) || (pHVar3[0x2b].unused != 0)) {
        FUN_2130e713(pvVar2,pHVar3,&param_4,(undefined4 *)0x0);
      }
      FUN_2130e3a8((void *)piVar4[1],*(int *)(piVar4[1] + 0x10),param_6,uVar5,&param_4,0);
      puVar9 = param_6;
    }
    pvVar2 = (void *)piVar4[1];
    *puVar9 = *puVar9 & local_c;
    bVar6 = FUN_2130e53f(pvVar2);
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
FUN_2130de84(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

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
    local_18 = &DAT_21317610;
    param_5 = (uint *)0x2;
    bVar8 = (byte)uVar4;
    FUN_2130e6ec(bVar8,&param_2);
    FUN_2130e6c3(bVar8,(uint *)&param_1);
    FUN_2130e713((void *)piVar3[1],*(HWND *)(piVar3[1] + 4),&param_3,&local_14);
    local_8 = *(int *)(piVar3[1] + 0x10);
    if (local_8 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = local_8 + 0x1c;
    }
    FUN_212f9bef(*(int *)(piVar3[1] + 4),&local_20);
  }
  else {
    pHVar2 = *(HWND *)((int)pvVar1 + 4);
    if (((pHVar2[0x2c].unused & 2) == 0) || (pHVar2[0x2b].unused != 0)) {
      FUN_2130e713(pvVar1,pHVar2,&param_3,(undefined4 *)0x0);
    }
    FUN_2130e3a8((void *)piVar3[1],*(int *)(piVar3[1] + 0x10),puVar5,uVar4,&param_3,2);
  }
  pvVar1 = (void *)piVar3[1];
  *puVar5 = *puVar5 & local_c;
  bVar6 = FUN_2130e53f(pvVar1);
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



undefined4 FUN_2130dfad(int *param_1)

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
  local_24 = &DAT_21317610;
  if (*(int *)((int)this + 0x10) != 0) {
    if (((byte)*(undefined4 *)((int)this + 0x2c) & 0xc0) == 0x40) {
      FUN_2130e6ec((byte)param_1[3],&local_18);
      FUN_2130e6c3((byte)param_1[3],local_14);
      iVar1 = *(int *)(param_1[1] + 0x10);
      if (iVar1 == 0) {
        local_14[3] = 0;
      }
      else {
        local_14[3] = iVar1 + 0x1c;
      }
      FUN_212f9bef(*(int *)(param_1[1] + 4),&local_2c);
    }
    else {
      local_20 = 0;
      local_1c = 0;
      FUN_2130e3a8(this,*(int *)((int)this + 0x10),local_14 + 2,0,&local_20,1);
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
FUN_2130e09e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    local_18 = &DAT_21317620;
    local_10 = 0;
    FUN_2130e6ec((byte)param_3,&local_8);
    FUN_2130e6c3((byte)param_3,(uint *)&param_1);
    FUN_2130e713((void *)piVar3[1],*(HWND *)(piVar3[1] + 4),&param_4,&local_14);
    local_c = *(int *)(piVar3[1] + 0x10);
    if (local_c == 0) {
      local_c = 0;
    }
    else {
      local_c = local_c + 0x1c;
    }
    FUN_212f9bef(*(int *)(piVar3[1] + 4),&local_20);
  }
  else {
    pHVar2 = *(HWND *)((int)pvVar6 + 4);
    if (((pHVar2[0x2c].unused & 2) == 0) || (pHVar2[0x2b].unused != 0)) {
      FUN_2130e713(pvVar6,pHVar2,&param_4,(undefined4 *)0x0);
    }
    FUN_2130e3a8((void *)piVar3[1],*(int *)(piVar3[1] + 0x10),param_6,param_3,&param_4,3);
  }
  pvVar6 = (void *)piVar3[1];
  iVar1 = *(int *)((int)pvVar6 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
    pvVar6 = (void *)piVar3[1];
    *(undefined4 *)((int)pvVar6 + 0x10) = 0;
  }
  bVar4 = FUN_2130e53f(pvVar6);
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



void __thiscall FUN_2130e1c7(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_21302448;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 1;
  return;
}



undefined4 * __thiscall FUN_2130e1e0(void *this,byte param_1)

{
  FUN_2130e208((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2130e208(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_21302448;
  return;
}



uint FUN_2130e2f4(int param_1,undefined4 param_2)

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
  local_c = &DAT_21317600;
  uVar2 = *(uint *)((int)*(void **)(param_1 + 4) + 0x2c);
  if ((((uVar2 & 0x100) != 0) && (((byte)uVar2 & 0x30) == 0x10)) &&
     (uVar2 = FUN_2130e3e1(*(void **)(param_1 + 4),param_2,&local_8), (int)uVar2 < 0)) {
    return uVar2;
  }
  FUN_212f9bef(*(int *)(*(int *)(param_1 + 4) + 4),&local_14);
  bVar1 = FUN_2130e53f(*(void **)(param_1 + 4));
  if (CONCAT31(extraout_var,bVar1) == 0) {
    uVar2 = -(uint)(local_8 != 0) & 0x40102;
  }
  else {
    uVar2 = 0x8000ffff;
  }
  return uVar2;
}



undefined4 __thiscall FUN_2130e37a(void *this,int param_1,undefined4 param_2)

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
FUN_2130e3a8(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



undefined4 __thiscall FUN_2130e3e1(void *this,undefined4 param_1,undefined4 param_2)

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



uint __thiscall FUN_2130e401(void *this,int param_1)

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



int __thiscall FUN_2130e467(void *this,int *param_1)

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
    iVar3 = (**(code **)*puVar2)(puVar2,&DAT_212f4c50,&local_8);
    if (iVar3 < 0) goto LAB_2130e4bc;
    iVar3 = (**(code **)(*local_8 + 0x10))(local_8,&local_c);
    if (iVar3 < 0) goto LAB_2130e4bc;
    if (local_c == (int *)0x0) {
      iVar3 = -0x7fffbffe;
      goto LAB_2130e4bc;
    }
    iVar3 = (**(code **)*local_c)(local_c,&DAT_212f4ce0,piVar1);
    if (iVar3 < 0) goto LAB_2130e4bc;
  }
  (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
  iVar3 = 0;
  *param_1 = *piVar1;
LAB_2130e4bc:
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



int __fastcall FUN_2130e509(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  if ((*(int *)(param_1 + 0x1c) == 0) &&
     (iVar2 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0x1c))
                        (*(int *)(param_1 + 4) + 0x1c,&DAT_213027b0,puVar1), iVar2 < 0)) {
    return iVar2;
  }
  (**(code **)(*(int *)*puVar1 + 4))((int *)*puVar1);
  *unaff_retaddr = *puVar1;
  return 0;
}



bool __fastcall FUN_2130e53f(void *param_1)

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
    FUN_212f694a(param_1,&local_8);
  }
  return local_8 == 0;
}



void __fastcall FUN_2130e59d(void *param_1)

{
  int iVar1;
  int *piVar2;
  tagRECT local_24;
  tagPOINT local_14;
  int *local_c;
  HWND local_8;
  
  if (((*(byte *)(*(int *)((int)param_1 + 4) + 0xb0) & 2) == 0) ||
     (*(int *)(*(int *)((int)param_1 + 4) + 0xac) != 0)) {
    iVar1 = FUN_2130e509((int)param_1);
    if (iVar1 < 0) {
      return;
    }
    iVar1 = (**(code **)(*local_c + 0x28))(local_c,1,&local_24);
    (**(code **)(*local_c + 8))(local_c);
    if (iVar1 < 0) {
      return;
    }
    FUN_212f5d6a(&local_24.left,&local_24.left);
    FUN_212f5d6a(&local_24.right,&local_24.right);
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
    FUN_212f694a(param_1,(int *)&local_8);
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



void __cdecl FUN_2130e6c3(byte param_1,uint *param_2)

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



void __cdecl FUN_2130e6ec(byte param_1,uint *param_2)

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



void __thiscall FUN_2130e713(void *this,HWND param_1,int *param_2,undefined4 *param_3)

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
      iVar3 = FUN_2130e509((int)local_10);
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
    iVar3 = FUN_212f694a(this,(int *)&param_1);
    if (iVar3 < 0) {
      return;
    }
    local_18.x = *param_2;
    local_18.y = param_2[1];
    ScreenToClient(param_1,&local_18);
  }
  FUN_212f1626(&local_18.x,&local_18.x);
  if (((*(byte *)(*(int *)((int)local_10 + 4) + 0xb0) & 2) == 0) ||
     (*(int *)(*(int *)((int)local_10 + 4) + 0xac) != 0)) {
    local_18.x = local_18.x - local_28;
    local_18.y = local_18.y - local_24;
  }
  if (puVar5 != (undefined4 *)0x0) {
    iVar3 = FUN_2130e467(local_10,(int *)&local_8);
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
    FUN_212f5d6a(&local_18.x,&local_18.x);
    *param_2 = local_18.x;
    param_2[1] = local_18.y;
  }
  return;
}



undefined4 __cdecl FUN_2130e897(short param_1,int *param_2)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  
  *param_2 = -1;
  if (DAT_2131769c != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    if (DAT_2131769c != 0) {
      bVar1 = false;
      psVar2 = &DAT_21317630;
      do {
        if (*psVar2 == -0x40ff) {
          *psVar2 = (short)DAT_2131427c;
LAB_2130e8dc:
          bVar1 = true;
        }
        else if (*psVar2 == 0) goto LAB_2130e8dc;
        psVar2 = psVar2 + 6;
      } while (!bVar1);
      DAT_2131769c = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  }
  iVar3 = 0;
  psVar2 = &DAT_21317630;
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



undefined4 __cdecl FUN_2130e923(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  sVar3 = (short)param_1;
  iVar1 = FUN_2130e897(sVar3,&param_1);
  uVar2 = 1;
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(&DAT_21317634 + param_1 * 0xc);
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



void __cdecl FUN_2130e967(int *param_1,int param_2)

{
  int iVar1;
  short local_18 [10];
  
  iVar1 = FUN_2130e923(param_2,local_18);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x14))(param_1,local_18);
  }
  return;
}



uint __cdecl
FUN_2130e98e(VARIANTARG *param_1,int *param_2,ushort *param_3,VARIANTARG *param_4,int *param_5,
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
     iVar4 = (**(code **)*puVar1)(puVar1,&DAT_212f7370,&param_2), -1 < iVar4)) {
    uVar5 = FUN_2130ecff(param_2,uVar6,puVar3,param_5,param_6);
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
    iVar4 = FUN_2130e897(*puVar3,(int *)&param_3);
    if (iVar4 < 0) {
      if ((param_1->n1).n2.vt != 0x2011) {
        iVar4 = 0x2a3;
        goto LAB_2130ea6f;
      }
      uVar5 = VariantCopy(param_4,param_1);
    }
    else {
      uVar5 = VariantChangeType(param_4,param_1,0,*(VARTYPE *)(&DAT_21317638 + (int)param_3 * 0xc));
    }
    if (uVar5 != 0x80020005) {
      if (-1 < (int)uVar5) {
        return 0;
      }
      return uVar5;
    }
  }
  iVar4 = 0x1cd;
LAB_2130ea6f:
  uVar5 = FUN_2130dbd4(param_5,iVar4,param_6);
  return uVar5;
}



uint __cdecl
FUN_2130ea98(short *param_1,ushort *param_2,int param_3,ushort param_4,int param_5,short param_6)

{
  if (((param_1 == (short *)0x0) || (param_2 == (ushort *)0x0)) || (param_3 == 0)) {
    return 0x80070057;
  }
  if ((((param_4 == 0) || (*param_2 == param_4)) || ((param_4 == 1 && (*param_2 == DAT_2131427c))))
     && (*(int *)(param_2 + 8) == param_5)) {
    return -(uint)(*param_1 != param_6) & 0x8000ffff;
  }
  return 0x8000ffff;
}



uint __cdecl FUN_2130eafa(short *param_1,ushort *param_2,undefined4 *param_3)

{
  uint uVar1;
  UINT UVar2;
  HGLOBAL pvVar3;
  
  uVar1 = FUN_2130ea98(param_1,param_2,(int)param_3,1,1,8);
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
      uVar1 = FUN_2130ec8b(param_1,param_2,(int)param_3);
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



undefined4 * __cdecl FUN_2130eb78(short *param_1,ushort *param_2,undefined4 *param_3)

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
  param_3 = (undefined4 *)FUN_2130ea98(param_1,param_2,(int)param_3,0,1,0x2011);
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
    if ((int)param_3 < 0) goto LAB_2130ec5d;
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
LAB_2130ec5d:
  if (((int)param_3 < 0) && ((HGLOBAL)puVar2[1] != (HGLOBAL)0x0)) {
    GlobalUnlock((HGLOBAL)puVar2[1]);
    GlobalFree((HGLOBAL)puVar2[1]);
    puVar2[1] = 0;
  }
  return param_3;
}



uint __cdecl FUN_2130ec8b(short *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  SIZE_T SVar2;
  LPSTR pCVar3;
  
  uVar1 = FUN_2130ea98(param_1,param_2,param_3,1,1,8);
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
        FUN_21311112(pCVar3,*(LPCWSTR *)(param_1 + 4),SVar2);
        pCVar3[SVar2 - 1] = '\0';
        GlobalUnlock(*(HGLOBAL *)(param_3 + 4));
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



uint __cdecl FUN_2130ecff(int *param_1,ushort param_2,ushort *param_3,int *param_4,int *param_5)

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
LAB_2130ed32:
    uVar3 = FUN_2130dbd4(param_4,iVar4,param_5);
  }
  else {
    if (param_2 == 1) {
      if (uVar1 == 0) {
        *puVar2 = 8;
      }
      else if ((uVar1 != 2) && ((uVar1 < 8 || (9 < uVar1)))) goto LAB_2130ed59;
    }
    else if (param_2 == 2) {
      if (uVar1 == 0) {
        *puVar2 = 3;
      }
      else if (uVar1 != 3) {
        uVar3 = FUN_213111f5(0x1cd);
        return uVar3;
      }
    }
    else {
      if (param_2 != 4) {
LAB_2130ed59:
        iVar4 = 0x1cd;
        goto LAB_2130ed32;
      }
      if (uVar1 == 0) {
        *puVar2 = 0xe;
      }
      else if (uVar1 != 0xe) goto LAB_2130ed59;
    }
    uVar3 = 0;
  }
  return uVar3;
}



uint __cdecl
FUN_2130edad(uint param_1,HMETAFILE param_2,ushort *param_3,undefined4 *param_4,int *param_5,
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
                    (*(undefined4 **)(param_1 + 8),&DAT_212f7370,&local_8);
  puVar2 = param_3;
  if ((iVar4 < 0) ||
     (param_1 = FUN_2130ecff(&local_8->unused,*param_3,(ushort *)&param_1,param_5,&param_6->unused),
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
    goto LAB_2130ee1c;
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
        if ((int)param_1 < 0) goto LAB_2130eef9;
        (**(code **)(local_8->unused + 0x10))(local_8,&param_2);
        if (param_2 == (HMETAFILE)0x0) {
          pHVar6 = FUN_21311a8d(local_8,0,0);
          this->unused = (int)pHVar6;
        }
        else {
          param_1 = FUN_2130f700(this,param_6,param_2);
          if ((int)param_1 < 0) goto LAB_2130ee1c;
        }
        pHVar5 = (HENHMETAFILE)this->unused;
      }
      this->unused = 0;
LAB_2130ef33:
      puVar3[1] = pHVar5;
      goto LAB_2130ee1c;
    }
    if (uVar1 == 8) {
      iVar4 = (**(code **)(local_8->unused + 0xc))(local_8,&param_6);
      if ((-1 < iVar4) &&
         (param_1 = (**(code **)(local_8->unused + 0x10))(local_8,&param_2), -1 < (int)param_1)) {
        pHVar5 = (HENHMETAFILE)FUN_21311280(param_6,(HPALETTE)param_2);
        if (pHVar5 == (HENHMETAFILE)0x0) goto LAB_2130ee86;
        goto LAB_2130ef33;
      }
    }
    else if (uVar1 == 9) {
      pHVar5 = (HENHMETAFILE)param_2[1].unused;
      if (pHVar5 == (HENHMETAFILE)0x0) {
        param_1 = (**(code **)(local_8->unused + 0xc))(local_8,&param_6);
        if ((int)param_1 < 0) goto LAB_2130eef9;
        (**(code **)(local_8->unused + 0x10))(local_8,&param_2);
        if (param_2 == (HMETAFILE)0x0) {
          pHVar5 = (HENHMETAFILE)0x0;
        }
        else {
          param_1 = FUN_2130f700(this,param_6,param_2);
          if ((int)param_1 < 0) goto LAB_2130ee1c;
          pHVar5 = (HENHMETAFILE)this[1].unused;
        }
      }
      else {
        param_2[1].unused = 0;
      }
      goto LAB_2130ef33;
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
          goto LAB_2130ee1c;
        }
        GlobalFree(hMem);
      }
      goto LAB_2130ee86;
    }
  }
  else if ((((short)param_6 == 4) && (uVar1 == 0xe)) &&
          (param_1 = (**(code **)(local_8->unused + 0xc))(local_8,&param_2), -1 < (int)param_1)) {
    pHVar5 = CopyEnhMetaFileA((HENHMETAFILE)param_2,(LPCSTR)0x0);
    if (pHVar5 != (HENHMETAFILE)0x0) goto LAB_2130ef33;
LAB_2130ee86:
    param_1 = 0x8007000e;
    goto LAB_2130ee1c;
  }
LAB_2130eef9:
  param_1 = 0x8000ffff;
LAB_2130ee1c:
  if (local_8 != (HBITMAP)0x0) {
    (**(code **)(local_8->unused + 8))(local_8);
  }
  return param_1;
}



undefined4 __cdecl FUN_2130f058(LPSTGMEDIUM param_1,VARIANTARG *param_2,undefined4 *param_3)

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
      pWVar3 = FUN_212f1d12(pCVar2,(BSTR)0x0);
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



HRESULT __cdecl FUN_2130f0cc(SAFEARRAY *param_1,VARIANTARG *param_2,undefined4 *param_3)

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
FUN_2130f1c9(LPSTGMEDIUM param_1,short param_2,HBITMAP param_3,VARIANTARG *param_4,
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
    _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_212f7370,1,&local_8);
    if (_param_2 < 0) {
      ReleaseStgMedium(&local_18);
LAB_2130f25d:
      local_8 = (int *)0x0;
    }
LAB_2130f2b3:
    if (_param_2 < 0) goto LAB_2130f2df;
    *param_5 = 1;
    iVar3 = (**(code **)*local_8)(local_8,&DAT_212f4dd0,&local_c);
    piVar1 = local_c;
    if (-1 < iVar3) {
      local_c = (int *)0x0;
      _param_2 = 0;
      (param_4->n1).n2.vt = 9;
      *(int **)((int)&param_4->n1 + 8) = piVar1;
      goto LAB_2130f2df;
    }
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 8) {
        pBVar4 = (BITMAPINFOHEADER *)GlobalLock(hMem.hGlobal);
        if (pBVar4 != (BITMAPINFOHEADER *)0x0) {
          _Var2.hBitmap = FUN_213114e7(pBVar4,&param_3);
          GlobalUnlock(hMem.hGlobal);
          if (_Var2.hBitmap != (HBITMAP)0x0) {
            local_20.hBitmap = param_3;
            local_28 = 1;
            local_24.hBitmap = _Var2.hBitmap;
            _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_212f7370,1,&local_8);
            if (-1 < _param_2) {
              ReleaseStgMedium(param_1);
              goto LAB_2130f40a;
            }
            DeleteObject(_Var2.hMetaFilePict);
            if (param_3 != (HBITMAP)0x0) {
              DeleteObject(param_3);
            }
            goto LAB_2130f2af;
          }
        }
LAB_2130f3ac:
        _param_2 = -0x7ff8fff2;
        goto LAB_2130f2df;
      }
      if (param_2 == 9) {
        _Var2.hBitmap = CreateBitmap(1,1,DAT_21317790,DAT_21317774,(void *)0x0);
        if (_Var2.hBitmap == (HBITMAP)0x0) goto LAB_2130f3ac;
        local_28 = 1;
        local_24.hBitmap = _Var2.hBitmap;
        local_20 = hMem;
        _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_212f7370,1,&local_8);
        if (_param_2 < 0) {
          DeleteObject(_Var2.hMetaFilePict);
          goto LAB_2130f2af;
        }
      }
      else {
        if (param_2 != 0xe) {
          return _param_2;
        }
        local_28 = 4;
        local_24 = hMem;
        _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_212f7370,1,&local_8);
        if (_param_2 < 0) goto LAB_2130f25d;
      }
      goto LAB_2130f2b3;
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
      _param_2 = OleCreatePictureIndirect(&local_2c,&DAT_212f7370,1,&local_8);
      if (_param_2 < 0) {
LAB_2130f2af:
        local_8 = (int *)0x0;
      }
      else {
        GlobalFree(hMem.hGlobal);
LAB_2130f40a:
        *param_5 = 1;
      }
      goto LAB_2130f2b3;
    }
  }
  _param_2 = -0x7fff0001;
LAB_2130f2df:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return _param_2;
}



int __cdecl FUN_2130f4a1(LPCWSTR param_1,undefined4 *param_2)

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
LAB_2130f5cb:
      local_8 = (LPCSTR)GlobalAlloc(0x2000,iVar7 + 0x15);
      if (local_8 == (LPCSTR)0x0) {
LAB_2130f5e1:
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
          HeapFree(DAT_21314020,0,local_c);
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
          FUN_212f159d(local_a0,uVar4);
          WideCharToMultiByte(0,0,param_1,-1,local_a0[0],uVar4,(LPCSTR)0x0,(LPBOOL)0x0);
          local_8 = local_a0[0];
          iVar2 = lstrlenA(local_a0[0]);
          dwBytes = iVar2 + 2 + iVar7;
          if (local_c == (int *)0x0) {
            piVar3 = (int *)HeapAlloc(DAT_21314020,0,dwBytes);
          }
          else {
            piVar3 = (int *)HeapReAlloc(DAT_21314020,0,local_c,dwBytes);
          }
          if (piVar3 == (int *)0x0) {
            if ((local_a0[0] != (LPSTR)0x0) && ((local_24 & 1) != 0)) {
              HeapFree(DAT_21314020,0,local_a0[0]);
            }
            goto LAB_2130f5e1;
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
            HeapFree(DAT_21314020,0,local_a0[0]);
            pWVar5 = local_14;
          }
        }
        iVar2 = local_20;
        if (local_1c <= local_20) goto LAB_2130f5cb;
      }
    }
    if (local_c != (int *)0x0) {
      HeapFree(DAT_21314020,0,local_c);
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



void __fastcall FUN_2130f6d9(undefined4 *param_1)

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



uint __thiscall FUN_2130f700(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)this;
  local_8 = (undefined4 *)this;
  FUN_2130f6d9((undefined4 *)this);
  local_8 = param_1;
  local_c = param_2;
  uVar1 = FUN_213115aa(&local_8,&local_c);
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
    uVar1 = FUN_213111f5(uVar1);
  }
  return uVar1;
}



void __thiscall FUN_2130f776(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}



int __fastcall FUN_2130f796(int *param_1)

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
        HVar1 = FUN_2130fa5a((undefined2 *)(param_1[2] + iVar2));
        if (HVar1 < 0) {
          iStack_4 = HVar1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x30;
      } while (iVar3 < *param_1);
    }
    if ((LPVOID)param_1[2] != (LPVOID)0x0) {
      HeapFree(DAT_21314020,0,(LPVOID)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    iStack_4 = FUN_2130dbd4((int *)param_1[4],0x2a0,(int *)param_1[5]);
  }
  return iStack_4;
}



HRESULT __fastcall FUN_2130f79a(int *param_1)

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
        HVar1 = FUN_2130fa5a((undefined2 *)(param_1[2] + iVar2));
        if (HVar1 < 0) {
          local_4 = HVar1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x30;
      } while (iVar3 < *param_1);
    }
    if ((LPVOID)param_1[2] != (LPVOID)0x0) {
      HeapFree(DAT_21314020,0,(LPVOID)param_1[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    local_4 = FUN_2130dbd4((int *)param_1[4],0x2a0,(int *)param_1[5]);
  }
  return local_4;
}



int __thiscall FUN_2130f7c1(void *this,int param_1)

{
  return *(int *)((int)this + 8) + param_1 * 0x30;
}



uint __thiscall FUN_2130f81f(void *this,VARIANTARG *param_1,VARIANTARG *param_2)

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
        goto LAB_2130f867;
      }
      goto LAB_2130f879;
    }
LAB_2130f8dc:
    VariantInit(&local_1c);
    uVar1 = VariantChangeType(&local_1c,param_1,0,2);
    if ((int)uVar1 < 0) goto LAB_2130f8ce;
  }
  else {
LAB_2130f879:
    if (((param_1->n1).n2.vt != 10) || (*(int *)((int)&param_1->n1 + 8) != -0x7ffdfffc))
    goto LAB_2130f8dc;
    local_1c.n1._8_4_ = (int *)0x0;
  }
  piVar3 = DAT_21314280;
  if (((short)local_1c.n1._8_4_ != -0x4100) &&
     (piVar3 = (int *)local_1c.n1._8_4_, (short)local_1c.n1._8_4_ == -0x40ff)) {
    piVar3 = DAT_2131427c;
  }
  if (((ushort)piVar3 < 0xc000) ||
     (iVar4 = GetClipboardFormatNameA((uint)piVar3 & 0xffff,(LPSTR)&local_1c.n1.n2.wReserved2,10),
     iVar4 != 0)) {
    if ((((param_2->n1).n2.vt == 10) && (*(int *)((int)&param_2->n1 + 8) == -0x7ffdfffc)) ||
       (uVar1 = FUN_2130e98e(param_2,piVar3,(ushort *)&local_8,&local_2c,*(int **)((int)this + 0x10)
                             ,*(int **)((int)this + 0x14)), piVar3 = local_8, -1 < (int)uVar1)) {
      local_8 = piVar3;
      if (((short)local_8 == 0xf) &&
         (((param_2->n1).n2.vt != 10 || (*(int *)((int)&param_2->n1 + 8) != -0x7ffdfffc)))) {
        piVar3 = *(int **)((int)this + 0x14);
        iVar4 = 5;
LAB_2130f867:
        uVar1 = FUN_2130dbd4(*(int **)((int)this + 0x10),iVar4,piVar3);
        return uVar1;
      }
      psVar2 = FUN_2130fa28(this,(short)local_8);
      if (psVar2 == (short *)0x0) {
        if (*(int *)((int)this + 0xc) != 0) {
          piVar3 = *(int **)((int)this + 0x14);
          iVar4 = 0x2a0;
          goto LAB_2130f867;
        }
        uVar1 = FUN_2130fa75((int *)this);
        if ((int)uVar1 < 0) goto LAB_2130f8ce;
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
      uVar1 = FUN_2130e923((int)local_8,psVar2 + 0xc);
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
    uVar1 = FUN_2130dbd4(*(int **)((int)this + 0x10),0x1cd,*(int **)((int)this + 0x14));
  }
LAB_2130f8ce:
  VariantClear(&local_2c);
  return uVar1;
}



short * __thiscall FUN_2130fa28(void *this,short param_1)

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



HRESULT FUN_2130fa5a(undefined2 *param_1)

{
  HRESULT HVar1;
  
  *param_1 = 0;
  HVar1 = VariantClear((VARIANTARG *)(param_1 + 4));
  if (-1 < HVar1) {
    HVar1 = 0;
  }
  return HVar1;
}



undefined4 __fastcall FUN_2130fa75(int *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 < param_1[1]) {
    return 1;
  }
  if ((LPVOID)param_1[2] == (LPVOID)0x0) {
    iVar2 = 5;
    pvVar1 = HeapAlloc(DAT_21314020,0,0xf0);
    param_1[2] = (int)pvVar1;
    if (pvVar1 != (LPVOID)0x0) {
LAB_2130fad0:
      param_1[1] = iVar2;
      return 0;
    }
  }
  else {
    iVar2 = param_1[1] + 5;
    pvVar1 = HeapReAlloc(DAT_21314020,0,(LPVOID)param_1[2],iVar2 * 0x30);
    if (pvVar1 != (LPVOID)0x0) {
      param_1[2] = (int)pvVar1;
      goto LAB_2130fad0;
    }
  }
  return 0x8007000e;
}



undefined4 * __thiscall
FUN_2130fad7(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  FUN_212f5a0b(this,(undefined4 *)0x0,param_3,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *(undefined4 *)((int)this + 0x24) = param_2;
  *puVar1 = &PTR_LAB_213024d8;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_212f7028;
  *(undefined ***)this = &PTR_FUN_213024a0;
  *puVar1 = &PTR_LAB_21302470;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_21302460;
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



undefined4 * __thiscall FUN_2130fb62(void *this,byte param_1)

{
  FUN_2130fb8a((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2130fb8a(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_213024a0;
  param_1[7] = &PTR_LAB_21302470;
  param_1[8] = &PTR_LAB_21302460;
  FUN_2130fbc0((int)param_1);
  iVar1 = param_1[0xb];
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x1c) + 8))(iVar1 + 0x1c);
  }
  FUN_212f549a(param_1);
  return;
}



void __fastcall FUN_2130fbc0(int param_1)

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



undefined4 __thiscall FUN_2130fbe7(void *this,int *param_1,int *param_2)

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
    pcVar6 = &DAT_212f1460;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_2130fc10;
LAB_2130fc89:
    uVar1 = (int)this + 0x1c;
  }
  else {
LAB_2130fc10:
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
        goto LAB_2130fc33;
      }
    }
    if (iVar4 == 0x2334d2b3) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = &DAT_212f1470;
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
        goto LAB_2130fc33;
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
      if (bVar7) goto LAB_2130fc89;
    }
    if (iVar4 != -0x20f4c2a0) {
LAB_2130fcb6:
      uVar2 = FUN_212f2005(this,param_1,param_2);
      return uVar2;
    }
    iVar4 = 0x10;
    bVar7 = true;
    piVar5 = param_1;
    pcVar6 = &DAT_212f4de0;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_2130fcb6;
    uVar1 = (int)this + 0x20;
  }
  piVar5 = (int *)(-(uint)(this != (void *)0x0) & uVar1);
LAB_2130fc33:
  (**(code **)(*piVar5 + 4))(piVar5);
  *param_2 = (int)piVar5;
  return 0;
}



uint FUN_2130fcc8(int param_1,int *param_2)

{
  int iVar1;
  LPVOID this;
  undefined4 *this_00;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar2 = FUN_2130dbd4(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
      return uVar2;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      this = FUN_212f15e6(0x34,DAT_21314020);
      if (this == (LPVOID)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_2131060c(this,DAT_21316f38,*(undefined4 *)(param_1 + 0x18),
                               *(undefined4 *)(param_1 + 0x14));
      }
      *(undefined4 **)(param_1 + 0x10) = this_00;
      if (this_00 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      uVar2 = FUN_21310a29(this_00,*(int **)(param_1 + 8));
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



uint FUN_2130fd7b(int param_1,uint param_2,VARIANTARG *param_3)

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
  uVar2 = DAT_21314280;
  if (((short)param_2 != -0x4100) && (uVar2 = param_2, (short)param_2 == -0x40ff)) {
    uVar2 = DAT_2131427c;
  }
  VariantInit(param_3);
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 0x1a9;
    goto LAB_2130fdb2;
  }
  if (*(int *)(param_1 + 8) == 0) {
    FUN_2130dbd4(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
    goto LAB_2130fe88;
  }
  iVar3 = FUN_2130e923(uVar2,local_28);
  if (iVar3 < 0) {
LAB_2130fe0a:
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 0x1cd;
LAB_2130fdb2:
    FUN_2130dbd4(*(int **)(param_1 + 0x18),iVar3,piVar4);
    return unaff_EDI;
  }
  sVar1 = (short)uVar2;
  if (sVar1 == 0xf) {
    piVar4 = *(int **)(param_1 + 0x14);
    iVar3 = 5;
    goto LAB_2130fdb2;
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),local_28);
  if (iVar3 != 0) goto LAB_2130fe0a;
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),local_28,&local_14);
  if (iVar3 < 0) goto LAB_2130fe88;
  local_8 = (PVOID)0x1;
  if (sVar1 == 1) {
LAB_2130febf:
    FUN_2130f058(&local_14,param_3,&param_2);
  }
  else if (sVar1 < 2) {
LAB_2130fe9f:
    if ((uVar2 & 0xffff) == DAT_2131427c) goto LAB_2130febf;
    FUN_2130f0cc((SAFEARRAY *)&local_14,param_3,&param_2);
  }
  else {
    if (3 < sVar1) {
      if (7 < sVar1) {
        if ((sVar1 < 10) || (sVar1 == 0xe)) goto LAB_2130fe63;
        if (sVar1 == 0xf) {
          FUN_213111f5(0xd);
          goto LAB_2130fe88;
        }
      }
      goto LAB_2130fe9f;
    }
LAB_2130fe63:
    FUN_2130f1c9(&local_14,local_28[0],*(HBITMAP *)(param_1 + 8),param_3,&param_2);
  }
  if (param_2 != 0) {
    local_8 = (PVOID)0x0;
  }
LAB_2130fe88:
  if (local_8 != (PVOID)0x0) {
    ReleaseStgMedium(&local_14);
  }
  return unaff_EDI;
}



void FUN_2130ff63(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_2130dbd4(*(int **)(param_1 + 0x18),0x1a9,*(int **)(param_1 + 0x14));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 != 0) &&
       (iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x28))(iVar1 + 0x1c), iVar1 < 0)) {
      return;
    }
    FUN_2130f79a((int *)(*(int *)(param_1 + 0xc) + 0xc));
  }
  return;
}



undefined4 * __thiscall
FUN_2130ffe4(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_LAB_21302540;
  FUN_2130f776((void *)((int)this + 0xc),param_3,param_4);
  *(undefined ***)this = &PTR_FUN_21302508;
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



void __fastcall FUN_21310047(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21302508;
  (**(code **)(*(int *)(param_1[0xb] + 0x1c) + 8))((int *)(param_1[0xb] + 0x1c));
  FUN_2130f6d9(param_1 + 9);
  FUN_2130f796(param_1 + 3);
  return;
}



undefined4 FUN_2131006e(int *param_1,char *param_2,undefined4 *param_3)

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



undefined4 FUN_213100c5(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1 + 0xc;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[0xc];
  if (*piVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_21310047(param_1);
      HeapFree(DAT_21314020,0,param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * FUN_213100f2(int *param_1,ushort *param_2,undefined4 *param_3)

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
  iVar3 = FUN_2130f7c1(this + 3,(int)param_3);
  puVar2 = (undefined4 *)FUN_21310248(this,(uint)param_3);
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
      puVar4 = (undefined4 *)FUN_2130dbd4((int *)this[2],0x2a4,(int *)this[1]);
      return puVar4;
    }
  }
  uVar5 = (uint)*param_2;
  if (uVar5 < 10) {
    if (7 < uVar5) {
LAB_21310224:
      puVar4 = (undefined4 *)
               FUN_2130edad((uint)psVar1,(HMETAFILE)(this + 9),param_2,puVar4,(int *)this[2],
                            (HBITMAP)this[1]);
      return puVar4;
    }
    if (uVar5 == 1) goto LAB_213101d6;
    if ((1 < uVar5) && (uVar5 < 4)) goto LAB_21310224;
  }
  else {
    if (uVar5 == 0xe) goto LAB_21310224;
    if (uVar5 == 0xf) {
      puVar2 = (undefined4 *)FUN_2130f4a1((LPCWSTR)this[0xb],&param_2);
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
  if (uVar5 != DAT_2131427c) {
    puVar4 = FUN_2130eb78(psVar1,param_2,puVar4);
    return puVar4;
  }
LAB_213101d6:
  puVar4 = (undefined4 *)FUN_2130eafa(psVar1,param_2,puVar4);
  return puVar4;
}



undefined4 __thiscall FUN_21310248(void *this,uint param_1)

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
  puVar1 = (ushort *)FUN_2130f7c1((void *)((int)this + 0xc),param_1);
  if (((puVar1[4] == 10) && (*(int *)(puVar1 + 8) == -0x7ffdfffc)) &&
     ((*puVar1 != 0xf ||
      (piVar2 = (int *)(*(int *)((int)this + 0x2c) + 0x1c),
      (**(code **)(*piVar2 + 0x20))(piVar2,&local_10), (int)local_10 < 1)))) {
    local_10 = FUN_213105d2((int *)this);
    if (local_10 == (undefined4 *)0x0) {
      uVar6 = 0x8007000e;
    }
    else {
      piVar7 = local_10 + 7;
      (**(code **)(*piVar7 + 4))(piVar7);
      uVar3 = (uint)*puVar1;
      if (uVar3 == DAT_21314280) {
        param_1 = 0xbf00;
      }
      else {
        param_1 = 0xbf01;
        if (uVar3 != DAT_2131427c) {
          param_1 = uVar3;
        }
      }
      puVar4 = (undefined4 *)(*(int *)((int)this + 0x34) + 0x1c);
      iVar5 = (**(code **)*puVar4)(puVar4,&DAT_21301bb8,&local_8);
      if (-1 < iVar5) {
        (**(code **)(*local_8 + 0x10))(local_8,piVar7,param_1);
        (**(code **)(*local_8 + 8))(local_8);
      }
      local_14 = piVar7;
      FUN_212f9bef(*(int *)((int)this + 0x34),&local_20);
      uVar6 = 0;
    }
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 8))(piVar7);
    }
    if (local_10 != (undefined4 *)0x0) {
      FUN_2130fbc0((int)local_10);
      (**(code **)(local_10[7] + 8))(local_10 + 7);
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



uint FUN_2131037f(int *param_1,ushort *param_2,undefined4 *param_3)

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
      iVar3 = FUN_2130f7c1(param_1 + 3,(int)param_2);
      if (*(int *)(puVar1 + 8) == 1) {
        uVar2 = FUN_21310248(param_1,(uint)param_2);
        if (-1 < (int)uVar2) {
          if ((*(short *)(iVar3 + 8) == 10) && (*(int *)(iVar3 + 0x10) == -0x7ffdfffc)) {
            uVar2 = 0x80004005;
          }
          else if (*puVar1 == 1) {
            uVar2 = FUN_2130ec8b((short *)(iVar3 + 8),puVar1,(int)param_3);
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



void FUN_21310425(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&param_1);
  return;
}



undefined4 FUN_213104f6(undefined4 *param_1,int param_2,uint *param_3)

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
  
  hHeap = DAT_21314020;
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
              iVar3 = FUN_2130f7c1(this,param_2);
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
          uVar4 = FUN_21311064(*this,local_8);
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



undefined4 * __cdecl FUN_213105d2(int *param_1)

{
  int iVar1;
  LPVOID this;
  undefined4 *puVar2;
  
  iVar1 = param_1[0xb];
  this = FUN_212f15e6(0x38,DAT_21314020);
  if (this == (LPVOID)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_2130fad7(this,param_1,0,DAT_21316f34,iVar1,param_1[2],param_1[1]);
  }
  return puVar2;
}



undefined4 * __thiscall
FUN_2131060c(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0x1c);
  FUN_212f5a0b(this,(undefined4 *)0x0,param_1,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *puVar1 = &PTR_LAB_213025f0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_212f7028;
  *puVar1 = &PTR_LAB_213025b8;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined ***)this = &PTR_FUN_21302580;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_21302570;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21310664(void *this,byte param_1)

{
  FUN_2131068c((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_2131068c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21302580;
  param_1[7] = &PTR_LAB_213025b8;
  param_1[8] = &PTR_LAB_21302570;
  if ((SAFEARRAY *)param_1[0xb] != (SAFEARRAY *)0x0) {
    SafeArrayDestroy((SAFEARRAY *)param_1[0xb]);
  }
  FUN_212f549a(param_1);
  return;
}



undefined4 __thiscall FUN_213106ba(void *this,int *param_1,undefined4 *param_2)

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
    pcVar6 = &DAT_212f1470;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = (char)*piVar5 == *pcVar6;
      piVar5 = (int *)((int)piVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_213106e3;
LAB_213106fc:
    uVar4 = (int)this + 0x1c;
LAB_21310701:
    piVar5 = (int *)(-(uint)(this != (void *)0x0) & uVar4);
    (**(code **)(*piVar5 + 4))(piVar5);
    *param_2 = piVar5;
    uVar1 = 0;
  }
  else {
LAB_213106e3:
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
      if (bVar7) goto LAB_213106fc;
    }
    if (iVar3 == -0x20f4c2a0) {
      iVar3 = 0x10;
      bVar7 = true;
      piVar5 = param_1;
      pcVar6 = &DAT_212f4de0;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = (char)*piVar5 == *pcVar6;
        piVar5 = (int *)((int)piVar5 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        uVar4 = (int)this + 0x20;
        goto LAB_21310701;
      }
    }
    uVar1 = FUN_212f2005(this,param_1,param_2);
  }
  return uVar1;
}



int FUN_2131074a(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = FUN_21310b4d(param_1 + -0x1c);
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



int FUN_213107af(void *param_1,void *param_2,short param_3,undefined4 param_4,int param_5)

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
    if (iVar2 < 0) goto LAB_21310881;
    local_8 = local_20._8_4_;
    if (((int)local_20._8_4_ < 1) || (*(int *)((int)param_1 + 0x14) + 1 < (int)local_20._8_4_)) {
      iVar2 = -0x7ffdfff5;
      goto LAB_21310881;
    }
  }
  pvVar1 = param_1;
  iVar2 = FUN_21310b4d((int)param_1 + -0x1c);
  if (-1 < iVar2) {
    iVar2 = SafeArrayGetUBound(*(SAFEARRAY **)((int)pvVar1 + 0x10),1,&local_10);
    if (-1 < iVar2) {
      if (local_10 < *(int *)((int)pvVar1 + 0x14) + 1) {
        local_20._8_4_ = local_10 + 10;
        local_14 = 1;
        iVar2 = SafeArrayRedim(*(SAFEARRAY **)((int)pvVar1 + 0x10),(SAFEARRAYBOUND *)(local_20 + 8))
        ;
        if (iVar2 < 0) goto LAB_21310881;
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
LAB_21310881:
  VariantClear((VARIANTARG *)&param_3);
  return iVar2;
}



HRESULT FUN_213108d6(int param_1)

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



int FUN_213108f7(int param_1)

{
  LONG *rgIndices;
  int iVar1;
  VARIANTARG local_20;
  int local_10;
  void *local_c;
  int local_8;
  
  iVar1 = param_1;
  local_8 = FUN_21310b4d(param_1 + -0x1c);
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



int FUN_213109b8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int extraout_EAX;
  HRESULT HVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  *param_2 = 0;
  iVar1 = FUN_21310b4d(param_1 + -0x1c);
  if (-1 < iVar1) {
    HVar2 = FUN_21310bf4(*(SAFEARRAY **)(param_1 + 0x10),*(int *)(param_1 + 0x14),&local_8);
    iVar1 = extraout_EAX;
    if (-1 < extraout_EAX) {
      iVar1 = (**(code **)*local_8)(local_8,&DAT_212f4c10,HVar2);
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



uint __thiscall FUN_21310a29(void *this,int *param_1)

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
  uVar1 = FUN_21311158();
  if (uVar1 == 0) {
    (**(code **)(*(int *)((int)this + 0x1c) + 0x28))((int)this + 0x1c);
    local_8 = FUN_2130e923(0xf,local_34);
    if (-1 < (int)local_8) {
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_34,&local_20);
      if (iVar2 < 0) {
        local_8 = FUN_2130dbd4(*(int **)((int)this + 0x28),0x1cd,*(int **)((int)this + 0x24));
      }
      else {
        if ((local_20.tymed != 1) || (local_20.u.hBitmap == (HBITMAP)0x0)) {
          return 0x8000ffff;
        }
        local_c = 1;
        iVar2 = FUN_21311158();
        if (iVar2 == 0) {
          local_14 = (int *)(*DAT_21317780)(local_20.u.hBitmap,0xffffffff,0,0);
          param_1 = (int *)0x0;
          if (local_14 != (int *)0x0) {
            while( true ) {
              iVar2 = (*DAT_21317780)(local_20.u.hBitmap,param_1,0,0);
              lpMem = (LPCSTR)HeapAlloc(DAT_21314020,0,iVar2 + 1U);
              if (lpMem == (LPCSTR)0x0) break;
              (*DAT_21317780)(local_20.u.hBitmap,param_1,lpMem,iVar2 + 1U);
              local_8 = FUN_21310b8d(local_10,lpMem);
              HeapFree(DAT_21314020,0,lpMem);
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
    local_8 = FUN_213111f5(uVar1);
  }
  return local_8;
}



int __fastcall FUN_21310b4d(int param_1)

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



undefined4 __thiscall FUN_21310b8d(void *this,LPCSTR param_1)

{
  LPWSTR bstrString;
  undefined4 uVar1;
  _union_2683 local_14;
  
  bstrString = FUN_212f1d12(param_1,(BSTR)0x0);
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



HRESULT __cdecl FUN_21310bf4(SAFEARRAY *param_1,int param_2,undefined4 *param_3)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  int *this;
  HRESULT HVar3;
  HRESULT unaff_EBX;
  
  pvVar1 = DAT_21314020;
  *param_3 = 0;
  puVar2 = (undefined4 *)FUN_212f15e6(0x18,pvVar1);
  if (puVar2 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = (int *)FUN_21310c58(puVar2);
  }
  if (this != (int *)0x0) {
    (**(code **)(*this + 4))(this);
    HVar3 = FUN_21310cb4(this,param_1,param_2);
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



void __fastcall FUN_21310c58(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21302628;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  return;
}



undefined4 * __thiscall FUN_21310c6f(void *this,byte param_1)

{
  FUN_21310c97((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21314020,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21310c97(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21302628;
  if ((SAFEARRAY *)param_1[5] != (SAFEARRAY *)0x0) {
    SafeArrayDestroy((SAFEARRAY *)param_1[5]);
  }
  param_1[5] = 0;
  return;
}



HRESULT __thiscall FUN_21310cb4(void *this,SAFEARRAY *param_1,int param_2)

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



undefined4 FUN_21310d36(int *param_1,char *param_2,undefined4 *param_3)

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



uint FUN_21310da9(int param_1,uint param_2,VARIANTARG *param_3,uint *param_4)

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

undefined4 * FUN_21310e88(int param_1,undefined4 *param_2)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 *puVar3;
  int *this;
  
  pvVar2 = DAT_21314020;
  *param_2 = 0;
  puVar3 = (undefined4 *)FUN_212f15e6(0x18,pvVar2);
  if (puVar3 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = (int *)FUN_21310c58(puVar3);
  }
  if (this == (int *)0x0) {
    param_2 = (undefined4 *)0x8007000e;
    puVar3 = param_2;
  }
  else {
    (**(code **)(*this + 4))(this);
    puVar3 = (undefined4 *)FUN_21310cb4(this,*(SAFEARRAY **)(param_1 + 0x14),*(int *)(param_1 + 8));
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



uint __cdecl FUN_21311064(undefined4 param_1,undefined4 param_2)

{
  LPVOID this;
  undefined4 *puVar1;
  
  this = FUN_212f15e6(0x40,DAT_21314020);
  if (this == (LPVOID)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_213098f3(this,(undefined4 *)&DAT_213028e0,param_1,0x14,param_2,&LAB_213110a0);
  }
  return -(uint)(puVar1 != (undefined4 *)0x0) & (uint)(puVar1 + 5);
}



void __cdecl FUN_213110b2(undefined2 *param_1,undefined2 *param_2)

{
  SIZE_T *pSVar1;
  
  pSVar1 = *(SIZE_T **)(param_2 + 2);
  *param_1 = *param_2;
  pSVar1 = FUN_213110e3(pSVar1);
  *(SIZE_T **)(param_1 + 2) = pSVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



SIZE_T * __cdecl FUN_213110e3(SIZE_T *param_1)

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



LPSTR __cdecl FUN_21311112(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == (LPCWSTR)0x0) {
    param_2 = (LPCWSTR)&DAT_21316f14;
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



void FUN_21311158(void)

{
  FUN_21311176("SHELL32.DLL",(int *)&DAT_21317798,0x30,1,3,&PTR_s_DragFinish_213176a0);
  return;
}



undefined4 __cdecl
FUN_21311176(LPCSTR param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (*param_2 == 0) {
    hModule = LoadLibraryA(param_1);
    if (hModule == (HMODULE)0x0) {
LAB_213111de:
      if (hModule != (HMODULE)0x0) {
        FreeLibrary(hModule);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      return param_3;
    }
    param_1 = (LPCSTR)0x0;
    if (param_5 != 0) {
      do {
        pFVar1 = GetProcAddress(hModule,(LPCSTR)*param_6);
        *(FARPROC *)param_6[1] = pFVar1;
        if (pFVar1 == (FARPROC)0x0) goto LAB_213111de;
        param_1 = param_1 + 1;
        param_6 = param_6 + 2;
      } while (param_1 < param_5);
    }
    *param_2 = (int)hModule;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  return 0;
}



uint __cdecl FUN_213111f5(uint param_1)

{
  if (param_1 == 0) {
    return 0x80004005;
  }
  if (param_1 != 7) {
    return param_1 | 0x800a0000;
  }
  return 0x8007000e;
}



void FUN_21311214(void)

{
  HDC hdc;
  
  if (DAT_21317794 == 0) {
    hdc = GetDC((HWND)0x0);
    DAT_21317790 = GetDeviceCaps(hdc,0xe);
    DAT_21317770 = GetDeviceCaps(hdc,0x68);
    DAT_21317774 = GetDeviceCaps(hdc,0xc);
    DAT_21317794 = 1;
    DAT_21317784 = (uint)(DAT_21317770 != 0);
    DAT_21317788 = GetStockObject(0xf);
    ReleaseDC((HWND)0x0,hdc);
  }
  return;
}



HGLOBAL __cdecl FUN_21311280(HBITMAP param_1,HPALETTE param_2)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_21317794 == 0) {
    FUN_21311214();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (param_1 == (HBITMAP)0x0) {
    return (HGLOBAL)0x0;
  }
  GetObjectA(param_1,0x18,local_38);
  if (DAT_21317784 != 0) {
    if (param_2 == (HPALETTE)0x0) {
      param_2 = DAT_21317788;
    }
    if (((DAT_21317770 == 0x100) && ((uint)local_28 * (uint)uStack_26 == 8)) &&
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
  local_1c = (BYTE *)FUN_213116a1((int *)local_60);
  local_10 = GlobalAlloc(0x42,(int)&((HBITMAP)(local_1c + 0x28))->unused + local_4c);
  if (local_10 == (HGLOBAL)0x0) {
    return (HGLOBAL)0x0;
  }
  ptVar2 = (LPBITMAPINFO)GlobalLock(local_10);
  local_14 = ptVar2;
  if (local_8 != 0) {
    local_18 = GlobalAlloc(0,local_60[0] + 0x400);
    if (local_18 == (HGLOBAL)0x0) goto LAB_213113a2;
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
  if (DAT_21317784 != 0) {
    param_2 = SelectPalette(hdc,param_2,1);
    RealizePalette(hdc);
  }
  local_1c = &local_14->bmiColors[0].rgbBlue + (int)((HBITMAP)(local_1c + 0x28) + -10);
  iVar3 = GetDIBits(hdc,param_1,0,local_58,local_1c,local_c,(uint)(local_8 != 0));
  uVar7 = (uint)(iVar3 != 0);
  local_20 = uVar7;
  if (DAT_21317784 != 0) {
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
      iVar3 = FUN_213116a1((int *)local_14);
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
LAB_213113a2:
  GlobalFree(local_10);
  return (HGLOBAL)0x0;
}



HBITMAP __cdecl FUN_213114e7(BITMAPINFOHEADER *param_1,undefined4 *param_2)

{
  HDC hdc;
  int iVar1;
  HBITMAP pHVar2;
  HPALETTE hPal;
  HPALETTE local_4;
  
  hPal = (HPALETTE)0x0;
  local_4 = (HPALETTE)0x0;
  hdc = GetDC((HWND)0x0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_21317794 == 0) {
    FUN_21311214();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_21317784 != 0) {
    hPal = FUN_213116bc((int *)param_1);
    if (hPal != (HPALETTE)0x0) {
      local_4 = SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
  }
  iVar1 = FUN_213116a1((int *)param_1);
  pHVar2 = CreateDIBitmap(hdc,param_1,4,(void *)((int)&param_1->biSize + iVar1 + param_1->biSize),
                          (BITMAPINFO *)param_1,0);
  if (DAT_21317784 != 0) {
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



undefined4 __cdecl FUN_213115aa(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  HGLOBAL hMem;
  BITMAPINFOHEADER *pBVar2;
  HBITMAP pHVar3;
  undefined4 **ppuVar4;
  
  puVar1 = param_1;
  if ((HPALETTE)*param_2 == (HPALETTE)0x0) {
    pHVar3 = FUN_2131161c((HBITMAP)*param_1);
    if (pHVar3 != (HBITMAP)0x0) {
      *puVar1 = pHVar3;
      return 0;
    }
  }
  else {
    hMem = FUN_21311280((HBITMAP)*param_1,(HPALETTE)*param_2);
    if (hMem != (HGLOBAL)0x0) {
      ppuVar4 = &param_1;
      pBVar2 = (BITMAPINFOHEADER *)GlobalLock(hMem);
      pHVar3 = FUN_213114e7(pBVar2,ppuVar4);
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



HBITMAP __cdecl FUN_2131161c(HBITMAP param_1)

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



int __cdecl FUN_213116a1(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_2131189c(param_1);
  if (*param_1 == 0xc) {
    return iVar1 * 3;
  }
  return iVar1 << 2;
}



HPALETTE __cdecl FUN_213116bc(int *param_1)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (DAT_21317794 == 0) {
    FUN_21311214();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  if (param_1 != (int *)0x0) {
    uVar3 = FUN_2131189c(param_1);
    if (uVar3 == 0) {
      pHVar8 = FUN_213118d4();
      return pHVar8;
    }
    bVar9 = uVar3 < 0x11;
    plpal = (LOGPALETTE *)HeapAlloc(DAT_21314020,0,DAT_21317770 * 4 + 8);
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
        puVar5 = &DAT_21302688;
        do {
          if (&UNK_213026c7 < puVar5) break;
          bVar10 = (uint)CONCAT21(CONCAT11(*pBVar4,pBVar4[1]),pBVar4[2]) == *puVar5;
          if (bVar10) {
            if (((uint)param_1 & local_8) != 0) goto LAB_213117e4;
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
LAB_213117e4:
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
            if (DAT_21317770 <= (int)uVar3) break;
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
      HeapFree(DAT_21314020,0,plpal);
      return pHVar8;
    }
  }
  return (HPALETTE)0x0;
}



int __cdecl FUN_2131189c(int *param_1)

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



HPALETTE FUN_213118d4(void)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  pHVar3 = DAT_21317778;
  if (DAT_21317778 == (HPALETTE)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
    plpal = (LOGPALETTE *)HeapAlloc(DAT_21314020,0,0x408);
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
          BVar1 = (&DAT_213026c8)[uVar9];
          uVar5 = 0;
          pBVar7 = local_c + 0x18;
          do {
            ((PALETTEENTRY *)(local_c + -1))->peRed = (&DAT_213026c8)[local_14];
            BVar2 = (&DAT_213026c8)[uVar5];
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
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      pHVar3 = CreatePalette(plpal);
      DAT_21317778 = pHVar3;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
      HeapFree(DAT_21314020,0,plpal);
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21314008);
  }
  return pHVar3;
}



HBITMAP __cdecl FUN_21311a8d(HBITMAP param_1,int param_2,int param_3)

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
      FUN_21311bbb(&pHVar1->unused,&local_18,&local_14);
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



void __cdecl FUN_21311bbb(int *param_1,int *param_2,undefined4 *param_3)

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
    iVar3 = FUN_213064d6((int)param_2);
    *piVar1 = iVar3;
    uVar4 = FUN_213064fa(param_3);
    *puVar2 = uVar4;
  }
  return;
}


