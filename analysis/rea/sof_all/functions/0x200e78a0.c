// rea decompile_all
// name: FUN_200e78a0
// address: 0x200e78a0
// body: available
// range: 0x200e78a0-0x200e7b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e78a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *in_ECX;
  int *piVar12;
  char *pcVar13;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_201100b2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200eafe0(1);
  uVar4 = FUN_200eb440(0);
  uVar4 = FUN_200f9e13(uVar4);
  cVar3 = FUN_200eafe0(1);
  do {
    if (cVar3 != '\0') {
      ExceptionList = local_c;
      return 1;
    }
    pcVar13 = &DAT_20159220;
    pcVar5 = (char *)FUN_200eb440(0);
    iVar6 = __strcmpi(pcVar5,pcVar13);
    if (iVar6 == 0) {
      FUN_200eafe0(2);
      pvVar7 = operator_new(0x34);
      local_4 = 0;
      if (pvVar7 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar8 = FUN_200eb440(1);
        uVar9 = FUN_200eb440(0);
        iVar6 = FUN_200eb500(uVar4,uVar9,uVar8);
      }
      local_4 = 0xffffffff;
      iVar1 = *(int *)*in_ECX;
      iVar2 = *(int *)(iVar1 + 0xec);
      piVar12 = *(int **)(iVar2 + 4);
      piVar10 = operator_new(0x3c);
      *piVar10 = iVar2;
      if (piVar12 == (int *)0x0) {
        piVar12 = piVar10;
      }
      piVar10[1] = (int)piVar12;
      *(int **)(iVar2 + 4) = piVar10;
      *(int **)piVar10[1] = piVar10;
      FUN_200ea660(piVar10 + 2,iVar6);
      *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + 1;
      if (iVar6 != 0) {
        local_4 = 2;
        FUN_200716d0(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c));
        FUN_200f9f75(*(undefined4 *)(iVar6 + 0x28));
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar6 + 0x2c) = 0;
        *(undefined4 *)(iVar6 + 0x30) = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
LAB_200e7b10:
        FUN_2000a5b0(1);
        local_4 = 0xffffffff;
        FUN_2000a5b0(1);
        FUN_200f9f75(iVar6);
      }
    }
    else {
      pcVar13 = s_convbits_20159214;
      pcVar5 = (char *)FUN_200eb440(0);
      iVar6 = __strcmpi(pcVar5,pcVar13);
      if (iVar6 != 0) {
        FUN_200eb490(param_1,s_Unrecognised_translate_keyword_201591f4);
        ExceptionList = local_c;
        return 0;
      }
      FUN_200eafe0(3);
      pvVar7 = operator_new(0x34);
      local_4 = 3;
      if (pvVar7 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        uVar8 = FUN_200eb440(2);
        uVar9 = FUN_200eb440(1);
        uVar11 = FUN_200eb440(0);
        iVar6 = FUN_200eb660(uVar4,uVar11,uVar9,uVar8);
      }
      local_4 = 0xffffffff;
      iVar1 = *(int *)*in_ECX;
      iVar2 = *(int *)(iVar1 + 0xec);
      piVar12 = *(int **)(iVar2 + 4);
      piVar10 = operator_new(0x3c);
      *piVar10 = iVar2;
      if (piVar12 == (int *)0x0) {
        piVar12 = piVar10;
      }
      piVar10[1] = (int)piVar12;
      *(int **)(iVar2 + 4) = piVar10;
      *(int **)piVar10[1] = piVar10;
      FUN_200ea660(piVar10 + 2,iVar6);
      *(int *)(iVar1 + 0xf0) = *(int *)(iVar1 + 0xf0) + 1;
      if (iVar6 != 0) {
        local_4 = 5;
        FUN_200716d0(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c));
        FUN_200f9f75(*(undefined4 *)(iVar6 + 0x28));
        local_4 = CONCAT31(local_4._1_3_,4);
        *(undefined4 *)(iVar6 + 0x28) = 0;
        *(undefined4 *)(iVar6 + 0x2c) = 0;
        *(undefined4 *)(iVar6 + 0x30) = 0;
        goto LAB_200e7b10;
      }
    }
    cVar3 = FUN_200eafe0(1);
  } while( true );
}

