// rea decompile_all
// name: FUN_2001e4c0
// address: 0x2001e4c0
// body: available
// range: 0x2001e4c0-0x2001e598 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001e4c0(int param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x10) + 2;
  if (*(int *)(param_1 + 0xc) < iVar1) {
    param_1 = -1;
  }
  else {
    pbVar5 = (byte *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 4));
    param_1 = (int)(short)((ushort)pbVar5[1] * 0x100 + (ushort)*pbVar5);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  *param_2 = (float)param_1 * 0.125;
  iVar1 = *(int *)(iVar4 + 0x10) + 2;
  if (*(int *)(iVar4 + 0xc) < iVar1) {
    param_1 = -1;
  }
  else {
    pbVar5 = (byte *)(*(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 4));
    param_1 = (int)(short)((ushort)pbVar5[1] * 0x100 + (ushort)*pbVar5);
  }
  *(int *)(iVar4 + 0x10) = iVar1;
  param_2[1] = (float)param_1 * 0.125;
  iVar1 = *(int *)(iVar4 + 0x10) + 2;
  if (*(int *)(iVar4 + 0xc) < iVar1) {
    *(int *)(iVar4 + 0x10) = iVar1;
    param_2[2] = -0.125;
    return;
  }
  pbVar5 = (byte *)(*(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 4));
  bVar2 = pbVar5[1];
  bVar3 = *pbVar5;
  *(int *)(iVar4 + 0x10) = iVar1;
  param_2[2] = (float)(int)(short)((ushort)bVar2 * 0x100 + (ushort)bVar3) * 0.125;
  return;
}

