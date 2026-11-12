// rea decompile_all
// name: FUN_500ee8b0
// address: 0x500ee8b0
// body: available
// range: 0x500ee8b0-0x500eeb7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_500ee8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,byte *param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  float fVar4;
  
  if (DAT_5015d1ec != 0) {
    if ((((*(float *)(DAT_5015cb88 + 0x18) < 0.01 == (*(float *)(DAT_5015cb88 + 0x18) == 0.01)) &&
         (_DAT_5015d930 < 0.01 == (_DAT_5015d930 == 0.01))) &&
        (iVar2 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar2 == 0)) && (DAT_5015d8d5 == '\0')) {
      if (_DAT_5015d1bc <= DAT_5015ccdc) {
        if (DAT_5015ccdc < _DAT_5015d934 + _DAT_5015d1bc) {
          _DAT_5015cda4 = 1.0 - (DAT_5015ccdc - _DAT_5015d1bc) / _DAT_5015d934;
          return;
        }
        bVar1 = _DAT_5015cda4 == 1.0;
        _DAT_5015cda4 = _DAT_5015cda4 - (_DAT_5015cda4 * 0.015 + 0.003) * 0.7;
        if (_DAT_5015cda4 < 0.0) {
          _DAT_5015cda4 = 0.0;
        }
        if (bVar1) {
          _DAT_5015d1bc = _DAT_5015d938 + DAT_5015ccdc;
        }
        if (_DAT_5015cda4 <= 0.75) {
          if (_DAT_5015cda4 <= 0.5) {
            return;
          }
          fVar4 = (_DAT_5015cda4 - 0.5) * 4.0;
          fVar4 = 3.0 - (fVar4 + fVar4);
        }
        else {
          fVar4 = 1.0 - (_DAT_5015cda4 - 0.75) * 4.0 * 0.8;
        }
        if (fVar4 + _DAT_5015d1c0 < DAT_5015ccdc) {
          _DAT_5015d1c0 = DAT_5015ccdc;
          uVar3 = (*DAT_5015c9f4)(s_misc_padd_warning_wav_5015420c,0x3ecccccd,0,0,0);
          (*DAT_5015ca48)(DAT_5015d1ec,0,uVar3);
        }
        if (_DAT_5015d944 + _DAT_5015cdac < DAT_5015ccdc) {
          fVar4 = 0.0;
          goto LAB_500eeb14;
        }
      }
      else {
        _DAT_5015cda4 = 1.0;
        FUN_500f8fe0();
        if (_DAT_5015d1c0 + 0.75 < DAT_5015ccdc) {
          _DAT_5015d1c0 = DAT_5015ccdc;
          uVar3 = (*DAT_5015c9f4)(s_misc_padd_max_wav_50154224,0x3f800000,0,0,0);
          (*DAT_5015ca48)(DAT_5015d1ec,0,uVar3);
        }
        if (_DAT_5015d93c + _DAT_5015cdac < DAT_5015ccdc) {
          fVar4 = 1.4013e-45;
LAB_500eeb14:
          FUN_500ee400(DAT_5015d1ec + 4,DAT_5015d1ec,(float)(DAT_5015d1ec + 0x10),fVar4,
                       unaff_retaddr,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          return;
        }
      }
    }
    else {
      _DAT_5015cda4 = _DAT_5015cda4 - (_DAT_5015cda4 * 0.015 + 0.003) * 0.7;
    }
  }
  return;
}

