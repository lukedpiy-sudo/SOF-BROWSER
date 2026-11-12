// rea decompile_all
// name: FUN_200edbb0
// address: 0x200edbb0
// body: available
// range: 0x200edbb0-0x200edee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200edbe1 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edc2d to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edc5c to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edca0 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edd04 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edd22 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200eddd3 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200ede03 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200ede62 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200ede80 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x200edee4 to 0x200f9d32 FUN_200f9d32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200edbb0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  switch(*param_1) {
  case 0:
    FUN_200f9d32(*(undefined4 *)param_1[2]);
    FUN_200f9d32();
    return;
  case 1:
  case 0xc:
    FUN_200f9d32(*(undefined4 *)param_1[2]);
    FUN_200f9d32();
    return;
  case 2:
  case 10:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    uVar1 = puVar4[1];
    break;
  case 3:
  case 0xb:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    uVar1 = puVar4[1];
    break;
  case 4:
  case 5:
  case 8:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    FUN_200f9d32(puVar4[1]);
    FUN_200f9d32(puVar4[2]);
    FUN_200f9d32();
    return;
  case 6:
  case 9:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    uVar1 = puVar4[1];
    break;
  case 7:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    FUN_200f9d32(puVar4[1]);
    FUN_200f9d32(puVar4[3]);
    FUN_200f9d32(puVar4[4]);
    FUN_200f9d32();
    return;
  default:
    goto switchD_200edbc2_caseD_d;
  case 0xe:
    puVar4 = (undefined4 *)param_1[2];
    goto LAB_200edec5;
  case 0xf:
    iVar3 = param_1[2];
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 4)) {
      do {
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar3 + 8) + iVar2 * 4));
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 4));
    }
    FUN_200f9d32(*(undefined4 *)(iVar3 + 8));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0x10));
    FUN_200f9d32();
    return;
  case 0x10:
    FUN_200f9d32(*(undefined4 *)(param_1[2] + 4));
    FUN_200f9d32();
    return;
  case 0x11:
  case 0x17:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    uVar1 = *(undefined4 *)(iVar3 + 8);
    break;
  case 0x12:
  case 0x1a:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    uVar1 = *(undefined4 *)(iVar3 + 8);
    break;
  case 0x13:
    puVar4 = (undefined4 *)param_1[2];
    uVar1 = puVar4[1];
    goto LAB_200edec8;
  case 0x14:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 8)) {
      do {
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 8));
    }
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
    uVar1 = *(undefined4 *)(iVar3 + 0x10);
    break;
  case 0x15:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 8));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0x10));
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      do {
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar3 + 0x18) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 0x14));
    }
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0x18));
    FUN_200f9d32();
    return;
  case 0x16:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 8));
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
    FUN_200f9d32();
    return;
  case 0x18:
    iVar3 = param_1[2];
    FUN_200f9d32(*(undefined4 *)(iVar3 + 4));
    iVar2 = 0;
    if (0 < *(int *)(iVar3 + 8)) {
      do {
        FUN_200f9d32(*(undefined4 *)(*(int *)(iVar3 + 0xc) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar3 + 8));
    }
    FUN_200f9d32(*(undefined4 *)(iVar3 + 0xc));
    FUN_200f9d32();
    return;
  case 0x19:
    FUN_200f9d32(*(undefined4 *)(param_1[2] + 4));
    FUN_200f9d32();
    return;
  case 0x1b:
    puVar4 = (undefined4 *)param_1[2];
    FUN_200f9d32(*puVar4);
    iVar3 = 0;
    if (0 < (int)puVar4[1]) {
      do {
        FUN_200f9d32(*(undefined4 *)(puVar4[2] + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)puVar4[1]);
    }
LAB_200edec5:
    uVar1 = puVar4[2];
LAB_200edec8:
    FUN_200f9d32(uVar1);
    uVar1 = puVar4[3];
  }
  FUN_200f9d32(uVar1);
switchD_200edbc2_caseD_d:
  FUN_200f9d32();
  return;
}

