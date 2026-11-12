// rea decompile_all
// name: FUN_500433e0
// address: 0x500433e0
// body: available
// range: 0x500433e0-0x500434cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500433e0(void *this,undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xa0) == 0) {
    uVar3 = FUN_500c26a0(0,0x1b4,s_func_Dekker_console_5014263c,(void *)0x0);
    if ((uVar3 != 0) &&
       (fVar1 = *(float *)(uVar3 + 4) - *(float *)(param_2 + 4),
       fVar2 = *(float *)(uVar3 + 8) - *(float *)(param_2 + 8),
       8100.0 < fVar1 * fVar1 + fVar2 * fVar2)) {
      *(undefined4 *)((int)this + 0x84) = 1;
      return 0;
    }
    *(undefined4 *)((int)this + 0xa0) = 1;
    uVar3 = FUN_500c26a0(0,0x1c8,s_dekkergun1_50142668,(void *)0x0);
    if (uVar3 != 0) {
      (**(code **)(uVar3 + 0x2c4))(uVar3,param_2,param_2);
    }
    uVar3 = FUN_500c26a0(0,0x1c8,s_dekkergun2_5014265c,(void *)0x0);
    if (uVar3 != 0) {
      (**(code **)(uVar3 + 0x2c4))(uVar3,param_2,param_2);
    }
    uVar3 = FUN_500c26a0(0,0x1c8,s_dekkergun3_50142650,(void *)0x0);
    if (uVar3 != 0) {
      (**(code **)(uVar3 + 0x2c4))(uVar3,param_2,param_2);
    }
  }
  return 0;
}

