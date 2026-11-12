// rea decompile_all
// name: FUN_50086820
// address: 0x50086820
// body: available
// range: 0x50086820-0x50086944 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086820(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined4 in_stack_ffffffb0;
  undefined4 in_stack_ffffffb4;
  float local_c [3];
  
  fVar1 = *(float *)(param_1 + 0x21c);
  ppuVar7 = &PTR_s_objects_bosnia_truck_old_50146218;
  puVar8 = (undefined4 *)&stack0xffffffb0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 0.0;
  iVar3 = FUN_500b4980(param_1,in_stack_ffffffb0,in_stack_ffffffb4);
  ppuVar7 = &PTR_s_objects_bosnia_truck_old_50146218;
  puVar8 = (undefined4 *)&stack0xffffffb0;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = FUN_500b4980(param_1,in_stack_ffffffb0,in_stack_ffffffb4);
  ppuVar7 = &PTR_s_objects_bosnia_truck_old_50146218;
  puVar8 = (undefined4 *)&stack0xffffffb0;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar5 = FUN_500b4980(param_1,in_stack_ffffffb0,in_stack_ffffffb4);
  ppuVar7 = &PTR_s_objects_bosnia_truck_old_50146218;
  puVar8 = (undefined4 *)&stack0xffffffb0;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *ppuVar7;
    ppuVar7 = ppuVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar6 = FUN_500b4980(param_1,in_stack_ffffffb0,in_stack_ffffffb4);
  if (iVar3 != 0) {
    iVar2 = FUN_50084fd0(param_1);
    if (iVar2 != 0) {
      lVar9 = __ftol();
      *(short *)(iVar2 + 2) = (short)lVar9;
      return;
    }
    local_c[0] = fVar1 * 0.010638298 * 3.1415927;
    FUN_50084f00(param_1,local_c,*(int **)(iVar3 + 0x1c),*(int **)(iVar4 + 0x1c),
                 *(int **)(iVar5 + 0x1c),*(int **)(iVar6 + 0x1c));
  }
  return;
}

