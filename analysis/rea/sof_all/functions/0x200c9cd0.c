// rea decompile_all
// name: FUN_200c9cd0
// address: 0x200c9cd0
// body: available
// range: 0x200c9cd0-0x200c9ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c9cd0(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_38 [2];
  undefined1 local_30 [4];
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e2e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_200fce1b(param_2,0,0);
  param_2._0_1_ = (undefined1)uVar2;
  local_30[0] = (undefined1)param_2;
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_2c = (char *)0x0;
  local_28 = 0;
  local_24 = 0;
  cVar1 = FUN_2000a6c0(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = local_2c;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_1;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_2c[uVar3] = '\0';
    local_28 = uVar3;
  }
  local_4 = 0;
  FUN_200234d0(local_30);
  local_10 = 0xffffffff;
  local_4._0_1_ = 1;
  FUN_200cae20(local_38,local_20);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  *(undefined4 *)(local_38[0] + 0x1c) = uVar2;
  if (local_2c != (char *)0x0) {
    if (local_2c[-1] == '\0') {
      FUN_200f9f75(local_2c + -1);
    }
    else {
      local_2c[-1] = local_2c[-1] + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

