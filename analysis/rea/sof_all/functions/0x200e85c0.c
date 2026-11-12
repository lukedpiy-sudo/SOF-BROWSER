// rea decompile_all
// name: FUN_200e85c0
// address: 0x200e85c0
// body: available
// range: 0x200e85c0-0x200e86d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e869a) */
/* WARNING: Removing unreachable block (ram,0x200e86a2) */
/* WARNING: Removing unreachable block (ram,0x200e86b9) */

undefined4 FUN_200e85c0(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_201101e8;
  local_c = ExceptionList;
  local_14 = (undefined1 *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_200eafe0(2);
  uVar2 = FUN_200eb440(0);
  fVar7 = (float10)FUN_200216d0(uVar2);
  if (fVar7 == (float10)0.0) {
    pcVar3 = (char *)FUN_200eb440(1);
    uVar4 = 0xffffffff;
    pcVar6 = pcVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    puVar5 = (undefined1 *)(~uVar4 - 1);
    cVar1 = FUN_2000a6c0(puVar5,1);
    if (cVar1 != '\0') {
      pcVar6 = (char *)0x0;
      for (uVar4 = (uint)puVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = (uint)puVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      *puVar5 = 0;
      local_14 = puVar5;
    }
  }
  FUN_200eb460();
  if (local_14 != (undefined1 *)0x0) {
    FUN_200eaf60(&DAT_201116cc);
  }
  ExceptionList = local_c;
  return 1;
}

