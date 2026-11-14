// rea decompile_all
// name: FUN_300159f0
// address: 0x300159f0
// body: available
// range: 0x300159f0-0x30015b0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300159f0(uint param_1)

{
  byte bVar1;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  
  DAT_3008fda0 = DAT_3008fda0 + 1;
  (*DAT_300a4490)((float)(*(uint *)(param_1 + 0x28) & 0xff) * 0.003921569,
                  (float)((int)*(uint *)(param_1 + 0x28) >> 8 & 0xff) * 0.003921569,
                  (float)(param_1 & 0xff) * 0.003921569);
  FUN_3001b650();
  (*DAT_300a4710)(6);
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x28) + 8;
  if (0 < *(int *)(*(int *)(param_1 + 0x28) + 4)) {
    do {
      (*DAT_300a4520)(iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x28) + 4));
  }
  (*DAT_300a45f4)();
  if (*(int *)(DAT_3008fc98 + 0x18) == 0x40000000) {
    iVar2 = FUN_30014310(param_1,(int *)&stack0xfffffff4);
    if ((char)iVar2 != '\0') {
      bVar1 = *(byte *)(unaff_EDI + 0x50 + param_1);
      if ((((bVar1 < 0x20) && (bVar1 != 0)) && (bVar1 != 0xd)) ||
         (*(int *)(param_1 + 0x44) == DAT_3008fd90)) {
        *(uint *)(param_1 + 0x30) = DAT_30090028;
        DAT_30090028 = param_1;
        return;
      }
      FUN_300143a0();
    }
    *(uint *)(param_1 + 0x30) = (&DAT_30090028)[*(int *)(param_1 + 0x4c)];
    (&DAT_30090028)[*(int *)(param_1 + 0x4c)] = param_1;
  }
  return;
}

