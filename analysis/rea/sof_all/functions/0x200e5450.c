// rea decompile_all
// name: FUN_200e5450
// address: 0x200e5450
// body: available
// range: 0x200e5450-0x200e55d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e54ad) */

void FUN_200e5450(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010fc71;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar1 = param_2[4];
    if (param_1 + 2 == param_2 + 2) {
      if (uVar1 != 0) {
        FUN_201077fc();
      }
      iVar3 = param_1[4] - uVar1;
      iVar7 = -1;
      if ((iVar3 == -1) || (iVar7 = iVar3, iVar3 != 0)) {
        FUN_2000a930();
        FUN_200fa360(param_1[3] + uVar1,param_1[3] + uVar1 + iVar7,(param_1[4] - iVar7) - uVar1);
        iVar3 = param_1[4];
        cVar2 = FUN_2000a6c0(iVar3 - iVar7,0);
        if (cVar2 != '\0') {
          FUN_2000a6a0(iVar3 - iVar7);
          ExceptionList = local_c;
          return;
        }
      }
    }
    else {
      if (uVar1 != 0) {
        puVar4 = (undefined1 *)param_2[3];
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_201116cc;
        }
        if ((int)(uint)(byte)puVar4[-1] < -1) {
          FUN_2000a5b0(1);
          puVar4 = (undefined1 *)param_2[3];
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          param_1[3] = puVar4;
          param_1[4] = param_2[4];
          param_1[5] = param_2[5];
          puVar4[-1] = puVar4[-1] + '\x01';
          ExceptionList = local_c;
          return;
        }
      }
      cVar2 = FUN_2000a6c0(uVar1,1);
      if (cVar2 != '\0') {
        puVar6 = (undefined4 *)param_2[3];
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_201116cc;
        }
        puVar8 = (undefined4 *)param_1[3];
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        param_1[4] = uVar1;
        *(undefined1 *)(uVar1 + param_1[3]) = 0;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

