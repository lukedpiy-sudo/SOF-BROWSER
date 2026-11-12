// rea decompile_all
// name: FUN_20069f10
// address: 0x20069f10
// body: available
// range: 0x20069f10-0x20069fc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20069f10(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  char *pcVar6;
  int local_4;
  
  iVar3 = param_1;
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_4 = in_ECX;
  iVar2 = FUN_20023c90(0,*(undefined4 *)(param_1 + 8),&DAT_2015ee44,~uVar5 - 1);
  if (iVar2 != 0) {
    FUN_200c18a0(&param_1,iVar3);
    if ((param_1 == *(int *)(in_ECX + 4)) || (iVar3 = FUN_20023c40(param_1 + 0xc), iVar3 < 0)) {
      piVar4 = &local_4;
      local_4 = *(int *)(in_ECX + 4);
    }
    else {
      piVar4 = &param_1;
    }
    iVar3 = *piVar4;
    if (iVar3 != *(int *)(in_ECX + 4)) {
      iVar2 = *(int *)(iVar3 + 0x20) + -1;
      *(int *)(iVar3 + 0x20) = iVar2;
      if ((DAT_20156cac == '\0') && (iVar2 == 0)) {
        iVar2 = *(int *)(iVar3 + 0x1c);
        if (iVar2 != 0) {
          FUN_200a6330();
          FUN_200f9f75(iVar2);
        }
        FUN_20049770(&param_1,iVar3);
      }
    }
    return;
  }
  return;
}

