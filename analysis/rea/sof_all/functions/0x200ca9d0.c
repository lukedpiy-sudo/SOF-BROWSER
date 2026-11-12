// rea decompile_all
// name: FUN_200ca9d0
// address: 0x200ca9d0
// body: available
// range: 0x200ca9d0-0x200caacd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ca9d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined4 uVar10;
  int in_ECX;
  undefined1 *puVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010e33b;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x5c);
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    ExceptionList = &pvStack_c;
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + -1) == '\0') {
        ExceptionList = &pvStack_c;
        FUN_200f9f75((char *)(iVar2 + -1));
      }
      else {
        ExceptionList = &pvStack_c;
        *(char *)(iVar2 + -1) = *(char *)(iVar2 + -1) + -1;
      }
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_200f9f75(iVar1);
  }
  iVar7 = FUN_200cbe80();
  iVar1 = *(int *)(in_ECX + 0x9c);
  piVar3 = (int *)**(int **)(param_1 + 4);
  iVar2 = *(int *)(*piVar3 + 0xa0);
  iVar8 = FUN_200c64f0();
  iVar4 = piVar3[0x11];
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x10);
  pvVar9 = operator_new(0x24);
  uStack_4 = 0;
  if (pvVar9 == (void *)0x0) {
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  else {
    puVar11 = *(undefined1 **)(param_1 + 0x70);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_201116cc;
    }
    uVar10 = __ftol();
    uVar10 = FUN_200ea7a0(puVar11,iVar7 - iVar1,((iVar4 + iVar5 + iVar6) - param_2) + iVar2 + iVar8,
                          uVar10);
    *(undefined4 *)(in_ECX + 0x5c) = uVar10;
  }
  ExceptionList = pvStack_c;
  return;
}

