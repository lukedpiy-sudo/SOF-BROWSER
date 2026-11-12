// rea decompile_all
// name: FUN_20047550
// address: 0x20047550
// body: available
// range: 0x20047550-0x20047678 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20047550(uint *param_1,int *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  uVar4 = FUN_200473b0(param_1,param_2);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  if ((int)*param_1 < 1) {
    *param_3 = '\0';
    return uVar4 & 0xffffff00;
  }
  if (*(char *)*param_2 == '{') {
    *param_2 = (int)((char *)*param_2 + 1);
    *param_1 = *param_1 - 1;
    uVar4 = FUN_200473b0(param_1,param_2);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
  }
  pcVar3 = (char *)*param_2;
  cVar1 = *pcVar3;
  if (cVar1 == '}') {
    *param_2 = (int)(pcVar3 + 1);
    uVar2 = *param_1;
    *param_1 = uVar2 - 1;
    return uVar2 - 1 & 0xffffff00;
  }
  if (cVar1 == '\"') {
    *param_2 = (int)(pcVar3 + 1);
    uVar4 = *param_1 - 1;
    *param_1 = uVar4;
    cVar1 = *(char *)*param_2;
    while (cVar1 != '\"') {
      if ((int)uVar4 < 1) goto LAB_20047655;
      *param_3 = cVar1;
      param_3 = param_3 + 1;
      *param_2 = *param_2 + 1;
      uVar4 = *param_1 - 1;
      *param_1 = uVar4;
      cVar1 = *(char *)*param_2;
    }
    if (0 < (int)uVar4) {
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 - 1;
    }
  }
  else {
    while (((((((cVar1 != '{' && (cVar1 != '}')) && (cVar1 != '\f')) &&
              ((cVar1 != '\v' && (cVar1 != '\t')))) &&
             ((cVar1 != '\r' && ((cVar1 != '\n' && (cVar1 != ' ')))))) &&
            ((cVar1 != '/' || (pcVar3[1] != '/')))) && (0 < (int)*param_1))) {
      *param_3 = cVar1;
      param_3 = param_3 + 1;
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 - 1;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
    }
  }
LAB_20047655:
  *param_3 = '\0';
  if (0 < (int)*param_1) {
    return CONCAT31((int3)(*param_1 >> 8),1);
  }
  return (uint)(0 < (int)uVar2);
}

