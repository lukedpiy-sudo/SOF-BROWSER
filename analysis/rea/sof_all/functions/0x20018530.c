// rea decompile_all
// name: FUN_20018530
// address: 0x20018530
// body: available
// range: 0x20018530-0x200185f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20018530(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_400 [256];
  
  DAT_20243848 = 0;
  if (DAT_2023f830 != 0) {
    while( true ) {
      bVar4 = false;
      uVar2 = 0;
      if (0 < (int)DAT_2023f830) {
        do {
          cVar1 = *(char *)(uVar2 + (int)DAT_2023f828);
          if (cVar1 == '\"') {
            bVar4 = (bool)(bVar4 ^ 1);
          }
        } while ((((bVar4) || (cVar1 != ';')) && (cVar1 != '\n')) &&
                (uVar2 = uVar2 + 1, (int)uVar2 < (int)DAT_2023f830));
      }
      puVar5 = DAT_2023f828;
      puVar6 = local_400;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined1 *)((int)local_400 + uVar2) = 0;
      if (uVar2 == DAT_2023f830) {
        DAT_2023f830 = 0;
      }
      else {
        DAT_2023f830 = DAT_2023f830 - (uVar2 + 1);
        FUN_200fa360(DAT_2023f828,(undefined1 *)(uVar2 + 1 + (int)DAT_2023f828),DAT_2023f830);
      }
      FUN_200194f0(local_400);
      if (DAT_2023f838 != 0) break;
      if (DAT_2023f830 == 0) {
        return;
      }
    }
    DAT_2023f838 = 0;
  }
  return;
}

