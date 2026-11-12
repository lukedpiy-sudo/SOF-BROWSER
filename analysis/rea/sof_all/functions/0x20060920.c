// rea decompile_all
// name: FUN_20060920
// address: 0x20060920
// body: available
// range: 0x20060920-0x200609c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20060920(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  int local_4;
  
  local_4 = 0;
  for (puVar2 = DAT_2024b1d8; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[7]) {
    if ((puVar2[3] & 0xf10) != 0) {
      local_4 = local_4 + 1;
    }
  }
  FUN_20060230(0x4356434e,&local_4,4);
  puVar2 = DAT_2024b1d8;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if ((puVar2[3] & 0xf10) != 0) {
      uVar3 = 0xffffffff;
      pcVar4 = (char *)*puVar2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_20060230(0x43564152,(char *)*puVar2,~uVar3);
      uVar3 = 0xffffffff;
      pcVar4 = (char *)puVar2[1];
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_20060230(0x56414c55,(char *)puVar2[1],~uVar3);
      FUN_20060230(0x464c4753,puVar2 + 3,4);
    }
    puVar2 = (undefined4 *)puVar2[7];
  } while( true );
}

