// rea decompile_all
// name: FUN_5005df10
// address: 0x5005df10
// body: available
// range: 0x5005df10-0x5005e00c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005df10(void *this,int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_8;
  
  iVar4 = param_2;
  if (*(int *)((int)this + 0x18) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  iVar6 = 0;
  local_8 = 4096.0;
  if ((*(int *)(param_1 + 0x45c) != 0) && (-1 < iVar5)) {
    iVar7 = 0;
    param_2 = iVar5 + 1;
    do {
      iVar5 = *(int *)((int)this + 0x18);
      fVar1 = *(float *)(iVar4 + 4) - *(float *)(iVar7 + iVar5);
      fVar2 = *(float *)(iVar4 + 8) - *(float *)(iVar7 + 4 + iVar5);
      fVar3 = *(float *)(iVar4 + 0xc) - *(float *)(iVar7 + 8 + iVar5);
      fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
      if ((fVar1 < local_8) && (*(float *)(iVar7 + 8 + iVar5) < *(float *)(iVar4 + 0xc) + 41.0)) {
        iVar5 = FUN_5005c410(iVar4,(undefined4 *)(iVar7 + iVar5));
        if (iVar5 != 0) {
          iVar6 = *(int *)((int)this + 0x18) + iVar7;
          local_8 = fVar1;
        }
      }
      iVar7 = iVar7 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (iVar6 != 0) {
      *(int *)(*(int *)(param_1 + 0x45c) + 0x4c) = iVar6;
      FUN_50061fb0(&DAT_50159a60,param_1);
    }
  }
  return;
}

