// rea decompile_all
// name: FUN_2000e690
// address: 0x2000e690
// body: available
// range: 0x2000e690-0x2000e98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000e690(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_40 [64];
  
  iVar4 = FUN_2001e290(&DAT_20367ebc);
  if ((iVar4 < 0) || (0xde2 < iVar4)) {
    Com_Error(1,s_configstring_>_MAX_CONFIGSTRINGS_2011ef10);
  }
  pcVar1 = &DAT_201e94cc + iVar4 * 0x40;
  FUN_2005d2d0(&DAT_20367ebc,pcVar1);
  if (((DAT_201e7594 == '\0') &&
      (uVar3 = DAT_20225254 & 8, DAT_20225254 = DAT_20225254 + 1, uVar3 == 0)) && (iVar4 < 0x587)) {
    FUN_20016630((float)iVar4 * 0.33 * 0.00070671376 + 0.33,0);
  }
  if ((0x486 < iVar4) && (iVar4 < 0x587)) {
    FUN_2002fac0(iVar4 + -0x487);
    return;
  }
  if (iVar4 == 1) {
    if (DAT_201e7594 == '\0') {
      return;
    }
    uVar5 = FUN_200f9e9e(&DAT_201e950c,1);
    FUN_20001310(uVar5);
    return;
  }
  if (iVar4 < 0x23) {
    if (0x122 < iVar4) goto LAB_2000e7dc;
    if (0x286 < iVar4) goto LAB_2000e80c;
    if (0x386 < iVar4) goto LAB_2000e83b;
  }
  else {
    if (iVar4 < 0x123) {
      if (DAT_201e7594 == '\0') {
        return;
      }
      uVar5 = (*DAT_20403584)(pcVar1);
      *(undefined4 *)(&DAT_20220d00 + iVar4 * 4) = uVar5;
      if (*pcVar1 != '*') {
        *(undefined4 *)(&DAT_20221100 + iVar4 * 4) = 0;
        return;
      }
      uVar5 = FUN_2001a530(pcVar1);
      *(undefined4 *)(&DAT_20221100 + iVar4 * 4) = uVar5;
      return;
    }
LAB_2000e7dc:
    if (iVar4 < 0x287) {
      if (DAT_201e7594 == '\0') {
        return;
      }
      uVar5 = (*DAT_20390d88)(pcVar1);
      *(undefined4 *)(&DAT_20221100 + iVar4 * 4) = uVar5;
      return;
    }
LAB_2000e80c:
    if (iVar4 < 0x387) {
      if (DAT_201e7594 == '\0') {
        return;
      }
      FUN_200430b0(pcVar1,iVar4 + -0x287);
      return;
    }
LAB_2000e83b:
    if (iVar4 < 0x487) {
      if (DAT_201e7594 == '\0') {
        return;
      }
      uVar5 = (*DAT_20403590)(pcVar1);
      *(undefined4 *)(&DAT_20220d00 + iVar4 * 4) = uVar5;
      return;
    }
  }
  if (iVar4 < 0x587) {
    if (iVar4 < 0x5a7) {
      if (iVar4 < 0x5b7) {
        return;
      }
      goto LAB_2000e914;
    }
  }
  else if (iVar4 < 0x5a7) {
    if (DAT_201e7594 == '\0') {
      return;
    }
    iVar4 = iVar4 + -0x587;
    FUN_2000e360(&DAT_20221f1c + iVar4 * 0x15c,&DAT_201ff68c + iVar4 * 0x40,iVar4 == DAT_201e94c4);
    return;
  }
  if (iVar4 < 0x5b7) {
    if (DAT_201e7594 == '\0') {
      return;
    }
    puVar2 = &DAT_2020e238 + iVar4 * 0x40;
    Com_sprintf(puVar2,0x40,s_pics_dmicons__s_2011ef00,pcVar1);
    iVar4 = (*DAT_20403590)(puVar2);
    if (iVar4 != 0) {
      return;
    }
    *puVar2 = 0;
    return;
  }
LAB_2000e914:
  if (((iVar4 < 0x5d5) && (DAT_201e7594 != '\0')) && (iVar4 = FUN_20057ca0(pcVar1,1), iVar4 != 0)) {
    piVar8 = (int *)(iVar4 + 0x28);
    iVar4 = 0x100;
    do {
      if ((piVar8 != (int *)0xc) && ((*(byte *)(piVar8 + -2) & 8) != 0)) {
        iVar6 = *piVar8;
        iVar7 = 0;
        do {
          if (iVar6 == 0) goto LAB_2000e983;
          iVar6 = FUN_200faaf0(iVar6 + 1,0x3b);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        if (iVar6 != 0) {
          Com_sprintf(local_40,0x40,s_pics__s_2011eef8,iVar6 + 1);
          (*DAT_20403590)(local_40);
        }
      }
LAB_2000e983:
      piVar8 = piVar8 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

