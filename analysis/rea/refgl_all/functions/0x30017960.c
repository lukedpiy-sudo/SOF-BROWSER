// rea decompile_all
// name: FUN_30017960
// address: 0x30017960
// body: available
// range: 0x30017960-0x30017a49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_30017960(void *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 4;
  pfVar1 = (float *)((int)this + 0x14);
  do {
    iVar2 = iVar2 + -1;
    pfVar1[-2] = param_1 * *(float *)((int)this + 0x3c) + pfVar1[-2];
    pfVar1[-1] = param_1 * *(float *)((int)this + 0x40) + pfVar1[-1];
    *pfVar1 = param_1 * *(float *)((int)this + 0x44) + *pfVar1;
    *pfVar1 = (16383.0 - ABS(pfVar1[-2])) * 6.103888e-05 * 1000.0 + 2500.0;
    pfVar1 = pfVar1 + 3;
  } while (iVar2 != 0);
  iVar2 = 0;
  *(float *)this = param_1 * *(float *)((int)this + 0x3c) + *(float *)this;
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 0x40) + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 0x44) + *(float *)((int)this + 8);
  do {
    iVar3 = 0;
    if (16383.0 < *(float *)((int)this + iVar2 * 4)) {
      iVar3 = -1;
    }
    if (-16383.0 <= *(float *)((int)this + iVar2 * 4)) {
      if (iVar3 != 0) goto LAB_30017a0f;
    }
    else {
      iVar3 = 1;
LAB_30017a0f:
      iVar4 = 4;
      *(float *)((int)this + iVar2 * 4) =
           (float)(iVar3 * 0x7ffe) + *(float *)((int)this + iVar2 * 4);
      pfVar1 = (float *)((int)this + iVar2 * 4 + 0xc);
      do {
        iVar4 = iVar4 + -1;
        *pfVar1 = (float)(iVar3 * 0x7ffe) + *pfVar1;
        pfVar1 = pfVar1 + 3;
      } while (iVar4 != 0);
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      return;
    }
  } while( true );
}

