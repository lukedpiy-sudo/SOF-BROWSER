// rea decompile_all
// name: FUN_20035dc0
// address: 0x20035dc0
// body: available
// range: 0x20035dc0-0x20036010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20035dc0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  
  uVar7 = 0;
  if (((*(float *)(DAT_20364360 + 0x18) != 0.0) || (*(float *)(DAT_20364368 + 0x18) != 0.0)) ||
     (*(float *)(DAT_20321f54 + 0x18) != 0.0)) {
    if (*(float *)(DAT_20364360 + 0x18) == 0.0) {
      fVar10 = *(float *)(DAT_20364368 + 0x18) * -1.0;
    }
    else {
      fVar10 = *(float *)(DAT_20364360 + 0x18);
    }
    uVar7 = __ftol(fVar10);
    uVar7 = FUN_200339c0(uVar7,fVar10);
    Cvar_SetValue(s_fx_partadd_20132c54,0);
    Cvar_SetValue(s_fx_partsub_20132c48,0);
    Cvar_SetValue(s_fx_partadjust_20132c38,0);
  }
  bVar9 = true;
  pcVar6 = *(char **)(DAT_20321d00 + 4);
  iVar2 = 2;
  pcVar5 = pcVar6;
  pcVar8 = &DAT_2011c4ac;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *pcVar5 == *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (!bVar9) {
    if ((*(int *)(in_ECX + 0x30) == 3) || (*(int *)(in_ECX + 0x30) == 4)) {
      FUN_200fabac(in_ECX + 0x60,&DAT_2011d114,pcVar6);
    }
    else {
      pcVar5 = (char *)(in_ECX + 0x60);
      FUN_200fabac(pcVar5,s_textures_sprites__s_20133a28,pcVar6);
      uVar3 = 0xffffffff;
      pcVar6 = pcVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_2011f2f0;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 < ~uVar3 - 1) {
        uVar3 = 0xffffffff;
        pcVar6 = &DAT_2011f2f0;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = 0xffffffff;
        pcVar6 = pcVar5;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar2 = __strcmpi((char *)((in_ECX - (~uVar3 - 1)) + ~uVar4 + 0x5f),&DAT_2011f2f0);
        if (iVar2 == 0) {
          uVar3 = 0xffffffff;
          pcVar6 = &DAT_2011f2f0;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          uVar4 = 0xffffffff;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          *(undefined1 *)((in_ECX - (~uVar3 - 1)) + ~uVar4 + 0x5f) = 0;
        }
      }
    }
    FUN_200219e0(DAT_20321d00,&DAT_2011c4ac);
    pcVar5 = &DAT_2011c4ac;
    pcVar6 = *(char **)(DAT_20321d00 + 4);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  iVar2 = 2;
  bVar9 = true;
  pcVar6 = *(char **)(DAT_20364364 + 4);
  pcVar5 = &DAT_2011c4ac;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *pcVar6 == *pcVar5;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar9);
  if (!bVar9) {
    FUN_200fabac(in_ECX + 0x100,&DAT_2011d114,*(char **)(DAT_20364364 + 4));
    FUN_200219e0(DAT_20364364,&DAT_2011c4ac);
    pcVar5 = &DAT_2011c4ac;
    pcVar6 = *(char **)(DAT_20364364 + 4);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  iVar2 = 2;
  bVar9 = true;
  pcVar6 = *(char **)(DAT_20364374 + 4);
  pcVar5 = &DAT_2011c4ac;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar9 = *pcVar6 == *pcVar5;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar9);
  if (!bVar9) {
    FUN_200fabac(in_ECX + 0x144,&DAT_2011d114,*(char **)(DAT_20364374 + 4));
    FUN_200219e0(DAT_20364374,&DAT_2011c4ac);
    pcVar5 = &DAT_2011c4ac;
    pcVar6 = *(char **)(DAT_20364374 + 4);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  return uVar7;
}

