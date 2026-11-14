// rea decompile_all
// name: FUN_30017150
// address: 0x30017150
// body: available
// range: 0x30017150-0x30017231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30017150(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_ESI;
  
  if (1.0 <= (float)param_1[1]) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    (*DAT_300a4394)(0xb65);
    DAT_300a4214 = *param_1;
    DAT_300a4768 = param_1[1];
    DAT_300a44f8 = 0x2601;
    DAT_300a46e0 = DAT_300a46e0 | 0x10;
    DAT_300a44fc = unaff_ESI;
    DAT_300a4500 = uVar1;
    DAT_300a4504 = uVar2;
    if (((byte)DAT_300a4588 & 0x10) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    if (*(char *)(param_1 + 5) != '\0') {
      (*DAT_300a4258)(0x2601,unaff_ESI,uVar1,uVar2);
      (*DAT_300a45d4)(0x4100);
    }
  }
  return;
}

