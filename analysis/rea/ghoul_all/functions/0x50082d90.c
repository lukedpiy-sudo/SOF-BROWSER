// rea decompile_all
// name: FUN_50082d90
// address: 0x50082d90
// body: available
// range: 0x50082d90-0x50082fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50082d90(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  int *local_4;
  
  piVar1 = param_2;
  bVar9 = true;
  piVar7 = *(int **)((int)this + 4);
  piVar8 = (int *)piVar7[1];
  local_4 = this;
  if (piVar8 != *(int **)((int)this + 8)) {
    do {
      piVar7 = piVar8;
      pbVar4 = (byte *)piVar7[4];
      if (pbVar4 == (byte *)0x0) {
        pbVar4 = &DAT_50129750;
      }
      uVar5 = FUN_500836e0(piVar1,0,piVar1[2],pbVar4,piVar7[5]);
      bVar9 = (int)uVar5 < 0;
      if (bVar9) {
        piVar8 = (int *)*piVar7;
      }
      else {
        piVar8 = (int *)piVar7[2];
      }
    } while (piVar8 != *(int **)((int)this + 8));
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    param_2 = (int *)FUN_50083440(piVar7,0);
    *param_2 = *(int *)((int)this + 8);
    param_2[2] = *(int *)((int)this + 8);
    FUN_50083510((undefined1 *)(param_2 + 3),(undefined1 *)piVar1);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    if (((piVar7 == *(int **)((int)this + 4)) || (piVar8 != *(int **)((int)this + 8))) ||
       (uVar5 = FUN_50083690(piVar1,(int)(piVar7 + 3)), (int)uVar5 < 0)) {
      *piVar7 = (int)param_2;
      piVar8 = *(int **)((int)this + 4);
      if (piVar7 == piVar8) {
        piVar8[1] = (int)param_2;
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
      else if (piVar7 == (int *)*piVar8) {
        *piVar8 = (int)param_2;
      }
    }
    else {
      piVar7[2] = (int)param_2;
      if (piVar7 == *(int **)(*(int *)((int)this + 4) + 8)) {
        *(int **)(*(int *)((int)this + 4) + 8) = param_2;
      }
    }
    piVar8 = param_2;
    piVar7 = param_2;
    if (param_2 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar1 = (int *)piVar7[1];
        if ((char)piVar1[8] != '\0') break;
        piVar2 = *(int **)piVar1[1];
        if (piVar1 == piVar2) {
          iVar3 = ((undefined4 *)piVar1[1])[2];
          if (*(char *)(iVar3 + 0x20) == '\0') {
            *(undefined1 *)(piVar1 + 8) = 1;
            *(undefined1 *)(iVar3 + 0x20) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
            piVar7 = *(int **)(piVar7[1] + 4);
          }
          else {
            if (piVar7 == (int *)piVar1[2]) {
              FUN_5006b300(this,(int)piVar1);
              piVar7 = piVar1;
            }
            *(undefined1 *)(piVar7[1] + 0x20) = 1;
            *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
            FUN_5000ad20(this,*(int **)(piVar7[1] + 4));
          }
        }
        else if ((char)piVar2[8] == '\0') {
          *(undefined1 *)(piVar1 + 8) = 1;
          *(undefined1 *)(piVar2 + 8) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
          piVar7 = *(int **)(piVar7[1] + 4);
        }
        else {
          if (piVar7 == (int *)*piVar1) {
            FUN_5000ad20(this,piVar1);
            piVar7 = piVar1;
          }
          *(undefined1 *)(piVar7[1] + 0x20) = 1;
          *(undefined1 *)(*(int *)(piVar7[1] + 4) + 0x20) = 0;
          FUN_5006b300(this,*(int *)(piVar7[1] + 4));
        }
      } while (piVar7 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x20) = 1;
    *param_1 = piVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    return param_1;
  }
  local_4 = piVar7;
  if (bVar9) {
    if (piVar7 == (int *)**(int **)((int)this + 4)) goto LAB_50082f97;
    FUN_50083460((int *)&local_4);
  }
  uVar5 = FUN_50083690(local_4 + 3,(int)piVar1);
  if (-1 < (int)uVar5) {
    param_2 = (int *)((uint)param_2 & 0xffffff00);
    FUN_50010d30(param_1,&local_4,(undefined1 *)&param_2);
    return param_1;
  }
LAB_50082f97:
  puVar6 = (undefined4 *)FUN_500831f0(this,&param_2,(int)piVar8,piVar7,(undefined1 *)piVar1);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

