// rea decompile_all
// name: FUN_200219e0
// address: 0x200219e0
// body: available
// range: 0x200219e0-0x20021a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200219e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined1 local_80 [128];
  
  if ((-1 < (char)*(uint *)(param_1 + 0xc)) || (DAT_2024b1dc != '\0')) {
    if ((*(uint *)(param_1 + 0xc) & 0x20) != 0) {
      iVar1 = FUN_200f9e13(param_2);
      *(float *)(param_1 + 0x18) = (float)iVar1;
      Z_Free(*(undefined4 *)(param_1 + 4));
      uVar2 = __ftol();
      Com_sprintf(local_80,0x80,&DAT_2011d0b4,uVar2);
      uVar2 = FUN_2001ea20(local_80);
      *(undefined4 *)(param_1 + 4) = uVar2;
      return;
    }
    fVar3 = (float10)FUN_200fafcc(param_2);
    *(float *)(param_1 + 0x18) = (float)fVar3;
  }
  return;
}

