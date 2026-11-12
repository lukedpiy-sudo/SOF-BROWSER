// rea decompile_all
// name: FUN_2005d790
// address: 0x2005d790
// body: available
// range: 0x2005d790-0x2005db13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005d790(char *param_1,undefined4 param_2,int param_3,char param_4,undefined1 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  float10 fVar14;
  
  if (param_4 != '\0') {
    Cvar_Set(s_paused_2011d4b0,&DAT_2011c4ac);
  }
  Com_Printf(&DAT_201397a4);
  Com_DPrintf(s_SpawnServer___s_20139790,param_1);
  if (DAT_203fac48 != 0) {
    FS_FCloseFile(DAT_203fac48);
  }
  DAT_20396ee8 = DAT_20396ee8 + 1;
  DAT_203a1f20 = 0;
  FUN_2001caf0(0);
  puVar10 = &DAT_203a1f20;
  for (iVar5 = 0x1634c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  DAT_20396de4 = 0;
  DAT_203a1f24._1_1_ = param_5;
  DAT_203a1f24._0_1_ = param_4;
  pcVar6 = *(char **)(DAT_203fec84 + 4);
  pcVar7 = &DAT_203b98b4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6[(int)&DAT_203a2374 - (int)param_1] = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2001e700(&DAT_203f6c34,&DAT_203f6c48,DAT_20136a0c);
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6[(int)&DAT_203a1f34 - (int)param_1] = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar11 = 0;
  iVar5 = __ftol();
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      if (2 < *(int *)(iVar5 + DAT_20396eec)) {
        *(undefined4 *)(iVar5 + DAT_20396eec) = 2;
      }
      *(undefined4 *)(iVar5 + 0x204 + DAT_20396eec) = 0xffffffff;
      iVar11 = iVar11 + 1;
      iVar5 = iVar5 + 0xd2ac;
      iVar2 = __ftol();
    } while (iVar11 < iVar2);
  }
  DAT_203a1f28 = 1000;
  FUN_20017e50();
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6[(int)&DAT_203a1f34 - (int)param_1] = cVar1;
    pcVar6 = pcVar6 + 1;
    pcVar7 = param_1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar7;
    pcVar7[(int)&DAT_203a2374 - (int)param_1] = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar6 = *(char **)(DAT_203fec84 + 4);
  pcVar7 = &DAT_203b98b4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (param_3 == 2) {
    Com_sprintf(&DAT_203a2c74,0x40,s_maps__s_bsp_20139784,param_1);
    DAT_203a1f78 = FUN_2001a000(&DAT_203a2c74,0);
    FUN_200180b0(&DAT_203a2c74,&DAT_203a24f4);
  }
  else {
    DAT_203a1f78 = FUN_2001a000(&DAT_2011d6a0,0);
  }
  FUN_20063be0();
  iVar11 = 1;
  iVar5 = FUN_2001a5a0();
  if (1 < iVar5) {
    puVar12 = &DAT_203a2cb4;
    do {
      Com_sprintf(puVar12,0x40,&DAT_20139780,iVar11);
      uVar3 = FUN_2001a530(puVar12);
      (&DAT_203a1f78)[iVar11] = uVar3;
      iVar11 = iVar11 + 1;
      puVar12 = puVar12 + 0x40;
      iVar5 = FUN_2001a5a0();
    } while (iVar11 < iVar5);
  }
  DAT_203a1f20 = 1;
  FUN_2001caf0(1);
  puVar10 = (undefined4 *)(DAT_20396dd8 + 0xc);
  uVar3 = FUN_2001a5b0(param_2);
  (*(code *)*puVar10)(&DAT_203a1f34,uVar3);
  fVar14 = (float10)(**(code **)(DAT_20396dd8 + 0x5c))(0);
  DAT_203a1f2c = (float)fVar14;
  fVar14 = (float10)(**(code **)(DAT_20396dd8 + 0x5c))(1);
  DAT_203a1f2c = (float)fVar14;
  DAT_203a1f20 = param_3;
  FUN_2001caf0(param_3);
  iVar5 = 1;
  if (1 < *(int *)(DAT_20396dd8 + 0x68)) {
    piVar8 = &DAT_203d9ca8;
    iVar11 = DAT_20396dd8;
    do {
      iVar2 = *(int *)(iVar11 + 100) * iVar5;
      piVar9 = (int *)(iVar2 + *(int *)(iVar11 + 0x60));
      if ((*(int *)(iVar2 + 0x78 + *(int *)(iVar11 + 0x60)) != 0) &&
         ((((piVar9[8] != 0 || (piVar9[0xf] != 0)) || (piVar9[0xc] != 0)) ||
          (iVar2 = FUN_2001f2d0(piVar9), iVar11 = DAT_20396dd8, iVar2 != 0)))) {
        *piVar9 = iVar5;
        piVar13 = piVar8;
        for (iVar2 = 0x1d; iVar11 = DAT_20396dd8, iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar13 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 0x1d;
    } while (iVar5 < *(int *)(iVar11 + 0x68));
  }
  if (*(float *)(DAT_20249618 + 0x18) != 0.0) {
    FUN_20017e50();
    piVar8 = (int *)FUN_20069630(0,0);
    (**(code **)(*piVar8 + 0x1c))();
  }
  FUN_200221b0(s_mapname_2011f878,&DAT_203a1f34,0xc);
  FUN_200216c0(1);
  if ((DAT_203a1f18 == 0x64c0fc54) && (DAT_203a1f1c == -0x1533d116)) {
    uVar4 = __ftol();
    uVar4 = uVar4 | 0x20;
  }
  else {
    uVar4 = __ftol();
    uVar4 = uVar4 & 0xffffffdf;
  }
  uVar3 = FUN_20055450(&DAT_2011d0b4,uVar4);
  FUN_20022170(s_sv_violence_201373cc,uVar3);
  FUN_200216c0(0);
  Com_Printf(s__________________________________20139758);
  return;
}

