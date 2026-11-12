// rea decompile_all
// name: FUN_200bf700
// address: 0x200bf700
// body: available
// range: 0x200bf700-0x200bf78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bf700(void)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
  int iVar3;
  int local_8;
  int local_4;
  
  FUN_200c18a0(&local_8,in_ECX);
  if (local_8 != DAT_20403678) {
    iVar1 = FUN_20023c40(local_8 + 0xc);
    if (-1 < iVar1) {
      piVar2 = &local_8;
      goto LAB_200bf747;
    }
  }
  piVar2 = &local_4;
  local_4 = DAT_20403678;
LAB_200bf747:
  iVar1 = *piVar2;
  if ((iVar1 != DAT_20403678) &&
     (iVar3 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x58) + -1,
     *(int *)(*(int *)(iVar1 + 0x1c) + 0x58) = iVar3, iVar3 == 0)) {
    iVar3 = *(int *)(iVar1 + 0x1c);
    if (iVar3 != 0) {
      FUN_200bf790();
      FUN_200f9f75(iVar3);
    }
    FUN_20073590(&local_4,iVar1);
  }
  return;
}

