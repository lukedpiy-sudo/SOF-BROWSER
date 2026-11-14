// rea decompile_all
// name: FUN_300166e0
// address: 0x300166e0
// body: available
// range: 0x300166e0-0x300167a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300166e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if ((*(uint *)(*(int *)(param_1 + 0x34) + 0x20) & 0x80c) == 0) {
    piVar4 = (int *)(((int)*(short *)(param_1 + 0x14) >> 4) + 1);
    uVar5 = ((int)*(short *)(param_1 + 0x16) >> 4) + 1;
    if (*(int *)(param_1 + 100) != 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x69);
      piVar4 = (int *)(uint)*(byte *)(param_1 + 0x68);
    }
    uVar2 = FUN_300162f0(piVar4,uVar5,(int *)(param_1 + 0x18),(int *)(param_1 + 0x1c));
    if ((char)uVar2 == '\0') {
      FUN_30016200('\0');
      puVar6 = &DAT_3009042c;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      uVar2 = FUN_300162f0(piVar4,uVar5,(int *)(param_1 + 0x18),(int *)(param_1 + 0x1c));
      if ((char)uVar2 == '\0') {
        (*DAT_3008fdc8)(0,s_Consecutive_calls_to_LM_AllocBlo_3002f9f4,piVar4,uVar5);
      }
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x4c) = DAT_30090024;
    FUN_30009510(param_1);
    FUN_30009550(param_1,&DAT_3009062c + (iVar3 * 0x80 + iVar1) * 4,0x200);
  }
  return;
}

