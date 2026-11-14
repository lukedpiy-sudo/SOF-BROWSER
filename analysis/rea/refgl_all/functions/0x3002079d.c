// rea decompile_all
// name: FUN_3002079d
// address: 0x3002079d
// body: available
// range: 0x3002079d-0x3002086b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl FUN_3002079d(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = FUN_30024f39();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_30024e01(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_30024f39();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = FUN_30024711(0xb,param_1);
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_30024f39();
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = FUN_30024764(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}

