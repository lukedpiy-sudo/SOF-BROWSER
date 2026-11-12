// rea decompile_all
// name: FUN_50092180
// address: 0x50092180
// body: available
// range: 0x50092180-0x500922cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50092180(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0) {
    if (*(int *)(param_1 + 0x40c) != -1) {
      (*DAT_5015ca48)(param_1,10,*(int *)(param_1 + 0x40c),0x3f800000,0x3f800000,0,0);
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x424) = 0;
  if (((*(byte *)(param_1 + 0x1b8) & 1) == 0) || (*(int *)(param_1 + 0x2fc) == 0)) {
    *(undefined4 *)(param_1 + 0x2fc) = 1;
  }
  else {
    if (*(char **)(param_1 + 0x1c4) != (char *)0x0) {
      for (uVar1 = FUN_500c26a0(0,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0); uVar1 != 0;
          uVar1 = FUN_500c26a0(uVar1,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0)) {
        iVar2 = __strcmpi(*(char **)(uVar1 + 0x1b4),s_func_areaportal_5014268c);
        if (iVar2 == 0) {
          uVar3 = *(uint *)(uVar1 + 0x318) ^ 1;
          *(uint *)(uVar1 + 0x318) = uVar3;
          (*DAT_5015cad8)(*(undefined4 *)(uVar1 + 0x3bc),uVar3);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x2fc) = 0;
  }
  if ((((*(byte *)(param_1 + 0x1b8) & 0x20) == 0) && (0.0 <= *(float *)(param_1 + 0x420))) &&
     ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0)) {
    iVar2 = 0x15;
    bVar6 = true;
    pcVar4 = *(char **)(param_1 + 0x1b4);
    pcVar5 = s_func_door_portcullis_50147690;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      *(undefined1 **)(param_1 + 0x44c) = &LAB_5008f5d0;
    }
    else {
      *(code **)(param_1 + 0x2b8) = FUN_500925f0;
    }
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + *(float *)(param_1 + 0x420);
  }
  return;
}

