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

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

typedef uchar BYTE;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef ulong DWORD;

typedef long LONG;

typedef ushort WORD;

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

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID IID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID CLSID;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef char CHAR;

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

typedef wchar_t WCHAR;

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

typedef WCHAR *PCNZWCH;

typedef WCHAR *LPWCH;

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

typedef union _union_2260 _union_2260, *P_union_2260;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

typedef void *HMETAFILEPICT;

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

typedef HANDLE HGLOBAL;

typedef struct IStorage IStorage, *PIStorage;

typedef struct IStorageVtbl IStorageVtbl, *PIStorageVtbl;

typedef LPOLESTR *SNB;

typedef struct IEnumSTATSTG IEnumSTATSTG, *PIEnumSTATSTG;

typedef struct IEnumSTATSTGVtbl IEnumSTATSTGVtbl, *PIEnumSTATSTGVtbl;

struct HBITMAP__ {
    int unused;
};

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

typedef STGMEDIUM *LPSTGMEDIUM;

typedef ULONG_PTR SIZE_T;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HPALETTE__ *HPALETTE;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef int (*FARPROC)(void);

typedef struct HDC__ *HDC;

typedef WORD *LPWORD;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef int BOOL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct HBRUSH__ *HBRUSH;

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

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
};

typedef struct _iobuf FILE;

typedef uint size_t;



undefined *PTR_LAB_653c21c0;
undefined *PTR_LAB_653c21d8;
undefined *PTR_LAB_653c21f8;
undefined *PTR_LAB_653c2228;
undefined *PTR_LAB_653c2240;
undefined *PTR_LAB_653c2260;
undefined *PTR_LAB_653c2298;
undefined *PTR_LAB_653c22b0;
undefined *PTR_LAB_653c22d0;
undefined *PTR_LAB_653c2300;
undefined *PTR_LAB_653c2318;
undefined *PTR_LAB_653c2338;
undefined4 DAT_653e0ec8;
undefined2 DAT_653e0ed0;
undefined DAT_653c2358;
undefined LAB_653d0a58;
string s_d:\OA\src\stdtypes\filtbase.cpp_653dc030;
string s_NULL_!=_m_dib_653dc050;
void *ExceptionList;
string s_d:\OA\src\stdtypes\filtbase.cpp_653dc060;
string s_NULL_!=_m_dc_653dc080;
string s_d:\OA\src\stdtypes\filtbase.cpp_653dc090;
string s_NULL_!=_new_brush_653dc0b0;
undefined LAB_653c6030;
undefined *PTR_LAB_653c2368;
undefined *PTR_LAB_653c2380;
undefined *PTR_LAB_653c23a0;
undefined *PTR_LAB_653c23d0;
undefined *PTR_LAB_653c23e8;
undefined *PTR_LAB_653c2408;
undefined LAB_653c5810;
undefined DAT_653c2440;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc0c4;
string s_FALSE_653dc0e4;
undefined FUN_653c6050;
undefined LAB_653c6090;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc0ec;
string s_NULL_!=_hdr_653dc10c;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc118;
string s_NULL_!=_sd_653dc138;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc144;
string s_pal_entries_<=_MAX_GIF_PALETTE_E_653dc164;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc18c;
string s_NULL_!=_m_bminfo_653dc1ac;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc1c0;
string s_bytes_read_==_bytes_needed_653dc1e0;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc1fc;
string s_m_decompress_info.first_code_<_m_653dc21c;
undefined FUN_653c5cb0;
undefined LAB_653c5a70;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc258;
string s_*(m_decompress_info.code_sp)_<_m_653dc278;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc2b4;
string s_m_decompress_info.code_sp_<_&(m__653dc2d4;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc320;
string s_code_!=_m_decompress_info.code_t_653dc340;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc370;
string s_*(m_decompress_info.code_sp)_<_m_653dc390;
undefined FUN_653c5a80;
undefined DAT_653dc3d0;
undefined DAT_653dc3e0;
string s_NULL_!=_m_dib_653dc3f0;
string s_NULL_!=_m_dc_653dc400;
string s_d:\OA\src\stdtypes\filtgif.cpp_653dc410;
undefined *PTR_LAB_653c2450;
undefined *PTR_LAB_653c2468;
undefined *PTR_LAB_653c2488;
undefined *PTR_LAB_653c24b8;
undefined *PTR_LAB_653c24d0;
undefined *PTR_FUN_653c24f0;
undefined1 DAT_653c2538;
undefined1 DAT_653c2548;
undefined1 DAT_653c2558;
undefined1 DAT_653c25a8;
undefined LAB_653c6a70;
undefined FUN_653c6a60;
string s_d:\OA\src\stdtypes\filtjpeg.cpp_653dc430;
string s_NULL_!=_m_bminfo_653dc450;
string s_d:\OA\src\stdtypes\filtjpeg.cpp_653dc464;
string s_NULL_!=_m_pCurLine_653dc484;
string s_d:\OA\src\stdtypes\filtjpeg.cpp_653dc4cc;
string s_NULL_!=_m_dc_653dc4ec;
string s_d:\OA\src\stdtypes\filtjpeg.cpp_653dc4fc;
string s_NULL_!=_m_dib_653dc51c;
undefined LAB_653c7090;
undefined DAT_653c7140;
undefined FUN_653c7100;
undefined FUN_653c70a0;
undefined FUN_653c9ee1;
undefined1 DAT_653c25c8;
undefined1 DAT_653c25d8;
undefined DAT_653e0ed4;
undefined DAT_653e0ed8;
undefined DAT_653e0edc;
undefined DAT_653e0ede;
string s_MS_AsyncImage_DCWait_653dc52c;
string s_MS_AsyncImage_Display_653dc544;
string s_MS_AsyncImage_Abnormal_653dc55c;
string s_MS_AsyncImage_Finished_653dc574;
undefined DAT_653e0ee0;
int DAT_653e0ec8;
undefined LAB_653c791f;
undefined LAB_653c7975;
undefined LAB_653c7b97;
undefined FUN_653c79b2;
undefined FUN_653c7b9a;
undefined FUN_653c7d2a;
undefined DAT_653c89a4;
undefined FUN_653c86aa;
undefined FUN_653c87bd;
undefined FUN_653c8833;
undefined FUN_653c8856;
undefined FUN_653c8a19;
undefined DAT_653c2e08;
undefined FUN_653cd0ca;
undefined FUN_653cd5cf;
undefined FUN_653cd8dd;
undefined FUN_653cda9b;
undefined FUN_653c8f81;
undefined FUN_653c8e91;
undefined DAT_653c2a08;
undefined DAT_653c2a48;
undefined DAT_653c2f08;
undefined LAB_653c9631;
undefined LAB_653c9642;
undefined FUN_653c93f3;
undefined FUN_653c988f;
undefined LAB_653c9a3f;
undefined LAB_653ca289;
undefined FUN_653caf8f;
undefined FUN_653caf32;
undefined FUN_653ca05c;
undefined FUN_653ca15d;
undefined FUN_653ca22d;
undefined LAB_653cb465;
undefined LAB_653cb58b;
undefined LAB_653cb6e0;
undefined FUN_653cb6f5;
undefined FUN_653cb79c;
undefined FUN_653cb7cd;
undefined FUN_653cb911;
undefined FUN_653cbb49;
undefined FUN_653cbd5e;
undefined FUN_653cbfb2;
undefined FUN_653cc1dc;
undefined FUN_653cc2c2;
undefined DAT_653c2a88;
undefined DAT_653c2ac8;
undefined LAB_653cc6c2;
undefined LAB_653ccacc;
undefined FUN_653ccd74;
undefined LAB_653ccbb3;
undefined FUN_653cce1b;
undefined LAB_653ccbbe;
undefined FUN_653ccae6;
undefined FUN_653ccbc6;
undefined FUN_653cccb0;
undefined FUN_653cccfd;
undefined *PTR_s_Bogus_message_code_%d_653c2b08;
undefined LAB_653ccfe6;
undefined FUN_653ccfac;
undefined LAB_653cd017;
undefined LAB_653cd0bb;
undefined FUN_653ccf8f;
undefined *PTR_DAT_653dd6f8;
undefined DAT_653dd684;
string s_JPEGMEM_653dd688;
undefined FUN_653cdbdf;
string s_%ld%c_653dd690;
undefined FUN_653cdced;
undefined FUN_653cdd7a;
undefined FUN_653cde10;
undefined FUN_653cdeb2;
undefined FUN_653cdf0f;
undefined FUN_653cdf6c;
undefined FUN_653ce0f1;
undefined FUN_653ce297;
undefined FUN_653ce445;
undefined FUN_653ce528;
undefined DAT_653c2ce8;
undefined DAT_653c2cf0;
undefined LAB_653cefac;
undefined FUN_653ce990;
undefined4 DAT_653c2df8;
undefined FUN_653cec3e;
undefined FUN_653ced2e;
undefined FUN_653cee22;
undefined FUN_653ceb25;
undefined FUN_653cebb0;
undefined1 DAT_653c2cf8;
undefined LAB_653d005c;
undefined FUN_653cf161;
undefined LAB_653cf99d;
undefined FUN_653cf25b;
undefined FUN_653cf2ca;
undefined FUN_653cf72c;
int DAT_653e0ef4;
uint DAT_653e0f04;
undefined DAT_653e0f10;
undefined DAT_653e0f0c;
undefined DAT_653e0f08;
LPSTR DAT_653e24cc;
LPSTR DAT_653e0ee8;
int DAT_653e0ee4;
int DAT_653e0f3c;
undefined *DAT_653e24d0;
int DAT_653e0ef0;
undefined *PTR___exit_653dd698;
HANDLE DAT_653e1384;
string s_Assertion_failed:_%s,_file_%s,_l_653dd6a0;
undefined DAT_653dd738;
undefined *PTR_DAT_653dd6d0;
undefined *PTR_DAT_653dd6c8;
undefined *PTR_DAT_653dd6cc;
undefined DAT_653dd744;
undefined LAB_653d0980;
undefined4 DAT_653dd6dc;
undefined4 DAT_653dd6d8;
int DAT_653dd6e0;
int DAT_653e1204;
uint DAT_653dfc1c;
undefined DAT_653e0efc;
undefined *PTR___fptrap_653dfc24;
undefined *PTR___fptrap_653dfc20;
undefined *PTR___fptrap_653dfc28;
undefined *PTR___fptrap_653dfc2c;
undefined *PTR___fptrap_653dfc30;
undefined *PTR___fptrap_653dfc34;
undefined LAB_653d3680;
undefined LAB_653d36f0;
undefined LAB_653d3710;
undefined LAB_653d3ae0;
undefined FUN_653d3620;
undefined *PTR___fpmath_653dd6ec;
undefined DAT_653dc000;
undefined DAT_653dc004;
undefined DAT_653dc008;
undefined DAT_653dc010;
int DAT_653e0f40;
undefined4 DAT_653e0f3c;
undefined1 DAT_653e0f38;
undefined4 *DAT_653e24c8;
int DAT_653e24c4;
undefined DAT_653dc014;
undefined DAT_653dc01c;
undefined DAT_653dc020;
undefined DAT_653dc024;
int *DAT_653e0f20;
int DAT_653e0f28;
DWORD DAT_653dd978;
undefined DAT_653dfc50;
undefined4 DAT_653e13a0;
UINT DAT_653e14a0;
undefined4 DAT_653e13a4;
char *DAT_653e0ee8;
byte *DAT_653e24cc;
undefined DAT_653e0f30;
undefined DAT_653e0f18;
undefined DAT_653e0f14;
undefined DAT_653e0f48;
undefined4 DAT_653e1050;
UINT DAT_653e1154;
undefined4 DAT_653e1158;
undefined DAT_653e1160;
undefined DAT_653e1164;
undefined DAT_653e1168;
int DAT_653e116c;
undefined1 DAT_653dd9a8;
undefined4 DAT_653dd9b0;
undefined DAT_653ddaa0;
uint DAT_653e116c;
int DAT_653e1230;
undefined4 DAT_653e1154;
int DAT_653e1174;
pointer PTR_LOOP_653ddbf8;
undefined4 DAT_653e0ef4;
undefined *DAT_653e1178;
int DAT_653e13a0;
undefined4 DAT_653ddaa8;
undefined4 DAT_653ddb38;
undefined *PTR_DAT_653ddb7c;
undefined *PTR_DAT_653ddb6c;
undefined *PTR_DAT_653ddb5c;
undefined *PTR_DAT_653ddb3c;
pointer PTR_DAT_653ddb5c;
pointer PTR_DAT_653ddb6c;
pointer PTR_DAT_653ddb7c;
pointer PTR_DAT_653ddb3c;
int DAT_653ddc08;
undefined *PTR_PTR_LOOP_653ddbfc;
undefined *PTR_PTR_LOOP_653dfc18;
undefined4 DAT_653ddc08;
int DAT_653e11e0;
int DAT_653e24c0;
int DAT_653e14a4;
int DAT_653e0f44;
undefined4 DAT_653e11ec;
int DAT_653dfcc8;
int DAT_653dfccc;
undefined4 DAT_653e11e8;
undefined4 DAT_653e11f0;
undefined4 DAT_653e11e4;
int DAT_653dfcd4;
FARPROC DAT_653e11f8;
FARPROC DAT_653e11fc;
FARPROC DAT_653e1200;
undefined *DAT_653e1208;
int DAT_653dfe40;
char DAT_653dfe44;
undefined *PTR_DAT_653dfe50;
undefined1 DAT_653dfe44;
undefined DAT_653dd718;
undefined4 DAT_653e1210;
WCHAR *DAT_653dfc3c;
WCHAR *DAT_653dfc38;
undefined DAT_653c34f0;
undefined DAT_653dd980;
uint DAT_653dfe40;
string s_-_]_653dfc40;
undefined DAT_653dfc48;
LCID DAT_653e1158;
int *DAT_653e0f28;
uint DAT_653e14a0;
undefined4 DAT_653dfcd8;
undefined4 DAT_653dfe40;
int DAT_653e1220;
int DAT_653e137c;
undefined DAT_653e1380;
LCID DAT_653e1220;
undefined DAT_653e0060;
undefined DAT_653e0078;
UINT DAT_653e1230;
int DAT_653e1238;
int *DAT_653e0f24;
undefined4 *DAT_653e0f28;
int DAT_653e123c;
LCID DAT_653e1240;
int DAT_653e1254;
byte DAT_653dfe44;
int DAT_653e1154;
ushort DAT_653e1296;
ushort DAT_653e1298;
ushort DAT_653e128c;
undefined DAT_653e12b0;
undefined *PTR_s_November_653e0a80;
undefined1 DAT_653e12a8;
int DAT_653e12b4;
int DAT_653e12b8;

void __fastcall FUN_653c3cd0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void __fastcall FUN_653c3ce0(LPSTGMEDIUM param_1)

{
  ReleaseStgMedium(param_1);
  return;
}



void __thiscall FUN_653c3cf0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[2];
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = uVar1;
  return;
}



undefined4 * __fastcall FUN_653c3d10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_653c2338;
  param_1[9] = param_1 + 0x2d;
  param_1[1] = &PTR_LAB_653c2318;
  param_1[2] = &PTR_LAB_653c2300;
  param_1[8] = param_1 + 0x21;
  param_1[3] = &PTR_LAB_653c22d0;
  param_1[0x11] = param_1 + 0x2a;
  param_1[4] = &PTR_LAB_653c22b0;
  param_1[5] = &PTR_LAB_653c2298;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_1 + 0x24;
  param_1[0xd] = 1;
  param_1[0x10] = param_1 + 0x27;
  param_1[0x13] = 0;
  param_1[0x19] = 0;
  FUN_653c3cd0(param_1 + 0x20);
  FUN_653c3cd0(param_1 + 0x23);
  FUN_653c3cd0(param_1 + 0x26);
  FUN_653c3cd0(param_1 + 0x29);
  FUN_653c3cd0(param_1 + 0x2c);
  param_1[0xf] = 8;
  param_1[0xe] = 8;
  *param_1 = &PTR_LAB_653c2260;
  param_1[1] = &PTR_LAB_653c2240;
  param_1[2] = &PTR_LAB_653c2228;
  param_1[3] = &PTR_LAB_653c21f8;
  param_1[4] = &PTR_LAB_653c21d8;
  param_1[5] = &PTR_LAB_653c21c0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  InterlockedIncrement(&DAT_653e0ec8);
  return param_1;
}



undefined4 * __thiscall FUN_653c3e20(void *this,byte param_1)

{
  FUN_653c3e40((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_653d0390((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_653c3e40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  *param_1 = &PTR_LAB_653c2260;
  param_1[1] = &PTR_LAB_653c2240;
  param_1[2] = &PTR_LAB_653c2228;
  param_1[3] = &PTR_LAB_653c21f8;
  param_1[4] = &PTR_LAB_653c21d8;
  param_1[5] = &PTR_LAB_653c21c0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((undefined *)param_1[10] != (undefined *)0x0) {
    FUN_653d03a0((undefined *)param_1[10]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  InterlockedDecrement(&DAT_653e0ec8);
  FUN_653c3ce0((LPSTGMEDIUM)(param_1 + 0x2c));
  FUN_653c3ce0((LPSTGMEDIUM)(param_1 + 0x29));
  FUN_653c3ce0((LPSTGMEDIUM)(param_1 + 0x26));
  FUN_653c3ce0((LPSTGMEDIUM)(param_1 + 0x23));
  FUN_653c3ce0((LPSTGMEDIUM)(param_1 + 0x20));
  return;
}



undefined4 FUN_653c3f50(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(int **)(param_1 + 0x18) = param_2;
  (**(code **)(iVar1 + 4))(param_2);
  return 0;
}



void __fastcall FUN_653c3ff0(int param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



undefined4 __thiscall
FUN_653c4030(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x4c) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
    uVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0xc))
                      (*(int **)((int)this + 0x1c),param_1,param_2,param_3);
    *(undefined4 *)((int)this + 0x50) = uVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
    return uVar1;
  }
  return 0x80004005;
}



undefined2 FUN_653c40a0(int param_1)

{
  return (&DAT_653e0ed0)[param_1];
}



undefined4 FUN_653c40e0(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return 0;
}



undefined4 FUN_653c4160(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x34) == 3) {
    *(undefined4 *)(param_1 + 0x34) = 4;
    **(undefined4 **)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0x80004005;
}



void __thiscall FUN_653c43d0(void *this,int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)((int)this + 0x38) + -1;
  *(int *)((int)this + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x3c);
    DVar3 = GetTickCount();
    if (1000 < DVar3 - *(int *)((int)this + 100)) {
      uVar5 = 0;
      uVar4 = 0;
      iVar2 = *param_1;
      uVar1 = FUN_653c40a0(5);
      (**(code **)(iVar2 + 0xc))(param_1,uVar1,uVar4,uVar5);
      *(DWORD *)((int)this + 100) = DVar3;
    }
    if (DVar3 < *(uint *)((int)this + 100)) {
      *(DWORD *)((int)this + 100) = DVar3;
    }
  }
  return;
}



undefined4 FUN_653c4430(int param_1,int *param_2)

{
  HANDLE h;
  HDC pHVar1;
  HGDIOBJ h_00;
  int iVar2;
  HGDIOBJ pvVar3;
  HGDIOBJ pvVar4;
  undefined1 auStack_38 [4];
  int iStack_34;
  int iStack_30;
  HBRUSH pHStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_653c2358;
  puStack_10 = &LAB_653d0a58;
  pvStack_14 = ExceptionList;
  if (param_2 == (int *)0x0) {
    return 0x80070057;
  }
  h = (HANDLE)**(undefined4 **)(param_1 + 0x2c);
  ExceptionList = &pvStack_14;
  if (h == (HANDLE)0x0) {
    ExceptionList = &pvStack_14;
    FUN_653d0410(s_NULL____m_dib_653dc050,s_d__OA_src_stdtypes_filtbase_cpp_653dc030,0x23b);
  }
  pHVar1 = (HDC)**(undefined4 **)(param_1 + 0x20);
  if (pHVar1 == (HDC)0x0) {
    FUN_653d0410(s_NULL____m_dc_653dc080,s_d__OA_src_stdtypes_filtbase_cpp_653dc060,0x23c);
  }
  iVar2 = GetObjectA(h,0x18,auStack_38);
  if (iVar2 == 0) {
    ExceptionList = pvStack_14;
    return 0x8000ffff;
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff);
  if (iVar2 < 0) {
    ExceptionList = pvStack_14;
    return 0x80070005;
  }
  pHStack_20 = CreateSolidBrush((uint)CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x30),
                                                        *(undefined1 *)(param_1 + 0x31)),
                                               *(undefined1 *)(param_1 + 0x32)));
  if (pHStack_20 == (HBRUSH)0x0) {
    FUN_653d0410(s_NULL____new_brush_653dc0b0,s_d__OA_src_stdtypes_filtbase_cpp_653dc090,0x246);
  }
  SelectObject(pHVar1,pHStack_20);
  pvVar3 = GetCurrentObject(pHVar1,7);
  if (pvVar3 != h) {
    SelectObject(pHVar1,h);
  }
  pvVar3 = (HGDIOBJ)0x0;
  uStack_8 = 0;
  if (pHStack_20 == (HBRUSH)0x0) {
    __local_unwind2((int)&pvStack_14,-1);
    ExceptionList = pvStack_14;
    return 0x8007000e;
  }
  PatBlt(pHVar1,0,0,iStack_34,iStack_30,0xf00021);
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xac) == 0)) {
    pHVar1 = (HDC)**(undefined4 **)(param_1 + 0x24);
    h_00 = (HGDIOBJ)**(undefined4 **)(param_1 + 0x44);
    pvVar4 = GetCurrentObject(pHVar1,7);
    if (pvVar4 != h_00) {
      pvVar3 = SelectObject(pHVar1,h_00);
    }
    PatBlt((HDC)**(undefined4 **)(param_1 + 0x20),0,0,iStack_34,iStack_30,0xff0062);
    if (pvVar3 != (HGDIOBJ)0x0) {
      SelectObject(pHVar1,pvVar3);
    }
  }
  uStack_8 = 0xffffffff;
  FUN_653c4639();
  ExceptionList = pvStack_14;
  return 0;
}



undefined4 FUN_653c4450(void)

{
  int iVar1;
  HANDLE h;
  HDC pHVar2;
  int iVar3;
  HBRUSH h_00;
  HGDIOBJ pvVar4;
  HGDIOBJ pvVar5;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return 0x80070057;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  h = (HANDLE)**(undefined4 **)(iVar1 + 0x2c);
  if (h == (HANDLE)0x0) {
    FUN_653d0410(s_NULL____m_dib_653dc050,s_d__OA_src_stdtypes_filtbase_cpp_653dc030,0x23b);
  }
  pHVar2 = (HDC)**(undefined4 **)(iVar1 + 0x20);
  if (pHVar2 == (HDC)0x0) {
    FUN_653d0410(s_NULL____m_dc_653dc080,s_d__OA_src_stdtypes_filtbase_cpp_653dc060,0x23c);
  }
  iVar3 = GetObjectA(h,0x18,(LPVOID)(unaff_EBP + -0x34));
  if (iVar3 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return 0x8000ffff;
  }
  iVar3 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x10))(*(int **)(unaff_EBP + 0xc),0xffffffff);
  if (iVar3 < 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return 0x80070005;
  }
  h_00 = CreateSolidBrush((uint)CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x30),
                                                  *(undefined1 *)(iVar1 + 0x31)),
                                         *(undefined1 *)(iVar1 + 0x32)));
  *(HBRUSH *)(unaff_EBP + -0x1c) = h_00;
  if (h_00 == (HBRUSH)0x0) {
    FUN_653d0410(s_NULL____new_brush_653dc0b0,s_d__OA_src_stdtypes_filtbase_cpp_653dc090,0x246);
    h_00 = *(HBRUSH *)(unaff_EBP + -0x1c);
  }
  pvVar4 = SelectObject(pHVar2,h_00);
  *(HGDIOBJ *)(unaff_EBP + -0x38) = pvVar4;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  pvVar4 = GetCurrentObject(pHVar2,7);
  if (pvVar4 != h) {
    pvVar4 = SelectObject(pHVar2,h);
    *(HGDIOBJ *)(unaff_EBP + -0x3c) = pvVar4;
  }
  pvVar4 = (HGDIOBJ)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    __local_unwind2(unaff_EBP + -0x10,-1);
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return 0x8007000e;
  }
  PatBlt(pHVar2,0,0,*(int *)(unaff_EBP + -0x30),*(int *)(unaff_EBP + -0x2c),0xf00021);
  if ((*(int *)(iVar1 + 0xa8) != 0) && (*(int *)(iVar1 + 0xac) == 0)) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    pHVar2 = (HDC)**(undefined4 **)(iVar1 + 0x24);
    *(undefined4 *)(unaff_EBP + -0x44) = **(undefined4 **)(iVar1 + 0x44);
    pvVar5 = GetCurrentObject(pHVar2,7);
    if (pvVar5 != *(HGDIOBJ *)(unaff_EBP + -0x44)) {
      pvVar4 = SelectObject(pHVar2,*(HGDIOBJ *)(unaff_EBP + -0x44));
      *(HGDIOBJ *)(unaff_EBP + -0x40) = pvVar4;
    }
    PatBlt((HDC)**(undefined4 **)(iVar1 + 0x20),0,0,*(int *)(unaff_EBP + -0x30),
           *(int *)(unaff_EBP + -0x2c),0xff0062);
    if (pvVar4 != (HGDIOBJ)0x0) {
      SelectObject(pHVar2,pvVar4);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_653c4639();
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}



void FUN_653c4639(void)

{
  HDC hdc;
  int unaff_EBP;
  int unaff_EDI;
  
  hdc = (HDC)**(undefined4 **)(unaff_EDI + 0x20);
  SelectObject(hdc,*(HGDIOBJ *)(unaff_EBP + -0x38));
  if (*(HGDIOBJ *)(unaff_EBP + -0x3c) != (HGDIOBJ)0x0) {
    SelectObject(hdc,*(HGDIOBJ *)(unaff_EBP + -0x3c));
  }
  if (*(HGDIOBJ *)(unaff_EBP + -0x1c) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(unaff_EBP + -0x1c));
  }
  (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x14))(*(int **)(unaff_EBP + 0xc));
  return;
}



void __fastcall FUN_653c4710(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  param_1[10] = &LAB_653c6030;
  return;
}



undefined4 * __fastcall FUN_653c4740(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_653c3d10(param_1);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_653c4710(param_1 + 0x408b);
  param_1[0x4096] = 0;
  *(undefined1 *)(param_1 + 0x4097) = 0;
  param_1[0x4098] = 0;
  param_1[0x409b] = 0;
  *param_1 = &PTR_LAB_653c2408;
  param_1[1] = &PTR_LAB_653c23e8;
  param_1[2] = &PTR_LAB_653c23d0;
  param_1[3] = &PTR_LAB_653c23a0;
  param_1[4] = &PTR_LAB_653c2380;
  param_1[5] = &PTR_LAB_653c2368;
  param_1[0x4099] = 0;
  param_1[0x409a] = 0;
  puVar2 = param_1 + 0x38;
  for (iVar1 = 0x4053; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x30] = &LAB_653c5810;
  param_1[0x31] = 0;
  param_1[0x19] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_653c47f0(void *this,byte param_1)

{
  FUN_653c4810((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_653d0390((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_653c4810(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_653c2408;
  param_1[1] = &PTR_LAB_653c23e8;
  param_1[2] = &PTR_LAB_653c23d0;
  param_1[3] = &PTR_LAB_653c23a0;
  param_1[4] = &PTR_LAB_653c2380;
  param_1[5] = &PTR_LAB_653c2368;
  if ((undefined *)param_1[0x4096] != (undefined *)0x0) {
    FUN_653d0390((undefined *)param_1[0x4096]);
  }
  if ((undefined *)param_1[0x4099] != (undefined *)0x0) {
    FUN_653d0390((undefined *)param_1[0x4099]);
  }
  FUN_653c6a60();
  FUN_653c3e40(param_1);
  return;
}



int * FUN_653c4880(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_653d0b30(0x10270);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_653c4740(puVar1);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar2;
}



undefined4 FUN_653c49d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10218) != 0) &&
     (*(int *)(param_1 + 0x10258) != *(int *)(param_1 + 0x1022c))) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 8);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = uVar1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    param_2[3] = uVar2;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x10258) = *(undefined4 *)(param_1 + 0x1022c);
    return 0;
  }
  uVar2 = FUN_653c40e0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10258) = *(undefined4 *)(param_1 + 0x1022c);
  return uVar2;
}



uint __thiscall FUN_653c4a60(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  uint uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_653c2440;
  puStack_10 = &LAB_653d0a58;
  local_14 = ExceptionList;
  uVar3 = 1;
  switch(*(undefined4 *)((int)this + 200)) {
  case 0:
    ExceptionList = &local_14;
    iVar2 = FUN_653c5020(this);
    if (iVar2 != 0) {
      if (*(int *)((int)this + 0xd0) != 0) {
        FUN_653c4df0(this,1);
        ExceptionList = local_14;
        return 0;
      }
      FUN_653c4df0(this,5);
      ExceptionList = local_14;
      return 0;
    }
    goto LAB_653c4b1b;
  case 1:
    ExceptionList = &local_14;
    iVar2 = FUN_653c5110(this);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0xd0) = 0;
      FUN_653c4df0(this,5);
      ExceptionList = local_14;
      return 0;
    }
    goto LAB_653c4cf2;
  case 2:
    ExceptionList = &local_14;
    iVar2 = FUN_653c53f0(this);
    if (iVar2 != 0) {
      ExceptionList = local_14;
      return 0;
    }
    goto LAB_653c4cf2;
  case 3:
    ExceptionList = &local_14;
    iVar2 = FUN_653c5110(this);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0xd4) = 0;
      FUN_653c4df0(this,4);
      ExceptionList = local_14;
      return 0;
    }
    goto LAB_653c4cf2;
  case 4:
    ExceptionList = &local_14;
    iVar2 = FUN_653c56d0(this);
    if (iVar2 != 0) {
      FUN_653c4df0(this,6);
      *(undefined4 *)((int)this + 0x34) = 3;
      ExceptionList = local_14;
      return 0;
    }
LAB_653c4cf2:
    if (*(int *)((int)this + 0x34) == 7) {
      uVar3 = 0x8007000e;
    }
    break;
  case 5:
    ExceptionList = &local_14;
    iVar2 = FUN_653c51a0(this);
    goto LAB_653c4b10;
  case 6:
  case 7:
    if (**(int **)((int)this + 0x20) != 0) {
      local_8 = 0;
      ExceptionList = &local_14;
      iVar2 = FUN_653c62c0(this,param_1);
      if (iVar2 == 0) {
        ExceptionList = local_14;
        return 1;
      }
      FUN_653c4df0(this,0x13);
      *(undefined4 *)((int)this + 0x34) = 7;
      ExceptionList = local_14;
      return 0;
    }
    *(undefined4 *)((int)this + 0x34) = 3;
    goto LAB_653c4d86;
  case 8:
  case 0x10:
    ExceptionList = &local_14;
    bVar1 = FUN_653c5720(this);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      ExceptionList = local_14;
      return 1;
    }
    if (*(char *)((int)this + 0x111) != '\0') {
      FUN_653c4df0(this,9);
      ExceptionList = local_14;
      return 0;
    }
    FUN_653d0410(s_FALSE_653dc0e4,s_d__OA_src_stdtypes_filtgif_cpp_653dc0c4,0x115);
    FUN_653c4df0(this,0x12);
    goto LAB_653c4d86;
  case 9:
    ExceptionList = &local_14;
    bVar1 = FUN_653c57a0(this);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      uVar3 = 0;
      FUN_653c4df0(this,10);
    }
    break;
  case 10:
    ExceptionList = &local_14;
    bVar1 = FUN_653c5720(this);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      ExceptionList = local_14;
      return 1;
    }
    if (*(char *)((int)this + 0x111) != '\0') {
      FUN_653c4df0(this,0xb);
      ExceptionList = local_14;
      return 0;
    }
    goto LAB_653c4c70;
  case 0xb:
    ExceptionList = &local_14;
    bVar1 = FUN_653c57a0(this);
    bVar1 = CONCAT31(extraout_var_02,bVar1) == 0;
    if (!bVar1) {
      FUN_653c4df0(this,10);
    }
    uVar3 = (uint)bVar1;
    *(undefined1 *)((int)this + 0x111) = 0;
    break;
  case 0xc:
    ExceptionList = &local_14;
    bVar1 = FUN_653c5720(this);
    if (CONCAT31(extraout_var_05,bVar1) == 0) {
      ExceptionList = local_14;
      return 1;
    }
    if (*(char *)((int)this + 0x111) != '\0') {
      FUN_653c4df0(this,0xd);
      ExceptionList = local_14;
      return 0;
    }
LAB_653c4c70:
    uVar3 = 0;
    FUN_653c4df0(this,5);
    break;
  case 0xd:
    ExceptionList = &local_14;
    bVar1 = FUN_653c57a0(this);
    if (CONCAT31(extraout_var_06,bVar1) != 0) {
      uVar3 = 0;
      FUN_653c4df0(this,0xc);
    }
    break;
  case 0xe:
    ExceptionList = &local_14;
    bVar1 = FUN_653c5720(this);
    if (CONCAT31(extraout_var_04,bVar1) != 0) {
      uVar3 = 0;
      FUN_653c4df0(this,0xf);
    }
    break;
  case 0xf:
    ExceptionList = &local_14;
    uVar3 = FUN_653c5590(this);
    if (uVar3 != 0) {
      uVar3 = 0;
      FUN_653c4df0(this,0x12);
    }
    break;
  case 0x11:
    ExceptionList = &local_14;
    iVar2 = FUN_653c5220(this);
LAB_653c4b10:
    if (iVar2 != 0) {
      ExceptionList = local_14;
      return 0;
    }
LAB_653c4b1b:
    if (*(int *)((int)this + 0x34) != 7) {
      ExceptionList = local_14;
      return 1;
    }
LAB_653c4d86:
    uVar3 = 0x80004005;
    break;
  case 0x12:
    ExceptionList = &local_14;
    bVar1 = FUN_653c5720(this);
    uVar3 = CONCAT31(extraout_var_03,bVar1);
    if (uVar3 != 0) {
      uVar3 = 0;
      FUN_653c4df0(this,5);
    }
  }
  ExceptionList = local_14;
  return uVar3;
}



void __thiscall FUN_653c4df0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 200) = param_1;
  return;
}



int __thiscall FUN_653c4e00(void *this,char *param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  if ((((*param_1 == 'G') || (*param_1 == 'g')) && ((param_1[1] == 'I' || (param_1[1] == 'i')))) &&
     ((param_1[2] == 'F' || (param_1[2] == 'f')))) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    puVar1 = (ushort *)(param_1 + 3);
    param_1._0_3_ = (uint3)*puVar1;
    iVar2 = FUN_653c4e60((LPCSTR)&param_1);
    *(int *)((int)this + 0xdc) = iVar2;
  }
  return iVar3;
}



int __cdecl FUN_653c4e60(LPCSTR param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPCSTR pCVar5;
  
  iVar3 = 0;
  iVar4 = 1;
  iVar2 = lstrlenA(param_1);
  pCVar5 = param_1 + iVar2;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar1 = pCVar5 + -1;
    pCVar5 = pCVar5 + -1;
    iVar3 = iVar3 + (*pcVar1 + -0x30) * iVar4;
    iVar4 = iVar4 * 10;
  }
  return iVar3;
}



undefined4 __thiscall FUN_653c4ea0(void *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    FUN_653d0410(s_NULL____hdr_653dc10c,s_d__OA_src_stdtypes_filtgif_cpp_653dc0ec,0x237);
  }
  if (param_2 == (ushort *)0x0) {
    FUN_653d0410(s_NULL____sd_653dc138,s_d__OA_src_stdtypes_filtgif_cpp_653dc118,0x238);
  }
  uVar6 = 1 << ((byte)param_2[2] & 7) + 1;
  if (0x100 < uVar6) {
    FUN_653d0410(s_pal_entries_<__MAX_GIF_PALETTE_E_653dc164,
                 s_d__OA_src_stdtypes_filtgif_cpp_653dc144,0x23a);
  }
  puVar3 = (undefined4 *)FUN_653d0b40(uVar6 * 4 + 0x28);
  *(undefined4 **)((int)this + 0x28) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    for (uVar4 = uVar6 * 4 + 0x28 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    puVar3 = *(undefined4 **)((int)this + 0x28);
    uVar1 = param_2[1];
    uVar2 = *param_2;
    *puVar3 = 0x28;
    puVar3[4] = 0;
    puVar3[1] = (uint)uVar2;
    puVar3[2] = (uint)uVar1;
    if (2 < uVar6) {
      if (0x10 < uVar6) {
        *(undefined1 **)((int)this + 0x10254) = &LAB_653c6030;
        iVar5 = *(int *)((int)this + 0x28);
        *(undefined2 *)((int)puVar3 + 0xe) = 8;
        *(undefined2 *)(iVar5 + 0xc) = 1;
        *(uint *)(iVar5 + 0x20) = uVar6;
        return 1;
      }
      *(code **)((int)this + 0x10254) = FUN_653c6050;
      iVar5 = *(int *)((int)this + 0x28);
      *(undefined2 *)((int)puVar3 + 0xe) = 4;
      *(undefined2 *)(iVar5 + 0xc) = 1;
      *(uint *)(iVar5 + 0x20) = uVar6;
      return 1;
    }
    *(undefined1 **)((int)this + 0x10254) = &LAB_653c6090;
    iVar5 = *(int *)((int)this + 0x28);
    *(undefined2 *)((int)puVar3 + 0xe) = 1;
    *(undefined2 *)(iVar5 + 0xc) = 1;
    *(uint *)(iVar5 + 0x20) = uVar6;
    return 1;
  }
  FUN_653d0410(s_NULL____m_bminfo_653dc1ac,s_d__OA_src_stdtypes_filtgif_cpp_653dc18c,0x23d);
  *(undefined4 *)((int)this + 0x34) = 7;
  return 0;
}



undefined4 __fastcall FUN_653c5020(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  ushort local_4;
  undefined1 local_2;
  
  uVar3 = 0;
  local_14 = 0;
  puVar1 = (undefined4 *)FUN_653d0b30(0xd);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_653c4030(param_1,puVar1,0xd,&local_14);
    if (iVar2 < 0) goto LAB_653c50eb;
    if (local_14 != 0xd) {
      FUN_653d0410(s_bytes_read____bytes_needed_653dc1e0,s_d__OA_src_stdtypes_filtgif_cpp_653dc1c0,
                   0x287);
    }
    FUN_653c4df0(param_1,0);
    local_10 = *puVar1;
    local_c = *(undefined2 *)(puVar1 + 1);
    local_8 = *(undefined4 *)((int)puVar1 + 6);
    local_4 = *(ushort *)((int)puVar1 + 10);
    local_2 = *(undefined1 *)(puVar1 + 3);
    iVar2 = FUN_653c4e00(param_1,(char *)&local_10);
    if (iVar2 != 0) {
      iVar2 = FUN_653c4ea0(param_1,(int)&local_10,(ushort *)&local_8);
      if (iVar2 != 0) {
        uVar3 = 1;
        if ((local_4 & 0x80) != 0) {
          *(undefined4 *)((int)param_1 + 0xd0) = 1;
        }
        goto LAB_653c50eb;
      }
    }
  }
  *(undefined4 *)((int)param_1 + 0x34) = 7;
LAB_653c50eb:
  if (puVar1 != (undefined4 *)0x0) {
    FUN_653d0390((undefined *)puVar1);
  }
  return uVar3;
}



undefined4 __fastcall FUN_653c5110(void *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_4;
  
  uVar6 = 0;
  local_4 = 0;
  uVar7 = *(int *)(*(int *)((int)param_1 + 0x28) + 0x20) * 3;
  puVar2 = (undefined *)FUN_653d0b30(uVar7);
  if (puVar2 != (undefined *)0x0) {
    iVar3 = FUN_653c4030(param_1,puVar2,uVar7,&local_4);
    if (-1 < iVar3) {
      iVar3 = *(int *)((int)param_1 + 0x28);
      uVar7 = 0;
      puVar4 = (undefined1 *)(iVar3 + 0x28);
      if (*(int *)(iVar3 + 0x20) != 0) {
        puVar5 = puVar2 + 1;
        do {
          uVar1 = puVar5[1];
          puVar4[3] = 0;
          *puVar4 = uVar1;
          puVar4[1] = *puVar5;
          puVar4[2] = puVar5[-1];
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 3;
          puVar4 = puVar4 + 4;
        } while (uVar7 < *(uint *)(iVar3 + 0x20));
      }
      uVar6 = 1;
    }
    FUN_653d0390(puVar2);
    return uVar6;
  }
  *(undefined4 *)((int)param_1 + 0x34) = 7;
  return 0;
}



undefined4 __fastcall FUN_653c51a0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_5;
  undefined4 local_4;
  
  local_4 = 0;
  local_5 = '\0';
  uVar2 = 0;
  iVar1 = FUN_653c4030(param_1,&local_5,1,&local_4);
  if (-1 < iVar1) {
    if (local_5 == '!') {
      FUN_653c4df0(param_1,0x11);
      uVar2 = 1;
    }
    else {
      if (local_5 == ',') {
        FUN_653c4df0(param_1,2);
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x34) = 7;
      if (local_5 == ';') {
        return 1;
      }
    }
  }
  return uVar2;
}



// WARNING: Type propagation algorithm not settling

undefined4 __fastcall FUN_653c5220(void *param_1)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[1] = 0;
  local_8[0] = local_8[0] & 0xffffff00;
  iVar1 = FUN_653c4030(param_1,local_8,1,local_8 + 1);
  if (-1 < iVar1) {
    switch(local_8[0] & 0xff) {
    case 1:
      FUN_653c4df0(param_1,0x10);
      return 1;
    default:
      *(undefined4 *)((int)param_1 + 0x34) = 7;
      break;
    case 0xf9:
      FUN_653c4df0(param_1,0xe);
      return 1;
    case 0xfe:
      FUN_653c4df0(param_1,0xc);
      return 1;
    case 0xff:
      FUN_653c4df0(param_1,8);
      return 1;
    }
  }
  return 0;
}



undefined4 __fastcall FUN_653c53f0(void *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  ushort local_30;
  undefined2 uStack_2e;
  byte local_2c;
  int local_28 [10];
  
  local_3c = 0;
  local_38 = 0;
  iVar1 = FUN_653c4030(param_1,local_34,9,&local_38);
  if (-1 < iVar1) {
    iVar1 = *(int *)((int)param_1 + 0x28);
    *(uint *)(iVar1 + 4) = (uint)local_30;
    *(uint *)(iVar1 + 8) = CONCAT12(local_2c,uStack_2e) & 0xffff;
    *(uint *)((int)param_1 + 0x1022c) = local_2c & 0x40;
    *(uint *)((int)param_1 + 0x10230) = local_2c & 0x20;
    *(uint *)((int)param_1 + 0x1024c) = (-(uint)((local_2c & 0x40) != 0) & 7) + 1;
    if ((local_2c & 0x80) != 0) {
      *(undefined4 *)((int)param_1 + 0xd4) = 1;
      FUN_653c4df0(param_1,3);
      piVar2 = *(int **)((int)param_1 + 0x28);
      uVar3 = 1 << (local_2c & 7) + 1;
      if (piVar2[8] == uVar3) {
        return 1;
      }
      piVar4 = piVar2;
      piVar5 = local_28;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      piVar2 = FUN_653d0c10(piVar2,uVar3 * 4 + 0x28);
      *(int **)((int)param_1 + 0x28) = piVar2;
      if (piVar2 != (int *)0x0) {
        piVar4 = local_28;
        piVar5 = piVar2;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        piVar2[8] = uVar3;
        if (uVar3 < 3) {
          *(undefined2 *)((int)piVar2 + 0xe) = 1;
          *(undefined1 **)((int)param_1 + 0x10254) = &LAB_653c6090;
          return 1;
        }
        if (uVar3 < 0x11) {
          *(undefined2 *)((int)piVar2 + 0xe) = 4;
          *(code **)((int)param_1 + 0x10254) = FUN_653c6050;
          return 1;
        }
        *(undefined2 *)((int)piVar2 + 0xe) = 8;
        *(undefined1 **)((int)param_1 + 0x10254) = &LAB_653c6030;
        return 1;
      }
      *(undefined4 *)((int)param_1 + 0x34) = 7;
      return 0;
    }
    FUN_653c4df0(param_1,4);
    local_3c = 1;
  }
  return local_3c;
}



undefined4 __fastcall FUN_653c5590(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_8 [3];
  undefined1 local_5;
  undefined4 local_4;
  
  uVar2 = 0;
  local_4 = 0;
  iVar1 = FUN_653c4030(param_1,local_8,4,&local_4);
  if ((-1 < iVar1) && (uVar2 = 1, (local_8[0] & 1) != 0)) {
    *(undefined4 *)((int)param_1 + 0x10260) = 1;
    *(undefined4 *)((int)param_1 + 0x48) = 1;
    *(undefined1 *)((int)param_1 + 0x1025c) = local_5;
  }
  return uVar2;
}



undefined4 __fastcall FUN_653c55e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  local_4 = 0;
  uVar3 = (int)(*(int *)(iVar2 + 4) * (uint)*(ushort *)(iVar2 + 0xe) + 0x1f) >> 3;
  uVar4 = uVar3 & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x10248) = *(undefined4 *)(iVar2 + 8);
  puVar1 = (undefined4 *)FUN_653d0b30(uVar4);
  *(undefined4 **)(param_1 + 0x10258) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x10250) = puVar1;
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_4 = 1;
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 4);
  puVar1 = (undefined4 *)FUN_653d0b30(iVar2 + 0x34);
  *(undefined4 **)(param_1 + 0x10264) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x28;
    puVar1[1] = iVar2;
    puVar1[2] = 1;
    *(undefined2 *)(puVar1 + 3) = 1;
    *(undefined2 *)((int)puVar1 + 0xe) = 8;
    puVar1[4] = 0;
    puVar1[5] = uVar4;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 2;
    puVar1[9] = 2;
    *(undefined1 *)((int)puVar1 + 0x2a) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x29) = 0xff;
    *(undefined1 *)(puVar1 + 10) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2b) = 0;
    *(undefined1 *)((int)puVar1 + 0x2e) = 0;
    *(undefined1 *)((int)puVar1 + 0x2d) = 0;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined1 *)((int)puVar1 + 0x2f) = 0;
    *(undefined4 **)(param_1 + 0x10268) = puVar1 + 0xc;
    return local_4;
  }
  return 0;
}



// WARNING: Type propagation algorithm not settling

undefined4 __fastcall FUN_653c56d0(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_8 [2];
  
  local_8[1] = 0;
  local_8[0] = local_8[0] & 0xffffff00;
  uVar2 = 0;
  iVar1 = FUN_653c4030(param_1,local_8,1,local_8 + 1);
  if (-1 < iVar1) {
    *(uint *)((int)param_1 + 0xe4) = local_8[0] & 0xff;
    uVar2 = FUN_653c55e0((int)param_1);
  }
  return uVar2;
}



bool __fastcall FUN_653c5720(void *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_653c4030(param_1,(int)param_1 + 0x111,1,&local_4);
  return -1 < iVar1;
}



undefined4 __fastcall FUN_653c5750(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4;
  
  uVar2 = 0;
  local_4 = 0;
  iVar1 = FUN_653c4030(param_1,(int)param_1 + 0x128,(uint)*(byte *)((int)param_1 + 0x111),&local_4);
  if (-1 < iVar1) {
    *(int *)((int)param_1 + 0xe0) = (int)param_1 + 0x128;
    *(int *)((int)param_1 + 0x228) = local_4;
    if (local_4 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



bool __fastcall FUN_653c57a0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_653c5750(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)((int)param_1 + 0x228) = 0;
  }
  return iVar1 != 0;
}



undefined4 __fastcall FUN_653c57c0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)param_1 + 200) == 6) {
    bVar1 = FUN_653c5720(param_1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_653c4df0(param_1,7);
    }
  }
  if (*(int *)((int)param_1 + 200) == 7) {
    iVar2 = FUN_653c5750(param_1);
    if (iVar2 != 0) {
      FUN_653c4df0(param_1,6);
      uVar3 = 1;
    }
  }
  return uVar3;
}



int __fastcall FUN_653c58d0(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int local_4;
  
  local_4 = 1;
  do {
    if (*(int *)((int)param_1 + 0xf0) == 0) {
      *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xe4);
      *(int *)((int)param_1 + 0xf8) = 1 << ((byte)*(undefined4 *)((int)param_1 + 0xe4) & 0x1f);
    }
    iVar2 = *(int *)((int)param_1 + 0xf4);
    *(undefined4 *)((int)param_1 + 0xf0) = 0;
    while (0 < iVar2) {
      if (*(int *)((int)param_1 + 0xec) == 0) {
        iVar2 = 1;
        if (*(int *)((int)param_1 + 0x228) == 0) {
          iVar2 = FUN_653c57c0(param_1);
        }
        if (iVar2 == 0) {
          *(undefined4 *)((int)param_1 + 0xf0) = 1;
          break;
        }
        *(undefined4 *)((int)param_1 + 0xec) = 8;
        uVar1 = **(undefined1 **)((int)param_1 + 0xe0);
        *(undefined1 **)((int)param_1 + 0xe0) = *(undefined1 **)((int)param_1 + 0xe0) + 1;
        *(undefined1 *)((int)param_1 + 0x110) = uVar1;
        *(int *)((int)param_1 + 0x228) = *(int *)((int)param_1 + 0x228) + -1;
      }
      if ((*(byte *)((int)param_1 + 0x110) & 1) != 0) {
        *(uint *)((int)param_1 + 0xfc) =
             *(uint *)((int)param_1 + 0xfc) | *(uint *)((int)param_1 + 0xf8);
      }
      *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) >> 1;
      *(byte *)((int)param_1 + 0x110) = *(byte *)((int)param_1 + 0x110) >> 1;
      *(int *)((int)param_1 + 0xec) = *(int *)((int)param_1 + 0xec) + -1;
      if (*(int *)((int)param_1 + 0xf0) == 0) {
        *(int *)((int)param_1 + 0xf4) = *(int *)((int)param_1 + 0xf4) + -1;
      }
      iVar2 = *(int *)((int)param_1 + 0xf4);
    }
    if (*(int *)((int)param_1 + 0xf0) != 0) {
      local_4 = 0;
      goto LAB_653c5a09;
    }
    *(undefined4 *)((int)param_1 + 0x100) = *(undefined4 *)((int)param_1 + 0xfc);
    *(int *)((int)param_1 + 0x104) = *(int *)((int)param_1 + 0x100);
    if (*(int *)((int)param_1 + 0x100) != *(int *)((int)param_1 + 0x114)) {
LAB_653c5a09:
      if (*(int *)((int)param_1 + 0x114) <= *(int *)((int)param_1 + 0x100)) {
        FUN_653d0410(s_m_decompress_info_first_code_<_m_653dc21c,
                     s_d__OA_src_stdtypes_filtgif_cpp_653dc1fc,0x553);
      }
      if (local_4 != 0) {
        *(code **)((int)param_1 + 0xc0) = FUN_653c5cb0;
        *(undefined1 *)((int)param_1 + 0x108) = *(undefined1 *)((int)param_1 + 0x100);
        *(undefined4 *)((int)param_1 + 0xcc) = 2;
        *(undefined4 *)((int)param_1 + 0xc4) = 0;
      }
      return local_4;
    }
  } while( true );
}



undefined4 __fastcall FUN_653c5a80(void *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)param_1 + 0x10c) == 0) {
    iVar2 = 0;
    *(undefined4 *)((int)param_1 + 0x10c) = 1;
    if (0 < *(int *)((int)param_1 + 0x114)) {
      piVar3 = (int *)((int)param_1 + 0x422c);
      do {
        piVar3[-0x1000] = 0;
        *piVar3 = iVar2;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)((int)param_1 + 0x114));
    }
    if (iVar2 < 0x1000) {
      puVar4 = (undefined4 *)((int)param_1 + iVar2 * 4 + 0x422c);
      iVar2 = 0x1000 - iVar2;
      do {
        puVar4[-0x1000] = 0;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)((int)param_1 + 0x100) = 0;
    *(int *)((int)param_1 + 0xe4) = *(int *)((int)param_1 + 0xe8) + 1;
    *(int *)((int)param_1 + 0x124) = (int)param_1 + 0x822c;
    *(undefined4 *)((int)param_1 + 0x104) = 0;
    *(int *)((int)param_1 + 0x120) = *(int *)((int)param_1 + 0x114) + 2;
    *(int *)((int)param_1 + 0x11c) = *(int *)((int)param_1 + 0x114) * 2;
    *(undefined1 *)((int)param_1 + 0x108) = *(undefined1 *)((int)param_1 + 0x100);
  }
  if (*(int *)((int)param_1 + 0xf0) == 0) {
    *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xe4);
    *(int *)((int)param_1 + 0xf8) = 1 << ((byte)*(undefined4 *)((int)param_1 + 0xe4) & 0x1f);
  }
  iVar2 = *(int *)((int)param_1 + 0xf4);
  *(undefined4 *)((int)param_1 + 0xf0) = 0;
  do {
    if (iVar2 < 1) {
LAB_653c5c34:
      if (*(int *)((int)param_1 + 0xf0) != 0) {
        return 0;
      }
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      *(undefined4 *)((int)param_1 + 0x100) = *(undefined4 *)((int)param_1 + 0xfc);
      *(undefined4 *)((int)param_1 + 0x104) = *(undefined4 *)((int)param_1 + 0xfc);
      *(undefined1 *)((int)param_1 + 0x108) = *(undefined1 *)((int)param_1 + 0x100);
      *(code **)((int)param_1 + 0xc0) = FUN_653c5cb0;
      *(undefined4 *)((int)param_1 + 0xcc) = 2;
      *(undefined4 *)((int)param_1 + 0xc4) = 0;
      return 1;
    }
    if (*(int *)((int)param_1 + 0xec) == 0) {
      iVar2 = 1;
      if (*(int *)((int)param_1 + 0x228) == 0) {
        iVar2 = FUN_653c57c0(param_1);
      }
      if (iVar2 == 0) {
        *(undefined4 *)((int)param_1 + 0xf0) = 1;
        goto LAB_653c5c34;
      }
      *(undefined4 *)((int)param_1 + 0xec) = 8;
      uVar1 = **(undefined1 **)((int)param_1 + 0xe0);
      *(undefined1 **)((int)param_1 + 0xe0) = *(undefined1 **)((int)param_1 + 0xe0) + 1;
      *(undefined1 *)((int)param_1 + 0x110) = uVar1;
      *(int *)((int)param_1 + 0x228) = *(int *)((int)param_1 + 0x228) + -1;
    }
    if ((*(byte *)((int)param_1 + 0x110) & 1) != 0) {
      *(uint *)((int)param_1 + 0xfc) =
           *(uint *)((int)param_1 + 0xfc) | *(uint *)((int)param_1 + 0xf8);
    }
    *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) >> 1;
    *(byte *)((int)param_1 + 0x110) = *(byte *)((int)param_1 + 0x110) >> 1;
    *(int *)((int)param_1 + 0xec) = *(int *)((int)param_1 + 0xec) + -1;
    if (*(int *)((int)param_1 + 0xf0) == 0) {
      *(int *)((int)param_1 + 0xf4) = *(int *)((int)param_1 + 0xf4) + -1;
    }
    iVar2 = *(int *)((int)param_1 + 0xf4);
  } while( true );
}



undefined4 __fastcall FUN_653c5cb0(void *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  uVar2 = *(uint *)((int)param_1 + 0x124);
  if (uVar2 <= (int)param_1 + 0x822cU) {
    do {
      if (*(int *)((int)param_1 + 0xf0) == 0) {
        *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0xe4);
        *(int *)((int)param_1 + 0xf8) = 1 << ((byte)*(undefined4 *)((int)param_1 + 0xe4) & 0x1f);
      }
      iVar5 = *(int *)((int)param_1 + 0xf4);
      *(undefined4 *)((int)param_1 + 0xf0) = 0;
      while (0 < iVar5) {
        if (*(int *)((int)param_1 + 0xec) == 0) {
          iVar5 = 1;
          if (*(int *)((int)param_1 + 0x228) == 0) {
            iVar5 = FUN_653c57c0(param_1);
          }
          if (iVar5 == 0) {
            *(undefined4 *)((int)param_1 + 0xf0) = 1;
            break;
          }
          *(undefined4 *)((int)param_1 + 0xec) = 8;
          uVar1 = **(undefined1 **)((int)param_1 + 0xe0);
          *(undefined1 **)((int)param_1 + 0xe0) = *(undefined1 **)((int)param_1 + 0xe0) + 1;
          *(undefined1 *)((int)param_1 + 0x110) = uVar1;
          *(int *)((int)param_1 + 0x228) = *(int *)((int)param_1 + 0x228) + -1;
        }
        if ((*(byte *)((int)param_1 + 0x110) & 1) != 0) {
          *(uint *)((int)param_1 + 0xfc) =
               *(uint *)((int)param_1 + 0xfc) | *(uint *)((int)param_1 + 0xf8);
        }
        *(byte *)((int)param_1 + 0x110) = *(byte *)((int)param_1 + 0x110) >> 1;
        *(int *)((int)param_1 + 0xfc) = *(int *)((int)param_1 + 0xfc) >> 1;
        *(int *)((int)param_1 + 0xec) = *(int *)((int)param_1 + 0xec) + -1;
        if (*(int *)((int)param_1 + 0xf0) == 0) {
          *(int *)((int)param_1 + 0xf4) = *(int *)((int)param_1 + 0xf4) + -1;
        }
        iVar5 = *(int *)((int)param_1 + 0xf4);
      }
      if (*(int *)((int)param_1 + 0xf0) != 0) {
        return 0;
      }
      iVar5 = *(int *)((int)param_1 + 0xfc);
      iVar8 = *(int *)((int)param_1 + 0x114);
      if (iVar5 == iVar8) {
        iVar5 = FUN_653c5a80(param_1);
        if (iVar5 != 0) {
          return 1;
        }
        *(code **)((int)param_1 + 0xc0) = FUN_653c5a80;
        *(undefined4 *)((int)param_1 + 0xcc) = 3;
        *(undefined4 *)((int)param_1 + 0xc4) = 0;
        return 0;
      }
      if (iVar5 == *(int *)((int)param_1 + 0x118)) goto LAB_653c5faa;
      *(int *)((int)param_1 + 0xfc) = iVar5;
      if (*(int *)((int)param_1 + 0x120) <= iVar5) {
        puVar6 = *(undefined4 **)((int)param_1 + 0x124);
        *puVar6 = *(undefined4 *)((int)param_1 + 0x100);
        puVar6 = puVar6 + 1;
        *(undefined4 **)((int)param_1 + 0x124) = puVar6;
        if ((undefined4 *)((int)param_1 + 0x1022cU) <= puVar6) {
          FUN_653d0410(s_m_decompress_info_code_sp_<_&(m__653dc2d4,
                       s_d__OA_src_stdtypes_filtgif_cpp_653dc2b4,0x5ec);
        }
        iVar5 = *(int *)((int)param_1 + 0x104);
      }
      while (iVar8 <= iVar5) {
        puVar6 = *(undefined4 **)((int)param_1 + 0x124);
        *puVar6 = *(undefined4 *)((int)param_1 + iVar5 * 4 + 0x422c);
        *(undefined4 **)((int)param_1 + 0x124) = puVar6 + 1;
        iVar3 = *(int *)((int)param_1 + iVar5 * 4 + 0x22c);
        bVar9 = iVar5 == iVar3;
        iVar5 = iVar3;
        if (bVar9) {
          FUN_653d0410(s_code____m_decompress_info_code_t_653dc340,
                       s_d__OA_src_stdtypes_filtgif_cpp_653dc320,0x5f4);
        }
      }
      puVar6 = *(undefined4 **)((int)param_1 + 0x124);
      uVar4 = *(undefined4 *)((int)param_1 + iVar5 * 4 + 0x422c);
      *(undefined4 *)((int)param_1 + 0x100) = uVar4;
      *puVar6 = uVar4;
      iVar5 = *(int *)((int)param_1 + 0x120);
      *(undefined4 **)((int)param_1 + 0x124) = puVar6 + 1;
      if (iVar5 < 0x1000) {
        *(undefined4 *)((int)param_1 + iVar5 * 4 + 0x22c) = *(undefined4 *)((int)param_1 + 0x104);
        *(undefined4 *)((int)param_1 + iVar5 * 4 + 0x422c) = *(undefined4 *)((int)param_1 + 0x100);
        iVar5 = *(int *)((int)param_1 + 0x11c);
        iVar8 = *(int *)((int)param_1 + 0x120) + 1;
        *(int *)((int)param_1 + 0x120) = iVar8;
        if ((iVar5 <= iVar8) && (iVar5 < 0x1000)) {
          *(int *)((int)param_1 + 0x11c) = iVar5 * 2;
          *(int *)((int)param_1 + 0xe4) = *(int *)((int)param_1 + 0xe4) + 1;
        }
      }
      *(undefined4 *)((int)param_1 + 0x104) = *(undefined4 *)((int)param_1 + 0xfc);
      if ((int)param_1 + 0x822cU < *(uint *)((int)param_1 + 0x124)) {
        piVar7 = (int *)(*(int *)((int)param_1 + 0x124) + -4);
        *(int **)((int)param_1 + 0x124) = piVar7;
        if (*(int *)((int)param_1 + 0x114) <= *piVar7) {
          FUN_653d0410(s___m_decompress_info_code_sp__<_m_653dc390,
                       s_d__OA_src_stdtypes_filtgif_cpp_653dc370,0x60d);
        }
        *(undefined1 *)((int)param_1 + 0x108) = *(undefined1 *)piVar7;
        return 1;
      }
    } while( true );
  }
  iVar5 = *(int *)(uVar2 - 4);
  iVar8 = *(int *)((int)param_1 + 0x114);
  *(undefined1 **)((int)param_1 + 0x124) = (undefined1 *)(uVar2 - 4);
  if ((iVar5 < iVar8) ||
     (FUN_653d0410(s___m_decompress_info_code_sp__<_m_653dc278,
                   s_d__OA_src_stdtypes_filtgif_cpp_653dc258,0x5ba), iVar5 < iVar8)) {
    *(undefined1 *)((int)param_1 + 0x108) = *(undefined1 *)(uVar2 - 4);
    return 1;
  }
LAB_653c5faa:
  *(undefined1 **)((int)param_1 + 0xc0) = &LAB_653c5a70;
  *(undefined4 *)((int)param_1 + 0xcc) = 4;
  *(undefined4 *)((int)param_1 + 0xc4) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 7;
  return 0;
}



void __thiscall FUN_653c6050(void *this,byte param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (*(int *)((int)this + 0x18) < 1) {
    bVar2 = 0xf0;
    bVar3 = param_1 << 4;
  }
  else {
    bVar2 = 0xf;
    bVar3 = param_1 & 0xf;
  }
  bVar1 = **(byte **)((int)this + 0x24);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 4;
  **(byte **)((int)this + 0x24) = ~bVar2 & bVar1 | bVar3;
  return;
}



int __thiscall FUN_653c62c0(void *this,int *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x10248) == *(int *)(*(int *)((int)this + 0x28) + 8)) {
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x28))(this,param_1);
  }
  iVar4 = *(int *)((int)this + 0x10248);
  if (0 < iVar4) {
    do {
      local_8 = (**(code **)((int)this + 0xc0))();
      if ((local_8 == 0) || (*(int *)((int)this + 0xcc) == 4)) break;
      cVar1 = *(char *)((int)this + 0x108);
      cVar2 = *(char *)((int)this + 0x1025c);
      iVar4 = *(int *)((int)this + 0x10268);
      iVar3 = *(int *)((int)this + 0x10260);
      (**(code **)((int)this + 0x10254))(cVar1);
      if (iVar3 != 0) {
        if (cVar2 == cVar1) {
          *(undefined1 *)(*(int *)((int)this + 0x10234) + iVar4) = 0;
        }
        else {
          *(undefined1 *)(*(int *)((int)this + 0x10234) + iVar4) = 1;
        }
      }
      if (7 < *(int *)((int)this + 0x10244)) {
        *(undefined4 *)((int)this + 0x10244) = 0;
        *(int *)((int)this + 0x10250) = *(int *)((int)this + 0x10250) + 1;
      }
      iVar3 = *(int *)((int)this + 0x10234) + 1;
      iVar4 = *(int *)(*(int *)((int)this + 0x28) + 4);
      *(int *)((int)this + 0x10234) = iVar3;
      if (iVar4 <= iVar3) {
        *(undefined4 *)((int)this + 0x10234) = 0;
        if (*(int *)((int)this + 0x1022c) == 0) {
          iVar4 = *(int *)((int)this + 0x10238) + 1;
LAB_653c63e6:
          *(int *)((int)this + 0x10238) = iVar4;
        }
        else {
          iVar4 = *(int *)((int)this + 0x10238) +
                  *(int *)(&DAT_653dc3e0 + *(int *)((int)this + 0x10240) * 4);
          *(int *)((int)this + 0x10238) = iVar4;
          if (*(int *)(*(int *)((int)this + 0x28) + 8) <= iVar4) {
            iVar4 = *(int *)((int)this + 0x10240) + 1;
            *(int *)((int)this + 0x10240) = iVar4;
            iVar4 = *(int *)(&DAT_653dc3d0 + iVar4 * 4);
            *(int *)((int)this + 0x1024c) = iVar4;
            goto LAB_653c63e6;
          }
        }
        FUN_653c6450(this,param_1);
                    // WARNING: Load size is inaccurate
        *(undefined4 *)((int)this + 0x10250) = *(undefined4 *)((int)this + 0x10258);
        *(int *)((int)this + 0x10248) = *(int *)((int)this + 0x10248) + -1;
        *(undefined4 *)((int)this + 0x10244) = 0;
        (**(code **)(*this + 0x24))(param_1);
      }
    } while (0 < *(int *)((int)this + 0x10248));
    iVar4 = *(int *)((int)this + 0x10248);
  }
  if (iVar4 == 0) {
    local_8 = 1;
  }
  return local_8;
}



void __thiscall FUN_653c6450(void *this,int *param_1)

{
  HDC pHVar1;
  HGDIOBJ pvVar2;
  HPALETTE hPal;
  int iVar3;
  BITMAPINFO *pBVar4;
  LONG LVar5;
  void *lpBits;
  int iVar6;
  HGDIOBJ pvVar7;
  HPALETTE pHVar8;
  int mode;
  uint ColorUse;
  int unaff_retaddr;
  HGDIOBJ pvVar9;
  HGDIOBJ h;
  HPALETTE pHStack_38;
  int iStack_2c;
  RECT RStack_28;
  tagRECT tStack_18;
  undefined4 uStack_4;
  
  RStack_28.top = *param_1;
  iVar6 = (**(code **)(RStack_28.top + 0x10))(param_1,0xffffffff);
  if (-1 < iVar6) {
    pHVar1 = (HDC)**(undefined4 **)((int)this + 0x20);
    if (pHVar1 == (HDC)0x0) {
      FUN_653d0410(s_NULL____m_dc_653dc400,s_d__OA_src_stdtypes_filtgif_cpp_653dc410,0x683);
    }
    pvVar2 = (HGDIOBJ)**(undefined4 **)((int)this + 0x2c);
    if (pvVar2 == (HGDIOBJ)0x0) {
      FUN_653d0410(s_NULL____m_dib_653dc3f0,s_d__OA_src_stdtypes_filtgif_cpp_653dc410,0x684);
    }
    iVar6 = SetMapMode(pHVar1,1);
    h = (HGDIOBJ)0x0;
    pHStack_38 = (HPALETTE)0x0;
    hPal = (HPALETTE)**(undefined4 **)((int)this + 0x40);
    ColorUse = (uint)(hPal != (HPALETTE)0x0);
    pvVar7 = GetCurrentObject(pHVar1,7);
    if (pvVar7 != pvVar2) {
      h = SelectObject(pHVar1,pvVar2);
    }
    if (hPal != (HPALETTE)0x0) {
      pHVar8 = (HPALETTE)GetCurrentObject(pHVar1,5);
      if (pHVar8 != hPal) {
        pHStack_38 = SelectPalette(pHVar1,hPal,0);
      }
    }
    iVar3 = *(int *)((int)this + 0x1024c);
    if (iVar3 < 2) {
      pBVar4 = *(BITMAPINFO **)((int)this + 0x28);
      RStack_28.left = 0;
      RStack_28.right = (pBVar4->bmiHeader).biWidth;
      RStack_28.bottom = unaff_retaddr + 1;
      pHVar1 = (HDC)**(undefined4 **)((int)this + 0x20);
      SetDIBitsToDevice(pHVar1,0,unaff_retaddr,RStack_28.right,RStack_28.bottom - unaff_retaddr,0,
                        unaff_retaddr,unaff_retaddr,1,*(void **)((int)this + 0x10258),pBVar4,
                        ColorUse);
      if ((*(int *)((int)this + 0x10260) != 0) &&
         (pvVar2 = (HGDIOBJ)**(undefined4 **)((int)this + 0x44), pvVar2 != (HGDIOBJ)0x0)) {
        pvVar9 = (HGDIOBJ)0x0;
        pvVar7 = GetCurrentObject((HDC)**(undefined4 **)((int)this + 0x24),7);
        if (pvVar7 != pvVar2) {
          pvVar9 = SelectObject(pHVar1,pvVar2);
        }
        SetDIBitsToDevice(pHVar1,0,unaff_retaddr,(pBVar4->bmiHeader).biWidth,1,0,0,0,1,
                          *(void **)((int)this + 0x10268),*(BITMAPINFO **)((int)this + 0x10264),0);
        if (pvVar9 != (HGDIOBJ)0x0) {
          SelectObject(pHVar1,pvVar9);
        }
      }
    }
    else {
      mode = SetStretchBltMode(pHVar1,3);
      pBVar4 = *(BITMAPINFO **)((int)this + 0x28);
      RStack_28.left = 0;
      RStack_28.right = (pBVar4->bmiHeader).biWidth;
      RStack_28.bottom = unaff_retaddr + iVar3;
      pHVar1 = (HDC)**(undefined4 **)((int)this + 0x20);
      LVar5 = (pBVar4->bmiHeader).biHeight;
      lpBits = *(void **)((int)this + 0x10258);
      (pBVar4->bmiHeader).biHeight = 1;
      StretchDIBits(pHVar1,0,unaff_retaddr,RStack_28.right,RStack_28.bottom - unaff_retaddr,0,0,
                    (pBVar4->bmiHeader).biWidth,1,lpBits,pBVar4,ColorUse,0xcc0020);
      iVar3 = *(int *)((int)this + 0x10260);
      (pBVar4->bmiHeader).biHeight = LVar5;
      if ((iVar3 != 0) &&
         (pvVar2 = (HGDIOBJ)**(undefined4 **)((int)this + 0x44), pvVar2 != (HGDIOBJ)0x0)) {
        pvVar9 = (HGDIOBJ)0x0;
        pvVar7 = GetCurrentObject((HDC)**(undefined4 **)((int)this + 0x24),7);
        if (pvVar7 != pvVar2) {
          pvVar9 = SelectObject(pHVar1,pvVar2);
        }
        StretchDIBits(pHVar1,0,unaff_retaddr,(pBVar4->bmiHeader).biWidth,
                      *(int *)((int)this + 0x1024c),0,0,
                      ((*(BITMAPINFO **)((int)this + 0x10264))->bmiHeader).biWidth,1,
                      *(void **)((int)this + 0x10268),*(BITMAPINFO **)((int)this + 0x10264),0,
                      0xcc0020);
        if (pvVar9 != (HGDIOBJ)0x0) {
          SelectObject(pHVar1,pvVar9);
        }
      }
      SetStretchBltMode(pHVar1,mode);
    }
    UnionRect(&tStack_18,&RStack_28,(RECT *)((int)this + 0x54));
    ((RECT *)((int)this + 0x54))->left = tStack_18.left;
    *(LONG *)((int)this + 0x58) = tStack_18.top;
    *(LONG *)((int)this + 0x5c) = tStack_18.right;
    *(LONG *)((int)this + 0x60) = tStack_18.bottom;
    pHVar1 = (HDC)**(undefined4 **)((int)this + 0x20);
    SetMapMode(pHVar1,iVar6);
    if (h != (HGDIOBJ)0x0) {
      SelectObject(pHVar1,h);
    }
    if (pHStack_38 != (HPALETTE)0x0) {
      SelectPalette(pHVar1,pHStack_38,0);
    }
    (**(code **)(iStack_2c + 0x14))(uStack_4);
  }
  return;
}



undefined4 * __fastcall FUN_653c67c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_653c3d10(param_1);
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *param_1 = &PTR_FUN_653c24f0;
  param_1[1] = &PTR_LAB_653c24d0;
  param_1[2] = &PTR_LAB_653c24b8;
  param_1[3] = &PTR_LAB_653c2488;
  param_1[4] = &PTR_LAB_653c2468;
  param_1[5] = &PTR_LAB_653c2450;
  puVar2 = param_1 + 0x30;
  for (iVar1 = 0x6a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x9a;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xcf] = 0;
  return param_1;
}



undefined4 * __thiscall FUN_653c6840(void *this,byte param_1)

{
  FUN_653c6860((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_653d0390((undefined *)this);
  }
  return (undefined4 *)this;
}



void __fastcall FUN_653c6860(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_653c24f0;
  param_1[1] = &PTR_LAB_653c24d0;
  param_1[2] = &PTR_LAB_653c24b8;
  param_1[3] = &PTR_LAB_653c2488;
  param_1[4] = &PTR_LAB_653c2468;
  param_1[5] = &PTR_LAB_653c2450;
  if ((undefined *)param_1[0xcc] != (undefined *)0x0) {
    FUN_653d0390((undefined *)param_1[0xcc]);
    param_1[0xcc] = 0;
  }
  FUN_653c3e40(param_1);
  return;
}



int * FUN_653c68c0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_653d0b30(0x340);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_653c67c0(puVar1);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return piVar2;
}



undefined4 FUN_653c68f0(int *param_1,char *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = 0x10;
  bVar4 = true;
  pcVar2 = "";
  pcVar3 = param_2;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  *param_3 = 0;
  if (!bVar4) {
    iVar1 = 0x10;
    bVar4 = true;
    pcVar2 = &DAT_653c25a8;
    pcVar3 = param_2;
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
      pcVar2 = &DAT_653c2538;
      pcVar3 = param_2;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        if (param_1 != (int *)0x0) {
          *param_3 = (int)(param_1 + 3);
          goto LAB_653c69ba;
        }
      }
      else {
        iVar1 = 0x10;
        bVar4 = true;
        pcVar2 = &DAT_653c2548;
        pcVar3 = param_2;
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *pcVar2 == *pcVar3;
          pcVar2 = pcVar2 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar4);
        if (bVar4) {
          if (param_1 != (int *)0x0) {
            *param_3 = (int)(param_1 + 4);
            goto LAB_653c69ba;
          }
        }
        else {
          iVar1 = 0x10;
          bVar4 = true;
          pcVar2 = &DAT_653c2558;
          pcVar3 = param_2;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *pcVar2 == *pcVar3;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (bVar4) {
            if (param_1 != (int *)0x0) {
              *param_3 = (int)(param_1 + 2);
              goto LAB_653c69ba;
            }
          }
          else {
            iVar1 = 0x10;
            bVar4 = true;
            pcVar2 = "\t\x01";
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar4 = *pcVar2 == *param_2;
              pcVar2 = pcVar2 + 1;
              param_2 = param_2 + 1;
            } while (bVar4);
            if (!bVar4) goto LAB_653c69ba;
            if (param_1 != (int *)0x0) {
              *param_3 = (int)(param_1 + 1);
              goto LAB_653c69ba;
            }
          }
        }
      }
      *param_3 = 0;
      goto LAB_653c69ba;
    }
  }
  *param_3 = (int)param_1;
LAB_653c69ba:
  if (*param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1);
    return 0;
  }
  return 0x80004002;
}



void __thiscall FUN_653c69e0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x338);
  if (iVar1 == 0) {
    iVar1 = FUN_653c6b20((int)this);
    if (-1 < iVar1) {
      if (iVar1 != 0) {
        return;
      }
      *(undefined4 *)((int)this + 0x338) = 1;
      *(undefined4 *)((int)this + 0x34) = 3;
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      FUN_653c6f50((int)this);
      *(undefined4 *)((int)this + 0x34) = 7;
      return;
    }
    iVar1 = FUN_653c6ce0(this,param_1);
    if (-1 < iVar1) {
      if (iVar1 != 0) {
        return;
      }
      *(undefined4 *)((int)this + 0x338) = 2;
      return;
    }
  }
  *(undefined4 *)((int)this + 0x34) = 7;
  return;
}



void FUN_653c6a60(void)

{
  return;
}



void __fastcall FUN_653c6a90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_653ccf43((undefined4 *)(param_1 + 0x268));
  *(int *)(param_1 + 0xc0) = iVar1;
  *(undefined4 *)(param_1 + 0x268) = &LAB_653c6a70;
  *(code **)(param_1 + 0x26c) = FUN_653c6a60;
  *(code **)(param_1 + 0x270) = FUN_653c6a60;
  FUN_653c735e((int *)(param_1 + 0xc0));
  return;
}



undefined4 __fastcall FUN_653c6b20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  iVar2 = __setjmp3((undefined4 *)(param_1 + 0x2ec),0,(void *)0x1,param_1);
  if (iVar2 != 0) {
    FUN_653c73bc(param_1 + 0xc0);
    return uVar4;
  }
  iVar2 = FUN_653c73c7((int *)(param_1 + 0xc0),'\x01');
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_653d0b40(0x428);
    *(undefined4 **)(param_1 + 0x28) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      FUN_653d0410(s_NULL____m_bminfo_653dc450,s_d__OA_src_stdtypes_filtjpeg_cpp_653dc430,0xd9);
    }
    else {
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x28);
      uVar4 = *(undefined4 *)(param_1 + 0xd8);
      uVar1 = *(undefined4 *)(param_1 + 0xdc);
      *puVar3 = 0x28;
      puVar3[1] = uVar4;
      puVar3[2] = uVar1;
      *(undefined2 *)(puVar3 + 3) = 1;
      *(undefined2 *)((int)puVar3 + 0xe) = 0x18;
      puVar3[8] = 0;
      iVar2 = puVar3[1] * (uint)*(ushort *)((int)puVar3 + 0xe) + 0x1f;
      iVar2 = FUN_653d0b30(CONCAT31((int3)(iVar2 >> 0xb),(char)(iVar2 >> 3)) & 0xfffffffc);
      *(int *)(param_1 + 0x330) = iVar2;
      if (iVar2 != 0) {
        uVar4 = FUN_653c6c50(param_1);
        return uVar4;
      }
      FUN_653d0410(s_NULL____m_pCurLine_653dc484,s_d__OA_src_stdtypes_filtjpeg_cpp_653dc464,0xe9);
    }
    return 0x8007000e;
  }
  return uVar4;
}



undefined4 __fastcall FUN_653c6c50(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80004005;
  iVar1 = __setjmp3((undefined4 *)(param_1 + 0x2ec),0,(void *)0x80004005,param_1);
  if (iVar1 != 0) {
    FUN_653c73bc(param_1 + 0xc0);
    return uVar3;
  }
  uVar2 = FUN_653c7660((int *)(param_1 + 0xc0));
  if ((char)uVar2 != '\0') {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc4) + 8))
                      ((int *)(param_1 + 0xc0),1,
                       *(int *)(param_1 + 0x11c) * *(int *)(param_1 + 0x128),1);
    *(int *)(param_1 + 0x32c) = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  return uVar3;
}



undefined4 __thiscall FUN_653c6ce0(void *this,int *param_1)

{
  undefined1 uVar1;
  HDC pHVar2;
  HBITMAP hbm;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  HPALETTE hPal;
  HGDIOBJ h;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  int local_10;
  
  if (*(int *)((int)this + 0x33c) == 0) {
    *(undefined4 *)((int)this + 0x33c) = 1;
                    // WARNING: Load size is inaccurate
    (**(code **)(*this + 0x28))(this,param_1);
  }
  iVar3 = __setjmp3((undefined4 *)((int)this + 0x2ec),0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    FUN_653c73bc((int)this + 0xc0);
    return 1;
  }
  if (*(int *)((int)this + 0x334) < *(int *)(*(int *)((int)this + 0x28) + 8)) {
    do {
      puVar10 = *(undefined1 **)((int)this + 0x330);
      piVar4 = FUN_653c77c2((int *)((int)this + 0xc0),*(undefined4 *)((int)this + 0x32c),1);
      if (piVar4 == (int *)0x0) break;
      local_10 = 0;
      puVar11 = *(undefined4 **)((int)this + 0x330);
      for (uVar9 = (uint)((int)((uint)*(ushort *)(*(int *)((int)this + 0x28) + 0xe) *
                                *(int *)(*(int *)((int)this + 0x28) + 4) + 0x1f) >> 3) >> 2;
          uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      iVar3 = *(int *)((int)this + 0x28);
      puVar6 = (undefined1 *)**(undefined4 **)((int)this + 0x32c);
      if (0 < *(int *)(iVar3 + 4)) {
        do {
          if (*(int *)((int)this + 0xe0) == 3) {
            uVar8 = *puVar6;
            uVar1 = puVar6[1];
            puVar5 = puVar6 + 2;
            puVar6 = puVar6 + 3;
            *puVar10 = *puVar5;
            puVar10[1] = uVar1;
          }
          else {
            if (*(int *)((int)this + 0xe0) != 1) {
              FUN_653c73bc((int)this + 0xc0);
              return 0x80004005;
            }
            uVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar10 = uVar8;
            puVar10[1] = uVar8;
          }
          puVar10[2] = uVar8;
          puVar10 = puVar10 + 3;
          local_10 = local_10 + 1;
        } while (local_10 < *(int *)(iVar3 + 4));
      }
      iVar3 = *param_1;
      iVar7 = (**(code **)(iVar3 + 0x10))(param_1,0xffffffff);
      if (-1 < iVar7) {
        pHVar2 = (HDC)**(undefined4 **)((int)this + 0x20);
        if (pHVar2 == (HDC)0x0) {
          FUN_653d0410(s_NULL____m_dc_653dc4ec,s_d__OA_src_stdtypes_filtjpeg_cpp_653dc4cc,0x156);
        }
        hbm = (HBITMAP)**(undefined4 **)((int)this + 0x2c);
        if (hbm == (HBITMAP)0x0) {
          FUN_653d0410(s_NULL____m_dib_653dc51c,s_d__OA_src_stdtypes_filtjpeg_cpp_653dc4fc,0x157);
        }
        hPal = SelectPalette(pHVar2,(HPALETTE)**(undefined4 **)((int)this + 0x40),1);
        iVar7 = *(int *)((int)this + 0x334);
        SetDIBits(pHVar2,hbm,
                  (((*(BITMAPINFO **)((int)this + 0x28))->bmiHeader).biHeight - iVar7) - 1,1,
                  *(void **)((int)this + 0x330),*(BITMAPINFO **)((int)this + 0x28),0);
        pHVar2 = (HDC)**(undefined4 **)((int)this + 0x20);
        SelectPalette(pHVar2,hPal,1);
        if ((HGDIOBJ)**(undefined4 **)((int)this + 0x44) != (HGDIOBJ)0x0) {
          h = SelectObject(pHVar2,(HGDIOBJ)**(undefined4 **)((int)this + 0x44));
          PatBlt(pHVar2,0,iVar7,*(int *)(*(int *)((int)this + 0x28) + 4),1,0x42);
          SelectObject((HDC)**(undefined4 **)((int)this + 0x20),h);
        }
        (**(code **)(iVar3 + 0x14))(param_1);
      }
                    // WARNING: Load size is inaccurate
      (**(code **)(*this + 0x24))(param_1);
      iVar7 = *(int *)((int)this + 0x334) + 1;
      iVar3 = *(int *)(*(int *)((int)this + 0x28) + 8);
      *(int *)((int)this + 0x334) = iVar7;
    } while (iVar7 < iVar3);
  }
  if (*(int *)(*(int *)((int)this + 0x28) + 8) <= *(int *)((int)this + 0x334)) {
    return 0;
  }
  return 1;
}



undefined4 __fastcall FUN_653c6f50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80004005;
  iVar1 = __setjmp3((undefined4 *)(param_1 + 0x2ec),0,(void *)0x80004005,param_1);
  if (iVar1 != 0) {
    FUN_653c73bc(param_1 + 0xc0);
    return uVar3;
  }
  uVar2 = FUN_653c75cc((int *)(param_1 + 0xc0));
  if ((char)uVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_653c73bc(param_1 + 0xc0);
    return 0;
  }
  return uVar3;
}



void __cdecl FUN_653c7020(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x28);
    *(int *)(param_1 + 0x14) = iVar2;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x1000);
    *(undefined4 *)(iVar2 + 0x20) = uVar3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  puVar1[2] = &LAB_653c7090;
  puVar1[3] = FUN_653c70a0;
  puVar1[4] = FUN_653c7100;
  puVar1[5] = FUN_653c9ee1;
  puVar1[6] = &DAT_653c7140;
  puVar1[7] = param_2;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}



undefined1 __cdecl FUN_653c70a0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  
  piVar2 = param_1;
  uVar4 = 1;
  puVar1 = (undefined4 *)param_1[5];
  iVar3 = FUN_653c4030((void *)puVar1[7],puVar1[8],0x1000,&param_1);
  if (iVar3 < 0) {
    if (*(char *)(puVar1 + 9) != '\0') {
      *(undefined4 *)(*piVar2 + 0x14) = 0x27;
      (**(code **)*piVar2)(piVar2);
    }
    param_1 = (int *)0x0;
    uVar4 = 0;
  }
  *puVar1 = puVar1[8];
  puVar1[1] = param_1;
  *(undefined1 *)(puVar1 + 9) = 0;
  return uVar4;
}



void __cdecl FUN_653c7100(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[5];
  if (0 < param_2) {
    iVar2 = piVar1[1];
    if (iVar2 < param_2) {
      do {
        param_2 = param_2 - iVar2;
        FUN_653c70a0(param_1);
        iVar2 = piVar1[1];
      } while (iVar2 < param_2);
    }
    *piVar1 = *piVar1 + param_2;
    piVar1[1] = piVar1[1] - param_2;
  }
  return;
}



undefined4
FilterCreateInstance(char *param_1,int param_2,byte param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
                    // 0x7150  2  FilterCreateInstance
  if (param_2 != 0) {
    return 0x80040110;
  }
  if ((param_3 & 1) == 0) {
    return 0x80070057;
  }
  iVar4 = 0x10;
  bVar7 = true;
  pcVar5 = &DAT_653c25c8;
  pcVar6 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar7 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  *param_5 = 0;
  if (bVar7) {
    piVar2 = FUN_653c4880();
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 3;
      goto LAB_653c71c8;
    }
  }
  else {
    iVar4 = 0x10;
    bVar7 = true;
    pcVar5 = &DAT_653c25d8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar5 == *param_1;
      pcVar5 = pcVar5 + 1;
      param_1 = param_1 + 1;
    } while (bVar7);
    if (!bVar7) {
      return 0x80004005;
    }
    piVar2 = FUN_653c68c0();
    if (piVar2 != (int *)0x0) {
      piVar2 = piVar2 + 3;
      goto LAB_653c71c8;
    }
  }
  piVar2 = (int *)0x0;
LAB_653c71c8:
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  puVar1 = (undefined4 *)*piVar2;
  uVar3 = (*(code *)*puVar1)(piVar2,param_4,param_5);
  (*(code *)puVar1[2])(piVar2);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_653c7200(int param_1)

{
  ATOM AVar1;
  ATOM *pAVar2;
  
  if (param_1 != 0) {
    _DAT_653e0ed0 = 0;
    _DAT_653e0ed4 = 0;
    _DAT_653e0ed8 = 0;
    _DAT_653e0edc = 0;
    AVar1 = GlobalAddAtomA(s_MS_AsyncImage_DCWait_653dc52c);
    _DAT_653e0ed4 = CONCAT22(AVar1,_DAT_653e0ed4);
    AVar1 = GlobalAddAtomA(s_MS_AsyncImage_Display_653dc544);
    _DAT_653e0ed8 = CONCAT22(AVar1,_DAT_653e0ed8);
    AVar1 = GlobalAddAtomA(s_MS_AsyncImage_Abnormal_653dc55c);
    _DAT_653e0edc = CONCAT22(_DAT_653e0ede,AVar1);
    AVar1 = GlobalAddAtomA(s_MS_AsyncImage_Finished_653dc574);
    _DAT_653e0edc = CONCAT22(AVar1,_DAT_653e0edc);
    return 0;
  }
  pAVar2 = &DAT_653e0ed0;
  do {
    if (*pAVar2 != 0) {
      GlobalDeleteAtom(*pAVar2);
    }
    pAVar2 = pAVar2 + 1;
  } while ((int)pAVar2 < 0x653e0ee0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_653c7290(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    _DAT_653e0ee0 = 0;
    FUN_653c7200(0);
  }
  else if (param_2 == 1) {
    _DAT_653e0ee0 = param_1;
    FUN_653c7200(1);
    return 1;
  }
  return 1;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x72d0  1  DllCanUnloadNow
  return (uint)(DAT_653e0ec8 != 0);
}



void __cdecl FUN_653c72e0(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  *(uint *)(param_1 + 0x10) = (-(uint)(*(char *)(param_1 + 0xc) != '\0') & 100) + 100;
  return;
}



void __cdecl FUN_653c730b(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void __cdecl FUN_653c7326(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x82);
  *(undefined1 *)(iVar1 + 0x80) = 0;
  return;
}



void __cdecl FUN_653c7342(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x112);
  *(undefined1 *)(iVar1 + 0x111) = 0;
  return;
}



void __cdecl FUN_653c735e(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  piVar1 = param_1;
  for (iVar2 = 0x6a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  *param_1 = iVar3;
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_653cdad7(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  piVar1 = param_1 + 0x2c;
  iVar3 = 4;
  do {
    piVar1[-4] = 0;
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_653ca002((int)param_1);
  FUN_653c93b2((int)param_1);
  param_1[4] = 200;
  return;
}



void __cdecl FUN_653c73bc(int param_1)

{
  FUN_653c730b(param_1);
  return;
}



int __cdecl FUN_653c73c7(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if ((iVar2 != 200) && (iVar2 != 0xc9)) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x11;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
  }
  iVar2 = FUN_653c7427(param_1);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else if (iVar2 == 2) {
      if (param_2 != '\0') {
        puVar1 = (undefined4 *)*param_1;
        puVar1[5] = 0x30;
        (*(code *)*puVar1)(param_1);
      }
      FUN_653c72e0((int)param_1);
      iVar2 = 2;
    }
  }
  return iVar2;
}



int __cdecl FUN_653c7427(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if (iVar2 == 200) {
    (**(code **)(param_1[99] + 4))(param_1);
    (**(code **)(param_1[5] + 8))(param_1);
    param_1[4] = 0xc9;
  }
  else if (iVar2 != 0xc9) {
    if (iVar2 == 0xca) {
      return 1;
    }
    if ((0xca < iVar2) && ((iVar2 < 0xd1 || (iVar2 == 0xd2)))) {
      iVar2 = (**(code **)param_1[99])(param_1);
      return iVar2;
    }
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x11;
    puVar1[6] = iVar2;
    (*(code *)*puVar1)(param_1);
    return 0;
  }
  iVar2 = (**(code **)param_1[99])(param_1);
  if (iVar2 == 1) {
    FUN_653c74c0((int)param_1);
    param_1[4] = 0xca;
  }
  return iVar2;
}



void __cdecl FUN_653c74c0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x28) = 1;
    goto LAB_653c758b;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      if ((*(char *)(param_1 + 0x106) == '\0') || (*(char *)(param_1 + 0x107) == '\0')) {
        *(undefined4 *)(param_1 + 0x24) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 5;
      }
      *(undefined4 *)(param_1 + 0x28) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    goto LAB_653c758b;
  }
  if (*(char *)(param_1 + 0x100) == '\0') {
    if (*(char *)(param_1 + 0x106) == '\0') {
      piVar2 = *(int **)(param_1 + 0xc4);
      if ((((*piVar2 == 1) && (piVar2[0x15] == 2)) && (piVar2[0x2a] == 3)) ||
         (((*piVar2 != 0x52 || (piVar2[0x15] != 0x47)) || (piVar2[0x2a] != 0x42)))) {
        *(undefined4 *)(param_1 + 0x24) = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0x24) = 2;
      }
    }
    else {
      if (*(char *)(param_1 + 0x107) != '\0') goto LAB_653c752e;
      *(undefined4 *)(param_1 + 0x24) = 2;
    }
  }
  else {
LAB_653c752e:
    *(undefined4 *)(param_1 + 0x24) = 3;
  }
  *(undefined4 *)(param_1 + 0x28) = 2;
LAB_653c758b:
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x100;
  return;
}



undefined4 __cdecl FUN_653c75cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[4];
  if (((iVar2 == 0xcd) || (iVar2 == 0xce)) && ((char)param_1[0x10] == '\0')) {
    if ((uint)param_1[0x1e] < (uint)param_1[0x18]) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x40;
      (*(code *)*puVar1)(param_1);
    }
    (**(code **)(param_1[0x5f] + 4))(param_1);
  }
  else if (iVar2 != 0xcf) {
    if (iVar2 != 0xd2) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x11;
      puVar1[6] = iVar2;
      (*(code *)*puVar1)(param_1);
    }
    goto LAB_653c7635;
  }
  param_1[4] = 0xd2;
LAB_653c7635:
  do {
    if (*(char *)(param_1[99] + 0x11) != '\0') {
      (**(code **)(param_1[5] + 0x18))(param_1);
      uVar3 = FUN_653c72e0((int)param_1);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    iVar2 = (**(code **)param_1[99])(param_1);
  } while (iVar2 != 0);
  return 0;
}



uint __cdecl FUN_653c7660(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[4] == 0xca) {
    uVar3 = FUN_653cb219(param_1);
    if ((char)param_1[0x10] != '\0') {
      param_1[4] = 0xcf;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    param_1[4] = 0xcb;
  }
  iVar4 = param_1[4];
  if (iVar4 == 0xcb) {
    if (*(char *)(param_1[99] + 0x10) != '\0') {
      while( true ) {
        if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
          (**(code **)param_1[2])(param_1);
        }
        iVar4 = (**(code **)param_1[99])(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        if (iVar4 == 2) break;
        iVar1 = param_1[2];
        if ((iVar1 != 0) && ((iVar4 == 3 || (iVar4 == 1)))) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          if (*(int *)(iVar1 + 8) <= *(int *)(iVar1 + 4)) {
            *(int *)(iVar1 + 8) = param_1[0x46] + *(int *)(iVar1 + 8);
          }
        }
      }
    }
    param_1[0x21] = param_1[0x1f];
  }
  else if (iVar4 != 0xcc) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x11;
    puVar2[6] = iVar4;
    (*(code *)*puVar2)(param_1);
  }
  uVar5 = FUN_653c771d((int)param_1);
  return uVar5;
}



uint __cdecl FUN_653c771d(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x17c))(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xcc;
  }
  if (*(char *)(*(int *)(param_1 + 0x17c) + 8) != '\0') {
    puVar1 = (uint *)(param_1 + 0x78);
    do {
      uVar4 = *puVar1;
      while (uVar2 = *(uint *)(param_1 + 0x60), uVar4 < uVar2) {
        puVar3 = *(undefined4 **)(param_1 + 8);
        if (puVar3 != (undefined4 *)0x0) {
          puVar3[1] = uVar4;
          puVar3[2] = uVar2;
          (*(code *)*puVar3)(param_1);
        }
        uVar2 = *puVar1;
        (**(code **)(*(int *)(param_1 + 0x180) + 4))(param_1,0,puVar1,0);
        uVar4 = *puVar1;
        if (uVar4 == uVar2) {
          return uVar4 & 0xffffff00;
        }
      }
      (**(code **)(*(int *)(param_1 + 0x17c) + 4))(param_1);
      (*(code *)**(undefined4 **)(param_1 + 0x17c))(param_1);
      *puVar1 = 0;
    } while (*(char *)(*(int *)(param_1 + 0x17c) + 8) != '\0');
  }
  iVar5 = (*(char *)(param_1 + 0x41) != '\0') + 0xcd;
  *(int *)(param_1 + 0x10) = iVar5;
  return CONCAT31((int3)((uint)iVar5 >> 8),1);
}



int * __cdecl FUN_653c77c2(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = param_1;
  iVar1 = param_1[4];
  if (iVar1 != 0xcd) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x11;
    puVar2[6] = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  uVar3 = piVar4[0x18];
  if ((uint)piVar4[0x1e] < uVar3) {
    puVar2 = (undefined4 *)piVar4[2];
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = piVar4[0x1e];
      puVar2[2] = uVar3;
      (*(code *)*puVar2)(piVar4);
    }
    param_1 = (int *)0x0;
    (**(code **)(piVar4[0x60] + 4))(piVar4,param_2,&param_1,param_3);
    piVar4[0x1e] = piVar4[0x1e] + (int)param_1;
  }
  else {
    param_1 = (int *)0x0;
  }
  return param_1;
}



void __cdecl FUN_653c7827(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = param_1;
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x184) = puVar3;
  *puVar3 = &LAB_653c791f;
  puVar3[2] = &LAB_653c7975;
  puVar3[0x1c] = 0;
  if (param_2 == '\0') {
    iVar4 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar8 = puVar3 + 8;
    iVar9 = 10;
    do {
      *piVar8 = iVar4;
      piVar8 = piVar8 + 1;
      iVar4 = iVar4 + 0x80;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    puVar3[1] = &LAB_653c7b97;
    puVar3[3] = FUN_653c79b2;
    puVar3[4] = 0;
  }
  else {
    piVar8 = (int *)(param_1 + 0x20);
    piVar1 = (int *)(param_1 + 0xc4);
    param_1 = 0;
    if (0 < *piVar8) {
      piVar8 = (int *)(*piVar1 + 0xc);
      _param_2 = puVar3 + 0x12;
      do {
        iVar4 = *piVar8;
        iVar7 = iVar4;
        if (*(char *)(iVar9 + 200) != '\0') {
          iVar7 = iVar4 * 3;
        }
        iVar2 = *(int *)(iVar9 + 4);
        iVar4 = FUN_653d007b(piVar8[5],iVar4);
        iVar5 = FUN_653d007b(piVar8[4],piVar8[-1]);
        uVar6 = (**(code **)(iVar2 + 0x14))(iVar9,1,1,iVar5,iVar4,iVar7);
        param_1 = param_1 + 1;
        *_param_2 = uVar6;
        piVar8 = piVar8 + 0x15;
        _param_2 = _param_2 + 1;
      } while (param_1 < *(int *)(iVar9 + 0x20));
    }
    puVar3[1] = FUN_653c7b9a;
    puVar3[3] = FUN_653c7d2a;
    puVar3[4] = puVar3 + 0x12;
  }
  return;
}



void __cdecl FUN_653c7932(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x184);
  if (*(int *)(param_1 + 0x120) < 2) {
    if (*(uint *)(param_1 + 0x80) < *(int *)(param_1 + 0x118) - 1U) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0xc);
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x48);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  }
  else {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}



undefined4 __cdecl FUN_653c79b2(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_30;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  iVar7 = param_1;
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x184);
  uVar11 = *(int *)(param_1 + 0x134) - 1;
  iVar10 = *(int *)(iVar2 + 0x18);
  do {
    if (*(int *)(iVar2 + 0x1c) <= iVar10) {
      *(int *)(iVar7 + 0x88) = *(int *)(iVar7 + 0x88) + 1;
      *(int *)(iVar7 + 0x80) = *(int *)(iVar7 + 0x80) + 1;
      if (*(uint *)(iVar7 + 0x80) < *(uint *)(iVar7 + 0x118)) {
        FUN_653c7932(iVar7);
        uVar12 = 3;
      }
      else {
        (**(code **)(*(int *)(iVar7 + 0x18c) + 0xc))(iVar7);
        uVar12 = 4;
      }
      return uVar12;
    }
    for (uVar3 = *(uint *)(iVar2 + 0x14); uVar3 <= uVar11; uVar3 = uVar3 + 1) {
      FUN_653d00fc(*(undefined4 **)(iVar2 + 0x20),*(int *)(iVar7 + 0x13c) << 7);
      cVar8 = (**(code **)(*(int *)(iVar7 + 0x194) + 4))(iVar7,iVar2 + 0x20);
      if (cVar8 == '\0') {
        *(int *)(iVar2 + 0x18) = iVar10;
        *(uint *)(iVar2 + 0x14) = uVar3;
        return 0;
      }
      param_1 = 0;
      local_28 = 0;
      if (0 < *(int *)(iVar7 + 0x120)) {
        local_24 = param_2;
        local_20 = (int *)(iVar7 + 0x124);
        do {
          iVar4 = *local_20;
          if (*(char *)(iVar4 + 0x30) == '\0') {
            param_1 = param_1 + *(int *)(iVar4 + 0x3c);
          }
          else {
            pcVar5 = *(code **)(*(int *)(iVar7 + 0x198) + 4 + *(int *)(iVar4 + 4) * 4);
            if (uVar3 < uVar11) {
              iVar9 = *(int *)(iVar4 + 0x34);
            }
            else {
              iVar9 = *(int *)(iVar4 + 0x44);
            }
            local_10 = 0;
            local_1c = *local_24 + iVar10 * *(int *)(iVar4 + 0x24) * 4;
            iVar6 = *(int *)(iVar4 + 0x40);
            if (0 < *(int *)(iVar4 + 0x38)) {
              do {
                if (((*(uint *)(iVar7 + 0x80) < iVar1 - 1U) ||
                    (iVar10 + local_10 < *(int *)(iVar4 + 0x48))) && (0 < iVar9)) {
                  local_18 = (undefined4 *)(iVar2 + 0x20 + param_1 * 4);
                  local_30 = iVar9;
                  local_14 = iVar6 * uVar3;
                  do {
                    (*pcVar5)(iVar7,iVar4,*local_18,local_1c,local_14);
                    local_18 = local_18 + 1;
                    local_14 = local_14 + *(int *)(iVar4 + 0x24);
                    local_30 = local_30 + -1;
                  } while (local_30 != 0);
                }
                param_1 = param_1 + *(int *)(iVar4 + 0x34);
                local_10 = local_10 + 1;
                local_1c = local_1c + *(int *)(iVar4 + 0x24) * 4;
              } while (local_10 < *(int *)(iVar4 + 0x38));
            }
          }
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
          local_24 = local_24 + 1;
        } while (local_28 < *(int *)(iVar7 + 0x120));
      }
    }
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar10 = iVar10 + 1;
  } while( true );
}



undefined4 __cdecl FUN_653c7b9a(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_38 [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_1;
  local_c = 0;
  iVar1 = param_1[0x61];
  if (0 < param_1[0x48]) {
    local_8 = local_38;
    param_1 = param_1 + 0x49;
    do {
      iVar4 = *(int *)(*param_1 + 0xc);
      iVar4 = (**(code **)(piVar2[1] + 0x20))
                        (piVar2,*(undefined4 *)(iVar1 + 0x48 + *(int *)(*param_1 + 4) * 4),
                         piVar2[0x20] * iVar4,iVar4,1);
      param_1 = param_1 + 1;
      local_c = local_c + 1;
      piVar7 = local_8 + 1;
      *local_8 = iVar4;
      local_8 = piVar7;
    } while (local_c < piVar2[0x48]);
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  do {
    local_24 = iVar4;
    if (*(int *)(iVar1 + 0x1c) <= iVar4) {
      piVar2[0x20] = piVar2[0x20] + 1;
      if ((uint)piVar2[0x20] < (uint)piVar2[0x46]) {
        FUN_653c7932((int)piVar2);
        uVar8 = 3;
      }
      else {
        (**(code **)(piVar2[99] + 0xc))(piVar2);
        uVar8 = 4;
      }
      return uVar8;
    }
    for (param_1 = *(int **)(iVar1 + 0x14); param_1 < (int *)piVar2[0x4d];
        param_1 = (int *)((int)param_1 + 1)) {
      local_c = 0;
      if (0 < piVar2[0x48]) {
        local_14 = local_38;
        local_10 = piVar2 + 0x49;
        local_20 = piVar2[0x48];
        do {
          local_18 = *(int *)(*local_10 + 0x34);
          iVar6 = *(int *)(*local_10 + 0x38);
          if (0 < iVar6) {
            local_28 = (int)param_1 * local_18 * 0x80;
            local_8 = (int *)(*local_14 + iVar4 * 4);
            local_1c = iVar6;
            do {
              iVar6 = local_28 + *local_8;
              if (0 < local_18) {
                piVar7 = (int *)(iVar1 + 0x20 + local_c * 4);
                local_c = local_c + local_18;
                iVar5 = local_18;
                do {
                  *piVar7 = iVar6;
                  piVar7 = piVar7 + 1;
                  iVar6 = iVar6 + 0x80;
                  iVar5 = iVar5 + -1;
                  iVar4 = local_24;
                } while (iVar5 != 0);
              }
              local_8 = local_8 + 1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      cVar3 = (**(code **)(piVar2[0x65] + 4))(piVar2,iVar1 + 0x20);
      if (cVar3 == '\0') {
        *(int *)(iVar1 + 0x18) = iVar4;
        *(int **)(iVar1 + 0x14) = param_1;
        return 0;
      }
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    iVar4 = iVar4 + 1;
  } while( true );
}



int __cdecl FUN_653c7d2a(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint local_1c;
  int local_18;
  int *local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x184);
  while ((*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84) ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          (*(uint *)(param_1 + 0x80) <= *(uint *)(param_1 + 0x88)))))) {
    iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x18c))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  local_18 = 0;
  iVar4 = *(int *)(param_1 + 0xc4);
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar5 = (undefined4 *)(iVar2 + 0x48);
    local_14 = param_2;
    iVar2 = 4 - (int)param_2;
    do {
      if (*(char *)(iVar4 + 0x30) != '\0') {
        local_10 = (undefined4 *)
                   (**(code **)(*(int *)(param_1 + 4) + 0x20))
                             (param_1,*puVar5,*(int *)(param_1 + 0x88) * *(int *)(iVar4 + 0xc),
                              *(int *)(iVar4 + 0xc),0);
        if (*(uint *)(param_1 + 0x88) < iVar1 - 1U) {
          local_1c = *(uint *)(iVar4 + 0xc);
        }
        else {
          local_1c = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
          if (local_1c == 0) {
            local_1c = *(uint *)(iVar4 + 0xc);
          }
        }
        pcVar3 = *(code **)(*(int *)(param_1 + 0x198) + iVar2 + (int)local_14);
        local_c = *local_14;
        if (0 < (int)local_1c) {
          do {
            iVar6 = 0;
            local_8 = 0;
            param_2 = (int *)*local_10;
            if (*(int *)(iVar4 + 0x1c) != 0) {
              do {
                (*pcVar3)(param_1,iVar4,param_2,local_c,iVar6);
                param_2 = param_2 + 0x20;
                iVar6 = iVar6 + *(int *)(iVar4 + 0x24);
                local_8 = local_8 + 1;
              } while (local_8 < *(uint *)(iVar4 + 0x1c));
            }
            local_10 = local_10 + 1;
            local_1c = local_1c - 1;
            local_c = local_c + *(int *)(iVar4 + 0x24) * 4;
          } while (local_1c != 0);
        }
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + 1;
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_18 < *(int *)(param_1 + 0x20));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return 4 - (uint)(*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x118));
}



uint __cdecl FUN_653c7e9a(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  iVar2 = param_1;
  param_1 = 0;
  param_1._0_1_ = 0;
  iVar5 = *(int *)(iVar2 + 0x184);
  if ((*(char *)(iVar2 + 200) == '\0') || (*(int *)(iVar2 + 0x8c) == 0)) {
LAB_653c7f66:
    uVar4 = (uint)in_EAX & 0xffffff00;
  }
  else {
    if (*(int *)(iVar5 + 0x70) == 0) {
      uVar3 = (*(code *)**(undefined4 **)(iVar2 + 4))(iVar2,1,*(int *)(iVar2 + 0x20) * 0x18);
      *(undefined4 *)(iVar5 + 0x70) = uVar3;
    }
    iVar7 = *(int *)(iVar5 + 0x70);
    iVar5 = *(int *)(iVar2 + 0xc4);
    local_10 = 0;
    if (0 < *(int *)(iVar2 + 0x20)) {
      local_c = (undefined4 *)(iVar5 + 0x4c);
      local_8 = 0;
      do {
        in_EAX = (int *)*local_c;
        if (in_EAX == (int *)0x0) goto LAB_653c7f66;
        iVar5 = 0;
        do {
          if ((short)*in_EAX == 0) goto LAB_653c7f66;
          iVar5 = iVar5 + 1;
          in_EAX = (int *)((int)in_EAX + 2);
        } while (iVar5 < 6);
        in_EAX = (int *)(*(int *)(iVar2 + 0x8c) + local_8);
        if (*in_EAX < 0) goto LAB_653c7f66;
        iVar6 = iVar7 - (int)in_EAX;
        iVar5 = 5;
        do {
          in_EAX = in_EAX + 1;
          iVar1 = *in_EAX;
          *(int *)(iVar6 + (int)in_EAX) = iVar1;
          if (iVar1 != 0) {
            param_1 = 1;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        local_8 = local_8 + 0x100;
        local_c = local_c + 0x15;
        iVar7 = iVar7 + 0x18;
        iVar5 = local_10 + 1;
        local_10 = iVar5;
      } while (iVar5 < *(int *)(iVar2 + 0x20));
    }
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),(undefined1)param_1);
  }
  return uVar4;
}



int __cdecl FUN_653c7f6d(int param_1,int *param_2)

{
  uint uVar1;
  ushort *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_10c;
  short local_108;
  short local_fc;
  short local_fa;
  short local_ec;
  uint local_8c;
  code *local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  short *local_74;
  short *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  short *local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar6 = *(int *)(param_1 + 0x184);
  local_8c = *(int *)(param_1 + 0x118) - 1;
  local_80 = iVar6;
  while( true ) {
    if (((*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x7c)) ||
        (*(char *)((int)*(undefined4 **)(param_1 + 0x18c) + 0x11) != '\0')) ||
       ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
        ((uint)(*(int *)(param_1 + 0x168) == 0) + *(int *)(param_1 + 0x88) <
         *(uint *)(param_1 + 0x80))))) break;
    iVar4 = (*(code *)**(undefined4 **)(param_1 + 0x18c))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0xc4);
  local_58 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_4c = 0;
    local_50 = param_2;
    local_14 = (undefined4 *)(iVar6 + 0x48);
    local_64 = -0x44 - iVar6;
    do {
      if (*(char *)(iVar4 + 0x30) != '\0') {
        uVar1 = *(uint *)(param_1 + 0x88);
        uVar9 = *(uint *)(iVar4 + 0xc);
        if (uVar1 < local_8c) {
          bVar3 = false;
          uVar5 = uVar9 * 2;
          local_c = uVar9;
        }
        else {
          local_c = *(uint *)(iVar4 + 0x20) % uVar9;
          if (local_c == 0) {
            local_c = uVar9;
          }
          bVar3 = true;
          uVar5 = local_c;
        }
        if (uVar1 == 0) {
          local_48 = (**(code **)(*(int *)(param_1 + 4) + 0x20))(param_1,*local_14,0,uVar5,0);
        }
        else {
          local_48 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                               (param_1,*local_14,(uVar1 - 1) * uVar9,uVar5 + uVar9,0);
          local_48 = local_48 + *(int *)(iVar4 + 0xc) * 4;
        }
        local_8 = *(int *)(local_80 + 0x70) + local_4c;
        puVar2 = *(ushort **)(iVar4 + 0x4c);
        local_10 = (uint)*puVar2;
        local_28 = (uint)puVar2[1];
        local_20 = (uint)puVar2[2];
        local_40 = (uint)puVar2[3];
        local_18 = (uint)puVar2[4];
        local_38 = (uint)puVar2[5];
        local_88 = *(code **)(*(int *)(param_1 + 0x198) + local_64 + (int)local_14);
        local_60 = *local_50;
        local_44 = 0;
        if (0 < (int)local_c) {
          do {
            local_34 = *(short **)(local_48 + local_44 * 4);
            if ((uVar1 != 0) || (local_74 = local_34, local_44 != 0)) {
              local_74 = *(short **)(local_48 + local_44 * 4 + -4);
            }
            if ((!bVar3) || (local_70 = local_34, local_44 != local_c - 1)) {
              local_70 = *(short **)(local_48 + 4 + local_44 * 4);
            }
            local_78 = (int)*local_74;
            local_68 = 0;
            local_3c = 0;
            local_6c = (int)*local_34;
            local_7c = (int)*local_70;
            uVar9 = *(int *)(iVar4 + 0x1c) - 1;
            local_70 = local_70 + 0x40;
            local_74 = local_74 + 0x40;
            local_84 = uVar9;
            local_30 = local_78;
            local_2c = local_7c;
            local_1c = local_6c;
            do {
              local_5c = local_2c;
              local_54 = local_30;
              local_24 = local_1c;
              FUN_653d00da((undefined4 *)local_34,&local_10c,1);
              if (local_3c < uVar9) {
                local_54 = (int)*local_74;
                local_1c = (int)local_34[0x40];
                local_5c = (int)*local_70;
              }
              if ((*(int *)(local_8 + 4) != 0) && (local_10c._2_2_ == 0)) {
                iVar6 = (local_6c - local_1c) * local_10;
                iVar7 = iVar6 * 0x24;
                if (iVar7 < 0) {
                  iVar6 = (int)(local_28 * 0x80 + iVar6 * -0x24) / (int)(local_28 << 8);
                  if ((0 < *(int *)(local_8 + 4)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 4) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                  iVar6 = -iVar6;
                }
                else {
                  iVar6 = (int)(local_28 * 0x80 + iVar7) / (int)(local_28 << 8);
                  if ((0 < *(int *)(local_8 + 4)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 4) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                }
                local_10c._2_2_ = (short)iVar6;
              }
              iVar6 = *(int *)(local_8 + 8);
              if ((iVar6 != 0) && (local_fc == 0)) {
                iVar7 = (local_30 - local_2c) * local_10;
                iVar8 = iVar7 * 0x24;
                if (iVar8 < 0) {
                  iVar7 = (int)(local_20 * 0x80 + iVar7 * -0x24) / (int)(local_20 << 8);
                  if ((0 < iVar6) && (iVar6 = 1 << ((byte)iVar6 & 0x1f), iVar6 <= iVar7)) {
                    iVar7 = iVar6 + -1;
                  }
                  iVar7 = -iVar7;
                }
                else {
                  iVar7 = (int)(local_20 * 0x80 + iVar8) / (int)(local_20 << 8);
                  if ((0 < iVar6) && (iVar6 = 1 << ((byte)iVar6 & 0x1f), iVar6 <= iVar7)) {
                    iVar7 = iVar6 + -1;
                  }
                }
                local_fc = (short)iVar7;
                uVar9 = local_84;
              }
              if ((*(int *)(local_8 + 0xc) != 0) && (local_ec == 0)) {
                iVar7 = (local_2c + local_24 * -2 + local_30) * local_10;
                iVar6 = iVar7 * 9;
                if (iVar6 < 0) {
                  iVar6 = (int)(local_40 * 0x80 + iVar7 * -9) / (int)(local_40 << 8);
                  if ((0 < *(int *)(local_8 + 0xc)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0xc) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                  iVar6 = -iVar6;
                }
                else {
                  iVar6 = (int)(local_40 * 0x80 + iVar6) / (int)(local_40 << 8);
                  if ((0 < *(int *)(local_8 + 0xc)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0xc) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                }
                local_ec = (short)iVar6;
              }
              if ((*(int *)(local_8 + 0x10) != 0) && (local_fa == 0)) {
                iVar7 = (((local_78 + local_5c) - local_54) - local_7c) * local_10;
                iVar6 = iVar7 * 5;
                if (iVar6 < 0) {
                  iVar6 = (int)(local_18 * 0x80 + iVar7 * -5) / (int)(local_18 << 8);
                  if ((0 < *(int *)(local_8 + 0x10)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0x10) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                  iVar6 = -iVar6;
                }
                else {
                  iVar6 = (int)(local_18 * 0x80 + iVar6) / (int)(local_18 << 8);
                  if ((0 < *(int *)(local_8 + 0x10)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0x10) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                }
                local_fa = (short)iVar6;
              }
              if ((*(int *)(local_8 + 0x14) != 0) && (local_108 == 0)) {
                iVar7 = (local_1c + local_24 * -2 + local_6c) * local_10;
                iVar6 = iVar7 * 9;
                if (iVar6 < 0) {
                  iVar6 = (int)(local_38 * 0x80 + iVar7 * -9) / (int)(local_38 << 8);
                  if ((0 < *(int *)(local_8 + 0x14)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0x14) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                  iVar6 = -iVar6;
                }
                else {
                  iVar6 = (int)(local_38 * 0x80 + iVar6) / (int)(local_38 << 8);
                  if ((0 < *(int *)(local_8 + 0x14)) &&
                     (iVar7 = 1 << ((byte)*(int *)(local_8 + 0x14) & 0x1f), iVar7 <= iVar6)) {
                    iVar6 = iVar7 + -1;
                  }
                }
                local_108 = (short)iVar6;
              }
              (*local_88)(param_1,iVar4,&local_10c,local_60,local_68);
              local_78 = local_30;
              local_30 = local_54;
              local_6c = local_24;
              local_24 = local_1c;
              local_7c = local_2c;
              local_2c = local_5c;
              local_34 = local_34 + 0x40;
              local_74 = local_74 + 0x40;
              local_70 = local_70 + 0x40;
              local_68 = local_68 + *(int *)(iVar4 + 0x24);
              local_3c = local_3c + 1;
            } while (local_3c <= uVar9);
            local_44 = local_44 + 1;
            local_60 = local_60 + *(int *)(iVar4 + 0x24) * 4;
          } while (local_44 < (int)local_c);
        }
      }
      local_58 = local_58 + 1;
      local_4c = local_4c + 0x18;
      local_14 = local_14 + 1;
      local_50 = local_50 + 1;
      iVar4 = iVar4 + 0x54;
    } while (local_58 < *(int *)(param_1 + 0x20));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return 4 - (uint)(*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x118));
}



void __cdecl FUN_653c84ce(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  bool bVar5;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  iVar4 = param_1[9];
  param_1[0x68] = (int)puVar2;
  *puVar2 = &DAT_653c89a4;
  if (iVar4 == 1) {
    bVar5 = param_1[8] == 1;
LAB_653c851d:
    if (!bVar5) {
LAB_653c851f:
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 8;
      (*(code *)*puVar1)(param_1);
    }
  }
  else {
    if (1 < iVar4) {
      if (iVar4 < 4) {
        bVar5 = param_1[8] == 3;
      }
      else {
        if (5 < iVar4) goto LAB_653c8513;
        bVar5 = param_1[8] == 4;
      }
      goto LAB_653c851d;
    }
LAB_653c8513:
    if (param_1[8] < 1) goto LAB_653c851f;
  }
  iVar4 = param_1[10];
  if (iVar4 == 1) {
    param_1[0x19] = 1;
    if ((param_1[9] == 1) || (param_1[9] == 3)) {
      iVar4 = param_1[8];
      puVar2[1] = FUN_653c8833;
      if (1 < iVar4) {
        puVar3 = (undefined1 *)(param_1[0x31] + 0x84);
        iVar4 = iVar4 + -1;
        do {
          *puVar3 = 0;
          puVar3 = puVar3 + 0x54;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      goto LAB_653c85d1;
    }
  }
  else if (iVar4 == 2) {
    param_1[0x19] = 3;
    if (param_1[9] == 3) {
      puVar2[1] = FUN_653c86aa;
LAB_653c8578:
      FUN_653c85ea((int)param_1);
      goto LAB_653c85d1;
    }
    if (param_1[9] == 2) goto LAB_653c8585;
  }
  else if (iVar4 == 4) {
    param_1[0x19] = 4;
    if (param_1[9] == 5) {
      puVar2[1] = FUN_653c8856;
      goto LAB_653c8578;
    }
    if (param_1[9] == 4) goto LAB_653c8585;
  }
  else if (iVar4 == param_1[9]) {
    param_1[0x19] = param_1[8];
LAB_653c8585:
    puVar2[1] = FUN_653c87bd;
    goto LAB_653c85d1;
  }
  puVar2 = (undefined4 *)*param_1;
  puVar2[5] = 0x17;
  (*(code *)*puVar2)(param_1);
LAB_653c85d1:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
  }
  else {
    param_1[0x1a] = 1;
  }
  return;
}



void __cdecl FUN_653c85ea(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 8) = uVar1;
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 0x10) = uVar1;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  piVar3 = *(int **)(iVar5 + 0xc);
  *(int *)(iVar5 + 0x14) = iVar2;
  iVar4 = *(int *)(iVar5 + 8) - (int)piVar3;
  iVar5 = *(int *)(iVar5 + 0x10) - (int)piVar3;
  local_c = 0x5b6900;
  local_8 = -0xe25100;
  param_1 = -0xb2f480;
  iVar6 = 0x2c8d00;
  iVar2 = iVar2 - (int)piVar3;
  do {
    *(int *)(iVar4 + (int)piVar3) = param_1 >> 0x10;
    *(int *)(iVar2 + (int)piVar3) = iVar6;
    *piVar3 = local_8 >> 0x10;
    *(int *)(iVar5 + (int)piVar3) = local_c;
    iVar6 = iVar6 + -0x581a;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 0x166e9;
    local_c = local_c + -0xb6d2;
    local_8 = local_8 + 0x1c5a2;
  } while (-0x2b34e7 < iVar6);
  return;
}



void __cdecl FUN_653c86aa(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  int iVar19;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  iVar6 = *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x11c);
  iVar8 = *(int *)(iVar5 + 8);
  iVar9 = *(int *)(iVar5 + 0xc);
  iVar10 = *(int *)(iVar5 + 0x10);
  iVar5 = *(int *)(iVar5 + 0x14);
  if (-1 < param_5 + -1) {
    iVar11 = param_2[1];
    iVar12 = *param_2;
    iVar13 = param_2[2];
    puVar14 = (undefined4 *)(iVar11 + param_3 * 4);
    param_2 = (int *)param_5;
    do {
      piVar1 = (int *)((iVar12 - iVar11) + (int)puVar14);
      pbVar18 = (byte *)*puVar14;
      piVar2 = (int *)((iVar13 - iVar11) + (int)puVar14);
      puVar14 = puVar14 + 1;
      if (iVar6 != 0) {
        iVar15 = *piVar1 - (int)pbVar18;
        iVar19 = *piVar2 - (int)pbVar18;
        puVar17 = (undefined1 *)*param_4;
        param_5 = iVar6;
        do {
          bVar3 = pbVar18[iVar19];
          uVar16 = (uint)pbVar18[iVar15];
          bVar4 = *pbVar18;
          *puVar17 = *(undefined1 *)(*(int *)(iVar8 + (uint)bVar3 * 4) + iVar7 + uVar16);
          puVar17[1] = *(undefined1 *)
                        ((*(int *)(iVar5 + (uint)bVar4 * 4) + *(int *)(iVar10 + (uint)bVar3 * 4) >>
                         0x10) + iVar7 + uVar16);
          pbVar18 = pbVar18 + 1;
          param_5 = param_5 + -1;
          puVar17[2] = *(undefined1 *)(*(int *)(iVar9 + (uint)bVar4 * 4) + iVar7 + uVar16);
          puVar17 = puVar17 + 3;
        } while (param_5 != 0);
      }
      param_2 = (int *)((int)param_2 + -1);
      param_4 = param_4 + 1;
    } while (param_2 != (int *)0x0);
  }
  return;
}



void __cdecl FUN_653c87bd(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (-1 < param_5 + -1) {
    local_8 = param_5;
    param_5 = param_3 << 2;
    do {
      iVar8 = 0;
      if (0 < iVar3) {
        iVar5 = *param_4;
        piVar9 = param_2;
        do {
          puVar6 = *(undefined1 **)(*piVar9 + param_5);
          puVar7 = (undefined1 *)(iVar8 + iVar5);
          for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
            uVar2 = *puVar6;
            puVar6 = puVar6 + 1;
            *puVar7 = uVar2;
            puVar7 = puVar7 + iVar3;
          }
          iVar8 = iVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (iVar8 < iVar3);
      }
      param_5 = param_5 + 4;
      param_4 = param_4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



void __cdecl FUN_653c8833(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  FUN_653d0093(*param_2,param_3,param_4,0,param_5,*(uint *)(param_1 + 0x5c));
  return;
}



void __cdecl FUN_653c8856(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  iVar8 = *(int *)(param_1 + 0x1a0);
  piVar9 = *(int **)(param_1 + 0x5c);
  iVar10 = *(int *)(param_1 + 0x11c);
  iVar11 = *(int *)(iVar8 + 8);
  iVar12 = *(int *)(iVar8 + 0xc);
  iVar13 = *(int *)(iVar8 + 0x10);
  iVar8 = *(int *)(iVar8 + 0x14);
  if (-1 < param_5 + -1) {
    iVar14 = param_2[1];
    iVar15 = *param_2;
    iVar16 = param_2[2];
    iVar17 = param_2[3];
    puVar20 = (undefined4 *)(iVar14 + param_3 * 4);
    param_3 = param_5;
    do {
      piVar1 = (int *)((iVar15 - iVar14) + (int)puVar20);
      piVar2 = (int *)((iVar16 - iVar14) + (int)puVar20);
      piVar3 = (int *)((iVar17 - iVar14) + (int)puVar20);
      pbVar19 = (byte *)*puVar20;
      puVar20 = puVar20 + 1;
      if (piVar9 != (int *)0x0) {
        iVar22 = *piVar1 - (int)pbVar19;
        iVar21 = *piVar2 - (int)pbVar19;
        iVar23 = *piVar3 - (int)pbVar19;
        puVar18 = (undefined1 *)*param_4;
        param_2 = piVar9;
        do {
          bVar5 = pbVar19[iVar21];
          bVar6 = *pbVar19;
          *puVar18 = *(undefined1 *)
                      (((iVar10 - *(int *)(iVar11 + (uint)bVar5 * 4)) - (uint)pbVar19[iVar22]) +
                      0xff);
          bVar7 = pbVar19[iVar22];
          puVar18[1] = *(undefined1 *)
                        (((iVar10 - (*(int *)(iVar8 + (uint)bVar6 * 4) +
                                     *(int *)(iVar13 + (uint)bVar5 * 4) >> 0x10)) - (uint)bVar7) +
                        0xff);
          puVar18[2] = *(undefined1 *)
                        (((iVar10 - *(int *)(iVar12 + (uint)bVar6 * 4)) - (uint)bVar7) + 0xff);
          pbVar4 = pbVar19 + iVar23;
          pbVar19 = pbVar19 + 1;
          param_2 = (int *)((int)param_2 + -1);
          puVar18[3] = *pbVar4;
          puVar18 = puVar18 + 4;
        } while (param_2 != (int *)0x0);
      }
      param_3 = param_3 + -1;
      param_4 = param_4 + 1;
    } while (param_3 != 0);
  }
  return;
}



void __cdecl FUN_653c89a5(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_8;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x54);
  local_8 = 0;
  iVar5 = param_1[0x31];
  iVar1 = param_1[8];
  param_1[0x66] = puVar3;
  *puVar3 = FUN_653c8a19;
  if (0 < iVar1) {
    puVar3 = puVar3 + 0xb;
    param_1 = (undefined4 *)(iVar5 + 0x50);
    do {
      puVar4 = (undefined4 *)(**(code **)puVar2[1])(puVar2,1,0x100);
      *param_1 = puVar4;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *puVar3 = 0xffffffff;
      local_8 = local_8 + 1;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + 0x15;
    } while (local_8 < (int)puVar2[8]);
  }
  return;
}



void __cdecl FUN_653c8a19(undefined *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int local_10;
  int local_c;
  
  puVar4 = param_1;
  piVar8 = (int *)(param_1 + 0x20);
  piVar7 = (int *)(param_1 + 0x198);
  piVar1 = (int *)(param_1 + 0xc4);
  param_1 = (undefined *)0x0;
  local_c = 0;
  if (0 < *piVar8) {
    piVar8 = (int *)(*piVar1 + 0x24);
    piVar7 = (int *)(*piVar7 + 0x2c);
    do {
      iVar3 = *piVar8;
      if (iVar3 == 1) {
        param_1 = FUN_653cda9b;
      }
      else if (iVar3 == 2) {
        param_1 = FUN_653cd8dd;
      }
      else if (iVar3 == 4) {
        param_1 = FUN_653cd5cf;
      }
      else {
        if (iVar3 == 8) {
          if (*(int *)(puVar4 + 0x44) == 0) {
            param_1 = FUN_653cd0ca;
            goto LAB_653c8aa0;
          }
          puVar5 = *(undefined4 **)puVar4;
          puVar5[5] = 0x2d;
        }
        else {
          puVar5 = *(undefined4 **)puVar4;
          puVar5[5] = 6;
          puVar5[6] = *piVar8;
        }
        (*(code *)*puVar5)(puVar4);
      }
LAB_653c8aa0:
      piVar7[-10] = (int)param_1;
      if ((((char)piVar8[3] != '\0') && (*piVar7 != 0)) && (iVar3 = piVar8[10], iVar3 != 0)) {
        *piVar7 = 0;
        puVar6 = (uint *)piVar8[0xb];
        local_10 = 0x40;
        iVar2 = (int)&DAT_653c2e08 - (int)puVar6;
        do {
          *puVar6 = (uint)*(ushort *)(iVar3 + *(int *)(iVar2 + (int)puVar6) * 2);
          puVar6 = puVar6 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
      local_c = local_c + 1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 0x15;
    } while (local_c < *(int *)(puVar4 + 0x20));
  }
  return;
}



void __cdecl FUN_653c8afd(int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  undefined1 *puVar14;
  int local_520 [257];
  char local_11c [260];
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  if (*param_3 == 0) {
    iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x5d4);
    *param_3 = iVar3;
  }
  iVar3 = *param_3;
  iVar4 = 0;
  param_3 = (int *)0x1;
  *(int *)(iVar3 + 0xd0) = param_2;
  local_c = 0;
  do {
    uVar8 = (uint)*(byte *)((int)param_3 + param_2);
    if (uVar8 != 0) {
      pcVar12 = local_11c + iVar4;
      for (uVar9 = (uint)(*(byte *)((int)param_3 + param_2) >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint *)pcVar12 =
             CONCAT22(CONCAT11((char)param_3,(char)param_3),CONCAT11((char)param_3,(char)param_3));
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = (char)param_3;
        pcVar12 = pcVar12 + 1;
      }
      iVar4 = local_c + uVar8;
      local_c = iVar4;
    }
    param_3 = (int *)((int)param_3 + 1);
  } while ((int)param_3 < 0x11);
  local_11c[iVar4] = '\0';
  iVar4 = 0;
  iVar10 = (int)local_11c[0];
  iVar13 = 0;
  while (local_11c[0] != '\0') {
    if (local_11c[iVar4] == iVar10) {
      piVar6 = local_520 + iVar4;
      iVar5 = iVar4;
      do {
        *piVar6 = iVar13;
        iVar4 = iVar5 + 1;
        piVar6 = piVar6 + 1;
        iVar13 = iVar13 + 1;
        iVar2 = iVar5 + 1;
        iVar5 = iVar4;
      } while (local_11c[iVar2] == iVar10);
    }
    iVar13 = iVar13 << 1;
    iVar10 = iVar10 + 1;
    local_11c[0] = local_11c[iVar4];
  }
  iVar10 = 0;
  iVar4 = 1;
  piVar6 = (int *)(iVar3 + 0x48);
  do {
    param_3 = (int *)(uint)*(byte *)(iVar4 + param_2);
    if (*(byte *)(iVar4 + param_2) == 0) {
      *piVar6 = -1;
    }
    else {
      iVar13 = local_520[iVar10];
      piVar6[0x12] = iVar10;
      piVar6[-0x11] = iVar13;
      iVar10 = iVar10 + (int)param_3;
      *piVar6 = local_520[iVar10 + -1];
    }
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar4 < 0x11);
  *(undefined4 *)(iVar3 + 0x88) = 0xfffff;
  puVar7 = (undefined4 *)(iVar3 + 0xd4);
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar4 = 0;
  local_8 = 7;
  param_3 = (int *)0x1;
  do {
    local_18 = (uint)*(byte *)((int)param_3 + param_2);
    if (local_18 != 0) {
      iVar10 = 1 << ((byte)local_8 & 0x1f);
      puVar14 = (undefined1 *)(iVar4 + 0x11 + param_2);
      local_10 = local_520 + iVar4;
      iVar4 = iVar4 + local_18;
      do {
        iVar13 = *local_10 << ((byte)local_8 & 0x1f);
        if (0 < iVar10) {
          uVar1 = *puVar14;
          puVar11 = (undefined1 *)(iVar13 + 0x4d4 + iVar3);
          puVar7 = (undefined4 *)(iVar3 + 0xd4 + iVar13 * 4);
          local_14 = iVar10;
          do {
            *puVar7 = param_3;
            *puVar11 = uVar1;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        local_10 = local_10 + 1;
        puVar14 = puVar14 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    param_3 = (int *)((int)param_3 + 1);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return;
}



undefined4 __cdecl FUN_653c8cbe(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)*param_1;
  iVar3 = param_1[1];
  if (param_3 < 0x19) {
    do {
      if (param_1[2] == 0) {
        if (iVar3 == 0) {
          uVar1 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))(param_1[5]);
          if ((char)uVar1 == '\0') {
LAB_653c8d84:
            return uVar1 & 0xffffff00;
          }
          pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
          iVar3 = (*(undefined4 **)(param_1[5] + 0x14))[1];
        }
        uVar1 = (uint)*pbVar2;
        iVar3 = iVar3 + -1;
        pbVar2 = pbVar2 + 1;
        if (uVar1 == 0xff) {
          do {
            if (iVar3 == 0) {
              uVar1 = (**(code **)(*(int *)(param_1[5] + 0x14) + 0xc))(param_1[5]);
              if ((char)uVar1 == '\0') goto LAB_653c8d84;
              pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x14);
              iVar3 = (*(undefined4 **)(param_1[5] + 0x14))[1];
            }
            uVar1 = (uint)*pbVar2;
            iVar3 = iVar3 + -1;
            pbVar2 = pbVar2 + 1;
          } while (uVar1 == 0xff);
          if (uVar1 != 0) {
            param_1[2] = uVar1;
            goto LAB_653c8d3e;
          }
          uVar1 = 0xff;
        }
      }
      else {
LAB_653c8d3e:
        if (param_4 <= param_3) break;
        if (*(char *)param_1[6] == '\0') {
          *(char *)param_1[6] = '\x01';
        }
        uVar1 = 0;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 << 8 | uVar1;
    } while (param_3 < 0x19);
  }
  *param_1 = pbVar2;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[1] = iVar3;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}



uint __cdecl FUN_653c8d88(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_8;
  
  local_8 = param_5;
  piVar3 = param_2;
  if (param_3 < param_5) {
    uVar1 = FUN_653c8cbe(param_1,(uint)param_2,param_3,param_5);
    if ((char)uVar1 == '\0') {
      return 0xffffffff;
    }
    param_3 = param_1[4];
    piVar3 = (int *)param_1[3];
  }
  iVar2 = param_3 - param_5;
  uVar4 = (int)piVar3 >> ((byte)iVar2 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  param_2 = (int *)(param_4 + 0x44 + param_5 * 4);
  if (*(int *)(param_4 + 0x44 + param_5 * 4) < (int)uVar4) {
    do {
      if (iVar2 < 1) {
        uVar1 = FUN_653c8cbe(param_1,(uint)piVar3,iVar2,1);
        if ((char)uVar1 == '\0') {
          return 0xffffffff;
        }
        piVar3 = (int *)param_1[3];
        iVar2 = param_1[4];
      }
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
      uVar4 = uVar4 << 1 | (int)piVar3 >> ((byte)iVar2 & 0x1f) & 1U;
      local_8 = local_8 + 1;
    } while (*param_2 < (int)uVar4);
  }
  param_1[4] = iVar2;
  param_1[3] = piVar3;
  if (local_8 < 0x11) {
    uVar4 = (uint)*(byte *)((*(int *)(param_4 + 0x8c + local_8 * 4) -
                            *(int *)(param_4 + local_8 * 4)) + *(int *)(param_4 + 0xd0) + 0x11 +
                           uVar4);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



void __cdecl FUN_653c8e57(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x48);
  *(undefined4 **)(param_1 + 0x194) = puVar1;
  *puVar1 = FUN_653c8e91;
  puVar1[1] = FUN_653c8f81;
  puVar1 = puVar1 + 10;
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __cdecl FUN_653c8e91(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_c;
  undefined4 *local_8;
  
  piVar5 = param_1;
  local_c = 0;
  iVar1 = param_1[0x65];
  if (0 < param_1[0x48]) {
    param_1 = param_1 + 0x49;
    local_8 = (undefined4 *)(iVar1 + 0x14);
    do {
      iVar2 = *(int *)(*param_1 + 0x14);
      iVar3 = *(int *)(*param_1 + 0x18);
      if (((iVar2 < 0) || (3 < iVar2)) || (piVar5[iVar2 + 0x28] == 0)) {
        puVar4 = (undefined4 *)*piVar5;
        puVar4[5] = 0x2f;
        puVar4[6] = iVar2;
        (*(code *)*puVar4)(piVar5);
      }
      if (((iVar3 < 0) || (3 < iVar3)) || (piVar5[iVar3 + 0x2c] == 0)) {
        puVar4 = (undefined4 *)*piVar5;
        puVar4[5] = 0x2f;
        puVar4[6] = iVar3;
        (*(code *)*puVar4)(piVar5);
      }
      FUN_653c8afd((int)piVar5,piVar5[iVar2 + 0x28],(int *)(iVar1 + 0x28 + iVar2 * 4));
      FUN_653c8afd((int)piVar5,piVar5[iVar3 + 0x2c],(int *)(iVar1 + 0x38 + iVar3 * 4));
      param_1 = param_1 + 1;
      *local_8 = 0;
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < piVar5[0x48]);
  }
  iVar2 = piVar5[0x3f];
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(int *)(iVar1 + 0x24) = iVar2;
  return;
}



uint __cdecl FUN_653c8f81(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [4];
  int local_20;
  undefined2 *local_1c;
  int local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x24) != 0)) ||
     (uVar4 = FUN_653c9362(param_1), (char)uVar4 != '\0')) {
    local_38 = param_1;
    local_4c = **(undefined4 **)(param_1 + 0x14);
    local_14 = 0;
    local_48 = (*(undefined4 **)(param_1 + 0x14))[1];
    local_44 = *(undefined4 *)(param_1 + 0x178);
    local_8 = *(int **)(iVar1 + 8);
    iVar5 = *(int *)(iVar1 + 0xc);
    local_34 = iVar1 + 0x10;
    local_30[0] = *(int *)(iVar1 + 0x14);
    local_30[1] = *(undefined4 *)(iVar1 + 0x18);
    local_30[2] = *(undefined4 *)(iVar1 + 0x1c);
    local_30[3] = *(undefined4 *)(iVar1 + 0x20);
    if (0 < *(int *)(param_1 + 0x13c)) {
      local_c = param_2;
      local_10 = (int *)(param_1 + 0x140);
      do {
        local_1c = (undefined2 *)*local_c;
        local_20 = *local_10;
        iVar8 = *(int *)(param_1 + 0x124 + *local_10 * 4);
        local_18 = iVar8;
        iVar7 = *(int *)(iVar1 + 0x28 + *(int *)(iVar8 + 0x14) * 4);
        iVar2 = *(int *)(iVar1 + 0x38 + *(int *)(iVar8 + 0x18) * 4);
        if (iVar5 < 8) {
          uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,0);
          if ((char)uVar4 == '\0') goto LAB_653c935e;
          local_8 = local_40;
          iVar5 = local_3c;
          if (7 < local_3c) goto LAB_653c9063;
          iVar9 = 1;
LAB_653c908a:
          uVar4 = FUN_653c8d88(&local_4c,local_8,iVar5,iVar7,iVar9);
          if ((int)uVar4 < 0) goto LAB_653c935e;
          local_8 = local_40;
          iVar5 = local_3c;
          uVar6 = uVar4;
        }
        else {
LAB_653c9063:
          uVar4 = (int)local_8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar9 = *(int *)(iVar7 + 0xd4 + uVar4 * 4);
          if (iVar9 == 0) {
            iVar9 = 9;
            goto LAB_653c908a;
          }
          uVar6 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar7);
          iVar5 = iVar5 - iVar9;
        }
        if (uVar6 != 0) {
          if (iVar5 < (int)uVar6) {
            uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,uVar6);
            if ((char)uVar4 == '\0') goto LAB_653c935e;
            local_8 = local_40;
            iVar5 = local_3c;
          }
          iVar5 = iVar5 - uVar6;
          iVar7 = uVar6 * 4;
          uVar6 = (int)local_8 >> ((byte)iVar5 & 0x1f) & (1 << ((byte)uVar6 & 0x1f)) - 1U;
          iVar8 = local_18;
          if ((int)uVar6 < *(int *)(&DAT_653c2a08 + iVar7)) {
            uVar6 = *(int *)(&DAT_653c2a48 + iVar7) + uVar6;
          }
        }
        if (*(char *)(iVar8 + 0x30) == '\0') {
LAB_653c9242:
          iVar8 = 1;
          do {
            if (iVar5 < 8) {
              uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,0);
              if ((char)uVar4 == '\0') goto LAB_653c935e;
              local_8 = local_40;
              iVar5 = local_3c;
              if (7 < local_3c) goto LAB_653c927a;
              iVar7 = 1;
LAB_653c92a5:
              uVar4 = FUN_653c8d88(&local_4c,local_8,iVar5,iVar2,iVar7);
              if ((int)uVar4 < 0) goto LAB_653c935e;
              local_8 = local_40;
              iVar5 = local_3c;
            }
            else {
LAB_653c927a:
              uVar4 = (int)local_8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar7 = *(int *)(iVar2 + 0xd4 + uVar4 * 4);
              if (iVar7 == 0) {
                iVar7 = 9;
                goto LAB_653c92a5;
              }
              iVar5 = iVar5 - iVar7;
              uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar2);
            }
            iVar7 = (int)uVar4 >> 4;
            uVar6 = uVar4 & 0xf;
            if (uVar6 == 0) {
              if (iVar7 != 0xf) break;
            }
            else {
              if (iVar5 < (int)uVar6) {
                uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,uVar6);
                if ((char)uVar4 == '\0') goto LAB_653c935e;
                local_8 = local_40;
                iVar5 = local_3c;
              }
              iVar5 = iVar5 - uVar6;
            }
            iVar8 = iVar8 + iVar7 + 1;
          } while (iVar8 < 0x40);
        }
        else {
          iVar7 = local_30[local_20];
          iVar8 = *(int *)(iVar8 + 0x24);
          local_30[local_20] = uVar6 + iVar7;
          *local_1c = (short)(uVar6 + iVar7);
          if (iVar8 < 2) goto LAB_653c9242;
          iVar8 = 1;
          do {
            if (iVar5 < 8) {
              uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,0);
              if ((char)uVar4 == '\0') goto LAB_653c935e;
              local_8 = local_40;
              iVar5 = local_3c;
              if (7 < local_3c) goto LAB_653c9166;
              iVar7 = 1;
LAB_653c9191:
              uVar4 = FUN_653c8d88(&local_4c,local_8,iVar5,iVar2,iVar7);
              if ((int)uVar4 < 0) goto LAB_653c935e;
              local_8 = local_40;
              iVar5 = local_3c;
            }
            else {
LAB_653c9166:
              uVar4 = (int)local_8 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar7 = *(int *)(iVar2 + 0xd4 + uVar4 * 4);
              if (iVar7 == 0) {
                iVar7 = 9;
                goto LAB_653c9191;
              }
              iVar5 = iVar5 - iVar7;
              uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar2);
            }
            uVar6 = uVar4 & 0xf;
            if (uVar6 == 0) {
              if ((int)uVar4 >> 4 != 0xf) break;
              iVar8 = iVar8 + 0xf;
            }
            else {
              local_20 = iVar8 + ((int)uVar4 >> 4);
              if (iVar5 < (int)uVar6) {
                uVar4 = FUN_653c8cbe(&local_4c,(uint)local_8,iVar5,uVar6);
                if ((char)uVar4 == '\0') goto LAB_653c935e;
                local_8 = local_40;
                iVar5 = local_3c;
              }
              iVar5 = iVar5 - uVar6;
              uVar4 = (int)local_8 >> ((byte)iVar5 & 0x1f) & (1 << (sbyte)uVar6) - 1U;
              if ((int)uVar4 < *(int *)(&DAT_653c2a08 + uVar6 * 4)) {
                uVar4 = *(int *)(&DAT_653c2a48 + uVar6 * 4) + uVar4;
              }
              local_1c[*(int *)(&DAT_653c2f08 + local_20 * 4)] = (short)uVar4;
              iVar8 = local_20;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x40);
        }
        local_14 = local_14 + 1;
        local_c = local_c + 1;
        local_10 = local_10 + 1;
      } while (local_14 < *(int *)(param_1 + 0x13c));
    }
    puVar3 = *(undefined4 **)(param_1 + 0x14);
    *puVar3 = local_4c;
    puVar3[1] = local_48;
    *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + -1;
    *(int *)(iVar1 + 0x14) = local_30[0];
    *(int *)(iVar1 + 0x18) = local_30[1];
    *(int *)(iVar1 + 0x1c) = local_30[2];
    *(undefined4 *)(param_1 + 0x178) = local_44;
    *(int *)(iVar1 + 0xc) = iVar5;
    *(int **)(iVar1 + 8) = local_8;
    *(int *)(iVar1 + 0x20) = local_30[3];
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  else {
LAB_653c935e:
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}



undefined4 __cdecl FUN_653c9362(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x194);
  iVar5 = *(int *)(param_1 + 400);
  iVar3 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  piVar1 = (int *)(iVar5 + 0x58);
  *piVar1 = *piVar1 + iVar3 / 8;
  uVar4 = (**(code **)(iVar5 + 8))(param_1);
  if ((char)uVar4 != '\0') {
    iVar5 = *(int *)(param_1 + 0x120);
    if (0 < iVar5) {
      puVar6 = (undefined4 *)(iVar2 + 0x14);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}



void __cdecl FUN_653c93b2(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x18);
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined4 **)(param_1 + 0x18c) = puVar1;
  *puVar1 = &LAB_653c9642;
  puVar1[1] = FUN_653c988f;
  puVar1[2] = FUN_653c93f3;
  puVar1[3] = &LAB_653c9631;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}



void __cdecl FUN_653c93f3(int *param_1)

{
  FUN_653c9431(param_1);
  FUN_653c959f(param_1);
  (**(code **)param_1[0x65])(param_1);
  (**(code **)param_1[0x61])(param_1);
  *(undefined4 *)param_1[99] = *(undefined4 *)(param_1[0x61] + 4);
  return;
}



uint __cdecl FUN_653c9431(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *local_8;
  
  piVar5 = param_1;
  iVar7 = param_1[0x48];
  if (iVar7 == 1) {
    iVar7 = param_1[0x49];
    uVar2 = *(undefined4 *)(iVar7 + 0x24);
    uVar10 = *(uint *)(iVar7 + 0xc);
    param_1[0x4d] = *(int *)(iVar7 + 0x1c);
    uVar9 = *(uint *)(iVar7 + 0x20);
    *(undefined4 *)(iVar7 + 0x40) = uVar2;
    param_1[0x4e] = uVar9;
    piVar6 = (int *)(uVar9 / uVar10);
    *(undefined4 *)(iVar7 + 0x34) = 1;
    *(undefined4 *)(iVar7 + 0x38) = 1;
    *(undefined4 *)(iVar7 + 0x3c) = 1;
    *(undefined4 *)(iVar7 + 0x44) = 1;
    uVar8 = uVar9 % uVar10;
    if (uVar9 % uVar10 == 0) {
      uVar8 = uVar10;
    }
    param_1[0x50] = 0;
    *(uint *)(iVar7 + 0x48) = uVar8;
    param_1[0x4f] = 1;
  }
  else {
    if ((iVar7 < 1) || (4 < iVar7)) {
      puVar3 = (undefined4 *)*param_1;
      puVar3[5] = 0x16;
      puVar3[6] = iVar7;
      puVar3[7] = 4;
      (*(code *)*puVar3)(param_1);
    }
    iVar7 = FUN_653d006b(param_1[6],param_1[0x43] << 3);
    param_1[0x4d] = iVar7;
    piVar6 = (int *)FUN_653d006b(param_1[7],param_1[0x44] << 3);
    piVar1 = param_1 + 0x48;
    param_1[0x4e] = (int)piVar6;
    param_1[0x4f] = 0;
    param_1 = (int *)0x0;
    if (0 < *piVar1) {
      local_8 = piVar5 + 0x49;
      do {
        iVar7 = *local_8;
        uVar10 = *(uint *)(iVar7 + 8);
        *(uint *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x24) * uVar10;
        uVar9 = *(uint *)(iVar7 + 0x1c) % uVar10;
        *(uint *)(iVar7 + 0x34) = uVar10;
        *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0xc);
        iVar11 = *(int *)(iVar7 + 0xc) * uVar10;
        *(int *)(iVar7 + 0x3c) = iVar11;
        if (uVar9 == 0) {
          uVar9 = uVar10;
        }
        *(uint *)(iVar7 + 0x44) = uVar9;
        uVar10 = *(uint *)(iVar7 + 0x20) % *(uint *)(iVar7 + 0xc);
        if (uVar10 == 0) {
          uVar10 = *(uint *)(iVar7 + 0xc);
        }
        iVar4 = piVar5[0x4f];
        *(uint *)(iVar7 + 0x48) = uVar10;
        if (10 < iVar11 + iVar4) {
          puVar3 = (undefined4 *)*piVar5;
          puVar3[5] = 10;
          (*(code *)*puVar3)(piVar5);
        }
        if (0 < iVar11) {
          do {
            piVar5[piVar5[0x4f] + 0x50] = (int)param_1;
            piVar5[0x4f] = piVar5[0x4f] + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        piVar6 = (int *)((int)param_1 + 1);
        local_8 = local_8 + 1;
        param_1 = piVar6;
      } while ((int)piVar6 < piVar5[0x48]);
    }
  }
  return (uint)piVar6;
}



void __cdecl FUN_653c959f(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  
  piVar3 = param_1;
  local_8 = 0;
  if (0 < param_1[0x48]) {
    param_1 = param_1 + 0x49;
    do {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (piVar3[iVar2 + 0x24] == 0)) {
          puVar6 = (undefined4 *)*piVar3;
          puVar6[5] = 0x31;
          puVar6[6] = iVar2;
          (*(code *)*puVar6)(piVar3);
        }
        puVar4 = (undefined4 *)(**(code **)piVar3[1])(piVar3,1,0x82);
        puVar6 = (undefined4 *)piVar3[iVar2 + 0x24];
        puVar7 = puVar4;
        for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
        *(undefined4 **)(iVar1 + 0x4c) = puVar4;
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < piVar3[0x48]);
  }
  return;
}



void __cdecl FUN_653c96d7(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((0xffdc < param_1[7]) || (0xffdc < param_1[6])) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x26;
    puVar1[6] = 0xffdc;
    (*(code *)*puVar1)(param_1);
  }
  iVar4 = param_1[0x30];
  if (iVar4 != 8) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0xc;
    puVar1[6] = iVar4;
    (*(code *)*puVar1)(param_1);
  }
  iVar4 = param_1[8];
  if (10 < iVar4) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x16;
    puVar1[6] = iVar4;
    puVar1[7] = 10;
    (*(code *)*puVar1)(param_1);
  }
  iVar4 = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 1;
  if (0 < param_1[8]) {
    piVar5 = (int *)(param_1[0x31] + 0xc);
    do {
      if ((((piVar5[-1] < 1) || (4 < piVar5[-1])) || (*piVar5 < 1)) || (4 < *piVar5)) {
        puVar1 = (undefined4 *)*param_1;
        puVar1[5] = 0xf;
        (*(code *)*puVar1)(param_1);
      }
      iVar3 = param_1[0x43];
      if (param_1[0x43] <= piVar5[-1]) {
        iVar3 = piVar5[-1];
      }
      iVar2 = *piVar5;
      param_1[0x43] = iVar3;
      iVar3 = param_1[0x44];
      if (param_1[0x44] <= iVar2) {
        iVar3 = iVar2;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
      param_1[0x44] = iVar3;
    } while (iVar4 < param_1[8]);
  }
  iVar4 = 0;
  param_1[0x45] = 8;
  if (0 < param_1[8]) {
    piVar5 = (int *)(param_1[0x31] + 0x1c);
    do {
      iVar3 = param_1[0x43];
      piVar5[2] = 8;
      iVar3 = FUN_653d006b(piVar5[-5] * param_1[6],iVar3 << 3);
      *piVar5 = iVar3;
      iVar3 = FUN_653d006b(piVar5[-4] * param_1[7],param_1[0x44] << 3);
      piVar5[1] = iVar3;
      iVar3 = FUN_653d006b(piVar5[-5] * param_1[6],param_1[0x43]);
      piVar5[3] = iVar3;
      iVar3 = FUN_653d006b(piVar5[-4] * param_1[7],param_1[0x44]);
      piVar5[0xc] = 0;
      piVar5[4] = iVar3;
      *(undefined1 *)(piVar5 + 5) = 1;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < param_1[8]);
  }
  iVar4 = FUN_653d006b(param_1[7],param_1[0x44] << 3);
  param_1[0x46] = iVar4;
  if ((param_1[0x48] < param_1[8]) || ((char)param_1[0x32] != '\0')) {
    *(undefined1 *)(param_1[99] + 0x10) = 1;
  }
  else {
    *(undefined1 *)(param_1[99] + 0x10) = 0;
  }
  return;
}



void __cdecl FUN_653c988f(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[99];
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *puVar1 = &LAB_653c9642;
  *(undefined1 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)param_1[100])(param_1);
  param_1[0x23] = 0;
  return;
}



void __cdecl FUN_653c98c6(int *param_1,char param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  piVar2 = param_1;
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x60] = (int)puVar3;
  *puVar3 = &LAB_653c9a3f;
  if (param_2 != '\0') {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 4;
    (*(code *)*puVar1)(param_1);
  }
  if (*(char *)(param_1[0x67] + 8) == '\0') {
    iVar4 = param_1[0x45];
  }
  else {
    if (param_1[0x45] < 2) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[5] = 0x2c;
      (*(code *)*puVar1)(param_1);
    }
    FUN_653c9994((int)param_1);
    iVar4 = param_1[0x45] + 2;
  }
  param_1 = (int *)0x0;
  if (0 < piVar2[8]) {
    piVar6 = (int *)(piVar2[0x31] + 0x24);
    _param_2 = puVar3 + 2;
    do {
      uVar5 = (**(code **)(piVar2[1] + 8))
                        (piVar2,1,*piVar6 * piVar6[-2],
                         ((piVar6[-6] * *piVar6) / piVar2[0x45]) * iVar4);
      param_1 = (int *)((int)param_1 + 1);
      *_param_2 = uVar5;
      piVar6 = piVar6 + 0x15;
      _param_2 = _param_2 + 1;
    } while ((int)param_1 < piVar2[8]);
  }
  return;
}



void __cdecl FUN_653c9994(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x114);
  iVar4 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) << 3);
  iVar6 = *(int *)(param_1 + 0x20);
  param_1 = 0;
  iVar5 = *(int *)(iVar3 + 0xc4);
  *(int *)(iVar1 + 0x38) = iVar4;
  *(int *)(iVar1 + 0x3c) = iVar4 + iVar6 * 4;
  if (0 < iVar6) {
    piVar7 = (int *)(iVar5 + 0xc);
    do {
      iVar5 = (piVar7[6] * *piVar7) / *(int *)(iVar3 + 0x114);
      iVar4 = iVar5 * (iVar2 + 4);
      iVar6 = (*(code *)**(undefined4 **)(iVar3 + 4))(iVar3,1,iVar4 * 8);
      piVar7 = piVar7 + 0x15;
      iVar6 = iVar6 + iVar5 * 4;
      iVar5 = param_1 * 4;
      param_1 = param_1 + 1;
      *(int *)(*(int *)(iVar1 + 0x38) + iVar5) = iVar6;
      *(int *)(*(int *)(iVar1 + 0x3c) + iVar5) = iVar6 + iVar4 * 4;
    } while (param_1 < *(int *)(iVar3 + 0x20));
  }
  return;
}



void __cdecl FUN_653c9aa5(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_20;
  int local_18;
  int local_14;
  int *local_10;
  int *local_c;
  
  iVar9 = *(int *)(param_1 + 0x180);
  iVar1 = *(int *)(param_1 + 0x114);
  local_20 = *(int *)(param_1 + 0x20);
  if (0 < local_20) {
    local_c = *(int **)(iVar9 + 0x3c);
    piVar8 = (int *)(*(int *)(param_1 + 0xc4) + 0xc);
    local_10 = (int *)(iVar9 + 8);
    iVar9 = *(int *)(iVar9 + 0x38) - (int)local_c;
    do {
      iVar5 = (piVar8[6] * *piVar8) / iVar1;
      puVar2 = *(undefined4 **)(iVar9 + (int)local_c);
      puVar3 = (undefined4 *)*local_c;
      iVar10 = *local_10;
      local_14 = iVar5 * (iVar1 + 2);
      if (0 < local_14) {
        puVar11 = puVar3;
        do {
          uVar4 = *(undefined4 *)((iVar10 - (int)puVar3) + (int)puVar11);
          *puVar11 = uVar4;
          *(undefined4 *)(((int)puVar2 - (int)puVar3) + (int)puVar11) = uVar4;
          puVar11 = puVar11 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar5 * 2) {
        puVar11 = puVar3 + iVar1 * iVar5;
        puVar6 = (undefined4 *)(iVar10 + (iVar1 + -2) * iVar5 * 4);
        local_18 = iVar5 * 2;
        do {
          *(undefined4 *)(((int)puVar3 - iVar10) + (int)puVar6) =
               *(undefined4 *)((int)puVar11 + (iVar10 - (int)puVar3));
          *puVar11 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      if (0 < iVar5) {
        iVar10 = 0;
        param_1 = iVar5;
        do {
          iVar7 = iVar10 + iVar5 * -4;
          iVar10 = iVar10 + 4;
          param_1 = param_1 + -1;
          *(undefined4 *)((int)puVar2 + iVar7) = *puVar2;
        } while (param_1 != 0);
      }
      local_c = local_c + 1;
      local_10 = local_10 + 1;
      piVar8 = piVar8 + 0x15;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}



void __cdecl FUN_653c9bc5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar4 = (**(code **)(*(int *)(param_1 + 0x184) + 0xc))(param_1,iVar2 + 8);
    if (iVar4 == 0) {
      return;
    }
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x114);
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x188) + 4))
            (param_1,iVar2 + 8,puVar1,uVar3,param_2,param_3,param_4);
  if (uVar3 <= *puVar1) {
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *puVar1 = 0;
  }
  return;
}



void __cdecl FUN_653c9c2d(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (*(char *)(iVar2 + 0x30) == '\0') {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x184) + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  iVar3 = *(int *)(iVar2 + 0x44);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_653c9cda;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x188) + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),
               (uint *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x34) < *(uint *)(iVar2 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x114);
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)(iVar2 + 0x48) = iVar3 + -1;
  if (*(int *)(iVar2 + 0x4c) == *(int *)(param_1 + 0x118)) {
    FUN_653c9e1b(param_1);
  }
  *(undefined4 *)(iVar2 + 0x44) = 1;
LAB_653c9cda:
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x188) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x48) <= *puVar1) {
    if (*(int *)(iVar2 + 0x4c) == 1) {
      FUN_653c9d37(param_1);
    }
    iVar3 = *(int *)(param_1 + 0x114);
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) ^ 1;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 2;
    *puVar1 = iVar3 + 1;
    *(int *)(iVar2 + 0x48) = iVar3 + 2;
  }
  return;
}



void __cdecl FUN_653c9d37(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_1c;
  int local_14;
  undefined4 *local_10;
  
  iVar1 = *(int *)(param_1 + 0x114);
  local_1c = *(int *)(param_1 + 0x20);
  if (0 < local_1c) {
    piVar6 = *(int **)(*(int *)(param_1 + 0x180) + 0x3c);
    piVar8 = (int *)(*(int *)(param_1 + 0xc4) + 0x24);
    iVar10 = *(int *)(*(int *)(param_1 + 0x180) + 0x38) - (int)piVar6;
    do {
      iVar2 = *(int *)(iVar10 + (int)piVar6);
      iVar5 = (piVar8[-6] * *piVar8) / iVar1;
      iVar3 = *piVar6;
      if (0 < iVar5) {
        param_1 = 0;
        local_10 = (undefined4 *)(iVar3 + (iVar1 + 2) * iVar5 * 4);
        puVar9 = (undefined4 *)(iVar3 + (iVar1 + 1) * iVar5 * 4);
        iVar7 = iVar2 - iVar3;
        local_14 = iVar5;
        do {
          *(undefined4 *)(iVar2 + param_1 + iVar5 * -4) = *(undefined4 *)(iVar7 + (int)puVar9);
          uVar4 = *puVar9;
          puVar9 = puVar9 + 1;
          *(undefined4 *)(iVar3 + param_1 + iVar5 * -4) = uVar4;
          uVar4 = *(undefined4 *)(iVar3 + param_1);
          *(undefined4 *)(iVar7 + (int)local_10) = *(undefined4 *)(iVar7 + iVar3 + param_1);
          *local_10 = uVar4;
          local_10 = local_10 + 1;
          local_14 = local_14 + -1;
          param_1 = param_1 + 4;
        } while (local_14 != 0);
      }
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 0x15;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}



void __cdecl FUN_653c9e1b(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int local_8;
  
  local_8 = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x180);
  if (0 < iVar2) {
    iVar4 = *(int *)(param_1 + 0x114);
    iVar5 = *(int *)(iVar3 + 0x40);
    piVar10 = (int *)(*(int *)(param_1 + 0xc4) + 0x24);
    do {
      uVar7 = piVar10[-6] * *piVar10;
      iVar6 = (int)uVar7 / iVar4;
      uVar8 = (uint)piVar10[2] % uVar7;
      if ((uint)piVar10[2] % uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (local_8 == 0) {
        *(int *)(iVar3 + 0x48) = (int)(uVar8 - 1) / iVar6 + 1;
      }
      param_1 = iVar6 * 2;
      if (0 < param_1) {
        puVar1 = (undefined4 *)
                 (*(int *)(*(int *)(iVar3 + 0x38 + iVar5 * 4) + local_8 * 4) + uVar8 * 4);
        puVar9 = puVar1;
        do {
          *puVar9 = puVar1[-1];
          puVar9 = puVar9 + 1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      local_8 = local_8 + 1;
      piVar10 = piVar10 + 0x15;
    } while (local_8 < iVar2);
  }
  return;
}



uint __cdecl FUN_653c9ee1(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x178);
  do {
    if (iVar1 < 0xc0) {
LAB_653c9f3d:
      iVar3 = 2;
    }
    else if ((((iVar1 < 0xd0) || (0xd7 < iVar1)) || (iVar1 == (param_2 + 1U & 7) + 0xd0)) ||
            (iVar1 == (param_2 + 2U & 7) + 0xd0)) {
      iVar3 = 3;
    }
    else {
      if ((iVar1 == (param_2 - 1U & 7) + 0xd0) || (iVar1 == (param_2 - 2U & 7) + 0xd0))
      goto LAB_653c9f3d;
      iVar3 = 1;
    }
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      goto LAB_653c9f6d;
    }
    if (iVar3 == 2) {
      uVar2 = FUN_653c9f73(param_1);
      if ((char)uVar2 == '\0') {
        return uVar2 & 0xffffff00;
      }
      iVar1 = *(int *)(param_1 + 0x178);
    }
    else if (iVar3 == 3) {
LAB_653c9f6d:
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  } while( true );
}



uint __cdecl FUN_653c9f73(int param_1)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  pbVar5 = (byte *)*puVar3;
  iVar6 = puVar3[1];
  do {
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar4 == '\0') {
LAB_653c9fdd:
        return uVar4 & 0xffffff00;
      }
      pbVar5 = (byte *)*puVar3;
      iVar6 = puVar3[1];
    }
    bVar2 = *pbVar5;
    iVar6 = iVar6 + -1;
    pbVar5 = pbVar5 + 1;
    if (bVar2 == 0xff) {
      do {
        if (iVar6 == 0) {
          uVar4 = (*(code *)puVar3[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_653c9fdd;
          pbVar5 = (byte *)*puVar3;
          iVar6 = puVar3[1];
        }
        uVar4 = (uint)*pbVar5;
        iVar6 = iVar6 + -1;
        pbVar5 = pbVar5 + 1;
      } while (uVar4 == 0xff);
      if (uVar4 != 0) {
        if (*(int *)(*(int *)(param_1 + 400) + 0x58) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 400) + 0x58) = 0;
        }
        *puVar3 = pbVar5;
        *(uint *)(param_1 + 0x178) = uVar4;
        puVar3[1] = iVar6;
        return CONCAT31((int3)((uint)pbVar5 >> 8),1);
      }
      piVar1 = (int *)(*(int *)(param_1 + 400) + 0x58);
      *piVar1 = *piVar1 + 2;
    }
    else {
      piVar1 = (int *)(*(int *)(param_1 + 400) + 0x58);
      *piVar1 = *piVar1 + 1;
    }
    *puVar3 = pbVar5;
    puVar3[1] = iVar6;
  } while( true );
}



void __cdecl FUN_653ca002(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x5c);
  *(undefined4 **)(param_1 + 400) = puVar1;
  *puVar1 = FUN_653caf8f;
  puVar1[1] = &LAB_653ca289;
  puVar1[2] = FUN_653caf32;
  puVar1[3] = FUN_653ca22d;
  puVar3 = puVar1 + 4;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = FUN_653ca22d;
    puVar3 = puVar3 + 1;
  }
  puVar1[4] = FUN_653ca05c;
  puVar1[0x12] = FUN_653ca15d;
  FUN_653caf8f(param_1);
  return;
}



uint __cdecl FUN_653ca05c(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_14 [16];
  
  iVar3 = param_1;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  iVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar5 = (byte *)*puVar2;
      iVar6 = puVar2[1];
      goto LAB_653ca086;
    }
LAB_653ca159:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653ca086:
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653ca159;
      pbVar5 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    iVar7 = (uint)bVar1 * 0x100 + (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    iVar8 = iVar7 + -2;
    if (0xd < iVar8) {
      iVar8 = 0;
      do {
        if (iVar6 == 0) {
          uVar4 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_653ca159;
          pbVar5 = (byte *)*puVar2;
          iVar6 = puVar2[1];
        }
        iVar6 = iVar6 + -1;
        local_14[iVar8] = *pbVar5;
        pbVar5 = pbVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xe);
      iVar8 = iVar7 + -0x10;
      if ((((local_14[0] == 0x4a) && (local_14[1] == 'F')) && (local_14[2] == 'I')) &&
         ((local_14[3] == 'F' && (local_14[4] == '\0')))) {
        *(undefined1 *)(param_1 + 0x100) = 1;
        *(byte *)(param_1 + 0x101) = local_14[7];
        *(ushort *)(param_1 + 0x102) = (ushort)local_14[8] * 0x100 + (ushort)local_14[9];
        *(ushort *)(param_1 + 0x104) = (ushort)local_14[10] * 0x100 + (ushort)local_14[0xb];
      }
    }
    param_1 = iVar8;
    *puVar2 = pbVar5;
    puVar2[1] = iVar6;
    if (0 < param_1) {
      pbVar5 = (byte *)(**(code **)(*(int *)(iVar3 + 0x14) + 0x10))(iVar3,param_1);
    }
    uVar4 = CONCAT31((int3)((uint)pbVar5 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653ca15d(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_10 [12];
  
  iVar3 = param_1;
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  iVar6 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar5 = (byte *)*puVar2;
      iVar6 = puVar2[1];
      goto LAB_653ca187;
    }
LAB_653ca229:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653ca187:
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653ca229;
      pbVar5 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    iVar7 = (uint)bVar1 * 0x100 + (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
    iVar8 = iVar7 + -2;
    if (0xb < iVar8) {
      iVar8 = 0;
      do {
        if (iVar6 == 0) {
          uVar4 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_653ca229;
          pbVar5 = (byte *)*puVar2;
          iVar6 = puVar2[1];
        }
        iVar6 = iVar6 + -1;
        local_10[iVar8] = *pbVar5;
        pbVar5 = pbVar5 + 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xc);
      iVar8 = iVar7 + -0xe;
      if ((((local_10[0] == 0x41) && (local_10[1] == 'd')) && (local_10[2] == 'o')) &&
         ((local_10[3] == 'b' && (local_10[4] == 'e')))) {
        *(undefined1 *)(param_1 + 0x106) = 1;
        *(byte *)(param_1 + 0x107) = local_10[0xb];
      }
    }
    param_1 = iVar8;
    *puVar2 = pbVar5;
    puVar2[1] = iVar6;
    if (0 < param_1) {
      pbVar5 = (byte *)(**(code **)(*(int *)(iVar3 + 0x14) + 0x10))(iVar3,param_1);
    }
    uVar4 = CONCAT31((int3)((uint)pbVar5 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653ca22d(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  iVar8 = puVar3[1];
  pbVar6 = (byte *)*puVar3;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar5 != '\0') {
      pbVar6 = (byte *)*puVar3;
      iVar8 = puVar3[1];
      goto LAB_653ca24e;
    }
LAB_653ca285:
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
LAB_653ca24e:
    iVar8 = iVar8 + -1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (iVar8 == 0) {
      uVar5 = (*(code *)puVar3[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_653ca285;
      pbVar6 = (byte *)*puVar3;
      iVar8 = puVar3[1];
    }
    bVar2 = *pbVar6;
    *puVar3 = pbVar6 + 1;
    iVar4 = *(int *)(param_1 + 0x14);
    puVar3[1] = iVar8 + -1;
    uVar7 = (**(code **)(iVar4 + 0x10))(param_1,(uint)bVar1 * 0x100 + (uint)bVar2 + -2);
    uVar5 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar5;
}



undefined4 __cdecl FUN_653ca437(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(char *)(param_1[100] + 0x50) != '\0') {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x3a;
    (*(code *)*puVar1)(param_1);
  }
  puVar3 = (undefined1 *)((int)param_1 + 0xda);
  do {
    puVar3[-0x10] = 0;
    *puVar3 = 1;
    puVar3[0x10] = 5;
    puVar3 = puVar3 + 1;
  } while ((int)(puVar3 + (-0xda - (int)param_1)) < 0x10);
  iVar2 = param_1[100];
  param_1[0x3f] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x101) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 1;
  *(undefined2 *)(param_1 + 0x41) = 1;
  *(undefined1 *)((int)param_1 + 0x106) = 0;
  *(undefined1 *)((int)param_1 + 0x107) = 0;
  *(undefined1 *)(iVar2 + 0x50) = 1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



uint __cdecl FUN_653ca4bf(int *param_1,undefined1 param_2,undefined1 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  piVar6 = param_1;
  puVar3 = (undefined4 *)param_1[5];
  *(undefined1 *)(param_1 + 0x32) = param_2;
  piVar4 = (int *)puVar3[1];
  pbVar10 = (byte *)*puVar3;
  *(undefined1 *)((int)param_1 + 0xc9) = param_3;
  if (piVar4 == (int *)0x0) {
    uVar7 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar7 != '\0') {
      pbVar10 = (byte *)*puVar3;
      piVar4 = (int *)puVar3[1];
      goto LAB_653ca4fe;
    }
LAB_653ca74d:
    uVar7 = uVar7 & 0xffffff00;
  }
  else {
LAB_653ca4fe:
    param_1 = piVar4;
    param_1 = (int *)((int)param_1 + -1);
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    bVar2 = *pbVar10;
    param_1 = (int *)((int)param_1 + -1);
    pbVar10 = pbVar10 + 1;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    pbVar11 = pbVar10 + 1;
    piVar6[0x30] = (uint)*pbVar10;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar11 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    pbVar10 = pbVar11 + 1;
    piVar6[7] = (uint)*pbVar11 << 8;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    piVar6[7] = piVar6[7] + (uint)*pbVar10;
    pbVar10 = pbVar10 + 1;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    pbVar11 = pbVar10 + 1;
    piVar6[6] = (uint)*pbVar10 << 8;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar11 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    piVar6[6] = piVar6[6] + (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    if (param_1 == (int *)0x0) {
      uVar7 = (*(code *)puVar3[3])(piVar6);
      if ((char)uVar7 == '\0') goto LAB_653ca74d;
      param_1 = (int *)puVar3[1];
      pbVar11 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    piVar6[8] = (uint)*pbVar11;
    pbVar11 = pbVar11 + 1;
    if (*(char *)(piVar6[100] + 0x51) != '\0') {
      puVar5 = (undefined4 *)*piVar6;
      puVar5[5] = 0x37;
      (*(code *)*puVar5)(piVar6);
    }
    if (((piVar6[7] == 0) || (piVar6[6] == 0)) || (piVar6[8] < 1)) {
      puVar5 = (undefined4 *)*piVar6;
      puVar5[5] = 0x1d;
      (*(code *)*puVar5)(piVar6);
    }
    if ((uint)bVar1 * 0x100 + (uint)bVar2 + -8 != piVar6[8] * 3) {
      puVar5 = (undefined4 *)*piVar6;
      puVar5[5] = 9;
      (*(code *)*puVar5)(piVar6);
    }
    if (piVar6[0x31] == 0) {
      iVar8 = (**(code **)piVar6[1])(piVar6,1,piVar6[8] * 0x54);
      piVar6[0x31] = iVar8;
    }
    _param_3 = 0;
    puVar9 = (uint *)piVar6[0x31];
    if (0 < piVar6[8]) {
      do {
        puVar9[1] = _param_3;
        if (param_1 == (int *)0x0) {
          uVar7 = (*(code *)puVar3[3])(piVar6);
          if ((char)uVar7 == '\0') goto LAB_653ca74d;
          param_1 = (int *)puVar3[1];
          pbVar11 = (byte *)*puVar3;
        }
        param_1 = (int *)((int)param_1 + -1);
        pbVar10 = pbVar11 + 1;
        *puVar9 = (uint)*pbVar11;
        if (param_1 == (int *)0x0) {
          uVar7 = (*(code *)puVar3[3])(piVar6);
          if ((char)uVar7 == '\0') goto LAB_653ca74d;
          param_1 = (int *)puVar3[1];
          pbVar10 = (byte *)*puVar3;
        }
        bVar1 = *pbVar10;
        param_1 = (int *)((int)param_1 + -1);
        pbVar10 = pbVar10 + 1;
        puVar9[2] = (int)(uint)bVar1 >> 4;
        puVar9[3] = bVar1 & 0xf;
        if (param_1 == (int *)0x0) {
          uVar7 = (*(code *)puVar3[3])(piVar6);
          if ((char)uVar7 == '\0') goto LAB_653ca74d;
          param_1 = (int *)puVar3[1];
          pbVar10 = (byte *)*puVar3;
        }
        param_1 = (int *)((int)param_1 + -1);
        pbVar11 = pbVar10 + 1;
        _param_3 = _param_3 + 1;
        puVar9[4] = (uint)*pbVar10;
        puVar9 = puVar9 + 0x15;
      } while ((int)_param_3 < piVar6[8]);
    }
    *(undefined1 *)(piVar6[100] + 0x51) = 1;
    puVar3[1] = param_1;
    *puVar3 = pbVar11;
    uVar7 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return uVar7;
}



uint __cdecl FUN_653ca751(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *local_18;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar7 = param_1;
  puVar3 = (undefined4 *)param_1[5];
  piVar4 = (int *)puVar3[1];
  pbVar10 = (byte *)*puVar3;
  if (*(char *)(param_1[100] + 0x51) == '\0') {
    puVar5 = (undefined4 *)*param_1;
    puVar5[5] = 0x3b;
    (*(code *)*puVar5)(param_1);
  }
  if (piVar4 == (int *)0x0) {
    uVar8 = (*(code *)puVar3[3])(param_1);
    if ((char)uVar8 != '\0') {
      pbVar10 = (byte *)*puVar3;
      piVar4 = (int *)puVar3[1];
      goto LAB_653ca79c;
    }
LAB_653ca981:
    uVar8 = uVar8 & 0xffffff00;
  }
  else {
LAB_653ca79c:
    param_1 = piVar4;
    param_1 = (int *)((int)param_1 + -1);
    bVar1 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    if (param_1 == (int *)0x0) {
      uVar8 = (*(code *)puVar3[3])(piVar7);
      if ((char)uVar8 == '\0') goto LAB_653ca981;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    bVar2 = *pbVar10;
    param_1 = (int *)((int)param_1 + -1);
    pbVar10 = pbVar10 + 1;
    if (param_1 == (int *)0x0) {
      uVar8 = (*(code *)puVar3[3])(piVar7);
      if ((char)uVar8 == '\0') goto LAB_653ca981;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    uVar9 = (uint)*pbVar10;
    param_1 = (int *)((int)param_1 + -1);
    pbVar10 = pbVar10 + 1;
    if ((((uint)bVar1 * 0x100 + (uint)bVar2 != uVar9 * 2 + 6) || (uVar9 == 0)) || (4 < uVar9)) {
      puVar5 = (undefined4 *)*piVar7;
      puVar5[5] = 9;
      (*(code *)*puVar5)(piVar7);
    }
    local_10 = 0;
    piVar7[0x48] = uVar9;
    if (uVar9 != 0) {
      local_c = piVar7 + 0x49;
      do {
        if (param_1 == (int *)0x0) {
          uVar8 = (*(code *)puVar3[3])(piVar7);
          if ((char)uVar8 == '\0') goto LAB_653ca981;
          param_1 = (int *)puVar3[1];
          pbVar10 = (byte *)*puVar3;
        }
        bVar1 = *pbVar10;
        param_1 = (int *)((int)param_1 + -1);
        pbVar10 = pbVar10 + 1;
        if (param_1 == (int *)0x0) {
          uVar8 = (*(code *)puVar3[3])(piVar7);
          if ((char)uVar8 == '\0') goto LAB_653ca981;
          param_1 = (int *)puVar3[1];
          pbVar10 = (byte *)*puVar3;
        }
        bVar2 = *pbVar10;
        param_1 = (int *)((int)param_1 + -1);
        local_8 = 0;
        local_18 = (uint *)piVar7[0x31];
        pbVar10 = pbVar10 + 1;
        if (0 < piVar7[8]) {
          do {
            if ((uint)bVar1 == *local_18) goto LAB_653ca8bd;
            local_8 = local_8 + 1;
            local_18 = local_18 + 0x15;
          } while (local_8 < piVar7[8]);
        }
        puVar5 = (undefined4 *)*piVar7;
        puVar5[5] = 5;
        puVar5[6] = (uint)bVar1;
        (*(code *)*puVar5)(piVar7);
LAB_653ca8bd:
        *local_c = (int)local_18;
        local_10 = local_10 + 1;
        local_18[5] = (int)(uint)bVar2 >> 4;
        local_18[6] = bVar2 & 0xf;
        local_c = local_c + 1;
      } while (local_10 < (int)uVar9);
    }
    if (param_1 == (int *)0x0) {
      uVar8 = (*(code *)puVar3[3])(piVar7);
      if ((char)uVar8 == '\0') goto LAB_653ca981;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    pbVar11 = pbVar10 + 1;
    piVar7[0x5a] = (uint)*pbVar10;
    if (param_1 == (int *)0x0) {
      uVar8 = (*(code *)puVar3[3])(piVar7);
      if ((char)uVar8 == '\0') goto LAB_653ca981;
      param_1 = (int *)puVar3[1];
      pbVar11 = (byte *)*puVar3;
    }
    param_1 = (int *)((int)param_1 + -1);
    pbVar10 = pbVar11 + 1;
    piVar7[0x5b] = (uint)*pbVar11;
    if (param_1 == (int *)0x0) {
      uVar8 = (*(code *)puVar3[3])(piVar7);
      if ((char)uVar8 == '\0') goto LAB_653ca981;
      param_1 = (int *)puVar3[1];
      pbVar10 = (byte *)*puVar3;
    }
    bVar1 = *pbVar10;
    piVar7[0x5d] = bVar1 & 0xf;
    iVar6 = piVar7[100];
    *(undefined4 *)(iVar6 + 0x54) = 0;
    piVar7[0x1f] = piVar7[0x1f] + 1;
    piVar7[0x5c] = (int)(uint)bVar1 >> 4;
    *puVar3 = pbVar10 + 1;
    puVar3[1] = (int)param_1 + -1;
    uVar8 = CONCAT31((int3)((uint)iVar6 >> 8),1);
  }
  return uVar8;
}



uint __cdecl FUN_653ca985(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *local_8;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar7 = puVar2[1];
  pbVar8 = (byte *)*puVar2;
  if (iVar7 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar8 = (byte *)*puVar2;
      iVar7 = puVar2[1];
      goto LAB_653ca9af;
    }
LAB_653caaa5:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653ca9af:
    iVar7 = iVar7 + -1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if (iVar7 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653caaa5;
      pbVar8 = (byte *)*puVar2;
      iVar7 = puVar2[1];
    }
    iVar7 = iVar7 + -1;
    pbVar9 = pbVar8 + 1;
    local_8 = (byte *)(uint)*pbVar8 + (uint)bVar1 * 0x100 + -2;
    pbVar8 = (byte *)(uint)*pbVar8;
    while (0 < (int)local_8) {
      if (iVar7 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_653caaa5;
        pbVar9 = (byte *)*puVar2;
        iVar7 = puVar2[1];
      }
      pbVar5 = (byte *)(uint)*pbVar9;
      iVar7 = iVar7 + -1;
      pbVar9 = pbVar9 + 1;
      if (iVar7 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_653caaa5;
        pbVar9 = (byte *)*puVar2;
        iVar7 = puVar2[1];
      }
      bVar1 = *pbVar9;
      local_8 = local_8 + -2;
      iVar7 = iVar7 + -1;
      pbVar9 = pbVar9 + 1;
      if ((byte *)0x1f < pbVar5) {
        puVar3 = (undefined4 *)*param_1;
        puVar3[5] = 0x18;
        puVar3[6] = pbVar5;
        (*(code *)*puVar3)(param_1);
      }
      if (pbVar5 < (byte *)0x10) {
        pbVar8 = pbVar5 + 0xca + (int)param_1;
        *pbVar8 = bVar1 & 0xf;
        bVar6 = (byte)((int)(uint)bVar1 >> 4);
        (pbVar5 + 0xda)[(int)param_1] = bVar6;
        if (bVar6 < *pbVar8) {
          puVar3 = (undefined4 *)*param_1;
          puVar3[5] = 0x19;
          puVar3[6] = (uint)bVar1;
          pbVar8 = (byte *)(*(code *)*puVar3)(param_1);
        }
      }
      else {
        (pbVar5 + 0xda)[(int)param_1] = bVar1;
        pbVar8 = pbVar5;
      }
    }
    *puVar2 = pbVar9;
    puVar2[1] = iVar7;
    uVar4 = CONCAT31((int3)((uint)pbVar8 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653caab5(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  byte local_130 [256];
  undefined4 local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined1 uStack_20;
  int local_1c;
  undefined4 *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = (undefined4 *)param_1[5];
  local_18 = puVar2;
  local_8 = puVar2[1];
  pbVar5 = (byte *)*puVar2;
  if (local_8 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      local_8 = puVar2[1];
      pbVar5 = (byte *)*puVar2;
      goto LAB_653caaeb;
    }
LAB_653cac79:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653caaeb:
    local_8 = local_8 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (local_8 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653cac79;
      local_8 = puVar2[1];
      pbVar5 = (byte *)*puVar2;
    }
    local_8 = local_8 + -1;
    pbVar6 = pbVar5 + 1;
    local_10 = (uint)bVar1 * 0x100 + (uint)*pbVar5 + -2;
    while (0 < local_10) {
      if (local_8 == 0) {
        uVar4 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar4 == '\0') goto LAB_653cac79;
        local_8 = puVar2[1];
        pbVar6 = (byte *)*puVar2;
      }
      uVar4 = (uint)*pbVar6;
      local_8 = local_8 + -1;
      local_30 = local_30 & 0xffffff00;
      pbVar6 = pbVar6 + 1;
      local_c = 0;
      local_14 = uVar4;
      iVar8 = 1;
      do {
        if (local_8 == 0) {
          uVar4 = (*(code *)puVar2[3])(param_1);
          if ((char)uVar4 == '\0') goto LAB_653cac79;
          local_8 = puVar2[1];
          pbVar6 = (byte *)*puVar2;
          uVar4 = local_14;
        }
        bVar1 = *pbVar6;
        local_8 = local_8 + -1;
        pbVar6 = pbVar6 + 1;
        *(byte *)((int)&local_30 + iVar8) = bVar1;
        local_c = local_c + (uint)bVar1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x11);
      local_10 = local_10 + -0x11;
      if ((0x100 < local_c) || (local_10 < local_c)) {
        puVar9 = (undefined4 *)*param_1;
        puVar9[5] = 0x1a;
        (*(code *)*puVar9)(param_1);
        uVar4 = local_14;
      }
      local_1c = 0;
      if (0 < local_c) {
        do {
          iVar8 = local_1c;
          if (local_8 == 0) {
            uVar4 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar4 == '\0') goto LAB_653cac79;
            local_8 = puVar2[1];
            pbVar6 = (byte *)*puVar2;
            iVar8 = local_1c;
            uVar4 = local_14;
          }
          local_8 = local_8 + -1;
          local_130[iVar8] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          local_1c = iVar8 + 1;
        } while (iVar8 + 1 < local_c);
      }
      local_10 = local_10 - local_c;
      if ((uVar4 & 0x10) == 0) {
        iVar8 = uVar4 + 0x28;
      }
      else {
        iVar8 = uVar4 + 0x1c;
        uVar4 = uVar4 - 0x10;
      }
      piVar7 = param_1 + iVar8;
      if (((int)uVar4 < 0) || (3 < (int)uVar4)) {
        puVar2 = (undefined4 *)*param_1;
        puVar2[5] = 0x1b;
        puVar2[6] = uVar4;
        (*(code *)*puVar2)(param_1);
      }
      if (*piVar7 == 0) {
        iVar8 = FUN_653c7342((int)param_1);
        *piVar7 = iVar8;
      }
      puVar3 = (uint *)*piVar7;
      *puVar3 = local_30;
      puVar3[1] = uStack_2c;
      puVar3[2] = uStack_28;
      puVar3[3] = uStack_24;
      *(undefined1 *)(puVar3 + 4) = uStack_20;
      pbVar5 = local_130;
      puVar9 = (undefined4 *)((int)puVar3 + 0x11);
      for (iVar8 = 0x40; puVar2 = local_18, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        puVar9 = puVar9 + 1;
      }
    }
    *puVar2 = pbVar6;
    puVar2[1] = local_8;
    uVar4 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653cac7d(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_14;
  ushort *local_10;
  int local_8;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar8 = puVar2[1];
  pbVar9 = (byte *)*puVar2;
  if (iVar8 == 0) {
    uVar5 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar5 != '\0') {
      pbVar9 = (byte *)*puVar2;
      iVar8 = puVar2[1];
      goto LAB_653caca7;
    }
LAB_653caddc:
    uVar5 = uVar5 & 0xffffff00;
  }
  else {
LAB_653caca7:
    iVar8 = iVar8 + -1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    if (iVar8 == 0) {
      uVar5 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar5 == '\0') goto LAB_653caddc;
      pbVar9 = (byte *)*puVar2;
      iVar8 = puVar2[1];
    }
    uVar5 = (uint)*pbVar9;
    iVar8 = iVar8 + -1;
    pbVar9 = pbVar9 + 1;
    iVar6 = (uint)bVar1 * 0x100 + uVar5 + -2;
    while (local_8 = iVar6, 0 < local_8) {
      if (iVar8 == 0) {
        uVar5 = (*(code *)puVar2[3])(param_1);
        if ((char)uVar5 == '\0') goto LAB_653caddc;
        pbVar9 = (byte *)*puVar2;
        iVar8 = puVar2[1];
      }
      bVar1 = *pbVar9;
      iVar8 = iVar8 + -1;
      uVar5 = bVar1 & 0xf;
      pbVar9 = pbVar9 + 1;
      iVar7 = (int)(uint)bVar1 >> 4;
      if (3 < uVar5) {
        puVar3 = (undefined4 *)*param_1;
        puVar3[5] = 0x1c;
        puVar3[6] = uVar5;
        (*(code *)*puVar3)(param_1);
      }
      if (param_1[uVar5 + 0x24] == 0) {
        iVar6 = FUN_653c7326((int)param_1);
        param_1[uVar5 + 0x24] = iVar6;
      }
      local_14 = 0;
      local_10 = (ushort *)param_1[uVar5 + 0x24];
      do {
        if (iVar7 == 0) {
          if (iVar8 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_653caddc;
            pbVar9 = (byte *)*puVar2;
            iVar8 = puVar2[1];
          }
          uVar4 = (ushort)*pbVar9;
        }
        else {
          if (iVar8 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_653caddc;
            pbVar9 = (byte *)*puVar2;
            iVar8 = puVar2[1];
          }
          iVar8 = iVar8 + -1;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          if (iVar8 == 0) {
            uVar5 = (*(code *)puVar2[3])(param_1);
            if ((char)uVar5 == '\0') goto LAB_653caddc;
            pbVar9 = (byte *)*puVar2;
            iVar8 = puVar2[1];
          }
          uVar4 = (ushort)bVar1 * 0x100 + (ushort)*pbVar9;
        }
        iVar8 = iVar8 + -1;
        uVar5 = (uint)uVar4;
        pbVar9 = pbVar9 + 1;
        local_14 = local_14 + 1;
        *local_10 = uVar4;
        local_10 = local_10 + 1;
      } while (local_14 < 0x40);
      iVar6 = local_8 + -0x41;
      if (iVar7 != 0) {
        iVar6 = local_8 + -0x81;
      }
    }
    *puVar2 = pbVar9;
    puVar2[1] = iVar8;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
  }
  return uVar5;
}



uint __cdecl FUN_653cadec(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar6 = puVar2[1];
  pbVar7 = (byte *)*puVar2;
  if (iVar6 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
      goto LAB_653cae14;
    }
LAB_653cae9f:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653cae14:
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653cae9f;
      pbVar7 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    pbVar8 = pbVar7 + 1;
    if ((uint)bVar1 * 0x100 + (uint)*pbVar7 != 4) {
      puVar3 = (undefined4 *)*param_1;
      puVar3[5] = 9;
      (*(code *)*puVar3)(param_1);
    }
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653cae9f;
      pbVar8 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar6 = iVar6 + -1;
    bVar1 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    if (iVar6 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653cae9f;
      pbVar8 = (byte *)*puVar2;
      iVar6 = puVar2[1];
    }
    iVar5 = (uint)bVar1 * 0x100 + (uint)*pbVar8;
    puVar2[1] = iVar6 + -1;
    param_1[0x3f] = iVar5;
    *puVar2 = pbVar8 + 1;
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653caea3(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  puVar2 = (undefined4 *)param_1[5];
  iVar5 = puVar2[1];
  pbVar6 = (byte *)*puVar2;
  if (iVar5 == 0) {
    uVar4 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar4 != '\0') {
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
      goto LAB_653caec7;
    }
LAB_653caf2e:
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
LAB_653caec7:
    bVar1 = *pbVar6;
    iVar5 = iVar5 + -1;
    pbVar6 = pbVar6 + 1;
    if (iVar5 == 0) {
      uVar4 = (*(code *)puVar2[3])(param_1);
      if ((char)uVar4 == '\0') goto LAB_653caf2e;
      pbVar6 = (byte *)*puVar2;
      iVar5 = puVar2[1];
    }
    uVar4 = (uint)*pbVar6;
    if ((bVar1 != 0xff) || (uVar4 != 0xd8)) {
      puVar3 = (undefined4 *)*param_1;
      puVar3[5] = 0x32;
      puVar3[6] = (uint)bVar1;
      puVar3[7] = uVar4;
      (*(code *)*puVar3)(param_1);
    }
    *puVar2 = pbVar6 + 1;
    puVar2[1] = iVar5 + -1;
    param_1[0x5e] = uVar4;
    uVar4 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653caf32(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar2 = FUN_653c9f73(param_1);
    if ((char)uVar2 == '\0') goto LAB_653caf8b;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 400) + 0x54);
  if (*(int *)(param_1 + 0x178) == iVar1 + 0xd0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(param_1,iVar1);
    if ((char)uVar2 == '\0') {
LAB_653caf8b:
      return uVar2 & 0xffffff00;
    }
  }
  *(uint *)(*(int *)(param_1 + 400) + 0x54) = *(int *)(*(int *)(param_1 + 400) + 0x54) + 1U & 7;
  return 1;
}



void __cdecl FUN_653caf8f(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  iVar1 = *(int *)(param_1 + 400);
  *(undefined1 *)(iVar1 + 0x50) = 0;
  *(undefined1 *)(iVar1 + 0x51) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  return;
}



void __cdecl FUN_653cafb4(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_8;
  
  piVar2 = param_1;
  iVar3 = param_1[4];
  if (iVar3 != 0xca) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x11;
    puVar1[6] = iVar3;
    (*(code *)*puVar1)(param_1);
  }
  iVar3 = param_1[0xb];
  uVar6 = param_1[0xc];
  if (uVar6 < (uint)(iVar3 << 3)) {
    if (uVar6 < (uint)(iVar3 << 2)) {
      if (uVar6 < (uint)(iVar3 * 2)) {
        param_1[0x45] = 8;
        param_1[0x17] = param_1[6];
        param_1[0x18] = param_1[7];
      }
      else {
        iVar3 = FUN_653d006b(param_1[6],2);
        param_1[0x17] = iVar3;
        iVar3 = FUN_653d006b(param_1[7],2);
        param_1[0x18] = iVar3;
        param_1[0x45] = 4;
      }
    }
    else {
      iVar3 = FUN_653d006b(param_1[6],4);
      param_1[0x17] = iVar3;
      iVar3 = FUN_653d006b(param_1[7],4);
      param_1[0x18] = iVar3;
      param_1[0x45] = 2;
    }
  }
  else {
    iVar3 = FUN_653d006b(param_1[6],8);
    param_1[0x17] = iVar3;
    iVar3 = FUN_653d006b(param_1[7],8);
    param_1[0x18] = iVar3;
    param_1[0x45] = 1;
  }
  local_8 = param_1[8];
  if (0 < local_8) {
    piVar7 = (int *)param_1[0x45];
    piVar4 = (int *)(param_1[0x31] + 0xc);
    do {
      param_1 = piVar7;
      if ((int)piVar7 < 8) {
        do {
          iVar3 = (int)param_1 * piVar4[-1] * 2;
          if ((iVar3 - piVar2[0x43] * (int)piVar7 != 0 && piVar2[0x43] * (int)piVar7 <= iVar3) ||
             (iVar3 = (int)param_1 * *piVar4 * 2,
             iVar3 - piVar2[0x44] * (int)piVar7 != 0 && piVar2[0x44] * (int)piVar7 <= iVar3)) break;
          param_1 = (int *)((int)param_1 * 2);
        } while ((int)param_1 < 8);
      }
      piVar4[6] = (int)param_1;
      piVar4 = piVar4 + 0x15;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar3 = 0;
  if (0 < piVar2[8]) {
    piVar7 = (int *)(piVar2[0x31] + 0x28);
    do {
      iVar5 = FUN_653d006b(piVar7[-8] * piVar7[-1] * piVar2[6],piVar2[0x43] << 3);
      *piVar7 = iVar5;
      iVar5 = FUN_653d006b(piVar7[-7] * piVar7[-1] * piVar2[7],piVar2[0x44] << 3);
      piVar7[1] = iVar5;
      iVar3 = iVar3 + 1;
      piVar7 = piVar7 + 0x15;
    } while (iVar3 < piVar2[8]);
  }
  iVar3 = piVar2[10];
  iVar5 = 1;
  if (iVar3 == 1) {
    piVar2[0x19] = 1;
    goto LAB_653cb178;
  }
  if (1 < iVar3) {
    if (iVar3 < 4) {
      piVar2[0x19] = 3;
      goto LAB_653cb178;
    }
    if (iVar3 < 6) {
      piVar2[0x19] = 4;
      goto LAB_653cb178;
    }
  }
  piVar2[0x19] = piVar2[8];
LAB_653cb178:
  if (*(char *)((int)piVar2 + 0x4a) == '\0') {
    iVar5 = piVar2[0x19];
  }
  piVar2[0x1a] = iVar5;
  uVar6 = FUN_653cb1a4((int)piVar2);
  if ((char)uVar6 == '\0') {
    piVar2[0x1b] = 1;
  }
  else {
    piVar2[0x1b] = piVar2[0x44];
  }
  return;
}



uint __cdecl FUN_653cb1a4(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  if (((((*(char *)(param_1 + 0x48) == '\0') && (*(char *)(param_1 + 0x108) == '\0')) &&
       (*(int *)(param_1 + 0x24) == 3)) &&
      (((*(int *)(param_1 + 0x20) == 3 && (*(int *)(param_1 + 0x28) == 2)) &&
       ((*(int *)(param_1 + 100) == 3 &&
        ((iVar1 = *(int *)(param_1 + 0xc4), *(int *)(iVar1 + 8) == 2 &&
         (in_EAX = 0, *(int *)(iVar1 + 0x5c) == 1)))))))) &&
     ((*(int *)(iVar1 + 0xb0) == 1 &&
      (((((*(int *)(iVar1 + 0xc) < 3 && (*(int *)(iVar1 + 0x60) == 1)) &&
         (*(int *)(iVar1 + 0xb4) == 1)) &&
        ((iVar2 = *(int *)(param_1 + 0x114), *(int *)(iVar1 + 0x24) == iVar2 &&
         (*(int *)(iVar1 + 0x78) == iVar2)))) && (*(int *)(iVar1 + 0xcc) == iVar2)))))) {
    return 1;
  }
  return in_EAX & 0xffffff00;
}



void __cdecl FUN_653cb219(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x1c);
  *(undefined1 *)(puVar1 + 2) = 0;
  param_1[0x5f] = (int)puVar1;
  *puVar1 = &LAB_653cb465;
  puVar1[1] = &LAB_653cb58b;
  FUN_653cb24b(param_1);
  return;
}



void __cdecl FUN_653cb24b(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  piVar7 = param_1;
  iVar3 = param_1[0x5f];
  FUN_653cafb4(param_1);
  FUN_653cb3f4((int)param_1);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  uVar8 = FUN_653cb1a4((int)param_1);
  *(char *)(iVar3 + 0x10) = (char)uVar8;
  cVar2 = *(char *)((int)param_1 + 0x4a);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  if ((cVar2 == '\0') || ((char)param_1[0x10] == '\0')) {
    *(undefined1 *)(param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x59) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
  }
  if (cVar2 != '\0') {
    if (*(char *)((int)param_1 + 0x41) != '\0') {
      puVar4 = (undefined4 *)*param_1;
      puVar4[5] = 0x2c;
      (*(code *)*puVar4)(param_1);
    }
    if (param_1[0x19] == 3) {
      if (param_1[0x1d] == 0) {
        if ((char)param_1[0x14] == '\0') {
          *(undefined1 *)(param_1 + 0x16) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x5a) = 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x59) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x16) = 1;
      *(undefined1 *)((int)param_1 + 0x59) = 0;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      param_1[0x1d] = 0;
    }
    if ((char)param_1[0x16] != '\0') {
      FUN_653ce58a(param_1);
      *(int *)(iVar3 + 0x14) = param_1[0x69];
    }
    if ((*(char *)((int)param_1 + 0x5a) != '\0') || (*(char *)((int)param_1 + 0x59) != '\0')) {
      FUN_653cefbe(param_1);
      *(int *)(iVar3 + 0x18) = param_1[0x69];
    }
  }
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      FUN_653c84ce(param_1);
      FUN_653cc8e7(param_1);
    }
    else {
      FUN_653cb5ac((int)param_1);
    }
    FUN_653cc63f((int)param_1,*(char *)((int)param_1 + 0x5a));
  }
  FUN_653c89a5(param_1);
  if (*(char *)((int)param_1 + 0xc9) == '\0') {
    if ((char)param_1[0x32] == '\0') {
      FUN_653c8e57((int)param_1);
    }
    else {
      FUN_653cbaef((int)param_1);
    }
  }
  else {
    puVar4 = (undefined4 *)*param_1;
    puVar4[5] = 1;
    (*(code *)*puVar4)(param_1);
  }
  if ((*(char *)(param_1[99] + 0x10) != '\0') ||
     (piVar1 = param_1 + 0x10, param_1._0_1_ = '\0', (char)*piVar1 != '\0')) {
    param_1._0_1_ = '\x01';
  }
  FUN_653c7827((int)piVar7,(char)param_1);
  if (*(char *)((int)piVar7 + 0x41) == '\0') {
    FUN_653c98c6(piVar7,'\0');
  }
  (**(code **)(piVar7[1] + 0x18))(piVar7);
  (**(code **)(piVar7[99] + 8))(piVar7);
  iVar5 = piVar7[2];
  if (((iVar5 != 0) && ((char)piVar7[0x10] == '\0')) && (*(char *)(piVar7[99] + 0x10) != '\0')) {
    iVar9 = piVar7[8];
    if ((char)piVar7[0x32] != '\0') {
      iVar9 = iVar9 * 3 + 2;
    }
    iVar6 = piVar7[0x46];
    *(undefined4 *)(iVar5 + 4) = 0;
    cVar2 = *(char *)((int)piVar7 + 0x5a);
    *(int *)(iVar5 + 8) = iVar6 * iVar9;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(uint *)(iVar5 + 0x10) = (cVar2 != '\0') + 2;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  return;
}



void __cdecl FUN_653cb3f4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x580);
  iVar2 = 0;
  *(undefined4 **)(param_1 + 0x11c) = puVar1 + 0x40;
  puVar4 = puVar1;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  do {
    *(char *)(iVar2 + (int)(puVar1 + 0x40)) = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  puVar4 = *(undefined4 **)(param_1 + 0x11c);
  puVar5 = puVar1 + 0x80;
  for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  puVar5 = puVar1 + 0xe0;
  for (iVar3 = 0x60; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar1 = puVar1 + 0x140;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}



void __cdecl FUN_653cb5ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x30);
  iVar3 = *(int *)(param_1 + 100) * *(int *)(param_1 + 0x5c);
  *(undefined1 *)(puVar2 + 2) = 0;
  iVar1 = *(int *)(param_1 + 0x110);
  *(undefined4 **)(param_1 + 0x19c) = puVar2;
  *puVar2 = &LAB_653cb6e0;
  puVar2[10] = iVar3;
  if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 4);
    puVar2[1] = FUN_653cb6f5;
    puVar2[3] = FUN_653cb911;
    uVar4 = (**(code **)(iVar1 + 4))(param_1,1,iVar3);
    puVar2[8] = uVar4;
  }
  else {
    puVar2[8] = 0;
    puVar2[1] = FUN_653cb79c;
    puVar2[3] = FUN_653cb7cd;
  }
  FUN_653cb620(param_1);
  return;
}



void __cdecl FUN_653cb620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_1 + 0x19c);
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 0x10) = uVar1;
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 0x14) = uVar1;
  uVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  piVar3 = *(int **)(iVar5 + 0x14);
  *(int *)(iVar5 + 0x1c) = iVar2;
  iVar4 = *(int *)(iVar5 + 0x10) - (int)piVar3;
  iVar5 = *(int *)(iVar5 + 0x18) - (int)piVar3;
  local_c = 0x5b6900;
  local_8 = -0xe25100;
  param_1 = -0xb2f480;
  iVar6 = 0x2c8d00;
  iVar2 = iVar2 - (int)piVar3;
  do {
    *(int *)(iVar4 + (int)piVar3) = param_1 >> 0x10;
    *(int *)(iVar2 + (int)piVar3) = iVar6;
    *piVar3 = local_8 >> 0x10;
    *(int *)(iVar5 + (int)piVar3) = local_c;
    iVar6 = iVar6 + -0x581a;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 0x166e9;
    local_c = local_c + -0xb6d2;
    local_8 = local_8 + 0x1c5a2;
  } while (-0x2b34e7 < iVar6);
  return;
}



void __cdecl
FUN_653cb6f5(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6
            ,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  if (*(char *)(iVar1 + 0x24) == '\0') {
    uVar3 = 2;
    if (*(uint *)(iVar1 + 0x2c) < 2) {
      uVar3 = *(uint *)(iVar1 + 0x2c);
    }
    iVar2 = *param_6;
    if ((uint)(param_7 - iVar2) < uVar3) {
      uVar3 = param_7 - iVar2;
    }
    local_c = *(undefined4 *)(param_5 + iVar2 * 4);
    if (uVar3 < 2) {
      local_8 = *(undefined4 *)(iVar1 + 0x20);
      *(undefined1 *)(iVar1 + 0x24) = 1;
    }
    else {
      local_8 = *(undefined4 *)(param_5 + 4 + iVar2 * 4);
    }
    (**(code **)(iVar1 + 0xc))(param_1,param_2,*param_3,&local_c);
  }
  else {
    uVar3 = 1;
    FUN_653d0093(iVar1 + 0x20,0,param_5 + *param_6 * 4,0,1,*(uint *)(iVar1 + 0x28));
    *(undefined1 *)(iVar1 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar3;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) - uVar3;
  if (*(char *)(iVar1 + 0x24) == '\0') {
    *param_3 = *param_3 + 1;
  }
  return;
}



void __cdecl
FUN_653cb79c(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int *param_6
            )

{
  (**(code **)(*(int *)(param_1 + 0x19c) + 0xc))(param_1,param_2,*param_3,param_5 + *param_6 * 4);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}



void __cdecl FUN_653cb7cd(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  uint uVar18;
  
  iVar4 = *(int *)(param_1 + 0x19c);
  iVar5 = *(int *)(param_1 + 0x11c);
  uVar6 = *(uint *)(param_1 + 0x5c);
  iVar7 = *(int *)(iVar4 + 0x10);
  iVar8 = *(int *)(iVar4 + 0x14);
  iVar9 = *(int *)(iVar4 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x1c);
  iVar11 = param_3 * 4;
  pbVar14 = *(byte **)(*param_2 + iVar11);
  pbVar17 = *(byte **)(param_2[1] + iVar11);
  pbVar12 = *(byte **)(param_2[2] + iVar11);
  puVar10 = (undefined1 *)*param_4;
  for (uVar15 = uVar6 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
    bVar1 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    bVar2 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    iVar11 = *(int *)(iVar8 + (uint)bVar1 * 4);
    iVar16 = *(int *)(iVar7 + (uint)bVar2 * 4) + iVar5;
    uVar18 = (uint)*pbVar14;
    iVar13 = (*(int *)(iVar9 + (uint)bVar2 * 4) + *(int *)(iVar4 + (uint)bVar1 * 4) >> 0x10) + iVar5
    ;
    uVar3 = *(undefined1 *)(uVar18 + iVar16);
    puVar10[1] = *(undefined1 *)(uVar18 + iVar13);
    iVar11 = iVar11 + iVar5;
    *puVar10 = uVar3;
    puVar10[2] = *(undefined1 *)(uVar18 + iVar11);
    uVar18 = (uint)pbVar14[1];
    pbVar14 = pbVar14 + 2;
    puVar10[3] = *(undefined1 *)(uVar18 + iVar16);
    puVar10[4] = *(undefined1 *)(uVar18 + iVar13);
    puVar10[5] = *(undefined1 *)(uVar18 + iVar11);
    puVar10 = puVar10 + 6;
  }
  if ((uVar6 & 1) != 0) {
    bVar1 = *pbVar17;
    bVar2 = *pbVar12;
    uVar15 = (uint)*pbVar14;
    *puVar10 = *(undefined1 *)(*(int *)(iVar7 + (uint)bVar2 * 4) + iVar5 + uVar15);
    puVar10[1] = *(undefined1 *)
                  ((*(int *)(iVar9 + (uint)bVar2 * 4) + *(int *)(iVar4 + (uint)bVar1 * 4) >> 0x10) +
                   iVar5 + uVar15);
    puVar10[2] = *(undefined1 *)(*(int *)(iVar8 + (uint)bVar1 * 4) + iVar5 + uVar15);
  }
  return;
}



void __cdecl FUN_653cb911(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar21 = *(int *)(param_1 + 0x19c);
  iVar17 = *(int *)(param_1 + 0x11c);
  uVar5 = *(uint *)(param_1 + 0x5c);
  iVar16 = *(int *)(iVar21 + 0x10);
  iVar6 = *(int *)(iVar21 + 0x14);
  iVar7 = *(int *)(iVar21 + 0x18);
  iVar21 = *(int *)(iVar21 + 0x1c);
  pbVar8 = *(byte **)(*param_2 + param_3 * 8);
  pbVar9 = *(byte **)(*param_2 + param_3 * 8 + 4);
  pbVar18 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar12 = *(byte **)(param_2[2] + param_3 * 4);
  puVar10 = (undefined1 *)*param_4;
  puVar11 = (undefined1 *)param_4[1];
  for (uVar14 = uVar5 >> 1; uVar14 != 0; uVar14 = uVar14 - 1) {
    bVar2 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    bVar3 = *pbVar12;
    pbVar12 = pbVar12 + 1;
    iVar20 = *(int *)(iVar6 + (uint)bVar2 * 4);
    uVar15 = (uint)*pbVar8;
    iVar13 = *(int *)(iVar16 + (uint)bVar3 * 4) + iVar17;
    iVar19 = (*(int *)(iVar7 + (uint)bVar3 * 4) + *(int *)(iVar21 + (uint)bVar2 * 4) >> 0x10) +
             iVar17;
    pbVar1 = pbVar8 + 1;
    *puVar10 = *(undefined1 *)(uVar15 + iVar13);
    iVar20 = iVar20 + iVar17;
    puVar10[1] = *(undefined1 *)(uVar15 + iVar19);
    puVar10[2] = *(undefined1 *)(uVar15 + iVar20);
    pbVar8 = pbVar8 + 2;
    uVar15 = (uint)*pbVar1;
    puVar10[3] = *(undefined1 *)(uVar15 + iVar13);
    puVar10[4] = *(undefined1 *)(uVar15 + iVar19);
    puVar10[5] = *(undefined1 *)(uVar15 + iVar20);
    pbVar1 = pbVar9 + 1;
    uVar15 = (uint)*pbVar9;
    *puVar11 = *(undefined1 *)(uVar15 + iVar13);
    puVar11[1] = *(undefined1 *)(uVar15 + iVar19);
    puVar11[2] = *(undefined1 *)(uVar15 + iVar20);
    pbVar9 = pbVar9 + 2;
    uVar15 = (uint)*pbVar1;
    puVar11[3] = *(undefined1 *)(uVar15 + iVar13);
    puVar11[4] = *(undefined1 *)(uVar15 + iVar19);
    puVar11[5] = *(undefined1 *)(uVar15 + iVar20);
    puVar10 = puVar10 + 6;
    puVar11 = puVar11 + 6;
  }
  if ((uVar5 & 1) != 0) {
    iVar6 = *(int *)(iVar6 + (uint)*pbVar18 * 4);
    iVar16 = *(int *)(iVar16 + (uint)*pbVar12 * 4) + iVar17;
    uVar14 = (uint)*pbVar8;
    iVar21 = (*(int *)(iVar7 + (uint)*pbVar12 * 4) + *(int *)(iVar21 + (uint)*pbVar18 * 4) >> 0x10)
             + iVar17;
    *puVar10 = *(undefined1 *)(uVar14 + iVar16);
    puVar10[1] = *(undefined1 *)(uVar14 + iVar21);
    iVar17 = iVar17 + iVar6;
    puVar10[2] = *(undefined1 *)(uVar14 + iVar17);
    uVar14 = (uint)*pbVar9;
    *puVar11 = *(undefined1 *)(uVar14 + iVar16);
    uVar4 = *(undefined1 *)(uVar14 + iVar17);
    puVar11[1] = *(undefined1 *)(uVar14 + iVar21);
    puVar11[2] = uVar4;
  }
  return;
}



void __cdecl FUN_653cbaef(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x194) = puVar1;
  *puVar1 = FUN_653cbb49;
  puVar1[0xb] = 0;
  iVar2 = *(int *)(param_1 + 0x20);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,iVar2 << 8);
  *(undefined4 **)(param_1 + 0x8c) = puVar1;
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    for (iVar2 = (*(uint *)(param_1 + 0x20) & 0xffffff) << 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    }
  }
  return;
}



void __cdecl FUN_653cbb49(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  
  iVar1 = param_1[0x5a];
  iVar2 = param_1[0x65];
  bVar9 = iVar1 != 0;
  bVar5 = false;
  if (bVar9) {
    if ((param_1[0x5b] < iVar1) || (0x3f < param_1[0x5b])) {
      bVar5 = true;
    }
    bVar10 = param_1[0x48] == 1;
  }
  else {
    bVar10 = param_1[0x5b] == 0;
  }
  if (!bVar10) {
    bVar5 = true;
  }
  iVar3 = param_1[0x5c];
  if ((iVar3 != 0) && (param_1[0x5d] != iVar3 + -1)) {
    bVar5 = true;
  }
  iVar6 = param_1[0x5d];
  if (0xd < iVar6) {
    bVar5 = true;
  }
  if (bVar5) {
    puVar4 = (undefined4 *)*param_1;
    puVar4[5] = 0xd;
    puVar4[6] = iVar1;
    puVar4[7] = param_1[0x5b];
    puVar4[8] = iVar3;
    puVar4[9] = iVar6;
    (*(code *)*puVar4)(param_1);
  }
  local_14 = param_1[0x48];
  if (0 < local_14) {
    iVar1 = param_1[0x5a];
    piVar7 = param_1 + 0x49;
    do {
      if (iVar1 <= param_1[0x5b]) {
        iVar3 = param_1[0x5d];
        piVar8 = (int *)(*(int *)(*piVar7 + 4) * 0x100 + param_1[0x23] + iVar1 * 4);
        for (iVar6 = (param_1[0x5b] - iVar1) + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = iVar3;
          piVar8 = piVar8 + 1;
        }
      }
      piVar7 = piVar7 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (param_1[0x5c] == 0) {
    if (bVar9) {
      *(code **)(iVar2 + 4) = FUN_653cbfb2;
    }
    else {
      *(code **)(iVar2 + 4) = FUN_653cbd5e;
    }
  }
  else if (bVar9) {
    *(code **)(iVar2 + 4) = FUN_653cc2c2;
  }
  else {
    *(code **)(iVar2 + 4) = FUN_653cc1dc;
  }
  local_14 = 0;
  if (0 < param_1[0x48]) {
    local_c = param_1 + 0x49;
    local_10 = (undefined4 *)(iVar2 + 0x18);
    do {
      if (bVar9) {
        iVar1 = *(int *)(*local_c + 0x18);
        if (((iVar1 < 0) || (3 < iVar1)) || (param_1[iVar1 + 0x2c] == 0)) {
          puVar4 = (undefined4 *)*param_1;
          puVar4[5] = 0x2f;
          puVar4[6] = iVar1;
          (*(code *)*puVar4)(param_1);
        }
        piVar7 = (int *)(iVar2 + 0x2c + iVar1 * 4);
        FUN_653c8afd((int)param_1,param_1[iVar1 + 0x2c],piVar7);
        *(int *)(iVar2 + 0x3c) = *piVar7;
      }
      else if (param_1[0x5c] == 0) {
        iVar1 = *(int *)(*local_c + 0x14);
        if (((iVar1 < 0) || (3 < iVar1)) || (param_1[iVar1 + 0x28] == 0)) {
          puVar4 = (undefined4 *)*param_1;
          puVar4[5] = 0x2f;
          puVar4[6] = iVar1;
          (*(code *)*puVar4)(param_1);
        }
        FUN_653c8afd((int)param_1,param_1[iVar1 + 0x28],(int *)(iVar2 + 0x2c + iVar1 * 4));
      }
      local_c = local_c + 1;
      local_14 = local_14 + 1;
      *local_10 = 0;
      local_10 = local_10 + 1;
    } while (local_14 < param_1[0x48]);
  }
  iVar1 = param_1[0x3f];
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(int *)(iVar2 + 0x28) = iVar1;
  return;
}



uint __cdecl FUN_653cbd5e(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int local_38 [5];
  int *local_24;
  undefined2 *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar10 = param_1;
  local_8 = param_1[0x65];
  local_1c = param_1[0x5d];
  if (((param_1[0x3f] == 0) || (*(int *)(param_1[0x65] + 0x28) != 0)) ||
     (uVar3 = FUN_653cbf5e((int)param_1), (char)uVar3 != '\0')) {
    iVar4 = local_8;
    local_40 = param_1;
    local_10 = 0;
    iVar9 = param_1[0x4f];
    local_54 = *(undefined4 *)param_1[5];
    local_50 = ((undefined4 *)param_1[5])[1];
    local_4c = param_1[0x5e];
    piVar1 = *(int **)(local_8 + 8);
    iVar7 = *(int *)(local_8 + 0xc);
    local_3c = local_8 + 0x10;
    local_24 = (int *)(local_8 + 0x14);
    piVar8 = (int *)(local_8 + 0x14);
    piVar11 = local_38;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar11 = piVar11 + 1;
    }
    if (0 < iVar9) {
      local_c = param_1 + 0x50;
      param_1 = piVar1;
      do {
        local_20 = (undefined2 *)*param_2;
        local_18 = *local_c;
        iVar9 = *(int *)(iVar4 + 0x2c + *(int *)(piVar10[*local_c + 0x49] + 0x14) * 4);
        if (iVar7 < 8) {
          uVar3 = FUN_653c8cbe(&local_54,(uint)param_1,iVar7,0);
          if ((char)uVar3 == '\0') goto LAB_653cbf5a;
          param_1 = local_48;
          iVar4 = local_8;
          iVar7 = local_44;
          if (7 < local_44) goto LAB_653cbe46;
          iVar5 = 1;
LAB_653cbe6d:
          uVar3 = FUN_653c8d88(&local_54,param_1,iVar7,iVar9,iVar5);
          if ((int)uVar3 < 0) goto LAB_653cbf5a;
          param_1 = local_48;
          iVar4 = local_8;
          iVar7 = local_44;
          uVar6 = uVar3;
        }
        else {
LAB_653cbe46:
          uVar3 = (int)param_1 >> ((char)iVar7 - 8U & 0x1f) & 0xff;
          iVar5 = *(int *)(iVar9 + 0xd4 + uVar3 * 4);
          if (iVar5 == 0) {
            iVar5 = 9;
            goto LAB_653cbe6d;
          }
          uVar6 = (uint)*(byte *)(uVar3 + 0x4d4 + iVar9);
          iVar7 = iVar7 - iVar5;
        }
        if (uVar6 != 0) {
          if (iVar7 < (int)uVar6) {
            uVar3 = FUN_653c8cbe(&local_54,(uint)param_1,iVar7,uVar6);
            if ((char)uVar3 == '\0') goto LAB_653cbf5a;
            param_1 = local_48;
            iVar4 = local_8;
            iVar7 = local_44;
          }
          iVar7 = iVar7 - uVar6;
          local_14 = (int)param_1 >> ((byte)iVar7 & 0x1f);
          iVar9 = uVar6 * 4;
          uVar6 = local_14 & (1 << ((byte)uVar6 & 0x1f)) - 1U;
          if ((int)uVar6 < *(int *)(&DAT_653c2a88 + iVar9)) {
            uVar6 = *(int *)(&DAT_653c2ac8 + iVar9) + uVar6;
          }
        }
        param_2 = param_2 + 1;
        local_c = local_c + 1;
        iVar9 = local_38[local_18 + 1];
        local_38[local_18 + 1] = uVar6 + iVar9;
        local_10 = local_10 + 1;
        *local_20 = (short)(uVar6 + iVar9 << ((byte)local_1c & 0x1f));
        piVar1 = param_1;
      } while (local_10 < piVar10[0x4f]);
    }
    param_1 = piVar1;
    puVar2 = (undefined4 *)piVar10[5];
    *puVar2 = local_54;
    puVar2[1] = local_50;
    *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + -1;
    piVar10[0x5e] = local_4c;
    *(int **)(iVar4 + 8) = param_1;
    *(int *)(iVar4 + 0xc) = iVar7;
    uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),1);
    piVar10 = local_38;
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      *local_24 = *piVar10;
      piVar10 = piVar10 + 1;
      local_24 = local_24 + 1;
    }
  }
  else {
LAB_653cbf5a:
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}



undefined4 __cdecl FUN_653cbf5e(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x194);
  iVar5 = *(int *)(param_1 + 400);
  iVar3 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  piVar1 = (int *)(iVar5 + 0x58);
  *piVar1 = *piVar1 + iVar3 / 8;
  uVar4 = (**(code **)(iVar5 + 8))(param_1);
  if ((char)uVar4 != '\0') {
    iVar5 = *(int *)(param_1 + 0x120);
    if (0 < iVar5) {
      puVar6 = (undefined4 *)(iVar2 + 0x18);
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}



uint __cdecl FUN_653cbfb2(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int *local_c;
  int local_8;
  
  iVar3 = param_1;
  iVar9 = *(int *)(param_1 + 0x16c);
  local_18 = *(undefined4 *)(param_1 + 0x174);
  iVar1 = *(int *)(param_1 + 0x194);
  local_20 = iVar9;
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (uVar4 = FUN_653cbf5e(param_1), (char)uVar4 != '\0')) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      local_28 = param_1;
      local_3c = **(undefined4 **)(param_1 + 0x14);
      local_38 = (*(undefined4 **)(param_1 + 0x14))[1];
      local_34 = *(undefined4 *)(param_1 + 0x178);
      piVar6 = *(int **)(iVar1 + 8);
      iVar5 = *(int *)(iVar1 + 0xc);
      local_24 = iVar1 + 0x10;
      local_1c = *param_2;
      iVar8 = *(int *)(iVar1 + 0x3c);
      param_1 = *(int *)(param_1 + 0x168);
      local_8 = 0;
      local_c = piVar6;
      if (param_1 <= iVar9) {
        do {
          if (iVar5 < 8) {
            uVar4 = FUN_653c8cbe(&local_3c,(uint)piVar6,iVar5,0);
            if ((char)uVar4 == '\0') goto LAB_653cc191;
            local_c = local_30;
            iVar5 = local_2c;
            piVar6 = local_30;
            if (7 < local_2c) goto LAB_653cc07b;
            iVar9 = 1;
LAB_653cc0a7:
            uVar4 = FUN_653c8d88(&local_3c,piVar6,iVar5,iVar8,iVar9);
            if ((int)uVar4 < 0) goto LAB_653cc191;
            local_c = local_30;
            iVar5 = local_2c;
            piVar6 = local_30;
          }
          else {
LAB_653cc07b:
            uVar4 = (int)piVar6 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
            iVar9 = *(int *)(iVar8 + 0xd4 + uVar4 * 4);
            if (iVar9 == 0) {
              iVar9 = 9;
              goto LAB_653cc0a7;
            }
            iVar5 = iVar5 - iVar9;
            uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar8);
          }
          iVar9 = (int)uVar4 >> 4;
          uVar7 = uVar4 & 0xf;
          local_14 = iVar9;
          local_10 = uVar7;
          if (uVar7 == 0) {
            if (iVar9 != 0xf) {
              iVar8 = 1 << ((byte)iVar9 & 0x1f);
              local_8 = iVar8;
              if (iVar9 != 0) {
                if ((iVar5 < iVar9) &&
                   (uVar4 = FUN_653c8cbe(&local_3c,(uint)piVar6,iVar5,iVar9), iVar5 = local_2c,
                   piVar6 = local_30, (char)uVar4 == '\0')) goto LAB_653cc191;
                iVar5 = iVar5 - iVar9;
                local_8 = local_8 + ((int)piVar6 >> ((byte)iVar5 & 0x1f) & iVar8 - 1U);
              }
              local_8 = local_8 + -1;
              break;
            }
            param_1 = param_1 + 0xf;
            local_14 = 0xf;
          }
          else {
            param_1 = param_1 + iVar9;
            if (iVar5 < (int)uVar7) {
              uVar4 = FUN_653c8cbe(&local_3c,(uint)piVar6,iVar5,uVar7);
              if ((char)uVar4 == '\0') goto LAB_653cc191;
              local_c = local_30;
              iVar5 = local_2c;
              piVar6 = local_30;
            }
            iVar5 = iVar5 - uVar7;
            local_14 = 1;
            uVar4 = (int)piVar6 >> ((byte)iVar5 & 0x1f) & (1 << (sbyte)uVar7) - 1U;
            if ((int)uVar4 < *(int *)(&DAT_653c2a88 + local_10 * 4)) {
              uVar4 = *(int *)(&DAT_653c2ac8 + local_10 * 4) + uVar4;
            }
            *(short *)(local_1c + *(int *)(&DAT_653c2f08 + param_1 * 4) * 2) =
                 (short)(uVar4 << ((byte)local_18 & 0x1f));
            piVar6 = local_c;
          }
          param_1 = param_1 + 1;
        } while (param_1 <= local_20);
      }
      puVar2 = *(undefined4 **)(iVar3 + 0x14);
      *puVar2 = local_3c;
      puVar2[1] = local_38;
      *(int *)(iVar1 + 0xc) = iVar5;
      *(undefined4 *)(iVar3 + 0x178) = local_34;
      *(int **)(iVar1 + 8) = piVar6;
    }
    else {
      local_8 = *(int *)(iVar1 + 0x14) + -1;
    }
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    *(int *)(iVar1 + 0x14) = local_8;
    uVar4 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  else {
LAB_653cc191:
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}



uint __cdecl FUN_653cc1dc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = param_1;
  iVar1 = param_1[0x65];
  local_c = 1 << ((byte)param_1[0x5d] & 0x1f);
  if (((param_1[0x3f] == 0) || (*(int *)(iVar1 + 0x28) != 0)) ||
     (uVar5 = FUN_653cbf5e((int)param_1), (char)uVar5 != '\0')) {
    local_14 = param_1;
    local_8 = 0;
    local_28 = *(undefined4 *)param_1[5];
    local_24 = ((undefined4 *)param_1[5])[1];
    local_20 = param_1[0x5e];
    uVar7 = *(uint *)(iVar1 + 8);
    iVar6 = *(int *)(iVar1 + 0xc);
    local_10 = iVar1 + 0x10;
    if (0 < (int)param_1[0x4f]) {
      param_1 = param_2;
      do {
        puVar2 = (ushort *)*param_1;
        if ((iVar6 < 1) &&
           (uVar5 = FUN_653c8cbe(&local_28,uVar7,iVar6,1), iVar6 = local_18, uVar7 = local_1c,
           (char)uVar5 == '\0')) goto LAB_653cc2be;
        iVar6 = iVar6 + -1;
        if (((int)uVar7 >> ((byte)iVar6 & 0x1f) & 1U) != 0) {
          *puVar2 = *puVar2 | (ushort)local_c;
        }
        local_8 = local_8 + 1;
        param_1 = param_1 + 1;
      } while (local_8 < (int)puVar4[0x4f]);
    }
    puVar3 = (undefined4 *)puVar4[5];
    *puVar3 = local_28;
    puVar3[1] = local_24;
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
    puVar4[0x5e] = local_20;
    *(uint *)(iVar1 + 8) = uVar7;
    *(int *)(iVar1 + 0xc) = iVar6;
    uVar5 = CONCAT31((int3)((uint)local_20 >> 8),1);
  }
  else {
LAB_653cc2be:
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}



uint __cdecl FUN_653cc2c2(int param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int local_150 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  iVar4 = param_1;
  local_1c = *(int *)(param_1 + 0x16c);
  bVar7 = (byte)*(undefined4 *)(param_1 + 0x174);
  local_30 = 1 << (bVar7 & 0x1f);
  iVar2 = *(int *)(param_1 + 0x194);
  local_28 = -1 << (bVar7 & 0x1f);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar2 + 0x28) != 0)) ||
     (piVar5 = (int *)FUN_653cbf5e(param_1), (char)piVar5 != '\0')) {
    local_3c = param_1;
    local_2c = 0;
    local_50 = **(undefined4 **)(param_1 + 0x14);
    local_20 = *param_2;
    local_4c = (*(undefined4 **)(param_1 + 0x14))[1];
    local_48 = *(undefined4 *)(param_1 + 0x178);
    piVar9 = *(int **)(iVar2 + 8);
    iVar6 = *(int *)(iVar2 + 0xc);
    local_38 = iVar2 + 0x10;
    local_8 = *(int *)(iVar2 + 0x14);
    local_24 = *(int *)(iVar2 + 0x3c);
    param_1 = *(int *)(param_1 + 0x168);
    local_18 = piVar9;
    if ((local_8 == 0) && (param_1 <= local_1c)) {
      local_c = local_150;
      do {
        if (iVar6 < 8) {
          piVar5 = (int *)FUN_653c8cbe(&local_50,(uint)piVar9,iVar6,0);
          if ((char)piVar5 == '\0') goto LAB_653cc61c;
          local_18 = local_44;
          iVar6 = local_40;
          piVar9 = local_44;
          if (7 < local_40) goto LAB_653cc3a7;
          iVar10 = 1;
LAB_653cc3d6:
          piVar5 = (int *)FUN_653c8d88(&local_50,piVar9,iVar6,local_24,iVar10);
          local_10 = piVar5;
          if ((int)piVar5 < 0) goto LAB_653cc61c;
          local_18 = local_44;
          iVar6 = local_40;
          piVar9 = local_44;
        }
        else {
LAB_653cc3a7:
          uVar8 = (int)piVar9 >> ((char)iVar6 - 8U & 0x1f) & 0xff;
          iVar10 = *(int *)(local_24 + 0xd4 + uVar8 * 4);
          if (iVar10 == 0) {
            iVar10 = 9;
            goto LAB_653cc3d6;
          }
          iVar6 = iVar6 - iVar10;
          local_10 = (int *)(uint)*(byte *)(uVar8 + 0x4d4 + local_24);
        }
        local_14 = (int)local_10 >> 4;
        local_10 = (int *)((uint)local_10 & 0xf);
        if (local_10 == (int *)0x0) {
          if (local_14 != 0xf) {
            iVar10 = 1 << ((byte)local_14 & 0x1f);
            local_8 = iVar10;
            if (local_14 != 0) {
              if ((iVar6 < local_14) &&
                 (piVar5 = (int *)FUN_653c8cbe(&local_50,(uint)piVar9,iVar6,local_14),
                 iVar6 = local_40, piVar9 = local_44, (char)piVar5 == '\0')) goto LAB_653cc61c;
              iVar6 = iVar6 - local_14;
              local_8 = local_8 + ((int)piVar9 >> ((byte)iVar6 & 0x1f) & iVar10 - 1U);
            }
            break;
          }
        }
        else {
          if (iVar6 < 1) {
            piVar5 = (int *)FUN_653c8cbe(&local_50,(uint)piVar9,iVar6,1);
            if ((char)piVar5 == '\0') goto LAB_653cc61c;
            local_18 = local_44;
            iVar6 = local_40;
            piVar9 = local_44;
          }
          iVar6 = iVar6 + -1;
          local_10 = (int *)local_30;
          if (((int)piVar9 >> ((byte)iVar6 & 0x1f) & 1U) == 0) {
            local_10 = (int *)local_28;
          }
        }
        local_34 = (int *)(&DAT_653c2f08 + param_1 * 4);
        do {
          psVar1 = (short *)(local_20 + *local_34 * 2);
          if (*(short *)(local_20 + *local_34 * 2) == 0) {
            local_14 = local_14 + -1;
            if (local_14 < 0) break;
          }
          else {
            if (iVar6 < 1) {
              piVar5 = (int *)FUN_653c8cbe(&local_50,(uint)piVar9,iVar6,1);
              if ((char)piVar5 == '\0') goto LAB_653cc61c;
              local_18 = local_44;
              iVar6 = local_40;
              piVar9 = local_44;
            }
            iVar6 = iVar6 + -1;
            if ((((int)piVar9 >> ((byte)iVar6 & 0x1f) & 1U) != 0) &&
               (((int)*psVar1 & local_30) == 0)) {
              uVar8 = local_30;
              if (*psVar1 < 0) {
                uVar8 = local_28;
              }
              *psVar1 = (short)uVar8 + *psVar1;
            }
          }
          param_1 = param_1 + 1;
          local_34 = local_34 + 1;
        } while (param_1 <= local_1c);
        piVar5 = local_18;
        if (local_10 != (int *)0x0) {
          local_2c = local_2c + 1;
          iVar10 = *(int *)(&DAT_653c2f08 + param_1 * 4);
          *(short *)(local_20 + iVar10 * 2) = (short)local_10;
          piVar9 = local_c + 1;
          *local_c = iVar10;
          local_c = piVar9;
          piVar9 = piVar5;
        }
        param_1 = param_1 + 1;
      } while (param_1 <= local_1c);
    }
    if (local_8 != 0) {
      if (param_1 <= local_1c) {
        local_c = (int *)(&DAT_653c2f08 + param_1 * 4);
        do {
          psVar1 = (short *)(local_20 + *local_c * 2);
          if (*(short *)(local_20 + *local_c * 2) != 0) {
            if ((iVar6 < 1) &&
               (piVar5 = (int *)FUN_653c8cbe(&local_50,(uint)piVar9,iVar6,1), iVar6 = local_40,
               piVar9 = local_44, (char)piVar5 == '\0')) goto LAB_653cc61c;
            iVar6 = iVar6 + -1;
            if ((((int)piVar9 >> ((byte)iVar6 & 0x1f) & 1U) != 0) &&
               (((int)*psVar1 & local_30) == 0)) {
              uVar8 = local_30;
              if (*psVar1 < 0) {
                uVar8 = local_28;
              }
              *psVar1 = (short)uVar8 + *psVar1;
            }
          }
          param_1 = param_1 + 1;
          local_c = local_c + 1;
        } while (param_1 <= local_1c);
      }
      local_8 = local_8 + -1;
    }
    puVar3 = *(undefined4 **)(iVar4 + 0x14);
    *puVar3 = local_50;
    puVar3[1] = local_4c;
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
    *(int *)(iVar2 + 0xc) = iVar6;
    *(undefined4 *)(iVar4 + 0x178) = local_48;
    *(int *)(iVar2 + 0x14) = local_8;
    *(int **)(iVar2 + 8) = piVar9;
    return CONCAT31((int3)((uint)local_8 >> 8),1);
  }
LAB_653cc63b:
  return (uint)piVar5 & 0xffffff00;
LAB_653cc61c:
  if (0 < local_2c) {
    piVar5 = local_150 + local_2c;
    do {
      piVar9 = piVar5 + -1;
      piVar5 = piVar5 + -1;
      *(undefined2 *)(local_20 + *piVar9 * 2) = 0;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  goto LAB_653cc63b;
}



void __cdecl FUN_653cc63f(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  cVar1 = *(char *)(param_1 + 0x4a);
  *(undefined4 **)(param_1 + 0x188) = puVar3;
  *puVar3 = &LAB_653cc6c2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  if (cVar1 != '\0') {
    iVar6 = *(int *)(param_1 + 0x110);
    puVar3[4] = iVar6;
    if (param_2 == '\0') {
      uVar5 = (**(code **)(*(int *)(param_1 + 4) + 8))
                        (param_1,1,*(int *)(param_1 + 0x5c) * *(int *)(param_1 + 100),iVar6);
      puVar3[3] = uVar5;
    }
    else {
      iVar2 = *(int *)(param_1 + 4);
      iVar4 = FUN_653d007b(*(int *)(param_1 + 0x60),iVar6);
      uVar5 = (**(code **)(iVar2 + 0x10))
                        (param_1,1,0,*(int *)(param_1 + 0x5c) * *(int *)(param_1 + 100),iVar4,iVar6)
      ;
      puVar3[2] = uVar5;
    }
  }
  return;
}



void __cdecl
FUN_653cc762(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = param_6;
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x188);
  uVar4 = param_7 - *param_6;
  if (*(uint *)(iVar1 + 0x10) < (uint)(param_7 - *param_6)) {
    uVar4 = *(uint *)(iVar1 + 0x10);
  }
  param_1 = 0;
  (**(code **)(*(int *)(iVar2 + 0x19c) + 4))
            (iVar2,param_2,param_3,param_4,*(undefined4 *)(iVar1 + 0xc),&param_1,uVar4);
  (**(code **)(*(int *)(iVar2 + 0x1a4) + 4))
            (iVar2,*(undefined4 *)(iVar1 + 0xc),param_5 + *piVar3 * 4,param_1);
  *piVar3 = *piVar3 + param_1;
  return;
}



void __cdecl
FUN_653cc7ca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x188);
  puVar1 = (uint *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x14),
                       *(undefined4 *)(iVar2 + 0x10),1);
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
  }
  uVar3 = *puVar1;
  (**(code **)(*(int *)(param_1 + 0x19c) + 4))
            (param_1,param_2,param_3,param_4,*(undefined4 *)(iVar2 + 0xc),puVar1,
             *(undefined4 *)(iVar2 + 0x10));
  if (uVar3 < *puVar1) {
    iVar5 = *puVar1 - uVar3;
    (**(code **)(*(int *)(param_1 + 0x1a4) + 4))(param_1,*(int *)(iVar2 + 0xc) + uVar3 * 4,0,iVar5);
    *param_6 = *param_6 + iVar5;
  }
  if (*(uint *)(iVar2 + 0x10) <= *puVar1) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + *(uint *)(iVar2 + 0x10);
    *puVar1 = 0;
  }
  return;
}



void __cdecl FUN_653cc85b(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int in_stack_00000014;
  int *in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = *(int *)(param_1 + 0x188);
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x1c))
                      (param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14),
                       *(undefined4 *)(iVar1 + 0x10),0);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  uVar4 = *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  uVar3 = in_stack_0000001c - *in_stack_00000018;
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  uVar3 = *(int *)(param_1 + 0x60) - *(int *)(iVar1 + 0x14);
  if (uVar3 < uVar4) {
    uVar4 = uVar3;
  }
  (**(code **)(*(int *)(param_1 + 0x1a4) + 4))
            (param_1,*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) * 4,
             in_stack_00000014 + *in_stack_00000018 * 4,uVar4);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + uVar4;
  uVar3 = *(uint *)(iVar1 + 0x18);
  *in_stack_00000018 = *in_stack_00000018 + uVar4;
  if (*(uint *)(iVar1 + 0x10) <= uVar3) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + *(uint *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  return;
}



void __cdecl FUN_653cc8e7(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int local_c;
  
  puVar5 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xa0);
  param_1[0x67] = (int)puVar5;
  *(undefined1 *)(puVar5 + 2) = 0;
  iVar11 = param_1[0x42];
  *puVar5 = &LAB_653ccacc;
  puVar5[1] = FUN_653ccae6;
  if ((char)iVar11 != '\0') {
    puVar9 = (undefined4 *)*param_1;
    puVar9[5] = 0x15;
    (*(code *)*puVar9)(param_1);
  }
  if (((char)param_1[0x12] == '\0') || (param_1[0x45] < 2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_c = 0;
  if (0 < param_1[8]) {
    piVar10 = (int *)(param_1[0x31] + 0x24);
    puVar9 = puVar5 + 0xd;
    do {
      bVar2 = true;
      iVar6 = (piVar10[-7] * *piVar10) / param_1[0x45];
      iVar7 = (piVar10[-6] * *piVar10) / param_1[0x45];
      iVar4 = piVar10[3];
      iVar11 = param_1[0x43];
      puVar9[0xc] = iVar7;
      if ((char)iVar4 == '\0') {
        *puVar9 = &LAB_653ccbbe;
LAB_653cc9bb:
        bVar2 = false;
      }
      else {
        if ((iVar6 == iVar11) && (iVar7 == param_1[0x44])) {
          *puVar9 = &LAB_653ccbb3;
          goto LAB_653cc9bb;
        }
        if (iVar6 * 2 == iVar11) {
          if (iVar7 == param_1[0x44]) {
            if ((bVar3) && (2 < (uint)piVar10[1])) {
              *puVar9 = FUN_653ccd74;
            }
            else {
              *puVar9 = FUN_653cccb0;
            }
          }
          else {
            if ((iVar6 * 2 != iVar11) || (iVar7 * 2 != param_1[0x44])) goto LAB_653cca25;
            if ((bVar3) && (2 < (uint)piVar10[1])) {
              *puVar9 = FUN_653cce1b;
              *(undefined1 *)(puVar5 + 2) = 1;
            }
            else {
              *puVar9 = FUN_653cccfd;
            }
          }
        }
        else {
LAB_653cca25:
          if ((iVar11 % iVar6 == 0) && (param_1[0x44] % iVar7 == 0)) {
            iVar11 = param_1[0x43];
            *puVar9 = FUN_653ccbc6;
            *(char *)(local_c + 0x8c + (int)puVar5) = (char)(iVar11 / iVar6);
            *(char *)(local_c + 0x96 + (int)puVar5) = (char)(param_1[0x44] / iVar7);
          }
          else {
            puVar1 = (undefined4 *)*param_1;
            puVar1[5] = 0x23;
            (*(code *)*puVar1)(param_1);
          }
        }
      }
      if (bVar2) {
        iVar11 = param_1[0x44];
        iVar4 = param_1[1];
        iVar6 = FUN_653d007b(param_1[0x17],param_1[0x43]);
        uVar8 = (**(code **)(iVar4 + 8))(param_1,1,iVar6,iVar11);
        puVar9[-10] = uVar8;
      }
      local_c = local_c + 1;
      puVar9 = puVar9 + 1;
      piVar10 = piVar10 + 0x15;
    } while (local_c < param_1[8]);
  }
  return;
}



void __cdecl
FUN_653ccae6(int *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  iVar2 = param_1[0x67];
  if (param_1[0x44] <= *(int *)(iVar2 + 0x5c)) {
    local_c = 0;
    local_8 = param_1[0x31];
    if (0 < param_1[8]) {
      iVar4 = iVar2 + 0xc;
      param_1 = param_2;
      do {
        (**(code **)(iVar4 + 0x28))
                  (piVar3,local_8,*param_1 + *(int *)(iVar4 + 0x58) * *param_3 * 4,iVar4);
        param_1 = param_1 + 1;
        local_8 = local_8 + 0x54;
        local_c = local_c + 1;
        iVar4 = iVar4 + 4;
      } while (local_c < piVar3[8]);
    }
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  uVar5 = piVar3[0x44] - *(int *)(iVar2 + 0x5c);
  if (*(uint *)(iVar2 + 0x60) < uVar5) {
    uVar5 = *(uint *)(iVar2 + 0x60);
  }
  uVar1 = param_7 - *param_6;
  if (uVar1 < uVar5) {
    uVar5 = uVar1;
  }
  (**(code **)(piVar3[0x68] + 4))
            (piVar3,iVar2 + 0xc,*(undefined4 *)(iVar2 + 0x5c),param_5 + *param_6 * 4,uVar5);
  *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) - uVar5;
  *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + uVar5;
  iVar2 = *(int *)(iVar2 + 0x5c);
  *param_6 = *param_6 + uVar5;
  if (piVar3[0x44] <= iVar2) {
    *param_3 = *param_3 + 1;
  }
  return;
}



void __cdecl FUN_653ccbc6(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *local_8;
  
  iVar6 = param_1;
  piVar1 = (int *)(param_1 + 0x19c);
  param_1 = 0;
  puVar4 = (undefined4 *)*param_4;
  iVar7 = *piVar1 + param_2[1];
  bVar2 = *(byte *)(iVar7 + 0x8c);
  uVar11 = (uint)bVar2;
  uVar12 = (uint)*(byte *)(iVar7 + 0x96);
  if (0 < *(int *)(iVar6 + 0x110)) {
    param_2 = param_3;
    local_8 = puVar4;
    do {
      puVar9 = (undefined1 *)*param_2;
      puVar13 = (undefined4 *)*local_8;
      puVar8 = (undefined4 *)(*(int *)(iVar6 + 0x5c) + (int)puVar13);
      puVar5 = puVar13;
      while (puVar13 < puVar8) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        if (uVar11 != 0) {
          for (uVar10 = (uint)(bVar2 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = CONCAT22(CONCAT11(uVar3,uVar3),CONCAT11(uVar3,uVar3));
            puVar13 = puVar13 + 1;
          }
          for (uVar10 = uVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar13 = uVar3;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          puVar13 = (undefined4 *)((int)puVar5 + uVar11);
          puVar5 = puVar13;
        }
      }
      if (1 < uVar12) {
        FUN_653d0093((int)puVar4,param_1,(int)puVar4,param_1 + 1,uVar12 - 1,*(uint *)(iVar6 + 0x5c))
        ;
      }
      param_1 = param_1 + uVar12;
      param_2 = param_2 + 1;
      local_8 = local_8 + uVar12;
    } while (param_1 < *(int *)(iVar6 + 0x110));
  }
  return;
}



void __cdecl FUN_653cccb0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  
  puVar5 = (undefined4 *)*param_4;
  param_4 = *(undefined4 **)(param_1 + 0x110);
  if (0 < (int)param_4) {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar6 = param_3 - (int)puVar5;
    do {
      puVar4 = (undefined1 *)*puVar5;
      puVar7 = *(undefined1 **)(iVar6 + (int)puVar5);
      puVar1 = puVar4 + iVar3;
      for (; puVar4 < puVar1; puVar4 = puVar4 + 2) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar4 = uVar2;
        puVar4[1] = uVar2;
      }
      puVar5 = puVar5 + 1;
      param_4 = (undefined4 *)((int)param_4 + -1);
    } while (param_4 != (undefined4 *)0x0);
  }
  return;
}



void __cdecl
FUN_653cccfd(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  puVar5 = param_1;
  puVar3 = (undefined4 *)*param_4;
  iVar8 = 0;
  if (0 < (int)param_1[0x44]) {
    param_4 = param_3;
    param_1 = puVar3;
    do {
      uVar4 = puVar5[0x17];
      puVar7 = (undefined1 *)*param_4;
      puVar6 = (undefined1 *)*param_1;
      puVar1 = puVar6 + uVar4;
      for (; puVar6 < puVar1; puVar6 = puVar6 + 2) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar2;
        puVar6[1] = uVar2;
      }
      FUN_653d0093((int)puVar3,iVar8,(int)puVar3,iVar8 + 1,1,uVar4);
      param_4 = param_4 + 1;
      param_1 = param_1 + 2;
      iVar8 = iVar8 + 2;
    } while (iVar8 < (int)puVar5[0x44]);
  }
  return;
}



void __cdecl FUN_653ccd74(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  puVar9 = (undefined4 *)*param_4;
  param_1 = *(int *)(param_1 + 0x110);
  if (0 < param_1) {
    iVar3 = *(int *)(param_2 + 0x28);
    iVar7 = param_3 - (int)puVar9;
    do {
      pbVar4 = *(byte **)(iVar7 + (int)puVar9);
      pbVar5 = (byte *)*puVar9;
      bVar2 = *pbVar4;
      uVar8 = (uint)pbVar4[1];
      *pbVar5 = bVar2;
      pbVar5[1] = (byte)((int)((uint)bVar2 * 3 + 2 + uVar8) >> 2);
      pbVar4 = pbVar4 + 1;
      for (iVar1 = iVar3 + -2; pbVar5 = pbVar5 + 2, iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar6 = uVar8 * 3;
        uVar8 = (uint)pbVar4[1];
        *pbVar5 = (byte)((int)(pbVar4[-1] + 1 + iVar6) >> 2);
        pbVar5[1] = (byte)((int)(iVar6 + 2 + uVar8) >> 2);
        pbVar4 = pbVar4 + 1;
      }
      bVar2 = *pbVar4;
      puVar9 = puVar9 + 1;
      param_1 = param_1 + -1;
      *pbVar5 = (byte)((int)(pbVar4[-1] + 1 + (uint)bVar2 * 3) >> 2);
      pbVar5[1] = bVar2;
    } while (param_1 != 0);
  }
  return;
}



void __cdecl FUN_653cce1b(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  int local_8;
  
  iVar12 = 0;
  iVar3 = *param_4;
  local_8 = 0;
  iVar4 = *(int *)(param_1 + 0x110);
  if (0 < iVar4) {
    iVar5 = *(int *)(param_2 + 0x28);
    do {
      param_4 = (int *)0x0;
      puVar1 = (undefined4 *)(param_3 + local_8 * 4);
      piVar7 = (int *)(iVar3 + iVar12 * 4);
      do {
        pbVar11 = (byte *)*puVar1;
        if (param_4 == (int *)0x0) {
          pbVar13 = (byte *)puVar1[-1];
        }
        else {
          pbVar13 = *(byte **)(param_3 + 4 + local_8 * 4);
        }
        puVar6 = (undefined1 *)*piVar7;
        piVar7 = piVar7 + 1;
        iVar12 = iVar12 + 1;
        iVar10 = (uint)*pbVar11 * 3 + (uint)*pbVar13;
        iVar8 = (uint)pbVar11[1] * 3 + (uint)pbVar13[1];
        *puVar6 = (char)(iVar10 * 4 + 8 >> 4);
        pbVar13 = pbVar13 + 2;
        pbVar11 = pbVar11 + 2;
        puVar6[1] = (char)(iVar10 * 3 + 7 + iVar8 >> 4);
        for (iVar2 = iVar5 + -2; puVar6 = puVar6 + 2, iVar2 != 0; iVar2 = iVar2 + -1) {
          iVar9 = (uint)*pbVar11 * 3 + (uint)*pbVar13;
          pbVar13 = pbVar13 + 1;
          pbVar11 = pbVar11 + 1;
          *puVar6 = (char)(iVar10 + 8 + iVar8 * 3 >> 4);
          puVar6[1] = (char)(iVar9 + 7 + iVar8 * 3 >> 4);
          iVar10 = iVar8;
          iVar8 = iVar9;
        }
        param_4 = (int *)((int)param_4 + 1);
        *puVar6 = (char)(iVar8 * 3 + 8 + iVar10 >> 4);
        puVar6[1] = (char)(iVar8 * 4 + 7 >> 4);
      } while ((int)param_4 < 2);
      local_8 = local_8 + 1;
    } while (iVar12 < iVar4);
  }
  return;
}



void __cdecl FUN_653ccf43(undefined4 *param_1)

{
  *param_1 = FUN_653ccf8f;
  param_1[1] = &LAB_653ccfe6;
  param_1[2] = FUN_653ccfac;
  param_1[3] = &LAB_653cd017;
  param_1[4] = &LAB_653cd0bb;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[5] = 0;
  param_1[0x1c] = &PTR_s_Bogus_message_code__d_653c2b08;
  param_1[0x1d] = 0x75;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}



void __cdecl FUN_653ccf8f(int *param_1)

{
  (**(code **)(*param_1 + 8))(param_1);
  FUN_653c730b((int)param_1);
  FUN_653d0f50(1);
  return;
}



void __cdecl FUN_653ccfac(int *param_1)

{
  undefined1 local_cc [200];
  
  (**(code **)(*param_1 + 0xc))(param_1,local_cc);
  FID_conflict__fwprintf((FILE *)(PTR_DAT_653dd6f8 + 0x40),(wchar_t *)&DAT_653dd684,local_cc);
  return;
}



void __cdecl FUN_653cd0ca(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_134 [8];
  int local_114 [8];
  int local_f4 [8];
  int local_d4 [8];
  int local_b4 [8];
  int local_94 [8];
  int local_74 [8];
  int local_54 [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar11 = *(int *)(param_1 + 0x11c) + 0x80;
  piVar6 = *(int **)(param_2 + 0x50);
  local_34 = iVar11;
  local_c = (int *)param_3;
  piVar5 = local_134;
  local_24 = 8;
  do {
    sVar2 = *(short *)((int)local_c + 0x10);
    local_8 = CONCAT22(local_8._2_2_,sVar2);
    sVar3 = *(short *)((int)local_c + 0x30);
    local_10 = CONCAT22(local_10._2_2_,sVar3);
    if ((((((*(short *)((int)local_c + 0x60) == 0 && *(short *)((int)local_c + 0x70) == 0) &&
           *(short *)((int)local_c + 0x40) == 0) && *(short *)((int)local_c + 0x50) == 0) &&
         *(short *)((int)local_c + 0x20) == 0) && sVar3 == 0) && sVar2 == 0) {
      iVar12 = (int)(short)*local_c * *piVar6 * 4;
      *piVar5 = iVar12;
      piVar5[8] = iVar12;
      piVar5[0x10] = iVar12;
      piVar5[0x18] = iVar12;
      piVar5[0x20] = iVar12;
      piVar5[0x28] = iVar12;
      piVar5[0x30] = iVar12;
      piVar5[0x38] = iVar12;
    }
    else {
      sVar4 = (short)piVar6[0x10] * *(short *)((int)local_c + 0x20);
      sVar10 = (short)piVar6[0x30] * *(short *)((int)local_c + 0x60);
      iVar8 = (short)(sVar10 + sVar4) * 0x1151;
      iVar9 = iVar8 + sVar10 * -0x3b21;
      iVar8 = sVar4 * 0x187e + iVar8;
      iVar12 = piVar6[0x20] * (int)*(short *)((int)local_c + 0x40);
      iVar11 = (int)(short)*local_c * *piVar6;
      iVar13 = (iVar12 + iVar11) * 0x2000;
      iVar11 = (iVar11 - iVar12) * 0x2000;
      local_28 = iVar8 + iVar13;
      local_30 = iVar13 - iVar8;
      local_2c = iVar11 - iVar9;
      sVar4 = (short)piVar6[0x38] * *(short *)((int)local_c + 0x70);
      local_1c = iVar9 + iVar11;
      local_20 = piVar6[0x28] * (int)*(short *)((int)local_c + 0x50);
      sVar3 = (short)piVar6[0x18] * sVar3;
      sVar2 = (short)piVar6[8] * sVar2;
      param_1._0_2_ = sVar2 + sVar4;
      sVar10 = (short)local_20;
      param_2._0_2_ = sVar3 + sVar10;
      iVar11 = (short)(sVar2 + sVar10 + sVar3 + sVar4) * 0x25a1;
      iVar9 = iVar11 + (short)(sVar3 + sVar4) * -0x3ec5;
      local_8 = iVar11 + (short)(sVar2 + sVar10) * -0xc7c;
      iVar12 = sVar4 * 0x98e + iVar9 + (short)param_1 * -0x1ccd;
      iVar8 = sVar3 * 0x6254 + iVar9 + (short)param_2 * -0x5203;
      iVar13 = sVar2 * 0x300b + local_8 + (short)param_1 * -0x1ccd;
      iVar9 = sVar10 * 0x41b3 + local_8 + (short)param_2 * -0x5203;
      *piVar5 = local_28 + 0x400 + iVar13 >> 0xb;
      iVar11 = local_1c;
      piVar5[0x38] = (local_28 - iVar13) + 0x400 >> 0xb;
      piVar5[8] = iVar11 + 0x400 + iVar8 >> 0xb;
      piVar5[0x30] = (local_1c - iVar8) + 0x400 >> 0xb;
      piVar5[0x10] = local_2c + 0x400 + iVar9 >> 0xb;
      piVar5[0x28] = (local_2c - iVar9) + 0x400 >> 0xb;
      piVar5[0x18] = local_30 + 0x400 + iVar12 >> 0xb;
      piVar5[0x20] = (local_30 - iVar12) + 0x400 >> 0xb;
      iVar11 = local_34;
    }
    local_c = (int *)((int)local_c + 2);
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  local_c = local_134;
  local_14 = param_4;
  local_18 = 8;
  do {
    local_10 = local_c[5];
    puVar7 = (undefined1 *)(param_5 + *local_14);
    local_8 = local_c[3];
    local_24 = local_c[1];
    iVar12 = local_c[4];
    if ((((((iVar12 == 0 && local_10 == 0) && local_c[6] == 0) && local_c[7] == 0) && local_24 == 0)
        && local_c[2] == 0) && local_8 == 0) {
      uVar1 = *(undefined1 *)((*local_c + 0x10 >> 5 & 0x3ffU) + iVar11);
      *puVar7 = uVar1;
      puVar7[1] = uVar1;
      puVar7[2] = uVar1;
      puVar7[3] = uVar1;
      puVar7[4] = uVar1;
      puVar7[5] = uVar1;
      puVar7[6] = uVar1;
      puVar7[7] = uVar1;
    }
    else {
      iVar8 = (short)((short)local_c[6] + (short)local_c[2]) * 0x1151;
      iVar9 = iVar8 + (short)local_c[6] * -0x3b21;
      iVar8 = (short)local_c[2] * 0x187e + iVar8;
      local_30 = (iVar12 + *local_c) * 0x2000;
      local_2c = (*local_c - iVar12) * 0x2000;
      local_28 = iVar8 + local_30;
      local_30 = local_30 - iVar8;
      local_1c = iVar9 + local_2c;
      local_2c = local_2c - iVar9;
      sVar4 = (short)local_c[7];
      param_1._0_2_ = sVar4 + (short)local_24;
      sVar10 = (short)local_10;
      param_2._0_2_ = sVar10 + (short)local_8;
      sVar3 = sVar4 + (short)local_8;
      sVar2 = (short)local_24 + sVar10;
      iVar12 = (short)(sVar2 + sVar3) * 0x25a1;
      iVar9 = iVar12 + sVar3 * -0x3ec5;
      local_8 = iVar12 + sVar2 * -0xc7c;
      local_20 = sVar10 * 0x41b3 + local_8 + (short)param_2 * -0x5203;
      iVar8 = sVar4 * 0x98e + iVar9 + (short)param_1 * -0x1ccd;
      iVar12 = (short)local_c[3] * 0x6254 + iVar9 + (short)param_2 * -0x5203;
      iVar9 = (short)local_c[1] * 0x300b + local_8 + (short)param_1 * -0x1ccd;
      *puVar7 = *(undefined1 *)((local_28 + 0x20000 + iVar9 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[7] = *(undefined1 *)(((local_28 - iVar9) + 0x20000 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[1] = *(undefined1 *)((local_1c + 0x20000 + iVar12 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[6] = *(undefined1 *)(((local_1c - iVar12) + 0x20000 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[2] = *(undefined1 *)((local_2c + 0x20000 + local_20 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[5] = *(undefined1 *)(((local_2c - local_20) + 0x20000 >> 0x12 & 0x3ffU) + iVar11);
      uVar1 = *(undefined1 *)(((local_30 - iVar8) + 0x20000 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[3] = *(undefined1 *)((local_30 + 0x20000 + iVar8 >> 0x12 & 0x3ffU) + iVar11);
      puVar7[4] = uVar1;
    }
    local_14 = local_14 + 1;
    local_c = local_c + 8;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  return;
}



void __cdecl FUN_653cd5cf(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_ESI;
  int iVar10;
  undefined1 *puVar11;
  int *piVar12;
  int local_9c;
  int local_98;
  int local_94;
  int local_90 [3];
  int local_84;
  int local_80 [9];
  int aiStack_5c [8];
  int aiStack_3c [8];
  undefined4 local_1c;
  short local_18;
  undefined2 uStack_16;
  int local_14;
  short *local_10;
  int local_c;
  int local_8;
  
  piVar6 = (int *)param_2[0x14];
  iVar5 = *(int *)(param_1 + 0x11c) + 0x80;
  local_10 = (short *)(param_3 + 0x60);
  piVar12 = local_80;
  local_14 = iVar5;
  param_2 = (int *)0x8;
  do {
    piVar12 = piVar12 + 1;
    if (param_2 != (int *)0x4) {
      sVar2 = local_10[-0x18];
      sVar3 = local_10[-0x28];
      _local_18 = CONCAT22(uStack_16,sVar2);
      sVar4 = local_10[-8];
      local_8 = CONCAT22(local_8._2_2_,sVar4);
      local_1c = CONCAT22((short)((uint)unaff_ESI >> 0x10),sVar3);
      if (((((sVar3 == 0 && sVar2 == 0) && sVar4 == 0) && local_10[8] == 0) && local_10[-0x20] == 0)
          && *local_10 == 0) {
        iVar10 = (int)local_10[-0x30] * *piVar6 * 4;
        piVar12[-8] = iVar10;
        *piVar12 = iVar10;
        piVar12[8] = iVar10;
        piVar12[0x10] = iVar10;
      }
      else {
        iVar10 = (int)local_10[-0x30] * *piVar6 * 0x4000;
        iVar7 = (short)((short)piVar6[0x10] * local_10[-0x20]) * 0x3b21 +
                (short)((short)piVar6[0x30] * *local_10) * -0x187e;
        iVar5 = iVar7 + iVar10;
        iVar10 = iVar10 - iVar7;
        local_c = iVar10;
        param_1._0_2_ = (short)piVar6[0x28] * sVar4;
        param_3._0_2_ = (short)piVar6[0x18] * sVar2;
        iVar9 = (int)(short)((short)piVar6[0x38] * local_10[8]);
        local_8 = (int)(short)param_1;
        iVar7 = (int)(short)((short)piVar6[8] * sVar3);
        iVar8 = local_8 * 0x2e75 + (short)param_3 * -0x4587 + iVar7 * 0x21f9 + iVar9 * -0x6c2;
        iVar7 = iVar7 * 0x5203 + (short)param_3 * 0x1ccd + local_8 * -0x133e + iVar9 * -0x1050;
        piVar12[-8] = iVar5 + 0x800 + iVar7 >> 0xc;
        piVar12[0x10] = (iVar5 - iVar7) + 0x800 >> 0xc;
        *piVar12 = iVar10 + 0x800 + iVar8 >> 0xc;
        piVar12[8] = (iVar10 - iVar8) + 0x800 >> 0xc;
        iVar5 = local_14;
      }
    }
    unaff_ESI = 0;
    local_10 = local_10 + 1;
    piVar6 = piVar6 + 1;
    param_2 = (int *)((int)param_2 + -1);
  } while (0 < (int)param_2);
  piVar6 = &local_9c;
  param_2 = param_4;
  param_4 = (int *)0x4;
  do {
    puVar11 = (undefined1 *)(param_5 + *param_2);
    if (((((piVar6[2] == 0 && piVar6[3] == 0) && piVar6[1] == 0) && piVar6[7] == 0) &&
        piVar6[5] == 0) && piVar6[6] == 0) {
      uVar1 = *(undefined1 *)((*piVar6 + 0x10 >> 5 & 0x3ffU) + iVar5);
      *puVar11 = uVar1;
      puVar11[1] = uVar1;
      puVar11[2] = uVar1;
      puVar11[3] = uVar1;
    }
    else {
      local_c = (short)piVar6[2] * 0x3b21 + (short)piVar6[6] * -0x187e;
      iVar5 = local_c + *piVar6 * 0x4000;
      local_c = *piVar6 * 0x4000 - local_c;
      local_8 = (int)(short)piVar6[5];
      iVar7 = local_8 * 0x2e75 + (short)piVar6[3] * -0x4587 + (short)piVar6[1] * 0x21f9 +
              (short)piVar6[7] * -0x6c2;
      iVar10 = (short)piVar6[1] * 0x5203 + (short)piVar6[3] * 0x1ccd + local_8 * -0x133e +
               (short)piVar6[7] * -0x1050;
      *puVar11 = *(undefined1 *)((iVar5 + 0x40000 + iVar10 >> 0x13 & 0x3ffU) + local_14);
      puVar11[3] = *(undefined1 *)(((iVar5 - iVar10) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
      uVar1 = *(undefined1 *)(((local_c - iVar7) + 0x40000 >> 0x13 & 0x3ffU) + local_14);
      puVar11[1] = *(undefined1 *)((local_c + 0x40000 + iVar7 >> 0x13 & 0x3ffU) + local_14);
      puVar11[2] = uVar1;
      iVar5 = local_14;
    }
    param_2 = param_2 + 1;
    piVar6 = piVar6 + 8;
    param_4 = (int *)((int)param_4 + -1);
  } while (param_4 != (int *)0x0);
  return;
}



void __cdecl FUN_653cd8dd(int *param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  undefined1 *puVar7;
  int local_48;
  int local_44 [2];
  int local_3c [2];
  int local_34 [2];
  int local_2c [9];
  int local_8;
  
  iVar4 = param_1[0x47] + 0x80;
  piVar2 = *(int **)(param_2 + 0x50);
  iVar5 = (int)local_44 + (-4 - (int)piVar2);
  local_8 = iVar4;
  param_1 = (int *)0x8;
  psVar6 = (short *)(param_3 + 0x50);
  do {
    if (((param_1 != (int *)0x6) && (param_1 != (int *)0x4)) && (param_1 != (int *)0x2)) {
      if ((((short)*(undefined4 *)(psVar6 + -0x20) == 0 && psVar6[-0x10] == 0) &&
          (short)*(undefined4 *)(psVar6 + 0x10) == 0) && (short)*(undefined4 *)psVar6 == 0) {
        iVar1 = (int)psVar6[-0x28] * *piVar2 * 4;
        *(int *)((int)piVar2 + iVar5) = iVar1;
        *(int *)((int)piVar2 + iVar5 + 0x20) = iVar1;
      }
      else {
        iVar4 = (int)psVar6[-0x28] * *piVar2 * 0x8000;
        iVar1 = (short)((short)piVar2[0x38] * psVar6[0x10]) * -0x1712 +
                (short)((short)piVar2[0x28] * *psVar6) * 0x1b37 +
                (short)((short)piVar2[0x18] * psVar6[-0x10]) * -0x28ba +
                (short)((short)piVar2[8] * psVar6[-0x20]) * 0x73fc;
        *(int *)((int)piVar2 + iVar5) = iVar4 + 0x1000 + iVar1 >> 0xd;
        *(int *)((int)piVar2 + iVar5 + 0x20) = (iVar4 - iVar1) + 0x1000 >> 0xd;
        iVar4 = local_8;
      }
    }
    piVar2 = piVar2 + 1;
    psVar6 = psVar6 + 1;
    param_1 = (int *)((int)param_1 + -1);
  } while (0 < (int)param_1);
  piVar2 = &local_48;
  param_1 = param_4;
  param_2 = 2;
  do {
    puVar7 = (undefined1 *)(param_5 + *param_1);
    if (((piVar2[3] == 0 && piVar2[5] == 0) && piVar2[7] == 0) && piVar2[1] == 0) {
      uVar3 = *(undefined1 *)((*piVar2 + 0x10 >> 5 & 0x3ffU) + iVar4);
      *puVar7 = uVar3;
    }
    else {
      iVar4 = *piVar2 * 0x8000;
      iVar5 = (short)piVar2[1] * 0x73fc + (short)piVar2[3] * -0x28ba + (short)piVar2[5] * 0x1b37 +
              (short)piVar2[7] * -0x1712;
      *puVar7 = *(undefined1 *)((iVar4 + 0x80000 + iVar5 >> 0x14 & 0x3ffU) + local_8);
      uVar3 = *(undefined1 *)(((iVar4 - iVar5) + 0x80000 >> 0x14 & 0x3ffU) + local_8);
      iVar4 = local_8;
    }
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 8;
    param_2 = param_2 + -1;
    puVar7[1] = uVar3;
  } while (param_2 != 0);
  return;
}



void __cdecl FUN_653cda9b(int param_1,int param_2,undefined2 *param_3,int *param_4,int param_5)

{
  *(undefined1 *)(param_5 + *param_4) =
       *(undefined1 *)
        ((**(int **)(param_2 + 0x50) * CONCAT22((short)((uint)param_3 >> 0x10),*param_3) + 4 >> 3 &
         0x3ffU) + 0x80 + *(int *)(param_1 + 0x11c));
  return;
}



// WARNING: Removing unreachable block (ram,0x653cdbc3)

void __cdecl FUN_653cdad7(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  param_1[1] = 0;
  iVar1 = FUN_653ce586();
  puVar2 = (undefined4 *)FUN_653ce559(param_1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_653ce589();
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x33;
    puVar3[6] = 0;
    (*(code *)*puVar3)(param_1);
  }
  *puVar2 = FUN_653cdbdf;
  puVar2[1] = FUN_653cdced;
  puVar2[2] = FUN_653cdd7a;
  puVar2[3] = FUN_653cde10;
  puVar2[4] = FUN_653cdeb2;
  puVar2[5] = FUN_653cdf0f;
  puVar2[6] = FUN_653cdf6c;
  puVar2[7] = FUN_653ce0f1;
  puVar2[8] = FUN_653ce297;
  puVar2[9] = FUN_653ce445;
  puVar2[10] = FUN_653ce528;
  puVar2[0xb] = iVar1;
  puVar3 = puVar2 + 0xf;
  iVar5 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  param_1[1] = (int)puVar2;
  pcVar4 = (char *)FUN_653d1290((byte *)s_JPEGMEM_653dd688);
  if ((pcVar4 != (char *)0x0) && (iVar5 = FUN_653d1240(pcVar4,(byte *)s__ld_c_653dd690), 0 < iVar5))
  {
    puVar2[0xb] = iVar1 * 1000;
  }
  return;
}



int __cdecl FUN_653cdbdf(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar2 = param_1[1];
  if ((undefined4 *)0x3b9ac9f0 < param_3) {
    FUN_653cdcd4(param_1,1);
  }
  puVar6 = param_3;
  if (((uint)param_3 & 7) != 0) {
    puVar6 = (undefined4 *)((int)param_3 + (8 - ((uint)param_3 & 7)));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0xb;
    puVar3[6] = param_2;
    (*(code *)*puVar3)(param_1);
  }
  param_3 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)(iVar2 + 0x30 + param_2 * 4);
  puVar5 = puVar3;
  puVar4 = param_3;
  do {
    param_3 = puVar4;
    puVar5 = (undefined4 *)*puVar5;
    if (puVar5 == (undefined4 *)0x0) goto LAB_653cdc50;
    puVar4 = puVar5;
  } while ((undefined4 *)puVar5[2] < puVar6);
  if (puVar5 == (undefined4 *)0x0) {
LAB_653cdc50:
    puVar4 = puVar6 + 4;
    if (param_3 == (undefined4 *)0x0) {
      uVar7 = *(uint *)(&DAT_653c2ce8 + param_2 * 4);
    }
    else {
      uVar7 = *(uint *)(&DAT_653c2cf0 + param_2 * 4);
    }
    if (1000000000U - (int)puVar4 < uVar7) {
      uVar7 = 1000000000U - (int)puVar4;
    }
    while (puVar5 = (undefined4 *)FUN_653ce559(param_1,uVar7 + (int)puVar4),
          puVar5 == (undefined4 *)0x0) {
      uVar7 = uVar7 >> 1;
      if (uVar7 < 0x32) {
        FUN_653cdcd4(param_1,2);
      }
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    piVar1 = (int *)(iVar2 + 0x48);
    *piVar1 = (int)puVar4 + *piVar1 + uVar7;
    puVar5[2] = uVar7 + (int)puVar6;
    if (param_3 == (undefined4 *)0x0) {
      param_3 = puVar3;
    }
    *param_3 = puVar5;
  }
  iVar2 = puVar5[1];
  puVar5[2] = puVar5[2] - (int)puVar6;
  puVar5[1] = iVar2 + (int)puVar6;
  return (int)puVar5 + iVar2 + 0x10;
}



void __cdecl FUN_653cdcd4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  puVar1[5] = 0x33;
  puVar1[6] = param_2;
  (*(code *)*puVar1)(param_1);
  return;
}



undefined4 * __cdecl FUN_653cdced(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (0x3b9ac9f0 < param_3) {
    FUN_653cdcd4(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0xb;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
  }
  puVar2 = (undefined4 *)FUN_653ce559(param_1,param_3 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_653cdcd4(param_1,4);
  }
  puVar2[1] = param_3;
  *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + param_3 + 0x10;
  puVar2[2] = 0;
  *puVar2 = *(undefined4 *)(iVar1 + 0x38 + param_2 * 4);
  *(undefined4 **)(iVar1 + 0x38 + param_2 * 4) = puVar2;
  return puVar2 + 4;
}



int __cdecl FUN_653cdd7a(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x43;
    (*(code *)*puVar3)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  iVar2 = FUN_653cdbdf(param_1,param_2,(undefined4 *)(param_4 << 2));
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar6 <= uVar1) {
        uVar1 = param_4 - uVar6;
      }
      puVar3 = FUN_653cdced(param_1,param_2,uVar1 * param_3);
      if (uVar1 != 0) {
        puVar4 = (undefined4 *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar1;
        do {
          *puVar4 = puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + param_3);
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    } while (uVar6 < param_4);
  }
  return iVar2;
}



int __cdecl FUN_653cde10(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x43;
    (*(code *)*puVar3)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x4c) = uVar1;
  iVar2 = FUN_653cdbdf(param_1,param_2,(undefined4 *)(param_4 << 2));
  uVar6 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar6 <= uVar1) {
        uVar1 = param_4 - uVar6;
      }
      puVar3 = FUN_653cdced(param_1,param_2,uVar1 * param_3 * 0x80);
      if (uVar1 != 0) {
        puVar4 = (undefined4 *)(iVar2 + uVar6 * 4);
        uVar6 = uVar6 + uVar1;
        uVar5 = uVar1;
        do {
          *puVar4 = puVar3;
          puVar3 = puVar3 + param_3 * 0x20;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    } while (uVar6 < param_4);
  }
  return iVar2;
}



void __cdecl
FUN_653cdeb2(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0xb;
    puVar3[6] = param_2;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)FUN_653cdbdf(param_1,param_2,(undefined4 *)0x78);
  *puVar3 = 0;
  puVar3[1] = param_5;
  puVar3[2] = param_4;
  puVar3[3] = param_6;
  *(undefined1 *)((int)puVar3 + 0x22) = 0;
  *(undefined1 *)(puVar3 + 8) = param_3;
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 **)(iVar1 + 0x40) = puVar3;
  puVar3[9] = uVar2;
  return;
}



void __cdecl
FUN_653cdf0f(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0xb;
    puVar3[6] = param_2;
    (*(code *)*puVar3)(param_1);
  }
  puVar3 = (undefined4 *)FUN_653cdbdf(param_1,param_2,(undefined4 *)0x78);
  *puVar3 = 0;
  puVar3[1] = param_5;
  puVar3[2] = param_4;
  puVar3[3] = param_6;
  *(undefined1 *)((int)puVar3 + 0x22) = 0;
  *(undefined1 *)(puVar3 + 8) = param_3;
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 **)(iVar1 + 0x44) = puVar3;
  puVar3[9] = uVar2;
  return;
}



void __cdecl FUN_653cdf6c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = param_1[1];
  iVar4 = 0;
  local_8 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2];
      local_8 = local_8 + piVar2[1] * piVar2[2];
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
    if (*piVar2 == 0) {
      iVar4 = iVar4 + piVar2[3] * piVar2[2] * 0x80;
      local_8 = local_8 + piVar2[1] * piVar2[2] * 0x80;
    }
  }
  if (0 < iVar4) {
    iVar3 = FUN_653ce56f(param_1,iVar4,local_8);
    if (iVar3 < local_8) {
      local_8 = iVar3 / iVar4;
      if (local_8 < 1) {
        local_8 = 1;
      }
    }
    else {
      local_8 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (local_8 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = local_8 * piVar2[3];
          FUN_653ce574(param_1);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_653cdd7a(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[9]) {
      if (*piVar2 == 0) {
        if (local_8 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = local_8 * piVar2[3];
          FUN_653ce574(param_1);
          *(undefined1 *)((int)piVar2 + 0x22) = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_653cde10(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        *(undefined1 *)((int)piVar2 + 0x21) = 0;
      }
    }
  }
  return;
}



int __cdecl FUN_653ce0f1(int *param_1,int *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_4 + param_3;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x12;
    (*(code *)*puVar2)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (*(char *)((int)param_2 + 0x22) == '\0') {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x42;
      (*(code *)*puVar2)(param_1);
    }
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      FUN_653ce209(param_1,param_2,'\x01');
      *(undefined1 *)((int)param_2 + 0x21) = 0;
    }
    uVar5 = param_3;
    if ((param_3 <= (uint)param_2[6]) && (uVar5 = uVar1 - param_2[4], (int)uVar5 < 0)) {
      uVar5 = 0;
    }
    param_2[6] = uVar5;
    FUN_653ce209(param_1,param_2,'\0');
  }
  uVar5 = param_2[7];
  if (uVar5 < uVar1) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != '\0')) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x12;
      (*(code *)*puVar2)(param_1);
    }
    if (param_5 != '\0') {
      param_2[7] = uVar1;
    }
    if ((char)param_2[8] != '\0') {
      uVar3 = param_2[2];
      iVar4 = param_2[6];
      for (uVar5 = uVar5 - iVar4; uVar5 < uVar1 - iVar4; uVar5 = uVar5 + 1) {
        FUN_653d00fc(*(undefined4 **)(*param_2 + uVar5 * 4),uVar3);
      }
      goto LAB_653ce1ef;
    }
    if (param_5 == '\0') {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x12;
      (*(code *)*puVar2)(param_1);
      goto LAB_653ce1ef;
    }
  }
  else {
LAB_653ce1ef:
    if (param_5 == '\0') goto LAB_653ce1f9;
  }
  *(undefined1 *)((int)param_2 + 0x21) = 1;
LAB_653ce1f9:
  return *param_2 + (param_3 - param_2[6]) * 4;
}



void __cdecl FUN_653ce209(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = param_2[2];
  iVar3 = param_2[4];
  iVar4 = iVar1 * param_2[6];
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 - iVar5;
      if (param_2[5] < iVar3 - iVar5) {
        iVar2 = param_2[5];
      }
      iVar3 = param_2[7] - (iVar5 + param_2[6]);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = param_2[1] - (iVar5 + param_2[6]);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1;
      if (param_3 == '\0') {
        (*(code *)param_2[10])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar5 * 4),iVar4,iVar2);
      }
      else {
        (*(code *)param_2[0xb])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar5 * 4),iVar4,iVar2);
      }
      iVar5 = iVar5 + param_2[5];
      iVar3 = param_2[4];
      iVar4 = iVar4 + iVar2;
    } while (iVar5 < iVar3);
  }
  return;
}



int __cdecl FUN_653ce297(int *param_1,int *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_4 + param_3;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x12;
    (*(code *)*puVar2)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (*(char *)((int)param_2 + 0x22) == '\0') {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x42;
      (*(code *)*puVar2)(param_1);
    }
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      FUN_653ce3b4(param_1,param_2,'\x01');
      *(undefined1 *)((int)param_2 + 0x21) = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      iVar4 = uVar1 - param_2[4];
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      param_2[6] = iVar4;
    }
    FUN_653ce3b4(param_1,param_2,'\0');
  }
  uVar5 = param_2[7];
  if (uVar5 < uVar1) {
    if ((uVar5 < param_3) && (uVar5 = param_3, param_5 != '\0')) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x12;
      (*(code *)*puVar2)(param_1);
    }
    if (param_5 != '\0') {
      param_2[7] = uVar1;
    }
    if ((char)param_2[8] != '\0') {
      iVar4 = param_2[2];
      iVar3 = param_2[6];
      for (uVar5 = uVar5 - iVar3; uVar5 < uVar1 - iVar3; uVar5 = uVar5 + 1) {
        FUN_653d00fc(*(undefined4 **)(*param_2 + uVar5 * 4),iVar4 << 7);
      }
      goto LAB_653ce39a;
    }
    if (param_5 == '\0') {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x12;
      (*(code *)*puVar2)(param_1);
      goto LAB_653ce39a;
    }
  }
  else {
LAB_653ce39a:
    if (param_5 == '\0') goto LAB_653ce3a4;
  }
  *(undefined1 *)((int)param_2 + 0x21) = 1;
LAB_653ce3a4:
  return *param_2 + (param_3 - param_2[6]) * 4;
}



void __cdecl FUN_653ce3b4(undefined4 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar1 = param_2[2];
  iVar3 = param_2[4];
  iVar4 = iVar1 * 0x80 * param_2[6];
  if (0 < iVar3) {
    do {
      iVar2 = iVar3 - iVar5;
      if (param_2[5] < iVar3 - iVar5) {
        iVar2 = param_2[5];
      }
      iVar3 = param_2[7] - (iVar5 + param_2[6]);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      iVar3 = param_2[1] - (iVar5 + param_2[6]);
      if (iVar3 <= iVar2) {
        iVar2 = iVar3;
      }
      if (iVar2 < 1) {
        return;
      }
      iVar2 = iVar2 * iVar1 * 0x80;
      if (param_3 == '\0') {
        (*(code *)param_2[10])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar5 * 4),iVar4,iVar2);
      }
      else {
        (*(code *)param_2[0xb])
                  (param_1,param_2 + 10,*(undefined4 *)(*param_2 + iVar5 * 4),iVar4,iVar2);
      }
      iVar5 = iVar5 + param_2[5];
      iVar3 = param_2[4];
      iVar4 = iVar4 + iVar2;
    } while (iVar5 < iVar3);
  }
  return;
}



void __cdecl FUN_653ce445(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  if ((param_2 < 0) || (1 < param_2)) {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0xb;
    puVar2[6] = param_2;
    (*(code *)*puVar2)(param_1);
  }
  if (param_2 == 1) {
    for (iVar5 = *(int *)(iVar1 + 0x40); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x24)) {
      if (*(char *)(iVar5 + 0x22) != '\0') {
        *(undefined1 *)(iVar5 + 0x22) = 0;
        (**(code **)(iVar5 + 0x30))(param_1,iVar5 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x40) = 0;
    for (iVar5 = *(int *)(iVar1 + 0x44); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x24)) {
      if (*(char *)(iVar5 + 0x22) != '\0') {
        *(undefined1 *)(iVar5 + 0x22) = 0;
        (**(code **)(iVar5 + 0x30))(param_1,iVar5 + 0x28);
      }
    }
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x38 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x38 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    iVar5 = puVar2[1];
    iVar3 = puVar2[2];
    puVar4 = (undefined4 *)*puVar2;
    FUN_653ce564(param_1,(undefined *)puVar2);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar5 + 0x10 + iVar3);
    puVar2 = puVar4;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x30 + param_2 * 4) = 0;
  while (puVar2 != (undefined4 *)0x0) {
    iVar5 = puVar2[1];
    iVar3 = puVar2[2];
    puVar4 = (undefined4 *)*puVar2;
    FUN_653ce564(param_1,(undefined *)puVar2);
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - (iVar5 + 0x10 + iVar3);
    puVar2 = puVar4;
  }
  return;
}



void __cdecl FUN_653ce528(int *param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_653ce445(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_653ce564(param_1,(undefined *)param_1[1]);
  param_1[1] = 0;
  FUN_653ce589();
  return;
}



void __cdecl FUN_653ce559(undefined4 param_1,uint param_2)

{
  FUN_653d0b40(param_2);
  return;
}



void __cdecl FUN_653ce564(undefined4 param_1,undefined *param_2)

{
  FUN_653d03a0(param_2);
  return;
}



undefined4 __cdecl FUN_653ce56f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



void __cdecl FUN_653ce574(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  puVar1[5] = 0x2e;
  (*(code *)*puVar1)(param_1);
  return;
}



undefined4 FUN_653ce586(void)

{
  return 0;
}



void FUN_653ce589(void)

{
  return;
}



void __cdecl FUN_653ce58a(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  param_1[0x69] = (int)puVar1;
  *puVar1 = FUN_653ce990;
  puVar1[2] = &DAT_653c89a4;
  puVar1[3] = &LAB_653cefac;
  if (4 < param_1[0x19]) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x34;
    puVar1[6] = 4;
    (*(code *)*puVar1)(param_1);
  }
  if (0x100 < param_1[0x15]) {
    puVar1 = (undefined4 *)*param_1;
    puVar1[5] = 0x36;
    puVar1[6] = 0x100;
    (*(code *)*puVar1)(param_1);
  }
  FUN_653ce60d(param_1);
  FUN_653ce807((int)param_1);
  if (param_1[0x13] == 2) {
    FUN_653ce954((int)param_1);
  }
  return;
}



void __cdecl FUN_653ce60d(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 local_28;
  int *local_20;
  int *local_1c;
  uint local_18;
  int local_10;
  int local_8;
  
  piVar3 = param_1;
  iVar1 = param_1[0x69];
  local_1c = (int *)(iVar1 + 0x20);
  uVar4 = FUN_653ce71a(param_1,local_1c);
  piVar5 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,uVar4,param_1[0x19]);
  local_8 = 0;
  local_20 = piVar5;
  local_18 = uVar4;
  if (0 < param_1[0x19]) {
    do {
      param_1 = (int *)0x0;
      iVar2 = *local_1c;
      uVar6 = (int)local_18 / iVar2;
      if (0 < iVar2) {
        local_10 = 0;
        do {
          iVar7 = FUN_653ce7ec(piVar3,local_8,(int)param_1,iVar2 + -1);
          for (iVar8 = local_10; iVar8 < (int)uVar4; iVar8 = iVar8 + local_18) {
            if (0 < (int)uVar6) {
              local_28 = (undefined1)iVar7;
              puVar10 = (undefined4 *)(iVar8 + *local_20);
              for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar10 = CONCAT22(CONCAT11(local_28,local_28),CONCAT11(local_28,local_28));
                puVar10 = puVar10 + 1;
              }
              for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar10 = local_28;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
            }
          }
          param_1 = (int *)((int)param_1 + 1);
          local_10 = local_10 + uVar6;
        } while ((int)param_1 < iVar2);
      }
      local_8 = local_8 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
      local_18 = uVar6;
    } while (local_8 < piVar3[0x19]);
  }
  *(int **)(iVar1 + 0x10) = piVar5;
  *(uint *)(iVar1 + 0x14) = uVar4;
  return;
}



int __cdecl FUN_653ce71a(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar9;
  int *local_14;
  int local_10;
  int local_c;
  int iVar8;
  
  iVar1 = param_1[0x15];
  iVar2 = param_1[0x19];
  iVar7 = 1;
  do {
    iVar8 = iVar7;
    iVar7 = iVar8 + 1;
    iVar6 = iVar7;
    if (1 < iVar2) {
      iVar5 = iVar2 + -1;
      do {
        iVar6 = iVar6 * iVar7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  } while (iVar6 <= iVar1);
  if (iVar8 < 2) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x35;
    puVar3[6] = iVar6;
    (*(code *)*puVar3)(param_1);
  }
  local_c = 1;
  iVar7 = iVar2;
  piVar9 = param_2;
  if (0 < iVar2) {
    for (; iVar6 = iVar2, iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = iVar8;
      piVar9 = piVar9 + 1;
    }
    do {
      local_c = iVar8 * local_c;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  do {
    bVar4 = false;
    local_10 = 0;
    if (0 < iVar2) {
      iVar7 = param_1[10];
      local_14 = &DAT_653c2df8;
      do {
        iVar6 = local_10;
        if (iVar7 == 2) {
          iVar6 = *local_14;
        }
        iVar8 = param_2[iVar6] + 1;
        iVar5 = (local_c / param_2[iVar6]) * iVar8;
        if (iVar5 - iVar1 != 0 && iVar1 <= iVar5) break;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
        param_2[iVar6] = iVar8;
        bVar4 = true;
        local_c = iVar5;
      } while (local_10 < iVar2);
    }
    if (!bVar4) {
      return local_c;
    }
  } while( true );
}



int __cdecl FUN_653ce7ec(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  return (param_4 / 2 + param_3 * 0xff) / param_4;
}



void __cdecl FUN_653ce807(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char local_18;
  int *local_14;
  int local_10;
  undefined1 *local_c;
  int local_8;
  
  iVar5 = param_1;
  iVar3 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(param_1 + 0x4c) == 1) {
    local_10 = 0x1fe;
    *(undefined1 *)(iVar3 + 0x1c) = 1;
  }
  else {
    local_10 = 0;
    *(undefined1 *)(iVar3 + 0x1c) = 0;
  }
  uVar6 = (**(code **)(*(int *)(param_1 + 4) + 8))
                    (param_1,1,local_10 + 0x100,*(undefined4 *)(param_1 + 100));
  iVar8 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar3 + 0x18) = uVar6;
  iVar7 = *(int *)(iVar3 + 0x14);
  local_8 = 0;
  if (0 < iVar8) {
    local_14 = (int *)(iVar3 + 0x20);
    do {
      iVar8 = *local_14;
      iVar7 = iVar7 / iVar8;
      if (local_10 != 0) {
        piVar1 = (int *)(*(int *)(iVar3 + 0x18) + local_8 * 4);
        *piVar1 = *piVar1 + 0xff;
      }
      local_c = (undefined1 *)0x0;
      puVar4 = *(undefined1 **)(*(int *)(iVar3 + 0x18) + local_8 * 4);
      iVar8 = iVar8 + -1;
      iVar9 = FUN_653ce939(iVar5,local_8,0,iVar8);
      param_1 = 0;
      do {
        while (iVar9 < param_1) {
          local_c = (undefined1 *)((int)local_c + 1);
          iVar9 = FUN_653ce939(iVar5,local_8,(int)local_c,iVar8);
        }
        local_18 = (char)iVar7;
        iVar2 = param_1 + 1;
        puVar4[param_1] = (char)local_c * local_18;
        param_1 = iVar2;
      } while (iVar2 < 0x100);
      if (local_10 != 0) {
        param_1 = 1;
        local_c = puVar4;
        do {
          local_c = local_c + -1;
          *local_c = *puVar4;
          iVar8 = param_1 + 1;
          (puVar4 + 0xff)[param_1] = puVar4[0xff];
          param_1 = iVar8;
        } while (iVar8 < 0x100);
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
    } while (local_8 < *(int *)(iVar5 + 100));
  }
  return;
}



int __cdecl FUN_653ce939(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  return (param_3 * 0x1fe + 0xff + param_4) / (param_4 * 2);
}



void __cdecl FUN_653ce954(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (0 < *(int *)(param_1 + 100)) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1a4) + 0x44);
    do {
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,iVar1 * 2 + 4);
      *puVar3 = uVar2;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 100));
  }
  return;
}



void __cdecl FUN_653ce990(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = param_1[0x69];
  param_1[0x1d] = *(int *)(iVar1 + 0x10);
  param_1[0x1c] = *(int *)(iVar1 + 0x14);
  iVar3 = param_1[0x13];
  if (iVar3 == 0) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_653cebb0;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_653ceb25;
    }
  }
  else if (iVar3 == 1) {
    if (param_1[0x19] == 3) {
      *(code **)(iVar1 + 4) = FUN_653ced2e;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_653cec3e;
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
    if (*(char *)(iVar1 + 0x1c) == '\0') {
      FUN_653ce807((int)param_1);
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      FUN_653cea57((int)param_1);
    }
  }
  else if (iVar3 == 2) {
    *(undefined1 *)(iVar1 + 0x54) = 0;
    puVar2 = (undefined4 *)(iVar1 + 0x44);
    *(code **)(iVar1 + 4) = FUN_653cee22;
    if (*(int *)(iVar1 + 0x44) == 0) {
      FUN_653ce954((int)param_1);
    }
    iVar1 = param_1[0x17];
    iVar3 = 0;
    if (0 < param_1[0x19]) {
      do {
        FUN_653d00fc((undefined4 *)*puVar2,iVar1 * 2 + 4);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < param_1[0x19]);
    }
  }
  else {
    puVar2 = (undefined4 *)*param_1;
    puVar2[5] = 0x2d;
    (*(code *)*puVar2)(param_1);
  }
  return;
}



void __cdecl FUN_653cea57(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = param_1;
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x1a4);
  if (0 < *(int *)(param_1 + 100)) {
    piVar6 = (int *)(iVar1 + 0x34);
    do {
      piVar3 = (int *)0x0;
      param_1 = 0;
      if (0 < iVar5) {
        piVar4 = (int *)(iVar1 + 0x20);
        do {
          if (piVar6[-5] == *piVar4) {
            piVar3 = *(int **)(iVar1 + 0x34 + param_1 * 4);
            break;
          }
          param_1 = param_1 + 1;
          piVar4 = piVar4 + 1;
        } while (param_1 < iVar5);
      }
      if (piVar3 == (int *)0x0) {
        piVar3 = FUN_653ceac2(iVar2,piVar6[-5]);
      }
      *piVar6 = (int)piVar3;
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < *(int *)(iVar2 + 100));
  }
  return;
}



int * __cdecl FUN_653ceac2(int param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  puVar3 = &DAT_653c2cf8;
  piVar5 = piVar2;
  do {
    iVar4 = 0;
    do {
      pbVar1 = puVar3 + iVar4;
      iVar4 = iVar4 + 1;
      *piVar5 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (param_2 * 0x200 + -0x200);
      piVar5 = piVar5 + 1;
    } while (iVar4 < 0x10);
    puVar3 = puVar3 + 0x10;
  } while ((int)puVar3 < 0x653c2df8);
  return piVar2;
}



void __cdecl FUN_653ceb25(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x5c);
  puVar3 = *(undefined4 **)(param_1 + 100);
  piVar4 = *(int **)(*(int *)(param_1 + 0x1a4) + 0x18);
  if (0 < param_4) {
    iVar9 = param_2 - (int)param_3;
    local_8 = param_4;
    piVar6 = param_3;
    do {
      pbVar7 = *(byte **)(iVar9 + (int)piVar6);
      puVar5 = (undefined1 *)*piVar6;
      for (iVar1 = iVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
        param_1 = 0;
        param_1._0_1_ = 0;
        piVar8 = piVar4;
        param_3 = puVar3;
        if (0 < (int)puVar3) {
          do {
            param_1 = param_1 + (uint)*(byte *)((uint)*pbVar7 + *piVar8);
            pbVar7 = pbVar7 + 1;
            param_3 = (undefined4 *)((int)param_3 + -1);
            piVar8 = piVar8 + 1;
          } while (param_3 != (undefined4 *)0x0);
        }
        *puVar5 = (undefined1)param_1;
        puVar5 = puVar5 + 1;
      }
      piVar6 = piVar6 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



void __cdecl FUN_653cebb0(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  
  piVar4 = *(int **)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar5 = *piVar4;
  iVar6 = piVar4[1];
  iVar7 = piVar4[2];
  iVar8 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar9 = param_2 - (int)param_3;
    do {
      pbVar11 = *(byte **)(iVar9 + (int)param_3);
      pcVar12 = (char *)*param_3;
      for (iVar2 = iVar8; iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar11;
        pbVar10 = pbVar11 + 1;
        pbVar1 = pbVar11 + 2;
        pbVar11 = pbVar11 + 3;
        *pcVar12 = *(char *)(iVar5 + (uint)bVar3) + *(char *)(iVar6 + (uint)*pbVar10) +
                   *(char *)(iVar7 + (uint)*pbVar1);
        pcVar12 = pcVar12 + 1;
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void __cdecl FUN_653cec3e(uint param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  int *local_18;
  int *local_14;
  int local_10;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar4 = *(int *)(param_1 + 100);
  uVar5 = *(uint *)(param_1 + 0x5c);
  if (0 < (int)param_4) {
    iVar11 = param_2 - (int)param_3;
    local_14 = param_3;
    local_18 = param_4;
    do {
      FUN_653d00fc((undefined4 *)*local_14,uVar5);
      iVar6 = *(int *)(iVar3 + 0x30);
      local_10 = 0;
      if (0 < iVar4) {
        param_4 = *(int **)(iVar3 + 0x18);
        param_3 = (int *)(iVar3 + 0x34);
        iVar7 = *(int *)(iVar11 + (int)local_14);
        do {
          param_1 = 0;
          pbVar10 = (byte *)(local_10 + iVar7);
          pcVar12 = (char *)*local_14;
          iVar8 = *param_4;
          iVar9 = *param_3;
          for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
            bVar2 = *pbVar10;
            pbVar10 = pbVar10 + iVar4;
            *pcVar12 = *pcVar12 +
                       *(char *)(*(int *)(iVar6 * 0x40 + iVar9 + param_1 * 4) + (uint)bVar2 + iVar8)
            ;
            pcVar12 = pcVar12 + 1;
            param_1 = param_1 + 1 & 0xf;
          }
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
          local_10 = local_10 + 1;
        } while (local_10 < iVar4);
      }
      local_14 = local_14 + 1;
      local_18 = (int *)((int)local_18 + -1);
      *(uint *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + 1U & 0xf;
    } while (local_18 != (int *)0x0);
  }
  return;
}



void __cdecl FUN_653ced2e(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 0x1a4);
  iVar5 = *(int *)(param_1 + 0x5c);
  piVar6 = *(int **)(iVar4 + 0x18);
  iVar7 = *piVar6;
  iVar8 = piVar6[1];
  iVar9 = piVar6[2];
  if (0 < param_4) {
    iVar18 = param_2 - (int)param_3;
    local_8 = param_4;
    do {
      pbVar16 = *(byte **)(iVar18 + (int)param_3);
      iVar10 = *(int *)(iVar4 + 0x34);
      iVar14 = *(int *)(iVar4 + 0x30) * 0x40;
      iVar11 = *(int *)(iVar4 + 0x38);
      iVar12 = *(int *)(iVar4 + 0x3c);
      uVar17 = 0;
      pcVar13 = (char *)*param_3;
      for (iVar2 = iVar5; iVar2 != 0; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar16;
        pbVar15 = pbVar16 + 1;
        pbVar1 = pbVar16 + 2;
        pbVar16 = pbVar16 + 3;
        *pcVar13 = *(char *)(*(int *)(iVar10 + iVar14 + uVar17 * 4) + (uint)bVar3 + iVar7) +
                   *(char *)(*(int *)(iVar11 + iVar14 + uVar17 * 4) + (uint)*pbVar15 + iVar8) +
                   *(char *)(*(int *)(iVar12 + iVar14 + uVar17 * 4) + (uint)*pbVar1 + iVar9);
        uVar17 = uVar17 + 1 & 0xf;
        pcVar13 = pcVar13 + 1;
      }
      param_3 = param_3 + 1;
      local_8 = local_8 + -1;
      *(uint *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1U & 0xf;
    } while (local_8 != 0);
  }
  return;
}



void __cdecl FUN_653cee22(undefined4 *param_1,int param_2,int *param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  short *psVar14;
  int iVar15;
  char *pcVar16;
  byte *local_28;
  int local_24;
  int local_1c;
  int local_18;
  int *local_10;
  int local_c;
  
  iVar3 = param_1[0x69];
  iVar4 = param_1[0x19];
  uVar5 = param_1[0x17];
  iVar6 = param_1[0x47];
  if (0 < (int)param_4) {
    param_1 = param_3;
    iVar15 = param_2 - (int)param_3;
    local_28 = param_4;
    do {
      FUN_653d00fc((undefined4 *)*param_1,uVar5);
      if (0 < iVar4) {
        local_10 = *(int **)(iVar3 + 0x10);
        param_4 = *(byte **)(iVar15 + (int)param_1);
        param_3 = (int *)(iVar3 + 0x44);
        iVar13 = *(int *)(iVar3 + 0x18) - (int)local_10;
        local_24 = iVar4;
        do {
          pcVar16 = (char *)*param_1;
          if (*(char *)(iVar3 + 0x54) == '\0') {
            param_2 = 1;
            psVar14 = (short *)*param_3;
            pbVar12 = param_4;
            local_1c = iVar4;
          }
          else {
            param_2 = -1;
            pcVar16 = pcVar16 + (uVar5 - 1);
            psVar14 = (short *)(*param_3 + 2 + uVar5 * 2);
            pbVar12 = param_4 + (uVar5 - 1) * iVar4;
            local_1c = -iVar4;
          }
          iVar7 = *(int *)(iVar13 + (int)local_10);
          iVar8 = *local_10;
          iVar9 = 0;
          local_c = 0;
          local_c._0_2_ = 0;
          local_18 = 0;
          for (uVar1 = uVar5; uVar1 != 0; uVar1 = uVar1 - 1) {
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + local_1c;
            uVar10 = (uint)*(byte *)((iVar9 + 8 + (int)psVar14[param_2] >> 4) + iVar6 + (uint)bVar2)
            ;
            bVar2 = *(byte *)(iVar7 + uVar10);
            *pcVar16 = *pcVar16 + bVar2;
            pcVar16 = pcVar16 + param_2;
            iVar11 = uVar10 - *(byte *)((uint)bVar2 + iVar8);
            *psVar14 = (short)local_c + (short)iVar11 * 3;
            local_c = local_18 + iVar11 * 5;
            iVar9 = iVar11 * 7;
            psVar14 = psVar14 + param_2;
            local_18 = iVar11;
          }
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
          local_10 = local_10 + 1;
          local_24 = local_24 + -1;
          *psVar14 = (short)local_c;
        } while (local_24 != 0);
      }
      param_1 = param_1 + 1;
      local_28 = local_28 + -1;
      *(bool *)(iVar3 + 0x54) = *(char *)(iVar3 + 0x54) == '\0';
    } while (local_28 != (byte *)0x0);
  }
  return;
}



void __cdecl FUN_653cefbe(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar4 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x2c);
  iVar6 = 0;
  iVar2 = param_1[0x19];
  param_1[0x69] = (int)puVar4;
  *puVar4 = FUN_653cf161;
  puVar4[3] = &LAB_653d005c;
  puVar4[8] = 0;
  puVar4[10] = 0;
  if (iVar2 != 3) {
    puVar3 = (undefined4 *)*param_1;
    puVar3[5] = 0x2c;
    (*(code *)*puVar3)(param_1);
  }
  uVar5 = (**(code **)param_1[1])(param_1,1,0x80);
  puVar4[6] = uVar5;
  do {
    uVar5 = (**(code **)(param_1[1] + 4))(param_1,1,0x1000);
    *(undefined4 *)(puVar4[6] + iVar6) = uVar5;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x80);
  cVar1 = *(char *)((int)param_1 + 0x5a);
  *(undefined1 *)(puVar4 + 7) = 1;
  if (cVar1 == '\0') {
    puVar4[4] = 0;
  }
  else {
    iVar2 = param_1[0x15];
    if (iVar2 < 8) {
      puVar3 = (undefined4 *)*param_1;
      puVar3[5] = 0x35;
      puVar3[6] = 8;
      (*(code *)*puVar3)(param_1);
    }
    if (0x100 < iVar2) {
      puVar3 = (undefined4 *)*param_1;
      puVar3[5] = 0x36;
      puVar3[6] = 0x100;
      (*(code *)*puVar3)(param_1);
    }
    uVar5 = (**(code **)(param_1[1] + 8))(param_1,1,iVar2,3);
    puVar4[4] = uVar5;
    puVar4[5] = iVar2;
  }
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_1[0x13] == 2) {
    uVar5 = (**(code **)(param_1[1] + 4))(param_1,1,(param_1[0x17] + 2) * 6);
    puVar4[8] = uVar5;
    FUN_653cf0c2((int)param_1);
  }
  return;
}



void __cdecl FUN_653cf0c2(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x7fc);
  piVar2 = (int *)(iVar1 + 0x3fc);
  *(int **)(iVar3 + 0x28) = piVar2;
  iVar3 = 0;
  param_1 = 0;
  uVar5 = 0x10;
  local_8 = 0x10;
  piVar4 = piVar2;
  piVar6 = piVar2;
  do {
    *piVar4 = iVar3;
    *piVar6 = param_1;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + -1;
    iVar3 = iVar3 + 1;
    param_1 = param_1 + -1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar4 = (int *)(iVar1 + 0x43c);
  piVar6 = (int *)(iVar1 + 0x3bc);
  do {
    *piVar4 = iVar3;
    uVar5 = uVar5 + 1;
    *piVar6 = -iVar3;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + -1;
    iVar3 = iVar3 + (~uVar5 & 1);
  } while ((int)uVar5 < 0x30);
  if ((int)uVar5 < 0x100) {
    piVar4 = piVar2 + uVar5;
    piVar2 = piVar2 + -uVar5;
    iVar1 = 0x100 - uVar5;
    do {
      *piVar4 = iVar3;
      *piVar2 = -iVar3;
      piVar4 = piVar4 + 1;
      piVar2 = piVar2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



void __cdecl FUN_653cf161(int *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar1 = param_1[0x69];
  puVar6 = *(undefined4 **)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_653cf72c;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_653cf2ca;
    }
    iVar5 = param_1[0x1c];
    *(undefined **)(iVar1 + 8) = &DAT_653c89a4;
    if (iVar5 < 1) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x35;
      puVar2[6] = 1;
      (*(code *)*puVar2)(param_1);
    }
    if (0x100 < iVar5) {
      puVar2 = (undefined4 *)*param_1;
      puVar2[5] = 0x36;
      puVar2[6] = 0x100;
      (*(code *)*puVar2)(param_1);
    }
    if (param_1[0x13] == 2) {
      uVar4 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,uVar4);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_653d00fc(*(undefined4 **)(iVar1 + 0x20),uVar4);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_653cf0c2((int)param_1);
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_653cf25b;
    *(undefined1 **)(iVar1 + 8) = &LAB_653cf99d;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar5 = 0x20;
    do {
      FUN_653d00fc((undefined4 *)*puVar6,0x1000);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}



void __cdecl FUN_653cf25b(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  if (0 < param_4) {
    do {
      pbVar7 = (byte *)*param_2;
      for (iVar2 = iVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar6 = (uint)(pbVar7[1] >> 2) * 0x20 + (uint)(pbVar7[2] >> 3);
        iVar5 = *(int *)(iVar4 + (uint)(*pbVar7 >> 3) * 4);
        psVar1 = (short *)(iVar5 + iVar6 * 2);
        *psVar1 = *psVar1 + 1;
        psVar1 = (short *)(iVar5 + iVar6 * 2);
        if (*psVar1 == 0) {
          *psVar1 = -1;
        }
        pbVar7 = pbVar7 + 3;
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



void __cdecl FUN_653cf2ca(int param_1,int param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  int local_8;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar6 = *(int *)(param_1 + 0x5c);
  if (0 < param_4) {
    iVar9 = param_2 - (int)param_3;
    local_8 = param_4;
    do {
      pbVar10 = *(byte **)(iVar9 + (int)param_3);
      pcVar8 = (char *)*param_3;
      for (iVar3 = iVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
        bVar4 = *pbVar10;
        pbVar1 = pbVar10 + 1;
        pbVar2 = pbVar10 + 2;
        iVar7 = *(int *)(iVar5 + (uint)(bVar4 >> 3) * 4);
        iVar11 = (uint)(*pbVar1 >> 2) * 0x20 + (uint)(*pbVar2 >> 3);
        pbVar10 = pbVar10 + 3;
        if (*(short *)(iVar7 + iVar11 * 2) == 0) {
          FUN_653cf377(param_1,(uint)(bVar4 >> 3),(uint)(*pbVar1 >> 2),(uint)(*pbVar2 >> 3));
        }
        *pcVar8 = *(char *)(iVar7 + iVar11 * 2) + -1;
        pcVar8 = pcVar8 + 1;
      }
      param_3 = param_3 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}



void __cdecl FUN_653cf377(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  undefined1 local_188 [256];
  byte local_88 [128];
  int local_8;
  
  local_8 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  iVar6 = (param_2 >> 2) * 0x20 + 4;
  iVar5 = (param_4 >> 2) * 0x20 + 4;
  iVar8 = (param_3 >> 3) * 0x20 + 2;
  iVar1 = FUN_653cf446(param_1,iVar6,iVar8,iVar5,(int)local_188);
  FUN_653cf604(param_1,iVar6,iVar8,iVar5,iVar1,(int)local_188,local_88);
  pbVar3 = local_88;
  piVar2 = (int *)(local_8 + (param_2 >> 2) * 0x10);
  param_1 = 4;
  do {
    param_2 = 8;
    psVar7 = (short *)(*piVar2 + ((param_3 >> 3) * 0x100 + (param_4 >> 2) * 4) * 2);
    do {
      iVar1 = 4;
      psVar4 = psVar7;
      do {
        *psVar4 = *pbVar3 + 1;
        psVar4 = psVar4 + 1;
        pbVar3 = pbVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      psVar7 = psVar7 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    piVar2 = piVar2 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}



void __cdecl FUN_653cf446(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_428 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar4 = param_1;
  piVar6 = (int *)(param_1 + 0x70);
  local_8 = *piVar6;
  param_1 = 0;
  local_18 = param_3 * 2 + 0x1c >> 1;
  local_10 = 0x7fffffff;
  iVar3 = param_4 + 0x18;
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_24 = param_4 + iVar3 >> 1;
  if (0 < *piVar6) {
    piVar6 = *(int **)(iVar4 + 0x74);
    local_c = local_428;
    local_14 = *piVar6;
    local_20 = piVar6[1];
    local_1c = piVar6[2];
    do {
      iVar4 = local_10;
      uVar1 = (uint)*(byte *)(param_1 + local_14);
      if ((int)uVar1 < param_2) {
        iVar9 = (uVar1 - param_2) * 2;
        iVar9 = iVar9 * iVar9;
LAB_653cf5fd:
        iVar2 = param_2 + 0x18;
      }
      else {
        iVar2 = param_2;
        if (param_2 + 0x18 < (int)uVar1) {
          iVar9 = (uVar1 - (param_2 + 0x18)) * 2;
          iVar9 = iVar9 * iVar9;
        }
        else {
          iVar9 = 0;
          if ((int)uVar1 <= local_28) goto LAB_653cf5fd;
        }
      }
      iVar2 = (uVar1 - iVar2) * 2;
      uVar1 = (uint)*(byte *)(param_1 + local_20);
      if ((int)uVar1 < param_3) {
        iVar7 = (uVar1 - param_3) * 3;
        iVar7 = iVar7 * iVar7;
        iVar5 = param_3 + 0x1c;
LAB_653cf530:
        iVar9 = iVar9 + iVar7;
        iVar7 = (uVar1 - iVar5) * 3;
        iVar7 = iVar7 * iVar7;
      }
      else {
        iVar7 = param_3 + 0x1c;
        if (iVar7 < (int)uVar1) {
          iVar7 = (uVar1 - iVar7) * 3;
          iVar7 = iVar7 * iVar7;
          iVar5 = param_3;
          goto LAB_653cf530;
        }
        iVar5 = param_3;
        if ((int)uVar1 <= local_18) {
          iVar5 = iVar7;
        }
        iVar7 = (uVar1 - iVar5) * 3;
        iVar7 = iVar7 * iVar7;
      }
      uVar1 = (uint)*(byte *)(param_1 + local_1c);
      if ((int)uVar1 < param_4) {
        iVar8 = (uVar1 - param_4) * (uVar1 - param_4);
        iVar5 = iVar3;
LAB_653cf588:
        iVar9 = iVar9 + iVar8;
        iVar5 = (uVar1 - iVar5) * (uVar1 - iVar5);
      }
      else {
        if (iVar3 < (int)uVar1) {
          iVar8 = (uVar1 - iVar3) * (uVar1 - iVar3);
          iVar5 = param_4;
          goto LAB_653cf588;
        }
        iVar5 = param_4;
        if ((int)uVar1 <= local_24) {
          iVar5 = iVar3;
        }
        iVar5 = (uVar1 - iVar5) * (uVar1 - iVar5);
      }
      iVar5 = iVar2 * iVar2 + iVar7 + iVar5;
      *local_c = iVar9;
      if (iVar5 < iVar4) {
        local_10 = iVar5;
      }
      param_1 = param_1 + 1;
      local_c = local_c + 1;
    } while (param_1 < local_8);
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < local_8) {
    piVar6 = local_428;
    do {
      if (*piVar6 <= local_10) {
        *(char *)(iVar3 + param_5) = (char)iVar4;
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < local_8);
  }
  return;
}



void __cdecl
FUN_653cf604(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int local_234 [128];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar7 = local_234;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0x7fffffff;
    piVar7 = piVar7 + 1;
  }
  local_28 = 0;
  if (0 < param_5) {
    piVar7 = *(int **)(param_1 + 0x74);
    local_2c = *piVar7;
    local_34 = piVar7[1];
    local_30 = piVar7[2];
    do {
      local_20 = 4;
      bVar1 = *(byte *)(local_28 + param_6);
      uVar6 = (uint)bVar1;
      iVar4 = (param_2 - (uint)*(byte *)(uVar6 + local_2c)) * 2;
      iVar3 = (param_3 - (uint)*(byte *)(uVar6 + local_34)) * 3;
      iVar5 = param_4 - (uint)*(byte *)(uVar6 + local_30);
      iVar2 = iVar3 * iVar3 + iVar4 * iVar4 + iVar5 * iVar5;
      local_c = local_234;
      local_18 = (iVar4 + 8) * 0x20;
      local_14 = param_7;
      do {
        local_1c = 8;
        local_10 = (iVar3 + 6) * 0x18;
        local_8 = iVar2;
        do {
          local_24 = 4;
          iVar4 = local_8;
          param_1 = (iVar5 + 4) * 0x10;
          do {
            if (iVar4 < *local_c) {
              *local_c = iVar4;
              *local_14 = bVar1;
            }
            iVar4 = iVar4 + param_1;
            param_1 = param_1 + 0x80;
            local_c = local_c + 1;
            local_14 = local_14 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
          local_8 = local_8 + local_10;
          local_1c = local_1c + -1;
          local_10 = local_10 + 0x120;
        } while (local_1c != 0);
        iVar2 = iVar2 + local_18;
        local_18 = local_18 + 0x200;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_28 = local_28 + 1;
    } while (local_28 < param_5);
  }
  return;
}



void __cdecl FUN_653cf72c(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  iVar3 = *(int *)(param_1 + 0x11c);
  iVar4 = *(int *)(iVar2 + 0x18);
  iVar5 = *(int *)(iVar2 + 0x28);
  iVar6 = *(int *)(param_1 + 0x5c);
  piVar7 = *(int **)(param_1 + 0x74);
  iVar8 = *piVar7;
  iVar9 = piVar7[1];
  iVar10 = piVar7[2];
  if (0 < param_4) {
    local_24 = param_3;
    local_40 = param_4;
    do {
      pbVar11 = *(byte **)((param_2 - (int)param_3) + (int)local_24);
      local_c = (undefined1 *)*local_24;
      if (*(char *)(iVar2 + 0x24) == '\0') {
        psVar18 = *(short **)(iVar2 + 0x20);
        local_34 = 1;
        local_8 = 3;
        *(undefined1 *)(iVar2 + 0x24) = 1;
      }
      else {
        local_34 = -1;
        *(undefined1 *)(iVar2 + 0x24) = 0;
        local_8 = -3;
        pbVar11 = pbVar11 + iVar6 * 3 + -3;
        local_c = local_c + iVar6 + -1;
        psVar18 = (short *)(*(int *)(iVar2 + 0x20) + (iVar6 + 1) * 6);
      }
      iVar16 = 0;
      local_20 = 0;
      local_20._0_2_ = 0;
      local_1c = 0;
      local_1c._0_2_ = 0;
      local_18 = 0;
      local_18._0_2_ = 0;
      iVar19 = 0;
      param_4 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      for (iVar1 = iVar6; iVar1 != 0; iVar1 = iVar1 + -1) {
        uVar20 = (uint)*(byte *)(*(int *)(iVar5 + (iVar19 + 8 + (int)psVar18[local_8] >> 4) * 4) +
                                 iVar3 + (uint)*pbVar11);
        uVar17 = (uint)*(byte *)(*(int *)(iVar5 + (psVar18[local_8 + 1] + 8 + iVar16 >> 4) * 4) +
                                 (uint)pbVar11[1] + iVar3);
        iVar19 = (int)uVar17 >> 2;
        uVar12 = (uint)*(byte *)(*(int *)(iVar5 + (psVar18[local_8 + 2] + 8 + param_4 >> 4) * 4) +
                                 (uint)pbVar11[2] + iVar3);
        iVar13 = (int)uVar12 >> 3;
        iVar15 = iVar19 * 0x20 + iVar13;
        iVar14 = (int)uVar20 >> 3;
        iVar16 = *(int *)(iVar4 + iVar14 * 4);
        if (*(short *)(iVar16 + iVar15 * 2) == 0) {
          FUN_653cf377(param_1,iVar14,iVar19,iVar13);
        }
        iVar19 = *(ushort *)(iVar16 + iVar15 * 2) - 1;
        *local_c = (char)iVar19;
        iVar15 = uVar20 - *(byte *)(iVar19 + iVar8);
        iVar14 = uVar17 - *(byte *)(iVar19 + iVar9);
        iVar13 = uVar12 - *(byte *)(iVar19 + iVar10);
        *psVar18 = (short)local_18 + (short)iVar15 * 3;
        local_18 = local_28 + iVar15 * 5;
        iVar19 = iVar15 * 7;
        psVar18[1] = (short)local_1c + (short)iVar14 * 3;
        local_1c = local_2c + iVar14 * 5;
        iVar16 = iVar14 * 7;
        psVar18[2] = (short)local_20 + (short)iVar13 * 3;
        local_20 = local_30 + iVar13 * 5;
        param_4 = iVar13 * 7;
        pbVar11 = pbVar11 + local_8;
        local_c = local_c + local_34;
        psVar18 = psVar18 + local_8;
        local_30 = iVar13;
        local_2c = iVar14;
        local_28 = iVar15;
      }
      local_24 = local_24 + 1;
      local_40 = local_40 + -1;
      *psVar18 = (short)local_18;
      psVar18[1] = (short)local_1c;
      psVar18[2] = (short)local_20;
    } while (local_40 != 0);
  }
  return;
}



void __cdecl FUN_653cf9bf(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  
  puVar1 = (ushort *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,param_2 << 5);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0x1f;
  puVar1[3] = 0;
  puVar1[6] = 0x3f;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x1f;
  puVar1[0xb] = 0;
  FUN_653cfa38(param_1,(int *)puVar1);
  iVar2 = FUN_653cfdc4(param_1,(int)puVar1,1,param_2);
  param_2 = 0;
  if (0 < iVar2) {
    do {
      FUN_653cff30(param_1,puVar1,param_2);
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 0x10;
    } while (param_2 < iVar2);
  }
  *(int *)(param_1 + 0x70) = iVar2;
  return;
}



void __cdecl FUN_653cfa38(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  local_1c = param_2[3];
  local_20 = (int *)*param_2;
  iVar2 = *(int *)(*(int *)(param_1 + 0x1a4) + 0x18);
  local_10 = (int *)param_2[1];
  local_18 = param_2[2];
  local_c = param_2[4];
  local_14 = param_2[5];
  if (((int)local_20 < (int)local_10) && ((int)local_20 <= (int)local_10)) {
    piVar5 = (int *)(iVar2 + (int)local_20 * 4);
    param_2 = local_20;
    do {
      if (local_18 <= local_1c) {
        psVar4 = (short *)(*piVar5 + (local_18 * 0x20 + local_c) * 2);
        iVar6 = local_c;
        param_1 = local_18;
        psVar9 = psVar4;
        do {
          for (; iVar6 <= local_14; iVar6 = iVar6 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              local_20 = param_2;
              *piVar3 = (int)param_2;
              goto LAB_653cfae7;
            }
          }
          param_1 = param_1 + 1;
          psVar4 = psVar9 + 0x20;
          iVar6 = local_c;
          psVar9 = psVar4;
        } while (param_1 <= local_1c);
      }
      param_2 = (int *)((int)param_2 + 1);
      piVar5 = piVar5 + 1;
    } while ((int)param_2 <= (int)local_10);
  }
LAB_653cfae7:
  if ((int)local_20 < (int)local_10) {
    piVar5 = (int *)(iVar2 + (int)local_10 * 4);
    param_2 = local_10;
    do {
      if (local_18 <= local_1c) {
        local_28 = (int *)(*piVar5 + (local_18 * 0x20 + local_c) * 2);
        local_8 = local_c;
        param_1 = local_18;
        psVar4 = (short *)local_28;
        do {
          for (; local_8 <= local_14; local_8 = local_8 + 1) {
            if ((short)*local_28 != 0) {
              local_10 = param_2;
              piVar3[1] = (int)param_2;
              goto LAB_653cfb56;
            }
            local_28 = (int *)((int)local_28 + 2);
          }
          param_1 = param_1 + 1;
          local_28 = (int *)(psVar4 + 0x20);
          local_8 = local_c;
          psVar4 = (short *)local_28;
        } while (param_1 <= local_1c);
      }
      param_2 = (int *)((int)param_2 + -1);
      piVar5 = piVar5 + -1;
    } while ((int)local_20 <= (int)param_2);
  }
LAB_653cfb56:
  if ((local_18 < local_1c) && (local_18 <= local_1c)) {
    local_28 = (int *)((local_18 * 0x20 + local_c) * 2);
    param_1 = local_18;
    do {
      if ((int)local_20 <= (int)local_10) {
        piVar5 = (int *)(iVar2 + (int)local_20 * 4);
        param_2 = local_20;
        do {
          psVar4 = (short *)(*piVar5 + (int)local_28);
          for (iVar6 = local_c; iVar6 <= local_14; iVar6 = iVar6 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              local_18 = param_1;
              piVar3[2] = param_1;
              goto LAB_653cfbcb;
            }
          }
          param_2 = (int *)((int)param_2 + 1);
          piVar5 = piVar5 + 1;
        } while ((int)param_2 <= (int)local_10);
      }
      param_1 = param_1 + 1;
      local_28 = (int *)((int)local_28 + 0x40);
    } while (param_1 <= local_1c);
  }
LAB_653cfbcb:
  if (local_18 < local_1c) {
    iVar6 = (local_1c * 0x20 + local_c) * 2;
    param_1 = local_1c;
    do {
      if ((int)local_20 <= (int)local_10) {
        local_28 = (int *)(iVar2 + (int)local_20 * 4);
        param_2 = local_20;
        do {
          psVar4 = (short *)(*local_28 + iVar6);
          for (iVar7 = local_c; iVar7 <= local_14; iVar7 = iVar7 + 1) {
            sVar1 = *psVar4;
            psVar4 = psVar4 + 1;
            if (sVar1 != 0) {
              piVar3[3] = param_1;
              local_1c = param_1;
              goto LAB_653cfc44;
            }
          }
          param_2 = (int *)((int)param_2 + 1);
          local_28 = local_28 + 1;
        } while ((int)param_2 <= (int)local_10);
      }
      param_1 = param_1 + -1;
      iVar6 = iVar6 + -0x40;
    } while (local_18 <= param_1);
  }
LAB_653cfc44:
  local_8 = local_c;
  if (local_c < local_14) {
    for (; local_8 <= local_14; local_8 = local_8 + 1) {
      if ((int)local_20 <= (int)local_10) {
        piVar5 = (int *)(iVar2 + (int)local_20 * 4);
        param_2 = local_20;
        do {
          psVar4 = (short *)(*piVar5 + (local_18 * 0x20 + local_8) * 2);
          for (iVar6 = local_18; iVar6 <= local_1c; iVar6 = iVar6 + 1) {
            if (*psVar4 != 0) {
              local_c = local_8;
              piVar3[4] = local_8;
              goto LAB_653cfcb1;
            }
            psVar4 = psVar4 + 0x20;
          }
          param_2 = (int *)((int)param_2 + 1);
          piVar5 = piVar5 + 1;
        } while ((int)param_2 <= (int)local_10);
      }
    }
  }
LAB_653cfcb1:
  local_8 = local_14;
  if (local_c < local_14) {
    do {
      if ((int)local_20 <= (int)local_10) {
        piVar5 = (int *)(iVar2 + (int)local_20 * 4);
        param_2 = local_20;
        do {
          psVar4 = (short *)(*piVar5 + (local_18 * 0x20 + local_8) * 2);
          for (iVar6 = local_18; iVar6 <= local_1c; iVar6 = iVar6 + 1) {
            if (*psVar4 != 0) {
              local_14 = local_8;
              piVar3[5] = local_8;
              goto LAB_653cfd1e;
            }
            psVar4 = psVar4 + 0x20;
          }
          param_2 = (int *)((int)param_2 + 1);
          piVar5 = piVar5 + 1;
        } while ((int)param_2 <= (int)local_10);
      }
      local_8 = local_8 + -1;
    } while (local_c <= local_8);
  }
LAB_653cfd1e:
  param_1 = 0;
  iVar7 = ((int)local_10 - (int)local_20) * 0x10;
  iVar6 = (local_1c - local_18) * 0xc;
  iVar8 = (local_14 - local_c) * 8;
  piVar3[6] = iVar7 * iVar7 + iVar6 * iVar6 + iVar8 * iVar8;
  if ((int)local_20 <= (int)local_10) {
    piVar5 = (int *)(iVar2 + (int)local_20 * 4);
    local_24 = ((int)local_10 - (int)local_20) + 1;
    do {
      if (local_18 <= local_1c) {
        psVar4 = (short *)(*piVar5 + (local_18 * 0x20 + local_c) * 2);
        local_28 = (int *)((local_1c - local_18) + 1);
        do {
          if (local_c <= local_14) {
            param_2 = (int *)((local_14 - local_c) + 1);
            psVar9 = psVar4;
            do {
              if (*psVar9 != 0) {
                param_1 = param_1 + 1;
              }
              psVar9 = psVar9 + 1;
              param_2 = (int *)((int)param_2 + -1);
            } while (param_2 != (int *)0x0);
          }
          psVar4 = psVar4 + 0x20;
          local_28 = (int *)((int)local_28 + -1);
        } while (local_28 != (int *)0x0);
      }
      piVar5 = piVar5 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  piVar3[7] = param_1;
  return;
}



int __cdecl FUN_653cfdc4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int *piVar9;
  int local_8;
  
  if (param_3 < param_4) {
    local_8 = param_3 * 2;
    piVar9 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      if (param_4 < local_8) {
        piVar4 = FUN_653cff07(param_2,param_3);
      }
      else {
        piVar4 = FUN_653cfed8(param_2,param_3);
      }
      if (piVar4 == (int *)0x0) {
        return param_3;
      }
      iVar6 = piVar4[3];
      iVar5 = piVar4[5];
      iVar7 = piVar4[1];
      iVar1 = piVar4[2];
      *piVar9 = iVar6;
      iVar2 = piVar4[2];
      piVar9[2] = iVar5;
      iVar5 = *piVar4;
      piVar9[-2] = iVar7;
      piVar9[-3] = iVar5;
      piVar9[-1] = iVar1;
      iVar1 = piVar4[4];
      iVar3 = piVar4[5];
      iVar7 = (iVar7 - iVar5) * 0x10;
      iVar5 = (iVar6 - iVar2) * 0xc;
      piVar9[1] = iVar1;
      iVar6 = iVar5;
      if (iVar5 < iVar7) {
        iVar6 = iVar7;
      }
      cVar8 = iVar5 >= iVar7;
      if (iVar6 < (iVar3 - iVar1) * 8) {
        cVar8 = '\x02';
      }
      if (cVar8 == '\0') {
        iVar6 = (piVar4[1] + *piVar4) / 2;
        piVar4[1] = iVar6;
        piVar9[-3] = iVar6 + 1;
      }
      else if (cVar8 == '\x01') {
        iVar6 = (piVar4[3] + piVar4[2]) / 2;
        piVar4[3] = iVar6;
        piVar9[-1] = iVar6 + 1;
      }
      else if (cVar8 == '\x02') {
        iVar6 = (piVar4[5] + piVar4[4]) / 2;
        piVar4[5] = iVar6;
        piVar9[1] = iVar6 + 1;
      }
      FUN_653cfa38(param_1,piVar4);
      FUN_653cfa38(param_1,piVar9 + -3);
      local_8 = local_8 + 2;
      param_3 = param_3 + 1;
      piVar9 = piVar9 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}



int * __cdecl FUN_653cfed8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 0x1c);
    do {
      if ((iVar3 < *piVar2) && (0 < piVar2[-1])) {
        piVar1 = piVar2 + -7;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return piVar1;
}



int * __cdecl FUN_653cff07(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 0x18);
    do {
      if (iVar3 < *piVar2) {
        piVar1 = piVar2 + -6;
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return piVar1;
}



void __cdecl FUN_653cff30(int param_1,ushort *param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  ushort *local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  puVar1 = param_2 + 6;
  iVar3 = *(int *)(param_2 + 4);
  puVar2 = param_2 + 10;
  iVar7 = *(int *)(param_2 + 8);
  iVar6 = *(int *)param_2;
  if (iVar6 <= *(int *)(param_2 + 2)) {
    local_1c = iVar6 * 8 + 4;
    local_18 = (int *)(*(int *)(*(int *)(param_1 + 0x1a4) + 0x18) + iVar6 * 4);
    local_30 = (*(int *)(param_2 + 2) - iVar6) + 1;
    do {
      if (iVar3 <= *(int *)puVar1) {
        local_14 = iVar3 * 4 + 2;
        iVar6 = (*(int *)puVar1 - iVar3) + 1;
        local_10 = (ushort *)(*local_18 + (iVar3 * 0x20 + iVar7) * 2);
        do {
          param_2 = local_10;
          if (iVar7 <= *(int *)puVar2) {
            local_c = iVar7 * 8 + 4;
            local_2c = (*(int *)puVar2 - iVar7) + 1;
            do {
              uVar5 = (uint)*param_2;
              if (uVar5 != 0) {
                local_8 = local_8 + uVar5;
                local_20 = local_20 + uVar5 * local_1c;
                local_24 = local_24 + uVar5 * local_14;
                local_28 = local_28 + uVar5 * local_c;
              }
              local_c = local_c + 8;
              local_2c = local_2c + -1;
              param_2 = param_2 + 1;
            } while (local_2c != 0);
          }
          local_10 = local_10 + 0x20;
          local_14 = local_14 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + 8;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  iVar7 = local_8 >> 1;
  piVar4 = *(int **)(param_1 + 0x74);
  *(char *)(param_3 + *piVar4) = (char)((local_20 + iVar7) / local_8);
  iVar3 = piVar4[2];
  *(char *)(piVar4[1] + param_3) = (char)((local_24 + iVar7) / local_8);
  *(char *)(iVar3 + param_3) = (char)((local_28 + iVar7) / local_8);
  return;
}



int __cdecl FUN_653d006b(int param_1,int param_2)

{
  return (param_2 + -1 + param_1) / param_2;
}



int __cdecl FUN_653d007b(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -1 + param_2;
  return iVar1 - iVar1 % param_2;
}



void __cdecl FUN_653d0093(int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  puVar3 = (undefined4 *)(param_3 + param_4 * 4);
  if (0 < param_5) {
    param_2 = param_5;
    do {
      puVar4 = (undefined4 *)*puVar1;
      puVar5 = (undefined4 *)*puVar3;
      for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + -1;
      for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    } while (param_2 != 0);
  }
  return;
}



void __cdecl FUN_653d00da(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  for (uVar1 = (uint)(param_3 << 7) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}



void __cdecl FUN_653d00fc(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = 0;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_653d0120(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  if (param_2 != 1) {
    if (param_2 != 0) {
      if (param_2 == 3) {
        FUN_653d1480((undefined *)0x0);
      }
      return 1;
    }
    if (0 < DAT_653e0ee4) {
      DAT_653e0ee4 = DAT_653e0ee4 + -1;
      if (DAT_653e0f3c == 0) {
        FUN_653d0f90();
      }
      FUN_653d1730();
      FUN_653d13b0();
      FUN_653d1fe0();
      return 1;
    }
    return 0;
  }
  DAT_653e0f04 = GetVersion();
  if (DAT_653e0ef4 == 0) {
    if (((char)DAT_653e0f04 == '\x03') && ((DAT_653e0f04 & 0x80000000) != 0)) {
      FUN_653d2020(2);
    }
    hModule = GetModuleHandleA("kernel32.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,"IsTNT");
      if (pFVar1 != (FARPROC)0x0) {
        FUN_653d2020(1);
      }
    }
  }
  iVar2 = FUN_653d1fa0();
  if (iVar2 == 0) {
    return 0;
  }
  _DAT_653e0f10 = DAT_653e0f04 >> 8 & 0xff;
  _DAT_653e0f0c = DAT_653e0f04 & 0xff;
  _DAT_653e0f08 = _DAT_653e0f0c * 0x100 + _DAT_653e0f10;
  DAT_653e0f04 = DAT_653e0f04 >> 0x10;
  iVar2 = FUN_653d1350();
  if (iVar2 == 0) {
    FUN_653d1fe0();
    return 0;
  }
  DAT_653e24cc = GetCommandLineA();
  DAT_653e0ee8 = FUN_653d1e40();
  if ((DAT_653e24cc != (LPSTR)0x0) && (DAT_653e0ee8 != (LPSTR)0x0)) {
    FUN_653d1520();
    FUN_653d1e30();
    FUN_653d1880();
    FUN_653d1790();
    FUN_653d0f20();
    DAT_653e0ee4 = DAT_653e0ee4 + 1;
    return 1;
  }
  FUN_653d13b0();
  FUN_653d1fe0();
  return 0;
}



int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if ((param_2 == 0) && (DAT_653e0ee4 == 0)) {
    return 0;
  }
  if ((param_2 != 1) && (param_2 != 2)) {
LAB_653d02ee:
    iVar1 = FUN_653c7290(param_1,param_2);
    if ((param_2 == 1) && (iVar1 == 0)) {
      FUN_653d0120(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar2 = FUN_653d0120(param_1,param_2);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      if ((iVar1 != 0) && (DAT_653e24d0 != (code *)0x0)) {
        iVar1 = (*DAT_653e24d0)(param_1,param_2,param_3);
      }
    }
    return iVar1;
  }
  if (DAT_653e24d0 != (code *)0x0) {
    iVar1 = (*DAT_653e24d0)(param_1,param_2,param_3);
  }
  if (iVar1 != 0) {
    iVar1 = FUN_653d0120(param_1,param_2);
    if (iVar1 != 0) goto LAB_653d02ee;
  }
  return 0;
}



// Library Function - Single Match
//  __amsg_exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_653e0ef0 == 1) || ((DAT_653e0ef0 == 0 && (DAT_653e0ef4 == 1)))) {
    FUN_653d2030();
  }
  FUN_653d2070(param_1);
  (*(code *)PTR___exit_653dd698)(0xff);
  return;
}



void __cdecl FUN_653d0390(undefined *param_1)

{
  FUN_653d03a0(param_1);
  return;
}



void __cdecl FUN_653d03a0(undefined *param_1)

{
  undefined *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (undefined *)0x0) {
    FUN_653d2300(9);
    pbVar1 = (byte *)FUN_653d2720(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_653d2780(local_4,(int)param_1,pbVar1);
      FUN_653d2380(9);
      return;
    }
    FUN_653d2380(9);
    HeapFree(DAT_653e1384,0,lpMem);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_653d0410(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  CHAR *pCVar9;
  char *pcVar10;
  char *pcVar11;
  char acStackY_356 [14];
  undefined4 uStackY_348;
  CHAR local_324 [259];
  char cStack_221;
  undefined4 local_220;
  char local_21c [536];
  
  if ((DAT_653e0ef0 == 1) || ((DAT_653e0ef0 == 0 && (DAT_653e0ef4 == 1)))) {
    if ((_DAT_653dd744 & 0x10c) == 0) {
      FUN_653d2e50((int *)&DAT_653dd738,(int *)0x0,4,0);
    }
    uStackY_348 = 0x653d0937;
    FID_conflict__fwprintf
              ((FILE *)&DAT_653dd738,(wchar_t *)s_Assertion_failed___s__file__s__l_653dd6a0);
    FUN_653d2c90((int *)&DAT_653dd738);
  }
  else {
    local_220._0_1_ = 'A';
    local_220._1_1_ = 's';
    local_220._2_1_ = 's';
    local_220._3_1_ = 'e';
    builtin_strncpy(local_21c,"rtion failed!",0xe);
    uVar4 = 0xffffffff;
    pcVar7 = PTR_DAT_653dd6d0;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = "Program: ";
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    DVar3 = GetModuleFileNameA((HMODULE)0x0,local_324,0x104);
    if (DVar3 == 0) {
      pcVar7 = "<program name unknown>";
      pCVar9 = local_324;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pCVar9 = pCVar9 + 4;
      }
      *(undefined2 *)pCVar9 = *(undefined2 *)pcVar7;
      pCVar9[2] = pcVar7[2];
    }
    uVar4 = 0xffffffff;
    pcVar7 = local_324;
    pcVar8 = local_324;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (0x3c < ~uVar4 + 10) {
      uVar4 = 0xffffffff;
      pcVar7 = local_324;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar7 = acStackY_356 + ~uVar4;
      _strncpy(pcVar7,PTR_DAT_653dd6c8,3);
    }
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = PTR_DAT_653dd6cc;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = "File: ";
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 + 7 < 0x3d) {
      uVar4 = 0xffffffff;
      do {
        pcVar7 = param_2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar7 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar7;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar8 = (char *)&local_220;
      do {
        pcVar11 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -uVar4;
      pcVar8 = pcVar11 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      _strncat((char *)&local_220,param_2,0x31);
      uVar4 = 0xffffffff;
      pcVar7 = PTR_DAT_653dd6c8;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar7 = (char *)&local_220;
      do {
        pcVar11 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = pcVar11 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = PTR_DAT_653dd6cc;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = "Line: ";
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&local_220;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_653d3210(param_3,&cStack_221 + ~uVar4,10);
    pcVar7 = PTR_DAT_653dd6d0;
    uVar4 = 0xffffffff;
    pcVar8 = PTR_DAT_653dd6d0;
    do {
      pcVar11 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = (char *)&local_220;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar8 = "Expression: ";
    do {
      pcVar11 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = (char *)&local_220;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar8 = (char *)&local_220;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 + ~uVar6 + 0xae < 0x21d) {
      uVar4 = 0xffffffff;
      do {
        pcVar8 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar11 = (char *)&local_220;
      do {
        pcVar10 = pcVar11;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar10 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -uVar4;
      pcVar11 = pcVar10 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    else {
      uVar4 = 0xffffffff;
      pcVar7 = (char *)&local_220;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      _strncat((char *)&local_220,param_1,0x169 - (~uVar4 - 1));
      uVar4 = 0xffffffff;
      pcVar7 = PTR_DAT_653dd6c8;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar7 = (char *)&local_220;
      do {
        pcVar11 = pcVar7;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -uVar4;
      pcVar11 = pcVar11 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar4 = uVar4 & 3; pcVar7 = PTR_DAT_653dd6d0, uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    uVar4 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      pcVar11 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = (char *)&local_220;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar8 = 
    "For information on how your program can cause an assertion\nfailure, see the Visual C++ documentation on asserts"
    ;
    do {
      pcVar11 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = (char *)&local_220;
    do {
      pcVar10 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar7 = "(Press Retry to debug the application - JIT must be enabled)";
    do {
      pcVar8 = pcVar7;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar7 = (char *)&local_220;
    do {
      pcVar11 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    pcVar7 = pcVar8 + -uVar4;
    pcVar8 = pcVar11 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar5 = FUN_653d3180(&local_220,"Microsoft Visual C++ Runtime Library",0x12012);
    if (iVar5 == 3) {
      FUN_653d2f30((DWORD *)0x16);
                    // WARNING: Subroutine does not return
      __exit(3);
    }
    if (iVar5 == 4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar5 == 5) {
      return;
    }
  }
                    // WARNING: Subroutine does not return
  _abort();
}



// Library Function - Single Match
//  __global_unwind2
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x653d0978,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
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
  puStack_18 = &LAB_653d0980;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_653d0a36();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



void FUN_653d0a36(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_653dd6dc = *(undefined4 *)(unaff_EBP + 8);
  DAT_653dd6d8 = in_EAX;
  DAT_653dd6e0 = unaff_EBP;
  return;
}



void FUN_653d0b15(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



void __cdecl FUN_653d0b30(uint param_1)

{
  FUN_653d0b60(param_1,1);
  return;
}



void __cdecl FUN_653d0b40(uint param_1)

{
  FUN_653d0b60(param_1,DAT_653e1204);
  return;
}



int * __cdecl FUN_653d0b60(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_653d0bb0(param_1);
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
      iVar2 = FUN_653d34f0(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



int * __cdecl FUN_653d0bb0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_653dfc1c) {
    FUN_653d2300(9);
    piVar1 = FUN_653d27e0(param_1 + 0xfU >> 4);
    FUN_653d2380(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = (int *)HeapAlloc(DAT_653e1384,0,dwBytes);
  return piVar1;
}



int * __cdecl FUN_653d0c10(int *param_1,uint param_2)

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
    piVar1 = (int *)FUN_653d0b40(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_653d03a0((undefined *)param_1);
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
      FUN_653d2300(9);
      pbVar2 = (byte *)FUN_653d2720((undefined *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_653d2380(9);
        piVar1 = (int *)HeapReAlloc(DAT_653e1384,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_653dfc1c) {
          iVar3 = FUN_653d2ba0(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_653d0d15;
          piVar1 = FUN_653d27e0(uVar4 >> 4);
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
            FUN_653d2780(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_653d0d15;
          }
LAB_653d0d19:
          piVar1 = (int *)HeapAlloc(DAT_653e1384,0,uVar4);
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
            FUN_653d2780(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_653d0d15:
          if (piVar1 == (int *)0x0) goto LAB_653d0d19;
        }
        FUN_653d2380(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_653e1204 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_653d34f0(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



// WARNING: Unable to track spacebase fully for stack
// Library Function - Single Match
//  _longjmp
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
// Studio 2003 Release

void __cdecl _longjmp(int *_Buf,int _Value)

{
  PVOID pvVar1;
  int iVar2;
  
  pvVar1 = (PVOID)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (PVOID)0x0) {
    iVar2 = FUN_653d3510();
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2((int)pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_653d0a36();
                    // WARNING: Could not recover jumptable at 0x653d0e35. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)_Buf[5])();
  return;
}



// Library Function - Single Match
//  __setjmp3
// 
// Library: Visual Studio

undefined4 __cdecl __setjmp3(undefined4 *param_1,int param_2,void *param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 unaff_EDI;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  
  *param_1 = unaff_EBP;
  param_1[1] = unaff_EBX;
  param_1[2] = unaff_EDI;
  param_1[3] = unaff_ESI;
  param_1[4] = register0x00000010;
  param_1[5] = unaff_retaddr;
  param_1[8] = 0x56433230;
  param_1[9] = 0;
  pvVar1 = ExceptionList;
  param_1[6] = ExceptionList;
  if (pvVar1 == (void *)0xffffffff) {
    param_1[7] = 0xffffffff;
  }
  else if ((param_2 == 0) || (param_1[9] = param_3, pvVar1 = param_3, param_2 == 1)) {
    param_1[7] = *(undefined4 *)((int)pvVar1 + 0xc);
  }
  else {
    param_1[7] = param_4;
    uVar2 = param_2 - 2;
    if (uVar2 != 0) {
      puVar3 = (undefined4 *)&stack0x00000014;
      puVar4 = param_1 + 10;
      if (6 < uVar2) {
        uVar2 = 6;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  __fpmath
// 
// Library: Visual Studio 1998 Release

void __cdecl __fpmath(int param_1)

{
  FUN_653d0ee0();
  _DAT_653e0efc = FUN_653d35f0();
  __setdefaultprecision();
  return;
}



void FUN_653d0ee0(void)

{
  PTR___fptrap_653dfc24 = &LAB_653d3680;
  PTR___fptrap_653dfc20 = &LAB_653d3ae0;
  PTR___fptrap_653dfc28 = &LAB_653d3710;
  PTR___fptrap_653dfc2c = FUN_653d3620;
  PTR___fptrap_653dfc30 = &LAB_653d36f0;
  PTR___fptrap_653dfc34 = &LAB_653d3ae0;
  return;
}



void FUN_653d0f20(void)

{
  if (PTR___fpmath_653dd6ec != (undefined *)0x0) {
    (*(code *)PTR___fpmath_653dd6ec)();
  }
  FUN_653d1080((undefined4 *)&DAT_653dc008,(undefined4 *)&DAT_653dc010);
  FUN_653d1080((undefined4 *)&DAT_653dc000,(undefined4 *)&DAT_653dc004);
  return;
}



void __cdecl FUN_653d0f50(UINT param_1)

{
  FUN_653d0fa0(param_1,0,0);
  return;
}



// Library Function - Single Match
//  __exit
// 
// Library: Visual Studio 1998 Release

void __cdecl __exit(int _Code)

{
  FUN_653d0fa0(_Code,1,0);
  return;
}



void FUN_653d0f90(void)

{
  FUN_653d0fa0(0,0,1);
  return;
}



void __cdecl FUN_653d0fa0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_653d1060();
  if (DAT_653e0f40 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_653e0f3c = 1;
  DAT_653e0f38 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_653e24c8 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_653e24c4 + -4), puVar1 = DAT_653e24c8, DAT_653e24c8 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_653e24c8;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_653d1080((undefined4 *)&DAT_653dc014,(undefined4 *)&DAT_653dc01c);
  }
  FUN_653d1080((undefined4 *)&DAT_653dc020,(undefined4 *)&DAT_653dc024);
  if (param_3 != 0) {
    FUN_653d1070();
    return;
  }
  DAT_653e0f40 = 1;
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



void FUN_653d1060(void)

{
  FUN_653d2300(0xd);
  return;
}



void FUN_653d1070(void)

{
  FUN_653d2380(0xd);
  return;
}



void __cdecl FUN_653d1080(undefined4 *param_1,undefined4 *param_2)

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



// Library Function - Multiple Matches With Different Base Names
//  _fprintf
//  _fwprintf
// 
// Library: Visual Studio 1998 Release

int __cdecl FID_conflict__fwprintf(FILE *_File,wchar_t *_Format,...)

{
  int iVar1;
  int iVar2;
  
  FUN_653d23a0((uint)_File);
  iVar1 = FUN_653d3b80(&_File->_ptr);
  iVar2 = FUN_653d3c60((int *)_File,(char *)_Format,(undefined4 *)&stack0x0000000c);
  FUN_653d3c20(iVar1,(int *)_File);
  FUN_653d2410((uint)_File);
  return iVar2;
}



int __cdecl FUN_653d11d0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = 0x7fffffff;
  iVar1 = FUN_653d3c60((int *)&local_20,param_2,(undefined4 *)&stack0x0000000c);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return iVar1;
  }
  FUN_653d4870(0,(int *)&local_20);
  return iVar1;
}



void __cdecl FUN_653d1240(char *param_1,byte *param_2)

{
  char cVar1;
  uint uVar2;
  char *local_20;
  int local_1c;
  char *local_18;
  undefined4 local_14;
  
  uVar2 = 0xffffffff;
  local_18 = param_1;
  local_20 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_1c = ~uVar2 - 1;
  local_14 = 0x49;
  FUN_653d49a0((int *)&local_20,param_2,(undefined4 *)&stack0x0000000c);
  return;
}



int __cdecl FUN_653d1290(byte *param_1)

{
  int iVar1;
  
  FUN_653d2300(0xc);
  iVar1 = FUN_653d12c0(param_1);
  FUN_653d2380(0xc);
  return iVar1;
}



int __cdecl FUN_653d12c0(byte *param_1)

{
  byte bVar1;
  LPCWSTR pWVar2;
  LPWSTR pWVar3;
  uint uVar4;
  LPWSTR pWVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  
  if (((DAT_653e0f20 != (int *)0x0) ||
      (((DAT_653e0f28 == 0 || (pWVar2 = FUN_653d5800(), pWVar2 == (LPCWSTR)0x0)) &&
       (DAT_653e0f20 != (int *)0x0)))) && (param_1 != (byte *)0x0)) {
    uVar4 = 0xffffffff;
    pbVar6 = (byte *)*DAT_653e0f20;
    pbVar8 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    pWVar5 = (LPWSTR)(~uVar4 - 1);
    piVar7 = DAT_653e0f20;
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
           (pWVar3 = FUN_653d57c0(pbVar6,param_1,pWVar5), pWVar3 == (LPWSTR)0x0)) {
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



undefined4 FUN_653d1350(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_653d2250();
  DAT_653dd978 = TlsAlloc();
  if (DAT_653dd978 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_653d4720(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_653dd978,lpTlsValue);
      if (BVar1 != 0) {
        FUN_653d13e0((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



void FUN_653d13b0(void)

{
  FUN_653d2280();
  if (DAT_653dd978 != 0xffffffff) {
    TlsFree(DAT_653dd978);
    DAT_653dd978 = 0xffffffff;
  }
  return;
}



void __cdecl FUN_653d13e0(int param_1)

{
  *(undefined **)(param_1 + 0x50) = &DAT_653dfc50;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return;
}



DWORD * FUN_653d1400(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = (DWORD *)TlsGetValue(DAT_653dd978);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_653d4720(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_653dd978,lpTlsValue);
      if (BVar1 != 0) {
        FUN_653d13e0((int)lpTlsValue);
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



void __cdecl FUN_653d1480(undefined *param_1)

{
  if (DAT_653dd978 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = (undefined *)TlsGetValue(DAT_653dd978), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_653d03a0(*(undefined **)(param_1 + 0x44));
      }
      FUN_653d03a0(param_1);
    }
    TlsSetValue(DAT_653dd978,(LPVOID)0x0);
    return;
  }
  return;
}



void FUN_653d1520(void)

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
  
  puVar2 = (undefined4 *)FUN_653d0b40(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_653e14a0 = 0x20;
  DAT_653e13a0 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(undefined1 *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(undefined1 *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_653e13a0 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UStack_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + UStack_48);
    if (0x7ff < (int)UStack_48) {
      UStack_48 = 0x800;
    }
    if ((int)DAT_653e14a0 < (int)UStack_48) {
      piVar6 = &DAT_653e13a4;
      do {
        puVar2 = (undefined4 *)FUN_653d0b40(0x480);
        if (puVar2 == (undefined4 *)0x0) {
          UStack_48 = DAT_653e14a0;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_653e14a0 = DAT_653e14a0 + 0x20;
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
      } while ((int)DAT_653e14a0 < (int)UStack_48);
    }
    uVar7 = 0;
    if (0 < (int)UStack_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_653e13a0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_653e13a0 + iVar5 * 9;
    if (DAT_653e13a0[iVar5 * 9] == -1) {
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
        goto LAB_653d170e;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_653d170e;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_653d170e;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_653d170e:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_653e14a0);
      return;
    }
  } while( true );
}



void FUN_653d1730(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar1 = &DAT_653e13a0;
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
      FUN_653d03a0((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x653e14a0);
  return;
}



void FUN_653d1790(void)

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
  cVar2 = *DAT_653e0ee8;
  pcVar7 = DAT_653e0ee8;
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
  piVar3 = (int *)FUN_653d0b40(iVar8 * 4 + 4);
  DAT_653e0f20 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_653e0ee8;
  local_4 = piVar3;
  pcVar7 = DAT_653e0ee8;
  do {
    if (cVar2 == '\0') {
      FUN_653d03a0(DAT_653e0ee8);
      DAT_653e0ee8 = (char *)0x0;
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
      iVar8 = FUN_653d0b40(uVar4);
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

void FUN_653d1880(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iStack_8;
  int iStack_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_653e0f48,0x104);
  _DAT_653e0f30 = &DAT_653e0f48;
  pbVar2 = DAT_653e24cc;
  if (*DAT_653e24cc == 0) {
    pbVar2 = &DAT_653e0f48;
  }
  FUN_653d1920(pbVar2,(undefined4 *)0x0,(byte *)0x0,&iStack_8,&iStack_4);
  puVar1 = (undefined4 *)FUN_653d0b40(iStack_4 + iStack_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_653d1920(pbVar2,puVar1,(byte *)(puVar1 + iStack_8),&iStack_8,&iStack_4);
  _DAT_653e0f18 = puVar1;
  _DAT_653e0f14 = iStack_8 + -1;
  return;
}



void __cdecl FUN_653d1920(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_653e1050 + bVar2 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)param_5 + 0x653e1051) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_653d19f9;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_653d19f9:
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
          if ((*(byte *)((int)&DAT_653e1050 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_653d1af5;
        }
        if ((*(byte *)((int)&DAT_653e1050 + bVar2 + 1) & 4) != 0) {
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
LAB_653d1af5:
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

undefined4 __cdecl FUN_653d1b30(int param_1)

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
  
  FUN_653d2300(0x19);
  CodePage = FUN_653d1d50(param_1);
  if (CodePage == DAT_653e1154) {
    FUN_653d2380(0x19);
    return 0;
  }
  if (CodePage != 0) {
    iVar10 = 0;
    pUVar5 = &DAT_653dd9b0;
    do {
      if (*pUVar5 == CodePage) {
        puVar14 = &DAT_653e1050;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)puVar14 = 0;
        uVar7 = 0;
        iVar10 = iVar10 * 0x30;
        pbVar12 = (byte *)(iVar10 + 0x653dd9c0);
        do {
          bVar3 = *pbVar12;
          for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
              pbVar13 = pbVar13 + 2) {
            uVar8 = (uint)*pbVar13;
            if (uVar8 <= bVar3) {
              bVar4 = (&DAT_653dd9a8)[uVar7];
              do {
                pbVar2 = (byte *)((int)&DAT_653e1050 + uVar8 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= bVar3);
            }
            bVar3 = pbVar13[2];
          }
          uVar7 = uVar7 + 1;
          pbVar12 = pbVar12 + 8;
        } while (uVar7 < 4);
        DAT_653e1154 = CodePage;
        DAT_653e1158 = FUN_653d1da0(CodePage);
        _DAT_653e1160 = *(undefined4 *)(iVar10 + 0x653dd9b4);
        _DAT_653e1164 = *(undefined4 *)(iVar10 + 0x653dd9b8);
        _DAT_653e1168 = *(undefined4 *)(iVar10 + 0x653dd9bc);
        FUN_653d2380(0x19);
        return 0;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar10 = iVar10 + 1;
    } while (pUVar5 < &DAT_653ddaa0);
    BVar6 = GetCPInfo(CodePage,&local_14);
    if (BVar6 == 1) {
      puVar14 = &DAT_653e1050;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      if (local_14.MaxCharSize < 2) {
        DAT_653e1154 = 0;
        DAT_653e1158 = 0;
      }
      else {
        if (local_14.LeadByte[0] != '\0') {
          pBVar11 = local_14.LeadByte + 1;
          do {
            bVar3 = *pBVar11;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              *(byte *)((int)&DAT_653e1050 + uVar7 + 1) =
                   *(byte *)((int)&DAT_653e1050 + uVar7 + 1) | 4;
            }
            pBVar1 = pBVar11 + 1;
            pBVar11 = pBVar11 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          *(byte *)((int)&DAT_653e1050 + uVar7 + 1) = *(byte *)((int)&DAT_653e1050 + uVar7 + 1) | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_653e1154 = CodePage;
        DAT_653e1158 = FUN_653d1da0(CodePage);
      }
      _DAT_653e1160 = 0;
      _DAT_653e1164 = 0;
      _DAT_653e1168 = 0;
      FUN_653d2380(0x19);
      return 0;
    }
    if (DAT_653e116c == 0) {
      FUN_653d2380(0x19);
      return 0xffffffff;
    }
  }
  FUN_653d1e00();
  FUN_653d2380(0x19);
  return 0;
}



int __cdecl FUN_653d1d50(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_653e116c = 1;
                    // WARNING: Could not recover jumptable at 0x653d1d6d. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_653e116c = 1;
                    // WARNING: Could not recover jumptable at 0x653d1d82. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_653e1230;
  }
  DAT_653e116c = (uint)bVar2;
  return param_1;
}



undefined4 __cdecl FUN_653d1da0(undefined4 param_1)

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

void FUN_653d1e00(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_653e1050;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_653e1154 = 0;
  DAT_653e1158 = 0;
  _DAT_653e1160 = 0;
  _DAT_653e1164 = 0;
  _DAT_653e1168 = 0;
  return;
}



void FUN_653d1e30(void)

{
  FUN_653d1b30(-3);
  return;
}



LPSTR FUN_653d1e40(void)

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
  if (DAT_653e1174 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_653e1174 = 2;
    }
    else {
      DAT_653e1174 = 1;
    }
  }
  if (DAT_653e1174 == 1) {
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
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_653d0b40(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_653d03a0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_653e1174 == 2) &&
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
    pCVar7 = (LPSTR)FUN_653d0b40((uint)pCVar9);
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



undefined4 FUN_653d1fa0(void)

{
  undefined **ppuVar1;
  
  DAT_653e1384 = HeapCreate(0,0x1000,0);
  if (DAT_653e1384 == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_653d2480();
  if (ppuVar1 == (undefined **)0x0) {
    HeapDestroy(DAT_653e1384);
    return 0;
  }
  return 1;
}



void FUN_653d1fe0(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_653ddbf8;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_653ddbf8);
  HeapDestroy(DAT_653e1384);
  return;
}



void __cdecl FUN_653d2020(undefined4 param_1)

{
  DAT_653e0ef4 = param_1;
  return;
}



void FUN_653d2030(void)

{
  if ((DAT_653e0ef0 == 1) || ((DAT_653e0ef0 == 0 && (DAT_653e0ef4 == 1)))) {
    FUN_653d2070(0xfc);
    if (DAT_653e1178 != (code *)0x0) {
      (*DAT_653e1178)();
    }
    FUN_653d2070(0xff);
  }
  return;
}



void __cdecl FUN_653d2070(int param_1)

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
  
  piVar2 = &DAT_653ddaa8;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_653ddb38);
  if (param_1 == (&DAT_653ddaa8)[iVar8 * 2]) {
    if ((DAT_653e0ef0 == 1) || ((DAT_653e0ef0 == 0 && (DAT_653e0ef4 == 1)))) {
      if ((DAT_653e13a0 == 0) ||
         (hFile = *(HANDLE *)(DAT_653e13a0 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x653ddaac);
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
      pcVar7 = *(char **)(iVar8 * 8 + 0x653ddaac);
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
      FUN_653d3180(acStack_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



void FUN_653d2250(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb7c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb6c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb5c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb3c);
  return;
}



void FUN_653d2280(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_653ddb38;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_653ddb7c)) && (ppuVar1 != &PTR_DAT_653ddb6c)) &&
       ((ppuVar1 != &PTR_DAT_653ddb5c && (ppuVar1 != &PTR_DAT_653ddb3c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_653d03a0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x653ddbf8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb5c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb6c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb7c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_653ddb3c);
  return;
}



void __cdecl FUN_653d2300(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((&DAT_653ddb38)[param_1] == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_653d0b40(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_653d2300(0x11);
    if ((&DAT_653ddb38)[param_1] == 0) {
      InitializeCriticalSection(lpCriticalSection);
      (&DAT_653ddb38)[param_1] = lpCriticalSection;
    }
    else {
      FUN_653d03a0((undefined *)lpCriticalSection);
    }
    FUN_653d2380(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_653ddb38)[param_1]);
  return;
}



void __cdecl FUN_653d2380(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_653ddb38)[param_1]);
  return;
}



void __cdecl FUN_653d23a0(uint param_1)

{
  if ((0x653dd6f7 < param_1) && (param_1 < 0x653dd959)) {
    FUN_653d2300(((int)(param_1 + 0x9ac22908) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_653d23e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_653d2300(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



void __cdecl FUN_653d2410(uint param_1)

{
  if ((0x653dd6f7 < param_1) && (param_1 < 0x653dd959)) {
    FUN_653d2380(((int)(param_1 + 0x9ac22908) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_653d2450(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_653d2380(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



undefined ** FUN_653d2480(void)

{
  bool bVar1;
  undefined4 *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **lpMem;
  undefined4 *puVar5;
  
  if (DAT_653ddc08 == -1) {
    lpMem = &PTR_LOOP_653ddbf8;
  }
  else {
    lpMem = (undefined **)HeapAlloc(DAT_653e1384,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = (undefined4 *)VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (undefined4 *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_653ddbf8) {
        if (PTR_LOOP_653ddbf8 == (undefined *)0x0) {
          PTR_LOOP_653ddbf8 = (undefined *)&PTR_LOOP_653ddbf8;
        }
        if (PTR_PTR_LOOP_653ddbfc == (undefined *)0x0) {
          PTR_PTR_LOOP_653ddbfc = (undefined *)&PTR_LOOP_653ddbf8;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_653ddbf8;
        lpMem[1] = PTR_PTR_LOOP_653ddbfc;
        PTR_PTR_LOOP_653ddbfc = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_653ddbf8) {
    HeapFree(DAT_653e1384,0,lpMem);
  }
  return (undefined **)0x0;
}



void __cdecl FUN_653d25f0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_PTR_LOOP_653dfc18 == param_1) {
    PTR_PTR_LOOP_653dfc18 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_653ddbf8) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_653e1384,0,param_1);
    return;
  }
  DAT_653ddc08 = 0xffffffff;
  return;
}



void __cdecl FUN_653d2650(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)PTR_PTR_LOOP_653ddbfc;
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
            DAT_653e11e0 = DAT_653e11e0 + -1;
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
          FUN_653d25f0(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_PTR_LOOP_653ddbfc) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_653d2720(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_653ddbf8;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_653ddbf8) {
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



void __cdecl FUN_653d2780(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_653e11e0 = DAT_653e11e0 + 1, DAT_653e11e0 == 0x20)) {
    FUN_653d2650(0x10);
  }
  return;
}



int * __cdecl FUN_653d27e0(uint param_1)

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
  
  local_4 = (int *)PTR_PTR_LOOP_653dfc18;
  do {
    if (local_4[4] != -1) {
      puVar10 = (uint *)local_4[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)local_4) >> 3) * 0x1000 + local_4[4]);
      for (; puVar10 < local_4 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_653d2a20(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_653dfc18 = (undefined *)local_4;
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
          piVar5 = (int *)FUN_653d2a20(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_PTR_LOOP_653dfc18 = (undefined *)local_4;
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
  } while (local_4 != (int *)PTR_PTR_LOOP_653dfc18);
  ppuVar7 = &PTR_LOOP_653ddbf8;
  while ((ppuVar7[4] == (undefined *)0xffffffff || (ppuVar7[3] == (undefined *)0x0))) {
    ppuVar7 = (undefined **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_653ddbf8) {
      ppuVar7 = FUN_653d2480();
      if (ppuVar7 == (undefined **)0x0) {
        return (int *)0x0;
      }
      piVar8 = (int *)ppuVar7[4];
      *(char *)(piVar8 + 2) = (char)param_1;
      PTR_PTR_LOOP_653dfc18 = (undefined *)ppuVar7;
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
  PTR_PTR_LOOP_653dfc18 = (undefined *)ppuVar7;
  ppuVar7[3] = (undefined *)(-(uint)bVar11 & (uint)ppuVar6);
  *(char *)(piVar8 + 2) = (char)param_1;
  ppuVar7[2] = (undefined *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar8[1] = piVar8[1] - param_1;
  *piVar8 = (int)piVar8 + param_1 + 8;
  return piVar8 + 0x40;
}



int __cdecl FUN_653d2a20(int *param_1,uint param_2,uint param_3)

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
            goto LAB_653d2b6f;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_653d2b76;
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
LAB_653d2b6f:
            param_1[1] = 0;
          }
LAB_653d2b76:
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



undefined4 __cdecl FUN_653d2ba0(int param_1,int *param_2,byte *param_3,uint param_4)

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



// Library Function - Single Match
//  _abort
// 
// Library: Visual Studio 1998 Release

void __cdecl _abort(void)

{
  FUN_653d2070(10);
  FUN_653d2f30((DWORD *)0x16);
                    // WARNING: Subroutine does not return
  __exit(3);
}



int __cdecl FUN_653d2c90(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_653d2d90(0);
    return iVar1;
  }
  FUN_653d23a0((uint)param_1);
  iVar1 = FUN_653d2cd0(param_1);
  FUN_653d2410((uint)param_1);
  return iVar1;
}



int __cdecl FUN_653d2cd0(int *param_1)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_653d2d10(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((param_1[3] & 0x4000U) != 0) {
    DVar2 = FUN_653d5880(param_1[4]);
    return -(uint)(DVar2 != 0);
  }
  return 0;
}



undefined4 __cdecl FUN_653d2d10(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar4 = *param_1 - param_1[2];
    if (0 < (int)uVar4) {
      uVar2 = FUN_653d5920(param_1[4],(char *)param_1[2],uVar4);
      uVar1 = param_1[3];
      if (uVar2 == uVar4) {
        if ((uVar1 & 0x80) != 0) {
          param_1[1] = 0;
          param_1[3] = uVar1 & 0xfffffffd;
          *param_1 = param_1[2];
          return 0;
        }
      }
      else {
        uVar3 = 0xffffffff;
        param_1[3] = uVar1 | 0x20;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar3;
}



int __cdecl FUN_653d2d90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  iVar3 = 0;
  FUN_653d2300(2);
  if (0 < DAT_653e24c0) {
    do {
      iVar2 = *(int *)(DAT_653e14a4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_653d23e0(iVar4,iVar2);
        piVar1 = *(int **)(DAT_653e14a4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_653d2cd0(piVar1);
            if (iVar2 != -1) {
              local_4 = local_4 + 1;
            }
          }
          else if (((param_1 == 0) && ((piVar1[3] & 2U) != 0)) &&
                  (iVar2 = FUN_653d2cd0(piVar1), iVar2 == -1)) {
            iVar3 = -1;
          }
        }
        FUN_653d2450(iVar4,*(int *)(DAT_653e14a4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_653e24c0);
  }
  FUN_653d2380(2);
  if (param_1 != 1) {
    local_4 = iVar3;
  }
  return local_4;
}



undefined4 __cdecl FUN_653d2e50(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_3 != 4) &&
     (((param_4 < 2 || (0x7fffffff < param_4)) || ((param_3 != 0 && (param_3 != 0x40)))))) {
    return 0xffffffff;
  }
  uVar2 = param_4 & 0xfffffffe;
  FUN_653d23a0((uint)param_1);
  FUN_653d2d10(param_1);
  FUN_653d5bb0(param_1);
  uVar1 = param_1[3] & 0xffffc2f3;
  param_1[3] = uVar1;
  if ((param_3 & 4) == 0) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)FUN_653d0b40(uVar2);
      if (param_2 == (int *)0x0) {
        DAT_653e0f44 = DAT_653e0f44 + 1;
        FUN_653d2410((uint)param_1);
        return 0xffffffff;
      }
      uVar1 = param_1[3] | 0x408;
    }
    else {
      uVar1 = uVar1 | 0x500;
    }
    param_1[3] = uVar1;
  }
  else {
    param_2 = param_1 + 5;
    param_1[3] = uVar1 | 4;
    uVar2 = 2;
  }
  param_1[6] = uVar2;
  param_1[2] = (int)param_2;
  *param_1 = (int)param_2;
  param_1[1] = 0;
  FUN_653d2410((uint)param_1);
  return 0;
}



undefined4 __cdecl FUN_653d2f30(DWORD *param_1)

{
  DWORD *pDVar1;
  bool bVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  DWORD local_4;
  
  pDVar3 = param_1;
  bVar2 = false;
  pDVar4 = param_1;
  switch(param_1) {
  case (DWORD *)0x2:
    puVar9 = &DAT_653e11e4;
    bVar2 = true;
    pcVar8 = DAT_653e11e4;
    break;
  default:
    return 0xffffffff;
  case (DWORD *)0x4:
  case (DWORD *)0x8:
  case (DWORD *)0xb:
    pDVar4 = FUN_653d1400();
    uVar5 = FUN_653d3140((int)param_1,pDVar4[0x14]);
    puVar9 = (undefined4 *)(uVar5 + 8);
    pcVar8 = (code *)*puVar9;
    break;
  case (DWORD *)0xf:
    puVar9 = &DAT_653e11f0;
    bVar2 = true;
    pcVar8 = DAT_653e11f0;
    break;
  case (DWORD *)0x15:
    puVar9 = &DAT_653e11e8;
    bVar2 = true;
    pcVar8 = DAT_653e11e8;
    break;
  case (DWORD *)0x16:
    puVar9 = &DAT_653e11ec;
    bVar2 = true;
    pcVar8 = DAT_653e11ec;
  }
  if (bVar2) {
    FUN_653d2300(1);
  }
  if (pcVar8 == (code *)0x1) {
    if (!bVar2) {
      return 0;
    }
    FUN_653d2380(1);
    return 0;
  }
  if (pcVar8 == (code *)0x0) {
    if (bVar2) {
      FUN_653d2380(1);
    }
                    // WARNING: Subroutine does not return
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    pDVar1 = (DWORD *)pDVar4[0x15];
    bVar10 = param_1 == (DWORD *)0x8;
    pDVar4[0x15] = 0;
    param_1 = pDVar1;
    if (bVar10) {
      local_4 = pDVar4[0x16];
      pDVar4[0x16] = 0x8c;
      goto LAB_653d3063;
    }
  }
  else {
LAB_653d3063:
    if (pDVar3 == (DWORD *)0x8) {
      if (DAT_653dfcc8 < DAT_653dfccc + DAT_653dfcc8) {
        iVar7 = DAT_653dfcc8 * 0xc;
        iVar6 = DAT_653dfcc8;
        do {
          iVar6 = iVar6 + 1;
          *(undefined4 *)(pDVar4[0x14] + 8 + iVar7) = 0;
          iVar7 = iVar7 + 0xc;
        } while (iVar6 < DAT_653dfccc + DAT_653dfcc8);
      }
      goto LAB_653d30a8;
    }
  }
  *puVar9 = 0;
LAB_653d30a8:
  if (bVar2) {
    FUN_653d2380(1);
  }
  if (pDVar3 == (DWORD *)0x8) {
    (*pcVar8)(8,pDVar4[0x16]);
  }
  else {
    (*pcVar8)(pDVar3);
    if ((pDVar3 != (DWORD *)0xb) && (pDVar3 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar4[0x15] = (DWORD)param_1;
  if (pDVar3 == (DWORD *)0x8) {
    pDVar4[0x16] = local_4;
  }
  return 0;
}



uint __cdecl FUN_653d3140(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_653dfcd4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_653dfcd4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



int __cdecl FUN_653d3180(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_653e11f8 != (FARPROC)0x0) {
LAB_653d31d0:
    if (DAT_653e11fc != (FARPROC)0x0) {
      iVar1 = (*DAT_653e11fc)();
    }
    if ((iVar1 != 0) && (DAT_653e1200 != (FARPROC)0x0)) {
      iVar1 = (*DAT_653e1200)(iVar1);
    }
    iVar1 = (*DAT_653e11f8)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_653e11f8 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_653e11f8 != (FARPROC)0x0) {
      DAT_653e11fc = GetProcAddress(hModule,"GetActiveWindow");
      DAT_653e1200 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_653d31d0;
    }
  }
  return 0;
}



char * __cdecl FUN_653d3210(uint param_1,char *param_2,uint param_3)

{
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    FUN_653d3250(param_1,param_2,10,1);
    return param_2;
  }
  FUN_653d3250(param_1,param_2,param_3,0);
  return param_2;
}



void __cdecl FUN_653d3250(uint param_1,char *param_2,uint param_3,int param_4)

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



// Library Function - Single Match
//  _strncat
// 
// Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release

char * __cdecl _strncat(char *_Dest,char *_Source,size_t _Count)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (_Count != 0) {
    uVar4 = (uint)_Dest & 3;
    puVar5 = (uint *)_Dest;
    while (uVar4 != 0) {
      uVar4 = *puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      if ((byte)uVar4 == 0) goto LAB_653d331b;
      uVar4 = (uint)puVar5 & 3;
    }
    do {
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + 1;
      } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
      uVar4 = *puVar6;
      if ((char)uVar4 == '\0') goto LAB_653d332b;
      if ((char)(uVar4 >> 8) == '\0') {
        puVar6 = (uint *)((int)puVar6 + 1);
        goto LAB_653d332b;
      }
      if ((uVar4 & 0xff0000) == 0) {
        puVar6 = (uint *)((int)puVar6 + 2);
        goto LAB_653d332b;
      }
    } while ((uVar4 & 0xff000000) != 0);
LAB_653d331b:
    puVar6 = (uint *)((int)puVar5 + -1);
LAB_653d332b:
    if (((uint)_Source & 3) == 0) {
      uVar3 = _Count >> 2;
    }
    else {
      do {
        bVar1 = (byte)*(uint *)_Source;
        uVar4 = (uint)bVar1;
        _Source = (char *)((int)_Source + 1);
        if (bVar1 == 0) goto LAB_653d337a;
        *(byte *)puVar6 = bVar1;
        puVar6 = (uint *)((int)puVar6 + 1);
        _Count = _Count - 1;
        if (_Count == 0) goto LAB_653d3370;
      } while (((uint)_Source & 3) != 0);
      uVar3 = _Count >> 2;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar2 = *(uint *)_Source;
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar4 == '\0') {
LAB_653d337a:
          *(byte *)puVar6 = (byte)uVar4;
          return _Dest;
        }
        if ((char)(uVar4 >> 8) == '\0') {
          *(short *)puVar6 = (short)uVar4;
          return _Dest;
        }
        if ((uVar4 & 0xff0000) == 0) {
          *(short *)puVar6 = (short)uVar4;
          *(byte *)((int)puVar6 + 2) = 0;
          return _Dest;
        }
        if ((uVar4 & 0xff000000) == 0) {
          *puVar6 = uVar4;
          return _Dest;
        }
      }
      *puVar6 = uVar4;
      puVar6 = puVar6 + 1;
    }
    for (_Count = _Count & 3; _Count != 0; _Count = _Count - 1) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(byte *)puVar6 = (byte)uVar4;
      puVar6 = (uint *)((int)puVar6 + 1);
      if ((byte)uVar4 == 0) {
        return _Dest;
      }
    }
LAB_653d3370:
    *(byte *)puVar6 = (byte)_Count;
  }
  return _Dest;
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
        goto joined_r0x653d342e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_653d346b;
        goto LAB_653d34d9;
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
joined_r0x653d34d5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_653d34d9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_653d346b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x653d34d5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x653d34d5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x653d34d5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x653d342e:
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
LAB_653d346b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



undefined4 __cdecl FUN_653d34f0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_653e1208 != (code *)0x0) {
    iVar1 = (*DAT_653e1208)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



void FUN_653d3510(void)

{
  return;
}



// Library Function - Single Match
//  __setdefaultprecision
// 
// Library: Visual Studio 1998 Release

void __setdefaultprecision(void)

{
  FUN_653d5dc0((void *)0x10000,0x30000);
  return;
}



// WARNING: Removing unreachable block (ram,0x653d35e1)

undefined4 FUN_653d35a0(void)

{
  return 0;
}



void FUN_653d35f0(void)

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
  FUN_653d35a0();
  return;
}



void __cdecl FUN_653d3620(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = FUN_653d5fb0((int)*param_1);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_653dfe40 < 2) {
        uVar3 = (byte)PTR_DAT_653dfe50[*param_1 * 2] & 4;
      }
      else {
        uVar3 = FUN_653d5f10((int)*param_1,4);
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_653dfe44;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



undefined1 * __cdecl FUN_653d3770(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int local_28 [4];
  char local_18 [24];
  
  FUN_653d6700(*param_1,param_1[1],local_28,local_18);
  FUN_653d6660(param_2 + (uint)(local_28[0] == 0x2d) + (uint)(0 < param_3),param_3 + 1,(int)local_28
              );
  FUN_653d37f0(param_2,param_3,param_4,local_28,'\0');
  return param_2;
}



undefined1 * __cdecl
FUN_653d37f0(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_5 != '\0') {
    FUN_653d3b50(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  if (0 < param_2) {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_653dfe44;
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



char * __cdecl FUN_653d38f0(undefined4 *param_1,char *param_2,uint param_3)

{
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_653d6700(*param_1,param_1[1],&local_28,local_18);
  FUN_653d6660(param_2 + (local_28 == 0x2d),local_24 + param_3,(int)&local_28);
  FUN_653d3960(param_2,param_3,&local_28,'\0');
  return param_2;
}



char * __cdecl FUN_653d3960(char *param_1,uint param_2,int *param_3,char param_4)

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
    FUN_653d3b50(pcVar4,1);
    *pcVar4 = '0';
    pcVar4 = pcVar4 + 1;
  }
  else {
    pcVar4 = pcVar4 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_653d3b50(pcVar4,1);
    *pcVar4 = DAT_653dfe44;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (SBORROW4(param_2,-iVar1) == (int)(param_2 + iVar1) < 0)) {
        param_2 = -iVar1;
      }
      FUN_653d3b50(pcVar4 + 1,param_2);
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



void __cdecl FUN_653d3a20(undefined4 *param_1,char *param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  char local_18 [24];
  
  FUN_653d6700(*param_1,param_1[1],&local_28,local_18);
  iVar1 = local_24 + -1;
  pcVar3 = param_2 + (local_28 == 0x2d);
  FUN_653d6660(pcVar3,param_3,(int)&local_28);
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
    FUN_653d3960(param_2,param_3,&local_28,'\x01');
    return;
  }
  FUN_653d37f0(param_2,param_3,param_4,&local_28,'\x01');
  return;
}



void __cdecl FUN_653d3b50(char *param_1,int param_2)

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
    FUN_653d6850((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,~uVar2);
  }
  return;
}



undefined4 __cdecl FUN_653d3b80(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  
  bVar2 = FUN_653d6ba0(param_1[4]);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    if (param_1 == (undefined4 *)&DAT_653dd718) {
      iVar4 = 0;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_653dd738) {
        return 0;
      }
      iVar4 = 1;
    }
    DAT_653e0f44 = DAT_653e0f44 + 1;
    if ((param_1[3] & 0x10c) == 0) {
      if ((&DAT_653e1210)[iVar4] == 0) {
        iVar3 = FUN_653d0b40(0x1000);
        (&DAT_653e1210)[iVar4] = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
      }
      uVar1 = (&DAT_653e1210)[iVar4];
      param_1[6] = 0x1000;
      param_1[2] = uVar1;
      *param_1 = uVar1;
      param_1[1] = 0x1000;
      param_1[3] = param_1[3] | 0x1102;
      return 1;
    }
  }
  return 0;
}



void __cdecl FUN_653d3c20(int param_1,int *param_2)

{
  if ((param_1 != 0) && ((param_2[3] & 0x1000U) != 0)) {
    FUN_653d2d10(param_2);
    param_2[6] = 0;
    param_2[3] = param_2[3] & 0xffffeeff;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}



int __cdecl FUN_653d3c60(int *param_1,char *param_2,undefined4 *param_3)

{
  WCHAR WVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  undefined4 uVar5;
  WCHAR *pWVar6;
  LPSTR pCVar7;
  char cVar8;
  LPSTR pCVar9;
  LPSTR pCVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  uint local_24c;
  WCHAR *local_248;
  int local_244;
  int local_240;
  char local_23a;
  char local_239;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  int local_228;
  int local_224;
  int local_220;
  uint local_21c;
  undefined4 local_218;
  CHAR local_214 [4];
  undefined4 local_210;
  undefined4 local_20c;
  uint local_204;
  undefined1 local_200 [511];
  CHAR CStack_1;
  
  local_220 = 0;
  pCVar10 = (LPSTR)0x0;
  local_240 = 0;
  cVar8 = *param_2;
  param_2 = param_2 + 1;
  local_21c = CONCAT31(local_21c._1_3_,cVar8);
  do {
    if ((cVar8 == '\0') || (local_240 < 0)) {
      return local_240;
    }
    if ((cVar8 < ' ') || ('x' < cVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"?IsProcessorFeaturePresent"[cVar8 + 0x19] & 0xf;
    }
    local_220 = (int)(char)(&DAT_653c34f0)[uVar2 * 8 + local_220] >> 4;
    switch(local_220) {
    case 0:
switchD_653d3cdd_caseD_0:
      local_230 = 0;
      if ((PTR_DAT_653dfe50[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
        FUN_653d45f0((int)cVar8,param_1,&local_240);
        cVar8 = *param_2;
        param_2 = param_2 + 1;
      }
      FUN_653d45f0((int)cVar8,param_1,&local_240);
      break;
    case 1:
      local_218 = 0;
      local_228 = 0;
      local_234 = 0;
      local_238 = 0;
      local_24c = 0;
      local_244 = -1;
      local_230 = 0;
      break;
    case 2:
      switch(cVar8) {
      case ' ':
        local_24c = local_24c | 2;
        break;
      case '#':
        local_24c = local_24c | 0x80;
        break;
      case '+':
        local_24c = local_24c | 1;
        break;
      case '-':
        local_24c = local_24c | 4;
        break;
      case '0':
        local_24c = local_24c | 8;
      }
      break;
    case 3:
      if (cVar8 == '*') {
        local_234 = FUN_653d46c0((int *)&param_3);
        if (local_234 < 0) {
          local_24c = local_24c | 4;
          local_234 = -local_234;
        }
      }
      else {
        local_234 = cVar8 + -0x30 + local_234 * 10;
      }
      break;
    case 4:
      local_244 = 0;
      break;
    case 5:
      if (cVar8 == '*') {
        local_244 = FUN_653d46c0((int *)&param_3);
        if (local_244 < 0) {
          local_244 = -1;
        }
      }
      else {
        local_244 = cVar8 + -0x30 + local_244 * 10;
      }
      break;
    case 6:
      switch(cVar8) {
      case 'I':
        if ((*param_2 != '6') || (param_2[1] != '4')) {
          local_220 = 0;
          goto switchD_653d3cdd_caseD_0;
        }
        param_2 = param_2 + 2;
        local_24c = local_24c | 0x8000;
        break;
      case 'h':
        local_24c = local_24c | 0x20;
        break;
      case 'l':
        local_24c = local_24c | 0x10;
        break;
      case 'w':
        local_24c = local_24c | 0x800;
      }
      break;
    case 7:
      switch(cVar8) {
      case 'C':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 'c':
        if ((local_24c & 0x810) == 0) {
          uVar5 = FUN_653d46c0((int *)&param_3);
          local_200[0] = (char)uVar5;
          pCVar10 = (LPSTR)0x1;
        }
        else {
          uVar5 = FUN_653d4700(&param_3);
          pCVar10 = FUN_653d6bd0(local_200,(WCHAR)uVar5);
          if ((int)pCVar10 < 0) {
            local_248 = (WCHAR *)local_200;
            local_228 = 1;
            break;
          }
        }
        local_248 = (WCHAR *)local_200;
        break;
      case 'E':
      case 'G':
        local_218 = 1;
        cVar8 = cVar8 + ' ';
      case 'e':
      case 'f':
      case 'g':
        local_248 = (WCHAR *)local_200;
        if (local_244 < 0) {
          local_244 = 6;
        }
        else if ((local_244 == 0) && (cVar8 == 'g')) {
          local_244 = 1;
        }
        local_210 = *param_3;
        local_20c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_653dfc20)(&local_210,local_200,(int)cVar8,local_244,local_218);
        if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
          (*(code *)PTR___fptrap_653dfc2c)(local_200);
        }
        if ((cVar8 == 'g') && ((local_24c & 0x80) == 0)) {
          (*(code *)PTR___fptrap_653dfc24)(local_200);
        }
        uVar2 = local_24c | 0x40;
        if (local_200[0] == '-') {
          local_248 = (WCHAR *)(local_200 + 1);
          uVar2 = local_24c | 0x140;
        }
        local_24c = uVar2;
        uVar2 = 0xffffffff;
        pWVar6 = local_248;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          WVar1 = *pWVar6;
          pWVar6 = (WCHAR *)((int)pWVar6 + 1);
        } while ((char)WVar1 != '\0');
        pCVar10 = (LPSTR)(~uVar2 - 1);
        break;
      case 'S':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 's':
        iVar11 = 0x7fffffff;
        if (local_244 != -1) {
          iVar11 = local_244;
        }
        local_248 = (WCHAR *)FUN_653d46c0((int *)&param_3);
        if ((local_24c & 0x810) == 0) {
          pWVar6 = local_248;
          if (local_248 == (WCHAR *)0x0) {
            pWVar6 = DAT_653dfc38;
            local_248 = DAT_653dfc38;
          }
          for (; (iVar11 != 0 && (iVar11 = iVar11 + -1, (char)*pWVar6 != '\0'));
              pWVar6 = (WCHAR *)((int)pWVar6 + 1)) {
          }
          pCVar10 = (LPSTR)((int)pWVar6 - (int)local_248);
        }
        else {
          if (local_248 == (WCHAR *)0x0) {
            local_248 = DAT_653dfc3c;
          }
          local_230 = 1;
          for (pWVar6 = local_248; (iVar11 != 0 && (iVar11 = iVar11 + -1, *pWVar6 != L'\0'));
              pWVar6 = pWVar6 + 1) {
          }
          pCVar10 = (LPSTR)((int)pWVar6 - (int)local_248 >> 1);
        }
        break;
      case 'X':
        goto switchD_653d3ef1_caseD_58;
      case 'Z':
        psVar3 = (short *)FUN_653d46c0((int *)&param_3);
        if ((psVar3 == (short *)0x0) ||
           (local_248 = *(WCHAR **)(psVar3 + 2), local_248 == (WCHAR *)0x0)) {
          uVar2 = 0xffffffff;
          local_248 = DAT_653dfc38;
          pWVar6 = DAT_653dfc38;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            WVar1 = *pWVar6;
            pWVar6 = (WCHAR *)((int)pWVar6 + 1);
          } while ((char)WVar1 != '\0');
          pCVar10 = (LPSTR)(~uVar2 - 1);
        }
        else if ((local_24c & 0x800) == 0) {
          pCVar10 = (LPSTR)(int)*psVar3;
          local_230 = 0;
        }
        else {
          local_230 = 1;
          pCVar10 = (LPSTR)((uint)(int)*psVar3 >> 1);
        }
        break;
      case 'd':
      case 'i':
        local_22c = 10;
        local_24c = local_24c | 0x40;
        goto LAB_653d4227;
      case 'n':
        piVar4 = (int *)FUN_653d46c0((int *)&param_3);
        if ((local_24c & 0x20) == 0) {
          local_228 = 1;
          *piVar4 = local_240;
        }
        else {
          local_228 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_240;
        }
        break;
      case 'o':
        local_22c = 8;
        if ((local_24c & 0x80) != 0) {
          local_24c = local_24c | 0x200;
        }
        goto LAB_653d4227;
      case 'p':
        local_244 = 8;
switchD_653d3ef1_caseD_58:
        local_224 = 7;
LAB_653d41e2:
        local_22c = 0x10;
        if ((local_24c & 0x80) != 0) {
          local_23a = '0';
          local_239 = (char)local_224 + 'Q';
          local_238 = 2;
        }
        goto LAB_653d4227;
      case 'u':
        local_22c = 10;
LAB_653d4227:
        if ((local_24c & 0x8000) == 0) {
          if ((local_24c & 0x20) == 0) {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_653d46c0((int *)&param_3);
              uVar12 = (ulonglong)uVar2;
            }
            else {
              iVar11 = FUN_653d46c0((int *)&param_3);
              uVar12 = (ulonglong)iVar11;
            }
          }
          else if ((local_24c & 0x40) == 0) {
            uVar2 = FUN_653d46c0((int *)&param_3);
            uVar12 = (ulonglong)uVar2 & 0xffffffff0000ffff;
          }
          else {
            uVar5 = FUN_653d46c0((int *)&param_3);
            uVar12 = (ulonglong)(int)(short)uVar5;
          }
        }
        else {
          uVar12 = FUN_653d46e0((int *)&param_3);
        }
        iVar11 = (int)(uVar12 >> 0x20);
        if ((((local_24c & 0x40) != 0) && (iVar11 == 0 || (longlong)uVar12 < 0)) &&
           ((longlong)uVar12 < 0)) {
          local_24c = local_24c | 0x100;
          uVar12 = CONCAT44(-(iVar11 + (uint)((int)uVar12 != 0)),-(int)uVar12);
        }
        iVar11 = (int)(uVar12 >> 0x20);
        if ((local_24c & 0x8000) == 0) {
          iVar11 = 0;
        }
        lVar14 = CONCAT44(iVar11,(int)uVar12);
        if (local_244 < 0) {
          local_244 = 1;
        }
        else {
          local_24c = local_24c & 0xfffffff7;
        }
        if ((int)uVar12 == 0 && iVar11 == 0) {
          local_238 = 0;
        }
        pWVar6 = (WCHAR *)&CStack_1;
        iVar11 = local_244;
        while ((uVar2 = local_22c, local_244 = iVar11 + -1, 0 < iVar11 || (lVar14 != 0))) {
          local_204 = (int)local_22c >> 0x1f;
          uVar15 = (uint)((ulonglong)lVar14 >> 0x20);
          uVar13 = __aullrem((uint)lVar14,uVar15,local_22c,local_204);
          iVar11 = (int)uVar13 + 0x30;
          lVar14 = __aulldiv((uint)lVar14,uVar15,uVar2,local_204);
          if (0x39 < iVar11) {
            iVar11 = iVar11 + local_224;
          }
          *(char *)pWVar6 = (char)iVar11;
          pWVar6 = (WCHAR *)((int)pWVar6 + -1);
          iVar11 = local_244;
        }
        pCVar10 = &CStack_1 + -(int)pWVar6;
        local_248 = (WCHAR *)((int)pWVar6 + 1);
        if (((local_24c & 0x200) != 0) && ((*(char *)local_248 != '0' || (pCVar10 == (LPSTR)0x0))))
        {
          pCVar10 = &stack0x00000000 + -(int)pWVar6;
          *(undefined1 *)pWVar6 = 0x30;
          local_248 = pWVar6;
        }
        break;
      case 'x':
        local_224 = 0x27;
        goto LAB_653d41e2;
      }
      if (local_228 == 0) {
        if ((local_24c & 0x40) != 0) {
          if ((local_24c & 0x100) == 0) {
            if ((local_24c & 1) == 0) {
              if ((local_24c & 2) == 0) goto LAB_653d43bf;
              local_23a = ' ';
            }
            else {
              local_23a = '+';
            }
          }
          else {
            local_23a = '-';
          }
          local_238 = 1;
        }
LAB_653d43bf:
        iVar11 = (local_234 - (int)pCVar10) - local_238;
        if ((local_24c & 0xc) == 0) {
          FUN_653d4640(0x20,iVar11,param_1,&local_240);
        }
        FUN_653d4680(&local_23a,local_238,param_1,&local_240);
        if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
          FUN_653d4640(0x30,iVar11,param_1,&local_240);
        }
        if ((local_230 == 0) || (pWVar6 = local_248, pCVar9 = pCVar10, (int)pCVar10 < 1)) {
          FUN_653d4680((char *)local_248,(int)pCVar10,param_1,&local_240);
        }
        else {
          do {
            pCVar9 = pCVar9 + -1;
            pCVar7 = FUN_653d6bd0(local_214,*pWVar6);
            if ((int)pCVar7 < 1) break;
            FUN_653d4680(local_214,(int)pCVar7,param_1,&local_240);
            pWVar6 = pWVar6 + 1;
          } while (pCVar9 != (LPSTR)0x0);
        }
        if ((local_24c & 4) != 0) {
          FUN_653d4640(0x20,iVar11,param_1,&local_240);
        }
      }
    }
    cVar8 = *param_2;
    param_2 = param_2 + 1;
    local_21c = CONCAT31(local_21c._1_3_,cVar8);
  } while( true );
}



void __cdecl FUN_653d45f0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_653d4870(param_1,param_2);
  }
  else {
    *(char *)*param_2 = (char)param_1;
    uVar2 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



void __cdecl FUN_653d4640(uint param_1,int param_2,int *param_3,int *param_4)

{
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      FUN_653d45f0(param_1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



void __cdecl FUN_653d4680(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      FUN_653d45f0((int)cVar1,param_3,param_4);
      if (*param_4 == -1) {
        return;
      }
    } while (0 < param_2);
  }
  return;
}



undefined4 __cdecl FUN_653d46c0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



undefined8 __cdecl FUN_653d46e0(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



undefined4 __cdecl FUN_653d4700(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)*param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return CONCAT22((short)((uint)puVar2 >> 0x10),*puVar1);
}



int * __cdecl FUN_653d4720(int param_1,int param_2)

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
      if (DAT_653dfc1c < dwBytes) {
LAB_653d4794:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_653d2300(9);
        piVar3 = FUN_653d27e0(dwBytes >> 4);
        FUN_653d2380(9);
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
          goto LAB_653d4794;
        }
      }
      piVar3 = (int *)HeapAlloc(DAT_653e1384,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_653e1204 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_653d34f0(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



uint __cdecl FUN_653d4870(uint param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = param_2;
  uVar7 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar7 & 0x82) == 0) || ((uVar7 & 0x40) != 0)) {
LAB_653d4993:
    param_2[3] = uVar7 | 0x20;
    return 0xffffffff;
  }
  uVar6 = 0;
  if ((uVar7 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar7 & 0x10) == 0) goto LAB_653d4993;
    *param_2 = param_2[2];
    param_2[3] = uVar7 & 0xfffffffe;
  }
  uVar7 = param_2[3];
  param_2[1] = 0;
  param_2[3] = uVar7 & 0xffffffef | 2;
  if ((uVar7 & 0x10c) == 0) {
    if ((param_2 == (int *)&DAT_653dd718) || (param_2 == (int *)&DAT_653dd738)) {
      bVar4 = FUN_653d6ba0(uVar1);
      if (CONCAT31(extraout_var,bVar4) != 0) goto LAB_653d48e3;
    }
    FUN_653d6e70(piVar3);
  }
LAB_653d48e3:
  if ((piVar3[3] & 0x108U) == 0) {
    uVar7 = 1;
    uVar6 = FUN_653d5920(uVar1,(char *)&param_1,1);
  }
  else {
    pcVar2 = (char *)piVar3[2];
    uVar7 = *piVar3 - (int)pcVar2;
    *piVar3 = (int)(pcVar2 + 1);
    piVar3[1] = piVar3[6] + -1;
    if ((int)uVar7 < 1) {
      if (uVar1 == 0xffffffff) {
        puVar5 = &DAT_653dd980;
      }
      else {
        puVar5 = (undefined *)((&DAT_653e13a0)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
      }
      if ((puVar5[4] & 0x20) != 0) {
        FUN_653d6d70(uVar1,0,2);
      }
      *(undefined1 *)piVar3[2] = (undefined1)param_1;
    }
    else {
      uVar6 = FUN_653d5920(uVar1,pcVar2,uVar7);
      *(undefined1 *)piVar3[2] = (undefined1)param_1;
    }
  }
  if (uVar6 != uVar7) {
    piVar3[3] = piVar3[3] | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}



int __cdecl FUN_653d49a0(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  WCHAR *pWVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  WCHAR *pWVar12;
  char *pcVar13;
  WCHAR *pWVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  int *piVar18;
  char local_1cd;
  int local_1cc;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  int local_1c4;
  char local_1c0;
  char local_1bf;
  char local_1be;
  byte local_1bd;
  uint local_1bc;
  WCHAR *local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  byte local_19e;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  WCHAR local_18e;
  undefined4 *local_18c;
  int local_188;
  undefined4 local_184;
  byte local_180 [11];
  undefined1 local_175;
  char local_160;
  char local_15f [351];
  
  local_1bf = '\0';
  local_1cc = 0;
  local_1ac = 0;
  bVar8 = *param_2;
  puVar7 = local_18c;
  do {
    if (bVar8 == 0) {
LAB_653d55f6:
      if ((puVar7 == (undefined4 *)0xffffffff) && ((local_1ac == 0 && (local_1bf == '\0')))) {
        local_1ac = -1;
      }
      return local_1ac;
    }
    iVar10 = 0;
    if ((int)DAT_653dfe40 < 2) {
      uVar5 = (byte)PTR_DAT_653dfe50[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar5 = FUN_653d5f10((uint)bVar8,8);
    }
    if (uVar5 != 0) {
      local_1cc = local_1cc + -1;
      piVar18 = param_1;
      uVar5 = FUN_653d5770(&local_1cc,param_1);
      FUN_653d5750(uVar5,piVar18);
      param_2 = param_2 + 1;
      uVar5 = FUN_653d7050((uint)*param_2);
      while (uVar5 != 0) {
        param_2 = param_2 + 1;
        uVar5 = FUN_653d7050((uint)*param_2);
      }
    }
    if (*param_2 != 0x25) {
      local_1cc = local_1cc + 1;
      puVar7 = (undefined4 *)FUN_653d5720(param_1);
      if ((undefined4 *)(uint)*param_2 != puVar7) goto LAB_653d55dd;
      pbVar9 = param_2 + 1;
      if ((PTR_DAT_653dfe50[((uint)puVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
        local_1cc = local_1cc + 1;
        uVar5 = FUN_653d5720(param_1);
        if (param_2[1] != uVar5) {
          local_1cc = local_1cc + -1;
          FUN_653d5750(uVar5,param_1);
          goto LAB_653d55dd;
        }
        local_1cc = local_1cc + -1;
        pbVar9 = param_2 + 2;
      }
      goto LAB_653d55a3;
    }
    local_1a4 = 0;
    local_1b4 = local_1b4 & 0xffffff00;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1c4 = 0;
    local_1bd = 0;
    local_1be = '\0';
    local_1c5 = '\0';
    local_1cd = '\0';
    local_1c0 = '\0';
    local_1c7 = '\0';
    local_1c6 = '\x01';
    local_188 = 0;
    do {
      pbVar9 = param_2 + 1;
      uVar5 = (uint)*pbVar9;
      if ((int)DAT_653dfe40 < 2) {
        uVar6 = (byte)PTR_DAT_653dfe50[uVar5 * 2] & 4;
      }
      else {
        uVar6 = FUN_653d5f10(uVar5,4);
      }
      if (uVar6 == 0) {
        switch(uVar5) {
        case 0x2a:
          local_1c5 = local_1c5 + '\x01';
          break;
        default:
switchD_653d4b20_caseD_2b:
          local_1cd = local_1cd + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((param_2[2] != 0x36) || (param_2[3] != 0x34)) goto switchD_653d4b20_caseD_2b;
          iVar10 = iVar10 + 1;
          local_19c = 0;
          pbVar9 = param_2 + 3;
          break;
        case 0x4c:
          local_1c6 = local_1c6 + '\x01';
          break;
        case 0x68:
          local_1c6 = local_1c6 + -1;
          local_1c7 = local_1c7 + -1;
          break;
        case 0x6c:
          local_1c6 = local_1c6 + '\x01';
        case 0x77:
          local_1c7 = local_1c7 + '\x01';
        }
      }
      else {
        local_1b0 = local_1b0 + 1;
        local_1c4 = (uVar5 - 0x30) + local_1c4 * 10;
      }
      param_2 = pbVar9;
    } while (local_1cd == '\0');
    puVar3 = param_3;
    if (local_1c5 == '\0') {
      local_1b8 = (WCHAR *)*param_3;
      puVar3 = param_3 + 1;
      local_18c = param_3;
    }
    param_3 = puVar3;
    bVar16 = false;
    if ((local_1c7 == '\0') && ((*param_2 == 0x53 || (local_1c7 = -1, *param_2 == 0x43)))) {
      local_1c7 = '\x01';
    }
    local_1bc = *param_2 | 0x20;
    local_188 = iVar10;
    if (local_1bc != 0x6e) {
      if ((local_1bc == 99) || (local_1bc == 0x7b)) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
      }
      else {
        puVar7 = (undefined4 *)FUN_653d5770(&local_1cc,param_1);
      }
    }
    pWVar12 = local_1b8;
    uVar5 = local_1bc;
    if ((local_1b0 != 0) && (local_1c4 == 0)) {
LAB_653d55dd:
      local_1cc = local_1cc + -1;
      FUN_653d5750((uint)puVar7,param_1);
      goto LAB_653d55f6;
    }
    switch(local_1bc) {
    case 99:
      if (local_1b0 == 0) {
        local_1b0 = 1;
        local_1c4 = local_1c4 + 1;
      }
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar11 = &DAT_653dfc48;
      goto LAB_653d4c9e;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_653d4c38_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      pcVar11 = &local_160;
      if (puVar7 == (undefined4 *)0x2d) {
        local_160 = '-';
        pcVar11 = local_15f;
LAB_653d52e3:
        local_1c4 = local_1c4 + -1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_653d52e3;
      iVar10 = local_1a8;
      if ((local_1b0 == 0) || (0x15d < local_1c4)) {
        local_1c4 = 0x15d;
      }
      while( true ) {
        if ((int)DAT_653dfe40 < 2) {
          uVar5 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 4;
        }
        else {
          uVar5 = FUN_653d5f10((int)puVar7,4);
        }
        if ((uVar5 == 0) ||
           (iVar15 = local_1c4 + -1, bVar16 = local_1c4 == 0, local_1c4 = iVar15, bVar16)) break;
        *pcVar11 = (char)puVar7;
        pcVar11 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
        iVar10 = iVar10 + 1;
      }
      if ((DAT_653dfe44 == (char)puVar7) &&
         (iVar15 = local_1c4 + -1, bVar16 = local_1c4 != 0, local_1c4 = iVar15, bVar16)) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
        *pcVar11 = DAT_653dfe44;
        while( true ) {
          pcVar11 = pcVar11 + 1;
          if ((int)DAT_653dfe40 < 2) {
            uVar5 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 4;
          }
          else {
            uVar5 = FUN_653d5f10((int)puVar7,4);
          }
          if ((uVar5 == 0) ||
             (iVar15 = local_1c4 + -1, bVar16 = local_1c4 == 0, local_1c4 = iVar15, bVar16)) break;
          *pcVar11 = (char)puVar7;
          iVar10 = iVar10 + 1;
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_653d5720(param_1);
        }
      }
      pcVar13 = pcVar11;
      if ((iVar10 != 0) &&
         (((puVar7 == (undefined4 *)0x65 || (puVar7 == (undefined4 *)0x45)) &&
          (iVar15 = local_1c4 + -1, bVar16 = local_1c4 != 0, local_1c4 = iVar15, bVar16)))) {
        *pcVar11 = 'e';
        pcVar13 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
        if (puVar7 == (undefined4 *)0x2d) {
          *pcVar13 = '-';
          pcVar13 = pcVar11 + 2;
LAB_653d543e:
          iVar15 = local_1c4 + -1;
          if (local_1c4 != 0) goto LAB_653d5453;
        }
        else if (puVar7 == (undefined4 *)0x2b) goto LAB_653d543e;
        while( true ) {
          if ((int)DAT_653dfe40 < 2) {
            uVar5 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 4;
          }
          else {
            uVar5 = FUN_653d5f10((int)puVar7,4);
          }
          if ((uVar5 == 0) ||
             (iVar15 = local_1c4 + -1, bVar16 = local_1c4 == 0, local_1c4 = iVar15, bVar16)) break;
          iVar10 = iVar10 + 1;
          *pcVar13 = (char)puVar7;
          pcVar13 = pcVar13 + 1;
LAB_653d5453:
          local_1c4 = iVar15;
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_653d5720(param_1);
        }
      }
      local_1cc = local_1cc + -1;
      FUN_653d5750((uint)puVar7,param_1);
      if (iVar10 == 0) goto LAB_653d55f6;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        *pcVar13 = '\0';
        (*(code *)PTR___fptrap_653dfc28)();
      }
      break;
    default:
      if ((undefined4 *)(uint)*param_2 != puVar7) goto LAB_653d55dd;
      local_1bf = local_1bf + -1;
      if (local_1c5 == '\0') {
        param_3 = local_18c;
      }
      break;
    case 0x69:
      local_1bc = 100;
    case 0x78:
      uVar5 = local_1bc;
      if (puVar7 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_653d4ef2:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar16 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_653d5720(param_1);
        }
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_653d4ef2;
      if (puVar7 == (undefined4 *)0x30) {
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
        if (((char)puVar7 == 'x') || ((char)puVar7 == 'X')) {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_653d5720(param_1);
          uVar5 = 0x78;
          local_1bc = 0x78;
        }
        else {
          local_1a8 = 1;
          if (uVar5 == 0x78) {
            local_1cc = local_1cc + -1;
            FUN_653d5750((uint)puVar7,param_1);
            puVar7 = (undefined4 *)0x30;
          }
          else {
            uVar5 = 0x6f;
            local_1bc = 0x6f;
          }
        }
      }
      goto LAB_653d4fd4;
    case 0x6e:
      iVar15 = local_1cc;
      if (local_1c5 != '\0') break;
      goto LAB_653d5295;
    case 0x70:
      local_1c6 = '\x01';
switchD_653d4c38_caseD_64:
      if (puVar7 == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_653d4faa:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar16 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          puVar7 = (undefined4 *)FUN_653d5720(param_1);
        }
      }
      else if (puVar7 == (undefined4 *)0x2b) goto LAB_653d4faa;
LAB_653d4fd4:
      iVar15 = local_1a4;
      lVar17 = local_19c;
      if (iVar10 == 0) {
        while (!bVar16) {
          if ((uVar5 == 0x78) || (uVar5 == 0x70)) {
            if ((int)DAT_653dfe40 < 2) {
              uVar6 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 0x80;
            }
            else {
              uVar6 = FUN_653d5f10((int)puVar7,0x80);
            }
            if (uVar6 != 0) {
              iVar15 = iVar15 << 4;
              puVar7 = (undefined4 *)FUN_653d56e0((uint)puVar7);
              goto LAB_653d51ca;
            }
LAB_653d51c6:
            bVar16 = true;
          }
          else {
            if ((int)DAT_653dfe40 < 2) {
              uVar6 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 4;
            }
            else {
              uVar6 = FUN_653d5f10((int)puVar7,4);
            }
            if (uVar6 == 0) goto LAB_653d51c6;
            if (uVar5 == 0x6f) {
              if (0x37 < (int)puVar7) goto LAB_653d51c6;
              iVar15 = iVar15 << 3;
            }
            else {
              iVar15 = iVar15 * 10;
            }
          }
LAB_653d51ca:
          if (bVar16) {
            local_1cc = local_1cc + -1;
            FUN_653d5750((uint)puVar7,param_1);
          }
          else {
            local_1a8 = local_1a8 + 1;
            iVar15 = iVar15 + -0x30 + (int)puVar7;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              puVar7 = (undefined4 *)FUN_653d5720(param_1);
            }
            else {
              bVar16 = true;
            }
          }
        }
        local_1a4 = iVar15;
        if (local_1be != '\0') {
          local_1a4 = -iVar15;
        }
      }
      else {
        while( true ) {
          uVar5 = (uint)lVar17;
          iVar10 = (int)((ulonglong)lVar17 >> 0x20);
          if (bVar16) break;
          if (local_1bc == 0x78) {
            if ((int)DAT_653dfe40 < 2) {
              uVar5 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 0x80;
            }
            else {
              uVar5 = FUN_653d5f10((int)puVar7,0x80);
            }
            if (uVar5 != 0) {
              lVar17 = __allshl(4,iVar10);
              puVar7 = (undefined4 *)FUN_653d56e0((uint)puVar7);
              goto LAB_653d50a1;
            }
LAB_653d509d:
            bVar16 = true;
          }
          else {
            if ((int)DAT_653dfe40 < 2) {
              uVar6 = (byte)PTR_DAT_653dfe50[(int)puVar7 * 2] & 4;
            }
            else {
              uVar6 = FUN_653d5f10((int)puVar7,4);
            }
            if (uVar6 == 0) goto LAB_653d509d;
            if (local_1bc == 0x6f) {
              if (0x37 < (int)puVar7) goto LAB_653d509d;
              lVar17 = __allshl(3,iVar10);
            }
            else {
              lVar17 = __allmul(uVar5,iVar10,10,0);
            }
          }
LAB_653d50a1:
          if (bVar16) {
            local_1cc = local_1cc + -1;
            FUN_653d5750((uint)puVar7,param_1);
          }
          else {
            puVar3 = puVar7 + -0xc;
            local_1a8 = local_1a8 + 1;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              puVar7 = (undefined4 *)FUN_653d5720(param_1);
              lVar17 = lVar17 + (int)puVar3;
            }
            else {
              bVar16 = true;
              lVar17 = lVar17 + (int)puVar3;
            }
          }
        }
        local_19c = lVar17;
        if (local_1be != '\0') {
          local_19c = CONCAT44(-(iVar10 + (uint)(uVar5 != 0)),-uVar5);
        }
      }
      iVar10 = local_1a8;
      if (local_1bc == 0x46) {
        iVar10 = 0;
      }
      if (iVar10 == 0) goto LAB_653d55f6;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        iVar15 = local_1a4;
        iVar10 = local_188;
LAB_653d5295:
        if (iVar10 == 0) {
          if (local_1c6 == '\0') {
            *local_1b8 = (WCHAR)iVar15;
          }
          else {
            *(int *)local_1b8 = iVar15;
          }
        }
        else {
          *(undefined4 *)local_1b8 = (undefined4)local_19c;
          *(undefined4 *)(local_1b8 + 2) = local_19c._4_4_;
        }
      }
      break;
    case 0x73:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar11 = s_____653dfc40;
LAB_653d4c9e:
      local_1bd = 0xff;
      pbVar9 = param_2;
LAB_653d4ca3:
      param_2 = pbVar9;
      pbVar9 = local_180;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9 = pbVar9 + 4;
      }
      if ((local_1bc == 0x7b) && (*pcVar11 == 0x5d)) {
        local_1b4 = CONCAT31(local_1b4._1_3_,0x5d);
        pcVar11 = (char *)((byte *)pcVar11 + 1);
        local_175 = 0x20;
      }
      bVar8 = *pcVar11;
      uVar5 = local_1b4;
      while (bVar8 != 0x5d) {
        pbVar9 = (byte *)pcVar11 + 1;
        uVar6 = (uint)local_184 >> 8;
        local_184 = CONCAT31((int3)uVar6,bVar8);
        local_1b4._1_3_ = (undefined3)(uVar5 >> 8);
        if (((bVar8 == 0x2d) &&
            (local_1b4._0_1_ = (byte)uVar5, bVar2 = (byte)local_1b4, (byte)local_1b4 != 0)) &&
           (bVar1 = *pbVar9, bVar1 != 0x5d)) {
          pbVar9 = (byte *)pcVar11 + 2;
          uVar6 = (uint)local_194 >> 8;
          bVar8 = (byte)local_1b4;
          if (bVar1 <= (byte)local_1b4) {
            local_1b4 = CONCAT31(local_1b4._1_3_,bVar1);
            bVar8 = bVar1;
            uVar5 = local_1b4;
            bVar1 = bVar2;
          }
          local_1b4 = uVar5;
          local_194 = CONCAT31((int3)uVar6,bVar1);
          if (bVar8 <= bVar1) {
            uVar5 = local_1b4 & 0xff;
            iVar10 = (bVar1 - uVar5) + 1;
            do {
              uVar6 = uVar5 >> 3;
              bVar8 = (byte)uVar5;
              uVar5 = uVar5 + 1;
              iVar10 = iVar10 + -1;
              local_180[uVar6] = local_180[uVar6] | '\x01' << (bVar8 & 7);
            } while (iVar10 != 0);
          }
          local_1b4 = local_1b4 & 0xffffff00;
        }
        else {
          local_1b4 = CONCAT31(local_1b4._1_3_,bVar8);
          local_180[bVar8 >> 3] = local_180[bVar8 >> 3] | '\x01' << (bVar8 & 7);
        }
        pcVar11 = (char *)pbVar9;
        uVar5 = local_1b4;
        bVar8 = *pbVar9;
      }
      if (*pcVar11 == 0) goto LAB_653d55f6;
      if (local_1bc == 0x7b) {
        param_2 = (byte *)pcVar11;
      }
      local_1cc = local_1cc + -1;
      local_1b4 = uVar5;
      FUN_653d5750((uint)puVar7,param_1);
      pWVar14 = pWVar12;
      while( true ) {
        if ((local_1b0 != 0) &&
           (iVar10 = local_1c4 + -1, bVar16 = local_1c4 == 0, local_1c4 = iVar10, pWVar4 = pWVar14,
           bVar16)) goto LAB_653d4e8c;
        local_1cc = local_1cc + 1;
        puVar7 = (undefined4 *)FUN_653d5720(param_1);
        if ((puVar7 == (undefined4 *)0xffffffff) ||
           (bVar8 = (byte)puVar7,
           ((int)(char)(local_180[(int)puVar7 >> 3] ^ local_1bd) & 1 << (bVar8 & 7)) == 0)) break;
        if (local_1c5 == '\0') {
          if (local_1c0 == '\0') {
            *(byte *)pWVar14 = bVar8;
            pWVar14 = (WCHAR *)((int)pWVar14 + 1);
          }
          else {
            local_19e = bVar8;
            if ((PTR_DAT_653dfe50[((uint)puVar7 & 0xff) * 2 + 1] & 0x80) != 0) {
              local_1cc = local_1cc + 1;
              uVar5 = FUN_653d5720(param_1);
              local_19d = (undefined1)uVar5;
            }
            FUN_653d6ed0(&local_18e,&local_19e,DAT_653dfe40);
            *pWVar14 = local_18e;
            pWVar14 = pWVar14 + 1;
          }
        }
        else {
          pWVar12 = (WCHAR *)((int)pWVar12 + 1);
        }
      }
      local_1cc = local_1cc + -1;
      local_1b8 = pWVar14;
      FUN_653d5750((uint)puVar7,param_1);
      pWVar4 = local_1b8;
LAB_653d4e8c:
      local_1b8 = pWVar4;
      if (pWVar12 == pWVar14) goto LAB_653d55f6;
      if ((local_1c5 == '\0') && (local_1ac = local_1ac + 1, local_1bc != 99)) {
        if (local_1c0 == '\0') {
          *(byte *)local_1b8 = 0;
        }
        else {
          *local_1b8 = L'\0';
        }
      }
      break;
    case 0x7b:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pbVar9 = param_2 + 1;
      pcVar11 = (char *)pbVar9;
      if (*pbVar9 == 0x5e) {
        pcVar11 = (char *)(param_2 + 2);
        param_2 = pbVar9;
        goto LAB_653d4c9e;
      }
      goto LAB_653d4ca3;
    }
    local_1bf = local_1bf + '\x01';
    pbVar9 = param_2 + 1;
LAB_653d55a3:
    param_2 = pbVar9;
    if ((puVar7 == (undefined4 *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
    goto LAB_653d55f6;
    bVar8 = *param_2;
  } while( true );
}



uint __cdecl FUN_653d56e0(uint param_1)

{
  uint uVar1;
  
  if (DAT_653dfe40 < 2) {
    uVar1 = (byte)PTR_DAT_653dfe50[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_653d5f10(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}



uint __cdecl FUN_653d5720(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[1];
  param_1[1] = iVar2 + -1;
  if (-1 < iVar2 + -1) {
    bVar1 = *(byte *)*param_1;
    *param_1 = (int)((byte *)*param_1 + 1);
    return (uint)bVar1;
  }
  uVar3 = FUN_653d70e0(param_1);
  return uVar3;
}



void __cdecl FUN_653d5750(uint param_1,int *param_2)

{
  if (param_1 != 0xffffffff) {
    FUN_653d71d0(param_1,param_2);
  }
  return;
}



uint __cdecl FUN_653d5770(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = *param_1 + 1;
  uVar1 = FUN_653d5720(param_2);
  uVar2 = FUN_653d7050(uVar1);
  while (uVar2 != 0) {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_653d5720(param_2);
    uVar2 = FUN_653d7050(uVar1);
  }
  return uVar1;
}



LPWSTR __cdecl FUN_653d57c0(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return param_3;
  }
  iVar1 = FUN_653d7260(DAT_653e1158,1,param_1,param_3,param_2,(int)param_3,DAT_653e1154);
  if (iVar1 == 0) {
    return (LPWSTR)0x7fffffff;
  }
  return (LPWSTR)(iVar1 + -2);
}



LPCWSTR FUN_653d5800(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  byte *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_653e0f28;
  piVar2 = DAT_653e0f28;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return (LPCWSTR)0x0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (byte *)FUN_653d0b40(cbMultiByte), lpMultiByteStr != (byte *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_653d7560(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return lpWideCharStr;
    }
  }
  return (LPCWSTR)0xffffffff;
}



DWORD __cdecl FUN_653d5880(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (DAT_653e14a0 <= param_1) {
LAB_653d590c:
    pDVar3 = FUN_653d5c70();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_653d590c;
  FUN_653d7950(param_1);
  if ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_653d7900(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) goto LAB_653d58fd;
    pDVar3 = FUN_653d5c80();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_653d5c70();
  *pDVar3 = 9;
  DVar2 = 0xffffffff;
LAB_653d58fd:
  FUN_653d79c0(param_1);
  return DVar2;
}



int __cdecl FUN_653d5920(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_653e14a0) &&
     ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_653d7950(param_1);
    iVar1 = FUN_653d59a0(param_1,param_2,param_3);
    FUN_653d79c0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_653d5c70();
  *pDVar2 = 9;
  pDVar2 = FUN_653d5c80();
  *pDVar2 = 0;
  return -1;
}



int __cdecl FUN_653d59a0(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  uint local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_653e13a0 + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar1;
  if ((*(byte *)(iVar6 + 4 + *piVar1) & 0x20) != 0) {
    FUN_653d6df0(param_1,0,2);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_414 = GetLastError();
    }
    else {
      local_41c = local_410;
      local_414 = 0;
    }
  }
  else {
    local_414 = 0;
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
          local_414 = GetLastError();
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
  if (local_414 == 0) {
    if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_653d5c70();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_653d5c80();
    *pDVar5 = 0;
    return -1;
  }
  if (local_414 != 5) {
    FUN_653d5bf0(local_414);
    return -1;
  }
  pDVar5 = FUN_653d5c70();
  *pDVar5 = 9;
  pDVar5 = FUN_653d5c80();
  *pDVar5 = 5;
  return -1;
}



void __cdecl FUN_653d5bb0(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_653d03a0((undefined *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



void __cdecl FUN_653d5bf0(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_653d5c80();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_653dfcd8;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_653d5c70();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x653dfcdc);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_653dfe40);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_653d5c70();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_653d5c70();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_653d5c70();
  *pDVar1 = 0x16;
  return;
}



DWORD * FUN_653d5c70(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_653d1400();
  return pDVar1 + 2;
}



DWORD * FUN_653d5c80(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_653d1400();
  return pDVar1 + 3;
}



// Library Function - Single Match
//  __aulldiv
// 
// Library: Visual Studio

undefined8 __aulldiv(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1;
  uVar8 = param_4;
  uVar6 = param_2;
  uVar9 = param_3;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar5 = uVar8 >> 1;
      uVar9 = uVar9 >> 1 | (uint)((uVar8 & 1) != 0) << 0x1f;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0x1f;
      uVar8 = uVar5;
      uVar6 = uVar7;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar7,uVar3) / (ulonglong)uVar9;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  return CONCAT44(uVar3,iVar4);
}



// Library Function - Single Match
//  __aullrem
// 
// Library: Visual Studio

undefined8 __aullrem(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar3 = param_1;
  uVar4 = param_4;
  uVar9 = param_2;
  uVar10 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar4 >> 1;
      uVar10 = uVar10 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
      uVar8 = uVar9 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar9 & 1) != 0) << 0x1f;
      uVar4 = uVar5;
      uVar9 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar3) / (ulonglong)uVar10;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}



uint __thiscall FUN_653d5d80(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_653d5de0(local_8);
  FUN_653d5e80();
  return param_2 & param_1 | ~param_2 & uVar1;
}



void __cdecl FUN_653d5dc0(void *param_1,uint param_2)

{
  FUN_653d5d80(param_1,(uint)param_1,param_2 & 0xfff7ffff);
  return;
}



uint __cdecl FUN_653d5de0(uint param_1)

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



void FUN_653d5e80(void)

{
  return;
}



uint __cdecl FUN_653d5f10(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_653dfe50 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_653dfe50[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_653d7b80(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



uint __cdecl FUN_653d5fb0(uint param_1)

{
  bool bVar1;
  
  if (DAT_653e1220 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_653e1380);
    bVar1 = DAT_653e137c != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_653e1380);
      FUN_653d2300(0x13);
    }
    param_1 = FUN_653d6040(param_1);
    if (bVar1) {
      FUN_653d2380(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_653e1380);
  }
  return param_1;
}



uint __cdecl FUN_653d6040(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_653e1220 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_653dfe40 < 2) {
        uVar2 = (byte)PTR_DAT_653dfe50[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_653d5f10(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_653dfe50[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_653d7cb0(DAT_653e1220,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0);
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



undefined4 __cdecl FUN_653d6140(int param_1,int param_2)

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



void __cdecl FUN_653d61b0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  iVar2 = FUN_653d7ed0(*(uint *)(param_1 + iVar3 * 4),
                       1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                            0x1f),(uint *)(param_1 + iVar3 * 4));
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    puVar4 = (uint *)(param_1 + iVar3 * 4);
    do {
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_653d7ed0(*puVar4,1,puVar4);
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar3);
  }
  return;
}



undefined4 __cdecl FUN_653d6220(int param_1,int param_2)

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
     (iVar1 = FUN_653d6140(param_1,param_2 + 1), iVar1 == 0)) {
    local_4 = FUN_653d61b0(param_1,param_2 + -1);
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



void __cdecl FUN_653d62c0(int param_1,undefined4 *param_2)

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



void __cdecl FUN_653d62e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



undefined4 __cdecl FUN_653d62f0(int *param_1)

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



void __cdecl FUN_653d6310(uint *param_1,int param_2)

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



undefined4 __cdecl FUN_653d63d0(ushort *param_1,uint *param_2,int *param_3)

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
    iVar2 = FUN_653d62f0((int *)&local_18);
    if (iVar2 == 0) {
      FUN_653d62e0(&local_18);
      uVar3 = 2;
      goto LAB_653d6551;
    }
  }
  else {
    FUN_653d62c0((int)local_c,&local_18);
    iVar2 = FUN_653d6220((int)&local_18,param_3[2]);
    if (iVar2 != 0) {
      iVar5 = uVar4 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar5 < iVar2 - param_3[2]) {
      FUN_653d62e0(&local_18);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_653d6551;
    }
    if (iVar5 <= iVar2) {
      FUN_653d62c0((int)&local_18,local_c);
      FUN_653d6310(&local_18,iVar2 - iVar5);
      FUN_653d6220((int)&local_18,param_3[2]);
      FUN_653d6310(&local_18,param_3[3] + 1);
      iVar5 = 0;
      uVar3 = 2;
      goto LAB_653d6551;
    }
    if (*param_3 <= iVar5) {
      FUN_653d62e0(&local_18);
      local_18 = local_18 | 0x80000000;
      FUN_653d6310(&local_18,param_3[3]);
      iVar5 = param_3[5] + *param_3;
      uVar3 = 1;
      goto LAB_653d6551;
    }
    iVar5 = param_3[5] + iVar5;
    local_18 = local_18 & 0x7fffffff;
    FUN_653d6310(&local_18,param_3[3]);
  }
  uVar3 = 0;
LAB_653d6551:
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



void __cdecl FUN_653d65a0(ushort *param_1,uint *param_2)

{
  FUN_653d63d0(param_1,param_2,(int *)&DAT_653e0060);
  return;
}



void __cdecl FUN_653d65c0(ushort *param_1,uint *param_2)

{
  FUN_653d63d0(param_1,param_2,(int *)&DAT_653e0078);
  return;
}



void __cdecl FUN_653d65e0(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_653d80d0(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_653d65a0(local_c,param_1);
  return;
}



void __cdecl FUN_653d6620(uint *param_1,byte *param_2)

{
  ushort local_c [6];
  
  FUN_653d80d0(local_c,(int *)&param_2,param_2,0,0,0,0);
  FUN_653d65c0(local_c,param_1);
  return;
}



void __cdecl FUN_653d6660(char *param_1,int param_2,int param_3)

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



int * __cdecl FUN_653d6700(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4)

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
  FUN_653d6790(&local_28,&param_1);
  iVar2 = FUN_653d8860(local_28,local_24,CONCAT22(uVar7,local_20),0x11,0,&local_1c);
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



void __cdecl FUN_653d6790(uint *param_1,uint *param_2)

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



undefined4 * __cdecl FUN_653d6850(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_653d6a07_caseD_2;
        case 3:
          goto switchD_653d6a07_caseD_3;
        }
        goto switchD_653d6a07_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_653d6a07_caseD_0;
      case 1:
        goto switchD_653d6a07_caseD_1;
      case 2:
        goto switchD_653d6a07_caseD_2;
      case 3:
        goto switchD_653d6a07_caseD_3;
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
              goto switchD_653d6a07_caseD_2;
            case 3:
              goto switchD_653d6a07_caseD_3;
            }
            goto switchD_653d6a07_caseD_1;
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
              goto switchD_653d6a07_caseD_2;
            case 3:
              goto switchD_653d6a07_caseD_3;
            }
            goto switchD_653d6a07_caseD_1;
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
              goto switchD_653d6a07_caseD_2;
            case 3:
              goto switchD_653d6a07_caseD_3;
            }
            goto switchD_653d6a07_caseD_1;
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
switchD_653d6a07_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_653d6a07_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_653d6a07_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_653d6a07_caseD_0:
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
        goto switchD_653d6885_caseD_2;
      case 3:
        goto switchD_653d6885_caseD_3;
      }
      goto switchD_653d6885_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_653d6885_caseD_0;
    case 1:
      goto switchD_653d6885_caseD_1;
    case 2:
      goto switchD_653d6885_caseD_2;
    case 3:
      goto switchD_653d6885_caseD_3;
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
            goto switchD_653d6885_caseD_2;
          case 3:
            goto switchD_653d6885_caseD_3;
          }
          goto switchD_653d6885_caseD_1;
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
            goto switchD_653d6885_caseD_2;
          case 3:
            goto switchD_653d6885_caseD_3;
          }
          goto switchD_653d6885_caseD_1;
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
            goto switchD_653d6885_caseD_2;
          case 3:
            goto switchD_653d6885_caseD_3;
          }
          goto switchD_653d6885_caseD_1;
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
switchD_653d6885_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_653d6885_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_653d6885_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_653d6885_caseD_0:
  return param_1;
}



// Library Function - Single Match
//  __fptrap
// 
// Library: Visual Studio 1998 Release

void __cdecl __fptrap(void)

{
  __amsg_exit(2);
  return;
}



byte __cdecl FUN_653d6ba0(uint param_1)

{
  if (DAT_653e14a0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



LPSTR __cdecl FUN_653d6bd0(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_653e1380);
  bVar2 = DAT_653e137c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_653e1380);
    FUN_653d2300(0x13);
  }
  pCVar1 = FUN_653d6c40(param_1,param_2);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_653e1380);
    return pCVar1;
  }
  FUN_653d2380(0x13);
  return pCVar1;
}



LPSTR __cdecl FUN_653d6c40(LPSTR param_1,WCHAR param_2)

{
  LPSTR pCVar1;
  DWORD *pDVar2;
  
  pCVar1 = param_1;
  if (param_1 == (LPSTR)0x0) {
    return param_1;
  }
  if (DAT_653e1220 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return (LPSTR)0x1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    pCVar1 = (LPSTR)WideCharToMultiByte(DAT_653e1230,0x220,&param_2,1,pCVar1,DAT_653dfe40,
                                        (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((pCVar1 != (LPSTR)0x0) && (param_1 == (LPSTR)0x0)) {
      return pCVar1;
    }
  }
  pDVar2 = FUN_653d5c70();
  *pDVar2 = 0x2a;
  return (LPSTR)0xffffffff;
}



DWORD __cdecl FUN_653d6d70(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_653e14a0) &&
     ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_653d7950(param_1);
    DVar1 = FUN_653d6df0(param_1,param_2,param_3);
    FUN_653d79c0(param_1);
    return DVar1;
  }
  pDVar2 = FUN_653d5c70();
  *pDVar2 = 9;
  pDVar2 = FUN_653d5c80();
  *pDVar2 = 0;
  return 0xffffffff;
}



DWORD __cdecl FUN_653d6df0(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_653d7900(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_653d5c70();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_653d5bf0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



void __cdecl FUN_653d6e70(int *param_1)

{
  int iVar1;
  
  DAT_653e0f44 = DAT_653e0f44 + 1;
  iVar1 = FUN_653d0b40(0x1000);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  param_1[2] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  param_1[1] = 0;
  return;
}



uint __cdecl FUN_653d6ed0(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_653e1380);
  bVar2 = DAT_653e137c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_653e1380);
    FUN_653d2300(0x13);
  }
  uVar1 = FUN_653d6f50(param_1,param_2,param_3);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_653e1380);
    return uVar1;
  }
  FUN_653d2380(0x13);
  return uVar1;
}



uint __cdecl FUN_653d6f50(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_653e1220 == 0) {
        if (param_1 == (LPWSTR)0x0) {
          return 1;
        }
        *param_1 = (ushort)bVar1;
        return 1;
      }
      if ((PTR_DAT_653dfe50[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_653e1230,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (((1 < (int)DAT_653dfe40) && ((int)DAT_653dfe40 <= (int)param_3)) &&
           (iVar2 = MultiByteToWideChar(DAT_653e1230,9,(LPCSTR)param_2,DAT_653dfe40,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          return DAT_653dfe40;
        }
        if (DAT_653dfe40 <= param_3) {
          if (param_2[1] != 0) {
            return DAT_653dfe40;
          }
          pDVar3 = FUN_653d5c70();
          *pDVar3 = 0x2a;
          return 0xffffffff;
        }
      }
      pDVar3 = FUN_653d5c70();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
      return 0;
    }
  }
  return 0;
}



uint __cdecl FUN_653d7050(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_653dfe40) {
    uVar1 = FUN_653d5f10(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_653dfe50[param_1 * 2] & 8;
}



// Library Function - Single Match
//  __allmul
// 
// Library: Visual Studio

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}



// Library Function - Single Match
//  __allshl
// 
// Library: Visual Studio

longlong __fastcall __allshl(byte param_1,int param_2)

{
  uint in_EAX;
  
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | in_EAX >> 0x20 - (param_1 & 0x1f),
                    in_EAX << (param_1 & 0x1f));
  }
  return (ulonglong)(in_EAX << (param_1 & 0x1f)) << 0x20;
}



uint __cdecl FUN_653d70e0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) != 0) {
      param_1[3] = uVar2 | 0x20;
      return 0xffffffff;
    }
    param_1[3] = uVar2 | 1;
    if ((uVar2 & 0x10c) == 0) {
      FUN_653d6e70(param_1);
    }
    else {
      *param_1 = param_1[2];
    }
    iVar3 = FUN_653d8cf0(param_1[4],(char *)param_1[2],param_1[6]);
    param_1[1] = iVar3;
    if ((iVar3 != 0) && (iVar3 != -1)) {
      if ((param_1[3] & 0x82U) == 0) {
        uVar2 = param_1[4];
        if (uVar2 == 0xffffffff) {
          puVar4 = &DAT_653dd980;
        }
        else {
          puVar4 = (undefined *)((&DAT_653e13a0)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar4[4] & 0x82) == 0x82) {
          param_1[3] = param_1[3] | 0x2000;
        }
      }
      if (((param_1[6] == 0x200) && ((param_1[3] & 8U) != 0)) && ((param_1[3] & 0x400U) == 0)) {
        param_1[6] = 0x1000;
      }
      param_1[1] = iVar3 + -1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      return (uint)bVar1;
    }
    param_1[1] = 0;
    param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
  }
  return 0xffffffff;
}



uint __cdecl FUN_653d71d0(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_653d6e70(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      iVar2 = *param_2;
      *param_2 = iVar2 + -1;
      *(char *)(iVar2 + -1) = (char)param_1;
    }
    else {
      iVar2 = *param_2;
      pcVar3 = (char *)(iVar2 + -1);
      *param_2 = (int)pcVar3;
      if (*pcVar3 != (char)param_1) {
        *param_2 = iVar2;
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}



int __cdecl
FUN_653d7260(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPWSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iVar5;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_653e1238 == 0) {
    iVar1 = CompareStringA(0,0,"",1,"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringW(0,0,L"",1,L"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_653e1238 = 1;
    }
    else {
      DAT_653e1238 = 2;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPWSTR)FUN_653d7530((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_653d7530((char *)param_5,param_6);
  }
  if (DAT_653e1238 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)cbMultiByte,(PCNZCH)param_5,param_6)
    ;
    return iVar1;
  }
  local_18 = DAT_653e1238;
  if (DAT_653e1238 == 1) {
    local_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_653e1230;
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
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_653d0b40(iVar1 * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0))
        && (param_4 = (LPWSTR)FUN_653d0b40(iVar4 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar4), iVar5 != 0)) {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar4);
    }
    FUN_653d03a0((undefined *)lpWideCharStr);
    FUN_653d03a0((undefined *)param_4);
  }
  return local_18;
}



int __cdecl FUN_653d7530(char *param_1,int param_2)

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



undefined4 __cdecl FUN_653d7560(byte *param_1,int param_2)

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
  pbVar4 = FUN_653d8fa0(param_1,0x3d);
  if (pbVar4 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pbVar4) {
    return 0xffffffff;
  }
  bVar13 = pbVar4[1] == 0;
  if (DAT_653e0f20 == DAT_653e0f24) {
    DAT_653e0f20 = FUN_653d77f0(DAT_653e0f20);
  }
  if (DAT_653e0f20 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_653e0f28 == (undefined4 *)0x0)) {
      if (bVar13) {
        return 0;
      }
      DAT_653e0f20 = (int *)FUN_653d0b40(4);
      if (DAT_653e0f20 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_653e0f20 = 0;
      if (DAT_653e0f28 == (undefined4 *)0x0) {
        DAT_653e0f28 = (undefined4 *)FUN_653d0b40(4);
        if (DAT_653e0f28 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_653e0f28 = 0;
      }
    }
    else {
      pWVar5 = FUN_653d5800();
      if (pWVar5 != (LPCWSTR)0x0) {
        return 0xffffffff;
      }
    }
  }
  piVar8 = DAT_653e0f20;
  pWVar6 = (LPWSTR)(pbVar4 + -(int)param_1);
  iVar7 = FUN_653d7770(param_1,pWVar6);
  if ((iVar7 < 0) || (*piVar8 == 0)) {
    if (bVar13) {
      return 0;
    }
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    piVar8 = FUN_653d0c10(piVar8,iVar7 * 4 + 8);
    if (piVar8 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar8[iVar7] = (int)param_1;
    piVar8[iVar7 + 1] = 0;
    DAT_653e0f20 = piVar8;
  }
  else if (bVar13) {
    FUN_653d03a0((undefined *)piVar8[iVar7]);
    iVar2 = piVar8[iVar7];
    piVar3 = piVar8 + iVar7;
    while (iVar2 != 0) {
      *piVar3 = piVar3[1];
      iVar7 = iVar7 + 1;
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar8 = FUN_653d0c10(piVar8,iVar7 * 4);
    if (piVar8 != (int *)0x0) {
      DAT_653e0f20 = piVar8;
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
    pbVar4 = (byte *)FUN_653d0b40(~uVar9 + 1);
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
      FUN_653d03a0(pbVar4);
      return 0;
    }
  }
  return 0;
}



int __cdecl FUN_653d7770(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  LPWSTR pWVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_653e0f20;
  piVar3 = DAT_653e0f20;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((pWVar2 = FUN_653d57c0(param_1,pbVar1,param_2), pWVar2 != (LPWSTR)0x0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_653e0f20 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_653e0f20 >> 2;
}



undefined4 * __cdecl FUN_653d77f0(int *param_1)

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
    puVar3 = (undefined4 *)FUN_653d0b40(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*param_1;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      param_1 = param_1 + 1;
      pcVar4 = FUN_653d9070(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      pcVar4 = (char *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



undefined4 __cdecl FUN_653d7900(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_653e14a0) &&
     ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_653e13a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_653d5c70();
  *pDVar1 = 9;
  pDVar1 = FUN_653d5c80();
  *pDVar1 = 0;
  return 0xffffffff;
}



void __cdecl FUN_653d7950(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_653e13a0)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_653d2300(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_653d2380(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_653e13a0)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



void __cdecl FUN_653d79c0(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_653e13a0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



BOOL __cdecl
FUN_653d79f0(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_653e123c == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_653e123c = 2;
    }
    else {
      DAT_653e123c = 1;
    }
  }
  if (DAT_653e123c != 1) {
    local_4 = DAT_653e123c;
    if (DAT_653e123c == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_653e1230;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_653d4720(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_653d0b40(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_653e1220;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_653d6850((undefined4 *)param_4,(undefined4 *)lpCharType,param_3 * 2);
        }
      }
      FUN_653d03a0((undefined *)lpMultiByteStr);
      FUN_653d03a0((undefined *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



BOOL __cdecl
FUN_653d7b80(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_653e1240 == 0) {
    BVar1 = GetStringTypeA(0,1,"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeW(1,L"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_653e1240 = 1;
    }
    else {
      DAT_653e1240 = 2;
    }
  }
  if (DAT_653e1240 == 2) {
    if (param_6 == 0) {
      param_6 = DAT_653e1220;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_653e1240;
  if (DAT_653e1240 == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_653e1230;
    }
    iVar2 = MultiByteToWideChar(param_5,9,param_2,param_3,(LPWSTR)0x0,0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_653d4720(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_653d03a0((undefined *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_653d03a0((undefined *)lpWideCharStr);
  }
  return param_6;
}



int __cdecl
FUN_653d7cb0(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_653e1254 == 0) {
    iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_653e1254 = 1;
    }
    else {
      DAT_653e1254 = 2;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_653d7530(param_3,(int)param_4);
  }
  if (DAT_653e1254 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_653e1254 != 1) {
    return DAT_653e1254;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_653e1230;
  }
  iVar1 = MultiByteToWideChar(param_7,9,param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_653d0b40(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_653d0b40(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_653d7eaf;
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
      if (param_6 == 0) goto LAB_653d7e14;
      if (param_6 < iVar2) goto LAB_653d7eaf;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_653d7e14:
      FUN_653d03a0((undefined *)lpWideCharStr);
      FUN_653d03a0((undefined *)param_4);
      return iVar2;
    }
  }
LAB_653d7eaf:
  FUN_653d03a0((undefined *)lpWideCharStr);
  FUN_653d03a0((undefined *)param_4);
  return 0;
}



undefined4 __cdecl FUN_653d7ed0(uint param_1,uint param_2,uint *param_3)

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



void __cdecl FUN_653d7f00(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_653d7ed0(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_653d7ed0(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_653d7ed0(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_653d7ed0(param_1[2],param_2[2],param_1 + 2);
  return;
}



void __cdecl FUN_653d7f70(uint *param_1)

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



void __cdecl FUN_653d7fa0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



void __cdecl FUN_653d7fd0(char *param_1,int param_2,uint *param_3)

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
      FUN_653d7f70(puVar2);
      FUN_653d7f70(puVar2);
      FUN_653d7f00(puVar2,&local_c);
      FUN_653d7f70(puVar2);
      local_c = (uint)*param_1;
      local_8 = 0;
      local_4 = 0;
      FUN_653d7f00(puVar2,&local_c);
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
    FUN_653d7f70(puVar2);
    sVar3 = sVar3 + -1;
    uVar1 = puVar2[2];
  }
  *(short *)((int)puVar2 + 10) = sVar3;
  return;
}



undefined4 __cdecl
FUN_653d80d0(ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,int param_6,
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
        goto LAB_653d85a2;
      }
      if (bVar10 == DAT_653dfe44) {
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
        if (bVar10 != 0x30) goto switchD_653d8392_caseD_2c;
        iVar8 = 1;
      }
      break;
    case 1:
      bVar2 = true;
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_653d85a2;
      }
      if (bVar10 == DAT_653dfe44) {
        iVar8 = 4;
      }
      else {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_653d8392_caseD_2b;
        default:
          goto switchD_653d8392_caseD_2c;
        case 0x30:
switchD_653d8206_caseD_30:
          iVar8 = 1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_653d8392_caseD_44;
        }
      }
      break;
    case 2:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 3;
        goto LAB_653d85a2;
      }
      if (bVar10 == DAT_653dfe44) {
        iVar8 = 5;
      }
      else {
        if (bVar10 == 0x30) goto switchD_653d8206_caseD_30;
        iVar8 = 10;
        pbVar12 = pbVar14;
      }
      break;
    case 3:
      while( true ) {
        bVar2 = true;
        if (DAT_653dfe40 < 2) {
          uVar9 = (byte)PTR_DAT_653dfe50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_653d5f10((uint)param_3 & 0xff,4);
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
      if (bVar10 != DAT_653dfe44) {
        switch(bVar10) {
        case 0x2b:
        case 0x2d:
          goto switchD_653d8392_caseD_2b;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          goto switchD_653d8392_caseD_44;
        }
switchD_653d8392_caseD_2c:
        iVar8 = 10;
        goto LAB_653d85a2;
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
        if (DAT_653dfe40 < 2) {
          uVar9 = (byte)PTR_DAT_653dfe50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar9 = FUN_653d5f10((uint)param_3 & 0xff,4);
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
switchD_653d8392_caseD_2b:
        bVar2 = true;
        pbVar12 = pbVar12 + -1;
        iVar8 = 0xb;
        break;
      default:
        goto switchD_653d8392_caseD_2c;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
switchD_653d8392_caseD_44:
        bVar2 = true;
        iVar8 = 6;
      }
      break;
    case 5:
      bVar4 = true;
      if (DAT_653dfe40 < 2) {
        uVar9 = (byte)PTR_DAT_653dfe50[(uint)bVar10 * 2] & 4;
      }
      else {
        uVar9 = FUN_653d5f10((uint)bVar10,4);
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
        goto LAB_653d85a2;
      }
      if (bVar10 == 0x2b) {
LAB_653d8596:
        iVar8 = 7;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      else {
        if (bVar10 != 0x2d) goto LAB_653d8486;
LAB_653d8587:
        iVar8 = 7;
        local_4c = -1;
        pbVar14 = pbVar11;
        local_50 = pbVar11;
      }
      break;
    case 7:
      if (('0' < (char)bVar10) && ((char)bVar10 < ':')) {
        iVar8 = 9;
        goto LAB_653d85a2;
      }
LAB_653d8486:
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
      if (((char)bVar10 < '1') || ('9' < (char)bVar10)) goto switchD_653d8392_caseD_2c;
      iVar8 = 9;
LAB_653d85a2:
      pbVar12 = pbVar12 + -1;
      break;
    case 9:
      bVar3 = true;
      local_48 = 0;
      while( true ) {
        if (DAT_653dfe40 < 2) {
          uVar13 = (byte)PTR_DAT_653dfe50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_653d5f10((uint)param_3 & 0xff,4);
        }
        if (uVar13 == 0) goto LAB_653d850a;
        local_48 = (char)bVar10 + -0x30 + local_48 * 10;
        if (0x1450 < local_48) break;
        bVar10 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        param_3 = (byte *)CONCAT31(param_3._1_3_,bVar10);
      }
      local_48 = 0x1451;
LAB_653d850a:
      while( true ) {
        if (DAT_653dfe40 < 2) {
          uVar13 = (byte)PTR_DAT_653dfe50[((uint)param_3 & 0xff) * 2] & 4;
        }
        else {
          uVar13 = FUN_653d5f10((uint)param_3 & 0xff,4);
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
      if (param_7 == 0) goto switchD_653d8392_caseD_2c;
      if (bVar10 == 0x2b) goto LAB_653d8596;
      if (bVar10 == 0x2d) goto LAB_653d8587;
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
      goto LAB_653d8674;
    }
    cVar1 = local_5c[-1];
    while (cVar1 == '\0') {
      uVar13 = uVar13 - 1;
      local_60 = local_60 + 1;
      cVar1 = local_5c[-2];
      local_5c = local_5c + -1;
    }
    FUN_653d7fd0(local_1c,uVar13,(uint *)&local_2c);
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
        FUN_653da360((int *)&local_2c,uVar13,param_4);
        pbVar11 = (byte *)CONCAT22(uStack_28,uStack_2a);
        param_3 = local_26;
        goto LAB_653d8674;
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
LAB_653d8674:
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
FUN_653d8860(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

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
LAB_653d8a6f:
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
  FUN_653da360((int *)&local_10,-(int)sVar10,1);
  if (0x3ffe < CONCAT11(cStack_5,local_6)) {
    sVar10 = sVar10 + 1;
    FUN_653da0a0((int *)&local_10,(int *)&local_1c);
  }
  *psVar1 = sVar10;
  iVar9 = param_4;
  if (((param_5 & 1) != 0) && (iVar9 = param_4 + sVar10, param_4 + sVar10 < 1)) {
    *psVar1 = 0;
    goto LAB_653d8a6f;
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
    FUN_653d7f70((uint *)&local_10);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar11 < 0) {
    for (uVar5 = -iVar11 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_653d7fa0((uint *)&local_10);
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
      FUN_653d7f70((uint *)&local_10);
      FUN_653d7f70((uint *)&local_10);
      FUN_653d7f00((uint *)&local_10,&param_1);
      FUN_653d7f70((uint *)&local_10);
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
      if (psVar1 <= psVar8) goto LAB_653d8bc6;
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
      goto LAB_653d8bc6;
    }
  }
  psVar8 = (short *)((int)psVar8 + 1);
  *param_6 = *param_6 + 1;
  *(char *)psVar8 = *(char *)psVar8 + '\x01';
LAB_653d8bc6:
  cVar4 = ((char)psVar8 - (char)param_6) + -3;
  *(char *)((int)param_6 + 3) = cVar4;
  *(undefined1 *)((int)param_6 + cVar4 + 4) = 0;
  return 1;
}



int __cdecl FUN_653d8cf0(uint param_1,char *param_2,DWORD param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_653e14a0) &&
     ((*(byte *)((&DAT_653e13a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_653d7950(param_1);
    iVar1 = FUN_653d8d70(param_1,param_2,param_3);
    FUN_653d79c0(param_1);
    return iVar1;
  }
  pDVar2 = FUN_653d5c70();
  *pDVar2 = 9;
  pDVar2 = FUN_653d5c80();
  *pDVar2 = 0;
  return -1;
}



int __cdecl FUN_653d8d70(uint param_1,char *param_2,DWORD param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char cStack_9;
  DWORD local_8;
  int *local_4;
  
  iVar8 = 0;
  if (param_3 != 0) {
    piVar1 = &DAT_653e13a0 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 0x24;
    bVar3 = *(byte *)(iVar7 + 4 + (&DAT_653e13a0)[(int)param_1 >> 5]);
    if ((bVar3 & 2) == 0) {
      pcVar10 = param_2;
      if (((bVar3 & 0x48) != 0) &&
         (cVar2 = *(char *)(iVar7 + (&DAT_653e13a0)[(int)param_1 >> 5] + 5), cVar2 != '\n')) {
        *param_2 = cVar2;
        param_3 = param_3 - 1;
        pcVar10 = param_2 + 1;
        iVar8 = 1;
        *(undefined1 *)(iVar7 + 5 + *piVar1) = 10;
      }
      local_4 = piVar1;
      BVar4 = ReadFile(*(HANDLE *)(iVar7 + *piVar1),pcVar10,param_3,&local_8,(LPOVERLAPPED)0x0);
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
          pcVar10 = param_2;
          pcVar11 = param_2;
          if (param_2 < pcVar9) {
            while (cVar2 = *pcVar11, cVar2 != '\x1a') {
              if (cVar2 == '\r') {
                if (pcVar11 < pcVar9 + -1) {
                  if (pcVar11[1] == '\n') {
                    pcVar11 = pcVar11 + 2;
                    *pcVar10 = '\n';
                    goto LAB_653d8f48;
                  }
                  *pcVar10 = '\r';
                  pcVar10 = pcVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                else {
                  DVar5 = 0;
                  pcVar11 = pcVar11 + 1;
                  BVar4 = ReadFile(*(HANDLE *)(iVar7 + *local_4),&cStack_9,1,&local_8,
                                   (LPOVERLAPPED)0x0);
                  if (BVar4 == 0) {
                    DVar5 = GetLastError();
                  }
                  if ((DVar5 == 0) && (local_8 != 0)) {
                    if ((*(byte *)(iVar7 + 4 + *local_4) & 0x48) == 0) {
                      if ((pcVar10 == param_2) && (cStack_9 == '\n')) {
                        *pcVar10 = '\n';
                        goto LAB_653d8f48;
                      }
                      FUN_653d6df0(param_1,-1,1);
                      if (cStack_9 != '\n') goto LAB_653d8f45;
                    }
                    else {
                      if (cStack_9 == '\n') {
                        *pcVar10 = '\n';
                        goto LAB_653d8f48;
                      }
                      *pcVar10 = '\r';
                      pcVar10 = pcVar10 + 1;
                      *(char *)(iVar7 + 5 + *local_4) = cStack_9;
                    }
                  }
                  else {
LAB_653d8f45:
                    *pcVar10 = '\r';
LAB_653d8f48:
                    pcVar10 = pcVar10 + 1;
                  }
                }
              }
              else {
                *pcVar10 = cVar2;
                pcVar10 = pcVar10 + 1;
                pcVar11 = pcVar11 + 1;
              }
              if (pcVar9 <= pcVar11) {
                return (int)pcVar10 - (int)param_2;
              }
            }
            bVar3 = *(byte *)(iVar7 + 4 + *local_4);
            if ((bVar3 & 0x40) == 0) {
              *(byte *)(iVar7 + 4 + *local_4) = bVar3 | 2;
            }
          }
          iVar8 = (int)pcVar10 - (int)param_2;
        }
        return iVar8;
      }
      DVar5 = GetLastError();
      if (DVar5 == 5) {
        pDVar6 = FUN_653d5c70();
        *pDVar6 = 9;
        pDVar6 = FUN_653d5c80();
        *pDVar6 = 5;
        return -1;
      }
      if (DVar5 != 0x6d) {
        FUN_653d5bf0(DVar5);
        return -1;
      }
    }
  }
  return 0;
}



byte * __cdecl FUN_653d8fa0(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (DAT_653e1154 == 0) {
    pbVar3 = (byte *)_strchr((char *)param_1,param_2);
    return pbVar3;
  }
  FUN_653d2300(0x19);
  bVar1 = *param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_653e1050 + uVar2 + 1) & 4) == 0) {
      pbVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      pbVar3 = param_1 + 1;
      if (param_1[1] == 0) {
        FUN_653d2380(0x19);
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,param_1[1])) {
        FUN_653d2380(0x19);
        return param_1;
      }
    }
    param_1 = pbVar3 + 1;
    bVar1 = pbVar3[1];
  }
  FUN_653d2380(0x19);
  return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
}



char * __cdecl FUN_653d9070(char *param_1)

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
    pcVar2 = (char *)FUN_653d0b40(~uVar3);
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



uint __cdecl FUN_653d9170(char *param_1)

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
  
  uVar40 = (uint)DAT_653e1296;
  pcVar44 = (char *)(uint)DAT_653e1298;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_653da4c0(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_653da4c0(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_653da4c0(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_653da4c0(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_653da4c0(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_653da4c0(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_653da4c0(1,uVar40,0x37,param_1);
  uVar8 = FUN_653da4c0(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_653da4c0(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_653da4c0(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_653da4c0(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_653da4c0(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_653da4c0(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_653da4c0(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_653da4c0(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_653da4c0(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_653da4c0(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_653da4c0(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_653da4c0(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_653da4c0(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_653da4c0(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_653da4c0(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_653da4c0(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_653da4c0(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_653da4c0(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_653da4c0(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_653da4c0(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_653da4c0(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_653da4c0(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_653da4c0(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_653da4c0(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_653da4c0(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_653da4c0(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_653da4c0(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_653da4c0(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_653da4c0(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_653da4c0(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_653da4c0(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_653da4c0(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_653da4c0(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_653da4c0(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_653da4c0(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_653d9730(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



void __cdecl FUN_653d94f0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_653d03a0((undefined *)param_1[1]);
    FUN_653d03a0((undefined *)param_1[2]);
    FUN_653d03a0((undefined *)param_1[3]);
    FUN_653d03a0((undefined *)param_1[4]);
    FUN_653d03a0((undefined *)param_1[5]);
    FUN_653d03a0((undefined *)param_1[6]);
    FUN_653d03a0((undefined *)*param_1);
    FUN_653d03a0((undefined *)param_1[8]);
    FUN_653d03a0((undefined *)param_1[9]);
    FUN_653d03a0((undefined *)param_1[10]);
    FUN_653d03a0((undefined *)param_1[0xb]);
    FUN_653d03a0((undefined *)param_1[0xc]);
    FUN_653d03a0((undefined *)param_1[0xd]);
    FUN_653d03a0((undefined *)param_1[7]);
    FUN_653d03a0((undefined *)param_1[0xe]);
    FUN_653d03a0((undefined *)param_1[0xf]);
    FUN_653d03a0((undefined *)param_1[0x10]);
    FUN_653d03a0((undefined *)param_1[0x11]);
    FUN_653d03a0((undefined *)param_1[0x12]);
    FUN_653d03a0((undefined *)param_1[0x13]);
    FUN_653d03a0((undefined *)param_1[0x14]);
    FUN_653d03a0((undefined *)param_1[0x15]);
    FUN_653d03a0((undefined *)param_1[0x16]);
    FUN_653d03a0((undefined *)param_1[0x17]);
    FUN_653d03a0((undefined *)param_1[0x18]);
    FUN_653d03a0((undefined *)param_1[0x19]);
    FUN_653d03a0((undefined *)param_1[0x1a]);
    FUN_653d03a0((undefined *)param_1[0x1b]);
    FUN_653d03a0((undefined *)param_1[0x1c]);
    FUN_653d03a0((undefined *)param_1[0x1d]);
    FUN_653d03a0((undefined *)param_1[0x1e]);
    FUN_653d03a0((undefined *)param_1[0x1f]);
    FUN_653d03a0((undefined *)param_1[0x20]);
    FUN_653d03a0((undefined *)param_1[0x21]);
    FUN_653d03a0((undefined *)param_1[0x22]);
    FUN_653d03a0((undefined *)param_1[0x23]);
    FUN_653d03a0((undefined *)param_1[0x24]);
    FUN_653d03a0((undefined *)param_1[0x25]);
    FUN_653d03a0((undefined *)param_1[0x26]);
    FUN_653d03a0((undefined *)param_1[0x27]);
    FUN_653d03a0((undefined *)param_1[0x28]);
    FUN_653d03a0((undefined *)param_1[0x29]);
    FUN_653d03a0((undefined *)param_1[0x2a]);
  }
  return;
}



uint __cdecl FUN_653d9730(char *param_1,int param_2)

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
  uVar3 = FUN_653da4c0(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_653da4c0(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_653da4c0(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (undefined1 *)FUN_653d0b40(0xd);
  *(undefined1 **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_653d97cc;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_653d97cc;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_653d97cc:
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
  FUN_653d03a0(param_1);
  return 0;
}



void __cdecl FUN_653d9a30(char *param_1)

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
      if (cVar2 != ';') goto LAB_653d9a46;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_653d9a46:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



uint __cdecl FUN_653d9b60(int param_1)

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
  
  uVar15 = (uint)DAT_653e128c;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_653da4c0(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_653da4c0(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_653da4c0(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_653da4c0(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_653da4c0(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_653d9a30(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_653da4c0(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_653da4c0(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_653da4c0(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_653da4c0(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_653da4c0(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_653da4c0(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_653da4c0(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_653da4c0(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_653da4c0(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_653da4c0(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



void __cdecl FUN_653d9cb0(int param_1)

{
  if ((param_1 != 0) && (*(undefined **)(param_1 + 0xc) != &DAT_653e12b0)) {
    FUN_653d03a0(*(undefined **)(param_1 + 0xc));
    FUN_653d03a0(*(undefined **)(param_1 + 0x10));
    FUN_653d03a0(*(undefined **)(param_1 + 0x14));
    FUN_653d03a0(*(undefined **)(param_1 + 0x18));
    FUN_653d03a0(*(undefined **)(param_1 + 0x1c));
    FUN_653d03a0(*(undefined **)(param_1 + 0x20));
    FUN_653d03a0(*(undefined **)(param_1 + 0x24));
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



void __cdecl FUN_653da0a0(int *param_1,int *param_2)

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
        iVar2 = FUN_653d7ed0(*(uint *)(local_20 + -2),(uint)*puVar8 * (uint)*puVar7,
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
    FUN_653d7f70((uint *)&local_c);
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
        FUN_653d7fa0((uint *)&local_c);
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



void __cdecl FUN_653da360(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined2 local_c;
  undefined4 uStack_a;
  undefined2 uStack_6;
  undefined *local_4;
  
  ppuVar3 = &PTR_s_November_653e0a80;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      ppuVar3 = (undefined **)0x653e0be0;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      ppuVar3 = ppuVar3 + 0x15;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        ppuVar2 = ppuVar3 + uVar1 * 3;
        if (0x7fff < *(ushort *)(ppuVar3 + uVar1 * 3)) {
          local_c = SUB42(*ppuVar2,0);
          uStack_a._0_2_ = (undefined2)((uint)*ppuVar2 >> 0x10);
          uStack_a._2_2_ = SUB42(ppuVar2[1],0);
          uStack_6 = (undefined2)((uint)ppuVar2[1] >> 0x10);
          local_4 = ppuVar2[2];
          uStack_a = CONCAT22(uStack_a._2_2_,(undefined2)uStack_a) + -1;
          ppuVar2 = (undefined **)&local_c;
        }
        FUN_653da0a0(param_1,(int *)ppuVar2);
      }
    }
  }
  return;
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



undefined4 __cdecl FUN_653da4c0(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

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
    iVar5 = FUN_653da670(param_2,param_3,(LPWSTR)&DAT_653e12a8,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_653e12a8;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_653dfe40 < 2) {
          uVar3 = (byte)PTR_DAT_653dfe50[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_653d5f10((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x653e12af < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_653da7a0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_653da7a0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_653d0b40(uVar3), _Source == (LPSTR)0x0)) goto LAB_653da570;
    bVar2 = true;
    uVar3 = FUN_653da7a0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_653da570;
  }
  _Dest = (char *)FUN_653d0b40(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_653d03a0(_Source);
    return 0;
  }
LAB_653da570:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_653d03a0(_Source);
  return 0xffffffff;
}



int __cdecl FUN_653da670(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_653e12b4 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_653e12b4 = 2;
    }
    else {
      DAT_653e12b4 = 1;
    }
  }
  if (DAT_653e12b4 == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_653e12b4 != 2) {
    return DAT_653e12b4;
  }
  if (param_5 == 0) {
    param_5 = DAT_653e1230;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_653d0b40(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_653d03a0(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_653d03a0(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_653d03a0(lpLCData);
    return 0;
  }
  return 0;
}



int __cdecl FUN_653da7a0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_653e12b8 == 0) {
    iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_653e12b8 = 1;
    }
    else {
      DAT_653e12b8 = 2;
    }
  }
  if (DAT_653e12b8 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_653e12b8 != 1) {
    return DAT_653e12b8;
  }
  if (param_5 == 0) {
    param_5 = DAT_653e1230;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_653d0b40(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_653d03a0((undefined *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_653d03a0((undefined *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_653d03a0((undefined *)lpLCData);
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl FUN_653da8e0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = _DAT_653e1380;
  if (DAT_653e1220 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_653da92e;
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
LAB_653da92e:
    uVar6 = (uint)(char)bVar5;
  }
  else {
    LOCK();
    _DAT_653e1380 = _DAT_653e1380 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_653e137c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_653e1380 = iVar2;
      FUN_653d2300(0x13);
    }
    uVar8 = (uint)bVar1;
    uVar6 = 0xff;
    uVar7 = 0;
    do {
      do {
        if ((char)uVar6 == '\0') goto LAB_653da98f;
        bVar5 = *param_2;
        uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar7 = FUN_653d6040(uVar7);
      uVar6 = FUN_653d6040(uVar6);
    } while ((byte)uVar7 == (byte)uVar6);
    uVar7 = (uint)((byte)uVar7 < (byte)uVar6);
    uVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
LAB_653da98f:
    if (uVar8 == 0) {
      LOCK();
      _DAT_653e1380 = _DAT_653e1380 + -1;
      UNLOCK();
    }
    else {
      FUN_653d2380(0x13);
    }
  }
  return uVar6;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x653da9b0. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


