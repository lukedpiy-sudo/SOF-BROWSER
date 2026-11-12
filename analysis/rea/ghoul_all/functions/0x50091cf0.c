// rea decompile_all
// name: FUN_50091cf0
// address: 0x50091cf0
// body: available
// range: 0x50091cf0-0x50091dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_50091cf0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined *puVar3;
  float10 fVar4;
  int iVar5;
  
  if (*(float *)(param_1 + 0x360) == 0.0) {
    *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
  }
  *(code **)(param_1 + 0x2c4) = FUN_50091c60;
  *(code **)(param_1 + 0x2b8) = FUN_50091c10;
  if (*(float *)(param_1 + 0x360) <= *(float *)(param_1 + 0x368)) {
    iVar5 = param_1 + 4;
    *(float *)(param_1 + 0x368) = *(float *)(param_1 + 0x360) - 0.1;
    puVar3 = FUN_500c33f0();
    (*DAT_5015ca24)(s_func_timer_at__s_has_random_>__w_50147a14,puVar3,iVar5);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    fVar4 = (float10)(*DAT_5015cb20)(-*(float *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x368));
    fVar1 = (float10)_DAT_5015cbdc;
    fVar2 = (float10)DAT_5015ccdc;
    *(int *)(param_1 + 0x32c) = param_1;
    *(float *)(param_1 + 0x2b4) =
         (float)(fVar4 + (float10)*(float *)(param_1 + 0x364) + fVar1 + fVar2 +
                 (float10)*(float *)(param_1 + 0x360) + (float10)1.0);
  }
  *(undefined4 *)(param_1 + 0x118) = 1;
  return;
}

