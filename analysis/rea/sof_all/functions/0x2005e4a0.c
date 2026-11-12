// rea decompile_all
// name: FUN_2005e4a0
// address: 0x2005e4a0
// body: available
// range: 0x2005e4a0-0x2005e5b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005e4a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int aiStack_40 [8];
  char *pcStack_20;
  undefined4 uStack_1c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  uStack_1c = 1;
  local_4 = 0;
  local_8 = 0x7fffffff;
  pcStack_20 = (char *)0x2005e4bc;
  pcStack_20 = (char *)Cmd_Argv();
  aiStack_40[7] = 0x2005e4c2;
  FUN_200f9e9e();
  puVar7 = &DAT_2036bed4;
  piVar5 = aiStack_40 + 5;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    piVar5 = piVar5 + 1;
  }
  aiStack_40[4] = 0x2005e4d8;
  FUN_2004e340();
  piVar5 = &DAT_20396f18;
  do {
    piVar6 = piVar5 + -6;
    piVar8 = aiStack_40 + 5;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    puVar7 = &DAT_2036bed4;
    piVar6 = aiStack_40;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *puVar7;
      puVar7 = puVar7 + 1;
      piVar6 = piVar6 + 1;
    }
    iVar3 = FUN_2004de60();
    if (iVar3 != 0) break;
    if (*piVar5 < local_8) {
      local_8 = *piVar5;
      local_4 = iVar4;
    }
    piVar5 = piVar5 + 7;
    iVar4 = iVar4 + 1;
  } while ((int)piVar5 < 0x2039df18);
  if (iVar4 == 0x400) {
    uStack_1c = 0x2005e548;
    iVar4 = FUN_200f9f57();
    uStack_1c = 0x2005e552;
    uVar2 = FUN_200f9f57();
    uVar1 = DAT_20390d38;
    (&DAT_20396f14)[local_4 * 7] = iVar4 << 0x10 ^ uVar2;
    (&DAT_20396f18)[local_4 * 7] = uVar1;
    puVar7 = &DAT_2036bed4;
    puVar9 = &DAT_20396f00 + local_4 * 7;
    for (iVar3 = 5; iVar4 = local_4, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  uStack_1c = (&DAT_20396f14)[iVar4 * 7];
  pcStack_20 = s_challenge__i_2013990c;
  puVar7 = &DAT_2036bed4;
  piVar5 = aiStack_40 + 3;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    piVar5 = piVar5 + 1;
  }
  aiStack_40[2] = 1;
  aiStack_40[1] = 0x2005e5a7;
  FUN_2004d2f0();
  return;
}

