// rea decompile_all
// name: FUN_20069660
// address: 0x20069660
// body: available
// range: 0x20069660-0x20069795 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20069660(void)

{
  void **ppvVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b678;
  local_c = ExceptionList;
  local_4 = 0;
  piVar3 = (int *)**(int **)(in_ECX + 4);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (piVar3 != *(int **)(in_ECX + 4)) {
    do {
      if (*(char *)(*(int *)((int)piVar3 + 8) + 0x25) == '\0') {
        iVar2 = FUN_20073a90(*(int *)((int)piVar3 + 8));
LAB_200696bf:
        iVar4 = iVar2;
      }
      else {
        iVar2 = *(int *)((int)piVar3 + 4);
        iVar4 = (int)piVar3;
        if (piVar3 == (int *)*(int *)(iVar2 + 8)) {
          do {
            iVar4 = iVar2;
            iVar2 = *(int *)(iVar4 + 4);
          } while (iVar4 == *(int *)(iVar2 + 8));
        }
        if (*(int *)(iVar4 + 8) != iVar2) goto LAB_200696bf;
      }
      if (*(int *)((int)piVar3 + 0x20) < 1) {
        iVar2 = *(int *)((int)piVar3 + 0x1c);
        if (iVar2 != 0) {
          FUN_200a6330();
          FUN_200f9f75(iVar2);
        }
        FUN_20049770(&local_14,piVar3);
      }
      piVar3 = (int *)iVar4;
      ppvVar1 = ExceptionList;
    } while (iVar4 != *(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar1;
  FUN_20083550(&local_14);
  iVar2 = *(int *)(in_ECX + 4);
  while (local_14 != iVar2) {
    iVar2 = *(int *)(local_14 + 0x1c);
    if (iVar2 != 0) {
      FUN_200a6330();
      FUN_200f9f75(iVar2);
    }
    FUN_20049b90();
    iVar2 = *(int *)(in_ECX + 4);
  }
  FUN_20071f90(&local_14,**(undefined4 **)(in_ECX + 4),*(undefined4 **)(in_ECX + 4));
  local_4 = 0xffffffff;
  FUN_20071f90(local_10,**(undefined4 **)(in_ECX + 4),*(undefined4 **)(in_ECX + 4));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  ExceptionList = local_c;
  return;
}

