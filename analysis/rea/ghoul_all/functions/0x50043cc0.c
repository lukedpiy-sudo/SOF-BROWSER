// rea decompile_all
// name: FUN_50043cc0
// address: 0x50043cc0
// body: available
// range: 0x50043cc0-0x50043d5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50043cc0(void *this,int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0xa0) == 0) {
    uVar3 = FUN_500c26a0(0,0x1b4,s_func_Dekker_diehere_50142674,(void *)0x0);
    if ((uVar3 != 0) &&
       (fVar1 = *(float *)(uVar3 + 4) - param_2[1], fVar2 = *(float *)(uVar3 + 8) - param_2[2],
       4900.0 < fVar1 * fVar1 + fVar2 * fVar2)) {
      *(undefined4 *)((int)this + 0x84) = 1;
      return 0;
    }
    *(undefined4 *)((int)this + 0xa0) = 1;
    param_2[0x6e] = (float)((uint)param_2[0x6e] | 0x80);
  }
  uVar4 = FUN_5003ad10(this,param_1,param_2,param_3);
  return uVar4;
}

