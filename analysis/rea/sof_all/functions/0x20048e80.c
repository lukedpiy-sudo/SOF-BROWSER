// rea decompile_all
// name: FUN_20048e80
// address: 0x20048e80
// body: available
// range: 0x20048e80-0x20049099 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20048e80(char *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_34 [4];
  char *local_30;
  uint local_2c;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b330;
  local_c = ExceptionList;
  local_34[0] = param_2._0_1_;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  uVar4 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar9 = param_1;
    pcVar8 = local_30;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_2000a6a0(uVar4);
  }
  uVar4 = 0;
  local_4 = 0;
  if (local_2c != 0) {
    do {
      if (local_30 == (char *)0x0) {
        pcVar9 = "";
      }
      else {
        FUN_2000a930();
        pcVar9 = local_30 + uVar4;
      }
      puVar3 = (undefined1 *)FUN_200483c0(uVar4);
      uVar2 = FUN_200fb2a2((int)*pcVar9);
      *puVar3 = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_2c);
  }
  FUN_200a79f0(&local_48,local_34);
  if (local_48 == *(int *)(in_ECX + 4)) {
    uVar4 = FS_LoadFile(param_1,param_2,0);
    puVar6 = (undefined4 *)0x0;
    if ((int)uVar4 < 0) {
      if (*param_2 != 0) {
        FS_FreeFile(*param_2);
      }
    }
    else {
      puVar6 = operator_new(uVar4);
      if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*param_2;
        puVar10 = puVar6;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FS_FreeFile(*param_2);
      }
      *param_2 = (int)puVar6;
    }
    FUN_200234d0(local_34);
    local_14 = local_44;
    local_10 = local_40;
    local_4._0_1_ = 1;
    FUN_20049520(&local_44,local_24);
    FUN_2008c5b0(&local_44,&local_40);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    *(undefined4 **)(local_3c + 0x1c) = puVar6;
    *(uint *)(local_3c + 0x20) = uVar4;
    if (local_30 != (char *)0x0) {
      if (local_30[-1] == '\0') {
        FUN_200f9f75(local_30 + -1);
      }
      else {
        local_30[-1] = local_30[-1] + -1;
      }
    }
  }
  else {
    *param_2 = *(int *)(local_48 + 0x1c);
    uVar4 = *(uint *)(local_48 + 0x20);
    if (local_30 != (char *)0x0) {
      if (local_30[-1] == '\0') {
        FUN_200f9f75(local_30 + -1);
      }
      else {
        local_30[-1] = local_30[-1] + -1;
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

