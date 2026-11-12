// rea decompile_all
// name: FUN_50091570
// address: 0x50091570
// body: available
// range: 0x50091570-0x50091720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091570(int param_1)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  float local_c;
  float local_8;
  float local_4;
  
  bVar1 = true;
  pcVar2 = *(char **)(param_1 + 0x1c4);
  if (pcVar2 != (char *)0x0) {
    while( true ) {
      uVar3 = FUN_500c2e80(pcVar2);
      if (uVar3 == 0) {
        (*DAT_5015ca24)(s_train_next__bad_target__s_501478d4,*(undefined4 *)(param_1 + 0x1c4));
        return;
      }
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(uVar3 + 0x1c4);
      if ((*(byte *)(uVar3 + 0x1b8) & 1) == 0) break;
      if (!bVar1) {
        iVar5 = uVar3 + 4;
        puVar4 = FUN_500c33f0();
        (*DAT_5015ca24)(s_connected_teleport_path_corners__501478a4,*(undefined4 *)(uVar3 + 0x1b4),
                        puVar4,iVar5);
        return;
      }
      bVar1 = false;
      *(float *)(param_1 + 4) = *(float *)(uVar3 + 4) - *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 8) = *(float *)(uVar3 + 8) - *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0xc) = *(float *)(uVar3 + 0xc) - *(float *)(param_1 + 0x124);
      (*DAT_5015cb28)(param_1);
      pcVar2 = *(char **)(param_1 + 0x1c4);
      if (pcVar2 == (char *)0x0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(uVar3 + 0x360);
    *(uint *)(param_1 + 0x214) = uVar3;
    if ((*(uint *)(param_1 + 0x1a0) & 0x400) == 0) {
      if (*(int *)(param_1 + 0x404) != -1) {
        (*DAT_5015ca48)(param_1,10,*(int *)(param_1 + 0x404),0x3f800000,0x3f800000,0,0);
      }
      if (*(int *)(param_1 + 0x408) != -1) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x408);
        *(undefined4 *)(param_1 + 0x40) = 0xf8;
      }
    }
    local_c = *(float *)(uVar3 + 4) - *(float *)(param_1 + 0x11c);
    local_8 = *(float *)(uVar3 + 8) - *(float *)(param_1 + 0x120);
    local_4 = *(float *)(uVar3 + 0xc) - *(float *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x424) = 0;
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xc);
    *(float *)(param_1 + 0x3ec) = local_c;
    *(float *)(param_1 + 0x3f4) = local_4;
    *(float *)(param_1 + 0x3f0) = local_8;
    FUN_5008f880(param_1,&local_c,&LAB_50091460);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  }
  return;
}

