// rea decompile_all
// name: FUN_2002e440
// address: 0x2002e440
// body: available
// range: 0x2002e440-0x2002e69d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002e440(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  int *piVar11;
  float10 fVar12;
  float10 extraout_ST0;
  float10 fVar13;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined1 *local_10;
  undefined1 *local_8;
  
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    Com_Printf(&DAT_2011dd40);
    return;
  }
  iVar6 = param_1 - 1;
  local_8 = &DAT_20132bd8;
  if (*(int *)(in_ECX + 0x68) != iVar6) {
    local_8 = &DAT_20132b78;
  }
  if (param_2 == param_1 * 4 + 3) {
    uVar5 = __ftol();
    switch(uVar5) {
    case 0:
      local_10 = &DAT_20132b8c;
      break;
    case 1:
      local_10 = &DAT_20132b88;
      break;
    case 2:
      local_10 = &DAT_20132b84;
      break;
    case 3:
      local_10 = &DAT_20132b80;
      break;
    case 4:
      local_10 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e4a3_default;
    }
  }
  else {
switchD_2002e4a3_default:
    local_10 = &DAT_20132b78;
  }
  piVar1 = *(int **)(in_ECX + 0x10);
  iVar9 = 0;
  piVar11 = (int *)*piVar1;
  while (piVar11 != piVar1) {
    if (iVar9 == iVar6) {
      iVar9 = piVar11[2];
      goto LAB_2002e515;
    }
    FUN_2008d0b0();
    iVar9 = iVar9 + 1;
    piVar1 = *(int **)(in_ECX + 0x10);
  }
  iVar9 = 0;
LAB_2002e515:
  fVar12 = (float10)*(float *)(iVar9 + 0xc);
  if (param_2 == param_1 * 4 + 2) {
    uVar5 = __ftol();
    fVar12 = extraout_ST0;
    switch(uVar5) {
    case 0:
      puVar8 = &DAT_20132b8c;
      break;
    case 1:
      puVar8 = &DAT_20132b88;
      break;
    case 2:
      puVar8 = &DAT_20132b84;
      break;
    case 3:
      puVar8 = &DAT_20132b80;
      break;
    case 4:
      puVar8 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e53c_default;
    }
  }
  else {
switchD_2002e53c_default:
    puVar8 = &DAT_20132b78;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x10);
  iVar9 = 0;
  puVar3 = (undefined4 *)*puVar2;
  for (puVar4 = puVar3; puVar4 != puVar2; puVar4 = (undefined4 *)*puVar4) {
    if (iVar9 == iVar6) {
      iVar6 = puVar4[2];
      goto LAB_2002e58a;
    }
    iVar9 = iVar9 + 1;
  }
  iVar6 = 0;
LAB_2002e58a:
  fVar13 = (float10)*(float *)(iVar6 + 8);
  if (param_2 == param_1 * 4 + 1) {
    uVar5 = __ftol();
    fVar13 = extraout_ST0_00;
    fVar12 = extraout_ST1;
    switch(uVar5) {
    case 0:
      puVar7 = &DAT_20132b8c;
      break;
    case 1:
      puVar7 = &DAT_20132b88;
      break;
    case 2:
      puVar7 = &DAT_20132b84;
      break;
    case 3:
      puVar7 = &DAT_20132b80;
      break;
    case 4:
      puVar7 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e5b4_default;
    }
  }
  else {
switchD_2002e5b4_default:
    puVar7 = &DAT_20132b78;
  }
  iVar6 = 0;
  for (; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    if (iVar6 == param_1 - 1) {
      piVar11 = (int *)puVar3[2];
      goto LAB_2002e602;
    }
    iVar6 = iVar6 + 1;
  }
  piVar11 = (int *)0x0;
LAB_2002e602:
  if (param_2 == param_1 << 2) {
    uVar5 = __ftol();
    fVar13 = extraout_ST0_01;
    fVar12 = extraout_ST1_00;
    switch(uVar5) {
    case 0:
      puVar10 = &DAT_20132b8c;
      break;
    case 1:
      puVar10 = &DAT_20132b88;
      break;
    case 2:
      puVar10 = &DAT_20132b84;
      break;
    case 3:
      puVar10 = &DAT_20132b80;
      break;
    case 4:
      puVar10 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e624_default;
    }
  }
  else {
switchD_2002e624_default:
    puVar10 = &DAT_20132b78;
  }
  iVar6 = (**(code **)(*piVar11 + 0x14))(puVar7,(double)fVar13,puVar8,(double)fVar12,local_10);
  Com_Printf(&DAT_20132b90,local_8,param_1,puVar10,(&PTR_s_Effect_20132308)[iVar6]);
  return;
}

