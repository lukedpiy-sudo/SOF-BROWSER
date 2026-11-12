// rea decompile_all
// name: FUN_5010e925
// address: 0x5010e925
// body: available
// range: 0x5010e925-0x5010ead0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_5010e925(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_50158874 != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_50158908) || (uVar5 != DAT_50158918)) {
      if (DAT_5018c3a0 == 0) {
        FUN_5010ead1(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_5010ead1(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_5018c440 != 0) {
          uVar6 = (uint)DAT_5018c446;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_5018c444;
          uVar6 = 0;
          uVar4 = (uint)DAT_5018c446;
        }
        FUN_5010ead1(1,(uint)(DAT_5018c440 == 0),uVar5,(uint)DAT_5018c442,uVar4,uVar3,uVar6,
                     (uint)DAT_5018c448,(uint)DAT_5018c44a,(uint)DAT_5018c44c,(uint)DAT_5018c44e);
        if (DAT_5018c3ec != 0) {
          uVar6 = (uint)DAT_5018c3f2;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_5018c3f0;
          uVar6 = 0;
          uVar4 = (uint)DAT_5018c3f2;
          uVar5 = param_1[5];
        }
        FUN_5010ead1(0,(uint)(DAT_5018c3ec == 0),uVar5,(uint)DAT_5018c3ee,uVar4,uVar3,uVar6,
                     (uint)DAT_5018c3f4,(uint)DAT_5018c3f6,(uint)DAT_5018c3f8,(uint)DAT_5018c3fa);
      }
    }
    iVar1 = param_1[7];
    if (DAT_5015890c < DAT_5015891c) {
      if ((DAT_5015890c <= iVar1) && (iVar1 <= DAT_5015891c)) {
        if ((DAT_5015890c < iVar1) && (iVar1 < DAT_5015891c)) {
          return true;
        }
LAB_5010ea9d:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_5015890c) {
          return DAT_50158910 <= iVar2;
        }
        return iVar2 < DAT_50158920;
      }
    }
    else {
      if (iVar1 < DAT_5015891c) {
        return true;
      }
      if (DAT_5015890c < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_5015891c) || (DAT_5015890c <= iVar1)) goto LAB_5010ea9d;
    }
  }
  return false;
}

