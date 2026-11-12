// rea decompile_all
// name: FUN_500e9640
// address: 0x500e9640
// body: available
// range: 0x500e9640-0x500e97c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500e9640(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined2 extraout_var;
  uint uVar4;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  
  piVar3 = (int *)(**(code **)(*param_1 + 0x240))();
  if ((piVar3 != (int *)0x0) && (iVar2 = piVar3[0x15], iVar2 != 0)) {
    fStack_50 = (float)piVar3[0x11];
    fStack_4c = (float)piVar3[0x12];
    fStack_48 = (float)piVar3[0x13];
    if ((30.0 <= ABS(fStack_50 - *(float *)(iVar2 + 4))) ||
       ((30.0 <= ABS(fStack_4c - *(float *)(iVar2 + 8)) ||
        (30.0 <= ABS(fStack_48 - *(float *)(iVar2 + 0xc)))))) {
      (*DAT_5015cac0)((float *)(iVar2 + 4),iVar2 + 0x11c,iVar2 + 0x128,&fStack_50,iVar2,3,auStack_38
                     );
      if (fStack_34 == 1.0) {
        fVar1 = *(float *)(iVar2 + 0x24c);
        uVar4 = CONCAT22(extraout_var,
                         (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
        if (fVar1 == 0.0) {
          fVar1 = *(float *)(iVar2 + 0x250);
          uVar4 = CONCAT22(extraout_var,
                           (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
          if (fVar1 == 0.0) {
            fVar1 = *(float *)(iVar2 + 0x254);
            uVar4 = CONCAT22(extraout_var,
                             (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 0.0) << 0xe);
            if (fVar1 == 0.0) {
              FUN_500fdd70((float *)(iVar2 + 0x10),&fStack_44,(float *)0x0,(float *)0x0);
              FUN_500fe050(&fStack_44);
              fVar1 = (float)piVar3[0x22];
              *(float *)(iVar2 + 0x24c) = fStack_44 * fVar1;
              *(float *)(iVar2 + 0x250) = fStack_40 * fVar1;
              *(float *)(iVar2 + 0x254) = fStack_3c * fVar1;
              uVar4 = (**(code **)(*piVar3 + 0x130))(1);
            }
          }
        }
        return uVar4 & 0xffffff00;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x24c) = 0;
      *(undefined4 *)(iVar2 + 0x250) = 0;
      *(undefined4 *)(iVar2 + 0x254) = 0;
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 0x130))(0);
  }
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

