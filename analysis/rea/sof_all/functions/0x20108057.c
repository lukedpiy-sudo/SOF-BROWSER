// rea decompile_all
// name: FUN_20108057
// address: 0x20108057
// body: available
// range: 0x20108057-0x2010825c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20108057(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  char *_Str2;
  undefined4 *puVar7;
  char local_8c [132];
  size_t local_8;
  
  iVar5 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
LAB_201081ae:
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      if (param_2 != (char *)0x0) {
        uVar1 = FUN_2010825d(param_1,param_2);
        return uVar1;
      }
      return (&DAT_2015e1ac)[param_1 * 3];
    }
    local_8 = 1;
    param_1 = 0;
    if (param_2 != (char *)0x0) {
      if (((*param_2 == 'L') && (param_2[1] == 'C')) && (param_2[2] == '_')) {
        pcVar2 = (char *)FUN_201095f0(param_2,&DAT_20113c28);
        _Str2 = param_2;
        while (((pcVar2 != (char *)0x0 && (local_8 = (int)pcVar2 - (int)_Str2, local_8 != 0)) &&
               (*pcVar2 != ';'))) {
          param_2 = (char *)0x1;
          ppuVar6 = &PTR_s_LC_COLLATE_2015e1b4;
          do {
            iVar5 = _strncmp(*ppuVar6,_Str2,local_8);
            if ((iVar5 == 0) && (sVar3 = _strlen(*ppuVar6), local_8 == sVar3)) break;
            param_2 = (char *)((int)param_2 + 1);
            ppuVar6 = ppuVar6 + 3;
          } while ((int)ppuVar6 < 0x2015e1e5);
          pcVar2 = pcVar2 + 1;
          sVar3 = FUN_20108740(pcVar2,&DAT_20130c5c);
          if ((sVar3 == 0) && (*pcVar2 != ';')) break;
          if ((int)param_2 < 6) {
            _strncpy(local_8c,pcVar2,sVar3);
            local_8c[sVar3] = '\0';
            iVar5 = FUN_2010825d(param_2,local_8c);
            if (iVar5 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pcVar2[sVar3] == '\0') || (_Str2 = pcVar2 + sVar3 + 1, *_Str2 == '\0'))
          goto LAB_201081b9;
          pcVar2 = (char *)FUN_201095f0(_Str2,&DAT_20113c28);
        }
        goto LAB_201081ae;
      }
      iVar4 = FUN_20108431(param_2,local_8c,0,0,0);
      if (iVar4 == 0) {
        return 0;
      }
      puVar7 = &DAT_2015e1ac;
      do {
        if (puVar7 != &DAT_2015e1ac) {
          iVar4 = _strcmp(local_8c,(char *)*puVar7);
          if ((iVar4 == 0) || (iVar4 = FUN_2010825d(iVar5,local_8c), iVar4 != 0)) {
            param_1 = param_1 + 1;
          }
          else {
            local_8 = 0;
          }
        }
        puVar7 = puVar7 + 3;
        iVar5 = iVar5 + 1;
      } while ((int)puVar7 < 0x2015e1e9);
      if (local_8 != 0) {
        uVar1 = FUN_20108378();
        FUN_200f9d32(DAT_2015e1ac);
        DAT_2015e1ac = 0;
        return uVar1;
      }
LAB_201081b9:
      if (param_1 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_20108378();
  }
  return uVar1;
}

