// rea decompile_all
// name: FUN_200311a0
// address: 0x200311a0
// body: available
// range: 0x200311a0-0x20031314 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200311a0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_200 [256];
  char local_100 [256];
  
  if (DAT_201e7f58._3_1_ == '\0') {
    iVar2 = -(int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(local_100 + iVar2)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    iVar2 = FUN_200fb453(local_100,&DAT_2011d72c);
    if (iVar2 != 0) {
      pcVar3 = (char *)FUN_200fb453(0,&DAT_2011d72c);
      if (pcVar3 == (char *)0x0) {
        FUN_200fabac(local_200,s__s_wav_20132e5c,iVar2);
        DAT_2027c488 = (*DAT_20390d88)(local_200);
        (*DAT_20390d7c)(0,DAT_201e94c4 + 1,1,DAT_2027c488,0x3f19999a,0,0);
        return 1;
      }
      if (*pcVar3 == '*') {
        FUN_200fabac(local_200,s__s_wav_20132e5c,iVar2);
        DAT_2027c488 = (*DAT_20390d88)(local_200);
        fVar5 = (float10)flrand(0,0x3dcccccd);
        fVar5 = (float10)flrand(0x3e99999a,0x3f19999a,0,(float)fVar5);
        (*DAT_20390d7c)(0,DAT_201e94c4 + 1,1,DAT_2027c488,(float)fVar5);
        return 1;
      }
      uVar4 = FUN_200f9e9e(pcVar3);
      uVar4 = irand(1,uVar4);
      FUN_200fabac(local_200,s__s_d_wav_20132e50,iVar2,uVar4);
      DAT_2027c488 = (*DAT_20390d88)(local_200);
      (*DAT_20390d7c)(0,DAT_201e94c4 + 1,1,DAT_2027c488,0x3f19999a,0,0);
    }
  }
  return 1;
}

