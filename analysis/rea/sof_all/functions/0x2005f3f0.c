// rea decompile_all
// name: FUN_2005f3f0
// address: 0x2005f3f0
// body: available
// range: 0x2005f3f0-0x2005f5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f3f0(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    DAT_20249e40 = FUN_20055930();
  }
  DAT_203a1f30 = DAT_203a1f30 + 1;
  DAT_203a1f28 = DAT_203a1f30 * 100;
  if ((*(float *)(DAT_203feccc + 0x18) == 0.0) || (1.0 < *(float *)(DAT_203fecd0 + 0x18))) {
    do {
      if ((char)DAT_203a1f24 == '\0') {
        fVar6 = (float10)(**(code **)(DAT_20396dd8 + 0x5c))(DAT_203a1f30);
        DAT_203a1f2c = (float)fVar6;
        FUN_200609d0();
      }
      if (DAT_203a1f28 < DAT_20396de4) {
        if (*(float *)(DAT_203fecc8 + 0x18) != 0.0) {
          Com_Printf(s_sv_highclamp_20139c30);
        }
        DAT_20396de4 = DAT_203a1f28;
      }
      if ((char)DAT_203a1f24 != '\0') break;
      if ((int)DAT_201398a8 < 0) {
        uVar4 = (DAT_201398a8 ^ (int)DAT_201398a8 >> 0x1f) - ((int)DAT_201398a8 >> 0x1f) &
                0x8000007f;
        bVar5 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar5 = (uVar4 - 1 | 0xffffff80) == 0xffffffff;
        }
        if (bVar5) {
          DAT_201398a8 = DAT_201398a8 - 1;
          break;
        }
      }
      if ((*(float *)(DAT_203fec70 + 0x18) == 0.0) ||
         (cVar2 = (**(code **)(DAT_20396dd8 + 0x54))(), cVar2 == '\0')) {
        DAT_201398a8 = 2;
        break;
      }
      if (DAT_201398a8 == 2) {
        Cvar_SetValue(s_s_disable_20139c24,0x3f800000);
        (**(code **)(DAT_20396dd8 + 0x58))(2);
        iVar1 = DAT_20396eec;
        uVar3 = (**(code **)(DAT_20396dd8 + 0x54))();
        *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x298) + 0x74) + 199) = uVar3;
      }
      uVar4 = DAT_201398a8 - 1;
      bVar5 = (int)DAT_201398a8 < 1;
      DAT_201398a8 = uVar4;
    } while (bVar5);
  }
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    DAT_20249f48 = FUN_20055930();
  }
  return;
}

