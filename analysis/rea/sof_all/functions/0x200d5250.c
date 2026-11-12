// rea decompile_all
// name: FUN_200d5250
// address: 0x200d5250
// body: available
// range: 0x200d5250-0x200d543b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d5250(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010eb74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840();
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = param_1._0_1_;
  FUN_2000a5b0();
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = param_1._0_1_;
  FUN_2000a5b0();
  uVar7 = 0xffffffff;
  *in_ECX = &PTR_FUN_20112950;
  pcVar9 = s_misc_vbar_20158c30;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  local_4 = CONCAT31(local_4._1_3_,2);
  cVar2 = FUN_2000a6c0();
  if (cVar2 != '\0') {
    pcVar9 = s_misc_vbar_20158c30;
    pcVar10 = (char *)in_ECX[0x24];
    for (uVar8 = ~uVar7 - 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = ~uVar7 - 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_2000a6a0();
  }
  uVar7 = 0xffffffff;
  pcVar9 = s_misc_vend_20158c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar2 = FUN_2000a6c0();
  if (cVar2 != '\0') {
    pcVar9 = s_misc_vend_20158c24;
    pcVar10 = (char *)in_ECX[0x28];
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    in_ECX[0x29] = uVar7;
    *(undefined1 *)(uVar7 + in_ECX[0x28]) = 0;
  }
  in_ECX[8] = 0x10;
  iVar1 = *param_1;
  iVar3 = FUN_200c64f0();
  in_ECX[9] = *(int *)(iVar1 + 0x4c) + iVar3 * -2;
  uVar4 = __ftol();
  in_ECX[10] = uVar4;
  uVar4 = __ftol();
  in_ECX[0xb] = uVar4;
  iVar1 = *param_1;
  iVar5 = FUN_200c64f0();
  iVar1 = *(int *)(iVar1 + 0x48);
  iVar3 = in_ECX[10];
  iVar6 = FUN_200e6cb0();
  in_ECX[3] = ((iVar1 + iVar5 * -2) - iVar3) - iVar6;
  in_ECX[4] = 0;
  FUN_2000a3a0(in_ECX + 0x27,0,0xffffffff);
  FUN_200c87f0(param_1,in_ECX + 0x2d,in_ECX + 0x2e);
  *(undefined1 *)(in_ECX + 0x18) = 1;
  param_1[0x10] = (int)in_ECX;
  ExceptionList = local_c;
  return;
}

