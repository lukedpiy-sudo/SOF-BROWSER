// rea decompile_all
// name: FUN_200c72d0
// address: 0x200c72d0
// body: available
// range: 0x200c72d0-0x200c7376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200c72d0(int *param_1,char param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_200216d0(s_console_20121250);
  if ((fVar2 == (float10)0.0) || (*(char *)(DAT_20406554 + 1) != '\0')) {
    if ((DAT_201c1f00 < 7) || (*(char *)(DAT_20406554 + 1) != '\0')) {
      if (param_2 == '\0') {
        for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (*(char *)((int)puVar1 + 0x8d) == '\0') {
            return 1;
          }
        }
      }
      return 0;
    }
    fVar2 = (float10)FUN_200216d0(s_deathmatch_2011d664);
    if (((fVar2 == (float10)0.0) && (DAT_201c1f00 == 8)) && (DAT_201e7e94 == 3)) {
      param_1 = (int *)*param_1;
      if (param_1 == (int *)0x0) {
        return 0;
      }
      while (*(char *)((int)param_1 + 0x8d) != '\0') {
        param_1 = (int *)*param_1;
        if (param_1 == (int *)0x0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

