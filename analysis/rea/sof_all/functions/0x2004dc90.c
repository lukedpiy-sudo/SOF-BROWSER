// rea decompile_all
// name: FUN_2004dc90
// address: 0x2004dc90
// body: available
// range: 0x2004dc90-0x2004dd4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004dc90(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar1 = *param_1;
  if (iVar1 == 1) {
    *(undefined2 *)param_2 = 2;
    *(undefined2 *)((int)param_2 + 2) = *(undefined2 *)((int)param_1 + 0x12);
    param_2[1] = 0xffffffff;
    return;
  }
  if (iVar1 == 2) {
    *(undefined2 *)param_2 = 2;
    param_2[1] = param_1[1];
    *(undefined2 *)((int)param_2 + 2) = *(undefined2 *)((int)param_1 + 0x12);
    return;
  }
  if (iVar1 == 3) {
    *(undefined2 *)param_2 = 6;
    if (*(float *)(DAT_2036fef4 + 0x18) == 0.0) {
      *(int *)((int)param_2 + 2) = param_1[2];
    }
    else {
      *(undefined1 *)((int)param_2 + 2) = 0;
    }
    *(int *)((int)param_2 + 6) = param_1[3];
    *(short *)((int)param_2 + 10) = (short)param_1[4];
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)((int)param_1 + 0x12);
    return;
  }
  if (iVar1 == 4) {
    *(undefined2 *)param_2 = 6;
    *(undefined4 *)((int)param_2 + 2) = 0;
    *(undefined4 *)((int)param_2 + 6) = 0xffffffff;
    *(undefined2 *)((int)param_2 + 10) = 0xffff;
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)((int)param_1 + 0x12);
  }
  return;
}

