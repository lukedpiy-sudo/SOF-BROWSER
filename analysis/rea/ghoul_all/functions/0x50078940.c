// rea decompile_all
// name: FUN_50078940
// address: 0x50078940
// body: available
// range: 0x50078940-0x500789cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50078940(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = param_2;
  iVar4 = FUN_500ba8c0(*(int *)(param_2 + 4));
  *(int *)((int)this + 4) = iVar4;
  iVar4 = *(int *)(iVar3 + 8);
  *(int *)((int)this + 8) = iVar4;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar3 + 0xc);
  if (iVar4 != 0) {
    (*DAT_5015cb48)(0x53434944,&param_2,4,0);
    piVar5 = &DAT_501451d0;
    puVar2 = PTR_FUN_501451d4;
    while (puVar2 != (undefined *)0x0) {
      if (*piVar5 == param_2) {
        uVar6 = (*(code *)piVar5[1])(param_1);
        *(undefined4 *)((int)this + 8) = uVar6;
        return;
      }
      piVar1 = piVar5 + 3;
      piVar5 = piVar5 + 2;
      puVar2 = (undefined *)*piVar1;
    }
    (*DAT_5015ca24)(s_Warning__Unable_to_RestoreObject_50145544);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return;
}

