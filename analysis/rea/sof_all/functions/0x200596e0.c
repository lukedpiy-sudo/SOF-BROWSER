// rea decompile_all
// name: FUN_200596e0
// address: 0x200596e0
// body: available
// range: 0x200596e0-0x2005977e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200596e0(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_88;
  undefined4 local_84;
  char local_80 [128];
  
  local_84 = 0;
  local_88 = 0;
  iVar3 = 0;
  do {
    cVar1 = *param_1;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      Com_Printf(s_Bad_filter_address___s_20138da0,param_1);
      return 0;
    }
    iVar2 = 0;
    do {
      if ('9' < cVar1) break;
      local_80[iVar2] = cVar1;
      cVar1 = param_1[1];
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while ('/' < cVar1);
    local_80[iVar2] = '\0';
    cVar1 = FUN_200f9e9e(local_80);
    *(char *)((int)&local_88 + iVar3) = cVar1;
    if (cVar1 != '\0') {
      local_80[iVar3 + -4] = -1;
    }
    if (*param_1 == '\0') break;
    param_1 = param_1 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *param_2 = local_84;
  param_2[1] = local_88;
  return 1;
}

