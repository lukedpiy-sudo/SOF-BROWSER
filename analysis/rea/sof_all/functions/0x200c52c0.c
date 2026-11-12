// rea decompile_all
// name: FUN_200c52c0
// address: 0x200c52c0
// body: available
// range: 0x200c52c0-0x200c55e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c52c0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *in_ECX;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  int *piStack_5c;
  undefined1 **ppuStack_58;
  undefined1 *local_40;
  int *piStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010de28;
  local_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  ppuStack_58 = &local_40;
  piStack_5c = &local_28;
  local_4 = 0;
  iStack_60 = 0x200c5309;
  ExceptionList = &local_c;
  cVar3 = FUN_200cf570();
  if (cVar3 == '\0') {
    ppuStack_58 = (undefined1 **)local_14;
    piStack_5c = local_18;
    local_4 = 0xffffffff;
    iStack_60 = 0x200c5328;
    FUN_200716d0();
  }
  else {
    local_40 = local_40 + *(int *)(in_ECX + 0x24) + -4;
    ppuStack_58 = (undefined1 **)(in_ECX + 0x8c);
    piStack_5c = (int *)0x200c5349;
    iStack_34 = (*DAT_20403640)();
    uStack_38 = CONCAT31(uStack_38._1_3_,in_ECX[0xa4]);
    iVar9 = 0;
    ppuStack_58 = (undefined1 **)uStack_38;
    iStack_30 = 0;
    piStack_5c = (int *)0x200c5374;
    iVar4 = FUN_200cd4e0();
    piStack_3c = (int *)**(int **)(iVar4 + 4);
    iStack_24 = iVar4;
    if (piStack_3c != *(int **)(iVar4 + 4)) {
      do {
        iVar7 = 0;
        if ((int)local_40 <= *(int *)(in_ECX + 0x10)) break;
        ppuStack_58 = (undefined1 **)local_1c;
        piStack_5c = (int *)0x200c53b1;
        uVar5 = FUN_200c59b0();
        puStack_20 = (undefined1 *)&puStack_68;
        FUN_200234d0(uVar5);
        FUN_200c4fb0();
        if (local_18 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (int)local_14 - (int)local_18 >> 4;
        }
        uStack_38 = 0;
        local_40 = local_40 + -(iVar6 * iStack_34);
        puStack_20 = local_40;
        for (; ((local_18 != (int *)0x0 && (uStack_38 < (uint)((int)local_14 - (int)local_18 >> 4)))
               && (*(int *)(in_ECX + 0x10) < (int)local_40)); local_40 = local_40 + iStack_34) {
          piVar2 = (int *)**(int **)(in_ECX + 4);
          iStack_2c = *(int *)(*piVar2 + 0x9c);
          ppuStack_58 = (undefined1 **)0x200c5437;
          iVar4 = FUN_200c64f0();
          iStack_2c = (piVar2[0x12] + piVar2[0x10] + iStack_2c) - iVar4;
          ppuStack_58 = (undefined1 **)0x200c5452;
          iVar4 = FUN_200e6cb0();
          ppuStack_58 = (undefined1 **)(iStack_2c - iVar4);
          piStack_5c = (int *)0x200c545f;
          (*DAT_20403604)();
          puStack_64 = *(undefined1 **)(iVar7 + 4 + (int)local_18);
          if (puStack_64 == (undefined1 *)0x0) {
            puStack_64 = &DAT_201116cc;
          }
          piStack_5c = (int *)(in_ECX + 0x8c);
          ppuStack_58 = (undefined1 **)0x1;
          iStack_60 = -1;
          puStack_68 = local_40;
          (*DAT_20403638)(local_28);
          ppuStack_58 = (undefined1 **)0x200c549a;
          (*DAT_2040360c)();
          uStack_38 = uStack_38 + 1;
          iVar7 = iVar7 + 0x10;
          iVar4 = iStack_24;
          iVar9 = iStack_30;
        }
        local_40 = puStack_20;
        if (local_18 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)local_14 - (int)local_18 >> 4;
        }
        iVar9 = iVar9 + iVar7;
        piStack_3c = (int *)*piStack_3c;
        iStack_30 = iVar9;
      } while (piStack_3c != (int *)*(int *)(iVar4 + 4));
    }
    if (piStack_3c != *(int **)(iVar4 + 4)) {
      do {
        ppuStack_58 = (undefined1 **)local_1c;
        piStack_5c = (int *)0x200c550e;
        uVar5 = FUN_200c59b0();
        puStack_20 = (undefined1 *)&puStack_68;
        FUN_200234d0(uVar5);
        FUN_200c4fb0();
        if (local_18 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = (int)local_14 - (int)local_18 >> 4;
        }
        iVar9 = iVar9 + iVar7;
        piStack_3c = (int *)*piStack_3c;
      } while (piStack_3c != *(int **)(iVar4 + 4));
    }
    if (*(int *)(in_ECX + 0x68) != 0) {
      piStack_5c = (int *)0x200c5559;
      FUN_200c48f0();
    }
    if (*(int *)(in_ECX + 0xa0) != iVar9) {
      piStack_5c = *(int **)(in_ECX + 0x9c);
      iStack_60 = iVar9 * iStack_34;
      ppuStack_58 = (undefined1 **)0x1;
      puStack_68 = (undefined1 *)0x200c557f;
      puStack_64 = in_ECX;
      FUN_200ea1d0();
      *(int *)(in_ECX + 0xa0) = iVar9;
    }
    piVar2 = local_14;
    if (local_18 != local_14) {
      piVar8 = local_18 + 1;
      do {
        iVar4 = *piVar8;
        if (iVar4 != 0) {
          ppuStack_58 = (undefined1 **)(iVar4 + -1);
          if (*(char *)(iVar4 + -1) == '\0') {
            piStack_5c = (int *)0x200c55b0;
            FUN_200f9f75();
          }
          else {
            *(char *)ppuStack_58 = *(char *)(iVar4 + -1) + -1;
          }
        }
        *piVar8 = 0;
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar1 = piVar8 + 3;
        piVar8 = piVar8 + 4;
      } while (piVar1 != piVar2);
    }
  }
  piStack_5c = (int *)0x200c55cf;
  ppuStack_58 = (undefined1 **)local_18;
  FUN_200f9f75();
  ExceptionList = local_c;
  return;
}

