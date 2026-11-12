// rea decompile_all
// name: FUN_500659c0
// address: 0x500659c0
// body: available
// range: 0x500659c0-0x50065b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500659c0(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            float *param_5,undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  if ((param_5 != (float *)0x0) && (local_4 = param_6, (short)param_6 == 0)) {
    piVar1 = (int *)(**(code **)((int)*param_5 + 0x88))();
    local_4 = (undefined4 *)(**(code **)(*piVar1 + 0x1c))(s_flash_50133d48);
  }
  if (((((param_2 != 0) && (*(int *)(param_2 + 0x458) != 0)) && (DAT_50159684 != 3)) &&
      ((*(int *)(param_2 + 0x45c) != 0 && (*(int *)(*(int *)(param_2 + 0x45c) + 0x3b4) == 0xc)))) &&
     ((param_1 != 0x12 && (param_1 != 0x13)))) {
    param_1 = (*(int *)(*(int *)(*(int *)(param_2 + 0x74) + 0x34c) + 0xc) != 0) + 0x12;
  }
  FUN_500656e0((void *)(*(int *)this + param_1 * 0x14c),param_2,param_3,param_4,param_5,local_4);
  if ((param_5 != (float *)0x0) && ((short)local_4 != 0)) {
    iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
    iVar4 = *(int *)this + param_1 * 0x14c;
    if (iVar2 != 0) {
      if ((*(int *)(iVar4 + 0x138) == 0) && (iVar4 + 0x54 != 0)) {
        uVar3 = (*DAT_5015c9f8)(iVar4 + 0x54);
        *(undefined4 *)(iVar4 + 0x138) = uVar3;
      }
      FUN_50085470(&DAT_5015c518,*(int *)(iVar4 + 0x138),param_2,(int *)param_5,(short)local_4,1,0,0
                  );
      return;
    }
    if ((*(int *)(iVar4 + 0x13c) == 0) && (iVar4 + 0x94 != 0)) {
      uVar3 = (*DAT_5015c9f8)(iVar4 + 0x94);
      *(undefined4 *)(iVar4 + 0x13c) = uVar3;
    }
    FUN_50085470(&DAT_5015c518,*(int *)(iVar4 + 0x13c),param_2,(int *)param_5,(short)local_4,1,0,0);
  }
  return;
}

