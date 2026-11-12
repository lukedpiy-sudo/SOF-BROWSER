// rea decompile_all
// name: FUN_200d1e80
// address: 0x200d1e80
// body: available
// range: 0x200d1e80-0x200d20ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d1e80(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e88e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840();
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = param_2;
  FUN_2000a5b0();
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = param_2;
  FUN_2000a5b0();
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x34) = param_2;
  FUN_2000a5b0();
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x3a) = param_2;
  FUN_2000a5b0();
  in_ECX[0x3e] = 0xffffffff;
  local_4._0_1_ = 4;
  *(undefined1 *)(in_ECX + 0x42) = param_2;
  FUN_2000a5b0();
  in_ECX[0x46] = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,5);
  *in_ECX = &PTR_FUN_20112848;
  FUN_200eafe0();
  pcVar2 = (char *)FUN_200eb440();
  uVar4 = 0xffffffff;
  pcVar6 = pcVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    pcVar6 = (char *)in_ECX[0x24];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    in_ECX[0x25] = uVar4;
    *(undefined1 *)(uVar4 + in_ECX[0x24]) = 0;
  }
  pcVar2 = (char *)FUN_200eb440();
  uVar4 = 0xffffffff;
  pcVar6 = pcVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    pcVar6 = (char *)in_ECX[0x28];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar6 = pcVar6 + 1;
    }
    in_ECX[0x29] = uVar4;
    *(undefined1 *)(uVar4 + in_ECX[0x28]) = 0;
  }
  FUN_2000a3a0(in_ECX + 0x23,0,0xffffffff);
  FUN_200c87f0(param_1,&local_18,local_14);
  in_ECX[8] = local_18;
  uVar3 = __ftol();
  in_ECX[10] = uVar3;
  if ((int)in_ECX[0xc] < local_14[0]) {
    in_ECX[9] = local_14[0];
    uVar3 = __ftol();
    in_ECX[0xb] = uVar3;
  }
  in_ECX[0x2b] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  ExceptionList = local_c;
  return;
}

