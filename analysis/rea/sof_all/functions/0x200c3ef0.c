// rea decompile_all
// name: FUN_200c3ef0
// address: 0x200c3ef0
// body: available
// range: 0x200c3ef0-0x200c4104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c3ef0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_48;
  int *piStack_44;
  undefined4 **ppuStack_40;
  undefined4 **ppuStack_3c;
  undefined4 **ppuStack_38;
  int local_24;
  int *local_20;
  undefined4 **local_1c;
  undefined4 **local_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010dd58;
  pvStack_c = ExceptionList;
  ppuStack_38 = &local_18;
  ppuStack_40 = &local_20;
  ppuStack_3c = &local_1c;
  piStack_44 = &local_24;
  iStack_48 = 1;
  ExceptionList = &pvStack_c;
  FUN_200ea2c0(param_1);
  ppuStack_38 = (undefined4 **)(in_ECX + 8);
  if (*(int *)(in_ECX + 8) != 0) {
    ppuStack_3c = local_18;
    ppuStack_40 = local_1c;
    piStack_44 = local_20;
    iStack_48 = local_24;
    (*DAT_204035e4)();
  }
  if (*(int *)(in_ECX + 0x14) == 0) goto switchD_200c3f71_default;
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 1:
    if (local_24 < local_24 + (int)local_1c) {
      iVar2 = (int)local_18 + (int)local_20;
      piVar3 = local_20;
      iVar4 = local_24;
      iVar5 = local_24;
      do {
        piVar6 = piVar3;
        if ((int)piVar3 < iVar2) {
          do {
            ppuStack_38 = (undefined4 **)0xffffffff;
            puStack_14 = (undefined1 *)&iStack_48;
            FUN_200234d0(in_ECX + 0xc);
            FUN_200c8a40(iVar5,piVar6);
            piVar6 = (int *)((int)piVar6 + *(int *)(in_ECX + 0x20));
            iVar2 = (int)local_20 + (int)local_18;
            piVar3 = local_20;
            iVar4 = local_24;
          } while ((int)piVar6 < iVar2);
        }
        iVar5 = iVar5 + *(int *)(in_ECX + 0x1c);
      } while (iVar5 < (int)local_1c + iVar4);
    }
    break;
  case 2:
    ppuStack_38 = (undefined4 **)0x0;
    puStack_14 = (undefined1 *)&iStack_48;
    FUN_200234d0(in_ECX + 0xc);
    uStack_4 = 0xffffffff;
    puVar1 = (undefined4 *)FUN_2000a7e0();
    FUN_200c8960(local_24,local_20,local_1c,local_18,*puVar1);
    break;
  case 3:
    local_24 = local_24 + ((int)local_1c - *(int *)(in_ECX + 0x1c) >> 1);
    local_20 = (int *)((int)local_20 + ((int)local_18 - *(int *)(in_ECX + 0x20) >> 1));
  case 4:
    ppuStack_38 = (undefined4 **)0xffffffff;
    puStack_10 = (undefined1 *)&iStack_48;
    FUN_200234d0(in_ECX + 0xc);
    goto LAB_200c40ab;
  case 5:
    local_24 = (int)local_1c - *(int *)(in_ECX + 0x1c);
    ppuStack_38 = (undefined4 **)0xffffffff;
    puStack_10 = (undefined1 *)&iStack_48;
    FUN_200234d0(in_ECX + 0xc);
LAB_200c40ab:
    FUN_200c8a40(local_24,local_20);
  }
switchD_200c3f71_default:
  ppuStack_38 = &local_18;
  ppuStack_3c = &local_1c;
  ppuStack_40 = &local_20;
  piStack_44 = &local_24;
  iStack_48 = 0;
  FUN_200ea2c0(param_1);
  piVar3 = (int *)**(int **)(in_ECX + 0x28);
  if (piVar3 != *(int **)(in_ECX + 0x28)) {
    do {
      ppuStack_38 = (undefined4 **)0x200c40e7;
      (**(code **)(*(int *)piVar3[2] + 0x1c))();
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x28));
  }
  ExceptionList = pvStack_c;
  return;
}

