// rea decompile_all
// name: FUN_2002da20
// address: 0x2002da20
// body: available
// range: 0x2002da20-0x2002dafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002da20(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_10;
  float fStack_c;
  uint local_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  local_10 = 0x40400000;
  FUN_200facde(&local_10,4,1,param_1);
  FUN_200facde();
  FUN_20041d30(uVar1);
  local_8 = *(uint *)(in_ECX + 0x14);
  uVar3 = 0;
  uStack_4 = 0;
  param_1 = (float)local_8;
  FUN_200facde(&param_1,4,1,uVar1);
  puVar4 = (undefined4 *)**(undefined4 **)(in_ECX + 0x10);
  if (0.0 < param_1) {
    do {
      iVar2 = (**(code **)(*(int *)puVar4[2] + 0x14))();
      fStack_c = (float)iVar2;
      FUN_200facde(&fStack_c,4,1,uVar1);
      (**(code **)(*(int *)puVar4[2] + 0x20))(uVar1);
      FUN_20041d30(uVar1);
      uVar3 = uVar3 + 1;
      puVar4 = (undefined4 *)*puVar4;
      local_8 = uVar3;
    } while ((float)(int)uVar3 < param_1);
  }
  FUN_20041d30(uVar1);
  return;
}

