// rea decompile_all
// name: FUN_500ba520
// address: 0x500ba520
// body: available
// range: 0x500ba520-0x500ba72d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_500ba520(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  puVar3 = (uint *)(*(int *)(param_1 + 4) + param_2);
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 0x15:
    return uVar2;
  case 3:
    uVar2 = FUN_500ba270((char *)*puVar3);
    *puVar3 = uVar2;
    return uVar2;
  case 6:
    *puVar3 = 0;
    return uVar2;
  case 7:
    if (*puVar3 == 0) {
      *puVar3 = 0xffffffff;
      return 0;
    }
    iVar1 = *puVar3 - DAT_5015cca0;
    *puVar3 = iVar1 / 0x464;
    return iVar1 * 0x749cb29;
  case 8:
    *puVar3 = 0xffffffff;
    return uVar2;
  case 9:
    uVar2 = FUN_500ba400(*puVar3,0x5014de98,4,0x58);
    *puVar3 = uVar2;
    return uVar2;
  case 10:
    uVar2 = FUN_500ba400(*puVar3,0x5014deb8,0xd,0x28);
    *puVar3 = uVar2;
    return uVar2;
  case 0xb:
    if (*puVar3 == 0) {
      *puVar3 = 0xffffffff;
      return 0;
    }
    iVar1 = *puVar3 - DAT_5015d6c4;
    *puVar3 = iVar1 / 0x600;
    return -(iVar1 >> 0x1f);
  case 0xc:
    uVar2 = *puVar3;
    *puVar3 = (uint)(uVar2 != 0);
    return uVar2;
  case 0xd:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_FUN_5014d5b8)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xdb);
    break;
  case 0xe:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_LAB_5014d924)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 5);
    break;
  case 0xf:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_LAB_5014d938)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x3a);
    break;
  case 0x10:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_LAB_5014da20)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x77);
    break;
  case 0x11:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_FUN_5014dbfc)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xd);
    break;
  case 0x12:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_FUN_5014dc30)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x38);
    break;
  case 0x13:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_FUN_5014dd10)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x23);
    break;
  case 0x14:
    if ((undefined *)*puVar3 == (undefined *)0x0) goto LAB_500ba717;
    uVar2 = 0;
    do {
      if ((&PTR_FUN_5014dd9c)[uVar2] == (undefined *)*puVar3) goto LAB_500ba71a;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    break;
  default:
    uVar2 = (*DAT_5015cb10)(s_EnumerateField__unknown_field_ty_5014e3a0);
    return uVar2;
  }
  FUN_500adb20(&DAT_5014e330);
LAB_500ba717:
  uVar2 = 0xffffffff;
LAB_500ba71a:
  *puVar3 = uVar2;
  return uVar2;
}

