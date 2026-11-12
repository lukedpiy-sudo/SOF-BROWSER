// rea decompile_all
// name: FUN_20068480
// address: 0x20068480
// body: available
// range: 0x20068480-0x2006854e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20068480(uint param_1)

{
  int iVar1;
  void *pvVar2;
  int in_ECX;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4)) / 0xc;
  }
  if (uVar3 < param_1) {
    uVar3 = param_1;
    if ((int)param_1 < 0) {
      uVar3 = 0;
    }
    pvVar2 = operator_new(uVar3 * 0xc);
    iVar1 = *(int *)(in_ECX + 8);
    pvVar4 = pvVar2;
    for (iVar5 = *(int *)(in_ECX + 4); iVar5 != iVar1; iVar5 = iVar5 + 0xc) {
      FUN_20087660(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 0xc);
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    iVar1 = *(int *)(in_ECX + 4);
    *(void **)(in_ECX + 0xc) = (void *)((int)pvVar2 + param_1 * 0xc);
    if (iVar1 == 0) {
      *(void **)(in_ECX + 4) = pvVar2;
      *(void **)(in_ECX + 8) = pvVar2;
      return;
    }
    *(void **)(in_ECX + 4) = pvVar2;
    *(void **)(in_ECX + 8) = (void *)((int)pvVar2 + ((*(int *)(in_ECX + 8) - iVar1) / 0xc) * 0xc);
  }
  return;
}

