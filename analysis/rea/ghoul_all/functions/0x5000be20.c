// rea decompile_all
// name: FUN_5000be20
// address: 0x5000be20
// body: available
// range: 0x5000be20-0x5000bf1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000be20(void *this,uint param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  if (((param_1 & 0x40) != 0) && ((*(byte *)((int)this + 0x3c) & 1) != 0)) {
    (**(code **)(*(int *)this + 0x20))(param_2,param_3,(int)this + 0x4c);
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = FUN_50107636();
    if ((int)uVar1 % 3 == 1) {
      pcVar5 = s_impact_gore_fall2_wav_5012f754;
    }
    else if ((int)uVar1 % 3 == 2) {
      pcVar5 = s_impact_gore_fall3_wav_5012f76c;
    }
    else {
      pcVar5 = s_impact_gore_fall1_wav_5012f784;
    }
    uVar2 = (*DAT_5015c9f4)(pcVar5,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca48)(param_3,4,uVar2);
  }
  if ((param_1 & 1) != 0) {
    FUN_50083bb0(param_3,3);
  }
  if ((param_1 & 2) != 0) {
    iVar3 = (**(code **)(*param_2 + 0x18c))();
    if (iVar3 != 0) {
      if ((*(char *)((int)this + 100) != '\0') || (*(int *)((int)this + 0x68) != 0)) {
        (**(code **)(*param_2 + 0x168))(*(undefined4 *)((int)this + 0x6c));
      }
      piVar4 = (int *)(**(code **)(*param_2 + 0x18c))();
      (**(code **)(*piVar4 + 0xa4))
                (param_3,CONCAT31((int3)((uint)*(undefined4 *)((int)this + 0x68) >> 8),
                                  *(undefined1 *)((int)this + 100)),
                 *(undefined4 *)((int)this + 0x68),0);
      *(undefined1 *)((int)this + 100) = 0;
    }
  }
  if ((param_1 & 0x400) != 0) {
    piVar4 = (int *)(**(code **)(*param_2 + 0x18c))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xb0))(param_3);
    }
  }
  return;
}

