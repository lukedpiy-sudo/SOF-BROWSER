// rea decompile_all
// name: FUN_20097930
// address: 0x20097930
// body: available
// range: 0x20097930-0x20097b9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20097930(int param_1)

{
  int iVar1;
  float fVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar5;
  
  if (*(char *)(in_ECX + 4) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = *(int *)(in_ECX + 0x18) + *(int *)(param_1 + 0x18) * 0xc;
    FUN_200802f0(*(int *)(in_ECX + 0x18) + *(int *)(param_1 + 8) * 0xc);
    FUN_20068250(iVar1);
    FUN_20068280(uVar3);
    FUN_20068220(iVar1);
  }
  else {
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 8);
    *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(in_ECX + 0xc);
    *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(in_ECX + 0x10);
  }
  if (*(char *)(in_ECX + 0x24) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = *(int *)(in_ECX + 0x38) + *(int *)(param_1 + 0x18) * 0xc;
    FUN_200802f0(*(int *)(in_ECX + 0x38) + *(int *)(param_1 + 8) * 0xc);
    FUN_20068250(iVar1);
    FUN_20068280(uVar3);
    FUN_20068220(iVar1);
  }
  else {
    *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0x28);
    *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(in_ECX + 0x2c);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x30);
  }
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x74) = (float)fVar5;
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x150) = (float)fVar5;
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x154) = (float)fVar5;
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x158) = (float)fVar5;
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x168) = (float)fVar5;
  fVar5 = (float10)FUN_200c2e10(param_1);
  *(float *)(in_ECX + 0x16c) = (float)fVar5;
  if (*(char *)(in_ECX + 0xc0) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar1 = *(int *)(in_ECX + 0xd4) + *(int *)(param_1 + 0x18) * 0xc;
    FUN_200802f0(*(int *)(in_ECX + 0xd4) + *(int *)(param_1 + 8) * 0xc);
    FUN_20068250(iVar1);
    FUN_20068280(uVar3);
    FUN_20068220(iVar1);
  }
  else {
    *(undefined4 *)(in_ECX + 0x15c) = *(undefined4 *)(in_ECX + 0xc4);
    *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(in_ECX + 200);
    *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(in_ECX + 0xcc);
  }
  if (*(char *)(in_ECX + 0x110) == '\0') {
    FUN_200682b0(*(int *)(in_ECX + 0x124) + *(int *)(param_1 + 8) * 0xc,
                 *(int *)(in_ECX + 0x124) + *(int *)(param_1 + 0x18) * 0xc,
                 *(undefined4 *)(param_1 + 0x20));
  }
  else {
    *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(in_ECX + 0x114);
    *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(in_ECX + 0x118);
    *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(in_ECX + 0x11c);
  }
  if (*(char *)(in_ECX + 0x130) == '\0') {
    FUN_200682b0(*(int *)(in_ECX + 0x144) + *(int *)(param_1 + 8) * 0xc,
                 *(int *)(in_ECX + 0x144) + *(int *)(param_1 + 0x18) * 0xc,
                 *(undefined4 *)(param_1 + 0x20));
    uVar4 = extraout_var_00;
  }
  else {
    FUN_200802f0(in_ECX + 0x134);
    uVar4 = extraout_var;
  }
  fVar2 = *(float *)(in_ECX + 0x74);
  uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < 0.01) << 8 | (ushort)NAN(fVar2) << 10 |
                         (ushort)(fVar2 == 0.01) << 0xe);
  if (fVar2 >= 0.01) {
    fVar2 = *(float *)(in_ECX + 0x150);
    uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < 0.01) << 8 | (ushort)NAN(fVar2) << 10 |
                           (ushort)(fVar2 == 0.01) << 0xe);
    if (fVar2 >= 0.01) {
      fVar2 = *(float *)(in_ECX + 0x158);
      uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < 0.1) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == 0.1) << 0xe);
      if (fVar2 >= 0.1) {
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
  return uVar3;
}

