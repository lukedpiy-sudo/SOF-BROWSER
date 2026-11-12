// rea decompile_all
// name: FUN_50057440
// address: 0x50057440
// body: available
// range: 0x50057440-0x50057618 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50057440(void *this,uint *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_62c;
  void **local_628;
  void *local_624;
  int local_620;
  int local_61c;
  int local_618;
  int local_614;
  int local_610;
  char local_60c [512];
  char local_40c [512];
  undefined4 local_20c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113c7b;
  local_c = ExceptionList;
  iVar6 = 0;
  if (param_1 != (uint *)0x0) {
    local_620 = (int)this + 0x10;
    local_61c = (int)this + 0x20;
    local_618 = (int)this + 0x30;
    local_614 = (int)this + 0x40;
    local_610 = (int)this + 0x50;
    local_628 = &local_624;
    local_62c = 1;
    ExceptionList = &local_c;
    local_624 = this;
    while( true ) {
      FUN_500fe2b0();
      puVar3 = FUN_50107030(param_1,local_60c);
      if (puVar3 == (uint *)0x0) break;
      iVar4 = (int)puVar3 - (int)param_1;
      cVar2 = *(char *)(iVar4 + (int)param_1);
      while (cVar2 != '\r') {
        iVar4 = iVar4 + 1;
        if (iVar4 == param_2) {
          ExceptionList = local_c;
          return;
        }
        cVar2 = *(char *)(iVar4 + (int)param_1);
      }
      FUN_500fe2b0();
      puVar3 = FUN_50107030(param_1,local_60c);
      if (puVar3 == (uint *)0x0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = (int)puVar3 - (int)param_1;
      while (iVar4 = iVar4 + 2, iVar4 < iVar5) {
        cVar2 = *(char *)(iVar4 + (int)param_1);
        while (cVar2 != '\r') {
          if (iVar5 <= iVar4) goto LAB_500575c9;
          local_40c[iVar6] = cVar2;
          iVar1 = iVar4 + 1;
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          cVar2 = *(char *)(iVar1 + (int)param_1);
        }
        if (iVar5 <= iVar4) break;
        local_40c[iVar6] = '\0';
        puVar7 = local_20c;
        for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        FUN_500fe2b0();
        iVar6 = 0;
        local_4 = 0;
        FUN_5005ad40(*local_628,*(undefined4 **)((int)*local_628 + 8),1,local_20c);
        local_4 = 0xffffffff;
      }
LAB_500575c9:
      cVar2 = *(char *)(iVar5 + (int)param_1);
      while (cVar2 != '\r') {
        iVar5 = iVar5 + 1;
        if (iVar5 == param_2) {
          ExceptionList = local_c;
          return;
        }
        cVar2 = *(char *)(iVar5 + (int)param_1);
      }
      local_62c = local_62c + 1;
      local_628 = local_628 + 1;
      if (6 < local_62c) {
        ExceptionList = local_c;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

