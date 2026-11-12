// rea decompile_all
// name: FUN_2004b4a0
// address: 0x2004b4a0
// body: available
// range: 0x2004b4a0-0x2004b5da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2004b4a0(char *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_b8 [4];
  char *local_b4;
  uint local_b0;
  undefined4 local_ac;
  int local_a8 [2];
  undefined1 local_a0 [16];
  undefined4 local_90;
  char local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b396;
  local_c = ExceptionList;
  iVar1 = -(int)param_1;
  do {
    cVar2 = *param_1;
    param_1[(int)(local_8c + iVar1)] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_20107ed2(local_8c);
  uVar4 = 0xffffffff;
  local_b4 = (char *)0x0;
  local_b0 = 0;
  local_ac = 0;
  pcVar6 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar2 = FUN_2000a6c0(uVar4,1);
  if (cVar2 != '\0') {
    pcVar6 = local_b4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_b4[uVar4] = '\0';
    local_b0 = uVar4;
  }
  local_4 = 0;
  FUN_200234d0(local_b8);
  local_90 = 0;
  local_4._0_1_ = 1;
  FUN_2004c7a0(local_a8,local_a0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  iVar1 = *(int *)(local_a8[0] + 0x1c);
  if (local_b4 != (char *)0x0) {
    if (local_b4[-1] == '\0') {
      FUN_200f9f75(local_b4 + -1);
    }
    else {
      local_b4[-1] = local_b4[-1] + -1;
    }
  }
  if (iVar1 != 0) {
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = local_c;
  return -1;
}

