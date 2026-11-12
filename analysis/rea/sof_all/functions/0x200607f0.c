// rea decompile_all
// name: FUN_200607f0
// address: 0x200607f0
// body: available
// range: 0x200607f0-0x20060914 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200607f0(char param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_40 [64];
  
  pcVar8 = local_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  if (param_1 == '\0') {
    FUN_200fa7cc(&param_1);
    uVar2 = FUN_200fbe79(&param_1);
    pcVar3 = (char *)FUN_200fbda3(uVar2);
    pcVar8 = local_40;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    puVar4 = (undefined1 *)FUN_200faaf0(local_40,10);
    *puVar4 = 0;
  }
  else {
    Com_sprintf(local_40,0x40,s_ENTERING_2013a150);
  }
  iVar5 = -1;
  pcVar8 = local_40;
  do {
    pcVar3 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar3;
  } while (cVar1 != '\0');
  *(undefined2 *)(pcVar3 + -1) = DAT_201312b4;
  FUN_200216d0(s_skill_20139e70);
  iVar5 = __ftol();
  uVar6 = 0xffffffff;
  pcVar8 = (&PTR_s_Effortless_20139e78)[iVar5];
  do {
    pcVar3 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar8 = local_40;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar3 + -uVar6;
  pcVar3 = pcVar9 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = -1;
  pcVar8 = local_40;
  do {
    pcVar3 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = 0xffffffff;
  *(undefined2 *)(pcVar3 + -1) = DAT_201312b4;
  pcVar8 = local_40;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  _strncat(local_40,&DAT_203a2374,0x3f - (~uVar6 - 1));
  FUN_20060230(0x434f4d4d,local_40,0x40);
  Com_DPrintf(s_Saving__current___s__2013a138,local_40);
  return;
}

