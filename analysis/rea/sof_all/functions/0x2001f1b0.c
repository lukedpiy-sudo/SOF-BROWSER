// rea decompile_all
// name: FUN_2001f1b0
// address: 0x2001f1b0
// body: available
// range: 0x2001f1b0-0x2001f240 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001f1b0(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte local_40 [64];
  
  uVar4 = param_3 % 0xbb4;
  if (0x3c < (int)param_2) {
    param_2 = 0x3c;
    Com_DPrintf(&DAT_20121474);
  }
  pbVar5 = local_40;
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pbVar5 = pbVar5 + 4;
  }
  bVar1 = *(byte *)((int)&DAT_20120648 + uVar4 + 1);
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  bVar2 = *(byte *)((int)&DAT_20120648 + uVar4);
  local_40[param_2 + 1] = bVar1;
  local_40[param_2] = bVar2 ^ (byte)param_3;
  local_40[param_2 + 2] = (byte)(param_3 >> 8) ^ *(byte *)((int)&DAT_20120648 + uVar4 + 2);
  local_40[param_2 + 3] = *(byte *)((int)&DAT_20120648 + uVar4 + 3);
  FUN_2004d150(local_40,param_2 + 4);
  return;
}

