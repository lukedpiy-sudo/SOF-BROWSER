// rea decompile_all
// name: FUN_200a7090
// address: 0x200a7090
// body: available
// range: 0x200a7090-0x200a7195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a7090(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined1 param_8)

{
  int in_ECX;
  undefined1 local_f8 [24];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  undefined1 local_3c [60];
  
  if (*(int *)(in_ECX + 0xe0) != 0) {
    FUN_200a7710(param_1);
    if (*(char *)(in_ECX + 0x28) == '\0') {
      FUN_2009d3b0(in_ECX + 0x14);
    }
    *(undefined1 *)(in_ECX + 0x28) = 1;
    FUN_200802f0(param_4);
    FUN_200802f0(param_3);
    FUN_200c3cc0();
    local_40 = in_ECX + 0x48;
    local_44 = param_8;
    local_84 = *param_6;
    local_80 = param_6[1];
    local_7c = param_6[2];
    local_48 = param_7;
    local_e0 = *param_2;
    local_dc = param_2[1];
    local_d8 = param_2[2];
    FUN_200ae4b0(in_ECX + 0x58,local_3c,param_5,local_f8,in_ECX + 0xc0);
  }
  return;
}

