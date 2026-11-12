// rea decompile_all
// name: FUN_2005af90
// address: 0x2005af90
// body: available
// range: 0x2005af90-0x2005b10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005af90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_2001cb00(param_3,0x15);
  iVar6 = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_1 + 0xec);
  }
  iVar3 = 0;
  iVar4 = param_3;
  local_c = iVar6;
  do {
    if (iVar3 < *(int *)(param_2 + 0xec)) {
LAB_2005afed:
      iVar1 = (*(int *)(param_2 + 0xf0) + iVar3) % DAT_20396ef0;
      iVar4 = DAT_20396ef8 + iVar1 * 0x74;
      iVar1 = *(int *)(DAT_20396ef8 + iVar1 * 0x74);
    }
    else {
      if (local_8 <= iVar6) {
        FUN_2001cb70(param_3,0);
        return;
      }
      if (iVar3 < *(int *)(param_2 + 0xec)) goto LAB_2005afed;
      iVar1 = 9999;
    }
    if (iVar6 < local_8) {
      iVar2 = (*(int *)(param_1 + 0xf0) + iVar6) % DAT_20396ef0;
      iVar5 = *(int *)(DAT_20396ef8 + iVar2 * 0x74);
      local_4 = DAT_20396ef8 + iVar2 * 0x74;
    }
    else {
      iVar5 = 9999;
    }
    if (iVar1 == iVar5) {
      FUN_2001d4f0(local_4,iVar4,param_3,0);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1;
      local_c = iVar6;
    }
    else if (iVar1 < iVar5) {
      FUN_2001d4f0(&DAT_203d9c34 + iVar1 * 0x74,iVar4,param_3,1);
      iVar3 = iVar3 + 1;
    }
    else if (iVar5 < iVar1) {
      uVar7 = 0x800;
      if (0xff < iVar5) {
        uVar7 = 0x1000800;
      }
      FUN_2001d210(param_3,uVar7);
      if ((uVar7 & 0x1000000) == 0) {
        FUN_2001cb00(param_3,iVar5);
      }
      else {
        FUN_2001cb70(param_3);
      }
      iVar6 = local_c + 1;
      local_c = iVar6;
    }
  } while( true );
}

