// rea decompile_all
// name: FUN_500b55c0
// address: 0x500b55c0
// body: available
// range: 0x500b55c0-0x500b574e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b55c0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *this;
  int unaff_retaddr;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  local_1c = 0;
  iVar1 = *(int *)(param_1 + 0x210);
  if (((iVar1 != 0) && (iVar1 != -0x14)) && (iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 4);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(iVar1 + 8) - iVar2 >> 2;
    }
    if (((((param_2 <= uVar5) && (0 < (int)param_2)) &&
         ((iVar1 = *(int *)(iVar2 + -4 + param_2 * 4), iVar1 != 0 &&
          ((pfVar3 = *(float **)(iVar1 + 0x1c), pfVar3 != (float *)0x0 &&
           (*(int *)(param_1 + 0x2ac) != 0)))))) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x2ac) + 0x24), iVar1 != 0)) &&
       ((puVar4 = *(undefined4 **)(iVar1 + 4), puVar4 != (undefined4 *)0x0 &&
        (*(int **)(param_1 + 0x164) != (int *)0x0)))) {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      this = (void *)FUN_500a5e10(&DAT_5015c79c,uVar5);
      if (this != (void *)0x0) {
        local_1c = FUN_500a51d0(this,*(uint *)(param_1 + 0x164));
      }
      FUN_500c3bb0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),pfVar3,(undefined4 *)0x0,
                   *puVar4,auStack_c,(undefined4 *)0x0);
      if (param_3 != 0) {
        uStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        FUN_50084270(auStack_c,&uStack_18,5,1,*(char *)(param_1 + 0x31c),0,0,0,
                     CONCAT31((int3)((uint)param_3 >> 8),*(undefined1 *)(param_1 + 0x3c0)));
        FUN_500849a0(auStack_c,0x78,0x78,0x78,200);
      }
      if (local_1c != 0) {
        (**(code **)((int)*pfVar3 + 0x28))(0);
        if (((int)param_2 <= DAT_5014d1b4) && (0 < (int)param_2)) {
          *(uint *)(unaff_retaddr + 0xc) =
               *(uint *)(unaff_retaddr + 0xc) & ~(1 << ((char)param_2 - 1U & 0x1f));
        }
      }
    }
  }
  return;
}

