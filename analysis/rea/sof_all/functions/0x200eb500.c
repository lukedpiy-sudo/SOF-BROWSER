// rea decompile_all
// name: FUN_200eb500
// address: 0x200eb500
// body: available
// range: 0x200eb500-0x200eb658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eb500(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_20110401;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 1) = param_2._0_1_;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
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
  local_4 = 2;
  cVar1 = FUN_2000a6c0(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = (char *)in_ECX[2];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar4 = *param_2;
      param_2 = param_2 + 1;
      pcVar4 = pcVar4 + 1;
    }
    in_ECX[3] = uVar2;
    *(undefined1 *)(uVar2 + in_ECX[2]) = 0;
  }
  uVar2 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar2 - 1;
  uVar2 = FUN_2000a830();
  if (uVar2 < uVar3) {
    FUN_201075d0();
  }
  in_ECX[7] = 0;
  if ((in_ECX[6] == 0) || (*(char *)(in_ECX[6] + -1) == '\0')) {
    if (uVar3 == 0) {
      FUN_2000a5b0(1);
      ExceptionList = pvStack_c;
      return;
    }
    if (((uint)in_ECX[8] < 0x20) && (uVar3 <= (uint)in_ECX[8])) goto LAB_200eb61d;
    FUN_2000a5b0(1);
  }
  else if (uVar3 == 0) {
    FUN_2000a5b0(1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_2000a840(uVar3);
LAB_200eb61d:
  pcVar4 = (char *)in_ECX[6];
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar4 = *param_3;
    param_3 = param_3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  in_ECX[7] = uVar3;
  *(undefined1 *)(uVar3 + in_ECX[6]) = 0;
  ExceptionList = pvStack_c;
  return;
}

