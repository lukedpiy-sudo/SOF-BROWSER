// rea decompile_all
// name: FUN_2010879b
// address: 0x2010879b
// body: available
// range: 0x2010879b-0x2010892d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2010879b(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  LPCWSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (((param_1 == 0) || (iVar1 = FUN_20109f61(param_1,0x3d), iVar1 == 0)) || (param_1 == iVar1))
  goto LAB_201087fe;
  bVar6 = *(short *)(iVar1 + 2) == 0;
  if (DAT_204083c4 == DAT_204083c8) {
    DAT_204083c4 = (int *)FUN_2010898a(DAT_204083c4);
  }
  if (DAT_204083c4 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_204083bc == (undefined4 *)0x0)) {
      if (bVar6) goto LAB_20108927;
      if (DAT_204083bc == (undefined4 *)0x0) {
        DAT_204083bc = _malloc(4);
        if (DAT_204083bc == (undefined4 *)0x0) goto LAB_201087fe;
        *DAT_204083bc = 0;
        if (DAT_204083c4 != (int *)0x0) goto LAB_20108840;
      }
      DAT_204083c4 = _malloc(4);
      if (DAT_204083c4 != (int *)0x0) {
        *DAT_204083c4 = 0;
        goto LAB_20108840;
      }
    }
    else {
      iVar2 = FUN_20109ef9();
      if (iVar2 == 0) goto LAB_20108840;
    }
LAB_201087fe:
    uVar3 = 0xffffffff;
  }
  else {
LAB_20108840:
    piVar4 = DAT_204083c4;
    iVar2 = iVar1 - param_1 >> 1;
    iVar1 = FUN_2010892e(param_1,iVar2);
    if ((iVar1 < 0) || (*piVar4 == 0)) {
      if (!bVar6) {
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        piVar4 = (int *)FUN_200f9a92(piVar4,iVar1 * 4 + 8);
        if (piVar4 != (int *)0x0) {
          piVar4[iVar1] = param_1;
          piVar4[iVar1 + 1] = 0;
          goto LAB_201088d2;
        }
        goto LAB_201087fe;
      }
    }
    else {
      if (bVar6) {
        piVar5 = piVar4 + iVar1;
        FUN_200f9d32(piVar4[iVar1]);
        for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
          iVar1 = iVar1 + 1;
          *piVar5 = piVar5[1];
        }
        piVar4 = (int *)FUN_200f9a92(piVar4,iVar1 << 2);
        if (piVar4 != (int *)0x0) {
LAB_201088d2:
          DAT_204083c4 = piVar4;
        }
      }
      else {
        piVar4[iVar1] = param_1;
      }
      if (param_2 != 0) {
        iVar1 = FUN_2010877e(param_1);
        lpName = _malloc(iVar1 * 2 + 4);
        if (lpName != (LPCWSTR)0x0) {
          FUN_20109ed4(lpName,param_1);
          lpName[iVar2] = L'\0';
          SetEnvironmentVariableW(lpName,(LPCWSTR)(~-(uint)bVar6 & (uint)(lpName + iVar2 + 1)));
          FUN_200f9d32(lpName);
        }
      }
    }
LAB_20108927:
    uVar3 = 0;
  }
  return uVar3;
}

