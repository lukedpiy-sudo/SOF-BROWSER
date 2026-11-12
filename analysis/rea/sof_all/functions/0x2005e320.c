// rea decompile_all
// name: FUN_2005e320
// address: 0x2005e320
// body: available
// range: 0x2005e320-0x2005e490 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005e320(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined *puStack_128;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined *puStack_118;
  char *pcStack_114;
  char *pcStack_110;
  undefined1 local_100 [128];
  undefined1 auStack_80 [128];
  
  if ((*(int *)(DAT_203fecd0 + 0x18) != 0x3f800000) && (*(float *)(DAT_203fac60 + 0x18) != 0.0)) {
    pcStack_110 = (char *)0x1;
    pcStack_114 = (char *)0x2005e35e;
    pcStack_114 = (char *)Cmd_Argv();
    puStack_118 = (undefined *)0x2005e364;
    iVar1 = FUN_200f9e9e();
    piVar4 = DAT_20396eec;
    if (iVar1 == 0x21) {
      iVar3 = 0;
      iVar6 = 0;
      pcStack_110 = (char *)0x2005e388;
      iVar1 = __ftol();
      if (0 < iVar1) {
        piVar2 = piVar4 + 0xa6;
        do {
          if ((1 < *piVar4) && (*piVar2 != 0)) {
            if ((*(byte *)(*piVar2 + 0x119) & 2) == 0) {
              iVar3 = iVar3 + 1;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
          piVar4 = piVar4 + 0x34ab;
          piVar2 = piVar2 + 0x34ab;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (DAT_20396dd8 == 0) {
        pcStack_110 = s_deathmatch_2011d664;
        pcStack_114 = (char *)0x2005e3eb;
        FUN_200216d0();
        pcStack_114 = (char *)0x2005e3f0;
        pcStack_114 = (char *)__ftol();
        puStack_118 = &DAT_2011d0b4;
        puStack_120 = local_100;
        puStack_11c = (undefined1 *)0x80;
        iStack_124 = 0x2005e405;
        Com_sprintf();
      }
      else {
        pcStack_110 = (char *)0x2005e3c7;
        pcStack_110 = (char *)(**(code **)(DAT_20396dd8 + 0x50))();
        pcStack_114 = &DAT_2011d114;
        puStack_11c = local_100;
        puStack_118 = (undefined *)0x80;
        puStack_120 = (undefined1 *)0x2005e3dc;
        Com_sprintf();
      }
      pcStack_110 = (char *)0x2005e416;
      pcStack_110 = (char *)__ftol();
      pcStack_114 = local_100;
      puStack_118 = *(undefined **)(DAT_203fecb8 + 4);
      puStack_11c = (undefined1 *)0x2005e433;
      puStack_11c = (undefined1 *)__ftol();
      puStack_128 = &DAT_203a1f34;
      iStack_124 = iVar3;
      puStack_120 = (undefined1 *)iVar6;
      Com_sprintf(auStack_80,0x80,s_SOF__16s__8s__i__i__i__s__s__i_201398e4,
                  *(undefined4 *)(DAT_203fecb4 + 4));
      pcStack_110 = auStack_80;
      pcStack_114 = s_info__s_201398dc;
      puVar5 = &DAT_2036bed4;
      ppuVar7 = &puStack_128;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppuVar7 = (undefined *)*puVar5;
        puVar5 = puVar5 + 1;
        ppuVar7 = ppuVar7 + 1;
      }
      FUN_2004d2f0(1);
    }
  }
  return;
}

