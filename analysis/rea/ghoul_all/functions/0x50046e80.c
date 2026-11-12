// rea decompile_all
// name: FUN_50046e80
// address: 0x50046e80
// body: available
// range: 0x50046e80-0x5004700b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50046e80(int param_1)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [4];
  float fStack_34;
  
  local_6c = 1.0;
  local_74 = 0.0;
  pfVar1 = (float *)(param_1 + 0x18);
  do {
    fVar3 = (float10)fcos((float10)local_74);
    local_48 = *(undefined4 *)(param_1 + 0x20);
    fVar4 = (float10)fsin((float10)local_74);
    local_50 = (float)fVar3 * 1024.0 + *pfVar1;
    local_4c = (float)fVar4 * 1024.0 + *(float *)(param_1 + 0x1c);
    (*DAT_5015cac0)(pfVar1,0,0,&local_50,0,1,local_38);
    fStack_70 = fStack_34;
    for (fVar2 = fStack_34 * 1024.0; 0.0 < fVar2; fVar2 = fVar2 - 32.0) {
      fStack_5c = fVar2 * (float)fVar3 + *pfVar1;
      fStack_58 = fVar2 * (float)fVar4 + *(float *)(param_1 + 0x1c);
      fStack_54 = fVar2 * 0.0 + *(float *)(param_1 + 0x20);
      fStack_3c = fStack_54 - 56.0;
      fStack_44 = fStack_5c;
      fStack_40 = fStack_58;
      (*DAT_5015cac0)(&fStack_5c,0,0,&fStack_44,0,1,local_38);
      if (fStack_34 == 1.0) {
        fStack_70 = fVar2 * 0.0009765625;
      }
    }
    if (fStack_70 < local_6c) {
      local_6c = fStack_70;
    }
    local_74 = local_74 + 0.31415927;
  } while (local_74 < 6.2831855);
  *(float *)(param_1 + 0x34) = local_6c * 1024.0;
  return;
}

