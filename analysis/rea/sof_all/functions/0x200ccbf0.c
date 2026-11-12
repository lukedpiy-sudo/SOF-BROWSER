// rea decompile_all
// name: FUN_200ccbf0
// address: 0x200ccbf0
// body: available
// range: 0x200ccbf0-0x200ccd0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ccbf0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char **ppcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *in_stack_00000018;
  undefined4 auStack_40 [5];
  char *apcStack_2c [5];
  
  puVar5 = *(undefined4 **)(in_ECX + 0x3c);
  if (puVar5 != *(undefined4 **)(in_ECX + 0x40)) {
    piVar6 = puVar5 + 0x1e;
    do {
      puVar7 = puVar5;
      ppcVar9 = apcStack_2c;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppcVar9 = (char *)*puVar7;
        puVar7 = puVar7 + 1;
        ppcVar9 = ppcVar9 + 1;
      }
      puVar10 = auStack_40;
      puVar7 = (undefined4 *)register0x00000010;
      for (iVar2 = 5; puVar7 = puVar7 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar10 = *puVar7;
        puVar10 = puVar10 + 1;
      }
      cVar1 = FUN_2004ddd0();
      if (cVar1 != '\0') {
        uVar3 = 0xffffffff;
        pcVar8 = in_stack_00000018;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        if (0xfffffffd < uVar3) {
          apcStack_2c[4] = (char *)0x200ccc5a;
          FUN_201075d0();
        }
        iVar2 = *piVar6;
        piVar6[1] = 0;
        if ((iVar2 == 0) || (*(char *)(iVar2 + -1) == '\0')) {
          if (uVar3 != 0) {
            if ((0x1f < (uint)piVar6[2]) || ((uint)piVar6[2] < uVar3)) {
              apcStack_2c[4] = (char *)0x1;
              apcStack_2c[3] = (char *)0x200cccae;
              FUN_2000a5b0();
              goto LAB_200cccb0;
            }
            goto LAB_200cccb6;
          }
          apcStack_2c[4] = (char *)0x1;
          apcStack_2c[3] = (char *)0x200ccc94;
          FUN_2000a5b0();
        }
        else if (uVar3 == 0) {
          *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
          *piVar6 = 0;
          piVar6[1] = 0;
          piVar6[2] = 0;
        }
        else {
LAB_200cccb0:
          apcStack_2c[3] = (char *)0x200cccb6;
          apcStack_2c[4] = (char *)uVar3;
          FUN_2000a840();
LAB_200cccb6:
          pcVar8 = in_stack_00000018;
          pcVar11 = (char *)*piVar6;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          }
          piVar6[1] = uVar3;
          *(undefined1 *)(uVar3 + *piVar6) = 0;
        }
        apcStack_2c[4] = in_stack_00000018;
        apcStack_2c[3] = s_serverinfo_20139598;
        apcStack_2c[2] = (char *)0x200ccce2;
        Cvar_Set();
      }
      puVar5 = puVar5 + 0x21;
      piVar6 = piVar6 + 0x21;
    } while (puVar5 != *(undefined4 **)(in_ECX + 0x40));
  }
  return;
}

