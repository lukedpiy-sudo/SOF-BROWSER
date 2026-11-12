// rea decompile_all
// name: FUN_2008ee10
// address: 0x2008ee10
// body: available
// range: 0x2008ee10-0x2008eed5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2008ee10(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if ((DAT_20403c10 & 1) == 0) {
    DAT_20403c10 = DAT_20403c10 | 1;
    FUN_20091ed0(0,0,0);
    FUN_200f9f16(&LAB_2008eee0);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(param_2 + 8) < iVar2) {
    return 0;
  }
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        puVar5 = &DAT_201116cc;
      }
      else {
        puVar5 = (undefined1 *)(*(int *)(param_1 + 4) + iVar6);
      }
      uVar1 = *puVar5;
      cVar3 = (**(code **)(DAT_20403c14 + 8))(uVar1);
      cVar4 = (**(code **)(DAT_20403c14 + 8))(uVar1);
      if (cVar4 != cVar3) {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return 1;
}

