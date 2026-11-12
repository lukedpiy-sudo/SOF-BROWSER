// rea decompile_all
// name: FUN_20055750
// address: 0x20055750
// body: available
// range: 0x20055750-0x2005590a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20055750(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_200 [512];
  
  iVar3 = FUN_200fa6a0(param_2,&DAT_20130c64);
  if ((iVar3 != 0) || (iVar3 = FUN_200fa6a0(param_3,&DAT_20130c64), iVar3 != 0)) {
    Com_Printf(s_Can_t_use_keys_or_values_with_a___20138004);
    return;
  }
  iVar3 = FUN_200fa6a0(param_2,&DAT_20130c5c);
  if (iVar3 != 0) {
    Com_Printf(s_Can_t_use_keys_or_values_with_a_s_201380a0);
    return;
  }
  iVar3 = FUN_200fa6a0(param_2,&DAT_20130c60);
  if ((iVar3 != 0) || (iVar3 = FUN_200fa6a0(param_3,&DAT_20130c60), iVar3 != 0)) {
    Com_Printf(s_Can_t_use_keys_or_values_with_a___20138028);
    return;
  }
  uVar4 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if (~uVar4 - 1 < 0x40) {
    uVar4 = 0xffffffff;
    pcVar6 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (~uVar4 - 1 < 0x40) {
      FUN_20055670(param_1,param_2);
      if (param_3 == (char *)0x0) {
        return;
      }
      iVar3 = -1;
      pcVar6 = param_3;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (iVar3 == -2) {
        return;
      }
      Com_sprintf(local_200,0x200,s___s__s_20138098,param_2,param_3);
      uVar4 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar5 = 0xffffffff;
      pcVar6 = local_200;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (0x200 < ~uVar4 + (~uVar5 - 2)) {
        Com_Printf(s_Info_string_length_exceeded_20138078);
        return;
      }
      uVar4 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      param_1 = param_1 + (~uVar4 - 1);
      pcVar6 = local_200;
      while (local_200[0] != '\0') {
        *param_1 = local_200[0];
        pcVar1 = pcVar6 + 1;
        param_1 = param_1 + 1;
        pcVar6 = pcVar6 + 1;
        local_200[0] = *pcVar1;
      }
      *param_1 = '\0';
      return;
    }
  }
  Com_Printf(s_Keys_and_values_must_be_<_64_cha_2013804c);
  return;
}

