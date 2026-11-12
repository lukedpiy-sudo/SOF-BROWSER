// rea decompile_all
// name: FUN_20008260
// address: 0x20008260
// body: available
// range: 0x20008260-0x2000839b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20008260(char param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  in_ECX[7] = 0xffffffff;
  in_ECX[8] = 0xffffffff;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  in_ECX[8] = 0xff00dc00;
  *(undefined1 *)(in_ECX + 9) = 0xa0;
  *(undefined1 *)((int)in_ECX + 0x23) = 0xa0;
  *in_ECX = &PTR_FUN_201114a8;
  in_ECX[5] = 0x43020000;
  in_ECX[6] = 0x42be0000;
  in_ECX[7] = 0xff00dc00;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  FUN_200065a0();
  in_ECX[0x12] = 0xffffffff;
  in_ECX[0x13] = 0xffffffff;
  in_ECX[8] = 0xafffffff;
  in_ECX[0x12] = 0xff00dc00;
  in_ECX[0x13] = 0xff00dc00;
  *in_ECX = &PTR_FUN_20111600;
  in_ECX[7] = 0xffffffff;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0xffffffff;
  if (param_1 == '\0') {
    in_ECX[0x16] = 0;
    in_ECX[0x17] = 0x80;
    in_ECX[0x18] = 0x31;
    in_ECX[0x19] = 0x3e;
    in_ECX[0x1a] = 0x1f;
  }
  else {
    in_ECX[0x16] = 0x80;
    in_ECX[0x17] = 0;
    in_ECX[0x18] = 0x11;
    in_ECX[0x19] = 0x1c;
    in_ECX[0x1a] = 0x4c;
  }
  in_ECX[0xd] = 0x40400000;
  in_ECX[0xe] = 0x3fc90fdb;
  *(undefined1 *)(in_ECX + 0x10) = 1;
  in_ECX[0xf] = 0x40200000;
  return;
}

