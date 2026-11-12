// rea decompile_all
// name: FUN_200fbda3
// address: 0x200fbda3
// body: available
// range: 0x200fbda3-0x200fbe50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200fbda3(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = param_1[6];
  iVar2 = param_1[4];
  pcVar3 = &DAT_204083e4;
  iVar7 = 0;
  do {
    pcVar4 = pcVar3;
    iVar8 = iVar7 + 1;
    *pcVar4 = " SunMonTueWedThuFriSat"[iVar1 * 3 + iVar7 + 1];
    (&DAT_204083e8)[iVar7] = " SunMonTueWedThuFriSat"[iVar8 + iVar2 * 3 + 0x18];
    pcVar3 = pcVar4 + 1;
    iVar7 = iVar8;
  } while (iVar8 < 3);
  pcVar4[1] = ' ';
  pcVar4[5] = ' ';
  puVar5 = (undefined1 *)FUN_200fbe51(pcVar4 + 6,param_1[3]);
  *puVar5 = 0x20;
  puVar5 = (undefined1 *)FUN_200fbe51(puVar5 + 1,param_1[2]);
  *puVar5 = 0x3a;
  puVar5 = (undefined1 *)FUN_200fbe51(puVar5 + 1,param_1[1]);
  *puVar5 = 0x3a;
  puVar5 = (undefined1 *)FUN_200fbe51(puVar5 + 1,*param_1);
  *puVar5 = 0x20;
  uVar6 = FUN_200fbe51(puVar5 + 1,(int)param_1[5] / 100 + 0x13);
  puVar5 = (undefined1 *)FUN_200fbe51(uVar6,(int)param_1[5] % 100);
  *puVar5 = 10;
  puVar5[1] = 0;
  return &DAT_204083e4;
}

