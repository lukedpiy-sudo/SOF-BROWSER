// rea decompile_all
// name: FUN_2003b520
// address: 0x2003b520
// body: available
// range: 0x2003b520-0x2003b692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003b520(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_1[0x21];
  if (((uint)param_1[0xe] & 4) != 0) {
    fVar3 = param_1[3] - *param_1;
    fVar4 = param_1[4] - param_1[1];
    fVar5 = param_1[5] - param_1[2];
    fVar1 = param_1[0x1e];
    *param_1 = fVar1 * *(float *)((int)fVar2 + 0x24) + *(float *)((int)fVar2 + 0xc);
    param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x28) + *(float *)((int)fVar2 + 0x10);
    param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x2c) + *(float *)((int)fVar2 + 0x14);
    fVar1 = param_1[0x1f];
    *param_1 = fVar1 * *(float *)((int)fVar2 + 0x3c) + *param_1;
    param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x40) + param_1[1];
    param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x44) + param_1[2];
    fVar1 = param_1[0x20];
    *param_1 = fVar1 * *(float *)((int)fVar2 + 0x30) + *param_1;
    param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x34) + param_1[1];
    param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x38) + param_1[2];
    param_1[3] = fVar3 * *(float *)((int)fVar2 + 0x24) + *param_1;
    param_1[4] = fVar3 * *(float *)((int)fVar2 + 0x28) + param_1[1];
    param_1[5] = fVar3 * *(float *)((int)fVar2 + 0x2c) + param_1[2];
    fVar2 = param_1[0x21];
    param_1[3] = fVar4 * *(float *)((int)fVar2 + 0x3c) + param_1[3];
    param_1[4] = fVar4 * *(float *)((int)fVar2 + 0x40) + param_1[4];
    param_1[5] = fVar4 * *(float *)((int)fVar2 + 0x44) + param_1[5];
    fVar2 = param_1[0x21];
    param_1[3] = fVar5 * *(float *)((int)fVar2 + 0x30) + param_1[3];
    param_1[4] = fVar5 * *(float *)((int)fVar2 + 0x34) + param_1[4];
    param_1[5] = fVar5 * *(float *)((int)fVar2 + 0x38) + param_1[5];
    return;
  }
  fVar1 = param_1[0x1e];
  *param_1 = fVar1 * *(float *)((int)fVar2 + 0x24) + *(float *)((int)fVar2 + 0xc);
  param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x28) + *(float *)((int)fVar2 + 0x10);
  param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x2c) + *(float *)((int)fVar2 + 0x14);
  fVar1 = param_1[0x1f];
  *param_1 = fVar1 * *(float *)((int)fVar2 + 0x3c) + *param_1;
  param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x40) + param_1[1];
  param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x44) + param_1[2];
  fVar1 = param_1[0x20];
  *param_1 = fVar1 * *(float *)((int)fVar2 + 0x30) + *param_1;
  param_1[1] = fVar1 * *(float *)((int)fVar2 + 0x34) + param_1[1];
  param_1[2] = fVar1 * *(float *)((int)fVar2 + 0x38) + param_1[2];
  return;
}

