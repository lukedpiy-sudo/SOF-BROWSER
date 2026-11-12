// rea decompile_all
// name: FUN_20037c40
// address: 0x20037c40
// body: available
// range: 0x20037c40-0x20037d0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20037c40(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = 0;
  if (in_ECX[0x92] != 0) {
    iVar1 = FUN_20035dc0();
    if (iVar1 != 0) {
      in_ECX[0x92] = 0;
    }
    return 0;
  }
  if (((*(float *)(DAT_20364360 + 0x18) != 0.0) || (*(float *)(DAT_20364368 + 0x18) != 0.0)) ||
     (*(float *)(DAT_20321f54 + 0x18) != 0.0)) {
    iVar1 = *in_ECX;
    if (*(float *)(DAT_20364360 + 0x18) == 0.0) {
      fVar3 = *(float *)(DAT_20364368 + 0x18) * -1.0;
    }
    else {
      fVar3 = *(float *)(DAT_20364360 + 0x18);
    }
    uVar2 = __ftol(fVar3);
    uVar2 = (**(code **)(iVar1 + 4))(uVar2);
    Cvar_SetValue(s_fx_partadd_20132c54,0);
    Cvar_SetValue(s_fx_partsub_20132c48,0);
    Cvar_SetValue(s_fx_partadjust_20132c38,0);
  }
  return uVar2;
}

