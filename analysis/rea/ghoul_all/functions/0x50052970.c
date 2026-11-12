// rea decompile_all
// name: FUN_50052970
// address: 0x50052970
// body: available
// range: 0x50052970-0x50052a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50052970(int param_1)

{
  int iVar1;
  int *unaff_ESI;
  int *local_34;
  int local_30;
  
  local_34 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  local_30 = param_1;
  (**(code **)(*local_34 + 0xf4))(&local_34);
  iVar1 = *(int *)(param_1 + 0x45c);
  if (iVar1 != 0) {
    if (((DAT_50159684 != 3) && (*(int *)(iVar1 + 0x3d0) != 0)) &&
       (*(float *)(iVar1 + 0x3cc) < DAT_5015ccdc)) {
      *(undefined4 *)(iVar1 + 0x3d0) = 0;
      (**(code **)(*unaff_ESI + 0x20))();
      (**(code **)(*unaff_ESI + 0x2c))();
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 0x3b4);
    if (iVar1 != unaff_ESI[0xb]) {
      if (iVar1 == 0xc) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      *(int *)(*(int *)(param_1 + 0x45c) + 0x3b4) = unaff_ESI[0xb];
      *(float *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0x10) = DAT_5015ccdc + 2.0;
    }
  }
  return;
}

