typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef GUID CLSID;

typedef CLSID *LPCLSID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef GUID IID;

typedef ulong DWORD;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef DWORD *LPDWORD;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

struct HINSTANCE__ {
    int unused;
};

typedef void *HANDLE;

typedef HANDLE HGLOBAL;

typedef uchar BYTE;

typedef int BOOL;

typedef BOOL *LPBOOL;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *PFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef void *LPVOID;

typedef HINSTANCE HMODULE;

typedef BYTE *LPBYTE;

typedef uint UINT;

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

typedef struct IMAGE_BOUND_IMPORT_DESCRIPTOR_0 IMAGE_BOUND_IMPORT_DESCRIPTOR_0, *PIMAGE_BOUND_IMPORT_DESCRIPTOR_0;

struct IMAGE_BOUND_IMPORT_DESCRIPTOR_0 {
    dword TimeDateStamp;
    word OffsetModuleName;
    word NumberOfModuleForwarderRefs;
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

typedef long LONG;

typedef LONG LSTATUS;

typedef DWORD ACCESS_MASK;

typedef ACCESS_MASK REGSAM;

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef long HRESULT;

typedef wchar_t WCHAR;

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef WCHAR *LPCWSTR;

typedef DWORD LCID;

typedef CHAR *LPSTR;

typedef WCHAR *LPWSTR;

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

typedef uint UINT_PTR;

typedef ulong ULONG_PTR;

typedef ULONG_PTR SIZE_T;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef OLECHAR *LPCOLESTR;



undefined DAT_771b1160;
undefined4 DAT_771b5564;
undefined *PTR_LAB_771b1198;
undefined *PTR_LAB_771b11b8;
undefined *PTR_u_CLSID_771b5570;
undefined *PTR_LAB_771b11d8;
undefined4 DAT_771b5568;
undefined1 DAT_771b1438;
int DAT_771b5564;
undefined LAB_771b14a8;
undefined DAT_771b5000;
undefined *PTR_s_Component_Categories_771b5574;
undefined1 DAT_771b1140;
undefined *PTR_LAB_771b1328;
undefined *PTR_LAB_771b1338;
undefined *PTR_LAB_771b1360;
undefined *PTR_LAB_771b1388;
undefined *PTR_LAB_771b13b0;
undefined *PTR_FUN_771b13d8;
undefined1 DAT_771b1150;
int DAT_771b5568;
undefined1 DAT_771b5588;
unicode u_Insertable_771b559c;
undefined DAT_771b5aec;
undefined1 DAT_771b1120;
undefined *PTR_u_Implemented_Categories_771b5578;
undefined *PTR_u_Required_Categories_771b557c;
undefined DAT_771b1410;

undefined4 * __fastcall FUN_771b17b2(undefined4 *param_1)

{
  *param_1 = &DAT_771b1160;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



undefined4 __thiscall FUN_771b17c9(void *this,undefined4 param_1)

{
  LSTATUS LVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  LVar1 = RegOpenKeyA((HKEY)0x80000000,"Component Categories",(PHKEY)((int)this + 4));
  if (LVar1 != 0) {
    *(PHKEY)((int)this + 4) = (HKEY)0x0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}



void __fastcall FUN_771b1800(undefined4 *param_1)

{
  *param_1 = &DAT_771b1160;
  if ((HKEY)param_1[1] != (HKEY)0x0) {
    RegCloseKey((HKEY)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



int FUN_771b1881(undefined4 *param_1)

{
  LONG LVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  InterlockedDecrement(&DAT_771b5564);
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (LVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      FUN_771b1b10(param_1);
      FUN_771b3bc9(param_1);
    }
    iVar2 = 0;
  }
  return iVar2;
}



uint FUN_771b19ed(int *param_1,uint param_2)

{
  LPVOID pv;
  uint uVar1;
  uint local_8;
  
  pv = CoTaskMemAlloc(param_2 << 4);
  uVar1 = 0x8007000e;
  if (pv != (LPVOID)0x0) {
    local_8 = 0;
    (**(code **)(*param_1 + 0xc))(param_1,param_2,pv,&local_8);
    CoTaskMemFree(pv);
    uVar1 = (uint)(local_8 < param_2);
  }
  return uVar1;
}



undefined4 * __fastcall FUN_771b1add(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_771b1198;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



undefined4 __thiscall FUN_771b1afd(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return 0;
}



void __fastcall FUN_771b1b10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  *param_1 = &PTR_LAB_771b1198;
  if (piVar1 == (int *)0x0) {
    if ((HKEY)param_1[3] != (HKEY)0x0) {
      RegCloseKey((HKEY)param_1[3]);
      param_1[3] = 0;
    }
    if ((HKEY)param_1[5] != (HKEY)0x0) {
      RegCloseKey((HKEY)param_1[5]);
      param_1[5] = 0;
    }
  }
  else {
    param_1[7] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



undefined4 FUN_771b1d22(int *param_1,int param_2)

{
  LPVOID pv;
  undefined4 uVar1;
  undefined4 local_8;
  
  pv = CoTaskMemAlloc(param_2 << 4);
  uVar1 = 0x8007000e;
  if (pv != (LPVOID)0x0) {
    local_8 = 0;
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,pv,&local_8);
    CoTaskMemFree(pv);
  }
  return uVar1;
}



undefined4 * __fastcall FUN_771b1e0a(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_771b11b8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



undefined4 __thiscall
FUN_771b1e2d(void *this,int param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  CHAR local_c [8];
  
  WideCharToMultiByte(0,0,(LPCWSTR)PTR_u_CLSID_771b5570,-1,local_c,8,(LPCSTR)0x0,(LPBOOL)0x0);
  LVar1 = RegOpenKeyA((HKEY)0x80000000,local_c,(PHKEY)((int)this + 8));
  if (LVar1 == 0) {
    if (param_1 == -1) {
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    else {
      puVar3 = (undefined4 *)CoTaskMemAlloc(param_1 << 4);
      *(undefined4 **)((int)this + 0x14) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      for (uVar4 = (uint)(param_1 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 == -1) {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    else {
      puVar3 = (undefined4 *)CoTaskMemAlloc(param_3 << 4);
      *(undefined4 **)((int)this + 0x1c) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      for (uVar4 = (uint)(param_3 << 4) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *param_4;
        param_4 = param_4 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    *(int *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 0x18) = param_3;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8000ffff;
  }
  return uVar2;
}



void __fastcall FUN_771b1efe(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[8];
  *param_1 = &PTR_LAB_771b11b8;
  if (piVar1 == (int *)0x0) {
    if ((HKEY)param_1[2] != (HKEY)0x0) {
      RegCloseKey((HKEY)param_1[2]);
      param_1[2] = 0;
    }
    if ((LPVOID)param_1[5] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_1[5]);
      param_1[5] = 0;
    }
    if ((LPVOID)param_1[7] != (LPVOID)0x0) {
      CoTaskMemFree((LPVOID)param_1[7]);
      param_1[7] = 0;
    }
  }
  else {
    param_1[8] = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



undefined4 * __fastcall FUN_771b203c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_771b11d8;
  param_1[1] = 0;
  return param_1;
}



HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined1 uVar6;
  HKEY local_8;
  
                    // 0x20ee  2  DllGetClassObject
  DAT_771b5568 = 1;
  local_8 = (HKEY)0x0;
  RegOpenKeyW((HKEY)0x80000000,L"CLSID",&local_8);
  uVar6 = local_8 == (HKEY)0x0;
  if ((bool)uVar6) {
    DAT_771b5568 = 0;
  }
  else {
    RegCloseKey(local_8);
  }
  iVar3 = 0x10;
  *ppv = (LPVOID)0x0;
  pcVar5 = &DAT_771b1438;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    uVar6 = (char)rclsid->Data1 == *pcVar5;
    rclsid = (IID *)((int)&rclsid->Data1 + 1);
    pcVar5 = pcVar5 + 1;
  } while ((bool)uVar6);
  if ((bool)uVar6) {
    puVar4 = (undefined4 *)0x0;
    puVar1 = (undefined4 *)FUN_771b3bbc(8);
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = FUN_771b203c(puVar1);
    }
    iVar3 = (**(code **)*puVar4)(puVar4,riid,ppv);
    if (iVar3 < 0) {
      FUN_771b3bc9(puVar4);
      HVar2 = -0x7ff8ffa9;
      *ppv = (LPVOID)0x0;
    }
    else {
      HVar2 = 0;
    }
  }
  else {
    HVar2 = -0x7ffbfeef;
  }
  return HVar2;
}



HRESULT DllCanUnloadNow(void)

{
                    // 0x219b  1  DllCanUnloadNow
  return (uint)(DAT_771b5564 != 0);
}



HRESULT DllRegisterServer(void)

{
  LSTATUS LVar1;
  HRESULT HVar2;
  HMODULE hModule;
  DWORD DVar3;
  int iVar4;
  BYTE local_124 [264];
  HKEY local_1c;
  DWORD local_18;
  int *local_14;
  int *local_10;
  HKEY local_c;
  HKEY local_8;
  
                    // 0x21a6  3  DllRegisterServer
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  LVar1 = RegCreateKeyExA((HKEY)0x80000000,"CLSID\\{0002E005-0000-0000-C000-000000000046}",0,"",0,
                          0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_18);
  if (LVar1 == 0) {
    LVar1 = RegSetValueExA(local_8,"",0,1,(BYTE *)"Component Categories Manager",0x1d);
    if (LVar1 == 0) {
      LVar1 = RegCreateKeyExA(local_8,"InprocServer32",0,"",0,0x20006,(LPSECURITY_ATTRIBUTES)0x0,
                              &local_c,&local_18);
      if (LVar1 == 0) {
        hModule = GetModuleHandleA("comcat.DLL");
        if (hModule == (HMODULE)0x0) {
          RegCloseKey(local_c);
          RegCloseKey(local_8);
          HVar2 = -0x7fff0001;
        }
        else {
          DVar3 = GetModuleFileNameA(hModule,(LPSTR)local_124,0x105);
          if (DVar3 == 0) {
            RegCloseKey(local_c);
            RegCloseKey(local_8);
            HVar2 = -0x7fff0001;
          }
          else {
            iVar4 = lstrlenA((LPCSTR)local_124);
            LVar1 = RegSetValueExA(local_c,"",0,1,local_124,iVar4 + 1);
            if (LVar1 == 0) {
              LVar1 = RegSetValueExA(local_c,"ThreadingModel",0,1,"Both",5);
              if (LVar1 == 0) {
                RegCloseKey(local_c);
                RegCloseKey(local_8);
                LVar1 = RegCreateKeyExA((HKEY)0x80000000,PTR_s_Component_Categories_771b5574,0,"",0,
                                        0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_1c,&local_18);
                if (LVar1 == 0) {
                  RegCloseKey(local_1c);
                  HVar2 = DllGetClassObject((IID *)&DAT_771b1438,(IID *)&LAB_771b14a8,&local_14);
                  if (-1 < HVar2) {
                    HVar2 = (**(code **)(*local_14 + 0xc))(local_14,0,&DAT_771b1140,&local_10);
                    (**(code **)(*local_14 + 8))(local_14);
                    if (-1 < HVar2) {
                      HVar2 = (**(code **)(*local_10 + 0xc))(local_10,5,&DAT_771b5000);
                      (**(code **)(*local_10 + 8))(local_10);
                    }
                  }
                }
                else {
                  HVar2 = -0x7fff0001;
                }
              }
              else {
                RegCloseKey(local_c);
                RegCloseKey(local_8);
                HVar2 = -0x7fff0001;
              }
            }
            else {
              RegCloseKey(local_c);
              RegCloseKey(local_8);
              HVar2 = -0x7fff0001;
            }
          }
        }
      }
      else {
        RegCloseKey(local_8);
        HVar2 = -0x7fff0001;
      }
    }
    else {
      RegCloseKey(local_8);
      HVar2 = -0x7fff0001;
    }
  }
  else {
    HVar2 = -0x7fff0001;
  }
  return HVar2;
}



uint DllUnregisterServer(void)

{
  LSTATUS LVar1;
  uint uVar2;
  
                    // 0x23dd  4  DllUnregisterServer
  LVar1 = RegDeleteKeyA((HKEY)0x80000000,
                        "CLSID\\{0002E005-0000-0000-C000-000000000046}\\InprocServer32");
  uVar2 = 0x8000ffff;
  if (LVar1 == 0) {
    LVar1 = RegDeleteKeyA((HKEY)0x80000000,"CLSID\\{0002E005-0000-0000-C000-000000000046}");
    uVar2 = (LVar1 == 0) - 1 & 0x8000ffff;
  }
  return uVar2;
}



undefined8 __fastcall FUN_771b2417(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_771b1360;
  param_1[1] = &PTR_LAB_771b1338;
  *param_1 = &PTR_LAB_771b13b0;
  param_1[1] = &PTR_LAB_771b1388;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return CONCAT44(&PTR_LAB_771b1328,param_1);
}



undefined4 __thiscall FUN_771b2445(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  this_00 = (void *)FUN_771b3bbc(8);
  if (this_00 == (void *)0x0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    puVar1 = FUN_771b251d(this_00,this);
    *(undefined4 **)((int)this + 8) = puVar1;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar2 = 0x8007000e;
  }
  else {
    *(int *)((int)this + 0xc) = param_1;
    if (param_1 == 0) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 8);
    }
    uVar2 = 0;
  }
  return uVar2;
}



void __fastcall FUN_771b248c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_771b13b0;
  param_1[1] = &PTR_LAB_771b1388;
  if ((HGLOBAL)param_1[2] != (HGLOBAL)0x0) {
    FUN_771b3bc9((HGLOBAL)param_1[2]);
  }
  return;
}



undefined4 * __thiscall FUN_771b251d(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_771b13d8;
  *(undefined4 *)((int)this + 4) = param_1;
  return (undefined4 *)this;
}



undefined4 FUN_771b252f(LPVOID param_1,char *param_2,int *param_3)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  BVar2 = IsBadWritePtr(param_1,8);
  bVar7 = BVar2 == 0;
  if (bVar7) {
    iVar4 = 0x10;
    pcVar5 = param_2;
    pcVar6 = "";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      *param_3 = *(int *)(*(int *)((int)param_1 + 4) + 8);
      piVar1 = *(int **)(*(int *)((int)param_1 + 4) + 8);
      (**(code **)(*piVar1 + 4))(piVar1);
      uVar3 = 0;
    }
    else {
      iVar4 = 0x10;
      pcVar5 = param_2;
      pcVar6 = &DAT_771b1140;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pcVar5 == *pcVar6;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
      if (bVar7) {
        *param_3 = *(int *)((int)param_1 + 4);
      }
      else {
        iVar4 = 0x10;
        pcVar5 = &DAT_771b1150;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *param_2 == *pcVar5;
          param_2 = param_2 + 1;
          pcVar5 = pcVar5 + 1;
        } while (bVar7);
        if (!bVar7) {
          *param_3 = 0;
          return 0x80004002;
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          *param_3 = 0;
        }
        else {
          *param_3 = *(int *)((int)param_1 + 4) + 4;
        }
      }
      (**(code **)(**(int **)((int)param_1 + 4) + 4))(*(int **)((int)param_1 + 4));
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x80004003;
  }
  return uVar3;
}



undefined4 FUN_771b267b(LPVOID param_1,uint param_2,void *param_3)

{
  BOOL BVar1;
  LSTATUS LVar2;
  int iVar3;
  LPCWSTR lpWideCharStr;
  OLECHAR local_9c [40];
  WCHAR local_4c [16];
  CHAR local_2c [16];
  uint local_1c;
  HKEY local_18;
  HKEY local_14;
  LSTATUS local_10;
  undefined4 local_c;
  BYTE *local_8;
  
  BVar1 = IsBadWritePtr(param_1,0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_3,param_2 * 0x114);
    if (BVar1 == 0) {
      local_c = 0;
      LVar2 = RegCreateKeyExA((HKEY)0x80000000,PTR_s_Component_Categories_771b5574,0,(LPSTR)0x0,0,
                              0x20006,(LPSECURITY_ATTRIBUTES)0x0,&local_14,(LPDWORD)0x0);
      if (LVar2 == 0) {
        local_1c = 0;
        if (param_2 != 0) {
          lpWideCharStr = (LPCWSTR)((int)param_3 + 0x14);
          do {
            wsprintfA(local_2c,"%lX",*(undefined4 *)(lpWideCharStr + -2));
            iVar3 = StringFromGUID2((GUID *)(lpWideCharStr + -10),local_9c,0x28);
            if (iVar3 == 0) {
              local_c = 1;
              break;
            }
            if (DAT_771b5568 == 0) {
              iVar3 = WideCharToMultiByte(0,0,local_9c,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
              if (iVar3 == 0) goto LAB_771b27cf;
              local_8 = (BYTE *)FUN_771b3bbc(iVar3 + 1);
              if (local_8 != (BYTE *)0x0) {
                WideCharToMultiByte(0,0,local_9c,-1,(LPSTR)local_8,iVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
                local_10 = RegCreateKeyExA(local_14,(LPCSTR)local_8,0,(LPSTR)0x0,0,0x20006,
                                           (LPSECURITY_ATTRIBUTES)0x0,&local_18,(LPDWORD)0x0);
                FUN_771b3bc9(local_8);
                goto LAB_771b27cf;
              }
              RegCloseKey(local_14);
LAB_771b28c8:
              local_c = 0x8007000e;
              break;
            }
            local_10 = RegCreateKeyExW(local_14,local_9c,0,(LPWSTR)0x0,0,0x20006,
                                       (LPSECURITY_ATTRIBUTES)0x0,&local_18,(LPDWORD)0x0);
LAB_771b27cf:
            if (local_10 != 0) {
              local_c = 1;
              break;
            }
            if (DAT_771b5568 == 0) {
              iVar3 = WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0)
              ;
              local_8 = (BYTE *)FUN_771b3bbc(iVar3 + 1);
              if (local_8 == (BYTE *)0x0) goto LAB_771b28c8;
              WideCharToMultiByte(0,0,lpWideCharStr,-1,(LPSTR)local_8,iVar3 + 1,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
              iVar3 = lstrlenA((LPCSTR)local_8);
              local_10 = RegSetValueExA(local_18,local_2c,0,1,local_8,iVar3 + 1);
              FUN_771b3bc9(local_8);
            }
            else {
              MultiByteToWideChar(0,0,local_2c,-1,local_4c,0x28);
              iVar3 = lstrlenW(lpWideCharStr);
              local_10 = RegSetValueExW(local_18,local_4c,0,1,(BYTE *)lpWideCharStr,iVar3 * 2 + 2);
            }
            RegCloseKey(local_18);
            if (local_10 != 0) {
              local_c = 1;
              break;
            }
            lpWideCharStr = lpWideCharStr + 0x8a;
            local_1c = local_1c + 1;
          } while (local_1c < param_2);
        }
        RegCloseKey(local_14);
      }
      else {
        local_c = 1;
      }
    }
    else {
      local_c = 0x80070057;
    }
  }
  else {
    local_c = 0x80004003;
  }
  return local_c;
}



LSTATUS FUN_771b28e4(HKEY param_1,LPCSTR param_2)

{
  LSTATUS LVar1;
  CHAR local_108 [256];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA(param_1,param_2,&local_8);
  if (LVar1 == 0) {
    do {
      LVar1 = RegEnumKeyA(local_8,0,local_108,0xff);
      if (LVar1 != 0) break;
      LVar1 = FUN_771b28e4(local_8,local_108);
    } while (LVar1 == 0);
    if ((LVar1 == 0x103) || (LVar1 == 0x3f2)) {
      LVar1 = RegDeleteKeyA(param_1,param_2);
    }
    RegCloseKey(local_8);
  }
  return LVar1;
}



LSTATUS FUN_771b2966(LPVOID param_1,uint param_2,GUID *param_3)

{
  BOOL BVar1;
  LSTATUS LVar2;
  int iVar3;
  uint uVar4;
  CHAR local_158 [260];
  OLECHAR local_54 [40];
  
  BVar1 = IsBadWritePtr(param_1,0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_3,param_2 << 4);
    if (BVar1 == 0) {
      LVar2 = 0;
      uVar4 = 0;
      if (param_2 != 0) {
        do {
          iVar3 = StringFromGUID2(param_3,local_54,0x28);
          if (iVar3 < 0) {
            return iVar3;
          }
          wsprintfA(local_158,"%s\\%S",PTR_s_Component_Categories_771b5574,local_54);
          LVar2 = FUN_771b28e4((HKEY)0x80000000,local_158);
          if (LVar2 < 0) {
            return LVar2;
          }
          param_3 = param_3 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 < param_2);
      }
    }
    else {
      LVar2 = -0x7fffbffd;
    }
  }
  else {
    LVar2 = -0x7fffbffd;
  }
  return LVar2;
}



undefined4 FUN_771b2a06(LPSTR param_1,undefined4 param_2,undefined4 param_3)

{
  wsprintfA(param_1,"%S\\%S\\%S",PTR_u_CLSID_771b5570,param_2,param_3);
  return 0;
}



int __thiscall FUN_771b2a2b(void *this,GUID *param_1,uint param_2,GUID *param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  LSTATUS LVar3;
  int iVar4;
  char *pcVar5;
  GUID *pGVar6;
  char *pcVar7;
  bool bVar8;
  CHAR local_3c4 [260];
  CHAR local_2c0 [260];
  CHAR local_1bc [260];
  OLECHAR local_b8 [40];
  OLECHAR local_68 [40];
  HKEY local_18;
  uint local_14;
  void *local_10;
  HKEY local_c;
  GUID *local_8;
  
  local_10 = this;
  BVar1 = IsBadWritePtr(this,0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_1,0x10);
    if (BVar1 == 0) {
      BVar1 = IsBadReadPtr(param_3,param_2 << 4);
      if (BVar1 == 0) {
        if (param_2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = StringFromGUID2(param_1,local_68,0x28);
          if (-1 < iVar2) {
            FUN_771b2a06(local_1bc,local_68,param_4);
            LVar3 = RegCreateKeyExA((HKEY)0x80000000,local_1bc,0,(LPSTR)0x0,0,0x20006,
                                    (LPSECURITY_ATTRIBUTES)0x0,&local_18,(LPDWORD)0x0);
            if (LVar3 == 0) {
              local_14 = 0;
              bVar8 = param_2 == 0;
              if (!bVar8) {
                local_8 = param_3;
                do {
                  iVar2 = 0;
                  pcVar5 = &DAT_771b5588;
                  do {
                    iVar4 = 0x10;
                    pGVar6 = local_8;
                    pcVar7 = pcVar5;
                    do {
                      if (iVar4 == 0) break;
                      iVar4 = iVar4 + -1;
                      bVar8 = (char)pGVar6->Data1 == *pcVar7;
                      pGVar6 = (GUID *)((int)&pGVar6->Data1 + 1);
                      pcVar7 = pcVar7 + 1;
                    } while (bVar8);
                    if (bVar8) {
                      FUN_771b2a06(local_3c4,local_68,u_Insertable_771b559c + iVar2 * 0x8a);
                      LVar3 = RegCreateKeyExA((HKEY)0x80000000,local_3c4,0,(LPSTR)0x0,0,0x20019,
                                              (LPSECURITY_ATTRIBUTES)0x0,&local_c,(LPDWORD)0x0);
                      if (LVar3 == 0) {
                        RegCloseKey(local_c);
                      }
                      break;
                    }
                    pcVar5 = pcVar5 + 0x114;
                    iVar2 = iVar2 + 1;
                    bVar8 = pcVar5 == &DAT_771b5aec;
                  } while (pcVar5 < &DAT_771b5aec);
                  iVar2 = StringFromGUID2(local_8,local_b8,0x28);
                  if (iVar2 < 0) break;
                  wsprintfA(local_2c0,"%s\\%S",local_1bc,local_b8);
                  LVar3 = RegCreateKeyExA((HKEY)0x80000000,local_2c0,0,(LPSTR)0x0,0,0x20006,
                                          (LPSECURITY_ATTRIBUTES)0x0,&local_c,(LPDWORD)0x0);
                  if (LVar3 != 0) {
                    iVar2 = 1;
                    break;
                  }
                  RegCloseKey(local_c);
                  local_8 = local_8 + 1;
                  local_14 = local_14 + 1;
                  bVar8 = local_14 == param_2;
                } while (local_14 < param_2);
              }
              RegCloseKey(local_18);
            }
            else {
              iVar2 = 1;
            }
          }
        }
      }
      else {
        iVar2 = -0x7ff8ffa9;
      }
    }
    else {
      iVar2 = -0x7ff8ffa9;
    }
  }
  else {
    iVar2 = -0x7fffbffd;
  }
  return iVar2;
}



int __thiscall FUN_771b2c31(void *this,GUID *param_1,uint param_2,GUID *param_3,undefined4 param_4)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  GUID *pGVar5;
  char *pcVar6;
  bool bVar7;
  CHAR local_1bc [260];
  OLECHAR local_b8 [40];
  OLECHAR local_68 [40];
  uint local_18;
  HKEY local_14;
  void *local_10;
  GUID *local_c;
  LPCSTR local_8;
  
  local_10 = this;
  BVar1 = IsBadWritePtr(this,0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_1,0x10);
    if (BVar1 == 0) {
      BVar1 = IsBadReadPtr(param_3,param_2 << 4);
      if (BVar1 == 0) {
        iVar2 = StringFromGUID2(param_1,local_b8,0x28);
        if (-1 < iVar2) {
          FUN_771b2a06(local_1bc,local_b8,param_4);
          iVar2 = RegOpenKeyExA((HKEY)0x80000000,local_1bc,0,0xf003f,&local_14);
          if (-1 < iVar2) {
            local_18 = 0;
            bVar7 = param_2 == 0;
            if (!bVar7) {
              local_c = param_3;
              do {
                iVar2 = 0;
                pcVar4 = &DAT_771b5588;
                do {
                  iVar3 = 0x10;
                  pGVar5 = local_c;
                  pcVar6 = pcVar4;
                  do {
                    if (iVar3 == 0) break;
                    iVar3 = iVar3 + -1;
                    bVar7 = (char)pGVar5->Data1 == *pcVar6;
                    pGVar5 = (GUID *)((int)&pGVar5->Data1 + 1);
                    pcVar6 = pcVar6 + 1;
                  } while (bVar7);
                  if (bVar7) {
                    FUN_771b2a06(local_1bc,local_b8,u_Insertable_771b559c + iVar2 * 0x8a);
                    RegDeleteKeyA((HKEY)0x80000000,local_1bc);
                    break;
                  }
                  pcVar4 = pcVar4 + 0x114;
                  iVar2 = iVar2 + 1;
                  bVar7 = pcVar4 == &DAT_771b5aec;
                } while (pcVar4 < &DAT_771b5aec);
                iVar2 = StringFromGUID2(local_c,local_68,0x28);
                if (iVar2 < 0) break;
                iVar3 = WideCharToMultiByte(0,0,local_68,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
                local_8 = (LPCSTR)FUN_771b3bbc(iVar3 + 1);
                if (local_8 == (LPSTR)0x0) break;
                WideCharToMultiByte(0,0,local_68,-1,local_8,iVar3 + 1,(LPCSTR)0x0,(LPBOOL)0x0);
                iVar2 = FUN_771b28e4(local_14,local_8);
                FUN_771b3bc9(local_8);
                if (iVar2 < 0) break;
                local_c = local_c + 1;
                local_18 = local_18 + 1;
                bVar7 = local_18 == param_2;
              } while (local_18 < param_2);
            }
            RegCloseKey(local_14);
          }
        }
      }
      else {
        iVar2 = -0x7ff8ffa9;
      }
    }
    else {
      iVar2 = -0x7ff8ffa9;
    }
  }
  else {
    iVar2 = -0x7fffbffd;
  }
  return iVar2;
}



uint FUN_771b2ee0(int param_1,IID *param_2,uint param_3,undefined4 *param_4)

{
  BOOL BVar1;
  uint uVar2;
  HRESULT HVar3;
  int iVar4;
  LPCSTR lpMultiByteStr;
  LSTATUS LVar5;
  HKEY local_10;
  HKEY local_c;
  LPCWSTR local_8;
  
  BVar1 = IsBadWritePtr((LPVOID)(param_1 + -4),0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_2,0x10);
    if (BVar1 == 0) {
      HVar3 = StringFromCLSID(param_2,&local_8);
      if (HVar3 < 0) {
        uVar2 = 0x8007000e;
      }
      else {
        uVar2 = RegOpenKeyA((HKEY)0x80000000,"Component Categories",&local_c);
        if (uVar2 == 0) {
          iVar4 = WideCharToMultiByte(0,0,local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
          lpMultiByteStr = (LPCSTR)FUN_771b3bbc(iVar4 + 1U);
          if (lpMultiByteStr == (LPCSTR)0x0) {
            RegCloseKey(local_c);
            CoTaskMemFree(local_8);
            uVar2 = 0x8007000e;
          }
          else {
            WideCharToMultiByte(0,0,local_8,-1,lpMultiByteStr,iVar4 + 1U,(LPCSTR)0x0,(LPBOOL)0x0);
            LVar5 = RegOpenKeyA(local_c,lpMultiByteStr,&local_10);
            FUN_771b3bc9(lpMultiByteStr);
            if (LVar5 == 0) {
              RegCloseKey(local_c);
              CoTaskMemFree(local_8);
              uVar2 = FUN_771b37da(local_10,param_3,param_4,(uint *)0x0);
              RegCloseKey(local_10);
            }
            else {
              RegCloseKey(local_c);
              CoTaskMemFree(local_8);
              uVar2 = 0x8000ffff;
            }
          }
        }
        else {
          CoTaskMemFree(local_8);
          if (uVar2 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = uVar2 & 0xffff | 0x80070000;
          }
        }
      }
    }
    else {
      uVar2 = 0x80070057;
    }
  }
  else {
    uVar2 = 0x80004003;
  }
  return uVar2;
}



undefined4
FUN_771b3036(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *this;
  
  BVar1 = IsBadWritePtr((LPVOID)(param_1 + -4),0x14);
  if (BVar1 == 0) {
    if (param_2 == -1) {
      if (param_3 != (undefined4 *)0x0) {
        return 0x80004003;
      }
    }
    else {
      BVar1 = IsBadReadPtr(param_3,param_2 << 4);
      if (BVar1 != 0) {
        return 0x80004003;
      }
    }
    if (param_4 == -1) {
      if (param_5 != (undefined4 *)0x0) {
        return 0x80004003;
      }
    }
    else {
      BVar1 = IsBadReadPtr(param_5,param_4 << 4);
      if (BVar1 != 0) {
        return 0x80004003;
      }
    }
    BVar1 = IsBadWritePtr(param_6,4);
    if (BVar1 == 0) {
      *param_6 = 0;
      if (param_2 == 0) {
        uVar2 = 0x80070057;
      }
      else {
        this = (undefined4 *)0x0;
        puVar3 = (undefined4 *)FUN_771b3bbc(0x24);
        if (puVar3 != (undefined4 *)0x0) {
          this = FUN_771b1e0a(puVar3);
        }
        if ((this != (undefined4 *)0x0) &&
           (iVar4 = FUN_771b1e2d(this,param_2,param_3,param_4,param_5), -1 < iVar4)) {
          iVar4 = (**(code **)*this)(this,&DAT_771b1120,param_6);
          if (iVar4 < 0) {
            if (this != (undefined4 *)0x0) {
              FUN_771b1efe(this);
              FUN_771b3bc9(this);
            }
            return 0x8000ffff;
          }
          return 0;
        }
        uVar2 = 0x8007000e;
      }
    }
    else {
      uVar2 = 0x80070057;
    }
  }
  else {
    uVar2 = 0x80004003;
  }
  return uVar2;
}



uint FUN_771b315a(int param_1,GUID *param_2,uint param_3,GUID *param_4,char *param_5,char *param_6)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  OLECHAR local_54 [40];
  
  if (param_3 == 0) {
    uVar1 = 0x80070057;
  }
  else {
    BVar2 = IsBadWritePtr((LPVOID)(param_1 + -4),0x14);
    if (BVar2 == 0) {
      BVar2 = IsBadReadPtr(param_2,0x10);
      if (BVar2 == 0) {
        if (param_3 == 0xffffffff) {
          if (param_4 != (GUID *)0x0) {
            return 0x80004003;
          }
        }
        else {
          BVar2 = IsBadReadPtr(param_4,param_3 << 4);
          if (BVar2 != 0) {
            return 0x80004003;
          }
        }
        if (param_5 == (char *)0xffffffff) {
          if (param_6 != (char *)0x0) {
            return 0x80004003;
          }
        }
        else {
          BVar2 = IsBadReadPtr(param_6,(int)param_5 << 4);
          if (BVar2 != 0) {
            return 0x80004003;
          }
        }
        iVar3 = StringFromGUID2(param_2,local_54,0x28);
        uVar1 = 0x8007000e;
        if (-1 < iVar3) {
          uVar1 = FUN_771b322e(local_54,param_3,param_4,param_5,param_6);
        }
      }
      else {
        uVar1 = 0x80070057;
      }
    }
    else {
      uVar1 = 0x80004003;
    }
  }
  return uVar1;
}



uint FUN_771b322e(LPCOLESTR param_1,uint param_2,GUID *param_3,char *param_4,char *param_5)

{
  LSTATUS LVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  GUID *pGVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  CHAR local_748 [264];
  OLECHAR local_640 [259];
  GUID *local_43a;
  CHAR local_434 [245];
  char local_33f [19];
  wchar_t local_32c [45];
  short local_2d2 [19];
  short local_2ac [4];
  short local_2a4 [192];
  CHAR local_124 [257];
  char *local_23;
  CLSID local_1c;
  HKEY local_c;
  int *local_8;
  
  FUN_771b3bd4(local_32c,(short *)PTR_u_CLSID_771b5570);
  _wcscat(local_32c,L"\\");
  _wcscat(local_32c,param_1);
  _wcscat(local_32c,L"\\");
  if ((param_2 != 0) && (param_2 != 0xffffffff)) {
    local_8 = (int *)0x0;
    _wcscat(local_32c,(wchar_t *)PTR_u_Implemented_Categories_771b5578);
    uVar4 = 0;
    _wcscat(local_32c,L"\\");
    pGVar5 = param_3;
    if (param_2 != 0) {
      do {
        StringFromGUID2(pGVar5,local_640,0x105);
        FUN_771b3bd4(local_2a4,local_640);
        WideCharToMultiByte(0,0,local_32c,-1,local_124,0x105,(LPCSTR)0x0,(LPBOOL)0x0);
        LVar1 = RegOpenKeyA((HKEY)0x80000000,local_124,&local_c);
        if (LVar1 == 0) {
          RegCloseKey(local_c);
          local_8 = (int *)0x1;
          break;
        }
        uVar4 = uVar4 + 1;
        pGVar5 = pGVar5 + 1;
      } while (uVar4 < param_2);
    }
    if (local_8 == (int *)0x0) {
      bVar8 = param_2 == 0;
      if (!bVar8) {
        local_43a = param_3;
        do {
          local_23 = &DAT_771b5588;
          do {
            iVar2 = 0x10;
            pGVar5 = local_43a;
            pcVar3 = local_23;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar8 = (char)pGVar5->Data1 == *pcVar3;
              pGVar5 = (GUID *)((int)&pGVar5->Data1 + 1);
              pcVar3 = pcVar3 + 1;
            } while (bVar8);
            if (bVar8) {
              FUN_771b3bd4(local_2d2,(short *)(local_23 + 0x14));
              WideCharToMultiByte(0,0,local_32c,-1,local_434,0x105,(LPCSTR)0x0,(LPBOOL)0x0);
              LVar1 = RegOpenKeyA((HKEY)0x80000000,local_434,&local_c);
              if (LVar1 == 0) {
                RegCloseKey(local_c);
                local_8 = (int *)0x1;
                break;
              }
            }
            local_23 = local_23 + 0x114;
            bVar8 = local_23 == &DAT_771b5aec;
          } while (local_23 < &DAT_771b5aec);
          local_43a = local_43a + 1;
          param_2 = param_2 - 1;
          bVar8 = param_2 == 0;
        } while (!bVar8);
      }
      if (local_8 == (int *)0x0) {
        return 1;
      }
    }
  }
  if (param_4 != (char *)0xffffffff) {
    FUN_771b3bd4(local_2d2,(short *)PTR_u_Required_Categories_771b557c);
    FUN_771b3bd4(local_2ac,(short *)&DAT_771b1410);
    WideCharToMultiByte(0,0,local_32c,-1,local_748,0x105,(LPCSTR)0x0,(LPBOOL)0x0);
    LVar1 = RegOpenKeyA((HKEY)0x80000000,local_748,&local_c);
    if (LVar1 == 0) {
      RegCloseKey(local_c);
      CLSIDFromString(param_1,&local_1c);
      uVar4 = FUN_771b35f6(&local_1c,"Required Categories",0,&local_8);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      do {
        bVar8 = false;
        iVar2 = (**(code **)(*local_8 + 0xc))(local_8,1,local_33f,&local_43a);
        if (iVar2 != 0) {
          bVar8 = true;
          break;
        }
        local_23 = (char *)0x0;
        bVar9 = param_4 == (char *)0x0;
        pcVar3 = param_5;
        if (!bVar9) {
          do {
            iVar2 = 0x10;
            pcVar6 = local_33f;
            pcVar7 = pcVar3;
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar9 = *pcVar6 == *pcVar7;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar9);
            if (bVar9) {
              bVar8 = true;
              break;
            }
            local_23 = local_23 + 1;
            bVar9 = local_23 == param_4;
            pcVar3 = pcVar3 + 0x10;
          } while (local_23 < param_4);
        }
      } while (bVar8);
      (**(code **)(*local_8 + 8))(local_8);
      if (!bVar8) {
        return 1;
      }
    }
  }
  return 0;
}



uint FUN_771b353a(int param_1,IID *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = IsBadWritePtr((LPVOID)(param_1 + -4),0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_2,0x10);
    if (BVar1 == 0) {
      BVar1 = IsBadWritePtr(param_3,4);
      uVar2 = 0x80070057;
      if (BVar1 == 0) {
        uVar2 = FUN_771b35f6(param_2,"Implemented Categories",0,param_3);
      }
    }
    else {
      uVar2 = 0x80070057;
    }
  }
  else {
    uVar2 = 0x80004003;
  }
  return uVar2;
}



uint FUN_771b3598(int param_1,IID *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = IsBadWritePtr((LPVOID)(param_1 + -4),0x14);
  if (BVar1 == 0) {
    BVar1 = IsBadReadPtr(param_2,0x10);
    if (BVar1 == 0) {
      BVar1 = IsBadWritePtr(param_3,4);
      uVar2 = 0x80070057;
      if (BVar1 == 0) {
        uVar2 = FUN_771b35f6(param_2,"Required Categories",0,param_3);
      }
    }
    else {
      uVar2 = 0x80070057;
    }
  }
  else {
    uVar2 = 0x80004003;
  }
  return uVar2;
}



uint FUN_771b35f6(IID *param_1,LPCSTR param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *this;
  HKEY local_c;
  HKEY local_8;
  
  uVar1 = FUN_771b36c4(param_1,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = RegOpenKeyA(local_8,param_2,&local_c);
    if (uVar1 == 0) {
      RegCloseKey(local_8);
      this = (undefined4 *)0x0;
      *param_4 = 0;
      puVar2 = (undefined4 *)FUN_771b3bbc(0x20);
      if (puVar2 != (undefined4 *)0x0) {
        this = FUN_771b1add(puVar2);
      }
      if ((this != (undefined4 *)0x0) && (iVar3 = FUN_771b1afd(this,local_c,param_3), -1 < iVar3)) {
        iVar3 = (**(code **)*this)(this,&DAT_771b1120,param_4);
        if (iVar3 < 0) {
          if (this != (undefined4 *)0x0) {
            FUN_771b1b10(this);
            FUN_771b3bc9(this);
          }
          return 0x8000ffff;
        }
        return 0;
      }
      uVar1 = 0x8007000e;
    }
    else {
      RegCloseKey(local_8);
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
  }
  return uVar1;
}



uint FUN_771b36c4(IID *param_1,undefined4 *param_2)

{
  HRESULT HVar1;
  uint uVar2;
  int iVar3;
  LPCSTR lpMultiByteStr;
  HKEY local_10;
  HKEY local_c;
  LPCWSTR local_8;
  
  HVar1 = StringFromCLSID(param_1,&local_8);
  if (HVar1 < 0) {
    uVar2 = 0x8007000e;
  }
  else {
    uVar2 = RegOpenKeyA((HKEY)0x80000000,"CLSID",&local_c);
    if (uVar2 == 0) {
      iVar3 = WideCharToMultiByte(0,0,local_8,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      lpMultiByteStr = (LPCSTR)FUN_771b3bbc(iVar3 + 1U);
      if (lpMultiByteStr == (LPCSTR)0x0) {
        RegCloseKey(local_c);
        CoTaskMemFree(local_8);
        return 0x8000ffff;
      }
      WideCharToMultiByte(0,0,local_8,-1,lpMultiByteStr,iVar3 + 1U,(LPCSTR)0x0,(LPBOOL)0x0);
      uVar2 = RegOpenKeyA(local_c,lpMultiByteStr,&local_10);
      FUN_771b3bc9(lpMultiByteStr);
      if (uVar2 == 0) {
        RegCloseKey(local_c);
        CoTaskMemFree(local_8);
        *param_2 = local_10;
      }
      else {
        RegCloseKey(local_c);
        CoTaskMemFree(local_8);
        if (uVar2 != 0) {
          return uVar2 & 0xffff | 0x80070000;
        }
      }
    }
    else {
      CoTaskMemFree(local_8);
      if (uVar2 != 0) {
        return uVar2 & 0xffff | 0x80070000;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_771b37da(HKEY param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  LSTATUS LVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  DWORD dwIndex;
  WCHAR local_78 [30];
  CHAR local_3c [32];
  undefined4 local_1c;
  DWORD local_18 [2];
  undefined4 local_10;
  uint local_c;
  DWORD local_8;
  
  local_c = param_2;
  dwIndex = 0;
  local_8 = 0;
  local_18[1] = 0x10;
  LVar1 = RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (LPDWORD)0x0,local_18,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                           (PFILETIME)0x0);
  if (LVar1 == 0) {
    if (local_18[0] == 0) {
      uVar2 = 0x8000ffff;
    }
    else {
      if (local_18[0] == 1) {
        RegEnumValueA(param_1,0,local_3c,local_18 + 1,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8
                     );
        local_10 = (LPBYTE)0x0;
        MultiByteToWideChar(0,0,local_3c,-1,local_78,0x28);
        local_c = FUN_771b3ab9((ushort *)local_78,&local_10,0x10);
      }
      else {
        wsprintfA(local_3c,"%X",param_2);
        LVar1 = RegQueryValueExA(param_1,local_3c,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8);
        if (LVar1 != 0) {
          local_10 = (LPBYTE)(CONCAT22((ushort)param_2,(undefined2)local_10) & 0x3ffffff);
          local_c = (uint)((ushort)param_2 & 0x3ff | 0x400);
          wsprintfA(local_3c,"%X",local_c);
          LVar1 = RegQueryValueExA(param_1,local_3c,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8);
          if (LVar1 != 0) {
            while( true ) {
              local_18[1] = 0x10;
              LVar1 = RegEnumValueA(param_1,dwIndex,local_3c,local_18 + 1,(LPDWORD)0x0,(LPDWORD)0x0,
                                    (LPBYTE)0x0,&local_8);
              if (LVar1 != 0) break;
              local_1c = 0;
              MultiByteToWideChar(0,0,local_3c,-1,local_78,0x28);
              local_c = FUN_771b3ab9((ushort *)local_78,&local_1c,0x10);
              if (((ushort)local_c & 0x3ff) == local_10._2_2_) break;
              dwIndex = dwIndex + 1;
            }
          }
        }
        if (LVar1 != 0) {
          local_c = GetUserDefaultLCID();
          wsprintfA(local_3c,"%X",local_c);
          LVar1 = RegQueryValueExA(param_1,local_3c,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8);
        }
        if (LVar1 != 0) {
          local_c = GetUserDefaultLCID();
          wsprintfA(local_3c,"%X",local_c);
          LVar1 = RegQueryValueExA(param_1,local_3c,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,&local_8);
        }
        if ((LVar1 != 0) &&
           (LVar1 = RegEnumValueA(param_1,0,local_3c,local_18 + 1,(LPDWORD)0x0,(LPDWORD)0x0,
                                  (LPBYTE)0x0,&local_8), LVar1 != 0)) {
          return 0x8000ffff;
        }
      }
      pvVar3 = CoTaskMemAlloc(local_8 * 2);
      *param_3 = pvVar3;
      if (pvVar3 == (LPVOID)0x0) {
        uVar2 = 0x8007000e;
      }
      else {
        local_10 = (LPBYTE)CoTaskMemAlloc(local_8);
        if (local_10 == (LPBYTE)0x0) {
          CoTaskMemFree((LPVOID)*param_3);
          uVar2 = 0x8007000e;
        }
        else {
          LVar1 = RegQueryValueExA(param_1,local_3c,(LPDWORD)0x0,(LPDWORD)0x0,local_10,&local_8);
          MultiByteToWideChar(0,0,(LPCSTR)local_10,-1,(LPWSTR)*param_3,local_8);
          CoTaskMemFree(local_10);
          if (LVar1 == 0) {
            if (param_4 != (uint *)0x0) {
              *param_4 = local_c;
            }
            uVar2 = 0;
          }
          else {
            CoTaskMemFree((LPVOID)*param_3);
            uVar2 = 0x8000ffff;
            *param_3 = 0;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0x8000ffff;
  }
  return uVar2;
}



// WARNING: Removing unreachable block (ram,0x771b3b70)
// WARNING: Removing unreachable block (ram,0x771b3b77)
// WARNING: Removing unreachable block (ram,0x771b3b7f)
// WARNING: Removing unreachable block (ram,0x771b3b83)
// WARNING: Removing unreachable block (ram,0x771b3b98)

uint __cdecl FUN_771b3ab9(ushort *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *param_1;
  bVar3 = false;
  uVar8 = 0;
  puVar5 = param_1 + 1;
  if (uVar6 == 0x2d) {
    bVar3 = true;
  }
  else if (uVar6 != 0x2b) goto LAB_771b3aea;
  uVar6 = *puVar5;
  puVar5 = param_1 + 2;
LAB_771b3aea:
  bVar2 = false;
  bVar1 = false;
  if (((param_3 == 0x10) && (uVar6 == 0x30)) && ((*puVar5 == 0x78 || (*puVar5 == 0x58)))) {
    uVar6 = puVar5[1];
    puVar5 = puVar5 + 2;
  }
  uVar4 = (uint)(0xffffffff / (ulonglong)param_3);
  while (uVar7 = uVar6 - 0x30, uVar7 < param_3) {
    if ((uVar8 < uVar4) || ((uVar4 == uVar8 && (uVar7 <= (uint)(0xffffffff % (ulonglong)param_3)))))
    {
      uVar8 = uVar8 * param_3 + uVar7;
    }
    else {
      bVar2 = true;
    }
    bVar1 = true;
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
  }
  if (bVar1) {
    if (bVar2) {
      uVar8 = 0xffffffff;
    }
  }
  else {
    uVar8 = 0;
  }
  if (bVar3) {
    uVar8 = -uVar8;
  }
  return uVar8;
}



void __cdecl FUN_771b3bbc(SIZE_T param_1)

{
  GlobalAlloc(0x40,param_1);
  return;
}



void __cdecl FUN_771b3bc9(HGLOBAL param_1)

{
  GlobalFree(param_1);
  return;
}



short * __cdecl FUN_771b3bd4(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  do {
    sVar1 = *param_2;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return param_1;
}



// Library Function - Single Match
//  _wcscat
// 
// Library: Visual Studio 1998 Release

wchar_t * __cdecl _wcscat(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Dest;
  wVar1 = *_Dest;
  while (wVar1 != L'\0') {
    _Dest = _Dest + 1;
    wVar1 = *_Dest;
  }
  do {
    wVar1 = *_Source;
    *_Dest = wVar1;
    _Dest = _Dest + 1;
    _Source = _Source + 1;
  } while (wVar1 != L'\0');
  return pwVar2;
}


