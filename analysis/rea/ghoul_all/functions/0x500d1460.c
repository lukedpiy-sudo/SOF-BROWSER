// rea decompile_all
// name: FUN_500d1460
// address: 0x500d1460
// body: available
// range: 0x500d1460-0x500d164b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500d1460(void *this,int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float local_18 [6];
  
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x298))) &&
     (*(int *)((int)this + 0x294) != 0)) {
    iVar3 = 0;
    for (iVar1 = *(int *)((int)this + 0x290); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      if ((((*(float *)(iVar1 + 0x10) == 0.0) && (*(float *)(iVar1 + 0x14) == 0.0)) &&
          ((*(float *)(iVar1 + 0x18) == 0.0 &&
           ((*(float *)(iVar1 + 0x1c) == 0.0 && (*(float *)(iVar1 + 0x20) == 0.0)))))) &&
         (*(float *)(iVar1 + 0x24) == 0.0)) {
        if (iVar3 == param_1) {
          if (*(int *)((int)this + 0x184) == 0) {
            return 0;
          }
          if (((((*(float *)(iVar1 + 0x10) == 0.0) && (*(float *)(iVar1 + 0x14) == 0.0)) &&
               (*(float *)(iVar1 + 0x18) == 0.0)) &&
              ((*(float *)(iVar1 + 0x1c) == 0.0 && (*(float *)(iVar1 + 0x20) == 0.0)))) &&
             (*(float *)(iVar1 + 0x24) == 0.0)) {
            *(int *)((int)this + 0x298) = *(int *)((int)this + 0x298) + -1;
          }
          iVar3 = 0;
          pfVar4 = param_2;
          pfVar5 = (float *)(*(int *)((int)this + 0x184) + 0x128);
          do {
            fVar2 = *pfVar4 + *pfVar4;
            if (*pfVar5 - pfVar5[-3] < fVar2 == (*pfVar5 - pfVar5[-3] == fVar2)) {
              return 0;
            }
            iVar3 = iVar3 + 1;
            *(float *)((int)pfVar4 + (int)local_18 + (0xc - (int)param_2)) = -*pfVar4 - pfVar5[-3];
            *(float *)(&stack0xffffffe4 + -(int)param_2 + (int)(pfVar4 + 1)) = *pfVar4 - *pfVar5;
            pfVar4 = pfVar4 + 1;
            pfVar5 = pfVar5 + 1;
          } while (iVar3 < 3);
          *(int *)((int)this + 0x29c) = *(int *)((int)this + 0x29c) + 1;
          *(float *)(iVar1 + 0x18) = local_18[5] + *(float *)(iVar1 + 0xc);
          *(float *)(iVar1 + 0x10) = local_18[3] + *(float *)(iVar1 + 4);
          *(float *)(iVar1 + 0x14) = local_18[4] + *(float *)(iVar1 + 8);
          *(float *)(iVar1 + 0x1c) = local_18[0] + *(float *)(iVar1 + 4);
          *(float *)(iVar1 + 0x20) = local_18[1] + *(float *)(iVar1 + 8);
          *(float *)(iVar1 + 0x24) = local_18[2] + *(float *)(iVar1 + 0xc);
          return 1;
        }
        iVar3 = iVar3 + 1;
      }
    }
  }
  return 0;
}

