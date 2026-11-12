// rea decompile_all
// name: FUN_2005ffb0
// address: 0x2005ffb0
// body: available
// range: 0x2005ffb0-0x2006018e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005ffb0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_stack_00010184;
  undefined4 in_stack_00010188;
  
  FUN_200fa720();
  uVar1 = FUN_20025760(in_stack_00010184);
  Com_sprintf(&stack0x00000100,0x80,s__s_save__s_sof_20139f34,uVar1);
  uVar1 = FUN_20025760(in_stack_00010188);
  Com_sprintf(&stack0x00000080,0x80,s__s_save__s_sof_20139f34,uVar1);
  Com_DPrintf(s_CopySavegame___s___s__20139f1c,&stack0x00000100,&stack0x00000080);
  iVar2 = FUN_200faa9a(&stack0x00000100,&DAT_201311d4);
  if (iVar2 != 0) {
    iVar3 = FUN_200faa9a(&stack0x00000080,&DAT_2011d688);
    if (iVar3 == 0) {
      FUN_200fa9ae(iVar2);
      return;
    }
    iVar6 = 0;
    iVar5 = 0;
    while( true ) {
      iVar4 = FUN_200fb1ba(&stack0x00000180,1,0x10000,iVar2);
      iVar6 = iVar6 + iVar4;
      if (iVar4 == 0) break;
      iVar4 = FUN_200facde(&stack0x00000180,1,iVar4,iVar3);
      iVar5 = iVar5 + iVar4;
    }
    FUN_200fa9ae(iVar2);
    FUN_200fa9ae(iVar3);
    if ((iVar6 != iVar5) || (iVar5 == 0)) {
      Com_Printf(&DAT_20139edc,in_stack_00010188);
      if (DAT_203fecdc != 0) {
        FUN_200fa9ae(DAT_203fecdc);
        DAT_203fecdc = 0;
      }
      uVar1 = FUN_20025760(in_stack_00010184);
      Com_sprintf(&stack0x00000000,0x80,s__s_save__s_sof_20139f34,uVar1);
      Com_DPrintf(s_WipeSavegame___s__20139ec8,&stack0x00000000);
      FUN_200fbc4d(&stack0x00000000);
      if (DAT_203fecdc != 0) {
        FUN_200fa9ae(DAT_203fecdc);
        DAT_203fecdc = 0;
      }
      uVar1 = FUN_20025760(in_stack_00010188);
      Com_sprintf(&stack0x00000000,0x80,s__s_save__s_sof_20139f34,uVar1);
      Com_DPrintf(s_WipeSavegame___s__20139ec8,&stack0x00000000);
      FUN_200fbc4d(&stack0x00000000);
    }
  }
  return;
}

