// rea decompile_all
// name: FUN_200d6b50
// address: 0x200d6b50
// body: available
// range: 0x200d6b50-0x200d6dc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d6b50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int iVar5;
  int local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010ecdf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_20112990;
  local_4 = 3;
  local_14 = 0;
  local_18 = 0;
  while( true ) {
    iVar5 = 0;
    if ((in_ECX[0x5a] == 0) || ((uint)((int)(in_ECX[0x5b] - in_ECX[0x5a]) / 0x14) <= local_14))
    break;
    piVar1 = *(int **)(local_18 + in_ECX[0x5a]);
    iVar2 = (**(code **)(*piVar1 + 0x10))();
    if (0 < iVar2) {
      do {
        piVar4 = *(int **)(*(int *)(local_18 + 8 + in_ECX[0x5a]) + iVar5 * 4);
        if (piVar4 != (int *)0x0) {
          piVar3 = (int *)(**(code **)(*piVar4 + 4))();
          (**(code **)(*piVar3 + 0x6c))();
          (**(code **)(*piVar4 + 0x48))(1);
        }
        iVar5 = iVar5 + 1;
        iVar2 = (**(code **)(*piVar1 + 0x10))();
      } while (iVar5 < iVar2);
    }
    piVar4 = (int *)(**(code **)(*piVar1 + 4))();
    (**(code **)(*piVar4 + 0x6c))();
    (**(code **)(*piVar1 + 0x48))(1);
    local_14 = local_14 + 1;
    local_18 = local_18 + 0x14;
  }
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  iVar5 = in_ECX[0x5b];
  iVar2 = in_ECX[0x5a];
  local_4._0_1_ = 2;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x14) {
    FUN_20092110();
  }
  FUN_200f9f75(in_ECX[0x5a]);
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  iVar5 = in_ECX[0x57];
  iVar2 = in_ECX[0x56];
  local_4._0_1_ = 1;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x14) {
    FUN_2000a5b0(1);
  }
  FUN_200f9f75(in_ECX[0x56]);
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  iVar5 = in_ECX[0x53];
  iVar2 = in_ECX[0x52];
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 0x40) {
    FUN_20025fd0();
  }
  FUN_200f9f75(in_ECX[0x52]);
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  *in_ECX = &PTR_FUN_201129e0;
  local_4 = 7;
  if ((int *)in_ECX[0x23] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x23] + 0x6c))();
  }
  local_4._0_1_ = 6;
  FUN_2000a5b0(1);
  local_4._0_1_ = 5;
  FUN_2000a5b0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_2000a5b0(1);
  *in_ECX = &PTR_FUN_20112788;
  iVar5 = in_ECX[0x22];
  local_4 = 8;
  if (iVar5 != 0) {
    FUN_200d6ab0();
    FUN_200f9f75(iVar5);
  }
  FUN_200f9f75(in_ECX[0x1a]);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  ExceptionList = pvStack_c;
  return;
}

