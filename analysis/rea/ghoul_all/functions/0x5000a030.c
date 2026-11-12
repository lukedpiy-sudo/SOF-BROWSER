// rea decompile_all
// name: FUN_5000a030
// address: 0x5000a030
// body: available
// range: 0x5000a030-0x5000a0d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5000a030(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined4 *local_10 [2];
  undefined4 *local_8;
  undefined4 local_4;
  
  if (param_1 != (undefined4 *)0x0) {
    local_10[0] = FUN_5000a7f0(this,(uint *)&param_1);
    puVar1 = DAT_501546ec;
    local_8 = *(undefined4 **)((int)this + 4);
    if ((local_10[0] == local_8) || (param_1 < (undefined4 *)local_10[0][3])) {
      ppuVar2 = &local_8;
    }
    else {
      ppuVar2 = local_10;
    }
    if (*ppuVar2 == local_8) {
      local_8 = param_1;
      DAT_501546ec = (undefined4 *)((int)DAT_501546ec + 1);
      local_4 = 0;
      FUN_5000a3d0(this,local_10,(uint *)&local_8);
      local_10[0][4] = puVar1;
      local_8 = puVar1;
      local_4 = 0;
      FUN_5000a5e0((void *)((int)this + 0x14),local_10,(int *)&local_8);
      local_10[0][4] = param_1;
    }
  }
  return;
}

