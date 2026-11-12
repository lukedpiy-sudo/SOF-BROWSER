// rea decompile_all
// name: FUN_2000f7a0
// address: 0x2000f7a0
// body: available
// range: 0x2000f7a0-0x2000f9e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000f7a0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  size_t _Size;
  int local_148;
  undefined4 local_144;
  char local_140 [64];
  char local_100 [64];
  undefined1 local_c0 [64];
  char local_80 [64];
  undefined1 local_40 [64];
  
  uVar7 = 0xffffffff;
  pcVar9 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar2 = __strcmpi(param_1 + (~uVar7 - 5),&DAT_2011f114);
  if ((iVar2 == 0) && (**(char **)(DAT_20225074 + 4) != '\0')) {
    pcVar3 = (char *)FUN_200552f0(param_1);
    pcVar9 = local_140;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar9 = cVar1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_20055310(local_140,local_140);
    uVar7 = 0xffffffff;
    pcVar9 = local_140;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_140[~uVar7 + 1] = '\0';
    uVar7 = 0xffffffff;
    pcVar9 = local_140;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    local_140[~uVar7] = '\n';
    uVar7 = 0xffffffff;
    pcVar9 = local_140;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)((int)&local_144 + ~uVar7 + 3) = 0xd;
    Com_sprintf(local_100,0x40,s__s_gpl_2011f10c,*(undefined4 *)(DAT_20225074 + 4));
    iVar2 = 0;
    do {
      pcVar9 = local_100 + iVar2;
      local_80[iVar2] = *pcVar9;
      iVar2 = iVar2 + 1;
    } while (*pcVar9 != '\0');
    puVar4 = (undefined1 *)FUN_200552f0(local_80);
    *puVar4 = 0;
    uVar5 = FUN_20025760(local_80);
    Com_sprintf(local_40,0x40,s__s__s_2011f104,uVar5);
    uVar5 = FUN_20025760(local_100);
    Com_sprintf(local_c0,0x40,s__s__s_2011f104,uVar5);
    iVar2 = FUN_20024df0(local_100);
    if (iVar2 != 0) {
      iVar2 = FS_FOpenFile(local_100,&local_148,0);
      uVar7 = 0xffffffff;
      pcVar9 = local_140;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      _Size = (~uVar7 - 1) + iVar2;
      local_144 = iVar2;
      pvVar6 = _malloc(_Size);
      FUN_200252d0(pvVar6,iVar2,local_148);
      FS_FCloseFile(local_148);
      uVar7 = 0xffffffff;
      pcVar9 = local_140;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcVar9 = local_140;
      pcVar3 = (char *)(local_144 + (int)pvVar6);
      for (uVar8 = ~uVar7 - 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar3 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar3 = pcVar3 + 4;
      }
      for (uVar7 = ~uVar7 - 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar3 = pcVar3 + 1;
      }
      local_148 = FUN_20025270(local_c0,&DAT_2011d688);
      FUN_20025300(pvVar6,_Size,local_148);
      FS_FCloseFile(local_148);
      FUN_200f9d32(pvVar6);
      return;
    }
    FUN_20024d60(local_40);
    local_148 = FUN_20025270(local_c0,&DAT_2011d688);
    if (local_148 != 0) {
      uVar7 = 0xffffffff;
      pcVar9 = local_140;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_20025300(local_140,~uVar7 - 1,local_148);
      FS_FCloseFile(local_148);
    }
  }
  return;
}

