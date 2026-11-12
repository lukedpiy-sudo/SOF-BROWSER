// rea decompile_all
// name: FUN_20024910
// address: 0x20024910
// body: available
// range: 0x20024910-0x20024b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20024910(char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_138 [4];
  char *local_134;
  uint local_130;
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118 [2];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010af51;
  local_c = ExceptionList;
  DAT_20403c09 = 0;
  iVar1 = -(int)param_1;
  do {
    cVar2 = *param_1;
    param_1[(int)(local_110 + iVar1)] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  FUN_20107da0(local_110);
  FUN_2000a5b0(0);
  uVar4 = 0xffffffff;
  pcVar6 = local_110;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar2 = FUN_2000a6c0(uVar4,1);
  if (cVar2 != '\0') {
    pcVar6 = local_110;
    pcVar7 = local_134;
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
    FUN_2000a6a0(uVar4);
  }
  local_4 = 0;
  FUN_200a79f0(local_118,local_138);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (local_118[0] == *(int *)(in_ECX + 4)) {
    FUN_2000a5b0(0);
    uVar4 = 0xffffffff;
    pcVar6 = local_110;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_2000a6c0(uVar4,1);
    if (cVar2 != '\0') {
      pcVar6 = local_110;
      pcVar7 = local_134;
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
      local_134[uVar4] = '\0';
      local_130 = uVar4;
    }
    local_4 = 1;
    FUN_20026c70(local_118,local_138);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    uVar4 = 0xffffffff;
    pcVar6 = local_110;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    FUN_2000a600(local_110,~uVar4 - 1);
    iVar1 = *(int *)(in_ECX + 0x18);
    local_4 = 2;
    iVar3 = FUN_20083520(iVar1,*(undefined4 *)(iVar1 + 4));
    *(int *)(iVar1 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    FUN_200279a0(iVar3 + 8,local_128);
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
    if (local_124 != 0) {
      if (*(char *)(local_124 + -1) == '\0') {
        FUN_200f9f75((char *)(local_124 + -1));
      }
      else {
        *(char *)(local_124 + -1) = *(char *)(local_124 + -1) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

