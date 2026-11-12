// rea decompile_all
// name: FUN_20057020
// address: 0x20057020
// body: available
// range: 0x20057020-0x2005714b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20057020(char *param_1,undefined1 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 *in_ECX;
  uint uVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b46b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 2) = param_2;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = param_2;
  uVar3 = 0xffffffff;
  *in_ECX = &PTR_LAB_20111ed8;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  local_4 = 0;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_2000a830();
  if (uVar3 < uVar4) {
    FUN_201075d0();
  }
  in_ECX[4] = 0;
  if ((in_ECX[3] == 0) || (*(char *)(in_ECX[3] + -1) == '\0')) {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200570ff;
    }
    if ((0x1f < (uint)in_ECX[5]) || ((uint)in_ECX[5] < uVar4)) {
      FUN_2000a5b0(1);
      goto LAB_200570d4;
    }
  }
  else {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200570ff;
    }
LAB_200570d4:
    FUN_2000a840(uVar4);
  }
  pcVar2 = (char *)in_ECX[3];
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *param_1;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_2000a6a0(uVar4);
LAB_200570ff:
  in_ECX[6] = 0;
  if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
    uVar3 = 0xffffffff;
    pcVar2 = param_4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new(~uVar3);
    in_ECX[6] = pcVar2;
    do {
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  ExceptionList = pvStack_c;
  return;
}

