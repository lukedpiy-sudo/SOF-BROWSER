// rea decompile_all
// name: FUN_500d2860
// address: 0x500d2860
// body: available
// range: 0x500d2860-0x500d2bd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d2860(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_retaddr;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  piVar1 = *(int **)(param_1 + 0x164);
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar3 = (int *)(**(code **)(*piVar1 + 0x88))();
  if (piVar3 == (int *)0x0) {
    return;
  }
  FUN_500fdd70((float *)(param_1 + 0x10),&fStack_c,&fStack_3c,&fStack_30);
  fStack_c = fStack_c * 5.0;
  fStack_8 = fStack_8 * 5.0;
  fStack_4 = fStack_4 * 5.0;
  fStack_3c = fStack_3c * 5.0;
  fStack_38 = fStack_38 * 5.0;
  fStack_34 = fStack_34 * 5.0;
  fStack_30 = fStack_30 * 5.0;
  fStack_2c = fStack_2c * 5.0;
  fStack_28 = fStack_28 * 5.0;
  if (param_2 < 1) goto LAB_500d2a84;
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))(s_FLASH_ROCKET1_50152a6c);
  FUN_500d3000((float *)(param_1 + 4),(float *)(param_1 + 0x10),piVar1,puVar4,0,&fStack_24,
               &fStack_18);
  switch(param_2) {
  case 1:
    fStack_48 = fStack_24 + fStack_3c;
    fStack_44 = fStack_20 + fStack_38;
    fStack_1c = fStack_1c + fStack_34;
    break;
  case 2:
    fStack_48 = fStack_24 + fStack_3c;
    fStack_44 = fStack_20 + fStack_38;
    fStack_1c = fStack_1c + fStack_34;
    goto LAB_500d29d6;
  case 3:
    fStack_48 = fStack_24 - fStack_3c;
    fStack_44 = fStack_20 - fStack_38;
    fStack_1c = fStack_1c - fStack_34;
LAB_500d29d6:
    fStack_48 = fStack_48 - fStack_30;
    fStack_44 = fStack_44 - fStack_2c;
    fStack_40 = fStack_1c - fStack_28;
    goto switchD_500d2983_default;
  case 4:
    fStack_48 = fStack_24 - fStack_3c;
    fStack_44 = fStack_20 - fStack_38;
    fStack_1c = fStack_1c - fStack_34;
    break;
  default:
    goto switchD_500d2983_default;
  }
  fStack_48 = fStack_48 + fStack_30;
  fStack_44 = fStack_44 + fStack_2c;
  fStack_40 = fStack_1c + fStack_28;
switchD_500d2983_default:
  iVar2 = *(int *)(iVar2 + 0x1a0);
  if (iVar2 == 0) {
    iVar2 = FUN_500d72d0(param_1);
  }
  fStack_18 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 4);
  fStack_14 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
  fStack_10 = *(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc);
  FUN_500fe050(&fStack_18);
  FUN_500d3620(param_1,(int *)&fStack_48,&fStack_18);
LAB_500d2a84:
  if (param_3 < 1) {
    return;
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x1c))(s_FLASH_ROCKET2_50152a5c);
  FUN_500d3000((float *)(param_1 + 4),(float *)(param_1 + 0x10),piVar1,puVar4,0,&fStack_28,
               &fStack_1c);
  switch(param_3) {
  case 1:
    fStack_24 = fStack_24 + fStack_3c;
    fStack_20 = fStack_20 + fStack_38;
    break;
  case 2:
    fStack_24 = fStack_24 + fStack_3c;
    fStack_20 = fStack_20 + fStack_38;
    goto LAB_500d2b1d;
  case 3:
    fStack_24 = fStack_24 - fStack_3c;
    fStack_20 = fStack_20 - fStack_38;
LAB_500d2b1d:
    fStack_48 = fStack_24 - fStack_30;
    fStack_44 = fStack_20 - fStack_2c;
    goto switchD_500d2aca_default;
  case 4:
    fStack_24 = fStack_24 - fStack_3c;
    fStack_20 = fStack_20 - fStack_38;
    break;
  default:
    goto switchD_500d2aca_default;
  }
  fStack_48 = fStack_24 + fStack_30;
  fStack_44 = fStack_20 + fStack_2c;
switchD_500d2aca_default:
  iVar2 = *(int *)(unaff_retaddr + 0x1a0);
  if (iVar2 == 0) {
    iVar2 = FUN_500d72d0(param_1);
  }
  fStack_1c = *(float *)(iVar2 + 4) - *(float *)(param_1 + 4);
  fStack_18 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
  fStack_14 = *(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc);
  FUN_500fe050(&fStack_1c);
  FUN_500d3620(param_1,(int *)&stack0xffffffb4,&fStack_1c);
  return;
}

