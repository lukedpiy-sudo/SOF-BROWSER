// rea decompile_all
// name: FUN_20049190
// address: 0x20049190
// body: available
// range: 0x20049190-0x20049380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20049190(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  char *pcVar8;
  char *local_27c;
  undefined1 local_278 [56];
  char local_240 [56];
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  bVar7 = true;
  if (param_3 == (undefined4 *)0x0) {
    return false;
  }
  local_27c = (char *)0x0;
  FUN_200fabac(local_104,s__s_gsq_20135058,param_2);
  FUN_200fabac(local_208,s_Ghoul__s__s_2013504c,param_1,local_104);
  iVar4 = FUN_20048e80(local_208,&local_27c);
  if (iVar4 == -1) {
    FUN_200fabac(local_208,s_Ghoul_comskin__s_20135038,local_104);
    iVar4 = FUN_20048e80(local_208,&local_27c);
  }
  pcVar8 = local_27c;
  if (iVar4 == -1) {
    if (*param_1 == '\0') {
      FUN_200fabac(local_278,s_Ghoul__s_GHL_20133e30);
    }
    else {
      FUN_200fabac(local_278,s_Ghoul__s__s_GHL_201322f4,param_1,param_2);
    }
    sVar3 = (**(code **)*param_3)(local_278,0);
    return sVar3 != 0;
  }
  while( true ) {
    pcVar6 = local_240;
    if (iVar4 < 1) {
      return bVar7;
    }
    cVar2 = *pcVar8;
    while (cVar2 != '\n') {
      if (iVar4 < 1) goto LAB_20049372;
      *pcVar6 = cVar2;
      pcVar1 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      iVar4 = iVar4 + -1;
      cVar2 = *pcVar1;
    }
    if (iVar4 < 1) break;
    pcVar6[-1] = '\0';
    pcVar8 = pcVar8 + 1;
    iVar4 = iVar4 + -1;
    if (local_240[0] != '\0') {
      if (local_240[0] == '#') {
        iVar5 = FUN_20049190(param_1,local_240 + 1,param_3);
        if (iVar5 == 0) {
          bVar7 = false;
        }
      }
      else {
        if (*param_1 == '\0') {
          FUN_200fabac(local_278,s_Ghoul__s_GHL_20133e30,local_240);
        }
        else {
          FUN_200fabac(local_278,s_Ghoul__s__s_GHL_201322f4,param_1,local_240);
        }
        sVar3 = (**(code **)*param_3)(local_278,0);
        if (sVar3 == 0) {
          bVar7 = false;
        }
      }
    }
  }
LAB_20049372:
  *pcVar6 = '\0';
  return bVar7;
}

