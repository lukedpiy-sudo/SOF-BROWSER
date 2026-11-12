// rea decompile_all
// name: FUN_5004c960
// address: 0x5004c960
// body: available
// range: 0x5004c960-0x5004ca2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5004c960(void *this,short *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_2;
  iVar4 = -1;
  iVar5 = (-(uint)(param_3 != 0) & 0xffffc567) + 15000;
  if (param_2 == -1) {
    return -1;
  }
  param_1 = (short *)(*(int *)((int)this + 0x2c) + (int)param_1 * 0x38 + 0x14);
  param_2 = 0;
  do {
    iVar7 = (int)*param_1;
    if (iVar7 == -1) {
      return iVar4;
    }
    if (param_3 == 0) {
      iVar8 = *(int *)(iVar3 * 0x50 + 0x24 + *(int *)((int)this + 4));
      sVar1 = *(short *)(iVar8 + iVar7 * 2);
      if ((sVar1 < 15000) &&
         (((iVar4 == -1 || (sVar2 = *(short *)(iVar8 + iVar4 * 2), 14999 < sVar2)) ||
          (sVar2 <= sVar1)))) goto LAB_5004ca09;
    }
    else {
      iVar8 = *(int *)(iVar3 * 0x50 + 0x24 + *(int *)((int)this + 4));
      iVar6 = (int)*(short *)(iVar8 + iVar7 * 2);
      if ((iVar5 < iVar6) &&
         (((iVar4 == -1 || (iVar8 = (int)*(short *)(iVar8 + iVar4 * 2), iVar8 <= iVar5)) ||
          (iVar6 <= iVar8)))) {
LAB_5004ca09:
        iVar4 = iVar7;
      }
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if (0xb < param_2) {
      return iVar4;
    }
  } while( true );
}

