// rea decompile_all
// name: FUN_200c60a0
// address: 0x200c60a0
// body: available
// range: 0x200c60a0-0x200c61fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c60a0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010def1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 3) = (undefined1)param_1;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 7) = (undefined1)param_1;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(in_ECX + 0xc) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *in_ECX = param_1;
  FUN_200f9e13(param_2);
  iVar2 = __ftol();
  in_ECX[0x12] = iVar2;
  FUN_200f9e13(param_3);
  iVar2 = __ftol();
  in_ECX[0x13] = iVar2;
  uVar4 = 0xffffffff;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[0xb] = 0;
  pcVar7 = param_4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = (char *)in_ECX[4];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *param_4;
      param_4 = param_4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    in_ECX[5] = uVar4;
    *(undefined1 *)(uVar4 + in_ECX[4]) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  piVar6 = *(int **)(iVar2 + 4);
  piVar3 = operator_new(0xc);
  *piVar3 = iVar2;
  if (piVar6 == (int *)0x0) {
    piVar6 = piVar3;
  }
  piVar3[1] = (int)piVar6;
  *(int **)(iVar2 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)in_ECX;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  ExceptionList = local_c;
  return;
}

