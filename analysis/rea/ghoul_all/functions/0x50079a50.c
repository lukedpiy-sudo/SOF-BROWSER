// rea decompile_all
// name: FUN_50079a50
// address: 0x50079a50
// body: available
// range: 0x50079a50-0x50079abc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_50079a50(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x450);
  if (iVar1 != 0) {
    uVar2 = FUN_500d1650(iVar1);
    if (uVar2 == 0) {
      if (*(int *)(iVar1 + 0x288) == 0) {
        return 0;
      }
      if (*(int *)(iVar1 + 0x288) == *(int *)(param_1 + 0x14)) goto LAB_50079a89;
    }
    return uVar2 & 0xffffff00;
  }
LAB_50079a89:
  uVar2 = *(uint *)(param_1 + 0x10);
  piVar3 = (int *)0x0;
  if (DAT_5015c508 != 0) {
    piVar4 = (int *)*DAT_5015c504;
    piVar3 = DAT_5015c504;
    if (piVar4 != DAT_5015c504) {
      do {
        FUN_500815d0((void *)piVar4[2],uVar2,4);
        piVar4 = (int *)*piVar4;
        piVar3 = DAT_5015c504;
      } while (piVar4 != DAT_5015c504);
    }
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

