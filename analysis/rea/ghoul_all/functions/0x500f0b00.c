// rea decompile_all
// name: FUN_500f0b00
// address: 0x500f0b00
// body: available
// range: 0x500f0b00-0x500f0bdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f0b00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  
  if ((*(int *)(param_1 + 0x164) != 0) && (*(int *)(param_1 + 0x74) != 0)) {
    fVar3 = (float10)(**(code **)(*DAT_5015c4d8 + 0xac))(param_1);
    fVar4 = (float)fVar3;
    fVar3 = (float10)FUN_500fe050((float *)&stack0xfffffff0);
    if ((float10)0.1 < fVar3) {
      if (((*(int *)(*(int *)(param_1 + 0x74) + 0x550) == 0) && (*(int *)(param_2 + 0x4c) == 1)) &&
         ((*(uint *)(param_2 + 0x48) & 0x8000000) != 0)) {
        fVar4 = fVar4 * 0.75;
      }
      iVar1 = **(int **)(param_1 + 0x164);
      uVar2 = FUN_500f0be0(param_1,&stack0xfffffff0,fVar4);
      (**(code **)(iVar1 + 0x18))(uVar2);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x164) + 0x18))(4);
  }
  return;
}

