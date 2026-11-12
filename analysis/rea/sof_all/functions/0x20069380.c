// rea decompile_all
// name: FUN_20069380
// address: 0x20069380
// body: available
// range: 0x20069380-0x200693fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20069380(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  
  iVar5 = param_2;
  pcVar8 = *(char **)(param_2 + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar6 = 0xffffffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pbVar2 = (byte *)*param_1;
  iVar7 = ~uVar6 - 1;
  param_2 = iVar7;
  iVar3 = FUN_200facde(&param_2,4,1,*(undefined4 *)(pbVar2 + 4));
  *pbVar2 = *pbVar2 | iVar3 != 1;
  if (iVar7 != 0) {
    puVar4 = *(undefined1 **)(iVar5 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    pbVar2 = (byte *)*param_1;
    iVar5 = FUN_200facde(puVar4,1,iVar7,*(undefined4 *)(pbVar2 + 4));
    *pbVar2 = *pbVar2 | iVar5 != iVar7;
  }
  return;
}

