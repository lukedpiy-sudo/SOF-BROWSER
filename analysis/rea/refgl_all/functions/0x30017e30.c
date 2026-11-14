// rea decompile_all
// name: FUN_30017e30
// address: 0x30017e30
// body: available
// range: 0x30017e30-0x30018007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_30017e30(void *this,undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int local_10;
  int local_c;
  
  iVar2 = param_2;
  iVar3 = *(int *)(param_2 + 0x1c);
  fVar7 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(iVar3 + 0x20));
  fVar8 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(iVar3 + 0x1c));
  *(float *)((int)this + 0xc) =
       (float)(fVar8 * (float10)*(float *)(iVar3 + 0x24) + fVar7 * (float10)*(float *)(iVar3 + 0x28)
              );
  iVar3 = *(int *)(param_2 + 0x1c);
  fVar7 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(iVar3 + 0x30));
  fVar8 = (float10)fsin((float10)DAT_3008fd38 * (float10)*(float *)(iVar3 + 0x2c));
  local_c = 0;
  *(float *)((int)this + 0x10) =
       (float)(fVar8 * (float10)*(float *)(iVar3 + 0x34) + fVar7 * (float10)*(float *)(iVar3 + 0x38)
              );
  if (0 < *(int *)((int)this + 4)) {
    local_10 = 0;
    param_2 = 0;
    do {
      puVar5 = (undefined4 *)(*(int *)this + param_2);
      iVar3 = **(int **)(iVar2 + 0x1c);
      *puVar5 = param_3;
      pvVar4 = (void *)(iVar3 + local_10);
      fVar1 = *(float *)(*(int *)(iVar2 + 0x1c) + 0xc);
      fVar7 = FUN_30016e70((int)pvVar4);
      puVar5[1] = (float)(fVar7 - (float10)fVar1);
      fVar1 = *(float *)(*(int *)(iVar2 + 0x1c) + 0x10);
      fVar7 = FUN_30016eb0((int)pvVar4);
      puVar5[2] = (float)(fVar7 - (float10)fVar1);
      iVar3 = FUN_30016ef0(pvVar4,iVar2);
      puVar5[6] = iVar3;
      puVar5[7] = pvVar4;
      local_c = local_c + 1;
      param_2 = param_2 + 0x38;
      local_10 = local_10 + 0x44;
    } while (local_c < *(int *)((int)this + 4));
  }
  iVar3 = *(int *)((int)this + 4);
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      iVar10 = iVar6;
      if (param_4 == (int *)0x0) {
        if (iVar6 == 0) {
          pvVar4 = *(void **)this;
          pfVar11 = (float *)((int)pvVar4 + 0x38);
          pfVar9 = (float *)0x0;
        }
        else if (iVar6 == iVar3 + -1) {
          pfVar11 = (float *)0x0;
          pvVar4 = (void *)(*(int *)this + iVar6 * 0x38);
          pfVar9 = (float *)0x0;
          iVar10 = (int)pvVar4 + -0x38;
        }
        else {
          pvVar4 = (void *)(*(int *)this + iVar6 * 0x38);
          pfVar11 = (float *)(*(int *)this + (iVar6 + 1) * 0x38);
          pfVar9 = (float *)0x0;
          iVar10 = (int)pvVar4 + -0x38;
        }
      }
      else {
        pvVar4 = *(void **)this;
        if (iVar6 == 0) {
          pfVar9 = (float *)*param_4;
          pfVar11 = (float *)((int)pvVar4 + 0x38);
        }
        else {
          if (iVar6 == iVar3 + -1) {
            pfVar11 = (float *)0x0;
          }
          else {
            pfVar11 = (float *)(*(int *)this + (iVar6 + 1) * 0x38);
          }
          pvVar4 = (void *)((int)pvVar4 + iVar6 * 0x38);
          iVar10 = (int)pvVar4 + -0x38;
          pfVar9 = (float *)(*param_4 + iVar6 * 0x38);
        }
      }
      FUN_30017d00(pvVar4,param_1,iVar2,pfVar9,iVar10,pfVar11);
      iVar3 = *(int *)((int)this + 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 4) + -1;
  return;
}

