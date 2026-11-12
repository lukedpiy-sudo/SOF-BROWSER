// rea decompile_all
// name: FUN_20067ac0
// address: 0x20067ac0
// body: available
// range: 0x20067ac0-0x20067b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20067ac0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  uint uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = 0;
  *(undefined1 *)(in_ECX + 6) = 1;
  *(undefined1 *)((int)in_ECX + 0x19) = 0;
  do {
    if ((uVar1 & 1) == 0) {
      local_c = param_1[3];
    }
    else {
      local_c = *param_1;
    }
    if ((uVar1 & 2) == 0) {
      local_8 = param_1[4];
    }
    else {
      local_8 = param_1[1];
    }
    if ((uVar1 & 4) == 0) {
      local_4 = param_1[5];
    }
    else {
      local_4 = param_1[2];
    }
    FUN_200a1410(&local_18,&local_c);
    if (*(char *)(in_ECX + 6) == '\0') {
      if (*(char *)((int)in_ECX + 0x19) == '\0') {
        FUN_200c3bb0(&local_18);
        FUN_200c3b70(&local_18);
      }
    }
    else {
      *in_ECX = local_18;
      in_ECX[1] = local_14;
      in_ECX[2] = local_10;
      in_ECX[3] = local_18;
      in_ECX[4] = local_14;
      in_ECX[5] = local_10;
      *(undefined1 *)(in_ECX + 6) = 0;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  return;
}

