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

typedef struct _COMMPROP _COMMPROP, *P_COMMPROP;

typedef struct _COMMPROP *LPCOMMPROP;

typedef wchar_t WCHAR;

struct _COMMPROP {
    WORD wPacketLength;
    WORD wPacketVersion;
    DWORD dwServiceMask;
    DWORD dwReserved1;
    DWORD dwMaxTxQueue;
    DWORD dwMaxRxQueue;
    DWORD dwMaxBaud;
    DWORD dwProvSubType;
    DWORD dwProvCapabilities;
    DWORD dwSettableParams;
    DWORD dwSettableBaud;
    WORD wSettableData;
    WORD wSettableStopParity;
    DWORD dwCurrentTxQueue;
    DWORD dwCurrentRxQueue;
    DWORD dwProvSpec1;
    DWORD dwProvSpec2;
    WCHAR wcProvChar[1];
};

typedef struct _COMMTIMEOUTS _COMMTIMEOUTS, *P_COMMTIMEOUTS;

struct _COMMTIMEOUTS {
    DWORD ReadIntervalTimeout;
    DWORD ReadTotalTimeoutMultiplier;
    DWORD ReadTotalTimeoutConstant;
    DWORD WriteTotalTimeoutMultiplier;
    DWORD WriteTotalTimeoutConstant;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _COMSTAT _COMSTAT, *P_COMSTAT;

struct _COMSTAT {
    DWORD fCtsHold:1;
    DWORD fDsrHold:1;
    DWORD fRlsdHold:1;
    DWORD fXoffHold:1;
    DWORD fXoffSent:1;
    DWORD fEof:1;
    DWORD fTxim:1;
    DWORD fReserved:25;
    DWORD cbInQue;
    DWORD cbOutQue;
};

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

typedef struct _DCB _DCB, *P_DCB;

struct _DCB {
    DWORD DCBlength;
    DWORD BaudRate;
    DWORD fBinary:1;
    DWORD fParity:1;
    DWORD fOutxCtsFlow:1;
    DWORD fOutxDsrFlow:1;
    DWORD fDtrControl:2;
    DWORD fDsrSensitivity:1;
    DWORD fTXContinueOnXoff:1;
    DWORD fOutX:1;
    DWORD fInX:1;
    DWORD fErrorChar:1;
    DWORD fNull:1;
    DWORD fRtsControl:2;
    DWORD fAbortOnError:1;
    DWORD fDummy2:17;
    WORD wReserved;
    WORD XonLim;
    WORD XoffLim;
    BYTE ByteSize;
    BYTE Parity;
    BYTE StopBits;
    char XonChar;
    char XoffChar;
    char ErrorChar;
    char EofChar;
    char EvtChar;
    WORD wReserved1;
};

typedef struct _COMMTIMEOUTS *LPCOMMTIMEOUTS;

typedef struct _DCB *LPDCB;

typedef struct _COMSTAT *LPCOMSTAT;

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

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

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

typedef STGMEDIUM *LPSTGMEDIUM;

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

typedef enum tagREGKIND {
    REGKIND_DEFAULT=0,
    REGKIND_REGISTER=1,
    REGKIND_NONE=2
} tagREGKIND;

typedef enum tagREGKIND REGKIND;

typedef struct IUnknown *LPUNKNOWN;



uint DAT_21c2000c;
undefined DAT_21c20010;
undefined DAT_21c20034;
HANDLE DAT_21c20030;
HMODULE DAT_21c20008;
undefined DAT_21c20000;
HMODULE DAT_21c20004;
HMODULE DAT_21c20038;
undefined DAT_21c20018;
int *DAT_21c2016c;
int DAT_21c20168;
undefined *PTR_LAB_21c11500;
undefined4 DAT_21c20168;
undefined2 DAT_21c20130;
HWND DAT_21c20178;
char DAT_21c20174;
HINSTANCE DAT_21c20008;
string s_CtlFrameWork_Parking_21c20718;
short DAT_21c20170;
HMODULE DAT_21c2017c;
undefined DAT_21c20040;
short DAT_21c20130;
pointer PTR_PTR_21c20134;
string s_Licenses_21c20190;
undefined *PTR_LAB_21c13048;
undefined *PTR_LAB_21c13060;
undefined *PTR_LAB_21c13090;
undefined *PTR_LAB_21c130a8;
undefined *PTR_LAB_21c130b8;
undefined *PTR_LAB_21c130c8;
undefined *PTR_LAB_21c130e0;
undefined *PTR_LAB_21c130f8;
undefined *PTR_LAB_21c13108;
undefined *PTR_LAB_21c13118;
undefined *PTR_LAB_21c13140;
undefined *PTR_LAB_21c13168;
undefined *PTR_LAB_21c13188;
undefined *PTR_LAB_21c131c8;
undefined *PTR_LAB_21c131f0;
undefined *PTR_LAB_21c13220;
undefined *PTR_LAB_21c13240;
undefined *PTR_LAB_21c132a0;
undefined *PTR_FUN_21c132b8;
undefined *PTR_LAB_21c13340;
undefined *PTR_LAB_21c13450;
undefined *PTR_LAB_21c13468;
undefined *PTR_LAB_21c13498;
undefined *PTR_LAB_21c134b0;
undefined *PTR_LAB_21c134c0;
undefined *PTR_LAB_21c135d0;
undefined *PTR_LAB_21c135e0;
undefined *PTR_LAB_21c135f8;
undefined *PTR_LAB_21c13610;
undefined *PTR_LAB_21c13620;
undefined *PTR_LAB_21c13630;
undefined *PTR_LAB_21c13658;
undefined *PTR_LAB_21c13680;
undefined *PTR_LAB_21c136a0;
undefined *PTR_LAB_21c136e0;
undefined *PTR_LAB_21c13708;
undefined *PTR_LAB_21c13738;
undefined *PTR_LAB_21c13758;
undefined *PTR_LAB_21c137b8;
undefined *PTR_FUN_21c137d0;
undefined *PTR_LAB_21c13858;
undefined *PTR_LAB_21c13868;
undefined *PTR_LAB_21c13880;
undefined *PTR_LAB_21c13898;
undefined *PTR_LAB_21c138a8;
undefined *PTR_LAB_21c138b8;
undefined *PTR_LAB_21c138e0;
undefined *PTR_LAB_21c13908;
undefined *PTR_LAB_21c13928;
undefined *PTR_LAB_21c13968;
undefined *PTR_LAB_21c13990;
undefined *PTR_LAB_21c139c0;
undefined *PTR_LAB_21c139e0;
undefined *PTR_LAB_21c13a40;
undefined *PTR_FUN_21c13a58;
undefined *PTR_LAB_21c13a90;
undefined *PTR_LAB_21c13aa8;
undefined *PTR_FUN_21c13ac8;
undefined *PTR_FUN_21c13b00;
pointer PTR_FUN_21c13b18;
pointer PTR_DAT_21c201a0;
pointer PTR_DAT_21c201d0;
pointer PTR_DAT_21c201f0;
undefined DAT_21c16f59;
undefined1 DAT_21c11418;
undefined4 DAT_21c13b78;
undefined4 DAT_21c13b68;
undefined4 DAT_21c13b88;
undefined1 DAT_21c13bb8;
undefined1 DAT_21c17248;
undefined1 DAT_21c13ba8;
undefined1 DAT_21c17238;
undefined1 DAT_21c13bc8;
undefined1 DAT_21c13bd8;
undefined1 DAT_21c17268;
undefined1 DAT_21c17278;
uint DAT_21c20220;
undefined2 DAT_21c20224;
undefined1 DAT_21c13cd0;
undefined4 DAT_21c17338;
int DAT_21c20228;
int DAT_21c2022c;
char DAT_21c20230;
undefined1 DAT_21c13c48;
string s_%u\%s.dll_21c2024c;
HINSTANCE DAT_21c20004;
LCID DAT_21c20220;
int DAT_21c20258;
string s_%s%s.DLL_21c20234;
string s_%s%s.DLL_21c20240;
undefined DAT_21c13c60;
unicode u__ExtentX_21c20580;
unicode u__ExtentY_21c20594;
undefined *PTR_u_CommPort_21c20418;
VARTYPE DAT_21c205cc;
undefined *PTR_u_Settings_21c205c0;
undefined4 DAT_21c20428;
int DAT_21c20180;
undefined4 DAT_21c20188;
undefined *PTR_DAT_21c205e8;
pointer PTR_FUN_21c15908;
undefined FUN_21c14667;
ATOM DAT_21c20170;
undefined FUN_21c1482d;
pointer PTR_LAB_21c15920;
pointer PTR_s_256000_21c205f0;
unicode u__ExtentX_21c20678;
unicode u__ExtentY_21c2068c;
undefined4 DAT_21c20008;
undefined1 DAT_21c17110;
undefined1 DAT_21c17258;
LCID DAT_21c20c68;
undefined *PTR_PTR_21c20134;
undefined FUN_21c1b8b3;
pointer PTR_u_CommPort_21c20a80;
undefined *PTR_LAB_21c16e48;
undefined *PTR_FUN_21c16e88;
undefined *PTR_LAB_21c17068;
undefined *PTR_FUN_21c170a8;
undefined DAT_21c16e08;
undefined DAT_21c20220;
undefined *PTR_LAB_21c16ea0;
undefined *PTR_FUN_21c16ee0;
undefined *PTR_LAB_21c16ef8;
undefined *PTR_FUN_21c16f38;
undefined DAT_21c20a70;
undefined DAT_21c171e8;
int DAT_21c20c70;
undefined DAT_21c171f8;
undefined DAT_21c209ee;
int DAT_21c20c60;
undefined DAT_21c2072e;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_21c20730;
undefined DAT_21c209f4;
string s_CLSID\%s_21c20764;
string s_%s_Object_21c20770;
string s_InprocServer32_21c2077c;
string s_Apartment_21c2078c;
string s_ThreadingModel_21c20798;
string s_ThreadingModel_21c207a8;
undefined DAT_21c209f0;
undefined LAB_21c17208;
undefined DAT_21c17218;
undefined DAT_21c17228;
undefined DAT_21c207b8;
string s_%s_Object_21c207bc;
string s_CLSID_21c207c8;
string s_CurVer_21c207d0;
string s_%s.%s.%ld_21c207d8;
string s_%s_Object_21c207e4;
string s_CLSID_21c207f0;
string s_CLSID\%s_21c207f8;
string s_VersionIndependentProgID_21c20804;
string s_%s.%s_21c20820;
string s_ProgID_21c20828;
string s_%s.%s.%ld_21c20830;
string s_TypeLib_21c2083c;
string s_Version_21c20844;
string s_%ld.%ld_21c2084c;
undefined DAT_21c209f8;
undefined DAT_21c209fc;
undefined DAT_21c20a00;
undefined DAT_21c20a04;
undefined DAT_21c20a08;
undefined DAT_21c20a0c;
undefined DAT_21c20a10;
undefined DAT_21c20a14;
undefined DAT_21c20a18;
undefined DAT_21c20a1c;
string s_CLSID\%s_21c20854;
string s_Control_21c20860;
string s_MiscStatus_21c20868;
undefined DAT_21c20874;
undefined DAT_21c20878;
undefined DAT_21c2087c;
string s_ToolboxBitmap32_21c20884;
undefined DAT_21c20a20;
undefined DAT_21c20a24;
undefined DAT_21c20a28;
undefined DAT_21c20a2c;
pointer PTR_DAT_21c20a58;
string s_CLSID_21c20894;
string s_\InprocServer32_21c2089c;
string s_%s.%s.%ld_21c208ac;
string s_%s.%s_21c208b8;
string s_%s.%s\CurVer_21c208c0;
string s_%s.%s.%ld_21c208d0;
undefined DAT_21c20a30;
string s_%s.%s.%ld_21c208dc;
undefined DAT_21c20a34;
string s_%s.%s.%ld_21c208e8;
string s_%s.%s_21c208f4;
undefined DAT_21c20a38;
undefined DAT_21c20a3c;
undefined4 DAT_21c208fc;
undefined2 DAT_21c20900;
string s_CLSID\%s_21c20904;
string s_Implemented_Categories_21c20910;
undefined DAT_21c20a40;
string s_%s\InprocServer_21c20928;
undefined DAT_21c20938;
FARPROC DAT_21c20c7c;
string s_VERSION.DLL_21c2093c;
string s_GetFileVersionInfoSizeA_21c20948;
FARPROC DAT_21c20c78;
string s_VERSION.DLL_21c20960;
string s_GetFileVersionInfoA_21c2096c;
FARPROC DAT_21c20c74;
string s_VERSION.DLL_21c20980;
string s_VerQueryValueA_21c2098c;
void *DAT_21c20c80;
int *DAT_21c20c80;
undefined1 DAT_21c158e8;
undefined DAT_21c16fe0;
undefined4 DAT_21c20220;
undefined4 DAT_21c16ff0;
undefined DAT_21c172f8;
undefined LAB_21c1e5f0;
undefined DAT_21c17308;
undefined DAT_21c17318;
undefined DAT_21c17328;
string s_DISPLAY_21c2099c;
undefined *PTR_LAB_21c170c0;
undefined1 DAT_21c17388;
undefined1 DAT_21c17378;
undefined DAT_21c209a4;
undefined DAT_21c209a8;
undefined DAT_21c209ac;
undefined DAT_21c209b0;
string s_>LangRef_21c209b4;
int DAT_21c20c84;
undefined FUN_21c1e2a6;
int *DAT_21c20c84;
short DAT_21c20224;
undefined4 DAT_21c2016c;
undefined DAT_21c17178;
undefined DAT_21c17188;
undefined DAT_21c17198;
undefined FUN_21c1bb72;
WNDPROC DAT_21c20c64;
undefined FUN_21c1e74b;
string s_CtlFrameWork_Parking_21c209c0;
string s_CtlFrameWork_Parking_21c209d8;
undefined *PTR_FUN_21c17120;
undefined *PTR_LAB_21c17138;
undefined *PTR_LAB_21c17158;
HMODULE DAT_21c20a44;
int DAT_21c20a4c;
FARPROC DAT_21c20c88;
int DAT_21c2000c;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(HMODULE param_1,int param_2)

{
  DWORD DVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    FUN_21c11565();
    FUN_21c115bd();
    if ((DAT_21c20004 != (HMODULE)0x0) && (DAT_21c20004 != DAT_21c20008)) {
      FreeLibrary(DAT_21c20004);
    }
    if (DAT_21c20038 != (HMODULE)0x0) {
      FreeLibrary(DAT_21c20038);
      DAT_21c20038 = (HMODULE)0x0;
    }
  }
  else if (param_2 == 1) {
    DVar1 = GetVersion();
    bVar2 = 0x7fffffff < DVar1;
    if (bVar2) {
      _DAT_21c20034 = 1;
    }
    else {
      _DAT_21c20034 = (uint)(0x333 < CONCAT11((char)DVar1,(char)(DVar1 >> 8)));
    }
    _DAT_21c20010 = (uint)bVar2;
    DAT_21c2000c = (uint)!bVar2;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    if ((DAT_21c20030 == (HANDLE)0x0) &&
       (DAT_21c20030 = GetProcessHeap(), DAT_21c20030 == (HANDLE)0x0)) {
      return 0;
    }
    DAT_21c20008 = param_1;
    DisableThreadLibraryCalls(param_1);
    _DAT_21c20000 = GetSystemMetrics(0x2a);
    FUN_21c11607();
    return 1;
  }
  return 1;
}



undefined4 FUN_21c1139e(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  uVar2 = param_1[1];
  if (*piVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_21c11539(param_1);
      FUN_21c1154b(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x1520  1  DllCanUnloadNow
  if (DAT_21c2016c != (int *)0x0) {
    (**(code **)(*DAT_21c2016c + 8))(DAT_21c2016c);
    DAT_21c2016c = (int *)0x0;
  }
  return (uint)(DAT_21c20168 != 0);
}



void __fastcall FUN_21c11539(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_21c11500;
  InterlockedDecrement(&DAT_21c20168);
  return;
}



void __cdecl FUN_21c1154b(LPVOID param_1)

{
  if (param_1 != (LPVOID)0x0) {
    HeapFree(DAT_21c20030,0,param_1);
  }
  return;
}



void FUN_21c11565(void)

{
  short *psVar1;
  
  if (DAT_21c20130 != -1) {
    psVar1 = &DAT_21c20130;
    do {
      if ((*psVar1 == 2) && (*(short *)(*(int *)(psVar1 + 2) + 0x48) != 0)) {
        FUN_21c1631f();
        return;
      }
      psVar1 = psVar1 + 4;
    } while (*psVar1 != -1);
  }
  if (DAT_21c20178 != (HWND)0x0) {
    DestroyWindow(DAT_21c20178);
    DAT_21c20178 = (HWND)0x0;
    UnregisterClassA(s_CtlFrameWork_Parking_21c20718,DAT_21c20008);
  }
  if (DAT_21c20174 != '\0') {
    UnregisterClassA("CtlFrameWork_ReflectWindow",DAT_21c20008);
    DAT_21c20174 = '\0';
  }
  return;
}



void FUN_21c115bd(void)

{
  if (DAT_21c20170 != 0) {
    UnregisterClassA("MSCommHiddenWindow",DAT_21c20008);
  }
  if (((DAT_21c2017c != (HMODULE)0x0) && (DAT_21c2017c != DAT_21c20004)) &&
     (DAT_21c2017c != DAT_21c20008)) {
    FreeLibrary(DAT_21c2017c);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_21c20040);
  return;
}



void FUN_21c11607(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_21c20040);
  return;
}



HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  void *this;
  int *piVar2;
  HRESULT HVar3;
  
                    // 0x1613  2  DllGetClassObject
  if (ppv == (LPVOID *)0x0) {
    HVar3 = -0x7ff8ffa9;
  }
  else {
    iVar1 = FUN_21c11673((char *)rclsid);
    if (iVar1 == -1) {
      HVar3 = -0x7ffbfeef;
    }
    else {
      this = (void *)FUN_21c116ad(0xc);
      if (this == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = FUN_21c116c8(this,iVar1);
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



int __cdecl FUN_21c11673(char *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  iVar2 = 0;
  if (DAT_21c20130 != -1) {
    ppuVar4 = &PTR_PTR_21c20134;
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



void __cdecl FUN_21c116ad(SIZE_T param_1)

{
  if (DAT_21c20030 == (HANDLE)0x0) {
    DAT_21c20030 = GetProcessHeap();
    if (DAT_21c20030 == (HANDLE)0x0) {
      return;
    }
  }
  HeapAlloc(DAT_21c20030,0,param_1);
  return;
}



undefined4 * __thiscall FUN_21c116c8(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_21c11500;
  InterlockedIncrement(&DAT_21c20168);
  *(undefined4 *)((int)this + 4) = 1;
  return (undefined4 *)this;
}



undefined4 FUN_21c11758(void)

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
  FUN_21c1181e(local_108,(uint)local_8);
  WideCharToMultiByte(0,0,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB",-1,(LPSTR)local_108[0],
                      (int)local_8,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = local_108[0];
  iVar1 = lstrlenW(L"4250E830-6AC2-11cf-8ADB-00AA00C00905");
  cbMultiByte = iVar1 * 2 + 2;
  FUN_21c1181e(local_88,cbMultiByte);
  WideCharToMultiByte(0,0,L"4250E830-6AC2-11cf-8ADB-00AA00C00905",-1,(LPSTR)local_88[0],cbMultiByte,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  iVar1 = FUN_21c1185a(local_88[0]);
  if (iVar1 == 0) {
    iVar1 = FUN_21c1185a(local_8);
    if (iVar1 == 0) {
      uVar2 = 0;
      goto LAB_21c117ea;
    }
  }
  uVar2 = 1;
LAB_21c117ea:
  if ((local_88[0] != (HKEY)0x0) && ((local_c & 1) != 0)) {
    HeapFree(DAT_21c20030,0,local_88[0]);
  }
  if ((local_108[0] != (HKEY)0x0) && ((local_8c & 1) != 0)) {
    HeapFree(DAT_21c20030,0,local_108[0]);
  }
  return uVar2;
}



undefined4 * __thiscall FUN_21c1181e(void *this,uint param_1)

{
  undefined2 *puVar1;
  
  if (param_1 < 0x79) {
    puVar1 = (undefined2 *)((int)this + 4);
  }
  else {
    puVar1 = (undefined2 *)HeapAlloc(DAT_21c20030,0,param_1);
  }
  *(undefined2 **)this = puVar1;
  *(uint *)((int)this + 0x7c) = (uint)(0x78 < param_1) | *(uint *)((int)this + 0x7c) & 0xfffffffe;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return (undefined4 *)this;
}



undefined4 __cdecl FUN_21c1185a(HKEY param_1)

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
    LVar2 = RegOpenKeyA((HKEY)0x80000000,s_Licenses_21c20190,&local_c);
    if (LVar2 == 0) {
      if ((char)lpSubKey->unused != '\0') {
        LVar2 = RegOpenKeyA(local_c,(LPCSTR)lpSubKey,&param_1);
        if (LVar2 == 0) {
          bVar1 = FUN_21c118d3(param_1,(byte *)lpSubKey,local_d4);
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



bool __cdecl FUN_21c118d3(HKEY param_1,byte *param_2,char *param_3)

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
    FUN_21c1193f(param_2,param_3,local_d0);
    LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)local_d0,&local_8);
    if (LVar1 == 0) {
      iVar2 = lstrcmpA((LPCSTR)local_d0,param_3);
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



void __cdecl FUN_21c1193f(byte *param_1,char *param_2,byte *param_3)

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



int __cdecl FUN_21c119e7(int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*(code **)((&PTR_PTR_21c20134)[param_2 * 2] + 0x14) == (code *)0x0) ||
     (iVar2 = (**(code **)((&PTR_PTR_21c20134)[param_2 * 2] + 0x14))(), -1 < iVar2)) {
    if (*(code **)((&PTR_PTR_21c20134)[param_2 * 2] + 0x10) == (code *)0x0) {
      iVar2 = -0x7fffbffb;
    }
    else {
      piVar1 = (int *)(**(code **)((&PTR_PTR_21c20134)[param_2 * 2] + 0x10))(param_1);
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



LPVOID __cdecl FUN_21c11a73(SIZE_T param_1,HANDLE param_2)

{
  LPVOID pvVar1;
  
  if ((param_2 == (HANDLE)0x0) && (param_2 = GetProcessHeap(), param_2 == (HANDLE)0x0)) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(param_2,0,param_1);
  return pvVar1;
}



undefined4 * __thiscall FUN_21c11a8f(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0xc0);
  FUN_21c11bdb(this,param_1,0,-(uint)(this != (void *)0x0) & (uint)puVar1);
  *puVar1 = &PTR_LAB_21c134c0;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_21c134b0;
  *(undefined ***)((int)this + 200) = &PTR_LAB_21c13498;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_21c13468;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_21c13450;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *puVar1 = &PTR_LAB_21c13340;
  *(undefined ***)this = &PTR_FUN_21c132b8;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_21c132a0;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_21c13240;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_21c13220;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_21c131f0;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_21c131c8;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_21c13188;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_21c13168;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_21c13140;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_21c13118;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_21c13108;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_21c130f8;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_21c130e0;
  *(undefined ***)((int)this + 100) = &PTR_LAB_21c130c8;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_21c130b8;
  *(undefined ***)((int)this + 0xc4) = &PTR_LAB_21c130a8;
  *(undefined ***)((int)this + 200) = &PTR_LAB_21c13090;
  *(undefined ***)((int)this + 0xcc) = &PTR_LAB_21c13060;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_21c13048;
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
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x284));
  FUN_21c11de6(this);
  iVar2 = GetSystemMetrics(0xb);
  *(int *)((int)this + 0x88) = iVar2 + 6;
  iVar2 = GetSystemMetrics(0xc);
  *(int *)((int)this + 0x8c) = iVar2 + 6;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_21c11bdb(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_21c11d32(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_21c139e0;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_21c139c0;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_21c13990;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_21c13968;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_21c13928;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_21c13908;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_21c138e0;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_21c138b8;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_21c138a8;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_21c13898;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_21c13880;
  *(undefined ***)((int)this + 100) = &PTR_LAB_21c13868;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_21c13858;
  *(undefined ***)this = &PTR_FUN_21c137d0;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_21c137b8;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_21c13758;
  *(undefined ***)((int)this + 0x3c) = &PTR_LAB_21c13738;
  *(undefined ***)((int)this + 0x40) = &PTR_LAB_21c13708;
  *(undefined ***)((int)this + 0x44) = &PTR_LAB_21c136e0;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_21c136a0;
  *(undefined ***)((int)this + 0x4c) = &PTR_LAB_21c13680;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_21c13658;
  *(undefined ***)((int)this + 0x54) = &PTR_LAB_21c13630;
  *(undefined ***)((int)this + 0x58) = &PTR_LAB_21c13620;
  *(undefined ***)((int)this + 0x5c) = &PTR_LAB_21c13610;
  *(undefined ***)((int)this + 0x60) = &PTR_LAB_21c135f8;
  *(undefined ***)((int)this + 100) = &PTR_LAB_21c135e0;
  *(undefined ***)((int)this + 0x68) = &PTR_LAB_21c135d0;
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
  *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xffffff21 | 1;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_21c11d32(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_21c11d82(this,param_1,param_2,param_3);
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_21c13a90;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_21c13aa8;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  *(undefined ***)((int)this + 0x2c) = &PTR_LAB_21c13aa8;
  *(undefined1 *)((int)this + 0x34) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined ***)this = &PTR_FUN_21c13a58;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_21c13a40;
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_21c11d82(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_21c11da9(this,param_1,param_3);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined ***)this = &PTR_FUN_21c13ac8;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21c11da9(void *this,undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)((int)this + 0xc);
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_21c13b18;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined ***)this = &PTR_FUN_21c13b00;
  InterlockedIncrement(&DAT_21c20168);
  return (undefined4 *)this;
}



void __fastcall FUN_21c11de6(void *param_1)

{
  if (*(int *)((int)param_1 + 0xd8) != -1) {
    FUN_21c149af((int)param_1);
  }
  *(undefined4 *)((int)param_1 + 0x11c) = 0;
  *(undefined4 *)((int)param_1 + 0x120) = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined4 *)((int)param_1 + 0xf0) = 0;
  *(undefined2 *)((int)param_1 + 0xf8) = 0;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  *(undefined2 *)((int)param_1 + 0x110) = 0;
  *(undefined4 *)((int)param_1 + 0x114) = 0;
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  *(undefined4 *)((int)param_1 + 0xd4) = 0;
  *(undefined4 *)((int)param_1 + 0x238) = 0;
  *(undefined4 *)((int)param_1 + 0x244) = 0;
  *(undefined4 *)((int)param_1 + 0x24c) = 0;
  *(undefined4 *)((int)param_1 + 300) = 0;
  *(undefined4 *)((int)param_1 + 0x130) = 0;
  *(undefined2 *)((int)param_1 + 0xe0) = 1;
  *(undefined4 *)((int)param_1 + 0xe4) = 1;
  *(undefined4 *)((int)param_1 + 0x128) = 1000;
  *(undefined2 *)((int)param_1 + 0xec) = 0x400;
  *(undefined2 *)((int)param_1 + 0xf4) = 0x200;
  *(undefined1 *)((int)param_1 + 0xf6) = 0x3f;
  *(undefined4 *)((int)param_1 + 0x100) = 0x2580;
  *(undefined4 *)((int)param_1 + 0x108) = 8;
  FUN_21c11eca(param_1,(LPSTR)((int)param_1 + 0x138));
  return;
}



undefined4 __thiscall FUN_21c11eca(void *this,LPSTR param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  CHAR local_104 [256];
  
  wsprintfA(local_104,"%d",*(undefined4 *)((int)this + 0x100));
  puVar1 = FUN_21c11f49((int *)&PTR_DAT_21c201d0,*(int *)((int)this + 0x10c));
  puVar2 = FUN_21c11f49((int *)&PTR_DAT_21c201a0,*(int *)((int)this + 0x108));
  puVar3 = FUN_21c11f49((int *)&PTR_DAT_21c201f0,*(int *)((int)this + 0x104));
  wsprintfA(param_1,"%s,%s,%s,%s",local_104,puVar3,puVar2,puVar1);
  return 0;
}



undefined * FUN_21c11f49(int *param_1,int param_2)

{
  while( true ) {
    if (*param_1 == 0) {
      return &DAT_21c16f59;
    }
    if (param_1[1] == param_2) break;
    param_1 = param_1 + 2;
  }
  return (undefined *)*param_1;
}



undefined4 FUN_21c11f69(int param_1,int *param_2,int *param_3)

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



int FUN_21c11faf(int param_1)

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



undefined4 __thiscall FUN_21c11fec(void *this,uint *param_1,int *param_2)

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
  if (uVar2 == 0xe6e17e90) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = &DAT_21c11418;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) goto LAB_21c1200b;
LAB_21c15af7:
    uVar2 = (int)this + 0xc0;
LAB_21c12063:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & uVar2);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = (int)piVar4;
    return 0;
  }
LAB_21c1200b:
  if (uVar2 == 0x4d07fc10) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_21c13b78;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 200;
      goto LAB_21c12063;
    }
  }
  if (uVar2 == 0x648a5601) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_21c13b68;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) goto LAB_21c15af7;
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
      uVar2 = (int)this + 0xcc;
      goto LAB_21c12063;
    }
  }
  if (uVar2 == 0xcb5bdc81) {
    iVar3 = 0x10;
    bVar7 = true;
    puVar5 = param_1;
    pcVar6 = (char *)&DAT_21c13b88;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = (char)*puVar5 == *pcVar6;
      puVar5 = (uint *)((int)puVar5 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      uVar2 = (int)this + 0xd0;
      goto LAB_21c12063;
    }
  }
  uVar1 = FUN_21c12078(this,param_1,param_2);
  return uVar1;
}



undefined4 __thiscall FUN_21c12078(void *this,uint *param_1,int *param_2)

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
      if (!bVar5) goto LAB_21c167d5;
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
        if (uVar1 != 0x10a) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      default:
        goto switchD_21c12123_caseD_10b;
      case 0x10c:
        if (uVar1 != 0x10c) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x54);
          *param_2 = (int)this + 0x54;
          (**(code **)(iVar3 + 4))((int)this + 0x54);
          return 0;
        }
        break;
      case 0x10d:
        if (uVar1 != 0x10d) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x48);
          *param_2 = (int)this + 0x48;
          (**(code **)(iVar3 + 4))((int)this + 0x48);
          return 0;
        }
        break;
      case 0x112:
        if (uVar1 != 0x112) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x38);
          *param_2 = (int)this + 0x38;
          (**(code **)(iVar3 + 4))((int)this + 0x38);
          return 0;
        }
        break;
      case 0x113:
        if (uVar1 != 0x113) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x40);
          *param_2 = (int)this + 0x40;
          (**(code **)(iVar3 + 4))((int)this + 0x40);
          return 0;
        }
        break;
      case 0x114:
        if (uVar1 != 0x114) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
        if (this != (void *)0x0) {
          iVar3 = *(int *)((int)this + 0x44);
          *param_2 = (int)this + 0x44;
          (**(code **)(iVar3 + 4))((int)this + 0x44);
          return 0;
        }
        break;
      case 0x117:
        if (uVar1 != 0x117) goto LAB_21c167d5;
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
        if (!bVar5) goto LAB_21c167d5;
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
    if (uVar1 != 0x1c2056cc) {
      if (uVar1 == 0xd97180) {
        uVar2 = FUN_21c16662(this,(int)this);
        return uVar2;
      }
switchD_21c12123_caseD_10b:
      uVar2 = FUN_21c1264c(this,(int *)param_1,param_2);
      return uVar2;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_21c17278;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_21c167d5;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x40);
      *param_2 = (int)this + 0x40;
      (**(code **)(iVar3 + 4))((int)this + 0x40);
      return 0;
    }
  }
  else if (uVar1 < 0x3af24293) {
    if (uVar1 == 0x3af24292) {
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_21c17268;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_21c167d5;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x48);
        *param_2 = (int)this + 0x48;
        (**(code **)(iVar3 + 4))((int)this + 0x48);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x37d84f60) goto switchD_21c12123_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_21c13bd8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_21c167d5;
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
        uVar2 = FUN_21c16725(this,(int)this);
        return uVar2;
      }
      goto switchD_21c12123_caseD_10b;
    }
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_21c13bc8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_21c167d5;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x50);
      *param_2 = (int)this + 0x50;
      (**(code **)(iVar3 + 4))((int)this + 0x50);
      return 0;
    }
  }
  else if (uVar1 < 0xb196b289) {
    if (uVar1 == 0xb196b288) {
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_21c13bb8;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_21c167d5;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x3c);
        *param_2 = (int)this + 0x3c;
        (**(code **)(iVar3 + 4))((int)this + 0x3c);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xb196b283) goto switchD_21c12123_caseD_10b;
      iVar3 = 0x10;
      bVar5 = true;
      pcVar4 = &DAT_21c17248;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = (char)*param_1 == *pcVar4;
        param_1 = (uint *)((int)param_1 + 1);
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (!bVar5) goto LAB_21c167d5;
      if (this != (void *)0x0) {
        iVar3 = *(int *)((int)this + 0x5c);
        *param_2 = (int)this + 0x5c;
        (**(code **)(iVar3 + 4))((int)this + 0x5c);
        return 0;
      }
    }
  }
  else if (uVar1 == 0xb196b28b) {
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_21c17238;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_21c167d5;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 0x58);
      *param_2 = (int)this + 0x58;
      (**(code **)(iVar3 + 4))((int)this + 0x58);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xcf51ed10) goto switchD_21c12123_caseD_10b;
    iVar3 = 0x10;
    bVar5 = true;
    pcVar4 = &DAT_21c13ba8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = (char)*param_1 == *pcVar4;
      param_1 = (uint *)((int)param_1 + 1);
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) goto LAB_21c167d5;
    if (this != (void *)0x0) {
      iVar3 = *(int *)((int)this + 100);
      *param_2 = (int)this + 100;
      (**(code **)(iVar3 + 4))((int)this + 100);
      return 0;
    }
  }
  *param_2 = 0;
LAB_21c167d5:
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}



int FUN_21c122f5(int param_1,uint *param_2,uint *param_3)

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
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    DAT_21c20220 = param_2[0xb];
    DAT_21c20224 = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  }
  if ((param_2[5] & 0x40) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 3;
  }
  piVar5 = (int *)param_2[3];
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))(piVar5);
    puVar4 = (uint *)FUN_21c124e8((void *)(param_1 + -0x38),param_2[3],param_3 + 4);
    if ((int)puVar4 < 0) {
      piVar5 = (int *)param_2[3];
      param_2 = puVar4;
      goto LAB_21c1684c;
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
    puVar2 = (&PTR_PTR_21c20134)[*(int *)(param_1 + -0x50) * 2];
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
LAB_21c1684c:
  (**(code **)(*piVar5 + 8))(piVar5);
  return (int)param_2;
}



void FUN_21c12498(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  iVar2 = -0x7fffbffb;
  if (*(char *)((int)param_1 + 8) == '\0') {
    if (*(int *)((&PTR_PTR_21c20134)[*(int *)((int)param_1 + -0xc) * 2] + 0x24) != 0) {
      iVar2 = (**(code **)*param_2)
                        (param_2,*(int *)((&PTR_PTR_21c20134)[*(int *)((int)param_1 + -0xc) * 2] +
                                         0x24),&param_2);
    }
    if (-1 < iVar2) goto LAB_21c124d5;
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_21c13cd0,&param_2);
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&DAT_21c17338,&param_2);
  }
  if (iVar2 < 0) {
    return;
  }
LAB_21c124d5:
  FUN_21c124e8(param_1,param_2,param_3);
  return;
}



undefined4 __thiscall FUN_21c124e8(void *this,undefined4 param_1,undefined4 *param_2)

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
    puVar4 = (undefined4 *)HeapAlloc(DAT_21c20030,0,0x20);
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
      pvVar3 = HeapReAlloc(DAT_21c20030,0,*(LPVOID *)((int)this + 4),iVar2 * 4 + 0x20);
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



void __cdecl FUN_21c125a7(int *param_1,int *param_2)

{
  FUN_21c125e9();
  *param_2 = (*param_1 * DAT_21c20228 + 0x4f6) / 0x9ec;
  param_2[1] = (param_1[1] * DAT_21c2022c + 0x4f6) / 0x9ec;
  return;
}



void FUN_21c125e9(void)

{
  HDC hdc;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20230 == '\0') {
    hdc = GetDC((HWND)0x0);
    DAT_21c20228 = GetDeviceCaps(hdc,0x58);
    DAT_21c2022c = GetDeviceCaps(hdc,0x5a);
    ReleaseDC((HWND)0x0,hdc);
    DAT_21c20230 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  return;
}



undefined4 __thiscall FUN_21c1264c(void *this,int *param_1,undefined4 *param_2)

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
    pcVar4 = &DAT_21c13c48;
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
  uVar1 = FUN_21c13c84(this,param_1,param_2);
  return uVar1;
}



undefined4 FUN_21c1269a(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar3 = *(int **)((&PTR_PTR_21c20134)[*(int *)(param_1 + -8) * 2] + 0x24);
  if ((piVar3 == (int *)0x0) || (*param_2 != *piVar3)) {
LAB_21c16a25:
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
      if (bVar6) goto LAB_21c126d4;
    }
    if (*param_2 == -0x640443fe) {
      iVar2 = 0x10;
      bVar6 = true;
      pcVar5 = (char *)&DAT_21c17338;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = (char)*param_2 == *pcVar5;
        param_2 = (int *)((int)param_2 + 1);
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        piVar3 = (int *)(param_1 + 0x10);
        goto LAB_21c126da;
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
    if (!bVar6) goto LAB_21c16a25;
LAB_21c126d4:
    piVar3 = (int *)(param_1 + 4);
LAB_21c126da:
    *param_3 = (int)piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_21c1270b(int param_1,int *param_2)

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
    goto LAB_21c12734;
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
    goto LAB_21c12734;
  }
  lpMem = *(uint **)(param_1 + 4);
  piVar2 = (int *)*lpMem;
  if (piVar2 == param_2) {
LAB_21c16b78:
    uVar3 = lpMem[1];
  }
  else {
    if ((int *)lpMem[1] != param_2) {
      return 0x80040200;
    }
    if (piVar2 == param_2) goto LAB_21c16b78;
    uVar3 = ~-(uint)((int *)lpMem[1] != param_2) & (uint)piVar2;
  }
  if (uVar3 == 0) {
    return 0x80040200;
  }
  HeapFree(DAT_21c20030,0,lpMem);
  *(uint *)(param_1 + 4) = uVar3;
LAB_21c12734:
  iVar1 = *param_2;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  (**(code **)(iVar1 + 8))(param_2);
  return 0;
}



int FUN_21c127a0(int param_1,short param_2)

{
  int *this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar1 = FUN_21c149af(param_1 + -0xc0);
      if (-1 < iVar1) {
        return 0;
      }
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + -0xc0);
    uVar4 = 0x1f4c;
    uVar3 = 0x1f4c;
    uVar2 = 0x800a1f4c;
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      this = (int *)(param_1 + -0xc0);
      iVar1 = FUN_21c14439(this);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_21c146aa(this);
      if (-1 < iVar1) {
        FUN_21c14818(this,*(undefined4 *)(param_1 + 0x18),0x1fd);
        return 0;
      }
      FUN_21c149af((int)this);
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + -0xc0);
    uVar4 = 0x1f45;
    uVar3 = 0x1f45;
    uVar2 = 0x800a1f45;
  }
  iVar1 = (**(code **)(iVar1 + 0x30))(uVar2,uVar3,uVar4);
  return iVar1;
}



undefined4 * __thiscall FUN_21c1281f(void *this,byte param_1)

{
  FUN_21c12847((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21c12847(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21c132b8;
  param_1[7] = &PTR_LAB_21c132a0;
  param_1[0xe] = &PTR_LAB_21c13240;
  param_1[0xf] = &PTR_LAB_21c13220;
  param_1[0x10] = &PTR_LAB_21c131f0;
  param_1[0x11] = &PTR_LAB_21c131c8;
  param_1[0x12] = &PTR_LAB_21c13188;
  param_1[0x13] = &PTR_LAB_21c13168;
  param_1[0x14] = &PTR_LAB_21c13140;
  param_1[0x15] = &PTR_LAB_21c13118;
  param_1[0x16] = &PTR_LAB_21c13108;
  param_1[0x17] = &PTR_LAB_21c130f8;
  param_1[0x18] = &PTR_LAB_21c130e0;
  param_1[0x19] = &PTR_LAB_21c130c8;
  param_1[0x1a] = &PTR_LAB_21c130b8;
  param_1[0x30] = &PTR_LAB_21c13340;
  param_1[0x31] = &PTR_LAB_21c130a8;
  param_1[0x32] = &PTR_LAB_21c13090;
  param_1[0x33] = &PTR_LAB_21c13060;
  param_1[0x34] = &PTR_LAB_21c13048;
  if ((HICON)param_1[0x4d] != (HICON)0x0) {
    DestroyIcon((HICON)param_1[0x4d]);
  }
  FUN_21c127a0((int)(param_1 + 0x30),0);
  if ((HANDLE)param_1[0x9b] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x9b]);
    param_1[0x9b] = 0;
  }
  if ((HANDLE)param_1[0xa0] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xa0]);
    param_1[0xa0] = 0;
  }
  if ((HWND)param_1[0xa8] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0xa8]);
    param_1[0xa8] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa1));
  FUN_21c12ddd(param_1);
  return;
}



void __thiscall FUN_21c12968(void *this,undefined4 param_1,ushort param_2,undefined4 param_3)

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



HINSTANCE FUN_21c12a19(LCID param_1)

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
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  pHVar2 = DAT_21c20004;
  if ((DAT_21c20004 == (HINSTANCE)0x0) || ((param_1 != 0 && (param_1 != DAT_21c20220)))) {
    if (param_1 == 0) {
      param_1 = DAT_21c20220;
    }
    iVar1 = GetLocaleInfoA(param_1,3,(LPSTR)&local_c,5);
    if ((iVar1 != 0) && (iVar1 = LoadStringA(DAT_21c20008,0x3e9,local_318,0x104), iVar1 != 0)) {
      wsprintfA(local_214,s__s_s_DLL_21c20234,local_318,&local_c);
      GetModuleFileNameA(DAT_21c20008,local_41c,0x104);
      FUN_21c12c5e(local_41c,local_214,local_110);
      pHVar2 = LoadLibraryA(local_110);
      bVar3 = pHVar2 == (HMODULE)0x0;
      if (!bVar3) goto LAB_21c12bf9;
      iVar1 = lstrlenA((LPCSTR)&local_c);
      if (2 < iVar1) {
        local_a = 0;
        wsprintfA(local_214,s__s_s_DLL_21c20240,local_318,&local_c);
        FUN_21c12c5e(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
      bVar3 = pHVar2 == (HINSTANCE)0x0;
      if (!bVar3) goto LAB_21c12bf9;
      iVar1 = GetLocaleInfoA((uint)((ushort)DAT_21c20220 & 0x3ff | 0x400),3,(LPSTR)&local_c,5);
      if (iVar1 != 0) {
        iVar1 = lstrlenA(local_110);
        *(undefined2 *)((int)&uStack_117 + iVar1) = local_c;
        auStack_115[iVar1] = local_a;
        pHVar2 = LoadLibraryA(local_110);
        bVar3 = pHVar2 == (HMODULE)0x0;
        if (!bVar3) goto LAB_21c12bf9;
        wsprintfA(local_214,s__u__s_dll_21c2024c,param_1,local_318);
        FUN_21c12c5e(local_41c,local_214,local_110);
        pHVar2 = LoadLibraryA(local_110);
      }
    }
  }
  bVar3 = pHVar2 == (HINSTANCE)0x0;
LAB_21c12bf9:
  if (bVar3) {
    pHVar2 = DAT_21c20008;
  }
  if ((DAT_21c20004 == (HINSTANCE)0x0) && ((param_1 == 0 || (param_1 == DAT_21c20220)))) {
    DAT_21c20004 = pHVar2;
  }
  if ((DAT_21c20258 == 0) || ((param_1 != DAT_21c20220 && (param_1 != 0)))) {
    if (pHVar2 != DAT_21c20008) {
      GetModuleFileNameA(pHVar2,local_110,0x104);
      iVar1 = FUN_21c1b2be(local_110,1);
      if (((iVar1 == -1) || (iVar1 == 1)) &&
         ((pHVar2 = DAT_21c20008, param_1 == 0 || (param_1 == DAT_21c20220)))) {
        DAT_21c20004 = DAT_21c20008;
      }
    }
    if ((param_1 == 0) || (param_1 == DAT_21c20220)) {
      DAT_21c20258 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  return pHVar2;
}



void __cdecl FUN_21c12c5e(LPSTR param_1,LPCSTR param_2,LPCSTR param_3)

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

undefined4 __thiscall FUN_21c12ca5(int param_1,undefined4 param_2,LPOLESTR param_3,DWORD param_4)

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
    iVar2 = lstrlenA(*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 0x28));
    cchWideChar = iVar2 * 2 + 2;
    FUN_21c1181e(local_90,cchWideChar);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 0x28),-1
                        ,local_90[0],cchWideChar);
    local_10 = local_90[0];
    (*local_8->lpVtbl->SetGUID)
              (local_8,*(GUID **)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 0x20));
    (*local_8->lpVtbl->SetHelpFile)
              (local_8,(LPOLESTR)
                       (-(uint)(*(int *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 0x28)
                               != 0) & (uint)local_10));
    (*local_8->lpVtbl->SetHelpContext)(local_8,param_4);
    (*local_8->lpVtbl->SetDescription)(local_8,param_3);
    MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 4),-1,
                        local_290,0x100);
    (*local_8->lpVtbl->SetSource)(local_8,local_290);
    HVar1 = (*local_8->lpVtbl->QueryInterface)(local_8,(IID *)&DAT_21c13c60,&local_c);
    if (-1 < HVar1) {
      SetErrorInfo(0,local_c);
      (*local_c->lpVtbl->Release)(local_c);
    }
    (*local_8->lpVtbl->Release)(local_8);
    if ((local_90[0] != (LPWSTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_90[0]);
    }
  }
  return param_2;
}



void __fastcall FUN_21c12ddd(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_21c137d0;
  param_1[7] = &PTR_LAB_21c137b8;
  param_1[0xe] = &PTR_LAB_21c13758;
  param_1[0xf] = &PTR_LAB_21c13738;
  param_1[0x10] = &PTR_LAB_21c13708;
  param_1[0x11] = &PTR_LAB_21c136e0;
  param_1[0x12] = &PTR_LAB_21c136a0;
  param_1[0x13] = &PTR_LAB_21c13680;
  param_1[0x14] = &PTR_LAB_21c13658;
  param_1[0x15] = &PTR_LAB_21c13630;
  param_1[0x16] = &PTR_LAB_21c13620;
  param_1[0x17] = &PTR_LAB_21c13610;
  param_1[0x18] = &PTR_LAB_21c135f8;
  param_1[0x19] = &PTR_LAB_21c135e0;
  param_1[0x1a] = &PTR_LAB_21c135d0;
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
  FUN_21c12ee4(param_1);
  return;
}



void __fastcall FUN_21c12ee4(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21c13a58;
  param_1[7] = &PTR_LAB_21c13a40;
  FUN_21c12f0d(param_1 + 0xb);
  FUN_21c12f0d(param_1 + 8);
  FUN_21c12f27(param_1);
  return;
}



void __fastcall FUN_21c12f0d(undefined4 *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)param_1 + 10);
  *param_1 = &PTR_LAB_21c13aa8;
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
      HeapFree(DAT_21c20030,0,(LPVOID)param_1[1]);
    }
  }
  return;
}



void __fastcall FUN_21c12f27(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_21c13ac8;
  if (*(char *)(param_1 + 6) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    puVar2 = (&PTR_PTR_21c20134)[param_1[5] * 2];
    piVar1 = (int *)(puVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = *(int **)(puVar2 + 0x2c);
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((&PTR_PTR_21c20134)[param_1[5] * 2] + 0x2c) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  }
  *param_1 = &PTR_FUN_21c13b00;
  InterlockedDecrement(&DAT_21c20168);
  return;
}



undefined4 __thiscall FUN_21c13c84(void *this,int *param_1,undefined4 *param_2)

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
  uVar1 = FUN_21c13f21(param_1,param_2);
  return uVar1;
}



void FUN_21c13d49(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_21c13d75(param_2,param_3);
  if (-1 < iVar1) {
    (**(code **)(*(int *)(param_1 + -0x4c) + 0x40))((int *)(param_1 + -0x4c),param_2,param_3);
  }
  return;
}



undefined4 FUN_21c13d75(int *param_1,undefined4 param_2)

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
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentX_21c20580,local_20,param_2);
  local_10 = local_18;
  if (-1 < iVar1) {
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0xc))(param_1,u__ExtentY_21c20594,local_20,param_2);
    if (-1 < iVar1) {
      local_c = local_18;
      FUN_21c125a7(&local_10,(int *)(local_8 + 0x88));
      return 0;
    }
  }
  *(undefined4 *)(local_8 + 0x88) = 100;
  *(undefined4 *)(local_8 + 0x8c) = 0x32;
  return 0;
}



int FUN_21c13dfb(void *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_21c11de6(param_1);
  iVar1 = FUN_21c13e3c(param_1,param_2,param_3);
  if (-1 < iVar1) {
    FUN_21c11eca(param_1,(LPSTR)((int)param_1 + 0x138));
    *(uint *)((int)param_1 + 0xb0) = *(uint *)((int)param_1 + 0xb0) & 0xfffffffe;
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_21c13e3c(void *this,int *param_1,undefined4 param_2)

{
  LPSTR lpString2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  _union_2685 *p_Var5;
  uint *puVar6;
  LONG *pLVar7;
  uint *puVar8;
  LPSTR local_98 [31];
  byte local_1c;
  void *local_18;
  undefined1 local_14 [16];
  
  local_18 = this;
  if (PTR_u_CommPort_21c20418 != (undefined *)0x0) {
    puVar4 = &DAT_21c20428;
    do {
      local_14._0_2_ = (undefined2)puVar4[-1];
      local_14._8_4_ = (undefined1 *)0x0;
      iVar1 = (**(code **)(*param_1 + 0xc))(param_1,puVar4[-4],(_union_2683 *)local_14,param_2);
      if (iVar1 < 0) {
        if ((iVar1 != -0x7ffdfffb) || (puVar4[-3] != 0x16)) goto LAB_21c13ec5;
        VariantClear((VARIANTARG *)&((_union_2683 *)local_14)->n2);
        local_14._0_2_ = 8;
        local_14._8_4_ = (undefined1 *)0x0;
        iVar1 = (**(code **)(*param_1 + 0xc))(param_1,puVar4[-4],(_union_2683 *)local_14,param_2);
        if (-1 < iVar1) {
          if ((undefined1 *)local_14._8_4_ == (undefined1 *)0x0) {
            *(undefined1 *)((int)this + 0xf6) = 0x20;
          }
          else {
            *(undefined1 *)((int)this + 0xf6) = *(undefined1 *)local_14._8_4_;
          }
          goto LAB_21c13ec5;
        }
LAB_21c13ec9:
        uVar3 = *puVar4;
        puVar6 = puVar4 + -2;
        puVar8 = (uint *)(puVar4[-3] + 0xe0 + (int)this);
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar3 = uVar3 & 3; this = local_18, uVar3 != 0; uVar3 = uVar3 - 1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
      }
      else {
        uVar3 = *puVar4;
        p_Var5 = &(((_union_2683 *)local_14)->n2).n3;
        pLVar7 = (LONG *)(puVar4[-3] + 0xe0 + (int)this);
        for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pLVar7 = p_Var5->lVal;
          p_Var5 = (_union_2685 *)(&p_Var5->lVal + 1);
          pLVar7 = pLVar7 + 1;
        }
        for (uVar3 = uVar3 & 3; this = local_18, uVar3 != 0; uVar3 = uVar3 - 1) {
          *(BYTE *)pLVar7 = p_Var5->bVal;
          p_Var5 = (_union_2685 *)((int)p_Var5 + 1);
          pLVar7 = (LONG *)((int)pLVar7 + 1);
        }
LAB_21c13ec5:
        if (iVar1 < 0) goto LAB_21c13ec9;
      }
      VariantClear((VARIANTARG *)&((_union_2683 *)local_14)->n2);
      puVar6 = puVar4 + 1;
      puVar4 = puVar4 + 5;
    } while (*puVar6 != 0);
  }
  local_14._0_2_ = DAT_21c205cc;
  local_14._8_4_ = (LPCWSTR)0x0;
  iVar1 = (**(code **)(*param_1 + 0xc))
                    (param_1,PTR_u_Settings_21c205c0,(_union_2683 *)local_14,param_2);
  if (-1 < iVar1) {
    iVar1 = lstrlenW((LPCWSTR)local_14._8_4_);
    uVar3 = iVar1 * 2 + 2;
    FUN_21c1181e(local_98,uVar3);
    WideCharToMultiByte(0,0,(LPCWSTR)local_14._8_4_,-1,local_98[0],uVar3,(LPCSTR)0x0,(LPBOOL)0x0);
    lpString2 = local_98[0];
    iVar1 = FUN_21c150c2(this,local_98[0]);
    if (-1 < iVar1) {
      lstrcpyA((LPSTR)((int)this + 0x138),lpString2);
    }
    SysFreeString((BSTR)local_14._8_4_);
    if ((local_98[0] != (char *)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_98[0]);
    }
  }
  return 0;
}



undefined4 FUN_21c13f21(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0x80004002;
}



int FUN_21c13f3a(int param_1,LPCWSTR param_2)

{
  uint uVar1;
  LPCWSTR pWVar2;
  LPSTR pCVar3;
  int iVar4;
  void *this;
  void *this_00;
  LPSTR pCVar5;
  LPSTR local_10c [31];
  byte local_90;
  LPSTR local_8c [31];
  byte local_10;
  undefined1 local_c [4];
  int local_8;
  
  pWVar2 = param_2;
  iVar4 = (**(code **)(*(int *)param_2 + 0xc))(param_2,&local_8,4,0);
  if (-1 < iVar4) {
    if (local_8 == 0x12344321) {
      iVar4 = (**(code **)(*(int *)pWVar2 + 0x14))(pWVar2,0xfffffffc,0xffffffff,1,0);
      if (-1 < iVar4) {
        iVar4 = FUN_21c13f90(param_1,(int *)pWVar2);
      }
    }
    else {
      param_2 = (LPCWSTR)0x0;
      if (((short)((uint)local_8 >> 0x10) == 1) && ((short)local_8 == 0)) {
        (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,local_c,4,0);
        (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,local_c,4,0);
        (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,local_c,4,0);
        iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xcc,4,0);
        if (((((((-1 < iVar4) &&
                (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0x90,2,0), -1 < iVar4)
                ) && (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xd0,4,0),
                     -1 < iVar4)) &&
              ((iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xd4,4,0), -1 < iVar4
               && (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0x94,1,0),
                  -1 < iVar4)))) &&
             ((iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0x98,2,0), -1 < iVar4 &&
              ((iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0x9c,2,0), -1 < iVar4
               && (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0x9e,2,0),
                  -1 < iVar4)))))) &&
            (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xd8,4,0), -1 < iVar4)) &&
           (((iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xa0,1,0), -1 < iVar4 &&
             (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xa4,2,0), -1 < iVar4))
            && (iVar4 = FUN_21c197c9(this,(int *)pWVar2,&param_2), -1 < iVar4)))) {
          iVar4 = lstrlenW(param_2);
          uVar1 = iVar4 * 2 + 2;
          FUN_21c1181e(local_8c,uVar1);
          WideCharToMultiByte(0,0,param_2,-1,local_8c[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
          pCVar3 = local_8c[0];
          SysFreeString(param_2);
          param_2 = (LPCWSTR)0x0;
          *(CHAR *)(param_1 + 0xa6) = *pCVar3;
          iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xa8,2,0);
          if (((iVar4 < 0) ||
              (iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xac,1,0), iVar4 < 0))
             || (iVar4 = FUN_21c197c9(this_00,(int *)pWVar2,&param_2), iVar4 < 0)) {
            param_1 = iVar4;
            iVar4 = param_1;
            if ((local_8c[0] != (LPSTR)0x0) && ((local_10 & 1) != 0)) {
              HeapFree(DAT_21c20030,0,local_8c[0]);
            }
          }
          else {
            iVar4 = lstrlenW(param_2);
            uVar1 = iVar4 * 2 + 2;
            FUN_21c1181e(local_10c,uVar1);
            WideCharToMultiByte(0,0,param_2,-1,local_10c[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
            pCVar3 = local_10c[0];
            SysFreeString(param_2);
            param_2 = (LPCWSTR)0x0;
            pCVar5 = (LPSTR)(param_1 + 0xe8);
            for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
              pCVar5[0] = '\0';
              pCVar5[1] = '\0';
              pCVar5[2] = '\0';
              pCVar5[3] = '\0';
              pCVar5 = pCVar5 + 4;
            }
            lstrcpyA((LPSTR)(param_1 + 0xe8),pCVar3);
            iVar4 = FUN_21c150c2((void *)(param_1 + -0x50),(char *)(param_1 + 0xe8));
            if (iVar4 < 0) {
              if ((local_10c[0] != (LPCSTR)0x0) && ((local_90 & 1) != 0)) {
                HeapFree(DAT_21c20030,0,local_10c[0]);
              }
              if ((local_8c[0] != (LPSTR)0x0) && ((local_10 & 1) != 0)) {
                HeapFree(DAT_21c20030,0,local_8c[0]);
              }
            }
            else {
              iVar4 = (**(code **)(*(int *)pWVar2 + 0xc))(pWVar2,param_1 + 0xc0,2,0);
              if (iVar4 < 0) {
                if ((local_10c[0] != (LPCSTR)0x0) && ((local_90 & 1) != 0)) {
                  HeapFree(DAT_21c20030,0,local_10c[0]);
                }
                if ((local_8c[0] != (LPSTR)0x0) && ((local_10 & 1) != 0)) {
                  HeapFree(DAT_21c20030,0,local_8c[0]);
                }
              }
              else {
                *(undefined4 *)(param_1 + 0xc4) = 0;
                *(undefined4 *)(param_1 + 200) = 0;
                if ((local_10c[0] != (LPCSTR)0x0) && ((local_90 & 1) != 0)) {
                  HeapFree(DAT_21c20030,0,local_10c[0]);
                }
                if ((local_8c[0] != (LPSTR)0x0) && ((local_10 & 1) != 0)) {
                  HeapFree(DAT_21c20030,0,local_8c[0]);
                }
                *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
                iVar4 = 0;
              }
            }
          }
        }
      }
      else {
        iVar4 = -0x7fff0001;
      }
    }
  }
  return iVar4;
}



void FUN_21c13f90(int param_1,int *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)(param_1 + -0x50);
  iVar1 = FUN_21c13fb5(this,param_2);
  if (-1 < iVar1) {
    (**(code **)(*this + 0x38))(this,param_2);
  }
  return;
}



int __thiscall FUN_21c13fb5(void *this,int *param_1)

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
        FUN_21c125a7(local_14,(int *)((int)this + 0x88));
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



int FUN_21c14017(void *param_1,int *param_2)

{
  int iVar1;
  int local_30;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  short local_18;
  short local_16;
  short local_14;
  undefined4 local_10;
  undefined1 local_c;
  uint local_8;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,&local_30,0x2c,&param_2);
  if (-1 < iVar1) {
    if ((local_30 == 0x648a5601) &&
       (((local_2c == 0x60000 || (local_2c == 0x50001)) || (local_2c == 0x50000)))) {
      *(undefined2 *)((int)param_1 + 0x110) = local_28;
      *(undefined2 *)((int)param_1 + 0xe0) = local_26;
      *(undefined2 *)((int)param_1 + 0xec) = local_24;
      *(undefined2 *)((int)param_1 + 0xee) = local_22;
      *(undefined2 *)((int)param_1 + 0xf4) = local_20;
      *(undefined2 *)((int)param_1 + 0xf8) = local_1e;
      *(undefined4 *)((int)param_1 + 0xe8) = local_10;
      *(int *)((int)param_1 + 0xe4) = (int)(local_8 << 0x1f) >> 0x1f;
      *(int *)((int)param_1 + 0xf0) = (int)(local_8 << 0x1e) >> 0x1f;
      *(int *)((int)param_1 + 0xfc) = (int)(local_8 << 0x1d) >> 0x1f;
      *(uint *)((int)param_1 + 0x118) = local_8 >> 4 & 1;
      *(undefined1 *)((int)param_1 + 0xf6) = local_c;
      *(undefined4 *)((int)param_1 + 0x100) = local_1c;
      *(int *)((int)param_1 + 0x104) = (int)local_18;
      *(int *)((int)param_1 + 0x108) = (int)local_16;
      *(int *)((int)param_1 + 0x10c) = (int)local_14;
      *(int *)((int)param_1 + 0x114) = (int)(local_8 << 0x1c) >> 0x1f;
      FUN_21c11eca(param_1,(LPSTR)((int)param_1 + 0x138));
      *(uint *)((int)param_1 + 0xb0) = *(uint *)((int)param_1 + 0xb0) & 0xfffffffe;
      iVar1 = 0;
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  return iVar1;
}



int FUN_21c1413e(int param_1,int param_2,undefined4 param_3,int *param_4,short *param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20180 == 0) {
    DAT_21c20188 = FUN_21c11758();
    DAT_21c20180 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  iVar1 = FUN_21c141a7(param_5);
  if (iVar1 == 0) {
    iVar1 = -0x7ffbfeee;
  }
  else {
    iVar1 = FUN_21c119e7(param_2,*(int *)(param_1 + 8),param_6,param_4);
  }
  return iVar1;
}



undefined4 __cdecl FUN_21c141a7(short *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = FUN_21c141d7(param_1,L"4250E830-6AC2-11cf-8ADB-00AA00C00905");
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_21c141d7(param_1,L"Copyright (c) 1994 ");
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_21c141d7(param_1,L"DB4C0D00-400B-101B-A3C9-08002B2F49FB");
      if (CONCAT31(extraout_var_01,bVar1) == 0) {
        return 0;
      }
    }
  }
  return 1;
}



bool __cdecl FUN_21c141d7(short *param_1,short *param_2)

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



int FUN_21c1428f(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
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



HRESULT FUN_21c1431f(HREFTYPE param_1,ITypeInfo *param_2,undefined4 param_3,undefined4 *param_4)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  HVar2 = param_1;
  puVar1 = (&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2];
  ppTInfo = (ITypeInfo **)(puVar1 + 0x2c);
  if (*(int *)(puVar1 + 0x2c) == 0) {
    HVar6 = LoadRegTypeLib((GUID *)PTR_DAT_21c205e8,*(WORD *)(puVar1 + 0x18),
                           *(WORD *)(puVar1 + 0x1c),0,&local_8);
    if (HVar6 < 0) {
      DVar3 = GetModuleFileNameA(DAT_21c20008,local_18c,0x104);
      if (DVar3 == 0) {
        HVar6 = -0x7fffbffb;
        goto LAB_21c14372;
      }
      iVar4 = lstrlenA(local_18c);
      cchWideChar = iVar4 * 2 + 2;
      FUN_21c1181e(local_88,cchWideChar);
      MultiByteToWideChar(0,0,local_18c,-1,local_88[0],cchWideChar);
      HVar6 = LoadTypeLib(local_88[0],&local_8);
      if (HVar6 < 0) {
        if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
          HeapFree(DAT_21c20030,0,local_88[0]);
        }
        goto LAB_21c14372;
      }
      if ((local_88[0] != (LPCOLESTR)0x0) && ((local_c & 1) != 0)) {
        HeapFree(DAT_21c20030,0,local_88[0]);
      }
    }
    HVar6 = (*local_8->lpVtbl->GetTypeInfoOfGuid)
                      (local_8,*(GUID **)((&PTR_PTR_21c20134)[*(int *)(HVar2 + 0x14) * 2] + 0x20),
                       &param_2);
    (*local_8->lpVtbl->Release)(local_8);
    if (HVar6 < 0) goto LAB_21c14372;
    HVar6 = (*param_2->lpVtbl->GetRefTypeOfImplType)(param_2,0xffffffff,&param_1);
    if (HVar6 < 0) {
      (*param_2->lpVtbl->Release)(param_2);
      goto LAB_21c14372;
    }
    HVar6 = (*param_2->lpVtbl->GetRefTypeInfo)(param_2,param_1,ppTInfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (HVar6 < 0) goto LAB_21c14372;
    *(undefined1 *)(HVar2 + 0x18) = 1;
    *(int *)((&PTR_PTR_21c20134)[*(int *)(HVar2 + 0x14) * 2] + 0x30) =
         *(int *)((&PTR_PTR_21c20134)[*(int *)(HVar2 + 0x14) * 2] + 0x30) + 1;
    puVar5 = param_4;
  }
  (*(*ppTInfo)->lpVtbl->AddRef)(*ppTInfo);
  *puVar5 = *ppTInfo;
  HVar6 = 0;
LAB_21c14372:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  return HVar6;
}



undefined4 __fastcall FUN_21c14439(int *param_1)

{
  int iVar1;
  HANDLE pvVar2;
  undefined4 *this;
  int iVar3;
  HWND hWnd;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  WNDCLASSA local_58;
  _COMMTIMEOUTS local_30;
  CHAR local_1c [16];
  LPCRITICAL_SECTION local_c;
  undefined4 local_8;
  
  local_c = (LPCRITICAL_SECTION)(param_1 + 0xa1);
  EnterCriticalSection(local_c);
  wsprintfA(local_1c,"\\\\.\\COM%d",(int)(short)param_1[0x38]);
  if (param_1[0x9b] == 0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    param_1[0x9b] = (int)pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      uVar5 = FUN_21c160b8();
      return uVar5;
    }
  }
  if (param_1[0xa0] == 0) {
    pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    param_1[0xa0] = (int)pvVar2;
    if (pvVar2 == (HANDLE)0x0) {
      uVar5 = FUN_21c160b8();
      return uVar5;
    }
  }
  if (param_1[0xa8] == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    if (DAT_21c20170 != 0) {
LAB_21c14624:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
      hWnd = CreateWindowExA(0,"MSCommHiddenWindow",(LPCSTR)0x0,0x80000000,0,0,0,0,(HWND)0x0,
                             (HMENU)0x0,DAT_21c20008,param_1);
      param_1[0xa8] = (int)hWnd;
      if (hWnd != (HWND)0x0) {
        SetWindowLongA(hWnd,-0x15,(LONG)param_1);
        goto LAB_21c1449a;
      }
      iVar3 = *param_1;
LAB_21c160ba:
      uVar7 = 0x1f4c;
      uVar6 = 0x1f4c;
      uVar5 = 0x800a1f4c;
      goto LAB_21c160c6;
    }
    local_58.style = 0;
    local_58.hInstance = DAT_21c20008;
    local_58.lpfnWndProc = FUN_21c14667;
    local_58.cbClsExtra = 0;
    local_58.cbWndExtra = 0;
    local_58.hIcon = (HICON)0x0;
    local_58.hCursor = (HCURSOR)0x0;
    local_58.hbrBackground = (HBRUSH)0x0;
    local_58.lpszMenuName = (LPCSTR)0x0;
    local_58.lpszClassName = "MSCommHiddenWindow";
    DAT_21c20170 = RegisterClassA(&local_58);
    if (DAT_21c20170 != 0) goto LAB_21c14624;
    local_8 = (**(code **)(*param_1 + 0x30))(0x800a1f4c,0x1f4c,0x1f4c);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  }
  else {
LAB_21c1449a:
    pvVar2 = CreateFileA(local_1c,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0);
    param_1[0x36] = (int)pvVar2;
    if (pvVar2 != (HANDLE)0xffffffff) {
      param_1[0x93] = 0;
      SetCommMask(pvVar2,0x1fd);
      SetupComm((HANDLE)param_1[0x36],(int)(short)param_1[0x3b],(int)(short)param_1[0x3d]);
      PurgeComm((HANDLE)param_1[0x36],0xf);
      local_30.ReadIntervalTimeout = 0xffffffff;
      local_30.ReadTotalTimeoutMultiplier = 0;
      local_30.ReadTotalTimeoutConstant = 0;
      local_30.WriteTotalTimeoutMultiplier = 0;
      local_30.WriteTotalTimeoutConstant = 5000;
      SetCommTimeouts((HANDLE)param_1[0x36],&local_30);
      this = (undefined4 *)FUN_21c11a73(0x14,DAT_21c20030);
      if (this == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        iVar3 = param_1[0xa8];
        iVar1 = param_1[0x36];
        *this = &PTR_FUN_21c15908;
        this[2] = param_1;
        this[3] = iVar1;
        this[4] = iVar3;
      }
      param_1[0xa7] = (int)this;
      param_1[0x37] = 1;
      iVar3 = FUN_21c1468d(this,(LPDWORD)(param_1 + 0x96),0,0);
      param_1[0x95] = iVar3;
      param_1[0x37] = 1;
      local_8 = 0;
      goto LAB_21c14585;
    }
    DVar4 = GetLastError();
    if (DVar4 == 2) {
      iVar3 = *param_1;
      uVar7 = 0x1f42;
      uVar6 = 0x1f42;
      uVar5 = 0x800a1f42;
    }
    else {
      iVar3 = *param_1;
      if (DVar4 != 5) goto LAB_21c160ba;
      uVar7 = 0x1f45;
      uVar6 = 0x1f45;
      uVar5 = 0x800a1f45;
    }
LAB_21c160c6:
    local_8 = (**(code **)(iVar3 + 0x30))(uVar5,uVar6,uVar7);
  }
  if ((HANDLE)param_1[0x9b] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x9b]);
    param_1[0x9b] = 0;
  }
  if ((HANDLE)param_1[0xa0] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xa0]);
    param_1[0xa0] = 0;
  }
  if ((HWND)param_1[0xa8] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0xa8]);
    param_1[0xa8] = 0;
  }
LAB_21c14585:
  LeaveCriticalSection(local_c);
  return local_8;
}



LRESULT FUN_21c14667(HWND param_1,UINT param_2,uint param_3,int param_4)

{
  LRESULT LVar1;
  void *this;
  
  if (param_2 == 0x402) {
    this = (void *)GetWindowLongA(param_1,-0x15);
    FUN_21c195cc(this,param_3,param_4);
    LVar1 = 0;
  }
  else {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return LVar1;
}



void __thiscall FUN_21c1468d(void *this,LPDWORD param_1,SIZE_T param_2,DWORD param_3)

{
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_2,FUN_21c1482d,this,param_3,param_1);
  return;
}



undefined4 __fastcall FUN_21c146aa(int *param_1)

{
  uint uVar1;
  uint uVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 uVar5;
  _DCB local_24;
  LPCRITICAL_SECTION local_8;
  
  uVar5 = 0;
  local_8 = (LPCRITICAL_SECTION)(param_1 + 0xa1);
  EnterCriticalSection(local_8);
  if (param_1[0x37] != 0) {
    GetCommState((HANDLE)param_1[0x36],&local_24);
    local_24.BaudRate = param_1[0x40];
    local_24.ByteSize = (BYTE)param_1[0x42];
    local_24.Parity = (BYTE)param_1[0x41];
    local_24.StopBits = (BYTE)param_1[0x43];
    local_24.DCBlength = 0x1c;
    uVar2 = ((uint)(param_1[0x49] != 0) << 2 | (uint)(param_1[0x41] != 0) | param_1[0x3a] & 2U) << 1
    ;
    if (param_1[0x39] == 0) {
      uVar2 = uVar2 | local_24._8_4_ & 0xffffffc1 | 1;
    }
    else {
      uVar2 = uVar2 | local_24._8_4_ & 0xffffffd1 | 0x11;
    }
    uVar4 = (*(byte *)(param_1 + 0x3a) & 1) << 9;
    uVar1 = uVar2 & 0xfffffcbf;
    if ((uVar2 & 2) == 0) {
      uVar2 = CONCAT22((short)(uVar1 >> 0x10),
                       CONCAT11((byte)((uVar4 >> 1) >> 8) | (byte)(uVar1 >> 8) | (byte)(uVar4 >> 8),
                                (char)uVar1)) & 0xfffffbff;
      local_24.ErrorChar = '\0';
    }
    else {
      local_24.ErrorChar = *(char *)((int)param_1 + 0xf6);
      uVar2 = (uint)(local_24.ErrorChar != '\0') << 10 | uVar4 >> 1 | uVar2 & 0xfffff8bf | uVar4;
    }
    local_24._8_4_ = (uint)(param_1[0x3c] != 0) << 0xb;
    if ((*(byte *)(param_1 + 0x3a) & 2) == 0) {
      if (param_1[0x3f] == 0) {
        local_24._8_4_ = uVar2 & 0xffffc7ff | local_24._8_4_;
      }
      else {
        local_24._8_4_ = uVar2 & 0xffffd7ff | local_24._8_4_ | 0x1000;
      }
    }
    else {
      local_24._8_4_ = uVar2 & 0xffffe7ff | local_24._8_4_ | 0x2000;
    }
    local_24.XonChar = '\x11';
    local_24.XonLim = (short)param_1[0x3b] / 4;
    local_24.XoffChar = '\x13';
    local_24.EofChar = '\x1a';
    local_24.EvtChar = '\0';
    local_24.XoffLim = local_24.XonLim;
    BVar3 = SetCommState((HANDLE)param_1[0x36],&local_24);
    if (BVar3 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x30))(0x800a1f4f,0x1f4f,0x1f4f);
    }
  }
  LeaveCriticalSection(local_8);
  return uVar5;
}



uint __thiscall FUN_21c14818(void *this,undefined4 param_1,uint param_2)

{
  *(uint *)((int)this + 0x250) = param_2;
  return *(uint *)((int)this + 0x24c) & param_2;
}



undefined4 FUN_21c1482d(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)*param_1)();
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return uVar1;
}



undefined4 __fastcall FUN_21c1484f(int param_1)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  WPARAM wParam;
  DWORD DStack_1c;
  DWORD DStack_18;
  _OVERLAPPED local_14;
  
  local_14.Internal = 0;
  local_14.InternalHigh = 0;
  local_14.u.s.Offset = 0;
  local_14.u.s.OffsetHigh = 0;
  local_14.hEvent = (HANDLE)0x0;
  local_14.hEvent = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  if (local_14.hEvent == (HANDLE)0x0) {
    MessageBoxA((HWND)0x0,"Failed to create event for thread!","TTY Error!",0x30);
  }
  else {
    BVar2 = SetCommMask(*(HANDLE *)(param_1 + 0xc),0x1fd);
    if (BVar2 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xdc);
      while (iVar1 != 0) {
        DStack_1c = 0;
        BVar2 = SetCommMask(*(HANDLE *)(param_1 + 0xc),0x1fd);
        if (BVar2 == 0) goto LAB_21c162eb;
        BVar2 = WaitCommEvent(*(HANDLE *)(param_1 + 0xc),&DStack_1c,&local_14);
        if (BVar2 == 0) {
          DVar3 = GetLastError();
          if (DVar3 != 0x3e5) break;
          GetOverlappedResult(*(HANDLE *)(param_1 + 0xc),&local_14,&DStack_18,1);
        }
        if ((DStack_1c & 1) == 0) {
          if ((DStack_1c & 4) != 0) {
            wParam = 2;
            goto LAB_21c162d6;
          }
          if (DStack_1c != 0) {
            wParam = 4;
            goto LAB_21c162d6;
          }
        }
        else {
          wParam = 1;
LAB_21c162d6:
          PostMessageA(*(HWND *)(param_1 + 0x10),0x402,wParam,DStack_1c);
        }
        iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xdc);
      }
      CloseHandle(local_14.hEvent);
      return 1;
    }
LAB_21c162eb:
    CloseHandle(local_14.hEvent);
  }
  return 0;
}



undefined4 FUN_21c1493b(int param_1,short param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if ((0 < param_2) && (param_2 < 0x11)) {
      if (param_2 != *(short *)(param_1 + 0x20)) {
        *(short *)(param_1 + 0x20) = param_2;
        FUN_21c14a65((void *)(param_1 + -0x94),4);
        *(uint *)(param_1 + -0x10) = *(uint *)(param_1 + -0x10) | 1;
      }
      return 0;
    }
    iVar1 = *(int *)(param_1 + -0xc0);
    uVar4 = 0x1f42;
    uVar3 = 0x1f42;
    uVar2 = 0x800a1f42;
  }
  else {
    iVar1 = *(int *)(param_1 + -0xc0);
    uVar4 = 0x1f45;
    uVar3 = 0x1f45;
    uVar2 = 0x800a1f45;
  }
  uVar2 = (**(code **)(iVar1 + 0x30))(uVar2,uVar3,uVar4);
  return uVar2;
}



undefined4 __fastcall FUN_21c149af(int param_1)

{
  undefined4 *puVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x284));
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(int *)(param_1 + 0xdc) = 0;
    SetCommMask(*(HANDLE *)(param_1 + 0xd8),0);
    puVar1 = (undefined4 *)(param_1 + 0x254);
    WaitForSingleObject((HANDLE)*puVar1,60000);
    CloseHandle((HANDLE)*puVar1);
    *puVar1 = 0;
    EscapeCommFunction(*(HANDLE *)(param_1 + 0xd8),6);
    PurgeComm(*(HANDLE *)(param_1 + 0xd8),0xf);
    CloseHandle(*(HANDLE *)(param_1 + 0xd8));
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x284));
  return 0;
}



undefined4 * __thiscall FUN_21c14a36(void *this,byte param_1)

{
  FUN_21c14a5e((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21c14a5e(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_21c15920;
  return;
}



void __thiscall FUN_21c14a65(void *this,undefined4 param_1)

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



undefined4 FUN_21c14daf(uint param_1,undefined4 *param_2)

{
  char *pcVar1;
  LPWSTR pWVar2;
  undefined4 uVar3;
  
  pcVar1 = (char *)(param_1 + 0x36);
  param_1 = CONCAT31((int3)(param_1 >> 8),*pcVar1) & 0xffff00ff;
  if (*pcVar1 == '\0') {
    pWVar2 = SysAllocString(L"");
  }
  else {
    pWVar2 = FUN_21c14de7((LPCSTR)&param_1,(BSTR)0x0);
  }
  if (pWVar2 == (LPWSTR)0x0) {
    uVar3 = 0x8007000e;
  }
  else {
    *param_2 = pWVar2;
    uVar3 = 0;
  }
  return uVar3;
}



LPWSTR __cdecl FUN_21c14de7(LPCSTR param_1,BSTR param_2)

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



int FUN_21c14e4d(int param_1,LPCWSTR param_2)

{
  uint cbMultiByte;
  char cVar1;
  int iVar2;
  LPSTR local_84 [31];
  byte local_8;
  
  iVar2 = lstrlenW(param_2);
  cbMultiByte = iVar2 * 2 + 2;
  FUN_21c1181e(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,param_2,-1,local_84[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  cVar1 = *(char *)(param_1 + 0x36);
  if (cVar1 != *local_84[0]) {
    *(CHAR *)(param_1 + 0x36) = *local_84[0];
    iVar2 = FUN_21c146aa((int *)(param_1 + -0xc0));
    if (iVar2 < 0) {
      *(char *)(param_1 + 0x36) = cVar1;
      if (local_84[0] == (char *)0x0) {
        return iVar2;
      }
      if ((local_8 & 1) == 0) {
        return iVar2;
      }
      HeapFree(DAT_21c20030,0,local_84[0]);
      return iVar2;
    }
    FUN_21c14a65((void *)(param_1 + -0x94),0x13);
    *(uint *)(param_1 + -0x10) = *(uint *)(param_1 + -0x10) | 1;
  }
  if ((local_84[0] != (char *)0x0) && ((local_8 & 1) != 0)) {
    HeapFree(DAT_21c20030,0,local_84[0]);
  }
  return 0;
}



int FUN_21c1502a(int param_1,LPCWSTR param_2)

{
  uint cbMultiByte;
  LPSTR lpString2;
  int iVar1;
  LPSTR local_84 [31];
  byte local_8;
  
  iVar1 = lstrlenW(param_2);
  cbMultiByte = iVar1 * 2 + 2;
  FUN_21c1181e(local_84,cbMultiByte);
  WideCharToMultiByte(0,0,param_2,-1,local_84[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
  lpString2 = local_84[0];
  iVar1 = FUN_21c150c2((void *)(param_1 + -0xc0),local_84[0]);
  if (iVar1 < 0) {
    if ((local_84[0] != (char *)0x0) && ((local_8 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_84[0]);
    }
  }
  else {
    lstrcpyA((LPSTR)(param_1 + 0x78),lpString2);
    FUN_21c14a65((void *)(param_1 + -0x94),0x17);
    *(uint *)(param_1 + -0x10) = *(uint *)(param_1 + -0x10) | 1;
    if ((local_84[0] != (char *)0x0) && ((local_8 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_84[0]);
    }
    iVar1 = 0;
  }
  return iVar1;
}



int __thiscall FUN_21c150c2(void *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *extraout_EAX;
  char *extraout_EAX_00;
  char *extraout_EAX_01;
  char *extraout_EAX_02;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  local_10 = -1;
  local_c = -1;
  local_14 = -1;
  FUN_21c15203(param_1);
  pcVar1 = (char *)FUN_21c15228(param_1);
  if (*pcVar1 != '\0') {
    pcVar2 = FUN_21c15243(pcVar1,&local_8);
    if (local_8 == 0) {
      local_8 = -1;
    }
    if (local_8 < 0x3e801) {
      FUN_21c1535c(pcVar1,&PTR_s_256000_21c205f0,&local_8);
      pcVar2 = extraout_EAX;
    }
    pcVar1 = (char *)FUN_21c153bb(pcVar2);
    FUN_21c1535c(pcVar1,&PTR_DAT_21c201f0,&local_10);
    pcVar1 = (char *)FUN_21c153bb(extraout_EAX_00);
    FUN_21c1535c(pcVar1,&PTR_DAT_21c201a0,&local_c);
    pcVar1 = (char *)FUN_21c153bb(extraout_EAX_01);
    FUN_21c1535c(pcVar1,&PTR_DAT_21c201d0,&local_14);
    pcVar1 = (char *)FUN_21c15228(extraout_EAX_02);
    if ((((local_8 == -2) || (local_10 == -2)) || (local_c == -2)) ||
       ((local_14 == -2 || (*pcVar1 != '\0')))) {
                    // WARNING: Load size is inaccurate
      iVar3 = (**(code **)(*this + 0x30))(0x800a017c,0x17c,0x17c);
      return iVar3;
    }
    if (local_8 != -1) {
      *(int *)((int)this + 0x100) = local_8;
    }
    if (local_10 != -1) {
      *(int *)((int)this + 0x104) = local_10;
    }
    if (local_c != -1) {
      *(int *)((int)this + 0x108) = local_c;
    }
    if (local_14 != -1) {
      *(int *)((int)this + 0x10c) = local_14;
    }
    iVar3 = FUN_21c146aa((int *)this);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  iVar3 = FUN_21c11eca(this,param_1);
  if (-1 < iVar3) {
    iVar3 = 0;
  }
  return iVar3;
}



void FUN_21c15203(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *param_1;
    if (('@' < cVar1) && (cVar1 < '[')) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  FUN_21c16274(cVar1,param_1);
  return;
}



void FUN_21c15228(char *param_1)

{
  for (; (*param_1 == ' ' || (*param_1 == '\t')); param_1 = param_1 + 1) {
  }
  return;
}



char * __cdecl FUN_21c15243(char *param_1,int *param_2)

{
  int iVar1;
  CHAR local_104 [256];
  
  if (param_2 != (int *)0x0) {
    local_104[0] = '\0';
    param_1 = FUN_21c1528e(param_1,local_104,0xff);
    iVar1 = FUN_21c15311(local_104);
    *param_2 = iVar1;
  }
  return param_1;
}



char * __cdecl FUN_21c1528e(char *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if ((param_2 != (LPSTR)0x0) && (param_1 != (char *)0x0)) {
    cVar2 = *param_1;
    while ((cVar2 != '\0' && ((cVar2 == ' ' || (('\b' < cVar2 && (cVar2 < '\x0e'))))))) {
      iVar4 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = param_1[iVar4];
    }
    cVar2 = param_1[iVar3];
    iVar4 = iVar3;
    while (((cVar2 != '\0' && (((cVar2 < '\t' || ('\r' < cVar2)) && (cVar2 != ' ')))) &&
           (cVar2 != ','))) {
      if (param_3 <= iVar4) goto LAB_21c16290;
      iVar1 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar2 = param_1[iVar1];
    }
    if (param_3 <= iVar4) {
LAB_21c16290:
      iVar4 = param_3 + -1;
    }
    if (0 < iVar4 - iVar3) {
      lstrcpynA(param_2,param_1 + iVar3,(iVar4 - iVar3) + 1);
      param_1 = param_1 + iVar4;
    }
  }
  return param_1;
}



int __cdecl FUN_21c15311(LPCSTR param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 1;
  if (param_1 == (LPCSTR)0x0) {
LAB_21c16298:
    iVar3 = -2;
  }
  else {
    iVar2 = lstrlenA(param_1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      cVar1 = param_1[iVar2];
      if ((cVar1 < '0') || ('9' < cVar1)) goto LAB_21c16298;
      iVar3 = iVar3 + (cVar1 + -0x30) * iVar4;
      iVar4 = iVar4 * 10;
    }
  }
  return iVar3;
}



// WARNING: Variable defined which should be unmapped: param_1

char * FUN_21c1535c(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((*param_1 != ',') && (*param_1 != '\0')) {
    for (; (LPCSTR)*param_2 != (LPCSTR)0x0; param_2 = param_2 + 2) {
      iVar1 = lstrlenA((LPCSTR)*param_2);
      bVar4 = true;
      pcVar2 = (char *)*param_2;
      pcVar3 = param_1;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        *param_3 = param_2[1];
        return param_1;
      }
    }
    *param_3 = 0xfffffffe;
  }
  return param_1;
}



void FUN_21c153bb(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_21c15228(param_1);
  if (*pcVar1 == ',') {
    FUN_21c15228(pcVar1 + 1);
  }
  return;
}



int FUN_21c1545e(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
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



int FUN_21c154e7(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + -0x4c);
  iVar2 = FUN_21c1552d(piVar1,param_2);
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



void __thiscall FUN_21c1552d(void *this,int *param_1)

{
  int iVar1;
  undefined2 local_1c [4];
  int local_14;
  int local_c;
  undefined4 local_8;
  
  FUN_21c15582((int *)((int)this + 0x88),&local_c);
  local_14 = local_c;
  local_1c[0] = 3;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,u__ExtentX_21c20678,local_1c);
  if (-1 < iVar1) {
    local_14 = local_8;
    (**(code **)(*param_1 + 0x10))(param_1,u__ExtentY_21c2068c,local_1c);
  }
  return;
}



void __cdecl FUN_21c15582(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_21c125e9();
  iVar1 = DAT_21c2022c;
  iVar2 = DAT_21c2022c >> 1;
  *param_2 = (*param_1 * 0x9ec + (DAT_21c20228 >> 1)) / DAT_21c20228;
  param_2[1] = (param_1[1] * 0x9ec + iVar2) / iVar1;
  return;
}



int FUN_21c155c8(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined2 local_14 [4];
  undefined4 local_c;
  
  local_14[0] = 3;
  local_c = 0x60000;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"_Version",local_14);
  if (-1 < iVar1) {
    FUN_21c1560c(param_2,param_3);
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Type propagation algorithm not settling

int FUN_21c1560c(int *param_1,int param_2)

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
  undefined1 local_18 [16];
  int local_8;
  
  VariantInit((VARIANTARG *)&((_union_2683 *)local_18)->n2);
  if (PTR_u_CommPort_21c20418 != (undefined *)0x0) {
    puVar4 = &DAT_21c20428;
    do {
      if (param_2 == 0) {
        uVar3 = *puVar4;
        bVar9 = true;
        pcVar6 = (char *)(puVar4[-3] + 0xe0 + local_8);
        puVar8 = puVar4 + -2;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar9 = *pcVar6 == (char)*puVar8;
          pcVar6 = pcVar6 + 1;
          puVar8 = (uint *)((int)puVar8 + 1);
        } while (bVar9);
        if (!bVar9) goto LAB_21c1563a;
      }
      else {
LAB_21c1563a:
        local_18._0_2_ = (undefined2)puVar4[-1];
        uVar3 = *puVar4;
        pLVar5 = (LONG *)(puVar4[-3] + 0xe0 + local_8);
        p_Var7 = &(((_union_2683 *)local_18)->n2).n3;
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
        iVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2,(_union_2683 *)local_18);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      puVar8 = puVar4 + 1;
      puVar4 = puVar4 + 5;
    } while (*puVar8 != 0);
  }
  return 0;
}



int FUN_21c15688(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_21c156b9((void *)(param_1 + -0x50),param_2);
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



void __thiscall FUN_21c156b9(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_21c156d7(this,param_1);
  if (-1 < iVar1) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x3c))(this,param_1);
  }
  return;
}



void __thiscall FUN_21c156d7(void *this,int *param_1)

{
  int iVar1;
  int local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0x12344321;
  local_8 = 8;
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_c,8,0);
  if (-1 < iVar1) {
    FUN_21c15582((int *)((int)this + 0x88),local_14);
    (**(code **)(*param_1 + 0x10))(param_1,local_14,8,0);
  }
  return;
}



int FUN_21c1572a(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [2];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined4 local_10;
  undefined1 local_c;
  uint local_8;
  
  puVar2 = local_30;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_30[0] = 0x648a5601;
  local_30[1] = 0x60000;
  local_28 = *(undefined2 *)(param_1 + 0x110);
  local_26 = *(undefined2 *)(param_1 + 0xe0);
  local_24 = *(undefined2 *)(param_1 + 0xec);
  local_22 = *(undefined2 *)(param_1 + 0xee);
  local_20 = *(undefined2 *)(param_1 + 0xf4);
  local_1e = *(undefined2 *)(param_1 + 0xf8);
  local_10 = *(undefined4 *)(param_1 + 0xe8);
  local_8 = (*(uint *)(param_1 + 0xfc) & 1) << 2 |
            (*(uint *)(param_1 + 0xf0) & 1) << 1 |
            (local_8 ^ (*(uint *)(param_1 + 0xe4) ^ local_8) & 1) & 0xffffffe1 |
            (*(uint *)(param_1 + 0x114) & 1) << 3 | (*(uint *)(param_1 + 0x118) & 1) << 4;
  local_c = *(undefined1 *)(param_1 + 0xf6);
  local_1c = *(undefined4 *)(param_1 + 0x100);
  local_18 = *(undefined2 *)(param_1 + 0x104);
  local_16 = *(undefined2 *)(param_1 + 0x108);
  local_14 = *(undefined2 *)(param_1 + 0x10c);
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_30,0x2c,&param_1);
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_21c1585a(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + -0x4c) + 0x74))();
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1;
  return (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 FUN_21c1587e(void)

{
  return 1;
}



undefined4 FUN_21c160b8(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  HWND unaff_EDI;
  
  uVar1 = (**(code **)(*unaff_ESI + 0x30))(0x800a1f4c,0x1f4c,0x1f4c);
  *(undefined4 *)(unaff_EBP + -4) = uVar1;
  if ((HWND)unaff_ESI[0x9b] != unaff_EDI) {
    CloseHandle((HWND)unaff_ESI[0x9b]);
    unaff_ESI[0x9b] = (int)unaff_EDI;
  }
  if ((HWND)unaff_ESI[0xa0] != unaff_EDI) {
    CloseHandle((HWND)unaff_ESI[0xa0]);
    unaff_ESI[0xa0] = (int)unaff_EDI;
  }
  if ((HWND)unaff_ESI[0xa8] != unaff_EDI) {
    DestroyWindow((HWND)unaff_ESI[0xa8]);
    unaff_ESI[0xa8] = (int)unaff_EDI;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -8));
  return *(undefined4 *)(unaff_EBP + -4);
}



void __fastcall FUN_21c16274(char param_1,char *param_2)

{
  char cVar1;
  
  *param_2 = param_1 + ' ';
  do {
    param_2 = param_2 + 1;
    if (*param_2 == '\0') {
      return;
    }
    cVar1 = *param_2;
  } while ((cVar1 < 'A') || ('Z' < cVar1));
  FUN_21c16274(cVar1,param_2);
  return;
}



void FUN_21c1631f(void)

{
  int in_EAX;
  short *psVar1;
  short *unaff_ESI;
  code *unaff_EDI;
  
  (*unaff_EDI)(*(undefined4 *)(in_EAX + 0x44),DAT_21c20008);
  do {
    psVar1 = unaff_ESI;
    unaff_ESI = psVar1 + 4;
    if (*unaff_ESI == -1) {
      if (DAT_21c20178 != (HWND)0x0) {
        DestroyWindow(DAT_21c20178);
        DAT_21c20178 = (HWND)0x0;
        (*unaff_EDI)(s_CtlFrameWork_Parking_21c20718,DAT_21c20008);
      }
      if (DAT_21c20174 != '\0') {
        (*unaff_EDI)("CtlFrameWork_ReflectWindow",DAT_21c20008);
        DAT_21c20174 = '\0';
      }
      return;
    }
  } while ((*unaff_ESI != 2) || (*(short *)(*(int *)(psVar1 + 6) + 0x48) == 0));
  FUN_21c1631f();
  return;
}



undefined4 __fastcall switchD_21c12123::caseD_10a(undefined4 param_1,int param_2)

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



undefined4 __fastcall FUN_21c16662(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_21c17110;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *unaff_ESI == *pcVar2;
    unaff_ESI = unaff_ESI + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (bVar3) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0x68);
      *unaff_EBP = param_2 + 0x68;
      (**(code **)(iVar1 + 4))(param_2 + 0x68);
      return 0;
    }
    *unaff_EBP = 0;
  }
  (**(code **)(*(int *)*unaff_EBP + 4))((int *)*unaff_EBP);
  return 0;
}



undefined4 __fastcall FUN_21c16725(undefined4 param_1,int param_2)

{
  int iVar1;
  int *unaff_EBP;
  char *unaff_ESI;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_21c17258;
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



void FUN_21c17398(void)

{
  SysAllocString(L"Copyright (c) 1994 ");
  return;
}



undefined4 __cdecl
DLLGetDocumentation(undefined4 param_1,undefined4 param_2,LCID param_3,uint param_4,
                   undefined4 *param_5)

{
  int iVar1;
  LPWSTR pWVar2;
  CHAR local_104 [256];
  
                    // 0x73a4  5  DLLGetDocumentation
  *param_5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20040);
  if ((param_3 != DAT_21c20c68) || (DAT_21c2017c == (HMODULE)0x0)) {
    if ((DAT_21c2017c != (HMODULE)0x0) &&
       ((DAT_21c2017c != DAT_21c20004 && (DAT_21c2017c != DAT_21c20008)))) {
      FreeLibrary(DAT_21c2017c);
    }
    DAT_21c2017c = FUN_21c12a19(param_3);
    DAT_21c20c68 = param_3;
  }
  iVar1 = LoadStringA(DAT_21c2017c,param_4 & 0xffff,local_104,0xff);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20040);
  if (0 < iVar1) {
    pWVar2 = FUN_21c14de7(local_104,(BSTR)0x0);
    *param_5 = pWVar2;
  }
  return 0;
}



ATOM FUN_21c17445(void)

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
  local_2c.lpfnWndProc = FUN_21c1b8b3;
  local_2c.hInstance = DAT_21c20008;
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = (HBRUSH)0x6;
  local_2c.lpszClassName = *(LPCSTR *)(PTR_PTR_21c20134 + 0x44);
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}



LPSTGMEDIUM FUN_21c174ae(int param_1,ushort *param_2,LPSTGMEDIUM param_3,int param_4)

{
  LPOLESTR pOVar1;
  uint uVar2;
  int iVar3;
  LPSTGMEDIUM pSVar4;
  CHAR *pCVar5;
  CHAR local_28 [36];
  
  if (param_3->tymed == 4) {
    uVar2 = FUN_21c19cb2();
    param_2 = (ushort *)(uint)(*param_2 == uVar2);
    pSVar4 = param_3;
    if (param_2 != (ushort *)0x0) {
      pOVar1 = (param_3->u).lpszFileName;
      pCVar5 = local_28;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        pCVar5[0] = '\0';
        pCVar5[1] = '\0';
        pCVar5[2] = '\0';
        pCVar5[3] = '\0';
        pCVar5 = pCVar5 + 4;
      }
      FUN_21c17573((int *)&PTR_u_CommPort_21c20a80,(int)local_28);
      pSVar4 = (LPSTGMEDIUM)FUN_21c198c6((int *)pOVar1,(int *)&PTR_u_CommPort_21c20a80,local_28);
      if (-1 < (int)pSVar4) {
        FUN_21c175be((void *)(param_1 + -0xcc),(undefined2 *)local_28);
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



undefined4 FUN_21c17573(int *param_1,int param_2)

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
        piVar5 = piVar1 + 6;
        piVar1 = piVar1 + 8;
      } while (*piVar5 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 __thiscall FUN_21c175be(void *this,undefined2 *param_1)

{
  uint uVar1;
  LPSTR pCVar2;
  int iVar3;
  LPSTR local_104 [31];
  byte local_88;
  LPSTR local_84 [31];
  byte local_8;
  
  *(undefined2 *)((int)this + 0xe0) = *param_1;
  *(int *)((int)this + 0xe4) = (int)(short)param_1[1];
  *(int *)((int)this + 0xe8) = (int)(short)param_1[2];
  *(undefined2 *)((int)this + 0xec) = param_1[3];
  *(undefined2 *)((int)this + 0xee) = param_1[4];
  *(int *)((int)this + 0xf0) = (int)(short)param_1[5];
  *(undefined2 *)((int)this + 0xf4) = param_1[6];
  if (*(LPCWSTR *)(param_1 + 8) == (LPCWSTR)0x0) {
    *(undefined1 *)((int)this + 0xf6) = 0x20;
  }
  else {
    iVar3 = lstrlenW(*(LPCWSTR *)(param_1 + 8));
    uVar1 = iVar3 * 2 + 2;
    FUN_21c1181e(local_84,uVar1);
    WideCharToMultiByte(0,0,*(LPCWSTR *)(param_1 + 8),-1,local_84[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0);
    pCVar2 = local_84[0];
    SysFreeString(*(BSTR *)(param_1 + 8));
    *(CHAR *)((int)this + 0xf6) = *pCVar2;
    if ((local_84[0] != (LPSTR)0x0) && ((local_8 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_84[0]);
    }
  }
  *(undefined2 *)((int)this + 0xf8) = param_1[10];
  *(int *)((int)this + 0xfc) = (int)(short)param_1[0xb];
  iVar3 = lstrlenW(*(LPCWSTR *)(param_1 + 0xc));
  uVar1 = iVar3 * 2 + 2;
  FUN_21c1181e(local_104,uVar1);
  WideCharToMultiByte(0,0,*(LPCWSTR *)(param_1 + 0xc),-1,local_104[0],uVar1,(LPCSTR)0x0,(LPBOOL)0x0)
  ;
  pCVar2 = local_104[0];
  iVar3 = FUN_21c150c2(this,local_104[0]);
  if (-1 < iVar3) {
    lstrcpyA((LPSTR)((int)this + 0x138),pCVar2);
  }
  if (*(BSTR *)(param_1 + 0xc) != (BSTR)0x0) {
    SysFreeString(*(BSTR *)(param_1 + 0xc));
  }
  *(undefined2 *)((int)this + 0x110) = param_1[0xe];
  *(int *)((int)this + 0x114) = (int)(short)param_1[0xf];
  *(int *)((int)this + 0x118) = (int)(short)param_1[0x10];
  if ((local_104[0] != (char *)0x0) && ((local_88 & 1) != 0)) {
    HeapFree(DAT_21c20030,0,local_104[0]);
  }
  return 0;
}



void __thiscall FUN_21c177bc(void *this,UINT param_1,uint param_2,int param_3)

{
  if (param_1 == 0x402) {
    FUN_21c195cc(this,param_2,param_3);
  }
  FUN_21c1d903(this,param_1,param_2,param_3);
  return;
}



undefined4 __cdecl FUN_21c177eb(int param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < param_2) {
    do {
      BVar1 = IsDBCSLeadByte(*(BYTE *)(iVar2 + param_1));
      if (BVar1 != 0) {
        if (param_2 + -1 <= iVar2) {
          if (param_2 != iVar2) {
            return 0;
          }
          return 1;
        }
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= param_2);
  }
  return 0;
}



uint __thiscall FUN_21c17824(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24c);
  *(uint *)((int)this + 0x24c) = ~param_2 & uVar1;
  return param_2 & uVar1;
}



undefined4 FUN_21c1783f(uint param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  piVar1 = (int *)(param_1 - 0xc0);
  uVar3 = FUN_21c1bcbb(piVar1);
  if (uVar3 == 1) {
    uVar4 = (**(code **)(*piVar1 + 0x30))(0x800a018a,0x18a,0x18a);
  }
  else {
    if (*(int *)(uVar2 + 0x1c) == 0) {
      *param_2 = 0;
    }
    else {
      GetCommModemStatus(*(HANDLE *)(uVar2 + 0x18),&param_1);
      *param_2 = -(ushort)((param_1 & 0x80) != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_21c17900(uint param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  piVar1 = (int *)(param_1 - 0xc0);
  uVar3 = FUN_21c1bcbb(piVar1);
  if (uVar3 == 1) {
    uVar4 = (**(code **)(*piVar1 + 0x30))(0x800a018a,0x18a,0x18a);
  }
  else {
    if (*(int *)(uVar2 + 0x1c) == 0) {
      *param_2 = 0;
    }
    else {
      GetCommModemStatus(*(HANDLE *)(uVar2 + 0x18),&param_1);
      *param_2 = -(ushort)((param_1 & 0x10) != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_21c179c1(uint param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = param_1;
  piVar1 = (int *)(param_1 - 0xc0);
  uVar3 = FUN_21c1bcbb(piVar1);
  if (uVar3 == 1) {
    uVar4 = (**(code **)(*piVar1 + 0x30))(0x800a018a,0x18a,0x18a);
  }
  else {
    if (*(int *)(uVar2 + 0x1c) == 0) {
      *param_2 = 0;
    }
    else {
      GetCommModemStatus(*(HANDLE *)(uVar2 + 0x18),&param_1);
      *param_2 = -(ushort)((param_1 & 0x20) != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



int FUN_21c17ae1(int param_1,undefined2 *param_2)

{
  int *this;
  uint uVar1;
  int iVar2;
  _COMSTAT local_10;
  
  this = (int *)(param_1 + -0xc0);
  uVar1 = FUN_21c1bcbb(this);
  if (uVar1 == 1) {
    iVar2 = (**(code **)(*this + 0x30))(0x800a018a,0x18a,0x18a);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *param_2 = 0;
    }
    else {
      iVar2 = FUN_21c1938b(this,&local_10);
      if (iVar2 < 0) {
        return iVar2;
      }
      *param_2 = (undefined2)local_10.cbInQue;
    }
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_21c17c5e(int param_1,undefined2 *param_2)

{
  int *this;
  uint uVar1;
  int iVar2;
  _COMSTAT local_10;
  
  this = (int *)(param_1 + -0xc0);
  uVar1 = FUN_21c1bcbb(this);
  if (uVar1 == 1) {
    iVar2 = (**(code **)(*this + 0x30))(0x800a018a,0x18a,0x18a);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar2 = FUN_21c1938b(this,&local_10);
      if (iVar2 < 0) {
        *param_2 = 0;
        return iVar2;
      }
      *param_2 = (undefined2)local_10.cbOutQue;
    }
    iVar2 = 0;
  }
  return iVar2;
}



undefined4 FUN_21c17d02(int param_1,short param_2,undefined4 param_3,short *param_4,int param_5)

{
  DWORD DVar1;
  int iVar2;
  UINT UVar3;
  DWORD DVar4;
  BOOL BVar5;
  short *psVar6;
  DWORD DVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  _COMMPROP local_6c;
  _COMSTAT local_2c;
  DWORD local_20;
  void *local_1c;
  DWORD local_18;
  LONG local_14;
  LONG local_10;
  int local_c;
  LPSTR local_8;
  
  iVar2 = param_1;
  local_20 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = *(int *)(param_1 + -0xc0);
    uVar10 = 0;
    uVar9 = 0x1f52;
    uVar8 = 0x800a1f52;
LAB_21c17d2f:
    uVar8 = (**(code **)(iVar2 + 0x30))(uVar8,uVar9,uVar10);
    return uVar8;
  }
  if ((param_2 == 8) || (param_2 == 0x2011)) {
    psVar6 = &param_2;
  }
  else if ((param_2 != 0x400c) || ((psVar6 = param_4, *param_4 != 8 && (*param_4 != 0x2011)))) {
    uVar8 = (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a017c,0x17c,0x17c);
    return uVar8;
  }
  if ((*psVar6 == 0x2011) &&
     ((*(SAFEARRAY **)(psVar6 + 4) == (SAFEARRAY *)0x0 ||
      (UVar3 = SafeArrayGetDim(*(SAFEARRAY **)(psVar6 + 4)), UVar3 != 1)))) {
    iVar2 = *(int *)(iVar2 + -0xc0);
    uVar10 = 0xd;
    uVar9 = 0xd;
    uVar8 = 0x800a000d;
    goto LAB_21c17d2f;
  }
  if (*psVar6 == 8) {
    DVar4 = SysStringLen(*(BSTR *)(psVar6 + 4));
  }
  else {
    local_10 = 0;
    local_14 = 0;
    SafeArrayGetLBound(*(SAFEARRAY **)(psVar6 + 4),1,&local_10);
    SafeArrayGetUBound(*(SAFEARRAY **)(psVar6 + 4),1,&local_14);
    DVar4 = (local_14 - local_10) + 1;
  }
  if (DVar4 == 0) {
    return 0;
  }
  if (*psVar6 == 8) {
    local_8 = (LPSTR)FUN_21c116ad(DVar4 * 2);
    DVar4 = WideCharToMultiByte(0,0,*(LPCWSTR *)(psVar6 + 4),DVar4,local_8,DVar4 * 2,(LPCSTR)0x0,
                                (LPBOOL)0x0);
  }
  else {
    local_8 = (LPSTR)FUN_21c116ad(DVar4);
    for (local_c = local_10; local_c <= local_14; local_c = local_c + 1) {
      SafeArrayGetElement(*(SAFEARRAY **)(psVar6 + 4),&local_c,&param_1);
      local_8[local_c - local_10] = (CHAR)param_1;
    }
  }
  BVar5 = GetOverlappedResult(*(HANDLE *)(iVar2 + 0x18),(LPOVERLAPPED)(iVar2 + 0x1b0),&local_18,1);
  DVar1 = local_18;
  DVar7 = local_20;
  if (BVar5 != 0) {
    ResetEvent(*(HANDLE *)(iVar2 + 0x1c0));
    *(undefined4 *)(iVar2 + 0x1b0) = 0;
    *(undefined4 *)(iVar2 + 0x1b4) = 0;
    *(undefined4 *)(iVar2 + 0x1b8) = 0;
    *(undefined4 *)(iVar2 + 0x1bc) = 0;
    DVar7 = DVar1;
  }
  local_1c = (void *)(iVar2 + -0xc0);
  local_20 = FUN_21c1938b(local_1c,&local_2c);
  if (DVar7 != 0) {
    param_5 = 0;
    BVar5 = GetCommProperties(*(HANDLE *)(iVar2 + 0x18),&local_6c);
    if ((BVar5 != 0) && ((local_6c.dwMaxTxQueue == 0 || (DVar4 + DVar7 <= local_6c.dwMaxTxQueue))))
    {
      param_5 = 1;
    }
    if (param_5 == 0) {
      FUN_21c1951e(local_1c,0x3f2);
      goto LAB_21c17ec9;
    }
    ResetEvent(*(HANDLE *)(iVar2 + 0x1c0));
  }
  *(DWORD *)(iVar2 + 0x1b4) = DVar4;
  BVar5 = WriteFile(*(HANDLE *)(iVar2 + 0x18),local_8,DVar4,&local_18,(LPOVERLAPPED)(iVar2 + 0x1b0))
  ;
  if (BVar5 == 0) {
    DVar4 = GetLastError();
    if (DVar4 == 0x3e5) {
      WaitForSingleObject(*(HANDLE *)(iVar2 + 0x1c0),500);
      local_18 = *(DWORD *)(iVar2 + 0x1b4);
    }
    else {
      local_18 = 0;
    }
  }
  FUN_21c19403(local_1c);
  local_20 = 0;
LAB_21c17ec9:
  if (local_8 == (LPSTR)0x0) {
    return local_20;
  }
  FUN_21c1154b(local_8);
  return local_20;
}



int FUN_21c17fd3(int param_1,undefined4 *param_2)

{
  DWORD DVar1;
  int iVar2;
  LPCSTR lpBuffer;
  BOOL BVar3;
  SAFEARRAY *psa;
  UINT ui;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBX;
  LPCSTR pCVar7;
  int *this;
  _union_2683 local_44;
  _COMSTAT local_34;
  SAFEARRAYBOUND local_28;
  uint local_20;
  DWORD local_1c;
  int *local_18;
  uint local_14;
  LONG local_10;
  LPCSTR local_c;
  DWORD local_8;
  
  VariantInit((VARIANTARG *)&local_44.n2);
  iVar6 = param_1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*(int *)(param_1 + -0xc0) + 0x30))(0x800a1f52,0x1f52,0x1f52);
    return unaff_EBX;
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    iVar2 = FUN_21c1938b((void *)(param_1 + -0xc0),&local_34);
    local_8 = local_34.cbInQue;
    if (iVar2 < 0) {
      return unaff_EBX;
    }
  }
  else {
    local_8 = (int)*(short *)(param_1 + 0x2e);
  }
  if (local_8 == 0) {
    if (*(int *)(iVar6 + 0x58) == 0) {
      local_44.n2.vt = 8;
      local_44._8_4_ = (SAFEARRAY *)0x0;
    }
    else {
      local_28.cElements = 0;
      local_28.lLbound = 0;
      local_44._8_4_ = SafeArrayCreate(0x11,1,&local_28);
      if ((SAFEARRAY *)local_44._8_4_ == (SAFEARRAY *)0x0) {
        return unaff_EBX;
      }
      local_44.n2.vt = 0x2011;
    }
    *param_2 = local_44._0_4_;
    param_2[1] = local_44.decVal.Hi32;
    param_2[2] = local_44._8_4_;
    param_2[3] = local_44._12_4_;
    return unaff_EBX;
  }
  uVar5 = local_8 + 2;
  local_20 = uVar5;
  lpBuffer = (LPCSTR)FUN_21c116ad(uVar5);
  pCVar7 = lpBuffer;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pCVar7[0] = '\0';
    pCVar7[1] = '\0';
    pCVar7[2] = '\0';
    pCVar7[3] = '\0';
    pCVar7 = pCVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pCVar7 = '\0';
    pCVar7 = pCVar7 + 1;
  }
  local_c = lpBuffer;
  BVar3 = ReadFile(*(HANDLE *)(iVar6 + 0x18),lpBuffer,local_8,&local_8,(LPOVERLAPPED)(iVar6 + 0x19c)
                  );
  DVar1 = local_8;
  if (BVar3 == 0) {
    iVar6 = *(int *)(iVar6 + -0xc0);
LAB_21c180df:
    iVar2 = (**(code **)(iVar6 + 0x30))(0x800a1f54,0x1f54,0x1f54);
    goto LAB_21c180e4;
  }
  if (*(int *)(iVar6 + 0x58) == 1) {
    local_28.lLbound = 0;
    local_28.cElements = local_8;
    psa = SafeArrayCreate(0x11,1,&local_28);
    if (psa != (SAFEARRAY *)0x0) {
      local_10 = 0;
      if (0 < (int)local_8) {
        do {
          SafeArrayPutElement(psa,&local_10,lpBuffer + local_10);
          local_10 = local_10 + 1;
        } while (local_10 < (int)local_8);
      }
      local_44.n2.vt = 0x2011;
      local_44._8_4_ = psa;
      goto LAB_21c18164;
    }
LAB_21c181cd:
    iVar2 = -0x7ff8fff2;
  }
  else {
    *(undefined4 *)(iVar6 + 0x70) = 1;
    iVar2 = GetSystemMetrics(0x2a);
    if ((iVar2 != 0) && (iVar2 = FUN_21c177eb((int)lpBuffer,DVar1 - 1), iVar2 != 0)) {
      local_14 = 0;
      this = (int *)(iVar6 + -0xc0);
      local_18 = this;
      iVar2 = FUN_21c1938b(this,&local_34);
      while (-1 < iVar2) {
        if ((local_34.cbInQue != 0) || (this = local_18, 14999 < local_14)) {
          local_1c = 1;
          BVar3 = ReadFile(*(HANDLE *)(iVar6 + 0x18),&param_1,1,&local_1c,
                           (LPOVERLAPPED)(iVar6 + 0x19c));
          if (BVar3 != 0) {
            lpBuffer = local_c;
            if (local_1c != 0) {
              local_c[local_20 - 2] = (CHAR)param_1;
              local_8 = local_8 + 1;
            }
            goto LAB_21c18164;
          }
          iVar6 = *this;
          goto LAB_21c180df;
        }
        Sleep(0xfa);
        local_14 = local_14 + 0xfa;
        iVar2 = FUN_21c1938b(local_18,&local_34);
        this = local_18;
      }
      goto LAB_21c180e4;
    }
LAB_21c18164:
    uVar5 = 0;
    if ((*(int *)(iVar6 + 0x54) != 0) && (local_8 != 0)) {
      do {
        if (lpBuffer[uVar5] == '\x1a') {
          FUN_21c1951e((void *)(iVar6 + -0xc0),7);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_8);
    }
    iVar2 = FUN_21c19403((void *)(iVar6 + -0xc0));
    if (iVar2 < 0) goto LAB_21c180e4;
    iVar2 = 0;
    if (*(int *)(iVar6 + 0x58) == 0) {
      ui = MultiByteToWideChar(0,0,local_c,local_8,(LPWSTR)0x0,0);
      local_44.n2.vt = 8;
      local_44._8_4_ = SysAllocStringLen((OLECHAR *)0x0,ui);
      if ((SAFEARRAY *)local_44._8_4_ == (SAFEARRAY *)0x0) goto LAB_21c181cd;
      MultiByteToWideChar(0,0,local_c,local_8,(LPWSTR)local_44._8_4_,ui);
      BVar3 = IsBadWritePtr(param_2,4);
      if (BVar3 != 0) {
        iVar2 = -0x7fffbffd;
        goto LAB_21c180e4;
      }
    }
    *param_2 = local_44._0_4_;
    param_2[1] = local_44.decVal.Hi32;
    param_2[2] = local_44._8_4_;
    param_2[3] = local_44._12_4_;
  }
LAB_21c180e4:
  if (local_c != (LPCSTR)0x0) {
    FUN_21c1154b(local_c);
  }
  if (iVar2 < 0) {
    VariantClear((VARIANTARG *)&local_44.n2);
  }
  return unaff_EBX;
}



undefined4 * __thiscall FUN_21c18680(void *this,byte param_1)

{
  FUN_21c186a8((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21c186a8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_21c16e88;
  param_1[5] = &PTR_LAB_21c16e48;
  *param_1 = &PTR_FUN_21c170a8;
  param_1[5] = &PTR_LAB_21c17068;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_21c1e241((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_21c13b00;
  InterlockedDecrement(&DAT_21c20168);
  return;
}



void __fastcall FUN_21c186b5(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_21c170a8;
  param_1[5] = &PTR_LAB_21c17068;
  if ((HWND)param_1[7] != (HWND)0x0) {
    SetWindowLongA((HWND)param_1[7],-0x15,-1);
    DestroyWindow((HWND)param_1[7]);
    param_1[7] = 0;
  }
  FUN_21c1e241((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    param_1[6] = 0;
    (**(code **)(iVar2 + 8))(piVar1);
  }
  *param_1 = &PTR_FUN_21c13b00;
  InterlockedDecrement(&DAT_21c20168);
  return;
}



undefined4 __thiscall
FUN_21c1870f(void *this,HWND param_1,LPCWSTR param_2,ITypeLib *param_3,ITypeInfo *param_4)

{
  uint cbMultiByte;
  ITypeLibVtbl *pIVar1;
  undefined4 *puVar2;
  int iVar3;
  IID *riid;
  ITypeInfoVtbl *pIVar4;
  IErrorInfo *pIVar5;
  LPWSTR bstrString;
  HWND pHVar6;
  HRESULT HVar7;
  void **unaff_EDI;
  UINT UVar8;
  void *wParam;
  WPARAM wParam_00;
  ITypeInfo *pIVar9;
  LPARAM LVar10;
  CHAR local_10c [128];
  LPSTR local_8c [31];
  byte local_10;
  uint local_c;
  void *local_8;
  
  local_8 = this;
  if (param_2 == (LPCWSTR)0x110) {
    HVar7 = LoadRegTypeLib((GUID *)PTR_DAT_21c205e8,*(WORD *)(PTR_PTR_21c20134 + 0x18),
                           *(WORD *)(PTR_PTR_21c20134 + 0x1c),(uint)(ushort)DAT_21c20220,&param_3);
    if ((-1 < HVar7) &&
       (HVar7 = (*param_3->lpVtbl->GetTypeInfoOfGuid)(param_3,(GUID *)&DAT_21c16e08,&param_4),
       -1 < HVar7)) {
      pIVar9 = param_4;
      pHVar6 = GetDlgItem(param_1,0x3eb);
      FUN_21c1914b(pHVar6,(int *)pIVar9);
      (*param_4->lpVtbl->Release)(param_4);
    }
    (*param_3->lpVtbl->Release)(param_3);
    return 1;
  }
  if (param_2 == (LPCWSTR)0x111) {
    if ((uint)param_3 >> 0x10 == 1) {
      if ((short)param_3 != 0x3eb) {
        return 0;
      }
    }
    else {
      if ((uint)param_3 >> 0x10 != 0x300) {
        return 0;
      }
      if (((uint)param_3 & 0xffff) < 0x3e9) {
        return 0;
      }
      if (0x3eb < ((uint)param_3 & 0xffff)) {
        return 0;
      }
    }
    FUN_21c1e37b((int)this);
  }
  else if (param_2 == (LPCWSTR)0x464) {
    puVar2 = (undefined4 *)FUN_21c1e2f0(this,&local_c);
    if ((puVar2 != (undefined4 *)0x0) &&
       (iVar3 = (**(code **)*puVar2)(puVar2,&DAT_21c11418,&param_3), -1 < iVar3)) {
      (*param_3->lpVtbl[1].AddRef)(param_3);
      SetDlgItemInt(param_1,0x3e9,(int)(short)param_4,1);
      (*param_3->lpVtbl[4].Release)(param_3);
      iVar3 = lstrlenW(param_2);
      cbMultiByte = iVar3 * 2 + 2;
      FUN_21c1181e(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x3ea,local_8c[0]);
      SysFreeString(param_2);
      (*param_3->lpVtbl[2].Release)(param_3);
      LVar10 = 0;
      UVar8 = 0x14e;
      wParam = local_8;
      pHVar6 = GetDlgItem(param_1,0x3eb);
      SendMessageA(pHVar6,UVar8,(WPARAM)wParam,LVar10);
      (*param_3->lpVtbl->Release)(param_3);
      if (local_8c[0] == (LPCSTR)0x0) {
        return 1;
      }
      if ((local_10 & 1) == 0) {
        return 1;
      }
      HeapFree(DAT_21c20030,0,local_8c[0]);
      return 1;
    }
  }
  else if (param_2 == (LPCWSTR)0x465) {
    puVar2 = (undefined4 *)FUN_21c1e2f0(this,(uint *)&param_2);
    while (puVar2 != (undefined4 *)0x0) {
      iVar3 = (**(code **)*puVar2)(puVar2,&DAT_21c11418,&param_3);
      if (-1 < iVar3) {
        pIVar1 = param_3->lpVtbl;
        riid = (IID *)GetDlgItemInt(param_1,0x3e9,(BOOL *)0x0,1);
        pIVar4 = (ITypeInfoVtbl *)(*pIVar1[1].QueryInterface)(param_3,riid,unaff_EDI);
        if ((int)pIVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)this);
          FUN_21c19278((uint)pIVar4,pIVar5);
          param_4->lpVtbl = pIVar4;
        }
        GetDlgItemTextA(param_1,0x3ea,local_10c,0x100);
        bstrString = FUN_21c14de7(local_10c,(BSTR)0x0);
        if (bstrString == (LPWSTR)0x0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(0x8007000e,pIVar5);
        }
        else {
          pIVar4 = (ITypeInfoVtbl *)(*param_3->lpVtbl[4].AddRef)(param_3);
          if ((int)pIVar4 < 0) {
            pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
            FUN_21c19278((uint)pIVar4,pIVar5);
            param_4->lpVtbl = pIVar4;
          }
          SysFreeString(bstrString);
        }
        LVar10 = 0;
        wParam_00 = 0;
        UVar8 = 0x147;
        pHVar6 = GetDlgItem(param_1,0x3eb);
        unaff_EDI = (void **)SendMessageA(pHVar6,UVar8,wParam_00,LVar10);
        pIVar4 = (ITypeInfoVtbl *)(*param_3->lpVtbl[2].AddRef)(param_3);
        if ((int)pIVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278((uint)pIVar4,pIVar5);
          param_4->lpVtbl = pIVar4;
        }
        (*param_3->lpVtbl->Release)(param_3);
        this = local_8;
      }
      puVar2 = (undefined4 *)FUN_21c1e300(this,(uint *)&param_2);
    }
    return 1;
  }
  return 0;
}



undefined4 * __thiscall FUN_21c18a79(void *this,byte param_1)

{
  FUN_21c18aa1((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21c18aa1(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21c16ee0;
  param_1[5] = &PTR_LAB_21c16ea0;
  FUN_21c186b5(param_1);
  return;
}



undefined4 __thiscall FUN_21c18ab3(void *this,HWND param_1,int *param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  UINT UVar3;
  uint uVar4;
  IErrorInfo *pIVar5;
  void *local_8;
  
  local_8 = this;
  if (param_2 == (int *)0x111) {
    if ((uint)param_3 >> 0x10 == 0) {
      if ((short)param_3 != 0x452) {
        return 0;
      }
    }
    else {
      if ((uint)param_3 >> 0x10 != 0x300) {
        return 0;
      }
      if (((uint)param_3 & 0xffff) < 0x44d) {
        return 0;
      }
      if (0x451 < ((uint)param_3 & 0xffff)) {
        return 0;
      }
    }
    FUN_21c1e37b((int)this);
  }
  else if (param_2 == (int *)0x464) {
    puVar1 = (undefined4 *)FUN_21c1e2f0(this,(uint *)&local_8);
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_21c11418,&param_2), -1 < iVar2)) {
      (**(code **)(*param_2 + 0x78))(param_2,&param_4);
      SetDlgItemInt(param_1,0x44d,(int)(short)param_4,1);
      (**(code **)(*param_2 + 0xa8))(param_2,&param_4);
      SetDlgItemInt(param_1,0x450,(int)(short)param_4,1);
      (**(code **)(*param_2 + 200))(param_2,&param_4);
      SetDlgItemInt(param_1,0x44e,(int)(short)param_4,1);
      (**(code **)(*param_2 + 0xe0))(param_2,&param_4);
      SetDlgItemInt(param_1,0x451,(int)(short)param_4,1);
      (**(code **)(*param_2 + 0x90))(param_2,&param_4);
      SetDlgItemInt(param_1,0x44f,(int)(short)param_4,1);
      (**(code **)(*param_2 + 0x100))(param_2,&param_3);
      CheckDlgButton(param_1,0x452,(uint)((short)param_3 != 0));
      (**(code **)(*param_2 + 8))(param_2);
      return 1;
    }
  }
  else if (param_2 == (int *)0x465) {
    puVar1 = (undefined4 *)FUN_21c1e2f0(this,(uint *)&param_2);
    while (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_21c11418,&param_3);
      if (-1 < iVar2) {
        iVar2 = *param_3;
        UVar3 = GetDlgItemInt(param_1,0x44d,(BOOL *)0x0,1);
        uVar4 = (**(code **)(iVar2 + 0x74))(param_3,UVar3);
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        iVar2 = *param_3;
        UVar3 = GetDlgItemInt(param_1,0x450,(BOOL *)0x0,1);
        uVar4 = (**(code **)(iVar2 + 0xa4))(param_3,UVar3);
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        iVar2 = *param_3;
        UVar3 = GetDlgItemInt(param_1,0x44e,(BOOL *)0x0,1);
        uVar4 = (**(code **)(iVar2 + 0xc4))(param_3,UVar3);
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        iVar2 = *param_3;
        UVar3 = GetDlgItemInt(param_1,0x451,(BOOL *)0x0,1);
        uVar4 = (**(code **)(iVar2 + 0xdc))(param_3,UVar3);
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        iVar2 = *param_3;
        UVar3 = GetDlgItemInt(param_1,0x44f,(BOOL *)0x0,1);
        uVar4 = (**(code **)(iVar2 + 0x8c))(param_3,UVar3);
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        UVar3 = IsDlgButtonChecked(param_1,0x452);
        uVar4 = (**(code **)(*param_3 + 0xfc))(param_3,-(uint)(UVar3 != 0));
        if ((int)uVar4 < 0) {
          pIVar5 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar4,pIVar5);
          *param_4 = uVar4;
        }
        (**(code **)(*param_3 + 8))(param_3);
      }
      puVar1 = (undefined4 *)FUN_21c1e300(local_8,(uint *)&param_2);
    }
    return 1;
  }
  return 0;
}



undefined4 * __thiscall FUN_21c18dfb(void *this,byte param_1)

{
  FUN_21c18e23((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_21c18e23(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_21c16f38;
  param_1[5] = &PTR_LAB_21c16ef8;
  FUN_21c186b5(param_1);
  return;
}



undefined4 __thiscall
FUN_21c18e35(void *this,HWND param_1,LPCWSTR param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  IErrorInfo *pIVar4;
  UINT UVar5;
  LPSTR local_90 [31];
  byte local_14;
  uint local_10;
  LPWSTR local_c;
  void *local_8;
  
  local_8 = this;
  if (param_2 == (LPCWSTR)0x111) {
    if ((uint)param_3 >> 0x10 == 0) {
      if (((uint)param_3 & 0xffff) < 0x4b5) {
        return 0;
      }
      if (0x4b7 < ((uint)param_3 & 0xffff)) {
        return 0;
      }
    }
    else {
      if ((uint)param_3 >> 0x10 != 0x300) {
        return 0;
      }
      if ((short)param_3 != 0x4b1) {
        return 0;
      }
    }
    FUN_21c1e37b((int)this);
  }
  else if (param_2 == (LPCWSTR)0x464) {
    puVar1 = (undefined4 *)FUN_21c1e2f0(this,&local_10);
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_21c11418,&param_3), -1 < iVar2)) {
      (**(code **)(*param_3 + 0xb8))(param_3,&param_2);
      iVar2 = lstrlenW(param_2);
      uVar3 = iVar2 * 2 + 2;
      FUN_21c1181e(local_90,uVar3);
      WideCharToMultiByte(0,0,param_2,-1,local_90[0],uVar3,(LPCSTR)0x0,(LPBOOL)0x0);
      SetDlgItemTextA(param_1,0x4b1,local_90[0]);
      SysFreeString(param_2);
      (**(code **)(*param_3 + 0xa0))(param_3,&param_4);
      CheckDlgButton(param_1,0x4b5,(uint)((short)param_4 != 0));
      (**(code **)(*param_3 + 0xd0))(param_3,&param_4);
      CheckDlgButton(param_1,0x4b6,(uint)((short)param_4 != 0));
      (**(code **)(*param_3 + 0x68))(param_3,&param_4);
      CheckDlgButton(param_1,0x4b7,(uint)((short)param_4 != 0));
      (**(code **)(*param_3 + 8))(param_3);
      if (local_90[0] == (LPCSTR)0x0) {
        return 1;
      }
      if ((local_14 & 1) == 0) {
        return 1;
      }
      HeapFree(DAT_21c20030,0,local_90[0]);
      return 1;
    }
  }
  else if (param_2 == (LPCWSTR)0x465) {
    puVar1 = (undefined4 *)FUN_21c1e2f0(this,&local_10);
    while (puVar1 != (undefined4 *)0x0) {
      iVar2 = (**(code **)*puVar1)(puVar1,&DAT_21c11418,&param_2);
      if (-1 < iVar2) {
        GetDlgItemTextA(param_1,0x4b1,(LPSTR)&param_3,2);
        local_c = FUN_21c14de7((LPCSTR)&param_3,(BSTR)0x0);
        if (local_c == (LPWSTR)0x0) {
          pIVar4 = (IErrorInfo *)FUN_21c1e396((int)this);
          FUN_21c19278(0x8007000e,pIVar4);
        }
        else {
          uVar3 = (**(code **)(*(int *)param_2 + 0xb4))(param_2,local_c);
          if ((int)uVar3 < 0) {
            pIVar4 = (IErrorInfo *)FUN_21c1e396((int)local_8);
            FUN_21c19278(uVar3,pIVar4);
            *param_4 = uVar3;
          }
          SysFreeString(local_c);
          SetDlgItemTextA(param_1,0x4b1,(LPCSTR)&param_3);
        }
        UVar5 = IsDlgButtonChecked(param_1,0x4b5);
        uVar3 = (**(code **)(*(int *)param_2 + 0x9c))(param_2,-(uint)(UVar5 != 0));
        if ((int)uVar3 < 0) {
          pIVar4 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar3,pIVar4);
          *param_4 = uVar3;
        }
        UVar5 = IsDlgButtonChecked(param_1,0x4b6);
        uVar3 = (**(code **)(*(int *)param_2 + 0xcc))(param_2,-(uint)(UVar5 != 0));
        if ((int)uVar3 < 0) {
          pIVar4 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar3,pIVar4);
          *param_4 = uVar3;
        }
        UVar5 = IsDlgButtonChecked(param_1,0x4b7);
        uVar3 = (**(code **)(*(int *)param_2 + 100))(param_2,-(uint)(UVar5 != 0));
        if ((int)uVar3 < 0) {
          pIVar4 = (IErrorInfo *)FUN_21c1e396((int)local_8);
          FUN_21c19278(uVar3,pIVar4);
          *param_4 = uVar3;
        }
        (**(code **)(*(int *)param_2 + 8))(param_2);
        this = local_8;
      }
      puVar1 = (undefined4 *)FUN_21c1e300(this,&local_10);
    }
    return 1;
  }
  return 0;
}



int __cdecl FUN_21c1914b(HWND param_1,int *param_2)

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
        if (iVar2 < 0) goto LAB_21c19268;
        (**(code **)(*piVar1 + 0x30))(piVar1,*local_10,&local_c,0,0,0);
        iVar2 = lstrlenW(local_c);
        cbMultiByte = iVar2 * 2 + 2;
        FUN_21c1181e(local_90,cbMultiByte);
        WideCharToMultiByte(0,0,local_c,-1,local_90[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
        wsprintfA(local_110,"%ld - %s",*(undefined4 *)(local_10[2] + 8),local_90[0]);
        SendMessageA(param_1,0x143,0,(LPARAM)local_110);
        SysFreeString(local_c);
        (**(code **)(*piVar1 + 0x54))(piVar1,local_10);
        if ((local_90[0] != (LPSTR)0x0) && ((local_14 & 1) != 0)) {
          HeapFree(DAT_21c20030,0,local_90[0]);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < (int)(uint)*(ushort *)(local_8 + 0x2e));
    }
    iVar2 = 0;
LAB_21c19268:
    (**(code **)(*piVar1 + 0x4c))(piVar1,local_8);
  }
  return iVar2;
}



void __cdecl FUN_21c19278(uint param_1,IErrorInfo *param_2)

{
  HRESULT HVar1;
  UINT uID;
  CHAR local_214 [260];
  CHAR local_110 [260];
  BSTR local_c;
  BSTR local_8;
  
  local_c = (LPCWSTR)0x0;
  local_8 = (LPCWSTR)0x0;
  if ((param_1 & 0x1fff0000) == 0) {
    LoadStringA((HINSTANCE)param_2,1000,local_214,0x104);
    if (param_1 == 0x8007000e) {
      uID = 7;
    }
    else {
      uID = 7999;
    }
    LoadStringA((HINSTANCE)param_2,uID,local_110,0x104);
    MessageBoxA((HWND)0x0,local_110,local_214,0);
  }
  else {
    HVar1 = GetErrorInfo(0,&param_2);
    if (HVar1 == 0) {
      HVar1 = (*param_2->lpVtbl->GetDescription)(param_2,&local_8);
      if (-1 < HVar1) {
        HVar1 = (*param_2->lpVtbl->GetSource)(param_2,&local_c);
        if (-1 < HVar1) {
          WideCharToMultiByte(0,0,local_8,-1,local_110,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          WideCharToMultiByte(0,0,local_c,-1,local_214,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
          MessageBoxA((HWND)0x0,local_110,local_214,0);
        }
      }
      if (local_c != (BSTR)0x0) {
        SysFreeString(local_c);
      }
      if (local_8 != (BSTR)0x0) {
        SysFreeString(local_8);
      }
      (*param_2->lpVtbl->Release)(param_2);
    }
  }
  return;
}



undefined4 __thiscall FUN_21c1938b(void *this,LPCOMSTAT param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *local_8;
  
  uVar3 = 0;
  local_8 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x284));
  if (*(int *)((int)this + 0xdc) == 0) {
                    // WARNING: Load size is inaccurate
    iVar2 = *this;
    uVar5 = 0x1f52;
    uVar4 = 0x1f52;
    uVar3 = 0x800a1f52;
  }
  else {
    BVar1 = ClearCommError(*(HANDLE *)((int)this + 0xd8),(LPDWORD)&local_8,param_1);
    if (BVar1 != 0) {
      FUN_21c194ad(this,(uint)local_8);
      goto LAB_21c193e3;
    }
                    // WARNING: Load size is inaccurate
    iVar2 = *this;
    uVar5 = 0x1f55;
    uVar4 = 0x1f55;
    uVar3 = 0x800a1f55;
  }
  uVar3 = (**(code **)(iVar2 + 0x30))(uVar3,uVar4,uVar5);
LAB_21c193e3:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x284));
  return uVar3;
}



int __fastcall FUN_21c19403(void *param_1)

{
  int iVar1;
  _COMSTAT local_10;
  
  iVar1 = FUN_21c1938b(param_1,&local_10);
  if (-1 < iVar1) {
    if ((int)local_10.cbInQue < (int)*(short *)((int)param_1 + 0xf8)) {
      *(undefined4 *)((int)param_1 + 0x238) = 0;
    }
    if ((int)*(short *)((int)param_1 + 0x110) < (int)local_10.cbOutQue) {
      *(undefined4 *)((int)param_1 + 0x23c) = 0;
    }
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 __fastcall FUN_21c19444(int *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _COMSTAT local_14;
  uint local_8;
  
  uVar2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa1));
  if (param_1[0x37] != 0) {
    BVar1 = ClearCommError((HANDLE)param_1[0x36],&local_8,&local_14);
    if (BVar1 == 0) {
      uVar2 = (**(code **)(*param_1 + 0x30))(0x800a1f55,0x1f55,0x1f55);
    }
    else {
      FUN_21c194ad(param_1,local_8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa1));
  return uVar2;
}



void __thiscall FUN_21c194ad(void *this,uint param_1)

{
  if ((param_1 & 0x10) != 0) {
    FUN_21c1951e(this,0x3e9);
  }
  if ((param_1 & 8) != 0) {
    FUN_21c1951e(this,0x3ec);
  }
  if ((param_1 & 2) != 0) {
    FUN_21c1951e(this,0x3ee);
  }
  if ((param_1 & 1) != 0) {
    FUN_21c1951e(this,0x3f0);
  }
  if ((param_1 & 4) != 0) {
    FUN_21c1951e(this,0x3f1);
  }
  if ((param_1 & 0x100) != 0) {
    FUN_21c1951e(this,0x3f2);
  }
  return;
}



void __thiscall FUN_21c1951e(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x248) = param_1;
  FUN_21c1d7ce((int)this,(undefined4 *)&DAT_21c20a70);
  return;
}



undefined4 __fastcall FUN_21c1953a(int *param_1)

{
  uint uVar1;
  undefined4 local_4;
  
  uVar1 = FUN_21c17824(param_1,param_1[0x36],0x1fd);
  local_4 = 0;
  FUN_21c14818(param_1,param_1[0x36],0x1fd);
  if ((uVar1 & 8) != 0) {
    FUN_21c1951e(param_1,3);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_21c1951e(param_1,4);
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_21c1951e(param_1,5);
  }
  if ((uVar1 & 0x100) != 0) {
    FUN_21c1951e(param_1,6);
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_21c1951e(param_1,0x3e9);
  }
  if ((uVar1 & 0x80) != 0) {
    local_4 = FUN_21c19444(param_1);
  }
  return local_4;
}



int __thiscall FUN_21c195cc(void *this,uint param_1,int param_2)

{
  int iVar1;
  _COMSTAT local_10;
  
  iVar1 = FUN_21c1938b(this,&local_10);
  if (-1 < iVar1) {
    if (((uint)local_10._0_4_ >> 5 & 1) != 0) {
      FUN_21c1951e(this,7);
    }
    iVar1 = FUN_21c1953a((int *)this);
    if (-1 < iVar1) {
      if ((((param_1 & 1) != 0) && (*(short *)((int)this + 0xf8) != 0)) &&
         ((int)*(short *)((int)this + 0xf8) <= (int)local_10.cbInQue)) {
        FUN_21c1951e(this,2);
        iVar1 = FUN_21c1938b(this,&local_10);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (((*(int *)((int)this + 300) == 0) && (*(int *)((int)this + 0x130) != 0)) &&
           ((int)*(short *)((int)this + 0xf8) <= (int)local_10.cbInQue)) {
          *(undefined4 *)((int)this + 0x130) = 0;
          FUN_21c195cc(this,param_1,param_2);
        }
        *(undefined4 *)((int)this + 0x238) = 1;
      }
      if ((((param_1 & 2) != 0) && (*(short *)((int)this + 0x110) != 0)) &&
         ((int)local_10.cbOutQue <= (int)*(short *)((int)this + 0x110))) {
        FUN_21c1951e(this,1);
      }
      if ((param_1 & 4) != 0) {
        *(int *)((int)this + 0x24c) = param_2;
        iVar1 = FUN_21c1953a((int *)this);
        if (iVar1 < 0) {
          return iVar1;
        }
      }
      if ((((local_10.cbInQue != 0) && (*(int *)((int)this + 0x238) == 0)) &&
          (*(short *)((int)this + 0xf8) != 0)) &&
         ((int)*(short *)((int)this + 0xf8) <= (int)local_10.cbInQue)) {
        FUN_21c1951e(this,2);
        iVar1 = FUN_21c1938b(this,&local_10);
        if (iVar1 < 0) {
          return iVar1;
        }
        if (((*(int *)((int)this + 300) == 0) && (*(int *)((int)this + 0x130) != 0)) &&
           ((int)*(short *)((int)this + 0xf8) <= (int)local_10.cbInQue)) {
          *(undefined4 *)((int)this + 0x130) = 0;
          iVar1 = FUN_21c195cc(this,param_1,param_2);
          if (iVar1 < 0) {
            return iVar1;
          }
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined4 * __thiscall FUN_21c1972e(void *this,byte param_1)

{
  FUN_21c14a5e((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __cdecl FUN_21c19756(int *param_1,uint *param_2)

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



int __thiscall FUN_21c197c9(void *this,int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  BSTR lpMem;
  LPWSTR pWVar4;
  BSTR local_c;
  
  piVar2 = param_1;
  *param_2 = 0;
  iVar3 = FUN_21c19756(param_1,(uint *)&param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  if (param_1 == (int *)0xffffffff) {
    bVar1 = false;
    iVar3 = FUN_21c19756(piVar2,(uint *)&param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lpMem = (BSTR)HeapAlloc(DAT_21c20030,0,(int)param_1 + 1);
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
      pWVar4 = FUN_21c14de7((LPCSTR)lpMem,(BSTR)0x0);
      *param_2 = pWVar4;
      HeapFree(DAT_21c20030,0,lpMem);
    }
    else {
      *param_2 = local_c;
    }
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 FUN_21c19895(HWND param_1,int param_2,int param_3)

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



int __cdecl FUN_21c198c6(int *param_1,int *param_2,LPCSTR param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
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
              iVar2 = FUN_21c19a0e(piVar1,local_c,local_8,param_2,local_18);
LAB_21c1999e:
              if (iVar2 < 0) {
                return iVar2;
              }
            }
            else {
              iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,local_c + -8 + local_10,0,0,0);
              piVar3 = param_2;
              if (iVar2 < 0) {
                return iVar2;
              }
              for (; *piVar3 != 0; piVar3 = piVar3 + 8) {
                if (piVar3[7] == local_14) {
                  iVar2 = FUN_21c19ab7(piVar1,(SIZE_T)piVar3,param_3);
                  goto LAB_21c1999e;
                }
              }
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
FUN_21c19a0e(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  LPWSTR pv;
  CHAR local_110 [256];
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  for (piVar1 = param_4; *piVar1 != 0; piVar1 = piVar1 + 8) {
    piVar1[7] = 0;
  }
  local_8 = 0;
  if (param_5 != 0) {
    do {
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,&local_10,8,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_110,local_c,0);
      if (iVar2 < 0) {
        return iVar2;
      }
      pv = FUN_21c14de7(local_110,(BSTR)0x1);
      iVar2 = *param_4;
      piVar1 = param_4;
      while (iVar2 != 0) {
        if ((piVar1[7] == 0) && (iVar2 = FUN_21c1eac5(pv,(LPCWSTR)*piVar1,0,-1,-1), iVar2 == 2)) {
          piVar1[7] = local_10;
          break;
        }
        piVar1 = piVar1 + 8;
        iVar2 = *piVar1;
      }
      CoTaskMemFree(pv);
      local_8 = local_8 + 1;
    } while (local_8 < param_5);
  }
  return 0;
}



int __cdecl FUN_21c19ab7(int *param_1,SIZE_T param_2,LPCSTR param_3)

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
    param_3 = (LPCSTR)HeapAlloc(DAT_21c20030,0,param_2);
    if (param_3 == (LPCSTR)0x0) {
      return -0x7ff8fff2;
    }
    iVar4 = (**(code **)(*param_1 + 0xc))(param_1,param_3,param_2,0);
    if (-1 < iVar4) {
      SysFreeString(*(BSTR *)pCVar11);
      pWVar6 = FUN_21c14de7(param_3,(BSTR)0x0);
      *(LPWSTR *)pCVar11 = pWVar6;
    }
    HeapFree(DAT_21c20030,0,param_3);
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
    iVar4 = OleLoadPicture(param_1,param_2,1,&DAT_21c171e8,piVar9);
  }
  if (-1 < iVar4) {
    return 0;
  }
  return iVar4;
}



int FUN_21c19cb2(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20c70 == 0) {
    DAT_21c20c70 = FUN_21c19ce6((undefined4 *)&DAT_21c171f8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  return DAT_21c20c70;
}



void __cdecl FUN_21c19ce6(undefined4 *param_1)

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



HRESULT __fastcall DllRegisterServer(void *param_1)

{
  HRESULT HVar1;
  int iVar2;
  
                    // 0x9d41  3  DllRegisterServer
  HVar1 = FUN_21c19d7b(param_1);
  if (-1 < HVar1) {
    iVar2 = FUN_21c1587e();
    HVar1 = (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return HVar1;
}



int DllUnregisterServer(void)

{
  int iVar1;
  
                    // 0x9d5e  4  DllUnregisterServer
  iVar1 = FUN_21c1a018();
  if (-1 < iVar1) {
    iVar1 = FUN_21c1587e();
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
  }
  return iVar1;
}



HRESULT __fastcall FUN_21c19d7b(void *param_1)

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
  if (DAT_21c20c60 != 0) {
    GetModuleFileNameA(DAT_21c20008,local_228,0x104);
    local_18 = FUN_21c14de7(local_228,(BSTR)0x0);
    HVar3 = LoadTypeLib(local_18,&local_14);
    if (HVar3 < 0) goto LAB_21c19f57;
    (*local_14->lpVtbl->GetLibAttr)(local_14,&local_8);
    local_10 = (LPWSTR)(uint)local_8->wMajorVerNum;
    local_1c = (uint)local_8->wMinorVerNum;
    (*local_14->lpVtbl->ReleaseTLibAttr)(local_14,local_8);
    param_1 = extraout_ECX;
  }
  if (DAT_21c20130 != -1) {
    local_8 = (TLIBATTR *)&DAT_21c20130;
    ppuVar7 = &PTR_PTR_21c20134;
    do {
      if (*(int *)*ppuVar7 != 0) {
        if (uVar6 == 0) {
          if (local_c == 0) {
            local_c = FUN_21c1b157(param_1,aCStack_125 + 1,0x104);
            lstrcatA(aCStack_125 + 1,&DAT_21c2072e);
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
LAB_21c19ffe:
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_21c1a218(puVar2[1],(LPCSTR)puVar2[2],(HKEY)*puVar2,puVar2[3]);
          param_1 = extraout_ECX_05;
        }
        else if (sVar1 == 1) {
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_21c1a3b7("MSCOMMLib",(LPCSTR)puVar2[1],(LPCSTR)puVar2[2],puVar2[6],local_10,local_1c,
                       (undefined4 *)PTR_DAT_21c205e8,(HKEY)*puVar2,puVar2[3]);
          param_1 = extraout_ECX_04;
        }
        else if (sVar1 == 2) {
          uVar8 = 1;
          iVar4 = FUN_21c1b53d((int *)local_14,*(undefined4 *)*ppuVar7,(undefined2 *)&local_20);
          if (-1 < iVar4) {
            uVar8 = local_20 & 0x20;
          }
          puVar2 = (undefined4 *)*ppuVar7;
          FUN_21c1a8da("MSCOMMLib",(LPCSTR)puVar2[1],(LPCSTR)puVar2[2],puVar2[6],puVar2[7],
                       (int *)local_10,local_1c,(HKEY)PTR_DAT_21c205e8,(HKEY)*puVar2,puVar2[0xd],
                       CONCAT22(extraout_var,*(undefined2 *)(puVar2 + 0x10)),puVar2[3],uVar8);
          param_1 = extraout_ECX_03;
        }
        else if (sVar1 == 3) goto LAB_21c19ffe;
      }
      local_8 = (TLIBATTR *)(local_8->guid).Data4;
      ppuVar7 = ppuVar7 + 2;
    } while (*(short *)local_8 != -1);
  }
  if (DAT_21c20c60 != 0) {
    if ((uVar6 == 0) ||
       (szHelpDir = FUN_21c14de7(aCStack_125 + 1,(BSTR)0x1), local_10 = szHelpDir, uVar6 == 0)) {
      szHelpDir = (LPCOLESTR)&DAT_21c209ee;
    }
    HVar3 = RegisterTypeLib(local_14,local_18,szHelpDir);
    if (uVar6 != 0) {
      CoTaskMemFree(local_10);
    }
    (*local_14->lpVtbl->Release)(local_14);
    if (HVar3 < 0) goto LAB_21c19f57;
  }
  HVar3 = 0;
LAB_21c19f57:
  SysFreeString(local_18);
  return HVar3;
}



undefined4 FUN_21c1a018(void)

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
  if (DAT_21c20130 != -1) {
    psVar6 = &DAT_21c20130;
    local_8 = &PTR_PTR_21c20134;
    do {
      puVar2 = (undefined4 *)*local_8;
      pHVar3 = (HKEY)*puVar2;
      if (pHVar3 != (HKEY)0x0) {
        sVar1 = *psVar6;
        if (sVar1 == 0) {
LAB_21c1a17e:
          FUN_21c1ac03(pHVar3,(HKEY)0x0);
        }
        else if ((sVar1 == 1) || (sVar1 == 2)) {
          FUN_21c1aca1("MSCOMMLib",puVar2[1],puVar2[6],pHVar3);
        }
        else if (sVar1 == 3) goto LAB_21c1a17e;
      }
      local_8 = local_8 + 2;
      psVar6 = psVar6 + 4;
    } while (*psVar6 != -1);
  }
  if (PTR_DAT_21c205e8 != (undefined *)0x0) {
    GetModuleFileNameA(DAT_21c20008,local_194,0x104);
    iVar4 = lstrlenA(local_194);
    cchWideChar = iVar4 * 2 + 2;
    FUN_21c1181e(local_90,cchWideChar);
    MultiByteToWideChar(0,0,local_194,-1,local_90[0],cchWideChar);
    HVar5 = LoadTypeLibEx(local_90[0],REGKIND_NONE,&local_c);
    if (-1 < HVar5) {
      HVar5 = (*local_c->lpVtbl->GetLibAttr)(local_c,&local_10);
      if (-1 < HVar5) {
        UnRegisterTypeLib((GUID *)PTR_DAT_21c205e8,local_10->wMajorVerNum,local_10->wMinorVerNum,
                          local_10->lcid,local_10->syskind);
      }
    }
    if ((local_90[0] != (LPCOLESTR)0x0) && ((local_14 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_90[0]);
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



void __cdecl FUN_21c1a18c(ushort param_1,BSTR param_2)

{
  uint uID;
  HINSTANCE hInstance;
  CHAR *lpBuffer;
  int iVar1;
  CHAR local_204 [512];
  
  lpBuffer = local_204;
  iVar1 = 0x200;
  uID = (uint)param_1;
  hInstance = FUN_21c12a19(0);
  iVar1 = LoadStringA(hInstance,uID,lpBuffer,iVar1);
  if (iVar1 == 0) {
    return;
  }
  FUN_21c14de7(local_204,param_2);
  return;
}



void __cdecl FUN_21c1a1cd(undefined4 *param_1,LPSTR param_2)

{
  wsprintfA(param_2,s___08lX__04X__04X__02X_02X__02X_0_21c20730,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  return;
}



undefined4 __cdecl FUN_21c1a218(undefined4 param_1,LPCSTR param_2,HKEY param_3,int param_4)

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
  iVar1 = FUN_21c1b1a5(param_3);
  if (iVar1 == 0) {
    FUN_21c1ac03(param_3,(HKEY)0x0);
  }
  iVar1 = FUN_21c1a1cd(param_3,local_38);
  if (iVar1 != 0) {
    wsprintfA((LPSTR)local_13c,s_CLSID__s_21c20764,local_38);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21c209f0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_10);
    if (LVar2 == 0) {
      if (param_2 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_21c20770,param_1);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_2);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if ((((LVar2 == 0) &&
           (LVar2 = RegCreateKeyExA(local_c,s_InprocServer32_21c2077c,0,&DAT_21c209f4,0,0x2001f,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_10), LVar2 == 0)) &&
          (DVar3 = GetModuleFileNameA(DAT_21c20008,(LPSTR)local_13c,0x104), DVar3 != 0)) &&
         (LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,DVar3 + 1), LVar2 == 0)) {
        if (param_4 == 0) {
          RegDeleteValueA(local_8,s_ThreadingModel_21c207a8);
        }
        else {
          LVar2 = RegSetValueExA(local_8,s_ThreadingModel_21c20798,0,1,(BYTE *)s_Apartment_21c2078c,
                                 10);
          if (LVar2 != 0) goto LAB_21c1a35e;
        }
        RegCloseKey(local_8);
        RegCloseKey(local_c);
        return 1;
      }
    }
  }
LAB_21c1a35e:
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return 0;
}



undefined4 __cdecl
FUN_21c1a3b7(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar1 = FUN_21c1a218(param_2,param_3,param_8,param_9);
  if (iVar1 != 0) {
    lstrcpyA((LPSTR)local_13c,param_1);
    lstrcatA((LPSTR)local_13c,&DAT_21c207b8);
    lstrcatA((LPSTR)local_13c,param_2);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21c209f8,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
    if (LVar2 == 0) {
      if (param_3 == (LPCSTR)0x0) {
        wsprintfA((LPSTR)local_13c,s__s_Object_21c207bc,param_2);
      }
      else {
        lstrcpyA((LPSTR)local_13c,param_3);
      }
      iVar1 = lstrlenA((LPCSTR)local_13c);
      LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
      if (((LVar2 == 0) &&
          (LVar2 = RegCreateKeyExA(local_c,s_CLSID_21c207c8,0,&DAT_21c209fc,0,0x2001f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9), LVar2 == 0)) &&
         (iVar1 = FUN_21c1a1cd(param_8,(LPSTR)local_38), iVar1 != 0)) {
        iVar1 = lstrlenA((LPCSTR)local_38);
        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
        if (LVar2 == 0) {
          RegCloseKey(local_8);
          LVar2 = RegCreateKeyExA(local_c,s_CurVer_21c207d0,0,&DAT_21c20a00,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
          if (LVar2 == 0) {
            wsprintfA((LPSTR)local_13c,s__s__s__ld_21c207d8,param_1,param_2,param_4);
            iVar1 = lstrlenA((LPCSTR)local_13c);
            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
            if (LVar2 == 0) {
              RegCloseKey(local_8);
              RegCloseKey(local_c);
              LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21c20a04,0,0x2001f,
                                      (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
              if (LVar2 == 0) {
                if (param_3 == (LPCSTR)0x0) {
                  wsprintfA((LPSTR)local_13c,s__s_Object_21c207e4,param_2);
                }
                else {
                  lstrcpyA((LPSTR)local_13c,param_3);
                }
                iVar1 = lstrlenA((LPCSTR)local_13c);
                LVar2 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                if ((LVar2 == 0) &&
                   (LVar2 = RegCreateKeyExA(local_c,s_CLSID_21c207f0,0,&DAT_21c20a08,0,0x2001f,
                                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9),
                   LVar2 == 0)) {
                  iVar1 = lstrlenA((LPCSTR)local_38);
                  LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                  if (LVar2 == 0) {
                    RegCloseKey(local_8);
                    RegCloseKey(local_c);
                    iVar1 = FUN_21c1a1cd(param_8,(LPSTR)local_38);
                    if (iVar1 != 0) {
                      wsprintfA((LPSTR)local_13c,s_CLSID__s_21c207f8,local_38);
                      LVar2 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_13c,0,&DAT_21c20a0c,0,
                                              0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_9);
                      if ((LVar2 == 0) &&
                         (LVar2 = RegCreateKeyExA(local_c,s_VersionIndependentProgID_21c20804,0,
                                                  &DAT_21c20a10,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0
                                                  ,&local_8,&param_9), LVar2 == 0)) {
                        wsprintfA((LPSTR)local_13c,s__s__s_21c20820,param_1,param_2);
                        iVar1 = lstrlenA((LPCSTR)local_13c);
                        LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                        if (LVar2 == 0) {
                          RegCloseKey(local_8);
                          LVar2 = RegCreateKeyExA(local_c,s_ProgID_21c20828,0,&DAT_21c20a14,0,
                                                  0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                                                  &param_9);
                          if (LVar2 == 0) {
                            wsprintfA((LPSTR)local_13c,s__s__s__ld_21c20830,param_1,param_2,param_4)
                            ;
                            iVar1 = lstrlenA((LPCSTR)local_13c);
                            LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                            if (LVar2 == 0) {
                              RegCloseKey(local_8);
                              RegCreateKeyExA(local_c,s_TypeLib_21c2083c,0,&DAT_21c20a18,0,0x2001f,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_9);
                              iVar1 = FUN_21c1a1cd(param_7,(LPSTR)local_38);
                              if (iVar1 != 0) {
                                iVar1 = lstrlenA((LPCSTR)local_38);
                                LVar2 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_38,iVar1 + 1);
                                if (LVar2 == 0) {
                                  RegCloseKey(local_8);
                                  LVar2 = RegCreateKeyExA(local_c,s_Version_21c20844,0,&DAT_21c20a1c
                                                          ,0,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,
                                                          &local_8,&param_9);
                                  if (LVar2 == 0) {
                                    wsprintfA((LPSTR)local_13c,s__ld__ld_21c2084c,param_5,param_6);
                                    iVar1 = lstrlenA((LPCSTR)local_13c);
                                    RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_13c,iVar1 + 1);
                                    HVar3 = CoCreateInstance((IID *)&DAT_21c17218,(LPUNKNOWN)0x0,1,
                                                             (IID *)&DAT_21c17228,&local_10);
                                    if (-1 < HVar3) {
                                      (**(code **)(*local_10 + 0x14))
                                                (local_10,param_8,1,&LAB_21c17208);
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



// WARNING: Removing unreachable block (ram,0x21c1ab8d)
// WARNING: Removing unreachable block (ram,0x21c1ab94)
// WARNING: Removing unreachable block (ram,0x21c1ab9f)
// WARNING: Removing unreachable block (ram,0x21c1aba7)
// WARNING: Removing unreachable block (ram,0x21c1abbd)

bool __cdecl
FUN_21c1a8da(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3,undefined4 param_4,undefined4 param_5,
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
  iVar3 = FUN_21c1a3b7(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_12);
  if (iVar3 == 0) {
    return false;
  }
  FUN_21c1a1cd(param_9,local_34);
  wsprintfA((LPSTR)local_138,s_CLSID__s_21c20854,local_34);
  LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_138,0,0xf003f,&param_8);
  if (LVar4 != 0) {
    return false;
  }
  if (param_13 != 0) {
    param_12 = RegCreateKeyExA(param_8,s_Control_21c20860,0,&DAT_21c20a20,0,0xf003f,
                               (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
    if (param_12 != 0) goto LAB_21c1abda;
    RegCloseKey(local_8);
    local_8 = (HKEY)0x0;
  }
  param_12 = RegCreateKeyExA(param_8,s_MiscStatus_21c20868,0,&DAT_21c20a24,0,0xf003f,
                             (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
  if (param_12 == 0) {
    local_138[0] = '0';
    local_138[1] = 0;
    param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,2);
    if ((param_12 == 0) &&
       (param_12 = RegCreateKeyExA(local_8,&DAT_21c20874,0,&DAT_21c20a28,0,0xf003f,
                                   (LPSECURITY_ATTRIBUTES)0x0,&local_c,&param_7), param_12 == 0)) {
      wsprintfA((LPSTR)local_138,&DAT_21c20878,param_10);
      iVar3 = lstrlenA((LPCSTR)local_138);
      param_12 = RegSetValueExA(local_c,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
      RegCloseKey(local_c);
      if (param_12 == 0) {
        RegCloseKey(local_8);
        local_8 = (HKEY)0x0;
        if (param_13 != 0) {
          GetModuleFileNameA(DAT_21c20008,(LPSTR)local_138,0x104);
          wsprintfA(local_34,&DAT_21c2087c,param_11 & 0xffff);
          lstrcatA((LPSTR)local_138,local_34);
          param_12 = RegCreateKeyExA(param_8,s_ToolboxBitmap32_21c20884,0,&DAT_21c20a2c,0,0xf003f,
                                     (LPSECURITY_ATTRIBUTES)0x0,&local_8,&param_7);
          if (param_12 != 0) goto LAB_21c1abda;
          iVar3 = lstrlenA((LPCSTR)local_138);
          param_12 = RegSetValueExA(local_8,(LPCSTR)0x0,0,1,local_138,iVar3 + 1);
          if (param_12 != 0) goto LAB_21c1abda;
        }
        HVar5 = CoCreateInstance((IID *)&DAT_21c17218,(LPUNKNOWN)0x0,1,(IID *)&DAT_21c17228,&param_6
                                );
        if (-1 < HVar5) {
          param_11 = 0;
          puVar7 = local_1d8;
          ppuVar6 = &PTR_DAT_21c20a58;
          do {
            if (0x21c20a7f < (int)ppuVar6) break;
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
LAB_21c1abda:
  if (param_8 != (HKEY)0x0) {
    RegCloseKey(param_8);
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  return param_12 == 0;
}



bool __cdecl FUN_21c1ac03(undefined4 *param_1,HKEY param_2)

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
  iVar3 = FUN_21c1a1cd(param_1,(LPSTR)local_108);
  if ((iVar3 != 0) &&
     (LVar4 = RegOpenKeyExA((HKEY)0x80000000,s_CLSID_21c20894,0,0xf003f,&param_2), LVar4 == 0)) {
    iVar3 = FUN_21c1b249(param_2,local_108);
    if ((iVar3 != 0) && (lstrcatA((LPSTR)local_108,s__InprocServer32_21c2089c), pHVar1 != (HKEY)0x0)
       ) {
      pHVar1->unused = 0;
    }
    bVar2 = FUN_21c1ae15(param_2,(LPCSTR)local_108);
    RegCloseKey(param_2);
    return bVar2;
  }
  return false;
}



undefined4 __cdecl FUN_21c1aca1(undefined4 param_1,undefined4 param_2,int param_3,HKEY param_4)

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
  
  bVar1 = FUN_21c1ac03(param_4,&local_10);
  if (CONCAT31(extraout_var,bVar1) == 0) {
LAB_21c1ad56:
    uVar3 = 0;
  }
  else {
    if (local_10.unused != 0) {
      wsprintfA((LPSTR)local_118,s__s__s__ld_21c208ac,param_1,param_2,param_3);
      bVar1 = FUN_21c1ae15((HKEY)0x80000000,(LPCSTR)local_118);
      if (CONCAT31(extraout_var_00,bVar1) == 0) goto LAB_21c1ad56;
      iVar2 = FUN_21c1ae99(param_1,param_2,param_3,(int *)&local_8,&local_c);
      if (iVar2 == 0) {
        if (local_c == 0) {
          wsprintfA((LPSTR)local_118,s__s__s_21c208b8,param_1,param_2);
          bVar1 = FUN_21c1ae15((HKEY)0x80000000,(LPCSTR)local_118);
          if (CONCAT31(extraout_var_01,bVar1) == 0) goto LAB_21c1ad56;
        }
      }
      else {
        FUN_21c1af5b(param_1,param_2,local_8);
        wsprintfA((LPSTR)local_118,s__s__s_CurVer_21c208c0,param_1,param_2);
        LVar4 = RegOpenKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,0xf003f,&param_4);
        if (LVar4 != 0) {
          LVar4 = RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)local_118,0,&DAT_21c20a30,0,0x2001f,
                                  (LPSECURITY_ATTRIBUTES)0x0,&param_4,&local_14);
          if (LVar4 != 0) goto LAB_21c1ae0d;
          wsprintfA((LPSTR)local_118,s__s__s__ld_21c208d0,param_1,param_2,local_8);
          iVar2 = lstrlenA((LPCSTR)local_118);
          RegSetValueExA(param_4,(LPCSTR)0x0,0,1,local_118,iVar2 + 1);
        }
        RegCloseKey(param_4);
      }
    }
LAB_21c1ae0d:
    uVar3 = 1;
  }
  return uVar3;
}



bool __cdecl FUN_21c1ae15(HKEY param_1,LPCSTR param_2)

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
      bVar1 = FUN_21c1ae15(local_8,local_110);
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
FUN_21c1ae99(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5)

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
  LVar1 = RegOpenKeyExA((HKEY)0x80000000,&DAT_21c20a34,0,0xf003f,&local_c);
  if (LVar1 == 0) {
    iVar2 = 0x20;
    do {
      if (param_3 != iVar2) {
        wsprintfA(local_114,s__s__s__ld_21c208dc,param_1,param_2,iVar2);
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



bool __cdecl FUN_21c1af5b(undefined4 param_1,undefined4 param_2,HKEY param_3)

{
  bool bVar1;
  LSTATUS LVar2;
  uint uVar3;
  undefined3 extraout_var;
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  wsprintfA(local_110,s__s__s__ld_21c208e8,param_1,param_2,param_3);
  LVar2 = RegOpenKeyExA((HKEY)0x80000000,local_110,0,0xf003f,&param_3);
  if (LVar2 == 0) {
    wsprintfA(local_110,s__s__s_21c208f4,param_1,param_2);
    FUN_21c1ae15((HKEY)0x80000000,local_110);
    uVar3 = RegCreateKeyExA((HKEY)0x80000000,local_110,0,&DAT_21c20a38,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_c);
    if (uVar3 == 0) {
      bVar1 = FUN_21c1b032(param_3,local_8);
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



bool __cdecl FUN_21c1b032(HKEY param_1,HKEY param_2)

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
      goto LAB_21c1b143;
      local_14 = RegCreateKeyExA(param_2,(LPCSTR)local_12c,0,&DAT_21c20a3c,0,0x2001f,
                                 (LPSECURITY_ATTRIBUTES)0x0,&local_18,&local_20);
      if (local_14 != 0) break;
      FUN_21c1b032(local_10,local_18);
      RegCloseKey(local_10);
      RegCloseKey(local_18);
      local_c = local_c + 1;
      iVar2 = RegEnumKeyExA(param_1,local_c,(LPSTR)local_12c,&local_8,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,&local_28);
    }
    RegCloseKey(local_10);
LAB_21c1b143:
    bVar3 = local_14 == 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



uint __thiscall FUN_21c1b157(void *this,LPSTR param_1,uint param_2)

{
  uint uVar1;
  UINT UVar2;
  int iVar3;
  undefined4 local_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  local_c = DAT_21c208fc;
  _uStack_8 = CONCAT22((short)((uint)this >> 0x10),DAT_21c20900);
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



undefined4 __cdecl FUN_21c1b1a5(HKEY param_1)

{
  int iVar1;
  LSTATUS LVar2;
  CHAR local_214 [260];
  CHAR local_110 [260];
  DWORD local_c;
  HKEY local_8;
  
  iVar1 = FUN_21c1a1cd(param_1,local_110);
  if (iVar1 != 0) {
    wsprintfA(local_214,s_CLSID__s_21c20904,local_110);
    LVar2 = RegCreateKeyExA((HKEY)0x80000000,local_214,0,&DAT_21c20a40,0,0x20019,
                            (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_c);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,s_Implemented_Categories_21c20910,0,0xf003f,&local_8);
      RegCloseKey(param_1);
      if (LVar2 == 0) {
        RegCloseKey(local_8);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 __cdecl FUN_21c1b249(HKEY param_1,HKEY param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [260];
  
  wsprintfA(local_108,s__s_InprocServer_21c20928,param_2);
  LVar1 = RegOpenKeyExA(param_1,local_108,0,0xf003f,&param_2);
  if (LVar1 != 0) {
    return 0;
  }
  RegCloseKey(param_2);
  return 1;
}



char * __cdecl FUN_21c1b29b(LPCSTR param_1)

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



int FUN_21c1b2be(undefined4 param_1,int param_2)

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
  DVar2 = GetModuleFileNameA(DAT_21c20008,local_170,0x104);
  if (((DVar2 != 0) && (iVar3 = FUN_21c1b356(local_170,local_6c), iVar3 != 0)) &&
     (iVar3 = FUN_21c1b356(param_1,local_38), iVar3 != 0)) {
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



int FUN_21c1b356(undefined4 param_1,undefined4 *param_2)

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
  dwBytes = FUN_21c1b404(param_1,&local_c);
  if (dwBytes != 0) {
    lpMem = HeapAlloc(DAT_21c20030,0,dwBytes);
    if (lpMem == (LPVOID)0x0) {
      return local_8;
    }
    local_8 = FUN_21c1b467(param_1,local_c,dwBytes,lpMem);
    if ((local_8 != 0) &&
       (local_8 = FUN_21c1b4d2(lpMem,&DAT_21c20938,&local_14,&local_10), local_8 != 0)) {
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
    HeapFree(DAT_21c20030,0,lpMem);
  }
  return local_8;
}



int __cdecl FUN_21c1b404(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20c7c == (FARPROC)0x0) {
    if ((DAT_21c20038 == (HMODULE)0x0) &&
       (DAT_21c20038 = LoadLibraryA(s_VERSION_DLL_21c2093c), DAT_21c20038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_21c20c7c = GetProcAddress(DAT_21c20038,s_GetFileVersionInfoSizeA_21c20948);
    if (DAT_21c20c7c == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  iVar1 = (*DAT_21c20c7c)(param_1,param_2);
  return iVar1;
}



int __cdecl
FUN_21c1b467(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20c78 == (FARPROC)0x0) {
    if ((DAT_21c20038 == (HMODULE)0x0) &&
       (DAT_21c20038 = LoadLibraryA(s_VERSION_DLL_21c20960), DAT_21c20038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_21c20c78 = GetProcAddress(DAT_21c20038,s_GetFileVersionInfoA_21c2096c);
    if (DAT_21c20c78 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  iVar1 = (*DAT_21c20c78)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl
FUN_21c1b4d2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20c74 == (FARPROC)0x0) {
    if ((DAT_21c20038 == (HMODULE)0x0) &&
       (DAT_21c20038 = LoadLibraryA(s_VERSION_DLL_21c20980), DAT_21c20038 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_21c20c74 = GetProcAddress(DAT_21c20038,s_VerQueryValueA_21c2098c);
    if (DAT_21c20c74 == (FARPROC)0x0) {
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  iVar1 = (*DAT_21c20c74)(param_1,param_2,param_3,param_4);
  return iVar1;
}



int __cdecl FUN_21c1b53d(int *param_1,undefined4 param_2,undefined2 *param_3)

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



undefined4 * __thiscall FUN_21c1b5a4(void *this,byte param_1)

{
  FUN_21c12ddd((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_21c1b5cc(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar1 = *(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 + -0x44) * 2] + 0x4a);
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
    iVar2 = *(int *)((&PTR_PTR_21c20134)[iVar2 * 2] + 0x4c);
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



int __thiscall FUN_21c1b64e(void *this,uint param_1,uint param_2,int param_3)

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
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (*(short *)((&PTR_PTR_21c20134)[*(int *)((int)this + 0x14) * 2] + 0x48) == 0) {
                    // WARNING: Load size is inaccurate
    iVar1 = (**(code **)(*this + 0x50))();
    if (iVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
      return 0;
    }
    *(undefined2 *)((&PTR_PTR_21c20134)[*(int *)((int)this + 0x14) * 2] + 0x48) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
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
    pHVar2 = FUN_21c1e6bc();
    *(HWND *)((int)this + 0xa4) = pHVar2;
  }
  local_c = IsWindowVisible(*(HWND *)((int)this + 0xa4));
  if ((*(int *)((&PTR_PTR_21c20134)[*(int *)((int)this + 0x14) * 2] + 0x58) == 0) ||
     (pHVar2 = FUN_21c1e6bc(), *(HWND *)((int)this + 0xa4) == pHVar2)) {
    if (local_c != 0) goto LAB_21c1b7a5;
  }
  else {
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
      iVar1 = FUN_21c1bbfb(this,0xfffffd3e,0xb,(LONG *)&local_e);
      if ((iVar1 == 0) || (local_e == 0)) {
        *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
      }
      *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) | 2;
    }
    if ((*(byte *)((int)this + 0xbc) & 1) != 0) goto LAB_21c1b7a5;
    pHVar2 = FUN_21c1e61a((uint)(local_c == 0),*(HWND *)((int)this + 0xa4),param_1,param_2,
                          (int *)((int)this + 0x88));
    *(HWND *)((int)this + 0xb4) = pHVar2;
    if (pHVar2 == (HWND)0x0) {
      return 0;
    }
    SetWindowLongA(pHVar2,-0x15,(LONG)this);
  }
  local_8 = local_8 | 0x10000000;
LAB_21c1b7a5:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  pHVar2 = *(HWND *)((int)this + 0xb4);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  hWndParent = pHVar2;
  if (pHVar2 == (HWND)0x0) {
    hWndParent = *(HWND *)((int)this + 0xa4);
  }
  DAT_21c20c80 = this;
  pHVar2 = CreateWindowExA(local_14,*(LPCSTR *)
                                     ((&PTR_PTR_21c20134)[*(int *)((int)this + 0x14) * 2] + 0x44),
                           local_94,local_8,~-(uint)(pHVar2 != (HWND)0x0) & param_1,
                           ~-(uint)(pHVar2 != (HWND)0x0) & param_2,*(int *)((int)this + 0x88),
                           *(int *)((int)this + 0x8c),hWndParent,(HMENU)0x0,DAT_21c20008,(LPVOID)0x0
                          );
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffef;
  *(HWND *)((int)this + 0xa0) = pHVar2;
  DAT_21c20c80 = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
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



void __thiscall FUN_21c1b882(void *this,HWND param_1)

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



LRESULT FUN_21c1b8b3(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4)

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
  piVar1 = DAT_21c20c80;
  param_1 = (HWND)0x0;
  if (piVar2 == (int *)0x0) {
    SetWindowLongA(hWnd,-0x15,(LONG)DAT_21c20c80);
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
     iVar3 == 1)) goto LAB_21c1b9cc;
  if (param_2 == 2) {
    (**(code **)(*piVar2 + 0x5c))();
LAB_21c1b9e4:
    param_1 = (HWND)(**(code **)(*piVar2 + 0x4c))(param_2,param_3,param_4);
  }
  else {
    if (param_2 != 0xf) goto LAB_21c1b9e4;
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
LAB_21c1b9cc:
  (**(code **)(*piVar2 + 8))();
  return (LRESULT)param_1;
}



bool __thiscall FUN_21c1ba4e(void *this,int param_1)

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
        iVar1 = FUN_21c1c5f9(this,-4);
        return -1 < iVar1;
      }
      pHVar2 = SetFocus(hWnd);
      return (bool)('\x01' - (pHVar2 != hWnd));
    }
  }
  else if ((((*(byte *)((int)this + 0xb0) & 8) != 0) || (param_1 == 0)) ||
          (iVar1 = FUN_21c1c5f9(this,-4), -1 < iVar1)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xac) + 0x58))(*(int **)((int)this + 0xac),param_1);
    return iVar1 == 0;
  }
  return false;
}



undefined4 __cdecl
FUN_21c1bae9(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4,LRESULT *param_5)

{
  LONG LVar1;
  LRESULT LVar2;
  
  *param_5 = 0;
  if (param_2 < 0x3a) {
    if (param_2 != 0x39) {
      if (param_2 < 0x2b) {
        return 0;
      }
      if (0x2f < param_2) {
        return 0;
      }
    }
  }
  else if ((param_2 != 0x4e) && (param_2 != 0x111)) {
    if (param_2 < 0x114) {
      return 0;
    }
    if (0x115 < param_2) {
      if (param_2 < 0x132) {
        return 0;
      }
      if ((0x138 < param_2) && (param_2 != 0x210)) {
        return 0;
      }
    }
  }
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (LVar1 == 0) {
    return 0;
  }
  LVar2 = SendMessageA(*(HWND *)(LVar1 + 0xa0),param_2 + 0x2000,param_3,param_4);
  *param_5 = LVar2;
  return 1;
}



uint FUN_21c1bb72(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  uint lParam;
  bool bVar1;
  void *this;
  undefined3 extraout_var;
  LONG LVar2;
  int iVar3;
  
  lParam = param_4;
  if (param_2 == 5) {
    LVar2 = GetWindowLongA(param_1,-0x15);
    if (LVar2 != 0) {
      MoveWindow(*(HWND *)(LVar2 + 0xa0),0,0,lParam & 0xffff,lParam >> 0x10,1);
    }
  }
  else if ((param_2 == 7) && (this = (void *)GetWindowLongA(param_1,-0x15), this != (void *)0x0)) {
    bVar1 = FUN_21c1ba4e(this,1);
    return CONCAT31(extraout_var,bVar1);
  }
  iVar3 = FUN_21c1bae9(param_1,param_2,param_3,lParam,(LRESULT *)&param_4);
  if (iVar3 == 0) {
    param_4 = DefWindowProcA(param_1,param_2,param_3,lParam);
  }
  return param_4;
}



// WARNING: Type propagation algorithm not settling

undefined4 __thiscall FUN_21c1bbfb(void *this,undefined4 param_1,ushort param_2,LONG *param_3)

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
      (**(code **)*puVar2)(puVar2,&DAT_21c13cd0,(int *)((int)this + 0x84));
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
  iVar3 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1,&DAT_21c158e8,0,2,&local_34,&local_14,0,0);
  if (-1 < iVar3) {
    HVar4 = VariantChangeType((VARIANTARG *)&((_union_2683 *)local_24)->n2,
                              (VARIANTARG *)&local_14.n2,0,param_2);
    if (-1 < HVar4) {
      bVar1 = (&DAT_21c16fe0)[param_2];
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



uint __fastcall FUN_21c1bcbb(void *param_1)

{
  int iVar1;
  uint local_8;
  
  if ((*(byte *)((int)param_1 + 0xbc) & 4) == 0) {
    local_8 = 1;
    iVar1 = FUN_21c1bbfb(param_1,0xfffffd3b,0xb,(LONG *)&local_8);
    if (iVar1 == 0) {
      return 0;
    }
    *(uint *)((int)param_1 + 0xbc) =
         (local_8 & 1) << 6 | *(uint *)((int)param_1 + 0xbc) & 0xffffffbf | 4;
  }
  return ~*(uint *)((int)param_1 + 0xbc) >> 6 & 1;
}



int FUN_21c1bfb4(int param_1,int param_2)

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



int FUN_21c1c01b(uint param_1,uint param_2)

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
LAB_21c1c091:
    uVar5 = FUN_21c1bcbb((void *)(param_1 - 0x38));
    if (uVar5 != 0) {
      piVar2 = *(int **)(param_1 + 0x38);
      if ((piVar2 != (int *)0x0) &&
         (iVar4 = (**(code **)(*piVar2 + 0x24))(piVar2), iVar4 != -0x7fffbfff)) {
        return iVar4;
      }
      param_2 = -(uint)((void *)(param_1 - 0x38) != (void *)0x0) & param_1;
      iVar4 = lstrlenA(*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 4));
      uVar5 = iVar4 * 2 + 2;
      FUN_21c1181e(local_8c,uVar5);
      MultiByteToWideChar(0,0,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 4),-1,
                          local_8c[0],uVar5);
      local_8 = local_8c[0];
      lpMem = (undefined4 *)
              HeapAlloc(DAT_21c20030,0,
                        (uint)*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 0x4a)
                        << 4);
      if (lpMem == (undefined4 *)0x0) {
        if ((local_8c[0] != (LPWSTR)0x0) && ((local_10 & 1) != 0)) {
          HeapFree(DAT_21c20030,0,local_8c[0]);
        }
        return -0x7ff8fff2;
      }
      uVar5 = (uint)*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      if (uVar5 != 0) {
        puVar6 = *(undefined4 **)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 0x4c);
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
      FUN_21c1cda5(local_c,1);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
      uVar15 = 0;
      uVar14 = 0;
      uVar5 = (uint)*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 - 0x24) * 2] + 0x4a);
      puVar12 = &param_2;
      uVar11 = 1;
      pWVar10 = local_8;
      puVar6 = lpMem;
      uVar13 = DAT_21c20220;
      iVar4 = GetSystemMetrics(1);
      iVar4 = iVar4 / 2;
      iVar7 = GetSystemMetrics(0);
      iVar7 = iVar7 / 2;
      pHVar8 = GetActiveWindow();
      local_8 = (LPWSTR)OleCreatePropertyFrame
                                  (pHVar8,iVar7,iVar4,pWVar10,uVar11,puVar12,uVar5,puVar6,uVar13,
                                   uVar14,uVar15);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
      FUN_21c1cda5(local_c,0);
      HeapFree(DAT_21c20030,0,lpMem);
      if (local_8c[0] != (LPWSTR)0x0) {
        if ((local_10 & 1) != 0) {
          HeapFree(DAT_21c20030,0,local_8c[0]);
          return (int)local_8;
        }
        return (int)local_8;
      }
      return (int)local_8;
    }
LAB_21c1c0a2:
    iVar4 = 0;
  }
  else {
    if ((int)param_2 < -5) {
LAB_21c1c058:
      if ((int)param_2 < 1) {
        return -0x7fffbfff;
      }
      iVar4 = (**(code **)(*(int *)(param_1 - 0x38) + 0x60))(param_2);
      if (iVar4 == 0x40180) {
        iVar4 = FUN_21c1c5f9((void *)(param_1 - 0x38),0);
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
          FUN_21c1cd07((void *)(param_1 - 0x38),0);
        }
        goto LAB_21c1c0a2;
      }
      if (param_2 != 0xffffffff) {
        if ((int)param_2 < 0) {
          return -0x7fffbfff;
        }
        if (1 < (int)param_2) goto LAB_21c1c058;
        goto LAB_21c1c091;
      }
    }
    iVar4 = FUN_21c1c5f9((void *)(param_1 - 0x38),param_2);
  }
  return iVar4;
}



undefined4 FUN_21c1c273(int param_1,uint *param_2)

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
  
  puVar2 = (&PTR_PTR_21c20134)[*(int *)(param_1 + -0x24) * 2];
  uVar4 = *(uint *)(puVar2 + 0x34);
  if (((uVar4 & 0x400) == 0) || ((uVar4 & 0x100) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar4 = ~uVar4 >> 0xe & 1;
  sVar1 = *(short *)(puVar2 + 0x4a);
  uVar10 = (uint)*(ushort *)(puVar2 + 0x50);
  iVar8 = (uint)(uVar4 != 0) + (sVar1 != 0) + uVar10 + (-(uint)bVar3 & 4);
  if (iVar8 == 0) {
    uVar5 = 0x80040180;
  }
  else {
    puVar6 = (undefined4 *)HeapAlloc(DAT_21c20030,0,iVar8 * 0x10);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      if (bVar3) {
        puVar7 = &DAT_21c16ff0;
        puVar11 = puVar6;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
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
        puVar11 = *(undefined4 **)((&PTR_PTR_21c20134)[*(int *)(param_1 + -0x24) * 2] + 0x54);
        for (uVar4 = (uVar10 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar7 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar7 = puVar7 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      this = FUN_21c11a73(0x40,DAT_21c20030);
      if (this == (LPVOID)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_21c1e7ce(this,(undefined4 *)&DAT_21c172f8,iVar8,0x10,puVar6,&LAB_21c1e5f0);
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



int FUN_21c1c40d(int param_1,uint param_2,int *param_3)

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
    FUN_21c125a7(param_3,&local_c);
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



int __thiscall FUN_21c1c5f9(void *this,int param_1)

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
LAB_21c1c8e1:
    iVar3 = 0;
  }
  else {
    piVar4 = (int *)((int)this + 0xac);
    if ((*(int *)((int)this + 0xac) == 0) && (*(int *)((int)this + 0x74) == 0)) {
      if (*(short *)((&PTR_PTR_21c20134)[*(int *)((int)this + 0x14) * 2] + 0x3e) != 0) {
        (**(code **)*puVar1)(puVar1,&DAT_21c17328,piVar4);
      }
      if ((*piVar4 == 0) &&
         (iVar3 = (**(code **)**(undefined4 **)((int)this + 0x6c))
                            (*(undefined4 **)((int)this + 0x6c),&DAT_21c17318,(int)this + 0x74),
         iVar3 < 0)) {
        return iVar3;
      }
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 == (int *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x6c))
                (*(undefined4 **)((int)this + 0x6c),&DAT_21c17308,&local_8);
    }
    else {
      local_8 = piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    uVar5 = *(uint *)((int)this + 0xb0);
    if (((uVar5 & 2) != 0) && ((uVar5 & 4) != 0)) goto LAB_21c1c845;
    iVar3 = 1;
    local_c = uVar5 >> 1 & 1;
    if (local_c == 0) {
      piVar2 = (int *)*piVar4;
      if (piVar2 == (int *)0x0) goto LAB_21c1c695;
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
                            (*(undefined4 **)((int)this + 0x6c),&DAT_21c17318,(int)this + 0x74);
          if (iVar3 < 0) goto LAB_21c1c702;
        }
        goto LAB_21c1c695;
      }
    }
    else {
      iVar3 = 0;
LAB_21c1c695:
      if (iVar3 == 0) {
LAB_21c1c71f:
        if (local_c == 0) {
          if (local_8 == (int *)0x0) {
            iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x18))(*(int **)((int)this + 0x74));
          }
          else {
            iVar3 = (**(code **)(*local_8 + 0x3c))(local_8,&local_10,*piVar4 != 0);
          }
          if (iVar3 < 0) goto LAB_21c1c702;
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
              FUN_21c1b882(this,local_14);
              iVar3 = FUN_21c1b64e(this,local_2c,local_28,local_10);
              if (iVar3 == 0) goto LAB_21c1c6ae;
              piVar4 = *(int **)((int)this + 0x6c);
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 0x18))(piVar4);
              }
            }
LAB_21c1c845:
            piVar4 = local_8;
            if (local_8 != (int *)0x0) {
              local_8 = (int *)0x0;
              (**(code **)(*piVar4 + 8))(piVar4);
            }
            if ((*(byte *)((int)this + 0xb0) & 4) == 0) {
              FUN_21c1cd07(this,1);
            }
            if (((param_1 == 0) || (param_1 == -4)) && ((*(uint *)((int)this + 0xb0) & 8) == 0)) {
              *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 8;
              piVar4 = *(int **)((int)this + 0xac);
              if (piVar4 == (int *)0x0) {
                piVar4 = *(int **)((int)this + 0x74);
              }
              (**(code **)(*piVar4 + 0x1c))(piVar4);
              FUN_21c1ba4e(this,1);
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
            goto LAB_21c1c8e1;
          }
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)((int)this + 0x74) + 0x14))(*(int **)((int)this + 0x74));
        if (iVar3 == 0) goto LAB_21c1c71f;
        if (-1 < iVar3) goto LAB_21c1c702;
LAB_21c1c6ae:
        iVar3 = -0x7fffbffb;
      }
    }
LAB_21c1c702:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
    *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffd;
  }
  return iVar3;
}



undefined4 FUN_21c1c8f6(int *param_1)

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



undefined4 FUN_21c1c97c(int param_1)

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



undefined4 FUN_21c1c9c6(int param_1,RECT *param_2,RECT *param_3)

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
FUN_21c1cb92(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

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



undefined4 FUN_21c1cbe0(int param_1,undefined4 param_2)

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
      cVar1 = FUN_21c1e5b5();
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



HRESULT FUN_21c1cc47(int param_1,ITypeLib *param_2)

{
  ITypeLib *ppTinfo;
  HRESULT HVar1;
  
  ppTinfo = param_2;
  param_2->lpVtbl = (ITypeLibVtbl *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  HVar1 = LoadRegTypeLib((GUID *)PTR_DAT_21c205e8,
                         *(WORD *)((&PTR_PTR_21c20134)[*(int *)(param_1 + -0x48) * 2] + 0x18),
                         *(WORD *)((&PTR_PTR_21c20134)[*(int *)(param_1 + -0x48) * 2] + 0x1c),
                         (uint)(ushort)DAT_21c20220,&param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (-1 < HVar1) {
    HVar1 = (*param_2->lpVtbl->GetTypeInfoOfGuid)
                      (param_2,*(GUID **)(&PTR_PTR_21c20134)[*(int *)(param_1 + -0x48) * 2],
                       (ITypeInfo **)ppTinfo);
    (*param_2->lpVtbl->Release)(param_2);
    if (-1 < HVar1) {
      HVar1 = 0;
    }
  }
  return HVar1;
}



void __fastcall FUN_21c1ccd1(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xb8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,1,0xffffffff);
    if ((*(uint *)(param_1 + 0xbc) >> 4 & 1) != 0) {
      (**(code **)(*(int *)(param_1 + 0x48) + 0x1c))(param_1 + 0x48,1,0,0);
    }
  }
  return;
}



void __thiscall FUN_21c1cd07(void *this,uint param_1)

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



void __thiscall FUN_21c1cda5(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x34))(piVar1,param_1 == 0);
  }
  return;
}



int FUN_21c1cdcf(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,L"Contents",0,0x10,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)(param_1 + -4) + 0x14))((int *)(param_1 + -4),param_2);
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



int FUN_21c1ce10(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2,L"Contents",0x1011,0,0,&param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_21c156b9((void *)(param_1 + -0x54),param_2);
    *(uint *)(param_1 + 0x5c) = (uint)(-1 < iVar1) << 5 | *(uint *)(param_1 + 0x5c) & 0xffffffdf;
    (**(code **)(*param_2 + 8))(param_2);
  }
  return iVar1;
}



undefined4
FUN_21c1ce95(int param_1,int param_2,undefined4 param_3,int *param_4,LPCWSTR param_5,HDC param_6,
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
      param_6 = FUN_21c1d1b4(param_5);
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



undefined4 FUN_21c1d0b8(int param_1,undefined4 param_2,int *param_3)

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
    FUN_21c15582(local_14,param_3);
    FUN_21c15582(local_c,param_3 + 2);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4
FUN_21c1d124(undefined4 param_1,int param_2,RECT *param_3,LONG param_4,LONG param_5,
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
FUN_21c1d155(undefined4 param_1,int param_2,RECT *param_3,RECT *param_4,undefined4 param_5,
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



HDC __cdecl FUN_21c1d1b4(LPCWSTR param_1)

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
    pHVar2 = CreateDCA(s_DISPLAY_21c2099c,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
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
    FUN_21c1181e(local_118,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)((uint)(ushort)WVar1 + (int)pWVar6),-1,local_118[0],
                        (int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_14 = local_118[0];
    iVar3 = lstrlenW((LPCWSTR)local_8);
    local_c = (LPSTR)(iVar3 * 2 + 2);
    FUN_21c1181e(local_98,(uint)local_c);
    WideCharToMultiByte(0,0,(LPCWSTR)local_8,-1,local_98[0],(int)local_c,(LPCSTR)0x0,(LPBOOL)0x0);
    local_18 = local_98[0];
    iVar3 = lstrlenW(local_10);
    uVar4 = iVar3 * 2 + 2;
    FUN_21c1181e(local_198,uVar4);
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
        local_8 = (DEVMODEA *)HeapAlloc(DAT_21c20030,0,(ushort)param_1[0x23] + 0x9c);
        if (local_8 == (DEVMODEA *)0x0) {
          if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
            HeapFree(DAT_21c20030,0,local_198[0]);
          }
          if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
            HeapFree(DAT_21c20030,0,local_98[0]);
          }
          if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
            HeapFree(DAT_21c20030,0,local_118[0]);
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
      HeapFree(DAT_21c20030,0,local_8);
    }
    if ((local_198[0] != (LPSTR)0x0) && ((local_11c & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_198[0]);
    }
    if ((local_98[0] != (LPSTR)0x0) && ((local_1c & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_98[0]);
    }
    if ((local_118[0] != (LPSTR)0x0) && ((local_9c & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_118[0]);
    }
  }
  return pHVar2;
}



undefined4 * __thiscall FUN_21c1d48c(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_21c13b00;
  InterlockedDecrement(&DAT_21c20168);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21c1d4c0(void *this,byte param_1)

{
  FUN_21c12f27((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 FUN_21c1d4e8(undefined4 param_1,undefined4 *param_2)

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



bool FUN_21c1d502(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = *(char **)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x14) * 2] + 0x20);
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  return !bVar3;
}



undefined4 * __thiscall FUN_21c1d550(void *this,byte param_1)

{
  FUN_21c12ee4((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



void __thiscall FUN_21c1d765(void *this,undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  
  sVar1 = *(short *)((int)this + 10);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      (**(code **)(**(int **)((int)this + 4) + 0x18))
                (*(int **)((int)this + 4),param_1,&DAT_21c158e8,0,1,param_2,0,0,0);
    }
    else {
      iVar3 = 0;
      if (0 < sVar1) {
        do {
          piVar2 = *(int **)(*(int *)((int)this + 4) + iVar3 * 4);
          (**(code **)(*piVar2 + 0x18))(piVar2,param_1,&DAT_21c158e8,0,1,param_2,0,0,0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(short *)((int)this + 10));
      }
    }
  }
  return;
}



void __cdecl FUN_21c1d7ce(int param_1,undefined4 *param_2)

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
          cVar6 = (&DAT_21c16fe0)[uVar1];
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
  FUN_21c1d765((void *)(param_1 + 0x20),*param_2,&local_1c);
  return;
}



LRESULT __thiscall FUN_21c1d903(void *this,UINT param_1,WPARAM param_2,LRESULT param_3)

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



undefined4 * __thiscall FUN_21c1d944(void *this,undefined4 *param_1,undefined4 param_2)

{
  FUN_21c11da9(this,param_1,this);
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21c170c0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined ***)this = &PTR_FUN_21c170a8;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21c17068;
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_21c1d984(void *this,byte param_1)

{
  FUN_21c186b5((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 __thiscall FUN_21c1d9ac(void *this,int *param_1,undefined4 *param_2)

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
    pcVar3 = &DAT_21c17388;
    piVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == (char)*piVar4;
      pcVar3 = pcVar3 + 1;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (bVar5);
    if (!bVar5) goto LAB_21c1d9d9;
LAB_21c1d9f1:
    piVar4 = (int *)(-(uint)(this != (void *)0x0) & (int)this + 0x14U);
    (**(code **)(*piVar4 + 4))(piVar4);
    *param_2 = piVar4;
    uVar1 = 0;
  }
  else {
LAB_21c1d9d9:
    if (*param_1 == 0x1e44665) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = &DAT_21c17378;
      piVar4 = param_1;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == (char)*piVar4;
        pcVar3 = pcVar3 + 1;
        piVar4 = (int *)((int)piVar4 + 1);
      } while (bVar5);
      if (bVar5) goto LAB_21c1d9f1;
    }
    uVar1 = FUN_21c13f21(param_1,param_2);
  }
  return uVar1;
}



undefined4 FUN_21c1da1f(int param_1,int *param_2)

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



uint FUN_21c1da4c(int *param_1,HWND param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_21c1e191((int)(param_1 + -5));
  if (-1 < (int)uVar1) {
    uVar1 = FUN_21c1e336((int)(param_1 + -5));
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



int FUN_21c1da9e(int param_1)

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



undefined4 FUN_21c1dae6(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  int iVar3;
  undefined4 *puVar4;
  tagRECT local_14;
  
  FUN_21c1e191(param_1 + -0x14);
  puVar4 = param_2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_21c1a18c(*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0xc) * 2] + 0x1a),
                       (BSTR)0x1);
  param_2[1] = uVar1;
  uVar1 = FUN_21c1a18c(*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0xc) * 2] + 0x1c),
                       (BSTR)0x1);
  param_2[4] = uVar1;
  pWVar2 = FUN_21c14de7(*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0xc) * 2] + 0x20),
                        (BSTR)0x1);
  iVar3 = *(int *)(param_1 + 0xc);
  param_2[5] = pWVar2;
  param_2[6] = *(undefined4 *)((&PTR_PTR_21c20134)[iVar3 * 2] + 0x24);
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



undefined4 FUN_21c1dbd6(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (((uint)param_1[5] >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  FUN_21c1e241((int)(param_1 + -5));
  uVar4 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    pvVar3 = HeapAlloc(DAT_21c20030,0,param_2 << 2);
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
        uVar2 = FUN_21c1e336((int)(param_1 + -5));
      }
    }
  }
  return uVar2;
}



int FUN_21c1dcd0(int param_1)

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



int FUN_21c1dd2e(int param_1,LPCWSTR param_2)

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
  local_c = FUN_21c1b29b(*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0xc) * 2] + 0x20));
  if (local_c != (char *)0x0) {
    iVar2 = lstrcmpiA(local_c,&DAT_21c209a4);
    if (iVar2 == 0) {
      lstrcpyA(local_190,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      iVar2 = FUN_21c1e49b(local_190,
                           *(undefined4 *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x24),
                           &param_1);
      local_8 = (uint)(-1 < iVar2);
      if (param_1 != 0) goto LAB_21c1de74;
      iVar2 = lstrlenW(param_2);
      local_8 = iVar2 * 2 + 2;
      FUN_21c1181e(local_8c,local_8);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_21c209a8);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      local_8 = FUN_21c1e9cd(*(undefined4 *)(iVar1 + 8),local_190,0xf,
                             *(undefined4 *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x24))
      ;
    }
    else {
      iVar2 = lstrcmpiA(local_c,&DAT_21c209ac);
      if (iVar2 != 0) goto LAB_21c1de74;
      iVar2 = lstrlenW(param_2);
      cbMultiByte = iVar2 * 2 + 2;
      FUN_21c1181e(local_8c,cbMultiByte);
      WideCharToMultiByte(0,0,param_2,-1,local_8c[0],cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      lstrcpyA(local_190,local_8c[0]);
      lstrcatA(local_190,&DAT_21c209b0);
      lstrcatA(local_190,*(LPCSTR *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x20));
      lstrcatA(local_190,s_>LangRef_21c209b4);
      local_8 = WinHelpA(*(HWND *)(iVar1 + 8),local_190,1,
                         *(ULONG_PTR *)((&PTR_PTR_21c20134)[*(int *)(iVar1 + 0xc) * 2] + 0x24));
    }
    if ((local_8c[0] != (LPCSTR)0x0) && ((local_10 & 1) != 0)) {
      HeapFree(DAT_21c20030,0,local_8c[0]);
    }
  }
LAB_21c1de74:
  return (-(uint)(local_8 != 0) & 0x7fffbffb) + 0x80004005;
}



undefined4 __cdecl FUN_21c1e0fe(HWND param_1,HWND param_2,UINT param_3)

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



undefined4 FUN_21c1e167(int param_1,WPARAM param_2)

{
  undefined4 local_8;
  
  local_8 = 0x80004001;
  SendMessageA(*(HWND *)(param_1 + 8),0x466,param_2,(LPARAM)&local_8);
  return local_8;
}



uint __fastcall FUN_21c1e191(int param_1)

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
    lpName = (LPCSTR)(uint)*(ushort *)((&PTR_PTR_21c20134)[*(int *)(param_1 + 0x20) * 2] + 0x18);
    pHVar1 = FUN_21c1e396(param_1);
    hResInfo = FindResourceA(pHVar1,lpName,lpType);
    if (hResInfo != (HRSRC)0x0) {
      pHVar1 = FUN_21c1e396(param_1);
      hResData = LoadResource(pHVar1,hResInfo);
      if ((hResData != (HGLOBAL)0x0) &&
         (lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData), lpTemplate != (LPCDLGTEMPLATEA)0x0))
      {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
        dwInitParam = 0;
        lpDialogFunc = FUN_21c1e2a6;
        DAT_21c20c84 = param_1;
        hWndParent = FUN_21c1e6bc();
        CreateDialogIndirectParamA(DAT_21c20008,lpTemplate,hWndParent,lpDialogFunc,dwInitParam);
        DAT_21c20c84 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
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



void __fastcall FUN_21c1e241(int param_1)

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
    HeapFree(DAT_21c20030,0,*(LPVOID *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 FUN_21c1e2a6(HWND param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)GetWindowLongA(param_1,-0x15);
  if (piVar1 == (int *)0xffffffff) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == (int *)0x0) {
      SetWindowLongA(param_1,-0x15,(LONG)DAT_21c20c84);
      piVar1 = DAT_21c20c84;
      DAT_21c20c84[7] = (int)param_1;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}



void __thiscall FUN_21c1e2f0(void *this,uint *param_1)

{
  *param_1 = 0;
  FUN_21c1e300(this,param_1);
  return;
}



undefined4 __thiscall FUN_21c1e300(void *this,uint *param_1)

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



undefined4 __fastcall FUN_21c1e336(int param_1)

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



void __fastcall FUN_21c1e37b(int param_1)

{
  int *piVar1;
  
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
  piVar1 = *(int **)(param_1 + 0x18);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x28) & 4) == 0)) {
    (**(code **)(*piVar1 + 0xc))(piVar1,3);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x21c1e3a4)

HINSTANCE __fastcall FUN_21c1e396(int param_1)

{
  int *piVar1;
  HINSTANCE pHVar2;
  
  pHVar2 = DAT_21c20004;
  if (DAT_21c20004 == (HINSTANCE)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    if ((DAT_21c20224 == 0) && (piVar1 = *(int **)(param_1 + 0x18), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x10))(piVar1,&DAT_21c20220);
      DAT_21c20224 = 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
    pHVar2 = FUN_21c12a19(0);
  }
  return pHVar2;
}



int __cdecl FUN_21c1e3f7(undefined4 *param_1)

{
  int iVar1;
  HRESULT HVar2;
  int *local_8;
  
  HVar2 = 0;
  local_8 = (int *)0x0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c2016c == (int *)0x0) {
    HVar2 = CoCreateInstance((IID *)&DAT_21c17188,(LPUNKNOWN)0x0,1,(IID *)&DAT_21c17198,
                             &DAT_21c2016c);
    if (-1 < HVar2) {
      if (DAT_21c2016c == (int *)0x0) {
        HVar2 = -0x7fffbffb;
      }
      else {
        iVar1 = (**(code **)*DAT_21c2016c)(DAT_21c2016c,&DAT_21c17178,&local_8);
        if (-1 < iVar1) {
          (**(code **)(*local_8 + 0x10))(local_8,DAT_21c20220);
        }
        HVar2 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  if (-1 < HVar2) {
    (**(code **)(*DAT_21c2016c + 4))(DAT_21c2016c);
    *param_1 = DAT_21c2016c;
  }
  return HVar2;
}



int __cdecl FUN_21c1e49b(LPCSTR param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPWSTR bstrString;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_21c1e3f7(&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x28))(local_8,0);
    if (-1 < iVar1) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 1;
      }
      bstrString = FUN_21c14de7(param_1,(BSTR)0x0);
      iVar1 = (**(code **)(*local_8 + 0x24))(local_8,bstrString,param_2,4);
      SysFreeString(bstrString);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}



char FUN_21c1e5b5(void)

{
  SHORT SVar1;
  SHORT SVar2;
  SHORT SVar3;
  
  SVar1 = GetKeyState(0x10);
  SVar2 = GetKeyState(0x11);
  SVar3 = GetKeyState(0x12);
  return (SVar1 < 0) + ((SVar2 < 0) + (SVar3 < 0) * '\x02') * '\x02';
}



HWND __cdecl FUN_21c1e61a(int param_1,HWND param_2,int param_3,int param_4,int *param_5)

{
  ATOM AVar1;
  HWND pHVar2;
  int iVar3;
  WNDCLASSA *pWVar4;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20174 == '\0') {
    pWVar4 = &local_2c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      pWVar4->style = 0;
      pWVar4 = (WNDCLASSA *)&pWVar4->lpfnWndProc;
    }
    local_2c.lpfnWndProc = FUN_21c1bb72;
    local_2c.hInstance = DAT_21c20008;
    local_2c.lpszClassName = "CtlFrameWork_ReflectWindow";
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
      return (HWND)0x0;
    }
    DAT_21c20174 = '\x01';
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  pHVar2 = CreateWindowExA(0,"CtlFrameWork_ReflectWindow",(LPCSTR)0x0,
                           -(uint)(param_1 != 0) & 0x10000000 | 0x44000000,param_3,param_4,*param_5,
                           param_5[1],param_2,(HMENU)0x0,DAT_21c20008,(LPVOID)0x0);
  return pHVar2;
}



HWND FUN_21c1e6bc(void)

{
  ATOM AVar1;
  int iVar2;
  WNDCLASSA *pWVar3;
  WNDCLASSA local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  if (DAT_21c20178 == (HWND)0x0) {
    pWVar3 = &local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      pWVar3->style = 0;
      pWVar3 = (WNDCLASSA *)&pWVar3->lpfnWndProc;
    }
    local_2c.lpfnWndProc = DAT_21c20c64;
    if (DAT_21c20c64 == (WNDPROC)0x0) {
      local_2c.lpfnWndProc = FUN_21c1e74b;
    }
    local_2c.lpszClassName = s_CtlFrameWork_Parking_21c209c0;
    local_2c.hInstance = DAT_21c20008;
    AVar1 = RegisterClassA(&local_2c);
    if (AVar1 != 0) {
      DAT_21c20178 = CreateWindowExA(0,s_CtlFrameWork_Parking_21c209d8,(LPCSTR)0x0,0x80000000,0,0,0,
                                     0,(HWND)0x0,(HMENU)0x0,DAT_21c20008,(LPVOID)0x0);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_21c20018);
  return DAT_21c20178;
}



LRESULT FUN_21c1e74b(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  int iVar1;
  LRESULT local_8;
  
  iVar1 = FUN_21c1bae9(param_1,param_2,param_3,param_4,&local_8);
  if (iVar1 == 0) {
    local_8 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  return local_8;
}



undefined4 * __thiscall FUN_21c1e7a6(void *this,byte param_1)

{
  FUN_21c1e82f((undefined4 *)this);
  if (((param_1 & 1) != 0) && (this != (void *)0x0)) {
    HeapFree(DAT_21c20030,0,this);
  }
  return (undefined4 *)this;
}



undefined4 * __thiscall
FUN_21c1e7ce(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,undefined4 param_5)

{
  FUN_21c11da9(this,(undefined4 *)0x0,-(uint)(this != (void *)0x0) & (int)this + 0x14U);
  *(undefined ***)((int)this + 0x14U) = &PTR_LAB_21c17158;
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
  *(undefined ***)this = &PTR_FUN_21c17120;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_21c17138;
  return (undefined4 *)this;
}



void __fastcall FUN_21c1e82f(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0xe];
  *param_1 = &PTR_FUN_21c17120;
  param_1[5] = &PTR_LAB_21c17138;
  if (iVar1 == 0) {
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      HeapFree(DAT_21c20030,0,(LPVOID)param_1[0xd]);
    }
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 8))(iVar1 + 0x14);
  }
  *param_1 = &PTR_FUN_21c13b00;
  InterlockedDecrement(&DAT_21c20168);
  return;
}



bool FUN_21c1e8d7(int param_1,uint param_2,int param_3,uint *param_4)

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



undefined4 FUN_21c1e968(int *param_1,undefined4 *param_2)

{
  HANDLE pvVar1;
  LPVOID this;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pvVar1 = DAT_21c20030;
  puVar3 = (undefined4 *)0x0;
  *param_2 = 0;
  this = FUN_21c11a73(0x40,pvVar1);
  if (this != (LPVOID)0x0) {
    puVar3 = FUN_21c1e7ce(this,param_1 + 1,param_1[5],param_1[6],param_1[8],param_1[10]);
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



int FUN_21c1e9cd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  BYTE local_108 [260];
  
  if ((DAT_21c20a44 == (HMODULE)0x0) && (DAT_21c20a4c == 0)) {
    bVar1 = FUN_21c1ea66(local_108);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      DAT_21c20a44 = LoadLibraryA((LPCSTR)local_108);
    }
    if (DAT_21c20a44 != (HMODULE)0x0) goto LAB_21c1ea2a;
    DAT_21c20a44 = LoadLibraryA("hhctrl.ocx");
    if (DAT_21c20a44 != (HMODULE)0x0) goto LAB_21c1ea2a;
LAB_21c1ea45:
    DAT_21c20a4c = 1;
    iVar2 = 0;
  }
  else {
LAB_21c1ea2a:
    if (DAT_21c20c88 == (FARPROC)0x0) {
      DAT_21c20c88 = GetProcAddress(DAT_21c20a44,(LPCSTR)0xe);
      if (DAT_21c20c88 == (FARPROC)0x0) goto LAB_21c1ea45;
    }
    iVar2 = (*DAT_21c20c88)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}



bool FUN_21c1ea66(LPBYTE param_1)

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



int FUN_21c1eac5(LPCWSTR param_1,LPCWSTR param_2,int param_3,int param_4,int param_5)

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
    if (DAT_21c2000c == 0) {
      iVar1 = lstrlenW(param_1);
      iVar1 = iVar1 * 2 + 2;
      iVar2 = lstrlenW(param_2);
      iVar2 = iVar2 * 2 + 2;
      FUN_21c1181e(local_8c,iVar2 + iVar1);
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
        HeapFree(DAT_21c20030,0,local_8c[0]);
      }
    }
    else {
      iVar1 = CompareStringW(0x400,local_8,param_1,param_4,param_2,param_5);
    }
  }
  return iVar1;
}


