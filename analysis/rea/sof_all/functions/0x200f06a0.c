// rea decompile_all
// name: FUN_200f06a0
// address: 0x200f06a0
// body: available
// range: 0x200f06a0-0x200f080c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f06a0(char *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  if (*param_1 == '+') {
    local_c = 1;
  }
  else {
    if (*param_1 != '-') {
      return 0;
    }
    local_c = 0;
  }
  param_1 = param_1 + 1;
  iVar5 = 0;
LAB_200f06d0:
  do {
    bVar2 = false;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar6 = iVar5;
    switch((int)cVar1) {
    case 0:
      uVar7 = 0;
      break;
    default:
      goto switchD_200f06ed_caseD_1;
    case 0x2b:
      local_c = 1;
      goto LAB_200f06d0;
    case 0x2d:
      local_c = 0;
      goto LAB_200f06d0;
    case 0x62:
      uVar7 = 1;
      bVar2 = true;
      break;
    case 0x69:
      uVar7 = 2;
      break;
    case 0x6b:
      uVar7 = 6;
      bVar2 = true;
      break;
    case 0x6c:
      uVar7 = 3;
      bVar2 = true;
      break;
    case 0x6d:
      uVar7 = 7;
      break;
    case 0x6e:
      uVar7 = 8;
      break;
    case 0x6f:
      uVar7 = 10;
      bVar2 = true;
      break;
    case 0x70:
      uVar7 = 4;
      break;
    case 0x73:
      uVar7 = 5;
      break;
    case 0x74:
      uVar7 = 9;
      break;
    case 0x75:
      uVar7 = 0xc;
      break;
    case 0x76:
      uVar7 = 0xb;
      bVar2 = true;
      break;
    case 0x77:
      uVar7 = 0xd;
    }
    iVar6 = iVar5 + 0xc;
    iVar3 = FUN_200f9a92(local_8,iVar6);
    if (iVar3 == 0) {
      FUN_200f9d32(local_8);
      return 0;
    }
    puVar4 = (undefined4 *)(iVar3 + iVar5);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[1] = local_c;
    *puVar4 = uVar7;
    local_8 = iVar3;
    if (bVar2) {
      if (param_3 < 1) {
        puVar4[2] = 0;
      }
      else {
        uVar7 = *param_2;
        param_2 = param_2 + 1;
        puVar4[2] = uVar7;
        param_3 = param_3 + -1;
      }
    }
switchD_200f06ed_caseD_1:
    iVar5 = iVar6;
    if (cVar1 == 0) {
      return local_8;
    }
  } while( true );
}

