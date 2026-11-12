// rea decompile_all
// name: FUN_5004ece0
// address: 0x5004ece0
// body: available
// range: 0x5004ece0-0x5004ed94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004ece0(void *this,int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x78) == 0) {
    return;
  }
  if (param_3 == param_2) {
    return;
  }
  if (*(int *)(param_3 + 0x74) == 0) {
    iVar2 = *(int *)(param_3 + 0x450);
  }
  else {
    if ((*(byte *)(param_3 + 0x1a0) & 0x20) != 0) {
      return;
    }
    bVar1 = FUN_500887e0(param_2,param_3);
    if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_5004ed3a;
    iVar2 = (**(code **)(*param_1 + 0x68))();
  }
  if (iVar2 == 0) {
    return;
  }
LAB_5004ed3a:
  if (*(int *)(param_3 + 0x74) == 0) {
    *(int *)((int)this + 0x14) = param_3;
    *(undefined4 *)((int)this + 0x24) = DAT_5015ccdc;
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)((int)this + 0x28) = 10;
    return;
  }
  *(int *)((int)this + 0x2c) = param_3;
  *(undefined4 *)((int)this + 0x3c) = DAT_5015ccdc;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((int)this + 0x40) = 10;
  return;
}

