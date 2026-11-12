// rea decompile_all
// name: FUN_200c3e10
// address: 0x200c3e10
// body: available
// range: 0x200c3e10-0x200c3ecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c3e10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void **ppvVar5;
  int in_ECX;
  int *piVar6;
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_2010dd46;
  pvStack_c = ExceptionList;
  local_4 = 1;
  piVar6 = (int *)**(int **)(in_ECX + 0x28);
  ExceptionList = &pvStack_c;
  ppvVar5 = &pvStack_c;
  if (piVar6 != *(int **)(in_ECX + 0x28)) {
    do {
      if ((undefined4 *)piVar6[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar6[2])(1);
      }
      piVar6 = (int *)*piVar6;
      ppvVar5 = ExceptionList;
    } while (piVar6 != (int *)*(int *)(in_ECX + 0x28));
  }
  ExceptionList = ppvVar5;
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  local_4 = local_4 & 0xffffff00;
  puVar4 = (undefined4 *)*puVar1;
  while (puVar4 != puVar1) {
    puVar2 = (undefined4 *)*puVar4;
    FUN_200ba400(local_10,puVar4);
    puVar4 = puVar2;
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x28));
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  iVar3 = *(int *)(in_ECX + 0x10);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = *(char *)(iVar3 + -1) + -1;
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  ExceptionList = pvStack_c;
  return;
}

