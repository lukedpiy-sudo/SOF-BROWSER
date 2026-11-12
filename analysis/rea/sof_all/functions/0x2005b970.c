// rea decompile_all
// name: FUN_2005b970
// address: 0x2005b970
// body: available
// range: 0x2005b970-0x2005ba3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005b970(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  puVar1 = (undefined4 *)(param_1 + ((DAT_203a1f30 & 0xf) + 0x45) * 0xf8);
  uVar2 = *(uint *)(param_1 + 0x204);
  if ((int)uVar2 < 1) {
    iVar4 = 0;
    param_1 = 0xffffffff;
  }
  else if ((int)(DAT_203a1f30 - uVar2) < 0xd) {
    iVar4 = param_1 + ((uVar2 & 0xf) + 0x45) * 0xf8;
    param_1 = uVar2;
  }
  else {
    iVar4 = 0;
    param_1 = 0xffffffff;
  }
  FUN_2001cb00(param_2,0x17);
  FUN_2001cbf0(param_2,DAT_203a1f30);
  FUN_2001cbf0(param_2,param_1);
  FUN_2001cc80(param_2,DAT_203a1f2c);
  *(undefined4 *)(iVar3 + 0x294) = 0;
  FUN_2001cb00(param_2,*puVar1);
  FUN_2001e7b0(param_2,puVar1 + 1,*puVar1);
  FUN_2005b110(iVar4,puVar1,param_2);
  FUN_2005af90(iVar4,puVar1,param_2);
  return;
}

