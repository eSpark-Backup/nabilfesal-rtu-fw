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



undefined2 LAB_1000_00b6;

// WARNING: Instruction at (ram,0x00010312) overlaps instruction at (ram,0x00010311)
// 
// WARNING: Control flow encountered bad instruction data
// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used
// WARNING: Removing unreachable block (ram,0x0001009c)
// WARNING: Removing unreachable block (ram,0x00010013)
// WARNING: Removing unreachable block (ram,0x00010087)
// WARNING: Removing unreachable block (ram,0x00010089)
// WARNING: Removing unreachable block (ram,0x0001007a)

void entry(void)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar16;
  char cVar18;
  undefined1 uVar19;
  uint uVar17;
  char cVar20;
  uint in_CX;
  undefined2 uVar21;
  int iVar22;
  char *in_BX;
  char *pcVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  undefined2 *puVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  undefined2 *puVar31;
  char *unaff_BP;
  int *unaff_SI;
  int *piVar32;
  int *unaff_DI;
  int *piVar33;
  undefined2 unaff_ES;
  undefined2 uVar34;
  byte in_AF;
  bool bVar35;
  bool bVar36;
  ulong uVar37;
  char cVar15;
  
                    // WARNING: Read-only address (ram,0x000100b6) is written
  puVar24 = (undefined2 *)0xb6;
  uRam000100b6 = 0x1000;
LAB_1000_0001:
  uVar34 = *puVar24;
  puVar24 = puVar24 + 1;
  pcVar11 = (code *)swi(0x21);
  (*pcVar11)();
code_r0x0001000c:
  pcVar11 = (code *)swi(0x21);
  uVar37 = (*pcVar11)();
  *(undefined2 **)(undefined1 *)((int)puVar24 + -2) = puVar24;
  puVar25 = (undefined2 *)((int)puVar24 + -4);
  puVar24 = (undefined2 *)((int)puVar24 + -4);
  *puVar25 = 0x7369;
  (in_BX + (int)unaff_SI)[0x72] = (in_BX + (int)unaff_SI)[0x72] & (byte)(uVar37 >> 0x18);
  piVar5 = unaff_SI;
  unaff_SI = unaff_SI + 1;
  out(*piVar5,(int)(uVar37 >> 0x10));
LAB_1000_0019:
  piVar33 = unaff_DI;
  unaff_DI = piVar33 + 1;
  iVar22 = in((int)(uVar37 >> 0x10));
  *piVar33 = iVar22;
  pbVar1 = (byte *)(unaff_BP + (int)unaff_DI + 0x61);
  *pbVar1 = *pbVar1 & (byte)(uVar37 >> 8);
  bVar35 = *pbVar1 == 0;
  piVar32 = unaff_SI;
  while( true ) {
    uVar21 = (undefined2)(uVar37 >> 0x10);
    out((char)*piVar32,uVar21);
    out(*(char *)((int)piVar32 + 1),uVar21);
    unaff_SI = piVar32 + 2;
    out(piVar32[1],uVar21);
    bVar13 = (byte)(in_CX >> 8);
    cVar15 = (char)((uint)in_BX >> 8);
    if (bVar35) break;
    piVar5 = unaff_SI;
    unaff_SI = (int *)((int)piVar32 + 5);
    out((char)*piVar5,uVar21);
    (in_BX + (int)unaff_DI)[0x6e] = (in_BX + (int)unaff_DI)[0x6e] & bVar13;
    while( true ) {
      *(byte *)((int)unaff_SI + 0x4f) = *(byte *)((int)unaff_SI + 0x4f) & (byte)uVar37;
      puVar26 = (undefined2 *)((int)puVar24 + -2);
      puVar24 = (undefined2 *)((int)puVar24 + -2);
      *puVar26 = in_BX;
      *(byte *)((int)piVar33 + 0x71) = *(byte *)((int)piVar33 + 0x71) & bVar13;
      uVar37 = (ulong)((uint3)(uVar37 >> 8) | 10) << 8;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
      uVar16 = *(uint *)(in_BX + 0x1b);
      *(uint *)(in_BX + 0x1b) = uVar16 << 0xe | uVar16 >> 3;
code_r0x00010048:
      uVar16 = *(uint *)0x7d75 & (uint)unaff_SI;
      *(undefined1 *)0x8f0 = (char)uVar37;
      if (-1 < (int)uVar16) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (uVar16 != 0) goto LAB_1000_00d4_1;
      *(undefined1 *)0x18f0 = (char)uVar37;
      if (-1 < (int)uVar16) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (uVar16 != 0) goto LAB_1000_00dd;
      bVar36 = (int)(*(uint *)0x7d74 & (uint)unaff_SI) < 0;
      bVar35 = (*(uint *)0x7d74 & (uint)unaff_SI) == 0;
      uVar9 = uVar37 / *(uint *)0x7d75;
      uVar16 = (uint)uVar9;
      uVar10 = uVar37 % (ulong)*(uint *)0x7d75;
      iVar22 = (int)uVar10;
      uVar37 = CONCAT22(iVar22,uVar16);
      bVar12 = (byte)uVar9;
      *(byte *)0xef0 = bVar12;
      if (!bVar36) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (!bVar35) {
        *in_BX = *in_BX + cVar15;
        goto code_r0x000100ef;
      }
      *(byte *)0x1bf0 = bVar12;
      cVar20 = (char)(uVar10 >> 8);
      if (!bVar36) {
        *(char *)((int)unaff_SI + -0x32f7) = *(char *)((int)unaff_SI + -0x32f7) + cVar20;
        *(uint *)(in_BX + (int)unaff_SI + 0x4c01) =
             *(uint *)(in_BX + (int)unaff_SI + 0x4c01) & (uint)unaff_DI;
        goto code_r0x0001000c;
      }
      if (!bVar35) {
        uVar16 = CONCAT11((char)(uVar9 >> 8),bVar12 + in_BX[(int)unaff_SI]);
        *(char *)0x0 = *(char *)0x0 + bVar12 + in_BX[(int)unaff_SI];
        goto code_r0x000100fb;
      }
      *(byte *)0xff0 = bVar12;
                    // WARNING: Bad instruction - Truncating control flow here
      if (!bVar36) goto LAB_1000_0001;
      if (!bVar35) {
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        goto code_r0x000100fb;
      }
      *(byte *)0x7f0 = bVar12;
      piVar32 = unaff_SI;
      if (!bVar36) break;
      if (!bVar35) goto LAB_1000_0105;
      *(byte *)0x9f0 = bVar12;
      if (bVar36) {
        if (!bVar35) {
          in_BX = (char *)CONCAT11(cVar15,(char)in_BX + cVar20);
          puVar29 = (undefined2 *)((int)puVar24 + -2);
          puVar24 = (undefined2 *)((int)puVar24 + -2);
          *puVar29 = unaff_BP;
          goto LAB_1000_0105;
        }
        *(byte *)0xdf0 = bVar12;
        if (!bVar36) goto LAB_1000_0019;
        if (!bVar35) {
          (in_BX + (int)unaff_SI)[1] = (in_BX + (int)unaff_SI)[1] + bVar12;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)uVar10;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
          pbVar1 = (byte *)(in_BX + (int)unaff_SI);
          bVar13 = *pbVar1;
          *pbVar1 = *pbVar1 + bVar12;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + CARRY1(bVar13,bVar12);
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)uVar10;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
          pbVar1 = (byte *)(in_BX + (int)unaff_SI);
          bVar13 = *pbVar1;
          *pbVar1 = *pbVar1 + bVar12;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + CARRY1(bVar13,bVar12);
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
          pcVar2 = in_BX + (int)unaff_SI;
          cVar15 = *pcVar2;
          *pcVar2 = *pcVar2 + bVar12;
          if (SCARRY1(cVar15,bVar12) == *pcVar2 < '\0') goto code_r0x0001013b;
          goto code_r0x00010136;
        }
        *(int *)((int)puVar24 + -2) = iVar22;
        puVar24 = (undefined2 *)
                  (undefined1 *)((long)*(int *)(unaff_BP + (int)unaff_DI + 0x68) * 0x3685);
        bVar36 = (undefined1 *)(long)(int)puVar24 !=
                 (undefined1 *)((long)*(int *)(unaff_BP + (int)unaff_DI + 0x68) * 0x3685);
        if (!bVar35) goto LAB_1000_011d;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        *(uint *)((int)puVar24 + -2) = uVar16;
        unaff_BP = unaff_BP + 1;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
        puVar24 = (undefined2 *)((int)puVar24 + -3);
        *unaff_SI = *unaff_SI + uVar16;
        cVar20 = (char)in_CX + bVar12;
        unaff_SI = (int *)((int)unaff_SI + 1);
        unaff_DI = piVar33 + 2;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
        in_CX = uVar16 - 1;
        uVar16 = CONCAT11(bVar13 + in_BX[(int)unaff_DI],cVar20) | *(uint *)(in_BX + (int)unaff_DI);
        bVar13 = (byte)uVar16;
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] | bVar13;
        *unaff_BP = *unaff_BP + (char)(in_CX >> 8);
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
        uVar37 = CONCAT22(iVar22,CONCAT11((char)(uVar16 >> 8),bVar13 - in_BX[(int)unaff_SI]));
        in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (bVar13 - in_BX[(int)unaff_SI]);
        goto LAB_1000_00dd;
      }
      uVar37 = CONCAT22(iVar22,uVar16) | 0xa0d;
    }
  }
  unaff_BP = unaff_BP + -*(int *)0x3685;
  if (unaff_BP == (char *)0x0) goto code_r0x00010048;
  cVar20 = (char)uVar37;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  cVar18 = (char)(uVar37 >> 8);
  cVar20 = cVar20 + cVar18;
  uVar37 = CONCAT22(uVar21,CONCAT11(cVar18,cVar20));
  unaff_BP[(int)unaff_SI] = unaff_BP[(int)unaff_SI] + cVar20;
  *(uint *)(unaff_BP + (int)unaff_DI) = *(uint *)(unaff_BP + (int)unaff_DI) & in_CX;
  *(uint *)(in_BX + (int)unaff_SI) = *(int *)(in_BX + (int)unaff_SI) + in_CX;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
LAB_1000_00d4_1:
  piVar5 = unaff_SI;
  unaff_SI = (int *)((int)unaff_SI + 1);
  out((char)*piVar5,(int)(uVar37 >> 0x10));
  cVar20 = (char)uVar37;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  unaff_BP[(int)unaff_SI] = unaff_BP[(int)unaff_SI] + bVar13;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar20;
  unaff_BP = (char *)0x1c;
LAB_1000_00dd:
  iVar22 = (int)(uVar37 >> 0x10);
  bVar12 = (byte)uVar37;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  *(char *)(unaff_DI + 0xe) = (char)unaff_DI[0xe] + cVar15;
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + CARRY1(bVar13,bVar12);
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_AF = 9 < (bVar12 & 0xf) | in_AF;
  uVar16 = CONCAT11((char)(uVar37 >> 8) - in_AF,bVar12 + in_AF * -6) & 0xff0f;
code_r0x000100ef:
  iVar22 = iVar22 + -1;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)iVar22;
  cVar15 = (char)uVar16;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
  unaff_BP[(int)unaff_SI] = unaff_BP[(int)unaff_SI] + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
  puVar27 = (undefined2 *)((int)puVar24 + -2);
  puVar24 = (undefined2 *)((int)puVar24 + -2);
  *puVar27 = unaff_ES;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
code_r0x000100fb:
  cVar15 = (char)uVar16;
  *(char *)0x0 = *(char *)0x0 + cVar15;
  *(char *)0x0 = *(char *)0x0 + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
LAB_1000_0105:
  cVar15 = (char)uVar16;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
  *(char *)unaff_SI = (char)*unaff_SI + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
  puVar28 = (undefined2 *)((int)puVar24 + -2);
  puVar24 = (undefined2 *)((int)puVar24 + -2);
  *puVar28 = unaff_BP;
  *(uint *)(in_BX + (int)unaff_SI) = *(int *)(in_BX + (int)unaff_SI) + uVar16;
  uVar16 = CONCAT11((char)(uVar16 >> 8),cVar15 + in_BX[(int)unaff_SI]) + 1;
  *(uint *)(in_BX + (int)unaff_SI) = *(int *)(in_BX + (int)unaff_SI) + uVar16;
  bVar13 = (byte)uVar16;
  *(byte *)unaff_SI = (char)*unaff_SI + bVar13;
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar36 = CARRY1(*pbVar1,bVar13);
  *pbVar1 = *pbVar1 + bVar13;
LAB_1000_011d:
  bVar12 = (byte)uVar16;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + bVar36;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)iVar22;
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + CARRY1(bVar13,bVar12);
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)iVar22;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  (in_BX + (int)unaff_SI)[0x11] = (in_BX + (int)unaff_SI)[0x11] + (char)(in_CX >> 8);
  *(char *)((int)unaff_DI + 3) = *(char *)((int)unaff_DI + 3) + (char)((uint)in_BX >> 8);
code_r0x00010136:
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)uVar16;
  unaff_BP[(int)unaff_DI] =
       unaff_BP[(int)unaff_DI] + (char)((uint)iVar22 >> 8) + CARRY1(bVar13,(byte)uVar16);
code_r0x0001013b:
  *(char *)unaff_SI = (char)*unaff_SI + (char)in_CX;
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)uVar16;
  bVar12 = *(byte *)0x0;
  cVar15 = (char)(uVar16 >> 8);
  *(byte *)unaff_SI = ((char)*unaff_SI - bVar12) - CARRY1(bVar13,(byte)uVar16);
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)((uint)iVar22 >> 8);
  bVar12 = bVar12 | 5;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)((uint)in_BX >> 8);
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  (in_BX + (int)unaff_SI)[0x52] = (in_BX + (int)unaff_SI)[0x52] + cVar15;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  bVar12 = bVar12 + in_BX[(int)unaff_SI];
  uVar16 = CONCAT11(cVar15,bVar12);
  *(char *)unaff_SI = (char)*unaff_SI + (char)in_CX;
  pbVar1 = (byte *)(in_BX + (int)unaff_SI);
  bVar13 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12 + CARRY1(bVar13,bVar12);
  bVar13 = (byte)(in_CX >> 8);
  (in_BX + (int)unaff_SI)[1] = (in_BX + (int)unaff_SI)[1] + bVar13;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
  pbVar1 = (byte *)0x6574;
  bVar35 = CARRY1(*pbVar1,bVar13);
  *pbVar1 = *pbVar1 + bVar13;
  if ((char)*pbVar1 < '\0') {
    uVar17 = in_CX;
    pcVar23 = in_BX;
    if (!bVar35) goto code_r0x0001022b;
LAB_1000_028f_1:
    bVar12 = (byte)uVar16;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + bVar12;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + bVar12;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + bVar12;
    pbVar1 = (byte *)(pcVar23 + (int)unaff_SI);
    bVar13 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar12;
    piVar32 = unaff_DI + 1;
    iVar8 = in(iVar22);
    *unaff_DI = iVar8;
    if (!CARRY1(bVar13,bVar12)) goto code_r0x00010311;
    puVar3 = (uint *)(unaff_BP + (int)unaff_SI + 0x74);
    *puVar3 = *puVar3 + (uint)CARRY1(bVar13,bVar12) * (((uint)unaff_SI & 3) - (*puVar3 & 3));
code_r0x0001029e:
    cVar15 = in(iVar22);
    *(char *)piVar32 = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 1) = cVar15;
    unaff_BP[0x74] = unaff_BP[0x74] + (char)(uVar17 >> 8);
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 1) = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 3) = cVar15;
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 2) = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 5) = cVar15;
    (unaff_BP + (int)(piVar32 + 3))[0x45] = (unaff_BP + (int)(piVar32 + 3))[0x45] + (char)uVar17;
    *(int *)((int)puVar24 + -2) = iVar22;
    uVar17 = (uint)((int)unaff_SI + -1) ^ *(uint *)(unaff_BP + 1 + (int)unaff_SI + -1);
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 3) = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 7) = cVar15;
    *(char *)((int)piVar32 + 0x5b) = *(char *)((int)piVar32 + 0x5b) + (char)iVar22;
    *(int *)((int)puVar24 + -5) = iVar22;
    uVar17 = uVar17 ^ *(uint *)(unaff_BP + uVar17 + 2);
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 4) = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 9) = cVar15;
    cVar20 = (char)uVar16;
    pcVar23[0x44] = pcVar23[0x44] + cVar20;
    uVar17 = uVar17 ^ *(uint *)(unaff_BP + uVar17 + 2);
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 5) = cVar15;
    cVar15 = in(iVar22);
    *(char *)((int)piVar32 + 0xb) = cVar15;
    (pcVar23 + (int)(piVar32 + 6))[0x44] = (pcVar23 + (int)(piVar32 + 6))[0x44] + cVar20;
    *(uint *)((int)puVar24 + -7) = uVar17;
    *(uint *)((int)puVar24 + -9) = uVar16;
    unaff_SI = (int *)(uVar17 ^ *(uint *)(unaff_BP + uVar17 + 2));
    pcVar7 = (char *)((int)piVar32 + 0xd);
    cVar15 = in(iVar22);
    *(char *)(piVar32 + 6) = cVar15;
    piVar32 = piVar32 + 7;
    cVar15 = in(iVar22);
    *pcVar7 = cVar15;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar20;
  }
  else {
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    (unaff_BP + (int)unaff_DI)[0x6d] = (unaff_BP + (int)unaff_DI)[0x6d] + (char)in_BX;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)iVar22;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    *unaff_BP = *unaff_BP + bVar13;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar12;
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
    pcVar2 = in_BX + (int)unaff_SI;
    *pcVar2 = *pcVar2 + bVar12;
    cVar20 = *pcVar2;
    *(undefined2 *)((int)puVar24 + -2) = CONCAT11(cVar15,bVar12);
    *(uint *)((int)puVar24 + -4) = in_CX;
    *(int *)((int)puVar24 + -6) = iVar22;
    *(undefined2 *)((int)puVar24 + -8) = in_BX;
    *(undefined2 **)(undefined1 *)((int)puVar24 + -10) = puVar24;
    *(undefined2 *)((int)puVar24 + -0xc) = unaff_BP;
    *(undefined2 *)((int)puVar24 + -0xe) = unaff_SI;
    *(undefined2 *)((int)puVar24 + -0x10) = unaff_DI;
    unaff_DI = (int *)*(undefined2 *)((int)puVar24 + -0x10);
    unaff_SI = (int *)*(undefined2 *)((int)puVar24 + -0xe);
    unaff_BP = (char *)*(undefined2 *)((int)puVar24 + -0xc);
    in_BX = (char *)*(undefined2 *)((int)puVar24 + -8);
    iVar22 = *(int *)((int)puVar24 + -6);
    in_CX = *(uint *)((int)puVar24 + -4);
    uVar16 = *(uint *)((int)puVar24 + -2);
    bVar13 = (byte)uVar16;
    if (cVar20 == '\0') {
      pbVar1 = (byte *)(in_BX + (int)unaff_SI);
      bVar35 = CARRY1(*pbVar1,bVar13);
      *pbVar1 = *pbVar1 + bVar13;
code_r0x0001022b:
      uVar19 = in(iVar22);
      *(undefined1 *)unaff_DI = uVar19;
      piVar32 = unaff_SI + 1;
      out(*unaff_SI,iVar22);
      puVar3 = (uint *)(in_BX + (int)piVar32);
      *puVar3 = *puVar3 + (uint)bVar35 * ((uVar16 & 3) - (*puVar3 & 3));
      *(char *)piVar32 = (char)*piVar32 + (char)in_CX;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + (char)((uint)iVar22 >> 8);
      cVar15 = (char)uVar16;
      *(char *)0x0 = *(char *)0x0 + cVar15;
      *unaff_BP = *unaff_BP + (char)iVar22;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      in_BX[(int)piVar32] = in_BX[(int)piVar32] + cVar15;
      pbVar1 = (byte *)(in_BX + (int)piVar32);
      bVar13 = *pbVar1;
      bVar12 = (byte)(uVar16 + 1);
      *pbVar1 = *pbVar1 + bVar12;
      iVar22 = iVar22 + 1;
      in_AF = 9 < (bVar12 & 0xf) | in_AF;
      cVar20 = (char)(uVar16 + 1 >> 8);
      bVar14 = bVar12 + in_AF * '\x06';
      cVar15 = bVar14 + (0x90 < (bVar14 & 0xf0) | CARRY1(bVar13,bVar12) | in_AF * (0xf9 < bVar14)) *
                        '`';
      uVar16 = CONCAT11(cVar20,cVar15);
      unaff_SI = unaff_SI + 2;
      uVar17 = in_CX - 1;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)uVar17;
      unaff_BP[-0x6e59] = unaff_BP[-0x6e59] + (char)(uVar17 >> 8);
      *(undefined2 *)((int)puVar24 + -2) = in_BX;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)uVar17;
      *(char *)(unaff_DI + -0x2a) = (char)unaff_DI[-0x2a] + cVar20;
      unaff_BP = (char *)*(undefined2 *)((int)puVar24 + -2);
      in_BX[(int)(unaff_DI + 3)] = in_BX[(int)(unaff_DI + 3)] + cVar15;
      unaff_BP[-0x6e59] = unaff_BP[-0x6e59] + cVar20;
      *(undefined2 *)((int)puVar24 + -2) = in_BX;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
      (unaff_BP + (int)unaff_DI)[-0x52] =
           (unaff_BP + (int)unaff_DI)[-0x52] + (char)((uint)iVar22 >> 8);
      unaff_DI = unaff_DI + 4;
      puVar30 = (undefined1 *)((int)puVar24 + -4);
      *(undefined2 *)((int)puVar24 + -4) = 0;
    }
    else {
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      uVar19 = (undefined1)(uVar16 >> 8);
      bVar13 = bVar13 * '\x02' - CARRY1(bVar13,bVar13);
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI];
      *(char *)0x0 = *(char *)0x0 + (char)in_BX;
      unaff_BP[(int)unaff_SI] = unaff_BP[(int)unaff_SI] + (char)((uint)iVar22 >> 8);
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + bVar13;
      cVar15 = bVar13 * '\x02';
      uVar17 = CONCAT11(uVar19,cVar15);
      uVar16 = in_CX;
      puVar30 = (undefined1 *)puVar24;
      if (!CARRY1(bVar13,bVar13)) {
        if (CARRY1(bVar13,bVar13)) {
          puVar6 = (uint *)((int)unaff_DI + 1);
          puVar4 = (uint *)((int)unaff_SI + 1);
          unaff_DI = (int *)((int)unaff_DI + 3);
          unaff_SI = (int *)((int)unaff_SI + 3);
          bVar35 = *puVar4 < *puVar6;
          in_CX = uVar17;
        }
        else {
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)in_BX;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          cVar15 = *(char *)0x0;
          *(char *)0x0 = *(char *)0x0 + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)iVar22;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + cVar15;
          pbVar1 = (byte *)(in_BX + (int)unaff_SI);
          bVar35 = CARRY1(*pbVar1,cVar15 + 1U);
          *pbVar1 = *pbVar1 + cVar15 + 1U;
          uVar16 = CONCAT11(uVar19,cVar15) + 2;
          uVar17 = in_CX;
          pcVar23 = in_BX;
          if (bVar35) goto LAB_1000_028f_1;
        }
        goto code_r0x0001022b;
      }
    }
    in_BX[(int)unaff_SI] = in_BX[(int)unaff_SI] + (char)uVar17;
    *unaff_DI = *unaff_SI;
    cVar15 = (char)uVar16;
    in_BX[(int)((int)unaff_SI + 3)] = in_BX[(int)((int)unaff_SI + 3)] + cVar15;
    pcVar23 = in_BX + -1;
    *(uint *)(pcVar23 + (int)(unaff_SI + 2)) = *(int *)(pcVar23 + (int)(unaff_SI + 2)) + uVar17;
    unaff_SI = (int *)((int)unaff_SI + 7);
    piVar32 = unaff_DI + 5;
    puVar24 = (undefined2 *)(puVar30 + -2);
    *(char **)(puVar30 + -2) = pcVar23;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
    pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
    pbVar1 = (byte *)((int)unaff_DI + 0x7d);
    bVar13 = *pbVar1;
    bVar12 = (byte)(uVar17 >> 8);
    *pbVar1 = *pbVar1 + bVar12;
    if (!CARRY1(bVar13,bVar12) && *pbVar1 != 0) {
      if (CARRY1(bVar13,bVar12)) {
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
        out(*unaff_SI,iVar22);
        in_BX[0x6c] = (byte)in_BX[0x6c] >> 1;
        puVar31 = (undefined2 *)(puVar30 + -4);
        *(char **)(puVar30 + -4) = unaff_BP;
        cVar15 = '\x12';
        do {
          unaff_BP = unaff_BP + -2;
          puVar31 = puVar31 + -1;
          *puVar31 = *(undefined2 *)unaff_BP;
          cVar15 = cVar15 + -1;
        } while ('\0' < cVar15);
        *(undefined1 **)(puVar30 + -0x2a) = puVar30 + -4;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      goto code_r0x0001029e;
    }
  }
  cVar15 = (char)uVar16;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
code_r0x00010311:
  cVar15 = (char)uVar16;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  pcVar23[(int)unaff_SI] = pcVar23[(int)unaff_SI] + cVar15;
  *(char *)piVar32 = (char)*piVar32 + (char)(uVar16 >> 8);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


