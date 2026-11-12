// rea decompile_all
// name: FUN_5006dae0
// address: 0x5006dae0
// body: available
// range: 0x5006dae0-0x5006dc04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5006dae0(void *this,int *param_1,int param_2)

{
  undefined4 *unaff_EBX;
  int iVar1;
  int *unaff_ESI;
  undefined4 *puVar2;
  int *unaff_EDI;
  int *in_stack_ffffff9c;
  int *piVar3;
  int **ppiVar4;
  int *local_34;
  int *local_30;
  int aiStack_c [3];
  
  if (param_2 != 0) {
    FUN_500f4d30((int)param_1);
    if (param_1[0x116] == 0) {
      FUN_500f3860(param_1);
    }
  }
  local_34 = *(int **)(param_1[0x1d] + 0x34c);
  local_30 = param_1;
  ppiVar4 = &local_34;
  (**(code **)(*local_34 + 0xf4))();
  (**(code **)*unaff_EBX)();
  (**(code **)(*unaff_ESI + 0x98))(0);
  if (param_1[0x116] == 0) {
    (**(code **)(*unaff_EDI + 0xa0))(0);
    (*(code *)(*ppiVar4)[0x2c])(0);
  }
  (**(code **)(*unaff_EDI + 200))(s_unsafe_50144f18);
  (*(code *)(*ppiVar4)[0x38])(0);
  if (param_2 == 0) {
    piVar3 = aiStack_c;
    (**(code **)(iRam00000001 + 0x108))(piVar3,*(undefined4 *)(param_1[0x1d] + 0x350));
  }
  else {
    puVar2 = (undefined4 *)((int)this + 8);
    iVar1 = 6;
    do {
      (**(code **)(iRam00000001 + 0x40))(*puVar2,0);
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    piVar3 = (int *)0x0;
    in_stack_ffffff9c = (int *)0x1;
    (**(code **)(iRam00000001 + 0x10c))(*(undefined4 *)(param_1[0x1d] + 0x350),1,0,0,0);
  }
  (**(code **)(*piVar3 + 0x40))(0xe,0);
  (**(code **)(*in_stack_ffffff9c + 0x20))();
  return;
}

