// rea decompile_all
// name: FUN_2004bae0
// address: 0x2004bae0
// body: available
// range: 0x2004bae0-0x2004bcc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004bae0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  iVar4 = FUN_20057c80();
  if ((DAT_203647b0 == 0) && (DAT_203647c4 == 0)) {
    uVar2 = (&DAT_20135354)[iVar4 + param_1 * 0x10];
LAB_2004bb40:
    if (((DAT_203647b4 == 0) && (DAT_203647c8 == 0)) || (DAT_203648c8 == 0)) goto LAB_2004bc0c;
  }
  else {
    uVar2 = (&DAT_20135358)[iVar4 + param_1 * 0x10];
    if (((DAT_203647b0 == 0) && (DAT_203647c4 == 0)) || ((DAT_20364824 == 0 && (DAT_203648f0 == 0)))
       ) goto LAB_2004bb40;
  }
  pcVar5 = (char *)FUN_20065e60();
  if (pcVar5 != (char *)0x0) {
    FUN_200fb453(pcVar5,&DAT_20136700);
    uVar6 = 0xffffffff;
    pcVar9 = pcVar5;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar6 - 1;
    if (0xff < DAT_20365e9c + iVar4) {
      iVar4 = 0x100 - DAT_20365e9c;
    }
    if (0 < iVar4) {
      pcVar5[iVar4] = '\0';
      uVar6 = 0xffffffff;
      pcVar9 = pcVar5;
      do {
        pcVar11 = pcVar9;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar9 = &DAT_20365ea0 + DAT_20367ea4 * 0x100;
      do {
        pcVar10 = pcVar9;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      pcVar9 = pcVar11 + -uVar6;
      pcVar11 = pcVar10 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      DAT_20365e9c = DAT_20365e9c + iVar4;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    FUN_200f9d32(pcVar5);
    DAT_20364768 = 0;
    return;
  }
LAB_2004bc0c:
  if ((DAT_203648a0 != 0) && ((DAT_203647b4 != 0 || (DAT_203647c8 != 0)))) {
    FUN_20018180(s_clear_20136730);
    DAT_20364768 = 0;
    return;
  }
  if ((param_1 == 0xd) || (param_1 == 0xe)) {
    puVar3 = &DAT_20365ea1;
    if (((&DAT_20365ea1)[DAT_20367ea4 * 0x100] == '\\') ||
       ((&DAT_20365ea1)[DAT_20367ea4 * 0x100] == '/')) {
      puVar3 = &DAT_20365ea2;
    }
    FUN_20018180(puVar3 + DAT_20367ea4 * 0x100);
    FUN_20018180(&DAT_2011dd40);
    Com_Printf(&DAT_2011d990,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
    if (DAT_201c1f00 == 1) {
      FUN_20015fa0(0);
    }
  }
  FUN_2004b870(param_1,uVar2);
  return;
}

