// rea decompile_all
// name: FUN_50055650
// address: 0x50055650
// body: available
// range: 0x50055650-0x5005577b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50055650(int param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(param_1 + 0x45c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x40) != 0)) {
    *(float *)(iVar2 + 0x54) = DAT_5015ccdc + 30.0;
    if (*(float *)(*(int *)(param_1 + 0x45c) + 0x3c0) < DAT_5015ccdc) {
      fVar3 = (float10)(*DAT_5015cb20)(0x3fc00000,0x40600000);
      *(float *)(*(int *)(param_1 + 0x45c) + 0x3c0) = (float)(fVar3 + (float10)DAT_5015ccdc);
      *(uint *)(*(int *)(param_1 + 0x45c) + 0x3c4) =
           (uint)(*(int *)(*(int *)(param_1 + 0x45c) + 0x3c4) != 1);
    }
    iVar2 = *(int *)(param_1 + 0x45c);
    if (*(int *)(iVar2 + 0x3c4) == 1) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x40) + 0xc) + 2;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x40) + 0xc) + -2;
    }
    pfVar1 = (float *)FUN_5005deb0(&DAT_50159a60,iVar2);
    if ((pfVar1 != (float *)0x0) && (*(int *)(param_1 + 0x45c) != 0)) {
      fStack_18 = *pfVar1 - *(float *)(param_1 + 4);
      fStack_14 = pfVar1[1] - *(float *)(param_1 + 8);
      fStack_10 = pfVar1[2] - *(float *)(param_1 + 0xc);
      FUN_500c3570(&fStack_18,&fStack_c);
      *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = fStack_c;
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x24) = uStack_8;
      FUN_500504d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x20c),param_1);
    }
  }
  return;
}

