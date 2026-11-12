// rea decompile_all
// name: FUN_200f6860
// address: 0x200f6860
// body: available
// range: 0x200f6860-0x200f6af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_200f6860(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  bool bVar9;
  uint unaff_retaddr;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  char *pcStack_8;
  char *pcStack_4;
  
  uStack_24 = (undefined2)unaff_ESI;
  uStack_22 = (undefined2)((uint)unaff_ESI >> 0x10);
  uStack_26 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (param_1 != (char *)0x0) {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  FUN_200f96b0();
  iVar4 = Ordinal_23(2,2,0x11);
  uStack_24 = (undefined2)iVar4;
  uStack_22 = (undefined2)((uint)iVar4 >> 0x10);
  if (iVar4 == -1) {
    return 1;
  }
  iVar7 = unaff_retaddr + 100;
  pcVar8 = param_1;
  pcVar6 = pcStack_8;
  for (; (int)unaff_retaddr < iVar7; unaff_retaddr = unaff_retaddr + 1) {
    uVar2 = Ordinal_9(unaff_retaddr);
    unaff_EBP = CONCAT22(uVar2,(short)unaff_EBP);
    if ((pcStack_4 != (char *)0x0) && (iVar5 = Ordinal_10(pcStack_4), iVar5 == -1)) {
      iVar4 = 0x10;
      bVar9 = true;
      pcVar8 = pcStack_4;
      pcVar6 = &DAT_2015a890;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *pcVar8 == *pcVar6;
        pcVar8 = pcVar8 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar9);
      iVar4 = unaff_EDI;
      if (!bVar9) {
        Ordinal_52(pcStack_4);
      }
    }
    iVar5 = Ordinal_8(0x7f000001);
    if (unaff_EBP == iVar5) {
      unaff_EBP = 0;
    }
    pcVar6 = (char *)Ordinal_2(iVar4,&uStack_24,0x10);
    if (pcVar6 == (char *)0x0) goto LAB_200f6953;
    pcVar8 = pcStack_8;
  }
  pcStack_8 = pcVar8;
  if (pcVar6 != (char *)0x0) {
    return 2;
  }
LAB_200f6953:
  if (unaff_retaddr == 0) {
    iVar7 = Ordinal_6(iVar4,&stack0xffffffe4,&stack0xffffffe0);
    if (iVar7 != 0) {
      return 2;
    }
    uVar3 = Ordinal_15(CONCAT22(uStack_24,uStack_26));
    unaff_retaddr = (uint)uVar3;
  }
  if (pcStack_8 == (char *)0x0) {
    PTR_DAT_2015a828 = (undefined *)&DAT_2015a738;
  }
  else {
    PTR_DAT_2015a828 = _malloc(0xf0);
    *(undefined **)pcStack_8 = PTR_DAT_2015a828;
  }
  pcVar8 = PTR_DAT_2015a828 + 8;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcVar8 = PTR_DAT_2015a828 + 0x48;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  *(uint *)(PTR_DAT_2015a828 + 0xe4) = unaff_retaddr;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xd8) = 0;
  *(int *)(PTR_DAT_2015a828 + 4) = iVar4;
  *(int *)PTR_DAT_2015a828 = iVar4;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xe0) = 0;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xdc) = 1;
  PTR_DAT_2015a828[0xe8] = 1;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xec) = param_7;
  *(undefined4 *)(PTR_DAT_2015a828 + 200) = param_3;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xcc) = param_4;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xd4) = param_6;
  *(undefined4 *)(PTR_DAT_2015a828 + 0xd0) = param_5;
  _DAT_204079f0 = 2;
  _DAT_204079f2 = Ordinal_9(0x6cfc);
  _DAT_204079f4 = Ordinal_10(s_master_gamespy_com_2015a830);
  if (_DAT_204079f4 == -1) {
    iVar4 = 0x10;
    bVar9 = true;
    pcVar8 = s_master_gamespy_com_2015a830;
    pcVar6 = &DAT_2015a890;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar8 == *pcVar6;
      pcVar8 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if ((!bVar9) && (iVar4 = Ordinal_52(s_master_gamespy_com_2015a830), iVar4 != 0)) {
      _DAT_204079f4 = *(int *)**(undefined4 **)(iVar4 + 0xc);
    }
  }
  return 0;
}

