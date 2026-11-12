// rea decompile_all
// name: FUN_500b87c0
// address: 0x500b87c0
// body: available
// range: 0x500b87c0-0x500b8965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b87c0(float param_1)

{
  int iVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(uint *)((int)param_1 + 0x1a0) & 0x400) == 0) {
    DAT_5015db30 = (undefined4 *)&DAT_5015db38;
    fVar2 = param_1;
    do {
      if ((((*(float *)((int)fVar2 + 0x24c) != 0.0) || (*(float *)((int)fVar2 + 0x250) != 0.0)) ||
          (*(float *)((int)fVar2 + 0x254) != 0.0)) ||
         (((*(float *)((int)fVar2 + 600) != 0.0 || (*(float *)((int)fVar2 + 0x25c) != 0.0)) ||
          (*(float *)((int)fVar2 + 0x260) != 0.0)))) {
        local_c = *(float *)((int)fVar2 + 0x24c) * 0.1;
        local_8 = *(float *)((int)fVar2 + 0x250) * 0.1;
        local_4 = *(float *)((int)fVar2 + 0x254) * 0.1;
        local_18 = *(float *)((int)fVar2 + 600) * 0.1;
        local_14 = *(float *)((int)fVar2 + 0x25c) * 0.1;
        local_10 = *(float *)((int)fVar2 + 0x260) * 0.1;
        iVar1 = FUN_500b8220(fVar2,&local_c,&local_18);
        if (iVar1 == 0) break;
      }
      fVar2 = *(float *)((int)fVar2 + 0x33c);
    } while (fVar2 != 0.0);
    if (&DAT_50165b38 < DAT_5015db30) {
      (*DAT_5015cb10)(0,s_pushed_p_>__pushed_MAX_EDICTS___m_5014d504);
    }
    if (fVar2 == 0.0) {
      do {
        FUN_500b7650((int)param_1);
        param_1 = *(float *)((int)param_1 + 0x33c);
      } while (param_1 != 0.0);
    }
    else {
      do {
        if (0.0 < *(float *)((int)param_1 + 0x2b4)) {
          *(float *)((int)param_1 + 0x2b4) = *(float *)((int)param_1 + 0x2b4) + 0.1;
        }
        param_1 = *(float *)((int)param_1 + 0x33c);
      } while (param_1 != 0.0);
      if (*(code **)((int)fVar2 + 700) != (code *)0x0) {
        (**(code **)((int)fVar2 + 700))(fVar2,DAT_50165b38);
        return;
      }
    }
  }
  return;
}

