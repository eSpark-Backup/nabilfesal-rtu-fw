typedef unsigned char   undefined;

typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
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
};



undefined2 LAB_1000_00b5+1;

// WARNING: Instruction at (ram,0x000100b6) overlaps instruction at (ram,0x000100b5)
// 
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: This function may have set the stack pointer
// WARNING: Removing unreachable block (ram,0x0001009c)
// WARNING: Removing unreachable block (ram,0x0001007a)

void entry(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  byte bVar13;
  int iVar10;
  int *piVar11;
  char cVar14;
  int in_CX;
  char extraout_DL;
  int iVar15;
  char *in_BX;
  undefined1 *puVar16;
  int iVar17;
  uint unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar18;
  undefined4 uVar19;
  int iVar12;
  
                    // WARNING: Read-only address (ram,0x000100b6) is written
  uRam000100b6 = 0x1000;
  puVar16 = (undefined1 *)0xb8;
  pcVar7 = (code *)swi(0x21);
  (*pcVar7)();
  pcVar7 = (code *)swi(0x21);
  uVar19 = (*pcVar7)();
  iVar15 = (int)((ulong)uVar19 >> 0x10);
  *(undefined1 **)(puVar16 + -2) = puVar16;
  *(undefined2 *)(puVar16 + -4) = 0x7369;
  (in_BX + (int)unaff_SI)[0x72] = (in_BX + (int)unaff_SI)[0x72] & (byte)((ulong)uVar19 >> 0x18);
  out(*unaff_SI,iVar15);
  bVar9 = (byte)((uint)in_CX >> 8);
  puVar4 = unaff_DI + 1;
  uVar18 = in(iVar15);
  *unaff_DI = uVar18;
  pbVar1 = (byte *)((int)puVar4 + unaff_BP + 0x61);
  bVar13 = (byte)((ulong)uVar19 >> 8);
  *pbVar1 = *pbVar1 & bVar13;
  out(*(undefined1 *)(unaff_SI + 1),iVar15);
  out(*(undefined1 *)((int)unaff_SI + 3),iVar15);
  out(unaff_SI[2],iVar15);
  if (*pbVar1 != 0) {
    iVar12 = (int)unaff_SI + 7;
    out(*(undefined1 *)(unaff_SI + 3),iVar15);
    (in_BX + (int)puVar4)[0x6e] = (in_BX + (int)puVar4)[0x6e] & bVar9;
    *(byte *)(unaff_SI + 0x2b) = *(byte *)(unaff_SI + 0x2b) & (byte)uVar19;
    *(char **)(puVar16 + -6) = in_BX;
    *(byte *)((int)unaff_DI + 0x71) = *(byte *)((int)unaff_DI + 0x71) & bVar9;
    iVar10 = (uint)(bVar13 | 10) * 0x100;
    in_BX[iVar12] = in_BX[iVar12];
    in_BX[iVar12] = in_BX[iVar12];
    in_BX[iVar12] = in_BX[iVar12];
    bVar13 = ((byte)in_CX & 0x1f) % 0x11;
    uVar5 = *(uint *)(in_BX + (int)(unaff_SI + -0x1b));
    *(uint *)(in_BX + (int)(unaff_SI + -0x1b)) = uVar5 >> bVar13 | uVar5 << 0x11 - bVar13;
    iVar15 = iVar15 + -1;
    piVar11 = (int *)((uint)puVar4 & 0x19a3);
    uVar18 = *(undefined2 *)
              (puVar16 +
              ((-6 - *(int *)((int)piVar11 + -0x67e7)) -
              (uint)(*(uint *)(iVar10 + -0x27e7) < unaff_BP)));
    lVar6 = (long)*(int *)(unaff_BP + iVar10 + 0x68) * 0x3997;
    iVar17 = (int)lVar6;
    pbVar3 = (byte *)(piVar11 + 1);
    iVar12 = *piVar11;
    *(uint *)(in_BX + (int)pbVar3) =
         (*(int *)(in_BX + (int)pbVar3) - iVar12) - (uint)(iVar17 != lVar6);
    cVar8 = (char)iVar12;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    (in_BX + (int)pbVar3)[0x45] = (in_BX + (int)pbVar3)[0x45] + (char)iVar15;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    *(int *)(unaff_BP + iVar10) = *(int *)(unaff_BP + iVar10) + iVar12;
    *(char *)(unaff_BP - 0x2c) = *(char *)(unaff_BP - 0x2c) + (char)in_BX;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    cVar14 = (char)((uint)iVar12 >> 8);
    cVar8 = cVar8 + cVar14;
    iVar12 = CONCAT11(cVar14,cVar8);
    *in_BX = *in_BX + (byte)in_CX;
    *(int *)(unaff_BP + iVar10) = *(int *)(unaff_BP + iVar10) + in_CX;
    *(int *)0x0 = *(int *)0x0 + iVar12;
    *(int *)(iVar17 + -3) = iVar12;
    *(int *)(iVar17 + -5) = in_CX;
    *(int *)(iVar17 + -7) = iVar15;
    *(undefined2 *)(iVar17 + -9) = in_BX;
    *(int *)(iVar17 + -0xb) = iVar17 + -1;
    *(uint *)(iVar17 + -0xd) = unaff_BP;
    *(undefined2 *)(iVar17 + -0xf) = pbVar3;
    *(int *)(iVar17 + -0x11) = iVar10;
    cVar8 = cVar8 + (char)*(undefined2 *)(in_BX + (int)pbVar3);
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + (char)((uint)iVar15 >> 8);
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + cVar8;
    *(undefined2 *)(iVar17 + -0x13) = 0xab;
    bVar9 = FUN_1000_00e2();
    pbVar1 = (byte *)(in_BX + (int)pbVar3);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
    pcVar2 = in_BX + (int)pbVar3;
    cVar8 = *pcVar2;
    *pcVar2 = *pcVar2 + bVar9;
    if (SCARRY1(cVar8,bVar9)) {
      bVar9 = bVar9 + 1;
      pbVar1 = (byte *)(in_BX + (int)pbVar3);
      bVar13 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
      pbVar1 = (byte *)(in_BX + (int)pbVar3);
      bVar13 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
      *pbVar3 = *pbVar3 + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      *(char *)0x0 = *(char *)0x0 + bVar9;
    }
    else {
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + extraout_DL;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + extraout_DL;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
      *(undefined2 *)(iVar17 + -0x11) = unaff_ES;
      in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    }
    *pbVar3 = *pbVar3 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    *pbVar3 = *pbVar3 & bVar9;
    pbVar1 = (byte *)(in_BX + (int)pbVar3);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
    pcVar2 = (char *)(unaff_BP + iVar10 + 0x6b);
    *pcVar2 = *pcVar2 + bVar9;
    bVar9 = bVar9 + in_BX[(int)pbVar3];
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    pbVar1 = (byte *)(in_BX + (int)pbVar3);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + extraout_DL;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    pbVar1 = (byte *)(in_BX + (int)pbVar3);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + extraout_DL;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    pbVar1 = (byte *)(in_BX + (int)pbVar3);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9 + CARRY1(bVar13,bVar9);
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    in_BX[(int)pbVar3] = in_BX[(int)pbVar3] + bVar9;
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_1000_00e2(void)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  char in_DL;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  char in_CF;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL + in_CF;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_DL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  pbVar1 = (byte *)(in_BX + unaff_SI);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL + CARRY1(bVar2,in_AL);
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_DL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  pbVar1 = (byte *)(in_BX + unaff_SI);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL + CARRY1(bVar2,in_AL);
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


