// rea decompile_all
// name: FUN_500f9590
// address: 0x500f9590
// body: available
// range: 0x500f9590-0x500f989e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f9590(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x20) == 0xff) {
    iVar1 = *(int *)(param_1 + 0x74);
    uVar3 = *(byte *)(iVar1 + 0x10) & 1;
    uVar4 = (uint)(_DAT_5018b3e8 != 0.0);
    if ((((uVar3 == *(uint *)(iVar1 + 0x548)) || (4 < *(int *)(iVar1 + 0x544))) &&
        ((uVar4 == *(uint *)(iVar1 + 0x54c) || (*(int *)(iVar1 + 0x544) != 0)))) &&
       ((*(int *)(param_1 + 0x330) != 0 || (1 < *(int *)(iVar1 + 0x544))))) {
      if (*(int *)(param_1 + 0x28) < *(int *)(iVar1 + 0x540)) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        return;
      }
      if (*(int *)(iVar1 + 0x544) == 5) {
        FUN_500f0d30(param_1,0,0,0,param_1 + 4,0);
        return;
      }
      if (*(int *)(iVar1 + 0x544) == 2) {
        if (*(int *)(param_1 + 0x330) == 0) {
          return;
        }
        *(undefined4 *)(iVar1 + 0x544) = 1;
        *(undefined4 *)(param_1 + 0x28) = 0x68;
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x540) = 0x6d;
        return;
      }
    }
    *(undefined4 *)(iVar1 + 0x544) = 0;
    *(uint *)(iVar1 + 0x548) = uVar3;
    *(uint *)(iVar1 + 0x54c) = uVar4;
    pfVar2 = (float *)(iVar1 + 0x1c);
    if (*(int *)(param_1 + 0x330) == 0) {
      FUN_500fdd70(pfVar2,&local_18,(float *)0x0,(float *)0x0);
      local_18 = local_18 * 100.0 + *(float *)(param_1 + 4);
      local_14 = local_14 * 100.0 + *(float *)(param_1 + 8);
      local_10 = local_10 * 100.0 + *(float *)(param_1 + 0xc);
      local_c = *(float *)(param_1 + 0x24c) * 0.025 + *(float *)(param_1 + 4);
      local_8 = *(float *)(param_1 + 0x250) * 0.025 + *(float *)(param_1 + 8);
      local_4 = *(float *)(param_1 + 0x254) * 0.025 + *(float *)(param_1 + 0xc);
      FUN_500f1810(param_1,&local_c,&local_18);
      return;
    }
    if (uVar4 != 0) {
      FUN_500fdd70(pfVar2,&local_18,(float *)0x0,(float *)0x0);
      pfVar2 = (float *)(param_1 + 4);
      local_18 = local_18 * 100.0 + *pfVar2;
      local_14 = local_14 * 100.0 + *(float *)(param_1 + 8);
      local_10 = local_10 * 100.0 + *(float *)(param_1 + 0xc);
      local_c = *(float *)(param_1 + 0x24c) * 0.025 + *pfVar2;
      local_8 = *(float *)(param_1 + 0x250) * 0.025 + *(float *)(param_1 + 8);
      local_4 = *(float *)(param_1 + 0x254) * 0.025 + *(float *)(param_1 + 0xc);
      FUN_500f0de0(param_1,&local_c,(int)&local_18,pfVar2,param_1 + 0x10);
      return;
    }
    FUN_500fdd70(pfVar2,&local_c,(float *)0x0,(float *)0x0);
    local_18 = *(float *)(param_1 + 0x24c);
    local_14 = *(float *)(param_1 + 0x250);
    local_10 = *(float *)(param_1 + 0x254);
    local_c = local_c * 100.0 + *(float *)(param_1 + 4);
    local_8 = local_8 * 100.0 + *(float *)(param_1 + 8);
    local_4 = local_4 * 100.0 + *(float *)(param_1 + 0xc);
    FUN_500fe050(&local_18);
    local_18 = local_18 * 100.0 + *(float *)(param_1 + 4);
    local_14 = local_14 * 100.0 + *(float *)(param_1 + 8);
    local_10 = local_10 * 100.0 + *(float *)(param_1 + 0xc);
    FUN_500f1460(param_1,(int)&local_18,(int)&local_c);
  }
  return;
}

