// rea decompile_all
// name: FUN_2001aa00
// address: 0x2001aa00
// body: available
// range: 0x2001aa00-0x2001aad4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001aa00(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
LAB_2001aa0a:
  do {
    while( true ) {
      if (param_1 < 0) {
        if (DAT_20244cc8 < DAT_20248d84) {
          *(int *)(DAT_20244cb8 + DAT_20244cc8 * 4) = -1 - param_1;
          DAT_20244cc8 = DAT_20244cc8 + 1;
        }
        return;
      }
      iVar1 = DAT_20246d64 + param_1 * 0x3c;
      iVar4 = *(int *)(DAT_20246d64 + 0x24 + param_1 * 0x3c);
      if (*(byte *)(iVar4 + 0x10) < 3) break;
      iVar4 = FUN_20054dc0(DAT_20244cc4,DAT_20244cb4,iVar4);
      if (iVar4 == 1) goto LAB_2001aa97;
      if (iVar4 == 2) goto LAB_2001aaa4;
LAB_2001aa5d:
      if (DAT_20246cfc == -1) {
        DAT_20246cfc = param_1;
      }
      FUN_2001aa00(*(undefined4 *)(iVar1 + 0x30));
      param_1 = *(int *)(iVar1 + 0x34);
    }
    iVar3 = (uint)*(byte *)(iVar4 + 0x10) * 4;
    fVar2 = *(float *)(iVar3 + DAT_20244cc4);
    if (*(float *)(iVar4 + 0xc) < fVar2 == (*(float *)(iVar4 + 0xc) == fVar2)) {
      if (*(float *)(iVar4 + 0xc) < *(float *)(iVar3 + DAT_20244cb4)) goto LAB_2001aa5d;
LAB_2001aaa4:
      param_1 = *(int *)(iVar1 + 0x34);
      goto LAB_2001aa0a;
    }
LAB_2001aa97:
    param_1 = *(int *)(iVar1 + 0x30);
  } while( true );
}

