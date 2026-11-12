// rea decompile_all
// name: FUN_200c94a0
// address: 0x200c94a0
// body: available
// range: 0x200c94a0-0x200c950e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200c94a0(char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_3 == 0) {
    if (*(uint *)(in_ECX + 8) <= param_2) {
      return *(uint *)(in_ECX + 8);
    }
  }
  else {
    if (param_3 <= *(uint *)(in_ECX + 8)) {
      uVar2 = *(uint *)(in_ECX + 8) - param_3;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      pcVar1 = *(char **)(in_ECX + 4);
      pcVar3 = pcVar1 + uVar2;
      do {
        if (*pcVar3 == *param_1) {
          bVar6 = true;
          uVar2 = param_3;
          pcVar4 = pcVar3;
          pcVar5 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar6 = *pcVar4 == *pcVar5;
            pcVar4 = pcVar4 + 1;
            pcVar5 = pcVar5 + 1;
          } while (bVar6);
          if (bVar6) {
            return (int)pcVar3 - (int)pcVar1;
          }
        }
        if (pcVar3 == pcVar1) break;
        pcVar3 = pcVar3 + -1;
      } while( true );
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}

