// rea decompile_all
// name: FUN_2002e6f0
// address: 0x2002e6f0
// body: available
// range: 0x2002e6f0-0x2002ea12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002e6f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int *in_ECX;
  uint uVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined1 *puStack00000004;
  
  if ((int *)in_ECX[9] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x2002e6ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[9] + 8))();
    return;
  }
  uVar4 = in_ECX[8];
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + ((-uVar4 - 1) / 0x2c + 1) * 0x2c;
  }
  if (0x2b < (int)uVar4) {
    uVar4 = uVar4 % 0x2c;
  }
  if ((int)uVar4 < 0xc) {
    iVar1 = 1;
  }
  else {
    iVar1 = ((0x1b < (int)uVar4) - 1 & 0xfffffff0) + 0x1c;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0xc) {
      FUN_2002e440(3,uVar4);
      FUN_2002e440(4,uVar4);
      FUN_2002e440(5,uVar4);
      FUN_2002e440(6,uVar4);
      return;
    }
    if (iVar1 != 0x1c) {
      return;
    }
    FUN_2002e440(7,uVar4);
    FUN_2002e440(8,uVar4);
    FUN_2002e440(9,uVar4);
    FUN_2002e440(10,uVar4);
    return;
  }
  if (9 < (uint)in_ECX[5]) {
    Com_Printf(&DAT_2011dd40);
    goto LAB_2002e87a;
  }
  if (uVar4 == 0) {
    uVar2 = __ftol();
    switch(uVar2) {
    case 0:
      Com_Printf(&DAT_20132c24,&DAT_20132b8c);
      break;
    case 1:
      Com_Printf(&DAT_20132c24,&DAT_20132b88);
      break;
    case 2:
      Com_Printf(&DAT_20132c24,&DAT_20132b84);
      break;
    case 3:
      Com_Printf(&DAT_20132c24,&DAT_20132b80);
      break;
    case 4:
      Com_Printf(&DAT_20132c24,&DAT_20132b7c);
      break;
    default:
      goto switchD_2002e7e8_default;
    }
  }
  else {
switchD_2002e7e8_default:
    Com_Printf(&DAT_20132c24,&DAT_20132b78);
  }
LAB_2002e87a:
  iVar1 = *in_ECX;
  if (iVar1 != 1) {
    if (uVar4 == 1) {
      uVar2 = __ftol();
      switch(uVar2) {
      case 0:
        puVar5 = &DAT_20132b8c;
        break;
      case 1:
        puVar5 = &DAT_20132b88;
        break;
      case 2:
        puVar5 = &DAT_20132b84;
        break;
      case 3:
        puVar5 = &DAT_20132b80;
        break;
      case 4:
        puVar5 = &DAT_20132b7c;
        break;
      default:
        goto switchD_2002e9b4_default;
      }
    }
    else {
switchD_2002e9b4_default:
      puVar5 = &DAT_20132b78;
    }
    Com_Printf(&DAT_20132bdc,puVar5,(&PTR_s_Instant_20132708)[iVar1]);
    goto LAB_2002e9f9;
  }
  fVar6 = (float10)(float)in_ECX[2];
  if (uVar4 == 3) {
    uVar2 = __ftol();
    fVar6 = extraout_ST0;
    switch(uVar2) {
    case 0:
      puStack00000004 = &DAT_20132b8c;
      break;
    case 1:
      puStack00000004 = &DAT_20132b88;
      break;
    case 2:
      puStack00000004 = &DAT_20132b84;
      break;
    case 3:
      puStack00000004 = &DAT_20132b80;
      break;
    case 4:
      puStack00000004 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e8a3_default;
    }
  }
  else {
switchD_2002e8a3_default:
    puStack00000004 = &DAT_20132b78;
  }
  fVar7 = (float10)(float)in_ECX[1];
  if (uVar4 == 2) {
    uVar2 = __ftol();
    fVar7 = extraout_ST0_00;
    fVar6 = extraout_ST1;
    switch(uVar2) {
    case 0:
      puVar5 = &DAT_20132b8c;
      break;
    case 1:
      puVar5 = &DAT_20132b88;
      break;
    case 2:
      puVar5 = &DAT_20132b84;
      break;
    case 3:
      puVar5 = &DAT_20132b80;
      break;
    case 4:
      puVar5 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e8f9_default;
    }
switchD_2002e96c_default:
    puVar3 = &DAT_20132b78;
  }
  else {
switchD_2002e8f9_default:
    puVar5 = &DAT_20132b78;
    if (uVar4 != 1) goto switchD_2002e96c_default;
    uVar2 = __ftol();
    fVar7 = extraout_ST0_01;
    fVar6 = extraout_ST1_00;
    switch(uVar2) {
    case 0:
      puVar3 = &DAT_20132b8c;
      break;
    case 1:
      puVar3 = &DAT_20132b88;
      break;
    case 2:
      puVar3 = &DAT_20132b84;
      break;
    case 3:
      puVar3 = &DAT_20132b80;
      break;
    case 4:
      puVar3 = &DAT_20132b7c;
      break;
    default:
      goto switchD_2002e96c_default;
    }
  }
  Com_Printf(&DAT_20132bf4,puVar3,PTR_s_Continual_2013270c,puVar5,(double)fVar7,puStack00000004,
             (double)fVar6);
LAB_2002e9f9:
  FUN_2002e440();
  FUN_2002e440();
  return;
}

