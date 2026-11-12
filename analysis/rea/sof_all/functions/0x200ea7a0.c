// rea decompile_all
// name: FUN_200ea7a0
// address: 0x200ea7a0
// body: available
// range: 0x200ea7a0-0x200ea894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ea7a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *in_ECX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_20110338;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = param_1._0_1_;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar3 = 0xffffffff;
  local_4 = 0;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_201075d0();
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  if ((*(int *)(in_ECX + 4) == 0) || (*(char *)(*(int *)(in_ECX + 4) + -1) == '\0')) {
    if (uVar3 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200ea85d;
    }
    if ((0x1f < *(uint *)(in_ECX + 0xc)) || (*(uint *)(in_ECX + 0xc) < uVar3)) {
      FUN_2000a5b0(1);
      goto LAB_200ea836;
    }
  }
  else {
    if (uVar3 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200ea85d;
    }
LAB_200ea836:
    FUN_2000a840(uVar3);
  }
  pcVar5 = *(char **)(in_ECX + 4);
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
  *(uint *)(in_ECX + 8) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)(in_ECX + 4)) = 0;
LAB_200ea85d:
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = param_3;
  uVar2 = FUN_20055930();
  *(undefined4 *)(in_ECX + 0x18) = uVar2;
  *(undefined4 *)(in_ECX + 0x1c) = param_4;
  in_ECX[0x20] = 0;
  ExceptionList = pvStack_c;
  return;
}

