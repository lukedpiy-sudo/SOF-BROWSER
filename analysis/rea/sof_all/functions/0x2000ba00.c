// rea decompile_all
// name: FUN_2000ba00
// address: 0x2000ba00
// body: available
// range: 0x2000ba00-0x2000bc1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000ba00(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int local_24;
  char local_20 [32];
  
  if (DAT_201c1f00 != 1) {
    if ((DAT_201e7560 != 0) && (*(float *)(DAT_201e7560 + 0x18) != 0.0)) {
      local_24 = FUN_20055930();
      local_24 = local_24 - DAT_201e7590;
      if (0 < local_24) {
        Com_Printf(s__i_frames___3_1f_seconds___3_1f_f_2011d938,DAT_201e758c,
                   (double)local_24 * 0.001,((double)DAT_201e758c * 1000.0) / (double)local_24);
      }
    }
    puVar6 = &DAT_2015ee70;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    DAT_201e9008 = 0;
    DAT_201e900c = 0;
    _DAT_201e9010 = 0;
    FUN_200c7380();
    DAT_201c1fac = 0;
    if (DAT_201ca514 != 0) {
      local_24 = -1;
      FUN_20025300(&local_24,4,DAT_201ca51c);
      FS_FCloseFile(DAT_201ca51c);
      DAT_201ca51c = 0xffffffff;
      DAT_201ca514 = 0;
      Com_Printf(s_Stopped_demo__2011d620);
    }
    local_20[0] = '\x04';
    iVar3 = 0;
    do {
      cVar1 = s_disconnect_2011d92c[iVar3];
      local_20[iVar3 + 1] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_2004d400(&DAT_201c23b8,~uVar4 - 1,local_20);
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_2004d400(&DAT_201c23b8,~uVar4 - 1,local_20);
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_2004d400(&DAT_201c23b8,~uVar4 - 1,local_20);
    (*DAT_20390d4c)();
    FUN_20030a40();
    FUN_2008edb0();
    FUN_20057f40(1);
    puVar6 = &DAT_201e7588;
    for (iVar3 = 0xf6b0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = &DAT_2015eef8;
    for (iVar3 = 0x18c00; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_2001e730(&DAT_201c2400);
    FUN_20012db0(0);
    if (DAT_201ca404 != 0) {
      *(undefined4 *)(DAT_20225068 + 0x18) = 0;
      **(undefined1 **)(_DAT_2015ee48 + 4) = 0;
      **(undefined1 **)(DAT_2015ee5c + 4) = 0;
      FUN_200fa9ae();
      DAT_201ca404 = 0;
    }
    if ((short)param_1 != 0) {
      uVar2 = FUN_20058110(param_1);
      Cvar_Set(s_menu_dc_reason_2011d91c,uVar2);
      FUN_20018180();
    }
    DAT_201c1f00 = 1;
  }
  return;
}

