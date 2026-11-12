// rea decompile_all
// name: FUN_500678c0
// address: 0x500678c0
// body: available
// range: 0x500678c0-0x50067a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_500678c0(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  switch(param_1) {
  case 0:
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    return false;
  case 1:
    iVar3 = FUN_50067640(this,param_2,1);
    return iVar3 != 0;
  case 2:
    iVar3 = FUN_50067640(this,param_2,2);
    return iVar3 != 0;
  case 3:
    break;
  case 4:
    iVar3 = FUN_50067640(this,param_2,2);
    if (iVar3 == 0) {
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
      return false;
    }
    piVar1 = *(int **)(iVar3 + 0xc);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(int *)(piVar4[2] + 4) != param_2) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return true;
        }
      }
      if (piVar4[2] != 0) {
        *(float *)(piVar4[2] + 0xc) = DAT_5015ccdc;
      }
    }
    return true;
  case 5:
    iVar3 = FUN_50067640(this,param_2,2);
    if (iVar3 == 0) {
      *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
      return false;
    }
    piVar1 = *(int **)(iVar3 + 0xc);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(int *)(piVar4[2] + 4) != param_2) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return true;
        }
      }
      iVar3 = piVar4[2];
      if (iVar3 != 0) {
        fVar2 = DAT_5015ccdc - *(float *)(iVar3 + 0x28);
        iVar5 = *(int *)(iVar3 + 0x24) + 1;
        *(float *)(iVar3 + 0x28) = DAT_5015ccdc;
        fVar2 = fVar2 + *(float *)(iVar3 + 0x2c);
        *(int *)(iVar3 + 0x24) = iVar5;
        *(float *)(iVar3 + 0x2c) = fVar2;
        *(float *)(iVar3 + 0x30) = fVar2 / (float)iVar5;
      }
    }
    return true;
  default:
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    return false;
  }
  iVar3 = FUN_50067640(this,param_2,2);
  if (iVar3 == 0) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
    return false;
  }
  piVar1 = *(int **)(iVar3 + 0xc);
  piVar4 = (int *)*piVar1;
  if (piVar4 != piVar1) {
    while (*(int *)(piVar4[2] + 4) != param_2) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar1) {
        return true;
      }
    }
    if ((void *)piVar4[2] != (void *)0x0) {
      FUN_50067360((void *)piVar4[2],DAT_5015ccdc);
    }
  }
  return true;
}

