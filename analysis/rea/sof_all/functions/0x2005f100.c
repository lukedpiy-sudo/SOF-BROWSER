// rea decompile_all
// name: FUN_2005f100
// address: 0x2005f100
// body: available
// range: 0x2005f100-0x2005f28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005f100(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 auStack_3c [5];
  int iStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  piStack_18 = (int *)&DAT_20367ebc;
  piStack_1c = &DAT_2036bed4;
  puStack_20 = (undefined *)0x1;
  puStack_24 = (undefined *)0x2005f116;
  iVar1 = FUN_2004e630();
  do {
    if (iVar1 == 0) {
      return;
    }
    if (*DAT_20367ec0 == -1) {
      piStack_18 = (int *)0x2005f130;
      FUN_2005eea0();
    }
    else {
      piStack_18 = (int *)&DAT_20367ebc;
      piStack_1c = (int *)0x2005f13f;
      FUN_2001e220();
      piStack_1c = (int *)&DAT_20367ebc;
      puStack_20 = (undefined *)0x2005f149;
      FUN_2001e310();
      puStack_20 = &DAT_20367ebc;
      puStack_24 = (undefined *)0x2005f153;
      FUN_2001e310();
      puStack_24 = &DAT_20367ebc;
      iStack_28 = 0x2005f15d;
      uVar2 = FUN_2001e290();
      piVar3 = DAT_20396eec;
      iVar4 = 0;
      piStack_18 = (int *)0x2005f17f;
      iVar1 = __ftol();
      if (0 < iVar1) {
        do {
          if (*piVar3 != 0) {
            piVar5 = piVar3 + 0x14a0;
            piVar7 = &iStack_28;
            for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar7 = piVar7 + 1;
            }
            puVar6 = &DAT_2036bed4;
            puVar8 = auStack_3c;
            for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar1 = FUN_2004de60();
            if ((iVar1 != 0) && (piVar3[0x14a5] == (uVar2 & 0xffff))) {
              if (*(short *)((int)piVar3 + 0x5292) != DAT_2036bee6) {
                piStack_18 = (int *)s_SV_ReadPackets__fixing_up_a_tran_20139be4;
                piStack_1c = (int *)0x2005f200;
                Com_Printf();
                *(short *)((int)piVar3 + 0x5292) = DAT_2036bee6;
              }
              piStack_1c = piVar3 + 0x149b;
              piStack_18 = (int *)&DAT_20367ebc;
              puStack_20 = (undefined *)0x2005f222;
              iVar1 = FUN_2004d640();
              if ((iVar1 != 0) && (*piVar3 != 1)) {
                piVar3[0x1499] = DAT_20396de4;
                piStack_1c = (int *)0x2005f240;
                piStack_18 = piVar3;
                FUN_200636c0();
                piStack_1c = (int *)piVar3[0x81];
                puStack_20 = (undefined *)(((int)piVar3 - (int)DAT_20396eec) / 0xd2ac);
                puStack_24 = (undefined *)0x2005f267;
                FUN_2008ec70();
              }
              break;
            }
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x34ab;
          piStack_18 = (int *)0x2005f1dd;
          iVar1 = __ftol();
        } while (iVar4 < iVar1);
      }
    }
    piStack_18 = (int *)&DAT_20367ebc;
    piStack_1c = &DAT_2036bed4;
    puStack_20 = (undefined *)0x1;
    puStack_24 = (undefined *)0x2005f27b;
    iVar1 = FUN_2004e630();
  } while( true );
}

