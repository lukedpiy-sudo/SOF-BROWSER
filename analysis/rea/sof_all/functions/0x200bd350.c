// rea decompile_all
// name: FUN_200bd350
// address: 0x200bd350
// body: available
// range: 0x200bd350-0x200bd42a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_200bd350(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *in_ECX;
  int *piVar2;
  byte *local_4;
  
  local_4 = in_ECX;
  if (*in_ECX == 0) {
    local_4 = (byte *)FUN_200fade8(*(undefined4 *)(in_ECX + 4));
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_4;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(in_ECX + 0x14);
    }
    piVar2 = (int *)**(int **)(in_ECX + 0xc);
    if (piVar2 != *(int **)(in_ECX + 0xc)) {
      do {
        iVar1 = FUN_200facde(piVar2[2],piVar2[3],1,*(undefined4 *)(in_ECX + 4));
        *in_ECX = *in_ECX | iVar1 != 1;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(in_ECX + 0xc));
    }
    if (*in_ECX == 0) {
      FUN_200faf40(*(undefined4 *)(in_ECX + 4),4,0);
      iVar1 = FUN_200facde(&local_4,4,1,*(undefined4 *)(in_ECX + 4));
      *in_ECX = *in_ECX | iVar1 != 1;
      FUN_200faf40(*(undefined4 *)(in_ECX + 4),8,0);
      iVar1 = FUN_200facde(in_ECX + 0x14,4,1,*(undefined4 *)(in_ECX + 4));
      *in_ECX = *in_ECX | iVar1 != 1;
    }
  }
  FUN_200fa9ae(*(undefined4 *)(in_ECX + 4));
  return *in_ECX;
}

