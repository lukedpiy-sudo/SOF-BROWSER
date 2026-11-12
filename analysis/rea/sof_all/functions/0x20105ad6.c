// rea decompile_all
// name: FUN_20105ad6
// address: 0x20105ad6
// body: available
// range: 0x20105ad6-0x20105c5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20105ad6(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_200fc677(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_204083bc == DAT_204083c0) {
    DAT_204083bc = (int *)FUN_20105cb5(DAT_204083bc);
  }
  if (DAT_204083bc == (int *)0x0) {
    if ((param_2 == 0) || (DAT_204083c4 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_204083bc = _malloc(4);
      if (DAT_204083bc == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_204083bc = 0;
      if (DAT_204083c4 == (undefined4 *)0x0) {
        DAT_204083c4 = _malloc(4);
        if (DAT_204083c4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_204083c4 = 0;
      }
    }
    else {
      iVar2 = FUN_200ff697();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_204083bc;
  iVar2 = FUN_20105c5d(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_200f9a92(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_20105c0a;
    }
    piVar5 = piVar3 + iVar2;
    FUN_200f9d32(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_200f9a92(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_20105c0a;
  }
  DAT_204083bc = piVar3;
LAB_20105c0a:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_20101cf0(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_200f9d32(lpName);
    }
  }
  return 0;
}

