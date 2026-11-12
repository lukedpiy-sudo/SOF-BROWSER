// rea decompile_all
// name: FUN_200eea90
// address: 0x200eea90
// body: available
// range: 0x200eea90-0x200eecb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eea90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  uVar1 = param_2[3];
  switch(*param_2) {
  case 0:
  case 1:
    (*(code *)param_2[1])(param_1,*(undefined4 *)param_2[2],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 2:
  case 6:
  case 8:
  case 0x11:
  case 0x1a:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 3:
  case 9:
  case 10:
    (*(code *)param_2[1])(param_1,*(undefined4 *)param_2[2],((undefined4 *)param_2[2])[1],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 4:
  case 0x1b:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar1);
    break;
  case 5:
  case 0x12:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 7:
  case 0xf:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0xb:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0xc:
  case 0xd:
    (*(code *)param_2[1])(param_1,*(undefined4 *)param_2[2],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0xe:
  case 0x14:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0x10:
    puVar3 = (undefined4 *)param_2[2];
    pcVar2 = (code *)param_2[1];
    FUN_200ef590(param_1,puVar3[1]);
    (*pcVar2)(param_1,*puVar3,puVar3[1],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])(param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0x15:
    puVar3 = (undefined4 *)param_2[2];
    (*(code *)param_2[1])
              (param_1,*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],puVar3[5],puVar3[6],uVar1);
    FUN_200edbb0(param_2);
    return;
  case 0x19:
    (*(code *)param_2[1])(param_1,*(undefined4 *)param_2[2],((undefined4 *)param_2[2])[1],uVar1);
    FUN_200edbb0(param_2);
    return;
  }
  FUN_200edbb0(param_2);
  return;
}

