// rea decompile_all
// name: FUN_2005df20
// address: 0x2005df20
// body: available
// range: 0x2005df20-0x2005e127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005df20(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  char acStack_80 [64];
  char acStack_40 [64];
  
  DAT_203a1f24._0_1_ = (undefined1)param_1;
  DAT_203a1f24._1_1_ = (char)param_3;
  if ((DAT_203a1f20 != 0) || (((char)param_3 == '\0' && (FUN_2005db20(), DAT_203a1f20 != 0)))) {
    FUN_2008edd0();
    DAT_20402cd0 = 0;
  }
  fVar12 = (float10)FUN_200216d0();
  if (fVar12 != (float10)0.0) {
    FUN_2005dd40();
  }
  iVar7 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(acStack_80 + iVar7)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  puVar2 = (undefined1 *)FUN_200fa6a0(acStack_80);
  if (puVar2 == (undefined1 *)0x0) {
    Cvar_Set(s_nextserver_20139888);
  }
  else {
    *puVar2 = 0;
    uVar3 = FUN_20055450(s_gamemap___s__20139894);
    Cvar_Set(s_nextserver_20139888,uVar3);
  }
  puVar2 = (undefined1 *)FUN_200fa6a0(acStack_80);
  if (puVar2 == (undefined1 *)0x0) {
    acStack_40[0] = '\0';
  }
  else {
    *puVar2 = 0;
    pcVar4 = puVar2 + 1;
    iVar7 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(acStack_40 + iVar7)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
  }
  uVar6 = 0xffffffff;
  pcVar4 = acStack_80;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (4 < (int)(~uVar6 - 1)) {
    iVar7 = 5;
    bVar11 = true;
    pcVar4 = acStack_80 + (~uVar6 - 5);
    pcVar9 = (char *)&DAT_2011d6a0;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar11 = *pcVar4 == *pcVar9;
      pcVar4 = pcVar4 + 1;
      pcVar9 = pcVar9 + 1;
    } while (bVar11);
    if (bVar11) {
      Cvar_SetValue(s_menu_nostats_2011f7e4,0x3f800000);
      FUN_20013a50(0);
      FUN_200619a0(s_changing_20139878);
      FUN_2005d790(acStack_80,acStack_40,3,param_1,param_3);
      goto LAB_2005e0ca;
    }
  }
  FUN_20013a50(0);
  FUN_200619a0(s_changing_20139878);
  FUN_20062560();
  DAT_20402cd0 = 1;
  FUN_2005d790(acStack_80,acStack_40,2,param_1,param_3);
  FUN_20018280();
LAB_2005e0ca:
  iVar7 = DAT_20396eec;
  iVar8 = 0;
  iVar5 = __ftol();
  if (0 < iVar5) {
    puVar10 = (undefined4 *)(iVar7 + 0x5268);
    do {
      *puVar10 = 0xfffe7961;
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 0x34ab;
      iVar7 = __ftol();
    } while (iVar8 < iVar7);
  }
  FUN_200619a0(s_reconnect_2013986c);
  DAT_20402cd0 = 1;
  return;
}

