// rea decompile_all
// name: FUN_20089fb0
// address: 0x20089fb0
// body: available
// range: 0x20089fb0-0x2008a0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_20089fb0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c438;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *param_2;
      param_2 = param_2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_2000a6a0(uVar4);
  }
  uVar4 = 0;
  bVar8 = false;
  local_4 = 0;
  if (local_14 != 0) {
    do {
      if ((bVar8) || (local_18 == (char *)0x0)) {
        pcVar6 = "";
      }
      else {
        FUN_2000a930();
        pcVar6 = local_18 + uVar4;
      }
      if ((local_14 < uVar4) || (local_18 == (char *)0x0)) {
        pcVar7 = "";
      }
      else {
        FUN_2000a930();
        pcVar7 = local_18 + uVar4;
      }
      cVar1 = FUN_200fb2a2((int)*pcVar6);
      *pcVar7 = cVar1;
      uVar4 = uVar4 + 1;
      bVar8 = local_14 < uVar4;
    } while (!bVar8 && local_14 != uVar4);
  }
  uVar3 = FUN_20069fd0(local_1c);
  uVar2 = FUN_20089d90(param_1,local_1c,uVar3);
  if (local_18 != (char *)0x0) {
    if (local_18[-1] == '\0') {
      FUN_200f9f75(local_18 + -1);
    }
    else {
      local_18[-1] = local_18[-1] + -1;
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

