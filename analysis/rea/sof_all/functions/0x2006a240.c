// rea decompile_all
// name: FUN_2006a240
// address: 0x2006a240
// body: available
// range: 0x2006a240-0x2006a320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_2006a240(uint param_1)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  if ((DAT_20403670 & 1) == 0) {
    DAT_20403670 = DAT_20403670 | 1;
    DAT_20403a34 = (undefined1)param_1;
    uVar2 = 0xffffffff;
    pcVar5 = &DAT_2015ee44;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    DAT_20403a38 = (undefined4 *)0x0;
    _DAT_20403a3c = 0;
    _DAT_20403a40 = 0;
    cVar1 = FUN_2000a6c0(uVar2,1);
    if (cVar1 != '\0') {
      puVar4 = (undefined4 *)&DAT_2015ee44;
      puVar6 = DAT_20403a38;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      _DAT_20403a3c = uVar2;
      *(undefined1 *)((int)DAT_20403a38 + uVar2) = 0;
    }
    FUN_200f9f16(&LAB_2006a330);
  }
  if (*(int *)(in_ECX + 0x14) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2;
  }
  if ((param_1 & 0xffff) < uVar2) {
    return *(undefined1 **)(*(int *)(in_ECX + 0x14) + (param_1 & 0xffff) * 4);
  }
  return &DAT_2015ee44;
}

