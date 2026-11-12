// rea decompile_all
// name: FUN_500a5040
// address: 0x500a5040
// body: available
// range: 0x500a5040-0x500a5101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500a5040(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  void *local_1c;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114f7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_1c = operator_new(0x1c);
  local_4 = 0;
  if (local_1c == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500a3a50(local_1c,(uint)this,param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_500a66f0(&DAT_5018b4b8,puVar1);
  if ((void *)puVar1[3] == (void *)0x0) {
    FUN_500a67a0(&DAT_5018b4b8,puVar1);
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  local_18 = 0;
  local_1c = (void *)puVar1[3];
  FUN_5000a3d0((void *)((int)this + 4),local_14,(uint *)&local_1c);
  *(undefined4 **)(local_14[0] + 0x10) = puVar1;
  ExceptionList = local_c;
  return puVar1;
}

