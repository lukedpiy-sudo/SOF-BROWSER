// rea decompile_all
// name: FUN_2008a520
// address: 0x2008a520
// body: available
// range: 0x2008a520-0x2008a5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008a520(uint param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    if (*(int *)(in_ECX + 0x80) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(in_ECX + 0x84) - *(int *)(in_ECX + 0x80)) / 0x18;
    }
    uVar3 = uVar5 & 0xffff;
    if (uVar4 <= uVar3) break;
    if (*(char *)(uVar3 + *(int *)(param_2 + 4)) == '\0') {
      iVar1 = *(int *)(in_ECX + 0x80) + uVar3 * 0x18;
      sVar2 = *(short *)(*(int *)(iVar1 + 0xc) +
                        *(int *)(*(int *)(in_ECX + 0x5c) + -8 + (param_1 & 0xffff) * 8) * 2);
      if ((-1 < sVar2) && (*(int *)(iVar1 + 4) == 1)) {
        *(undefined4 *)(param_3[2] + sVar2 * 4) = *param_3;
      }
    }
    uVar5 = uVar5 + 1;
  }
  return;
}

