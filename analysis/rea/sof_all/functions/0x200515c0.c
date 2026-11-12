// rea decompile_all
// name: FUN_200515c0
// address: 0x200515c0
// body: available
// range: 0x200515c0-0x2005172d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20051728 to 0x200216c0 FUN_200216c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200515c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  if ((param_1 == 1) && (DAT_20390210 != 0)) {
    FUN_200216c0(1);
    Cvar_SetValue(s_lock_deaths_2013741c,0x3f800000);
    Cvar_SetValue(s_lock_blood_20137410,0x3f800000);
    Cvar_SetValue(s_lock_gorezones_20137400,0x3f800000);
    Cvar_SetValue(s_lock_sever_201373f4,0x3f800000);
    Cvar_SetValue(s_lock_textures_201373e4,0x3f800000);
    Cvar_SetValue(s_lock_pure_201373d8,0x3f800000);
    bVar3 = *(float *)(DAT_203901f8 + 0x18) != 0.0;
    if (*(float *)(DAT_203901fc + 0x18) != 0.0) {
      bVar3 = bVar3 | 2;
    }
    if (*(float *)(DAT_20390204 + 0x18) != 0.0) {
      bVar3 = bVar3 | 8;
    }
    if (*(float *)(DAT_20390200 + 0x18) != 0.0) {
      bVar3 = bVar3 | 4;
    }
    if (*(float *)(DAT_20390208 + 0x18) != 0.0) {
      bVar3 = bVar3 | 0x10;
    }
    iVar1 = FUN_2001cae0();
    if (iVar1 == 0) {
      uVar2 = FUN_20055450(&DAT_2011d0b4,bVar3);
      FUN_20022170(s_sv_violence_201373cc,uVar2);
    }
    if (*(float *)(DAT_2039020c + 0x18) != 0.0) {
      bVar3 = bVar3 | 0x20;
    }
    uVar2 = FUN_20055450(&DAT_2011d0b4,bVar3);
    FUN_20022170(s_cl_violence_201373c0,uVar2);
    Cvar_SetValue(s_low_violence_20137488,0x3f800000);
    FUN_200216c0();
    return;
  }
  return;
}

