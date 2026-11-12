// rea decompile_all
// name: FUN_50061b10
// address: 0x50061b10
// body: available
// range: 0x50061b10-0x50061bf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_50061b10(void *this,int param_1,short *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_c;
  int local_4;
  
  iVar4 = param_1;
  local_4._0_2_ = 0;
  local_4 = 0;
  local_c = 9999999.0;
  if (*(int *)((int)this + 0x18) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  if ((*(int *)(param_1 + 0x45c) != 0) && (iVar8 = 0, 0 < iVar7)) {
    param_1 = 0;
    do {
      if ((param_3 == '\0') || (uVar5 = FUN_50060b30(this,(short)iVar8), (char)uVar5 == '\0')) {
        pfVar6 = (float *)(*(int *)((int)this + 0x18) + param_1);
        fVar1 = *pfVar6 - *(float *)(iVar4 + 4);
        fVar3 = pfVar6[1] - *(float *)(iVar4 + 8);
        fVar2 = pfVar6[2] - *(float *)(iVar4 + 0xc);
        fVar1 = fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
        if (fVar1 < local_c) {
          local_c = fVar1;
          local_4 = iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      param_1 = param_1 + 0x34;
    } while (iVar8 < iVar7);
  }
  *(float *)(param_2 + 2) = local_c;
  *param_2 = (short)local_4;
  return (short)local_4 != 0;
}

