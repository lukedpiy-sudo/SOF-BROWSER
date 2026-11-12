// rea decompile_all
// name: FUN_500625d0
// address: 0x500625d0
// body: available
// range: 0x500625d0-0x50062933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall
FUN_500625d0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined2 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int iVar12;
  int extraout_ECX;
  char cVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  int iVar17;
  uint local_4;
  undefined3 uVar11;
  
  iVar15 = param_1;
  iVar17 = (int)(char)param_2;
  cVar3 = *(char *)this;
  pcVar7 = *(char **)(*(int *)((int)this + 0xc) + iVar17 * 4);
  if (cVar3 == '\0') {
    pcVar7[7] = '\0';
    pcVar7[6] = '\0';
  }
  else if (cVar3 == *pcVar7) {
    pcVar7[6] = '\x01';
  }
  else if (cVar3 == pcVar7[1]) {
    pcVar7[7] = '\x01';
  }
  DAT_50159b14 = DAT_50159b14 + 1;
  if (100 < DAT_50159b14) {
    param_2 = *(int *)(*(int *)((int)this + 0xc) + iVar17 * 4);
    pvVar16 = (void *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40c) + 0x24);
    piVar4 = (int *)FUN_500fc2d0(pvVar16,&param_1);
    puVar5 = FUN_5000a290(pvVar16,&param_3,*piVar4,&param_2);
    return CONCAT31((int3)((uint)puVar5 >> 8),1);
  }
  if ((*(char *)this == (char)param_4) && ((char)param_3 == (char)param_2)) {
    param_2 = *(int *)(*(int *)((int)this + 0xc) + iVar17 * 4);
    pvVar16 = (void *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x40c) + 0x24);
    piVar4 = (int *)FUN_500fc2d0(pvVar16,&param_1);
    puVar5 = FUN_5000a290(pvVar16,&param_3,*piVar4,&param_2);
    return CONCAT31((int3)((uint)puVar5 >> 8),1);
  }
  if (iVar17 < *(char *)((int)this + 0x18) + -1) {
    pcVar7 = *(char **)(*(int *)((int)this + 0xc) + 4 + iVar17 * 4);
    if (*pcVar7 == *(char *)this) {
      cVar3 = pcVar7[6];
    }
    else {
      cVar3 = pcVar7[7];
    }
    if (((cVar3 == '\0') && (param_5 != 3)) &&
       (uVar6 = FUN_500625d0(this,param_1,
                             CONCAT31((int3)((uint)param_4 >> 8),(char)param_2 + '\x01'),param_3,
                             param_4,1), (char)uVar6 != '\0')) {
      param_2 = *(int *)(*(int *)((int)this + 0xc) + iVar17 * 4);
      pvVar16 = (void *)(*(int *)(*(int *)(iVar15 + 0x45c) + 0x40c) + 0x24);
      piVar4 = (int *)FUN_500fc2d0(pvVar16,&param_1);
      puVar5 = FUN_5000a290(pvVar16,&param_3,*piVar4,&param_2);
      return CONCAT31((int3)((uint)puVar5 >> 8),1);
    }
  }
  pcVar7 = *(char **)(*(int *)((int)this + 0xc) + iVar17 * 4);
  cVar3 = *pcVar7;
  if (*(char *)this == cVar3) {
    cVar3 = pcVar7[1];
  }
  iVar12 = CONCAT31((int3)((uint)*(int *)((int)this + 0xc) >> 8),*pcVar7);
  if (*(char *)this == *pcVar7) {
    uVar2 = *(undefined2 *)(pcVar7 + 4);
  }
  else {
    uVar2 = *(undefined2 *)(pcVar7 + 2);
    pcVar7 = (char *)CONCAT22((short)((uint)pcVar7 >> 0x10),uVar2);
  }
  local_4 = CONCAT22(local_4._2_2_,uVar2);
  uVar8 = CONCAT31((int3)((uint)pcVar7 >> 8),cVar3);
  if (cVar3 < '\x01') goto LAB_5006287f;
  if (DAT_50159af8 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (DAT_50159afc - DAT_50159af8) / 0x1c;
    iVar12 = -(DAT_50159afc - DAT_50159af8 >> 0x1f);
  }
  uVar8 = (uint)cVar3;
  if ((uVar14 <= uVar8) || (pcVar7 = (char *)(DAT_50159af8 + uVar8 * 0x1c), pcVar7 == (char *)0x0))
  goto LAB_5006287f;
  uVar8 = FUN_50062b10(pcVar7,local_4);
  iVar15 = param_1;
  cVar3 = (char)uVar8;
  local_4 = CONCAT31(local_4._1_3_,cVar3);
  pcVar9 = *(char **)(*(int *)(pcVar7 + 0xc) + cVar3 * 4);
  if (*pcVar9 == *pcVar7) {
    cVar13 = pcVar9[6];
  }
  else {
    cVar13 = pcVar9[7];
  }
  pcVar9 = *(char **)(*(int *)((int)this + 0xc) + iVar17 * 4);
  cVar1 = *pcVar9;
  iVar12 = CONCAT31(cVar3 >> 7,cVar1);
  if (cVar1 == '\0') {
LAB_5006280f:
    uVar8 = (uint)pcVar9 & 0xffffff00;
  }
  else {
    cVar3 = pcVar9[1];
    uVar11 = (undefined3)((uint)pcVar9 >> 8);
    pcVar9 = (char *)CONCAT31(uVar11,cVar3);
    if ((cVar3 == '\0') || (cVar3 == cVar1)) goto LAB_5006280f;
    uVar8 = CONCAT31(uVar11,1);
  }
  if ((((cVar13 == '\0') && (param_5 != 2)) && ((char)uVar8 != '\0')) &&
     (uVar8 = FUN_500625d0(pcVar7,param_1,local_4,param_3,param_4,2), iVar12 = extraout_ECX,
     (char)uVar8 != '\0')) {
    param_2 = *(int *)(*(int *)((int)this + 0xc) + iVar17 * 4);
    iVar15 = *(int *)(*(int *)(iVar15 + 0x45c) + 0x40c);
    puVar5 = FUN_5000a290((void *)(iVar15 + 0x24),&param_1,**(int **)(iVar15 + 0x28),&param_2);
    return CONCAT31((int3)((uint)puVar5 >> 8),1);
  }
LAB_5006287f:
  if ('\0' < (char)param_2) {
    pcVar7 = *(char **)(*(int *)((int)this + 0xc) + -4 + iVar17 * 4);
    if (*pcVar7 == *(char *)this) {
      cVar3 = pcVar7[6];
    }
    else {
      cVar3 = pcVar7[7];
    }
    uVar8 = CONCAT31((int3)((uint)pcVar7 >> 8),cVar3);
    if (((cVar3 == '\0') && (param_5 != 1)) &&
       (uVar8 = FUN_500625d0(this,iVar15,CONCAT31((int3)((uint)iVar12 >> 8),(char)param_2 + -1),
                             param_3,param_4,3), (char)uVar8 != '\0')) {
      iVar15 = *(int *)(*(int *)(iVar15 + 0x45c) + 0x40c);
      param_2 = *(int *)(*(int *)((int)this + 0xc) + iVar17 * 4);
      iVar17 = **(int **)(iVar15 + 0x28);
      piVar4 = *(int **)(iVar17 + 4);
      piVar10 = operator_new(0xc);
      *piVar10 = iVar17;
      if (piVar4 == (int *)0x0) {
        piVar4 = piVar10;
      }
      piVar10[1] = (int)piVar4;
      *(int **)(iVar17 + 4) = piVar10;
      *(int **)piVar10[1] = piVar10;
      if (piVar10 + 2 != (int *)0x0) {
        piVar10[2] = param_2;
      }
      iVar17 = *(int *)(iVar15 + 0x2c) + 1;
      *(int *)(iVar15 + 0x2c) = iVar17;
      return CONCAT31((int3)((uint)iVar17 >> 8),1);
    }
  }
  return uVar8 & 0xffffff00;
}

