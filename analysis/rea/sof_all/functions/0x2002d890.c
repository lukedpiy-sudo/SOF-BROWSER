// rea decompile_all
// name: FUN_2002d890
// address: 0x2002d890
// body: available
// range: 0x2002d890-0x2002d945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2002d890(int param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = &DAT_2026add8 + param_1 * 2;
  if ((&DAT_2026add8)[param_1 * 2] == 0) {
    puVar3 = (undefined4 *)FUN_20069630(1,0);
    uVar4 = (**(code **)*puVar3)();
    *puVar1 = uVar4;
    iVar5 = FUN_20049190((&PTR_s_Objects_Generic_chunks_brick_20137670)[param_1 * 4],
                         (&PTR_s_brick_20137674)[param_1 * 4],uVar4);
    if (iVar5 == 0) {
      (**(code **)(*(int *)*puVar1 + 0x6c))();
      *puVar1 = 0;
      return 0;
    }
    (**(code **)(*(int *)*puVar1 + 4))(1);
    FUN_200fabac(&stack0xfffffefc,s_Ghoul__s__s_GHL_201322f4,
                 (&PTR_s_Objects_Generic_chunks_brick_20137670)[param_1 * 4],
                 (&PTR_s_brick_20137674)[param_1 * 4]);
    uVar2 = (**(code **)(*(int *)*puVar1 + 0xc))(&stack0xfffffefc);
    (&DAT_2026addc)[param_1 * 4] = uVar2;
  }
  return *puVar1;
}

