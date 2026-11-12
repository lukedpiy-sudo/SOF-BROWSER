// rea decompile_all
// name: FUN_500b0940
// address: 0x500b0940
// body: available
// range: 0x500b0940-0x500b0a24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b0940(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_500c26a0(0,0x1b4,s_player_50142e48,(void *)0x0);
  do {
    if (uVar2 == 0) {
      return;
    }
    iVar1 = *(int *)(uVar2 + 0x74);
    if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
      *(float *)(iVar1 + 0x534) = 0.1 / *(float *)(param_1 + 0x364) + *(float *)(iVar1 + 0x534);
      if (*(float *)(*(int *)(uVar2 + 0x74) + 0x534) <= 1.0) goto LAB_500b09f2;
      *(undefined4 *)(*(int *)(uVar2 + 0x74) + 0x534) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
    else {
      *(float *)(iVar1 + 0x534) = *(float *)(iVar1 + 0x534) - 0.1 / *(float *)(param_1 + 0x364);
      if (0.0 <= *(float *)(*(int *)(uVar2 + 0x74) + 0x534)) {
LAB_500b09f2:
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      }
      else {
        *(undefined4 *)(*(int *)(uVar2 + 0x74) + 0x534) = 0;
        *(undefined4 *)(param_1 + 0x2b4) = 0;
      }
    }
    uVar2 = FUN_500c26a0(uVar2,0x1b4,s_player_50142e48,(void *)0x0);
  } while( true );
}

