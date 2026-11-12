// rea decompile_all
// name: FUN_200ccac0
// address: 0x200ccac0
// body: available
// range: 0x200ccac0-0x200ccbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ccac0(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 auStack_44 [5];
  undefined *apuStack_30 [4];
  uint uStack_20;
  
  puVar8 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar8 != *(undefined4 **)(in_ECX + 0x40)) {
    piVar7 = puVar8 + 0x19;
    do {
      puVar9 = puVar8;
      ppuVar10 = apuStack_30;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppuVar10 = (undefined *)*puVar9;
        puVar9 = puVar9 + 1;
        ppuVar10 = ppuVar10 + 1;
      }
      puVar11 = auStack_44;
      puVar9 = (undefined4 *)register0x00000010;
      for (iVar4 = 5; puVar9 = puVar9 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar9;
        puVar11 = puVar11 + 1;
      }
      cVar1 = FUN_2004ddd0();
      if (cVar1 != '\0') {
        uStack_20 = 0x200ccb17;
        uVar2 = __ftol();
        apuStack_30[3] = &DAT_2011d0b4;
        apuStack_30[2] = (undefined *)0x200ccb26;
        uStack_20 = uVar2;
        pcVar3 = (char *)FUN_20055450();
        uVar5 = 0xffffffff;
        pcVar12 = pcVar3;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        if (0xfffffffd < uVar5) {
          uStack_20 = 0x200ccb43;
          FUN_201075d0();
        }
        piVar7[1] = 0;
        if ((*piVar7 == 0) || (*(char *)(*piVar7 + -1) == '\0')) {
          if (uVar5 != 0) {
            if ((0x1f < (uint)piVar7[2]) || ((uint)piVar7[2] < uVar5)) {
              uStack_20 = 1;
              apuStack_30[3] = (undefined *)0x200ccb8f;
              FUN_2000a5b0();
              goto LAB_200ccb91;
            }
            goto LAB_200ccb97;
          }
          uStack_20 = 1;
          apuStack_30[3] = (undefined *)0x200ccb75;
          FUN_2000a5b0();
        }
        else if (uVar5 == 0) {
          uStack_20 = 1;
          apuStack_30[3] = (undefined *)0x200ccb65;
          FUN_2000a5b0();
        }
        else {
LAB_200ccb91:
          apuStack_30[3] = (undefined *)0x200ccb97;
          uStack_20 = uVar5;
          FUN_2000a840();
LAB_200ccb97:
          pcVar12 = (char *)*piVar7;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar12 = pcVar12 + 1;
          }
          piVar7[1] = uVar5;
          *(undefined1 *)(*piVar7 + uVar5) = 0;
        }
        piVar7[3] = uVar2;
      }
      puVar8 = puVar8 + 0x21;
      piVar7 = piVar7 + 0x21;
    } while (puVar8 != *(undefined4 **)(in_ECX + 0x40));
  }
  return;
}

