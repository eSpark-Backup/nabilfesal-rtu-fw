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
typedef unsigned long long    undefined6;
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

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

typedef ICONINFO *PICONINFO;

typedef int BOOL;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct HBITMAP__ {
    int unused;
};

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

typedef struct tagMSG *LPMSG;

typedef struct tagMETARECORD tagMETARECORD, *PtagMETARECORD;

typedef ushort WORD;

struct tagMETARECORD {
    DWORD rdSize;
    WORD rdFunction;
    WORD rdParm[1];
};

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

typedef struct tagLOGFONTA LOGFONTA;

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

typedef struct tagTEXTMETRICA TEXTMETRICA;

typedef int (*OLDFONTENUMPROCA)(LOGFONTA *, TEXTMETRICA *, DWORD, LPARAM);

typedef OLDFONTENUMPROCA FONTENUMPROCA;

typedef uchar BYTE;

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

typedef struct tagLOGFONTA *LPLOGFONTA;

typedef struct tagENHMETAHEADER tagENHMETAHEADER, *PtagENHMETAHEADER;

typedef struct tagENHMETAHEADER *LPENHMETAHEADER;

typedef struct _RECTL _RECTL, *P_RECTL;

typedef struct _RECTL RECTL;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE SIZE;

typedef SIZE SIZEL;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

struct _RECTL {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagENHMETAHEADER {
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
    DWORD cbPixelFormat;
    DWORD offPixelFormat;
    DWORD bOpenGL;
    SIZEL szlMicrometers;
};

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

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

typedef wchar_t WCHAR;

struct tagTEXTMETRICW {
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
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagMETARECORD METARECORD;

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

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

typedef struct tagHANDLETABLE tagHANDLETABLE, *PtagHANDLETABLE;

typedef void *HGDIOBJ;

struct tagHANDLETABLE {
    HGDIOBJ objectHandle[1];
};

typedef struct tagTEXTMETRICW *LPTEXTMETRICW;

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

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

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagHANDLETABLE *LPHANDLETABLE;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef struct tagHANDLETABLE HANDLETABLE;

typedef int (*MFENUMPROC)(HDC, HANDLETABLE *, METARECORD *, int, LPARAM);

struct HDC__ {
    int unused;
};

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct tagMETARECORD *LPMETARECORD;

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

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

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

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

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

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

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

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef long HRESULT;

typedef CHAR *LPCSTR;

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

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef struct IStream IStream, *PIStream;

typedef DWORD ULONG;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

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

struct IStream {
    struct IStreamVtbl *lpVtbl;
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

typedef struct IMalloc IMalloc, *PIMalloc;

typedef struct IMalloc *LPMALLOC;

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

typedef union _union_2260 _union_2260, *P_union_2260;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

typedef LPOLESTR *SNB;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct IEnumSTATSTG {
    struct IEnumSTATSTGVtbl *lpVtbl;
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

struct HENHMETAFILE__ {
    int unused;
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

typedef struct tagSTGMEDIUM tagSTGMEDIUM, *PtagSTGMEDIUM;

typedef struct tagSTGMEDIUM uSTGMEDIUM;

typedef uSTGMEDIUM STGMEDIUM;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

struct tagSTGMEDIUM {
    DWORD tymed;
    union _union_2260 u;
    struct IUnknown *pUnkForRelease;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

typedef struct ILockBytes ILockBytes, *PILockBytes;

typedef struct ILockBytes *LPLOCKBYTES;

typedef struct ILockBytesVtbl ILockBytesVtbl, *PILockBytesVtbl;

struct ILockBytesVtbl {
    HRESULT (*QueryInterface)(struct ILockBytes *, IID *, void **);
    ULONG (*AddRef)(struct ILockBytes *);
    ULONG (*Release)(struct ILockBytes *);
    HRESULT (*ReadAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*WriteAt)(struct ILockBytes *, ULARGE_INTEGER, void *, ULONG, ULONG *);
    HRESULT (*Flush)(struct ILockBytes *);
    HRESULT (*SetSize)(struct ILockBytes *, ULARGE_INTEGER);
    HRESULT (*LockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct ILockBytes *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct ILockBytes *, STATSTG *, DWORD);
};

struct ILockBytes {
    struct ILockBytesVtbl *lpVtbl;
};

typedef struct IStream *LPSTREAM;

typedef STGMEDIUM *LPSTGMEDIUM;

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

typedef OLECHAR *BSTR;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef int INT;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

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

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
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

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT *LPPOINT;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HPALETTE__ *HPALETTE;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPVOID;

typedef struct HMETAFILE__ HMETAFILE__, *PHMETAFILE__;

struct HMETAFILE__ {
    int unused;
};

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagSIZE *LPSIZE;

typedef int (*FARPROC)(void);

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD *LPWORD;

typedef WORD ATOM;

typedef LONG_PTR LRESULT;

typedef struct tagRECT *LPRECT;

typedef BOOL *LPBOOL;

typedef struct HICON__ *HICON;

typedef struct HMETAFILE__ *HMETAFILE;

typedef void *LPCVOID;

typedef struct HRSRC__ *HRSRC;

typedef HICON HCURSOR;

typedef DWORD COLORREF;

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

typedef struct IUnknown *LPUNKNOWN;

typedef uint size_t;



undefined *PTR_LAB_5f302390;
undefined *PTR_LAB_5f3023a8;
undefined *PTR_LAB_5f3023c8;
undefined1 DAT_5f303850;
undefined *PTR_LAB_5f3023e8;
undefined *PTR_LAB_5f302408;
undefined *PTR_LAB_5f302510;
undefined *PTR_LAB_5f302528;
undefined *PTR_LAB_5f302548;
undefined *PTR_LAB_5f302568;
undefined *PTR_LAB_5f302598;
undefined *PTR_FUN_5f3025b8;
undefined *PTR_LAB_5f302628;
undefined *PTR_LAB_5f302640;
undefined *PTR_LAB_5f302660;
undefined *PTR_LAB_5f302680;
undefined *PTR_LAB_5f3026b0;
undefined *PTR_LAB_5f3026d0;
int DAT_5f3210d4;
int DAT_5f3210d8;
undefined DAT_5f3210dc;
undefined DAT_5f321200;
int *DAT_5f3210e0;
undefined4 DAT_5f3210d8;
undefined DAT_5f31d030;
undefined DAT_5f321178;
int DAT_5f3210d0;
uint DAT_5f3210d4;
int DAT_5f321230;
undefined LAB_5f304210;
int *DAT_5f3210d4;
undefined4 *DAT_5f3210d4;
undefined4 DAT_5f3210d0;
IMalloc *DAT_5f3210d4;
undefined *PTR_LAB_5f302740;
undefined1 DAT_5f3038f0;
undefined4 DAT_5f3210e8;
undefined2 DAT_5f321128;
pointer PTR_u_Name_5f302470;
unicode u_Font_5f31d1c0;
undefined2 DAT_5f302474;
undefined1 DAT_5f303900;
short DAT_5f321128;
undefined4 DAT_5f32112c;
string s_comctl32.dll_5f31d1d0;
string s_PropertySheetA_5f31d1e0;
undefined4 DAT_5f321130;
string s_CreatePropertySheetPageA_5f31d1f0;
undefined DAT_5f303910;
undefined LAB_5f307930;
undefined DAT_5f303920;
uint DAT_5f321134;
uint DAT_5f321138;
string s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_5f31d210;
string s_MS_Sans_Serif_5f31d248;
string s_COMCTL32_5f31d258;
undefined *PTR_LAB_5f302760;
undefined *PTR_LAB_5f302780;
undefined DAT_5f303930;
undefined LAB_5f308640;
undefined LAB_5f308670;
undefined DAT_5f303950;
undefined2 DAT_5f31d268;
string s_CLSID\%s_5f31d270;
string s_HelpDir_5f31d27c;
string s_InprocServer32_5f31d284;
undefined *PTR_LAB_5f302960;
undefined *PTR_LAB_5f302970;
undefined *PTR_LAB_5f302998;
undefined *PTR_LAB_5f3029b0;
undefined *PTR_LAB_5f3029d0;
undefined *PTR_FUN_5f3029f0;
undefined *PTR_LAB_5f302a38;
undefined *PTR_LAB_5f302a60;
undefined *PTR_LAB_5f302a80;
undefined DAT_5f32113c;
int *DAT_5f321140;
undefined LAB_5f30aa40;
undefined1 DAT_5f303840;
undefined DAT_5f302920;
undefined DAT_5f302b00;
undefined LAB_5f312e60;
void *ExceptionList;
HINSTANCE DAT_5f3211e4;
undefined DAT_5f3028f0;
undefined DAT_5f302900;
undefined *PTR_LAB_5f302b10;
undefined DAT_5f302b30;
undefined1 DAT_5f31d298;
undefined1 DAT_5f31d299;
undefined1 DAT_5f31d29a;
uint DAT_5f32122c;
pointer PTR_FUN_5f302b3c;
undefined *PTR_LAB_5f302b40;
undefined *PTR_LAB_5f302b60;
undefined *DAT_5f321154;
undefined LAB_5f302860;
undefined LAB_5f3028d0;
undefined DAT_5f302b80;
undefined DAT_5f3038d0;
HMODULE DAT_5f32115c;
undefined DAT_5f321144;
undefined DAT_5f321148;
undefined DAT_5f321150;
undefined DAT_5f32114c;
HMODULE DAT_5f321158;
ATOM DAT_5f321160;
undefined4 DAT_5f321154;
ATOM DAT_5f321164;
ATOM DAT_5f321168;
ATOM DAT_5f32116c;
FARPROC DAT_5f321154;
string s_urlmon.dll_5f31d2d8;
string s_CreateURLMoniker_5f31d2e4;
string s_CreateAsyncBindCtx_5f31d2f8;
string s_RegisterBindStatusCallback_5f31d30c;
string s_RevokeBindStatusCallback_5f31d328;
string s_asycfilt.dll_5f31d344;
string s_FilterCreateInstance_5f31d354;
string s_MS_AsyncImage_DCWait_5f31d36c;
string s_MS_AsyncImage_Display_5f31d384;
string s_MS_AsyncImage_Abnormal_5f31d39c;
string s_MS_AsyncImage_Finished_5f31d3b4;
pointer PTR_FUN_5f302b8c;
string s_{%08lX-%04X-%04X-%02X%02X-%02X%0_5f31d3cc;
undefined2 DAT_5f321170;
int UNK_00000004;
undefined4 DAT_5f3211e4;
undefined1 DAT_5f302bc0;
undefined4 DAT_5f3038e0;
undefined4 DAT_5f3039a0;
undefined LAB_5f3043a0;
undefined LAB_5f3097b0;
int DAT_5f321218;
int DAT_5f32121c;
undefined4 DAT_5f321218;
undefined DAT_5f302bd0;
undefined DAT_5f302be0;
undefined DAT_5f302bf0;
undefined DAT_5f302c00;
undefined DAT_5f302c10;
undefined DAT_5f3211f8;
unicode u_0123456789ABCDEF_5f31d400;
undefined2 DAT_5f3211e8;
undefined4 DAT_5f3211ac;
undefined4 DAT_5f3211b0;
int *DAT_5f3211ac;
HKEY DAT_5f31d428;
HKEY DAT_5f31d424;
string s_CLSID_5f31d42c;
string s_InprocServer32_5f31d488;
string s_ProgID_5f31d498;
undefined DAT_5f321220;
undefined *PTR_DAT_5f302b98;
undefined DAT_5f302bbc;
undefined4 DAT_5f31d428;
undefined4 DAT_5f31d424;
undefined DAT_5f31d4f8;
HMODULE DAT_5f321224;
undefined4 DAT_5f321228;
pointer PTR_PTR_5f31d4c4;
string s_oleaut32.dll_5f31d5a8;
string s_ro32.dll_5f31d4fc;
undefined *PTR_FUN_5f31d4b0;
undefined *PTR_FUN_5f31d4a0;
undefined *PTR_FUN_5f31d4a4;
undefined *PTR_FUN_5f31d4a8;
undefined *PTR_FUN_5f31d4b4;
undefined *PTR_FUN_5f31d4b8;
undefined *PTR_FUN_5f31d4ac;
undefined DAT_5f321234;
int DAT_5f321228;
undefined4 DAT_5f321230;
unicode u_olepro32.dll_5f31d5b8;
int DAT_5f321248;
uint DAT_5f321258;
undefined DAT_5f321264;
undefined DAT_5f321260;
undefined DAT_5f32125c;
LPSTR DAT_5f32280c;
LPSTR DAT_5f32123c;
int DAT_5f321238;
int DAT_5f321290;
undefined *DAT_5f322810;
int DAT_5f321244;
undefined *PTR___exit_5f31d5d4;
int DAT_5f321548;
int DAT_5f3226e4;
undefined DAT_5f3226e8;
undefined4 DAT_5f321250;
undefined *PTR_LAB_5f31da34;
undefined *PTR_LAB_5f31da30;
undefined *PTR_LAB_5f31da38;
undefined FUN_5f3146a0;
undefined *PTR_LAB_5f31da3c;
undefined *PTR_LAB_5f31da40;
undefined *PTR_LAB_5f31da44;
undefined LAB_5f314700;
undefined LAB_5f314770;
undefined LAB_5f314790;
undefined LAB_5f314b60;
undefined LAB_5f312d88;
undefined4 DAT_5f31d648;
undefined4 DAT_5f31d644;
int DAT_5f31d64c;
LCID DAT_5f321548;
uint DAT_5f31fc04;
HANDLE DAT_5f3226ec;
int DAT_5f321568;
undefined *PTR___fpmath_5f31d5e0;
undefined DAT_5f31d000;
undefined DAT_5f31d00c;
undefined DAT_5f31d010;
undefined DAT_5f31d018;
int DAT_5f321294;
undefined4 DAT_5f321290;
undefined1 DAT_5f32128c;
undefined4 *DAT_5f322808;
int DAT_5f322804;
undefined DAT_5f31d01c;
undefined DAT_5f31d024;
undefined DAT_5f31d028;
undefined DAT_5f31d02c;
DWORD DAT_5f31d650;
undefined DAT_5f31fc08;
undefined4 DAT_5f322700;
UINT DAT_5f322800;
undefined4 DAT_5f322704;
char *DAT_5f32123c;
undefined DAT_5f321274;
byte *DAT_5f32280c;
undefined DAT_5f321284;
undefined DAT_5f32126c;
undefined DAT_5f321268;
undefined DAT_5f321298;
undefined4 DAT_5f3213a0;
UINT DAT_5f3214a4;
undefined DAT_5f3214a8;
undefined DAT_5f3214b0;
undefined DAT_5f3214b4;
undefined DAT_5f3214b8;
int DAT_5f3214bc;
undefined1 DAT_5f31d680;
undefined4 DAT_5f31d688;
undefined DAT_5f31d778;
uint DAT_5f3214bc;
int DAT_5f321558;
undefined4 DAT_5f3214a4;
int DAT_5f3214c4;
pointer PTR_LOOP_5f31dbe0;
undefined4 DAT_5f321248;
undefined *DAT_5f3214c8;
int DAT_5f322700;
undefined4 DAT_5f31d780;
undefined4 DAT_5f31d810;
undefined *PTR_DAT_5f31d854;
undefined *PTR_DAT_5f31d844;
undefined *PTR_DAT_5f31d834;
undefined *PTR_DAT_5f31d814;
pointer PTR_DAT_5f31d834;
pointer PTR_DAT_5f31d844;
pointer PTR_DAT_5f31d854;
pointer PTR_DAT_5f31d814;
int DAT_5f320704;
char DAT_5f320708;
undefined *PTR_DAT_5f320710;
undefined1 DAT_5f320708;
undefined4 DAT_5f320b18;
int DAT_5f32124c;
undefined DAT_5f31da6c;
undefined DAT_5f31dacc;
undefined DAT_5f31da9c;
undefined DAT_5f31dab4;
uint DAT_5f32155c;
UINT DAT_5f321558;
int DAT_5f321560;
undefined *DAT_5f321564;
int DAT_5f31dbf0;
undefined *PTR_PTR_LOOP_5f31dbe4;
undefined *PTR_PTR_LOOP_5f31fc00;
undefined4 DAT_5f31dbf0;
int DAT_5f32156c;
FARPROC DAT_5f321570;
FARPROC DAT_5f321574;
FARPROC DAT_5f321578;
undefined *PTR_DAT_5f320714;
ushort DAT_5f3215be;
ushort DAT_5f3215c0;
ushort DAT_5f3215b4;
undefined DAT_5f3215e0;
undefined DAT_5f320920;
undefined DAT_5f320938;
int DAT_5f320b18;
int DAT_5f3215c4;
LCID DAT_5f3215c8;
undefined1 DAT_5f3215d8;
int DAT_5f3215e4;
int DAT_5f3215e8;
byte DAT_5f320708;
undefined4 DAT_5f320d70;
undefined4 DAT_5f320d74;
undefined4 DAT_5f320d80;
undefined4 DAT_5f320d84;
undefined DAT_5f320b20;
undefined DAT_5f320b30;

void __fastcall FUN_5f3039c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f302390;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 __cdecl FUN_5f3039e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  *param_3 = 0;
  puVar1 = (undefined4 *)FUN_5f312aa0(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_5f3039c0(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar1[2] = param_1;
  uVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
  return uVar2;
}



void __fastcall FUN_5f303b60(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0;
  return;
}



int __thiscall FUN_5f303b70(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
                    // WARNING: Load size is inaccurate
  if (1 < *this) {
    FUN_5f312800(*(IMalloc **)((int)this + 4));
  }
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_1 != (uint *)0x0) {
    iVar2 = FUN_5f303c40(this,*param_1);
    if (iVar2 == 0) {
                    // WARNING: Load size is inaccurate
      iVar1 = *this;
      if (iVar1 == 1) {
        *(uint *)((int)this + 4) = param_1[1];
        return 0;
      }
      puVar3 = (undefined4 *)param_1[1];
      puVar4 = *(undefined4 **)((int)this + 4);
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return iVar2;
}



void __fastcall FUN_5f303bd0(uint *param_1)

{
  if (1 < *param_1) {
    FUN_5f312800((IMalloc *)param_1[1]);
  }
  return;
}



undefined4 __fastcall FUN_5f303bf0(undefined4 *param_1)

{
  return *param_1;
}



int __thiscall FUN_5f303c00(void *this,int param_1)

{
  int iVar1;
  
                    // WARNING: Load size is inaccurate
  iVar1 = *(int *)((int)this + 4);
  if (*this != 1) {
    iVar1 = *(int *)(iVar1 + param_1 * 4);
  }
  return iVar1;
}



void __thiscall FUN_5f303c20(void *this,int param_1,int param_2)

{
                    // WARNING: Load size is inaccurate
  if (*this == 1) {
    *(int *)((int)this + 4) = param_2;
    return;
  }
  *(int *)(*(int *)((int)this + 4) + param_1 * 4) = param_2;
  return;
}



undefined4 __thiscall FUN_5f303c40(void *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
                    // WARNING: Load size is inaccurate
  uVar4 = *this;
  if (uVar4 < param_1) {
    if (uVar4 == 1) {
      puVar2 = (undefined4 *)FUN_5f312780(param_1 * 4);
      if (puVar2 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      *(uint *)this = param_1;
      puVar7 = puVar2;
      for (uVar4 = param_1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = 0;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      uVar1 = *(undefined4 *)((int)this + 4);
      *(undefined4 **)((int)this + 4) = puVar2;
      *puVar2 = uVar1;
      return 0;
    }
    pvVar3 = FUN_5f3127c0(*(int **)((int)this + 4),param_1 * 4);
    if (pvVar3 == (void *)0x0) {
      return 0x8007000e;
    }
    *(void **)((int)this + 4) = pvVar3;
    puVar2 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
    for (uVar6 = param_1 - uVar4 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(uint *)this = param_1;
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return 0;
}



undefined4 * __thiscall FUN_5f303cf0(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_5f3023c8;
  FUN_5f303b60((undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_5f3023a8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  return (undefined4 *)this;
}



void __fastcall FUN_5f303d20(undefined4 *param_1)

{
  uint *this;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  this = param_1 + 3;
  *param_1 = &PTR_LAB_5f3023a8;
  uVar1 = FUN_5f303bf0(this);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_5f303c00(this,uVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_5f303bd0(this);
  return;
}



int FUN_5f303e60(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *this;
  int iVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  puVar1 = (undefined4 *)FUN_5f312aa0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_5f303f30(puVar1);
  }
  if (this == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_5f304060(this,(uint *)(param_1 + 0xc));
  if (iVar2 == 0) {
    iVar2 = (**(code **)*this)(this,&DAT_5f303850,param_2);
  }
  (**(code **)(*this + 8))(this);
  return iVar2;
}



undefined4 __thiscall FUN_5f303ee0(void *this,undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x14) == 0) {
    uVar1 = FUN_5f303bf0((undefined4 *)((int)this + 0xc));
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        piVar2 = (int *)FUN_5f303c00((undefined4 *)((int)this + 0xc),uVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    return 0;
  }
  return 0;
}



undefined4 * __fastcall FUN_5f303f30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f302408;
  FUN_5f303b60(param_1 + 3);
  *param_1 = &PTR_LAB_5f3023e8;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}



void __fastcall FUN_5f303f60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f3023e8;
  FUN_5f304020((int)param_1);
  FUN_5f303bd0(param_1 + 3);
  return;
}



LONG FUN_5f303fe0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_5f303f60(param_1);
    FUN_5f312ab0((undefined *)param_1);
  }
  return LVar1;
}



void __fastcall FUN_5f304020(int param_1)

{
  undefined4 *this;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  this = (undefined4 *)(param_1 + 0xc);
  uVar1 = FUN_5f303bf0(this);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_5f303c00(this,uVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        FUN_5f303c20(this,uVar3,0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



int __thiscall FUN_5f304060(void *this,uint *param_1)

{
  undefined4 *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_5f304020((int)this);
  this_00 = (undefined4 *)((int)this + 0xc);
  iVar1 = FUN_5f303b70(this_00,param_1);
  if (iVar1 == 0) {
    uVar5 = 0;
    iVar2 = FUN_5f303bf0(this_00);
    if (iVar2 != 0) {
      do {
        piVar3 = (int *)FUN_5f303c00(this_00,uVar5);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))(piVar3);
        }
        uVar5 = uVar5 + 1;
        uVar4 = FUN_5f303bf0(this_00);
      } while (uVar5 < uVar4);
    }
  }
  return iVar1;
}



undefined4 FUN_5f3040c0(int param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint Value;
  
  if ((param_4 != (uint *)0x0) && (param_3 != (undefined4 *)0x0)) {
    uVar3 = 0;
    uVar1 = FUN_5f303bf0((undefined4 *)(param_1 + 0xc));
    Value = *(uint *)(param_1 + 8);
    while ((Value < uVar1 && (uVar3 < param_2))) {
      piVar2 = (int *)FUN_5f303c00((undefined4 *)(param_1 + 0xc),Value);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        *param_3 = piVar2;
        param_3[1] = Value + 1;
        uVar3 = uVar3 + 1;
        param_3 = param_3 + 2;
      }
      Value = Value + 1;
    }
    *param_4 = uVar3;
    InterlockedExchange((LONG *)(param_1 + 8),Value);
    return 0;
  }
  return 0x80070057;
}



int FUN_5f3041a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *this;
  int iVar2;
  
  if (param_2 == 0) {
    return -0x7ff8ffa9;
  }
  puVar1 = (undefined4 *)FUN_5f312aa0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_5f303f30(puVar1);
  }
  if (this == (int *)0x0) {
    return -0x7ff8fff2;
  }
  iVar2 = FUN_5f304060(this,(uint *)(param_1 + 0xc));
  if (iVar2 == 0) {
    iVar2 = (**(code **)*this)(this,&DAT_5f303850,param_2);
  }
  (**(code **)(*this + 8))(this);
  return iVar2;
}



undefined4 * __fastcall FUN_5f304250(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_LAB_5f3026d0;
  puVar1 = param_1 + 5;
  param_1[1] = &PTR_LAB_5f3026b0;
  param_1[2] = &PTR_LAB_5f302680;
  param_1[3] = &PTR_LAB_5f302660;
  param_1[4] = &PTR_LAB_5f302640;
  *puVar1 = &PTR_LAB_5f302628;
  FUN_5f303cf0(param_1 + 6,-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
  FUN_5f306950(param_1 + 0xc,-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((int)param_1 + 0x5a) = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_FUN_5f3025b8;
  param_1[1] = &PTR_LAB_5f302598;
  param_1[2] = &PTR_LAB_5f302568;
  param_1[3] = &PTR_LAB_5f302548;
  param_1[4] = &PTR_LAB_5f302528;
  *puVar1 = &PTR_LAB_5f302510;
  param_1[0x29] = 0xffffffff;
  param_1[0x11] = 80000;
  param_1[0x13] = 1;
  param_1[0x14] = 1;
  *(undefined2 *)(param_1 + 0x15) = 1;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xf8;
  FUN_5f3116f0();
  FUN_5f3043e0();
  return param_1;
}



void __fastcall FUN_5f304330(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f3025b8;
  param_1[1] = &PTR_LAB_5f302598;
  param_1[2] = &PTR_LAB_5f302568;
  param_1[3] = &PTR_LAB_5f302548;
  param_1[4] = &PTR_LAB_5f302528;
  param_1[5] = &PTR_LAB_5f302510;
  if (param_1[0x29] != -1) {
    InterlockedDecrement((LONG *)(DAT_5f3210d4 + 0xb0 + param_1[0x29] * 0xf4));
  }
  FUN_5f304420();
  FUN_5f311700();
  FUN_5f306980(param_1 + 0xc);
  FUN_5f303d20(param_1 + 6);
  return;
}



void FUN_5f3043e0(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  if (DAT_5f3210d8 == 0) {
    FUN_5f3068a0();
    DAT_5f3210d8 = 1;
  }
  InterlockedIncrement((LONG *)&DAT_5f3210dc);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  return;
}



void FUN_5f304420(void)

{
  LONG LVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  LVar1 = InterlockedDecrement((LONG *)&DAT_5f3210dc);
  if (LVar1 == 0) {
    FUN_5f3068e0();
    if (DAT_5f3210e0 != (int *)0x0) {
      (**(code **)(*DAT_5f3210e0 + 8))(DAT_5f3210e0);
      DAT_5f3210e0 = (int *)0x0;
    }
    DAT_5f3210d8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  return;
}



int FUN_5f304470(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined *unaff_retaddr;
  
  if (param_3 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *param_3 = 0;
  puVar6 = (undefined4 *)FUN_5f312aa0(0xb0);
  if (puVar6 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_5f304250(puVar6);
  }
  if (piVar7 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  puVar6 = (undefined4 *)*piVar7;
  (*(code *)puVar6[1])(piVar7);
  if (unaff_retaddr == (undefined *)0x0) {
    unaff_retaddr = &DAT_5f31d030;
  }
  bVar1 = unaff_retaddr[0x18];
  uVar3 = *(undefined2 *)(unaff_retaddr + 0x12);
  *(undefined2 *)((int)piVar7 + 0x56) = *(undefined2 *)(unaff_retaddr + 0x10);
  bVar2 = unaff_retaddr[0x1c];
  *(undefined2 *)(piVar7 + 0x15) = uVar3;
  iVar8 = *(int *)(unaff_retaddr + 0xc);
  psVar4 = *(short **)(unaff_retaddr + 4);
  *(byte *)(piVar7 + 0x16) =
       ((bVar1 & 1 | (bVar2 & 1) << 1) << 1 | unaff_retaddr[0x14] & 1) << 1 |
       *(byte *)(piVar7 + 0x16) & 0xf1;
  iVar5 = *(int *)(unaff_retaddr + 8);
  piVar7[0x12] = iVar8;
  piVar7[0x11] = iVar5;
  iVar8 = FUN_5f304980(psVar4);
  if (-1 < iVar8) {
    FUN_5f312ad0((short *)((int)piVar7 + 0x5a),*(short **)(unaff_retaddr + 4),0x20);
    iVar8 = (*(code *)*puVar6)(piVar7,param_1,param_2);
    if (-1 < iVar8) {
      iVar8 = 0;
    }
  }
  (*(code *)puVar6[2])(piVar7);
  return iVar8;
}



undefined4 FUN_5f304560(int *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < 0x10a) {
    if (uVar1 != 0x109) {
      if (uVar1 != 0) goto LAB_5f30482a;
      if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
        *param_3 = (int)param_1;
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
      goto LAB_5f304884;
    }
    if (((param_2[1] != 0) || (param_2[2] != 0xc0)) || (param_2[3] != 0x46000000))
    goto LAB_5f304884;
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 3);
      (**(code **)(*param_1 + 4))(param_1);
      return 0;
    }
  }
  else if (uVar1 < 0x20401) {
    if (uVar1 == 0x20400) {
      if (((param_2[1] != 0) || (param_2[2] != 0xc0)) || (param_2[3] != 0x46000000))
      goto LAB_5f304884;
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
    else if (uVar1 == 0x10c) {
      if (((param_2[1] != 0) || (param_2[2] != 0xc0)) || (param_2[3] != 0x46000000))
      goto LAB_5f304884;
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 3);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x10e) goto LAB_5f30482a;
      if (((param_2[1] != 0) || (param_2[2] != 0xc0)) || (param_2[3] != 0x46000000))
      goto LAB_5f304884;
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 2);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
  }
  else if (uVar1 < 0xbef6e003) {
    if (uVar1 == 0xbef6e002) {
      if (((param_2[1] == 0x101aa874) && (param_2[2] == 0xaa00ba8b)) && (param_2[3] == 0xab0c3000))
      {
        *param_3 = (int)param_1;
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
      goto LAB_5f304884;
    }
    if (uVar1 == 0x37d84f60) {
      if (((param_2[1] != 0x11ce42cb) || (param_2[2] != 0xaa003581)) || (param_2[3] != 0x51b84b00))
      goto LAB_5f304884;
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 4);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
    else {
      if (uVar1 != 0xb196b284) goto LAB_5f30482a;
      if (((param_2[1] != 0x101abab4) || (param_2[2] != 0xaa009cb6)) || (param_2[3] != 0x71d3400))
      goto LAB_5f304884;
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 5);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
  }
  else {
    if (uVar1 != 0xbef6e003) {
LAB_5f30482a:
      *param_3 = 0;
      return 0x80004002;
    }
    if (((param_2[1] != 0x101aa874) || (param_2[2] != 0xaa00ba8b)) || (param_2[3] != 0xab0c3000))
    goto LAB_5f304884;
    if (param_1 != (int *)0x0) {
      *param_3 = (int)(param_1 + 1);
      (**(code **)(*param_1 + 4))(param_1);
      return 0;
    }
  }
  *param_3 = 0;
LAB_5f304884:
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



void FUN_5f304890(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0xa8));
  return;
}



LONG FUN_5f3048b0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x2a);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_5f304330(param_1);
    FUN_5f312ab0((undefined *)param_1);
  }
  return LVar1;
}



int FUN_5f304980(short *param_1)

{
  uint uVar1;
  
  if (param_1 == (short *)0x0) {
    return -0x7ff5fe84;
  }
  uVar1 = FUN_5f312c10(param_1);
  return (-(uint)(uVar1 < 0x20) & 0x7ff5fe84) + 0x800a017c;
}



int FUN_5f3049b0(void *param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f304980((short *)param_2);
  if (-1 < iVar1) {
    iVar1 = FUN_5f312b10((ushort *)((int)param_1 + 0x5a),param_2);
    if (iVar1 != 0) {
      FUN_5f312ad0((short *)((int)param_1 + 0x5a),(short *)param_2,0x20);
      *(byte *)((int)param_1 + 0xac) = *(byte *)((int)param_1 + 0xac) | 1;
      FUN_5f306460(param_1,1,0);
    }
    iVar1 = 0;
  }
  return iVar1;
}



uint FUN_5f304a10(void *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar2 = FUN_5f306030(param_1);
  if ((int)uVar2 < 0) {
    param_2[1] = 0;
    *param_2 = 0;
    return uVar2;
  }
  uVar1 = *(undefined4 *)((int)param_1 + 0x44);
  param_2[1] = *(undefined4 *)((int)param_1 + 0x48);
  *param_2 = uVar1;
  return 0;
}



undefined4 FUN_5f304a60(HDC param_1,uint param_2,int param_3)

{
  HDC this;
  uint uVar1;
  HDC hdc;
  int iVar2;
  
  uVar1 = param_2;
  this = param_1;
  if ((param_3 < 0) || ((param_2 == 0 && (param_3 == 0)))) {
    return 0x800a017c;
  }
  if ((param_3 != 0) || (0x270fd8f0 < param_2)) {
    return 0x800a0006;
  }
  hdc = (HDC)param_1[0x27].unused;
  if ((HDC)param_1[0x27].unused == (HDC)0x0) {
    FUN_5f3119b0(&DAT_5f321178,(int *)&param_1);
    hdc = param_1;
  }
  iVar2 = GetDeviceCaps(hdc,0x5a);
  if (0x7fff < (iVar2 * (uVar1 / 10000)) / 0x48) {
    return 0x800a0006;
  }
  if (this[0x11].unused != uVar1) {
    this[0x11].unused = uVar1;
    this[0x12].unused = 0;
    FUN_5f306460(this,1,2);
  }
  return 0;
}



uint FUN_5f304b20(void *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = (uint)(0x226 < *(short *)((int)param_1 + 0x56));
  return 0;
}



uint FUN_5f304ba0(void *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = *(byte *)((int)param_1 + 0x58) >> 1 & 1;
  return 0;
}



undefined4 FUN_5f304be0(void *param_1,uint param_2)

{
  if ((*(byte *)((int)param_1 + 0x58) >> 1 & 1) != param_2) {
    *(byte *)((int)param_1 + 0x58) =
         ((byte)param_2 & 1) << 1 | *(byte *)((int)param_1 + 0x58) & 0xfd;
    FUN_5f306460(param_1,1,4);
  }
  return 0;
}



uint FUN_5f304c20(void *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = (*(byte *)((int)param_1 + 0x58) & 4) >> 2;
  return 0;
}



undefined4 FUN_5f304c60(void *param_1,uint param_2)

{
  if ((*(byte *)((int)param_1 + 0x58) & 4) >> 2 != param_2) {
    *(byte *)((int)param_1 + 0x58) =
         ((byte)param_2 & 1) << 2 | *(byte *)((int)param_1 + 0x58) & 0xfb;
    FUN_5f306460(param_1,1,5);
  }
  return 0;
}



uint FUN_5f304ca0(void *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = (*(byte *)((int)param_1 + 0x58) & 8) >> 3;
  return 0;
}



undefined4 FUN_5f304ce0(void *param_1,uint param_2)

{
  if ((*(byte *)((int)param_1 + 0x58) & 8) >> 3 != param_2) {
    *(byte *)((int)param_1 + 0x58) =
         ((byte)param_2 & 1) << 3 | *(byte *)((int)param_1 + 0x58) & 0xf7;
    FUN_5f306460(param_1,1,6);
  }
  return 0;
}



uint FUN_5f304d20(void *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = *(undefined2 *)((int)param_1 + 0x56);
  return 0;
}



uint FUN_5f304da0(void *param_1,undefined2 *param_2)

{
  uint uVar1;
  
  if (param_2 == (undefined2 *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = *(undefined2 *)((int)param_1 + 0x54);
  return 0;
}



uint FUN_5f304e30(void *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar1 = FUN_5f306030(param_1);
  if ((int)uVar1 < 0) {
    *param_2 = 0;
    return uVar1;
  }
  *param_2 = *(undefined4 *)((int)param_1 + 0xa0);
  return 0;
}



uint FUN_5f304e70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  uVar2 = FUN_5f306030(param_1);
  if ((int)uVar2 < 0) {
    *param_2 = 0;
    return uVar2;
  }
  puVar3 = (undefined4 *)FUN_5f312aa0(0xb0);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_5f304250(puVar3);
  }
  if (piVar4 == (int *)0x0) {
    *param_2 = 0;
    return 0x8007000e;
  }
  (**(code **)(*piVar4 + 4))(piVar4);
  iVar1 = param_1[0x29];
  piVar4[0x28] = param_1[0x28];
  piVar4[0x29] = iVar1;
  piVar6 = param_1 + 0x11;
  piVar7 = piVar4 + 0x11;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if (iVar1 != -1) {
    piVar6 = (int *)(DAT_5f3210d4 + 0xb0 + iVar1 * 0xf4);
    *piVar6 = *piVar6 + 1;
  }
  *param_1 = piVar4;
  return 0;
}



undefined4 FUN_5f3050a0(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return 0x80070057;
  }
  uVar3 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  uVar1 = DAT_5f3210d4 + DAT_5f3210d0 * 0xf4;
  uVar2 = DAT_5f3210d4;
  if (DAT_5f3210d4 < uVar1) {
    while (*(int *)(uVar2 + 0xb4) != param_2) {
      uVar2 = uVar2 + 0xf4;
      if (uVar1 <= uVar2) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
        return 1;
      }
    }
    InterlockedIncrement((LONG *)(uVar2 + 0xb0));
    uVar3 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  return uVar3;
}



undefined4 FUN_5f305120(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0x80070057;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  uVar1 = DAT_5f3210d4 + DAT_5f3210d0 * 0xf4;
  uVar2 = DAT_5f3210d4;
  if (DAT_5f3210d4 < uVar1) {
    while (*(int *)(uVar2 + 0xb4) != param_2) {
      uVar2 = uVar2 + 0xf4;
      if (uVar1 <= uVar2) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
        return 1;
      }
    }
    if (*(int *)(uVar2 + 0xb0) != 0) {
      *(int *)(uVar2 + 0xb0) = *(int *)(uVar2 + 0xb0) + -1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
      return 0;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  return 1;
}



undefined4 FUN_5f305710(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0xbe35203;
  param_2[1] = 0x11ce8f91;
  param_2[2] = 0xaa00e39d;
  param_2[3] = 0x51b84b00;
  return 0;
}



void __cdecl FUN_5f305950(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_20 [7];
  undefined4 local_4;
  
  if (param_1 != (int *)0x0) {
    puVar1 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_4 = param_3;
    (**(code **)(*param_1 + 0xc))(param_1,param_2,local_20);
  }
  return;
}



int __cdecl FUN_5f305990(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,param_4);
  if (iVar1 < 0) {
    FUN_5f305950(param_4,param_2,iVar1);
  }
  return iVar1;
}



undefined4 __thiscall FUN_5f305e10(void *this,HGDIOBJ param_1,LPTEXTMETRICW param_2,LPWSTR param_3)

{
  HGDIOBJ h;
  HDC hdc;
  HDC local_4;
  
  hdc = *(HDC *)((int)this + 0x9c);
  local_4 = (HDC)this;
  if (*(HDC *)((int)this + 0x9c) == (HDC)0x0) {
    FUN_5f3119b0(&DAT_5f321178,(int *)&local_4);
    hdc = local_4;
  }
  h = SelectObject(hdc,param_1);
  FUN_5f305e70(hdc,param_2);
  FUN_5f305fd0(hdc,0x20,param_3);
  SelectObject(hdc,h);
  return 0;
}



BOOL __cdecl FUN_5f305e70(HDC param_1,LPTEXTMETRICW param_2)

{
  LPTEXTMETRICW ptVar1;
  BOOL BVar2;
  WCHAR aWStack_3c [2];
  tagTEXTMETRICA local_38;
  
  if (DAT_5f321230 == 0) {
    BVar2 = GetTextMetricsW(param_1,param_2);
    return BVar2;
  }
  BVar2 = GetTextMetricsA(param_1,&local_38);
  ptVar1 = param_2;
  if (BVar2 == 0) {
    return 0;
  }
  param_2->tmHeight = local_38.tmHeight;
  param_2->tmAscent = local_38.tmAscent;
  param_2->tmInternalLeading = local_38.tmInternalLeading;
  param_2->tmExternalLeading = local_38.tmExternalLeading;
  param_2->tmMaxCharWidth = local_38.tmMaxCharWidth;
  param_2->tmDescent = local_38.tmDescent;
  param_2->tmWeight = local_38.tmWeight;
  param_2->tmDigitizedAspectX = local_38.tmDigitizedAspectX;
  param_2->tmAveCharWidth = local_38.tmAveCharWidth;
  param_2->tmDigitizedAspectY = local_38.tmDigitizedAspectY;
  param_2->tmOverhang = local_38.tmOverhang;
  param_1 = (HDC)(CONCAT31((int3)((uint)param_1 >> 8),local_38.tmFirstChar) & 0xffff00ff);
  MultiByteToWideChar(0,0,(LPCSTR)&param_1,2,aWStack_3c,2);
  ptVar1->tmFirstChar = aWStack_3c[0];
  param_1 = (HDC)CONCAT31(param_1._1_3_,local_38.tmLastChar);
  MultiByteToWideChar(0,0,(LPCSTR)&param_1,2,aWStack_3c,2);
  ptVar1->tmLastChar = aWStack_3c[0];
  param_1 = (HDC)CONCAT31(param_1._1_3_,local_38.tmDefaultChar);
  MultiByteToWideChar(0,0,(LPCSTR)&param_1,2,aWStack_3c,2);
  ptVar1->tmDefaultChar = aWStack_3c[0];
  param_1 = (HDC)CONCAT31(param_1._1_3_,local_38.tmBreakChar);
  MultiByteToWideChar(0,0,(LPCSTR)&param_1,2,aWStack_3c,2);
  ptVar1->tmBreakChar = aWStack_3c[0];
  ptVar1->tmItalic = local_38.tmItalic;
  ptVar1->tmUnderlined = local_38.tmUnderlined;
  ptVar1->tmCharSet = local_38.tmCharSet;
  ptVar1->tmStruckOut = local_38.tmStruckOut;
  ptVar1->tmPitchAndFamily = local_38.tmPitchAndFamily;
  return 1;
}



int __cdecl FUN_5f305fd0(HDC param_1,int param_2,LPWSTR param_3)

{
  int iVar1;
  CHAR local_20 [32];
  
  if (DAT_5f321230 != 0) {
    iVar1 = GetTextFaceA(param_1,param_2,local_20);
    MultiByteToWideChar(0,0,local_20,-1,param_3,0x20);
    return iVar1;
  }
  iVar1 = GetTextFaceW(param_1,param_2,param_3);
  return iVar1;
}



uint __fastcall FUN_5f306030(void *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  HDC pHVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  HDC pHStack_88;
  uint uStack_84;
  HDC pHStack_80;
  tagTEXTMETRICW tStack_7c;
  WCHAR aWStack_40 [32];
  
  piVar1 = (int *)((int)param_1 + 0xa4);
  if (*(int *)((int)param_1 + 0xa4) != -1) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  iVar3 = FUN_5f3064e0(param_1,piVar1);
  if (iVar3 == 0) {
    puVar7 = (undefined4 *)((int)param_1 + 0x44);
    iVar3 = DAT_5f3210d4 + *piVar1 * 0xf4;
    *(int *)(iVar3 + 0xb0) = *(int *)(DAT_5f3210d4 + 0xb0 + *piVar1 * 0xf4) + 1;
    *(undefined4 *)((int)param_1 + 0xa0) = *(undefined4 *)(iVar3 + 0xb4);
    puVar5 = (undefined4 *)(iVar3 + 0x58);
  }
  else {
    uVar8 = FUN_5f306780(piVar1);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    bVar2 = *(byte *)((int)param_1 + 0xac);
    if ((bVar2 & 3) != 0) {
      pHVar4 = *(HDC *)((int)param_1 + 0x9c);
      if (*(HDC *)((int)param_1 + 0x9c) == (HDC)0x0) {
        FUN_5f3119b0(&DAT_5f321178,(int *)&pHStack_80);
        pHVar4 = pHStack_80;
      }
      iVar3 = FUN_5f3061f0(pHVar4,(LPCWSTR)((int)param_1 + 0x5a),
                           (int)*(short *)((int)param_1 + 0x54),(undefined2 *)&uStack_84,
                           (byte)~bVar2 >> 1 & 1);
      if ((-1 < iVar3) && ((int)*(short *)((int)param_1 + 0x54) != (uStack_84 & 0xffff))) {
        *(short *)((int)param_1 + 0x54) = (short)uStack_84;
      }
    }
    uVar8 = FUN_5f306600(param_1,&pHStack_88);
    pHVar4 = pHStack_88;
    if (((int)uVar8 < 0) &&
       (pHVar4 = *(HDC *)((int)param_1 + 0xa0), *(HDC *)((int)param_1 + 0xa0) == (HDC)0x0)) {
      *piVar1 = -1;
      goto LAB_5f3061cc;
    }
    pHStack_88 = pHVar4;
    FUN_5f305e10(param_1,pHStack_88,&tStack_7c,aWStack_40);
    puVar7 = (undefined4 *)(DAT_5f3210d4 + *piVar1 * 0xf4);
    puVar7[0x2c] = *(int *)(DAT_5f3210d4 + 0xb0 + *piVar1 * 0xf4) + 1;
    puVar7[0x2d] = pHStack_88;
    puVar5 = (undefined4 *)((int)param_1 + 0x44);
    puVar6 = puVar7;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_5f306280(param_1,pHStack_88,&tStack_7c.tmHeight,aWStack_40);
    puVar7 = puVar7 + 0x16;
    puVar5 = (undefined4 *)((int)param_1 + 0x44);
  }
  bVar2 = *(byte *)((int)param_1 + 0xac);
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar8 = 0;
  *(byte *)((int)param_1 + 0xac) = bVar2 & 0xfc;
LAB_5f3061cc:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  return uVar8;
}



undefined4 __cdecl
FUN_5f3061f0(HDC param_1,LPCWSTR param_2,undefined4 param_3,undefined2 *param_4,int param_5)

{
  int iVar1;
  tagLOGFONTA *ptVar2;
  CHAR *pCVar3;
  int local_44;
  undefined4 local_40;
  tagLOGFONTA local_3c;
  
  ptVar2 = &local_3c;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    ptVar2->lfHeight = 0;
    ptVar2 = (tagLOGFONTA *)&ptVar2->lfWidth;
  }
  local_44 = -1;
  local_40 = param_3;
  local_3c.lfCharSet = '\x01';
  if (param_5 == 0) {
    local_3c.lfCharSet = (BYTE)param_3;
  }
  pCVar3 = local_3c.lfFaceName;
  iVar1 = FUN_5f312c10(param_2);
  FUN_5f307850(param_2,iVar1,pCVar3);
  EnumFontFamiliesExA(param_1,&local_3c,(FONTENUMPROCA)&LAB_5f304210,(LPARAM)&local_44,0);
  if (local_44 == -1) {
    return 0x80004005;
  }
  *param_4 = (short)local_44;
  return 0;
}



undefined4 __thiscall FUN_5f306280(void *this,HDC param_1,int *param_2,short *param_3)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  HDC hdc;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  longlong lVar10;
  undefined4 local_10;
  undefined4 uStack_4;
  
  *(HDC *)((int)this + 0xa0) = param_1;
  bVar2 = *(byte *)((int)param_2 + 0x35);
  piVar7 = param_2;
  piVar8 = (int *)(DAT_5f3210d4 + 0xb8 + *(int *)((int)this + 0xa4) * 0xf4);
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  bVar3 = *(byte *)((int)param_2 + 0x36);
  bVar4 = *(byte *)(param_2 + 0xd);
  iVar6 = param_2[3];
  *(short *)((int)this + 0x56) = (short)param_2[7];
  param_1 = *(HDC *)((int)this + 0x4c);
  iVar5 = *param_2;
  *(byte *)((int)this + 0x58) =
       (((bVar3 & 1) << 1 | bVar2 & 1) << 1 | bVar4 & 1) << 1 | *(byte *)((int)this + 0x58) & 0xf1;
  bVar2 = *(byte *)(param_2 + 0xe);
  *(ushort *)((int)this + 0x54) = (ushort)bVar2;
  if ((param_1 == (HDC)0x1) && (*(int *)((int)this + 0x50) == 1)) {
    hdc = *(HDC *)((int)this + 0x9c);
    if (*(HDC *)((int)this + 0x9c) == (HDC)0x0) {
      FUN_5f3119b0(&DAT_5f321178,(int *)&param_1);
      hdc = param_1;
    }
    param_1 = (HDC)GetDeviceCaps(hdc,0x5a);
    uStack_4 = (undefined4)((ulonglong)(double)(int)param_1 >> 0x20);
    FUN_5f306400(uStack_4,(double)(iVar5 - iVar6) * 720000.0,(double)(int)param_1);
    lVar10 = __ftol();
    *(int *)((int)this + 0x44) = (int)lVar10;
  }
  else {
    fVar9 = FUN_5f306400((uint)(ushort)bVar2,(double)(iVar5 - iVar6) * 72000.0,254.0);
    dVar1 = (double)(fVar9 * (float10)*(int *)((int)this + 0x50));
    local_10 = SUB84(dVar1,0);
    FUN_5f306400(local_10,dVar1,(double)(int)param_1);
    lVar10 = __ftol();
    *(int *)((int)this + 0x44) = (int)lVar10;
    iVar6 = FUN_5f311710((int)lVar10,100);
    *(int *)((int)this + 0x44) = iVar6 * 100;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  FUN_5f312c30((short *)((int)this + 0x5a),param_3);
  return 0;
}



float10 __thiscall FUN_5f306400(undefined4 param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_5f312d0a(param_1);
  fVar2 = (float10)(param_2 / param_3);
  if (ABS(param_3) - (double)ABS(fVar1) <= (double)ABS(fVar1)) {
    fVar1 = (float10)(param_2 / param_3);
    if ((float10)0.0 <= fVar2) {
      return fVar1 - (float10)-1.0;
    }
    fVar2 = fVar1 - (float10)1.0;
  }
  return fVar2;
}



undefined4 __thiscall FUN_5f306460(void *this,int param_1,int param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  iVar1 = *(int *)((int)this + 0xa4);
  if (iVar1 != -1) {
    *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
    *(int *)(DAT_5f3210d4 + 0xb0 + iVar1 * 0xf4) = *(int *)(DAT_5f3210d4 + 0xb0 + iVar1 * 0xf4) + -1
    ;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
  if (param_1 != 0) {
    FUN_5f303ee0((void *)((int)this + 0x18),param_2);
    FUN_5f306c20((void *)((int)this + 0x30),param_2);
  }
  return 0;
}



undefined4 __thiscall FUN_5f3064e0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = 0;
  if (0 < DAT_5f3210d0) {
    piVar4 = DAT_5f3210d4 + 0x1b;
    piVar3 = DAT_5f3210d4;
    do {
      if ((piVar4[0x12] != 0) &&
         (((((*piVar3 == *(int *)((int)this + 0x44) &&
             (iVar1 = FUN_5f312b10((ushort *)((int)piVar4 + -0x56),(ushort *)((int)this + 0x5a)),
             iVar1 == 0)) && ((char)piVar4[-0x16] == *(char *)((int)this + 0x58))) &&
           (((*(short *)((int)piVar4 + -0x5a) == *(short *)((int)this + 0x56) &&
             ((short)piVar4[-0x17] == *(short *)((int)this + 0x54))) &&
            ((piVar4[-0x19] == *(int *)((int)this + 0x4c) &&
             ((piVar4[-0x18] == *(int *)((int)this + 0x50) &&
              (piVar4[-0x1a] == *(int *)((int)this + 0x48))))))))) ||
          ((piVar4[-5] == *(int *)((int)this + 0x44) &&
           (((((iVar1 = FUN_5f312b10((ushort *)((int)piVar4 + 2),(ushort *)((int)this + 0x5a)),
               iVar1 == 0 && ((char)*piVar4 == *(char *)((int)this + 0x58))) &&
              (*(short *)((int)piVar4 + -2) == *(short *)((int)this + 0x56))) &&
             (((short)piVar4[-1] == *(short *)((int)this + 0x54) &&
              (piVar4[-3] == *(int *)((int)this + 0x4c))))) &&
            ((piVar4[-2] == *(int *)((int)this + 0x50) && (piVar4[-4] == *(int *)((int)this + 0x48))
             ))))))))) {
        *param_1 = iVar2;
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x3d;
      piVar4 = piVar4 + 0x3d;
    } while (iVar2 < DAT_5f3210d0);
  }
  return 1;
}



uint __thiscall FUN_5f306600(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  HDC hdc;
  HFONT pHVar3;
  DWORD DVar4;
  uint extraout_ECX;
  uint uVar5;
  float10 fVar6;
  longlong lVar7;
  double dVar8;
  CHAR *pCVar10;
  double dVar9;
  double local_4c;
  uint local_44;
  undefined4 uStack_40;
  LOGFONTA LStack_3c;
  
  pCVar10 = LStack_3c.lfFaceName;
  LStack_3c.lfPitchAndFamily = '\0';
  LStack_3c.lfEscapement = 0;
  LStack_3c.lfOrientation = 0;
  LStack_3c.lfOutPrecision = '\0';
  LStack_3c.lfClipPrecision = '\0';
  LStack_3c.lfQuality = '\0';
  LStack_3c.lfWidth = 0;
  iVar2 = FUN_5f312c10((LPCWSTR)((int)this + 0x5a));
  FUN_5f307850((LPCWSTR)((int)this + 0x5a),iVar2,pCVar10);
  LStack_3c.lfWeight = (LONG)*(short *)((int)this + 0x56);
  LStack_3c.lfCharSet = *(BYTE *)((int)this + 0x54);
  bVar1 = *(byte *)((int)this + 0x58);
  LStack_3c.lfStrikeOut = bVar1 >> 3 & 1;
  LStack_3c.lfItalic = bVar1 >> 1 & 1;
  LStack_3c.lfUnderline = bVar1 >> 2 & 1;
  local_4c = (double)CONCAT44(local_4c._4_4_,*(int *)((int)this + 0x4c));
  if ((*(int *)((int)this + 0x4c) == 1) && (*(int *)((int)this + 0x50) == 1)) {
    hdc = *(HDC *)((int)this + 0x9c);
    if (*(HDC *)((int)this + 0x9c) == (HDC)0x0) {
      FUN_5f3119b0(&DAT_5f321178,(int *)&local_4c);
      hdc = local_4c._0_4_;
    }
    iVar2 = GetDeviceCaps(hdc,0x5a);
    uVar5 = *(uint *)((int)this + 0x44);
    local_4c = (double)(ulonglong)uVar5;
    dVar9 = 720000.0;
    dVar8 = (double)(longlong)local_4c * (double)iVar2;
    local_4c = dVar8;
  }
  else {
    local_44 = *(uint *)((int)this + 0x44);
    uStack_40 = 0;
    fVar6 = FUN_5f306400(local_44,(double)local_44 * 254.0,72000.0);
    dVar9 = (double)*(int *)((int)this + 0x50);
    dVar8 = (double)((float10)(int)local_4c._0_4_ * fVar6);
    uVar5 = extraout_ECX;
  }
  FUN_5f306400(uVar5,dVar8,dVar9);
  lVar7 = __ftol();
  LStack_3c.lfHeight = (LONG)lVar7;
  if (LStack_3c.lfHeight < 1) {
    LStack_3c.lfHeight = 1;
  }
  LStack_3c.lfHeight = -LStack_3c.lfHeight;
  pHVar3 = CreateFontIndirectA(&LStack_3c);
  if (pHVar3 == (HFONT)0x0) {
    DVar4 = GetLastError();
    if (DVar4 != 0) {
      DVar4 = GetLastError();
      return DVar4 & 0xffff | 0x80070000;
    }
  }
  else {
    *param_1 = pHVar3;
  }
  return 0;
}



undefined4 FUN_5f306780(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar3 = 0;
  piVar5 = DAT_5f3210d4;
  if (0 < DAT_5f3210d0) {
    do {
      if (piVar5[0x2c] == 0) {
        if ((HGDIOBJ)piVar5[0x2d] != (HGDIOBJ)0x0) {
          DeleteObject((HGDIOBJ)piVar5[0x2d]);
        }
        for (iVar2 = 0x3d; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        *param_1 = iVar3;
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x3d;
    } while (iVar3 < DAT_5f3210d0);
  }
  pvVar1 = FUN_5f3127c0(DAT_5f3210d4,(DAT_5f3210d0 + 8) * 0xf4);
  if (pvVar1 == (void *)0x0) {
    return 0x8007000e;
  }
  puVar4 = (undefined4 *)((int)pvVar1 + DAT_5f3210d0 * 0xf4);
  DAT_5f3210d4 = (int *)pvVar1;
  for (iVar3 = 0x1e8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *param_1 = DAT_5f3210d0;
  DAT_5f3210d0 = DAT_5f3210d0 + 8;
  return 0;
}



undefined4 FUN_5f3068a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_5f3210d4 = (undefined4 *)FUN_5f312780(0x7a0);
  if (DAT_5f3210d4 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar2 = DAT_5f3210d4;
  for (iVar1 = 0x1e8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_5f3210d0 = 8;
  return 0;
}



undefined4 FUN_5f3068e0(void)

{
  IMalloc *pIVar1;
  IMalloc *pIVar2;
  
  pIVar1 = DAT_5f3210d4 + DAT_5f3210d0 * 0x3d;
  pIVar2 = DAT_5f3210d4;
  if (DAT_5f3210d4 < pIVar1) {
    do {
      if (pIVar2[0x2d].lpVtbl != (IMallocVtbl *)0x0) {
        DeleteObject(pIVar2[0x2d].lpVtbl);
      }
      pIVar2 = pIVar2 + 0x3d;
    } while (pIVar2 < pIVar1);
  }
  DAT_5f3210d0 = 0;
  FUN_5f312800(DAT_5f3210d4);
  DAT_5f3210d8 = 0;
  return 0;
}



undefined4 * __thiscall FUN_5f306950(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_5f3023c8;
  FUN_5f303b60((undefined4 *)((int)this + 0xc));
  *(undefined ***)this = &PTR_LAB_5f302740;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  return (undefined4 *)this;
}



void __fastcall FUN_5f306980(undefined4 *param_1)

{
  uint *this;
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  this = param_1 + 3;
  *param_1 = &PTR_LAB_5f302740;
  uVar1 = FUN_5f303bf0(this);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = (int *)FUN_5f303c00(this,uVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_5f303bd0(this);
  return;
}



undefined4 __thiscall FUN_5f306c20(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined2 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10 [4];
  BSTR local_8;
  
  piVar1 = &DAT_5f3210e8;
  puVar4 = (undefined4 *)0x0;
  iVar3 = 0;
  do {
    if (*piVar1 == param_1) {
      puVar4 = &DAT_5f3210e8 + iVar3 * 2;
      break;
    }
    piVar1 = piVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (piVar1 < &DAT_5f321128);
  if (puVar4 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  local_10[0] = 8;
  local_8 = SysAllocString((OLECHAR *)puVar4[1]);
  if (local_8 != (BSTR)0x0) {
    local_20 = local_10;
    local_1c = 0;
    local_18 = 1;
    local_14 = 0;
    uVar2 = FUN_5f303bf0((undefined4 *)((int)this + 0xc));
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        piVar1 = (int *)FUN_5f303c00((undefined4 *)((int)this + 0xc),uVar5);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x18))(piVar1,9,&DAT_5f3038f0,0,1,&local_20,0,0,0);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    SysFreeString(local_8);
    return 0;
  }
  return 0x8007000e;
}



uint __thiscall FUN_5f306e00(void *this,IStream *param_1,int *param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  DWORD DVar3;
  char *this_00;
  uint uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  int iVar5;
  HRESULT HVar6;
  uint uVar7;
  int *unaff_EBP;
  undefined **ppuVar8;
  undefined4 *unaff_retaddr;
  IStorage *local_40;
  int iStack_3c;
  LPLOCKBYTES local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c [40];
  int *piStack_4;
  
  if (param_1 == (IStream *)0x0) {
    return 0x80004003;
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  uVar4 = (uint)(*param_2 != 0);
  if (((uint)param_1[4].lpVtbl & 0xc) == 0) {
    return 0x80070057;
  }
  local_30 = (uint)param_1[4].lpVtbl & 4;
  local_40 = (IStorage *)0x0;
  param_1 = (IStream *)0x0;
  local_34 = uVar4;
  if (local_30 == 0) {
    if (uVar4 == 0) {
      local_38 = (ILockBytes *)0x0;
      uVar7 = CreateILockBytesOnHGlobal((HGLOBAL)0x0,1,&local_38);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      uVar7 = StgCreateDocfileOnILockBytes(local_38,0x1012,0,&local_40);
      (*local_38->lpVtbl->Release)(local_38);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
    }
    else {
      local_40 = (IStorage *)param_2[1];
    }
    uVar7 = (*local_40->lpVtbl->CreateStream)(local_40,L"Contents",0x1012,0,0,&param_1);
    if ((int)uVar7 < 0) {
      if (uVar4 == 0) {
        (*local_40->lpVtbl->Release)(local_40);
      }
      return uVar7;
    }
  }
  else if (uVar4 == 0) {
    HVar6 = CreateStreamOnHGlobal((HGLOBAL)0x0,1,&param_1);
    if (HVar6 < 0) {
      return 0x8007000e;
    }
  }
  else {
    param_1 = (IStream *)param_2[1];
  }
  FUN_5f310dd0(local_2c,0xbe35203,0x11ce8f91,0xaa00e39d,0x51b84b00);
  DVar3 = GetVersion();
  FUN_5f311110(local_2c,DVar3 & 0xffff | 0x10000);
  this_00 = FUN_5f310ee0(local_2c,*param_3,param_3[1],param_3[2],param_3[3]);
  if (this_00 == (char *)0x0) {
    if ((uVar4 == 0) && ((*param_1->lpVtbl->Release)(param_1), local_40 != (IStorage *)0x0)) {
      (*local_40->lpVtbl->Release)(local_40);
    }
    FUN_5f310e30((int)local_2c);
    return 0x8007000e;
  }
  FUN_5f310d40(this_00,u_Font_5f31d1c0);
  uVar4 = FUN_5f306030(this);
  if (-1 < (int)uVar4) {
                    // WARNING: Load size is inaccurate
    uVar4 = (**(code **)(*this + 0xc))(this,&param_3);
    if ((int)uVar4 < 0) {
      FUN_5f310e30((int)&local_34);
      return uVar4;
    }
    bVar2 = FUN_5f3100b0(this_00,2,(LPCWSTR)param_1,8);
    SysFreeString((BSTR)param_1);
    if (((((CONCAT31(extraout_var,bVar2) != 0) &&
          (bVar2 = FUN_5f3100b0(this_00,10,(LPCWSTR)((int)this + 0x54),2),
          CONCAT31(extraout_var_00,bVar2) != 0)) &&
         (bVar2 = FUN_5f3100b0(this_00,9,(LPCWSTR)((int)this + 0x56),2),
         CONCAT31(extraout_var_01,bVar2) != 0)) &&
        ((bVar2 = FUN_5f3100b0(this_00,4,(LPCWSTR)((int)this + 0x44),6),
         CONCAT31(extraout_var_02,bVar2) != 0 &&
         (bVar2 = FUN_5f3100b0(this_00,7,(LPCWSTR)&stack0xffffffbc,0xb),
         CONCAT31(extraout_var_03,bVar2) != 0)))) &&
       ((bVar2 = FUN_5f3100b0(this_00,6,(LPCWSTR)&stack0xffffffbc,0xb),
        CONCAT31(extraout_var_04,bVar2) != 0 &&
        (bVar2 = FUN_5f3100b0(this_00,8,(LPCWSTR)&stack0xffffffbc,0xb),
        CONCAT31(extraout_var_05,bVar2) != 0)))) {
      ppuVar8 = &PTR_u_Name_5f302470;
      do {
        if (ppuVar8[2] != (undefined *)0x3) {
          FUN_5f310940(this_00,ppuVar8[2] + 2,(LPCWSTR)*ppuVar8);
        }
        ppuVar1 = ppuVar8 + 3;
        ppuVar8 = ppuVar8 + 3;
      } while (*ppuVar1 != (undefined *)0x0);
      iVar5 = FUN_5f311120(&local_34,piStack_4);
      if (iVar5 != 0) {
        if (local_38 == (ILockBytes *)0x0) {
          (**(code **)(*piStack_4 + 8))(piStack_4);
          unaff_retaddr[1] = unaff_EBP;
          *unaff_retaddr = 8;
        }
        else {
          unaff_retaddr[1] = piStack_4;
          *unaff_retaddr = 4;
        }
        unaff_retaddr[2] = 0;
        FUN_5f310e30((int)&local_34);
        return 0;
      }
      if ((iStack_3c == 0) && ((**(code **)(*piStack_4 + 8))(piStack_4), unaff_EBP != (int *)0x0)) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      }
    }
    FUN_5f310e30((int)&local_34);
    return 0x80004005;
  }
  FUN_5f310e30((int)local_2c);
  return uVar4;
}



// WARNING: Type propagation algorithm not settling

int __thiscall FUN_5f3071d0(void *this,int *param_1,ushort *param_2,char *param_3)

{
  ushort *puVar1;
  char *pcVar2;
  int *this_00;
  OLECHAR *psz;
  uint uVar3;
  int iVar4;
  int iVar5;
  VARTYPE VVar6;
  char *pcVar7;
  _union_2685 *p_Var8;
  bool bVar9;
  int *local_64;
  int iStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  char *pcStack_54;
  LONG *local_50;
  undefined1 auStack_4c [16];
  VARIANTARG VStack_3c;
  undefined2 local_2c [22];
  
  iVar5 = 0;
  FUN_5f310d70(local_2c);
  if ((param_1 == (int *)0x0) || (param_2 == (ushort *)0x0)) {
    FUN_5f310e30((int)local_2c);
    return -0x7fffbffd;
  }
  iVar4 = 0x10;
  bVar9 = true;
  pcVar2 = param_3;
  pcVar7 = &DAT_5f303900;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *pcVar2 == *pcVar7;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (!bVar9) {
    FUN_5f310e30((int)local_2c);
    return -0x7ff8ffa9;
  }
  local_50 = (LONG *)((int)this + 0x2c);
  param_1 = (int *)0x0;
  local_64 = (int *)0x0;
  InterlockedIncrement(local_50);
  if (*(int *)param_2 == 4) {
    local_64 = *(int **)(param_2 + 2);
    param_1 = (int *)0x0;
  }
  else {
    if (*(int *)param_2 != 8) {
      iVar5 = -0x7ff8ffa9;
      goto LAB_5f3074c3;
    }
    param_1 = *(int **)(param_2 + 2);
    if (param_1 == (int *)0x0) {
      iVar5 = -0x7fffbffd;
      goto LAB_5f3074c3;
    }
    iVar5 = (**(code **)(*param_1 + 0x10))(param_1,L"Contents",0,0x10,0,&local_64);
    if (iVar5 < 0) goto LAB_5f3074c3;
  }
  iVar4 = FUN_5f311260(local_2c,local_64);
  if ((iVar4 == 0) ||
     (pcVar2 = FUN_5f310ea0((int)local_2c), pcStack_54 = pcVar2, pcVar2 == (char *)0x0)) {
LAB_5f3074be:
    iVar5 = -0x7fffbffb;
  }
  else {
    param_2 = &DAT_5f302474;
    do {
      iVar4 = FUN_5f3108b0(pcVar2,*(LPCWSTR *)(param_2 + -2),&iStack_60);
      if ((iVar4 != 0) &&
         (this_00 = FUN_5f310200(pcVar2,iStack_60), piStack_58 = this_00, this_00 != (int *)0x0)) {
        psz = (OLECHAR *)FUN_5f30f9c0(this_00,(int *)&param_3);
        if (psz == (OLECHAR *)0x0) goto LAB_5f3074be;
        uVar3 = FUN_5f30fac0((int)this_00);
        if (uVar3 != *param_2) {
          uStack_5c = FUN_5f30fac0((int)this_00);
          VVar6 = (VARTYPE)uStack_5c;
          auStack_4c._0_2_ = VVar6;
          if ((VVar6 == 8) || (VVar6 == 0x1f)) {
            auStack_4c._8_4_ = SysAllocString(psz);
          }
          else {
            p_Var8 = &(((_union_2683 *)auStack_4c)->n2).n3;
            for (uVar3 = (uint)param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              p_Var8->lVal = *(LONG *)psz;
              psz = psz + 2;
              p_Var8 = (_union_2685 *)(&p_Var8->lVal + 1);
            }
            for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              p_Var8->cVal = (CHAR)*psz;
              psz = (OLECHAR *)((int)psz + 1);
              p_Var8 = (_union_2685 *)((int)p_Var8 + 1);
            }
          }
          VariantInit(&VStack_3c);
          iVar5 = VariantChangeType(&VStack_3c,(VARIANTARG *)&((_union_2683 *)auStack_4c)->n2,1,
                                    *param_2);
          if ((VVar6 == 8) || (VVar6 == 0x1f)) {
            SysFreeString((BSTR)auStack_4c._8_4_);
          }
          if (iVar5 < 0) break;
          psz = (OLECHAR *)((int)&VStack_3c.n1 + 8);
          this_00 = piStack_58;
        }
        switch(*(undefined4 *)(param_2 + 2)) {
        case 0:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x10))(this,psz);
          iVar4 = FUN_5f30fac0((int)this_00);
          if (iVar4 != 8) {
            VariantClear(&VStack_3c);
          }
          break;
        default:
          iVar5 = 0;
          break;
        case 2:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x18))(this,*(undefined4 *)psz,*(undefined4 *)(psz + 2));
          break;
        case 3:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x20))(this,(int)*psz);
          break;
        case 4:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x28))(this,(int)*psz);
          break;
        case 5:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x30))(this,(int)*psz);
          break;
        case 6:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x38))(this,(int)*psz);
          break;
        case 7:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x40))
                            (this,CONCAT22((short)((uint)*(undefined4 *)(param_2 + 2) >> 0x10),*psz)
                            );
          break;
        case 8:
                    // WARNING: Load size is inaccurate
          iVar5 = (**(code **)(*this + 0x48))(this,*psz);
        }
        pcVar2 = pcStack_54;
        if (iVar5 < 0) break;
      }
      puVar1 = param_2 + 4;
      param_2 = param_2 + 6;
    } while (*(int *)puVar1 != 0);
  }
LAB_5f3074c3:
  if (param_1 != (int *)0x0) {
    (**(code **)(*local_64 + 8))(local_64);
  }
  InterlockedDecrement(local_50);
  FUN_5f310e30((int)local_2c);
  return iVar5;
}



void FUN_5f307640(void)

{
  DWORD DVar1;
  
  if (DAT_5f321128 == 0) {
    DVar1 = GetVersion();
    DAT_5f321128 = CONCAT11((char)DVar1,(char)(DVar1 >> 8));
  }
  return;
}



undefined4 FUN_5f307670(DWORD param_1,tagPALETTEENTRY param_2,DWORD *param_3)

{
  ushort uVar1;
  uint uVar2;
  UINT UVar3;
  
  uVar2 = param_1 & 0xff000000;
  if (uVar2 < 0x1000001) {
    if (uVar2 == 0x1000000) {
      if ((param_1 & 0xffff0000) != 0x1000000) {
        return 0x80070057;
      }
      if ((param_2 != (tagPALETTEENTRY)0x0) &&
         (UVar3 = GetPaletteEntries((HPALETTE)param_2,param_1 & 0xffff,1,&param_2), UVar3 == 0)) {
        return 0x80070057;
      }
    }
    else {
      if (uVar2 != 0) {
        return 0x80070057;
      }
      if (param_2 != (tagPALETTEENTRY)0x0) {
        param_1 = param_1 | 0x2000000;
      }
    }
    goto switchD_5f307747_default;
  }
  if (uVar2 == 0x2000000) goto switchD_5f307747_default;
  if (uVar2 != 0x80000000) {
    return 0x80070057;
  }
  uVar2 = param_1 & 0xffff;
  if (0x18 < uVar2) {
    return 0x80070057;
  }
  if (param_3 == (DWORD *)0x0) {
    return 0;
  }
  uVar1 = FUN_5f307640();
  if ((0x35e < uVar1) || (uVar2 < 0x15)) goto LAB_5f307762;
  switch(uVar2) {
  case 0x15:
    uVar2 = 6;
    goto LAB_5f307762;
  case 0x16:
    uVar2 = 0xf;
LAB_5f307762:
    param_1 = GetSysColor(uVar2);
    break;
  case 0x17:
    param_1 = 0;
    break;
  case 0x18:
    param_1 = 0x80ffff;
  }
switchD_5f307747_default:
  if (param_3 != (DWORD *)0x0) {
    *param_3 = param_1;
  }
  return 0;
}



int __cdecl FUN_5f307790(LPCSTR param_1,LPCSTR param_2,undefined4 *param_3)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryA(param_1);
  if (hModule == (HMODULE)0x0) {
    return -0x7ffbfe08;
  }
  pFVar1 = GetProcAddress(hModule,param_2);
  *param_3 = pFVar1;
  return (-(uint)(pFVar1 != (FARPROC)0x0) & 0x7fff0001) + 0x8000ffff;
}



undefined4 __cdecl FUN_5f3077d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_5f32112c == (code *)0x0) {
    iVar1 = FUN_5f307790(s_comctl32_dll_5f31d1d0,s_PropertySheetA_5f31d1e0,&DAT_5f32112c);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = (*DAT_5f32112c)(param_1);
  return uVar2;
}



undefined4 __cdecl FUN_5f307810(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_5f321130 == (code *)0x0) {
    iVar1 = FUN_5f307790(s_comctl32_dll_5f31d1d0,s_CreatePropertySheetPageA_5f31d1f0,&DAT_5f321130);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uVar2 = (*DAT_5f321130)(param_1);
  return uVar2;
}



void __cdecl FUN_5f307850(LPCWSTR param_1,int param_2,LPSTR param_3)

{
  WideCharToMultiByte(0,0,param_1,param_2 + 1,param_3,param_2 * 2 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
  return;
}



undefined4 __cdecl FUN_5f307880(LPCWSTR param_1,undefined4 *param_2)

{
  int iVar1;
  LPSTR pCVar2;
  
  iVar1 = FUN_5f312c10(param_1);
  pCVar2 = (LPSTR)FUN_5f312780(iVar1 * 2 + 2);
  *param_2 = pCVar2;
  if (pCVar2 == (LPSTR)0x0) {
    return 0x8007000e;
  }
  FUN_5f307850(param_1,iVar1,pCVar2);
  return 0;
}



void __cdecl FUN_5f3078c0(LPCSTR param_1,int param_2,LPWSTR param_3)

{
  MultiByteToWideChar(0,0,param_1,param_2 + 1,param_3,param_2 + 1);
  return;
}



undefined4 __cdecl FUN_5f3078e0(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  LPWSTR pWVar2;
  uint uVar3;
  int iVar4;
  LPCSTR pCVar5;
  
  uVar3 = 0xffffffff;
  pCVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  pWVar2 = (LPWSTR)FUN_5f312780(~uVar3 + 1 + iVar4);
  *param_2 = pWVar2;
  if (pWVar2 == (LPWSTR)0x0) {
    return 0x8007000e;
  }
  FUN_5f3078c0(param_1,iVar4,pWVar2);
  return 0;
}



undefined4 * __thiscall FUN_5f307960(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this_00;
  LPCWSTR pWVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *unaff_ESI;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  int *local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  undefined *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  char local_10 [16];
  
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 8) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar5;
  iVar7 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)this = 0x28;
  *(undefined4 *)((int)this + 4) = 0x501;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 **)((int)this + 0x24) = &LAB_5f307930;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  local_20 = (undefined *)0x0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  if (iVar7 == 0) {
    FUN_5f308060(this,&local_20);
  }
  else {
    local_30 = (undefined4 *)0x0;
    if (0 < iVar7) {
      local_34 = (int *)0x0;
      do {
        iVar7 = local_1c;
        puVar8 = (undefined4 *)((int)local_34 + *(int *)(param_1 + 0x20));
        FUN_5f309090(&local_20,local_1c + 1,-1);
        puVar9 = (undefined4 *)(local_20 + iVar7 * 0x10);
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        local_30 = (undefined4 *)((int)local_30 + 1);
        puVar9[3] = puVar8[3];
        local_34 = local_34 + 4;
      } while ((int)local_30 < *(int *)(param_1 + 0x1c));
    }
  }
  FUN_5f308270(this,(int *)&local_20);
  iVar7 = *(int *)(param_1 + 0x28);
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[8] = '\0';
  local_10[9] = '\0';
  local_10[10] = '\0';
  local_10[0xb] = '\0';
  local_10[0xc] = '\0';
  local_10[0xd] = '\0';
  local_10[0xe] = '\0';
  local_10[0xf] = '\0';
  local_2c = iVar7;
  if ((iVar7 != -1) && (*(int *)((int)this + 0x28) != 0)) {
    local_34 = (int *)0x0;
    iVar4 = (*(code *)**(undefined4 **)**(undefined4 **)((int)this + 0x2c))
                      ((undefined4 *)**(undefined4 **)((int)this + 0x2c),&DAT_5f303910,&local_34);
    if (-1 < iVar4) {
      (**(code **)(*local_34 + 0x10))(local_34,iVar7,local_10);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  iVar7 = *(int *)((int)this + 0x38);
  local_28 = iVar7;
  if (iVar7 < 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_5f312aa0(iVar7 * 4);
    *(undefined4 **)((int)this + 0x20) = puVar8;
    local_34 = (int *)0x0;
    if (0 < iVar7) {
      iStack_24 = *(int *)((int)this + 0x34) - (int)puVar8;
      do {
        this_00 = *(void **)(iStack_24 + (int)puVar8);
        local_30 = puVar8;
        uVar5 = FUN_5f308910((int)this_00);
        *puVar8 = uVar5;
        FUN_5f308920(this_00,*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c));
        pcVar6 = (char *)FUN_5f308940((int)this_00);
        iVar7 = 0x10;
        bVar11 = true;
        pcVar10 = local_10;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar11 = *pcVar6 == *pcVar10;
          pcVar6 = pcVar6 + 1;
          pcVar10 = pcVar10 + 1;
        } while (bVar11);
        if (bVar11) {
          *(int **)((int)this + 0x1c) = local_34;
          FUN_5f308950(this_00,local_2c);
        }
        local_34 = (int *)((int)local_34 + 1);
        puVar8 = local_30 + 1;
        iVar7 = local_28;
        local_30 = puVar8;
      } while ((int)local_34 < local_28);
    }
  }
  pWVar3 = *(LPCWSTR *)(param_1 + 0x10);
  *(int *)((int)this + 0x18) = iVar7;
  if ((pWVar3 == (LPCWSTR)0x0) || (*pWVar3 == L'\0')) {
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  else {
    FUN_5f307880(pWVar3,(undefined4 *)((int)this + 0x14));
  }
  if (local_20 != (undefined *)0x0) {
    FUN_5f312ab0(local_20);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_5f307bc0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (0 < iVar3) {
    puVar4 = *(undefined4 **)(param_1 + 0x34);
    do {
      puVar1 = (undefined4 *)*puVar4;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_5f3088d0(puVar1);
        FUN_5f312ab0((undefined *)puVar1);
      }
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_5f308f20((undefined4 *)(param_1 + 0x34),0,0xffffffff);
  FUN_5f312ab0(*(undefined **)(param_1 + 0x20));
  if (*(IMalloc **)(param_1 + 0x14) != (IMalloc *)0x0) {
    FUN_5f312800(*(IMalloc **)(param_1 + 0x14));
  }
  puVar2 = *(undefined **)(param_1 + 0x34);
  if (puVar2 != (undefined *)0x0) {
    FUN_5f312ab0(puVar2);
  }
  return;
}



undefined4 __cdecl FUN_5f307c30(HWND param_1)

{
  LONG LVar1;
  
  if (DAT_5f321230 == 0) {
    LVar1 = GetWindowLongA(param_1,8);
    if (LVar1 != 0) {
      return *(undefined4 *)(LVar1 + 0x7c);
    }
  }
  return 0;
}



undefined4 __fastcall FUN_5f307c60(void *param_1)

{
  HWND hWnd;
  HWND pHVar1;
  uint uVar2;
  HWND hWnd_00;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  void *this;
  HWND pHVar6;
  tagMSG tStack_1c;
  
  if (*(int *)((int)param_1 + 0x38) < 1) {
    return 0;
  }
  hWnd = GetFocus();
  pHVar1 = (HWND)FUN_5f3077d0(param_1);
  if ((int)pHVar1 < 1) {
    return 0;
  }
  hWnd_00 = *(HWND *)((int)param_1 + 8);
  *(HWND *)((int)param_1 + 0x44) = pHVar1;
  if (hWnd_00 != (HWND)0x0) {
    uVar2 = GetWindowLongA(hWnd_00,-0x10);
    while ((uVar2 & 0x40000000) != 0) {
      hWnd_00 = GetParent(hWnd_00);
      uVar2 = GetWindowLongA(hWnd_00,-0x10);
    }
    BVar3 = EnableWindow(hWnd_00,0);
    if (BVar3 != 0) {
      hWnd_00 = (HWND)0x0;
    }
  }
  pHVar1 = (HWND)SendMessageA(pHVar1,0x476,0,0);
  if (pHVar1 != (HWND)0x0) {
    do {
      iVar4 = FUN_5f307c30(pHVar1);
      if (iVar4 != 0) {
        iVar5 = GetMessageW(&tStack_1c,(HWND)0x0,0,0);
      }
      else {
        iVar5 = GetMessageA(&tStack_1c,(HWND)0x0,0,0);
      }
      uVar2 = (uint)(iVar4 != 0);
      if (iVar5 == 0) break;
      if (((tStack_1c.message < 0x100) || (0x108 < tStack_1c.message)) ||
         ((iVar4 = FUN_5f307f00(param_1,(int *)&tStack_1c,uVar2), iVar4 != 0 &&
          ((this = (void *)GetWindowLongA(pHVar1,8), this == (void *)0x0 ||
           (iVar4 = FUN_5f308960(this,(LPARAM)&tStack_1c), iVar4 != 0)))))) {
        TranslateMessage(&tStack_1c);
        if (uVar2 == 0) {
          DispatchMessageA(&tStack_1c);
        }
        else {
          DispatchMessageW(&tStack_1c);
        }
      }
      pHVar1 = (HWND)SendMessageA(*(HWND *)((int)param_1 + 0x44),0x476,0,0);
    } while (pHVar1 != (HWND)0x0);
    if (pHVar1 != (HWND)0x0) {
      PostMessageA(*(HWND *)((int)param_1 + 0x44),0x471,5,0);
      PostQuitMessage(tStack_1c.wParam);
    }
  }
  pHVar1 = *(HWND *)((int)param_1 + 8);
  if ((pHVar1 != (HWND)0x0) &&
     (pHVar6 = GetActiveWindow(), pHVar6 == *(HWND *)((int)param_1 + 0x44))) {
    SetActiveWindow(pHVar1);
  }
  if (hWnd_00 != (HWND)0x0) {
    EnableWindow(hWnd_00,1);
  }
  BVar3 = IsWindow(hWnd);
  if (BVar3 != 0) {
    SetFocus(hWnd);
  }
  DestroyWindow(*(HWND *)((int)param_1 + 0x44));
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  return 1;
}



bool __cdecl FUN_5f307e50(HWND param_1,uint param_2)

{
  byte *pbVar1;
  LPSTR pCVar2;
  BOOL BVar3;
  LPSTR pCVar4;
  byte *lpsz;
  byte local_100 [256];
  
  pCVar2 = CharLowerA((LPSTR)(param_2 & 0xff));
  GetWindowTextA(param_1,(LPSTR)local_100,0x100);
  lpsz = local_100;
  if (local_100[0] == 0) {
    return false;
  }
  do {
    if (*lpsz == 0x26) {
      pbVar1 = lpsz + 1;
      lpsz = lpsz + 1;
      BVar3 = IsDBCSLeadByte(*pbVar1);
      if ((BVar3 == 0) && (*lpsz != 0x26)) {
        pCVar4 = CharLowerA((LPSTR)(uint)*lpsz);
        return (char)pCVar4 == (char)pCVar2;
      }
    }
    lpsz = (byte *)CharNextA((LPCSTR)lpsz);
    if (*lpsz == 0) {
      return false;
    }
  } while( true );
}



undefined4 __thiscall FUN_5f307f00(void *this,int *param_1,int param_2)

{
  bool bVar1;
  SHORT SVar2;
  HWND pHVar3;
  undefined3 extraout_var;
  HWND pHVar4;
  LRESULT LVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  undefined4 uVar7;
  
  SVar2 = GetKeyState(0x11);
  if (-1 < SVar2) {
    uVar7 = extraout_ECX;
    if ((param_1[1] == 0x106) ||
       ((param_1[1] == 0x102 &&
        (pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x44),0x3021), uVar7 = extraout_ECX_00,
        (HWND)*param_1 == pHVar3)))) {
      uVar6 = CONCAT31((int3)((uint)uVar7 >> 8),(char)param_1[2]);
      pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x44),0x3021);
      bVar1 = FUN_5f307e50(pHVar3,uVar6);
      if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_5f307fbe;
    }
    pHVar3 = GetFocus();
    if (pHVar3 == (HWND)0x0) {
      return 1;
    }
    if (param_1[1] != 0x100) {
      return 1;
    }
    if (param_1[2] == 9) {
      SVar2 = GetKeyState(0x10);
      if (SVar2 < 0) {
        pHVar4 = GetDlgItem(*(HWND *)((int)this + 0x44),1);
      }
      else {
        pHVar4 = (HWND)SendMessageA(*(HWND *)((int)this + 0x44),0x474,0,0);
      }
      if (pHVar3 == pHVar4) {
        return 1;
      }
    }
    pHVar3 = GetParent(pHVar3);
    if (pHVar3 != *(HWND *)((int)this + 0x44)) {
      return 1;
    }
  }
LAB_5f307fbe:
  if (param_2 == 0) {
    LVar5 = SendMessageA(*(HWND *)((int)this + 0x44),0x475,0,(LPARAM)param_1);
    if (LVar5 != 0) {
      return 0;
    }
  }
  else {
    LVar5 = SendMessageW(*(HWND *)((int)this + 0x44),0x475,0,(LPARAM)param_1);
    if (LVar5 != 0) {
      return 0;
    }
  }
  return 1;
}



undefined4 __thiscall FUN_5f308010(void *this,LPARAM param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  
  hWnd = *(HWND *)((int)this + 0x44);
  if (hWnd != (HWND)0x0) {
    if (param_2 == 0) {
      LVar1 = SendMessageA(hWnd,0x475,0,param_1);
      if (LVar1 != 0) {
        return 0;
      }
    }
    else {
      LVar1 = SendMessageW(hWnd,0x475,0,param_1);
      if (LVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}



void __thiscall FUN_5f308060(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  IMalloc *pIVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  IMalloc *pIVar14;
  undefined4 *puVar15;
  bool bVar16;
  int *piStack_34;
  IMalloc *local_2c;
  int iStack_28;
  IMalloc *local_24;
  int local_20;
  IMalloc *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_4;
  
  pIVar7 = *(IMalloc **)((int)this + 0x28);
  local_2c = (IMalloc *)0x0;
  local_24 = (IMalloc *)0x0;
  if (0 < (int)pIVar7) {
    local_20 = *(int *)((int)this + 0x2c);
    local_1c = pIVar7;
    while (pIVar14 = local_24, puVar6 = *(undefined4 **)(local_20 + (int)local_24 * 4),
          iVar4 = (**(code **)*puVar6)(puVar6,&DAT_5f303920,&local_2c), -1 < iVar4) {
      pvVar5 = (*local_2c->lpVtbl->Alloc)(local_2c,(SIZE_T)&uStack_18);
      if (-1 < (int)pvVar5) {
        if (pIVar14 == (IMalloc *)0x0) {
          iVar4 = 0;
          if (0 < local_20) {
            iVar10 = 0;
            do {
              iVar8 = piStack_4[1];
              puVar6 = (undefined4 *)((int)&local_1c->lpVtbl + iVar10);
              FUN_5f309090(piStack_4,iVar8 + 1,-1);
              uVar1 = puVar6[2];
              puVar11 = (undefined4 *)(iVar8 * 0x10 + *piStack_4);
              uVar2 = puVar6[1];
              iVar4 = iVar4 + 1;
              iVar10 = iVar10 + 0x10;
              *puVar11 = *puVar6;
              uVar3 = puVar6[3];
              puVar11[1] = uVar2;
              puVar11[2] = uVar1;
              puVar11[3] = uVar3;
            } while (iVar4 < local_20);
          }
        }
        else {
          iVar4 = piStack_4[1];
          if (-1 < iVar4) {
            puVar11 = (undefined4 *)(iVar4 * 0x10 + *piStack_4);
            puVar6 = (undefined4 *)((iVar4 + 1) * 0x10 + *piStack_4);
            do {
              uStack_18 = *puVar11;
              uStack_14 = puVar11[1];
              uStack_10 = puVar11[2];
              uStack_c = puVar11[3];
              iVar10 = local_20;
              if (-1 < local_20) {
                pIVar7 = local_1c + local_20 * 4;
                do {
                  iVar8 = 0x10;
                  bVar16 = true;
                  pcVar12 = (char *)&uStack_18;
                  pIVar14 = pIVar7;
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar16 = *pcVar12 == *(char *)&pIVar14->lpVtbl;
                    pcVar12 = pcVar12 + 1;
                    pIVar14 = (IMalloc *)((int)&pIVar14->lpVtbl + 1);
                  } while (bVar16);
                  if (bVar16) break;
                  iVar10 = iVar10 + -1;
                  pIVar7 = pIVar7 + -4;
                } while (-1 < iVar10);
              }
              if (iVar10 == -1) {
                iVar10 = (piStack_4[1] - iVar4) + -1;
                if (iVar10 != 0) {
                  puVar13 = puVar6;
                  puVar15 = puVar11;
                  for (uVar9 = (uint)(iVar10 * 0x10) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    *puVar15 = *puVar13;
                    puVar13 = puVar13 + 1;
                    puVar15 = puVar15 + 1;
                  }
                  for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
                    puVar13 = (undefined4 *)((int)puVar13 + 1);
                    puVar15 = (undefined4 *)((int)puVar15 + 1);
                  }
                }
                piStack_4[1] = piStack_4[1] + -1;
              }
              iVar4 = iVar4 + -1;
              puVar6 = puVar6 + -4;
              puVar11 = puVar11 + -4;
            } while (-1 < iVar4);
          }
        }
        FUN_5f312800(local_1c);
        pIVar14 = local_2c;
        pIVar7 = local_24;
      }
      (**(code **)(*piStack_34 + 8))(piStack_34);
      if (param_1[1] == 0) {
        iStack_28 = -0x7fffbffb;
      }
      if (iStack_28 < 0) break;
      local_24 = (IMalloc *)((int)&pIVar14->lpVtbl + 1);
      if ((int)pIVar7 <= (int)local_24) {
        return;
      }
    }
    if ((undefined *)*param_1 != (undefined *)0x0) {
      FUN_5f312ab0((undefined *)*param_1);
      *param_1 = 0;
    }
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



void __thiscall FUN_5f308270(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  bool bVar2;
  void *this_01;
  undefined4 *puVar3;
  undefined3 extraout_var;
  ulong *puVar4;
  int local_18;
  int local_14;
  IID local_10;
  
  this_00 = (int *)((int)this + 0x34);
  FUN_5f308f20(this_00,0,0xffffffff);
  local_14 = param_1[1];
  if (0 < local_14) {
    local_18 = 0;
    do {
      this_01 = (void *)FUN_5f312aa0(0x80);
      if (this_01 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (ulong *)(*param_1 + local_18);
        local_10.Data1 = *puVar4;
        local_10._4_4_ = puVar4[1];
        local_10.Data4._0_4_ = puVar4[2];
        local_10.Data4._4_4_ = puVar4[3];
        puVar3 = FUN_5f308780(this_01,&local_10,*(undefined4 *)((int)this + 0x30),this);
      }
      bVar2 = FUN_5f308900((int)puVar3);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if (puVar3 != (undefined4 *)0x0) {
          FUN_5f3088d0(puVar3);
          FUN_5f312ab0((undefined *)puVar3);
        }
      }
      else {
        iVar1 = *(int *)((int)this + 0x38);
        FUN_5f308f20(this_00,iVar1 + 1,0xffffffff);
        *(undefined4 **)(*this_00 + iVar1 * 4) = puVar3;
      }
      local_18 = local_18 + 0x10;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}



void __fastcall FUN_5f308350(undefined4 *param_1)

{
  *param_1 = 0x40010400;
  param_1[1] = 0x10000;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  return;
}



void __thiscall FUN_5f308390(void *this,int *param_1)

{
  HDC hdc;
  HGDIOBJ h;
  HGDIOBJ h_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  tagSIZE tStack_40;
  tagTEXTMETRICA tStack_38;
  
  if ((DAT_5f321134 == 0) && (DAT_5f321138 == 0)) {
    hdc = GetDC((HWND)0x0);
    h = (HGDIOBJ)FUN_5f3084a0();
    if (h == (HGDIOBJ)0x0) {
      uVar1 = GetDialogBaseUnits();
      DAT_5f321134 = uVar1 & 0xffff;
      DAT_5f321138 = uVar1 >> 0x10;
    }
    else {
      h_00 = SelectObject(hdc,h);
      GetTextMetricsA(hdc,&tStack_38);
      GetTextExtentPointA(hdc,s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_5f31d210,0x34,&tStack_40);
      DAT_5f321134 = (tStack_40.cx + 0x1a) / 0x34;
      DAT_5f321138 = tStack_38.tmHeight + tStack_38.tmExternalLeading;
      SelectObject(hdc,h_00);
      DeleteObject(h);
    }
    ReleaseDC((HWND)0x0,hdc);
  }
  iVar2 = MulDiv(*param_1,4,DAT_5f321134);
  uVar1 = DAT_5f321138;
  iVar3 = param_1[1];
  *(short *)((int)this + 0xe) = (short)iVar2;
  iVar3 = MulDiv(iVar3,8,uVar1);
  *(short *)((int)this + 0x10) = (short)iVar3;
  return;
}



void FUN_5f3084a0(void)

{
  char cVar1;
  ushort uVar2;
  byte bVar3;
  DWORD DVar4;
  HMODULE hModule;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uint *puVar5;
  HDC hdc;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  ushort *puVar10;
  LOGFONTA *pLVar11;
  char *pcVar12;
  CHAR *pCVar13;
  bool bVar14;
  int nDenominator;
  LOGFONTA LStack_3c;
  
  DVar4 = GetVersion();
  if (((DVar4 & 0x80000000) == 0) || (3 < (byte)DVar4)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  pLVar11 = &LStack_3c;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    pLVar11->lfHeight = 0;
    pLVar11 = (LOGFONTA *)&pLVar11->lfWidth;
  }
  uVar7 = 0xffffffff;
  LStack_3c.lfWeight = (-(uint)bVar3 & 300) + 400;
  LStack_3c.lfHeight = 8;
  pcVar9 = s_MS_Sans_Serif_5f31d248;
  do {
    pcVar12 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  LStack_3c.lfCharSet = '\x01';
  pcVar9 = pcVar12 + -uVar7;
  pCVar13 = LStack_3c.lfFaceName;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pCVar13 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pCVar13 = pCVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pCVar13 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pCVar13 = pCVar13 + 1;
  }
  hModule = LoadLibraryA(s_COMCTL32_5f31d258);
  if (hModule != (HMODULE)0x0) {
    hResInfo = FindResourceA(hModule,(LPCSTR)0x3ee,(LPCSTR)0x5);
    hResData = LoadResource(hModule,hResInfo);
    puVar5 = (uint *)LockResource(hResData);
    if (puVar5 != (uint *)0x0) {
      puVar10 = (ushort *)((int)puVar5 + 0x1a);
      bVar14 = (*puVar5 & 0xffff0000) == 0xffff0000;
      if (!bVar14) {
        puVar10 = (ushort *)((int)puVar5 + 0x12);
      }
      uVar2 = *puVar10;
      if (uVar2 == 0xffff) {
        puVar10 = puVar10 + 2;
      }
      else {
        while (puVar10 = puVar10 + 1, uVar2 != 0) {
          uVar2 = *puVar10;
        }
      }
      uVar2 = *puVar10;
      if (uVar2 == 0xffff) {
        puVar10 = puVar10 + 2;
      }
      else {
        while (puVar10 = puVar10 + 1, uVar2 != 0) {
          uVar2 = *puVar10;
        }
      }
      uVar2 = *puVar10;
      while (puVar10 = puVar10 + 1, uVar2 != 0) {
        uVar2 = *puVar10;
      }
      hdc = GetDC((HWND)0x0);
      nDenominator = 0x48;
      iVar6 = GetDeviceCaps(hdc,0x5a);
      LStack_3c.lfHeight = MulDiv((uint)*puVar10,iVar6,nDenominator);
      LStack_3c.lfHeight = -LStack_3c.lfHeight;
      ReleaseDC((HWND)0x0,hdc);
      pCVar13 = LStack_3c.lfFaceName;
      iVar6 = FUN_5f312c10((short *)(puVar10 + (-(uint)bVar14 & 2) + 1));
      FUN_5f307850((LPCWSTR)(puVar10 + (-(uint)bVar14 & 2) + 1),iVar6,pCVar13);
    }
    FreeLibrary(hModule);
  }
  CreateFontIndirectA(&LStack_3c);
  return;
}



undefined4 * __thiscall FUN_5f308780(void *this,IID *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *this_00;
  LPVOID *ppv;
  undefined4 uVar1;
  HRESULT HVar2;
  int iVar3;
  IMalloc *unaff_ESI;
  undefined4 *puVar4;
  IMalloc *pIStack_1c;
  IMalloc *pIStack_18;
  undefined4 uStack_14;
  
  this_00 = (undefined4 *)((int)this + 0x2c);
  *(ulong *)((int)this + 4) = param_1->Data1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)&param_1->Data2;
  *(undefined ***)this = &PTR_LAB_5f302780;
  uVar1 = *(undefined4 *)param_1->Data4;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(param_1->Data4 + 4);
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  FUN_5f308350(this_00);
  ppv = (LPVOID *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x78) = param_3;
  *ppv = (LPVOID)0x0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined ***)this = &PTR_LAB_5f302760;
  puVar4 = (undefined4 *)((int)this + 0x4c);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 0x4c) = 0x28;
  *(undefined4 *)((int)this + 0x50) = 0x89;
  *(undefined1 **)((int)this + 100) = &LAB_5f308670;
  *(void **)((int)this + 0x68) = this;
  *(undefined1 **)((int)this + 0x6c) = &LAB_5f308640;
  HVar2 = CoCreateInstance(param_1,(LPUNKNOWN)0x0,5,(IID *)&DAT_5f303930,ppv);
  if (-1 < HVar2) {
                    // WARNING: Load size is inaccurate
    (**(code **)(**ppv + 0xc))(*ppv,this);
                    // WARNING: Load size is inaccurate
    (**(code **)(**ppv + 0x18))(*ppv,&stack0xffffffdc);
    FUN_5f308390(this_00,(int *)&stack0xffffffdc);
    *(undefined4 **)((int)this + 0x58) = this_00;
    FUN_5f307880((LPCWSTR)unaff_ESI,(undefined4 *)((int)this + 0x60));
    if ((pIStack_18 != (IMalloc *)0x0) && (*(short *)&pIStack_18->lpVtbl != 0)) {
      FUN_5f307880((LPCWSTR)pIStack_18,(undefined4 *)((int)this + 0x20));
      *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x20;
    }
    *(undefined4 *)((int)this + 0x24) = uStack_14;
    FUN_5f312800(unaff_ESI);
    FUN_5f312800(pIStack_18);
    FUN_5f312800(pIStack_1c);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_5f3088d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x12];
  *param_1 = &PTR_LAB_5f302760;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_5f312800((IMalloc *)param_1[0x18]);
  FUN_5f312800((IMalloc *)param_1[8]);
  return;
}



bool __fastcall FUN_5f308900(int param_1)

{
  return *(int *)(param_1 + 0x48) != 0;
}



void __fastcall FUN_5f308910(int param_1)

{
  FUN_5f307810(param_1 + 0x4c);
  return;
}



undefined4 __thiscall FUN_5f308920(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



int __fastcall FUN_5f308940(int param_1)

{
  return param_1 + 4;
}



void __thiscall FUN_5f308950(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x74) = param_1;
  return;
}



undefined4 __thiscall FUN_5f308960(void *this,LPARAM param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  piVar1 = *(int **)((int)this + 0x48);
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  iVar2 = *piVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar2 = (**(code **)(iVar2 + 0x34))(piVar1,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_5f308010(*(void **)((int)this + 0x78),param_1,unaff_retaddr);
  return uVar3;
}



undefined4 FUN_5f308a00(void)

{
  return 1;
}



void FUN_5f308a80(int param_1,LPARAM param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 1;
  iVar1 = FUN_5f307c30(*(HWND *)(param_1 + 0x14));
  FUN_5f308010(*(void **)(param_1 + 0x78),param_2,iVar1);
  return;
}



void FUN_5f308ab0(void)

{
  return;
}



undefined4 __thiscall FUN_5f308ac0(void *this,HWND param_1)

{
  *(HWND *)((int)this + 0x14) = param_1;
  SetWindowLongA(param_1,8,(LONG)this);
  return 1;
}



void __fastcall FUN_5f308ae0(int param_1)

{
  int *piVar1;
  tagRECT local_10;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if ((piVar1 != (int *)0x0) && ((*(byte *)(param_1 + 0x18) & 1) != 0)) {
    GetClientRect(*(HWND *)(param_1 + 0x14),&local_10);
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_10);
  }
  return;
}



undefined4 __fastcall FUN_5f308b10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND pHVar4;
  BOOL BVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  tagRECT local_10;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    pHVar4 = *(HWND *)(param_1 + 0x14);
    GetClientRect(pHVar4,&local_10);
    iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,pHVar4);
    if (-1 < iVar3) {
      pHVar4 = GetTopWindow(pHVar4);
      if (DAT_5f321230 == 0) {
        BVar5 = IsWindowUnicode(pHVar4);
        *(BOOL *)(param_1 + 0x7c) = BVar5;
      }
      if (pHVar4 != (HWND)0x0) {
        uVar6 = GetWindowLongA(pHVar4,-0x10);
        SetWindowLongA(pHVar4,-0x10,uVar6 & 0xfffefbff);
        uVar6 = GetWindowLongA(pHVar4,-0x14);
        SetWindowLongA(pHVar4,-0x14,uVar6 & 0xfffeffff);
      }
      puVar2 = (undefined4 *)*piVar1;
      piVar9 = (int *)0x5;
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
      iVar3 = (*(code *)puVar2[8])(piVar1);
      if (-1 < iVar3) {
        iVar3 = *(int *)(param_1 + 0x74);
        if (iVar3 != -1) {
          piVar8 = (int *)&stack0xffffffd4;
          iVar7 = (*(code *)*puVar2)(piVar1,&DAT_5f303950);
          if (-1 < iVar7) {
            (**(code **)(*piVar9 + 0x38))(piVar9,iVar3);
            (**(code **)(*piVar8 + 8))(piVar8);
          }
          *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
        }
        return 0;
      }
    }
  }
  return 0xffffffff;
}



undefined4 __fastcall FUN_5f308c20(int param_1)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  UINT Msg;
  HWND hWnd_00;
  LPARAM lParam;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if (iVar2 < 0) {
      return 1;
    }
  }
  hWnd_00 = *(HWND *)(param_1 + 0x14);
  lParam = 0;
  Msg = 0x46d;
  hWnd = GetParent(hWnd_00);
  SendMessageA(hWnd,Msg,(WPARAM)hWnd_00,lParam);
  return 0;
}



undefined4 __thiscall FUN_5f308c60(void *this,undefined4 *param_1)

{
  char cVar1;
  ULONG_PTR dwData;
  HWND hWndMain;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  IMalloc *local_108;
  char local_104 [260];
  
  uVar5 = 0;
  local_108 = (IMalloc *)0x0;
  iVar2 = FUN_5f308d50(this,local_104);
  if (iVar2 != 0) {
    FUN_5f3078e0(local_104,&local_108);
    iVar2 = (**(code **)(**(int **)((int)this + 0x48) + 0x30))
                      (*(int **)((int)this + 0x48),local_108);
    if (iVar2 != 0) {
      iVar2 = -1;
      pcVar6 = local_104;
      do {
        pcVar8 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      *(undefined2 *)(pcVar8 + -1) = DAT_5f31d268;
      pcVar6 = *(char **)((int)this + 0x20);
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar2 = -1;
      pcVar6 = local_104;
      do {
        pcVar7 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      dwData = *(ULONG_PTR *)((int)this + 0x24);
      hWndMain = (HWND)*param_1;
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      WinHelpA(hWndMain,local_104,1,dwData);
    }
    uVar5 = 1;
  }
  if (local_108 != (IMalloc *)0x0) {
    FUN_5f312800(local_108);
  }
  return uVar5;
}



undefined4 __fastcall FUN_5f308d30(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if (iVar2 < 0) {
      return 2;
    }
  }
  return 0;
}



undefined4 __thiscall FUN_5f308d50(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  HKEY pHStack_130;
  CHAR local_12c [40];
  CHAR local_104 [260];
  
  uVar4 = 0;
  iVar1 = FUN_5f312250((GUID *)((int)this + 4),local_12c,0x28);
  if (iVar1 < 0) {
    return 0;
  }
  wsprintfA(local_104,s_CLSID__s_5f31d270,local_12c);
  uVar2 = FUN_5f312180((HKEY)0x80000000,local_104,&pHStack_130);
  if ((int)uVar2 < 0) {
    return 0;
  }
  uVar2 = FUN_5f312220(pHStack_130,s_HelpDir_5f31d27c,param_1,(PLONG)&stack0x00000008);
  if ((int)uVar2 < 0) {
    uVar2 = FUN_5f312220(pHStack_130,s_InprocServer32_5f31d284,param_1,(PLONG)&stack0x00000008);
    if ((int)uVar2 < 0) goto LAB_5f308e04;
    pcVar3 = _strrchr(param_1,0x5c);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
  }
  uVar4 = 1;
LAB_5f308e04:
  RegCloseKey(pHStack_130);
  return uVar4;
}



undefined4 __cdecl FUN_5f308e20(int param_1)

{
  if (param_1 == 0) {
    return 0x80004003;
  }
  if ((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    return 0x80070057;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(int *)(param_1 + 0x20) == 0)) {
    return 0x80070057;
  }
  return 0;
}



int FUN_5f308e60(int param_1)

{
  int iVar1;
  undefined1 local_48 [72];
  
  iVar1 = FUN_5f308e20(param_1);
  if (-1 < iVar1) {
    FUN_5f307960(local_48,param_1);
    iVar1 = FUN_5f307c60(local_48);
    iVar1 = (-(uint)(iVar1 != 0) & 0x7fffbffb) + 0x80004005;
    FUN_5f307bc0((int)local_48);
  }
  return iVar1;
}



void FUN_5f308eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = param_1;
  local_24 = param_2;
  local_1c = param_4;
  local_20 = param_3;
  local_10 = param_7;
  local_18 = param_5;
  local_14 = param_6;
  local_2c = 0x2c;
  local_c = param_8;
  local_8 = param_9;
  local_4 = 0xffffffff;
  FUN_5f308e60((int)&local_2c);
  return;
}



void __thiscall FUN_5f308f20(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_2 != 0xffffffff) {
    *(uint *)((int)this + 0xc) = param_2;
  }
  if (param_1 == 0) {
                    // WARNING: Load size is inaccurate
    if (*this != (undefined *)0x0) {
      FUN_5f312ab0(*this);
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_5f312aa0(param_1 * 4);
    uVar3 = param_1 & 0x3fffffff;
    *(undefined4 **)this = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(uint *)((int)this + 8) = param_1;
    *(uint *)((int)this + 4) = param_1;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return;
  }
  if ((int)param_1 <= *(int *)((int)this + 8)) {
    iVar4 = *(int *)((int)this + 4);
    if (iVar4 < (int)param_1) {
      puVar1 = puVar1 + iVar4;
      for (uVar3 = param_1 - iVar4 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    *(uint *)((int)this + 4) = param_1;
    return;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)((int)this + 4) + (*(int *)((int)this + 4) >> 0x1f & 7U)) >> 3;
    iVar6 = 4;
    if (3 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar6 < 0x401) {
      if (iVar4 < 4) {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 0x400;
    }
  }
  param_2 = iVar4 + *(int *)((int)this + 8);
  if ((int)param_2 <= (int)param_1) {
    param_2 = param_1;
  }
  puVar2 = (undefined4 *)FUN_5f312aa0(param_2 * 4);
  uVar3 = *(uint *)((int)this + 4);
  puVar7 = puVar2;
  for (uVar5 = uVar3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = *(int *)((int)this + 4);
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar1 = puVar2 + uVar3;
  for (uVar5 = param_1 - iVar4 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
                    // WARNING: Load size is inaccurate
  FUN_5f312ab0(*this);
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 **)this = puVar2;
  *(uint *)((int)this + 8) = param_2;
  return;
}



void __thiscall FUN_5f309090(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_2 != -1) {
    *(int *)((int)this + 0xc) = param_2;
  }
  if (param_1 == 0) {
                    // WARNING: Load size is inaccurate
    if (*this != (undefined *)0x0) {
      FUN_5f312ab0(*this);
      *(undefined4 *)this = 0;
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return;
  }
                    // WARNING: Load size is inaccurate
  puVar1 = *this;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_5f312aa0(param_1 << 4);
    *(undefined4 **)this = puVar1;
    for (uVar3 = (uint)(param_1 << 4) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 4) = param_1;
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    return;
  }
  if (param_1 <= *(int *)((int)this + 8)) {
    iVar4 = *(int *)((int)this + 4);
    if (iVar4 < param_1) {
      puVar1 = puVar1 + iVar4 * 4;
      for (uVar3 = (uint)((param_1 - iVar4) * 0x10) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar1 = 0;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    *(int *)((int)this + 4) = param_1;
    return;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)((int)this + 4) + (*(int *)((int)this + 4) >> 0x1f & 7U)) >> 3;
    iVar5 = 4;
    if (3 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 < 0x401) {
      if (iVar4 < 4) {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 0x400;
    }
  }
  param_2 = iVar4 + *(int *)((int)this + 8);
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = (undefined4 *)FUN_5f312aa0(param_2 << 4);
  iVar4 = *(int *)((int)this + 4);
  puVar6 = puVar2;
  for (uVar3 = (uint)(iVar4 * 0x10) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar1 = puVar2 + iVar4 * 4;
  for (uVar3 = (uint)((param_1 - *(int *)((int)this + 4)) * 0x10) >> 2; uVar3 != 0;
      uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
                    // WARNING: Load size is inaccurate
  FUN_5f312ab0(*this);
  *(undefined4 **)this = puVar2;
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  return;
}



undefined4 __cdecl FUN_5f3091f0(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0x81) {
    if (bVar1 == 0x80) {
      if (param_1[1] == 0) {
        if (param_1[2] == 0) {
          return 4;
        }
        if (param_1[2] == 0x80) {
          return 5;
        }
      }
      else if (param_1[1] == 0x80) {
        if (param_1[2] == 0) {
          return 6;
        }
        if (param_1[2] == 0x80) {
          return 8;
        }
      }
    }
    else if (bVar1 == 0) {
      bVar1 = param_1[1];
      if (bVar1 == 0) {
        bVar1 = param_1[2];
        if (bVar1 == 0) {
          return 0;
        }
        if (bVar1 == 0x80) {
          return 1;
        }
        if (bVar1 == 0xff) {
          return 9;
        }
      }
      else if (bVar1 == 0x80) {
        if (param_1[2] == 0) {
          return 2;
        }
        if (param_1[2] == 0x80) {
          return 3;
        }
      }
      else if (bVar1 == 0xff) {
        if (param_1[2] == 0) {
          return 10;
        }
        if (param_1[2] == 0xff) {
          return 0xb;
        }
      }
    }
  }
  else if (bVar1 == 0xc0) {
    if ((param_1[1] == 0xc0) && (param_1[2] == 0xc0)) {
      return 7;
    }
  }
  else if (bVar1 == 0xcc) {
    if ((param_1[1] == 0xcc) && (param_1[2] == 0xcc)) {
      return 7;
    }
  }
  else if (bVar1 == 0xff) {
    if (param_1[1] == 0) {
      if (param_1[2] == 0) {
        return 0xc;
      }
      if (param_1[2] == 0xff) {
        return 0xd;
      }
    }
    else if (param_1[1] == 0xff) {
      if (param_1[2] == 0) {
        return 0xe;
      }
      if (param_1[2] == 0xff) {
        return 0xf;
      }
    }
  }
  return 0xffffffff;
}



undefined4 * __fastcall FUN_5f309350(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f302960;
  FUN_5f3116f0();
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_5f309390(void *this,byte param_1)

{
  FUN_5f3093b0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_5f312ab0((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_5f3093b0(undefined4 *param_1)

{
  undefined4 *ho;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  *param_1 = &PTR_LAB_5f302960;
  local_4 = param_1;
  iVar1 = FUN_5f311e50(&DAT_5f321178,(int *)&local_4);
  if (iVar1 < 0) {
    local_4 = (undefined4 *)0x0;
  }
  puVar2 = param_1 + 2;
  iVar1 = 3;
  do {
    ho = (undefined4 *)*puVar2;
    if ((ho != (undefined4 *)0x0) && (local_4 != ho)) {
      DeleteObject(ho);
    }
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_5f311700();
  return;
}



int FUN_5f309410(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_5f312aa0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_5f309350(puVar1);
  }
  *param_1 = puVar1;
  return (-(uint)(puVar1 != (undefined4 *)0x0) & 0x7ff8fff2) + 0x8007000e;
}



void FUN_5f309440(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 4));
  return;
}



LONG FUN_5f309460(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  return LVar1;
}



undefined4 FUN_5f309490(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == 0) {
      *(undefined4 *)(param_1 + 8 + iVar1 * 4) = param_2;
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  return 0x8007000e;
}



void __cdecl FUN_5f3094c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,0);
  return;
}



uint __cdecl FUN_5f3094e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_3;
  uVar2 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3,&param_1);
  if (-1 < (int)uVar2) {
    uVar2 = -(uint)(param_3 != iVar1) & 0x8000ffff;
  }
  return uVar2;
}



uint __cdecl FUN_5f309510(int *param_1,int *param_2,uint param_3)

{
  IMalloc *pIVar1;
  uint uVar2;
  uint uVar3;
  IMalloc local_200 [128];
  
  pIVar1 = local_200;
  if (0x1ff < param_3) {
    pIVar1 = (IMalloc *)FUN_5f312780(0x2000);
    if (pIVar1 == (IMalloc *)0x0) {
      uVar2 = 0x8007000e;
      goto LAB_5f309592;
    }
  }
  if (0 < (int)param_3) {
    do {
      uVar3 = param_3;
      if (0x2000 < (int)param_3) {
        uVar3 = 0x2000;
      }
      uVar2 = FUN_5f3094e0(param_1,pIVar1,uVar3);
      if ((int)uVar2 < 0) goto LAB_5f309592;
      uVar2 = FUN_5f3094c0(param_2,pIVar1,uVar3);
      if ((int)uVar2 < 0) goto LAB_5f309592;
      param_3 = param_3 - uVar3;
    } while (0 < (int)param_3);
  }
  uVar2 = 0;
LAB_5f309592:
  if (pIVar1 != local_200) {
    FUN_5f312800(pIVar1);
  }
  return uVar2;
}



undefined4 * __thiscall FUN_5f3095b0(void *this,uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  
  *(undefined ***)this = &PTR_LAB_5f302a80;
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f302a60;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f302660;
  *puVar1 = &PTR_LAB_5f302628;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5f302a38;
  *(byte *)((int)this + 0x14) =
       (*(byte *)((int)this + 0x14) ^ (byte)param_1 & 1) & 1 ^ *(byte *)((int)this + 0x14);
  *(byte *)((int)this + 0x54) = ((param_1 >> 1 & 1) == 0) << 2 | *(byte *)((int)this + 0x54) & 0xfb;
  FUN_5f30dd70((undefined4 *)((int)this + 0x5c));
  FUN_5f303cf0((void *)((int)this + 0x68),-(uint)(this != (void *)0x0) & (uint)puVar1);
  bVar2 = *(byte *)((int)this + 0x54) & 0xfd;
  *(undefined ***)this = &PTR_FUN_5f3029f0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_5f3029d0;
  *(undefined ***)((int)this + 8) = &PTR_LAB_5f3029b0;
  *puVar1 = &PTR_LAB_5f302998;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5f302970;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(byte *)((int)this + 0x54) = (bVar2 ^ ~*(byte *)((int)this + 0x14)) & 1 ^ bVar2;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  FUN_5f3116f0();
  FUN_5f309770();
  return (undefined4 *)this;
}



void __fastcall FUN_5f3096a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x16];
  *param_1 = &PTR_FUN_5f3029f0;
  param_1[1] = &PTR_LAB_5f3029d0;
  param_1[2] = &PTR_LAB_5f3029b0;
  param_1[3] = &PTR_LAB_5f302998;
  param_1[4] = &PTR_LAB_5f302970;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((*(byte *)(param_1 + 0x15) & 2) != 0) {
    switch(param_1[7]) {
    case 2:
      DeleteMetaFile((HMETAFILE)param_1[8]);
      break;
    case 3:
      DestroyIcon((HICON)param_1[8]);
      break;
    case 4:
      DeleteEnhMetaFile((HENHMETAFILE)param_1[8]);
    }
  }
  if ((HGDIOBJ)param_1[0x11] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x11]);
  }
  if ((HGDIOBJ)param_1[0x10] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x10]);
  }
  FUN_5f309780();
  FUN_5f311700();
  FUN_5f303d20(param_1 + 0x1a);
  FUN_5f30ddb0(param_1 + 0x17);
  return;
}



void FUN_5f309770(void)

{
  FUN_5f312470((LONG *)&DAT_5f32113c);
  return;
}



LONG FUN_5f309780(void)

{
  LONG LVar1;
  
  LVar1 = FUN_5f3124b0((LONG *)&DAT_5f32113c);
  if ((LVar1 == 0) && (DAT_5f321140 != (int *)0x0)) {
    (**(code **)(*DAT_5f321140 + 8))(DAT_5f321140);
    DAT_5f321140 = (int *)0x0;
  }
  return LVar1;
}



undefined4 FUN_5f3097f0(int *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
        if (param_1 != (int *)0x0) {
          *param_3 = (int)(param_1 + 4);
          (**(code **)(*param_1 + 4))(param_1);
          return 0;
        }
        goto LAB_5f309a10;
      }
    }
    else {
      if (uVar1 != 0) {
LAB_5f309973:
        *param_3 = 0;
        return 0x80004002;
      }
      if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
        iVar2 = *param_1;
        *param_3 = (int)param_1;
        (**(code **)(iVar2 + 4))(param_1);
        return 0;
      }
    }
  }
  else if (uVar1 < 0x20401) {
    if (uVar1 == 0x20400) {
      if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
        if (param_1 != (int *)0x0) {
          *param_3 = (int)(param_1 + 1);
          (**(code **)(*param_1 + 4))(param_1);
          return 0;
        }
LAB_5f309a10:
        *param_3 = 0;
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
    }
    else {
      if (uVar1 != 0x109) goto LAB_5f309973;
      if (((param_2[1] == 0) && (param_2[2] == 0xc0)) && (param_2[3] == 0x46000000)) {
        if (param_1 != (int *)0x0) {
          *param_3 = (int)(param_1 + 2);
          (**(code **)(*param_1 + 4))(param_1);
          return 0;
        }
        goto LAB_5f309a10;
      }
    }
  }
  else if (uVar1 == 0x7bf80980) {
    if (((param_2[1] == 0x101abf32) && (param_2[2] == 0xaa00bb8b)) && (param_2[3] == 0xab0c3000)) {
      *param_3 = (int)param_1;
    }
  }
  else if (uVar1 == 0x7bf80981) {
    if (((param_2[1] == 0x101abf32) && (param_2[2] == 0xaa00bb8b)) && (param_2[3] == 0xab0c3000)) {
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 1);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
      goto LAB_5f309a10;
    }
  }
  else {
    if (uVar1 != 0xb196b284) goto LAB_5f309973;
    if (((param_2[1] == 0x101abab4) && (param_2[2] == 0xaa009cb6)) && (param_2[3] == 0x71d3400)) {
      if (param_1 != (int *)0x0) {
        *param_3 = (int)(param_1 + 3);
        (**(code **)(*param_1 + 4))(param_1);
        return 0;
      }
      goto LAB_5f309a10;
    }
  }
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}



void FUN_5f309a60(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 100));
  return;
}



LONG FUN_5f309a80(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x19);
  if ((LVar1 == 0) && (param_1 != (undefined4 *)0x0)) {
    FUN_5f3096a0(param_1);
    FUN_5f312ab0((undefined *)param_1);
  }
  return LVar1;
}



undefined4 FUN_5f309ec0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) == -1) {
    if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0x80004005;
}



undefined4 FUN_5f309ef0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5f309ec0(param_1);
  if (iVar1 < 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 0:
      *param_2 = 0;
      return 0;
    case 1:
    case 4:
      *param_2 = *(undefined4 *)(param_1 + 0x20);
      return 0;
    case 2:
      *param_2 = *(undefined4 *)(param_1 + 0x20);
      return 0;
    case 3:
      *param_2 = *(undefined4 *)(param_1 + 0x20);
      return 0;
    default:
      *param_2 = 0;
      return 0x80070057;
    }
  }
  *param_2 = 0;
  return 0x8000000a;
}



undefined4 FUN_5f309fa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5f309ec0(param_1);
  if (-1 < iVar1) {
    *param_2 = 0;
    return 0x8000000a;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    return 0;
  }
  return 0x80004005;
}



undefined4 FUN_5f309ff0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f309ec0(param_1);
  if (-1 < iVar1) {
    return 0x8000000a;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if ((*(int *)(param_1 + 0x50) != 0) && ((*(byte *)(param_1 + 0x54) & 2) != 0)) {
      FUN_5f309490(*(int *)(param_1 + 0x50),param_2);
    }
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return 0;
  }
  return 0x80004005;
}



undefined4 FUN_5f30a080(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5f309ec0(param_1);
  if (-1 < iVar1) {
    *param_2 = 0;
    return 0x8000000a;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return 0;
}



undefined4 FUN_5f30a0c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5f309ec0(param_1);
  if (-1 < iVar1) {
    *param_2 = 0;
    return 0x8000000a;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  return 0;
}



undefined4 FUN_5f30a100(HDC param_1,int *param_2)

{
  int nWidth;
  HDC pHVar1;
  int iVar2;
  HBITMAP h;
  int iVar3;
  HGDIOBJ h_00;
  
  pHVar1 = param_1;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar2 = FUN_5f309ec0((int)param_1);
  if (-1 < iVar2) {
    return 0x8000000a;
  }
  if (pHVar1[7].unused != 1) {
    return 0x80004005;
  }
  if ((*(char *)((int)&pHVar1[0x15].unused + 1) != '\0') && (pHVar1[0x12].unused == 0)) {
    iVar2 = pHVar1[0xc].unused;
    nWidth = pHVar1[0xb].unused;
    h = CreateBitmap(nWidth,iVar2,1,1,(void *)0x0);
    pHVar1[0x12].unused = (int)h;
    if (h == (HBITMAP)0x0) {
      return 0x8007000e;
    }
    if (pHVar1[0x14].unused != 0) {
      FUN_5f309490(pHVar1[0x14].unused,h);
    }
    iVar3 = FUN_5f311970(0x5f321178);
    if (iVar3 < 0) {
      return 0x8000ffff;
    }
    FUN_5f3119b0(&DAT_5f321178,(int *)&param_1);
    h_00 = SelectObject(param_1,h);
    PatBlt(param_1,0,0,nWidth,iVar2,0xff0062);
    SelectObject(param_1,h_00);
    FUN_5f311990(0x5f321178);
  }
  *param_2 = pHVar1[0x12].unused;
  return 0;
}



undefined4 FUN_5f30a220(HDC param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  if (param_2 == 1) {
    iVar2 = (**(code **)(param_1->unused + 0xc))(param_1,param_3 + 1);
    if (iVar2 < 0) {
      return 0x80004005;
    }
  }
  else if (param_2 == 2) {
    iVar2 = (**(code **)(param_1->unused + 0x10))(param_1,param_3 + 1);
    if (iVar2 < 0) {
      return 0x80004005;
    }
  }
  else {
    if (param_2 != 4) {
      return 0x8000ffff;
    }
    iVar2 = FUN_5f30a100(param_1,param_3 + 1);
    if (iVar2 < 0) {
      return 0x80004005;
    }
  }
  piVar1 = (int *)param_1[0x14].unused;
  *param_3 = 0x10;
  param_3[2] = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}



undefined4 FUN_5f30a2f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == -1) {
    iVar1 = FUN_5f309ec0(param_1);
    if (iVar1 < 0) goto LAB_5f30a31e;
  }
  if (((*(byte *)(param_1 + 0x54) & 4) == 0) && (param_2 != 0)) {
    return 0x80004005;
  }
LAB_5f30a31e:
  *(byte *)(param_1 + 0x54) = ((byte)param_2 & 1) << 2 | *(byte *)(param_1 + 0x54) & 0xfb;
  if (param_2 == 0) {
    (**(code **)(*(int *)(param_1 + 0x5c) + 0xc))(param_1 + 0x5c);
  }
  return 0;
}



uint FUN_5f30a380(void *param_1,int *param_2,int param_3,UINT *param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar1 = FUN_5f309ec0((int)param_1);
  if (-1 < iVar1) {
    return 0x8000000a;
  }
  uVar2 = FUN_5f30d4a0(param_1,param_2,0,(uint)(param_3 == 0),param_4);
  return uVar2;
}



undefined4 FUN_5f30a3d0(int param_1,uint *param_2)

{
  int iVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  iVar1 = FUN_5f309ec0(param_1);
  if (iVar1 < 0) {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 0:
      *param_2 = 0;
      return 0;
    case 1:
      *param_2 = -(uint)(*(char *)(param_1 + 0x55) != '\0') & 2;
      return 0;
    case 2:
    case 4:
      *param_2 = 3;
      return 0;
    case 3:
      *param_2 = 2;
      return 0;
    default:
      return 0x80004005;
    }
  }
  return 0x8000000a;
}



HMETAFILE __cdecl FUN_5f30a470(HGLOBAL param_1,UINT param_2)

{
  BYTE *lpData;
  HMETAFILE pHVar1;
  
  lpData = (BYTE *)GlobalLock(param_1);
  pHVar1 = SetMetaFileBitsEx(param_2,lpData);
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  return pHVar1;
}



undefined4 __fastcall FUN_5f30a4a0(int param_1)

{
  LPSIZE lpsize;
  HBITMAP hbit;
  BOOL BVar1;
  UINT UVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_7c [4];
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    break;
  case 1:
    hbit = *(HBITMAP *)(param_1 + 0x20);
    GetObjectA(hbit,0x18,local_7c);
    lpsize = (LPSIZE)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x2c) = uStack_78;
    *(undefined4 *)(param_1 + 0x30) = uStack_74;
    BVar1 = GetBitmapDimensionEx(hbit,lpsize);
    if ((BVar1 == 0) || (lpsize->cx == 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      lpsize->cx = *(LONG *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      FUN_5f311790((int *)lpsize);
      return 0;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x24) < 1) {
      return 0x80004005;
    }
    iVar3 = FUN_5f311710(*(int *)(param_1 + 0x24) * 0x9ec,0x5a0);
    *(int *)(param_1 + 0x34) = iVar3;
    iVar3 = FUN_5f311710(*(int *)(param_1 + 0x28) * 0x9ec,0x5a0);
    *(int *)(param_1 + 0x38) = iVar3;
    return 0;
  case 3:
    iVar3 = GetObjectA(*(HANDLE *)(param_1 + 0x40),0x18,local_7c);
    if (iVar3 == 0) {
      uVar4 = FUN_5f311ad0(0x5f321178);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      uVar4 = FUN_5f311af0(0x5f321178);
      *(undefined4 *)(param_1 + 0x30) = uVar4;
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = uStack_78;
      *(undefined4 *)(param_1 + 0x30) = uStack_74;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
    FUN_5f311790((int *)(param_1 + 0x34));
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    UVar2 = GetEnhMetaFileHeader
                      (*(HENHMETAFILE *)(param_1 + 0x20),100,(LPENHMETAHEADER)&stack0xffffff9c);
    if (UVar2 == 0) {
      return 0x80004005;
    }
    *(int *)(param_1 + 0x34) = iStack_44 - iStack_4c;
    *(int *)(param_1 + 0x38) = iStack_40 - iStack_48;
    return 0;
  default:
    return 0x8000ffff;
  }
  return 0;
}



void __cdecl FUN_5f30a640(HDC param_1,HGDIOBJ param_2)

{
  if (param_2 != (HGDIOBJ)0x0) {
    if (param_2 == (HGDIOBJ)0x1) {
      FUN_5f311c10(&DAT_5f321178,&param_2);
      SelectObject(param_1,param_2);
      return;
    }
    SelectObject(param_1,param_2);
  }
  return;
}



bool __cdecl FUN_5f30a680(HDC param_1)

{
  int iVar1;
  
  iVar1 = GetDeviceCaps(param_1,2);
  return iVar1 == 5;
}



undefined4 __cdecl FUN_5f30a6a0(HDC param_1)

{
  HGDIOBJ pvVar1;
  HGDIOBJ local_4;
  
  FUN_5f311c10(&DAT_5f321178,&local_4);
  pvVar1 = SelectObject(param_1,local_4);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_5f30a640(param_1,pvVar1);
    return 1;
  }
  return 0;
}



bool __cdecl FUN_5f30a6e0(HANDLE param_1)

{
  int iVar1;
  undefined1 local_54 [20];
  int iStack_40;
  
  if (param_1 != (HANDLE)0x0) {
    iVar1 = GetObjectA(param_1,0x54,local_54);
    if (iVar1 == 0x54) {
      return iStack_40 != 0;
    }
  }
  return false;
}



uint __cdecl
FUN_5f30a720(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,int param_7,
            int param_8,int param_9,int param_10,DWORD param_11)

{
  bool bVar1;
  HPALETTE hPal;
  HGDIOBJ pvVar2;
  undefined3 extraout_var;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  HPALETTE pHVar6;
  int iVar7;
  HBITMAP hbm;
  HGLOBAL hMem;
  LPBITMAPINFO lpbmi;
  HGLOBAL hMem_00;
  LPVOID lpvBits;
  uint uVar8;
  HPALETTE local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  int iStack_14;
  UINT UStack_10;
  short sStack_8;
  short sStack_6;
  
  hPal = (HPALETTE)GetCurrentObject(param_6,5);
  local_2c = (HPALETTE)GetCurrentObject(param_1,5);
  pvVar2 = GetCurrentObject(param_6,7);
  bVar1 = FUN_5f30a6e0(pvVar2);
  iVar3 = GetDeviceCaps(param_1,2);
  DVar4 = GetObjectType(param_1);
  uVar8 = 0;
  if (DVar4 != 0xc) {
    if (CONCAT31(extraout_var,bVar1) == 0) {
      uVar5 = GetDeviceCaps(param_1,0x26);
      if ((((((uVar5 & 0x100) != 0) && (hPal != local_2c)) &&
           (pHVar6 = (HPALETTE)GetStockObject(0xf), hPal != pHVar6)) &&
          (iVar7 = FUN_5f30a6a0(param_1), iVar7 != 0)) || (iVar3 != 1)) goto LAB_5f30a884;
      if (hPal != (HPALETTE)0x0) {
        SelectPalette(param_1,hPal,1);
        RealizePalette(param_1);
      }
    }
    iStack_28 = param_7;
    iStack_20 = param_9;
    iStack_24 = param_8;
    iStack_1c = param_10;
    if (iVar3 == 5) {
      FUN_5f311750(&iStack_28);
      FUN_5f311750(&iStack_20);
      if (iStack_1c < 0) {
        iStack_1c = -iStack_1c;
      }
      iStack_24 = iStack_24 - iStack_1c;
    }
    uVar8 = StretchBlt(param_1,param_2,param_3,param_4,param_5,param_6,iStack_28,iStack_24,iStack_20
                       ,iStack_1c,param_11);
    if ((CONCAT31(extraout_var,bVar1) == 0) && (hPal != (HPALETTE)0x0)) {
      SelectPalette(param_1,local_2c,1);
      RealizePalette(param_1);
    }
  }
LAB_5f30a884:
  if (uVar8 == 0) {
    FUN_5f311c10(&DAT_5f321178,&local_2c);
    hbm = (HBITMAP)SelectObject(param_6,local_2c);
    GetObjectA(hbm,0x18,auStack_18);
    hMem = GlobalAlloc(0x42,0x428);
    if (hMem != (HGLOBAL)0x0) {
      lpbmi = (LPBITMAPINFO)GlobalLock(hMem);
      (lpbmi->bmiHeader).biSize = 0x28;
      (lpbmi->bmiHeader).biWidth = iStack_14;
      (lpbmi->bmiHeader).biHeight = UStack_10;
      (lpbmi->bmiHeader).biPlanes = 1;
      (lpbmi->bmiHeader).biBitCount = sStack_8 * sStack_6;
      if (8 < (ushort)(sStack_8 * sStack_6)) {
        (lpbmi->bmiHeader).biBitCount = 0x18;
      }
      (lpbmi->bmiHeader).biCompression = 0;
      (lpbmi->bmiHeader).biSizeImage = 0;
      (lpbmi->bmiHeader).biXPelsPerMeter = 0;
      (lpbmi->bmiHeader).biYPelsPerMeter = 0;
      (lpbmi->bmiHeader).biClrUsed = 0;
      (lpbmi->bmiHeader).biClrImportant = 0;
      iVar3 = iStack_14 * (uint)(lpbmi->bmiHeader).biBitCount + 0x1f;
      hMem_00 = GlobalAlloc(2,((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * UStack_10 * 4);
      if (hMem_00 != (HGLOBAL)0x0) {
        lpvBits = GlobalLock(hMem_00);
        GetDIBits(param_6,hbm,0,UStack_10,lpvBits,lpbmi,0);
        iStack_24 = param_8;
        iStack_28 = param_7;
        iStack_20 = param_9;
        iStack_1c = param_10;
        FUN_5f311750(&iStack_28);
        FUN_5f311750(&iStack_20);
        if (iStack_1c < 0) {
          iStack_1c = -iStack_1c;
        }
        iStack_24 = iStack_24 - iStack_1c;
        iVar3 = StretchDIBits(param_1,param_2,param_3,param_4,param_5,iStack_28,iStack_24,iStack_20,
                              iStack_1c,lpvBits,lpbmi,0,param_11);
        uVar8 = (uint)(iVar3 != 0);
        GlobalUnlock(hMem_00);
        GlobalFree(hMem_00);
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    }
    SelectObject(param_6,hbm);
  }
  return uVar8;
}



HMETAFILE __cdecl FUN_5f30aa60(HENHMETAFILE param_1)

{
  HDC hdcRef;
  UINT dwBytes;
  HGLOBAL hMem;
  BYTE *pData16;
  UINT UVar1;
  undefined4 uStack_4;
  
  hdcRef = GetDC((HWND)0x0);
  dwBytes = GetWinMetaFileBits(param_1,0,(LPBYTE)0x0,8,hdcRef);
  uStack_4 = (HMETAFILE)0x0;
  if (dwBytes != 0) {
    hMem = GlobalAlloc(2,dwBytes);
    if (hMem != (HGLOBAL)0x0) {
      pData16 = (BYTE *)GlobalLock(hMem);
      if (pData16 != (BYTE *)0x0) {
        UVar1 = GetWinMetaFileBits(param_1,dwBytes,pData16,8,hdcRef);
        if (UVar1 != 0) {
          uStack_4 = SetMetaFileBitsEx(dwBytes,pData16);
        }
        GlobalUnlock(hMem);
      }
      GlobalFree(hMem);
    }
  }
  return uStack_4;
}



int __cdecl FUN_5f30aaf0(HDC param_1,int *param_2,int *param_3,LPPOINT param_4,LPPOINT param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = SetMapMode(param_1,8);
  bVar4 = param_1 == (HDC)0x0;
  if (bVar4) {
    param_1 = GetDC((HWND)0x0);
  }
  FUN_5f3117f0(param_1,param_2,param_3);
  iVar1 = param_3[3];
  iVar2 = *param_3;
  SetWindowOrgEx(param_1,iVar2,iVar1,param_4);
  SetWindowExtEx(param_1,param_3[2] - iVar2,param_3[1] - iVar1,(LPSIZE)(param_4 + 1));
  iVar1 = param_2[3];
  iVar2 = *param_2;
  SetViewportOrgEx(param_1,iVar2,iVar1,param_5);
  SetViewportExtEx(param_1,param_2[2] - iVar2,param_2[1] - iVar1,(LPSIZE)(param_5 + 1));
  if (bVar4) {
    ReleaseDC((HWND)0x0,param_1);
  }
  return iVar3;
}



void __cdecl FUN_5f30abc0(HDC param_1,int param_2,int *param_3,int *param_4)

{
  tagSIZE tStack_8;
  
  SetMapMode(param_1,param_2);
  SetWindowOrgEx(param_1,*param_3,param_3[1],(LPPOINT)&tStack_8);
  SetWindowExtEx(param_1,param_3[2],param_3[3],&tStack_8);
  SetViewportOrgEx(param_1,*param_4,param_4[1],(LPPOINT)&tStack_8);
  SetViewportExtEx(param_1,param_4[2],param_4[3],&tStack_8);
  return;
}



undefined4 __thiscall
FUN_5f30ac40(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  HGDIOBJ h;
  HDC unaff_EBX;
  code *pcVar3;
  COLORREF unaff_EBP;
  int unaff_ESI;
  COLORREF unaff_EDI;
  int unaff_retaddr;
  HDC hdc;
  HPALETTE pHVar4;
  HDC local_60;
  HPALETTE local_5c;
  int iStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  int local_4c;
  COLORREF CStack_48;
  COLORREF CStack_44;
  int local_40 [3];
  undefined4 local_34;
  tagPOINT local_30 [2];
  tagPOINT local_20 [2];
  int local_10;
  code *pcStack_c;
  int iStack_8;
  int iStack_4;
  
  local_5c = (HPALETTE)0x0;
  iVar2 = FUN_5f311970(0x5f321178);
  if (iVar2 < 0) {
    return 0x80070005;
  }
  FUN_5f3119b0(&DAT_5f321178,(int *)&local_60);
  local_40[2] = *(undefined4 *)((int)this + 0x2c);
  local_34 = *(undefined4 *)((int)this + 0x30);
  local_40[0] = 0;
  local_40[1] = 0;
  local_4c = FUN_5f30aaf0(local_60,local_40,&local_10,local_20,local_30);
  pHVar4 = *(HPALETTE *)((int)this + 0x24);
  if (pHVar4 != (HPALETTE)0x0) {
    bVar1 = FUN_5f30a6e0(*(HANDLE *)((int)this + 0x20));
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_5c = SelectPalette(local_60,pHVar4,1);
      RealizePalette(local_60);
    }
  }
  iStack_58 = SetStretchBltMode(param_1,3);
  CStack_48 = SetBkColor(param_1,0xffffff);
  CStack_44 = SetTextColor(param_1,0);
                    // WARNING: Load size is inaccurate
  pcVar3 = *(code **)(*this + 0x2c);
  hdc = (HDC)this;
  (*pcVar3)(this,local_60,auStack_54,&iStack_50);
  if ((*(char *)((int)this + 0x55) == '\0') || (*(int *)((int)this + 0x48) == 0)) {
    FUN_5f30a720(param_1,iStack_8,iStack_4,unaff_retaddr,(int)pcVar3,unaff_EBX,param_2,param_3,
                 param_4,param_5,0xcc0020);
    pHVar4 = (HPALETTE)local_60;
  }
  else {
    FUN_5f30a720(param_1,iStack_8,iStack_4,unaff_retaddr,(int)pcVar3,unaff_EBX,param_2,param_3,
                 param_4,param_5,0x660046);
    h = SelectObject(unaff_EBX,*(HGDIOBJ *)((int)this + 0x48));
    FUN_5f30a720(param_1,iStack_8,iStack_4,unaff_retaddr,(int)pcVar3,unaff_EBX,param_2,param_3,
                 param_4,param_5,0x8800c6);
    SelectObject(unaff_EBX,h);
    FUN_5f30a720(param_1,iStack_8,iStack_4,unaff_retaddr,(int)pcVar3,unaff_EBX,param_2,param_3,
                 param_4,param_5,0x660046);
    pcVar3 = pcStack_c;
    pHVar4 = (HPALETTE)local_60;
  }
  SetStretchBltMode(param_1,unaff_EDI);
  (*pcVar3)(this,unaff_EBP,0,0);
  FUN_5f30a640(hdc,unaff_EBX);
  FUN_5f30abc0(hdc,unaff_ESI,local_40,&iStack_50);
  if (pHVar4 != (HPALETTE)0x0) {
    SelectPalette(hdc,pHVar4,0);
    RealizePalette(hdc);
  }
  FUN_5f311990(0x5f321178);
  SetBkColor(param_1,unaff_EDI);
  SetTextColor(param_1,unaff_EBP);
  return 0;
}



undefined4 __thiscall
FUN_5f30af40(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  HGDIOBJ pvVar2;
  HDC local_4c;
  COLORREF local_48;
  COLORREF CStack_44;
  int local_40 [3];
  undefined4 local_34;
  tagPOINT local_30 [2];
  tagPOINT local_20 [2];
  int local_10 [4];
  
  iVar1 = FUN_5f311970(0x5f321178);
  if (iVar1 < 0) {
    return 0x80070005;
  }
  FUN_5f3119b0(&DAT_5f321178,(int *)&local_4c);
  local_40[2] = *(undefined4 *)((int)this + 0x2c);
  local_34 = *(undefined4 *)((int)this + 0x30);
  local_40[0] = 0;
  local_40[1] = 0;
  iVar1 = FUN_5f30aaf0(local_4c,local_40,local_10,local_20,local_30);
  local_48 = SetBkColor(param_1,0xffffff);
  CStack_44 = SetTextColor(param_1,0);
  pvVar2 = SelectObject(local_4c,*(HGDIOBJ *)((int)this + 0x40));
  FUN_5f30a720(param_1,param_2,param_3,param_4,param_5,local_4c,param_6,param_7,param_8,param_9,
               0x8800c6);
  SelectObject(local_4c,*(HGDIOBJ *)((int)this + 0x44));
  FUN_5f30a720(param_1,param_2,param_3,param_4,param_5,local_4c,param_6,param_7,param_8,param_9,
               0x660046);
  FUN_5f30abc0(local_4c,iVar1,&local_20[0].x,&local_30[0].x);
  FUN_5f30a640(local_4c,pvVar2);
  FUN_5f311990(0x5f321178);
  SetBkColor(param_1,local_48);
  SetTextColor(param_1,CStack_44);
  return 0;
}



undefined4 __thiscall
FUN_5f30b0e0(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int *param_10)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  HMETAFILE hmf;
  int iStack_1c;
  tagPOINT tStack_18;
  RECT RStack_10;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x90) = 0;
  iStack_1c = SaveDC(param_1);
  if (iStack_1c == 0) {
    return 0x8007000e;
  }
  bVar2 = FUN_5f30a680(param_1);
  iVar3 = CONCAT31(extraout_var,bVar2);
  *(int *)((int)this + 0x88) = iVar3;
  IntersectClipRect(param_1,param_2,param_3,param_4 + param_2,param_5 + param_3);
  if (iVar3 == 0) {
    SetMapMode(param_1,8);
    GetWindowOrgEx(param_1,&tStack_18);
    iVar4 = FUN_5f311710(*(int *)((int)this + 0x34) * param_4,param_8);
    iVar5 = FUN_5f311710(*(int *)((int)this + 0x38) * param_5,param_9);
    RStack_10.left = FUN_5f311710(param_6 * param_4,param_8);
    RStack_10.left = (param_2 - tStack_18.x) - RStack_10.left;
    RStack_10.top = FUN_5f311710(param_7 * param_5,param_9);
    RStack_10.top = ((iVar5 + param_3) - tStack_18.y) - RStack_10.top;
    RStack_10.right = iVar4 + RStack_10.left;
    RStack_10.bottom = RStack_10.top - iVar5;
    if (*(int *)((int)this + 0x1c) == 2) {
      OffsetViewportOrgEx(param_1,RStack_10.left,RStack_10.top,(LPPOINT)0x0);
      SetViewportExtEx(param_1,iVar4,-iVar5,(LPSIZE)0x0);
    }
  }
  else {
    iStack_1c = -1;
    if (param_10 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x90) = 0x80004003;
      goto LAB_5f30b336;
    }
    iVar4 = FUN_5f312aa0(0x34);
    *(int *)((int)this + 0x80) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0x80) = 0;
      *(undefined4 *)((int)this + 0x90) = 0x8007000e;
      goto LAB_5f30b336;
    }
    iVar5 = *param_10;
    iVar1 = param_10[1];
    *(int *)(iVar4 + 0x1c) = iVar5;
    *(int *)(iVar4 + 0x20) = iVar1;
    *(int *)(iVar4 + 0x24) = param_10[2];
    *(int *)(iVar4 + 0x28) = param_10[3];
    *(int *)(iVar4 + 0x2c) = param_2 - iVar5;
    *(int *)(iVar4 + 0x30) = param_3 - iVar1;
    *(int *)(iVar4 + 0x10) = param_4;
    *(int *)(iVar4 + 0x14) = param_5;
    *(int *)((int)this + 0x84) = iVar4;
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) == 4) {
    if (iVar3 == 0) {
      PlayEnhMetaFile(param_1,*(HENHMETAFILE *)((int)this + 0x20),&RStack_10);
    }
    else {
      hmf = FUN_5f30aa60(*(HENHMETAFILE *)((int)this + 0x20));
      if (hmf == (HMETAFILE)0x0) {
        *(undefined4 *)((int)this + 0x90) = 0x8007000e;
        goto LAB_5f30b336;
      }
      EnumMetaFile(param_1,hmf,(MFENUMPROC)&LAB_5f30aa40,(LPARAM)this);
      DeleteMetaFile(hmf);
    }
  }
  else {
    EnumMetaFile(param_1,*(HMETAFILE *)((int)this + 0x20),(MFENUMPROC)&LAB_5f30aa40,(LPARAM)this);
  }
  if (*(int *)((int)this + 0x88) != 0) {
    FUN_5f30da40((int)this);
  }
LAB_5f30b336:
  RestoreDC(param_1,iStack_1c);
  return *(undefined4 *)((int)this + 0x90);
}



undefined4 FUN_5f30b6f0(int param_1,char *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  
  iVar1 = 0x10;
  bVar3 = true;
  pcVar2 = &DAT_5f303840;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar3 = *param_2 == *pcVar2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (bVar3);
  if (!bVar3) {
    return 0x80040200;
  }
  *param_3 = param_1 + 0x5c;
  return 0;
}



uint __cdecl FUN_5f30b770(int param_1,int *param_2,SIZE_T param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_4c4 [1104];
  undefined1 local_74 [30];
  int local_56;
  int local_28;
  undefined1 local_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302b00;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  iVar2 = *param_2;
  ExceptionList = &local_14;
  iVar1 = (**(code **)(iVar2 + 0x14))(param_2,0,0,1,local_24);
  if (iVar1 < 0) {
    ExceptionList = local_14;
    return 0x80004005;
  }
  local_8 = 0;
  iVar2 = (**(code **)(iVar2 + 0xc))(param_2,local_74,0x36,&local_28);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  if (local_28 != 0x36) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x8000ffff;
  }
  local_8 = 0xffffffff;
  FUN_5f30b894();
  if ((local_56 != 0x544c5743) && (local_56 != 0x544c5747)) {
    uVar3 = FUN_5f30ebd0(local_4c4,param_1,param_2,param_3);
    ExceptionList = local_14;
    return uVar3;
  }
  uVar3 = FUN_5f30ee00(&DAT_5f302920,param_1,param_2);
  ExceptionList = local_14;
  return uVar3;
}



void FUN_5f30b894(void)

{
  int *unaff_ESI;
  
  (**(code **)(*unaff_ESI + 0x14))();
  return;
}



uint __cdecl FUN_5f30b8b0(int param_1,int *param_2,uint param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  HGLOBAL hMem;
  undefined4 *puVar8;
  HMETAFILE pHVar9;
  int *piVar10;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined2 uStack_4;
  
  local_1c = 0;
  local_18 = 0;
  uVar7 = FUN_5f3094e0(param_2,&local_14,0x12);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if (local_14._2_2_ != 9) {
    return 0x800a01e1;
  }
  hMem = GlobalAlloc(0x42,param_3 + 0x14);
  if (hMem == (HGLOBAL)0x0) {
    return 0x8007000e;
  }
  puVar8 = (undefined4 *)GlobalLock(hMem);
  piVar10 = (int *)((int)puVar8 + 0x12);
  iVar6 = CONCAT22(uStack_e._2_2_,(undefined2)uStack_e);
  if (param_4 == (short *)0x0) goto LAB_5f30ba25;
  pcVar5 = *(code **)(*param_2 + 0x14);
  (*pcVar5)(param_2,local_1c,local_18,1,&local_1c);
  if (param_3 < 0x14) {
LAB_5f30b9b2:
    sVar1 = param_4[1];
    *piVar10 = 5;
    sVar2 = *param_4;
    sVar3 = param_4[3];
    *(undefined2 *)((int)puVar8 + 0x16) = 0x20b;
    *(short *)(puVar8 + 6) = sVar1;
    sVar4 = param_4[2];
    *(short *)((int)puVar8 + 0x1a) = sVar2;
    puVar8[7] = 5;
    *(undefined2 *)(puVar8 + 8) = 0x20c;
    *(short *)((int)puVar8 + 0x22) = sVar3 - sVar1;
    *(short *)(puVar8 + 9) = sVar4 - sVar2;
    uStack_e = CONCAT22(uStack_e._2_2_,(undefined2)uStack_e) + 10;
    (*pcVar5)(param_2,local_1c,local_18,0,0);
  }
  else {
    uVar7 = FUN_5f3094e0(param_2,piVar10,0x14);
    if ((int)uVar7 < 0) {
      GlobalUnlock(hMem);
      GlobalFree(hMem);
      return uVar7;
    }
    if ((((*piVar10 != 5) || (*(short *)((int)puVar8 + 0x16) != 0x20b)) || (puVar8[7] != 5)) ||
       (*(short *)(puVar8 + 8) != 0x20c)) goto LAB_5f30b9b2;
    param_3 = param_3 - 0x14;
  }
  piVar10 = (int *)((int)puVar8 + 0x26);
  iVar6 = uStack_e;
LAB_5f30ba25:
  uStack_e._2_2_ = (undefined2)((uint)iVar6 >> 0x10);
  uStack_e._0_2_ = (undefined2)iVar6;
  *puVar8 = local_14;
  puVar8[1] = CONCAT22((undefined2)uStack_e,uStack_10);
  puVar8[2] = CONCAT22(uStack_a,uStack_e._2_2_);
  puVar8[3] = uStack_8;
  *(undefined2 *)(puVar8 + 4) = uStack_4;
  uStack_e = iVar6;
  uVar7 = FUN_5f3094e0(param_2,piVar10,param_3 - 0x12);
  if ((int)uVar7 < 0) {
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    return uVar7;
  }
  GlobalUnlock(hMem);
  pHVar9 = FUN_5f30a470(hMem,param_3 + 0x14);
  if (pHVar9 != (HMETAFILE)0x0) {
    *(HMETAFILE *)(param_1 + 0x20) = pHVar9;
    *(undefined4 *)(param_1 + 0x1c) = 2;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  GlobalFree(hMem);
  return 0x800a01e1;
}



uint __cdecl FUN_5f30bad0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  HGLOBAL hMem;
  BYTE *pb;
  HENHMETAFILE pHVar2;
  undefined1 local_2c [20];
  int iStack_18;
  int iStack_10;
  UINT UStack_8;
  
  uVar1 = FUN_5f3094e0(param_2,local_2c,0x2c);
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x14))(param_2,0xffffffd4,0xffffffff,1,0);
    if (iStack_18 != 0x464d4520) {
      uVar1 = FUN_5f30b8b0(iStack_10,param_2,UStack_8,(short *)0x0);
      return uVar1;
    }
    hMem = GlobalAlloc(0x42,UStack_8);
    if (hMem == (HGLOBAL)0x0) {
      return 0x8007000e;
    }
    pb = (BYTE *)GlobalLock(hMem);
    uVar1 = FUN_5f3094e0(param_2,pb,UStack_8);
    if (-1 < (int)uVar1) {
      pHVar2 = SetEnhMetaFileBits(UStack_8,pb);
      if (pHVar2 == (HENHMETAFILE)0x0) {
        uVar1 = 0x8007000e;
      }
      else {
        *(undefined4 *)(iStack_10 + 0x1c) = 4;
        *(HENHMETAFILE *)(iStack_10 + 0x20) = pHVar2;
      }
    }
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  return uVar1;
}



uint __cdecl FUN_5f30bbb0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 local_14 [2];
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  uint local_a;
  
  piVar1 = param_2;
  uVar2 = FUN_5f3094e0(param_2,&param_2,4);
  if (-1 < (int)uVar2) {
    if (param_2 != (int *)0x9ac6cdd7) {
      return 0x800a01e1;
    }
    uVar2 = FUN_5f3094e0(piVar1,local_14,0x12);
    if (-1 < (int)uVar2) {
      uVar2 = FUN_5f30b8b0(param_1,piVar1,param_3 - 0x16,&local_12);
      if (-1 < (int)uVar2) {
        if ((short)local_a != 0) {
          *(int *)(param_1 + 0x24) =
               (((int)local_e - (int)local_12) * 0x5a0) / (int)(local_a & 0xffff);
          *(int *)(param_1 + 0x28) =
               (((int)local_c - (int)local_10) * 0x5a0) / (int)(local_a & 0xffff);
          return 0;
        }
        *(int *)(param_1 + 0x24) = (int)local_e - (int)local_12;
        uVar2 = 0;
        *(int *)(param_1 + 0x28) = (int)local_c - (int)local_10;
      }
    }
  }
  return uVar2;
}



HCURSOR __cdecl
FUN_5f30bc90(HGLOBAL param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6,HBITMAP param_7,int param_8)

{
  WORD WVar1;
  DWORD DVar2;
  int iVar3;
  HCURSOR pHVar4;
  HGLOBAL hMem;
  int iVar5;
  BITMAPINFO *lpbmi;
  SIZE_T SVar6;
  HBITMAP hbit;
  BYTE *lpbANDbits;
  RGBQUAD *lpBits;
  HBITMAP local_5c;
  HDC local_58;
  RGBQUAD *pRStack_54;
  HGLOBAL local_50;
  HCURSOR local_4c;
  BYTE *local_48;
  HGLOBAL local_44;
  HGDIOBJ local_40;
  undefined1 *puStack_3c;
  BYTE *local_38;
  HDC pHStack_34;
  undefined1 auStack_30 [8];
  int iStack_28;
  int iStack_24;
  ushort uStack_20;
  BYTE BStack_1e;
  undefined1 auStack_18 [8];
  int iStack_10;
  int iStack_c;
  
  local_40 = (HGDIOBJ)0x0;
  local_5c = (HBITMAP)0x0;
  local_44 = (HGLOBAL)0x0;
  local_50 = (HGLOBAL)0x0;
  local_38 = (BYTE *)0x0;
  local_48 = (BYTE *)0x0;
  local_4c = (HCURSOR)0x0;
  iVar5 = FUN_5f311970(0x5f321178);
  if (-1 < iVar5) {
    FUN_5f3119b0(&DAT_5f321178,(int *)&local_58);
    lpbmi = (BITMAPINFO *)GlobalLock(param_1);
    SVar6 = GlobalSize(param_1);
    puStack_3c = (undefined1 *)
                 ((int)&(((BITMAPINFO *)(lpbmi->bmiColors + -10))->bmiHeader).biSize + SVar6);
    DVar2 = (lpbmi->bmiHeader).biClrUsed;
    if (DVar2 == 0) {
      WVar1 = (lpbmi->bmiHeader).biBitCount;
      if (WVar1 == 0x18) {
        pRStack_54 = lpbmi->bmiColors;
      }
      else {
        pRStack_54 = lpbmi->bmiColors + (1 << ((byte)WVar1 & 0x1f));
      }
    }
    else {
      pRStack_54 = lpbmi->bmiColors + DVar2;
    }
    iVar5 = (lpbmi->bmiHeader).biHeight >> 1;
    (lpbmi->bmiHeader).biHeight = iVar5;
    pHStack_34 = GetDC((HWND)0x0);
    if (param_8 == 0) {
      hbit = CreateCompatibleBitmap(pHStack_34,param_6,(int)param_7);
    }
    else {
      hbit = CreateBitmap(param_6,(int)param_7,1,1,(void *)0x0);
    }
    if (hbit != (HBITMAP)0x0) {
      local_40 = SelectObject(local_58,hbit);
      iVar3 = (lpbmi->bmiHeader).biWidth;
      lpBits = (RGBQUAD *)
               (&pRStack_54->rgbBlue +
               ((int)(iVar3 * (uint)(lpbmi->bmiHeader).biBitCount + 0x1f) >> 3 & 0xfffffffcU) *
               iVar5);
      if (puStack_3c < lpBits) {
        local_4c = (HCURSOR)0xffff;
      }
      else {
        StretchDIBits(local_58,0,0,param_6,(int)param_7,0,0,iVar3,iVar5,pRStack_54,lpbmi,0,0xcc0020)
        ;
        GetObjectA(hbit,0x18,auStack_30);
        SVar6 = iStack_24 * iStack_28 * (uint)uStack_20;
        local_50 = GlobalAlloc(2,SVar6);
        if (local_50 != (HGLOBAL)0x0) {
          local_48 = (BYTE *)GlobalLock(local_50);
          GetBitmapBits(hbit,SVar6,local_48);
          FUN_5f30a640(local_58,local_40);
          local_5c = CreateBitmap(param_6,(int)param_7,1,1,(void *)0x0);
          if (local_5c != (HBITMAP)0x0) {
            local_40 = SelectObject(local_58,local_5c);
            iVar5 = (lpbmi->bmiHeader).biHeight;
            lpbmi->bmiColors[0].rgbBlue = '\0';
            lpbmi->bmiColors[0].rgbGreen = '\0';
            (lpbmi->bmiHeader).biBitCount = 1;
            (lpbmi->bmiHeader).biClrUsed = 0;
            lpbmi->bmiColors[0].rgbRed = '\0';
            lpbmi->bmiColors[0].rgbReserved = 0xff;
            *(undefined2 *)&lpbmi[1].bmiHeader.biSize = 0xffff;
            iVar3 = (lpbmi->bmiHeader).biWidth;
            pRStack_54 = lpBits;
            if (puStack_3c < &lpBits->rgbBlue + (iVar3 + 0x1f >> 3 & 0xfffffffcU) * iVar5) {
              local_4c = (HCURSOR)0xffff;
            }
            else {
              StretchDIBits(local_58,0,0,param_6,(int)param_7,0,0,iVar3,iVar5,lpBits,lpbmi,0,
                            0xcc0020);
              GetObjectA(local_5c,0x18,auStack_18);
              local_44 = GlobalAlloc(2,iStack_c * iStack_10);
              if (local_44 != (HGLOBAL)0x0) {
                lpbANDbits = (BYTE *)GlobalLock(local_44);
                local_38 = lpbANDbits;
                GetBitmapBits(local_5c,iStack_c * iStack_10,lpbANDbits);
                if (param_8 == 0) {
                  local_4c = CreateIcon(DAT_5f3211e4,param_6,(int)param_7,(BYTE)uStack_20,BStack_1e,
                                        lpbANDbits,local_48);
                }
                else {
                  local_4c = CreateCursor(DAT_5f3211e4,param_4,param_5,param_6,(int)param_7,
                                          lpbANDbits,local_48);
                }
              }
            }
          }
        }
      }
    }
    if (local_48 != (BYTE *)0x0) {
      GlobalUnlock(local_50);
    }
    if (local_50 != (HGLOBAL)0x0) {
      GlobalFree(local_50);
    }
    hMem = local_44;
    if (local_38 != (BYTE *)0x0) {
      GlobalUnlock(local_44);
    }
    if (hMem != (HGLOBAL)0x0) {
      GlobalFree(hMem);
    }
    if (local_40 != (HGDIOBJ)0x0) {
      FUN_5f30a640(local_58,local_40);
    }
    pHVar4 = local_4c;
    param_7 = hbit;
    if (local_4c == (HCURSOR)0x0) {
      if (hbit != (HBITMAP)0x0) {
        DeleteObject(hbit);
        param_7 = (HBITMAP)0x0;
      }
      if (local_5c != (HBITMAP)0x0) {
        DeleteObject(local_5c);
        local_5c = (HBITMAP)0x0;
      }
    }
    *param_2 = param_7;
    *param_3 = local_5c;
    if (pHStack_34 != (HDC)0x0) {
      ReleaseDC((HWND)0x0,pHStack_34);
    }
    GlobalUnlock(param_1);
    GlobalFree(param_1);
    FUN_5f311990(0x5f321178);
    return pHVar4;
  }
  *param_2 = 0;
  *param_3 = 0;
  return (HCURSOR)0xffff;
}



uint __cdecl FUN_5f30c090(int *param_1,uint param_2)

{
  uint3 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  HCURSOR pHVar7;
  code *unaff_EBX;
  undefined4 uVar8;
  uint unaff_EBP;
  undefined4 **unaff_ESI;
  int *piVar9;
  undefined4 **unaff_EDI;
  uint uVar10;
  uint unaff_retaddr;
  undefined4 **ppuStack_5c;
  undefined4 **ppuVar11;
  undefined4 **ppuVar12;
  byte bStack_48;
  undefined1 local_44;
  undefined1 uStack_43;
  ushort uStack_42;
  ushort local_40;
  undefined2 uStack_3e;
  int local_3c;
  code *local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 *puStack_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 uStack_23;
  char cStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined2 uStack_1e;
  undefined4 *puStack_1c;
  undefined4 *puStack_18;
  int *piStack_10;
  undefined4 *puStack_4;
  
  piVar9 = param_1;
  ppuStack_5c = &local_28;
  local_38 = *(code **)(*param_1 + 0x14);
  local_3c = 0;
  local_40 = 0;
  uStack_3e = 0;
  local_44 = 0;
  uStack_43 = 0;
  uStack_42 = 0;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  uStack_23 = 0;
  cStack_22 = '\0';
  uStack_21 = 0;
  (*local_38)(param_1,0,0,1);
  *puStack_4 = 0;
  uVar4 = FUN_5f3094e0(param_1,&local_44,6);
  if (-1 < (int)uVar4) {
    if ((local_40 == 0) ||
       (((uStack_42 != 1 && (uStack_42 != 2)) || (CONCAT11(uStack_43,local_44) != 0)))) {
      uVar4 = 0x800a01e1;
    }
    else {
      bStack_48 = uStack_42 == 2;
      if ((param_2 & 7) == 0) {
        FUN_5f311fa0(&DAT_5f321178,&ppuStack_5c);
      }
      else if ((param_2 & 1) == 0) {
        if ((param_2 & 2) == 0) {
          if ((param_2 & 4) != 0) {
            ppuStack_5c = (undefined4 **)0xff;
          }
        }
        else {
          ppuStack_5c = (undefined4 **)0x10;
        }
      }
      else {
        ppuStack_5c = (undefined4 **)0x2;
      }
      if ((unaff_retaddr == 0) && (param_1 == (int *)0x0)) {
        unaff_retaddr = FUN_5f311ad0(0x5f321178);
        param_1 = (int *)FUN_5f311af0(0x5f321178);
      }
      param_2 = 1;
      uVar8 = uStack_34;
      uVar10 = uStack_30;
      puVar2 = puStack_2c;
      puVar3 = local_28;
      if (local_40 != 0) {
        do {
          uVar4 = FUN_5f3094e0(piVar9,&local_24,0x10);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          if (cStack_22 == '\0') {
            cStack_22 = -1;
          }
          uVar10 = CONCAT22(uStack_1e,CONCAT11(uStack_1f,uStack_20));
          uVar1 = CONCAT12(cStack_22,CONCAT11(uStack_23,local_24));
          uStack_34 = CONCAT13(uStack_21,uVar1);
          if (param_2 == 1) {
            puStack_2c = puStack_1c;
            local_28 = puStack_18;
            uVar8 = uStack_34;
            uStack_30 = uVar10;
          }
          if (((unaff_ESI == (undefined4 **)0x0) && (unaff_EDI == (undefined4 **)0x0)) &&
             ((uVar4 = CONCAT12(uStack_20,CONCAT11(uStack_21,cStack_22)) & 0xff,
              (int)uVar4 <= (int)ppuStack_5c && (unaff_EBP < uVar4)))) {
            puStack_2c = puStack_1c;
            local_28 = puStack_18;
            uVar8 = uStack_34;
            unaff_EBP = uVar4;
            uStack_30 = uVar10;
          }
          piVar9 = piStack_10;
          if (((uVar1 & 0xff) == unaff_retaddr) &&
             ((int *)(CONCAT12(uStack_21,CONCAT11(cStack_22,uStack_23)) & 0xff) == param_1)) {
            ppuVar5 = (undefined4 **)(CONCAT12(uStack_20,CONCAT11(uStack_21,cStack_22)) & 0xff);
            puVar2 = puStack_1c;
            puVar3 = puStack_18;
            if (ppuVar5 == ppuStack_5c) break;
            if ((int)ppuVar5 < (int)ppuStack_5c) {
              ppuVar11 = ppuVar5;
              ppuVar12 = unaff_ESI;
              if (unaff_EDI < ppuVar5) {
LAB_5f30c281:
                puStack_2c = puStack_1c;
                local_28 = puStack_18;
                uVar8 = uStack_34;
                unaff_EDI = ppuVar11;
                unaff_ESI = ppuVar12;
                uStack_30 = uVar10;
              }
            }
            else if ((unaff_EDI == (undefined4 **)0x0) &&
                    (ppuVar11 = unaff_EDI, ppuVar12 = ppuVar5, ppuVar5 < unaff_ESI))
            goto LAB_5f30c281;
          }
          param_2 = param_2 + 1;
          uVar10 = uStack_30;
          uStack_34 = uVar8;
          puVar2 = puStack_2c;
          puVar3 = local_28;
        } while (param_2 <= local_40);
      }
      local_28 = puVar3;
      puStack_2c = puVar2;
      local_3c = local_3c + (int)local_28;
      uVar4 = (*unaff_EBX)(piVar9,local_3c,local_38,0,0);
      if (-1 < (int)uVar4) {
        hMem = GlobalAlloc(0x42,CONCAT22(uStack_3e,local_40));
        if (hMem == (HGLOBAL)0x0) {
          return 0x8007000e;
        }
        pvVar6 = GlobalLock(hMem);
        local_24 = SUB41(pvVar6,0);
        uStack_23 = (undefined1)((uint)pvVar6 >> 8);
        cStack_22 = (char)((uint)pvVar6 >> 0x10);
        uStack_21 = (undefined1)((uint)pvVar6 >> 0x18);
        uVar4 = FUN_5f3094e0(piVar9,pvVar6,CONCAT22(uStack_3e,local_40));
        if ((-1 < (int)uVar4) &&
           (*(int *)CONCAT13(uStack_21,CONCAT12(cStack_22,CONCAT11(uStack_23,local_24))) == 0xc)) {
          uVar4 = 0x800a01e1;
        }
        GlobalUnlock(hMem);
        if (-1 < (int)uVar4) {
          if (!(bool)bStack_48) {
            bStack_48 = *(byte *)(CONCAT13(uStack_21,
                                           CONCAT12(cStack_22,CONCAT11(uStack_23,local_24))) + 4);
          }
          pHVar7 = FUN_5f30bc90(hMem,(undefined4 *)CONCAT22(uStack_1e,CONCAT11(uStack_1f,uStack_20))
                                ,puStack_1c,uVar10 & 0xffff,(uint)uStack_42,(uint)bStack_48,
                                (HBITMAP)(*(int *)(CONCAT13(uStack_21,
                                                            CONCAT12(cStack_22,
                                                                     CONCAT11(uStack_23,local_24)))
                                                  + 8) >> 1 & 0xff),(int)ppuStack_5c);
          *puStack_18 = pHVar7;
          if (pHVar7 != (HCURSOR)0xffff) {
            return (-(uint)(pHVar7 != (HCURSOR)0x0) & 0x7ff8fff2) + 0x8007000e;
          }
          *puStack_18 = 0;
          return 0x800a01e1;
        }
        GlobalFree(hMem);
        return uVar4;
      }
    }
  }
  return uVar4;
}



uint __cdecl
FUN_5f30c420(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = FUN_5f30c090(param_2,param_1 + 0x44);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 0x1c) = 3;
    *(undefined4 *)(param_1 + 0x20) = param_5;
    uVar1 = 0;
  }
  return uVar1;
}



void __thiscall FUN_5f30c470(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)((int)this + 0x5c) + 0x14))((int *)((int)this + 0x5c),param_1,param_2);
  return;
}



uint __cdecl FUN_5f30c490(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBX;
  SIZE_T unaff_EBP;
  uint unaff_ESI;
  void *unaff_EDI;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piStack_28;
  int local_10;
  undefined4 uStack_c;
  int aiStack_8 [2];
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piStack_28 = &local_10;
  pcVar1 = *(code **)(*param_2 + 0x14);
  uVar6 = 0;
  piVar5 = param_2;
  uVar2 = (*pcVar1)(param_2,0,0,1);
  if (-1 < (int)uVar2) {
    while (uVar2 = FUN_5f3094e0(param_2,&uStack_c,2), -1 < (int)uVar2) {
      if ((short)uStack_c != 0x746c) {
        if ((piStack_28 == (int *)0x0) && (aiStack_8[0] == 0)) {
          uVar2 = (*pcVar1)(param_2,0,0,2,&stack0xffffffe4);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          if (unaff_EBX != unaff_ESI) {
            return 0x80004005;
          }
          aiStack_8[0] = unaff_EBP - (int)unaff_EDI;
        }
        iVar4 = 0;
        uVar2 = (*pcVar1)(param_2,unaff_EDI,unaff_ESI,0);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        *(SIZE_T *)((int)unaff_EDI + 0x4c) = unaff_EBP;
        if (unaff_EBP == 0) {
          *(undefined4 *)((int)unaff_EDI + 0x1c) = 0;
          return unaff_EBP;
        }
        if ((unaff_EBX == 0) && (uVar2 = FUN_5f30c470(unaff_EDI,param_2,unaff_EBP), (int)uVar2 < 0))
        {
          return uVar2;
        }
        uVar3 = unaff_ESI & 0xffff;
        if (uVar3 < 0x4948) {
          if (uVar3 == 0x4947) {
LAB_5f30c65e:
            FUN_5f30ee00(&DAT_5f3028f0,unaff_EDI,param_2);
            goto LAB_5f30c6a6;
          }
          if (uVar3 == 0) {
            uVar2 = FUN_5f30c420((int)unaff_EDI,param_2,0,local_10,uStack_c);
            goto LAB_5f30c6a6;
          }
          if (uVar3 == 1) {
            uVar2 = FUN_5f30bad0(unaff_EDI,param_2);
            goto LAB_5f30c6a6;
          }
        }
        else if (uVar3 < 0x6968) {
          if (uVar3 == 0x6967) goto LAB_5f30c65e;
          if (uVar3 == 0x4d42) {
            uVar2 = FUN_5f30b770((int)unaff_EDI,param_2,unaff_EBP);
            goto LAB_5f30c6a6;
          }
        }
        else {
          if (uVar3 == 0xcdd7) {
            uVar2 = FUN_5f30bbb0((int)unaff_EDI,param_2,unaff_EBP);
            goto LAB_5f30c6a6;
          }
          if (uVar3 == 0xd8ff) {
            FUN_5f30ee00(&DAT_5f302900,unaff_EDI,param_2);
            goto LAB_5f30c6a6;
          }
        }
        uVar2 = 0x800a01e1;
LAB_5f30c6a6:
        if (iVar4 == 0) {
          return uVar2;
        }
        uVar2 = (*pcVar1)(param_2,(int)piVar5 + unaff_EBP,uVar6,0,0);
        return uVar2;
      }
      piStack_28 = (int *)0x1;
      uVar2 = FUN_5f3094e0(param_2,&uStack_c,2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = FUN_5f3094e0(param_2,aiStack_8,4);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (aiStack_8[0] == 0) {
        *(undefined4 *)(local_10 + 0x4c) = 0;
        *(undefined4 *)(local_10 + 0x1c) = 0;
        return 0;
      }
      uVar2 = (*pcVar1)(param_2,0,0,1,&stack0xffffffdc);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
  }
  return uVar2;
}



undefined4 __cdecl FUN_5f30c6e0(HICON param_1,undefined4 *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  int iVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ h;
  HGDIOBJ pvVar3;
  int cy;
  int cx;
  HDC hdc_01;
  HBITMAP pHStack_38;
  HBITMAP pHStack_34;
  ICONINFO local_2c;
  undefined1 auStack_18 [4];
  int iStack_14;
  int iStack_10;
  
  hdc_01 = (HDC)0x0;
  cx = 0;
  cy = 0;
  BVar1 = GetIconInfo(param_1,&local_2c);
  if (BVar1 != 0) {
    if ((local_2c.hbmMask != (HBITMAP)0x0) && (local_2c.hbmColor != (HBITMAP)0x0)) {
      *param_2 = local_2c.hbmMask;
      *param_3 = local_2c.hbmColor;
      return 0;
    }
    if (local_2c.hbmMask != (HBITMAP)0x0) {
      iVar2 = GetObjectA(local_2c.hbmMask,0x18,auStack_18);
      if (iVar2 != 0) {
        cy = iStack_10 / 2;
        cx = iStack_14;
      }
      DeleteObject(local_2c.hbmMask);
    }
    if (local_2c.hbmColor != (HBITMAP)0x0) {
      DeleteObject(local_2c.hbmColor);
    }
  }
  if ((cx == 0) || (cy == 0)) {
    cx = GetSystemMetrics(0xb);
    cy = GetSystemMetrics(0xc);
  }
  pHStack_38 = (HBITMAP)0x0;
  pHStack_34 = (HBITMAP)0x0;
  if (param_1 != (HICON)0x0) {
    hdc = GetDC((HWND)0x0);
    if (hdc == (HDC)0x0) {
      return 0;
    }
    hdc_00 = CreateCompatibleDC(hdc);
    if (((hdc_00 != (HDC)0x0) && (hdc_01 = CreateCompatibleDC(hdc), hdc_01 != (HDC)0x0)) &&
       (pHStack_38 = CreateCompatibleBitmap(hdc,cx,cy), pHStack_38 != (HBITMAP)0x0)) {
      ReleaseDC((HWND)0x0,hdc);
      pHStack_34 = CreateBitmap(cx,cy,1,1,(void *)0x0);
      if (pHStack_34 != (HBITMAP)0x0) {
        h = SelectObject(hdc_00,pHStack_38);
        BVar1 = PatBlt(hdc_00,0,0,cx,cy,0x42);
        if ((((BVar1 != 0) && (BVar1 = DrawIcon(hdc_00,0,0,param_1), BVar1 != 0)) &&
            ((pvVar3 = SelectObject(hdc_01,pHStack_34), pvVar3 != (HGDIOBJ)0x0 &&
             ((BVar1 = PatBlt(hdc_01,0,0,cx,cy,0xff0062), BVar1 != 0 &&
              (BVar1 = DrawIcon(hdc_01,0,0,param_1), BVar1 != 0)))))) &&
           (BVar1 = BitBlt(hdc_01,0,0,cx,cy,hdc_00,0,0,0x660046), BVar1 != 0)) {
          SelectObject(hdc_00,h);
          SelectObject(hdc_01,h);
          DeleteDC(hdc_00);
          DeleteDC(hdc_01);
          *param_3 = pHStack_38;
          *param_2 = pHStack_34;
          return 0;
        }
      }
    }
    ReleaseDC((HWND)0x0,hdc);
    if (hdc_00 != (HDC)0x0) {
      DeleteDC(hdc_00);
    }
    if (hdc_01 != (HDC)0x0) {
      DeleteDC(hdc_01);
    }
    if (pHStack_38 != (HBITMAP)0x0) {
      DeleteObject(pHStack_38);
    }
    if (pHStack_34 != (HBITMAP)0x0) {
      DeleteObject(pHStack_34);
    }
    return 0x80004005;
  }
  return 0x80004005;
}



int FUN_5f30c930(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_retaddr;
  
  *param_4 = 0;
  this = (void *)FUN_5f312aa0(0x9c);
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_5f3095b0(this,2);
  }
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  puVar1 = (undefined4 *)*piVar2;
  (*(code *)puVar1[1])(piVar2);
  if (unaff_retaddr != (int *)0x0) {
    piVar4 = piVar2 + 6;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *unaff_retaddr;
      unaff_retaddr = unaff_retaddr + 1;
      piVar4 = piVar4 + 1;
    }
    if (piVar2[7] == 3) {
      iVar3 = FUN_5f30c6e0((HICON)piVar2[8],piVar2 + 0x10,piVar2 + 0x11);
      if (iVar3 < 0) goto LAB_5f30ca22;
    }
    *(byte *)(piVar2 + 0x15) = ((byte)param_2 & 1) << 1 | *(byte *)(piVar2 + 0x15) & 0xfd;
    if ((param_2 != 0) && (piVar2[7] == 1)) {
      piVar4 = piVar2 + 0x14;
      iVar3 = FUN_5f309410(piVar4);
      if (iVar3 < 0) goto LAB_5f30ca22;
      if (piVar2[8] != 0) {
        iVar3 = FUN_5f309490(*piVar4,piVar2[8]);
        if (iVar3 < 0) goto LAB_5f30ca22;
      }
      if (piVar2[9] != 0) {
        iVar3 = FUN_5f309490(*piVar4,piVar2[9]);
        if (iVar3 < 0) goto LAB_5f30ca22;
      }
    }
    iVar3 = FUN_5f30a4a0((int)piVar2);
    if (iVar3 < 0) goto LAB_5f30ca22;
  }
  iVar3 = (*(code *)*puVar1)(piVar2,param_1,param_3);
LAB_5f30ca22:
  (*(code *)puVar1[2])(piVar2);
  return iVar3;
}



void __cdecl FUN_5f30ca30(int param_1,int *param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
  uVar1 = FUN_5f30c490(param_1,param_2);
  if (-1 < (int)uVar1) {
    FUN_5f30a4a0(param_1);
  }
  return;
}



void FUN_5f30cab0(int *param_1,undefined4 param_2,int param_3)

{
  FUN_5f30cae0(param_1,param_2,param_3);
  return;
}



int FUN_5f30cae0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_stack_0000001c;
  undefined4 *in_stack_00000020;
  
  if (in_stack_00000020 == (undefined4 *)0x0) {
    return -0x7fffbffd;
  }
  *in_stack_00000020 = 0;
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = 2;
  }
  this = (void *)FUN_5f312aa0(0x9c);
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_5f3095b0(this,uVar4);
  }
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  puVar1 = (undefined4 *)*piVar2;
  (*(code *)puVar1[1])(piVar2);
  iVar3 = FUN_5f30ca30((int)piVar2,param_1);
  if (-1 < iVar3) {
    iVar3 = (*(code *)*puVar1)(piVar2,param_3,in_stack_0000001c);
  }
  (*(code *)puVar1[2])(piVar2);
  return iVar3;
}



HGLOBAL __cdecl FUN_5f30cba0(HBITMAP param_1,HPALETTE param_2)

{
  byte bVar1;
  BYTE BVar2;
  bool bVar3;
  HGLOBAL pvVar4;
  LPBITMAPINFO ptVar5;
  HGLOBAL hMem;
  LPBITMAPINFO lpbmi;
  HDC hdc;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  DWORD *pDVar10;
  LPBITMAPINFO ptVar11;
  BYTE *pBVar12;
  RGBQUAD *pPalEntries;
  LPBITMAPINFO ptVar13;
  DWORD local_50;
  int local_4c;
  BYTE *local_48;
  HGLOBAL local_44;
  undefined1 local_40 [4];
  int local_3c;
  UINT local_38;
  ushort local_30;
  ushort uStack_2e;
  DWORD local_28 [2];
  UINT local_20;
  undefined2 local_1c;
  ushort local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_50 = 0;
  if (param_1 == (HBITMAP)0x0) {
    return (HGLOBAL)0x0;
  }
  GetObjectA(param_1,0x18,local_40);
  FUN_5f312000(&DAT_5f321178,&local_4c);
  if (local_4c != 0) {
    if (param_2 == (HPALETTE)0x0) {
      FUN_5f311d50(&DAT_5f321178,&param_2);
    }
    if (((local_4c == 0x100) && ((uint)local_30 * (uint)uStack_2e == 8)) &&
       (GetObjectA(param_2,4,&local_50), 0x100 < local_50)) {
      local_50 = 0;
    }
  }
  local_1a = local_30 * uStack_2e;
  local_28[0] = 0x28;
  local_28[1] = local_3c;
  local_20 = local_38;
  local_1c = 1;
  if (8 < local_1a) {
    local_1a = 0x18;
  }
  uStack_18 = 0;
  uStack_16 = 0;
  local_10 = 0;
  local_14 = ((uint)local_1a * local_3c + 0x1f >> 5) * local_38 * 4;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_48 = (BYTE *)FUN_5f30e130((int *)local_28);
  pvVar4 = GlobalAlloc(0x42,(int)local_48 + 0x28 + local_14);
  if (pvVar4 == (HGLOBAL)0x0) {
    return (HGLOBAL)0x0;
  }
  local_44 = pvVar4;
  ptVar5 = (LPBITMAPINFO)GlobalLock(pvVar4);
  lpbmi = ptVar5;
  if (local_50 != 0) {
    hMem = GlobalAlloc(0,local_28[0] + 0x400);
    lpbmi = (LPBITMAPINFO)GlobalLock(hMem);
    if (lpbmi == (LPBITMAPINFO)0x0) {
      GlobalFree(pvVar4);
      return (HGLOBAL)0x0;
    }
  }
  pDVar10 = local_28;
  ptVar11 = lpbmi;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    (ptVar11->bmiHeader).biSize = *pDVar10;
    pDVar10 = pDVar10 + 1;
    ptVar11 = (LPBITMAPINFO)&(ptVar11->bmiHeader).biWidth;
  }
  hdc = GetDC((HWND)0x0);
  bVar3 = FUN_5f311fe0(&DAT_5f321178);
  if (CONCAT31(extraout_var,bVar3) != 0) {
    param_2 = SelectPalette(hdc,param_2,0);
    RealizePalette(hdc);
  }
  local_48 = &ptVar5->bmiColors[0].rgbBlue + (int)local_48;
  iVar8 = GetDIBits(hdc,param_1,0,local_20,local_48,lpbmi,(uint)(local_50 != 0));
  bVar3 = FUN_5f311fe0(&DAT_5f321178);
  if (CONCAT31(extraout_var_00,bVar3) != 0) {
    param_2 = SelectPalette(hdc,param_2,0);
  }
  ReleaseDC((HWND)0x0,hdc);
  pBVar12 = local_48;
  if (local_50 != 0) {
    if (iVar8 != 0) {
      ptVar11 = lpbmi;
      ptVar13 = ptVar5;
      for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
        (ptVar13->bmiHeader).biSize = (ptVar11->bmiHeader).biSize;
        ptVar11 = (LPBITMAPINFO)&(ptVar11->bmiHeader).biWidth;
        ptVar13 = (LPBITMAPINFO)&(ptVar13->bmiHeader).biWidth;
      }
      (ptVar5->bmiHeader).biClrUsed = local_50;
      iVar9 = FUN_5f30e130((int *)ptVar5);
      uVar7 = 0;
      if (local_14 != 0) {
        do {
          bVar1 = *pBVar12;
          pBVar12 = pBVar12 + 1;
          uVar6 = uVar7 + 1;
          (&ptVar5->bmiColors[0].rgbBlue)[uVar7 + iVar9] =
               (&lpbmi->bmiColors[0].rgbBlue)[(uint)bVar1 * 2];
          uVar7 = uVar6;
        } while (uVar6 < local_14);
      }
      pPalEntries = ptVar5->bmiColors;
      GetPaletteEntries(param_2,0,local_50,(LPPALETTEENTRY)pPalEntries);
      uVar7 = 0;
      if (local_50 != 0) {
        do {
          BVar2 = pPalEntries->rgbBlue;
          pPalEntries->rgbBlue = pPalEntries->rgbRed;
          pPalEntries->rgbRed = BVar2;
          uVar7 = uVar7 + 1;
          pPalEntries = pPalEntries + 1;
        } while (uVar7 < local_50);
      }
    }
    pvVar4 = GlobalHandle(lpbmi);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(lpbmi);
    GlobalFree(pvVar4);
  }
  pvVar4 = local_44;
  GlobalUnlock(local_44);
  if (iVar8 != 0) {
    return pvVar4;
  }
  GlobalFree(pvVar4);
  return (HGLOBAL)0x0;
}



int __cdecl FUN_5f30ce90(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  HGLOBAL hMem;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 uStack_10;
  int iStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  
  hMem = FUN_5f30cba0(*(HBITMAP *)(param_2 + 0x20),*(HPALETTE *)(param_2 + 0x24));
  if (hMem == (HGLOBAL)0x0) {
    return -0x7ff8fff2;
  }
  piVar2 = (int *)GlobalLock(hMem);
  iVar3 = FUN_5f30e130(piVar2);
  uStack_10 = 0x4d42;
  iVar4 = piVar2[5] + iVar3 + *piVar2;
  iVar1 = iVar4 + 0xe;
  uStack_a = 0;
  uStack_8 = 0;
  iStack_6 = iVar3 + 0xe + *piVar2;
  iStack_e = iVar1;
  iVar3 = FUN_5f3094c0(param_1,&uStack_10,0xe);
  if (-1 < iVar3) {
    iVar3 = FUN_5f3094c0(param_1,piVar2,iVar4);
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
  }
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  return iVar3;
}



HGLOBAL __cdecl FUN_5f30cf50(HMETAFILE param_1,UINT *param_2)

{
  UINT dwBytes;
  HGLOBAL hMem;
  LPVOID lpData;
  
  dwBytes = GetMetaFileBitsEx(param_1,0,(LPVOID)0x0);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem != (HGLOBAL)0x0) {
    lpData = GlobalLock(hMem);
    GetMetaFileBitsEx(param_1,dwBytes,lpData);
    *param_2 = dwBytes;
    GlobalUnlock(hMem);
  }
  return hMem;
}



undefined4 __cdecl FUN_5f30cfa0(int *param_1,int param_2,UINT *param_3)

{
  HENHMETAFILE hEMF;
  UINT dwBytes;
  HGLOBAL hMem;
  LPBYTE lpData;
  undefined4 uVar1;
  
  hEMF = *(HENHMETAFILE *)(param_2 + 0x20);
  dwBytes = GetEnhMetaFileBits(hEMF,0,(LPBYTE)0x0);
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    return 0x8007000e;
  }
  lpData = (LPBYTE)GlobalLock(hMem);
  GetEnhMetaFileBits(hEMF,dwBytes,lpData);
  uVar1 = FUN_5f3094c0(param_1,lpData,dwBytes);
  GlobalUnlock(hMem);
  if (param_3 != (UINT *)0x0) {
    *param_3 = dwBytes;
  }
  GlobalFree(hMem);
  return uVar1;
}



// WARNING: Type propagation algorithm not settling

int __cdecl FUN_5f30d020(int *param_1,int param_2,int *param_3)

{
  ushort *puVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  HMETAFILE pHVar3;
  int iVar4;
  UINT local_1c [2];
  ushort local_14 [10];
  
  local_14[4] = *(undefined2 *)(param_2 + 0x28);
  local_14[3] = *(undefined2 *)(param_2 + 0x24);
  local_1c[0] = 0x5711;
  local_1c[0]._0_2_ = 0x5711;
  iVar4 = 0;
  local_14[0] = 0;
  local_14[2] = 0;
  local_14[1] = 0;
  local_14[5] = 0x5a0;
  local_14[6] = 0;
  local_14[7] = 0;
  local_1c[1] = 0x9ac6cdd7;
  puVar1 = local_14;
  local_14[8] = (ushort)local_1c[0];
  do {
    local_14[8] = local_14[8] ^ *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 < local_14 + 8);
  hMem = FUN_5f30cf50(*(HMETAFILE *)(param_2 + 0x20),local_1c);
  if (hMem != (HGLOBAL)0x0) {
    iVar4 = FUN_5f3094c0(param_1,local_1c + 1,4);
    if (-1 < iVar4) {
      iVar4 = FUN_5f3094c0(param_1,local_14,0x12);
      if (-1 < iVar4) {
        pvVar2 = GlobalLock(hMem);
        iVar4 = FUN_5f3094c0(param_1,pvVar2,local_1c[0]);
        GlobalUnlock(hMem);
        if (param_3 != (int *)0x0) {
          *param_3 = local_1c[0] + 0x16;
        }
      }
    }
    pHVar3 = FUN_5f30a470(hMem,local_1c[0]);
    *(HMETAFILE *)(param_2 + 0x20) = pHVar3;
  }
  return iVar4;
}



int __cdecl
FUN_5f30d120(int *param_1,int param_2,UINT param_3,HBITMAP param_4,HBITMAP param_5,int *param_6)

{
  BYTE BVar1;
  BYTE BVar5;
  BYTE BVar6;
  DWORD DVar2;
  BYTE BVar7;
  DWORD DVar3;
  DWORD DVar4;
  HDC hdc;
  int iVar8;
  int iVar9;
  uint uVar10;
  HGLOBAL hMem;
  LPBITMAPINFO lpbmi;
  uint dwBytes;
  int iVar11;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  uint uStack_8;
  undefined4 uStack_4;
  
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    return -0x7ff8fff2;
  }
  iVar8 = GetDeviceCaps(hdc,0xc);
  iVar9 = GetDeviceCaps(hdc,0xe);
  uVar10 = iVar9 * iVar8;
  if (4 < uVar10) {
    uVar10 = 4;
  }
  uStack_16 = 1;
  uStack_14 = 1;
  iVar8 = 1 << ((byte)uVar10 & 0x1f);
  uStack_18 = 0;
  uStack_f = (undefined1)param_3;
  uStack_a = 0;
  uStack_c = 0;
  uStack_4 = 0x16;
  uStack_e = (undefined1)iVar8;
  iVar9 = ((int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5) * param_3 * 4;
  iVar11 = iVar9 * uVar10;
  dwBytes = iVar8 * 4 + 0x28 + iVar11 + iVar9;
  uStack_10 = (undefined1)param_2;
  uStack_8 = dwBytes;
  hMem = GlobalAlloc(0x42,dwBytes);
  if (hMem == (HGLOBAL)0x0) {
    return -0x7ff8fff2;
  }
  lpbmi = (LPBITMAPINFO)GlobalLock(hMem);
  (lpbmi->bmiHeader).biWidth = param_2;
  (lpbmi->bmiHeader).biSize = 0x28;
  (lpbmi->bmiHeader).biHeight = param_3;
  (lpbmi->bmiHeader).biPlanes = 1;
  (lpbmi->bmiHeader).biBitCount = (WORD)uVar10;
  (lpbmi->bmiHeader).biCompression = 0;
  iVar9 = GetDIBits(hdc,param_5,0,param_3,lpbmi->bmiColors + iVar8,lpbmi,0);
  if (iVar9 == 0) {
    iVar8 = -0x7ff8fff2;
  }
  else {
    DVar2 = (lpbmi->bmiHeader).biSizeImage;
    BVar1 = lpbmi->bmiColors[0].rgbBlue;
    BVar5 = lpbmi->bmiColors[0].rgbGreen;
    BVar6 = lpbmi->bmiColors[0].rgbRed;
    BVar7 = lpbmi->bmiColors[0].rgbReserved;
    DVar3 = lpbmi[1].bmiHeader.biSize;
    (lpbmi->bmiHeader).biBitCount = 1;
    iVar8 = GetDIBits(hdc,param_4,0,param_3,&lpbmi->bmiColors[iVar8].rgbBlue + iVar11,lpbmi,0);
    if (iVar8 == 0) {
      iVar8 = -0x7ff8fff2;
    }
    else {
      DVar4 = (lpbmi->bmiHeader).biSizeImage;
      lpbmi->bmiColors[0].rgbBlue = BVar1;
      lpbmi->bmiColors[0].rgbGreen = BVar5;
      lpbmi->bmiColors[0].rgbRed = BVar6;
      lpbmi->bmiColors[0].rgbReserved = BVar7;
      lpbmi[1].bmiHeader.biSize = DVar3;
      (lpbmi->bmiHeader).biHeight = param_3 * 2;
      (lpbmi->bmiHeader).biBitCount = (WORD)uVar10;
      (lpbmi->bmiHeader).biSizeImage = DVar4 + DVar2;
      iVar8 = FUN_5f3094c0(param_1,&uStack_18,6);
      if (-1 < iVar8) {
        iVar8 = FUN_5f3094c0(param_1,&uStack_10,0x10);
        if (-1 < iVar8) {
          iVar8 = FUN_5f3094c0(param_1,lpbmi,dwBytes & 0xffff);
          if (-1 < iVar8) {
            if (param_6 != (int *)0x0) {
              *param_6 = dwBytes + 0x16;
            }
            iVar8 = 0;
          }
        }
      }
    }
  }
  GlobalUnlock(hMem);
  GlobalFree(hMem);
  ReleaseDC((HWND)0x0,hdc);
  return iVar8;
}



void __cdecl FUN_5f30d350(int *param_1,int param_2,int *param_3)

{
  FUN_5f30d120(param_1,*(int *)(param_2 + 0x2c),*(UINT *)(param_2 + 0x30),
               *(HBITMAP *)(param_2 + 0x40),*(HBITMAP *)(param_2 + 0x44),param_3);
  return;
}



int __thiscall FUN_5f30d380(void *this,int *param_1)

{
  int iVar1;
  int unaff_ESI;
  int *unaff_retaddr;
  int local_c;
  undefined1 local_8 [4];
  int iStack_4;
  
  local_c = 0x746c;
  iVar1 = FUN_5f3094c0(param_1,&local_c,4);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)((int)this + 8) + 0x1c))((int)this + 8,local_8);
    if (-1 < iVar1) {
      if (local_c != 0) {
        return -0x7fffbffb;
      }
      iStack_4 = unaff_ESI + -8;
      iVar1 = FUN_5f3094c0(param_1,&iStack_4,4);
      if (-1 < iVar1) {
        if (unaff_retaddr != (int *)0x0) {
          *unaff_retaddr = unaff_ESI + -8;
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}



uint __fastcall FUN_5f30d410(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *unaff_ESI;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  piVar1 = (int *)(param_1 + 0x5c);
  iVar4 = (**(code **)(iVar2 + 0x10))();
  if (iVar4 != 0) {
    return -(uint)(*(int *)(param_1 + 0x1c) != 0) & 0x80004005;
  }
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar5 = (**(code **)(iVar2 + 0x18))(piVar1,0x10,&stack0xfffffff8);
      if (-1 < (int)uVar5) {
        uVar3 = *(uint *)(param_1 + 0x4c);
        uVar5 = FUN_5f309510(piVar1,(int *)unaff_ESI,uVar3);
        (**(code **)(*piVar1 + 8))(piVar1);
        if (unaff_ESI != (uint *)0x0) {
          *unaff_ESI = uVar3;
        }
      }
      return uVar5;
    }
    return 0x8000ffff;
  }
  return 0x8000000a;
}



uint __thiscall FUN_5f30d4a0(void *this,int *param_1,int param_2,int param_3,UINT *param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_5f30d380(this,param_1);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  if (param_3 != 0) {
    uVar1 = FUN_5f30d410((int)this);
    return uVar1;
  }
  switch(*(undefined4 *)((int)this + 0x1c)) {
  case 1:
    uVar1 = FUN_5f30ce90(param_1,(int)this,(int *)param_4);
    break;
  case 2:
    uVar1 = FUN_5f30d020(param_1,(int)this,(int *)param_4);
    return uVar1;
  case 3:
    uVar1 = FUN_5f30d350(param_1,(int)this,(int *)param_4);
    return uVar1;
  case 4:
    uVar1 = FUN_5f30cfa0(param_1,(int)this,param_4);
    return uVar1;
  }
  return uVar1;
}



HPALETTE __cdecl FUN_5f30d550(HPALETTE param_1)

{
  int iVar1;
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  UINT UVar2;
  HPALETTE pHVar3;
  uint local_4;
  
  pHVar3 = (HPALETTE)0x0;
  local_4 = 0;
  iVar1 = GetObjectA(param_1,2,&local_4);
  if (iVar1 == 0) {
    return (HPALETTE)0x0;
  }
  hMem = GlobalAlloc(2,(local_4 & 0xffff) * 4 + 8);
  if (hMem == (HGLOBAL)0x0) {
    return (HPALETTE)0x0;
  }
  plpal = (LOGPALETTE *)GlobalLock(hMem);
  if (plpal != (LOGPALETTE *)0x0) {
    UVar2 = GetPaletteEntries(param_1,0,local_4 & 0xffff,plpal->palPalEntry);
    if (UVar2 != 0) {
      plpal->palVersion = 0x300;
      plpal->palNumEntries = (WORD)local_4;
      pHVar3 = CreatePalette(plpal);
    }
    if (plpal != (LOGPALETTE *)0x0) {
      GlobalUnlock(hMem);
    }
  }
  GlobalFree(hMem);
  return pHVar3;
}



undefined4 __thiscall
FUN_5f30d600(void *this,HDC param_1,LPHANDLETABLE param_2,LPMETARECORD param_3,UINT param_4)

{
  ushort uVar1;
  int iVar2;
  HPALETTE hPal;
  
  if (*(int *)((int)this + 0x88) == 0) {
    if (param_3->rdFunction == 0x234) {
      SelectPalette(param_1,(HPALETTE)param_2[param_3->rdParm[0]].objectHandle[0],1);
      return 1;
    }
  }
  else {
    uVar1 = param_3->rdFunction;
    if (uVar1 < 0x104) {
      if (uVar1 == 0x103) {
        return 1;
      }
      if ((uVar1 == 0x1e) && (iVar2 = FUN_5f30d9a0((int)this), iVar2 == 0)) {
        return 0;
      }
    }
    else if (uVar1 < 0x20c) {
      if (uVar1 == 0x20b) {
        FUN_5f30d7e0(this,param_1,(uint)(ushort)param_3[1].rdSize,(uint)param_3->rdParm[0],0);
        return 1;
      }
      if (uVar1 == 0x127) {
        FUN_5f30d9f0((int)this);
      }
    }
    else if (uVar1 < 0x235) {
      if (uVar1 == 0x234) {
        hPal = FUN_5f30d550((HPALETTE)param_2[param_3->rdParm[0]].objectHandle[0]);
        if (hPal == (HPALETTE)0x0) {
          return 1;
        }
        SelectPalette(param_1,hPal,1);
        return 1;
      }
      switch(uVar1) {
      case 0x20c:
        FUN_5f30d860(this,param_1,(uint)(ushort)param_3[1].rdSize,(uint)param_3->rdParm[0]);
        return 1;
      case 0x20d:
      case 0x20e:
      case 0x211:
        goto switchD_5f30d6a2_caseD_20d;
      case 0x20f:
        FUN_5f30d7e0(this,param_1,(uint)(ushort)param_3[1].rdSize,(uint)param_3->rdParm[0],1);
        return 1;
      }
    }
    else {
      if (uVar1 == 0x410) {
        FUN_5f30d8f0(this,param_1,(uint)param_3[1].rdFunction,
                     (uint)*(ushort *)((int)&param_3[1].rdSize + 2),(uint)(ushort)param_3[1].rdSize,
                     (uint)param_3->rdParm[0]);
        return 1;
      }
      if (uVar1 == 0x412) {
        FUN_5f30d940(this,param_1,(uint)param_3[1].rdFunction,
                     (uint)*(ushort *)((int)&param_3[1].rdSize + 2),(uint)(ushort)param_3[1].rdSize,
                     (uint)param_3->rdParm[0]);
        return 1;
      }
    }
  }
  PlayMetaFileRecord(param_1,param_2,param_3,param_4);
switchD_5f30d6a2_caseD_20d:
  return 1;
}



void __thiscall FUN_5f30d7e0(void *this,HDC param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPPOINT lppt;
  
  piVar1 = *(int **)((int)this + 0x84);
  if (param_4 == 0) {
    *piVar1 = param_2;
    piVar1[1] = param_3;
  }
  else {
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] + param_3;
  }
  iVar4 = piVar1[2];
  if ((iVar4 != 0) && (piVar1[3] != 0)) {
    iVar2 = *(int *)((int)this + 0x80);
    lppt = (LPPOINT)0x0;
    iVar3 = MulDiv(*(int *)(iVar2 + 0x30),piVar1[3],piVar1[5]);
    iVar3 = piVar1[1] - iVar3;
    iVar4 = MulDiv(*(int *)(iVar2 + 0x2c),iVar4,piVar1[4]);
    SetWindowOrgEx(param_1,*piVar1 - iVar4,iVar3,lppt);
  }
  return;
}



void __thiscall FUN_5f30d860(void *this,HDC param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int x;
  int iVar3;
  LPSIZE lpsz;
  LPPOINT lppt;
  
  piVar1 = *(int **)((int)this + 0x84);
  iVar3 = *(int *)((int)this + 0x80);
  piVar1[2] = param_2;
  piVar1[3] = param_3;
  lpsz = (LPSIZE)0x0;
  iVar2 = MulDiv(*(int *)(iVar3 + 0x28),param_3,piVar1[5]);
  x = MulDiv(*(int *)(iVar3 + 0x24),param_2,piVar1[4]);
  SetWindowExtEx(param_1,x,iVar2,lpsz);
  lppt = (LPPOINT)0x0;
  iVar2 = MulDiv(*(int *)(iVar3 + 0x30),param_3,piVar1[5]);
  iVar2 = piVar1[1] - iVar2;
  iVar3 = MulDiv(*(int *)(iVar3 + 0x2c),param_2,piVar1[4]);
  SetWindowOrgEx(param_1,*piVar1 - iVar3,iVar2,lppt);
  return;
}



void __thiscall FUN_5f30d8f0(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x84);
  iVar1 = MulDiv(*(int *)(iVar2 + 0xc),param_4,param_5);
  iVar2 = MulDiv(*(int *)(iVar2 + 8),param_2,param_3);
  FUN_5f30d860(this,param_1,iVar2,iVar1);
  return;
}



void __thiscall FUN_5f30d940(void *this,HDC param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x84);
  iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
  *(int *)(iVar1 + 0x10) = iVar2;
  iVar2 = MulDiv(*(int *)(iVar1 + 0x14),param_4,param_5);
  *(int *)(iVar1 + 0x14) = iVar2;
  FUN_5f30d860(this,param_1,*(int *)(iVar1 + 8),*(int *)(iVar1 + 0xc));
  return;
}



undefined4 __fastcall FUN_5f30d9a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_5f312aa0(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0x8007000e;
    return 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x84);
  puVar4 = puVar1;
  puVar5 = puVar2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1[6] = puVar2;
  puVar2[6] = 0;
  *(undefined4 **)(param_1 + 0x84) = puVar2;
  return 1;
}



undefined * __fastcall FUN_5f30d9f0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined **)(*(undefined **)(param_1 + 0x80) + 0x18);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined **)(param_1 + 0x80);
    for (puVar3 = *(undefined **)(puVar1 + 0x18); puVar3 != (undefined *)0x0;
        puVar3 = *(undefined **)(puVar3 + 0x18)) {
      puVar2 = puVar1;
      puVar1 = puVar3;
    }
    if (puVar1 != (undefined *)0x0) {
      FUN_5f312ab0(puVar1);
    }
    *(undefined **)(param_1 + 0x84) = puVar2;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    return (undefined *)0x1;
  }
  return puVar1;
}



void __fastcall FUN_5f30da40(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x80);
  puVar2 = *(undefined **)(puVar1 + 0x18);
  while (puVar2 != (undefined *)0x0) {
    *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar2 + 0x18);
    FUN_5f312ab0(puVar2);
    puVar2 = *(undefined **)(puVar1 + 0x18);
  }
  FUN_5f312ab0(puVar1);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



HICON FUN_5f30daa0(HINSTANCE param_1,HICON param_2)

{
  BYTE *lpvBits;
  byte bVar1;
  ushort uVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  HICON pHVar6;
  LPVOID pvVar7;
  HDC hdc;
  LPBITMAPINFO lpbmi;
  HBITMAP hbm;
  UINT UVar8;
  HGLOBAL local_2c;
  int iStack_24;
  HCURSOR local_1c;
  undefined1 auStack_18 [8];
  int iStack_10;
  int iStack_c;
  
  lpbmi = (LPBITMAPINFO)0x0;
  hbm = (HBITMAP)0x0;
  local_1c = (HCURSOR)0x0;
  local_2c = (HGLOBAL)0x0;
  DVar3 = GetVersion();
  if (CONCAT11((char)DVar3,(char)(DVar3 >> 8)) < 0x334) {
LAB_5f30db22:
    pHVar6 = CopyIcon(param_2);
    return pHVar6;
  }
  UVar8 = 0;
  iVar4 = GetSystemMetrics(0xe);
  iVar5 = GetSystemMetrics(0xd);
  pHVar6 = (HICON)CopyImage(param_2,2,iVar5,iVar4,UVar8);
  if (pHVar6 == (HICON)0x0) {
    pvVar7 = LockResource(param_2);
    if (pvVar7 == (LPVOID)0x0) {
      return (HICON)0x0;
    }
    bVar1 = *(byte *)((int)pvVar7 + 0x14);
    if ((bVar1 == 1) && (*(char *)((int)pvVar7 + 0x15) == '\x01')) goto LAB_5f30db22;
    hdc = GetDC((HWND)0x0);
    if (hdc != (HDC)0x0) {
      iVar4 = *(int *)((int)pvVar7 + 8);
      hbm = CreateCompatibleBitmap(hdc,iVar4,*(int *)((int)pvVar7 + 0xc));
      if (hbm != (HBITMAP)0x0) {
        SetBitmapBits(hbm,((int)(iVar4 * (uint)*(byte *)((int)pvVar7 + 0x15) + 0xf) >> 3 &
                          0xfffffffeU) * *(int *)((int)pvVar7 + 0xc) * (uint)bVar1,
                      (void *)(*(int *)((int)pvVar7 + 0x10) * *(int *)((int)pvVar7 + 0xc) + 0x18 +
                              (int)pvVar7));
        uVar2 = (ushort)*(byte *)((int)pvVar7 + 0x14) * (ushort)*(byte *)((int)pvVar7 + 0x15);
        if (uVar2 < 9) {
          iStack_24 = (1 << ((byte)uVar2 & 0x1f)) << 2;
        }
        else {
          uVar2 = 0x18;
          iStack_24 = 0;
        }
        iVar4 = *(int *)((int)pvVar7 + 8);
        iVar5 = (uint)uVar2 * iVar4 + 0x1f;
        UVar8 = *(UINT *)((int)pvVar7 + 0xc);
        local_2c = GlobalAlloc(2,iStack_24 + 0x28 +
                                 ((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * UVar8 * 4);
        if (local_2c != (HGLOBAL)0x0) {
          lpbmi = (LPBITMAPINFO)GlobalLock(local_2c);
          (lpbmi->bmiHeader).biBitCount = uVar2;
          lpvBits = &lpbmi->bmiColors[0].rgbBlue + iStack_24;
          (lpbmi->bmiHeader).biWidth = iVar4;
          (lpbmi->bmiHeader).biSize = 0x28;
          (lpbmi->bmiHeader).biHeight = UVar8;
          (lpbmi->bmiHeader).biPlanes = 1;
          (lpbmi->bmiHeader).biCompression = 0;
          (lpbmi->bmiHeader).biSizeImage = 0;
          (lpbmi->bmiHeader).biXPelsPerMeter = 0;
          (lpbmi->bmiHeader).biYPelsPerMeter = 0;
          (lpbmi->bmiHeader).biClrUsed = 0;
          (lpbmi->bmiHeader).biClrImportant = 0;
          GetDIBits(hdc,hbm,0,UVar8,lpvBits,lpbmi,0);
          DeleteObject(hbm);
          hbm = CreateBitmap(iVar4,UVar8,1,1,(void *)0x0);
          if (hbm != (HBITMAP)0x0) {
            SetDIBits(hdc,hbm,0,UVar8,lpvBits,lpbmi,0);
            GetObjectA(hbm,0x18,auStack_18);
            GlobalUnlock(local_2c);
            GlobalReAlloc(local_2c,iStack_10 * iStack_c,0);
            lpbmi = (LPBITMAPINFO)GlobalLock(local_2c);
            GetBitmapBits(hbm,iStack_10 * iStack_c,lpbmi);
            local_1c = CreateCursor(param_1,iVar4 / 2,(int)UVar8 / 2,iVar4,UVar8,
                                    (void *)((int)pvVar7 + 0x18),lpbmi);
          }
        }
      }
    }
    if (hbm != (HBITMAP)0x0) {
      DeleteObject(hbm);
    }
    if (hdc != (HDC)0x0) {
      ReleaseDC((HWND)0x0,hdc);
    }
    if (lpbmi != (LPBITMAPINFO)0x0) {
      GlobalUnlock(local_2c);
    }
    pHVar6 = local_1c;
    if (local_2c != (HGLOBAL)0x0) {
      GlobalFree(local_2c);
    }
  }
  return pHVar6;
}



void __fastcall FUN_5f30dd70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f302b10;
  param_1[1] = 0;
  return;
}



undefined4 * __thiscall FUN_5f30dd90(void *this,byte param_1)

{
  FUN_5f30ddb0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_5f312ab0((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_5f30ddb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f302b10;
  FUN_5f30ddc0((int)param_1);
  return;
}



undefined4 FUN_5f30ddc0(int param_1)

{
  if (*(uint *)(param_1 + 4) != 0) {
    FUN_5f312150(*(uint *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}



undefined4 FUN_5f30de70(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302b30;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  local_28 = 0;
  local_2c = 0;
  ExceptionList = &local_14;
  iVar1 = (**(code **)(*param_2 + 0x14))(param_2,0,0,1,&local_2c);
  if (iVar1 < 0) {
    ExceptionList = local_14;
    return 0x8000ffff;
  }
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0x12,&local_24);
  if (iVar1 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  uVar2 = FUN_5f309510(param_2,local_24,param_3);
  if ((int)uVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  local_8 = 0xffffffff;
  FUN_5f30df6a();
  ExceptionList = local_14;
  return local_20;
}



void FUN_5f30df6a(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int *unaff_ESI;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar2 = (**(code **)(*unaff_ESI + 0x14))();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  return;
}



int __cdecl FUN_5f30e0a0(int *param_1)

{
  undefined2 uVar1;
  
  if (*param_1 == 0xc) {
    uVar1 = *(undefined2 *)((int)param_1 + 10);
  }
  else {
    if (param_1[8] != 0) {
      return param_1[8];
    }
    uVar1 = *(undefined2 *)((int)param_1 + 0xe);
  }
  switch(uVar1) {
  case 1:
    return 2;
  default:
    return 0;
  case 4:
    return 0x10;
  case 8:
    return 0x100;
  }
}



int __cdecl FUN_5f30e130(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5f30e0a0(param_1);
  if (*param_1 == 0xc) {
    return iVar1 * 3;
  }
  if (param_1[4] == 3) {
    return 0xc;
  }
  return iVar1 << 2;
}



undefined4 __fastcall FUN_5f30e160(int param_1)

{
  LPCSTR pvIn;
  int iVar1;
  LPCSTR pCVar2;
  HDC hdc;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  pvIn = *(LPCSTR *)(param_1 + 0x42c);
  iVar4 = *(int *)(pvIn + 8);
  iVar1 = *(int *)(pvIn + 4);
  *(int *)(param_1 + 0x434) = iVar1;
  *(int *)(param_1 + 0x438) = iVar4;
  if (iVar4 < 0) {
    *(int *)(param_1 + 0x438) = -iVar4;
  }
  if (iVar1 < 0) {
    return 0x800a01e1;
  }
  if (*(short *)(pvIn + 0xc) != 1) {
    return 0x800a01e1;
  }
  switch(*(undefined2 *)(pvIn + 0xe)) {
  case 1:
    *(undefined4 *)(param_1 + 0x440) = 2;
    *(undefined4 *)(param_1 + 0x43c) = 8;
    break;
  default:
    goto switchD_5f30e1b8_caseD_2;
  case 4:
    *(undefined4 *)(param_1 + 0x440) = 0x10;
    *(undefined4 *)(param_1 + 0x43c) = 0x40;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x440) = 0x100;
    *(undefined4 *)(param_1 + 0x43c) = 0x400;
    break;
  case 0x10:
  case 0x20:
    local_4 = 0;
    hdc = GetDC((HWND)0x0);
    if (hdc == (HDC)0x0) {
      return 0x8007000e;
    }
    uVar3 = -(uint)(*(int *)(pvIn + 0x10) != 3) & 0xfffffff4;
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(uint *)(param_1 + 0x43c) = uVar3 + 0xc;
    iVar4 = Escape(hdc,0xc01,uVar3 + 0x34,pvIn,&local_4);
    if (iVar4 == 0) {
      return 0x800a01e1;
    }
    if ((local_4 & 1) == 0) {
      return 0x800a01e1;
    }
    ReleaseDC((HWND)0x0,hdc);
    goto LAB_5f30e27d;
  case 0x18:
    *(undefined4 *)(param_1 + 0x440) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
LAB_5f30e27d:
    pvIn[0x20] = '\0';
    pvIn[0x21] = '\0';
    pvIn[0x22] = '\0';
    pvIn[0x23] = '\0';
    pvIn[0x24] = '\0';
    pvIn[0x25] = '\0';
    pvIn[0x26] = '\0';
    pvIn[0x27] = '\0';
  }
  iVar4 = *(int *)(pvIn + 0x20);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x440) = iVar4;
    *(int *)(param_1 + 0x43c) = iVar4 << 2;
  }
  pCVar2 = *(LPCSTR *)(param_1 + 0x444);
  if (pCVar2 == (LPCSTR)0x0) {
    return 0;
  }
  if (pvIn + *(int *)(param_1 + 0x43c) + 0x28 <= pCVar2) {
    uVar3 = *(uint *)(pvIn + 0x10);
    if (uVar3 < 0x544c5744) {
      if (uVar3 != 0x544c5743) {
        switch(uVar3) {
        case 0:
        case 3:
          iVar4 = (uint)*(ushort *)(pvIn + 0xe) * *(int *)(param_1 + 0x434) + 0x1f;
          if (pCVar2 + ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * *(int *)(param_1 + 0x438) * 4
              <= pvIn + *(int *)(param_1 + 0x430)) {
            return 0;
          }
          return 0x800a01e1;
        case 1:
        case 2:
          break;
        default:
          goto switchD_5f30e1b8_caseD_2;
        }
      }
    }
    else if (uVar3 != 0x544c5747) {
      return 0x800a01e1;
    }
    if ((*(int *)(pvIn + 0x14) != 0) &&
       (pCVar2 + *(int *)(pvIn + 0x14) <= pvIn + *(int *)(param_1 + 0x430))) {
      return 0;
    }
  }
switchD_5f30e1b8_caseD_2:
  return 0x800a01e1;
}



// WARNING: Removing unreachable block (ram,0x5f30e3b8)

uint __fastcall FUN_5f30e390(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x42c);
  uVar1 = *(ushort *)(iVar3 + 6);
  uVar2 = *(ushort *)(iVar3 + 4);
  *(uint *)(param_1 + 0x434) = (uint)uVar2;
  *(uint *)(param_1 + 0x438) = (uint)uVar1;
  if (*(short *)(iVar3 + 8) == 1) {
    uVar1 = *(ushort *)(iVar3 + 10);
    switch((uint)uVar1) {
    case 1:
      *(undefined4 *)(param_1 + 0x440) = 2;
      *(undefined4 *)(param_1 + 0x43c) = 6;
      break;
    default:
      goto switchD_5f30e3ed_caseD_2;
    case 4:
      *(undefined4 *)(param_1 + 0x440) = 0x10;
      *(undefined4 *)(param_1 + 0x43c) = 0x30;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x440) = 0x100;
      *(undefined4 *)(param_1 + 0x43c) = 0x300;
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x440) = 0;
      *(undefined4 *)(param_1 + 0x43c) = 0;
    }
    if ((uint)(iVar3 + 0xc + *(int *)(param_1 + 0x43c)) <= *(uint *)(param_1 + 0x444)) {
      iVar4 = (uint)uVar1 * (uint)uVar2 + 0x1f;
      return -(uint)((uint)(*(int *)(param_1 + 0x430) + iVar3) <
                    *(uint *)(param_1 + 0x444) +
                    ((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * *(int *)(param_1 + 0x438) * 4) &
             0x800a01e1;
    }
  }
switchD_5f30e3ed_caseD_2:
  return 0x800a01e1;
}



uint __fastcall FUN_5f30e4c0(int param_1)

{
  uint uVar1;
  
  if (**(int **)(param_1 + 0x42c) == 0x28) {
    *(undefined4 *)(param_1 + 0x448) = 1;
    uVar1 = FUN_5f30e160(param_1);
    return uVar1;
  }
  if (**(int **)(param_1 + 0x42c) == 0xc) {
    *(undefined4 *)(param_1 + 0x448) = 0;
    uVar1 = FUN_5f30e390(param_1);
    return uVar1;
  }
  return 0x800a01e1;
}



int __fastcall FUN_5f30e500(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ushort uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint local_14;
  uint local_10;
  int local_8;
  uint local_4;
  
  param_1[0x113] = 0;
  puVar11 = param_1;
  for (iVar5 = 0x10b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  iVar5 = param_1[0x112];
  param_1[1] = param_1[0x10d];
  *param_1 = 0x28;
  param_1[2] = param_1[0x10e];
  *(undefined2 *)(param_1 + 3) = 1;
  if (iVar5 == 0) {
    uVar10 = *(ushort *)(param_1[0x10b] + 10);
  }
  else {
    uVar10 = *(ushort *)(param_1[0x10b] + 0xe);
  }
  iVar4 = FUN_5f311f00(&DAT_5f321178,&local_4);
  if (-1 < iVar4) {
    if ((int)(uint)uVar10 <= (int)local_4) {
      local_4 = (uint)uVar10;
    }
    *(short *)((int)param_1 + 0xe) = (short)local_4;
    if (iVar5 == 0) {
      local_8 = 3;
    }
    else {
      param_1[4] = 0;
      param_1[5] = 0;
      local_8 = 4;
    }
    iVar5 = param_1[0x110];
    if (iVar5 != 0) {
      iVar4 = 1 << ((byte)local_4 & 0x1f);
      local_10 = 0;
      local_10._0_2_ = 0;
      pbVar12 = (byte *)((int)param_1[0x10b] + *(int *)param_1[0x10b]);
      param_1[0x113] = (uint)(iVar5 < 0x11);
      pbVar8 = pbVar12 + local_8 * iVar5;
      local_14 = 0;
      pbVar9 = (byte *)(param_1 + 10);
      for (; pbVar12 < pbVar8; pbVar12 = pbVar12 + local_8) {
        if ((param_1[0x113] == 0) || (iVar5 = FUN_5f3091f0(pbVar12), iVar5 == -1)) {
          bVar1 = pbVar12[2];
          bVar2 = pbVar12[1];
          bVar6 = *pbVar12;
          param_1[0x113] = 0;
          pbVar9[2] = bVar1;
          pbVar9[1] = bVar2;
LAB_5f30e669:
          *pbVar9 = bVar6;
          pbVar9 = pbVar9 + 4;
          local_14 = local_14 + 1;
          if (iVar4 <= (int)local_14) break;
        }
        else {
          uVar7 = 1 << ((byte)iVar5 & 0x1f);
          if (((ushort)((ushort)local_10 & (ushort)uVar7) == 0) ||
             ((*(int *)(param_1[0x10b] + 0x20) != 0 &&
              ((int)local_14 < *(int *)(param_1[0x10b] + 0x20))))) {
            local_10 = local_10 | uVar7;
            bVar1 = (&DAT_5f31d299)[iVar5 * 4];
            pbVar9[2] = (&DAT_5f31d29a)[iVar5 * 4];
            bVar6 = (&DAT_5f31d298)[iVar5 * 4];
            pbVar9[1] = bVar1;
            goto LAB_5f30e669;
          }
        }
      }
      iVar5 = param_1[0x113];
      if (iVar5 != 0) {
        if ((int)local_14 < iVar4) {
          pbVar12 = &DAT_5f31d299;
          uVar10 = 1;
          do {
            if (((ushort)local_10 & uVar10) == 0) {
              pbVar9[2] = pbVar12[1];
              pbVar9[1] = *pbVar12;
              *pbVar9 = pbVar12[-1];
              pbVar9 = pbVar9 + 4;
              local_14 = local_14 + 1;
              if (iVar4 <= (int)local_14) break;
            }
            pbVar12 = pbVar12 + 4;
            uVar3 = uVar10 & 0x7fff;
            uVar10 = uVar10 << 1;
          } while (uVar3 != 0);
        }
        if ((iVar5 != 0) && (2 < iVar4)) {
          param_1[0x110] = 0x10;
          *(undefined2 *)((int)param_1 + 0xe) = 4;
          param_1[8] = 0;
          return 0;
        }
      }
      param_1[0x110] = local_14;
      param_1[8] = -(uint)(local_14 != 0x100) & local_14;
    }
    iVar4 = 0;
  }
  return iVar4;
}



int __thiscall FUN_5f30e730(void *this,int *param_1)

{
  undefined1 *puVar1;
  BYTE *pBVar2;
  undefined1 uVar3;
  int iVar4;
  UINT UVar5;
  undefined1 *puVar6;
  BYTE *pBVar7;
  HPALETTE pHVar8;
  uint uVar9;
  undefined1 *puVar10;
  BYTE *pBVar11;
  BYTE *pBVar12;
  LOGPALETTE local_408 [129];
  
  if (*(int *)((int)this + 0x44c) != 0) {
    return 1;
  }
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = FUN_5f311e50(&DAT_5f321178,param_1);
    if (-1 < iVar4) {
      pHVar8 = (HPALETTE)*param_1;
      local_408[0].palNumEntries = *(undefined2 *)((int)this + 0x440);
      iVar4 = GetObjectA(pHVar8,2,&local_408[0].palNumEntries);
      if (iVar4 == 0) {
        return -0x7ff8fff2;
      }
      UVar5 = GetPaletteEntries(pHVar8,0,local_408[0]._2_4_ & 0xffff,local_408[0].palPalEntry);
      if (UVar5 == 0) {
        return -0x7ff8fff2;
      }
      puVar6 = (undefined1 *)((int)this + 0x28);
      uVar9 = local_408[0]._2_4_ & 0xffff;
      *(uint *)((int)this + 0x440) = uVar9;
      puVar1 = (undefined1 *)((int)this + uVar9 * 4 + 0x28);
      *(uint *)((int)this + 0x43c) = uVar9 * 4;
      if (puVar6 < puVar1) {
        puVar10 = puVar6 + (int)(&stack0xfffffbd6 + -(int)this);
        do {
          uVar3 = puVar10[-2];
          puVar6[3] = 0;
          puVar6[2] = uVar3;
          puVar6[1] = puVar10[-1];
          *puVar6 = *puVar10;
          puVar6 = puVar6 + 4;
          puVar10 = puVar10 + 4;
        } while (puVar6 < puVar1);
      }
      return 0;
    }
  }
  else {
    local_408[0].palVersion = 0x300;
    pBVar2 = (BYTE *)((int)this + *(int *)((int)this + 0x440) * 4 + 0x28);
    local_408[0].palNumEntries = *(WORD *)((int)this + 0x440);
    if ((BYTE *)((int)this + 0x28U) < pBVar2) {
      pBVar7 = &local_408[0].palPalEntry[0].peBlue;
      pBVar11 = (BYTE *)((int)this + 0x28U);
      do {
        pBVar12 = pBVar11 + 4;
        ((PALETTEENTRY *)(pBVar7 + -2))->peRed = pBVar11[2];
        pBVar7[-1] = pBVar11[1];
        *pBVar7 = *pBVar11;
        pBVar7[1] = '\0';
        pBVar7 = pBVar7 + 4;
        pBVar11 = pBVar12;
      } while (pBVar12 < pBVar2);
    }
    pHVar8 = CreatePalette(local_408);
    *param_1 = (int)pHVar8;
    iVar4 = (-(uint)(pHVar8 != (HPALETTE)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar4;
}



int __thiscall FUN_5f30e8b0(void *this,HDC param_1,undefined4 *param_2)

{
  int iVar1;
  HBITMAP hbm;
  int local_8;
  void *local_4;
  
  if ((DAT_5f32122c != 0) && (DAT_5f32122c < 0x422)) {
    return 1;
  }
  iVar1 = FUN_5f311f00(&DAT_5f321178,&local_8);
  if (-1 < iVar1) {
    if (local_8 < 5) {
      return 1;
    }
    hbm = CreateDIBSection(param_1,(BITMAPINFO *)this,0,&local_4,(HANDLE)0x0,0);
    if (hbm == (HBITMAP)0x0) {
      return 1;
    }
    if (*(void **)((int)this + 0x444) != (void *)0x0) {
      iVar1 = SetDIBits(param_1,hbm,0,*(UINT *)((int)this + 0x438),*(void **)((int)this + 0x444),
                        *(BITMAPINFO **)((int)this + 0x42c),0);
      if (iVar1 == 0) {
        DeleteObject(hbm);
        return -0x7ff8fff2;
      }
    }
    iVar1 = 0;
    *param_2 = hbm;
  }
  return iVar1;
}



uint __thiscall FUN_5f30e980(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  HPALETTE hPal;
  HDC local_18;
  HBITMAP local_14;
  HPALETTE local_10;
  HGDIOBJ local_c;
  int iStack_8;
  HGDIOBJ pvStack_4;
  
  hPal = (HPALETTE)0x0;
  local_14 = (HBITMAP)0x0;
  local_10 = (HPALETTE)0x0;
  iVar4 = FUN_5f311970(0x5f321178);
  if (iVar4 < 0) {
    return 0x80070005;
  }
  uVar5 = FUN_5f3119b0(&DAT_5f321178,(int *)&local_18);
  if (-1 < (int)uVar5) {
    uVar5 = FUN_5f311b10(&DAT_5f321178,&local_c);
    if (-1 < (int)uVar5) {
      pvStack_4 = SelectObject(local_18,local_c);
      uVar5 = FUN_5f30e4c0((int)this);
      if ((-1 < (int)uVar5) && (uVar5 = FUN_5f30e500((undefined4 *)this), -1 < (int)uVar5)) {
        piVar2 = *(int **)(param_1 + 0x50);
        piVar1 = (int *)(param_1 + 0x50);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar1 = 0;
        }
        uVar5 = FUN_5f309410(piVar1);
        if ((-1 < (int)uVar5) &&
           ((bVar3 = FUN_5f311fe0(&DAT_5f321178), CONCAT31(extraout_var,bVar3) == 0 ||
            (uVar5 = FUN_5f30e730(this,(int *)&local_10), -1 < (int)uVar5)))) {
          iVar4 = *piVar1;
          iStack_8 = iVar4;
          FUN_5f309490(iVar4,local_10);
          uVar5 = FUN_5f30e8b0(this,local_18,&local_14);
          if (uVar5 == 1) {
            if (local_10 != (HPALETTE)0x0) {
              hPal = SelectPalette(local_18,local_10,0);
              RealizePalette(local_18);
            }
            local_14 = CreateDIBitmap(local_18,*(BITMAPINFOHEADER **)((int)this + 0x42c),
                                      -(uint)(*(void **)((int)this + 0x444) != (void *)0x0) & 4,
                                      *(void **)((int)this + 0x444),
                                      (BITMAPINFO *)*(BITMAPINFOHEADER **)((int)this + 0x42c),0);
            if (hPal != (HPALETTE)0x0) {
              SelectPalette(local_18,hPal,0);
              RealizePalette(local_18);
            }
            uVar5 = (-(uint)(local_14 != (HBITMAP)0x0) & 0x7ff8fff2) + 0x8007000e;
            iVar4 = iStack_8;
          }
          FUN_5f309490(iVar4,local_14);
        }
      }
      SelectObject(local_18,pvStack_4);
      if ((int)uVar5 < 0) {
        piVar1 = *(int **)(param_1 + 0x50);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(param_1 + 0x50) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 1;
        *(HBITMAP *)(param_1 + 0x20) = local_14;
        *(HPALETTE *)(param_1 + 0x24) = local_10;
      }
      FUN_5f311990(0x5f321178);
      return uVar5;
    }
    return uVar5;
  }
  return uVar5;
}



undefined4 __thiscall FUN_5f30eb80(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x42c) = param_2;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x430) = 0x428;
  uVar1 = FUN_5f30e980(this,param_1);
  if ((int)uVar1 < 0) {
    return 0x80004005;
  }
  uVar2 = FUN_5f30a4a0(param_1);
  return uVar2;
}



uint __thiscall FUN_5f30ebd0(void *this,int param_1,int *param_2,SIZE_T param_3)

{
  int iVar1;
  IMalloc *pIVar2;
  uint uVar3;
  
  pIVar2 = (IMalloc *)FUN_5f312780(param_3);
  if (pIVar2 == (IMalloc *)0x0) {
    return 0x8007000e;
  }
  uVar3 = FUN_5f3094e0(param_2,pIVar2,param_3);
  if (-1 < (int)uVar3) {
    iVar1 = *(int *)((int)&pIVar2[2].lpVtbl + 2);
    *(undefined1 **)((int)this + 0x42c) = (undefined1 *)((int)&pIVar2[3].lpVtbl + 2);
    *(int *)((int)this + 0x444) = (int)&pIVar2->lpVtbl + iVar1;
    *(SIZE_T *)((int)this + 0x430) = param_3 - 0xe;
    uVar3 = FUN_5f30e980(this,param_1);
  }
  FUN_5f312800(pIVar2);
  return uVar3;
}



undefined4 * __thiscall FUN_5f30ec50(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_retaddr;
  
  *(undefined ***)this = &PTR_LAB_5f302b60;
  FUN_5f30f460((undefined4 *)((int)this + 4));
  *(undefined ***)this = &PTR_LAB_5f302b40;
  *(undefined4 *)((int)this + 4) = &PTR_FUN_5f302b3c;
  iVar1 = *param_2;
  *(int **)((int)this + 0x10) = param_2;
  (**(code **)(iVar1 + 4))(param_2);
  *(int **)((int)this + 0xc) = unaff_retaddr;
  (**(code **)(*unaff_retaddr + 4))(unaff_retaddr);
  return (undefined4 *)this;
}



undefined4 * __thiscall FUN_5f30eca0(void *this,byte param_1)

{
  FUN_5f30ecd0((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_5f312ab0((undefined *)((int)this + -4));
  }
  return (undefined4 *)((int)this + -4);
}



void __fastcall FUN_5f30ecd0(undefined4 *param_1)

{
  param_1[-1] = &PTR_LAB_5f302b40;
  *param_1 = &PTR_FUN_5f302b3c;
  (**(code **)(*(int *)param_1[2] + 8))((int *)param_1[2]);
  (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3]);
  FUN_5f30f490((undefined4 *)(-(uint)(param_1 + -1 != (undefined4 *)0x0) & (uint)param_1));
  return;
}



undefined4 __cdecl FUN_5f30ee00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  int *local_28;
  int *local_24;
  int *local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302b80;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_5f30f310(1);
  if (iVar2 < 0) {
    ExceptionList = local_14;
    return 0x80004005;
  }
  iVar2 = (*DAT_5f321154)(param_1,0,1,&LAB_5f302860,local_20);
  piVar1 = local_20[0];
  if (iVar2 < 0) {
    ExceptionList = local_14;
    return 0x8007000e;
  }
  this = (void *)FUN_5f312aa0(0x14);
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_5f30ec50(this,param_2,piVar1);
  }
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_8 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x8007000e;
  }
  iVar2 = (**(code **)*local_20[0])(local_20[0],&DAT_5f3038d0,&local_28);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  iVar2 = (**(code **)*local_20[0])(local_20[0],&LAB_5f3028d0,&local_24);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  iVar2 = (**(code **)(*local_24 + 0xc))(local_24,0);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004004;
  }
  iVar2 = (**(code **)(*local_28 + 0x14))(local_28,param_3);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  while( true ) {
    iVar2 = (**(code **)(*local_24 + 0x1c))(local_24);
    if (iVar2 != 1) break;
    (**(code **)(*local_24 + 0x10))(local_24,0,puVar3);
  }
  iVar2 = (**(code **)(*local_24 + 0x14))(local_24);
  if (iVar2 < 0) {
    __local_unwind2((int)&local_14,-1);
    ExceptionList = local_14;
    return 0x80004005;
  }
  local_8 = 0xffffffff;
  FUN_5f30f01e();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f30f01e(void)

{
  int *piVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x24);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))();
  }
  return;
}



undefined4 __cdecl FUN_5f30f070(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piStack_20;
  _union_2260 _Stack_1c;
  int *apiStack_c [2];
  HDC pHStack_4;
  
  _Stack_1c = (_union_2260)0x1;
  piStack_20 = param_2;
  iVar3 = *param_2;
  iVar2 = (**(code **)(iVar3 + 0x1c))();
  if (iVar2 < 0) {
    return 0x80004005;
  }
  iVar2 = FUN_5f30a220(pHStack_4,1,(undefined4 *)&stack0xffffffec);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  pcVar1 = *(code **)(iVar3 + 0xc);
  iVar3 = (*pcVar1)();
  if (-1 < iVar3) {
    iVar3 = FUN_5f30a220(pHStack_4,2,&piStack_20);
    if (iVar3 < 0) {
      return 0x80004005;
    }
    iVar3 = (*pcVar1)(param_2,2);
    if (-1 < iVar3) {
      iVar3 = FUN_5f30a220(pHStack_4,4,&piStack_20);
      if (-1 < iVar3) {
        iVar3 = (*pcVar1)(param_2,4);
        if (iVar3 < 0) goto LAB_5f30f10e;
      }
      iVar3 = FUN_5f3119b0(&DAT_5f321178,(int *)&_Stack_1c);
      if (iVar3 < 0) {
        return 0x80004005;
      }
      iVar3 = FUN_5f309410(apiStack_c);
      if (iVar3 < 0) {
        return 0x8007000e;
      }
      iVar3 = (*pcVar1)(param_2,0);
      if (-1 < iVar3) {
        (**(code **)(*apiStack_c[0] + 4))(apiStack_c[0]);
        iVar3 = (*pcVar1)(param_2,3,&stack0xffffffd0);
        if (-1 < iVar3) {
          return 0;
        }
      }
      ReleaseStgMedium((LPSTGMEDIUM)&stack0xffffffd4);
      return 0x80004005;
    }
  }
LAB_5f30f10e:
  ReleaseStgMedium((LPSTGMEDIUM)&piStack_20);
  return 0x80004005;
}



undefined4 __cdecl FUN_5f30f1b0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puStack_894;
  undefined4 uStack_890;
  undefined1 local_878 [1052];
  undefined1 auStack_45c [1108];
  int iStack_8;
  
  puStack_894 = local_878;
  uStack_890 = 0x428;
  puVar1 = (undefined4 *)*param_2;
  iVar2 = (*(code *)puVar1[3])(param_2);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  iVar2 = FUN_5f30eb80(auStack_45c,iStack_8,&stack0xfffff77c);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  piVar4 = param_2;
  iVar2 = (*(code *)puVar1[8])(param_2,&stack0xfffff778);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  *(undefined1 *)(iStack_8 + 0x55) = (undefined1)uStack_890;
  puStack_894 = (undefined1 *)0x0;
  iVar2 = (*(code *)*puVar1)(param_2,0x5f302870,&puStack_894);
  if (iVar2 < 0) {
    return 0x80004005;
  }
  uVar3 = FUN_5f30f070(iStack_8,piVar4);
  (**(code **)(*piVar4 + 8))(piVar4);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_5f30f280(void)

{
  if (DAT_5f32115c != (HMODULE)0x0) {
    FreeLibrary(DAT_5f32115c);
    DAT_5f32115c = (HMODULE)0x0;
    _DAT_5f321144 = 0;
    _DAT_5f321148 = 0;
    _DAT_5f321150 = 0;
    _DAT_5f32114c = 0;
  }
  if (DAT_5f321158 != (HMODULE)0x0) {
    FreeLibrary(DAT_5f321158);
    DAT_5f321158 = (HMODULE)0x0;
    DAT_5f321154 = 0;
    if (DAT_5f321160 != 0) {
      GlobalDeleteAtom(DAT_5f321160);
    }
    if (DAT_5f321164 != 0) {
      GlobalDeleteAtom(DAT_5f321164);
    }
    if (DAT_5f321168 != 0) {
      GlobalDeleteAtom(DAT_5f321168);
    }
    if (DAT_5f32116c != 0) {
      GlobalDeleteAtom(DAT_5f32116c);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_5f30f310(byte param_1)

{
  if (((param_1 & 2) != 0) && (DAT_5f32115c == (HMODULE)0x0)) {
    DAT_5f32115c = LoadLibraryA(s_urlmon_dll_5f31d2d8);
    if (DAT_5f32115c != (HMODULE)0x0) {
      _DAT_5f321144 = GetProcAddress(DAT_5f32115c,s_CreateURLMoniker_5f31d2e4);
      _DAT_5f321148 = GetProcAddress(DAT_5f32115c,s_CreateAsyncBindCtx_5f31d2f8);
      _DAT_5f321150 = GetProcAddress(DAT_5f32115c,s_RegisterBindStatusCallback_5f31d30c);
      _DAT_5f32114c = GetProcAddress(DAT_5f32115c,s_RevokeBindStatusCallback_5f31d328);
    }
  }
  if (((param_1 & 1) != 0) && (DAT_5f321158 == (HMODULE)0x0)) {
    DAT_5f321158 = LoadLibraryA(s_asycfilt_dll_5f31d344);
    if (DAT_5f321158 == (HMODULE)0x0) {
      return 0x80004005;
    }
    DAT_5f321154 = GetProcAddress(DAT_5f321158,s_FilterCreateInstance_5f31d354);
    if (DAT_5f321154 == (FARPROC)0x0) {
      return 0x80004005;
    }
    DAT_5f321160 = GlobalAddAtomA(s_MS_AsyncImage_DCWait_5f31d36c);
    DAT_5f321164 = GlobalAddAtomA(s_MS_AsyncImage_Display_5f31d384);
    DAT_5f321168 = GlobalAddAtomA(s_MS_AsyncImage_Abnormal_5f31d39c);
    DAT_5f32116c = GlobalAddAtomA(s_MS_AsyncImage_Finished_5f31d3b4);
  }
  return 0;
}



undefined4 FUN_5f30f410(void)

{
  int iVar1;
  
  iVar1 = FUN_5f30f310(3);
  if (iVar1 < 0) {
    FUN_5f30f280();
    return 0x80004005;
  }
  return 0;
}



undefined4 FUN_5f30f430(void)

{
  FUN_5f30f280();
  return 0;
}



void FUN_5f30f440(int param_1)

{
  if (param_1 != 0) {
    FUN_5f30f410();
    return;
  }
  FUN_5f30f430();
  return;
}



void __fastcall FUN_5f30f460(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f302b8c;
  param_1[1] = 1;
  return;
}



undefined4 * __thiscall FUN_5f30f470(void *this,byte param_1)

{
  FUN_5f30f490((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_5f312ab0((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_5f30f490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f302b8c;
  return;
}



LONG FUN_5f30f4a0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)*param_1)(1);
    }
    LVar1 = 0;
  }
  return LVar1;
}



void __cdecl FUN_5f30f4d0(undefined4 *param_1)

{
  CHAR local_28 [40];
  
  wsprintfA(local_28,s___08lX__04X__04X__02X_02X__02X_0_5f31d3cc,*param_1,
            (uint)*(ushort *)(param_1 + 1),(uint)*(ushort *)((int)param_1 + 6),
            (uint)*(byte *)(param_1 + 2),(uint)*(byte *)((int)param_1 + 9),
            (uint)*(byte *)((int)param_1 + 10),(uint)*(byte *)((int)param_1 + 0xb),
            (uint)*(byte *)(param_1 + 3),(uint)*(byte *)((int)param_1 + 0xd),
            (uint)*(byte *)((int)param_1 + 0xe),(uint)*(byte *)((int)param_1 + 0xf));
  RegisterClipboardFormatA(local_28);
  return;
}



void FUN_5f30f540(void)

{
  DAT_5f321170 = FUN_5f30f4d0((undefined4 *)&DAT_5f303900);
  return;
}



void __cdecl FUN_5f30f560(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (0 < param_2) {
    do {
      puVar1 = (undefined *)*param_1;
      if (puVar1 != (undefined *)0x0) {
        thunk_FUN_5f30ff30((int)puVar1);
        FUN_5f312ab0(puVar1);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



void __cdecl FUN_5f30f590(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (0 < param_2) {
    do {
      puVar1 = (undefined *)*param_1;
      if (puVar1 != (undefined *)0x0) {
        FUN_5f310010((int)puVar1);
        FUN_5f312ab0(puVar1);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



bool __cdecl FUN_5f30f5c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f312f40((ushort *)*param_1,(ushort *)*param_2);
  return (bool)('\x01' - (iVar1 != 0));
}



int __cdecl FUN_5f30f5e0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    param_1 = param_1 + 1;
    iVar2 = iVar2 * 0x21 + (uint)uVar1;
    uVar1 = *param_1;
  }
  return iVar2;
}



LPCWSTR __cdecl FUN_5f30f610(LPCWSTR param_1)

{
  int iVar1;
  LPCWSTR pWVar2;
  
  iVar1 = lstrlenW(param_1);
  pWVar2 = (LPCWSTR)FUN_5f312aa0(iVar1 * 2 + 2);
  FUN_5f312c30(pWVar2,param_1);
  FUN_5f312fa0(pWVar2);
  return pWVar2;
}



void __cdecl FUN_5f30f650(undefined *param_1)

{
  FUN_5f312ab0(param_1);
  return;
}



undefined4 * __thiscall
FUN_5f30f660(void *this,undefined4 param_1,LPCWSTR param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_5f30f6a0(this,param_1,param_2,param_3);
  return (undefined4 *)this;
}



void __fastcall thunk_FUN_5f30ff30(int param_1)

{
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    FUN_5f30f900(*(undefined **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void __thiscall FUN_5f30f6a0(void *this,undefined4 param_1,LPCWSTR param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)this = param_1;
  FUN_5f30f6c0(this,param_2);
  return;
}



undefined4 __thiscall FUN_5f30f6c0(void *this,LPCWSTR param_1)

{
  uint uVar1;
  LPCWSTR pWVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  LPCWSTR local_8;
  
  uVar4 = *(uint *)((int)this + 4);
  local_8 = (LPCWSTR)0x0;
  if (*(int *)((int)this + 8) != 0) {
    FUN_5f30ff30((int)this);
  }
  if (param_1 == (LPCWSTR)0x0) {
    return 1;
  }
  if (*(uint *)((int)this + 4) == 0) {
    return 1;
  }
  uVar5 = 0;
  iVar3 = 1;
  if ((*(uint *)((int)this + 4) & 0x1000) != 0) {
    iVar3 = *(int *)param_1;
    pWVar2 = param_1 + 2;
    uVar5 = 4;
    uVar4 = uVar4 & 0xffffefff;
    goto joined_r0x5f30f766;
  }
  pWVar2 = param_1;
  switch(uVar4) {
  case 8:
  case 0x1e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
    pWVar2 = (LPCWSTR)FUN_5f30f910((char *)param_1);
    break;
  default:
    goto switchD_5f30f739_caseD_9;
  case 0x1f:
    pWVar2 = (LPCWSTR)FUN_5f30f980(param_1);
  }
  local_8 = param_1;
switchD_5f30f739_caseD_9:
  param_1 = pWVar2;
joined_r0x5f30f766:
  do {
    if (iVar3 == 0) {
      iVar3 = FUN_5f30ff10(this,uVar5);
      if (iVar3 != 0) {
        pWVar2 = param_1;
        puVar6 = *(uint **)((int)this + 8);
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *(uint *)pWVar2;
          pWVar2 = pWVar2 + 2;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar6 = (char)*pWVar2;
          pWVar2 = (LPCWSTR)((int)pWVar2 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        if (local_8 != (LPCWSTR)0x0) {
          FUN_5f30f900((undefined *)param_1);
        }
        return 1;
      }
      return 0;
    }
    iVar3 = iVar3 + -1;
    switch(uVar4) {
    case 0:
      uVar1 = 0;
      break;
    default:
      if (local_8 == (LPCWSTR)0x0) {
        return 0;
      }
      FUN_5f30f900((undefined *)param_1);
      return 0;
    case 2:
    case 0xb:
      uVar1 = 2;
      break;
    case 3:
    case 4:
      uVar1 = 4;
      break;
    case 5:
    case 6:
    case 7:
    case 0x14:
    case 0x40:
      uVar1 = 8;
      break;
    case 8:
    case 0x1e:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
      uVar1 = *(uint *)pWVar2;
      goto LAB_5f30f7a8;
    case 0x1f:
      uVar1 = *(uint *)pWVar2 << 1;
LAB_5f30f7a8:
      pWVar2 = pWVar2 + 2;
      uVar5 = uVar5 + 4;
      break;
    case 0x48:
      uVar1 = 0x10;
    }
    pWVar2 = (LPCWSTR)((int)pWVar2 + uVar1);
    uVar5 = uVar5 + uVar1;
  } while( true );
}



void __cdecl FUN_5f30f900(undefined *param_1)

{
  FUN_5f312ab0(param_1);
  return;
}



uint * __cdecl FUN_5f30f910(char *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  uint *puVar7;
  
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  puVar2 = (uint *)FUN_5f30f970(~uVar3 + 4);
  if (puVar2 != (uint *)0x0) {
    uVar4 = 0xffffffff;
    do {
      pcVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    *puVar2 = ~uVar3;
    puVar5 = (uint *)(pcVar6 + -uVar4);
    puVar7 = puVar2;
    for (uVar3 = uVar4 >> 2; puVar7 = puVar7 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar7 = (char)*puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar7 = (uint *)((int)puVar7 + 1);
    }
  }
  return puVar2;
}



void __cdecl FUN_5f30f970(uint param_1)

{
  FUN_5f312aa0(param_1);
  return;
}



int * __cdecl FUN_5f30f980(LPCWSTR param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = lstrlenW(param_1);
  piVar2 = (int *)FUN_5f30f970(iVar1 + 5 + iVar1 + 1);
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1 + 1;
    FUN_5f312c30((short *)(piVar2 + 1),param_1);
  }
  return piVar2;
}



int * __thiscall FUN_5f30f9c0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 8);
  switch(*(undefined4 *)((int)this + 4)) {
  case 0:
    iVar2 = 0;
    break;
  default:
    return (int *)0x0;
  case 2:
  case 0xb:
    iVar2 = 2;
    break;
  case 3:
  case 4:
    iVar2 = 4;
    break;
  case 5:
  case 6:
  case 7:
  case 0x14:
  case 0x40:
    iVar2 = 8;
    break;
  case 8:
  case 0x1e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x47:
  case 0x49:
  case 0x4a:
    iVar2 = *piVar1;
    piVar1 = piVar1 + 1;
    break;
  case 0x1f:
    iVar2 = *piVar1 << 1;
    piVar1 = piVar1 + 1;
    break;
  case 0x41:
  case 0x46:
  case 0x4b:
    iVar2 = *piVar1;
    break;
  case 0x48:
    iVar2 = 0x10;
  }
  if (param_1 == (int *)0x0) {
    return piVar1;
  }
  *param_1 = iVar2;
  return piVar1;
}



undefined4 __fastcall FUN_5f30fac0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// WARNING: Removing unreachable block (ram,0x5f30fbc4)
// WARNING: Removing unreachable block (ram,0x5f30fbae)

undefined4 __thiscall FUN_5f30fad0(void *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int *piVar4;
  int *unaff_EBP;
  int iVar5;
  int unaff_ESI;
  uint uVar6;
  int local_14;
  int *local_10;
  undefined4 local_c;
  uint *local_8;
  void *local_4;
  
  piVar4 = *(int **)((int)this + 8);
  local_8 = (uint *)((int)this + 4);
  iVar5 = 0;
  uVar6 = *local_8;
  local_c = 0;
  iVar3 = 1;
  piVar1 = piVar4;
  if ((uVar6 & 0x1000) != 0) {
    iVar3 = *piVar4;
    iVar5 = 4;
    piVar1 = piVar4 + 1;
    uVar6 = uVar6 & 0xffffefff;
  }
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    switch(uVar6) {
    case 0:
      local_14 = 0;
      break;
    default:
      return 0;
    case 2:
    case 0xb:
      local_14 = 2;
      break;
    case 3:
    case 4:
      local_14 = 4;
      break;
    case 5:
    case 6:
    case 7:
    case 0x14:
    case 0x40:
      local_14 = 8;
      break;
    case 8:
    case 0x1e:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
      local_14 = *piVar1 + 4;
      break;
    case 0x1f:
      local_14 = *piVar1 * 2 + 4;
      break;
    case 0x48:
      local_14 = 0x10;
    }
    iVar5 = iVar5 + local_14;
    piVar1 = (int *)((int)piVar1 + local_14);
  }
  pcVar2 = *(code **)(*param_1 + 0x10);
  local_10 = piVar4;
  local_4 = this;
  (*pcVar2)(param_1,local_8,4,&local_14);
  if ((unaff_ESI == 4) && ((*pcVar2)(param_1,piVar4,iVar5,&stack0xffffffdc), iVar5 == 4)) {
    unaff_EBX = 1;
    piVar4 = unaff_EBP;
  }
  if (piVar4 != *(int **)(local_14 + 8)) {
    FUN_5f30f900((undefined *)piVar4);
  }
  return unaff_EBX;
}



// WARNING: Removing unreachable block (ram,0x5f30fcfa)

bool __thiscall FUN_5f30fc90(void *this,int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  void *unaff_EBP;
  void *pvVar4;
  uint uVar5;
  uint unaff_EDI;
  int *piVar6;
  uint *puStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 local_18;
  int aiStack_14 [2];
  code *local_c;
  void *local_4;
  
  puStack_2c = &local_18;
  iVar3 = *param_1;
  iStack_30 = 4;
  pcVar1 = *(code **)(iVar3 + 0xc);
  puStack_34 = (uint *)((int)this + 4);
  local_c = pcVar1;
  local_4 = this;
  (*pcVar1)(param_1);
  if (unaff_EDI != 4) {
    return false;
  }
  pcVar2 = *(code **)((int)this + 4);
  uVar5 = 0;
  local_18 = 1;
  if (((uint)pcVar2 & 0x1000) != 0) {
    (*pcVar1)(param_1,&local_18,4,&stack0xffffffd8);
    uVar5 = 4;
    pcVar2 = (code *)((uint)pcVar2 & 0xffffefff);
  }
  local_c = (code *)0x0;
  piVar6 = param_1;
  (**(code **)(iVar3 + 0x34))(param_1,&stack0xffffffe0);
  pvVar4 = unaff_EBP;
  if (unaff_EBP != (void *)0x0) {
    do {
      pvVar4 = (void *)((int)pvVar4 + -1);
      switch(puStack_2c) {
      case (undefined4 *)0x0:
        aiStack_14[0] = 0;
        break;
      default:
        (**(code **)(iRam00000004 + 8))(4);
        return false;
      case (undefined4 *)0x2:
      case (undefined4 *)0xb:
        aiStack_14[0] = 2;
        break;
      case (undefined4 *)0x3:
      case (undefined4 *)0x4:
        aiStack_14[0] = 4;
        break;
      case (undefined4 *)0x5:
      case (undefined4 *)0x6:
      case (undefined4 *)0x7:
      case (undefined4 *)0x14:
      case (undefined4 *)0x40:
        aiStack_14[0] = 8;
        break;
      case (undefined4 *)0x8:
      case (undefined4 *)0x1e:
      case (undefined4 *)0x41:
      case (undefined4 *)0x42:
      case (undefined4 *)0x43:
      case (undefined4 *)0x44:
      case (undefined4 *)0x45:
      case (undefined4 *)0x46:
      case (undefined4 *)0x47:
      case (undefined4 *)0x49:
      case (undefined4 *)0x4a:
      case (undefined4 *)0x4b:
        (*pcVar2)(param_1,aiStack_14,4,&iStack_30);
        if (piVar6 != (int *)0x4) {
          return false;
        }
        (**(code **)(iVar3 + 0x14))(param_1,0xfffffffc,0xffffffff,1,0);
        uVar5 = uVar5 + iStack_30;
        break;
      case (undefined4 *)0x1f:
        (*pcVar2)(param_1,aiStack_14,4,&iStack_30);
        if (piVar6 != (int *)0x4) {
          return false;
        }
        (**(code **)(iVar3 + 0x14))(param_1,0xfffffffc,0xffffffff,1,0);
        uVar5 = uVar5 + iStack_30;
        aiStack_14[0] = aiStack_14[0] * 2;
        break;
      case (undefined4 *)0x48:
        aiStack_14[0] = 0x10;
      }
      (**(code **)(iRam00000004 + 0x14))(4,aiStack_14[0],0,1,0);
      uVar5 = uVar5 + aiStack_14[0];
    } while (pvVar4 != (void *)0x0);
  }
  (**(code **)(iRam00000004 + 8))();
  iVar3 = FUN_5f30ff10(unaff_EBP,uVar5);
  if (iVar3 == 0) {
    return false;
  }
  (*(code *)0x4)(param_1,*(undefined4 *)((int)unaff_EBP + 8),uVar5,&puStack_34);
  return unaff_EDI == uVar5;
}



void __thiscall FUN_5f30ff10(void *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_5f30f970(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  return;
}



void __fastcall FUN_5f30ff30(int param_1)

{
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    FUN_5f30f900(*(undefined **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void __fastcall FUN_5f30ff50(undefined4 *param_1)

{
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x11;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[1] = 0;
  param_1[0xf] = 10;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x10] = 0;
  param_1[3] = 0;
  return;
}



void __thiscall
FUN_5f30ffb0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x11;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x3c) = 10;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return;
}



void __fastcall FUN_5f310010(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_5f30f650(*(undefined **)(param_1 + 0x40));
  FUN_5f310120(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
    for (iVar4 = *(int *)(param_1 + 0x2c); iVar4 != 0; iVar4 = iVar4 + -1) {
      for (puVar2 = (undefined4 *)*puVar3; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
      }
      puVar3 = puVar3 + 1;
    }
  }
  FUN_5f312ab0((undefined *)puVar1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_5f311590(*(undefined4 **)(param_1 + 0x38));
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5f30f560(puVar1,*(int *)(param_1 + 0x1c));
    FUN_5f312ab0((undefined *)puVar1);
  }
  return;
}



void __thiscall
FUN_5f310090(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return;
}



bool __thiscall FUN_5f3100b0(void *this,int param_1,LPCWSTR param_2,undefined4 param_3)

{
  int *this_00;
  void *this_01;
  undefined4 *puVar1;
  
  this_00 = FUN_5f310200(this,param_1);
  if (this_00 == (int *)0x0) {
    this_01 = (void *)FUN_5f312aa0(0xc);
    if (this_01 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_5f30f660(this_01,param_1,param_2,param_3);
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_5f310230(this,puVar1);
    }
    return puVar1 != (undefined4 *)0x0;
  }
  FUN_5f30f6a0(this_00,param_1,param_2,param_3);
  return true;
}



void __fastcall FUN_5f310120(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = (int *)-(uint)(*(int *)(param_1 + 0x30) != 0);
  do {
    if (piVar7 == (int *)0x0) {
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = puVar4;
        for (iVar6 = *(int *)(param_1 + 0x2c); iVar6 != 0; iVar6 = iVar6 + -1) {
          for (puVar1 = (undefined4 *)*puVar5; puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)*puVar1) {
          }
          puVar5 = puVar5 + 1;
        }
      }
      FUN_5f312ab0((undefined *)puVar4);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      FUN_5f311590(*(undefined4 **)(param_1 + 0x38));
      puVar4 = *(undefined4 **)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_5f30f560(puVar4,*(int *)(param_1 + 0x1c));
        FUN_5f312ab0((undefined *)puVar4);
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    if (piVar7 == (int *)0xffffffff) {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x2c) != 0) {
        piVar3 = *(int **)(param_1 + 0x28);
        do {
          piVar7 = (int *)*piVar3;
          if (piVar7 != (int *)0x0) break;
          uVar2 = uVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x2c));
      }
    }
    piVar3 = (int *)*piVar7;
    if (piVar3 == (int *)0x0) {
      uVar2 = piVar7[1] + 1;
      if (uVar2 < *(uint *)(param_1 + 0x2c)) {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + uVar2 * 4);
        do {
          piVar3 = (int *)*puVar4;
          if (piVar3 != (int *)0x0) break;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x2c));
      }
    }
    FUN_5f30f650((undefined *)piVar7[2]);
    piVar7 = piVar3;
  } while( true );
}



int * __thiscall FUN_5f310200(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x1c)) {
    puVar1 = *(undefined4 **)((int)this + 0x18);
    do {
      if (*(int *)*puVar1 == param_1) {
        return (int *)*puVar1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)((int)this + 0x1c));
  }
  return (int *)0x0;
}



void __thiscall FUN_5f310230(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_10;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  uVar6 = uVar1 + 1;
  if (uVar6 == 0) {
    puVar2 = *(undefined4 **)((int)this + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5f30f560(puVar2,uVar1);
      FUN_5f312ab0((undefined *)puVar2);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x18);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_5f312aa0(uVar6 * 4);
      *(undefined4 **)((int)this + 0x18) = puVar2;
      for (uVar4 = uVar6 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(uint *)((int)this + 0x20) = uVar6;
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this + 0x1c) = uVar6;
    }
    else if (*(int *)((int)this + 0x20) < (int)uVar6) {
      iVar5 = *(int *)((int)this + 0x24);
      if (iVar5 == 0) {
        iVar5 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3;
        iVar7 = 4;
        if (3 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar7 < 0x401) {
          if (iVar5 < 4) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 0x400;
        }
      }
      local_10 = iVar5 + *(int *)((int)this + 0x20);
      if ((int)local_10 <= (int)uVar6) {
        local_10 = uVar6;
      }
      puVar3 = (undefined4 *)FUN_5f312aa0(local_10 * 4);
      puVar8 = puVar3;
      for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar2 = puVar3 + uVar1;
      for (uVar4 = uVar6 - uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      FUN_5f312ab0(*(undefined **)((int)this + 0x18));
      *(undefined4 **)((int)this + 0x18) = puVar3;
      *(uint *)((int)this + 0x1c) = uVar6;
      *(uint *)((int)this + 0x20) = local_10;
    }
    else if ((int)uVar1 < (int)uVar6) {
      *(uint *)((int)this + 0x1c) = uVar6;
      puVar2 = puVar2 + uVar1;
      for (uVar6 = uVar6 - uVar1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    else {
      if ((int)uVar6 < (int)uVar1) {
        FUN_5f30f560(puVar2 + uVar6,uVar1 - uVar6);
      }
      *(uint *)((int)this + 0x1c) = uVar6;
    }
  }
  *(undefined4 *)(*(int *)((int)this + 0x18) + uVar1 * 4) = param_1;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 __thiscall FUN_5f3103e0(void *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puStack_50;
  int *piStack_4c;
  int iStack_48;
  int iVar7;
  
  iStack_48 = 0x5f3103f4;
  FUN_5f3100b0(this,0,(LPCWSTR)0x0,0);
  iVar1 = *param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  pcVar2 = *(code **)(iVar1 + 0x14);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x1c);
  iVar7 = 0;
  iStack_48 = 0;
  piStack_4c = param_1;
  puStack_50 = (undefined1 *)0x5f310420;
  (*pcVar2)();
  puStack_50 = &stack0xffffffc8;
  (**(code **)(iVar1 + 0x10))();
  if (iStack_48 != 8) {
    return 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    (**(code **)(iVar1 + 0x34))();
    iVar1 = *(int *)((int)this + 0x14);
    (*pcVar2)();
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x1c)) {
      do {
        piVar5 = *(int **)(*(int *)((int)this + 0x18) + iVar4 * 4);
        if (*piVar5 == 0) {
          iVar3 = FUN_5f310bc0(this,param_1);
          if (iVar3 == 0) {
            (**(code **)(iVar7 + 8))();
            return 0;
          }
        }
        else {
          iVar3 = FUN_5f30fad0(piVar5,param_1);
          if (iVar3 == 0) goto LAB_5f31056e;
        }
        piStack_4c = (int *)(unaff_ESI - iStack_48);
        puStack_50 = (undefined1 *)*piVar5;
        (**(code **)(iVar7 + 0x10))(&stack0xffffffbc,&puStack_50,8);
        if (param_1 != (int *)0x8) {
LAB_5f31056e:
          (**(code **)(iVar7 + 8))();
          return 0;
        }
        (*pcVar2)(8,0,0,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0x1c));
    }
    (**(code **)(iVar7 + 8))();
    *param_1 = (int)param_1 - (int)piStack_4c;
    uVar6 = 0;
    piVar5 = piStack_4c;
    (*pcVar2)(param_1,piStack_4c,0,0,0);
    (*(code *)(iVar1 << 3))(param_1,param_1,8,&stack0xffffff84);
    if (piVar5 != (int *)0x8) {
      return 0;
    }
    (*pcVar2)(param_1,uVar6,0,0,0);
  }
  return 1;
}



undefined4 __thiscall FUN_5f310590(void *this,int *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  void *this_00;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *puVar10;
  code **ppcVar11;
  int *piVar12;
  code *pcStack_60;
  undefined1 **ppuStack_5c;
  int *piStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_28;
  undefined1 local_8 [8];
  
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  if ((*(int *)((int)this + 0x14) != 0) || (0 < *(int *)((int)this + 0x1c))) {
    puStack_48 = (undefined1 *)0x5f3105c5;
    FUN_5f310120((int)this);
  }
  iVar6 = *param_1;
  puStack_48 = local_8;
  uStack_4c = 1;
  uStack_50 = 0;
  piStack_54 = (int *)0x0;
  piStack_58 = param_1;
  ppuStack_5c = (undefined1 **)0x5f3105de;
  (**(code **)(iVar6 + 0x14))();
  ppuStack_5c = &puStack_48;
  pcStack_60 = (code *)0x8;
  (**(code **)(iVar6 + 0xc))(param_1);
  if (piStack_58 != (int *)0x8) {
    return 0;
  }
  piVar12 = param_1;
  (**(code **)(iVar6 + 0x34))(param_1,&uStack_4c);
  puStack_48 = *(undefined1 **)((int)this + 0x14);
  while( true ) {
    bVar4 = puStack_48 == (undefined1 *)0x0;
    puStack_48 = puStack_48 + -1;
    if (bVar4) {
      (**(code **)(*piStack_54 + 8))(piStack_54);
      return 1;
    }
    ppcVar11 = &pcStack_60;
    (**(code **)(*piStack_54 + 0xc))(piStack_54,&stack0xffffffc4,8);
    if (piVar12 != (int *)0x8) break;
    puVar2 = puStack_48 + unaff_EDI;
    (*pcStack_60)(param_1,uStack_34,uStack_30,0,0);
    (*(code *)ppcVar11)(param_1,puVar2,0,1,0);
    if (unaff_EBP == 0) {
      FUN_5f310ac0(this,param_1);
    }
    else {
      this_00 = (void *)FUN_5f312aa0(0xc);
      if (this_00 == (void *)0x0) {
        piStack_58 = (int *)0x0;
      }
      else {
        piStack_58 = FUN_5f30f660(this_00,unaff_EBP,(LPCWSTR)0x0,0);
      }
      FUN_5f30fc90(piStack_58,param_1);
      uVar3 = *(uint *)((int)this + 0x1c);
      ppuVar1 = (undefined1 **)(uVar3 + 1);
      uStack_4c = uVar3;
      if (ppuVar1 == (undefined1 **)0x0) {
        puVar5 = *(undefined4 **)((int)this + 0x18);
        if (puVar5 != (undefined4 *)0x0) {
          FUN_5f30f560(puVar5,uVar3);
          FUN_5f312ab0((undefined *)puVar5);
          *(undefined4 *)((int)this + 0x18) = 0;
        }
        *(undefined4 *)((int)this + 0x20) = 0;
        *(undefined4 *)((int)this + 0x1c) = 0;
        *(int **)(*(int *)((int)this + 0x18) + uVar3 * 4) = piStack_58;
      }
      else {
        puVar5 = *(undefined4 **)((int)this + 0x18);
        param_1 = piStack_28;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_5f312aa0((int)ppuVar1 * 4);
          *(undefined4 **)((int)this + 0x18) = puVar5;
          for (uVar8 = (uint)ppuVar1 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          iVar6 = *(int *)((int)this + 0x18);
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          *(undefined1 ***)((int)this + 0x20) = ppuVar1;
          *(undefined1 ***)((int)this + 0x1c) = ppuVar1;
          *(int **)(iVar6 + uVar3 * 4) = piStack_58;
        }
        else if (*(int *)((int)this + 0x20) < (int)ppuVar1) {
          iVar6 = *(int *)((int)this + 0x24);
          if (iVar6 == 0) {
            iVar6 = (int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3;
            iVar9 = 4;
            if (3 < iVar6) {
              iVar9 = iVar6;
            }
            if (iVar9 < 0x401) {
              if (iVar6 < 4) {
                iVar6 = 4;
              }
            }
            else {
              iVar6 = 0x400;
            }
          }
          ppuStack_5c = (undefined1 **)(iVar6 + *(int *)((int)this + 0x20));
          if ((int)ppuStack_5c <= (int)ppuVar1) {
            ppuStack_5c = ppuVar1;
          }
          puVar7 = (undefined4 *)FUN_5f312aa0((int)ppuStack_5c * 4);
          unaff_EDI = uVar3 * 4;
          puVar10 = puVar7;
          for (uVar8 = uVar3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar10 = puVar10 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          puVar5 = puVar7 + uVar3;
          for (uVar8 = (int)ppuVar1 - uStack_4c & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          FUN_5f312ab0(*(undefined **)((int)this + 0x18));
          *(undefined4 **)((int)this + 0x18) = puVar7;
          *(undefined1 ***)((int)this + 0x1c) = ppuVar1;
          *(undefined1 ***)((int)this + 0x20) = ppuStack_5c;
          puVar7[uStack_4c] = piStack_58;
        }
        else if ((int)uVar3 < (int)ppuVar1) {
          *(undefined1 ***)((int)this + 0x1c) = ppuVar1;
          puVar5 = puVar5 + uVar3;
          for (uVar8 = (int)ppuVar1 - uVar3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          iVar6 = *(int *)((int)this + 0x18);
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          *(int **)(iVar6 + uVar3 * 4) = piStack_58;
        }
        else {
          if ((int)ppuVar1 < (int)uVar3) {
            FUN_5f30f560(puVar5 + (int)ppuVar1,uVar3 - (int)ppuVar1);
          }
          *(undefined1 ***)((int)this + 0x1c) = ppuVar1;
          *(int **)(*(int *)((int)this + 0x18) + uVar3 * 4) = piStack_58;
        }
      }
    }
  }
  (**(code **)(*(int *)((int)this + 0x10) + 8))((int *)((int)this + 0x10));
  return 0;
}



undefined4 __thiscall FUN_5f3108b0(void *this,LPCWSTR param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  undefined4 *puVar3;
  
  param_1 = FUN_5f30f610(param_1);
  uVar2 = FUN_5f30f5e0((ushort *)param_1);
  if (*(int *)((int)this + 0x28) != 0) {
    for (puVar3 = *(undefined4 **)
                   (*(int *)((int)this + 0x28) + (uVar2 % *(uint *)((int)this + 0x2c)) * 4);
        puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      bVar1 = FUN_5f30f5c0(puVar3 + 2,&param_1);
      if (CONCAT31(extraout_var,bVar1) != 0) goto LAB_5f3108fd;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_5f3108fd:
  if (puVar3 == (undefined4 *)0x0) {
    FUN_5f30f650((undefined *)param_1);
    return 0;
  }
  *param_2 = puVar3[3];
  FUN_5f30f650((undefined *)param_1);
  return 1;
}



int __thiscall FUN_5f310940(void *this,undefined4 param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined3 extraout_var;
  uint uVar5;
  undefined3 extraout_var_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  param_2 = FUN_5f30f610(param_2);
  uVar4 = FUN_5f30f5e0((ushort *)param_2);
  if (*(int *)((int)this + 0x28) != 0) {
    for (puVar9 = *(undefined4 **)
                   (*(int *)((int)this + 0x28) + (uVar4 % *(uint *)((int)this + 0x2c)) * 4);
        puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9) {
      bVar3 = FUN_5f30f5c0(puVar9 + 2,&param_2);
      if (CONCAT31(extraout_var,bVar3) != 0) goto LAB_5f31099b;
    }
  }
  puVar9 = (undefined4 *)0x0;
LAB_5f31099b:
  if (puVar9 == (undefined4 *)0x0) {
    uVar4 = *(uint *)((int)this + 0x2c);
    uVar5 = FUN_5f30f5e0((ushort *)param_2);
    iVar8 = *(int *)((int)this + 0x28);
    uVar5 = uVar5 % uVar4;
    if (iVar8 != 0) {
      for (puVar9 = *(undefined4 **)(iVar8 + uVar5 * 4); puVar9 != (undefined4 *)0x0;
          puVar9 = (undefined4 *)*puVar9) {
        bVar3 = FUN_5f30f5c0(puVar9 + 2,&param_2);
        if (CONCAT31(extraout_var_00,bVar3) != 0) goto LAB_5f3109e9;
      }
    }
    puVar9 = (undefined4 *)0x0;
LAB_5f3109e9:
    if (puVar9 == (undefined4 *)0x0) {
      if (iVar8 == 0) {
        puVar9 = (undefined4 *)FUN_5f312aa0(uVar4 * 4);
        *(undefined4 **)((int)this + 0x28) = puVar9;
        for (uVar7 = uVar4 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(uint *)((int)this + 0x2c) = uVar4;
      }
      if (*(int *)((int)this + 0x34) == 0) {
        iVar6 = FUN_5f311550((int *)((int)this + 0x38),*(int *)((int)this + 0x3c),0x10);
        iVar8 = *(int *)((int)this + 0x3c);
        puVar9 = (undefined4 *)(iVar8 * 0x10 + iVar6);
        if (-1 < iVar8 + -1) {
          do {
            uVar2 = *(undefined4 *)((int)this + 0x34);
            *(undefined4 **)((int)this + 0x34) = puVar9;
            *puVar9 = uVar2;
            puVar9 = puVar9 + -4;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      puVar9 = *(undefined4 **)((int)this + 0x34);
      *(undefined4 *)((int)this + 0x34) = *puVar9;
      iVar8 = *(int *)((int)this + 0x30);
      puVar9[2] = 0;
      *(int *)((int)this + 0x30) = iVar8 + 1;
      puVar9[3] = 0;
      puVar9[1] = uVar5;
      puVar9[2] = param_2;
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x28) + uVar5 * 4);
      *puVar9 = *puVar1;
      *puVar1 = puVar9;
    }
    iVar8 = 1;
    puVar9[3] = param_1;
  }
  else {
    iVar8 = 0;
  }
  if (iVar8 == 0) {
    FUN_5f30f650((undefined *)param_2);
  }
  return iVar8;
}



undefined4 __thiscall FUN_5f310ac0(void *this,int *param_1)

{
  code *pcVar1;
  int iVar2;
  LPCWSTR pWVar3;
  int unaff_EBX;
  uint uVar4;
  uint unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int *piStack_234;
  undefined4 *puStack_230;
  undefined4 uStack_22c;
  WCHAR *pWStack_228;
  WCHAR local_210 [2];
  undefined4 local_20c [131];
  
  pWStack_228 = local_210;
  puStack_230 = local_20c;
  pcVar1 = *(code **)(*param_1 + 0xc);
  uStack_22c = 4;
  uVar4 = 0;
  piStack_234 = param_1;
  local_20c[0] = 0;
  (*pcVar1)();
  if (unaff_ESI != 4) {
    return 0;
  }
  if (unaff_EBP != 0) {
    while( true ) {
      iVar2 = (*pcVar1)(param_1,&stack0xfffffde8,8,&stack0xfffffddc);
      if ((iVar2 < 0) || (piStack_234 != (int *)0x8)) {
        return 0;
      }
      puStack_230 = unaff_EDI;
      iVar2 = (*pcVar1)(param_1,&stack0xfffffde0,unaff_EDI,&piStack_234);
      if (iVar2 < 0) {
        return 0;
      }
      if (unaff_EDI != (undefined4 *)0x4) break;
      if ((uVar4 == 0) && (unaff_EBX == 0)) {
        pWVar3 = FUN_5f30f610(local_210);
        *(LPCWSTR *)((int)this + 0x40) = pWVar3;
      }
      else {
        FUN_5f310940(this,unaff_EBX,local_210);
      }
      uVar4 = uVar4 + 1;
      if (unaff_EBP <= uVar4) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



undefined4 __thiscall FUN_5f310bc0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int unaff_EBP;
  int local_4;
  
  piVar1 = param_1;
  iVar4 = *(int *)((int)this + 0x30);
  local_4 = iVar4 + 1;
  (**(code **)(*param_1 + 0x10))(param_1,&local_4,4,&param_1);
  if (unaff_EBP != 4) {
    return 0;
  }
  iVar2 = FUN_5f310ca0(piVar1,0,*(LPCWSTR *)((int)this + 0x40));
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = (int *)-(uint)(iVar4 != 0);
  if (piVar7 == (int *)0x0) {
    return 1;
  }
  do {
    if (piVar7 == (int *)0xffffffff) {
      uVar3 = 0;
      if (*(uint *)((int)this + 0x2c) != 0) {
        piVar5 = *(int **)((int)this + 0x28);
        do {
          piVar7 = (int *)*piVar5;
          if (piVar7 != (int *)0x0) break;
          uVar3 = uVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x2c));
      }
    }
    piVar5 = (int *)*piVar7;
    if (piVar5 == (int *)0x0) {
      uVar3 = piVar7[1] + 1;
      if (uVar3 < *(uint *)((int)this + 0x2c)) {
        puVar6 = (undefined4 *)(*(int *)((int)this + 0x28) + uVar3 * 4);
        do {
          piVar5 = (int *)*puVar6;
          if (piVar5 != (int *)0x0) break;
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x2c));
      }
    }
    iVar4 = FUN_5f310ca0(piVar1,piVar7[3],(LPCWSTR)piVar7[2]);
    if (iVar4 == 0) {
      return 0;
    }
    piVar7 = piVar5;
    if (piVar5 == (int *)0x0) {
      return 1;
    }
  } while( true );
}



undefined4 __cdecl FUN_5f310ca0(int *param_1,undefined4 param_2,LPCWSTR param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20c;
  undefined4 local_208;
  int local_204;
  short local_200 [256];
  
  local_20c = 0;
  local_208 = param_2;
  iVar1 = lstrlenW(param_3);
  if (iVar1 + 1 < 0xff) {
    local_204 = lstrlenW(param_3);
    local_204 = local_204 + 1;
  }
  else {
    local_204 = 0xff;
  }
  FUN_5f312c30(local_200,param_3);
  iVar1 = local_204 + 8;
  iVar3 = iVar1;
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1,&local_208,iVar1,&local_20c);
  if ((-1 < iVar2) && (iVar3 == iVar1)) {
    return 1;
  }
  return 0;
}



undefined4 __thiscall FUN_5f310d40(void *this,LPCWSTR param_1)

{
  LPCWSTR pWVar1;
  
  FUN_5f30f650(*(undefined **)((int)this + 0x40));
  pWVar1 = FUN_5f30f610(param_1);
  *(LPCWSTR *)((int)this + 0x40) = pWVar1;
  return 1;
}



undefined2 * __fastcall FUN_5f310d70(undefined2 *param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0xfffe;
  param_1[1] = 0;
  DVar1 = GetVersion();
  *(DWORD *)(param_1 + 2) = DVar1 & 0xffff | 0x20000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



undefined2 * __thiscall
FUN_5f310dd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)this = 0xfffe;
  *(undefined2 *)((int)this + 2) = 0;
  DVar1 = GetVersion();
  *(DWORD *)((int)this + 4) = DVar1 & 0xffff | 0x20000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  return (undefined2 *)this;
}



void __fastcall FUN_5f310e30(int param_1)

{
  undefined4 *puVar1;
  
  FUN_5f310e60(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5f30f590(puVar1,*(int *)(param_1 + 0x20));
    FUN_5f312ab0((undefined *)puVar1);
  }
  return;
}



void __fastcall FUN_5f310e60(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5f30f590(puVar1,*(int *)(param_1 + 0x20));
    FUN_5f312ab0((undefined *)puVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



char * __fastcall FUN_5f310ea0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    do {
      iVar1 = 0x10;
      bVar6 = true;
      pcVar4 = (char *)*puVar2;
      pcVar5 = &stack0x00000004;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        return (char *)*puVar2;
      }
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return (char *)0x0;
}



char * __thiscall
FUN_5f310ee0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  void *this_00;
  
  pcVar1 = FUN_5f310ea0((int)this);
  if (pcVar1 == (char *)0x0) {
    this_00 = (void *)FUN_5f312aa0(0x44);
    if (this_00 == (void *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      pcVar1 = (char *)FUN_5f30ffb0(this_00,param_1,param_2,param_3,param_4);
    }
    if (pcVar1 != (char *)0x0) {
      FUN_5f310f60(this,pcVar1);
    }
  }
  return pcVar1;
}



void __thiscall FUN_5f310f60(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_10;
  
  uVar1 = *(uint *)((int)this + 0x20);
  uVar6 = uVar1 + 1;
  if (uVar6 == 0) {
    puVar2 = *(undefined4 **)((int)this + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_5f30f590(puVar2,uVar1);
      FUN_5f312ab0((undefined *)puVar2);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_5f312aa0(uVar6 * 4);
      *(undefined4 **)((int)this + 0x1c) = puVar2;
      for (uVar4 = uVar6 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(uint *)((int)this + 0x24) = uVar6;
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this + 0x20) = uVar6;
    }
    else if (*(int *)((int)this + 0x24) < (int)uVar6) {
      iVar5 = *(int *)((int)this + 0x28);
      if (iVar5 == 0) {
        iVar5 = (int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3;
        iVar7 = 4;
        if (3 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar7 < 0x401) {
          if (iVar5 < 4) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 0x400;
        }
      }
      local_10 = iVar5 + *(int *)((int)this + 0x24);
      if ((int)local_10 <= (int)uVar6) {
        local_10 = uVar6;
      }
      puVar3 = (undefined4 *)FUN_5f312aa0(local_10 * 4);
      puVar8 = puVar3;
      for (uVar4 = uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar2 = puVar3 + uVar1;
      for (uVar4 = uVar6 - uVar1 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      FUN_5f312ab0(*(undefined **)((int)this + 0x1c));
      *(undefined4 **)((int)this + 0x1c) = puVar3;
      *(uint *)((int)this + 0x20) = uVar6;
      *(uint *)((int)this + 0x24) = local_10;
    }
    else if ((int)uVar1 < (int)uVar6) {
      *(uint *)((int)this + 0x20) = uVar6;
      puVar2 = puVar2 + uVar1;
      for (uVar6 = uVar6 - uVar1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    else {
      if ((int)uVar6 < (int)uVar1) {
        FUN_5f30f590(puVar2 + uVar6,uVar1 - uVar6);
      }
      *(uint *)((int)this + 0x20) = uVar6;
    }
  }
  *(undefined4 *)(*(int *)((int)this + 0x1c) + uVar1 * 4) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return;
}



void __thiscall FUN_5f311110(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}



undefined4 __thiscall FUN_5f311120(void *this,int *param_1)

{
  code *pcVar1;
  undefined4 *this_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  int *piVar5;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  undefined1 *puStack_4c;
  int *piStack_48;
  void *pvStack_44;
  undefined4 uStack_40;
  int **ppiStack_3c;
  int *local_28 [7];
  undefined1 auStack_c [12];
  
  ppiStack_3c = local_28;
  iVar4 = *param_1;
  uStack_40 = 0x1c;
  piStack_48 = param_1;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x20);
  puStack_4c = (undefined1 *)0x5f311141;
  pvStack_44 = this;
  (**(code **)(iVar4 + 0x10))();
  if (unaff_EDI != 0x1c) {
    return 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    puStack_4c = auStack_c;
    piStack_50 = param_1;
    puStack_54 = (undefined1 *)0x5f31116c;
    (**(code **)(iVar4 + 0x34))();
    pcVar1 = *(code **)(iVar4 + 0x14);
    puStack_54 = &stack0xffffffcc;
    uStack_58 = 1;
    piVar5 = param_1;
    (*pcVar1)(param_1,*(int *)((int)this + 0x18) * 0x14,0);
    iVar4 = 0;
    if (0 < (int)puStack_4c) {
      piStack_50 = *(int **)((int)this + 0x1c);
      do {
        this_00 = (undefined4 *)*piStack_50;
        iVar3 = FUN_5f3103e0(this_00,param_1);
        if (iVar3 == 0) {
          (**(code **)(*local_28[0] + 8))(local_28[0]);
          return 0;
        }
        uStack_40 = *this_00;
        ppiStack_3c = (int **)this_00[1];
        piVar2 = (int *)this_00[2];
        (**(code **)(*local_28[0] + 0x10))(local_28[0],&uStack_40,0x14,&puStack_54);
        if (piVar5 != (int *)0x14) {
          (**(code **)(*piVar2 + 8))(piVar2);
          return 0;
        }
        (*pcVar1)(param_1,0,0,1,&uStack_58);
        iVar4 = iVar4 + 1;
        piStack_50 = piStack_50 + 1;
      } while (iVar4 < (int)puStack_4c);
    }
    (**(code **)(*local_28[0] + 8))(local_28[0]);
  }
  return 1;
}



undefined4 __thiscall FUN_5f311260(void *this,int *param_1)

{
  undefined1 **ppuVar1;
  bool bVar2;
  int *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  code **ppcVar11;
  int *piVar12;
  code *pcStack_6c;
  undefined1 **ppuStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *local_30;
  int *piStack_28;
  undefined1 local_1c [28];
  
  puStack_54 = local_1c;
  iVar7 = *param_1;
  uStack_58 = 1;
  local_30 = *(code **)(iVar7 + 0x14);
  uStack_5c = 0;
  piStack_60 = (int *)0x0;
  piStack_64 = param_1;
  ppuStack_68 = (undefined1 **)0x5f311286;
  (*local_30)();
  if ((*(int *)((int)this + 0x18) != 0) || (0 < *(int *)((int)this + 0x20))) {
    ppuStack_68 = (undefined1 **)0x5f31129b;
    FUN_5f310e60((int)this);
  }
  ppuStack_68 = &puStack_54;
  pcStack_6c = (code *)0x1c;
  (**(code **)(iVar7 + 0xc))(param_1);
  if (piStack_64 != (int *)0x1c) {
    return 0;
  }
  piVar12 = param_1;
  (**(code **)(iVar7 + 0x34))(param_1,&uStack_58);
  puStack_54 = *(undefined1 **)((int)this + 0x18);
  while( true ) {
    bVar2 = puStack_54 == (undefined1 *)0x0;
    puStack_54 = puStack_54 + -1;
    if (bVar2) {
      (**(code **)(*piStack_60 + 8))(piStack_60);
      return 1;
    }
    ppcVar11 = &pcStack_6c;
    (**(code **)(*piStack_60 + 0xc))(piStack_60,&uStack_40,0x14);
    uVar3 = uStack_40;
    if (piVar12 != (int *)0x14) break;
    (*pcStack_6c)(param_1,uStack_58,puStack_54,0,0);
    (*(code *)ppcVar11)(param_1,uVar3,0,1,0);
    puVar4 = (undefined4 *)FUN_5f312aa0(0x44);
    if (puVar4 == (undefined4 *)0x0) {
      piStack_64 = (int *)0x0;
    }
    else {
      piStack_64 = (int *)FUN_5f30ff50(puVar4);
    }
    this_00 = piStack_64;
    FUN_5f310090(piStack_64,uStack_40,uStack_3c,uStack_38,uStack_34);
    FUN_5f310590(this_00,param_1);
    uVar9 = *(uint *)((int)this + 0x20);
    ppuVar1 = (undefined1 **)(uVar9 + 1);
    uStack_58 = uVar9;
    if (ppuVar1 == (undefined1 **)0x0) {
      puVar4 = *(undefined4 **)((int)this + 0x1c);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_5f30f590(puVar4,uVar9);
        FUN_5f312ab0((undefined *)puVar4);
        *(undefined4 *)((int)this + 0x1c) = 0;
      }
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    else {
      puVar4 = *(undefined4 **)((int)this + 0x1c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_5f312aa0((int)ppuVar1 * 4);
        *(undefined4 **)((int)this + 0x1c) = puVar4;
        for (uVar6 = (uint)ppuVar1 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined1 ***)((int)this + 0x24) = ppuVar1;
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        *(undefined1 ***)((int)this + 0x20) = ppuVar1;
        param_1 = piStack_28;
      }
      else if (*(int *)((int)this + 0x24) < (int)ppuVar1) {
        iVar7 = *(int *)((int)this + 0x28);
        if (iVar7 == 0) {
          iVar7 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 7U)) >> 3;
          iVar8 = 4;
          if (3 < iVar7) {
            iVar8 = iVar7;
          }
          if (iVar8 < 0x401) {
            if (iVar7 < 4) {
              iVar7 = 4;
            }
          }
          else {
            iVar7 = 0x400;
          }
        }
        ppuStack_68 = (undefined1 **)(iVar7 + *(int *)((int)this + 0x24));
        if ((int)ppuStack_68 <= (int)ppuVar1) {
          ppuStack_68 = ppuVar1;
        }
        puVar5 = (undefined4 *)FUN_5f312aa0((int)ppuStack_68 * 4);
        puVar10 = puVar5;
        for (uVar6 = uVar9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar4 = puVar5 + uVar9;
        for (uVar6 = (int)ppuVar1 - uStack_58 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
        FUN_5f312ab0(*(undefined **)((int)this + 0x1c));
        *(undefined4 **)((int)this + 0x1c) = puVar5;
        *(undefined1 ***)((int)this + 0x20) = ppuVar1;
        *(undefined1 ***)((int)this + 0x24) = ppuStack_68;
        uVar9 = uStack_58;
        param_1 = piStack_28;
      }
      else if ((int)uVar9 < (int)ppuVar1) {
        *(undefined1 ***)((int)this + 0x20) = ppuVar1;
        puVar4 = puVar4 + uVar9;
        for (uVar6 = (int)ppuVar1 - uVar9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        for (iVar7 = 0; param_1 = piStack_28, iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      else {
        if ((int)ppuVar1 < (int)uVar9) {
          FUN_5f30f590(puVar4 + (int)ppuVar1,uVar9 - (int)ppuVar1);
        }
        *(undefined1 ***)((int)this + 0x20) = ppuVar1;
        param_1 = piStack_28;
      }
    }
    *(int **)(*(int *)((int)this + 0x1c) + uVar9 * 4) = piStack_64;
  }
                    // WARNING: Load size is inaccurate
  (**(code **)(*this + 8))(this);
  return 0;
}



void FUN_5f311550(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = FUN_5f313100(1,param_3 * param_2 + 0x10);
  if (piVar2 == (int *)0x0) {
    return;
  }
  piVar2[1] = param_2;
  piVar2[2] = 0;
  iVar1 = *param_1;
  *param_1 = (int)piVar2;
  *piVar2 = iVar1;
  return;
}



void __fastcall FUN_5f311590(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)*param_1;
      *param_1 = 0;
      FUN_5f3131b0((undefined *)param_1);
      param_1 = puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}



undefined4 FUN_5f3115d0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_5f30f440(0);
    FUN_5f3118f0((undefined4 *)&DAT_5f321178);
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
    DAT_5f3211e4 = 0;
  }
  else if (param_2 == 1) {
    DAT_5f3211e4 = param_1;
    iVar1 = FUN_5f311890((undefined4 *)&DAT_5f321178);
    if (iVar1 < 0) {
      return 0;
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f321200);
    FUN_5f30f540();
    return 1;
  }
  return 1;
}



undefined4 __cdecl FUN_5f311650(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  iVar2 = 0x10;
  bVar5 = true;
  pcVar3 = param_1;
  pcVar4 = (char *)&DAT_5f3038e0;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 0x10;
    bVar5 = true;
    pcVar3 = param_1;
    pcVar4 = &DAT_5f302bc0;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 0x10;
      bVar5 = true;
      pcVar3 = (char *)&DAT_5f3039a0;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *param_1 == *pcVar3;
        param_1 = param_1 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (bVar5) {
        uVar1 = FUN_5f3039e0(&LAB_5f3097b0,param_2,param_3);
        return uVar1;
      }
      return 0x8000ffff;
    }
  }
  uVar1 = FUN_5f3039e0(&LAB_5f3043a0,param_2,param_3);
  return uVar1;
}



undefined4 FUN_5f3116d0(void)

{
  if ((DAT_5f321218 == 0) && (DAT_5f32121c == 0)) {
    return 0;
  }
  return 1;
}



void FUN_5f3116f0(void)

{
  InterlockedIncrement(&DAT_5f321218);
  return;
}



void FUN_5f311700(void)

{
  InterlockedDecrement(&DAT_5f321218);
  return;
}



int __cdecl FUN_5f311710(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = param_2;
    if (param_2 < 0) {
      iVar1 = -param_2;
    }
    return ((iVar1 >> 1) + param_1) / param_2;
  }
  if (param_2 < 0) {
    return (param_1 - (-param_2 >> 1)) / param_2;
  }
  return (param_1 - (param_2 >> 1)) / param_2;
}



void __cdecl FUN_5f311750(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x9ec;
  iVar1 = FUN_5f311a70((undefined4 *)&DAT_5f321178);
  iVar1 = MulDiv(*param_1,iVar1,iVar2);
  iVar2 = 0x9ec;
  *param_1 = iVar1;
  iVar1 = FUN_5f311aa0((undefined4 *)&DAT_5f321178);
  iVar1 = MulDiv(param_1[1],iVar1,iVar2);
  param_1[1] = iVar1;
  return;
}



void __cdecl FUN_5f311790(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_5f311a70((undefined4 *)&DAT_5f321178);
  iVar1 = FUN_5f311710(*param_1 * 0x9ec,iVar1);
  *param_1 = iVar1;
  iVar1 = FUN_5f311aa0((undefined4 *)&DAT_5f321178);
  iVar1 = FUN_5f311710(param_1[1] * 0x9ec,iVar1);
  param_1[1] = iVar1;
  return;
}



void __cdecl FUN_5f3117f0(HDC param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (HDC)0x0) {
    iVar3 = GetDeviceCaps(param_1,0x58);
    if (iVar3 != 0) goto LAB_5f311826;
  }
  FUN_5f3119b0(&DAT_5f321178,(int *)&param_1);
  iVar3 = GetDeviceCaps(param_1,0x58);
LAB_5f311826:
  iVar4 = GetDeviceCaps(param_1,0x5a);
  piVar1 = param_2;
  iVar5 = FUN_5f311710((param_2[2] - *param_2) * 0x9ec,iVar3);
  puVar2 = param_3;
  iVar3 = piVar1[3];
  param_3[2] = iVar5;
  iVar3 = FUN_5f311710((iVar3 - piVar1[1]) * 0x9ec,iVar4);
  puVar2[1] = iVar3;
  *puVar2 = 0;
  puVar2[3] = 0;
  return;
}



undefined4 FUN_5f311890(undefined4 *param_1)

{
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  return 0;
}



void __cdecl FUN_5f3118f0(undefined4 *param_1)

{
  int *piVar1;
  
  if ((HGDIOBJ)param_1[1] != (HGDIOBJ)0x0) {
    SelectObject((HDC)*param_1,(HGDIOBJ)param_1[1]);
  }
  if ((HGDIOBJ)param_1[2] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[2]);
  }
  if ((HGDIOBJ)param_1[3] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[3]);
  }
  if ((HGDIOBJ)param_1[4] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[4]);
  }
  if ((HDC)*param_1 != (HDC)0x0) {
    DeleteDC((HDC)*param_1);
  }
  piVar1 = (int *)param_1[0xd];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd] = 0;
    param_1[0xe] = 1;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  return;
}



undefined4 FUN_5f311970(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  return 0;
}



undefined4 FUN_5f311990(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  return 0;
}



undefined4 __thiscall FUN_5f3119b0(void *this,int *param_1)

{
  HDC pHVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302bd0;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  local_8 = 0;
                    // WARNING: Load size is inaccurate
  if (*this == 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    *(HDC *)this = pHVar1;
    if (pHVar1 == (HDC)0x0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return 0x8007000e;
    }
    FUN_5f311c10(this,(undefined4 *)0x0);
  }
  if (param_1 != (int *)0x0) {
                    // WARNING: Load size is inaccurate
    *param_1 = *this;
  }
  local_8 = 0xffffffff;
  FUN_5f311a5a();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f311a5a(void)

{
  int unaff_ESI;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x54));
  return;
}



undefined4 __fastcall FUN_5f311a70(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[7] == -1) {
    FUN_5f3119b0(param_1,(int *)0x0);
    iVar1 = GetDeviceCaps((HDC)*param_1,0x58);
    param_1[7] = iVar1;
  }
  return param_1[7];
}



undefined4 __fastcall FUN_5f311aa0(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[8] == -1) {
    FUN_5f3119b0(param_1,(int *)0x0);
    iVar1 = GetDeviceCaps((HDC)*param_1,0x5a);
    param_1[8] = iVar1;
  }
  return param_1[8];
}



undefined4 __fastcall FUN_5f311ad0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == -1) {
    iVar1 = GetSystemMetrics(0xb);
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



undefined4 __fastcall FUN_5f311af0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    iVar1 = GetSystemMetrics(0xc);
    *(int *)(param_1 + 0x18) = iVar1;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



undefined4 __thiscall FUN_5f311b10(void *this,undefined4 *param_1)

{
  HDC hdc;
  HBITMAP pHVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302be0;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  local_8 = 0;
  if (*(int *)((int)this + 8) == 0) {
    hdc = GetDC((HWND)0x0);
    if (hdc == (HDC)0x0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return 0x8007000e;
    }
    pHVar1 = CreateCompatibleBitmap(hdc,1,1);
    *(HBITMAP *)((int)this + 8) = pHVar1;
    ReleaseDC((HWND)0x0,hdc);
    if (pHVar1 == (HBITMAP)0x0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return 0x8007000e;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 8);
  }
  local_8 = 0xffffffff;
  FUN_5f311bfa();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f311bfa(void)

{
  int unaff_EBX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EBX + 0x54));
  return;
}



int __thiscall FUN_5f311c10(void *this,undefined4 *param_1)

{
  int iVar1;
  HGDIOBJ h;
  HGDIOBJ local_28;
  HDC local_24;
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302bf0;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  local_8 = 0;
  if (*(int *)((int)this + 4) == 0) {
    iVar1 = FUN_5f3119b0(this,(int *)&local_24);
    local_20 = iVar1;
    if (iVar1 < 0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return iVar1;
    }
    iVar1 = FUN_5f311b10(this,&local_28);
    local_20 = iVar1;
    if (iVar1 < 0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return iVar1;
    }
    h = SelectObject(local_24,local_28);
    *(HGDIOBJ *)((int)this + 4) = h;
    if (h == (HGDIOBJ)0x0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return -0x7ff8fff2;
    }
    SelectObject(local_24,h);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 4);
  }
  local_8 = 0xffffffff;
  FUN_5f311d36();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f311d36(void)

{
  int unaff_ESI;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x54));
  return;
}



undefined4 __thiscall FUN_5f311d50(void *this,undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302c00;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  local_8 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    pvVar1 = GetStockObject(0xf);
    *(HGDIOBJ *)((int)this + 0xc) = pvVar1;
    if (pvVar1 == (HGDIOBJ)0x0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return 0x8007000e;
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
  }
  local_8 = 0xffffffff;
  FUN_5f311df5();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f311df5(void)

{
  int unaff_ESI;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x54));
  return;
}



int __cdecl FUN_5f311e00(undefined4 *param_1)

{
  HDC hdc;
  HPALETTE pHVar1;
  
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    return -0x7ff8fff2;
  }
  pHVar1 = CreateHalftonePalette(hdc);
  ReleaseDC((HWND)0x0,hdc);
  *param_1 = pHVar1;
  return (-(uint)(pHVar1 != (HPALETTE)0x0) & 0x7ff8fff2) + 0x8007000e;
}



int __thiscall FUN_5f311e50(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f302c10;
  puStack_10 = &LAB_5f312e60;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  local_8 = 0;
  piVar1 = (int *)((int)this + 0x10);
  if (*piVar1 == 0) {
    iVar2 = FUN_5f311e00(piVar1);
    if (iVar2 < 0) {
      __local_unwind2((int)&local_14,-1);
      ExceptionList = local_14;
      return iVar2;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *piVar1;
  }
  local_8 = 0xffffffff;
  FUN_5f311ef5();
  ExceptionList = local_14;
  return 0;
}



void FUN_5f311ef5(void)

{
  int unaff_EBX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EBX + 0x54));
  return;
}



undefined4 __thiscall FUN_5f311f00(void *this,undefined4 *param_1)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x24) == -1) {
    hdc = GetDC((HWND)0x0);
    if (hdc == (HDC)0x0) {
      return 0x8007000e;
    }
    iVar1 = GetDeviceCaps(hdc,0xe);
    iVar2 = GetDeviceCaps(hdc,0xc);
    *(int *)((int)this + 0x24) = iVar1 * iVar2;
    ReleaseDC((HWND)0x0,hdc);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x24);
  }
  return 0;
}



int __thiscall FUN_5f311f60(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_4;
  
  if (*(int *)((int)this + 0x28) == -1) {
    local_4 = this;
    iVar1 = FUN_5f311f00(this,&local_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    *(int *)((int)this + 0x28) = 1 << ((byte)local_4 & 0x1f);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x28);
  }
  return 0;
}



int __thiscall FUN_5f311fa0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_4;
  
  if (*(int *)((int)this + 0x2c) == -1) {
    local_4 = this;
    iVar1 = FUN_5f311f60(this,&local_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    *(void **)((int)this + 0x2c) = local_4;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x2c);
  }
  return 0;
}



bool __fastcall FUN_5f311fe0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x30) == -1) {
    FUN_5f312000(param_1,(undefined4 *)0x0);
  }
  return *(int *)((int)param_1 + 0x30) != 0;
}



undefined4 __thiscall FUN_5f312000(void *this,undefined4 *param_1)

{
  HDC hdc;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x30) == -1) {
    hdc = GetDC((HWND)0x0);
    if (hdc == (HDC)0x0) {
      return 0x8007000e;
    }
    uVar1 = GetDeviceCaps(hdc,0x26);
    if ((uVar1 & 0x100) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = GetDeviceCaps(hdc,0x68);
    }
    *(int *)((int)this + 0x30) = iVar2;
    ReleaseDC((HWND)0x0,hdc);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x30);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 * __cdecl FUN_5f312060(uint param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  uint uVar3;
  
  pwVar1 = &DAT_5f3211e8;
  do {
    pwVar2 = pwVar1 + 1;
    uVar3 = param_1 & 0xf;
    param_1 = param_1 >> 4;
    *pwVar1 = u_0123456789ABCDEF_5f31d400[uVar3];
    pwVar1 = pwVar2;
  } while ((int)pwVar2 < 0x5f3211f8);
  _DAT_5f3211f8 = 0;
  return &DAT_5f3211e8;
}



int __cdecl FUN_5f3120a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HRESULT HVar1;
  undefined2 *puVar2;
  int iVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 uVar6;
  
  if ((DAT_5f3211ac == (int *)0x0) &&
     (HVar1 = StgCreateDocfile((WCHAR *)0x0,0x4000012,0,(IStorage **)&DAT_5f3211ac), HVar1 < 0)) {
    return HVar1;
  }
  iVar3 = *DAT_5f3211ac;
  uVar6 = 0;
  piVar5 = (int *)0x0;
  puVar2 = FUN_5f312060(DAT_5f3211b0);
  iVar3 = (**(code **)(iVar3 + 0xc))(DAT_5f3211ac,puVar2,param_1,piVar5,uVar6,param_3);
  if (-1 < iVar3) {
    LVar4 = FUN_5f312470((LONG *)&DAT_5f3211b0);
    *piVar5 = LVar4 + -1;
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 __cdecl FUN_5f312110(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_5f3211ac == (int *)0x0) {
    return 0x8000ffff;
  }
  iVar1 = *DAT_5f3211ac;
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = FUN_5f312060(param_1);
  uVar3 = (**(code **)(iVar1 + 0x10))(DAT_5f3211ac,puVar2,uVar3,param_2,uVar4,param_3);
  return uVar3;
}



undefined4 __cdecl FUN_5f312150(uint param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  
  if (DAT_5f3211ac == (int *)0x0) {
    return 0x8000ffff;
  }
  iVar1 = *DAT_5f3211ac;
  puVar2 = FUN_5f312060(param_1);
  uVar3 = (**(code **)(iVar1 + 0x30))(DAT_5f3211ac,puVar2);
  return uVar3;
}



uint __cdecl FUN_5f312180(HKEY param_1,LPCSTR param_2,PHKEY param_3)

{
  uint uVar1;
  
  uVar1 = RegOpenKeyA(param_1,param_2,param_3);
  if (uVar1 != 0) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return 0;
}



uint __cdecl FUN_5f3121b0(HKEY param_1,LPCSTR param_2,PHKEY param_3)

{
  uint uVar1;
  
  uVar1 = RegCreateKeyA(param_1,param_2,param_3);
  if (uVar1 != 0) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return 0;
}



uint __cdecl FUN_5f3121e0(HKEY param_1,LPCSTR param_2,LPCSTR param_3)

{
  char cVar1;
  uint uVar2;
  LPCSTR pCVar3;
  
  uVar2 = 0xffffffff;
  pCVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pCVar3;
    pCVar3 = pCVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = RegSetValueA(param_1,param_2,1,param_3,~uVar2 - 1);
  if (uVar2 != 0) {
    return uVar2 & 0xffff | 0x80070000;
  }
  return 0;
}



uint __cdecl FUN_5f312220(HKEY param_1,LPCSTR param_2,LPSTR param_3,PLONG param_4)

{
  uint uVar1;
  
  uVar1 = RegQueryValueA(param_1,param_2,param_3,param_4);
  if (uVar1 != 0) {
    return uVar1 & 0xffff | 0x80070000;
  }
  return 0;
}



undefined4 __cdecl FUN_5f312250(GUID *param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  OLECHAR local_50 [40];
  
  iVar1 = StringFromGUID2(param_1,local_50,param_3);
  FUN_5f307850(local_50,iVar1 + -1,param_2);
  return 0;
}



uint __cdecl FUN_5f312290(LPCSTR param_1,undefined4 *param_2)

{
  LPCSTR pCVar1;
  uint uVar2;
  HKEY local_30;
  HKEY local_2c;
  CHAR local_28 [40];
  
  local_2c = (HKEY)0xffffffff;
  local_30 = (HKEY)0xffffffff;
  uVar2 = FUN_5f312250((GUID *)*param_2,local_28,0x27);
  if (-1 < (int)uVar2) {
    uVar2 = FUN_5f3121b0(DAT_5f31d428,local_28,&local_30);
    if (-1 < (int)uVar2) {
      pCVar1 = (LPCSTR)param_2[1];
      uVar2 = FUN_5f3121e0(local_30,s_CLSID_5f31d42c,pCVar1);
      if (-1 < (int)uVar2) {
        uVar2 = FUN_5f3121e0(local_30,&DAT_5f321220,pCVar1);
        if (-1 < (int)uVar2) {
          uVar2 = FUN_5f3121e0(local_30,s_InprocServer32_5f31d488,param_1);
          if (-1 < (int)uVar2) {
            pCVar1 = (LPCSTR)param_2[2];
            uVar2 = FUN_5f3121e0(local_30,s_ProgID_5f31d498,pCVar1);
            if (-1 < (int)uVar2) {
              uVar2 = FUN_5f3121b0(DAT_5f31d424,pCVar1,&local_2c);
              if (-1 < (int)uVar2) {
                uVar2 = FUN_5f3121e0(local_2c,s_CLSID_5f31d42c,local_28);
                if (-1 < (int)uVar2) {
                  uVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_2c != (HKEY)0xffffffff) {
    RegCloseKey(local_2c);
  }
  if (local_30 != (HKEY)0xffffffff) {
    RegCloseKey(local_30);
  }
  return uVar2;
}



uint __cdecl FUN_5f3123c0(LPCSTR param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_DAT_5f302b98;
  do {
    uVar1 = FUN_5f312290(param_1,ppuVar2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    ppuVar2 = ppuVar2 + 3;
  } while (ppuVar2 < &DAT_5f302bbc);
  return 0;
}



uint FUN_5f3123f0(void)

{
  uint uVar1;
  
  uVar1 = FUN_5f312180((HKEY)0x80000000,(LPCSTR)0x0,&DAT_5f31d424);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_5f312180((HKEY)0x80000000,s_CLSID_5f31d42c,&DAT_5f31d428);
    if (-1 < (int)uVar1) {
      uVar1 = FUN_5f3123c0(&DAT_5f31d4f8);
    }
  }
  if (DAT_5f31d428 != (HKEY)0xffffffff) {
    RegCloseKey(DAT_5f31d428);
  }
  if (DAT_5f31d424 != (HKEY)0xffffffff) {
    if (-1 < (int)uVar1) {
      RegFlushKey(DAT_5f31d424);
    }
    RegCloseKey(DAT_5f31d424);
  }
  return uVar1;
}



LONG FUN_5f312470(LONG *param_1)

{
  LONG LVar1;
  
  if (0x4d1 < DAT_5f32122c) {
    LVar1 = InterlockedIncrement(param_1);
    return LVar1;
  }
  LVar1 = InterlockedIncrement(param_1);
  if (LVar1 == 0) {
    return 0;
  }
  return *param_1;
}



LONG FUN_5f3124b0(LONG *param_1)

{
  LONG LVar1;
  
  if (0x4d1 < DAT_5f32122c) {
    LVar1 = InterlockedDecrement(param_1);
    return LVar1;
  }
  LVar1 = InterlockedDecrement(param_1);
  if (LVar1 == 0) {
    return 0;
  }
  return *param_1;
}



undefined4 FUN_5f3124f0(void)

{
  FARPROC pFVar1;
  undefined **ppuVar2;
  
  if (DAT_5f321224 == (HMODULE)0x0) {
    DAT_5f321224 = GetModuleHandleA(s_oleaut32_dll_5f31d5a8);
    if (DAT_5f321224 == (HMODULE)0x0) {
      return 0x800401f8;
    }
    ppuVar2 = &PTR_PTR_5f31d4c4;
    do {
      pFVar1 = GetProcAddress(DAT_5f321224,ppuVar2[-1]);
      if (pFVar1 == (FARPROC)0x0) {
        DAT_5f321228 = 1;
      }
      else {
        *(FARPROC *)*ppuVar2 = pFVar1;
      }
      ppuVar2 = ppuVar2 + 2;
    } while (ppuVar2 < s_ro32_dll_5f31d4fc);
  }
  return 0;
}



void OleTranslateColor(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    // 0x12560  254  OleTranslateColor
  (*(code *)PTR_FUN_5f31d4b0)(param_1,param_2,param_3);
  return;
}



void OleCreateFontIndirect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    // 0x12580  253  OleCreateFontIndirect
  (*(code *)PTR_FUN_5f31d4a0)(param_1,param_2,param_3);
  return;
}



void OleCreatePictureIndirect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    // 0x125a0  252  OleCreatePictureIndirect
  (*(code *)PTR_FUN_5f31d4a4)(param_1,param_2,param_3,param_4);
  return;
}



void OleLoadPicture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
                    // 0x125c0  251  OleLoadPicture
  (*(code *)PTR_FUN_5f31d4a8)(param_1,param_2,param_3,param_4,param_5);
  return;
}



void OleCreatePropertyFrame
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
                    // 0x125f0  250  OleCreatePropertyFrame
  (*(code *)PTR_FUN_5f31d4b4)
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11);
  return;
}



void OleCreatePropertyFrameIndirect(undefined4 param_1)

{
                    // 0x12630  249  OleCreatePropertyFrameIndirect
  (*(code *)PTR_FUN_5f31d4b8)(param_1);
  return;
}



void OleIconToCursor(undefined4 param_1,undefined4 param_2)

{
                    // 0x12640  248  OleIconToCursor
  (*(code *)PTR_FUN_5f31d4ac)(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_5f312660(undefined4 param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    _DAT_5f321234 = 0;
    DllUnregisterServer();
  }
  else if (param_2 == 1) {
    iVar1 = FUN_5f3124f0();
    if (iVar1 < 0) {
      return 0;
    }
    _DAT_5f321234 = param_1;
    DVar2 = GetVersion();
    if (DVar2 < 0x80000000) {
      DAT_5f32122c = DVar2 >> 0x10;
    }
    else {
      DAT_5f321230 = 1;
    }
  }
  if (DAT_5f321228 != 0) {
    uVar3 = FUN_5f3115d0(param_1,param_2);
    return uVar3;
  }
  return 1;
}



HRESULT DllCanUnloadNow(void)

{
  HRESULT HVar1;
  
                    // 0x126e0  255  DllCanUnloadNow
  HVar1 = FUN_5f3124f0();
  if ((HVar1 == 0) || (-1 < HVar1)) {
    if (DAT_5f321228 != 0) {
      HVar1 = FUN_5f3116d0();
      return HVar1;
    }
    HVar1 = 0;
  }
  return HVar1;
}



HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    // 0x12700  256  DllGetClassObject
  HVar1 = FUN_5f3124f0();
  if ((HVar1 == 0) || (-1 < HVar1)) {
    if (DAT_5f321228 != 0) {
      HVar1 = FUN_5f311650((char *)rclsid,riid,ppv);
      return HVar1;
    }
    HVar1 = -0x7fff0001;
  }
  return HVar1;
}



uint DllRegisterServer(void)

{
  uint uVar1;
  
                    // 0x12740  257  DllRegisterServer
  uVar1 = FUN_5f3124f0();
  if ((uVar1 == 0) || (-1 < (int)uVar1)) {
    if (DAT_5f321228 != 0) {
      uVar1 = FUN_5f3123f0();
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 DllUnregisterServer(void)

{
                    // 0x12760  258  DllUnregisterServer
  return 0;
}



void __cdecl FUN_5f312770(ITypeLib **param_1)

{
  LoadTypeLib(u_olepro32_dll_5f31d5b8,param_1);
  return;
}



void * __cdecl FUN_5f312780(SIZE_T param_1)

{
  HRESULT HVar1;
  void *pvVar2;
  IMalloc *local_4;
  
  pvVar2 = (void *)0x0;
  HVar1 = CoGetMalloc(1,&local_4);
  if (HVar1 == 0) {
    pvVar2 = (*local_4->lpVtbl->Alloc)(local_4,param_1);
    (*local_4->lpVtbl->Release)(local_4);
  }
  return pvVar2;
}



void * __cdecl FUN_5f3127c0(int *param_1,SIZE_T param_2)

{
  HRESULT HVar1;
  void *pvVar2;
  IMalloc *local_4;
  
  pvVar2 = (void *)0x0;
  HVar1 = CoGetMalloc(1,&local_4);
  if (HVar1 == 0) {
    pvVar2 = (*local_4->lpVtbl->Realloc)(local_4,param_1,param_2);
    (**(code **)(*param_1 + 8))(param_1);
  }
  return pvVar2;
}



void __cdecl FUN_5f312800(IMalloc *param_1)

{
  IMalloc *pv;
  HRESULT HVar1;
  int *unaff_ESI;
  
  pv = param_1;
  if (param_1 != (IMalloc *)0x0) {
    HVar1 = CoGetMalloc(1,&param_1);
    if (HVar1 == 0) {
      (*param_1->lpVtbl->Free)(param_1,pv);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_5f312840(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_5f3134b0((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_5f321238) {
      DAT_5f321238 = DAT_5f321238 + -1;
      if (DAT_5f321290 == 0) {
        FUN_5f313270();
      }
      FUN_5f313760();
      FUN_5f3133e0();
      FUN_5f314010();
      return 1;
    }
    return 0;
  }
  DAT_5f321258 = GetVersion();
  if (DAT_5f321248 == 0) {
    if (((char)DAT_5f321258 == '\x03') && ((DAT_5f321258 & 0x80000000) != 0)) {
      FUN_5f314050(2);
    }
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsTNT");
      if (pFVar1 != (FARPROC)0x0) {
        FUN_5f314050(1);
      }
    }
  }
  iVar2 = FUN_5f313fd0();
  if (iVar2 == 0) {
    return 0;
  }
  _DAT_5f321264 = DAT_5f321258 >> 8 & 0xff;
  _DAT_5f321260 = DAT_5f321258 & 0xff;
  _DAT_5f32125c = _DAT_5f321260 * 0x100 + _DAT_5f321264;
  DAT_5f321258 = DAT_5f321258 >> 0x10;
  iVar2 = FUN_5f313380();
  if (iVar2 == 0) {
    FUN_5f314010();
    return 0;
  }
  DAT_5f32280c = GetCommandLineA();
  DAT_5f32123c = FUN_5f313e70();
  if ((DAT_5f32280c != (LPSTR)0x0) && (DAT_5f32123c != (LPSTR)0x0)) {
    FUN_5f313550();
    FUN_5f313e60();
    FUN_5f3138b0();
    FUN_5f3137c0();
    FUN_5f313220();
    DAT_5f321238 = DAT_5f321238 + 1;
    return 1;
  }
  FUN_5f3133e0();
  FUN_5f314010();
  return 0;
}



int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_5f321238 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_5f312a0e:
    iVar1 = FUN_5f312660(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_5f312840(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_5f312840(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_5f322810 != (code *)0x0)) {
        iVar1 = (*DAT_5f322810)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_5f322810 != (code *)0x0) {
    iVar1 = (*DAT_5f322810)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_5f312840(param_1,param_2);
    if (iVar1 != 0) goto LAB_5f312a0e;
  }
  return 0;
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_5f321244 == 1) || ((DAT_5f321244 == 0 && (DAT_5f321248 == 1)))) {
    FUN_5f314060();
  }
  FUN_5f3140a0(param_1);
  (*(code *)PTR___exit_5f31d5d4)(0xff);
  return;
}



void __cdecl FUN_5f312aa0(uint param_1)

{
  FUN_5f3142a0(param_1,1);
  return;
}



void __cdecl FUN_5f312ab0(undefined *param_1)

{
  FUN_5f3131b0(param_1);
  return;
}



short * __cdecl FUN_5f312ad0(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  
  psVar4 = param_1;
  if (param_3 != 0) {
    do {
      sVar1 = *param_2;
      param_2 = param_2 + 1;
      *psVar4 = sVar1;
      psVar4 = psVar4 + 1;
      if (sVar1 == 0) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    if ((param_3 != 0) && (uVar2 = param_3 - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        psVar4[0] = 0;
        psVar4[1] = 0;
        psVar4 = psVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *psVar4 = 0;
        psVar4 = psVar4 + 1;
      }
    }
  }
  return param_1;
}



int __cdecl FUN_5f312b10(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (DAT_5f321548 == 0) {
    do {
      uVar1 = *param_1;
      uVar2 = (uint)uVar1;
      if ((uVar1 < 0x5b) && (0x40 < uVar1)) {
        uVar2 = uVar2 + 0x20;
      }
      uVar1 = *param_2;
      uVar3 = (uint)uVar1;
      if ((uVar1 < 0x5b) && (0x40 < uVar1)) {
        uVar3 = uVar3 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (((short)uVar2 != 0) && ((short)uVar2 == (short)uVar3));
  }
  else {
    InterlockedIncrement((LONG *)&DAT_5f3226e8);
    bVar4 = DAT_5f3226e4 == 0;
    if (bVar4) {
      uVar3 = 0;
    }
    else {
      InterlockedDecrement((LONG *)&DAT_5f3226e8);
      uVar3 = FUN_5f314400(0x13);
    }
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = FUN_5f314580(CONCAT22((short)(uVar3 >> 0x10),uVar1));
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar3 = FUN_5f314580(CONCAT22((short)(uVar2 >> 0x10),uVar1));
      if ((short)uVar2 == 0) break;
    } while ((short)uVar2 == (short)uVar3);
    if (bVar4) {
      InterlockedDecrement((LONG *)&DAT_5f3226e8);
    }
    else {
      FUN_5f314480(0x13);
    }
  }
  return (uVar2 & 0xffff) - (uVar3 & 0xffff);
}



int __cdecl FUN_5f312c10(short *param_1)

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



void __cdecl FUN_5f312c30(short *param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = *param_2;
  *param_1 = sVar1;
  while (sVar1 != 0) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    sVar1 = *param_2;
    *param_1 = sVar1;
  }
  return;
}



// Library Function - Single Match
//  __fpmath
// 
// Library: Visual Studio 1998 Release

void __cdecl __fpmath(int param_1)

{
  FUN_5f312c90();
  DAT_5f321250 = FUN_5f314670();
  __setdefaultprecision();
  return;
}



void FUN_5f312c90(void)

{
  PTR_LAB_5f31da34 = &LAB_5f314700;
  PTR_LAB_5f31da30 = &LAB_5f314b60;
  PTR_LAB_5f31da38 = &LAB_5f314790;
  PTR_LAB_5f31da3c = FUN_5f3146a0;
  PTR_LAB_5f31da40 = &LAB_5f314770;
  PTR_LAB_5f31da44 = &LAB_5f314b60;
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



void __fastcall FUN_5f312d0a(undefined4 param_1)

{
  __cintrindisp2(param_1,0x5f31d5f0);
  return;
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



// Library Function - Single Match
//  __global_unwind2
// 
// Library: Visual Studio

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x5f312d80,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// Library Function - Single Match
//  __local_unwind2
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_5f312d88;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_5f312e3e();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



void FUN_5f312e3e(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_5f31d648 = *(undefined4 *)(unaff_EBP + 8);
  DAT_5f31d644 = in_EAX;
  DAT_5f31d64c = unaff_EBP;
  return;
}



void FUN_5f312f1d(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



int __cdecl FUN_5f312f40(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  iVar2 = (uint)*param_1 - (uint)uVar1;
  while ((iVar2 == 0 && (uVar1 != 0))) {
    uVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar2 = (uint)*param_1 - (uint)uVar1;
  }
  if (-1 < iVar2) {
    if (0 < iVar2) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return -1;
}



LPCWSTR __cdecl FUN_5f312fa0(LPCWSTR param_1)

{
  WCHAR WVar1;
  LPCWSTR pWVar2;
  uint uVar3;
  LPWSTR pWVar4;
  bool bVar5;
  
  pWVar4 = (LPWSTR)0x0;
  if (DAT_5f321548 == 0) {
    pWVar2 = param_1;
    if (*param_1 != L'\0') {
      do {
        WVar1 = *param_1;
        if ((0x40 < (ushort)WVar1) && ((ushort)WVar1 < 0x5b)) {
          *param_1 = WVar1 + L' ';
        }
        param_1 = param_1 + 1;
      } while (*param_1 != L'\0');
      return pWVar2;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_5f3226e8);
    bVar5 = DAT_5f3226e4 == 0;
    if (!bVar5) {
      InterlockedDecrement((LONG *)&DAT_5f3226e8);
      FUN_5f314400(0x13);
    }
    if (DAT_5f321548 == 0) {
      if (bVar5) {
        InterlockedDecrement((LONG *)&DAT_5f3226e8);
      }
      else {
        FUN_5f314480(0x13);
      }
      pWVar2 = param_1;
      if (*param_1 != L'\0') {
        do {
          WVar1 = *param_1;
          if ((0x40 < (ushort)WVar1) && ((ushort)WVar1 < 0x5b)) {
            *param_1 = WVar1 + L' ';
          }
          param_1 = param_1 + 1;
        } while (*param_1 != L'\0');
        return pWVar2;
      }
    }
    else {
      uVar3 = FUN_5f315dd0(DAT_5f321548,0x100,param_1,(char *)0xffffffff,(LPWSTR)0x0,0,0);
      if (((uVar3 != 0) && (pWVar4 = (LPWSTR)FUN_5f314280(uVar3 * 2), pWVar4 != (LPWSTR)0x0)) &&
         (uVar3 = FUN_5f315dd0(DAT_5f321548,0x100,param_1,(char *)0xffffffff,pWVar4,uVar3,0),
         uVar3 != 0)) {
        FUN_5f312c30(param_1,pWVar4);
      }
      if (!bVar5) {
        FUN_5f314480(0x13);
        FUN_5f3131b0((undefined *)pWVar4);
        return param_1;
      }
      InterlockedDecrement((LONG *)&DAT_5f3226e8);
      FUN_5f3131b0((undefined *)pWVar4);
    }
  }
  return param_1;
}



int * __cdecl FUN_5f313100(int param_1,int param_2)

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
      if (DAT_5f31fc04 < dwBytes) {
LAB_5f313174:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_5f314400(9);
        piVar3 = FUN_5f3165f0(dwBytes >> 4);
        FUN_5f314480(9);
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
          goto LAB_5f313174;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_5f3226ec,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_5f321568 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_5f316270(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



void __cdecl FUN_5f3131b0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_5f314400(9);
    pbVar1 = (byte *)FUN_5f316530(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_5f316590(local_4,(int)param_1,pbVar1);
      FUN_5f314480(9);
      return;
    }
    FUN_5f314480(9);
    HeapFree(DAT_5f3226ec,0,lpMem);
  }
  return;
}



void FUN_5f313220(void)

{
  if (PTR___fpmath_5f31d5e0 != (undefined *)0x0) {
    (*(code *)PTR___fpmath_5f31d5e0)();
  }
  FUN_5f313360((undefined4 *)&DAT_5f31d010,(undefined4 *)&DAT_5f31d018);
  FUN_5f313360((undefined4 *)&DAT_5f31d000,(undefined4 *)&DAT_5f31d00c);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_5f313280(_Code,1,0);
  return;
}



void FUN_5f313270(void)

{
  FUN_5f313280(0,0,1);
  return;
}



void __cdecl FUN_5f313280(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_5f313340();
  if (DAT_5f321294 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_5f321290 = 1;
  DAT_5f32128c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_5f322808 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_5f322804 + -4), puVar1 = DAT_5f322808, DAT_5f322808 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_5f322808;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_5f313360((undefined4 *)&DAT_5f31d01c,(undefined4 *)&DAT_5f31d024);
  }
  FUN_5f313360((undefined4 *)&DAT_5f31d028,(undefined4 *)&DAT_5f31d02c);
  if (param_3 != 0) {
    FUN_5f313350();
    return;
  }
  DAT_5f321294 = 1;
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



void FUN_5f313340(void)

{
  FUN_5f314400(0xd);
  return;
}



void FUN_5f313350(void)

{
  FUN_5f314480(0xd);
  return;
}



void __cdecl FUN_5f313360(undefined4 *param_1,undefined4 *param_2)

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



undefined4 FUN_5f313380(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_5f314350();
  DAT_5f31d650 = TlsAlloc();
  if (DAT_5f31d650 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_5f313100(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_5f31d650,lpTlsValue);
      if (BVar1 != 0) {
        FUN_5f313410((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_5f3133e0(void)

{
  FUN_5f314380();
  if (DAT_5f31d650 != 0xffffffff) {
    TlsFree(DAT_5f31d650);
    DAT_5f31d650 = 0xffffffff;
  }
  return;
}



void __cdecl FUN_5f313410(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_5f31fc08;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



DWORD * FUN_5f313430(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_5f31d650);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_5f313100(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_5f31d650,lpTlsValue);
      if (BVar1 != 0) {
        FUN_5f313410((int)lpTlsValue);
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



void __cdecl FUN_5f3134b0(undefined *param_1)

{
  if (DAT_5f31d650 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = (undefined *)TlsGetValue(DAT_5f31d650), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_5f3131b0(*(undefined **)(param_1 + 0x44));
      }
      FUN_5f3131b0(param_1);
    }
    TlsSetValue(DAT_5f31d650,(LPVOID)0x0);
    return;
  }
  return;
}



void FUN_5f313550(void)

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
  
  puVar2 = (undefined4 *)FUN_5f314280(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_5f322800 = 0x20;
  DAT_5f322700 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_5f322700 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_5f322800 < (int)UStack_48) {
      piVar6 = &DAT_5f322704;
      do {
        puVar2 = (undefined4 *)FUN_5f314280(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          UStack_48 = DAT_5f322800;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_5f322800 = DAT_5f322800 + 0x20;
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
      } while ((int)DAT_5f322800 < (int)UStack_48);
    }
    uVar7 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_5f322700)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_5f322700 + iVar5 * 9;
    if (DAT_5f322700[iVar5 * 9] == -1) {
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
        goto LAB_5f31373e;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_5f31373e;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_5f31373e;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_5f31373e:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_5f322800);
      return;
    }
  } while( true );
}



void FUN_5f313760(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar1 = &DAT_5f322700;
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
      FUN_5f3131b0((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5f322800);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_5f3137c0(void)

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
  cVar2 = *DAT_5f32123c;
  pcVar7 = DAT_5f32123c;
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
  piVar3 = (int *)FUN_5f314280(iVar8 * 4 + 4);
  _DAT_5f321274 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_5f32123c;
  local_4 = piVar3;
  pcVar7 = DAT_5f32123c;
  do {
    if (cVar2 == '\0') {
      FUN_5f3131b0(DAT_5f32123c);
      DAT_5f32123c = (char *)0x0;
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
      iVar8 = FUN_5f314280(uVar4);
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

void FUN_5f3138b0(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_5f321298,0x104);
  _DAT_5f321284 = &DAT_5f321298;
  pbVar2 = DAT_5f32280c;
  if (*DAT_5f32280c == 0) {
    pbVar2 = &DAT_5f321298;
  }
  FUN_5f313950(pbVar2,(undefined4 *)0x0,(byte *)0x0,&iStack_8,&iStack_4);
  puVar1 = (undefined4 *)FUN_5f314280(iStack_4 + iStack_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_5f313950(pbVar2,puVar1,(byte *)(puVar1 + iStack_8),&iStack_8,&iStack_4);
  _DAT_5f32126c = puVar1;
  _DAT_5f321268 = iStack_8 + -1;
  return;
}



void __cdecl FUN_5f313950(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_5f3213a0 + bVar2 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)param_5 + 0x5f3213a1) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_5f313a29;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_5f313a29:
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
          if ((*(byte *)((int)&DAT_5f3213a0 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_5f313b25;
        }
        if ((*(byte *)((int)&DAT_5f3213a0 + bVar2 + 1) & 4) != 0) {
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
LAB_5f313b25:
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

undefined4 __cdecl FUN_5f313b60(int param_1)

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
  
  FUN_5f314400(0x19);
  CodePage = FUN_5f313d80(param_1);
  if (CodePage == DAT_5f3214a4) {
    FUN_5f314480(0x19);
    return 0;
  }
  if (CodePage != 0) {
    iVar10 = 0;
    pUVar5 = &DAT_5f31d688;
    do {
      if (*pUVar5 == CodePage) {
        puVar14 = &DAT_5f3213a0;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)puVar14 = 0;
        uVar7 = 0;
        iVar10 = iVar10 * 0x30;
        pbVar12 = (byte *)(iVar10 + 0x5f31d698);
        do {
          bVar3 = *pbVar12;
          for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
              pbVar13 = pbVar13 + 2) {
            uVar8 = (uint)*pbVar13;
            if (uVar8 <= bVar3) {
              bVar4 = (&DAT_5f31d680)[uVar7];
              do {
                pbVar2 = (byte *)((int)&DAT_5f3213a0 + uVar8 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= bVar3);
            }
            bVar3 = pbVar13[2];
          }
          uVar7 = uVar7 + 1;
          pbVar12 = pbVar12 + 8;
        } while (uVar7 < 4);
        DAT_5f3214a4 = CodePage;
        _DAT_5f3214a8 = FUN_5f313dd0(CodePage);
        _DAT_5f3214b0 = *(undefined4 *)(iVar10 + 0x5f31d68c);
        _DAT_5f3214b4 = *(undefined4 *)(iVar10 + 0x5f31d690);
        _DAT_5f3214b8 = *(undefined4 *)(iVar10 + 0x5f31d694);
        FUN_5f314480(0x19);
        return 0;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar10 = iVar10 + 1;
    } while (pUVar5 < &DAT_5f31d778);
    BVar6 = GetCPInfo(CodePage,&local_14);
    if (BVar6 == 1) {
      puVar14 = &DAT_5f3213a0;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      if (local_14.MaxCharSize < 2) {
        DAT_5f3214a4 = 0;
        _DAT_5f3214a8 = 0;
      }
      else {
        if (local_14.LeadByte[0] != '\0') {
          pBVar11 = local_14.LeadByte + 1;
          do {
            bVar3 = *pBVar11;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              *(byte *)((int)&DAT_5f3213a0 + uVar7 + 1) =
                   *(byte *)((int)&DAT_5f3213a0 + uVar7 + 1) | 4;
            }
            pBVar1 = pBVar11 + 1;
            pBVar11 = pBVar11 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          *(byte *)((int)&DAT_5f3213a0 + uVar7 + 1) = *(byte *)((int)&DAT_5f3213a0 + uVar7 + 1) | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_5f3214a4 = CodePage;
        _DAT_5f3214a8 = FUN_5f313dd0(CodePage);
      }
      _DAT_5f3214b0 = 0;
      _DAT_5f3214b4 = 0;
      _DAT_5f3214b8 = 0;
      FUN_5f314480(0x19);
      return 0;
    }
    if (DAT_5f3214bc == 0) {
      FUN_5f314480(0x19);
      return 0xffffffff;
    }
  }
  FUN_5f313e30();
  FUN_5f314480(0x19);
  return 0;
}



int __cdecl FUN_5f313d80(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_5f3214bc = 1;
                    // WARNING: Could not recover jumptable at 0x5f313d9d. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_5f3214bc = 1;
                    // WARNING: Could not recover jumptable at 0x5f313db2. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_5f321558;
  }
  DAT_5f3214bc = (uint)bVar2;
  return param_1;
}



undefined4 __cdecl FUN_5f313dd0(undefined4 param_1)

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

void FUN_5f313e30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_5f3213a0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_5f3214a4 = 0;
  _DAT_5f3214a8 = 0;
  _DAT_5f3214b0 = 0;
  _DAT_5f3214b4 = 0;
  _DAT_5f3214b8 = 0;
  return;
}



void FUN_5f313e60(void)

{
  FUN_5f313b60(-3);
  return;
}



LPSTR FUN_5f313e70(void)

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
  if (DAT_5f3214c4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_5f3214c4 = 2;
    }
    else {
      DAT_5f3214c4 = 1;
    }
  }
  if (DAT_5f3214c4 == 1) {
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
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_5f314280(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_5f3131b0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_5f3214c4 == 2) &&
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
    pCVar7 = (LPSTR)FUN_5f314280((uint)pCVar9);
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



undefined4 FUN_5f313fd0(void)

{
  undefined **ppuVar1;
  
  DAT_5f3226ec = HeapCreate(0,0x1000,0);
  if (DAT_5f3226ec == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_5f316290();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_5f3226ec);
    return 0;
  }
  return 1;
}



void FUN_5f314010(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_5f31dbe0;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_5f31dbe0);
  HeapDestroy(DAT_5f3226ec);
  return;
}



void __cdecl FUN_5f314050(undefined4 param_1)

{
  DAT_5f321248 = param_1;
  return;
}



void FUN_5f314060(void)

{
  if ((DAT_5f321244 == 1) || ((DAT_5f321244 == 0 && (DAT_5f321248 == 1)))) {
    FUN_5f3140a0(0xfc);
    if (DAT_5f3214c8 != (code *)0x0) {
      (*DAT_5f3214c8)();
    }
    FUN_5f3140a0(0xff);
  }
  return;
}



void __cdecl FUN_5f3140a0(int param_1)

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
  
  piVar2 = &DAT_5f31d780;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_5f31d810);
  if (param_1 == (&DAT_5f31d780)[iVar8 * 2]) {
    if ((DAT_5f321244 == 1) || ((DAT_5f321244 == 0 && (DAT_5f321248 == 1)))) {
      if ((DAT_5f322700 == 0) ||
         (hFile = *(HANDLE *)(DAT_5f322700 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x5f31d784);
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
      pcVar7 = *(char **)(iVar8 * 8 + 0x5f31d784);
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
      FUN_5f3169b0(acStack_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



void __cdecl FUN_5f314280(uint param_1)

{
  FUN_5f3142a0(param_1,DAT_5f321568);
  return;
}



int * __cdecl FUN_5f3142a0(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_5f3142f0(param_1);
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
      iVar2 = FUN_5f316270(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



int * __cdecl FUN_5f3142f0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_5f31fc04) {
    FUN_5f314400(9);
    piVar1 = FUN_5f3165f0(param_1 + 0xfU >> 4);
    FUN_5f314480(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = (int *)HeapAlloc(DAT_5f3226ec,0,dwBytes);
  return piVar1;
}



void FUN_5f314350(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d854);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d844);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d834);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d814);
  return;
}



void FUN_5f314380(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_5f31d810;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_5f31d854)) && (ppuVar1 != &PTR_DAT_5f31d844)) &&
       ((ppuVar1 != &PTR_DAT_5f31d834 && (ppuVar1 != &PTR_DAT_5f31d814)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_5f3131b0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x5f31d8d0);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d834);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d844);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d854);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_5f31d814);
  return;
}



void __cdecl FUN_5f314400(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_5f31d810)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_5f314280(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_5f314400(0x11);
    if ((&DAT_5f31d810)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_5f31d810)[param_1] = lpCriticalSection;
    }
    else {
      FUN_5f3131b0((undefined *)lpCriticalSection);
    }
    FUN_5f314480(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_5f31d810)[param_1]);
  return;
}



void __cdecl FUN_5f314480(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_5f31d810)[param_1]);
  return;
}



void __cdecl FUN_5f3144a0(uint param_1)

{
  if ((0x5f31fc8f < param_1) && (param_1 < 0x5f31fef1)) {
    FUN_5f314400(((int)(param_1 + 0xa0ce0370) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_5f3144e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_5f314400(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



void __cdecl FUN_5f314510(uint param_1)

{
  if ((0x5f31fc8f < param_1) && (param_1 < 0x5f31fef1)) {
    FUN_5f314480(((int)(param_1 + 0xa0ce0370) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_5f314550(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_5f314480(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



uint __cdecl FUN_5f314580(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  WCHAR local_2;
  
  uVar1 = (ushort)param_1;
  if (uVar1 == 0xffff) {
    return param_1;
  }
  if (DAT_5f321548 == 0) {
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if (uVar1 < 0x100) {
      uVar2 = FUN_5f316c20(param_1,1);
      if (uVar2 == 0) {
        return param_1 & 0xffff;
      }
    }
    uVar2 = FUN_5f315dd0(DAT_5f321548,0x100,(LPCWSTR)&param_1,(char *)0x1,&local_2,1,0);
    uVar3 = (undefined2)(uVar2 >> 0x10);
    param_1 = CONCAT22(uVar3,(undefined2)param_1);
    if (uVar2 != 0) {
      param_1 = CONCAT22(uVar3,local_2);
    }
  }
  return param_1;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 1998 Release

void __setdefaultprecision(void)

{
  FUN_5f317cb0((void *)0x10000,0x30000);
  return;
}



// WARNING: Removing unreachable block (ram,0x5f314661)

undefined4 FUN_5f314620(void)

{
  return 0;
}



void FUN_5f314670(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_5f314620();
  return;
}



void __cdecl FUN_5f3146a0(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_5f317ea0((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_5f320704 < 2) {
        uVar3 = (byte)PTR_DAT_5f320710[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_5f317e00((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_5f320708;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



undefined1 * __cdecl FUN_5f3147f0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int local_28 [4];
  char local_18 [24];
  
  FUN_5f3185f0(*param_1,param_1[1],local_28,local_18);
  FUN_5f318550(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_5f314870(param_2,param_3,param_4,local_28,'\0');
  return param_2;
}



undefined1 * __cdecl
FUN_5f314870(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_5 != '\0') {
    FUN_5f314bd0(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  if (0 < param_2) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_5f320708;
  }
  puVar3 = (undefined4 *)(puVar1 + param_2 + (uint)(param_5 == '\0'));
  *puVar3 = 0x30302b65;
  *(undefined2 *)(puVar3 + 1) = 0x30;
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar2 = param_4[1] + -1;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar2) {
      *(char *)((int)puVar3 + 2) =
           *(char *)((int)puVar3 + 2) +
           (((char)(iVar2 / 100) + (char)(iVar2 >> 0x1f)) -
           (char)((longlong)iVar2 * 0x51eb851f >> 0x3f));
      iVar2 = iVar2 % 100;
    }
    if (9 < iVar2) {
      *(char *)((int)puVar3 + 3) =
           *(char *)((int)puVar3 + 3) +
           (((char)(iVar2 / 10) + (char)(iVar2 >> 0x1f)) -
           (char)((longlong)iVar2 * 0x66666667 >> 0x3f));
      iVar2 = iVar2 % 10;
    }
    *(char *)(puVar3 + 1) = *(char *)(puVar3 + 1) + (char)iVar2;
  }
  return param_1;
}



char * __cdecl FUN_5f314970(undefined4 *param_1,char *param_2,uint param_3)

{
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_5f3185f0(*param_1,param_1[1],&local_28,local_18);
  FUN_5f318550(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_5f3149e0(param_2,param_3,&local_28,'\0');
  return param_2;
}



char * __cdecl FUN_5f3149e0(char *param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = param_3[1];
  uVar3 = iVar1 - 1;
  if ((param_4 != '\0') && (iVar2 = *param_3, uVar3 == param_2)) {
    param_1[uVar3 + (iVar2 == 0x2d)] = '0';
    param_1[iVar1 + (uint)(iVar2 == 0x2d)] = '\0';
  }
  pcVar4 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar4 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_5f314bd0(pcVar4,1);
    *pcVar4 = '0';
    pcVar4 = pcVar4 + 1;
  }
  else {
    pcVar4 = pcVar4 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_5f314bd0(pcVar4,1);
    *pcVar4 = DAT_5f320708;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
        param_2 = -iVar1;
      }
      FUN_5f314bd0(pcVar4 + 1,param_2);
      uVar3 = param_2 >> 2;
      pcVar4 = pcVar4 + 1;
      while (uVar3 != 0) {
        uVar3 = uVar3 - 1;
        builtin_strncpy(pcVar4,"0000",4);
        pcVar4 = pcVar4 + 4;
      }
      for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar4 = '0';
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  return param_1;
}



void __cdecl FUN_5f314aa0(undefined4 *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_5f3185f0(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_5f318550(pcVar3,param_3,(int)&local_28);
  local_24 = local_24 + -1;
  if ((-5 < local_24) && (local_24 < (int)param_3)) {
    if (iVar1 < local_24) {
      cVar2 = *pcVar3;
      while (cVar2 != '\0') {
        cVar2 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      }
      pcVar3[-1] = '\0';
    }
    FUN_5f3149e0(param_2,param_3,&local_28,'\x01');
    return;
  }
  FUN_5f314870(param_2,param_3,param_4,&local_28,'\x01');
  return;
}



void __cdecl FUN_5f314bd0(char *param_1,int param_2)

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
    FUN_5f318740((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return;
}



// Library Function - Single Match
//  __cintrindisp2
// 
// Library: Visual Studio

void __fastcall __cintrindisp2(undefined4 param_1,int param_2)

{
  __trandisp2(param_1,param_2);
  FUN_5f314cca();
  return;
}



// Library Function - Single Match
//  __cintrindisp1
// 
// Library: Visual Studio

void __fastcall __cintrindisp1(undefined4 param_1,int param_2)

{
  __trandisp1(param_1,param_2);
  FUN_5f314cca();
  return;
}



// Library Function - Single Match
//  __ctrandisp2
// 
// Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008

void __cdecl __ctrandisp2(uint param_1,int param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2(extraout_ECX,extraout_EDX);
  FUN_5f314cc3();
  return;
}



void FUN_5f314cc3(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_5f32124c != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_5f314d99;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_5f314d99;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_5f314d99;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_5f314d99:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_5f318a90((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}



void FUN_5f314cca(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  if (DAT_5f32124c != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if ((cVar1 != -1) && (cVar1 != -2)) {
      if (cVar1 == '\0') {
        return;
      }
      *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
      goto LAB_5f314d99;
    }
    uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    if (uVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 4;
      in_ST0 = (float10)fscale(in_ST0,(float10)1536.0);
      if (ABS(in_ST0) < (float10)2.2250738585072014e-308) {
        in_ST0 = in_ST0 * (float10)0.0;
      }
      goto LAB_5f314d99;
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)-1536.0);
      if ((float10)1.7976931348623157e+308 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)INFINITY;
      }
      goto LAB_5f314d99;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_5f314d99:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_5f318a90((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),(int *)(unaff_EBP + -0x8e),
               (ushort *)(unaff_EBP + -0xa4));
  return;
}



// Library Function - Single Match
//  __ctrandisp1
// 
// Library: Visual Studio

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_5f314cc3();
  return;
}



// Library Function - Single Match
//  __fload
// 
// Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008

float10 __cdecl __fload(uint param_1,int param_2)

{
  float10 fVar1;
  
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    fVar1 = (float10)CONCAT28(param_2._2_2_ | 0x7fff,
                              CONCAT44(param_2 << 0xb | param_1 >> 0x15,param_1));
  }
  else {
    fVar1 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  return fVar1;
}



// Library Function - Single Match
//  __trandisp1
// 
// Library: Visual Studio

void __fastcall __trandisp1(undefined4 param_1,int param_2)

{
  float10 fVar1;
  byte bVar2;
  undefined2 uVar3;
  int unaff_EBP;
  float10 in_ST0;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar3 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar3 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar3;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  bVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    // WARNING: Could not recover jumptable at 0x5f314ed5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_2 + (char)(&DAT_5f31da6c)[(byte)((bVar2 & 7) << 1 | (char)bVar2 < '\0')] + 0x10
              ))();
  return;
}



// Library Function - Single Match
//  __trandisp2
// 
// Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008

void __fastcall __trandisp2(undefined4 param_1,int param_2)

{
  float10 fVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int unaff_EBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*(undefined2 *)(unaff_EBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *(undefined2 *)(unaff_EBP + -0xa2) = uVar4;
  fVar1 = (float10)0;
  *(int *)(unaff_EBP + -0x94) = param_2;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar1) << 9 | (ushort)(in_ST0 != fVar1) << 10 |
       (ushort)(in_ST0 == fVar1) << 0xe;
  *(undefined1 *)(unaff_EBP + -0x90) = 0;
  fVar1 = (float10)0;
  *(ushort *)(unaff_EBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar1) << 9 | (ushort)(in_ST1 != fVar1) << 10 |
       (ushort)(in_ST1 == fVar1) << 0xe;
  bVar3 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
  cVar2 = (char)(*(char *)(unaff_EBP + -0x9f) << 1) >> 1;
                    // WARNING: Could not recover jumptable at 0x5f314f61. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_2 + (char)((&DAT_5f31da6c)[(byte)(cVar2 << 1 | cVar2 < '\0') & 0xf] |
                               (&DAT_5f31da6c)[(byte)((bVar3 & 7) << 1 | (char)bVar3 < '\0')] << 2)
              + 0x10))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __cdecl FUN_5f315846(undefined4 param_1,uint param_2,ushort param_3)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 in_stack_0000001c;
  undefined2 in_stack_00000020;
  undefined2 in_stack_00000022;
  ushort in_stack_00000024;
  
  if ((((((CONCAT22(param_3,param_2._2_2_) ^ 0x700) & 0x700) == 0) &&
       ((&DAT_5f31da9c)[(param_2._2_2_ & 0x7800) >> 0xb] != '\0')) && ((param_3 & 0x7fff) != 0x7fff)
      ) && ((((in_stack_00000024 & 0x7fff) != 0 && ((in_stack_00000024 & 0x7fff) != 0x7fff)) &&
            (((CONCAT22(in_stack_00000022,in_stack_00000020) & 0x7fffffff) == 0 &&
             ((param_2 & 0x7fffffff) == 0)))))) {
    if ((ushort)((param_3 & 0x7fff) + 0x3f) < (in_stack_00000024 & 0x7fff)) {
      iVar1 = ((in_stack_00000024 & 0x7fff) - (param_3 & 0x7fff) & 0x3f | 0x20) + 1;
      fVar3 = ABS((float10)CONCAT28(in_stack_00000024 & 0x7fff | param_3 & 0x8000,
                                    CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))));
      fVar2 = ABS((float10)CONCAT28(in_stack_00000024,
                                    CONCAT26(in_stack_00000022,
                                             CONCAT24(in_stack_00000020,in_stack_0000001c))));
      do {
        if (fVar3 <= fVar2) {
          fVar2 = fVar2 - fVar3;
        }
        fVar3 = fVar3 * (float10)_DAT_5f31dacc;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      while (-1 < (int)((in_stack_00000024 & 0x7fff) - ((param_3 & 0x7fff) + 10))) {
        fVar2 = (float10)CONCAT28(in_stack_00000024,
                                  CONCAT26(in_stack_00000022,
                                           CONCAT24(in_stack_00000020,in_stack_0000001c)));
        fVar3 = (float10)CONCAT28((in_stack_00000024 & 0x7fff) -
                                  ((in_stack_00000024 & 0x7fff) - param_3 & 7 | 4) |
                                  param_3 & 0x8000,
                                  CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)));
        fVar2 = fVar2 - (fVar2 / fVar3) * fVar3;
        in_stack_0000001c = SUB104(fVar2,0);
        in_stack_00000020 = (undefined2)((unkuint10)fVar2 >> 0x20);
        in_stack_00000022 = (undefined2)((unkuint10)fVar2 >> 0x30);
        in_stack_00000024 = (ushort)((unkuint10)fVar2 >> 0x40);
      }
    }
  }
  return in_EAX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float10 FUN_5f315a4c(void)

{
  float10 in_ST0;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 in_ST1;
  uint uVar2;
  float10 fVar1;
  
  uVar2 = (uint)((unkuint10)in_ST1 >> 0x20);
  if (((unkuint10)in_ST1 & 0) != 0) {
    FUN_5f315846(SUB104(in_ST1,0),uVar2,(ushort)((unkuint10)in_ST1 >> 0x40));
    return extraout_ST0;
  }
  if (SUB104(in_ST1,0) != 0 || uVar2 != 0) {
    fVar1 = in_ST1 * (float10)_DAT_5f31dab4;
    FUN_5f315846(SUB104(fVar1,0),(uint)((unkuint10)fVar1 >> 0x20),(ushort)((unkuint10)fVar1 >> 0x40)
                );
    return extraout_ST0_00;
  }
  return in_ST0 - (in_ST0 / in_ST1) * in_ST1;
}



uint __cdecl
FUN_5f315dd0(LCID param_1,uint param_2,LPCWSTR param_3,char *param_4,LPWSTR param_5,size_t param_6,
            UINT param_7)

{
  int iVar1;
  char *cchWideChar;
  uint uVar2;
  LPCSTR lpMultiByteStr;
  uint cchDest;
  
  if (DAT_5f32155c == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_5f32155c = 2;
    }
    else {
      DAT_5f32155c = 1;
    }
  }
  cchWideChar = param_4;
  if (0 < (int)param_4) {
    cchWideChar = (char *)FUN_5f315fe0(param_3,(int)param_4);
  }
  if (DAT_5f32155c == 1) {
    uVar2 = LCMapStringW(param_1,param_2,param_3,(int)cchWideChar,param_5,param_6);
    return uVar2;
  }
  if (DAT_5f32155c != 2) {
    return DAT_5f32155c;
  }
  param_4 = (char *)0x0;
  if (param_7 == 0) {
    param_7 = DAT_5f321558;
  }
  uVar2 = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,(LPSTR)0x0,0,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (uVar2 == 0) {
    return 0;
  }
  lpMultiByteStr = (LPCSTR)FUN_5f314280(uVar2);
  if (lpMultiByteStr == (LPCSTR)0x0) {
    return 0;
  }
  iVar1 = WideCharToMultiByte(param_7,0x220,param_3,(int)cchWideChar,lpMultiByteStr,uVar2,
                              (LPCSTR)0x0,(LPBOOL)0x0);
  if ((((iVar1 != 0) &&
       (cchDest = LCMapStringA(param_1,param_2,lpMultiByteStr,uVar2,(LPSTR)0x0,0), cchDest != 0)) &&
      (param_4 = (char *)FUN_5f314280(cchDest), param_4 != (char *)0x0)) &&
     (iVar1 = LCMapStringA(param_1,param_2,lpMultiByteStr,uVar2,param_4,cchDest), iVar1 != 0)) {
    if ((param_2 & 0x400) == 0) {
      if (param_6 == 0) {
        cchDest = MultiByteToWideChar(param_7,1,param_4,cchDest,(LPWSTR)0x0,0);
      }
      else {
        cchDest = MultiByteToWideChar(param_7,1,param_4,cchDest,param_5,param_6);
      }
      if (cchDest == 0) goto LAB_5f315fba;
    }
    else if (param_6 != 0) {
      if ((int)cchDest <= (int)param_6) {
        param_6 = cchDest;
      }
      _strncpy((char *)param_5,param_4,param_6);
    }
    FUN_5f3131b0(lpMultiByteStr);
    FUN_5f3131b0(param_4);
    return cchDest;
  }
LAB_5f315fba:
  FUN_5f3131b0(lpMultiByteStr);
  FUN_5f3131b0(param_4);
  return 0;
}



int __cdecl FUN_5f315fe0(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      if (*psVar1 == 0) goto LAB_5f316009;
      psVar1 = psVar1 + 1;
    } while (iVar2 != 0);
  }
  if (*psVar1 != 0) {
    return param_2;
  }
LAB_5f316009:
  return (int)psVar1 - (int)param_1 >> 1;
}



int __cdecl
FUN_5f316020(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_5f321560 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_5f321560 = 1;
    }
    else {
      DAT_5f321560 = 2;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_5f316240(param_3,(int)param_4);
  }
  if (DAT_5f321560 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_5f321560 != 1) {
    return DAT_5f321560;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_5f321558;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_5f314280(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_5f314280(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_5f31621f;
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
      if (param_6 == 0) goto LAB_5f316184;
      if (param_6 < iVar2) goto LAB_5f31621f;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_5f316184:
      FUN_5f3131b0((undefined *)lpWideCharStr);
      FUN_5f3131b0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_5f31621f:
  FUN_5f3131b0((undefined *)lpWideCharStr);
  FUN_5f3131b0((undefined *)param_4);
  return 0;
}



int __cdecl FUN_5f316240(char *param_1,int param_2)

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



undefined4 __cdecl FUN_5f316270(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5f321564 != (code *)0x0) {
    iVar1 = (*DAT_5f321564)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



undefined ** FUN_5f316290(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_5f31dbf0 == -1) {
    lpMem = &PTR_LOOP_5f31dbe0;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_5f3226ec,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_5f31dbe0) {
        if (PTR_LOOP_5f31dbe0 == (undefined *)0x0) {
          PTR_LOOP_5f31dbe0 = (undefined *)&PTR_LOOP_5f31dbe0;
        }
        if (PTR_PTR_LOOP_5f31dbe4 == (undefined *)0x0) {
          PTR_PTR_LOOP_5f31dbe4 = (undefined *)&PTR_LOOP_5f31dbe0;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_5f31dbe0;
        lpMem[1] = PTR_PTR_LOOP_5f31dbe4;
        PTR_PTR_LOOP_5f31dbe4 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_5f31dbe0) {
    HeapFree(DAT_5f3226ec,0,lpMem);
  }
  return (undefined **)0x0;
}



void __cdecl FUN_5f316400(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_PTR_LOOP_5f31fc00 == param_1) {
    PTR_PTR_LOOP_5f31fc00 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_5f31dbe0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_5f3226ec,0,param_1);
    return;
  }
  DAT_5f31dbf0 = 0xffffffff;
  return;
}



void __cdecl FUN_5f316460(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_PTR_LOOP_5f31dbe4;
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
            DAT_5f32156c = DAT_5f32156c + -1;
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
          FUN_5f316400(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_PTR_LOOP_5f31dbe4) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_5f316530(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_5f31dbe0;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_5f31dbe0) {
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



void __cdecl FUN_5f316590(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_5f32156c = DAT_5f32156c + 1, DAT_5f32156c == 0x20)) {
    FUN_5f316460(0x10);
  }
  return;
}



int * __cdecl FUN_5f3165f0(uint param_1)

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
  
  local_4 = (int *)PTR_PTR_LOOP_5f31fc00;
  do {
    if (local_4[4] != -1) {
      puVar10 = (uint *)local_4[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      for (; puVar10 < local_4 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_5f316830(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_5f31fc00 = (undefined *)local_4;
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
          piVar5 = (int *)FUN_5f316830(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_5f31fc00 = (undefined *)local_4;
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
  } while (local_4 != (int *)PTR_PTR_LOOP_5f31fc00);
  ppuVar7 = &PTR_LOOP_5f31dbe0;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_5f31dbe0) {
      ppuVar7 = FUN_5f316290();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)ppuVar7[4];
      *(char *)(piVar8 + 2) = (char)param_1;
      PTR_PTR_LOOP_5f31fc00 = (undefined *)ppuVar7;
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
  PTR_PTR_LOOP_5f31fc00 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar6);
  *(char *)(piVar8 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar8[1] = piVar8[1] - param_1;
  *piVar8 = (int)piVar8 + param_1 + 8;
  return piVar8 + 0x40;
}



int __cdecl FUN_5f316830(int *param_1,uint param_2,uint param_3)

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
            goto LAB_5f31697f;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_5f316986;
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
LAB_5f31697f:
            param_1[1] = 0;
          }
LAB_5f316986:
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



int __cdecl FUN_5f3169b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_5f321570 != (FARPROC)0x0) {
LAB_5f316a00:
    if (DAT_5f321574 != (FARPROC)0x0) {
      iVar1 = (*DAT_5f321574)();
    }
    if ((iVar1 != 0) && (DAT_5f321578 != (FARPROC)0x0)) {
      iVar1 = (*DAT_5f321578)(iVar1);
    }
    iVar1 = (*DAT_5f321570)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_5f321570 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_5f321570 != (FARPROC)0x0) {
      DAT_5f321574 = GetProcAddress(hModule,"GetActiveWindow");
      DAT_5f321578 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_5f316a00;
    }
  }
  return 0;
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
        goto joined_r0x5f316a7e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_5f316abb;
        goto LAB_5f316b29;
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
joined_r0x5f316b25:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_5f316b29:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_5f316abb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x5f316b25;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x5f316b25;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x5f316b25;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x5f316a7e:
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
LAB_5f316abb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



uint __cdecl FUN_5f316c20(uint param_1,uint param_2)

{
  BOOL BVar1;
  uint local_4;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  if ((ushort)param_1 < 0x100) {
    local_4 = (uint)*(ushort *)(PTR_DAT_5f320714 + (param_1 & 0xffff) * 2);
  }
  else {
    if (DAT_5f321548 == 0) {
      return 0;
    }
    BVar1 = FUN_5f318dd0(1,(LPCWSTR)&param_1,1,(LPWORD)&local_4,0,0);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_2 & 0xffff & local_4 & 0xffff;
}



uint __cdecl FUN_5f316d40(char *param_1)

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
  
  uVar40 = (uint)DAT_5f3215be;
  pcVar44 = (char *)(uint)DAT_5f3215c0;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_5f319090(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_5f319090(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_5f319090(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_5f319090(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_5f319090(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_5f319090(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_5f319090(1,uVar40,0x37,param_1);
  uVar8 = FUN_5f319090(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_5f319090(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_5f319090(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_5f319090(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_5f319090(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_5f319090(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_5f319090(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_5f319090(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_5f319090(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_5f319090(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_5f319090(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_5f319090(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_5f319090(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_5f319090(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_5f319090(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_5f319090(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_5f319090(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_5f319090(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_5f319090(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_5f319090(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_5f319090(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_5f319090(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_5f319090(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_5f319090(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_5f319090(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_5f319090(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_5f319090(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_5f319090(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_5f319090(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_5f319090(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_5f319090(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_5f319090(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_5f319090(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_5f319090(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_5f319090(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_5f317300(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



void __cdecl FUN_5f3170c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_5f3131b0((undefined *)param_1[1]);
    FUN_5f3131b0((undefined *)param_1[2]);
    FUN_5f3131b0((undefined *)param_1[3]);
    FUN_5f3131b0((undefined *)param_1[4]);
    FUN_5f3131b0((undefined *)param_1[5]);
    FUN_5f3131b0((undefined *)param_1[6]);
    FUN_5f3131b0((undefined *)*param_1);
    FUN_5f3131b0((undefined *)param_1[8]);
    FUN_5f3131b0((undefined *)param_1[9]);
    FUN_5f3131b0((undefined *)param_1[10]);
    FUN_5f3131b0((undefined *)param_1[0xb]);
    FUN_5f3131b0((undefined *)param_1[0xc]);
    FUN_5f3131b0((undefined *)param_1[0xd]);
    FUN_5f3131b0((undefined *)param_1[7]);
    FUN_5f3131b0((undefined *)param_1[0xe]);
    FUN_5f3131b0((undefined *)param_1[0xf]);
    FUN_5f3131b0((undefined *)param_1[0x10]);
    FUN_5f3131b0((undefined *)param_1[0x11]);
    FUN_5f3131b0((undefined *)param_1[0x12]);
    FUN_5f3131b0((undefined *)param_1[0x13]);
    FUN_5f3131b0((undefined *)param_1[0x14]);
    FUN_5f3131b0((undefined *)param_1[0x15]);
    FUN_5f3131b0((undefined *)param_1[0x16]);
    FUN_5f3131b0((undefined *)param_1[0x17]);
    FUN_5f3131b0((undefined *)param_1[0x18]);
    FUN_5f3131b0((undefined *)param_1[0x19]);
    FUN_5f3131b0((undefined *)param_1[0x1a]);
    FUN_5f3131b0((undefined *)param_1[0x1b]);
    FUN_5f3131b0((undefined *)param_1[0x1c]);
    FUN_5f3131b0((undefined *)param_1[0x1d]);
    FUN_5f3131b0((undefined *)param_1[0x1e]);
    FUN_5f3131b0((undefined *)param_1[0x1f]);
    FUN_5f3131b0((undefined *)param_1[0x20]);
    FUN_5f3131b0((undefined *)param_1[0x21]);
    FUN_5f3131b0((undefined *)param_1[0x22]);
    FUN_5f3131b0((undefined *)param_1[0x23]);
    FUN_5f3131b0((undefined *)param_1[0x24]);
    FUN_5f3131b0((undefined *)param_1[0x25]);
    FUN_5f3131b0((undefined *)param_1[0x26]);
    FUN_5f3131b0((undefined *)param_1[0x27]);
    FUN_5f3131b0((undefined *)param_1[0x28]);
    FUN_5f3131b0((undefined *)param_1[0x29]);
    FUN_5f3131b0((undefined *)param_1[0x2a]);
  }
  return;
}



uint __cdecl FUN_5f317300(char *param_1,int param_2)

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
  uVar3 = FUN_5f319090(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_5f319090(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_5f319090(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined1 *)FUN_5f314280(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_5f31739c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_5f31739c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_5f31739c:
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
  FUN_5f3131b0(param_1);
  return 0;
}



void __cdecl FUN_5f317600(char *param_1)

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
      if (cVar2 != ';') goto LAB_5f317616;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_5f317616:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



uint __cdecl FUN_5f317730(int param_1)

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
  
  uVar15 = (uint)DAT_5f3215b4;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_5f319090(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_5f319090(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_5f319090(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_5f319090(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_5f319090(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_5f317600(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_5f319090(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_5f319090(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_5f319090(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_5f319090(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_5f319090(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_5f319090(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_5f319090(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_5f319090(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_5f319090(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_5f319090(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



void __cdecl FUN_5f317880(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_5f3215e0)) {
    FUN_5f3131b0(*(undefined **)(param_1 + 0xc));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x10));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x14));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x18));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x1c));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x20));
    FUN_5f3131b0(*(undefined **)(param_1 + 0x24));
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



uint __thiscall FUN_5f317c70(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_5f317cd0(local_8);
  FUN_5f317d70();
  return param_2 & param_1 | ~param_2 & uVar1;
}



void __cdecl FUN_5f317cb0(void *param_1,uint param_2)

{
  FUN_5f317c70(param_1,(uint)param_1,param_2 & 0xfff7ffff);
  return;
}



uint __cdecl FUN_5f317cd0(uint param_1)

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



void FUN_5f317d70(void)

{
  return;
}



uint __cdecl FUN_5f317e00(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_5f320710 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_5f320710[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_5f318f60(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



uint __cdecl FUN_5f317ea0(uint param_1)

{
  bool bVar1;
  
  if (DAT_5f321548 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_5f3226e8);
    bVar1 = DAT_5f3226e4 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_5f3226e8);
      FUN_5f314400(0x13);
    }
    param_1 = FUN_5f317f30(param_1);
    if (bVar1) {
      FUN_5f314480(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_5f3226e8);
  }
  return param_1;
}



uint __cdecl FUN_5f317f30(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_5f321548 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_5f320704 < 2) {
        uVar2 = (byte)PTR_DAT_5f320710[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_5f317e00(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_5f320710[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_5f316020(DAT_5f321548,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0);
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



undefined4 __cdecl FUN_5f318030(int param_1,int param_2)

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



void __cdecl FUN_5f3180a0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  iVar2 = FUN_5f319580(*(uint *)(param_1 + iVar3 * 4),
                       1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                            0x1f),(uint *)(param_1 + iVar3 * 4));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    puVar4 = (uint *)(param_1 + iVar3 * 4);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_5f319580(*puVar4,1,puVar4);
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}



undefined4 __cdecl FUN_5f318110(int param_1,int param_2)

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
     (iVar1 = FUN_5f318030(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_5f3180a0(param_1,param_2 + -1);
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



void __cdecl FUN_5f3181b0(int param_1,undefined4 *param_2)

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



void __cdecl FUN_5f3181d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 __cdecl FUN_5f3181e0(int *param_1)

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



void __cdecl FUN_5f318200(uint *param_1,int param_2)

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



undefined4 __cdecl FUN_5f3182c0(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_5f3181e0((int *)&local_18);
    if (iVar2 == 0) {
      FUN_5f3181d0(&local_18);
      uVar3 = 2;
      goto LAB_5f318441;
    }
  }
  else {
    FUN_5f3181b0((int)local_c,&local_18);
    iVar2 = FUN_5f318110((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_5f3181d0(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_5f318441;
    }
    if (iVar5 <= iVar2) {
      FUN_5f3181b0((int)&local_18,local_c);
      FUN_5f318200(&local_18,iVar2 - iVar5);
      FUN_5f318110((int)&local_18,param_3[2]);
      FUN_5f318200(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_5f318441;
    }
    if (*param_3 <= iVar5) {
      FUN_5f3181d0(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_5f318200(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_5f318441;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_5f318200(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_5f318441:
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



void __cdecl FUN_5f318490(ushort *param_1,uint *param_2)

{
  FUN_5f3182c0(param_1,param_2,(int *)&DAT_5f320920);
  return;
}



void __cdecl FUN_5f3184b0(ushort *param_1,uint *param_2)

{
  FUN_5f3182c0(param_1,param_2,(int *)&DAT_5f320938);
  return;
}



void __cdecl FUN_5f3184d0(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_5f319780(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_5f318490(local_c,param_1);
  return;
}



void __cdecl FUN_5f318510(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_5f319780(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_5f3184b0(local_c,param_1);
  return;
}



void __cdecl FUN_5f318550(char *param_1,int param_2,int param_3)

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



int * __cdecl FUN_5f3185f0(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar7;
  uint local_28;
  uint local_24;
  undefined2 local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  uVar7 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_5f318680(&local_28,&param_1);
  iVar2 = FUN_5f319f10(local_28,local_24,CONCAT22(uVar7,local_20),0x11,0,&local_1c);
  param_3[2] = iVar2;
  param_3[1] = (int)local_1c;
  *param_3 = (int)local_1a;
  uVar3 = 0xffffffff;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = param_4;
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
  param_3[3] = (int)param_4;
  return param_3;
}



void __cdecl FUN_5f318680(uint *param_1,uint *param_2)

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



undefined4 * __cdecl FUN_5f318740(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_5f3188f7_caseD_2;
        case 3:
          goto switchD_5f3188f7_caseD_3;
        }
        goto switchD_5f3188f7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_5f3188f7_caseD_0;
      case 1:
        goto switchD_5f3188f7_caseD_1;
      case 2:
        goto switchD_5f3188f7_caseD_2;
      case 3:
        goto switchD_5f3188f7_caseD_3;
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
              goto switchD_5f3188f7_caseD_2;
            case 3:
              goto switchD_5f3188f7_caseD_3;
            }
            goto switchD_5f3188f7_caseD_1;
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
              goto switchD_5f3188f7_caseD_2;
            case 3:
              goto switchD_5f3188f7_caseD_3;
            }
            goto switchD_5f3188f7_caseD_1;
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
              goto switchD_5f3188f7_caseD_2;
            case 3:
              goto switchD_5f3188f7_caseD_3;
            }
            goto switchD_5f3188f7_caseD_1;
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
switchD_5f3188f7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_5f3188f7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_5f3188f7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_5f3188f7_caseD_0:
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
        goto switchD_5f318775_caseD_2;
      case 3:
        goto switchD_5f318775_caseD_3;
      }
      goto switchD_5f318775_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_5f318775_caseD_0;
    case 1:
      goto switchD_5f318775_caseD_1;
    case 2:
      goto switchD_5f318775_caseD_2;
    case 3:
      goto switchD_5f318775_caseD_3;
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
            goto switchD_5f318775_caseD_2;
          case 3:
            goto switchD_5f318775_caseD_3;
          }
          goto switchD_5f318775_caseD_1;
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
            goto switchD_5f318775_caseD_2;
          case 3:
            goto switchD_5f318775_caseD_3;
          }
          goto switchD_5f318775_caseD_1;
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
            goto switchD_5f318775_caseD_2;
          case 3:
            goto switchD_5f318775_caseD_3;
          }
          goto switchD_5f318775_caseD_1;
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
switchD_5f318775_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_5f318775_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_5f318775_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_5f318775_caseD_0:
  return param_1;
}



void __cdecl FUN_5f318a90(uint param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint local_58 [10];
  int local_30;
  int local_2c;
  uint local_20;
  
  param_3 = (ushort *)(uint)*param_3;
  switch(*param_2) {
  case 1:
  case 5:
    uVar3 = 8;
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 0x11;
    break;
  case 4:
    uVar3 = 0x12;
    break;
  default:
    goto switchD_5f318aaf_caseD_6;
  case 7:
    *param_2 = 1;
    goto switchD_5f318aaf_caseD_6;
  case 8:
    uVar3 = 0x10;
  }
  bVar1 = FUN_5f31a5e0(uVar3,(double *)(param_2 + 6),(uint)param_3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_30 = param_2[4];
      local_20 = local_20 & 0xffffffe3 | 3;
      local_2c = param_2[5];
    }
    else {
      local_20 = local_20 & 0xfffffffe;
    }
    FUN_5f31a2a0(local_58,(uint *)&param_3,(byte)uVar3,param_1,(uint *)(param_2 + 2),
                 (uint *)(param_2 + 6));
  }
switchD_5f318aaf_caseD_6:
  FUN_5f31a970();
  iVar2 = 0;
  if ((*param_2 != 8) && (DAT_5f320b18 == 0)) {
    iVar2 = DllUnregisterServer();
  }
  if (iVar2 == 0) {
    FUN_5f31a910(*param_2);
  }
  return;
}



BOOL __cdecl
FUN_5f318dd0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_5f3215c4 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_5f3215c4 = 2;
    }
    else {
      DAT_5f3215c4 = 1;
    }
  }
  if (DAT_5f3215c4 != 1) {
    local_4 = DAT_5f3215c4;
    if (DAT_5f3215c4 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_5f321558;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_5f313100(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_5f314280(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_5f321548;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_5f318740((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_5f3131b0((undefined *)lpMultiByteStr);
      FUN_5f3131b0((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



BOOL __cdecl
FUN_5f318f60(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_5f3215c8 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_5f3215c8 = 1;
    }
    else {
      DAT_5f3215c8 = 2;
    }
  }
  if (DAT_5f3215c8 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_5f321548;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_5f3215c8;
  if (DAT_5f3215c8 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_5f321558;
    }
    iVar2 = MultiByteToWideChar(param_5,9,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_5f313100(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_5f3131b0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_5f3131b0((undefined *)lpWideCharStr);
  }
  return param_6;
}



undefined4 __cdecl FUN_5f319090(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

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
    iVar5 = FUN_5f319240(param_2,param_3,(LPWSTR)&DAT_5f3215d8,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_5f3215d8;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_5f320704 < 2) {
          uVar3 = (byte)PTR_DAT_5f320710[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_5f317e00((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x5f3215df < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_5f319370(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_5f319370(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_5f314280(uVar3), _Source == (LPSTR)0x0)) goto LAB_5f319140;
    bVar2 = true;
    uVar3 = FUN_5f319370(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_5f319140;
  }
  _Dest = (char *)FUN_5f314280(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_5f3131b0(_Source);
    return 0;
  }
LAB_5f319140:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_5f3131b0(_Source);
  return 0xffffffff;
}



int __cdecl FUN_5f319240(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_5f3215e4 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_5f3215e4 = 2;
    }
    else {
      DAT_5f3215e4 = 1;
    }
  }
  if (DAT_5f3215e4 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_5f3215e4 != 2) {
    return DAT_5f3215e4;
  }
  if (param_5 == 0) {
    param_5 = DAT_5f321558;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_5f314280(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_5f3131b0(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_5f3131b0(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_5f3131b0(lpLCData);
    return 0;
  }
  return 0;
}



int __cdecl FUN_5f319370(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_5f3215e8 == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_5f3215e8 = 1;
    }
    else {
      DAT_5f3215e8 = 2;
    }
  }
  if (DAT_5f3215e8 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_5f3215e8 != 1) {
    return DAT_5f3215e8;
  }
  if (param_5 == 0) {
    param_5 = DAT_5f321558;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_5f314280(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_5f3131b0((undefined *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_5f3131b0((undefined *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_5f3131b0((undefined *)lpLCData);
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl FUN_5f3194b0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = _DAT_5f3226e8;
  if (DAT_5f321548 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_5f3194fe;
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
LAB_5f3194fe:
    uVar6 = (uint)(char)bVar5;
  }
  else {
    LOCK();
    _DAT_5f3226e8 = _DAT_5f3226e8 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_5f3226e4;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_5f3226e8 = iVar2;
      FUN_5f314400(0x13);
    }
    uVar8 = (uint)bVar1;
    uVar6 = 0xff;
    uVar7 = 0;
    do {
      do {
        if ((char)uVar6 == '\0') goto LAB_5f31955f;
        bVar5 = *param_2;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar7 = FUN_5f317f30(uVar7);
      uVar6 = FUN_5f317f30(uVar6);
    } while ((byte)uVar7 == (byte)uVar6);
    uVar7 = (uint)((byte)uVar7 < (byte)uVar6);
    uVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
LAB_5f31955f:
    if (uVar8 == 0) {
      LOCK();
      _DAT_5f3226e8 = _DAT_5f3226e8 + -1;
      UNLOCK();
    }
    else {
      FUN_5f314480(0x13);
    }
  }
  return uVar6;
}



undefined4 __cdecl FUN_5f319580(uint param_1,uint param_2,uint *param_3)

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



void __cdecl FUN_5f3195b0(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_5f319580(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_5f319580(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_5f319580(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_5f319580(param_1[2],param_2[2],param_1 + 2);
  return;
}



void __cdecl FUN_5f319620(uint *param_1)

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



void __cdecl FUN_5f319650(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



void __cdecl FUN_5f319680(char *param_1,int param_2,uint *param_3)

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
      FUN_5f319620(puVar2);
      FUN_5f319620(puVar2);
      FUN_5f3195b0(puVar2,&local_c);
      FUN_5f319620(puVar2);
      local_c = (uint)*param_1;
      local_8 = 0;
      local_4 = 0;
      FUN_5f3195b0(puVar2,&local_c);
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
    FUN_5f319620(puVar2);
    sVar3 = sVar3 + -1;
    uVar1 = puVar2[2];
  }
  *(short *)((int)puVar2 + 10) = sVar3;
  return;
}



undefined4 __cdecl
FUN_5f319780(ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
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
  uVar7 = 0;
  local_4c = 1;
  local_54 = 0;
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  bVar5 = false;
  bVar6 = false;
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
        goto LAB_5f319c52;
      }
      if (bVar10 == DAT_5f320708) {
        iVar8 = 5;
      }
      else if (bVar10 == 0x2b) {
        iVar8 = 2;
        uVar7 = 0;
      }
      else if (bVar10 == 0x2d) {
        iVar8 = 2;
        uVar7 = 0x8000;
      }
      else {
        if (bVar10 != 0x30) goto switchD_5f319a42_caseD_2c;
        iVar8 = 1;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_5f319c52;
      }
      if (bVar10 == DAT_5f320708) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_5f319a42_caseD_2b;
        default:
          goto switchD_5f319a42_caseD_2c;
        case 0x30:
switchD_5f3198b6_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_5f319a42_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_5f319c52;
      }
      if (bVar10 == DAT_5f320708) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_5f3198b6_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_5f320704 < 2) {
          uVar9 = (byte)PTR_DAT_5f320710[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_5f317e00((uint)param_3 & 0xff,4);
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
      if (bVar10 != DAT_5f320708) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_5f319a42_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_5f319a42_caseD_44;
        }
switchD_5f319a42_caseD_2c:
        iVar8 = 10;
        goto LAB_5f319c52;
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
        if (DAT_5f320704 < 2) {
          uVar9 = (byte)PTR_DAT_5f320710[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_5f317e00((uint)param_3 & 0xff,4);
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
switchD_5f319a42_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_5f319a42_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_5f319a42_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_5f320704 < 2) {
        uVar9 = (byte)PTR_DAT_5f320710[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_5f317e00((uint)bVar10,4);
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
        goto LAB_5f319c52;
      }
      if (bVar10 == 0x2b) {
LAB_5f319c46:
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_5f319b36;
LAB_5f319c37:
        iVar8 = 7;
        local_4c = -1;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_5f319c52;
      }
LAB_5f319b36:
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
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_5f319a42_caseD_2c;
      iVar8 = 9;
LAB_5f319c52:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_5f320704 < 2) {
          uVar13 = (byte)PTR_DAT_5f320710[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_5f317e00((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_5f319bba;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_48 = 0x1451;
LAB_5f319bba:
      while( true ) {
        if (DAT_5f320704 < 2) {
          uVar13 = (byte)PTR_DAT_5f320710[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_5f317e00((uint)param_3 & 0xff,4);
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
      if (param_7 == 0) goto switchD_5f319a42_caseD_2c;
      if (bVar10 == 0x2b) goto LAB_5f319c46;
      if (bVar10 == 0x2d) goto LAB_5f319c37;
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
      goto LAB_5f319d24;
    }
    cVar1 = local_5c[-1];
    while (cVar1 == '\0') {
      uVar13 = uVar13 - 1;
      local_60 = local_60 + 1;
      cVar1 = local_5c[-2];
      local_5c = local_5c + -1;
    }
    FUN_5f319680(local_1c,uVar13,(uint *)&local_2c);
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
        FUN_5f31b270((int *)&local_2c,uVar13,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,uStack_2a);
        param_3 = local_26;
        goto LAB_5f319d24;
      }
      bVar6 = true;
    }
    else {
      bVar5 = true;
    }
  }
  local_2c = (ushort)param_3;
  pbVar11 = param_3;
  local_22 = local_2c;
LAB_5f319d24:
  if (bVar2) {
    if (bVar5) {
      pbVar11 = (byte *)0x0;
      local_22 = 0x7fff;
      param_3 = (byte *)0x80000000;
      local_2c = 0;
      local_30 = 2;
    }
    else if (bVar6) {
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
  param_1[5] = local_22 | uVar7;
  return local_30;
}



undefined4 __cdecl
FUN_5f319f10(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
LAB_5f31a11f:
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
  FUN_5f31b270((int *)&local_10,-(int)sVar10,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar10 = sVar10 + 1;
    FUN_5f31afb0((int *)&local_10,(int *)&local_1c);
  }
  *psVar1 = sVar10;
  iVar9 = param_4;
  if (((param_5 & 1) != 0) && (iVar9 = param_4 + sVar10, param_4 + sVar10 < 1)) {
    *psVar1 = 0;
    goto LAB_5f31a11f;
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
    FUN_5f319620((uint *)&local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar11 < 0) {
    for (uVar5 = -iVar11 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_5f319650((uint *)&local_10);
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
      FUN_5f319620((uint *)&local_10);
      FUN_5f319620((uint *)&local_10);
      FUN_5f3195b0((uint *)&local_10,&param_1);
      FUN_5f319620((uint *)&local_10);
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
      if (psVar1 <= psVar8) goto LAB_5f31a276;
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
      goto LAB_5f31a276;
    }
  }
  psVar8 = (short *)((int)psVar8 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar8 = *(char *)psVar8 + '\x01';
LAB_5f31a276:
  cVar4 = ((char)psVar8 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar4;
  *(undefined1 *)((int)param_6 + cVar4 + 4) = 0;
  return 1;
}



void __cdecl
FUN_5f31a2a0(uint *param_1,uint *param_2,byte param_3,uint param_4,uint *param_5,uint *param_6)

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
  uVar3 = FUN_5f31a940();
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
  FUN_5f31a950();
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
    goto switchD_5f31a53b_default;
  case 2:
    uVar3 = *puVar1 & 0xfffffbff | 0x800;
    break;
  case 3:
    uVar3 = *puVar1 | 0xc00;
    break;
  default:
    goto switchD_5f31a53b_default;
  }
  *puVar1 = uVar3;
switchD_5f31a53b_default:
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



bool __cdecl FUN_5f31a5e0(uint param_1,double *param_2,uint param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  int local_14;
  undefined8 local_10;
  
  uVar4 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || ((param_3 & 1) == 0)) {
    if (((param_1 & 4) == 0) || ((param_3 & 4) == 0)) {
      if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
        if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
          bVar5 = (param_1 & 0x10) != 0;
          local_10 = *param_2;
          if (local_10 == 0.0) {
            bVar5 = true;
          }
          else {
            fVar6 = FUN_5f31b340(*(uint *)param_2,*(uint *)((int)param_2 + 4),&local_14);
            local_14 = local_14 + -0x600;
            if (local_14 < -0x432) {
              bVar5 = true;
              *(undefined4 *)param_2 = 0;
              local_10 = 0.0;
              *(undefined4 *)((int)param_2 + 4) = 0;
            }
            else {
              local_10 = (double)(ulonglong)
                                 (SUB87((double)fVar6,0) & 0xfffffffffffff | 0x10000000000000);
              if (local_14 < -0x3fd) {
                local_14 = -0x3fd - local_14;
                do {
                  if ((((ulonglong)local_10 & 1) != 0) && (!bVar5)) {
                    bVar5 = true;
                  }
                  uVar4 = (uint)local_10 >> 1;
                  uVar1 = (ulonglong)local_10 & 0x100000000;
                  local_10._0_4_ = uVar4;
                  if (uVar1 != 0) {
                    local_10._0_4_ = uVar4 | 0x80000000;
                  }
                  local_14 = local_14 + -1;
                  local_10 = (double)CONCAT44(local_10._4_4_ >> 1,(uint)local_10);
                } while (local_14 != 0);
              }
              if ((double)fVar6 < 0.0) {
                local_10 = -local_10;
              }
              *(uint *)param_2 = (uint)local_10;
              *(uint *)((int)param_2 + 4) = local_10._4_4_;
            }
          }
          if (bVar5) {
            FUN_5f31a9a0();
          }
          uVar4 = param_1 & 0x1d;
        }
      }
      else {
        FUN_5f31a9a0();
        uVar3 = DAT_5f320d84;
        uVar2 = DAT_5f320d74;
        uVar4 = param_3 & 0xc00;
        if (uVar4 < 0x401) {
          if (uVar4 == 0x400) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_5f320d74,DAT_5f320d70);
              *param_2 = local_10;
              uVar4 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_5f320d80;
              *(undefined4 *)((int)param_2 + 4) = uVar3;
              uVar4 = param_1 & 0x1e;
            }
            goto LAB_5f31a8eb;
          }
          if (uVar4 == 0) {
            if (*param_2 <= 0.0) {
              local_10 = -(double)CONCAT44(DAT_5f320d74,DAT_5f320d70);
              *param_2 = local_10;
              uVar4 = param_1 & 0x1e;
            }
            else {
              *(undefined4 *)param_2 = DAT_5f320d70;
              *(undefined4 *)((int)param_2 + 4) = uVar2;
              uVar4 = param_1 & 0x1e;
            }
            goto LAB_5f31a8eb;
          }
        }
        else if (uVar4 == 0x800) {
          if (0.0 < *param_2) {
            *(undefined4 *)param_2 = DAT_5f320d70;
            *(undefined4 *)((int)param_2 + 4) = uVar2;
            uVar4 = param_1 & 0x1e;
            goto LAB_5f31a8eb;
          }
          local_10 = -(double)CONCAT44(DAT_5f320d84,DAT_5f320d80);
          *param_2 = local_10;
        }
        else if (uVar4 == 0xc00) {
          if (*param_2 <= 0.0) {
            local_10 = -(double)CONCAT44(DAT_5f320d84,DAT_5f320d80);
            *param_2 = local_10;
            uVar4 = param_1 & 0x1e;
          }
          else {
            *(undefined4 *)param_2 = DAT_5f320d80;
            *(undefined4 *)((int)param_2 + 4) = uVar3;
            uVar4 = param_1 & 0x1e;
          }
          goto LAB_5f31a8eb;
        }
        uVar4 = param_1 & 0x1e;
      }
    }
    else {
      FUN_5f31a9a0();
      uVar4 = param_1 & 0x1b;
    }
  }
  else {
    FUN_5f31a9a0();
    uVar4 = param_1 & 0x17;
  }
LAB_5f31a8eb:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_5f31a9a0();
    uVar4 = uVar4 & 0xffffffef;
  }
  return uVar4 == 0;
}



void __cdecl FUN_5f31a910(int param_1)

{
  DWORD *pDVar1;
  
  if (param_1 == 1) {
    pDVar1 = FUN_5f31af50();
    *pDVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    pDVar1 = FUN_5f31af50();
    *pDVar1 = 0x22;
    return;
  }
  return;
}



int FUN_5f31a940(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



int FUN_5f31a950(void)

{
  short in_FPUStatusWord;
  
  return (int)in_FPUStatusWord;
}



int FUN_5f31a970(void)

{
  short in_FPUControlWord;
  
  return (int)in_FPUControlWord;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_5f31a9a0(void)

{
  return;
}



DWORD * FUN_5f31af50(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_5f313430();
  return pDVar1 + 2;
}



void __cdecl FUN_5f31afb0(int *param_1,int *param_2)

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
        iVar2 = FUN_5f319580(*(uint *)(local_20 + -2),(uint)*puVar8 * (uint)*puVar7,
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
    FUN_5f319620((uint *)&local_c);
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
        FUN_5f319650((uint *)&local_c);
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



void __cdecl FUN_5f31b270(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  int local_4;
  
  iVar3 = 0x5f320da8;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      iVar3 = 0x5f320f08;
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
        FUN_5f31afb0(param_1,piVar2);
      }
    }
  }
  return;
}



float10 __cdecl FUN_5f31b300(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined2 uStack_4;
  
  uStack_4 = (undefined2)param_2;
  return (float10)(double)CONCAT26(param_2._2_2_ & 0x800f | (param_3 + 0x3fe) * 0x10,
                                   CONCAT24(uStack_4,param_1));
}



float10 __cdecl FUN_5f31b340(uint param_1,uint param_2,int *param_3)

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
    fVar6 = FUN_5f31b300(param_1,CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(undefined2)param_2))
                         ,0);
    *param_3 = iVar5;
    return (float10)(double)fVar6;
  }
  fVar6 = FUN_5f31b300(param_1,param_2,0);
  *param_3 = ((param_2 >> 0x10 & 0x7ff0) >> 4) - 0x3fe;
  return (float10)(double)fVar6;
}



BSTR SysAllocString(OLECHAR *psz)

{
  BSTR pOVar1;
  
                    // WARNING: Could not recover jumptable at 0x5f31b85c. Too many branches
                    // WARNING: Treating indirect jump as call
  pOVar1 = SysAllocString(psz);
  return pOVar1;
}



HRESULT VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    // WARNING: Could not recover jumptable at 0x5f31b862. Too many branches
                    // WARNING: Treating indirect jump as call
  HVar1 = VariantClear(pvarg);
  return HVar1;
}



HRESULT VariantChangeType(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,USHORT wFlags,VARTYPE vt)

{
  HRESULT HVar1;
  
                    // WARNING: Could not recover jumptable at 0x5f31b868. Too many branches
                    // WARNING: Treating indirect jump as call
  HVar1 = VariantChangeType(pvargDest,pvarSrc,wFlags,vt);
  return HVar1;
}



void SysFreeString(BSTR bstrString)

{
                    // WARNING: Could not recover jumptable at 0x5f31b86e. Too many branches
                    // WARNING: Treating indirect jump as call
  SysFreeString(bstrString);
  return;
}



void VariantInit(VARIANTARG *pvarg)

{
                    // WARNING: Could not recover jumptable at 0x5f31b874. Too many branches
                    // WARNING: Treating indirect jump as call
  VariantInit(pvarg);
  return;
}



HRESULT LoadTypeLib(LPCOLESTR szFile,ITypeLib **pptlib)

{
  HRESULT HVar1;
  
                    // WARNING: Could not recover jumptable at 0x5f31b87a. Too many branches
                    // WARNING: Treating indirect jump as call
  HVar1 = LoadTypeLib(szFile,pptlib);
  return HVar1;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x5f31b880. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


