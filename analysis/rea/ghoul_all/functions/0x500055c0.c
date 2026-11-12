// rea decompile_all
// name: FUN_500055c0
// address: 0x500055c0
// body: available
// range: 0x500055c0-0x5000574c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500055c0(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  longlong lVar5;
  int local_4c;
  int iStack_48;
  int iStack_40;
  float afStack_30 [4];
  undefined1 auStack_20 [32];
  
  if ((*(int *)((int)this + 0x1d8) != 1) ||
     ((float)*(int *)((int)this + 0x1dc) <= DAT_5015ccdc - 2.0)) {
    piVar2 = (int *)**(undefined4 **)((int)this + 0x250);
    local_4c = *(int *)((int)this + 0x254);
    if (0 < local_4c) {
      do {
        iVar1 = (**(code **)(*(int *)piVar2[2] + 0x34))
                          (*(undefined4 *)((int)this + 0x1bc),this,param_1);
        if (iVar1 == 0) {
          (**(code **)(*(int *)piVar2[2] + 0x18))
                    (*(undefined4 *)((int)this + 0x1bc),&stack0xffffffac);
          if (iStack_48 != 0) {
            (**(code **)(**(int **)((int)this + 0x22c) + 0xc4))(param_1);
          }
          piVar3 = (int *)*piVar2;
        }
        else {
          (**(code **)(*(int *)piVar2[2] + 0x18))();
          if (iStack_48 != 0) {
            (**(code **)(**(int **)((int)this + 0x22c) + 0xc4))(param_1);
          }
          if ((int *)piVar2[2] != (int *)0x0) {
            FUN_50009f70(&DAT_5018b558,(int *)piVar2[2]);
          }
          piVar2[2] = 0;
          piVar3 = (int *)*piVar2;
          *(int *)piVar2[1] = *piVar2;
          *(int *)(*piVar2 + 4) = piVar2[1];
          FUN_50106b60((undefined *)piVar2);
          *(int *)((int)this + 0x254) = *(int *)((int)this + 0x254) + -1;
        }
        local_4c = local_4c + -1;
        piVar2 = piVar3;
      } while (local_4c != 0);
    }
    lVar5 = __ftol();
    *(int *)((int)this + 0x1dc) = (int)lVar5;
    (**(code **)(*(int *)this + 0x13c))(0xffffffff,afStack_30);
    (**(code **)(*(int *)this + 0x140))(0xffffffff,auStack_20);
    if (((iStack_40 != 0) && (0 < *(int *)(iStack_40 + 0x2ec))) &&
       (afStack_30[0] < DAT_5015ccdc - 1.0)) {
      fVar4 = (float10)(*DAT_5015cb20)(0xbe4ccccd,0x3e4ccccd);
      *(float *)((int)this + 0x114) = (float)(fVar4 + (float10)DAT_5015ccdc);
    }
  }
  return;
}

