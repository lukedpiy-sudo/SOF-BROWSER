// rea decompile_all
// name: FUN_200f76f0
// address: 0x200f76f0
// body: available
// range: 0x200f76f0-0x200f790f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200f76f0(int param_1,int param_2,int param_3,char *param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  int local_c;
  undefined4 uStack_8;
  char *pcStack_4;
  
  local_c = 0;
  puVar3 = _malloc(0x14);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(undefined2 *)((int)puVar3 + 6) = 9999;
  puVar3[2] = param_4;
  switch(param_4) {
  case (char *)0x0:
    uVar4 = 4;
    uVar8 = 2;
    break;
  case (char *)0x1:
    uVar4 = 6;
    uVar8 = 2;
    break;
  case (char *)0x2:
  case (char *)0x3:
    uVar8 = 2;
    goto LAB_200f774c;
  default:
    uVar8 = 4;
LAB_200f774c:
    uVar4 = 8;
  }
  uVar8 = FUN_200f94a0(8,uVar4,uVar8,&LAB_200f7d10,&LAB_200f7d70,0);
  puVar3[3] = uVar8;
  puVar3[4] = param_5;
  if ((char *)(param_3 + 1) != (char *)0x0) {
    DAT_20407a00 = (char *)(param_3 + 1);
  }
  pcVar10 = DAT_20407a00;
  cVar7 = *DAT_20407a00;
  if (cVar7 != '\0') {
    do {
      if (cVar7 == '\\') break;
      DAT_20407a00 = DAT_20407a00 + 1;
      cVar7 = *DAT_20407a00;
    } while (cVar7 != '\0');
    if (DAT_20407a00 != pcVar10) goto LAB_200f77a4;
  }
  pcVar10 = (char *)0x0;
LAB_200f77a4:
  if (*DAT_20407a00 != '\0') {
    *DAT_20407a00 = '\0';
    DAT_20407a00 = DAT_20407a00 + 1;
  }
  if (0 < param_2) {
LAB_200f77c2:
    pcVar1 = *(char **)(param_1 + local_c * 4);
    if (pcVar10 == (char *)0x0) {
      pcVar10 = &DAT_2015ee44;
    }
    iVar9 = 3;
    bVar13 = true;
    pcVar11 = pcVar1;
    pcVar12 = &DAT_20136f6c;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar13 = *pcVar11 == *pcVar12;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    } while (bVar13);
    if (bVar13) {
      puVar5 = (undefined1 *)FUN_200faaf0(pcVar10,0x3a);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
        uVar8 = Ordinal_10(pcVar10);
        *puVar3 = uVar8;
        uVar2 = FUN_200f9e9e(puVar5 + 1);
        *(undefined2 *)(puVar3 + 1) = uVar2;
      }
    }
    else {
      param_4 = pcVar1;
      puVar6 = (undefined4 *)FUN_200f9600(puVar3[4],&param_4);
      if (puVar6 == (undefined4 *)0x0) {
        param_4 = (char *)FUN_200fcecc(param_4);
        FUN_200f9550(puVar3[4],&param_4);
      }
      else {
        param_4 = (char *)*puVar6;
      }
      uStack_8 = param_4;
      param_4 = pcVar10;
      puVar6 = (undefined4 *)FUN_200f9600(puVar3[4],&param_4);
      if (puVar6 == (undefined4 *)0x0) {
        param_4 = (char *)FUN_200fcecc(param_4);
        FUN_200f9550(puVar3[4],&param_4);
        pcStack_4 = param_4;
      }
      else {
        pcStack_4 = (char *)*puVar6;
      }
      FUN_200f9550(puVar3[3],&uStack_8);
    }
    pcVar10 = DAT_20407a00;
    local_c = local_c + 1;
    if (local_c < param_2) {
      cVar7 = *DAT_20407a00;
      if (cVar7 == '\0') {
LAB_200f78e8:
        pcVar10 = (char *)0x0;
      }
      else {
        do {
          if (cVar7 == '\\') break;
          DAT_20407a00 = DAT_20407a00 + 1;
          cVar7 = *DAT_20407a00;
        } while (cVar7 != '\0');
        if (DAT_20407a00 == pcVar10) goto LAB_200f78e8;
      }
      if (*DAT_20407a00 != '\0') {
        *DAT_20407a00 = '\0';
        DAT_20407a00 = DAT_20407a00 + 1;
      }
      goto LAB_200f77c2;
    }
  }
  return puVar3;
}

