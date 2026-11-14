// rea decompile_all
// name: FUN_30018040
// address: 0x30018040
// body: available
// range: 0x30018040-0x30018189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30018040(void *this,int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined *this_00;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)((int)this + 4) = param_1;
  piVar1 = operator_new(param_1 * 0x1c + 4);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = piVar1 + 1;
    *piVar1 = param_1;
    FUN_300210bc(piVar7,0x1c,param_1,&LAB_30018610);
  }
  local_4 = 0xffffffff;
  *(int **)this = piVar7;
  local_10 = 0;
  if (0 < *(int *)((int)this + 4)) {
    param_1 = 0;
    do {
      piVar1 = (int *)(*(int *)this + param_1);
      piVar1[1] = param_2;
      pvVar2 = operator_new(param_2 * 0x38);
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else if (-1 < param_2 + -1) {
        puVar4 = (undefined4 *)((int)pvVar2 + 0x1c);
        iVar5 = param_2;
        do {
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4 = puVar4 + 0xe;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *piVar1 = (int)pvVar2;
      iVar5 = 0;
      piVar1[2] = 0;
      if (0 < piVar1[1]) {
        iVar6 = 0;
        do {
          iVar3 = *piVar1;
          *(undefined4 *)(iVar3 + iVar6) = 0;
          iVar3 = iVar3 + iVar6;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x38;
          *(undefined4 *)(iVar3 + 4) = 0;
          *(undefined4 *)(iVar3 + 8) = 0;
        } while (iVar5 < piVar1[1]);
      }
      local_10 = local_10 + 1;
      param_1 = param_1 + 0x1c;
    } while (local_10 < *(int *)((int)this + 4));
  }
  this_00 = &DAT_300a37e0;
  iVar5 = 0x20;
  *(int *)((int)this + 8) = *(int *)((int)this + 4) + -1;
  do {
    FUN_30017830(this_00,&DAT_300a37e0);
    this_00 = this_00 + 0x48;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = local_c;
  return;
}

