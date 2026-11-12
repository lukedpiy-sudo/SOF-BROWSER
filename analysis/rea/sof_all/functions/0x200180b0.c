// rea decompile_all
// name: FUN_200180b0
// address: 0x200180b0
// body: available
// range: 0x200180b0-0x20018128 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200180b0(undefined4 param_1,char *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  puVar2 = &DAT_2011f938;
  iVar3 = 0;
  pcVar4 = param_2;
  do {
    if (*(char *)(puVar2 + 10) == '\0') {
      puVar2 = (undefined4 *)FUN_20017ea0(param_1,iVar3);
    }
    bVar1 = *(byte *)((int)puVar2 + 0x29);
    puVar2 = puVar2 + 0xb;
    *pcVar4 = s_0123456789ABCDEF_2011fd00[bVar1 >> 4];
    pcVar4[1] = s_0123456789ABCDEF_2011fd00[bVar1 & 0xf];
    pcVar4 = pcVar4 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x16);
  Com_DPrintf(s_Map_checkstring___s_2012000c,param_2);
  return;
}

