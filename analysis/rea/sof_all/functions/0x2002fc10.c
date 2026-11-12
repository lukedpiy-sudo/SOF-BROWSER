// rea decompile_all
// name: FUN_2002fc10
// address: 0x2002fc10
// body: available
// range: 0x2002fc10-0x2002fc9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002fc10(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 float param_5,undefined4 param_6)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_2002fb90(param_1);
  *(undefined4 *)(iVar2 + 0x10) = *param_2;
  *(undefined4 *)(iVar2 + 0x14) = param_2[1];
  *(undefined4 *)(iVar2 + 0x18) = param_2[2];
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  *(float *)(iVar2 + 4) = (float)(param_3 & 0xff) * 0.00390625;
  *(float *)(iVar2 + 8) = (float)(param_3 >> 8 & 0xff) * 0.00390625;
  *(float *)(iVar2 + 0xc) = (float)(param_3._2_2_ & 0xff) * 0.00390625;
  fVar1 = (float)DAT_201c1f1c;
  *(undefined4 *)(iVar2 + 0x24) = param_6;
  *(float *)(iVar2 + 0x20) = fVar1 + param_5;
  return;
}

