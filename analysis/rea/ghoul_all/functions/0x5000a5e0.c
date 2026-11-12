// rea decompile_all
// name: FUN_5000a5e0
// address: 0x5000a5e0
// body: available
// range: 0x5000a5e0-0x5000a7e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000a5e0(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *local_4;
  
  piVar3 = param_2;
  bVar6 = true;
  piVar1 = *(int **)((int)this + 4);
  piVar8 = piVar1;
  piVar2 = (int *)piVar1[1];
  while (piVar2 != *(int **)((int)this + 8)) {
    bVar6 = *param_2 < piVar2[3];
    piVar8 = piVar2;
    if (bVar6) {
      piVar2 = (int *)*piVar2;
    }
    else {
      piVar2 = (int *)piVar2[2];
    }
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    local_4 = this;
    param_2 = (int *)FUN_5006b2e0(piVar8,0);
    *param_2 = *(int *)((int)this + 8);
    param_2[2] = *(int *)((int)this + 8);
    FUN_500a6f20(param_2 + 3,piVar3);
    piVar1 = param_2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    if (((piVar8 == *(int **)((int)this + 4)) || (piVar2 != *(int **)((int)this + 8))) ||
       (*piVar3 < piVar8[3])) {
      *piVar8 = (int)param_2;
      piVar2 = *(int **)((int)this + 4);
      if (piVar8 == piVar2) {
        piVar2[1] = (int)param_2;
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
      else if (piVar8 == (int *)*piVar2) {
        *piVar2 = (int)param_2;
      }
    }
    else {
      piVar8[2] = (int)param_2;
      if (piVar8 == *(int **)(*(int *)((int)this + 4) + 8)) {
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
    }
    piVar8 = param_2;
    if (param_2 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar2 = (int *)piVar8[1];
        if ((char)piVar2[5] != '\0') break;
        piVar3 = *(int **)piVar2[1];
        if (piVar2 == piVar3) {
          iVar4 = ((undefined4 *)piVar2[1])[2];
          if (*(char *)(iVar4 + 0x14) == '\0') {
            *(undefined1 *)(piVar2 + 5) = 1;
            *(undefined1 *)(iVar4 + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            piVar8 = *(int **)(piVar8[1] + 4);
          }
          else {
            if (piVar8 == (int *)piVar2[2]) {
              FUN_5006b300(this,(int)piVar2);
              piVar8 = piVar2;
            }
            *(undefined1 *)(piVar8[1] + 0x14) = 1;
            *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
            FUN_5000ad20(this,*(int **)(piVar8[1] + 4));
          }
        }
        else if ((char)piVar3[5] == '\0') {
          *(undefined1 *)(piVar2 + 5) = 1;
          *(undefined1 *)(piVar3 + 5) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          piVar8 = *(int **)(piVar8[1] + 4);
        }
        else {
          if (piVar8 == (int *)*piVar2) {
            FUN_5000ad20(this,piVar2);
            piVar8 = piVar2;
          }
          *(undefined1 *)(piVar8[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(piVar8[1] + 4) + 0x14) = 0;
          FUN_5006b300(this,*(int *)(piVar8[1] + 4));
        }
      } while (piVar8 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x14) = 1;
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  local_4 = piVar8;
  if (bVar6) {
    if (piVar8 == (int *)*piVar1) goto LAB_5000a7b0;
    FUN_5000acc0((int *)&local_4);
  }
  if (*piVar3 <= local_4[3]) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = local_4;
    return;
  }
LAB_5000a7b0:
  puVar7 = (undefined4 *)FUN_5000a820(this,&param_2,(int)piVar2,piVar8,piVar3);
  uVar5 = *puVar7;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}

