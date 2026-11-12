// rea decompile_all
// name: FUN_200635f0
// address: 0x200635f0
// body: available
// range: 0x200635f0-0x200636bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200635f0(int param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x220) - (uint)*param_2;
  *(int *)(param_1 + 0x220) = iVar2;
  if ((iVar2 < 0) && (*(float *)(DAT_203fecac + 0x18) != 0.0)) {
    Com_DPrintf(s_commandMsec_underflow_from__s_2013a77c,param_1 + 0x29c);
    return;
  }
  if ((**(int **)(*(int *)(param_1 + 0x298) + 0x74) == 3) && ((param_2[1] & 0x40) != 0)) {
    puVar4 = &DAT_2011d31c;
    pcVar3 = s_sv_restartlevel_20139cb4;
  }
  else {
    cVar1 = (**(code **)(DAT_20396dd8 + 0x54))();
    if ((cVar1 == '\0') || ((param_2[1] & 0x40) == 0)) goto LAB_2006369a;
    cVar1 = (**(code **)(DAT_20396dd8 + 0x54))();
    if (cVar1 != '\x02') {
      (**(code **)(DAT_20396dd8 + 0x58))(1);
    }
    puVar4 = &DAT_2011e42c;
    pcVar3 = s_sv_jumpcinematic_20139d0c;
  }
  Cvar_Set(pcVar3,puVar4);
LAB_2006369a:
  cVar1 = (**(code **)(DAT_20396dd8 + 0x54))();
  if (cVar1 == '\0') {
    (**(code **)(DAT_20396dd8 + 0x38))(*(undefined4 *)(param_1 + 0x298),param_2);
  }
  return;
}

