// rea decompile_all
// name: FUN_500724d0
// address: 0x500724d0
// body: available
// range: 0x500724d0-0x500725c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500724d0(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  FUN_5006a3e0(&DAT_5015c7b8,&DAT_5014516c);
  iVar2 = 1;
  if (0 < DAT_5015c93c) {
    iVar4 = 0x464;
    do {
      piVar3 = (int *)(iVar4 + DAT_5015cca0);
      if ((*(int *)(iVar4 + 0x78 + DAT_5015cca0) != 0) && (piVar3[0xf3] == param_2)) {
        iVar1 = __strcmpi(param_1,(char *)piVar3[0x6d]);
        if (iVar1 != 0) break;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x464;
    } while (iVar2 <= DAT_5015c93c);
  }
  if (iVar2 != DAT_5015c93c + 1) {
    iVar2 = __strcmpi((char *)piVar3[0x6d],s_ctf_dropped_flag_50145140);
    if (iVar2 == 0) {
      FUN_500a94b0((int)piVar3,0);
      FUN_500c3880(piVar3);
      return;
    }
    FUN_500a94b0((int)piVar3,piVar3);
    piVar3[0xf3] = 0;
    if (piVar3[0x59] != 0) {
      FUN_500f28b0((int)piVar3);
    }
    iVar2 = (*DAT_5015c9f4)(s_player_flaglp_wav_501450f0);
    if (piVar3[0xf] == iVar2) {
      piVar3[0xf] = 0;
    }
    (**(code **)(**(int **)(piVar3[0x1d] + 0x34c) + 4))(7);
  }
  return;
}

