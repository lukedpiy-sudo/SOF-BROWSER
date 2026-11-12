// rea decompile_all
// name: FUN_50050700
// address: 0x50050700
// body: available
// range: 0x50050700-0x5005082a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_50050700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x74) == 0)) ||
      (iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0x34c), iVar2 == 0)) ||
     (((param_2 == 0 || (*(int *)(param_2 + 0x74) == 0)) ||
      ((iVar1 = *(int *)(*(int *)(param_2 + 0x74) + 0x34c), iVar1 == 0 || (iVar2 == 0)))))) {
    return false;
  }
  switch(*(undefined4 *)(iVar2 + 0x2c)) {
  default:
    uVar3 = 0;
    break;
  case 2:
    uVar3 = 2;
    break;
  case 3:
    uVar3 = 1;
    break;
  case 4:
    uVar3 = 4;
    break;
  case 5:
    uVar3 = 6;
    break;
  case 6:
    uVar3 = 3;
    break;
  case 7:
    uVar3 = 7;
    break;
  case 8:
    uVar3 = 5;
    break;
  case 9:
    uVar3 = 0xb;
    break;
  case 10:
    uVar3 = 8;
    break;
  case 0xb:
    uVar3 = 10;
    break;
  case 0xc:
    uVar3 = 9;
  }
  switch(*(undefined4 *)(iVar1 + 0x2c)) {
  default:
    iVar2 = 0;
    break;
  case 2:
    iVar2 = 2;
    break;
  case 3:
    iVar2 = 1;
    break;
  case 4:
    iVar2 = 4;
    break;
  case 5:
    iVar2 = 6;
    break;
  case 6:
    iVar2 = 3;
    break;
  case 7:
    iVar2 = 7;
    break;
  case 8:
    iVar2 = 5;
    break;
  case 9:
    iVar2 = 0xb;
    break;
  case 10:
    iVar2 = 8;
    break;
  case 0xb:
    iVar2 = 10;
    break;
  case 0xc:
    iVar2 = 9;
  }
  if ((int)uVar3 < iVar2 + -2) {
    return true;
  }
  return uVar3 < 2;
}

