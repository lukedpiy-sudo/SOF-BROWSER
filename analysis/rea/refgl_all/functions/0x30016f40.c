// rea decompile_all
// name: FUN_30016f40
// address: 0x30016f40
// body: available
// range: 0x30016f40-0x30017042 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_30016f40(void *this,int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  cVar2 = *(char *)*param_1;
  puVar4 = this;
  while (cVar2 != '\0') {
    *puVar4 = *(undefined1 *)*param_1;
    iVar5 = *param_1;
    *param_1 = iVar5 + 1;
    puVar4 = puVar4 + 1;
    cVar2 = *(char *)(iVar5 + 1);
  }
  *puVar4 = 0;
  iVar5 = *param_1;
  puVar9 = (undefined4 *)(iVar5 + 1);
  *param_1 = (int)puVar9;
  uVar1 = *puVar9;
  *param_1 = iVar5 + 5;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((int)this + 0x48) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  uVar1 = *(undefined4 *)*param_1;
  *param_1 = (int)((undefined4 *)*param_1 + 1);
  *(undefined4 *)((int)this + 0x50) = uVar1;
  uVar3 = *(undefined1 *)*param_1;
  *param_1 = (int)((undefined1 *)*param_1 + 1);
  uVar7 = 0xffffffff;
  *(undefined1 *)((int)this + 0x54) = uVar3;
  pcVar6 = this;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar8 = 0xffffffff;
  pcVar6 = &DAT_3002fa40;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  if (~uVar8 - 1 < ~uVar7 - 1) {
    uVar7 = 0xffffffff;
    pcVar6 = &DAT_3002fa40;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar8 = 0xffffffff;
    pcVar6 = this;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar5 = __strcmpi((char *)((int)this + ((~uVar8 - 1) - (~uVar7 - 1))),&DAT_3002fa40);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff;
      pcVar6 = &DAT_3002fa40;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar8 = 0xffffffff;
      pcVar6 = this;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      *(undefined1 *)((int)this + ((~uVar8 - 1) - (~uVar7 - 1))) = 0;
    }
  }
  pcVar6 = FUN_30007380(this,2,'\0','\x01');
  *(char **)((int)this + 0x58) = pcVar6;
  if (pcVar6 == (char *)0x0) {
    *(undefined4 *)((int)this + 0x58) = DAT_3008fc64;
  }
  return 1;
}

