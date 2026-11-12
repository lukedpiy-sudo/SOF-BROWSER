// rea decompile_all
// name: FUN_200ccd70
// address: 0x200ccd70
// body: available
// range: 0x200ccd70-0x200ccf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ccd70(char *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  char local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e5b0;
  local_c = ExceptionList;
  if (param_2 == '\0') {
    local_2c[0] = param_2;
    ExceptionList = &local_c;
    FUN_2000a5b0(0);
    pcVar5 = param_1;
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar2 = FUN_2000a6c0(uVar3,1);
    if (cVar2 != '\0') {
      pcVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_28[uVar3] = '\0';
      local_24 = uVar3;
    }
    local_4 = 1;
    FUN_20073050(&param_1,**(undefined4 **)(in_ECX + 0x68),local_2c);
    local_4 = 0xffffffff;
    if (local_28 != (char *)0x0) {
      if (local_28[-1] == '\0') {
        FUN_200f9f75(local_28 + -1);
      }
      else {
        local_28[-1] = local_28[-1] + -1;
      }
    }
    uVar3 = *(uint *)(in_ECX + 0x6c);
    local_28 = (char *)0x0;
    local_24 = 0;
    local_20 = 0;
    while (100 < uVar3) {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x68) + 4);
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      FUN_2000a5b0(1);
      FUN_200f9f75(piVar1);
      *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + -1;
      uVar3 = *(uint *)(in_ECX + 0x6c);
    }
  }
  else {
    local_1c[0] = param_2;
    ExceptionList = &local_c;
    FUN_2000a5b0(0);
    pcVar5 = param_1;
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar2 = FUN_2000a6c0(uVar3,1);
    if (cVar2 != '\0') {
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)local_18 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        local_18 = local_18 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_18 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        local_18 = local_18 + 1;
      }
      FUN_2000a6a0(uVar3);
    }
    local_4 = 0;
    FUN_20073050(&param_2,**(undefined4 **)(in_ECX + 0x74),local_1c);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    uVar3 = *(uint *)(in_ECX + 0x78);
    while (100 < uVar3) {
      FUN_200275c0(&param_2,*(undefined4 *)(*(int *)(in_ECX + 0x74) + 4));
      uVar3 = *(uint *)(in_ECX + 0x78);
    }
  }
  ExceptionList = local_c;
  return;
}

