// rea decompile_all
// name: FUN_50008580
// address: 0x50008580
// body: available
// range: 0x50008580-0x50008680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __thiscall
FUN_50008580(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4,
            undefined4 *param_5,float param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_5011300b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int **)((int)this + 400) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    iVar1 = (**(code **)(**(int **)((int)this + 400) + 0x84))();
    if (iVar1 == 7) {
      piVar2 = *(int **)((int)this + 400);
      *(undefined4 *)((int)this + 400) = 0;
      (**(code **)(*piVar2 + 0x88))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      ExceptionList = param_4;
      return piVar2;
    }
  }
  piVar2 = operator_new(0x70);
  uStack_4 = 0;
  if (piVar2 != (int *)0x0) {
    FUN_5000dd60(piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    *piVar2 = (int)&PTR_FUN_50125198;
    ExceptionList = pvStack_c;
    return piVar2;
  }
  ExceptionList = pvStack_c;
  return (int *)0x0;
}

