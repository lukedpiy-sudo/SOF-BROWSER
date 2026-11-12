// rea decompile_all
// name: FUN_200d1800
// address: 0x200d1800
// body: available
// range: 0x200d1800-0x200d19c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d1800(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e7fc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,2);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = param_1._0_1_;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = param_1._0_1_;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_20112808;
  in_ECX[0x2b] = 1;
  uVar2 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 3;
  FUN_2000a3a0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_2000a5b0(1);
  in_ECX[0xe] = param_1[7];
  in_ECX[0xf] = param_1[8];
  in_ECX[0x2e] = 0x3f800000;
  *(undefined1 *)((int)in_ECX + 99) = 1;
  FUN_200eafe0(1);
  pcVar3 = (char *)FUN_200eb440(0);
  uVar7 = 0xffffffff;
  pcVar9 = pcVar3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar1 = FUN_2000a6c0(uVar7,1);
  if (cVar1 != '\0') {
    pcVar9 = (char *)in_ECX[0x28];
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    in_ECX[0x29] = uVar7;
    *(undefined1 *)(uVar7 + in_ECX[0x28]) = 0;
  }
  iVar6 = *param_1;
  iVar4 = FUN_200c64f0();
  iVar6 = *(int *)(iVar6 + 0x48);
  iVar5 = FUN_200e6cb0();
  in_ECX[8] = (iVar6 + iVar4 * -2) - iVar5;
  uVar2 = __ftol();
  in_ECX[10] = uVar2;
  iVar6 = (*DAT_20403640)(in_ECX + 0x23);
  if ((int)in_ECX[0xc] < iVar6) {
    in_ECX[9] = iVar6;
    uVar2 = __ftol();
    in_ECX[0xb] = uVar2;
  }
  ExceptionList = pvStack_c;
  return;
}

