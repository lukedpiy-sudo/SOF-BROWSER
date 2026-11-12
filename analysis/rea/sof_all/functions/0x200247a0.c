// rea decompile_all
// name: FUN_200247a0
// address: 0x200247a0
// body: available
// range: 0x200247a0-0x20024909 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200247a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int in_ECX;
  int *piVar7;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010af18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (((DAT_2026ab08 != 0) && (ExceptionList = &local_c, *(float *)(DAT_2026ab08 + 0x18) != 0.0)) &&
     (ExceptionList = &local_c, iVar5 = FUN_200faa9a(s_paklist_txt_20131198,&DAT_2011de68),
     iVar5 != 0)) {
    piVar7 = (int *)**(int **)(in_ECX + 0x18);
    if (piVar7 != *(int **)(in_ECX + 0x18)) {
      do {
        puVar6 = (undefined1 *)piVar7[3];
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_201116cc;
        }
        FUN_200faa48(iVar5,s__pak__s_2013118c,puVar6);
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(in_ECX + 0x18));
    }
    FUN_200fa9ae(iVar5);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  puVar4 = (undefined4 *)*puVar1;
  while (puVar4 != puVar1) {
    puVar2 = (undefined4 *)*puVar4;
    FUN_200275c0(local_14,puVar4);
    puVar4 = puVar2;
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x18));
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  piVar7 = *(int **)(in_ECX + 4);
  local_4 = 0xffffffff;
  piVar3 = (int *)*piVar7;
  if (*(int *)(in_ECX + 0x10) == 0) {
    while (piVar3 != piVar7) {
      FUN_20027950();
      FUN_20026ec0(local_10,piVar3);
    }
  }
  else {
    FUN_200272c0(piVar7[1]);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    FUN_20083550(local_14);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_200f9f75(*(undefined4 *)(in_ECX + 8));
  *(undefined4 *)(in_ECX + 8) = 0;
  ExceptionList = local_c;
  return;
}

