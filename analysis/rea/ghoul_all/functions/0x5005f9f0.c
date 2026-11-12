// rea decompile_all
// name: FUN_5005f9f0
// address: 0x5005f9f0
// body: available
// range: 0x5005f9f0-0x5005fbca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5005f9f0(void *this,int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char local_808 [512];
  undefined4 local_608 [128];
  char local_408 [512];
  char local_208 [516];
  
  iVar2 = *(int *)((int)this + 0x18);
  puVar6 = (undefined4 *)0x0;
  iVar5 = 0;
  pcVar7 = local_408;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  while( true ) {
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_2 * 0x34 + 0x30 + iVar2);
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
    if ((puVar6 == (undefined4 *)0x0) || (*(int *)((int)this + 0x3c) <= iVar5)) break;
    iVar5 = iVar5 + 1;
    FUN_500fe2b0();
    _strncat(local_408,local_208,0x200);
  }
  pcVar7 = local_808;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  puVar6 = local_608;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_608[0]._0_1_ = 0x20;
  if ((4 < *(int *)((int)this + 0x38)) && (*(int *)(param_2 * 0x34 + 0x28 + iVar2) != 0)) {
    FUN_500fe2b0();
  }
  FUN_500c33f0();
  FUN_500fe2b0();
  uVar4 = 0xffffffff;
  pcVar7 = local_808;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_808,~uVar4 - 1,1,param_1);
  return;
}

