// rea decompile_all
// name: FUN_500ba9b0
// address: 0x500ba9b0
// body: available
// range: 0x500ba9b0-0x500babf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ba9b0(uint param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(*(int *)(param_1 + 4) + param_2);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0x15:
    goto switchD_500ba9ca_caseD_0;
  case 3:
    if (*puVar3 != 0xffffffff) {
      (*DAT_5015cb48)(0x53545247,0,*puVar3,&param_1);
      *puVar3 = param_1;
      return;
    }
    goto LAB_500babe0;
  case 7:
    if (*puVar3 != 0xffffffff) {
      *puVar3 = DAT_5015cca0 + *puVar3 * 0x464;
      return;
    }
    goto LAB_500babe0;
  case 8:
    *puVar3 = 0;
    return;
  case 9:
    uVar1 = *puVar3;
    if (uVar1 != 0xffffffff) {
      *puVar3 = (uint)((&PTR_s_std_istand_n_a_n_5014de98)[((int)uVar1 >> 0x10) * 2] +
                      (uVar1 & 0xffff) * 0x58);
      return;
    }
    goto LAB_500babe0;
  case 10:
    uVar1 = *puVar3;
    if (uVar1 != 0xffffffff) {
      *puVar3 = (uint)((&PTR_PTR_5014deb8)[((int)uVar1 >> 0x10) * 2] + (uVar1 & 0xffff) * 0x28);
      return;
    }
    goto LAB_500babe0;
  case 0xb:
    if (*puVar3 != 0xffffffff) {
      *puVar3 = *puVar3 * 0x600 + DAT_5015d6c4;
      return;
    }
    goto LAB_500babe0;
  case 0xd:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0xdb)) {
      *puVar3 = (uint)(&PTR_FUN_5014d5b8)[uVar1];
      return;
    }
    break;
  case 0xe:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 5)) {
      *puVar3 = (uint)(&PTR_LAB_5014d924)[uVar1];
      return;
    }
    break;
  case 0xf:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0x3a)) {
      *puVar3 = (uint)(&PTR_LAB_5014d938)[uVar1];
      return;
    }
    break;
  case 0x10:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0x77)) {
      *puVar3 = (uint)(&PTR_LAB_5014da20)[uVar1];
      return;
    }
    break;
  case 0x11:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0xd)) {
      *puVar3 = (uint)(&PTR_FUN_5014dbfc)[uVar1];
      return;
    }
    break;
  case 0x12:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0x38)) {
      *puVar3 = (uint)(&PTR_FUN_5014dc30)[uVar1];
      return;
    }
    break;
  case 0x13:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 0x23)) {
      *puVar3 = (uint)(&PTR_FUN_5014dd10)[uVar1];
      return;
    }
    break;
  case 0x14:
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) goto LAB_500babe0;
    if ((-1 < (int)uVar1) && (uVar1 < 2)) {
      *puVar3 = (uint)(&PTR_FUN_5014dd9c)[uVar1];
      return;
    }
    break;
  default:
    (*DAT_5015cb10)(s_EvaluateField__unknown_field_typ_5014e42c);
    goto switchD_500ba9ca_caseD_0;
  }
  pbVar2 = FUN_500fe1e0(&DAT_5014e3ec);
  FUN_500adb20(pbVar2);
LAB_500babe0:
  *puVar3 = 0;
  return;
switchD_500ba9ca_caseD_0:
  return;
}

