// rea decompile_all
// name: FUN_200300d0
// address: 0x200300d0
// body: available
// range: 0x200300d0-0x20030153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200300d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,int param_12,
                 undefined4 param_13,int param_14,undefined4 param_15)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[3] = param_7;
    param_1[4] = param_8;
    param_1[5] = param_9;
    param_1[0xd] = (int)*(char *)(param_12 + 0x23);
    param_1[0x13] = param_15;
    param_1[0xf] = *(undefined4 *)(param_12 + 0x20);
    param_1[0xe] = 0;
    param_1[0xc] = 0xffffffff;
    if (param_14 != 1) {
      param_1[0xe] = 3;
    }
    iVar1 = param_1[0xd];
    if ((iVar1 < 0x2b) && (-1 < iVar1)) {
      *(undefined *)(param_1 + 0x11) = (&DAT_201348c1)[iVar1 * 0x10];
      return;
    }
    param_1[0xd] = 0;
  }
  return;
}

