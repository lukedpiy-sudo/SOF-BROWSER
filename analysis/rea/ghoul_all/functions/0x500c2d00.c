// rea decompile_all
// name: FUN_500c2d00
// address: 0x500c2d00
// body: available
// range: 0x500c2d00-0x500c2e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_500c2d00(int param_1,undefined4 *param_2,float param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_c [3];
  
  iVar2 = DAT_50189a3c;
  if (param_1 != 0) goto LAB_500c2d8d;
  _DAT_50189b50 = param_3 * param_3;
  DAT_50189a44 = *param_2;
  DAT_50189a48 = param_2[1];
  _DAT_50189a4c = param_2[2];
  DAT_50189a30 = *param_2;
  DAT_50189a34 = param_2[1];
  _DAT_50189a38 = param_2[2];
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 4;
    *(float *)((int)&DAT_50189a44 + iVar2) = *(float *)((int)&DAT_50189a44 + iVar2) - param_3;
    *(float *)((int)&DAT_50189a30 + iVar2) = param_3 + *(float *)((int)&DAT_50189a30 + iVar2);
    iVar2 = iVar3;
  } while (iVar3 < 0xc);
  do {
    DAT_50189a3c = (*DAT_5015cb30)(&DAT_50189a44,&DAT_50189a30,&DAT_50188a30,0x400,param_4);
    DAT_5015144c = 0;
    iVar2 = DAT_50189a3c;
    while( true ) {
      while( true ) {
        if (iVar2 <= DAT_5015144c) {
          return 0;
        }
        if (*(int *)((&DAT_50188a30)[DAT_5015144c] + 0x78) != 0) break;
        DAT_5015144c = DAT_5015144c + 1;
      }
      param_1 = (&DAT_50188a30)[DAT_5015144c];
      if (param_1 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x78) != 0) {
        if (param_4 == 2) {
          DAT_5015144c = DAT_5015144c;
          return param_1;
        }
        iVar3 = 0;
        pfVar4 = (float *)(param_1 + 0x11c);
        do {
          pfVar1 = (float *)(param_2 + iVar3);
          iVar3 = iVar3 + 1;
          *(float *)(&stack0xfffffff0 + iVar3 * 4) =
               *pfVar1 - ((pfVar4[3] + *pfVar4) * 0.5 + pfVar4[-0x46]);
          pfVar4 = pfVar4 + 1;
        } while (iVar3 < 3);
        if (afStack_c[0] * afStack_c[0] + afStack_c[1] * afStack_c[1] + afStack_c[2] * afStack_c[2]
            <= _DAT_50189b50) {
          return param_1;
        }
      }
LAB_500c2d8d:
      if (param_1 == 0) break;
      DAT_5015144c = DAT_5015144c + 1;
    }
  } while( true );
}

