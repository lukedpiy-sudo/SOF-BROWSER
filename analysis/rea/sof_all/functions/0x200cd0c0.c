// rea decompile_all
// name: FUN_200cd0c0
// address: 0x200cd0c0
// body: available
// range: 0x200cd0c0-0x200cd25e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cd0c0(char *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint local_34;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e5d0;
  local_c = ExceptionList;
  iVar5 = *(int *)(in_ECX + 0x80);
  local_34 = 0;
  ExceptionList = &local_c;
  while( true ) {
    if ((*(int *)(in_ECX + 0x80) == 0) ||
       ((uint)(*(int *)(in_ECX + 0x84) - *(int *)(in_ECX + 0x80) >> 4) <= local_34)) break;
    uVar3 = 0xffffffff;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_20023c90(0,*(undefined4 *)(iVar5 + 8),param_1,~uVar3 - 1);
    if (0 < iVar2) {
      local_2c[0] = param_1._0_1_;
      FUN_2000a5b0(0);
      uVar3 = 0xffffffff;
      pcVar6 = param_1;
      goto code_r0x200cd165;
    }
    local_34 = local_34 + 1;
    iVar5 = iVar5 + 0x10;
  }
  goto LAB_200cd1da;
  while( true ) {
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
code_r0x200cd165:
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_2000a6c0(uVar3,1);
  if (cVar1 != '\0') {
    pcVar6 = param_1;
    pcVar7 = local_28;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_28[uVar3] = '\0';
    local_24 = uVar3;
  }
  local_4 = 0;
  FUN_2008ce10(iVar5,1,local_2c);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
LAB_200cd1da:
  if (iVar5 == *(int *)(in_ECX + 0x84)) {
    local_1c[0] = param_1._0_1_;
    uVar3 = 0xffffffff;
    local_18 = 0;
    pcVar6 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_2000a600(param_1,~uVar3 - 1);
    local_4 = 1;
    FUN_2008ce10(*(undefined4 *)(in_ECX + 0x84),1,local_1c);
    if (local_18 != 0) {
      if (*(char *)(local_18 + -1) == '\0') {
        FUN_200f9f75((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

