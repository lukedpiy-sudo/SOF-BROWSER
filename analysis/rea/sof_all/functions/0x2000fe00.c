// rea decompile_all
// name: FUN_2000fe00
// address: 0x2000fe00
// body: available
// range: 0x2000fe00-0x2000feaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000fe00(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *_Str1;
  
  puVar4 = (undefined4 *)param_2;
  *(undefined4 *)param_2 = 0;
  param_2 = (char *)0x0;
  iVar2 = FS_LoadFile(param_1,&param_2,0);
  if (param_2 != (char *)0x0) {
    param_1 = 0;
    _Str1 = param_2;
    do {
      cVar1 = *_Str1;
      iVar3 = iVar2;
      pcVar5 = _Str1;
      while ((cVar1 != '\n' && (cVar1 != '\r'))) {
        if (iVar3 == 0) goto LAB_2000fe9e;
        pcVar6 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar6;
      }
      if (iVar3 == 0) break;
      *pcVar5 = '\0';
      pcVar6 = pcVar5 + 1;
      iVar2 = iVar3 + -1;
      if ((pcVar5[1] == '\n') || (pcVar5[1] == '\r')) {
        pcVar6 = pcVar5 + 2;
        iVar2 = iVar3 + -2;
      }
      iVar3 = __strcmpi(_Str1,&DAT_2011f22c);
      if (iVar3 == 0) {
        *(undefined1 *)puVar4 = 0;
      }
      else {
        Com_sprintf(puVar4,0x40,s__s_m32_2011f224,_Str1);
      }
      puVar4 = puVar4 + 0x10;
      param_1 = param_1 + 1;
      _Str1 = pcVar6;
    } while (param_1 < 6);
LAB_2000fe9e:
    FS_FreeFile(param_2);
  }
  return;
}

