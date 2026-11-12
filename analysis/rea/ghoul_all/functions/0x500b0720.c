// rea decompile_all
// name: FUN_500b0720
// address: 0x500b0720
// body: available
// range: 0x500b0720-0x500b07bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b0720(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_3 + 0x74);
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x1d8) == 0) {
      *(int *)(iVar5 + 0x308) = *(int *)(iVar5 + 0x308) + *(int *)(param_1 + 0x318);
    }
    else {
      pbVar3 = FUN_500fe320((byte *)(iVar5 + 0xcc),(byte *)s_teamname_50144e40);
      if (pbVar3 != (byte *)0x0) {
        pbVar4 = *(byte **)(param_1 + 0x1d8);
        do {
          bVar2 = *pbVar4;
          bVar6 = bVar2 < *pbVar3;
          if (bVar2 != *pbVar3) {
LAB_500b0788:
            iVar5 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_500b078d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar6 = bVar2 < pbVar3[1];
          if (bVar2 != pbVar3[1]) goto LAB_500b0788;
          pbVar4 = pbVar4 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_500b078d:
        if (iVar5 == 0) {
          piVar1 = (int *)(*(int *)(param_3 + 0x74) + 0x308);
          *piVar1 = *piVar1 + *(int *)(param_1 + 0x318);
          return;
        }
      }
    }
  }
  return;
}

