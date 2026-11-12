// rea decompile_all
// name: FUN_2000a6c0
// address: 0x2000a6c0
// body: available
// range: 0x2000a6c0-0x2000a7db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2000a6c0(uint param_1,char param_2)

{
  undefined1 *puVar1;
  int in_ECX;
  
  if (0xfffffffd < param_1) {
    FUN_201075d0();
  }
  if (param_2 == '\0') {
    if (param_1 < *(uint *)(in_ECX + 8)) {
      *(uint *)(in_ECX + 8) = param_1;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  puVar1 = *(undefined1 **)(in_ECX + 4);
  if ((puVar1 == (undefined1 *)0x0) || (puVar1[-1] == '\0')) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar1 != (undefined1 *)0x0) {
          *(undefined4 *)(in_ECX + 8) = 0;
          *puVar1 = 0;
        }
        return 0;
      }
      if (puVar1 != (undefined1 *)0x0) {
        if (puVar1[-1] != '\0') {
          puVar1[-1] = puVar1[-1] + -1;
          *(undefined4 *)(in_ECX + 4) = 0;
          *(undefined4 *)(in_ECX + 8) = 0;
          *(undefined4 *)(in_ECX + 0xc) = 0;
          return 0;
        }
        FUN_200f9f75(puVar1 + -1);
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      return 0;
    }
    if (param_2 != '\0') {
      if ((*(uint *)(in_ECX + 0xc) < 0x20) && (param_1 <= *(uint *)(in_ECX + 0xc))) {
        return 1;
      }
      if (puVar1 != (undefined1 *)0x0) {
        if (puVar1[-1] != '\0') {
          puVar1[-1] = puVar1[-1] + -1;
          *(undefined4 *)(in_ECX + 4) = 0;
          *(undefined4 *)(in_ECX + 8) = 0;
          *(undefined4 *)(in_ECX + 0xc) = 0;
          FUN_2000a840(param_1);
          return 1;
        }
        FUN_200f9f75(puVar1 + -1);
      }
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      FUN_2000a840(param_1);
      return 1;
    }
    if (param_1 <= *(uint *)(in_ECX + 0xc)) {
      return 1;
    }
  }
  else if (param_1 == 0) {
    puVar1[-1] = puVar1[-1] + -1;
    *(undefined4 *)(in_ECX + 4) = 0;
    *(undefined4 *)(in_ECX + 8) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    return 0;
  }
  FUN_2000a840(param_1);
  return 1;
}

