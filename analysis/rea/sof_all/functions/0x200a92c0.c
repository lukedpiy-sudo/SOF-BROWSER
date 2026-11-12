// rea decompile_all
// name: FUN_200a92c0
// address: 0x200a92c0
// body: available
// range: 0x200a92c0-0x200a9414 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200a933f) */

void FUN_200a92c0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d75c;
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
    FUN_2000a3a0(param_2 + 2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    uVar1 = param_2[8];
    if (param_1 + 6 == param_2 + 6) {
      FUN_20027e40(uVar1,0xffffffff);
      FUN_20027e40(0,0);
      ExceptionList = local_c;
      return;
    }
    if (uVar1 != 0) {
      puVar3 = (undefined1 *)param_2[7];
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = (undefined1 *)param_2[7];
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        param_1[7] = puVar3;
        param_1[8] = param_2[8];
        param_1[9] = param_2[9];
        puVar3[-1] = puVar3[-1] + '\x01';
        ExceptionList = local_c;
        return;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)param_2[7];
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_201116cc;
      }
      puVar6 = (undefined4 *)param_1[7];
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1[8] = uVar1;
      *(undefined1 *)(uVar1 + param_1[7]) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

