// rea decompile_all
// name: FUN_5006a3e0
// address: 0x5006a3e0
// body: available
// range: 0x5006a3e0-0x5006a46f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5006a3e0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_1 != (byte *)0x0) {
    iVar4 = 0;
    piVar6 = this;
    do {
      piVar6 = piVar6 + 1;
      pbVar2 = (byte *)(*piVar6 + 4);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_5006a421:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_5006a426;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_5006a421;
        pbVar5 = pbVar5 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_5006a426:
      if (iVar3 == 0) {
        return *(int *)((int)this + iVar4 * 4 + 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x28);
    if (((*param_1 == 99) && (param_1[1] == 0x74)) && (param_1[2] == 0x66)) {
      return *(int *)((int)this + 0x94);
    }
  }
  return 0;
}

