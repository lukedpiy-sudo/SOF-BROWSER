// rea decompile_all
// name: FUN_20049390
// address: 0x20049390
// body: available
// range: 0x20049390-0x200494bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20049390(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_244;
  char local_240 [56];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  local_244 = (char *)0x0;
  FUN_200fabac(local_104,s__s_gsq_20135058,param_2);
  FUN_200fabac(local_208,s_Ghoul__s__s_2013504c,param_1,local_104);
  iVar3 = FUN_20048e80(local_208,&local_244);
  if (iVar3 == -1) {
    FUN_200fabac(local_208,s_Ghoul_comskin__s_20135038,local_104);
    iVar3 = FUN_20048e80(local_208,&local_244);
  }
  pcVar6 = local_244;
  if (iVar3 != -1) {
    while (pcVar5 = local_240, 0 < iVar3) {
      cVar2 = *pcVar6;
      while (cVar2 != '\n') {
        if (iVar3 < 1) goto LAB_200494b1;
        *pcVar5 = cVar2;
        pcVar1 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
        iVar3 = iVar3 + -1;
        cVar2 = *pcVar1;
      }
      if (iVar3 < 1) {
LAB_200494b1:
        *pcVar5 = '\0';
        return;
      }
      pcVar5[-1] = '\0';
      pcVar6 = pcVar6 + 1;
      iVar3 = iVar3 + -1;
      if (local_240[0] == '#') {
        FUN_20049390(param_1,local_240 + 1,param_3,param_4);
      }
      else if ((local_240[0] != '\0') &&
              (uVar4 = (**(code **)(*param_3 + 0x1c))(local_240), (short)uVar4 != 0)) {
        (**(code **)(*param_4 + 0x20))(uVar4,0);
      }
    }
  }
  return;
}

