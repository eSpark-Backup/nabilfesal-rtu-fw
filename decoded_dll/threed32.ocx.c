typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
typedef unsigned short    wchar16;
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

typedef struct tagACCEL tagACCEL, *PtagACCEL;

typedef uchar BYTE;

typedef ushort WORD;

struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
};

typedef int BOOL;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef BOOL (*GRAYSTRINGPROC)(HDC, LPARAM, int);

struct HDC__ {
    int unused;
};

typedef struct tagACCEL *LPACCEL;

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

typedef long LONG;

typedef char CHAR;

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

typedef ulong DWORD;

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

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _GUID GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

typedef void *PVOID;

typedef wchar_t WCHAR;

typedef long HRESULT;

typedef CHAR *LPCSTR;

typedef short SHORT;

typedef LONG *PLONG;

typedef double ULONGLONG;

typedef DWORD LCID;

typedef double LONGLONG;

typedef CHAR *LPSTR;

typedef void *HANDLE;

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

typedef ulong ULONG_PTR;

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

typedef uint UINT;

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

typedef uint UINT_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef UINT_PTR WPARAM;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ {
    int unused;
};

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct HACCEL__ *HACCEL;

typedef struct HPEN__ HPEN__, *PHPEN__;

typedef struct HPEN__ *HPEN;

struct HPEN__ {
    int unused;
};

typedef struct HPALETTE__ *HPALETTE;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef void *LPVOID;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagSIZE *LPSIZE;

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef struct HRGN__ *HRGN;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef struct HRSRC__ *HRSRC;

typedef HICON HCURSOR;

typedef struct HBRUSH__ *HBRUSH;

typedef DWORD COLORREF;

typedef struct HBITMAP__ *HBITMAP;

typedef struct tagPOINT POINT;

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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_14 IMAGE_RESOURCE_DIR_STRING_U_14, *PIMAGE_RESOURCE_DIR_STRING_U_14;

struct IMAGE_RESOURCE_DIR_STRING_U_14 {
    word Length;
    wchar16 NameString[7];
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

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
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

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_30 IMAGE_RESOURCE_DIR_STRING_U_30, *PIMAGE_RESOURCE_DIR_STRING_U_30;

struct IMAGE_RESOURCE_DIR_STRING_U_30 {
    word Length;
    wchar16 NameString[15];
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

typedef struct IMAGE_RESOURCE_DIR_STRING_U_38 IMAGE_RESOURCE_DIR_STRING_U_38, *PIMAGE_RESOURCE_DIR_STRING_U_38;

struct IMAGE_RESOURCE_DIR_STRING_U_38 {
    word Length;
    wchar16 NameString[19];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_32 IMAGE_RESOURCE_DIR_STRING_U_32, *PIMAGE_RESOURCE_DIR_STRING_U_32;

struct IMAGE_RESOURCE_DIR_STRING_U_32 {
    word Length;
    wchar16 NameString[16];
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_34 IMAGE_RESOURCE_DIR_STRING_U_34, *PIMAGE_RESOURCE_DIR_STRING_U_34;

struct IMAGE_RESOURCE_DIR_STRING_U_34 {
    word Length;
    wchar16 NameString[17];
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
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

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_20 IMAGE_RESOURCE_DIR_STRING_U_20, *PIMAGE_RESOURCE_DIR_STRING_U_20;

struct IMAGE_RESOURCE_DIR_STRING_U_20 {
    word Length;
    wchar16 NameString[10];
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef int (*_onexit_t)(void);

typedef uint size_t;



undefined DAT_100206b8;
undefined LAB_10001138;
undefined4 DAT_10018050;
undefined *PTR_LAB_10018060;
pointer PTR_s_CSSPNPropPage2_1001f0b0;
undefined LAB_10001160;
undefined DAT_1000128f;
undefined *PTR_LAB_100180c8;
undefined DAT_10001537;
undefined DAT_10020758;
undefined LAB_10001808;
undefined4 DAT_100186a0;
undefined *PTR_LAB_100186f8;
pointer PTR_s_CSSPBCtrl_1001f108;
undefined LAB_10001830;
undefined LAB_10001b4d;
undefined *PTR_LAB_10018760;
undefined DAT_10002d73;
undefined DAT_1000311c;
undefined GrayStringCallback;
undefined DAT_100035fd;
undefined *PTR_LAB_10018910;
undefined DAT_10003d99;
undefined *PTR_LAB_10018940;
undefined DAT_10003e5d;
undefined *PTR_LAB_10018928;
undefined DAT_100207b0;
undefined LAB_10003fb8;
undefined4 DAT_100189a8;
undefined *PTR_LAB_100189b8;
pointer PTR_s_CSSRBPropPage_1001f388;
undefined LAB_10003fe0;
undefined DAT_10020800;
undefined LAB_10004638;
undefined4 DAT_10018f38;
undefined *PTR_LAB_10018f88;
pointer PTR_s_CSSRICtrl_1001f3f0;
undefined LAB_10004660;
undefined LAB_10004a05;
undefined *PTR_LAB_10018ff0;
undefined DAT_10019500;
int DAT_10020890;
undefined4 DAT_1002084c;
string s_SSRIOCX_1001f684;
string s_SSRIOCX_1001f6b8;
int UNK_0000001d;
string s_SSRIOCX_1001f6ec;
int DAT_1002084c;
undefined DAT_1001f6f4;
undefined DAT_100208a0;
undefined LAB_10006fb8;
undefined4 DAT_100191f0;
undefined *PTR_LAB_10019200;
pointer PTR_s_CSSCBPropPage_1001f6f8;
undefined LAB_10006fe0;
undefined DAT_100208f0;
undefined LAB_10007528;
undefined4 DAT_100193a0;
undefined *PTR_LAB_100193b0;
pointer PTR_s_CSSFRPropPage_1001f760;
undefined LAB_10007550;
undefined DAT_10020948;
undefined LAB_10007bd8;
undefined4 DAT_10019ab8;
undefined *PTR_LAB_10019b10;
pointer PTR_s_CSSPNCtrl_1001f7d8;
undefined LAB_10007c00;
undefined LAB_10007ef6;
undefined *PTR_LAB_10019b78;
undefined DAT_1001fb00;
undefined DAT_1001fb08;
undefined DAT_10009d94;
undefined DAT_10009ff9;
int DAT_1001f804;
undefined DAT_1001bad0;
undefined DAT_1001bf50;
undefined *UNK_00000008;
undefined DAT_1000ac88;
undefined DAT_1000af24;
undefined DAT_1000b106;
undefined DAT_1000b505;
undefined DAT_1000b71e;
undefined DAT_1000bea4;
string s_MS_Sans_Serif_1001fb6c;
string s_FontName_1001fb7c;
string s_FontSize_1001fb88;
string s_FontBold_1001fb94;
string s_FontItalic_1001fba0;
string s_FontUnderline_1001fbac;
string s_FontStrikethru_1001fbbc;
undefined *PTR_SysAllocString_10022df8;
undefined *PTR_SysStringLen_10022de4;
undefined *PTR_GlobalUnlock_100228b0;
undefined *PTR_GlobalFree_100228bc;
undefined DAT_1000c439;
undefined DAT_1001bbb0;
undefined DAT_1001be30;
undefined *UNK_00020408;
undefined *UNK_00020418;
undefined *PTR_DeleteObject_100227cc;
undefined DAT_100209f8;
undefined LAB_1000d678;
undefined4 DAT_10019ea0;
undefined *PTR_LAB_10019eb0;
pointer PTR_s_CSSPBPropPage_1001fc40;
undefined LAB_1000d6a0;
undefined DAT_10020a50;
undefined LAB_1000dc18;
undefined4 DAT_1001a050;
undefined *PTR_LAB_1001a060;
pointer PTR_s_CSSRIPropPage_1001fcc8;
undefined LAB_1000dc40;
undefined DAT_10020af0;
undefined LAB_1000e110;
undefined DAT_10020b38;
undefined LAB_1000e378;
undefined4 DAT_1001a680;
undefined *PTR_LAB_1001a6d8;
pointer PTR_s_CSSRBCtrl_1001fd70;
undefined LAB_1000e3a0;
undefined LAB_1000e686;
undefined *PTR_LAB_1001a740;
undefined4 DAT_10020b84;
undefined DAT_10020aec;
int DAT_10020b84;
undefined DAT_1000f63a;
undefined DAT_1000f8fa;
undefined DAT_100104ad;
string s_SSRBup1_1001ff7c;
string s_SSRBup1_1001ff84;
string s_SSRBdn1_1001ff8c;
string s_SSRBdn1_1001ff94;
string s_SSRBup2_1001ff9c;
string s_SSRBup2_1001ffa4;
string s_SSRBdn2_1001ffac;
string s_SSRBdn2_1001ffb4;
string s_SSRBgr1_1001ffbc;
string s_SSRBgr1_1001ffc4;
string s_SSRBgr2_1001ffcc;
string s_SSRBgr2_1001ffd4;
undefined DAT_100106a7;
undefined DAT_10020b88;
undefined LAB_10010c15;
undefined *PTR_LAB_1001a908;
undefined LAB_10010c40;
undefined LAB_10010d69;
undefined DAT_1001a8f0;
undefined LAB_10010e04;
undefined LAB_10010e57;
undefined DAT_10020cf0;
undefined LAB_10010f90;
undefined DAT_10020c58;
undefined LAB_100111f8;
undefined4 DAT_1001aef0;
undefined *PTR_LAB_1001af48;
pointer PTR_s_CSSCBCtrl_1001ffe0;
undefined LAB_10011220;
undefined LAB_10011506;
undefined *PTR_LAB_1001afb0;
undefined DAT_10020d28;
undefined DAT_10020cec;
undefined DAT_10012361;
undefined DAT_1001260c;
undefined DAT_10012ef8;
string s_SSCBup1_100201dc;
string s_SSCBup1_100201e4;
string s_SSCBdn1_100201ec;
string s_SSCBdn1_100201f4;
string s_SSCBup2_100201fc;
string s_SSCBup2_10020204;
string s_SSCBdn2_1002020c;
string s_SSCBdn2_10020214;
undefined DAT_100130c7;
undefined DAT_10020d38;
undefined LAB_100136f8;
undefined4 DAT_1001b1b0;
undefined *PTR_LAB_1001b1c0;
pointer PTR_s_CSSPNPropPage_10020220;
undefined LAB_10013720;
undefined DAT_10020dd8;
undefined LAB_10013e48;
undefined4 DAT_1001b6b0;
undefined *PTR_LAB_1001b708;
pointer PTR_s_CSSFRCtrl_100202c0;
undefined LAB_10013e70;
undefined LAB_10014166;
undefined *PTR_LAB_1001b770;
undefined DAT_100150ef;
int DAT_100204c8;
undefined DAT_100157f1;
string s_Display_100204f8;
int DAT_100204cc;
undefined DAT_100158c1;
string s_Display_10020500;
undefined DAT_10015995;
string s_Display_10020508;
undefined DAT_10015a65;
string s_Display_10020510;
string s_VB.HLP_10020518;
string s_CTRLREF.HLP_10020520;
string s_WinHelp.Ini_1002052c;
undefined DAT_10020538;
string s_Files_1002053c;
undefined DAT_10015c7d;
undefined *PTR_LAB_1001b940;
string s_Help_not_available._10020544;
undefined *PTR_RegCloseKey_100227bc;
string s_MSCONTROLS_10020558;
string s_Licenses_10020564;
string s_Licensing:_Copying_the_keys_may_b_10020570;
undefined DAT_80000000;
undefined LAB_1001629a;
undefined LAB_100163a4;
undefined LAB_100164bf;
string s_VBINTLSZ_LANGMAP_100205d0;
string s_VBINTLSZ_ENGLISH_US_100205e4;
undefined LAB_10016563;
string s_VBINTLSZ_LANGMAP_100205f8;
undefined *PTR_LAB_1001ba28;
undefined LAB_1001745d;
undefined DAT_10017b16;
undefined DAT_10021e78;
undefined LAB_10017518;
undefined DAT_10020e28;
undefined LAB_100175d9;
undefined FUN_100174c3;
undefined *PTR_FUN_1001ba4c;
undefined LAB_1001762a;
undefined LAB_10017696;
undefined LAB_100176d1;
undefined LAB_1001770c;
undefined LAB_1001772c;
undefined *PTR_LAB_1001ba54;
int DAT_10020688;
int DAT_1002068c;
undefined4 DAT_10021e94;
undefined4 DAT_10021e90;
int DAT_100206a8;
undefined *PTR__adjust_fdiv_10022dd8;
undefined DAT_10021e8c;
undefined4 *DAT_10021e94;
undefined4 *DAT_10021e90;
undefined DAT_1001f000;
undefined DAT_1001f098;
undefined *PTR_FUN_1002061c;
undefined LAB_10017b92;
undefined LAB_10017beb;

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100010e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10001138;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_10018050,&PTR_s_CSSPNPropPage2_1001f0b0,0,"Threed.CSSPNPropPage2");
  _DAT_100206b8 = &PTR_LAB_10018060;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10001150(void)

{
  FUN_10017840((_onexit_t)&LAB_10001160);
  return;
}



void FUN_100011ab(void)

{
  Ordinal_651();
  return;
}



undefined4 * __fastcall FUN_10001220(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000128f;
  *unaff_FS_OFFSET = &local_10;
  FUN_10015c10(param_1,0x84,0xca,0);
  *param_1 = &PTR_LAB_100180c8;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}



void FUN_10001479(void)

{
  Ordinal_651();
  return;
}



void FUN_100014e9(void)

{
  FUN_10001500();
  return;
}



void FUN_10001500(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_10001537;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10001541();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10001541(void)

{
  Ordinal_654();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100017b0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10001808;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_100186a0,&PTR_s_CSSPBCtrl_1001f108,0,"Threed.SSCommand");
  _DAT_10020758 = &PTR_LAB_100186f8;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10001820(void)

{
  FUN_10017840((_onexit_t)&LAB_10001830);
  return;
}



void FUN_1000187b(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_10001ac0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10001b4d;
  *param_1 = &PTR_LAB_10018760;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_10001b23();
  local_8._0_1_ = 1;
  FUN_10001b31();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10001b3f();
  local_8 = 0xffffffff;
  FUN_10001b57();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10001b23(void)

{
  Ordinal_665();
  return;
}



void FUN_10001b31(void)

{
  Ordinal_665();
  return;
}



void FUN_10001b3f(void)

{
  FUN_10016230();
  return;
}



void FUN_10001b57(void)

{
  Ordinal_632();
  return;
}



void __thiscall FUN_10001b60(void *this,int param_1)

{
  ushort uVar1;
  
  if ((param_1 == -0x2c1) || (param_1 == -1)) {
    uVar1 = Ordinal_1394();
    FUN_100162e0((void *)((int)this + 0x208),uVar1);
  }
  if (param_1 == -0x2c9) {
    Ordinal_3530(0);
  }
  return;
}



void FUN_10001d84(void)

{
  FUN_10003c30();
  return;
}



void FUN_10001d96(void)

{
  FUN_10003c30();
  return;
}



void FUN_10001e03(void)

{
  Ordinal_706();
  return;
}



void FUN_10002128(void)

{
  Ordinal_569();
  return;
}



void FUN_10002130(void)

{
  Ordinal_569();
  return;
}



void FUN_10002152(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_10002557(void)

{
  Ordinal_665();
  return;
}



undefined4 __fastcall FUN_100027b0(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_1400();
  if (iVar1 == 0) {
    Ordinal_3010();
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x248);
}



void FUN_10002932(void)

{
  Ordinal_706();
  return;
}



void __fastcall FUN_10002990(int param_1)

{
  *(undefined4 *)(param_1 + 0x248) = 1;
  Ordinal_2451(param_1,0xfffffda8,0);
  *(undefined4 *)(param_1 + 0x248) = 0;
  return;
}



void __thiscall FUN_100029c0(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  HBRUSH hbr;
  RECT *lprc;
  int iVar4;
  uint uVar5;
  undefined4 *unaff_FS_OFFSET;
  HDC pHVar6;
  int iVar7;
  int *piVar8;
  int local_8c [10];
  tagRECT local_64;
  tagRECT local_54;
  HGDIOBJ local_44;
  uint local_40;
  LPRECT local_3c;
  int local_38;
  int local_34;
  uint local_30;
  HGDIOBJ local_2c;
  int *local_24;
  tagRECT local_20;
  undefined4 local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10002d73;
  *unaff_FS_OFFSET = &local_10;
  FUN_1000d050(local_8c,*(undefined4 *)((int)this + 600),0);
  local_8 = 0;
  Ordinal_486();
  local_2c = (HGDIOBJ)0x0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_44 = (HGDIOBJ)0x0;
  if (((*(byte *)(param_1 + 0xc) & 4) == 0) || ((*(byte *)(param_1 + 0x10) & 0x10) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar5 = (uVar1 & 0x10) >> 4;
    local_30 = ~uVar1 & 1;
    local_40 = (uint)((uVar1 & 4) == 0);
    if (local_40 == 0) {
      uVar5 = 0;
    }
    Ordinal_2536(0xfffffd37,0xb,&local_38);
    uVar2 = Ordinal_3524();
    Ordinal_760(uVar2);
    local_3c = (LPRECT)Ordinal_2557(1);
    local_24 = (int *)Ordinal_2510(*(undefined4 *)(param_1 + 0x18));
    if ((*(int *)((int)this + 0x25c) == 0) && (*(int *)((int)this + 0x260) == 0)) {
      local_34 = Ordinal_5129(local_24);
    }
    else {
      piVar8 = *(int **)((int)this + 0xbc);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 0x4c))(piVar8,&local_44);
        local_2c = SelectObject((HDC)local_24[1],local_44);
      }
    }
    CopyRect(&local_20,(RECT *)(param_1 + 0x1c));
    FUN_10002e90(this,*(HDC *)(param_1 + 0x18),&local_20,&local_64,&local_54,uVar5,local_38);
    if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
      iVar3 = FUN_10003730((int *)((int)this + 0x234));
      if (iVar3 == 0) {
        ExcludeClipRect(*(HDC *)(param_1 + 0x18),local_20.left + 1,local_20.top + 1,
                        local_20.right + -1,local_20.bottom + -1);
      }
    }
    if ((*(byte *)(param_1 + 0xc) & 2) == 0) {
      hbr = (HBRUSH)FUN_1000d240(local_8c);
      lprc = &local_20;
    }
    else {
      hbr = (HBRUSH)FUN_1000d240(local_8c);
      lprc = (RECT *)(param_1 + 0x1c);
    }
    FillRect(*(HDC *)(param_1 + 0x18),lprc,hbr);
    CopyRect(&local_20,(RECT *)(param_1 + 0x1c));
    iVar3 = FUN_10003730((int *)((int)this + 0x234));
    if (iVar3 == 0) {
      FUN_10003130(this);
    }
    iVar3 = lstrlenA((LPCSTR)local_3c);
    if (0 < iVar3) {
      FUN_100032a0(this,*(HDC *)(param_1 + 0x18),local_3c,local_54.left,local_54.top,local_54.right,
                   local_54.bottom,uVar5,local_30,local_40,local_8c);
    }
    if ((uVar5 != 0) || (local_38 != 0)) {
      FUN_1000b460(*(HDC *)(param_1 + 0x18),local_20.left,local_20.top,local_20.right,
                   local_20.bottom,*(int *)((int)this + 0x23c),local_8c);
      FUN_1000b250(&local_20.left,1,1,1,1,1);
    }
    if (*(int *)((int)this + 0x240) != 0) {
      if (uVar5 == 0) {
        iVar3 = *(int *)((int)this + 0x23c);
        pHVar6 = *(HDC *)(param_1 + 0x18);
      }
      else {
        iVar3 = 0;
        pHVar6 = *(HDC *)(param_1 + 0x18);
      }
      FUN_1000b460(pHVar6,local_20.left,local_20.top,local_20.right,local_20.bottom,iVar3,local_8c);
      FUN_1000b250(&local_20.left,1,1,1,1,1);
    }
    piVar8 = local_8c;
    if (local_30 == 0) {
      iVar3 = *(short *)((int)this + 0x238) + -1;
      if (iVar3 < 2) {
        iVar3 = 1;
      }
      FUN_1000b610(*(HDC *)(param_1 + 0x18),local_20.left,local_20.top,local_20.right,
                   local_20.bottom,(short)iVar3,piVar8);
    }
    else {
      iVar7 = 1;
      iVar4 = (int)*(short *)((int)this + 0x238);
      iVar3 = Ordinal_2510(*(undefined4 *)(param_1 + 0x18));
      FUN_1000b050(iVar3,local_20.left,local_20.top,local_20.right,local_20.bottom,iVar4,iVar7,
                   piVar8);
      FUN_1000b250(&local_20.left,(int)*(short *)((int)this + 0x238),1,1,1,1);
    }
    if ((*(int *)((int)this + 0x25c) == 0) && (*(int *)((int)this + 0x260) == 0)) {
      if (local_34 != 0) {
        (**(code **)(*local_24 + 0x30))(local_34);
      }
    }
    else if (local_2c != (HGDIOBJ)0x0) {
      SelectObject((HDC)local_24[1],local_2c);
    }
    local_8 = local_8 >> 8;
  }
  else {
    local_8 = (uint)local_8._1_3_;
  }
  local_8 = local_8 << 8;
  FUN_10002d6b();
  local_8 = 0xffffffff;
  FUN_10002d7d();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10002d6b(void)

{
  Ordinal_706();
  return;
}



void FUN_10002d7d(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x88);
  return;
}



void __thiscall
FUN_10002e90(void *this,HDC param_1,RECT *param_2,LPRECT param_3,LPRECT param_4,int param_5,
            int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  tagTEXTMETRICA local_74;
  tagRECT local_3c;
  int local_2c;
  int local_28;
  LPCSTR local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000311c;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  FUN_1000b250(&param_2->left,1,1,1,1,1);
  if (*(int *)((int)this + 0x240) != 0) {
    FUN_1000b250(&param_2->left,1,1,1,1,1);
  }
  FUN_1000b250(&param_2->left,(int)*(short *)((int)this + 0x238),1,1,1,1);
  local_28 = (param_2->right - param_2->left) + 1;
  local_2c = (param_2->bottom - param_2->top) + 1;
  uVar2 = Ordinal_3524();
  Ordinal_760(uVar2);
  local_20 = (LPCSTR)Ordinal_2557(1);
  iVar3 = lstrlenA(local_20);
  if (iVar3 < 1) {
    SetRectEmpty(param_4);
  }
  else {
    DrawTextA(param_1,local_20,-1,&local_3c,0x420);
    local_14 = local_3c.right - local_3c.left;
    GetTextMetricsA(param_1,&local_74);
    local_1c = local_74.tmHeight;
    iVar3 = param_2->left;
    if (param_2->right - iVar3 < local_14) {
      param_4->left = iVar3;
      iVar3 = param_2->right + 1;
    }
    else {
      iVar3 = (local_28 - local_14) / 2 + iVar3;
      param_4->left = iVar3;
      iVar3 = iVar3 + local_14;
    }
    param_4->right = iVar3;
    iVar3 = FUN_10003730((int *)((int)this + 0x234));
    if (iVar3 == 0) {
      iVar3 = param_2->bottom + -4;
      param_4->bottom = iVar3;
      param_4->top = (iVar3 - local_1c) + -2;
    }
    else {
      iVar3 = param_2->top + -2 + (local_2c - local_1c) / 2;
      param_4->top = iVar3;
      param_4->bottom = local_1c + iVar3 + 2;
    }
  }
  piVar1 = (int *)((int)this + 0x234);
  iVar3 = FUN_10003730(piVar1);
  if (iVar3 == 0) {
    local_18 = 1;
    local_14 = 1;
    FUN_100036c0(piVar1);
    (**(code **)(*(int *)*piVar1 + 0x14))((int *)*piVar1,(int)&local_1c + 2);
    if (local_1c._2_2_ == 1) {
      iVar3 = lstrlenA(local_20);
      if (iVar3 < 1) {
        CopyRect(param_3,param_2);
        goto LAB_100030df;
      }
      iVar3 = (local_28 - local_18) / 2 + param_2->left;
      param_3->left = iVar3;
      param_3->right = local_18 + iVar3 + -1;
      iVar3 = param_2->top;
    }
    else {
      if (local_1c._2_2_ != 3) goto LAB_100030df;
      iVar3 = (local_28 - local_18) / 2 + param_2->left;
      param_3->left = iVar3;
      param_3->right = local_18 + iVar3 + -1;
      iVar3 = lstrlenA(local_20);
      if (iVar3 < 1) {
        iVar3 = (local_2c - local_14) / 2 + param_2->top;
      }
      else {
        iVar3 = param_2->top;
      }
    }
    param_3->top = iVar3;
    param_3->bottom = local_14 + iVar3 + -1;
  }
  else {
    SetRectEmpty(param_3);
  }
LAB_100030df:
  if ((param_5 == 0) && (param_6 == 0)) {
    FUN_1000b250(&param_2->left,-1,1,1,1,1);
  }
  local_8 = 0xffffffff;
  FUN_10003126();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10003126(void)

{
  Ordinal_706();
  return;
}



void __thiscall FUN_10003130(void *this)

{
  int iVar1;
  undefined4 uVar2;
  HPALETTE hPal;
  undefined4 unaff_ESI;
  int in_stack_00000018;
  HPALETTE__ *hPal_00;
  short sVar3;
  HPALETTE__ local_32;
  tagRECT tStack_2c;
  RECT RStack_1c;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = FUN_10003730((int *)((int)this + 0x234));
  if (iVar1 == 0) {
    if (in_stack_00000018 == 0) {
      iVar1 = *(short *)((int)this + 0x238) + -1;
      if (iVar1 < 2) {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 0;
    }
    hPal_00 = &local_32;
    (**(code **)(**(int **)((int)this + 0x234) + 0x14))(*(int **)((int)this + 0x234));
    sVar3 = (short)((uint)unaff_ESI >> 0x10);
    if (sVar3 == 1) {
      hPal = (HPALETTE)0x0;
      (**(code **)(**(int **)((int)this + 0x234) + 0xc))
                (*(int **)((int)this + 0x234),&tStack_2c.top);
      (**(code **)(**(int **)((int)this + 0x234) + 0x10))
                (*(int **)((int)this + 0x234),&stack0xffffffc0);
      if (hPal_00 != (HPALETTE)0x0) {
        hPal = SelectPalette((HDC)RStack_1c.right,hPal_00,1);
        RealizePalette((HDC)RStack_1c.right);
      }
      FUN_1000bae0((HDC)RStack_1c.right,(HANDLE)0x0,RStack_1c.bottom,iStack_c,iStack_8,iStack_4,
                   iVar1,(uint)(*(short *)((int)this + 0x244) == 1),0,(HANDLE)0x0,0);
      if (hPal != (HPALETTE)0x0) {
        SelectPalette((HDC)RStack_1c.right,hPal,1);
        return;
      }
    }
    else {
      if (sVar3 != 3) {
        return;
      }
      OffsetRect((LPRECT)&stack0x00000000,iVar1,iVar1);
      Ordinal_3098(&RStack_1c.top);
      CopyRect(&tStack_2c,&RStack_1c);
      CopyRect((LPRECT)&stack0xffffffc4,(RECT *)&iStack_4);
      uVar2 = Ordinal_2510(iStack_8,&stack0xffffffc4,&tStack_2c);
      Ordinal_4999(uVar2);
    }
  }
  return;
}



void __thiscall
FUN_100032a0(void *this,HDC param_1,LPRECT param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  int mode;
  int iVar1;
  DWORD DVar2;
  COLORREF CVar3;
  int nHeight;
  HBRUSH hBrush;
  uint uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  code *lpOutputFunc;
  undefined1 *lpData;
  HDC pHVar5;
  int nCount;
  LPRECT ptVar6;
  undefined2 uVar7;
  int iVar8;
  int *piVar9;
  
  mode = SetBkMode(param_1,1);
  if (param_8 == 0) {
    iVar1 = *(short *)((int)this + 0x238) + -1;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    OffsetRect((LPRECT)&param_3,iVar1,iVar1);
  }
  iVar1 = Ordinal_2728();
  if (iVar1 == 0) {
    iVar1 = Ordinal_1400();
    if (iVar1 != 0) {
      DVar2 = GetSysColor(0x11);
      if (DVar2 != 0) {
        DVar2 = GetSysColor(0x11);
        if (DVar2 != 0xc0c0c0) {
          DVar2 = GetSysColor(0x11);
          CVar3 = SetTextColor(param_1,DVar2);
          uVar4 = CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x246));
          uVar7 = SUB42(&param_3,0);
          piVar9 = (int *)0x0;
          iVar8 = 0x25;
          pHVar5 = param_1;
          ptVar6 = param_2;
          iVar1 = Ordinal_2510();
          FUN_1000abf0(iVar1,(LPCSTR)pHVar5,ptVar6,uVar7,uVar4,iVar8,piVar9);
          SetTextColor(param_1,CVar3);
          goto LAB_1000340f;
        }
      }
      Ordinal_3523();
      Ordinal_2795();
      iVar8 = param_4 - (int)param_2;
      nHeight = param_5 - param_3;
      lpData = &stack0xffffffe8;
      nCount = 0;
      lpOutputFunc = GrayStringCallback;
      ptVar6 = param_2;
      iVar1 = param_3;
      hBrush = (HBRUSH)GetStockObject(4);
      GrayStringA(param_1,hBrush,lpOutputFunc,(LPARAM)lpData,nCount,(int)ptVar6,iVar1,iVar8,nHeight)
      ;
      goto LAB_1000340f;
    }
  }
  uVar4 = Ordinal_2801();
  CVar3 = FUN_1000b440(uVar4);
  SetTextColor(param_1,CVar3);
  uVar4 = CONCAT22(extraout_var_00,*(undefined2 *)((int)this + 0x246));
  uVar7 = SUB42(&param_3,0);
  piVar9 = (int *)0x0;
  iVar8 = 0x25;
  pHVar5 = param_1;
  ptVar6 = param_2;
  iVar1 = Ordinal_2510();
  FUN_1000abf0(iVar1,(LPCSTR)pHVar5,ptVar6,uVar7,uVar4,iVar8,piVar9);
LAB_1000340f:
  if (param_6 != 0) {
    FUN_1000b250((int *)&param_2,-1,1,1,1,1);
    FUN_1000b250((int *)&param_2,-1,1,0,0,0);
    CVar3 = SetTextColor(param_1,0);
    DrawFocusRect(param_1,(RECT *)&param_2);
    SetTextColor(param_1,CVar3);
  }
  SetBkMode(param_1,mode);
  return;
}



undefined4 __thiscall FUN_10003480(void *this,int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  LPCSTR lpString;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c [2];
  short local_12;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100035fd;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if (*(short *)((int)this + 0x244) == 2) {
    uVar2 = Ordinal_3524();
    Ordinal_760(uVar2);
    lpString = (LPCSTR)Ordinal_2557(1);
    iVar3 = lstrlenA(lpString);
    if (iVar3 < 1) {
      piVar1 = (int *)((int)this + 0x234);
      iVar3 = FUN_10003730(piVar1);
      if (iVar3 == 0) {
        FUN_100036c0(piVar1);
        (**(code **)(*(int *)*piVar1 + 0x14))((int *)*piVar1,&local_12);
        if ((local_12 == 1) || (local_12 == 3)) {
          if (*(int *)((int)this + 0x240) == 0) {
            *param_1 = *param_1 + *(short *)((int)this + 0x238) * 2 + 2;
            iVar3 = *(short *)((int)this + 0x238) * 2 + 2;
          }
          else {
            *param_1 = *param_1 + *(short *)((int)this + 0x238) * 2 + 4;
            iVar3 = *(short *)((int)this + 0x238) * 2 + 4;
          }
          param_1[1] = param_1[1] + iVar3;
          if (param_2 == 0) {
            local_8 = 0xffffffff;
            FUN_10003607();
            uVar2 = 1;
            goto LAB_100034d7;
          }
          Ordinal_2635(&local_20,local_1c);
          if ((*param_1 != local_20) || (param_1[1] != local_1c[0])) {
            *(undefined4 *)((int)this + 0x254) = 1;
            Ordinal_5241(*param_1,param_1[1]);
            *(undefined4 *)((int)this + 0x254) = 0;
            local_8 = 0xffffffff;
            FUN_10003607();
            uVar2 = 1;
            goto LAB_100034d7;
          }
        }
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_10003607();
  uVar2 = 0;
LAB_100034d7:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}



void FUN_10003607(void)

{
  Ordinal_706();
  return;
}



undefined4 FUN_100036c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_8 = (undefined4 *)0x1;
  local_4 = 1;
  piVar1 = (int *)*param_1;
  (**(code **)(*piVar1 + 0x18))();
  (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,&stack0xfffffff4);
  uVar3 = FUN_10015700((int)piVar1,0);
  puVar2 = local_8;
  *local_8 = uVar3;
  uVar3 = FUN_10015720((int)&local_8,0);
  puVar2[1] = uVar3;
  return 1;
}



undefined4 FUN_10003730(int *param_1)

{
  int *piVar1;
  short sVar2;
  undefined1 local_2 [2];
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*piVar1 + 0x14))(piVar1,local_2);
  sVar2 = (short)((uint)piVar1 >> 0x10);
  if ((sVar2 != 0) && (sVar2 != -1)) {
    return 0;
  }
  return 1;
}



void FUN_10003be9(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_10003c10(void *this,byte param_1)

{
  FUN_10001ac0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



void FUN_10003c30(void)

{
                    // WARNING: Could not recover jumptable at 0x1001708e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1359();
  return;
}



void __fastcall FUN_10003cb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10018910;
  return;
}



void FUN_10003d3b(void)

{
  int unaff_EBP;
  
  FUN_10003cb0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



void __fastcall FUN_10003d50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_10003d99;
  *param_1 = &PTR_LAB_10018940;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  Ordinal_2115(param_1);
  local_8 = 0xffffffff;
  FUN_10003da3();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10003da3(void)

{
  int unaff_EBP;
  
  FUN_10003cb0(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



void FUN_10003e0f(void)

{
  int unaff_EBP;
  
  FUN_10003d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



void __fastcall FUN_10003e20(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_10003e5d;
  *param_1 = &PTR_LAB_10018928;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10003e67();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10003e67(void)

{
  int unaff_EBP;
  
  FUN_10003d50(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10003f60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10003fb8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_100189a8,&PTR_s_CSSRBPropPage_1001f388,0,"Threed.CSSRBPropPage");
  _DAT_100207b0 = &PTR_LAB_100189b8;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10003fd0(void)

{
  FUN_10017840((_onexit_t)&LAB_10003fe0);
  return;
}



void FUN_1000402b(void)

{
  Ordinal_651();
  return;
}



void FUN_10004379(void)

{
  Ordinal_651();
  return;
}



void FUN_100043ec(void)

{
  Ordinal_706();
  return;
}



void FUN_10004404(void)

{
  FUN_10001500();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100045e0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10004638;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_10018f38,&PTR_s_CSSRICtrl_1001f3f0,0,"Threed.SSRibbon");
  _DAT_10020800 = &PTR_LAB_10018f88;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10004650(void)

{
  FUN_10017840((_onexit_t)&LAB_10004660);
  return;
}



void FUN_100046ab(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_10004930(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10004a05;
  *param_1 = &PTR_LAB_10018ff0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 5;
  if ((HGDIOBJ)param_1[0x98] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x98]);
    param_1[0x98] = 0;
  }
  local_8._0_1_ = 4;
  FUN_100049bf();
  local_8._0_1_ = 3;
  FUN_100049cd();
  local_8._0_1_ = 2;
  FUN_100049db();
  local_8._0_1_ = 1;
  FUN_100049e9();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100049f7();
  local_8 = 0xffffffff;
  FUN_10004a0f();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_100049bf(void)

{
  Ordinal_665();
  return;
}



void FUN_100049cd(void)

{
  Ordinal_665();
  return;
}



void FUN_100049db(void)

{
  Ordinal_665();
  return;
}



void FUN_100049e9(void)

{
  Ordinal_665();
  return;
}



void FUN_100049f7(void)

{
  FUN_10016230();
  return;
}



void FUN_10004a0f(void)

{
  Ordinal_632();
  return;
}



void FUN_10004c17(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x44);
  return;
}



void FUN_10004d98(void)

{
  Ordinal_569();
  return;
}



void FUN_10004da0(void)

{
  Ordinal_569();
  return;
}



void FUN_10004dc2(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_100050b9(void)

{
  FUN_10003c30();
  return;
}



void FUN_100050c1(void)

{
  FUN_10003c30();
  return;
}



void FUN_100050c9(void)

{
  FUN_10003c30();
  return;
}



void FUN_100050db(void)

{
  FUN_10003c30();
  return;
}



bool FUN_10005190(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EDI;
  bool bVar4;
  undefined1 auStack_4 [4];
  
  bVar4 = false;
  piVar2 = (int *)Ordinal_2747();
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)*piVar2;
    iVar3 = (*(code *)*puVar1)(piVar2,&DAT_10019500,auStack_4);
    bVar4 = -1 < iVar3;
    if (bVar4) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
    (*(code *)puVar1[2])(piVar2);
  }
  return bVar4;
}



undefined4 __fastcall FUN_10005aa0(void *param_1)

{
  bool bVar1;
  int iVar2;
  HWND pHVar3;
  void *pvVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  
  iVar2 = Ordinal_2728();
  if (iVar2 == 0) {
    return 0;
  }
  if (DAT_10020890 != 0) {
    pHVar3 = GetCapture();
    pvVar4 = (void *)Ordinal_2515(pHVar3);
    if (pvVar4 == param_1) {
      ReleaseCapture();
    }
    DAT_10020890 = 0;
  }
  if (*(int *)((int)param_1 + 0x25c) == 0) {
    *(undefined4 *)((int)param_1 + 0x25c) = 1;
    if (*(int *)((int)param_1 + 0x234) != 0) {
      iVar5 = 1;
      iVar2 = 1;
      bVar1 = FUN_100067a0((int)param_1);
      FUN_100066c0(param_1,CONCAT31(extraout_var,bVar1),iVar2,iVar5);
      return 0;
    }
    iVar5 = 0;
    iVar2 = 1;
    bVar1 = FUN_100067a0((int)param_1);
    FUN_100066c0(param_1,CONCAT31(extraout_var_00,bVar1),iVar2,iVar5);
  }
  return 0;
}



void FUN_10005cc0(void)

{
  undefined4 uVar1;
  COLORREF color;
  HBRUSH hbr;
  HDC unaff_ESI;
  
  uVar1 = Ordinal_2548(0);
  color = Ordinal_5568(uVar1);
  hbr = CreateSolidBrush(color);
  FillRect(unaff_ESI,(RECT *)&stack0x00000000,hbr);
  DeleteObject(hbr);
  return;
}



void __thiscall FUN_10005d00(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  HDC unaff_EBX;
  HPALETTE unaff_EBP;
  uint uVar3;
  HPALETTE hPal;
  HANDLE unaff_EDI;
  int unaff_retaddr;
  int local_8;
  int iStack_4;
  
  hPal = (HPALETTE)0x0;
  local_8 = 0;
  iVar2 = Ordinal_2728();
  if (iVar2 == 0) {
    piVar1 = (int *)((int)this + 0x248);
    iVar2 = FUN_100069a0(piVar1);
    if (iVar2 == 0) {
      (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&iStack_4);
      (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,&stack0xfffffff0);
      uVar3 = 0;
    }
    else {
      piVar1 = (int *)((int)this + 0x240);
      iVar2 = FUN_100069a0(piVar1);
      if (iVar2 != 0) {
        return;
      }
      (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&iStack_4);
      (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,&stack0xfffffff0);
      uVar3 = 0;
    }
  }
  else if ((*(int *)((int)this + 0x234) == 0) && (*(int *)((int)this + 0x25c) != 0)) {
    piVar1 = (int *)((int)this + 0x240);
    iVar2 = FUN_100069a0(piVar1);
    if (iVar2 != 0) {
      return;
    }
    (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&iStack_4);
    (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,&stack0xfffffff0);
    uVar3 = 0;
  }
  else {
    piVar1 = (int *)((int)this + 0x244);
    iVar2 = FUN_100069a0(piVar1);
    if (iVar2 == 0) {
      uVar3 = (uint)(0 < *(short *)((int)this + 0x254));
      (**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1,&iStack_4);
      (**(code **)(*(int *)*piVar1 + 0x10))((int *)*piVar1,&stack0xfffffff0);
    }
    else {
      uVar3 = 0;
      iStack_4 = *(int *)((int)this + 0x260);
      if (iStack_4 == 0) {
        FUN_10005ee0(this,param_1,param_2,param_3,param_4,param_5);
        iStack_4 = *(int *)((int)this + 0x260);
        if (iStack_4 == 0) {
          return;
        }
      }
      (**(code **)(**(int **)((int)this + 0x240) + 0x10))(*(int **)((int)this + 0x240),&local_8);
      unaff_EBX = param_1;
    }
  }
  if (unaff_EBP != (HPALETTE)0x0) {
    hPal = SelectPalette(unaff_EBX,unaff_EBP,1);
    RealizePalette(unaff_EBX);
  }
  FUN_1000bae0(unaff_EBX,unaff_EDI,local_8,iStack_4,unaff_retaddr,(int)param_1,uVar3,
               (uint)(*(short *)((int)this + 0x24e) == 1),0,(HANDLE)0x0,1);
  if (hPal != (HPALETTE)0x0) {
    SelectPalette(unaff_EBX,hPal,1);
  }
  return;
}



void __thiscall FUN_10005ee0(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  HBITMAP pHVar2;
  HDC hdc;
  undefined4 uVar3;
  COLORREF color;
  HBRUSH ho;
  HANDLE unaff_EBP;
  int cy;
  HGDIOBJ unaff_EDI;
  int iStack_8;
  HGDIOBJ pvStack_4;
  
  iVar1 = FUN_100069a0((int *)((int)this + 0x240));
  if (iVar1 == 0) {
    if (*(int *)((int)this + 600) != 0) {
      FUN_1000b250(&param_2,1,1,1,1,1);
    }
    if (0 < *(short *)((int)this + 0x254)) {
      FUN_1000b250(&param_2,1,1,1,0,0);
    }
    iVar1 = param_4 - param_2;
    cy = param_5 - param_3;
    pHVar2 = CreateCompatibleBitmap(param_1,iVar1,cy);
    *(HBITMAP *)((int)this + 0x260) = pHVar2;
    hdc = CreateCompatibleDC(param_1);
    pvStack_4 = SelectObject(hdc,*(HGDIOBJ *)((int)this + 0x260));
    (**(code **)(**(int **)((int)this + 0x240) + 0xc))(*(int **)((int)this + 0x240),&iStack_8);
    param_2 = iVar1;
    param_3 = cy;
    FUN_10005cc0();
    uVar3 = Ordinal_2548(0);
    color = Ordinal_5568(uVar3);
    ho = CreateSolidBrush(color);
    FUN_1000bae0(hdc,unaff_EBP,iStack_8,(int)pvStack_4,0,0,0,
                 (uint)(*(short *)((int)this + 0x24e) == 1),(int)*(short *)((int)this + 0x24c),ho,1)
    ;
    DeleteObject(ho);
    SelectObject(hdc,unaff_EDI);
    DeleteDC(hdc);
  }
  return;
}



void __thiscall FUN_10006080(void *this,short param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  HANDLE pvVar5;
  int *unaff_EBX;
  short unaff_BP;
  HWND hWnd;
  HWND hWnd_00;
  bool bVar6;
  int *piStack_50;
  int *piVar7;
  int *piVar8;
  int iStack_14;
  int iStack_10;
  
  if (param_1 != 0) {
    piVar2 = (int *)Ordinal_2747();
    if (piVar2 != (int *)0x0) {
      puVar1 = (undefined4 *)*piVar2;
      piVar4 = &iStack_14;
      piVar8 = (int *)&DAT_10019500;
      piVar7 = piVar2;
      iVar3 = (*(code *)*puVar1)();
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*unaff_EBX + 0xc))();
        if (-1 < iVar3) {
          piStack_50 = (int *)0x100060ea;
          VariantInit((VARIANTARG *)&stack0xffffffd4);
          piStack_50 = (int *)0x100060f4;
          (**(code **)(*piVar8 + 0x14))();
          piStack_50 = (int *)0x0;
          iVar3 = (**(code **)(*piVar7 + 0xc))(piVar7,1,&stack0xffffffc4);
          do {
            if (iVar3 != 0) {
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
              (*(code *)puVar1[2])(piVar2);
              return;
            }
            iVar3 = FUN_1000c450(piVar8);
            if (iVar3 == 0) {
              piVar4 = (int *)FUN_1000c570(piVar8);
              if (piVar4 != (int *)0x0) {
                if (piVar4 == piVar2) {
                  (**(code **)(*piVar4 + 8))();
                  goto LAB_100061a4;
                }
                (**(code **)(*piVar4 + 8))(piVar4);
              }
              iVar3 = FUN_1000c450(piVar8);
              if ((iVar3 == 0) && ((short)piVar7 == unaff_BP)) {
                DAT_1002084c = 1;
                piVar7 = (int *)0x0;
                FUN_1000c610(piVar8);
                DAT_1002084c = 0;
              }
            }
LAB_100061a4:
            (**(code **)(*piVar8 + 8))(piVar8);
            iVar3 = (**(code **)(*piVar8 + 0xc))(piVar8,1,&piStack_50,0);
          } while( true );
        }
        piStack_50 = (int *)0x100061f3;
        (**(code **)(*piVar4 + 8))();
        piStack_50 = piVar2;
        (*(code *)puVar1[2])();
      }
      (*(code *)puVar1[2])();
    }
    iStack_10 = 0;
    do {
      bVar6 = iStack_10 == 0;
      hWnd = (HWND)0x1;
      hWnd_00 = *(HWND *)((int)this + 0x20);
      while ((hWnd != (HWND)0x0 && (hWnd = GetWindow(hWnd_00,bVar6 + 2), hWnd != (HWND)0x0))) {
        hWnd_00 = hWnd;
        if ((*(HWND *)((int)this + 0x20) != hWnd) &&
           ((pvVar5 = GetPropA(hWnd,s_SSRIOCX_1001f684), pvVar5 != (HANDLE)0x0 &&
            ((HANDLE)(int)param_1 == pvVar5)))) {
          SendMessageA(hWnd,0x500,0,0);
        }
      }
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < 2);
  }
  return;
}



void __thiscall FUN_10006280(void *this,short param_1,WPARAM param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  HWND hWnd;
  HANDLE pvVar5;
  int *unaff_EBP;
  ushort unaff_SI;
  short unaff_DI;
  HWND pHVar6;
  bool bVar7;
  int *piVar8;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int iStack_14;
  int iStack_10;
  
  if (param_1 != 0) {
    piVar2 = (int *)Ordinal_2747();
    if (piVar2 != (int *)0x0) {
      piVar4 = &iStack_14;
      piVar8 = (int *)&DAT_10019500;
      iVar3 = (**(code **)*piVar2)();
      if (-1 < iVar3) {
        piVar1 = (int *)CONCAT22(uStack_1e,uStack_20);
        iVar3 = (**(code **)(*piVar1 + 0xc))();
        if (-1 < iVar3) {
          VariantInit((VARIANTARG *)&stack0xffffffd4);
          (**(code **)(*piVar4 + 0x14))();
          iVar3 = (**(code **)(*piVar8 + 0xc))(piVar8,1,&stack0xffffffc4,0);
          do {
            if (iVar3 != 0) {
              (**(code **)(iRam0000001d + 8))(0x1d);
              (**(code **)(iRam0000001d + 8))(0x1d);
              (**(code **)(*piVar2 + 8))(piVar2);
              return;
            }
            iVar3 = FUN_1000c450(piVar1);
            if (iVar3 == 0) {
              piVar4 = (int *)FUN_1000c570(piVar1);
              if (piVar4 != (int *)0x0) {
                if (piVar4 == piVar2) {
                  (**(code **)(*piVar4 + 8))();
                  goto LAB_100063a8;
                }
                (**(code **)(*piVar4 + 8))(piVar4);
              }
              iVar3 = FUN_1000c450(piVar1);
              if ((iVar3 == 0) && ((short)piVar8 == unaff_DI)) {
                DAT_1002084c = 1;
                piVar8 = (int *)(uint)unaff_SI;
                FUN_1000c610(piVar1);
                DAT_1002084c = 0;
              }
            }
LAB_100063a8:
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&stack0xffffffb0,0);
          } while( true );
        }
        (**(code **)(*unaff_EBP + 8))();
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      (**(code **)(*piVar2 + 8))();
    }
    iStack_10 = 0;
    do {
      hWnd = *(HWND *)((int)this + 0x20);
      bVar7 = iStack_10 == 0;
      pHVar6 = (HWND)0x1;
      while ((pHVar6 != (HWND)0x0 &&
             (hWnd = GetWindow(hWnd,(uint)(ushort)(bVar7 + 2)), hWnd != (HWND)0x0))) {
        pHVar6 = hWnd;
        if ((*(HWND *)((int)this + 0x20) != hWnd) &&
           ((pvVar5 = GetPropA(hWnd,s_SSRIOCX_1001f6b8), pvVar5 != (HANDLE)0x0 &&
            ((HANDLE)(int)param_1 == pvVar5)))) {
          SendMessageA(hWnd,0x501,param_2,0);
        }
      }
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < 2);
  }
  return;
}



uint __thiscall FUN_10006490(void *this,short param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  int iVar2;
  HWND pHVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  HWND pHVar4;
  uint uVar5;
  int *unaff_EBX;
  short unaff_BP;
  bool bVar6;
  bool bVar7;
  HWND pHStack_50;
  undefined2 uStack_48;
  int *piVar8;
  int *piVar9;
  int iStack_14;
  int iStack_10;
  
  if (param_1 == 0) {
    return 999;
  }
  hWnd = (HWND)Ordinal_2747();
  if (hWnd != (HWND)0x0) {
    puVar1 = (undefined4 *)hWnd->unused;
    piVar9 = &iStack_14;
    piVar8 = (int *)&DAT_10019500;
    pHVar4 = hWnd;
    iVar2 = (*(code *)*puVar1)();
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*unaff_EBX + 0xc))();
      if (-1 < iVar2) {
        pHStack_50 = (HWND)0x10006508;
        VariantInit((VARIANTARG *)&stack0xffffffd4);
        pHStack_50 = (HWND)0x10006512;
        (**(code **)(*piVar8 + 0x14))();
        pHStack_50 = (HWND)0x0;
        iVar2 = (**(code **)(pHVar4->unused + 0xc))(pHVar4,1,&stack0xffffffc4);
        do {
          if (iVar2 != 0) {
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            (*(code *)puVar1[2])(hWnd);
            return CONCAT22(extraout_var,999);
          }
          iVar2 = FUN_1000c450(piVar8);
          if (iVar2 == 0) {
            pHVar3 = (HWND)FUN_1000c570(piVar8);
            if (pHVar3 != (HWND)0x0) {
              if (pHVar3 == hWnd) {
                (**(code **)(pHVar3->unused + 8))();
                goto LAB_1000658f;
              }
              (**(code **)(pHVar3->unused + 8))(pHVar3);
            }
            iVar2 = FUN_1000c450(piVar8);
            if ((iVar2 == 0) && ((short)pHVar4 == unaff_BP)) {
              FUN_1000c450(piVar8);
              (**(code **)(*piVar8 + 8))(piVar8);
              (**(code **)(*piVar8 + 8))(piVar8);
              (**(code **)(*piVar8 + 8))(piVar8);
              (*(code *)puVar1[2])(hWnd);
              uStack_48 = SUB42(unaff_EBX,0);
              return CONCAT22(extraout_var_00,uStack_48);
            }
          }
LAB_1000658f:
          (**(code **)(*piVar8 + 8))(piVar8);
          iVar2 = (**(code **)(*piVar8 + 0xc))(piVar8,1,&pHStack_50,0);
        } while( true );
      }
      pHStack_50 = (HWND)0x1000662c;
      (**(code **)(*piVar9 + 8))();
      pHStack_50 = hWnd;
      (*(code *)puVar1[2])();
    }
    hWnd = (HWND)(*(code *)puVar1[2])();
  }
  iStack_10 = 0;
  do {
    bVar6 = iStack_10 == 0;
    pHVar4 = hWnd;
    hWnd = (HWND)0x1;
    pHVar3 = *(HWND *)((int)this + 0x20);
    while ((bVar7 = hWnd != (HWND)0x0, hWnd = pHVar4, bVar7 &&
           (hWnd = GetWindow(pHVar3,bVar6 + 2), hWnd != (HWND)0x0))) {
      pHVar4 = hWnd;
      pHVar3 = hWnd;
      if ((*(HWND *)((int)this + 0x20) != hWnd) &&
         ((pHVar4 = (HWND)GetPropA(hWnd,s_SSRIOCX_1001f6ec), pHVar4 != (HWND)0x0 &&
          ((HWND)(int)param_1 == pHVar4)))) {
        uVar5 = SendMessageA(hWnd,0x502,0,0);
        return uVar5;
      }
    }
    iStack_10 = iStack_10 + 1;
    if (1 < iStack_10) {
      return CONCAT22((short)((uint)hWnd >> 0x10),999);
    }
  } while( true );
}



undefined4 __thiscall FUN_100066c0(void *this,int param_1,int param_2,int param_3)

{
  short sStack_2;
  
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x234) == 0) {
      return 0;
    }
    if ((((0 < *(short *)((int)this + 0x238)) && (DAT_1002084c == 0)) && (param_2 != 0)) &&
       (*(int *)((int)this + 0x23c) == 0)) {
      return 0;
    }
  }
  if ((param_1 != 0) && (*(int *)((int)this + 0x234) != 0)) {
    return 0;
  }
  *(int *)((int)this + 0x234) = param_1;
  if (param_3 != 0) {
    Ordinal_3530(0);
  }
  if ((param_1 != 0) && (DAT_1002084c == 0)) {
    FUN_10006080(this,*(short *)((int)this + 0x238));
  }
  sStack_2 = (short)*(undefined4 *)((int)this + 0x234);
  if (sStack_2 != 0) {
    sStack_2 = -1;
  }
  Ordinal_2451(this,1,&DAT_1001f6f4,&sStack_2);
  return 1;
}



bool __fastcall FUN_100067a0(int param_1)

{
  return *(int *)(param_1 + 0x234) == 0;
}



undefined4 __thiscall FUN_100067b0(void *this,int *param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (*(short *)((int)this + 0x24e) != 2) {
    iVar1 = FUN_100069a0((int *)((int)this + 0x240));
    if (iVar1 == 0) {
      Ordinal_3530(0);
    }
    return 0;
  }
  iVar1 = FUN_100069a0((int *)((int)this + 0x240));
  if (iVar1 != 0) {
    return 0;
  }
  param_1[1] = 1;
  *param_1 = 1;
  FUN_10006930((int *)((int)this + 0x240));
  iVar1 = FUN_100068b0((int)this);
  *param_1 = *param_1 + iVar1 * 2;
  iVar1 = FUN_100068b0((int)this);
  param_1[1] = param_1[1] + iVar1 * 2;
  if (param_2 == 0) {
    return 1;
  }
  Ordinal_2635(local_8,local_4);
  if ((*param_1 == unaff_ESI) && (param_1[1] == unaff_EBX)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x268) = 1;
  Ordinal_5241(*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x268) = 0;
  return 1;
}



int __fastcall FUN_100068b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 + 0x254);
  if (*(int *)(param_1 + 600) != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



undefined4 FUN_10006930(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *local_8;
  undefined4 local_4;
  
  local_8 = (undefined4 *)0x1;
  local_4 = 1;
  piVar1 = (int *)*param_1;
  (**(code **)(*piVar1 + 0x18))();
  (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1,&stack0xfffffff4);
  uVar3 = FUN_10015700((int)piVar1,0);
  puVar2 = local_8;
  *local_8 = uVar3;
  uVar3 = FUN_10015720((int)&local_8,0);
  puVar2[1] = uVar3;
  return 1;
}



undefined4 FUN_100069a0(int *param_1)

{
  int *piVar1;
  short sVar2;
  undefined1 local_2 [2];
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*piVar1 + 0x14))(piVar1,local_2);
  sVar2 = (short)((uint)piVar1 >> 0x10);
  if ((sVar2 != 0) && (sVar2 != -1)) {
    return 0;
  }
  return 1;
}



void FUN_10006ac0(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = Ordinal_1400();
  if (iVar2 != 0) {
    sVar1 = Ordinal_3335();
    if (sVar1 == -1) {
      Ordinal_1868();
    }
  }
  Ordinal_3049();
  return;
}



void FUN_10006e39(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_10006e60(void *this,byte param_1)

{
  FUN_10004930((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10006f60(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10006fb8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_100191f0,&PTR_s_CSSCBPropPage_1001f6f8,0,"Threed.CSSCBPropPage");
  _DAT_100208a0 = &PTR_LAB_10019200;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10006fd0(void)

{
  FUN_10017840((_onexit_t)&LAB_10006fe0);
  return;
}



void FUN_1000702b(void)

{
  Ordinal_651();
  return;
}



void FUN_10007359(void)

{
  Ordinal_651();
  return;
}



void FUN_100073cc(void)

{
  Ordinal_706();
  return;
}



void FUN_100073e4(void)

{
  FUN_10001500();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100074d0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10007528;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_100193a0,&PTR_s_CSSFRPropPage_1001f760,0,"Threed.CSSFRPropPage");
  _DAT_100208f0 = &PTR_LAB_100193b0;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10007540(void)

{
  FUN_10017840((_onexit_t)&LAB_10007550);
  return;
}



void FUN_1000759b(void)

{
  Ordinal_651();
  return;
}



void FUN_100078c9(void)

{
  Ordinal_651();
  return;
}



void FUN_1000793c(void)

{
  Ordinal_706();
  return;
}



void FUN_10007954(void)

{
  FUN_10001500();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10007b80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10007bd8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_10019ab8,&PTR_s_CSSPNCtrl_1001f7d8,0,"Threed.SSPanel");
  _DAT_10020948 = &PTR_LAB_10019b10;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10007bf0(void)

{
  FUN_10017840((_onexit_t)&LAB_10007c00);
  return;
}



void FUN_10007c4b(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_10007e80(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10007ef6;
  *param_1 = &PTR_LAB_10019b78;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_10007eda();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10007ee8();
  local_8 = 0xffffffff;
  FUN_10007f00();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10007eda(void)

{
  Ordinal_665();
  return;
}



void FUN_10007ee8(void)

{
  FUN_10016230();
  return;
}



void FUN_10007f00(void)

{
  Ordinal_632();
  return;
}



void FUN_10008381(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x6c);
  return;
}



void FUN_10008518(void)

{
  Ordinal_569();
  return;
}



void FUN_10008520(void)

{
  Ordinal_569();
  return;
}



void FUN_10008542(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_10008842(void)

{
  FUN_10003c30();
  return;
}



void FUN_100088eb(void)

{
  Ordinal_706();
  return;
}



undefined4 __fastcall FUN_100089d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28c);
}



undefined4 __fastcall FUN_100092e0(int param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_2081();
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  FUN_1000a5f0(param_1);
  return 0;
}



void FUN_10009570(void)

{
  undefined4 uVar1;
  COLORREF color;
  HBRUSH hbr;
  HDC unaff_ESI;
  
  uVar1 = Ordinal_2548(0);
  color = Ordinal_5568(uVar1);
  hbr = CreateSolidBrush(color);
  FillRect(unaff_ESI,(RECT *)&stack0x00000000,hbr);
  DeleteObject(hbr);
  return;
}



void __thiscall FUN_100095b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)((int)this + 0x238) != 0) {
    iVar2 = (int)*(short *)((int)this + 0x234);
  }
  iVar1 = 0;
  if (*(short *)((int)this + 0x23a) != 0) {
    iVar1 = (int)*(short *)((int)this + 0x236) + (int)*(short *)((int)this + 0x234);
  }
  FUN_1000b250(param_1,(uint)(*(int *)((int)this + 0x240) != 0) + iVar2 + iVar1,1,1,1,1);
  return;
}



void __thiscall FUN_10009620(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  COLORREF CVar1;
  undefined4 uVar2;
  HBRUSH pHVar3;
  HPEN hrgn;
  RECT RStack_28;
  HGDIOBJ pvStack_18;
  HGDIOBJ pvStack_14;
  tagRECT local_10;
  
  CopyRect(&local_10,(RECT *)&param_2);
  FUN_100097b0(this,&param_2);
  if (*(int *)((int)this + 0x250) != 0) {
    FUN_100099c0(this,param_1,local_10.left,local_10.top,local_10.right,local_10.bottom,
                 &RStack_28.left);
    CVar1 = GetPixel(param_1,RStack_28.left,RStack_28.top);
    if ((CVar1 != *(COLORREF *)((int)this + 0x248)) ||
       (CVar1 = GetPixel(param_1,RStack_28.right,RStack_28.bottom),
       CVar1 != *(COLORREF *)((int)this + 0x248))) {
      uVar2 = Ordinal_2548(0);
      CVar1 = Ordinal_5568(uVar2);
      pHVar3 = CreateSolidBrush(CVar1);
      FillRect(param_1,&RStack_28,pHVar3);
      DeleteObject(pHVar3);
    }
  }
  CVar1 = FUN_1000b440(*(uint *)((int)this + 0x248));
  pHVar3 = CreateSolidBrush(CVar1);
  if (*(short *)((int)this + 0x244) == 5) {
    hrgn = CreatePen(0,1,CVar1);
    pvStack_18 = SelectObject(param_1,pHVar3);
    pvStack_14 = SelectObject(param_1,hrgn);
    Ellipse(param_1,param_2,param_3,param_4,param_5);
    SelectObject(param_1,pvStack_18);
    SelectObject(param_1,pvStack_14);
  }
  else {
    hrgn = (HPEN)CreateRectRgnIndirect((RECT *)&param_2);
    FillRgn(param_1,(HRGN)hrgn,pHVar3);
  }
  DeleteObject(hrgn);
  DeleteObject(pHVar3);
  if (*(int *)((int)this + 0x250) != 0) {
    FUN_10009940((int)this);
  }
  return;
}



void __thiscall FUN_100097b0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  
  sVar3 = *(short *)((int)this + 0x244);
  iVar8 = *param_1;
  iVar6 = param_1[1];
  local_14 = param_1[3];
  iVar7 = param_1[2];
  if (sVar3 == 1) {
    iVar7 = iVar8 + ((int)*(short *)((int)this + 0x24c) * (iVar7 - iVar8)) / 100;
  }
  else if (sVar3 == 2) {
    iVar8 = iVar8 + ((100 - *(short *)((int)this + 0x24c)) * (iVar7 - iVar8)) / 100;
  }
  else if (sVar3 == 3) {
    local_14 = ((int)*(short *)((int)this + 0x24c) * (local_14 - iVar6)) / 100 + iVar6;
  }
  else {
    if (sVar3 != 4) {
      iVar1 = iVar8 + -1;
      iVar2 = iVar6 + -1;
      iVar4 = iVar7 - iVar1;
      iVar5 = local_14 - iVar2;
      if (iVar5 < iVar4) {
        iVar8 = iVar1 + ((iVar4 - local_14) + iVar2) / 2;
        iVar7 = iVar5 + iVar8;
      }
      else if (iVar4 < iVar5) {
        iVar6 = iVar2 + ((iVar5 - iVar7) + iVar1) / 2;
        local_14 = iVar4 + iVar6;
      }
      sVar3 = *(short *)((int)this + 0x24c);
      *param_1 = iVar8;
      param_1[1] = iVar6;
      param_1[2] = iVar7;
      param_1[3] = local_14;
      FUN_1000b250(param_1,((iVar7 - ((int)sVar3 * (iVar7 - iVar8)) / 100) - iVar8) / 2,1,1,1,1);
      return;
    }
    iVar6 = iVar6 + ((100 - *(short *)((int)this + 0x24c)) * (local_14 - iVar6)) / 100;
  }
  *param_1 = iVar8;
  param_1[1] = iVar6;
  param_1[3] = local_14;
  param_1[2] = iVar7;
  return;
}



void __fastcall FUN_10009940(int param_1)

{
  undefined4 uVar1;
  COLORREF color;
  int mode;
  CHAR local_50 [76];
  HDC pHStack_4;
  
  local_50[0] = '\0';
  wsprintfA(local_50,&DAT_1001fb00,(int)*(short *)(param_1 + 0x24c));
  uVar1 = Ordinal_2801(0);
  color = Ordinal_5568(uVar1);
  SetTextColor(pHStack_4,color);
  mode = SetBkMode(pHStack_4,1);
  DrawTextA(pHStack_4,&stack0xffffffa8,-1,(LPRECT)&stack0x00000000,0x25);
  SetBkMode(pHStack_4,mode);
  return;
}



void __thiscall
FUN_100099c0(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  tagSIZE *lpsz;
  tagSIZE tStack_58;
  CHAR local_50 [80];
  
  local_50[0] = '\0';
  wsprintfA(local_50,&DAT_1001fb08,(int)*(short *)((int)this + 0x24c));
  lpsz = &tStack_58;
  iVar1 = lstrlenA(local_50);
  GetTextExtentPointA(param_1,local_50,iVar1,lpsz);
  iVar1 = (param_4 - param_2) + 1;
  iVar2 = (param_5 - param_3) + 1;
  if (tStack_58.cx < iVar1) {
    iVar1 = (iVar1 - tStack_58.cx) / 2 + param_2;
    param_4 = tStack_58.cx + iVar1;
    *param_6 = iVar1;
  }
  else {
    *param_6 = param_2;
  }
  param_6[2] = param_4;
  if (tStack_58.cy < iVar2) {
    iVar1 = (iVar2 - tStack_58.cy) / 2 + param_3;
    param_6[1] = iVar1;
    param_6[3] = tStack_58.cy + iVar1;
    return;
  }
  param_6[1] = param_3;
  param_6[3] = param_5;
  return;
}



void __thiscall
FUN_10009a90(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  HRGN hrgn;
  DWORD DVar4;
  int nWidth;
  int nHeight;
  HBRUSH hBrush;
  COLORREF color;
  undefined2 extraout_var;
  LPCSTR pCVar5;
  ushort uVar8;
  uint uVar6;
  LPRECT ptVar7;
  undefined4 *unaff_FS_OFFSET;
  code *lpOutputFunc;
  undefined4 *lpData;
  LPRECT ptVar9;
  int nCount;
  undefined2 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  tagTEXTMETRICA local_84;
  tagRECT local_4c;
  undefined4 local_3c;
  undefined2 local_38;
  int local_34;
  int local_30;
  LPCSTR local_2c;
  tagRECT local_28;
  LPCSTR local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009d94;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  uVar2 = Ordinal_3524();
  Ordinal_760(uVar2);
  local_14 = (LPCSTR)Ordinal_2557(1);
  iVar3 = lstrlenA(local_14);
  if (iVar3 < 1) goto LAB_10009ae8;
  CopyRect(&local_4c,(RECT *)&param_2);
  LPtoDP(param_1,(LPPOINT)&local_4c,2);
  hrgn = CreateRectRgnIndirect(&local_4c);
  SelectClipRgn(param_1,hrgn);
  DeleteObject(hrgn);
  sVar1 = *(short *)((int)this + 0x256);
  uVar8 = (ushort)((uint)hrgn >> 0x10);
  if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
    uVar6 = (uint)uVar8 << 0x10;
  }
  else if (((sVar1 == 3) || (sVar1 == 4)) || (sVar1 == 5)) {
    uVar6 = CONCAT22(uVar8,2);
  }
  else {
    uVar6 = CONCAT22(uVar8,1);
  }
  if (*(short *)((int)this + 600) == 2) {
    ptVar7 = (LPRECT)(uVar6 | 0x10);
    param_5 = param_5 + 1;
  }
  else {
    CopyRect(&local_28,(RECT *)&param_2);
    if (*(short *)((int)this + 600) == 1) {
      ptVar7 = (LPRECT)(uVar6 | 0x20);
      GetTextMetricsA(param_1,&local_84);
      iVar3 = local_84.tmHeight + param_3 + 1;
LAB_10009c02:
      param_5 = iVar3;
    }
    else {
      ptVar7 = (LPRECT)(uVar6 | 0x10);
      DrawTextA(param_1,local_14,-1,(LPRECT)&param_2,(uint)(ushort)((ushort)uVar6 | 0x410));
      param_2 = local_28.left;
      param_4 = local_28.right;
      if (param_3 < local_28.top) {
        param_3 = local_28.top;
      }
      param_5 = param_5 + 1;
      iVar3 = local_28.bottom;
      if (local_28.bottom < param_5) goto LAB_10009c02;
    }
    sVar1 = *(short *)((int)this + 0x256);
    if (((sVar1 == 2) || (sVar1 == 5)) || (sVar1 == 8)) {
      iVar3 = param_5 - param_3;
      param_5 = local_28.bottom;
      param_3 = (local_28.bottom - iVar3) + -1;
    }
    else if (((sVar1 == 1) || (sVar1 == 4)) || (sVar1 == 7)) {
      local_2c = (LPCSTR)(param_5 - param_3);
      param_5 = (local_28.bottom - local_28.top) / 2 + (int)local_2c / 2 + local_28.top;
      param_3 = param_5 - (int)local_2c;
    }
  }
  iVar3 = FUN_100089d0((int)this);
  if ((iVar3 == 0) && (iVar3 = Ordinal_1400(), iVar3 != 0)) {
    DVar4 = GetSysColor(0x11);
    if ((DVar4 == 0) || (DVar4 = GetSysColor(0x11), DVar4 == 0xc0c0c0)) {
      Ordinal_3523();
      local_3c = Ordinal_2795();
      local_38 = SUB42(ptVar7,0);
      nWidth = param_4 - param_2;
      nHeight = param_5 - param_3;
      local_2c = local_14;
      lpData = &local_3c;
      nCount = 0;
      lpOutputFunc = GrayStringCallback;
      iVar3 = param_2;
      iVar12 = param_3;
      local_34 = nWidth;
      local_30 = nHeight;
      hBrush = (HBRUSH)GetStockObject(4);
      GrayStringA(param_1,hBrush,lpOutputFunc,(LPARAM)lpData,nCount,iVar3,iVar12,nWidth,nHeight);
    }
    else {
      DVar4 = GetSysColor(0x11);
      local_2c = (LPCSTR)SetTextColor(param_1,DVar4);
      uVar10 = *(undefined2 *)((int)this + 0x254);
      ptVar9 = (LPRECT)&param_2;
      iVar12 = 0;
      pCVar5 = local_14;
      piVar11 = param_6;
      iVar3 = Ordinal_2510(param_1);
      FUN_1000abf0(iVar3,pCVar5,ptVar9,uVar10,(uint)ptVar7,iVar12,piVar11);
      SetTextColor(param_1,(COLORREF)local_2c);
    }
  }
  else {
    piVar13 = (int *)0x0;
    iVar3 = Ordinal_2801();
    color = Ordinal_5568();
    SetTextColor(param_1,color);
    pCVar5 = (LPCSTR)CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x254));
    uVar10 = 0;
    piVar11 = param_6;
    iVar12 = Ordinal_2510(param_1,local_14,&param_2);
    FUN_1000abf0(iVar12,pCVar5,ptVar7,uVar10,(uint)piVar11,iVar3,piVar13);
  }
LAB_10009ae8:
  local_8 = 0xffffffff;
  FUN_10009d9e();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10009d9e(void)

{
  Ordinal_706();
  return;
}



void __thiscall FUN_10009db0(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  LPPOINT ptVar7;
  VARIANTARG local_3c;
  VARIANTARG local_2c;
  LPCSTR local_1c;
  int local_18;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10009ff9;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  if (*(short *)((int)this + 600) != 0) {
    piVar2 = (int *)Ordinal_2747();
    if (piVar2 != (int *)0x0) {
      VariantInit(&local_3c);
      iVar3 = FUN_1000c450(piVar2);
      if (iVar3 == 0) {
        VariantInit(&local_2c);
        VariantChangeType(&local_2c,&local_3c,0,2);
        if (local_2c.n1._8_2_ != 0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          goto LAB_10009de9;
        }
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (*(short *)((int)this + 600) == 3) {
      if ((0 < *(short *)((int)this + 0x234)) &&
         ((*(short *)((int)this + 0x23a) != 0 || (*(short *)((int)this + 0x238) != 0)))) {
        FUN_1000a010(this);
      }
    }
    else {
      uVar4 = Ordinal_3524();
      Ordinal_760(uVar4);
      local_1c = (LPCSTR)Ordinal_2557(1);
      iVar3 = lstrlenA(local_1c);
      if (0 < iVar3) {
        iVar3 = param_4 - param_2;
        local_18 = param_5 - param_3;
        FUN_100095b0(this,&param_2);
        if (param_4 == param_2) {
          param_4 = param_4 + 1;
        }
        if (param_5 == param_3) {
          param_5 = param_5 + 1;
        }
        if (*(short *)((int)this + 600) == 1) {
          uVar1 = 0x20;
          iVar6 = param_4;
        }
        else {
          uVar1 = 0x10;
          iVar6 = param_5;
        }
        DrawTextA(param_1,local_1c,-1,(LPRECT)&param_2,(uint)(uVar1 | 0x401));
        param_5 = param_5 + 1;
        if (*(short *)((int)this + 600) == 1) {
          if (param_4 == iVar6) goto LAB_10009de9;
          iVar3 = (iVar3 - iVar6) + param_4;
        }
        else {
          if (param_5 == iVar6) goto LAB_10009de9;
          local_18 = (local_18 - iVar6) + param_5;
        }
        if (*(int *)((int)this + 0x278) == 0) {
          GetWindowRect(*(HWND *)((int)this + 0x20),(LPRECT)&param_2);
          ptVar7 = (LPPOINT)((int)this + 0x25c);
          ptVar7->x = param_2;
          *(int *)((int)this + 0x270) = param_2;
          *(int *)((int)this + 0x260) = param_3;
          *(int *)((int)this + 0x274) = param_3;
          pHVar5 = GetParent(*(HWND *)((int)this + 0x20));
          ScreenToClient(pHVar5,ptVar7);
          ptVar7 = (LPPOINT)((int)this + 0x270);
          pHVar5 = GetParent(*(HWND *)((int)this + 0x20));
          ScreenToClient(pHVar5,ptVar7);
          *(undefined4 *)((int)this + 0x278) = 1;
        }
        param_2 = *(int *)((int)this + 0x25c);
        param_3 = *(int *)((int)this + 0x260);
        param_4 = param_2 + iVar3;
        param_5 = local_18 + param_3;
        Ordinal_5416(&param_2);
      }
    }
  }
LAB_10009de9:
  local_8 = 0xffffffff;
  FUN_1000a003();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000a003(void)

{
  Ordinal_706();
  return;
}



// WARNING: Type propagation algorithm not settling

void __fastcall FUN_1000a010(void *param_1)

{
  int iVar1;
  IRecordInfo *pIVar2;
  short sVar3;
  int *unaff_EBP;
  IRecordInfo **ppIVar4;
  int *piVar5;
  IRecordInfo **unaff_EDI;
  IRecordInfo **ppIVar6;
  IRecordInfo **ppIStack_98;
  IRecordInfo **ppIStack_94;
  int *piStack_90;
  IRecordInfo **ppIStack_8c;
  int *piStack_88;
  IRecordInfo **ppIStack_84;
  int *piVar7;
  IRecordInfo **ppIVar8;
  undefined4 local_64 [2];
  IRecordInfo *pIStack_5c;
  int *piStack_58;
  tagRECT local_54;
  int *local_44;
  IRecordInfo *pIStack_40;
  undefined1 auStack_3c [16];
  IRecordInfo **ppIStack_2c;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  ppIVar4 = (IRecordInfo **)0x0;
  sVar3 = 0;
  ppIVar6 = (IRecordInfo **)0x0;
  local_44 = (int *)0x0;
  local_64[1] = (int *)0x0;
  ppIStack_84 = (IRecordInfo **)0x1000a03c;
  local_64[0] = param_1;
  GetClientRect(*(HWND *)((int)param_1 + 0x20),&local_54);
  iStack_1c = local_54.bottom - local_54.top;
  FUN_100095b0((void *)local_64[0],&local_54.left);
  iStack_18 = local_54.right - local_54.left;
  iStack_14 = local_54.bottom - local_54.top;
  ppIStack_84 = (IRecordInfo **)Ordinal_2747();
  if (ppIStack_84 != (IRecordInfo **)0x0) {
    pIStack_5c = *ppIStack_84;
    ppIVar8 = &(((_union_2683 *)auStack_3c)->n2).n3.brecVal.pRecInfo;
    piVar7 = (int *)&DAT_10019500;
    piStack_88 = (int *)0x1000a0a2;
    ppIStack_2c = ppIStack_84;
    iVar1 = (*(code *)pIStack_5c->lpVtbl)();
    if (-1 < iVar1) {
      piStack_88 = (int *)&stack0xffffff94;
      ppIStack_8c = (IRecordInfo **)0x3;
      piStack_90 = (int *)0x1d;
      ppIStack_94 = (IRecordInfo **)auStack_3c._0_4_;
      ppIStack_98 = (IRecordInfo **)0x1000a0bd;
      iVar1 = (**(code **)(*(int *)auStack_3c._0_4_ + 0xc))();
      ppIStack_98 = ppIVar8;
      ppIVar8 = ppIStack_98;
      if (-1 < iVar1) {
        (*(code *)(*ppIStack_98)[5].lpVtbl)();
        iVar1 = (**(code **)(*piVar7 + 0xc))(piVar7,1,local_64,0);
        for (; (iVar1 == 0 && (sVar3 < 2)); sVar3 = sVar3 + 1) {
          if (ppIVar4 == (IRecordInfo **)0x0) {
            pIVar2 = *unaff_EDI;
            ppIVar4 = unaff_EDI;
          }
          else {
            pIVar2 = *unaff_EDI;
            ppIVar6 = unaff_EDI;
          }
          (*(code *)pIVar2[1].lpVtbl)(unaff_EDI);
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          iVar1 = (*(code *)(*ppIStack_98)[3].lpVtbl)(ppIStack_98,1,&stack0xffffff84,0);
        }
        (**(code **)(*piStack_90 + 8))(piStack_90);
      }
      ppIStack_98 = (IRecordInfo **)local_54.right;
      (*(code *)(*(IRecordInfo **)local_54.right)[2].lpVtbl)();
    }
    piStack_88 = (int *)auStack_3c._4_4_;
    ppIStack_8c = (IRecordInfo **)0x1000a141;
    (*pcRam00000008)();
    if (sVar3 == 1) {
      if (ppIVar4 != (IRecordInfo **)0x0) {
        pIVar2 = *ppIVar4;
        ppIStack_8c = (IRecordInfo **)((int)&(((_union_2683 *)auStack_3c)->n2).n3 + 4);
        piStack_90 = (int *)&DAT_1001bad0;
        ppIStack_98 = (IRecordInfo **)0x1000a17e;
        ppIStack_94 = ppIVar4;
        iVar1 = (*(code *)pIVar2->lpVtbl)();
        if (iVar1 == 0) {
          ppIStack_98 = &pIStack_40;
          iVar1 = (**(code **)(*(int *)auStack_3c._0_4_ + 0x10))(auStack_3c._0_4_);
          if (iVar1 == 0) {
            iVar1 = (*(code *)**(undefined4 **)local_54.bottom)
                              (local_54.bottom,&DAT_1001bf50,&local_54.right);
            if (iVar1 == 0) {
              (**(code **)(*piStack_58 + 0x14))(piStack_58,&ppIStack_98);
              (**(code **)(*(int *)local_64[1] + 8))(local_64[1]);
            }
            (**(code **)(*(int *)local_54.left + 8))(local_54.left);
          }
          (**(code **)(*local_44 + 8))(local_44);
        }
        else {
          ppIStack_98 = ppIVar4;
          ppIStack_84 = ppIVar4;
          (*(code *)pIVar2[1].lpVtbl)();
        }
        (*(code *)pIVar2[2].lpVtbl)(ppIVar4);
        if (ppIStack_94 != (IRecordInfo **)0x0) {
          VariantInit((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2);
          iVar1 = FUN_1000c450(ppIStack_94);
          if (iVar1 == 0) {
            VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                              (VARIANTARG *)&stack0xffffff94,0,2);
            piStack_88 = (int *)(int)(short)auStack_3c._8_2_;
            iVar1 = FUN_1000c450(ppIStack_94);
            if (iVar1 != 0) {
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                              (VARIANTARG *)&stack0xffffff94,0,2);
            ppIStack_84 = (IRecordInfo **)(int)(short)auStack_3c._8_2_;
            iVar1 = FUN_1000c450(ppIStack_94);
            if (iVar1 != 0) {
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                              (VARIANTARG *)&stack0xffffff94,0,2);
            piVar5 = (int *)(int)(short)auStack_3c._8_2_;
            iVar1 = FUN_1000c450(ppIStack_94);
            if (iVar1 != 0) {
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                              (VARIANTARG *)&stack0xffffff94,0,2);
            iVar1 = (int)(short)auStack_3c._8_2_;
            piVar5 = (int *)FUN_100158e0((int)piVar5,0);
            if ((((piVar5 == local_44) &&
                 (pIVar2 = (IRecordInfo *)FUN_100159b0(iVar1,0), pIVar2 == pIStack_40)) &&
                (piVar5 = (int *)FUN_100158e0((int)piStack_88,0), piVar5 == piVar7)) &&
               (piVar5 = (int *)FUN_100159b0((int)ppIStack_84,0), (IRecordInfo **)piVar5 == ppIVar8)
               ) {
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            if (DAT_1001f804 != 0) {
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            DAT_1001f804 = 1;
            piStack_88 = (int *)FUN_10015740((int)piVar7,0);
            local_64[0] = (undefined4)(int)piStack_88;
            FUN_1000c610(ppIStack_94);
            piStack_88 = (int *)FUN_10015810((int)ppIVar8,0);
            local_64[0] = (undefined4)(int)piStack_88;
            FUN_1000c610(ppIStack_94);
            piStack_88 = (int *)FUN_10015740((int)unaff_EBP - (int)piVar7,0);
            local_64[0] = (undefined4)(int)piStack_88;
            FUN_1000c610(ppIStack_94);
            piStack_88 = (int *)FUN_10015810((int)unaff_EDI - (int)ppIVar8,0);
            local_64[0] = (undefined4)(int)piStack_88;
            FUN_1000c610(ppIStack_94);
            PostMessageA(*(HWND *)((int)piStack_90 + 0x20),0x500,0,0);
            iVar1 = FUN_1000c450(ppIStack_94);
            if (iVar1 == 0) {
              VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                                (VARIANTARG *)&stack0xffffff94,0,2);
              piStack_88 = (int *)FUN_100158e0((int)(short)auStack_3c._8_2_,0);
              iVar1 = FUN_1000c450(ppIStack_94);
              if (iVar1 != 0) {
                (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
                DAT_1001f804 = 0;
                return;
              }
              VariantChangeType((VARIANTARG *)&((_union_2683 *)auStack_3c)->n2,
                                (VARIANTARG *)&stack0xffffff94,0,2);
              pIVar2 = (IRecordInfo *)FUN_100159b0((int)(short)auStack_3c._8_2_,0);
              if ((piStack_88 != local_44) || (pIVar2 != pIStack_40)) {
                local_54.bottom = local_54.bottom + ((int)pIVar2 - (int)pIStack_40);
                Ordinal_5416(&stack0xffffff80);
              }
              DAT_1001f804 = 0;
              (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
              return;
            }
            (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
            DAT_1001f804 = 0;
            return;
          }
          (*(code *)(*ppIStack_94)[2].lpVtbl)(ppIStack_94);
        }
      }
    }
    else {
      if (ppIVar4 != (IRecordInfo **)0x0) {
        piStack_90 = (int *)0x1000a151;
        ppIStack_8c = ppIVar4;
        (*(code *)(*ppIVar4)[2].lpVtbl)();
      }
      if (ppIVar6 != (IRecordInfo **)0x0) {
        piStack_90 = (int *)0x1000a15f;
        ppIStack_8c = ppIVar6;
        (*(code *)(*ppIVar6)[2].lpVtbl)();
        return;
      }
    }
  }
  return;
}



void __fastcall FUN_1000a5f0(int param_1)

{
  BOOL BVar1;
  HWND pHVar2;
  LPPOINT ptVar3;
  tagRECT tStack_10;
  
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x20));
  if (BVar1 != 0) {
    ptVar3 = (LPPOINT)(param_1 + 0x25c);
    GetClientRect(*(HWND *)(param_1 + 0x20),&tStack_10);
    ptVar3->x = tStack_10.left;
    *(LONG *)(param_1 + 0x270) = tStack_10.left;
    *(LONG *)(param_1 + 0x260) = tStack_10.top;
    *(LONG *)(param_1 + 0x274) = tStack_10.top;
    ClientToScreen(*(HWND *)(param_1 + 0x20),ptVar3);
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
    ScreenToClient(pHVar2,ptVar3);
    ClientToScreen(*(HWND *)(param_1 + 0x20),(LPPOINT)(param_1 + 0x270));
    ptVar3 = (LPPOINT)(param_1 + 0x270);
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x20));
    ScreenToClient(pHVar2,ptVar3);
    *(LONG *)(param_1 + 0x268) = tStack_10.bottom - tStack_10.top;
    *(LONG *)(param_1 + 0x264) = tStack_10.right - tStack_10.left;
  }
  return;
}



void FUN_1000a6a0(void)

{
  Ordinal_4505();
  Ordinal_1786();
  return;
}



void FUN_1000a800(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = Ordinal_1400();
  if (iVar2 != 0) {
    sVar1 = Ordinal_3335();
    if (sVar1 == -1) {
      Ordinal_1868();
    }
  }
  Ordinal_3049();
  return;
}



void FUN_1000ab79(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_1000aba0(void *this,byte param_1)

{
  FUN_10007e80((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



undefined4 __cdecl
FUN_1000abc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Ordinal_4724(param_1,param_2,&param_3,param_4);
  return param_3;
}



void __cdecl
FUN_1000abf0(int param_1,LPCSTR param_2,LPRECT param_3,undefined2 param_4,uint param_5,int param_6,
            int *param_7)

{
  bool bVar1;
  void *this;
  undefined4 uVar2;
  DWORD DVar3;
  COLORREF color;
  uint color_00;
  COLORREF color_01;
  undefined4 *unaff_FS_OFFSET;
  HDC hdc;
  int dx;
  undefined2 uVar4;
  int dy;
  int local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000ac88;
  *unaff_FS_OFFSET = &local_10;
  bVar1 = false;
  if (param_2 == (LPCSTR)0x0) goto LAB_1000aea4;
  if (param_7 == (int *)0x0) {
    this = (void *)Ordinal_729(0x28);
    local_8 = 0;
    param_7 = (int *)0x0;
    if (this != (void *)0x0) {
      uVar4 = 0;
      uVar2 = FUN_1000bec0();
      param_7 = FUN_1000d050(this,uVar2,uVar4);
    }
    bVar1 = true;
  }
  local_8 = 0xffffffff;
  if (param_6 == 0) {
    local_1c = SetBkMode(*(HDC *)(param_1 + 4),1);
  }
  else {
    local_1c = SetBkMode(*(HDC *)(param_1 + 4),2);
    DVar3 = FUN_1000d3b0(param_7);
    SetBkColor(*(HDC *)(param_1 + 4),DVar3);
  }
  color = GetTextColor(*(HDC *)(param_1 + 4));
  switch(param_4) {
  case 1:
    DVar3 = FUN_1000d400(param_7);
    SetTextColor(*(HDC *)(param_1 + 4),DVar3);
    DrawTextA(*(HDC *)(param_1 + 4),param_2,-1,param_3,param_5 & 0xffff);
    SetBkMode(*(HDC *)(param_1 + 4),1);
    SetTextColor(*(HDC *)(param_1 + 4),color);
    dy = 1;
    dx = 1;
    goto LAB_1000ae5d;
  case 2:
    DVar3 = FUN_1000d400(param_7);
    SetTextColor(*(HDC *)(param_1 + 4),DVar3);
    DrawTextA(*(HDC *)(param_1 + 4),param_2,-1,param_3,param_5 & 0xffff);
    SetBkMode(*(HDC *)(param_1 + 4),1);
    OffsetRect(param_3,2,2);
    color_01 = FUN_1000d3d0(param_7);
    break;
  case 3:
    OffsetRect(param_3,1,1);
    DVar3 = FUN_1000d400(param_7);
    SetTextColor(*(HDC *)(param_1 + 4),DVar3);
    DrawTextA(*(HDC *)(param_1 + 4),param_2,-1,param_3,param_5 & 0xffff);
    SetBkMode(*(HDC *)(param_1 + 4),1);
    goto LAB_1000ae4b;
  case 4:
    color_00 = FUN_1000d3d0(param_7);
    SetTextColor(*(HDC *)(param_1 + 4),color_00);
    DrawTextA(*(HDC *)(param_1 + 4),param_2,-1,param_3,param_5 & 0xffff);
    SetBkMode(*(HDC *)(param_1 + 4),1);
    OffsetRect(param_3,2,2);
    color_01 = FUN_1000d400(param_7);
    break;
  default:
    hdc = *(HDC *)(param_1 + 4);
    goto LAB_1000ae70;
  }
  SetTextColor(*(HDC *)(param_1 + 4),color_01);
  DrawTextA(*(HDC *)(param_1 + 4),param_2,-1,param_3,param_5 & 0xffff);
LAB_1000ae4b:
  SetTextColor(*(HDC *)(param_1 + 4),color);
  dy = -1;
  dx = -1;
LAB_1000ae5d:
  OffsetRect(param_3,dx,dy);
  hdc = *(HDC *)(param_1 + 4);
LAB_1000ae70:
  DrawTextA(hdc,param_2,-1,param_3,param_5 & 0xffff);
  SetBkMode(*(HDC *)(param_1 + 4),local_1c);
  if ((bVar1) && (param_7 != (int *)0x0)) {
    FUN_1000d080((int)param_7);
    Ordinal_731(param_7);
  }
LAB_1000aea4:
  *unaff_FS_OFFSET = local_10;
  return;
}



// WARNING: Removing unreachable block (ram,0x1000b023)
// WARNING: Removing unreachable block (ram,0x1000b029)

void __cdecl
FUN_1000aed0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  HGDIOBJ pvVar1;
  int iVar2;
  HGDIOBJ h;
  int iVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  local_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_1000af24;
  *unaff_FS_OFFSET = &local_10;
  if ((0 < param_6) && (param_8 != (int *)0x0)) {
    if (param_7 == 0) {
      pvVar1 = (HGDIOBJ)FUN_1000d130(param_8);
    }
    else {
      pvVar1 = (HGDIOBJ)FUN_1000d190(param_8);
    }
    iVar4 = 0;
    pvVar1 = SelectObject(*(HDC *)(param_1 + 4),pvVar1);
    if (0 < param_6) {
      do {
        MoveToEx(*(HDC *)(param_1 + 4),param_2 + iVar4,(param_5 + -1) - iVar4,(LPPOINT)0x0);
        iVar3 = param_3 + iVar4;
        LineTo(*(HDC *)(param_1 + 4),param_2 + iVar4,iVar3);
        iVar2 = (param_4 + -1) - iVar4;
        iVar4 = iVar4 + 1;
        LineTo(*(HDC *)(param_1 + 4),iVar2,iVar3);
      } while (iVar4 < param_6);
    }
    if (param_7 == 0) {
      h = (HGDIOBJ)FUN_1000d190(param_8);
    }
    else {
      h = (HGDIOBJ)FUN_1000d130(param_8);
    }
    iVar4 = 0;
    SelectObject(*(HDC *)(param_1 + 4),h);
    if (0 < param_6) {
      do {
        iVar3 = (param_5 + -1) - iVar4;
        MoveToEx(*(HDC *)(param_1 + 4),param_2 + iVar4,iVar3,(LPPOINT)0x0);
        iVar2 = (param_4 + -1) - iVar4;
        LineTo(*(HDC *)(param_1 + 4),iVar2,iVar3);
        iVar3 = param_3 + iVar4;
        iVar4 = iVar4 + 1;
        LineTo(*(HDC *)(param_1 + 4),iVar2,iVar3 + -1);
      } while (iVar4 < param_6);
    }
    SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void __cdecl
FUN_1000b050(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8)

{
  DWORD DVar1;
  COLORREF CVar2;
  uint uVar3;
  HBRUSH pHVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  RECT local_3c;
  RECT local_2c;
  int local_1c;
  int local_18;
  HBRUSH local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  local_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_1000b106;
  *unaff_FS_OFFSET = &local_10;
  local_1c = 0;
  DVar1 = FUN_1000d400(param_8);
  CVar2 = GetNearestColor(*(HDC *)(param_1 + 8),DVar1);
  DVar1 = FUN_1000d400(param_8);
  if (CVar2 == DVar1) {
    uVar3 = FUN_1000d3d0(param_8);
    CVar2 = GetNearestColor(*(HDC *)(param_1 + 8),uVar3);
    uVar3 = FUN_1000d3d0(param_8);
    if (CVar2 == uVar3) {
      FUN_1000aed0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_1000b234;
    }
  }
  if ((0 < param_6) && (param_8 != (int *)0x0)) {
    if (param_7 == 0) {
      local_14 = (HBRUSH)FUN_1000d280(param_8);
    }
    else {
      local_14 = (HBRUSH)FUN_1000d2d0(param_8);
    }
    iVar6 = 0;
    if (0 < param_6) {
      do {
        local_3c.left = param_2 + iVar6;
        local_3c.right = local_3c.left + 1;
        local_3c.top = param_3;
        local_3c.bottom = (param_5 - iVar6) + -1;
        local_18 = local_3c.left;
        FillRect(*(HDC *)(param_1 + 4),&local_3c,local_14);
        local_2c.right = (param_4 - iVar6) + -1;
        iVar5 = iVar6 + 1;
        local_2c.left = local_18;
        local_2c.top = iVar6 + param_3;
        local_2c.bottom = local_2c.top + 1;
        FillRect(*(HDC *)(param_1 + 4),&local_2c,local_14);
        iVar6 = iVar5;
      } while (iVar5 < param_6);
    }
    if (param_7 == 0) {
      FUN_1000d2d0(param_8);
    }
    else {
      FUN_1000d280(param_8);
    }
    iVar6 = 0;
    if (0 < param_6) {
      do {
        local_3c.top = iVar6 + param_3;
        local_3c.right = param_4 - iVar6;
        local_3c.left = local_3c.right + -1;
        local_3c.bottom = param_5;
        pHVar4 = (HBRUSH)FUN_1000d280(param_8);
        FillRect(*(HDC *)(param_1 + 4),&local_3c,pHVar4);
        local_2c.left = param_2 + iVar6;
        local_2c.right = param_4;
        local_2c.bottom = param_5 - iVar6;
        iVar6 = iVar6 + 1;
        local_2c.top = local_2c.bottom + -1;
        pHVar4 = (HBRUSH)FUN_1000d280(param_8);
        FillRect(*(HDC *)(param_1 + 4),&local_2c,pHVar4);
      } while (iVar6 < param_6);
    }
    if ((local_1c != 0) && (param_8 != (int *)0x0)) {
      FUN_1000d080((int)param_8);
      Ordinal_731(param_8);
    }
  }
LAB_1000b234:
  *unaff_FS_OFFSET = local_10;
  return;
}



void __cdecl FUN_1000b250(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (param_2 != 0) {
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
  }
  return;
}



void __cdecl FUN_1000b440(uint param_1)

{
  if ((param_1 & 0x80000000) != 0) {
    GetSysColor(param_1 & 0xffffff);
  }
  return;
}



void __cdecl
FUN_1000b460(HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int *param_7)

{
  bool bVar1;
  void *this;
  undefined4 uVar2;
  HGDIOBJ pvVar3;
  DWORD DVar4;
  int y;
  int x;
  undefined4 *unaff_FS_OFFSET;
  undefined2 uVar5;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b505;
  *unaff_FS_OFFSET = &local_10;
  bVar1 = false;
  if (param_7 == (int *)0x0) {
    this = (void *)Ordinal_729(0x28);
    local_8 = 0;
    param_7 = (int *)0x0;
    if (this != (void *)0x0) {
      uVar5 = 0;
      uVar2 = FUN_1000bec0();
      param_7 = FUN_1000d050(this,uVar2,uVar5);
    }
    bVar1 = true;
  }
  local_8 = 0xffffffff;
  x = param_4 + -1;
  y = param_5 + -1;
  if (param_6 != 0) {
    GetPixel(param_1,param_2,param_3);
    GetPixel(param_1,param_2,y);
    GetPixel(param_1,x,y);
    GetPixel(param_1,x,param_3);
  }
  pvVar3 = (HGDIOBJ)FUN_1000d1d0((int)param_7);
  pvVar3 = SelectObject(param_1,pvVar3);
  MoveToEx(param_1,param_2,param_3,(LPPOINT)0x0);
  LineTo(param_1,param_2,y);
  LineTo(param_1,x,y);
  LineTo(param_1,x,param_3);
  LineTo(param_1,param_2,param_3);
  if (param_6 != 0) {
    DVar4 = FUN_1000d3b0(param_7);
    SetPixel(param_1,param_2,param_3,DVar4);
    DVar4 = FUN_1000d3b0(param_7);
    SetPixel(param_1,param_2,y,DVar4);
    DVar4 = FUN_1000d3b0(param_7);
    SetPixel(param_1,x,y,DVar4);
    DVar4 = FUN_1000d3b0(param_7);
    SetPixel(param_1,x,param_3,DVar4);
  }
  SelectObject(param_1,pvVar3);
  if ((bVar1) && (param_7 != (int *)0x0)) {
    FUN_1000d080((int)param_7);
    Ordinal_731(param_7);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void __cdecl
FUN_1000b610(HDC param_1,int param_2,int param_3,int param_4,int param_5,short param_6,int *param_7)

{
  bool bVar1;
  void *this;
  undefined4 uVar2;
  HGDIOBJ pvVar3;
  int x;
  int y;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined2 uVar5;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b71e;
  *unaff_FS_OFFSET = &local_10;
  bVar1 = false;
  if (param_7 == (int *)0x0) {
    this = (void *)Ordinal_729(0x28);
    local_8 = 0;
    param_7 = (int *)0x0;
    if (this != (void *)0x0) {
      uVar5 = 0;
      uVar2 = FUN_1000bec0();
      param_7 = FUN_1000d050(this,uVar2,uVar5);
    }
    bVar1 = true;
  }
  local_8 = 0xffffffff;
  iVar4 = 0;
  pvVar3 = (HGDIOBJ)FUN_1000d130(param_7);
  pvVar3 = SelectObject(param_1,pvVar3);
  if (0 < param_6) {
    do {
      x = param_2 + iVar4;
      MoveToEx(param_1,x,param_5 + -1,(LPPOINT)0x0);
      y = param_3 + iVar4;
      iVar4 = iVar4 + 1;
      LineTo(param_1,x,y);
      LineTo(param_1,param_4,y);
    } while (iVar4 < param_6);
  }
  SelectObject(param_1,pvVar3);
  if ((bVar1) && (param_7 != (int *)0x0)) {
    FUN_1000d080((int)param_7);
    Ordinal_731(param_7);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void __cdecl
FUN_1000bae0(HDC param_1,HANDLE param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,HANDLE param_10,int param_11)

{
  HDC hdc;
  HGDIOBJ h;
  int wDest;
  int hDest;
  HRGN hrgn;
  COLORREF CVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_34 [4];
  int iStack_30;
  int iStack_2c;
  tagRECT tStack_1c;
  undefined1 auStack_c [4];
  COLORREF CStack_8;
  
  uVar4 = 0;
  hdc = CreateCompatibleDC(param_1);
  h = SelectObject(hdc,param_2);
  GetObjectA(param_2,0x18,auStack_34);
  wDest = (param_5 - param_3) + 1;
  hDest = (param_6 - param_4) + 1;
  iVar2 = param_7;
  iVar3 = param_7;
  if ((param_8 == 0) && ((iStack_30 != wDest || (iStack_2c != hDest)))) {
    iVar2 = param_7 + (wDest - iStack_30) / 2;
    iVar3 = param_7 + (hDest - iStack_2c) / 2;
  }
  iVar3 = iVar3 + param_4;
  iVar2 = iVar2 + param_3;
  if (param_11 != 0) {
    CopyRect(&tStack_1c,(RECT *)&param_3);
    LPtoDP(param_1,(LPPOINT)&tStack_1c,2);
    hrgn = CreateRectRgnIndirect(&tStack_1c);
    SelectClipRgn(param_1,hrgn);
    DeleteObject(hrgn);
  }
  if (param_8 == 0) {
    BitBlt(param_1,iVar2,iVar3,iStack_30,iStack_2c,hdc,0,0,0xcc0020);
  }
  else {
    StretchBlt(param_1,iVar2,iVar3,wDest,hDest,hdc,0,0,iStack_30,iStack_2c,0xcc0020);
  }
  if (param_9 == 1) {
    GetObjectA(param_10,0xc,auStack_c);
    iVar2 = param_4;
    if (param_4 <= param_6) {
      do {
        iVar3 = param_3 + uVar4;
        if (iVar3 <= param_5) {
          do {
            CVar1 = GetPixel(param_1,iVar3,iVar2);
            if (CVar1 == CStack_8) {
              SetPixel(param_1,iVar3,iVar2,0xffffff);
            }
            iVar3 = iVar3 + 2;
          } while (iVar3 <= param_5);
        }
        uVar4 = (uint)(uVar4 == 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 <= param_6);
    }
  }
  else if (param_9 == 2) {
    InvertRect(param_1,(RECT *)&param_3);
  }
  SelectObject(hdc,h);
  DeleteDC(hdc);
  return;
}



undefined4 __cdecl FUN_1000bce0(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  OLECHAR *psz;
  BSTR bstrString;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *unaff_FS_OFFSET;
  char *pcStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000bea4;
  *unaff_FS_OFFSET = &local_10;
  pcStack_38 = (char *)0x1000bd05;
  Ordinal_486();
  pcStack_38 = s_MS_Sans_Serif_1001fb6c;
  local_8 = 0;
  uVar2 = Ordinal_483();
  local_8._0_1_ = 1;
  local_24 = Ordinal_4742(param_1,s_FontName_1001fb7c,&local_18,uVar2);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000be9c();
  if (local_24 != 0) {
    psz = (OLECHAR *)0x0;
    if (local_18 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar5 = local_18;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_10017860();
      psz = (OLECHAR *)Ordinal_974(&pcStack_38,local_18,~uVar4);
    }
    bstrString = SysAllocString(psz);
    (**(code **)(*(int *)*param_2 + 0x10))((int *)*param_2,bstrString);
    SysFreeString(bstrString);
  }
  local_20 = 0x14244;
  local_1c = 0;
  iVar3 = Ordinal_4728(param_1,s_FontSize_1001fb88,&local_2c,0x14244,0);
  if (iVar3 != 0) {
    (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,local_2c,local_28);
  }
  iVar3 = Ordinal_4724(param_1,s_FontBold_1001fb94,&local_14,1);
  if (iVar3 != 0) {
    (**(code **)(*(int *)*param_2 + 0x20))((int *)*param_2,local_14);
  }
  iVar3 = Ordinal_4724(param_1,s_FontItalic_1001fba0,&local_14,0);
  if (iVar3 != 0) {
    (**(code **)(*(int *)*param_2 + 0x28))((int *)*param_2,local_14);
  }
  iVar3 = Ordinal_4724(param_1,s_FontUnderline_1001fbac,&local_14,0);
  if (iVar3 != 0) {
    (**(code **)(*(int *)*param_2 + 0x30))((int *)*param_2,local_14);
  }
  iVar3 = Ordinal_4724(param_1,s_FontStrikethru_1001fbbc,&local_14,0);
  if (iVar3 != 0) {
    (**(code **)(*(int *)*param_2 + 0x38))((int *)*param_2,local_14);
  }
  local_8 = 0xffffffff;
  FUN_1000beae();
  *unaff_FS_OFFSET = local_10;
  return 1;
}



void FUN_1000be9c(void)

{
  Ordinal_706();
  return;
}



void FUN_1000beae(void)

{
  Ordinal_706();
  return;
}



undefined4 FUN_1000bec0(void)

{
  return 1;
}



undefined4 __cdecl FUN_1000bed0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  BSTR _Str;
  LPSTR lpsz;
  size_t sVar3;
  char *pcVar4;
  UINT UVar5;
  HGLOBAL hMem;
  int iVar6;
  uint uVar7;
  BSTR cAccel;
  OLECHAR *psz;
  LPACCEL ptVar8;
  int local_1c;
  LPACCEL local_18;
  int local_10;
  HACCEL local_c;
  BSTR local_8;
  
  psz = (OLECHAR *)0x0;
  local_c = (HACCEL)0x0;
  local_8 = SysAllocString((OLECHAR *)0x0);
  if (param_2 != (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_10017860();
    psz = (OLECHAR *)Ordinal_974(&stack0xffffffd8,param_2,~uVar7);
  }
  _Str = SysAllocString(psz);
  lpsz = (LPSTR)0x0;
  if (_Str != (BSTR)0x0) {
    sVar3 = wcslen(_Str);
    FUN_10017860();
    lpsz = (LPSTR)Ordinal_1366(&stack0xffffffd8,_Str,sVar3 * 2 + 2);
  }
  pcVar4 = CharUpperA(lpsz);
  local_10 = 0;
joined_r0x1000bf6c:
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    if (pcVar4 != (char *)0x0) goto LAB_1000bf87;
    goto LAB_1000bfe1;
  }
LAB_1000bff3:
  cAccel = local_8;
  if (0 < local_10) {
    hMem = GlobalAlloc(0x2002,local_10 * 0xc);
    if (hMem != (HGLOBAL)0x0) {
      local_18 = (LPACCEL)GlobalLock(hMem);
    }
    cAccel = (BSTR)0x0;
    local_1c = 0;
    if (0 < local_10) {
      do {
        iVar6 = 0;
        if (local_8 != (wchar_t *)0x0) {
          sVar3 = wcslen(local_8);
          FUN_10017860();
          iVar6 = Ordinal_1366(&stack0xffffffd8,local_8,sVar3 * 2 + 2);
        }
        cVar1 = *(char *)(iVar6 + local_1c);
        if (hMem != (HGLOBAL)0x0) {
          if ((cVar1 < 'A') || ('Z' < cVar1)) {
            ptVar8 = local_18 + (int)cAccel;
            ptVar8->fVirt = '\x11';
            uVar2 = VkKeyScanA(cVar1);
            if ((uVar2 & 0x100) != 0) {
              ptVar8->fVirt = ptVar8->fVirt | 4;
            }
          }
          else {
            ptVar8 = local_18 + (int)cAccel;
            cAccel = (BSTR)((int)cAccel + 1);
            ptVar8->fVirt = '\x11';
            uVar2 = VkKeyScanA(cVar1);
            ptVar8->key = uVar2 & 0xff;
            ptVar8->cmd = 1;
            ptVar8 = local_18 + (int)cAccel;
            ptVar8->fVirt = '\x15';
          }
          cAccel = (BSTR)((int)cAccel + 1);
          uVar2 = VkKeyScanA(cVar1);
          ptVar8->key = uVar2 & 0xff;
          ptVar8->cmd = 1;
        }
        local_1c = local_1c + 1;
      } while (local_1c < local_10);
    }
    local_c = CreateAcceleratorTableA(local_18,(int)cAccel);
    GlobalFree(hMem);
  }
  SysFreeString(_Str);
  SysFreeString(local_8);
  if (local_c == (HACCEL)0x0) {
    return 0;
  }
  *(short *)(param_1 + 2) = (short)cAccel;
  *param_1 = 0x10;
  param_1[1] = local_c;
  param_1[3] = 0;
  return 1;
LAB_1000bf87:
  do {
    if ((*pcVar4 == '\0') || (*pcVar4 == '&')) break;
    pcVar4 = CharNextA(pcVar4);
  } while (pcVar4 != (LPSTR)0x0);
  if (pcVar4 != (LPCSTR)0x0) {
    if (*pcVar4 == '&') {
      pcVar4 = CharNextA(pcVar4);
      if (pcVar4 == (LPSTR)0x0) goto joined_r0x1000bf6c;
      if ((*pcVar4 != '\0') && (*pcVar4 != '&')) {
        UVar5 = SysStringLen(local_8);
        SysReAllocStringLen(&local_8,local_8,UVar5 + 1);
        UVar5 = SysStringLen(local_8);
        local_10 = local_10 + 1;
        local_8[UVar5 - 1] = (short)*pcVar4;
      }
    }
LAB_1000bfe1:
    if (pcVar4 == (LPCSTR)0x0) goto LAB_1000bff3;
    if (*pcVar4 != '\0') {
      pcVar4 = CharNextA(pcVar4);
    }
  }
  goto joined_r0x1000bf6c;
}



void __cdecl FUN_1000c160(int param_1,int param_2,int *param_3,int param_4)

{
  HBITMAP pHVar1;
  int iVar2;
  LPBITMAPINFO lpbmi;
  LPPALETTEENTRY pPalEntries;
  BYTE *pBVar3;
  HGLOBAL hMem;
  LPVOID lpvBits;
  undefined4 uVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [4];
  LONG local_48;
  UINT local_44;
  char local_3c;
  WORD local_3a;
  UINT local_34;
  LONG local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined **local_20;
  undefined4 local_1c;
  HGLOBAL local_18;
  HGLOBAL local_14;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &DAT_1000c439;
  *unaff_FS_OFFSET = &local_10;
  uVar4 = 0;
  local_14 = (HGLOBAL)0x0;
  local_1c = 0;
  local_20 = &PTR_LAB_10018928;
  local_8 = 2;
  pHVar1 = CreateBitmap(1,1,1,1,(void *)0x0);
  Ordinal_1426(pHVar1);
  local_24 = Ordinal_5121(*(undefined4 *)(param_2 + 4),local_1c);
  if (local_24 != 0) {
    uVar4 = *(undefined4 *)(local_24 + 4);
  }
  Ordinal_5121(*(undefined4 *)(param_2 + 4),uVar4);
  Ordinal_2115();
  iVar2 = GetObjectA(*(HANDLE *)(local_24 + 4),0x18,local_4c);
  if (0 < iVar2) {
    iVar2 = 1 << (local_3c * (char)local_3a & 0x1fU);
    if (iVar2 == 0x100) {
      local_18 = GlobalAlloc(2,0x428);
      local_14 = GlobalAlloc(2,0x400);
    }
    else {
      local_18 = GlobalAlloc(2,0x28);
    }
    pcVar5 = GlobalFree_exref;
    if (local_18 != (HGLOBAL)0x0) {
      local_28 = *param_3;
      if (param_4 == 0) {
        local_2c = param_3[1];
        local_30 = local_48;
        local_34 = local_44;
      }
      else {
        local_2c = param_3[1];
        local_30 = param_3[2] - local_28;
        local_34 = param_3[3] - local_2c;
      }
      lpbmi = (LPBITMAPINFO)GlobalLock(local_18);
      (lpbmi->bmiHeader).biSize = 0x28;
      (lpbmi->bmiHeader).biWidth = local_48;
      (lpbmi->bmiHeader).biHeight = local_44;
      (lpbmi->bmiHeader).biPlanes = 1;
      (lpbmi->bmiHeader).biBitCount = local_3a;
      (lpbmi->bmiHeader).biCompression = 0;
      (lpbmi->bmiHeader).biSizeImage = 0;
      (lpbmi->bmiHeader).biXPelsPerMeter = 0;
      (lpbmi->bmiHeader).biYPelsPerMeter = 0;
      (lpbmi->bmiHeader).biClrUsed = 0;
      (lpbmi->bmiHeader).biClrImportant = 0;
      if ((iVar2 == 0x100) && (local_14 != (HGLOBAL)0x0)) {
        pPalEntries = (LPPALETTEENTRY)GlobalLock(local_14);
        GetSystemPaletteEntries(*(HDC *)(param_2 + 4),0,0x100,pPalEntries);
        iVar2 = 0x100;
        pBVar3 = &lpbmi->bmiColors[0].rgbRed;
        do {
          *pBVar3 = pPalEntries->peRed;
          iVar2 = iVar2 + -1;
          ((RGBQUAD *)(pBVar3 + -2))->rgbBlue = pPalEntries->peBlue;
          pBVar3[-1] = pPalEntries->peGreen;
          pBVar3 = pBVar3 + 4;
          pPalEntries = pPalEntries + 1;
        } while (iVar2 != 0);
      }
      hMem = GlobalAlloc(2,(((uint)local_3a * local_48 + 0x1f & 0xffffffe7) >> 3) * local_44);
      pcVar5 = GlobalFree_exref;
      pcVar6 = GlobalUnlock_exref;
      if (hMem != (HGLOBAL)0x0) {
        lpvBits = GlobalLock(hMem);
        GetDIBits(*(HDC *)(param_2 + 4),*(HBITMAP *)(local_24 + 4),0,local_44,lpvBits,lpbmi,0);
        StretchDIBits(*(HDC *)(param_1 + 4),local_28,local_2c,local_30,local_34,0,0,local_48,
                      local_44,lpvBits,lpbmi,0,0xcc0020);
        pcVar6 = GlobalUnlock_exref;
        GlobalUnlock(hMem);
        pcVar5 = GlobalFree_exref;
        GlobalFree(hMem);
      }
      (*pcVar6)(local_18);
      (*pcVar6)(local_14);
    }
    if (local_18 != (HGLOBAL)0x0) {
      (*pcVar5)(local_18);
    }
    if (local_14 != (HGLOBAL)0x0) {
      (*pcVar5)(local_14);
    }
  }
  local_8 = 0xffffffff;
  FUN_1000c443();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000c443(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x1c));
  return;
}



undefined4 __cdecl FUN_1000c450(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  int *unaff_EDI;
  VARIANTARG *unaff_retaddr;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  char *local_4;
  
  uVar2 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = (char *)0x0;
  iVar1 = (**(code **)*param_1)(param_1,&DAT_1001be30,local_18);
  if (-1 < iVar1) {
    iVar1 = FUN_1000c4f0(unaff_EDI,local_4,&stack0xffffffe0);
    if (-1 < iVar1) {
      VariantInit(unaff_retaddr);
      iVar1 = (**(code **)(*unaff_EDI + 0x18))
                        (unaff_EDI,unaff_ESI,&DAT_1001bbb0,0,2,&stack0xffffffe4,unaff_retaddr,0,0);
      if (-1 < iVar1) {
        uVar2 = 0;
      }
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return uVar2;
}



undefined4 __cdecl FUN_1000c4f0(int *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  OLECHAR *psz;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  BSTR local_8;
  
  psz = (OLECHAR *)0x0;
  if (param_2 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar4 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_10017860();
    psz = (OLECHAR *)Ordinal_974(&stack0xfffffff0,param_2,~uVar3);
  }
  local_8 = SysAllocString(psz);
  uVar2 = (**(code **)(*param_1 + 0x14))(param_1,&DAT_1001bbb0,&local_8,1,0x800,param_3);
  SysFreeString(local_8);
  return uVar2;
}



int __cdecl FUN_1000c570(int *param_1)

{
  int iVar1;
  int *piStack_18;
  int *piStack_14;
  int local_10 [4];
  
  piStack_14 = local_10;
  local_10[0] = 0;
  local_10[1] = 0;
  local_10[2] = 0;
  piStack_18 = (int *)&DAT_1001bad0;
  local_10[3] = 0;
  iVar1 = (**(code **)*param_1)();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,&piStack_18);
    if (iVar1 == 0) {
      iVar1 = (**(code **)*piStack_18)(piStack_18,&DAT_1001bf50,&piStack_14);
      if (iVar1 == 0) {
        (**(code **)(*piStack_14 + 0x14))(piStack_14,local_10);
      }
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(piStack_18);
  }
  if (piStack_14 != (int *)0x0) {
    (**(code **)(*piStack_14 + 8))(piStack_14);
  }
  return local_10[0];
}



undefined4 __cdecl FUN_1000c610(undefined4 *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  undefined1 *puStack_24;
  undefined1 local_1c [4];
  undefined1 **local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char *pcStack_4;
  
  puStack_24 = local_1c;
  uVar2 = 1;
  local_18 = (undefined1 **)0xfffffffd;
  iVar1 = (**(code **)*param_1)(param_1);
  if (-1 < iVar1) {
    iVar1 = FUN_1000c4f0((int *)&DAT_1001be30,pcStack_4,&stack0xffffffe0);
    if (-1 < iVar1) {
      local_18 = &puStack_24;
      uStack_14 = 1;
      uStack_10 = 1;
      iVar1 = (*pcRam00020418)(&DAT_1001be30,unaff_ESI,&DAT_1001bbb0,0,4,local_1c,0,0,0);
      if (-1 < iVar1) {
        uVar2 = 0;
      }
    }
    (*pcRam00020408)(&DAT_1001be30);
  }
  return uVar2;
}



undefined4 * __thiscall FUN_1000d050(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined2 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (undefined4 *)this;
}



void __fastcall FUN_1000d080(int param_1)

{
  if (*(HGDIOBJ *)(param_1 + 8) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 8));
  }
  if (*(HGDIOBJ *)(param_1 + 0xc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc));
  }
  if (*(HGDIOBJ *)(param_1 + 0x10) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x10));
  }
  if (*(HGDIOBJ *)(param_1 + 0x14) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x14));
  }
  if (*(HGDIOBJ *)(param_1 + 0x18) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x18));
  }
  if (*(HGDIOBJ *)(param_1 + 0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x1c));
  }
  if (*(HGDIOBJ *)(param_1 + 0x20) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x20));
  }
  if (*(HGDIOBJ *)(param_1 + 0x24) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x24));
  }
  return;
}



void __fastcall FUN_1000d130(int *param_1)

{
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  DWORD color;
  
  if (param_1[3] == 0) {
    if (*param_1 == 0) {
      color = ((short)param_1[1] == 1) - 1 & 0x808080;
    }
    else {
      color = GetSysColor(0x10);
    }
    pvVar1 = FUN_1000d210(color);
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreatePen(0,1,color);
      param_1[3] = (int)pHVar2;
    }
  }
  return;
}



void __fastcall FUN_1000d190(int *param_1)

{
  HGDIOBJ pvVar1;
  HPEN pHVar2;
  DWORD color;
  
  if (param_1[4] == 0) {
    color = 0xffffff;
    if (*param_1 != 0) {
      color = GetSysColor(0x14);
    }
    pvVar1 = FUN_1000d210(color);
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreatePen(0,1,color);
      param_1[4] = (int)pHVar2;
    }
  }
  return;
}



void __fastcall FUN_1000d1d0(int param_1)

{
  DWORD DVar1;
  HGDIOBJ pvVar2;
  HPEN pHVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    DVar1 = GetSysColor(6);
    pvVar2 = FUN_1000d210(DVar1);
    if (pvVar2 == (HGDIOBJ)0x0) {
      DVar1 = GetSysColor(6);
      pHVar3 = CreatePen(0,1,DVar1);
      *(HPEN *)(param_1 + 0x14) = pHVar3;
    }
  }
  return;
}



HGDIOBJ FUN_1000d210(int param_1)

{
  HGDIOBJ pvVar1;
  
  if (param_1 == 0) {
    pvVar1 = GetStockObject(7);
    return pvVar1;
  }
  if (param_1 != 0xffffff) {
    return (HGDIOBJ)0x0;
  }
  pvVar1 = GetStockObject(6);
  return pvVar1;
}



void __fastcall FUN_1000d240(int *param_1)

{
  HGDIOBJ pvVar1;
  HBRUSH pHVar2;
  DWORD color;
  
  if (param_1[6] == 0) {
    color = 0xc0c0c0;
    if (*param_1 != 0) {
      color = GetSysColor(0xf);
    }
    pvVar1 = FUN_1000d350(color);
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreateSolidBrush(color);
      param_1[6] = (int)pHVar2;
    }
  }
  return;
}



void __fastcall FUN_1000d280(int *param_1)

{
  HGDIOBJ pvVar1;
  HBRUSH pHVar2;
  DWORD color;
  
  if (param_1[7] == 0) {
    if (*param_1 == 0) {
      color = ((short)param_1[1] == 1) - 1 & 0x808080;
    }
    else {
      color = GetSysColor(0x10);
    }
    pvVar1 = FUN_1000d350(color);
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreateSolidBrush(color);
      param_1[7] = (int)pHVar2;
    }
  }
  return;
}



void __fastcall FUN_1000d2d0(int *param_1)

{
  HGDIOBJ pvVar1;
  HBRUSH pHVar2;
  DWORD color;
  
  if (param_1[8] == 0) {
    color = 0xffffff;
    if (*param_1 != 0) {
      color = GetSysColor(0x14);
    }
    pvVar1 = FUN_1000d350(color);
    if (pvVar1 == (HGDIOBJ)0x0) {
      pHVar2 = CreateSolidBrush(color);
      param_1[8] = (int)pHVar2;
    }
  }
  return;
}



HGDIOBJ FUN_1000d350(uint param_1)

{
  HGDIOBJ pvVar1;
  
  if (0x808080 < param_1) {
    if (param_1 == 0xc0c0c0) {
      pvVar1 = GetStockObject(1);
      return pvVar1;
    }
    if (param_1 != 0xffffff) {
      return (HGDIOBJ)0x0;
    }
    pvVar1 = GetStockObject(0);
    return pvVar1;
  }
  if (param_1 == 0x808080) {
    pvVar1 = GetStockObject(3);
    return pvVar1;
  }
  if (param_1 != 0) {
    return (HGDIOBJ)0x0;
  }
  pvVar1 = GetStockObject(4);
  return pvVar1;
}



DWORD __fastcall FUN_1000d3b0(int *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    return 0xc0c0c0;
  }
  DVar1 = GetSysColor(0xf);
  return DVar1;
}



uint __fastcall FUN_1000d3d0(int *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    return ((short)param_1[1] == 1) - 1 & 0x808080;
  }
  DVar1 = GetSysColor(0x10);
  return DVar1;
}



DWORD __fastcall FUN_1000d400(int *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    return 0xffffff;
  }
  DVar1 = GetSysColor(0x14);
  return DVar1;
}



void FUN_1000d420(void)

{
  GetSysColor(6);
  return;
}



DWORD __fastcall FUN_1000d430(int *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    return 0xffffff;
  }
  DVar1 = GetSysColor(5);
  return DVar1;
}



DWORD __fastcall FUN_1000d450(int *param_1)

{
  DWORD DVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  DVar1 = GetSysColor(8);
  return DVar1;
}



undefined4 GrayStringCallback(HDC param_1,undefined4 *param_2)

{
  tagRECT local_10;
  
                    // 0xd470  5  GrayStringCallback
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = param_2[2];
  local_10.bottom = param_2[3];
  if ((HGDIOBJ)*param_2 != (HGDIOBJ)0x0) {
    SelectObject(param_1,(HGDIOBJ)*param_2);
  }
  DrawTextA(param_1,(LPCSTR)param_2[4],-1,&local_10,(uint)*(ushort *)(param_2 + 1));
  return 1;
}



void FUN_1000d529(void)

{
  Ordinal_570();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000d620(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000d678;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_10019ea0,&PTR_s_CSSPBPropPage_1001fc40,0,"Threed.CSSPBPropPage");
  _DAT_100209f8 = &PTR_LAB_10019eb0;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000d690(void)

{
  FUN_10017840((_onexit_t)&LAB_1000d6a0);
  return;
}



void FUN_1000d6eb(void)

{
  Ordinal_651();
  return;
}



void FUN_1000da49(void)

{
  Ordinal_651();
  return;
}



void FUN_1000dabc(void)

{
  Ordinal_706();
  return;
}



void FUN_1000dad4(void)

{
  FUN_10001500();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000dbc0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000dc18;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_1001a050,&PTR_s_CSSRIPropPage_1001fcc8,0,"Threed.CSSRIPropPage");
  _DAT_10020a50 = &PTR_LAB_1001a060;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000dc30(void)

{
  FUN_10017840((_onexit_t)&LAB_1000dc40);
  return;
}



void FUN_1000dc8b(void)

{
  Ordinal_651();
  return;
}



void FUN_1000e059(void)

{
  Ordinal_651();
  return;
}



void FUN_1000e0c9(void)

{
  FUN_10001500();
  return;
}



void FUN_1000e0f0(void)

{
  FUN_1000fb20((undefined4 *)&DAT_10020af0);
  return;
}



void FUN_1000e100(void)

{
  FUN_10017840((_onexit_t)&LAB_1000e110);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1000e320(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1000e378;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_1001a680,&PTR_s_CSSRBCtrl_1001fd70,0,"Threed.SSOption");
  _DAT_10020b38 = &PTR_LAB_1001a6d8;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000e390(void)

{
  FUN_10017840((_onexit_t)&LAB_1000e3a0);
  return;
}



void FUN_1000e3eb(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_1000e610(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_1000e686;
  *param_1 = &PTR_LAB_1001a740;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_1000e66a();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1000e678();
  local_8 = 0xffffffff;
  FUN_1000e690();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000e66a(void)

{
  Ordinal_665();
  return;
}



void FUN_1000e678(void)

{
  FUN_10016230();
  return;
}



void FUN_1000e690(void)

{
  Ordinal_632();
  return;
}



void FUN_1000e805(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x3c);
  return;
}



void FUN_1000e998(void)

{
  Ordinal_569();
  return;
}



void FUN_1000e9a0(void)

{
  Ordinal_569();
  return;
}



void FUN_1000e9c2(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_1000eb13(void)

{
  FUN_10003c30();
  return;
}



void FUN_1000eb83(void)

{
  Ordinal_706();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_1000f010(int param_1)

{
  Ordinal_3862();
  DAT_10020b84 = 0;
  *(undefined4 *)(param_1 + 0x244) = 1;
  _DAT_10020aec = 0;
  return;
}



undefined4 __fastcall FUN_1000f4b0(void *param_1)

{
  int iVar1;
  HWND pHVar2;
  void *pvVar3;
  BOOL BVar4;
  
  iVar1 = Ordinal_2728();
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_10020b84 != 0) {
    pHVar2 = GetCapture();
    pvVar3 = (void *)Ordinal_2515(pHVar2);
    if (pvVar3 == param_1) {
      ReleaseCapture();
    }
    DAT_10020b84 = 0;
  }
  if (*(int *)((int)param_1 + 0x244) == 0) {
    *(undefined4 *)((int)param_1 + 0x244) = 1;
    if (*(short *)((int)param_1 + 0x236) == 0) {
      FUN_1000f910(param_1,1);
      BVar4 = IsWindow(*(HWND *)((int)param_1 + 0x20));
      if (BVar4 == 0) {
        return 1;
      }
    }
    else {
      Ordinal_3530(0);
      if (*(HWND *)((int)param_1 + 0x20) != (HWND)0x0) {
        UpdateWindow(*(HWND *)((int)param_1 + 0x20));
      }
    }
  }
  return 0;
}



void __thiscall FUN_1000f540(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC pHVar5;
  undefined4 uVar6;
  int x;
  undefined4 *unaff_FS_OFFSET;
  HDC local_20;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f63a;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  iVar3 = Ordinal_2728();
  iVar4 = FUN_1000fb60(&DAT_10020af0,param_1,*(int *)((int)this + 0x244),*(int *)((int)this + 600),
                       (int)*(short *)((int)this + 0x236),iVar3);
  iVar3 = param_2[3];
  iVar1 = param_2[1];
  iVar2 = param_2[1];
  if (*(short *)((int)this + 0x234) == 0) {
    x = *param_2;
  }
  else {
    x = param_2[2] + -0xd;
  }
  pHVar5 = (HDC)0x0;
  if (param_1 != 0) {
    pHVar5 = *(HDC *)(param_1 + 4);
  }
  pHVar5 = CreateCompatibleDC(pHVar5);
  Ordinal_1425(pHVar5);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = *(undefined4 *)(iVar4 + 4);
  }
  Ordinal_5121(local_20,uVar6);
  BitBlt(*(HDC *)(param_1 + 4),x,iVar2 + -6 + (iVar3 - iVar1) / 2,0xd,0xd,local_20,0,0,0xcc0020);
  local_8 = 0xffffffff;
  FUN_1000f644();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1000f644(void)

{
  Ordinal_569();
  return;
}



void __thiscall FUN_1000f650(void *this,int param_1,RECT *param_2,int *param_3)

{
  undefined4 uVar1;
  LPCSTR lpString;
  int iVar2;
  DWORD DVar3;
  int nHeight;
  HBRUSH hBrush;
  COLORREF color;
  undefined4 *unaff_FS_OFFSET;
  code *lpOutputFunc;
  undefined4 *lpData;
  int nCount;
  LONG X;
  LONG Y;
  HDC hDC;
  tagTEXTMETRICA local_84;
  tagRECT local_4c;
  undefined4 local_3c;
  undefined2 local_38;
  int local_34;
  int local_30;
  LPCSTR local_2c;
  tagRECT local_24;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f8fa;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_486();
  local_8 = 0;
  uVar1 = Ordinal_3524();
  Ordinal_760(uVar1);
  lpString = (LPCSTR)Ordinal_2557(1);
  iVar2 = lstrlenA(lpString);
  if (iVar2 < 1) goto LAB_1000f6a7;
  CopyRect(&local_24,param_2);
  GetTextMetricsA(*(HDC *)(param_1 + 4),&local_84);
  if (*(short *)((int)this + 0x234) == 0) {
    local_24.left = local_24.left + 0x10;
    local_12 = 0x24;
  }
  else {
    local_24.right = local_24.right + -0x10;
    local_12 = 0x26;
  }
  iVar2 = Ordinal_2728();
  if (iVar2 == 0) {
    iVar2 = Ordinal_1400();
    if (iVar2 == 0) goto LAB_1000f7e4;
    DVar3 = GetSysColor(0x11);
    if (DVar3 == 0) {
LAB_1000f786:
      Ordinal_3523();
      local_3c = Ordinal_2795();
      local_38 = local_12;
      iVar2 = local_24.right - local_24.left;
      nHeight = local_24.bottom - local_24.top;
      lpData = &local_3c;
      nCount = 0;
      lpOutputFunc = GrayStringCallback;
      X = local_24.left;
      Y = local_24.top;
      local_34 = iVar2;
      local_30 = nHeight;
      local_2c = lpString;
      hBrush = (HBRUSH)GetStockObject(4);
      GrayStringA(*(HDC *)(param_1 + 4),hBrush,lpOutputFunc,(LPARAM)lpData,nCount,X,Y,iVar2,nHeight)
      ;
    }
    else {
      DVar3 = GetSysColor(0x11);
      if (DVar3 == 0xc0c0c0) goto LAB_1000f786;
      DVar3 = GetSysColor(0x11);
      local_2c = (LPCSTR)SetTextColor(*(HDC *)(param_1 + 4),DVar3);
      FUN_1000abf0(param_1,lpString,&local_24,*(undefined2 *)((int)this + 0x238),
                   CONCAT22(uStack_10,local_12),0,param_3);
      SetTextColor(*(HDC *)(param_1 + 4),(COLORREF)local_2c);
    }
  }
  else {
LAB_1000f7e4:
    uVar1 = Ordinal_2801(0);
    color = Ordinal_5568(uVar1);
    SetTextColor(*(HDC *)(param_1 + 4),color);
    FUN_1000abf0(param_1,lpString,&local_24,*(undefined2 *)((int)this + 0x238),
                 CONCAT22(uStack_10,local_12),0,param_3);
  }
  if ((((*(int *)((int)this + 0x254) == 0) || (*(int *)((int)this + 0x248) != 0)) ||
      (*(int *)((int)this + 0x24c) != 0)) && (*(int *)((int)this + 0x250) != 0)) {
    local_2c = (LPCSTR)SetTextColor(*(HDC *)(param_1 + 4),0);
    DrawTextA(*(HDC *)(param_1 + 4),lpString,-1,&local_4c,0x420);
    local_24.top = ((-2 - local_84.tmExternalLeading) - local_84.tmHeight) / 2 +
                   (local_24.bottom - local_24.top) / 2;
    local_24.bottom = local_84.tmExternalLeading + local_84.tmHeight + local_24.top + 2;
    if (*(short *)((int)this + 0x234) == 0) {
      local_24.right = (local_4c.right - local_4c.left) + local_24.left;
      hDC = *(HDC *)(param_1 + 4);
    }
    else {
      local_24.left = local_24.right - (local_4c.right - local_4c.left);
      hDC = *(HDC *)(param_1 + 4);
    }
    local_24.right = local_24.right + 2;
    local_24.left = local_24.left + -2;
    DrawFocusRect(hDC,&local_24);
    SetTextColor(*(HDC *)(param_1 + 4),(COLORREF)local_2c);
  }
LAB_1000f6a7:
  local_8 = 0xffffffff;
  FUN_1000f904();
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return;
}



void FUN_1000f904(void)

{
  Ordinal_706();
  return;
}



void __thiscall FUN_1000f910(void *this,int param_1)

{
  short local_2;
  
  FUN_1000f980(this,1);
  *(undefined4 *)((int)this + 0x254) = 1;
  if (param_1 != 0) {
    Ordinal_3530(0);
    if (*(HWND *)((int)this + 0x20) != (HWND)0x0) {
      UpdateWindow(*(HWND *)((int)this + 0x20));
    }
  }
  local_2 = *(short *)((int)this + 0x236);
  if (local_2 != 0) {
    local_2 = -1;
  }
  Ordinal_2451(this,1,&DAT_1001f6f4,&local_2);
  return;
}



void __thiscall FUN_1000f980(void *this,undefined2 param_1)

{
  *(undefined2 *)((int)this + 0x236) = param_1;
  Ordinal_5341(1);
  Ordinal_1456(0);
  return;
}



undefined4 * __fastcall FUN_1000fb20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



int __thiscall FUN_1000fb60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  HINSTANCE pHVar3;
  HBITMAP pHVar4;
  undefined4 *puVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar6;
  undefined4 *local_18;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100104ad;
  *unaff_FS_OFFSET = &local_10;
  if (((param_4 != 0) && (param_2 != 0)) && (param_5 != 0)) {
    if (param_3 == 0) {
                    // WARNING: Load size is inaccurate
      iVar2 = *this;
      if (iVar2 == 0) {
        puVar5 = (undefined4 *)Ordinal_729(8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_LAB_10018910;
          *puVar5 = &PTR_LAB_10018940;
          puVar5[1] = 0;
          *puVar5 = &PTR_LAB_10018928;
        }
        local_8 = 0xffffffff;
        *(undefined4 **)this = puVar5;
        pcVar6 = s_SSRBup1_1001ff84;
        pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBup1_1001ff84,2,s_SSRBup1_1001ff84);
        pHVar4 = LoadBitmapA(pHVar3,pcVar6);
        Ordinal_1426(pHVar4);
                    // WARNING: Load size is inaccurate
        iVar2 = *this;
      }
      goto LAB_1000fc00;
    }
    if (*(int *)((int)this + 0x18) == 0) {
LAB_1000fbc0:
      local_18 = (undefined4 *)Ordinal_729(8);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        *local_18 = &PTR_LAB_10018910;
        *local_18 = &PTR_LAB_10018940;
        local_18[1] = 0;
        *local_18 = &PTR_LAB_10018928;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x18) = local_18;
      pcVar6 = s_SSRBup1_1001ff7c;
      pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBup1_1001ff7c,2,s_SSRBup1_1001ff7c);
      pHVar4 = LoadBitmapA(pHVar3,pcVar6);
      Ordinal_1426(pHVar4);
      FUN_100104d0(param_1,*(int *)((int)this + 0x18),param_2,param_5);
    }
    else {
      bVar1 = FUN_100106c0((int)this);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        FUN_10010740((int *)this);
        goto LAB_1000fbc0;
      }
    }
    iVar2 = *(int *)((int)this + 0x18);
    goto LAB_1000fc00;
  }
  if (param_4 == 0) {
LAB_1000fea7:
    if ((param_2 != 0) && (param_5 != 0)) {
      if (param_3 == 0) {
        iVar2 = *(int *)((int)this + 4);
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)Ordinal_729(8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = &PTR_LAB_10018910;
            *puVar5 = &PTR_LAB_10018940;
            puVar5[1] = 0;
            *puVar5 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 4) = puVar5;
          pcVar6 = s_SSRBup2_1001ffa4;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBup2_1001ffa4,2,s_SSRBup2_1001ffa4);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          iVar2 = *(int *)((int)this + 4);
        }
      }
      else {
        if (*(int *)((int)this + 0x1c) != 0) {
          bVar1 = FUN_100106c0((int)this);
          if (CONCAT31(extraout_var_01,bVar1) == 0) {
            iVar2 = *(int *)((int)this + 0x1c);
            goto LAB_1000fc00;
          }
          FUN_10010740((int *)this);
        }
        local_18 = (undefined4 *)Ordinal_729(8);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          *local_18 = &PTR_LAB_10018910;
          *local_18 = &PTR_LAB_10018940;
          local_18[1] = 0;
          *local_18 = &PTR_LAB_10018928;
        }
        local_8 = 0xffffffff;
        *(undefined4 **)((int)this + 0x1c) = local_18;
        pcVar6 = s_SSRBup2_1001ff9c;
        pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBup2_1001ff9c,2,s_SSRBup2_1001ff9c);
        pHVar4 = LoadBitmapA(pHVar3,pcVar6);
        Ordinal_1426(pHVar4);
        FUN_100104d0(param_1,*(int *)((int)this + 0x1c),param_2,param_5);
        iVar2 = *(int *)((int)this + 0x1c);
      }
      goto LAB_1000fc00;
    }
    if (param_4 == 0) {
      if ((param_2 == 0) && (param_5 != 0)) {
        if (param_3 == 0) {
          iVar2 = *(int *)((int)this + 0xc);
          if (iVar2 == 0) {
            puVar5 = (undefined4 *)Ordinal_729(8);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              *puVar5 = &PTR_LAB_10018910;
              *puVar5 = &PTR_LAB_10018940;
              puVar5[1] = 0;
              *puVar5 = &PTR_LAB_10018928;
            }
            local_8 = 0xffffffff;
            *(undefined4 **)((int)this + 0xc) = puVar5;
            pcVar6 = s_SSRBdn2_1001ffb4;
            pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBdn2_1001ffb4,2,s_SSRBdn2_1001ffb4);
            pHVar4 = LoadBitmapA(pHVar3,pcVar6);
            Ordinal_1426(pHVar4);
            iVar2 = *(int *)((int)this + 0xc);
          }
        }
        else {
          if (*(int *)((int)this + 0x24) != 0) {
            bVar1 = FUN_100106c0((int)this);
            if (CONCAT31(extraout_var_02,bVar1) == 0) {
              iVar2 = *(int *)((int)this + 0x24);
              goto LAB_1000fc00;
            }
            FUN_10010740((int *)this);
          }
          local_18 = (undefined4 *)Ordinal_729(8);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            *local_18 = &PTR_LAB_10018910;
            *local_18 = &PTR_LAB_10018940;
            local_18[1] = 0;
            *local_18 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 0x24) = local_18;
          pcVar6 = s_SSRBdn2_1001ffac;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBdn2_1001ffac,2,s_SSRBdn2_1001ffac);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          FUN_100104d0(param_1,*(int *)((int)this + 0x24),0,param_5);
          iVar2 = *(int *)((int)this + 0x24);
        }
        goto LAB_1000fc00;
      }
      goto LAB_100101bd;
    }
LAB_100101c5:
    if (param_5 == 0) {
      if (param_3 == 0) {
        iVar2 = *(int *)((int)this + 0x10);
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)Ordinal_729(8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = &PTR_LAB_10018910;
            *puVar5 = &PTR_LAB_10018940;
            puVar5[1] = 0;
            *puVar5 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 0x10) = puVar5;
          pcVar6 = s_SSRBgr1_1001ffc4;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBgr1_1001ffc4,2,s_SSRBgr1_1001ffc4);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          iVar2 = *(int *)((int)this + 0xc);
        }
      }
      else {
        if (*(int *)((int)this + 0x28) != 0) {
          bVar1 = FUN_100106c0((int)this);
          if (CONCAT31(extraout_var_03,bVar1) == 0) {
            iVar2 = *(int *)((int)this + 0x28);
            goto LAB_1000fc00;
          }
          FUN_10010740((int *)this);
        }
        local_18 = (undefined4 *)Ordinal_729(8);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          *local_18 = &PTR_LAB_10018910;
          *local_18 = &PTR_LAB_10018940;
          local_18[1] = 0;
          *local_18 = &PTR_LAB_10018928;
        }
        local_8 = 0xffffffff;
        *(undefined4 **)((int)this + 0x28) = local_18;
        pcVar6 = s_SSRBgr1_1001ffbc;
        pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBgr1_1001ffbc,2,s_SSRBgr1_1001ffbc);
        pHVar4 = LoadBitmapA(pHVar3,pcVar6);
        Ordinal_1426(pHVar4);
        FUN_100104d0(param_1,*(int *)((int)this + 0x28),param_2,0);
        iVar2 = *(int *)((int)this + 0x28);
      }
      goto LAB_1000fc00;
    }
  }
  else {
    if ((param_2 == 0) && (param_5 != 0)) {
      if (param_3 == 0) {
        iVar2 = *(int *)((int)this + 8);
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)Ordinal_729(8);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = &PTR_LAB_10018910;
            *puVar5 = &PTR_LAB_10018940;
            puVar5[1] = 0;
            *puVar5 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 8) = puVar5;
          pcVar6 = s_SSRBdn1_1001ff94;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBdn1_1001ff94,2,s_SSRBdn1_1001ff94);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          iVar2 = *(int *)((int)this + 8);
        }
      }
      else {
        if (*(int *)((int)this + 0x20) != 0) {
          bVar1 = FUN_100106c0((int)this);
          if (CONCAT31(extraout_var_00,bVar1) == 0) {
            iVar2 = *(int *)((int)this + 0x20);
            goto LAB_1000fc00;
          }
          FUN_10010740((int *)this);
        }
        local_18 = (undefined4 *)Ordinal_729(8);
        if (local_18 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          *local_18 = &PTR_LAB_10018910;
          *local_18 = &PTR_LAB_10018940;
          local_18[1] = 0;
          *local_18 = &PTR_LAB_10018928;
        }
        local_8 = 0xffffffff;
        *(undefined4 **)((int)this + 0x20) = local_18;
        pcVar6 = s_SSRBdn1_1001ff8c;
        pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBdn1_1001ff8c,2,s_SSRBdn1_1001ff8c);
        pHVar4 = LoadBitmapA(pHVar3,pcVar6);
        Ordinal_1426(pHVar4);
        FUN_100104d0(param_1,*(int *)((int)this + 0x20),0,param_5);
        iVar2 = *(int *)((int)this + 0x20);
      }
      goto LAB_1000fc00;
    }
    if (param_4 == 0) goto LAB_1000fea7;
LAB_100101bd:
    if (param_4 != 0) goto LAB_100101c5;
  }
  if (param_3 == 0) {
    iVar2 = *(int *)((int)this + 0x14);
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)Ordinal_729(8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_LAB_10018910;
        *puVar5 = &PTR_LAB_10018940;
        puVar5[1] = 0;
        *puVar5 = &PTR_LAB_10018928;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x14) = puVar5;
      pcVar6 = s_SSRBgr2_1001ffd4;
      pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBgr2_1001ffd4,2,s_SSRBgr2_1001ffd4);
      pHVar4 = LoadBitmapA(pHVar3,pcVar6);
      Ordinal_1426(pHVar4);
      iVar2 = *(int *)((int)this + 0x14);
    }
  }
  else {
    if (*(int *)((int)this + 0x2c) != 0) {
      bVar1 = FUN_100106c0((int)this);
      if (CONCAT31(extraout_var_04,bVar1) == 0) {
        iVar2 = *(int *)((int)this + 0x2c);
        goto LAB_1000fc00;
      }
      FUN_10010740((int *)this);
    }
    local_18 = (undefined4 *)Ordinal_729(8);
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      *local_18 = &PTR_LAB_10018910;
      *local_18 = &PTR_LAB_10018940;
      local_18[1] = 0;
      *local_18 = &PTR_LAB_10018928;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x2c) = local_18;
    pcVar6 = s_SSRBgr2_1001ffcc;
    pHVar3 = (HINSTANCE)Ordinal_1014(s_SSRBgr2_1001ffcc,2,s_SSRBgr2_1001ffcc);
    pHVar4 = LoadBitmapA(pHVar3,pcVar6);
    Ordinal_1426(pHVar4);
    FUN_100104d0(param_1,*(int *)((int)this + 0x2c),param_2,param_5);
    iVar2 = *(int *)((int)this + 0x2c);
  }
LAB_1000fc00:
  *unaff_FS_OFFSET = local_10;
  return iVar2;
}



void FUN_100104d0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  DWORD DVar2;
  COLORREF CVar3;
  uint uVar4;
  int iVar5;
  HDC pHVar6;
  int y;
  int x;
  undefined4 *unaff_FS_OFFSET;
  int local_48 [11];
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100106a7;
  *unaff_FS_OFFSET = &local_10;
  pHVar6 = (HDC)0x0;
  Ordinal_314();
  local_8 = 0;
  FUN_1000d050(local_48,1,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_1 != 0) {
    pHVar6 = *(HDC *)(param_1 + 4);
  }
  pHVar6 = CreateCompatibleDC(pHVar6);
  Ordinal_1425(pHVar6);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  y = 0;
  Ordinal_5121(local_1c,uVar1);
  do {
    x = 0;
    do {
      DVar2 = FUN_1000d3b0(local_48);
      if (DVar2 == 0xc0c0c0) {
LAB_1001056c:
        uVar4 = FUN_1000d3d0(local_48);
        if (uVar4 != 0x808080) {
          CVar3 = GetPixel(local_1c,x,y);
          if (CVar3 != 0x808080) goto LAB_1001059b;
          CVar3 = FUN_1000d3d0(local_48);
          goto LAB_1001065b;
        }
LAB_1001059b:
        DVar2 = FUN_1000d400(local_48);
        if (DVar2 != 0xffffff) {
          CVar3 = GetPixel(local_1c,x,y);
          if (CVar3 == 0xffffff) {
            CVar3 = FUN_1000d400(local_48);
            goto LAB_1001065b;
          }
        }
        iVar5 = FUN_1000d420();
        if (iVar5 != 0) {
          CVar3 = GetPixel(local_1c,x,y);
          if (CVar3 == 0) {
            CVar3 = FUN_1000d420();
            goto LAB_1001065b;
          }
        }
        CVar3 = GetPixel(local_1c,x,y);
        if (CVar3 == 0xff) {
          if (param_4 == 0) {
            CVar3 = FUN_1000d3d0(local_48);
          }
          else if (param_3 == 0) {
            CVar3 = FUN_1000d3d0(local_48);
          }
          else {
            CVar3 = FUN_1000d450(local_48);
          }
          goto LAB_1001065b;
        }
        CVar3 = GetPixel(local_1c,x,y);
        if (CVar3 == 0xff0000) {
          if ((param_4 == 0) || (param_3 == 0)) goto LAB_10010653;
          CVar3 = FUN_1000d430(local_48);
          goto LAB_1001065b;
        }
      }
      else {
        CVar3 = GetPixel(local_1c,x,y);
        if (CVar3 != 0xc0c0c0) goto LAB_1001056c;
LAB_10010653:
        CVar3 = FUN_1000d3b0(local_48);
LAB_1001065b:
        SetPixel(local_1c,x,y,CVar3);
      }
      x = x + 1;
    } while (x < 0xd);
    y = y + 1;
    if (0xc < y) {
      local_8 = local_8 & 0xffffff00;
      FUN_1001069f();
      local_8 = 0xffffffff;
      FUN_100106b1();
      *unaff_FS_OFFSET = local_10;
      return;
    }
  } while( true );
}



void FUN_1001069f(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x44);
  return;
}



void FUN_100106b1(void)

{
  Ordinal_569();
  return;
}



bool __fastcall FUN_100106c0(int param_1)

{
  DWORD DVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  DVar1 = GetSysColor(0xf);
  bVar2 = *(DWORD *)(param_1 + 0x30) != DVar1;
  if (bVar2) {
    *(DWORD *)(param_1 + 0x30) = DVar1;
  }
  DVar1 = GetSysColor(0x10);
  bVar3 = *(DWORD *)(param_1 + 0x34) != DVar1;
  if (bVar3) {
    *(DWORD *)(param_1 + 0x34) = DVar1;
  }
  DVar1 = GetSysColor(0x14);
  bVar4 = *(DWORD *)(param_1 + 0x38) != DVar1;
  if (bVar4) {
    *(DWORD *)(param_1 + 0x38) = DVar1;
  }
  DVar1 = GetSysColor(6);
  bVar5 = *(DWORD *)(param_1 + 0x3c) != DVar1;
  if (bVar5) {
    *(DWORD *)(param_1 + 0x3c) = DVar1;
  }
  DVar1 = GetSysColor(5);
  bVar6 = *(DWORD *)(param_1 + 0x40) != DVar1;
  if (bVar6) {
    *(DWORD *)(param_1 + 0x40) = DVar1;
  }
  DVar1 = GetSysColor(8);
  bVar7 = *(DWORD *)(param_1 + 0x44) != DVar1;
  if (bVar7) {
    *(DWORD *)(param_1 + 0x44) = DVar1;
  }
  return bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))));
}



void __fastcall FUN_10010740(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))(1);
    *param_1 = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))(1);
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))(1);
    param_1[2] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1);
    param_1[3] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))(1);
    param_1[6] = 0;
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))(1);
    param_1[7] = 0;
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))(1);
    param_1[10] = 0;
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))(1);
    param_1[0xb] = 0;
  }
  return;
}



void FUN_10010b59(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_10010b80(void *this,byte param_1)

{
  FUN_1000e610((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10010bb0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10010c15;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_504(0);
  _DAT_10020b88 = &PTR_LAB_1001a908;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10010c30(void)

{
  FUN_10017840((_onexit_t)&LAB_10010c40);
  return;
}



void FUN_10010c7b(void)

{
  FUN_10010e20();
  return;
}



undefined4 DllRegisterServer(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  CHAR local_118 [260];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    // 0x10cb0  3  DllRegisterServer
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10010d69;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10017763();
  local_14 = Ordinal_1097(puVar1);
  local_8 = 0;
  Ordinal_1085(&DAT_1001a8f0);
  FUN_10015b40(0,local_118,0x104);
  iVar2 = Ordinal_1035(&DAT_1001a8f0,0,local_118);
  iVar2 = Ordinal_1075(*(undefined4 *)(iVar2 + 8));
  if (iVar2 == 0) {
    local_8 = 0xffffffff;
    FUN_10010d73();
    uVar3 = 0x80040200;
  }
  else {
    iVar2 = Ordinal_5630(1);
    local_8 = 0xffffffff;
    if (iVar2 == 0) {
      FUN_10010d73();
      uVar3 = 0x80040201;
    }
    else {
      FUN_10010d73();
      uVar3 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}



void FUN_10010d73(void)

{
  int unaff_EBP;
  
  FUN_10010f50((undefined4 *)(unaff_EBP + -0x10));
  return;
}



undefined4 DllUnregisterServer(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    // 0x10d80  4  DllUnregisterServer
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10010e04;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10017763();
  uVar2 = Ordinal_1097(puVar1);
  local_8 = 0;
  iVar3 = Ordinal_1085(&DAT_1001a8f0,puVar1,uVar2);
  if (iVar3 == 0) {
    local_8 = 0xffffffff;
    FUN_10010e0e();
    uVar2 = 0x80040200;
  }
  else {
    iVar3 = Ordinal_5630(0);
    local_8 = 0xffffffff;
    if (iVar3 == 0) {
      FUN_10010e0e();
      uVar2 = 0x80040201;
    }
    else {
      FUN_10010e0e();
      uVar2 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}



void FUN_10010e0e(void)

{
  int unaff_EBP;
  
  FUN_10010f50((undefined4 *)(unaff_EBP + -0x10));
  return;
}



void FUN_10010e20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10010e57;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10010e61();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10010e61(void)

{
  Ordinal_721();
  return;
}



void FUN_10010ec9(void)

{
  FUN_10010e20();
  return;
}



void FUN_10010f39(void)

{
  Ordinal_721();
  return;
}



void __fastcall FUN_10010f50(undefined4 *param_1)

{
  Ordinal_1097(*param_1);
  return;
}



void FUN_10010f70(void)

{
  FUN_100128c0((undefined4 *)&DAT_10020cf0);
  return;
}



void FUN_10010f80(void)

{
  FUN_10017840((_onexit_t)&LAB_10010f90);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100111a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_100111f8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_1001aef0,&PTR_s_CSSCBCtrl_1001ffe0,0,"Threed.SSCheck");
  _DAT_10020c58 = &PTR_LAB_1001af48;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10011210(void)

{
  FUN_10017840((_onexit_t)&LAB_10011220);
  return;
}



void FUN_1001126b(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_10011490(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10011506;
  *param_1 = &PTR_LAB_1001afb0;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_100114ea();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_100114f8();
  local_8 = 0xffffffff;
  FUN_10011510();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_100114ea(void)

{
  Ordinal_665();
  return;
}



void FUN_100114f8(void)

{
  FUN_10016230();
  return;
}



void FUN_10011510(void)

{
  Ordinal_632();
  return;
}



void FUN_1001165f(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x3c);
  return;
}



void FUN_100117f8(void)

{
  Ordinal_569();
  return;
}



void FUN_10011800(void)

{
  Ordinal_569();
  return;
}



void FUN_10011822(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_10011968(void)

{
  FUN_10003c30();
  return;
}



void FUN_100119d3(void)

{
  Ordinal_706();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __fastcall FUN_10011e90(int param_1)

{
  Ordinal_3862();
  _DAT_10020d28 = 0;
  *(undefined4 *)(param_1 + 0x244) = 1;
  _DAT_10020cec = 0;
  return;
}



void __thiscall FUN_10012270(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC pHVar5;
  undefined4 uVar6;
  int x;
  undefined4 *unaff_FS_OFFSET;
  HDC local_20;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10012361;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  iVar4 = FUN_100128f0(&DAT_10020cf0,param_1,*(int *)((int)this + 0x244),*(int *)((int)this + 600),
                       *(int *)((int)this + 0x238));
  iVar1 = param_2[3];
  iVar2 = param_2[1];
  iVar3 = param_2[1];
  if (*(short *)((int)this + 0x234) == 0) {
    x = *param_2;
  }
  else {
    x = param_2[2] + -0xd;
  }
  pHVar5 = (HDC)0x0;
  if (param_1 != 0) {
    pHVar5 = *(HDC *)(param_1 + 4);
  }
  pHVar5 = CreateCompatibleDC(pHVar5);
  Ordinal_1425(pHVar5);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = *(undefined4 *)(iVar4 + 4);
  }
  Ordinal_5121(local_20,uVar6);
  BitBlt(*(HDC *)(param_1 + 4),x,iVar3 + -6 + (iVar1 - iVar2) / 2,0xd,0xd,local_20,0,0,0xcc0020);
  local_8 = 0xffffffff;
  FUN_1001236b();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1001236b(void)

{
  Ordinal_569();
  return;
}



void __thiscall FUN_10012380(void *this,int param_1,RECT *param_2,int *param_3)

{
  undefined4 uVar1;
  LPCSTR lpString;
  int iVar2;
  DWORD DVar3;
  int nHeight;
  HBRUSH hBrush;
  uint uVar4;
  COLORREF color;
  undefined4 *unaff_FS_OFFSET;
  code *lpOutputFunc;
  undefined4 *lpData;
  int nCount;
  LONG X;
  LONG Y;
  HDC hDC;
  tagTEXTMETRICA local_84;
  tagRECT local_4c;
  undefined4 local_3c;
  undefined2 local_38;
  int local_34;
  int local_30;
  LPCSTR local_2c;
  tagRECT local_24;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001260c;
  uStack_10 = (undefined2)*unaff_FS_OFFSET;
  uStack_e = (undefined2)((uint)*unaff_FS_OFFSET >> 0x10);
  *unaff_FS_OFFSET = &uStack_10;
  Ordinal_486();
  local_8 = 0;
  uVar1 = Ordinal_3524();
  Ordinal_760(uVar1);
  lpString = (LPCSTR)Ordinal_2557(1);
  iVar2 = lstrlenA(lpString);
  if (iVar2 < 1) goto LAB_100123d7;
  CopyRect(&local_24,param_2);
  GetTextMetricsA(*(HDC *)(param_1 + 4),&local_84);
  if (*(short *)((int)this + 0x234) == 0) {
    local_24.left = local_24.left + 0x10;
    local_12 = 0x24;
  }
  else {
    local_24.right = local_24.right + -0x10;
    local_12 = 0x26;
  }
  iVar2 = Ordinal_2728();
  if (iVar2 == 0) {
    iVar2 = Ordinal_1400();
    if (iVar2 == 0) goto LAB_10012514;
    DVar3 = GetSysColor(0x11);
    if (DVar3 == 0) {
LAB_100124b6:
      Ordinal_3523();
      local_3c = Ordinal_2795();
      local_38 = local_12;
      iVar2 = local_24.right - local_24.left;
      nHeight = local_24.bottom - local_24.top;
      lpData = &local_3c;
      nCount = 0;
      lpOutputFunc = GrayStringCallback;
      X = local_24.left;
      Y = local_24.top;
      local_34 = iVar2;
      local_30 = nHeight;
      local_2c = lpString;
      hBrush = (HBRUSH)GetStockObject(4);
      GrayStringA(*(HDC *)(param_1 + 4),hBrush,lpOutputFunc,(LPARAM)lpData,nCount,X,Y,iVar2,nHeight)
      ;
    }
    else {
      DVar3 = GetSysColor(0x11);
      if (DVar3 == 0xc0c0c0) goto LAB_100124b6;
      DVar3 = GetSysColor(0x11);
      local_2c = (LPCSTR)SetTextColor(*(HDC *)(param_1 + 4),DVar3);
      FUN_1000abf0(param_1,lpString,&local_24,*(undefined2 *)((int)this + 0x23c),
                   CONCAT22(uStack_10,local_12),0,param_3);
      SetTextColor(*(HDC *)(param_1 + 4),(COLORREF)local_2c);
    }
  }
  else {
LAB_10012514:
    uVar4 = Ordinal_2801();
    color = FUN_1000b440(uVar4);
    SetTextColor(*(HDC *)(param_1 + 4),color);
    FUN_1000abf0(param_1,lpString,&local_24,*(undefined2 *)((int)this + 0x23c),
                 CONCAT22(uStack_10,local_12),0,param_3);
  }
  if (*(int *)((int)this + 0x240) != 0) {
    local_2c = (LPCSTR)SetTextColor(*(HDC *)(param_1 + 4),0);
    DrawTextA(*(HDC *)(param_1 + 4),lpString,-1,&local_4c,0x420);
    local_24.top = ((-2 - local_84.tmExternalLeading) - local_84.tmHeight) / 2 +
                   (local_24.bottom - local_24.top) / 2;
    local_24.bottom = local_84.tmExternalLeading + local_24.top + local_84.tmHeight + 2;
    if (*(short *)((int)this + 0x234) == 0) {
      hDC = *(HDC *)(param_1 + 4);
      local_24.right = local_24.left + (local_4c.right - local_4c.left);
    }
    else {
      local_24.left = local_24.right - (local_4c.right - local_4c.left);
      hDC = *(HDC *)(param_1 + 4);
    }
    local_24.right = local_24.right + 2;
    local_24.left = local_24.left + -2;
    DrawFocusRect(hDC,&local_24);
    SetTextColor(*(HDC *)(param_1 + 4),(COLORREF)local_2c);
  }
LAB_100123d7:
  local_8 = 0xffffffff;
  FUN_10012616();
  *unaff_FS_OFFSET = CONCAT22(uStack_e,uStack_10);
  return;
}



void FUN_10012616(void)

{
  Ordinal_706();
  return;
}



undefined4 * __fastcall FUN_100128c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



int __thiscall FUN_100128f0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  HINSTANCE pHVar3;
  HBITMAP pHVar4;
  undefined4 *puVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 *unaff_FS_OFFSET;
  char *pcVar6;
  undefined4 *local_18;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10012ef8;
  *unaff_FS_OFFSET = &local_10;
  if ((param_4 == 0) || (param_2 == 0)) {
    if (param_4 == 0) {
LAB_10012c18:
      if (param_2 != 0) {
        if (param_3 == 0) {
          iVar2 = *(int *)((int)this + 4);
          if (iVar2 == 0) {
            puVar5 = (undefined4 *)Ordinal_729(8);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              *puVar5 = &PTR_LAB_10018910;
              *puVar5 = &PTR_LAB_10018940;
              puVar5[1] = 0;
              *puVar5 = &PTR_LAB_10018928;
            }
            local_8 = 0xffffffff;
            *(undefined4 **)((int)this + 4) = puVar5;
            pcVar6 = s_SSCBup2_10020204;
            pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBup2_10020204,2,s_SSCBup2_10020204);
            pHVar4 = LoadBitmapA(pHVar3,pcVar6);
            Ordinal_1426(pHVar4);
            iVar2 = *(int *)((int)this + 4);
          }
        }
        else {
          if (*(int *)((int)this + 0x14) != 0) {
            bVar1 = FUN_100130e0((int)this);
            if (CONCAT31(extraout_var_01,bVar1) == 0) {
              iVar2 = *(int *)((int)this + 0x14);
              goto LAB_10012986;
            }
            FUN_10013160((int *)this);
          }
          local_18 = (undefined4 *)Ordinal_729(8);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            *local_18 = &PTR_LAB_10018910;
            *local_18 = &PTR_LAB_10018940;
            local_18[1] = 0;
            *local_18 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 0x14) = local_18;
          pcVar6 = s_SSCBup2_100201fc;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBup2_100201fc,2,s_SSCBup2_100201fc);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          FUN_10012f10(param_1,*(int *)((int)this + 0x14),param_2);
          iVar2 = *(int *)((int)this + 0x14);
        }
        goto LAB_10012986;
      }
    }
    else {
      if (param_2 == 0) {
        if (param_3 == 0) {
          iVar2 = *(int *)((int)this + 8);
          if (iVar2 == 0) {
            puVar5 = (undefined4 *)Ordinal_729(8);
            if (puVar5 == (undefined4 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              *puVar5 = &PTR_LAB_10018910;
              *puVar5 = &PTR_LAB_10018940;
              puVar5[1] = 0;
              *puVar5 = &PTR_LAB_10018928;
            }
            local_8 = 0xffffffff;
            *(undefined4 **)((int)this + 8) = puVar5;
            pcVar6 = s_SSCBdn1_100201f4;
            pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBdn1_100201f4,2,s_SSCBdn1_100201f4);
            pHVar4 = LoadBitmapA(pHVar3,pcVar6);
            Ordinal_1426(pHVar4);
            iVar2 = *(int *)((int)this + 8);
          }
        }
        else {
          if (*(int *)((int)this + 0x18) != 0) {
            bVar1 = FUN_100130e0((int)this);
            if (CONCAT31(extraout_var_00,bVar1) == 0) {
              iVar2 = *(int *)((int)this + 0x18);
              goto LAB_10012986;
            }
            FUN_10013160((int *)this);
          }
          local_18 = (undefined4 *)Ordinal_729(8);
          if (local_18 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            *local_18 = &PTR_LAB_10018910;
            *local_18 = &PTR_LAB_10018940;
            local_18[1] = 0;
            *local_18 = &PTR_LAB_10018928;
          }
          local_8 = 0xffffffff;
          *(undefined4 **)((int)this + 0x18) = local_18;
          pcVar6 = s_SSCBdn1_100201ec;
          pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBdn1_100201ec,2,s_SSCBdn1_100201ec);
          pHVar4 = LoadBitmapA(pHVar3,pcVar6);
          Ordinal_1426(pHVar4);
          FUN_10012f10(param_1,*(int *)((int)this + 0x18),0);
          iVar2 = *(int *)((int)this + 0x18);
        }
        goto LAB_10012986;
      }
      if (param_4 == 0) goto LAB_10012c18;
    }
    if (param_3 == 0) {
      iVar2 = *(int *)((int)this + 0xc);
      if (iVar2 == 0) {
        puVar5 = (undefined4 *)Ordinal_729(8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = &PTR_LAB_10018910;
          *puVar5 = &PTR_LAB_10018940;
          puVar5[1] = 0;
          *puVar5 = &PTR_LAB_10018928;
        }
        local_8 = 0xffffffff;
        *(undefined4 **)((int)this + 0xc) = puVar5;
        pcVar6 = s_SSCBdn2_10020214;
        pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBdn2_10020214,2,s_SSCBdn2_10020214);
        pHVar4 = LoadBitmapA(pHVar3,pcVar6);
        Ordinal_1426(pHVar4);
        iVar2 = *(int *)((int)this + 0xc);
      }
    }
    else {
      if (*(int *)((int)this + 0x1c) != 0) {
        bVar1 = FUN_100130e0((int)this);
        if (CONCAT31(extraout_var_02,bVar1) == 0) {
          iVar2 = *(int *)((int)this + 0x1c);
          goto LAB_10012986;
        }
        FUN_10013160((int *)this);
      }
      local_18 = (undefined4 *)Ordinal_729(8);
      if (local_18 == (undefined4 *)0x0) {
        local_18 = (undefined4 *)0x0;
      }
      else {
        *local_18 = &PTR_LAB_10018910;
        *local_18 = &PTR_LAB_10018940;
        local_18[1] = 0;
        *local_18 = &PTR_LAB_10018928;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)((int)this + 0x1c) = local_18;
      pcVar6 = s_SSCBdn2_1002020c;
      pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBdn2_1002020c,2,s_SSCBdn2_1002020c);
      pHVar4 = LoadBitmapA(pHVar3,pcVar6);
      Ordinal_1426(pHVar4);
      FUN_10012f10(param_1,*(int *)((int)this + 0x1c),param_2);
      iVar2 = *(int *)((int)this + 0x1c);
    }
    goto LAB_10012986;
  }
  if (param_3 == 0) {
                    // WARNING: Load size is inaccurate
    iVar2 = *this;
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)Ordinal_729(8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_LAB_10018910;
        *puVar5 = &PTR_LAB_10018940;
        puVar5[1] = 0;
        *puVar5 = &PTR_LAB_10018928;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)this = puVar5;
      pcVar6 = s_SSCBup1_100201e4;
      pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBup1_100201e4,2,s_SSCBup1_100201e4);
      pHVar4 = LoadBitmapA(pHVar3,pcVar6);
      Ordinal_1426(pHVar4);
                    // WARNING: Load size is inaccurate
      iVar2 = *this;
    }
    goto LAB_10012986;
  }
  if (*(int *)((int)this + 0x10) == 0) {
LAB_10012946:
    local_18 = (undefined4 *)Ordinal_729(8);
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      *local_18 = &PTR_LAB_10018910;
      *local_18 = &PTR_LAB_10018940;
      local_18[1] = 0;
      *local_18 = &PTR_LAB_10018928;
    }
    local_8 = 0xffffffff;
    *(undefined4 **)((int)this + 0x10) = local_18;
    pcVar6 = s_SSCBup1_100201dc;
    pHVar3 = (HINSTANCE)Ordinal_1014(s_SSCBup1_100201dc,2,s_SSCBup1_100201dc);
    pHVar4 = LoadBitmapA(pHVar3,pcVar6);
    Ordinal_1426(pHVar4);
    FUN_10012f10(param_1,*(int *)((int)this + 0x10),param_2);
  }
  else {
    bVar1 = FUN_100130e0((int)this);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_10013160((int *)this);
      goto LAB_10012946;
    }
  }
  iVar2 = *(int *)((int)this + 0x10);
LAB_10012986:
  *unaff_FS_OFFSET = local_10;
  return iVar2;
}



void FUN_10012f10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  COLORREF CVar3;
  uint uVar4;
  int iVar5;
  HDC pHVar6;
  int y;
  int x;
  undefined4 *unaff_FS_OFFSET;
  int local_48 [11];
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100130c7;
  *unaff_FS_OFFSET = &local_10;
  pHVar6 = (HDC)0x0;
  Ordinal_314();
  local_8 = 0;
  FUN_1000d050(local_48,1,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_1 != 0) {
    pHVar6 = *(HDC *)(param_1 + 4);
  }
  pHVar6 = CreateCompatibleDC(pHVar6);
  Ordinal_1425(pHVar6);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  y = 0;
  Ordinal_5121(local_1c,uVar1);
  do {
    x = 0;
    do {
      DVar2 = FUN_1000d3b0(local_48);
      if ((DVar2 != 0xc0c0c0) && (CVar3 = GetPixel(local_1c,x,y), CVar3 == 0xc0c0c0))
      goto LAB_10013076;
      uVar4 = FUN_1000d3d0(local_48);
      if ((uVar4 == 0x808080) || (CVar3 = GetPixel(local_1c,x,y), CVar3 != 0x808080)) {
        DVar2 = FUN_1000d400(local_48);
        if ((DVar2 != 0xffffff) && (CVar3 = GetPixel(local_1c,x,y), CVar3 == 0xffffff)) {
          CVar3 = FUN_1000d400(local_48);
          goto LAB_1001307b;
        }
        iVar5 = FUN_1000d420();
        if ((iVar5 != 0) && (CVar3 = GetPixel(local_1c,x,y), CVar3 == 0)) {
          CVar3 = FUN_1000d420();
          goto LAB_1001307b;
        }
        CVar3 = GetPixel(local_1c,x,y);
        if (CVar3 == 0xff) {
          if (param_3 == 0) {
LAB_10013076:
            CVar3 = FUN_1000d3b0(local_48);
          }
          else {
            CVar3 = FUN_1000d450(local_48);
          }
          goto LAB_1001307b;
        }
        CVar3 = GetPixel(local_1c,x,y);
        if (CVar3 == 0xff0000) {
          if (param_3 == 0) goto LAB_10013076;
          CVar3 = FUN_1000d430(local_48);
          goto LAB_1001307b;
        }
      }
      else {
        CVar3 = FUN_1000d3d0(local_48);
LAB_1001307b:
        SetPixel(local_1c,x,y,CVar3);
      }
      x = x + 1;
    } while (x < 0xd);
    y = y + 1;
    if (0xc < y) {
      local_8 = local_8 & 0xffffff00;
      FUN_100130bf();
      local_8 = 0xffffffff;
      FUN_100130d1();
      *unaff_FS_OFFSET = local_10;
      return;
    }
  } while( true );
}



void FUN_100130bf(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x44);
  return;
}



void FUN_100130d1(void)

{
  Ordinal_569();
  return;
}



bool __fastcall FUN_100130e0(int param_1)

{
  DWORD DVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  DVar1 = GetSysColor(0xf);
  bVar2 = *(DWORD *)(param_1 + 0x20) != DVar1;
  if (bVar2) {
    *(DWORD *)(param_1 + 0x20) = DVar1;
  }
  DVar1 = GetSysColor(0x10);
  bVar3 = *(DWORD *)(param_1 + 0x24) != DVar1;
  if (bVar3) {
    *(DWORD *)(param_1 + 0x24) = DVar1;
  }
  DVar1 = GetSysColor(0x14);
  bVar4 = *(DWORD *)(param_1 + 0x28) != DVar1;
  if (bVar4) {
    *(DWORD *)(param_1 + 0x28) = DVar1;
  }
  DVar1 = GetSysColor(6);
  bVar5 = *(DWORD *)(param_1 + 0x2c) != DVar1;
  if (bVar5) {
    *(DWORD *)(param_1 + 0x2c) = DVar1;
  }
  DVar1 = GetSysColor(5);
  bVar6 = *(DWORD *)(param_1 + 0x30) != DVar1;
  if (bVar6) {
    *(DWORD *)(param_1 + 0x30) = DVar1;
  }
  DVar1 = GetSysColor(8);
  bVar7 = *(DWORD *)(param_1 + 0x34) != DVar1;
  if (bVar7) {
    *(DWORD *)(param_1 + 0x34) = DVar1;
  }
  return bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || bVar2))));
}



void __fastcall FUN_10013160(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))(1);
    *param_1 = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))(1);
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))(1);
    param_1[2] = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))(1);
    param_1[3] = 0;
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))(1);
    param_1[4] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))(1);
    param_1[5] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))(1);
    param_1[6] = 0;
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))(1);
    param_1[7] = 0;
  }
  return;
}



void FUN_10013579(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_100135a0(void *this,byte param_1)

{
  FUN_10011490((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_100136a0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_100136f8;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_1001b1b0,&PTR_s_CSSPNPropPage_10020220,0,"Threed.CSSPNPropPage");
  _DAT_10020d38 = &PTR_LAB_1001b1c0;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10013710(void)

{
  FUN_10017840((_onexit_t)&LAB_10013720);
  return;
}



void FUN_1001376b(void)

{
  Ordinal_651();
  return;
}



void FUN_10013b59(void)

{
  Ordinal_651();
  return;
}



void FUN_10013bcc(void)

{
  Ordinal_706();
  return;
}



void FUN_10013be4(void)

{
  FUN_10001500();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10013df0(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10013e48;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_403(&DAT_1001b6b0,&PTR_s_CSSFRCtrl_100202c0,0,"Threed.SSFrame");
  _DAT_10020dd8 = &PTR_LAB_1001b708;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10013e60(void)

{
  FUN_10017840((_onexit_t)&LAB_10013e70);
  return;
}



void FUN_10013ebb(void)

{
  Ordinal_651();
  return;
}



void __fastcall FUN_100140f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_10014166;
  *param_1 = &PTR_LAB_1001b770;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_1001414a();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_10014158();
  local_8 = 0xffffffff;
  FUN_10014170();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1001414a(void)

{
  Ordinal_665();
  return;
}



void FUN_10014158(void)

{
  FUN_10016230();
  return;
}



void FUN_10014170(void)

{
  Ordinal_632();
  return;
}



void FUN_10014361(void)

{
  int unaff_EBP;
  
  FUN_1000d080(unaff_EBP + -0x4c);
  return;
}



void FUN_100144f8(void)

{
  Ordinal_569();
  return;
}



void FUN_10014500(void)

{
  Ordinal_569();
  return;
}



void FUN_10014522(void)

{
  int unaff_EBP;
  
  FUN_10003e20((undefined4 *)(unaff_EBP + -0x14));
  return;
}



void FUN_100146be(void)

{
  FUN_10003c30();
  return;
}



void FUN_10014733(void)

{
  Ordinal_706();
  return;
}



undefined4 __fastcall FUN_10014790(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24c);
}



void __thiscall
FUN_10014c70(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  HGDIOBJ pvVar1;
  int y;
  int x;
  
  pvVar1 = (HGDIOBJ)FUN_1000d190(param_6);
  pvVar1 = SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  if (*(short *)((int)this + 0x23e) == 0) {
    param_2 = param_2 + 1;
    x = param_4 + -1;
    param_3 = param_3 + 1;
    y = param_5 + -1;
  }
  else {
    x = param_4 + -2;
    y = param_5 + -2;
  }
  MoveToEx(*(HDC *)(param_1 + 4),param_2,param_3,(LPPOINT)0x0);
  LineTo(*(HDC *)(param_1 + 4),param_2,y);
  LineTo(*(HDC *)(param_1 + 4),x,y);
  LineTo(*(HDC *)(param_1 + 4),x,param_3);
  LineTo(*(HDC *)(param_1 + 4),param_2,param_3);
  SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  return;
}



void __thiscall
FUN_10014d30(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  HGDIOBJ pvVar1;
  int y;
  int x;
  
  pvVar1 = (HGDIOBJ)FUN_1000d130(param_6);
  pvVar1 = SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  if (*(short *)((int)this + 0x23e) == 0) {
    MoveToEx(*(HDC *)(param_1 + 4),param_2,param_5 + -1,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 4),param_2,param_3);
    x = param_4 + -2;
    LineTo(*(HDC *)(param_1 + 4),param_4,param_3);
    MoveToEx(*(HDC *)(param_1 + 4),param_2 + 2,param_5 + -2,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 4),x,param_5 + -2);
    y = param_3 + 1;
  }
  else {
    MoveToEx(*(HDC *)(param_1 + 4),param_2 + 1,param_5 + -3,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 4),param_2 + 1,param_3 + 1);
    x = param_4 + -1;
    LineTo(*(HDC *)(param_1 + 4),param_4 + -2,param_3 + 1);
    MoveToEx(*(HDC *)(param_1 + 4),param_2,param_5 + -1,(LPPOINT)0x0);
    LineTo(*(HDC *)(param_1 + 4),x,param_5 + -1);
    y = param_3 + -1;
  }
  LineTo(*(HDC *)(param_1 + 4),x,y);
  SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  return;
}



void FUN_10014e60(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  short sVar1;
  undefined4 uVar2;
  LPCSTR lpString;
  int iVar3;
  DWORD DVar4;
  HBRUSH pHVar5;
  int nWidth;
  int nHeight;
  uint uVar6;
  COLORREF color;
  uint uVar7;
  undefined4 *unaff_FS_OFFSET;
  code *lpOutputFunc;
  undefined4 *lpData;
  int nCount;
  int iVar8;
  INT *lpnTabStopPositions;
  undefined4 local_2c;
  undefined2 local_28;
  int local_24;
  int local_20;
  LPCSTR local_1c;
  COLORREF local_18;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100150ef;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_486();
  local_8 = 0;
  uVar2 = Ordinal_3524();
  Ordinal_760(uVar2);
  lpString = (LPCSTR)Ordinal_2557(1);
  iVar3 = lstrlenA(lpString);
  if (iVar3 < 1) goto LAB_10014ebb;
  lpnTabStopPositions = (INT *)0x0;
  iVar8 = 0;
  iVar3 = lstrlenA(lpString);
  DVar4 = GetTabbedTextExtentA(*(HDC *)(param_1 + 4),lpString,iVar3,iVar8,lpnTabStopPositions);
  local_18 = 0xfffffff6;
  uVar7 = DVar4 & 0xffff;
  param_3 = param_3 + (int)((longlong)(ulonglong)((DVar4 >> 0x10) * 3) / -10);
  param_5 = (DVar4 >> 0x10) + param_3 + 1;
  sVar1 = *(short *)(local_1c + 0x238);
  if (sVar1 == 1) {
    param_4 = param_4 + -7;
    iVar3 = param_2 + 7;
    param_2 = param_4 - uVar7;
    if ((int)(param_4 - uVar7) < iVar3) {
      param_2 = iVar3;
    }
  }
  else if (sVar1 == 2) {
    if ((param_4 - param_2) + -0xe < (int)uVar7) {
      param_2 = param_2 + 7;
      param_4 = param_4 + -7;
    }
    else {
      param_2 = param_2 + (int)(((param_4 - param_2) - uVar7) + -0xe) / 2 + 7;
      iVar3 = uVar7 + param_2;
LAB_10014f86:
      param_4 = iVar3;
    }
  }
  else {
    param_2 = param_2 + 7;
    iVar3 = uVar7 + param_2;
    param_4 = param_4 + -7;
    if (iVar3 <= param_4) goto LAB_10014f86;
  }
  if (sVar1 == 1) {
    uVar7 = CONCAT22((short)((uint)param_5 >> 0x10),0x26);
  }
  else {
    uVar7 = (sVar1 == 2) + 0x24;
  }
  param_2 = param_2 + -2;
  param_4 = param_4 + 2;
  pHVar5 = (HBRUSH)FUN_1000d240(param_6);
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_2,pHVar5);
  param_2 = param_2 + 2;
  param_4 = param_4 + -2;
  iVar3 = FUN_10014790((int)local_1c);
  if ((iVar3 == 0) && (iVar3 = Ordinal_1400(), iVar3 != 0)) {
    DVar4 = GetSysColor(0x11);
    if ((DVar4 == 0) || (DVar4 = GetSysColor(0x11), DVar4 == 0xc0c0c0)) {
      Ordinal_3523();
      local_2c = Ordinal_2795();
      local_28 = (undefined2)uVar7;
      nWidth = param_4 - param_2;
      nHeight = param_5 - param_3;
      lpData = &local_2c;
      nCount = 0;
      lpOutputFunc = GrayStringCallback;
      iVar3 = param_2;
      iVar8 = param_3;
      local_24 = nWidth;
      local_20 = nHeight;
      local_1c = lpString;
      pHVar5 = (HBRUSH)GetStockObject(4);
      GrayStringA(*(HDC *)(param_1 + 4),pHVar5,lpOutputFunc,(LPARAM)lpData,nCount,iVar3,iVar8,nWidth
                  ,nHeight);
    }
    else {
      DVar4 = GetSysColor(0x11);
      local_18 = SetTextColor(*(HDC *)(param_1 + 4),DVar4);
      FUN_1000abf0(param_1,lpString,(LPRECT)&param_2,*(undefined2 *)(local_1c + 0x23c),uVar7,0,
                   param_6);
      SetTextColor(*(HDC *)(param_1 + 4),local_18);
    }
  }
  else {
    uVar6 = Ordinal_2801();
    color = FUN_1000b440(uVar6);
    SetTextColor(*(HDC *)(param_1 + 4),color);
    FUN_1000abf0(param_1,lpString,(LPRECT)&param_2,*(undefined2 *)(local_1c + 0x23c),uVar7,0,param_6
                );
  }
LAB_10014ebb:
  local_8 = 0xffffffff;
  FUN_100150f9();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_100150f9(void)

{
  Ordinal_706();
  return;
}



void FUN_10015679(void)

{
  Ordinal_651();
  return;
}



undefined4 * __thiscall FUN_100156a0(void *this,byte param_1)

{
  FUN_100140f0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (undefined4 *)this;
}



void __cdecl FUN_100156c0(int param_1,int param_2)

{
  HDC pHVar1;
  
  pHVar1 = (HDC)0x0;
  if (param_2 != 0) {
    pHVar1 = *(HDC *)(param_2 + 8);
  }
  FUN_10016ba0(pHVar1,param_1);
  return;
}



void __cdecl FUN_100156e0(int param_1,int param_2)

{
  HDC pHVar1;
  
  pHVar1 = (HDC)0x0;
  if (param_2 != 0) {
    pHVar1 = *(HDC *)(param_2 + 8);
  }
  FUN_10016c40(pHVar1,param_1);
  return;
}



void __cdecl FUN_10015700(int param_1,int param_2)

{
  HDC pHVar1;
  
  pHVar1 = (HDC)0x0;
  if (param_2 != 0) {
    pHVar1 = *(HDC *)(param_2 + 8);
  }
  FUN_10016bf0(pHVar1,param_1);
  return;
}



void __cdecl FUN_10015720(int param_1,int param_2)

{
  HDC pHVar1;
  
  if (param_2 == 0) {
    pHVar1 = (HDC)0x0;
  }
  else {
    pHVar1 = *(HDC *)(param_2 + 8);
  }
  FUN_10016c90(pHVar1,param_1);
  return;
}



int __cdecl FUN_10015740(int param_1,int param_2)

{
  longlong lVar1;
  HDC pHVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100157f1;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  if (param_2 == 0) {
    pHVar2 = CreateICA(s_Display_100204f8,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    Ordinal_1425(pHVar2);
  }
  else {
    local_1c = *(HDC *)(param_2 + 8);
  }
  iVar3 = GetDeviceCaps(local_1c,0x58);
  if ((iVar3 == 0) && (iVar3 = DAT_100204c8, DAT_100204c8 == 0)) {
    DAT_100204c8 = 0x60;
    iVar3 = DAT_100204c8;
  }
  DAT_100204c8 = iVar3;
  lVar1 = (longlong)DAT_100204c8;
  local_8 = 0xffffffff;
  FUN_100157fb();
  *unaff_FS_OFFSET = local_10;
  return (int)(0x5a0 / lVar1) * param_1;
}



void FUN_100157fb(void)

{
  Ordinal_569();
  return;
}



int __cdecl FUN_10015810(int param_1,int param_2)

{
  longlong lVar1;
  HDC pHVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_100158c1;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  if (param_2 == 0) {
    pHVar2 = CreateICA(s_Display_10020500,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    Ordinal_1425(pHVar2);
  }
  else {
    local_1c = *(HDC *)(param_2 + 8);
  }
  iVar3 = GetDeviceCaps(local_1c,0x5a);
  if ((iVar3 == 0) && (iVar3 = DAT_100204cc, DAT_100204cc == 0)) {
    DAT_100204cc = 0x60;
    iVar3 = DAT_100204cc;
  }
  DAT_100204cc = iVar3;
  lVar1 = (longlong)DAT_100204cc;
  local_8 = 0xffffffff;
  FUN_100158cb();
  *unaff_FS_OFFSET = local_10;
  return (int)(0x5a0 / lVar1) * param_1;
}



void FUN_100158cb(void)

{
  Ordinal_569();
  return;
}



int __cdecl FUN_100158e0(int param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10015995;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  if (param_2 == 0) {
    pHVar1 = CreateICA(s_Display_10020508,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    Ordinal_1425(pHVar1);
  }
  else {
    local_1c = *(HDC *)(param_2 + 8);
  }
  iVar2 = GetDeviceCaps(local_1c,0x58);
  if ((iVar2 == 0) && (iVar2 = DAT_100204c8, DAT_100204c8 == 0)) {
    DAT_100204c8 = 0x60;
    iVar2 = DAT_100204c8;
  }
  DAT_100204c8 = iVar2;
  local_8 = 0xffffffff;
  iVar2 = (int)(0x5a0 / (longlong)DAT_100204c8);
  FUN_1001599f();
  *unaff_FS_OFFSET = local_10;
  return (iVar2 / 2 + param_1) / iVar2;
}



void FUN_1001599f(void)

{
  Ordinal_569();
  return;
}



int __cdecl FUN_100159b0(int param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  HDC local_1c;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10015a65;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_314();
  local_8 = 0;
  if (param_2 == 0) {
    pHVar1 = CreateICA(s_Display_10020510,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
    Ordinal_1425(pHVar1);
  }
  else {
    local_1c = *(HDC *)(param_2 + 8);
  }
  iVar2 = GetDeviceCaps(local_1c,0x5a);
  if ((iVar2 == 0) && (iVar2 = DAT_100204cc, DAT_100204cc == 0)) {
    DAT_100204cc = 0x60;
    iVar2 = DAT_100204cc;
  }
  DAT_100204cc = iVar2;
  local_8 = 0xffffffff;
  iVar2 = (int)(0x5a0 / (longlong)DAT_100204cc);
  FUN_10015a6f();
  *unaff_FS_OFFSET = local_10;
  return (iVar2 / 2 + param_1) / iVar2;
}



void FUN_10015a6f(void)

{
  Ordinal_569();
  return;
}



undefined4 __cdecl FUN_10015b40(int param_1,LPSTR param_2,DWORD param_3)

{
  DWORD DVar1;
  char *lpKeyName;
  
  lpKeyName = s_VB_HLP_10020518;
  if (param_1 == 0) {
    lpKeyName = s_CTRLREF_HLP_10020520;
  }
  DVar1 = GetPrivateProfileStringA
                    (s_Files_1002053c,lpKeyName,&DAT_10020538,param_2,param_3,s_WinHelp_Ini_1002052c
                    );
  if (DVar1 != 0) {
    if (param_2[DVar1 - 1] == '\\') {
      param_2[DVar1 - 1] = '\0';
    }
    return 1;
  }
  return 0;
}



undefined4 * __thiscall FUN_10015c10(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &DAT_10015c7d;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_406(param_1,param_2);
  *(undefined ***)this = &PTR_LAB_1001b940;
  *(undefined4 *)((int)this + 0xd8) = param_2;
  if (param_3 == 0) {
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return (undefined4 *)this;
}



undefined4 __fastcall FUN_10015c90(int param_1)

{
  char cVar1;
  int iVar2;
  LPCOLESTR szFile;
  HRESULT HVar3;
  LPCSTR lpszHelp;
  size_t sVar4;
  char *pcVar5;
  CHAR *lpFilename;
  DWORD nSize;
  CHAR local_114 [260];
  ULONG_PTR local_10;
  wchar_t *local_c;
  ITypeLib *local_8;
  
  lpFilename = local_114;
  nSize = 0x104;
  iVar2 = Ordinal_1035();
  GetModuleFileNameA(*(HMODULE *)(iVar2 + 0xc),lpFilename,nSize);
  iVar2 = -1;
  pcVar5 = local_114;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_10017860();
  szFile = (LPCOLESTR)Ordinal_974();
  HVar3 = LoadTypeLib(szFile,&local_8);
  if (HVar3 < 0) {
    Ordinal_3714(s_Help_not_available__10020544,0,0);
  }
  else {
    (*local_8->lpVtbl->GetDocumentation)(local_8,-1,(BSTR *)0x0,(BSTR *)0x0,&local_10,&local_c);
    lpszHelp = (LPCSTR)0x0;
    if (local_c != (wchar_t *)0x0) {
      sVar4 = wcslen(local_c);
      FUN_10017860();
      lpszHelp = (LPCSTR)Ordinal_1366(&stack0xfffffed8,local_c,sVar4 * 2 + 2);
    }
    WinHelpA(*(HWND *)(param_1 + 0x20),lpszHelp,1,local_10);
    SysFreeString(local_c);
  }
  (*local_8->lpVtbl->Release)(local_8);
  return 1;
}



void FUN_10015e5c(void)

{
  Ordinal_706();
  return;
}



void FUN_10015ec9(void)

{
  Ordinal_654();
  return;
}



// WARNING: Removing unreachable block (ram,0x10016010)

int FUN_10015ee0(void)

{
  byte bVar1;
  HMODULE hModule;
  int iVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  DWORD DVar3;
  LSTATUS LVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *local_d8;
  HKEY pHStack_d4;
  HKEY pHStack_d0;
  LONG local_cc;
  byte *apbStack_c8 [50];
  
  local_cc = 200;
  iVar6 = 0;
  local_d8 = (byte *)0x0;
  Ordinal_1035();
  iVar2 = Ordinal_1035();
  hModule = *(HMODULE *)(iVar2 + 8);
  hResInfo = FindResourceA(hModule,(LPCSTR)0x2,s_MSCONTROLS_10020558);
  pbVar8 = apbStack_c8[0];
  if ((hResInfo != (HRSRC)0x0) &&
     (hResData = LoadResource(hModule,hResInfo), pbVar8 = apbStack_c8[0], hResData != (HGLOBAL)0x0))
  {
    local_d8 = (byte *)LockResource(hResData);
    DVar3 = SizeofResource(hModule,hResInfo);
    pbVar8 = local_d8 + (DVar3 - 1);
    bVar1 = *pbVar8;
    while ((bVar1 != 0 && (pbVar8 != local_d8))) {
      pbVar8 = pbVar8 + -1;
      bVar1 = *pbVar8;
    }
  }
  if ((local_d8 != (byte *)0x0) &&
     (LVar4 = RegOpenKeyA((HKEY)&DAT_80000000,s_Licenses_10020564,&pHStack_d4), LVar4 == 0)) {
    LVar4 = RegQueryValueA(pHStack_d4,(LPCSTR)0x0,(LPSTR)apbStack_c8,&local_cc);
    pcVar7 = RegCloseKey_exref;
    if ((LVar4 == 0) &&
       (iVar2 = lstrcmpA(s_Licensing__Copying_the_keys_may_b_10020570,(LPCSTR)apbStack_c8),
       pcVar7 = RegCloseKey_exref, iVar2 == 0)) {
      while (*local_d8 != 0) {
        LVar4 = RegOpenKeyA(pHStack_d4,(LPCSTR)local_d8,&pHStack_d0);
        if (LVar4 == 0) {
          uVar5 = FUN_10016060(pHStack_d0,local_d8,(char *)apbStack_c8);
          if (uVar5 != 0) {
            iVar6 = 1;
          }
          RegCloseKey(pHStack_d0);
        }
        if (iVar6 != 0) break;
        FUN_10016030((int *)&local_d8,(int)pbVar8);
      }
    }
    (*pcVar7)(pHStack_d4);
  }
  return iVar6;
}



int __cdecl FUN_10016030(int *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  cVar1 = *(char *)*param_1;
  while ((cVar1 != '\0' && (param_2 != *param_1))) {
    pcVar2 = (char *)(*param_1 + 1);
    *param_1 = (int)pcVar2;
    cVar1 = *pcVar2;
  }
  if (param_2 == *param_1) {
    return 0;
  }
  iVar3 = *param_1 + 1;
  *param_1 = iVar3;
  return iVar3;
}



uint __cdecl FUN_10016060(HKEY param_1,byte *param_2,char *param_3)

{
  LSTATUS LVar1;
  int iVar2;
  int iStack_cc;
  uint auStack_c8 [50];
  
  iStack_cc = lstrlenA((LPCSTR)param_2);
  iStack_cc = iStack_cc + 1;
  if (iStack_cc < 9) {
    return 0;
  }
  FUN_100160f0(param_2,param_3,(byte *)auStack_c8);
  LVar1 = RegQueryValueA(param_1,(LPCSTR)0x0,(LPSTR)auStack_c8,&iStack_cc);
  if (LVar1 == 0) {
    iVar2 = lstrcmpA((LPCSTR)auStack_c8,param_3);
    return (uint)(iVar2 == 0);
  }
  return auStack_c8[0];
}



uint __cdecl FUN_100160f0(byte *param_1,char *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  
  uVar8 = 0;
  lstrcpyA((LPSTR)param_3,(LPCSTR)param_1);
  _mbsrev(param_3);
  bVar1 = *param_3;
  pbVar7 = param_3;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  pbVar7 = pbVar7 + -1;
  bVar1 = *param_1;
  pbVar5 = param_1;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  pbVar9 = param_3;
  if (param_1 < pbVar5 + -1) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar9;
      *pbVar9 = bVar1 ^ bVar2;
      pbVar9 = pbVar9 + 1;
      uVar8 = uVar8 + (int)(char)(bVar1 ^ bVar2);
    } while (param_1 < pbVar5 + -1);
  }
  pbVar5 = param_3;
  if (param_3 < pbVar7) {
    do {
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + -1;
    } while (pbVar5 < pbVar7);
  }
  uVar4 = uVar8 / 10;
  cVar6 = (char)((ulonglong)uVar8 % 10) + 'a';
  pcVar10 = param_2;
  if (param_3 <= pbVar5 + -1) {
    do {
      uVar8 = CONCAT31((int3)(uVar4 >> 8),*param_3) & 0xffffff0f;
      param_2 = pcVar10 + 2;
      pbVar7 = param_3 + 1;
      *pcVar10 = (char)uVar8 + cVar6;
      cVar3 = ((char)*param_3 >> 4) + cVar6;
      uVar4 = CONCAT31((int3)(uVar8 >> 8),cVar3);
      pcVar10[1] = cVar3;
      pcVar10 = param_2;
      param_3 = pbVar7;
    } while (pbVar7 <= pbVar5 + -1);
  }
  *param_2 = '\0';
  return uVar4;
}



void FUN_10016230(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  puStack_c = &LAB_1001629a;
  *unaff_FS_OFFSET = &local_10;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_10016284();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_1001628f();
  local_8 = 0xffffffff;
  FUN_100162a4();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10016284(void)

{
  Ordinal_615();
  return;
}



void FUN_1001628f(void)

{
  Ordinal_706();
  return;
}



void FUN_100162a4(void)

{
  Ordinal_706();
  return;
}



void __thiscall FUN_100162b0(void *this,undefined4 param_1)

{
  ushort uVar1;
  
  if (*(int *)((int)this + 0x28) == 0) {
    *(undefined4 *)((int)this + 0x24) = param_1;
    uVar1 = Ordinal_1394();
    FUN_100162e0(this,uVar1);
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  return;
}



void __thiscall FUN_100162e0(void *this,ushort param_1)

{
  FUN_100163c0(param_1);
  FUN_10016300((undefined4 *)this);
  return;
}



void __fastcall FUN_10016300(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_28 [8];
  short *local_20;
  int local_1c;
  short *local_18;
  uint local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_100163a4;
  *unaff_FS_OFFSET = &local_10;
  FUN_100165d0(local_28,param_1);
  local_8 = 0;
  if (param_1[5] != 0) {
    Ordinal_4952();
  }
  uVar5 = 0;
  local_18 = local_20;
  uVar2 = local_1c - 4;
  local_14 = uVar2;
  if (uVar2 != 0) {
    do {
      if (*local_20 != 0xa5) break;
      piVar3 = (int *)Ordinal_810(CONCAT22((short)(uVar2 >> 0x10),local_20[1]));
      uVar4 = 0xffffffff;
      *piVar3 = uVar5 + 4;
      uVar2 = 0;
      psVar6 = local_20 + 2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        sVar1 = *psVar6;
        psVar6 = (short *)((int)psVar6 + 1);
      } while ((char)sVar1 != '\0');
      uVar5 = uVar5 + 4 + ~uVar4;
      local_20 = (short *)((int)local_18 + uVar5);
    } while (uVar5 < local_14);
  }
  local_8 = 0xffffffff;
  FUN_100163ae();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_100163ae(void)

{
  return;
}



void FUN_100163c0(ushort param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_28 [8];
  ushort *local_20;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_100164bf;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_483(s_VBINTLSZ_LANGMAP_100205d0);
  local_8 = 0;
  FUN_100165d0(local_28,local_18);
  local_8 = CONCAT31(local_8._1_3_,1);
  Ordinal_762(s_VBINTLSZ_ENGLISH_US_100205e4);
  uVar1 = *local_20;
  puVar4 = local_20;
  while (uVar1 != 0) {
    if ((*puVar4 == (param_1 & 0x3ff)) && (puVar4[1] == param_1 >> 10)) {
      Ordinal_762(puVar4 + 2);
      goto LAB_10016474;
    }
    uVar2 = 0xffffffff;
    puVar3 = puVar4 + 2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      uVar1 = *puVar3;
      puVar3 = (ushort *)((int)puVar3 + 1);
    } while ((char)uVar1 != '\0');
    puVar4 = (ushort *)(~uVar2 + 4 + (int)puVar4);
    uVar1 = *puVar4;
  }
  uVar1 = *local_20;
  do {
    if (uVar1 == 0) {
LAB_10016474:
      local_8 = local_8 & 0xffffff00;
      FUN_100164b7();
      local_8 = 0xffffffff;
      FUN_100164c9();
      *unaff_FS_OFFSET = local_10;
      return;
    }
    if (*local_20 == (param_1 & 0x3ff)) {
      Ordinal_762(local_20 + 2);
      goto LAB_10016474;
    }
    uVar2 = 0xffffffff;
    puVar4 = local_20 + 2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      uVar1 = *puVar4;
      puVar4 = (ushort *)((int)puVar4 + 1);
    } while ((char)uVar1 != '\0');
    local_20 = (ushort *)(~uVar2 + 4 + (int)local_20);
    uVar1 = *local_20;
  } while( true );
}



void FUN_100164b7(void)

{
  return;
}



void FUN_100164c9(void)

{
  Ordinal_706();
  return;
}



bool __thiscall FUN_100164e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [8];
  int local_1c;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  puStack_c = &LAB_10016563;
  *unaff_FS_OFFSET = &local_10;
  FUN_100165d0(local_24,(undefined4 *)this);
  local_8 = 0;
  iVar1 = Ordinal_3684(param_1,&local_14);
  if (iVar1 != 0) {
    Ordinal_762(local_1c + local_14);
    local_8 = 0xffffffff;
    FUN_1001656d();
  }
  else {
    local_8 = 0xffffffff;
    FUN_1001656d();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 != 0;
}



void FUN_1001656d(void)

{
  return;
}



void __thiscall FUN_10016580(void *this,uint param_1,undefined4 param_2)

{
  FUN_100165a0(this,param_1 & 0xffff | 0x800a0000,param_2);
  return;
}



void __thiscall FUN_100165a0(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100164e0(this,param_2);
  Ordinal_5550(param_1,*(undefined4 *)((int)this + 4),0);
  return;
}



undefined4 * __thiscall FUN_100165d0(void *this,undefined4 *param_1)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  DWORD DVar3;
  
  iVar1 = Ordinal_1035();
  hModule = *(HMODULE *)(iVar1 + 8);
  *(undefined4 *)this = 1;
  hResInfo = FindResourceA(hModule,(LPCSTR)*param_1,(LPCSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    *(undefined4 *)this = 0;
    return (undefined4 *)this;
  }
  hResData = LoadResource(hModule,hResInfo);
  *(HGLOBAL *)((int)this + 4) = hResData;
  if (hResData == (HGLOBAL)0x0) {
    *(undefined4 *)this = 0;
    return (undefined4 *)this;
  }
  pvVar2 = LockResource(hResData);
  *(LPVOID *)((int)this + 8) = pvVar2;
  DVar3 = SizeofResource(hModule,hResInfo);
  *(DWORD *)((int)this + 0xc) = DVar3;
  return (undefined4 *)this;
}



uint __cdecl FUN_100166a0(ushort param_1)

{
  ushort uVar1;
  HMODULE hModule;
  uint uVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar3;
  undefined2 uVar4;
  short sVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  uVar2 = Ordinal_1035();
  hModule = *(HMODULE *)(uVar2 + 8);
  if (param_1 == 0x409) {
    return uVar2 & 0xffff0000;
  }
  hResInfo = FindResourceA(hModule,s_VBINTLSZ_LANGMAP_100205f8,(LPCSTR)0xa);
  if (hResInfo == (HRSRC)0x0) {
    return 0;
  }
  hResData = LoadResource(hModule,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    return 0;
  }
  puVar3 = (ushort *)LockResource(hResData);
  uVar4 = (undefined2)((uint)puVar3 >> 0x10);
  sVar5 = 0;
  uVar1 = *puVar3;
  puVar7 = puVar3;
  while (uVar1 != 0) {
    if ((*puVar7 == (param_1 & 0x3ff)) && (puVar7[1] == param_1 >> 10)) goto LAB_1001677d;
    uVar2 = 0xffffffff;
    uVar4 = 0;
    puVar6 = puVar7 + 2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      uVar1 = *puVar6;
      puVar6 = (ushort *)((int)puVar6 + 1);
    } while ((char)uVar1 != '\0');
    sVar5 = sVar5 + 1;
    puVar7 = (ushort *)(~uVar2 + 4 + (int)puVar7);
    uVar1 = *puVar7;
  }
  sVar5 = 0;
  uVar1 = *puVar3;
  while (uVar1 != 0) {
    if (*puVar3 == (param_1 & 0x3ff)) goto LAB_1001677d;
    uVar2 = 0xffffffff;
    uVar4 = 0;
    puVar7 = puVar3 + 2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      uVar1 = *puVar7;
      puVar7 = (ushort *)((int)puVar7 + 1);
    } while ((char)uVar1 != '\0');
    sVar5 = sVar5 + 1;
    puVar3 = (ushort *)(~uVar2 + 4 + (int)puVar3);
    uVar1 = *puVar3;
  }
  sVar5 = 0;
LAB_1001677d:
  return CONCAT22(uVar4,sVar5);
}



undefined4 * __thiscall FUN_10016900(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined ***)this = &PTR_LAB_1001ba28;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  return (undefined4 *)this;
}



void __fastcall FUN_10016930(undefined4 *param_1)

{
  int *piVar1;
  LPVOID pv;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_LAB_1001ba28;
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
    if (param_1[4] != 0) {
      puVar3 = (undefined4 *)(param_1[2] + 4);
      do {
        pv = (LPVOID)*puVar3;
        puVar3 = puVar3 + 4;
        uVar2 = uVar2 + 1;
        CoTaskMemFree(pv);
      } while (uVar2 < (uint)param_1[4]);
    }
    Ordinal_731(param_1[2]);
    return;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}



int FUN_10016990(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5] + -1;
  param_1[5] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_10016930(param_1);
      Ordinal_731(param_1);
    }
    iVar1 = 0;
  }
  return iVar1;
}



int FUN_10016ba0(HDC param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  iVar1 = GetDeviceCaps(param_1,0x58);
  iVar1 = MulDiv(0x9ec,param_2,iVar1);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar1;
}



int FUN_10016bf0(HDC param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  iVar1 = GetDeviceCaps(param_1,0x58);
  iVar1 = MulDiv(iVar1,param_2,0x9ec);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar1;
}



int FUN_10016c40(HDC param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  iVar1 = GetDeviceCaps(param_1,0x5a);
  iVar1 = MulDiv(0x9ec,param_2,iVar1);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar1;
}



int FUN_10016c90(HDC param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 == (HDC)0x0;
  if (bVar2) {
    param_1 = GetDC((HWND)0x0);
  }
  iVar1 = GetDeviceCaps(param_1,0x5a);
  iVar1 = MulDiv(iVar1,param_2,0x9ec);
  if (bVar2) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar1;
}



void Ordinal_729(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_729();
  return;
}



void Ordinal_265(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ce6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_265();
  return;
}



void Ordinal_651(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d6a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_651();
  return;
}



void Ordinal_403(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d70. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_403();
  return;
}



void Ordinal_731(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d76. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_731();
  return;
}



void Ordinal_1073(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1073();
  return;
}



void Ordinal_1035(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d82. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1035();
  return;
}



void Ordinal_1084(void)

{
                    // WARNING: Could not recover jumptable at 0x10016d88. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1084();
  return;
}



void Ordinal_4677(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e30. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4677();
  return;
}



void Ordinal_654(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e5a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_654();
  return;
}



void Ordinal_1986(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e60. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1986();
  return;
}



void Ordinal_2064(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e66. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2064();
  return;
}



void Ordinal_1989(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1989();
  return;
}



void Ordinal_2004(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e72. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2004();
  return;
}



void Ordinal_2728(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e90. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2728();
  return;
}



void Ordinal_5461(void)

{
                    // WARNING: Could not recover jumptable at 0x10016e96. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5461();
  return;
}



void Ordinal_5301(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ea2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5301();
  return;
}



void Ordinal_2801(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2801();
  return;
}



void Ordinal_1043(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ec6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1043();
  return;
}



void Ordinal_1071(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1071();
  return;
}



void Ordinal_974(void)

{
                    // WARNING: Could not recover jumptable at 0x10016ed2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_974();
  return;
}



void Ordinal_4110(void)

{
                    // WARNING: Could not recover jumptable at 0x10016f86. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4110();
  return;
}



void Ordinal_4079(void)

{
                    // WARNING: Could not recover jumptable at 0x10016fb6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4079();
  return;
}



void Ordinal_632(void)

{
                    // WARNING: Could not recover jumptable at 0x10017034. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_632();
  return;
}



void Ordinal_665(void)

{
                    // WARNING: Could not recover jumptable at 0x1001703a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_665();
  return;
}



void Ordinal_3530(void)

{
                    // WARNING: Could not recover jumptable at 0x10017052. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3530();
  return;
}



void Ordinal_1394(void)

{
                    // WARNING: Could not recover jumptable at 0x10017058. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1394();
  return;
}



void Ordinal_1868(void)

{
                    // WARNING: Could not recover jumptable at 0x1001705e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1868();
  return;
}



void Ordinal_4737(void)

{
                    // WARNING: Could not recover jumptable at 0x10017064. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4737();
  return;
}



void Ordinal_267(void)

{
                    // WARNING: Could not recover jumptable at 0x1001706a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_267();
  return;
}



void Ordinal_4740(void)

{
                    // WARNING: Could not recover jumptable at 0x10017070. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4740();
  return;
}



void Ordinal_4724(void)

{
                    // WARNING: Could not recover jumptable at 0x10017076. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4724();
  return;
}



void Ordinal_3523(void)

{
                    // WARNING: Could not recover jumptable at 0x1001707c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3523();
  return;
}



void Ordinal_2223(void)

{
                    // WARNING: Could not recover jumptable at 0x10017082. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2223();
  return;
}



void Ordinal_2378(void)

{
                    // WARNING: Could not recover jumptable at 0x10017088. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2378();
  return;
}



void Ordinal_1359(void)

{
                    // WARNING: Could not recover jumptable at 0x1001708e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1359();
  return;
}



void Ordinal_706(void)

{
                    // WARNING: Could not recover jumptable at 0x10017094. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_706();
  return;
}



void Ordinal_1391(void)

{
                    // WARNING: Could not recover jumptable at 0x1001709a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1391();
  return;
}



void Ordinal_4403(void)

{
                    // WARNING: Could not recover jumptable at 0x100170a0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4403();
  return;
}



void Ordinal_2227(void)

{
                    // WARNING: Could not recover jumptable at 0x100170a6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2227();
  return;
}



void Ordinal_569(void)

{
                    // WARNING: Could not recover jumptable at 0x100170be. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_569();
  return;
}



void Ordinal_2106(void)

{
                    // WARNING: Could not recover jumptable at 0x100170c4. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2106();
  return;
}



void Ordinal_2115(void)

{
                    // WARNING: Could not recover jumptable at 0x100170ca. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2115();
  return;
}



void Ordinal_5121(void)

{
                    // WARNING: Could not recover jumptable at 0x100170d0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5121();
  return;
}



void Ordinal_1426(void)

{
                    // WARNING: Could not recover jumptable at 0x100170d6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1426();
  return;
}



void Ordinal_1425(void)

{
                    // WARNING: Could not recover jumptable at 0x100170dc. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1425();
  return;
}



void Ordinal_2635(void)

{
                    // WARNING: Could not recover jumptable at 0x100170e2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2635();
  return;
}



void Ordinal_314(void)

{
                    // WARNING: Could not recover jumptable at 0x100170e8. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_314();
  return;
}



void Ordinal_3010(void)

{
                    // WARNING: Could not recover jumptable at 0x100170ee. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3010();
  return;
}



void Ordinal_1400(void)

{
                    // WARNING: Could not recover jumptable at 0x100170f4. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1400();
  return;
}



void Ordinal_5341(void)

{
                    // WARNING: Could not recover jumptable at 0x100170fa. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5341();
  return;
}



void Ordinal_1456(void)

{
                    // WARNING: Could not recover jumptable at 0x10017100. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1456();
  return;
}



void Ordinal_3049(void)

{
                    // WARNING: Could not recover jumptable at 0x10017106. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3049();
  return;
}



void Ordinal_3335(void)

{
                    // WARNING: Could not recover jumptable at 0x1001710c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3335();
  return;
}



void Ordinal_5389(void)

{
                    // WARNING: Could not recover jumptable at 0x10017112. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5389();
  return;
}



void Ordinal_570(void)

{
                    // WARNING: Could not recover jumptable at 0x10017124. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_570();
  return;
}



void Ordinal_4444(void)

{
                    // WARNING: Could not recover jumptable at 0x1001712a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4444();
  return;
}



void Ordinal_1786(void)

{
                    // WARNING: Could not recover jumptable at 0x10017130. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1786();
  return;
}



void Ordinal_2557(void)

{
                    // WARNING: Could not recover jumptable at 0x10017136. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2557();
  return;
}



void Ordinal_760(void)

{
                    // WARNING: Could not recover jumptable at 0x1001713c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_760();
  return;
}



void Ordinal_3524(void)

{
                    // WARNING: Could not recover jumptable at 0x10017142. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3524();
  return;
}



void Ordinal_4505(void)

{
                    // WARNING: Could not recover jumptable at 0x10017148. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4505();
  return;
}



void Ordinal_486(void)

{
                    // WARNING: Could not recover jumptable at 0x1001714e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_486();
  return;
}



void Ordinal_4123(void)

{
                    // WARNING: Could not recover jumptable at 0x10017154. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4123();
  return;
}



void Ordinal_4241(void)

{
                    // WARNING: Could not recover jumptable at 0x1001715a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4241();
  return;
}



void Ordinal_2451(void)

{
                    // WARNING: Could not recover jumptable at 0x10017160. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2451();
  return;
}



void Ordinal_2510(void)

{
                    // WARNING: Could not recover jumptable at 0x10017166. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2510();
  return;
}



void Ordinal_5129(void)

{
                    // WARNING: Could not recover jumptable at 0x1001716c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5129();
  return;
}



void Ordinal_2536(void)

{
                    // WARNING: Could not recover jumptable at 0x10017172. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2536();
  return;
}



void Ordinal_4999(void)

{
                    // WARNING: Could not recover jumptable at 0x10017190. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4999();
  return;
}



void Ordinal_3098(void)

{
                    // WARNING: Could not recover jumptable at 0x10017196. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3098();
  return;
}



void Ordinal_2795(void)

{
                    // WARNING: Could not recover jumptable at 0x1001719c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2795();
  return;
}



void Ordinal_5241(void)

{
                    // WARNING: Could not recover jumptable at 0x100171a2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5241();
  return;
}



void Ordinal_4124(void)

{
                    // WARNING: Could not recover jumptable at 0x100171ae. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4124();
  return;
}



void Ordinal_762(void)

{
                    // WARNING: Could not recover jumptable at 0x100171ba. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_762();
  return;
}



void Ordinal_2007(void)

{
                    // WARNING: Could not recover jumptable at 0x100171c0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2007();
  return;
}



void Ordinal_1975(void)

{
                    // WARNING: Could not recover jumptable at 0x100171c6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1975();
  return;
}



void Ordinal_2072(void)

{
                    // WARNING: Could not recover jumptable at 0x100171cc. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2072();
  return;
}



void Ordinal_1995(void)

{
                    // WARNING: Could not recover jumptable at 0x100171d2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1995();
  return;
}



void Ordinal_5200(void)

{
                    // WARNING: Could not recover jumptable at 0x100171d8. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5200();
  return;
}



void Ordinal_2548(void)

{
                    // WARNING: Could not recover jumptable at 0x100171de. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2548();
  return;
}



void Ordinal_4735(void)

{
                    // WARNING: Could not recover jumptable at 0x100171ea. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4735();
  return;
}



void Ordinal_2747(void)

{
                    // WARNING: Could not recover jumptable at 0x100171f0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2747();
  return;
}



void Ordinal_3862(void)

{
                    // WARNING: Could not recover jumptable at 0x100171f6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3862();
  return;
}



void Ordinal_2515(void)

{
                    // WARNING: Could not recover jumptable at 0x100171fc. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2515();
  return;
}



void Ordinal_5568(void)

{
                    // WARNING: Could not recover jumptable at 0x10017214. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5568();
  return;
}



void Ordinal_2081(void)

{
                    // WARNING: Could not recover jumptable at 0x1001721a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2081();
  return;
}



void Ordinal_2317(void)

{
                    // WARNING: Could not recover jumptable at 0x10017226. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2317();
  return;
}



void Ordinal_4736(void)

{
                    // WARNING: Could not recover jumptable at 0x1001722c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4736();
  return;
}



void Ordinal_5416(void)

{
                    // WARNING: Could not recover jumptable at 0x10017232. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5416();
  return;
}



void Ordinal_1366(void)

{
                    // WARNING: Could not recover jumptable at 0x10017238. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1366();
  return;
}



void Ordinal_4728(void)

{
                    // WARNING: Could not recover jumptable at 0x1001723e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4728();
  return;
}



void Ordinal_4742(void)

{
                    // WARNING: Could not recover jumptable at 0x10017244. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4742();
  return;
}



void Ordinal_483(void)

{
                    // WARNING: Could not recover jumptable at 0x1001724a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_483();
  return;
}



void Ordinal_5139(void)

{
                    // WARNING: Could not recover jumptable at 0x10017286. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5139();
  return;
}



void Ordinal_3786(void)

{
                    // WARNING: Could not recover jumptable at 0x1001728c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3786();
  return;
}



void Ordinal_4173(void)

{
                    // WARNING: Could not recover jumptable at 0x10017292. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4173();
  return;
}



void Ordinal_2001(void)

{
                    // WARNING: Could not recover jumptable at 0x10017298. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2001();
  return;
}



void Ordinal_1014(void)

{
                    // WARNING: Could not recover jumptable at 0x100172b0. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1014();
  return;
}



void Ordinal_2389(void)

{
                    // WARNING: Could not recover jumptable at 0x100172fe. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_2389();
  return;
}



void Ordinal_3458(void)

{
                    // WARNING: Could not recover jumptable at 0x10017322. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3458();
  return;
}



void Ordinal_721(void)

{
                    // WARNING: Could not recover jumptable at 0x10017334. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_721();
  return;
}



void Ordinal_504(void)

{
                    // WARNING: Could not recover jumptable at 0x1001733a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_504();
  return;
}



void Ordinal_5630(void)

{
                    // WARNING: Could not recover jumptable at 0x10017340. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5630();
  return;
}



void Ordinal_1075(void)

{
                    // WARNING: Could not recover jumptable at 0x10017346. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1075();
  return;
}



void Ordinal_1085(void)

{
                    // WARNING: Could not recover jumptable at 0x1001734c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1085();
  return;
}



void Ordinal_1097(void)

{
                    // WARNING: Could not recover jumptable at 0x10017352. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1097();
  return;
}



void Ordinal_406(void)

{
                    // WARNING: Could not recover jumptable at 0x10017358. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_406();
  return;
}



void Ordinal_3714(void)

{
                    // WARNING: Could not recover jumptable at 0x1001735e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3714();
  return;
}



void Ordinal_5370(void)

{
                    // WARNING: Could not recover jumptable at 0x10017364. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5370();
  return;
}



void Ordinal_3656(void)

{
                    // WARNING: Could not recover jumptable at 0x1001736a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3656();
  return;
}



void Ordinal_3028(void)

{
                    // WARNING: Could not recover jumptable at 0x10017370. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3028();
  return;
}



void Ordinal_4462(void)

{
                    // WARNING: Could not recover jumptable at 0x10017376. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4462();
  return;
}



void Ordinal_615(void)

{
                    // WARNING: Could not recover jumptable at 0x1001737c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_615();
  return;
}



void Ordinal_810(void)

{
                    // WARNING: Could not recover jumptable at 0x10017388. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_810();
  return;
}



void Ordinal_4952(void)

{
                    // WARNING: Could not recover jumptable at 0x1001738e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_4952();
  return;
}



void Ordinal_3684(void)

{
                    // WARNING: Could not recover jumptable at 0x10017394. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_3684();
  return;
}



void Ordinal_5550(void)

{
                    // WARNING: Could not recover jumptable at 0x1001739a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_5550();
  return;
}



void Ordinal_979(void)

{
                    // WARNING: Could not recover jumptable at 0x100173a6. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_979();
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

undefined4 FUN_100173ac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001745d;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_2 != 1) {
    if (param_2 == 0) {
      iVar1 = Ordinal_1042();
      puVar3 = FUN_10017763();
      uVar4 = Ordinal_1097(puVar3);
      *(undefined4 *)(iVar1 + 8) = uVar4;
      iVar1 = Ordinal_1035();
      if (*(int **)(iVar1 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 4) + 0x6c))();
      }
      Ordinal_1369();
      Ordinal_1105(&DAT_10021e78,1);
    }
    uVar4 = 1;
    goto LAB_100174b0;
  }
  uVar4 = 0;
  Ordinal_988();
  iVar1 = Ordinal_1367(param_1,0,&DAT_10017b16,0);
  if (iVar1 == 0) {
    Ordinal_1369();
  }
  else {
    iVar1 = Ordinal_1035();
    if (*(int **)(iVar1 + 4) != (int *)0x0) {
      iVar1 = **(int **)(iVar1 + 4);
      iVar2 = (**(code **)(iVar1 + 0x54))();
      if (iVar2 == 0) {
        (**(code **)(iVar1 + 0x6c))();
        Ordinal_1369();
        goto LAB_10017447;
      }
    }
    Ordinal_1046(&DAT_10021e78,param_1);
    iVar1 = Ordinal_729(0x40);
    local_8 = 0;
    if (iVar1 != 0) {
      Ordinal_328(&DAT_10021e78,0);
    }
    local_8 = 0xffffffff;
    uVar4 = 1;
  }
LAB_10017447:
  iVar1 = Ordinal_1042();
  Ordinal_1097(*(undefined4 *)(iVar1 + 8));
  FUN_10017763();
LAB_100174b0:
  *unaff_FS_OFFSET = local_10;
  return uVar4;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

undefined4 FUN_100174c3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017518;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10017763();
  Ordinal_1097(puVar1);
  local_8 = 0;
  uVar2 = Ordinal_1370(param_1,param_2,param_3,param_4);
  local_8 = 0xffffffff;
  FUN_10017522();
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}



void FUN_10017522(void)

{
  int unaff_EBP;
  
  FUN_10010f50((undefined4 *)(unaff_EBP + -0x10));
  return;
}



undefined4 FUN_1001752a(undefined4 param_1,int param_2)

{
  HLOCAL hMem;
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 1) {
    hMem = LocalAlloc(0,0x2000);
    if (hMem == (HLOCAL)0x0) {
      return 0;
    }
    LocalFree(hMem);
    puVar1 = FUN_10017763();
    iVar2 = Ordinal_1042();
    uVar3 = Ordinal_1097(puVar1);
    *(undefined4 *)(iVar2 + 8) = uVar3;
  }
  else if (param_2 == 0) {
    FUN_10017763();
    iVar2 = Ordinal_1042();
    Ordinal_1097(*(undefined4 *)(iVar2 + 8));
  }
  return 1;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_10017594(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100175d9;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  Ordinal_269(1,FUN_100174c3,0x400);
  _DAT_10020e28 = &PTR_FUN_1001ba4c;
  *unaff_FS_OFFSET = local_10;
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

void * __thiscall FUN_100175ed(void *this,byte param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001762a;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10017634();
  if ((param_1 & 1) != 0) {
    Ordinal_733(this);
  }
  *unaff_FS_OFFSET = local_10;
  return this;
}



void FUN_10017634(void)

{
  FUN_1001763c();
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

void FUN_1001763c(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_10017696;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 1;
  FUN_1001767a();
  local_8 = local_8 & 0xffffff00;
  FUN_10017688();
  local_8 = 0xffffffff;
  FUN_100176a0();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_1001767a(void)

{
  FUN_100176e3();
  return;
}



void FUN_10017688(void)

{
  FUN_100176a8();
  return;
}



void FUN_100176a0(void)

{
  int unaff_EBP;
  
  FUN_10017769(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

void FUN_100176a8(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_100176d1;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_100176db();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_100176db(void)

{
  Ordinal_671();
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

void FUN_100176e3(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001770c;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_10017716();
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_10017716(void)

{
  Ordinal_711();
  return;
}



void FUN_1001771e(void)

{
  FUN_10017840((_onexit_t)&LAB_1001772c);
  return;
}



void FUN_10017759(void)

{
  FUN_1001763c();
  return;
}



undefined * FUN_10017763(void)

{
  return &DAT_10020e28;
}



void __fastcall FUN_10017769(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001ba54;
  return;
}



void __CxxFrameHandler(void)

{
                    // WARNING: Could not recover jumptable at 0x1001778c. Too many branches
                    // WARNING: Treating indirect jump as call
  __CxxFrameHandler();
  return;
}



void __cdecl FUN_100177a0(_onexit_t param_1)

{
  DWORD DVar1;
  
  if (DAT_10020688 == 0) {
    DVar1 = GetVersion();
    if (((DVar1 & 0xff) == 3) && ((DVar1 & 0x80000000) != 0)) {
      DAT_10020688 = DAT_10020688 + 1;
    }
    else {
      DAT_10020688 = DAT_10020688 + -1;
    }
  }
  if (0 < DAT_10020688) {
    while (0 < DAT_1002068c) {
      Sleep(0);
    }
    DAT_1002068c = DAT_1002068c + 1;
  }
  if (DAT_10021e94 == -1) {
    _onexit(param_1);
  }
  else {
    __dllonexit(param_1,&DAT_10021e94,&DAT_10021e90);
  }
  if (0 < DAT_10020688) {
    DAT_1002068c = DAT_1002068c + -1;
  }
  return;
}



int __cdecl FUN_10017840(_onexit_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_100177a0(param_1);
  return -(uint)(iVar1 == 0);
}



// WARNING: Unable to track spacebase fully for stack

void FUN_10017860(void)

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



type_info * __thiscall FUN_10017890(void *this,byte param_1)

{
  type_info::~type_info((type_info *)this);
  if ((param_1 & 1) != 0) {
    Ordinal_731(this);
  }
  return (type_info *)this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_100178b0(undefined4 param_1,int param_2)

{
  DWORD DVar1;
  undefined4 *puVar2;
  
  if (param_2 == 1) {
    DAT_100206a8 = DAT_100206a8 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_100206a8 < 1) {
      return 0;
    }
    DAT_100206a8 = DAT_100206a8 + -1;
  }
  if (DAT_10020688 == 0) {
    DVar1 = GetVersion();
    if (((char)DVar1 == '\x03') && ((DVar1 & 0x80000000) != 0)) {
      DAT_10020688 = DAT_10020688 + 1;
    }
    else {
      DAT_10020688 = DAT_10020688 + -1;
    }
  }
  _DAT_10021e8c = *(undefined4 *)_adjust_fdiv_exref;
  if (param_2 != 1) {
    if ((param_2 == 0) &&
       (((DAT_10020688 < 0 || (DAT_100206a8 == 0)) && (DAT_10021e94 != (undefined4 *)0x0)))) {
      puVar2 = DAT_10021e90 + -1;
      if (DAT_10021e94 <= puVar2) {
        do {
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)();
          }
          puVar2 = puVar2 + -1;
        } while (DAT_10021e94 <= puVar2);
      }
      if (DAT_10020688 < 0) {
        free(DAT_10021e94);
      }
      else {
        GlobalFree(DAT_10021e94);
      }
      DAT_10021e94 = (undefined4 *)0x0;
    }
    return 1;
  }
  if (-1 < DAT_10020688) {
    if (DAT_100206a8 != 1) {
      return 1;
    }
    if (-1 < DAT_10020688) {
      DAT_10021e94 = (undefined4 *)GlobalAlloc(0x2000,0x80);
      if (DAT_10021e94 == (undefined4 *)0x0) {
        return 0;
      }
      goto LAB_1001797d;
    }
  }
  DAT_10021e94 = (undefined4 *)malloc(0x80);
  if (DAT_10021e94 == (undefined4 *)0x0) {
    return 0;
  }
LAB_1001797d:
  *DAT_10021e94 = 0;
  DAT_10021e90 = DAT_10021e94;
  initterm(&DAT_1001f000,&DAT_1001f098);
  return 1;
}



int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((param_2 == 0) && (DAT_100206a8 == 0)) {
    return 0;
  }
  if ((param_2 == 1) || (param_2 == 2)) {
    if (PTR_FUN_1002061c != (undefined *)0x0) {
      iVar2 = (*(code *)PTR_FUN_1002061c)(param_1,param_2,param_3);
    }
    if (iVar2 == 0) goto LAB_10017aa5;
    iVar2 = FUN_100178b0(param_1,param_2);
  }
  if (iVar2 != 0) {
    iVar2 = FUN_100173ac(param_1,param_2);
  }
LAB_10017aa5:
  if ((param_2 == 0) || (param_2 == 3)) {
    iVar1 = FUN_100178b0(param_1,param_2);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    if ((iVar2 != 0) && (PTR_FUN_1002061c != (undefined *)0x0)) {
      iVar2 = (*(code *)PTR_FUN_1002061c)(param_1,param_2,param_3);
    }
  }
  return iVar2;
}



// WARNING: This is an inlined function
// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

void _EH_prolog(void)

{
  undefined4 unaff_FS_OFFSET;
  undefined1 auStack_c [12];
  
  *(undefined1 **)unaff_FS_OFFSET = auStack_c;
                    // WARNING: Could not recover jumptable at 0x10017ada. Too many branches
                    // WARNING: Treating indirect jump as call
  return;
}



void __dllonexit(void)

{
                    // WARNING: Could not recover jumptable at 0x10017ae0. Too many branches
                    // WARNING: Treating indirect jump as call
  __dllonexit();
  return;
}



void __thiscall type_info::~type_info(type_info *this)

{
                    // WARNING: Could not recover jumptable at 0x10017ae6. Too many branches
                    // WARNING: Treating indirect jump as call
  ~type_info(this);
  return;
}



void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x10017aec. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



void Ordinal_1105(void)

{
                    // WARNING: Could not recover jumptable at 0x10017af2. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1105();
  return;
}



void Ordinal_1369(void)

{
                    // WARNING: Could not recover jumptable at 0x10017af8. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1369();
  return;
}



void Ordinal_1042(void)

{
                    // WARNING: Could not recover jumptable at 0x10017afe. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1042();
  return;
}



void Ordinal_328(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b04. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_328();
  return;
}



void Ordinal_1046(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b0a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1046();
  return;
}



void Ordinal_1367(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b10. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1367();
  return;
}



void Ordinal_988(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b1c. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_988();
  return;
}



void Ordinal_1370(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b22. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1370();
  return;
}



void Ordinal_269(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b28. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_269();
  return;
}



void Ordinal_733(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b2e. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_733();
  return;
}



void Ordinal_671(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b34. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_671();
  return;
}



void Ordinal_711(void)

{
                    // WARNING: Could not recover jumptable at 0x10017b3a. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_711();
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  undefined *puVar1;
  HRESULT HVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    // 0x17b40  2  DllGetClassObject
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017b92;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10017763();
  Ordinal_1097(puVar1);
  local_8 = 0;
  HVar2 = Ordinal_1000(rclsid,riid,ppv);
  local_8 = 0xffffffff;
  FUN_10017b9c();
  *unaff_FS_OFFSET = local_10;
  return HVar2;
}



void FUN_10017b9c(void)

{
  int unaff_EBP;
  
  FUN_10010f50((undefined4 *)(unaff_EBP + -0x10));
  return;
}



// WARNING: Function: _EH_prolog replaced with injection: EH_prolog

HRESULT DllCanUnloadNow(void)

{
  undefined *puVar1;
  HRESULT HVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    // 0x17ba4  1  DllCanUnloadNow
  local_8 = 0xffffffff;
  puStack_c = &LAB_10017beb;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_10017763();
  Ordinal_1097(puVar1);
  local_8 = 0;
  HVar2 = Ordinal_999();
  local_8 = 0xffffffff;
  FUN_10017bf5();
  *unaff_FS_OFFSET = local_10;
  return HVar2;
}



void FUN_10017bf5(void)

{
  int unaff_EBP;
  
  FUN_10010f50((undefined4 *)(unaff_EBP + -0x10));
  return;
}



void Ordinal_1000(void)

{
                    // WARNING: Could not recover jumptable at 0x10017bfe. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_1000();
  return;
}



void Ordinal_999(void)

{
                    // WARNING: Could not recover jumptable at 0x10017c04. Too many branches
                    // WARNING: Treating indirect jump as call
  Ordinal_999();
  return;
}


