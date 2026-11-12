// rea decompile_all
// name: FUN_200dfea0
// address: 0x200dfea0
// body: available
// range: 0x200dfea0-0x200e03de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dfea0(void)

{
  undefined1 *puVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  float in_ECX;
  uint uVar8;
  float fVar9;
  int iVar10;
  float fStack_80;
  char **ppcStack_7c;
  int *piStack_78;
  char **ppcStack_74;
  undefined1 local_5d;
  int local_5c;
  char *local_58;
  int local_54;
  char *pcStack_50;
  undefined1 *puStack_4c;
  int local_48;
  undefined1 local_44 [4];
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined1 local_34 [4];
  char *local_30;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010f7e8;
  pvStack_c = ExceptionList;
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0;
  ppcStack_74 = (char **)&local_5c;
  piStack_78 = &local_54;
  local_4 = 0;
  ppcStack_7c = (char **)0x200dfee9;
  ExceptionList = &pvStack_c;
  cVar3 = FUN_200cf570();
  if (cVar3 != '\0') {
    if (*(int *)((int)in_ECX + 0x50) == 0) {
      uVar4 = 0;
    }
    else {
      ppcStack_74 = (char **)0x200dff00;
      uVar4 = __ftol();
    }
    iVar10 = *(int *)(*(int *)**(undefined4 **)((int)in_ECX + 4) + 0x14);
    if (((-1 < (int)uVar4) && (*(int *)(iVar10 + 0x3c) != 0)) &&
       (uVar4 < (uint)((*(int *)(iVar10 + 0x40) - *(int *)(iVar10 + 0x3c)) / 0x84))) {
      if (uVar4 != *(uint *)((int)in_ECX + 0x9c)) {
        ppcStack_74 = *(char ***)((int)in_ECX + 0xb8);
        piStack_78 = *(int **)((int)in_ECX + 0xb4);
        ppcStack_7c = (char **)0x200dff6b;
        FUN_200e3c00();
        local_58 = "";
        pcVar7 = *(char **)(*(int *)(iVar10 + 0x3c) + 0x78 + uVar4 * 0x84);
        if (pcVar7 != (char *)0x0) {
          local_58 = pcVar7;
        }
        ppcStack_74 = (char **)0x0;
        piStack_78 = (int *)0x200dffa0;
        FUN_2000a5b0();
        uVar8 = 0xffffffff;
        pcVar7 = local_58;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        ppcStack_74 = (char **)(~uVar8 - 1);
        piStack_78 = (int *)local_58;
        ppcStack_7c = (char **)0x200dffbd;
        FUN_2000a600();
        local_4._0_1_ = 1;
        ppcStack_74 = (char **)0x200dffcb;
        FUN_200e03e0();
        local_4 = CONCAT31(local_4._1_3_,2);
        piStack_78 = (int *)local_30;
        if (local_30 == (char *)0x0) {
          piStack_78 = (int *)0x201116cc;
        }
        ppcStack_74 = (char **)0xa;
        ppcStack_7c = (char **)0x200dffe5;
        local_58 = (char *)FUN_200faaf0();
        while (local_58 != (char *)0x0) {
          ppcStack_74 = &local_58;
          piStack_78 = (int *)0x200dfffa;
          piStack_78 = (int *)FUN_20055470();
          ppcStack_7c = (char **)0x200e0000;
          local_24 = FUN_200f9e13();
          ppcStack_7c = &local_58;
          fStack_80 = 1.2027886e-19;
          fStack_80 = (float)FUN_20055470();
          local_20 = FUN_200f9e13();
          piStack_78 = (int *)FUN_20055470(&local_58);
          uVar8 = 0xffffffff;
          pcVar7 = (char *)piStack_78;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          ppcStack_74 = (char **)(~uVar8 - 1);
          ppcStack_7c = (char **)0x200e003e;
          FUN_2000a600();
          if (local_14 != 0) {
            piStack_78 = *(int **)((int)in_ECX + 0xb8);
            ppcStack_74 = (char **)&local_24;
            ppcStack_7c = (char **)0x200e0056;
            FUN_200e3a20();
          }
        }
        ppcStack_74 = (char **)0x1;
        local_4._1_3_ = (uint3)((uint)local_4 >> 8);
        local_4._0_1_ = 1;
        piStack_78 = (int *)0x200e006e;
        FUN_2000a5b0();
        ppcStack_74 = (char **)0x1;
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_78 = (int *)0x200e007e;
        FUN_2000a5b0();
        if ((*(int *)((int)in_ECX + 0xb4) != 0) &&
           (local_48 = (*(int *)((int)in_ECX + 0xb8) - *(int *)((int)in_ECX + 0xb4)) / 0x18,
           local_48 != 0)) {
          if (*(int *)((int)in_ECX + 0xb4) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (*(int *)((int)in_ECX + 0xb8) - *(int *)((int)in_ECX + 0xb4)) / 0x18;
          }
          ppcStack_74 = (char **)0x0;
          ppcStack_7c = (char **)((int)in_ECX + 0x8c);
          piStack_78 = (int *)0x0;
          fStack_80 = 1.2028143e-19;
          iVar5 = (*DAT_20403640)();
          ppcStack_7c = (char **)(iVar5 * (iVar10 + 2));
          fStack_80 = in_ECX;
          FUN_200ea1d0();
          *(uint *)((int)in_ECX + 0x9c) = uVar4;
        }
      }
      puVar1 = (undefined1 *)((int)in_ECX + 0x8c);
      piStack_78 = (int *)0x200e00fb;
      ppcStack_74 = (char **)puVar1;
      iVar10 = (*DAT_20403640)();
      puStack_4c = (undefined1 *)&fStack_80;
      fStack_80 = (float)CONCAT31(fStack_80._1_3_,*puVar1);
      local_48 = iVar10;
      FUN_2000a5b0(0);
      FUN_2000a3a0(puVar1,0,0xffffffff);
      FUN_200cf0e0(local_54,local_5c,(int)in_ECX + 0xa0);
      ppcStack_74 = &local_58;
      local_58 = (char *)0xff808080;
      iVar5 = local_5c + (iVar10 >> 1) + iVar10;
      local_5c = *(int *)((int)in_ECX + 0x20) + local_54;
      ppcStack_7c = (char **)(float)iVar5;
      piStack_78 = (int *)0x3f800000;
      fStack_80 = (float)local_5c;
      (*DAT_204035ec)((float)local_54,ppcStack_7c);
      local_5c = iVar5 + (iVar10 >> 1);
      iVar10 = 0;
      for (local_58 = (char *)0x0;
          (fVar2 = local_3c, *(int *)((int)in_ECX + 0xb4) != 0 &&
          (local_58 < (char *)((*(int *)((int)in_ECX + 0xb8) - *(int *)((int)in_ECX + 0xb4)) / 0x18)
          )); local_58 = local_58 + 1) {
        ppcStack_74 = (char **)local_3c;
        piStack_78 = (int *)local_40;
        ppcStack_7c = (char **)0x200e01e0;
        FUN_200e37e0();
        ppcStack_74 = (char **)(iVar10 + 8 + *(int *)((int)in_ECX + 0xb4));
        piStack_78 = (int *)local_3c;
        ppcStack_7c = (char **)0x200e01f9;
        FUN_200e3660();
        ppcStack_74 = *(char ***)(iVar10 + *(int *)((int)in_ECX + 0xb4));
        piStack_78 = (int *)&DAT_2011d0b4;
        ppcStack_7c = (char **)0x200e020d;
        pcVar6 = (char *)FUN_20055450();
        ppcStack_74 = (char **)0x0;
        local_24 = CONCAT31(local_24._1_3_,local_5d);
        piStack_78 = (int *)0x200e0225;
        FUN_2000a5b0();
        uVar4 = 0xffffffff;
        pcVar7 = pcVar6;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        ppcStack_74 = (char **)(~uVar4 - 1);
        ppcStack_7c = (char **)0x200e023c;
        piStack_78 = (int *)pcVar6;
        FUN_2000a600();
        ppcStack_74 = (char **)&local_24;
        piStack_78 = (int *)local_3c;
        local_4._0_1_ = 3;
        ppcStack_7c = (char **)0x200e0254;
        FUN_200e3660();
        ppcStack_74 = (char **)0x1;
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_78 = (int *)0x200e0264;
        FUN_2000a5b0();
        ppcStack_74 = *(char ***)(iVar10 + 4 + *(int *)((int)in_ECX + 0xb4));
        piStack_78 = (int *)&DAT_2011d0b4;
        ppcStack_7c = (char **)0x200e0279;
        pcVar7 = (char *)FUN_20055450();
        ppcStack_74 = (char **)0x0;
        piStack_78 = (int *)0x200e0295;
        pcStack_50 = pcVar7;
        FUN_2000a5b0();
        uVar4 = 0xffffffff;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        uVar4 = ~uVar4 - 1;
        ppcStack_74 = (char **)0x1;
        ppcStack_7c = (char **)0x200e02b1;
        piStack_78 = (int *)uVar4;
        puStack_4c = (undefined1 *)uVar4;
        cVar3 = FUN_2000a6c0();
        if (cVar3 != '\0') {
          pcVar7 = pcStack_50;
          pcVar6 = local_30;
          for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar6 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          }
          piStack_78 = (int *)0x200e02d9;
          ppcStack_74 = (char **)uVar4;
          FUN_2000a6a0();
        }
        ppcStack_74 = (char **)local_34;
        piStack_78 = (int *)0x1;
        ppcStack_7c = (char **)local_3c;
        local_4._0_1_ = 4;
        fStack_80 = 1.2028844e-19;
        FUN_2008ce10();
        ppcStack_74 = (char **)0x1;
        local_4 = (uint)local_4._1_3_ << 8;
        piStack_78 = (int *)0x200e0303;
        FUN_2000a5b0();
        puStack_4c = (undefined1 *)&fStack_80;
        fStack_80 = (float)CONCAT31(fStack_80._1_3_,*(undefined1 *)((int)in_ECX + 0x8c));
        FUN_2000a5b0(0);
        FUN_2000a3a0((int)in_ECX + 0x8c,0,0xffffffff);
        iVar5 = local_5c;
        FUN_200cf0e0(local_54,local_5c,local_44);
        local_5c = iVar5 + local_48;
        iVar10 = iVar10 + 0x18;
      }
      local_4 = 0xffffffff;
      for (fVar9 = local_40; fVar9 != fVar2; fVar9 = (float)((int)fVar9 + 0x10)) {
        ppcStack_74 = (char **)0x0;
        piStack_78 = (int *)0x200e037d;
        FUN_20027f20();
      }
      goto LAB_200e03c4;
    }
    *(uint *)((int)in_ECX + 0x9c) = uVar4;
    ppcStack_74 = *(char ***)((int)in_ECX + 0xb8);
    piStack_78 = *(int **)((int)in_ECX + 0xb4);
    ppcStack_7c = (char **)0x200e03a4;
    FUN_200e3c00();
  }
  ppcStack_74 = (char **)local_3c;
  piStack_78 = (int *)local_40;
  local_4 = 0xffffffff;
  ppcStack_7c = (char **)0x200e03bf;
  FUN_200716d0();
LAB_200e03c4:
  piStack_78 = (int *)0x200e03c9;
  ppcStack_74 = (char **)local_40;
  FUN_200f9f75();
  ExceptionList = pvStack_c;
  return;
}

