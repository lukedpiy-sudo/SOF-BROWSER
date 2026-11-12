// rea decompile_all
// name: FUN_200eb660
// address: 0x200eb660
// body: available
// range: 0x200eb660-0x200eb7dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200eb660(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_20110439;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 1) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 5) = param_2._0_1_;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 9) = param_2._0_1_;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = param_1;
  uVar2 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  cVar1 = FUN_2000a6c0(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = param_2;
    pcVar5 = (char *)in_ECX[2];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    in_ECX[3] = uVar2;
    *(undefined1 *)(in_ECX[2] + uVar2) = 0;
  }
  uVar2 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_2000a6c0(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = (char *)in_ECX[6];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *param_3;
      param_3 = param_3 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_ECX[7] = uVar2;
    *(undefined1 *)(in_ECX[6] + uVar2) = 0;
  }
  local_1c[0] = param_2._0_1_;
  uVar2 = 0xffffffff;
  pcVar4 = s_medium_2011d304;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_2000a600(s_medium_2011d304,~uVar2 - 1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_200c92d0(param_4,in_ECX + 9,local_1c);
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) == '\0') {
      FUN_200f9f75((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
    }
  }
  ExceptionList = local_c;
  return in_ECX;
}

