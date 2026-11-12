// rea decompile_all
// name: FUN_200dd900
// address: 0x200dd900
// body: available
// range: 0x200dd900-0x200ddae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dd900(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,0);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x2b) = (undefined1)param_1;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  in_ECX[0x2c] = pvVar2;
  in_ECX[0x2d] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x2f) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 4;
  *in_ECX = &PTR_FUN_20112c40;
  uVar3 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 5;
  FUN_2000a3a0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_2000a5b0(1);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x33] = in_ECX[0x13];
  FUN_200eafe0(1);
  pcVar4 = (char *)FUN_200eb440(0);
  uVar6 = 0xffffffff;
  pcVar8 = pcVar4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar8 = (char *)in_ECX[0x28];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar8 = pcVar8 + 1;
    }
    in_ECX[0x29] = uVar6;
    *(undefined1 *)(uVar6 + in_ECX[0x28]) = 0;
  }
  uVar3 = FUN_200dd6b0();
  in_ECX[8] = uVar3;
  uVar3 = __ftol();
  in_ECX[10] = uVar3;
  iVar5 = (*DAT_20403640)(in_ECX + 0x23);
  if ((int)in_ECX[0xc] < iVar5) {
    in_ECX[9] = iVar5;
    uVar3 = __ftol();
    in_ECX[0xb] = uVar3;
  }
  *(undefined1 *)(in_ECX + 0x18) = 1;
  ExceptionList = pvStack_c;
  return;
}

