// rea decompile_all
// name: FUN_2002f520
// address: 0x2002f520
// body: available
// range: 0x2002f520-0x2002f8e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002f520(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_d0 [64];
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined1 auStack_88 [60];
  undefined1 auStack_4c [4];
  undefined4 local_48 [17];
  undefined4 local_4;
  
  piVar1 = (int *)FUN_20069630(1,0);
  local_48[0] = 0;
  local_4 = 0;
  local_8c = 0;
  if (*(short *)(param_2 + 0xd8) == 0) {
    *(float *)(param_1 + 4) =
         (float)(int)*(short *)(param_2 + 0xd2) * (float)DAT_201c1f1c * 0.001953125 +
         *(float *)(param_2 + 0x84);
    *(float *)(param_1 + 8) =
         (float)(int)*(short *)(param_2 + 0xd4) * (float)DAT_201c1f1c * 0.001953125 +
         *(float *)(param_2 + 0x88);
    *(float *)(param_1 + 0xc) =
         (float)(int)*(short *)(param_2 + 0xd6) * (float)DAT_201c1f1c * 0.001953125 +
         *(float *)(param_2 + 0x8c);
  }
  else {
    if (piVar1 != (int *)0x0) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x24))(*(short *)(param_2 + 0xd8));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(auStack_88);
        FUN_200a0ea0((float)(int)*(short *)(param_2 + 0xd2) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd4) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd6) * DAT_201c1f10 * 0.001953125);
        FUN_200a1100(&local_8c,local_d0);
        (**(code **)*piVar2)(local_48);
      }
    }
    if ((*(short *)(param_2 + 0xda) != 0) && (piVar1 != (int *)0x0)) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x24))(*(short *)(param_2 + 0xda));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(auStack_88);
        FUN_200a0ea0((float)(int)*(short *)(param_2 + 0xd2) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd4) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd6) * DAT_201c1f10 * 0.001953125);
        FUN_200a1100(&local_8c,local_d0);
        (**(code **)*piVar2)(local_48);
      }
    }
    if ((*(short *)(param_2 + 0xdc) != 0) && (piVar1 != (int *)0x0)) {
      piVar2 = (int *)(**(code **)(*piVar1 + 0x24))(*(short *)(param_2 + 0xdc));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(auStack_88);
        FUN_200a0ea0((float)(int)*(short *)(param_2 + 0xd2) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd4) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd6) * DAT_201c1f10 * 0.001953125);
        FUN_200a1100(&local_8c,local_d0);
        (**(code **)*piVar2)(local_48);
      }
    }
    if ((*(short *)(param_2 + 0xde) != 0) && (piVar1 != (int *)0x0)) {
      piVar1 = (int *)(**(code **)(*piVar1 + 0x24))(*(short *)(param_2 + 0xde));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(&local_8c);
        FUN_200a0ea0((float)(int)*(short *)(param_2 + 0xd2) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd4) * DAT_201c1f10 * 0.001953125,
                     (float)(int)*(short *)(param_2 + 0xd6) * DAT_201c1f10 * 0.001953125);
        FUN_200a1100(auStack_90,&stack0xffffff2c);
        (**(code **)*piVar1)(auStack_4c);
        return;
      }
    }
  }
  return;
}

