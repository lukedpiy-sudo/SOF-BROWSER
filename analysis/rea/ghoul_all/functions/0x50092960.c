// rea decompile_all
// name: FUN_50092960
// address: 0x50092960
// body: available
// range: 0x50092960-0x50092a71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50092960(int *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  while( true ) {
    while ((param_1[0xbb] != -0x29b && ((param_1[0x6e] & 0x10U) != 0))) {
      param_1[0x6e] = param_1[0x6e] & 0xffffffef;
      param_1 = (int *)param_1[0xcf];
      if (param_1 == (int *)0x0) {
        return;
      }
    }
    if ((*(byte *)(param_1 + 0x6e) & 0x10) != 0) {
      return;
    }
    if ((param_1[0x68] & 0x400U) == 0) break;
    param_1 = (int *)param_1[0xd1];
  }
  if ((((param_1[0x6e] & 0x2000U) == 0) && (param_1[0x72] != 0)) && (param_1[0xbb] == -0x29b)) {
    return;
  }
  if (((param_1[0x6e] & 0x20U) != 0) && ((param_1[0x109] == 2 || (param_1[0x109] == 0)))) {
    do {
      param_1[0x6b] = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
      param_1[0xb0] = 0;
      FUN_500925f0();
      param_1 = (int *)param_1[0xcf];
    } while (param_1 != (int *)0x0);
    return;
  }
  do {
    param_1[0x6b] = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    param_1[0xb0] = 0;
    iVar1 = 0xe;
    bVar4 = true;
    pcVar2 = *(char **)(param_2 + 0x1b4);
    pcVar3 = s_script_runner_5012f5a4;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    iVar1 = param_3;
    if (bVar4) {
      iVar1 = param_2;
    }
    FUN_50092710(param_1,iVar1);
    param_1 = (int *)param_1[0xcf];
    if (param_1 == (int *)0x0) {
      return;
    }
  } while( true );
}

