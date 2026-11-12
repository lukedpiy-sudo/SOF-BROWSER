// rea decompile_all
// name: FUN_2008bfd0
// address: 0x2008bfd0
// body: available
// range: 0x2008bfd0-0x2008c066 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008bfd0(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 4) >> 2;
  }
  if (uVar3 < param_1) {
    uVar3 = param_1;
    if ((int)param_1 < 0) {
      uVar3 = 0;
    }
    puVar4 = operator_new(uVar3 << 2);
    puVar1 = *(undefined4 **)(in_ECX + 8);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 **)(in_ECX + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
    iVar2 = *(int *)(in_ECX + 4);
    *(undefined4 **)(in_ECX + 0xc) = puVar4 + param_1;
    if (iVar2 == 0) {
      *(undefined4 **)(in_ECX + 4) = puVar4;
      *(undefined4 **)(in_ECX + 8) = puVar4;
      return;
    }
    *(undefined4 **)(in_ECX + 4) = puVar4;
    *(undefined4 **)(in_ECX + 8) = puVar4 + (*(int *)(in_ECX + 8) - iVar2 >> 2);
  }
  return;
}

