// rea decompile_all
// name: FUN_50046670
// address: 0x50046670
// body: available
// range: 0x50046670-0x50046744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50046670(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar4 = (void *)((int)this + 0xc);
  if (param_2 == 0) {
    pvVar4 = this;
  }
  puVar1 = (undefined4 *)**(undefined4 **)((int)pvVar4 + 4);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)pvVar4 + 4)) {
      if (param_2 == 0) {
        iVar3 = *(int *)(DAT_50159170 + 4);
      }
      else {
        iVar3 = *(int *)(DAT_50159170 + 0x186a18);
      }
      local_20 = *(float *)((int)this + 0x18) - *(float *)(iVar3 + 0x18 + param_1 * 0x88);
      iVar3 = iVar3 + param_1 * 0x88;
      local_14 = param_1;
      local_1c = *(float *)((int)this + 0x1c) - *(float *)(iVar3 + 0x1c);
      local_18 = *(float *)((int)this + 0x20) - *(float *)(iVar3 + 0x20);
      fVar8 = FUN_500fe130(&local_20);
      puVar6 = (undefined4 *)puVar1[1];
      local_10 = (float)fVar8;
      local_c = 0;
      local_8 = 1;
      local_4 = param_3;
      puVar2 = operator_new(0x1c);
      *puVar2 = puVar1;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = puVar2;
      }
      puVar2[1] = puVar6;
      puVar1[1] = puVar2;
      *(undefined4 **)puVar2[1] = puVar2;
      if (puVar2 + 2 != (int *)0x0) {
        piVar5 = &local_14;
        piVar7 = puVar2 + 2;
        for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar7 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        }
      }
      *(int *)((int)pvVar4 + 8) = *(int *)((int)pvVar4 + 8) + 1;
      return;
    }
    if (puVar1[2] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return;
}

