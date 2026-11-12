// rea decompile_all
// name: FUN_2004fa80
// address: 0x2004fa80
// body: available
// range: 0x2004fa80-0x2004fb82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_2004fa80(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b3f8;
  local_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  pcVar6 = param_1;
  uVar4 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  local_4 = 0;
  FUN_200c18a0(&param_1,local_1c);
  if ((param_1 == *(char **)(in_ECX + 8)) || (iVar2 = FUN_20023c40(param_1 + 0xc), iVar2 < 0)) {
    piVar3 = &local_20;
    local_20 = *(int *)(in_ECX + 8);
  }
  else {
    piVar3 = (int *)&param_1;
  }
  iVar2 = *piVar3;
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  bVar8 = iVar2 != *(int *)(in_ECX + 8);
  if (bVar8) {
    *param_2 = *(undefined4 *)(iVar2 + 0x1c);
    *param_3 = *(undefined4 *)(iVar2 + 0x20);
  }
  ExceptionList = local_c;
  return bVar8;
}

