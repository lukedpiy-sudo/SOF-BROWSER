// rea decompile_all
// name: FUN_2009cff0
// address: 0x2009cff0
// body: available
// range: 0x2009cff0-0x2009d0e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009cff0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x84);
  iVar2 = FUN_2009ae50(iVar1,param_2,param_1,iVar3);
  if (iVar2 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar2;
    iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + iVar1 * 4) + 0x24) + iVar3 * 0xd8;
    if (DAT_20403c04 != 0) {
      if ((*(int *)(iVar3 + 0x88) == 0) || (*(char *)(iVar3 + 0x8c) == '\0')) {
        (**(code **)(DAT_20403c04 + 0x28))(0xde1);
      }
      else {
        (**(code **)(DAT_20403c04 + 0x2c))(0xde1);
        iVar3 = FUN_200bf4e0((uint)*(ushort *)(iVar3 + 0x8e) + iVar2);
        (**(code **)(DAT_20403c04 + 8))(0xde1,*(undefined4 *)(iVar3 + 0x10));
        if (*(int *)(iVar3 + 0x11c) != DAT_204064e8) {
          *(int *)(iVar3 + 0x11c) = DAT_204064e8;
          DAT_204063e0 = DAT_204063e0 + 1;
          DAT_204063dc = DAT_204063dc + *(int *)(iVar3 + 0x2c) * *(int *)(iVar3 + 0x28) * 2;
          return;
        }
      }
    }
  }
  return;
}

