// rea decompile_all
// name: FUN_500b7650
// address: 0x500b7650
// body: available
// range: 0x500b7650-0x500b77c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500b7650(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [3];
  float local_c [3];
  
  fVar2 = *(float *)(param_1 + 0x2b4);
  if ((fVar2 < 0.0 == (fVar2 == 0.0)) &&
     ((*(code **)(param_1 + 0x2b8) != (code *)0x0 || (*(int *)(param_1 + 0x450) != 0)))) {
    if (fVar2 <= DAT_5015ccdc + 0.001) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      if (*(int **)(param_1 + 0x450) == (int *)0x0) {
        (**(code **)(param_1 + 0x2b8))(param_1);
        return 0;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 8))();
      if (iVar3 != 0) {
        (**(code **)(**(int **)(param_1 + 0x450) + 0xc))();
        (**(code **)(param_1 + 0x2b8))(param_1);
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 0x450) + 0x3c))(param_1);
      FUN_500c3a90();
      return 0;
    }
  }
  else if ((char)((uint)*(undefined4 *)(param_1 + 0x1a0) >> 8) < '\0') {
    iVar3 = FUN_500f7430(param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_500f7430(param_1);
      FUN_500fdd70((float *)(*(int *)(iVar3 + 0x74) + 0x1c),local_c,&local_24,local_18);
      pfVar1 = (float *)(param_1 + 4);
      fVar2 = (float)(*(int *)(iVar3 + 0x308) * -0x1e);
      *pfVar1 = local_24 * fVar2 + *(float *)(iVar3 + 4);
      *(float *)(param_1 + 8) = local_20 * fVar2 + *(float *)(iVar3 + 8);
      *(float *)(param_1 + 0xc) = local_1c * fVar2 + *(float *)(iVar3 + 0xc);
      *(float *)(param_1 + 0x134) = *pfVar1 + *(float *)(param_1 + 0x11c);
      *(float *)(param_1 + 0x138) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x120);
      *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x124);
      FUN_5003d120(pfVar1,(float *)(param_1 + 0x128),(float *)(param_1 + 0x140));
      FUN_500c3a90();
    }
  }
  return 1;
}

