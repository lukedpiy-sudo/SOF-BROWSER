// rea decompile_all
// name: FUN_5007c210
// address: 0x5007c210
// body: available
// range: 0x5007c210-0x5007c343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007c210(int param_1)

{
  byte bVar1;
  int *piVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  if (bVar1 == 0) {
    FUN_50081800(param_1,(byte *)s_________________________________5014585c);
    FUN_50081800(param_1,(byte *)s_Script___s_50145850);
    FUN_50081800(param_1,(byte *)s_DEBUG_at__d_50145840);
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_50081800(param_1,(byte *)s_Parameters__50145830);
      piVar2 = (int *)**(int **)(param_1 + 0x138);
      if (piVar2 != *(int **)(param_1 + 0x138)) {
        do {
          (**(code **)(*(int *)piVar2[2] + 0x1c))(param_1);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)*(int *)(param_1 + 0x138));
      }
    }
    if (DAT_5015c4e8 != 0) {
      FUN_50081800(param_1,(byte *)s_Global_Variables__50145818);
      piVar2 = (int *)*DAT_5015c4e4;
      if (piVar2 != DAT_5015c4e4) {
        do {
          (**(code **)(*(int *)piVar2[2] + 0x1c))(param_1);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != DAT_5015c4e4);
      }
    }
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_50081800(param_1,(byte *)s_Local_Variables__50145800);
      piVar2 = (int *)**(int **)(param_1 + 300);
      if (piVar2 != *(int **)(param_1 + 300)) {
        do {
          (**(code **)(*(int *)piVar2[2] + 0x1c))(param_1);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)*(int *)(param_1 + 300));
      }
    }
    FUN_50081800(param_1,(byte *)s_________________________________5014585c);
    return;
  }
  if ((bVar1 & 1) != 0) {
    *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) | (uint)(bVar1 & 0xfe);
    return;
  }
  *(uint *)(param_1 + 0x124) = *(uint *)(param_1 + 0x124) & ~(uint)bVar1;
  return;
}

