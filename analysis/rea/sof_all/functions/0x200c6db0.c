// rea decompile_all
// name: FUN_200c6db0
// address: 0x200c6db0
// body: available
// range: 0x200c6db0-0x200c6ed9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6db0(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010dfd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = (undefined1)param_1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  local_4 = 1;
  iVar2 = __strcmpi(param_2,&DAT_20158350);
  if (iVar2 == 0) {
    in_ECX[1] = 0;
  }
  else {
    uVar3 = FUN_2004b4a0(param_2);
    in_ECX[1] = uVar3;
  }
  uVar4 = 0xffffffff;
  in_ECX[2] = 0;
  pcVar6 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_201075d0();
  }
  in_ECX[5] = 0;
  if ((in_ECX[4] == 0) || (*(char *)(in_ECX[4] + -1) == '\0')) {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      *in_ECX = param_1;
      ExceptionList = pvStack_c;
      return;
    }
    if ((0x1f < (uint)in_ECX[6]) || ((uint)in_ECX[6] < uVar4)) {
      FUN_2000a5b0(1);
      goto LAB_200c6e92;
    }
  }
  else {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200c6ebd;
    }
LAB_200c6e92:
    FUN_2000a840(uVar4);
  }
  pcVar6 = (char *)in_ECX[4];
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *param_3;
    param_3 = param_3 + 1;
    pcVar6 = pcVar6 + 1;
  }
  in_ECX[5] = uVar4;
  *(undefined1 *)(uVar4 + in_ECX[4]) = 0;
LAB_200c6ebd:
  *in_ECX = param_1;
  ExceptionList = pvStack_c;
  return;
}

