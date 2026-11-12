// rea decompile_all
// name: FUN_2008e320
// address: 0x2008e320
// body: available
// range: 0x2008e320-0x2008e443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_2008e320(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c5e8;
  pvStack_c = ExceptionList;
  local_1c[0] = *param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_2000a3a0(param_2,0,0xffffffff);
  local_4 = 0;
  uVar4 = 0xffffffff;
  if (*(uint *)(param_3 + 8) != 0xffffffff) {
    uVar4 = *(uint *)(param_3 + 8);
  }
  if (-local_14 - 1U <= uVar4) {
    FUN_201075d0();
  }
  if (uVar4 != 0) {
    iVar1 = local_14 + uVar4;
    cVar2 = FUN_2000a6c0(iVar1,0);
    if (cVar2 != '\0') {
      puVar5 = *(undefined4 **)(param_3 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_201116cc;
      }
      puVar6 = (undefined4 *)(local_14 + local_18);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined1 *)(local_18 + iVar1) = 0;
      local_14 = iVar1;
    }
  }
  *param_1 = local_1c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_2000a3a0(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) != '\0') {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_200f9f75((char *)(local_18 + -1));
  }
  ExceptionList = pvStack_c;
  return param_1;
}

