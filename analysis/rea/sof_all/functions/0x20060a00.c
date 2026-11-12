// rea decompile_all
// name: FUN_20060a00
// address: 0x20060a00
// body: available
// range: 0x20060a00-0x20060cbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20060a00(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *unaff_retaddr;
  undefined4 in_stack_00010108;
  undefined4 in_stack_0001010c;
  
  FUN_200fa720();
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar1 = FUN_20025760(s_current_20121258);
  Com_sprintf(&stack0x00000004,0x80,s__s_save__s_sof_20139f34,uVar1);
  Com_DPrintf(s_WipeSavegame___s__20139ec8,&stack0x00000004);
  FUN_200fbc4d(&stack0x00000004);
  uVar1 = FUN_20025760(s_current_20121258);
  Com_sprintf(&stack0x00000084,0x80,s__s_save__s_sof_20139f34,uVar1);
  DAT_203fecdc = FUN_200faa9a(&stack0x00000084,&DAT_2011d688);
  if (DAT_203fecdc != 0) {
    FUN_200607f0(in_stack_0001010c);
    if ((char)in_stack_0001010c == '\0') {
      uVar1 = FUN_200128d0(0x10000);
      FUN_20060230(0x53484f54,uVar1);
    }
    else {
      puVar3 = (undefined4 *)&stack0x00000104;
      for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      Com_sprintf(&stack0x00000084,0x80,s_maps__s_raw_2013a12c,&DAT_20396de8);
      iVar2 = FS_LoadFile(&stack0x00000084,&stack0x00000000,0);
      if (0 < iVar2) {
        if (iVar2 == 0x10000) {
          puVar3 = unaff_retaddr;
          puVar4 = (undefined4 *)&stack0x00000104;
          for (iVar2 = 0x4000; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        FS_FreeFile(unaff_retaddr);
      }
      FUN_20060230(0x53484f54,&stack0x00000104,0x10000);
    }
    FUN_20060230(0x4d50434d,&DAT_20396de8,0x100);
    FUN_20060920();
    (**(code **)(DAT_20396dd8 + 0x10))(in_stack_0001010c);
    FUN_20057b40();
    if ((char)in_stack_0001010c == '\0') {
      FUN_20060230(0x46524e4d,&DAT_203a1f30,4);
      FUN_20060230(0x43465354,&DAT_203a2374,0x378c0);
      FUN_2001c1b0();
      (**(code **)(DAT_20396dd8 + 0x18))();
    }
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    FUN_2005ffb0(s_current_20121258,in_stack_00010108);
    if (DAT_203fecdc != 0) {
      FUN_200fa9ae(DAT_203fecdc);
      DAT_203fecdc = 0;
    }
    uVar1 = FUN_20025760(s_current_20121258);
    Com_sprintf(&stack0x00000004,0x80,s__s_save__s_sof_20139f34,uVar1);
    Com_DPrintf(s_WipeSavegame___s__20139ec8,&stack0x00000004);
    FUN_200fbc4d(&stack0x00000004);
    return;
  }
  Com_Printf(&DAT_20139f44,s_current_20121258);
  Com_Printf(&DAT_2013a16c);
  if (DAT_203fecdc != 0) {
    FUN_200fa9ae(DAT_203fecdc);
    DAT_203fecdc = 0;
  }
  uVar1 = FUN_20025760(s_current_20121258);
  Com_sprintf(&stack0x00000004,0x80,s__s_save__s_sof_20139f34,uVar1);
  Com_DPrintf(s_WipeSavegame___s__20139ec8,&stack0x00000004);
  FUN_200fbc4d(&stack0x00000004);
  return;
}

