// rea decompile_all
// name: FUN_500565c0
// address: 0x500565c0
// body: available
// range: 0x500565c0-0x500566ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500565c0(float param_1,undefined1 *param_2)

{
  int iVar1;
  uint *puVar2;
  
  *param_2 = 100;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined2 *)(param_2 + 6) = 0;
  *(undefined2 *)(param_2 + 8) = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined2 *)(param_2 + 0xe) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x5c) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 0x60) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x45c) + 100) = 0;
  *(undefined2 *)(*(int *)((int)param_1 + 0x74) + 0x14) = 0;
  *(undefined2 *)(*(int *)((int)param_1 + 0x74) + 0x16) = 0;
  *(undefined2 *)(*(int *)((int)param_1 + 0x74) + 0x18) = 0;
  FUN_50052970((int)param_1);
  iVar1 = FUN_500f5f90((int)param_1);
  if ((iVar1 != 0) &&
     (*(float *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x40c) + 8) + 2.0 < DAT_5015ccdc)) {
    puVar2 = FUN_50107030(*(uint **)(iVar1 + 0x1b4),&DAT_50142f2c);
    if (puVar2 != (uint *)0x0) {
      *(float *)(*(int *)(*(int *)((int)param_1 + 0x45c) + 0x40c) + 8) = DAT_5015ccdc + 1.5;
    }
  }
  if ((0 < *(int *)((int)param_1 + 0x2ec)) && (*(int *)((int)param_1 + 0x2ec) < 0x32)) {
    FUN_50054790((int)param_1,5);
  }
  FUN_50061a50(&DAT_50159a60,param_1);
  return;
}

