// rea decompile_all
// name: FUN_5000a3d0
// address: 0x5000a3d0
// body: available
// range: 0x5000a3d0-0x5000a5d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000a3d0(void *this,undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  bool bVar11;
  int *local_4;
  
  puVar10 = param_2;
  bVar11 = true;
  piVar1 = *(int **)((int)this + 4);
  piVar6 = piVar1;
  piVar7 = (int *)piVar1[1];
  while (piVar7 != *(int **)((int)this + 8)) {
    bVar11 = *param_2 < (uint)piVar7[3];
    piVar6 = piVar7;
    if (bVar11) {
      piVar7 = (int *)*piVar7;
    }
    else {
      piVar7 = (int *)piVar7[2];
    }
  }
  if (*(char *)((int)this + 0xc) != '\0') {
    local_4 = this;
    param_2 = (uint *)FUN_5006b2e0(piVar6,0);
    *param_2 = *(uint *)((int)this + 8);
    param_2[2] = *(uint *)((int)this + 8);
    FUN_500a6f20(param_2 + 3,puVar10);
    puVar8 = param_2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    if (((piVar6 == *(int **)((int)this + 4)) || (piVar7 != *(int **)((int)this + 8))) ||
       (*puVar10 < (uint)piVar6[3])) {
      *piVar6 = (int)param_2;
      piVar1 = *(int **)((int)this + 4);
      if (piVar6 == piVar1) {
        piVar1[1] = (int)param_2;
        *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
      }
      else if (piVar6 == (int *)*piVar1) {
        *piVar1 = (int)param_2;
      }
    }
    else {
      piVar6[2] = (int)param_2;
      if (piVar6 == *(int **)(*(int *)((int)this + 4) + 8)) {
        *(uint **)(*(int *)((int)this + 4) + 8) = param_2;
      }
    }
    puVar10 = param_2;
    if (param_2 != *(uint **)(*(int *)((int)this + 4) + 4)) {
      do {
        puVar2 = (uint *)puVar10[1];
        if ((char)puVar2[5] != '\0') break;
        puVar3 = *(uint **)puVar2[1];
        if (puVar2 == puVar3) {
          iVar4 = ((undefined4 *)puVar2[1])[2];
          if (*(char *)(iVar4 + 0x14) == '\0') {
            *(undefined1 *)(puVar2 + 5) = 1;
            *(undefined1 *)(iVar4 + 0x14) = 1;
            *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
            puVar10 = *(uint **)(puVar10[1] + 4);
          }
          else {
            if (puVar10 == (uint *)puVar2[2]) {
              FUN_5006b300(this,(int)puVar2);
              puVar10 = puVar2;
            }
            *(undefined1 *)(puVar10[1] + 0x14) = 1;
            *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
            FUN_5000ad20(this,*(int **)(puVar10[1] + 4));
          }
        }
        else if ((char)puVar3[5] == '\0') {
          *(undefined1 *)(puVar2 + 5) = 1;
          *(undefined1 *)(puVar3 + 5) = 1;
          *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          puVar10 = *(uint **)(puVar10[1] + 4);
        }
        else {
          if (puVar10 == (uint *)*puVar2) {
            FUN_5000ad20(this,(int *)puVar2);
            puVar10 = puVar2;
          }
          *(undefined1 *)(puVar10[1] + 0x14) = 1;
          *(undefined1 *)(*(int *)(puVar10[1] + 4) + 0x14) = 0;
          FUN_5006b300(this,*(int *)(puVar10[1] + 4));
        }
      } while (puVar10 != *(uint **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x14) = 1;
    *param_1 = puVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  local_4 = piVar6;
  if (bVar11) {
    if (piVar6 == (int *)*piVar1) goto LAB_5000a5a0;
    FUN_5000acc0((int *)&local_4);
  }
  if (*puVar10 <= (uint)local_4[3]) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = local_4;
    return;
  }
LAB_5000a5a0:
  puVar9 = (undefined4 *)FUN_5000aa70(this,&param_2,(int)piVar7,piVar6,puVar10);
  uVar5 = *puVar9;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = uVar5;
  return;
}

