// rea decompile_all
// name: FUN_5006b780
// address: 0x5006b780
// body: available
// range: 0x5006b780-0x5006b840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5006b780(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) & 0x7fffffff;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  (*DAT_5015cb28)(param_1);
  iVar2 = param_1 + 4;
  iVar4 = 0;
  uVar3 = 1;
  iVar1 = (*DAT_5015c9f8)(s_environ_irespawn_50144c24);
  FUN_500852e0(&DAT_5015c518,iVar1,iVar2,uVar3,iVar4);
  iVar2 = FUN_5006a4e0(&DAT_5015c7b8,param_1);
  if (iVar2 != 0) {
    FUN_50066fd0(iVar2);
  }
  uVar3 = (*DAT_5015c9f4)(s_dm_irespawn_wav_50144c14,0x3f19999a,0x3f800000,0,0);
  (*DAT_5015ca48)(param_1,3,uVar3);
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_5006b770;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.8;
  return;
}

