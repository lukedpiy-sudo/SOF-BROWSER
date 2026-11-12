// rea decompile_all
// name: FUN_200e8800
// address: 0x200e8800
// body: available
// range: 0x200e8800-0x200e891e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e88e4) */
/* WARNING: Removing unreachable block (ram,0x200e88ec) */
/* WARNING: Removing unreachable block (ram,0x200e8903) */

undefined4 FUN_200e8800(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_20110228;
  local_c = ExceptionList;
  local_14 = (undefined1 *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_200eafe0(3);
  pcVar2 = (char *)FUN_200eb440(1);
  uVar3 = FUN_200eb440(0);
  pcVar4 = (char *)FUN_20021760(uVar3);
  iVar5 = __strcmpi(pcVar4,pcVar2);
  if (iVar5 == 0) {
    pcVar2 = (char *)FUN_200eb440(2);
    uVar6 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    puVar7 = (undefined1 *)(~uVar6 - 1);
    cVar1 = FUN_2000a6c0(puVar7,1);
    if (cVar1 != '\0') {
      pcVar4 = (char *)0x0;
      for (uVar6 = (uint)puVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar6 = (uint)puVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      }
      *puVar7 = 0;
      local_14 = puVar7;
    }
  }
  FUN_200eb460();
  if (local_14 != (undefined1 *)0x0) {
    FUN_200eaf60(&DAT_201116cc);
  }
  ExceptionList = local_c;
  return 1;
}

