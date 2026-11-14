// rea decompile_all
// name: FUN_300038a0
// address: 0x300038a0
// body: available
// range: 0x300038a0-0x3000395e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_300038a0(void *this,char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3002b4fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)((int)this + 0x18) = param_1._0_1_;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  puVar2 = local_4c;
  pcVar4 = s__s_fnt_3002e31c;
  uVar3 = 0x40;
  local_4 = 0;
  pcVar1 = param_1;
  FUN_3001d410();
  (*DAT_3008fdf4)(local_4c,(int *)((int)this + 0x10),0,puVar2,uVar3,pcVar4,pcVar1);
  if (*(int *)((int)this + 0x10) == 0) {
    FUN_30010f90((byte *)s_Unable_to_find____s_3002e308);
  }
  pcVar1 = FUN_30007380(param_1,7,'\0','\x01');
  *(char **)((int)this + 0x14) = pcVar1;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_5;
  ExceptionList = pvStack_c;
  return this;
}

