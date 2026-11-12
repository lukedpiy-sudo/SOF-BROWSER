// rea decompile_all
// name: FUN_200471d0
// address: 0x200471d0
// body: available
// range: 0x200471d0-0x200472d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200471d0(void)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010b238;
  local_c = ExceptionList;
  local_4 = 0;
  piVar4 = (int *)**(int **)(in_ECX + 4);
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (piVar4 != *(int **)(in_ECX + 4)) {
    do {
      if (*(int *)((int)piVar4 + 0x1c) != 0) {
        FUN_200f9f75(*(int *)((int)piVar4 + 0x1c));
      }
      if (*(char *)(*(int *)((int)piVar4 + 8) + 0x25) == '\0') {
        iVar3 = FUN_20073a90(*(int *)((int)piVar4 + 8));
LAB_2004723a:
        piVar4 = (int *)iVar3;
      }
      else {
        iVar3 = *(int *)((int)piVar4 + 4);
        if (piVar4 == (int *)*(int *)(iVar3 + 8)) {
          do {
            piVar4 = (int *)iVar3;
            iVar3 = *(int *)((int)piVar4 + 4);
          } while (piVar4 == (int *)*(int *)(iVar3 + 8));
        }
        if (*(int *)((int)piVar4 + 8) != iVar3) goto LAB_2004723a;
      }
      ppvVar2 = ExceptionList;
    } while (piVar4 != (int *)*(int *)(in_ECX + 4));
  }
  ExceptionList = ppvVar2;
  piVar4 = *(int **)(in_ECX + 4);
  local_4 = 0xffffffff;
  piVar1 = (int *)*piVar4;
  if (*(int *)(in_ECX + 0x10) == 0) {
    while (piVar1 != piVar4) {
      FUN_20049b90();
      FUN_20049770(local_10,piVar1);
    }
  }
  else {
    FUN_200486b0(piVar4[1]);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  ExceptionList = local_c;
  return;
}

