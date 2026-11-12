// rea decompile_all
// name: FUN_2002d760
// address: 0x2002d760
// body: available
// range: 0x2002d760-0x2002d827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002d760(int param_1)

{
  undefined *puVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  int iVar6;
  
  iVar6 = 0;
  ppuVar5 = &PTR_s_Objects_Generic_chunks_brick_20137670;
  do {
    if (*(char *)(iVar6 + param_1) == 'y') {
      puVar3 = (undefined4 *)FUN_20069630(1,0);
      uVar4 = (**(code **)*puVar3)();
      puVar1 = *ppuVar5;
      (&DAT_2026add8)[iVar6 * 2] = uVar4;
      FUN_20049190(puVar1,ppuVar5[1],uVar4);
      (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 4))(1);
      FUN_200fabac(&stack0xfffffefc,s_Ghoul__s__s_GHL_201322f4,*ppuVar5,ppuVar5[1]);
      sVar2 = (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 0xc))(&stack0xfffffefc);
      (&DAT_2026addc)[iVar6 * 4] = sVar2;
      if (sVar2 != 0) {
        (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 8))(1);
      }
    }
    ppuVar5 = ppuVar5 + 4;
    iVar6 = iVar6 + 1;
  } while ((int)ppuVar5 < 0x201377f0);
  if (*(char *)(param_1 + 0x18) == 'p') {
    (*DAT_20403590)();
  }
  return;
}

