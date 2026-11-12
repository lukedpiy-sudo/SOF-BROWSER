// rea decompile_all
// name: FUN_20057b40
// address: 0x20057b40
// body: available
// range: 0x20057b40-0x20057bfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20057b40(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_4;
  
  local_4 = 0;
  piVar2 = (int *)*DAT_20390db4;
  while (piVar2 != DAT_20390db4) {
    if ((*(byte *)(piVar2[4] + 5) & 2) != 0) {
      local_4 = local_4 + 1;
    }
    FUN_20085230();
  }
  FUN_20060230(0x53504e4d,&local_4,4);
  piVar2 = (int *)*DAT_20390db4;
  do {
    if (piVar2 == DAT_20390db4) {
      return;
    }
    iVar3 = piVar2[4];
    if ((*(byte *)(iVar3 + 5) & 2) != 0) {
      pcVar4 = *(char **)(iVar3 + 0xc);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      puVar6 = &DAT_201116cc;
      if (*(undefined1 **)(iVar3 + 0xc) != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)(iVar3 + 0xc);
      }
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_20060230(0x53504944,puVar6,~uVar5);
    }
    FUN_20085230();
  } while( true );
}

