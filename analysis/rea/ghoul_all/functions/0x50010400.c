// rea decompile_all
// name: FUN_50010400
// address: 0x50010400
// body: available
// range: 0x50010400-0x50010548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50010400(void *this,uint param_1,int *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  char *pcVar6;
  
  if (((param_1 & 0x40) != 0) && ((*(byte *)((int)this + 0x3c) & 1) != 0)) {
    *(undefined4 *)((int)this + 0x78) = 1;
  }
  if ((param_1 & 0x100) != 0) {
    uVar2 = FUN_50107636();
    if ((int)uVar2 % 3 == 1) {
      pcVar6 = s_impact_gore_fall2_wav_5012f754;
    }
    else if ((int)uVar2 % 3 == 2) {
      pcVar6 = s_impact_gore_fall3_wav_5012f76c;
    }
    else {
      pcVar6 = s_impact_gore_fall1_wav_5012f784;
    }
    uVar3 = (*DAT_5015c9f4)(pcVar6,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca48)(param_3,4,uVar3);
  }
  if ((param_1 & 1) != 0) {
    FUN_50083bb0(param_3,3);
  }
  if (((param_1 & 2) != 0) &&
     (piVar4 = (int *)(**(code **)(*param_2 + 0x18c))(), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0xa4))
              (param_3,CONCAT31((int3)((uint)*(undefined4 *)((int)this + 0x68) >> 8),
                                *(undefined1 *)((int)this + 100)),*(undefined4 *)((int)this + 0x68),
               0);
    *(undefined1 *)((int)this + 100) = 0;
  }
  if ((param_1 & 0x400) != 0) {
    piVar4 = (int *)(**(code **)(*param_2 + 0x18c))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xb0))(param_3);
    }
    param_1 = (uint)((byte)(param_1 >> 8) & 0xfb) << 8;
  }
  if ((param_1 & 0x200) != 0) {
    *(undefined4 *)((int)this + 0x78) = 2;
    uVar2 = FUN_50107636();
    uVar2 = uVar2 & 0x80000001;
    bVar5 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar5) {
      fVar1 = (float)param_2[5] + 20.0;
      param_2[5] = (int)fVar1;
      if (360.0 < fVar1) {
        param_2[5] = (int)(fVar1 - 360.0);
        return;
      }
    }
    else {
      fVar1 = (float)param_2[5] - 20.0;
      param_2[5] = (int)fVar1;
      if (fVar1 < 0.0) {
        param_2[5] = (int)(fVar1 + 360.0);
        return;
      }
    }
  }
  return;
}

