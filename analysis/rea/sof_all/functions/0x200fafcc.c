// rea decompile_all
// name: FUN_200fafcc
// address: 0x200fafcc
// body: available
// range: 0x200fafcc-0x200fb018 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_200fafcc(byte *param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  while( true ) {
    if (DAT_2015d4c4 < 2) {
      uVar1 = (byte)PTR_DAT_2015d2b8[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = FUN_200fec59(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar5 = 0;
  uVar4 = 0;
  sVar2 = _strlen((char *)param_1);
  iVar3 = FUN_201009dc(param_1,sVar2,uVar4,uVar5);
  return (float10)*(double *)(iVar3 + 0x10);
}

