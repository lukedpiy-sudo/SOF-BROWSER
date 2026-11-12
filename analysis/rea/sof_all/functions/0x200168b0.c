// rea decompile_all
// name: FUN_200168b0
// address: 0x200168b0
// body: available
// range: 0x200168b0-0x20016cc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200168b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 auStack_65 [5];
  char local_60 [32];
  char cStack_40;
  char cStack_1b;
  
  if (DAT_201e9dcc != '\0') {
    FUN_200140b0();
    FUN_200140b0();
    iVar2 = 0;
    do {
      cVar1 = (&DAT_201e9dd1)[iVar2];
      local_60[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    pcVar7 = local_60;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    auStack_65[~uVar5] = 0;
    FUN_200221b0();
    FUN_20016630();
    Com_Printf();
    FUN_20015fa0();
    (*DAT_20403580)();
    Com_Printf();
    FUN_20016630();
    Com_Printf();
    FUN_20015fa0();
    iVar2 = 1;
    do {
      FUN_20015d50();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    __ftol();
    FUN_20015d50();
    FUN_20016630();
    FUN_2000a350();
    Com_Printf();
    FUN_2002d590();
    FUN_2002d5c0();
    FUN_2002d760();
    FUN_20016630();
    puVar6 = &DAT_20224c38;
    do {
      if (puVar6[-0x24d6c] == '\0') break;
      Com_sprintf();
      iVar2 = (*DAT_20403590)();
      if (iVar2 == 0) {
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 0x40;
    } while ((int)puVar6 < 0x20224ff8);
    FUN_20016630();
    pcVar7 = &DAT_202002cc;
    do {
      if (*pcVar7 == '\0') break;
      FUN_20057ca0();
      FUN_2000e620();
      pcVar7 = pcVar7 + 0x40;
    } while ((int)pcVar7 < 0x20200a0c);
    pcVar7 = &DAT_201f36cc;
    do {
      if (*pcVar7 == '\0') break;
      FUN_200430b0();
      pcVar7 = pcVar7 + 0x40;
    } while ((int)pcVar7 < 0x201f768c);
    FUN_20016630();
    iVar2 = 1;
    pcVar7 = &DAT_201e9dcc;
    puVar6 = &stack0xdfe161f4;
    do {
      pcVar3 = pcVar7;
      if (*pcVar7 == '\0') break;
      do {
        cStack_1b = *pcVar3;
        puVar6[(int)pcVar3] = cStack_1b;
        pcVar3 = pcVar3 + 1;
      } while (cStack_1b != '\0');
      if (cStack_40 != '*') {
        Com_Printf();
      }
      FUN_20015fa0();
      FUN_20065cf0();
      uVar4 = (*DAT_20403584)();
      *(undefined4 *)(&DAT_20220d8c + iVar2 * 4) = uVar4;
      if (cStack_40 == '*') {
        uVar4 = FUN_2001a530();
        *(undefined4 *)(&DAT_2022118c + iVar2 * 4) = uVar4;
      }
      else {
        *(undefined4 *)(&DAT_2022118c + iVar2 * 4) = 0;
      }
      if (cStack_40 != '*') {
        Com_Printf();
      }
      pcVar7 = pcVar7 + 0x40;
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + -0x40;
    } while ((int)pcVar7 < 0x201edd8c);
    FUN_20016630();
    Com_Printf();
    FUN_20015fa0();
    puVar8 = &DAT_20221b20;
    pcVar7 = &DAT_201f76cc;
    do {
      if (*pcVar7 == '\0') break;
      uVar4 = (*DAT_20403590)();
      *puVar8 = uVar4;
      FUN_20065cf0();
      pcVar7 = pcVar7 + 0x40;
      puVar8 = puVar8 + 1;
    } while ((int)pcVar7 < 0x201fb68c);
    Com_Printf();
    pcVar7 = &DAT_201ff68c;
    do {
      if (*pcVar7 != '\0') {
        Com_Printf();
        FUN_20015fa0();
        FUN_20065cf0();
        FUN_2000e5d0();
        Com_Printf();
      }
      pcVar7 = pcVar7 + 0x40;
    } while ((int)pcVar7 < 0x201ffe8c);
    FUN_20016630();
    FUN_2000e360();
    Com_Printf();
    FUN_20015fa0();
    FUN_200fafcc();
    FUN_200fb019();
    (*DAT_204035a0)();
    (*DAT_204035a8)();
    Com_Printf();
    (*DAT_204035ac)();
    FUN_20019ef0();
    FUN_20020690();
    FUN_20016630();
    FUN_20015fa0();
    DAT_201e7594 = 1;
    DAT_201e7596 = 1;
    DAT_201c1f24 = 0;
    Cvar_Set();
    FUN_200f9e9e();
    FUN_20001310();
  }
  return;
}

