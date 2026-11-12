// rea decompile_all
// name: FUN_2002282c
// address: 0x2002282c
// body: available
// range: 0x2002282c-0x20022a00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002282c(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int param_4,
                 undefined4 param_5,void *param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  
  iVar7 = 2;
  param_1 = 2;
  iVar2 = Cmd_Argc();
  if (2 < iVar2 + -1) {
    do {
      pcVar3 = (char *)Cmd_Argv(iVar7);
      uVar5 = 0xffffffff;
      pcVar11 = pcVar3;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      if (-param_4 - 1U <= uVar5) {
        FUN_201075d0();
      }
      if (uVar5 != 0) {
        iVar2 = param_4 + uVar5;
        cVar1 = FUN_2000a6c0(iVar2,0);
        iVar7 = param_1;
        if (cVar1 != '\0') {
          pcVar11 = param_3 + param_4;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar11 = pcVar11 + 1;
          }
          param_3[iVar2] = 0;
          param_4 = iVar2;
        }
      }
      uVar5 = 0xffffffff;
      pcVar3 = (char *)&DAT_2011d72c;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      if (-param_4 - 1U <= uVar5) {
        FUN_201075d0();
      }
      if (uVar5 != 0) {
        iVar2 = param_4 + uVar5;
        cVar1 = FUN_2000a6c0(iVar2,0);
        if (cVar1 != '\0') {
          puVar8 = (undefined4 *)&DAT_2011d72c;
          puVar10 = (undefined4 *)(param_3 + param_4);
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          param_3[iVar2] = 0;
          param_4 = iVar2;
        }
      }
      iVar7 = iVar7 + 1;
      param_1 = iVar7;
      iVar2 = Cmd_Argc();
    } while (iVar7 < iVar2 + -1);
  }
  pcVar3 = (char *)Cmd_Argv(iVar7);
  uVar5 = 0xffffffff;
  pcVar11 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  if (-param_4 - 1U <= uVar5) {
    FUN_201075d0();
  }
  if (uVar5 != 0) {
    cVar1 = FUN_2000a6c0(param_4 + uVar5,0);
    if (cVar1 != '\0') {
      pcVar11 = param_3 + param_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar11 = pcVar11 + 1;
      }
      param_3[param_4 + uVar5] = 0;
    }
  }
  puVar9 = param_3;
  if (param_3 == (undefined1 *)0x0) {
    puVar9 = &DAT_201116cc;
  }
  uVar4 = Cmd_Argv(1);
  FUN_20021d70(uVar4,puVar9,0);
  if (param_3 != (undefined1 *)0x0) {
    if (param_3[-1] != '\0') {
      param_3[-1] = param_3[-1] + -1;
      ExceptionList = param_6;
      return;
    }
    FUN_200f9f75(param_3 + -1);
  }
  ExceptionList = param_6;
  return;
}

