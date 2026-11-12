// rea decompile_all
// name: FUN_2001c0f0
// address: 0x2001c0f0
// body: available
// range: 0x2001c0f0-0x2001c1a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2001c0f0(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar5 = DAT_201204a8 + 7 >> 3;
  uVar4 = uVar5 >> 2;
  puVar6 = param_1;
  if (*(float *)(DAT_20244ccc + 0x18) == 0.0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar2 = *(int *)(param_2 * 0x10 + 8 + DAT_20244cd0);
    iVar3 = 0;
    if (0 < DAT_201204a8) {
      iVar7 = 0;
      do {
        if ((*(int *)(iVar7 + 8 + DAT_20244cd0) == iVar2) || (param_2 == 0)) {
          pbVar1 = (byte *)((iVar3 >> 3) + (int)param_1);
          *pbVar1 = *pbVar1 | '\x01' << ((byte)iVar3 & 7);
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar3 < DAT_201204a8);
    }
    return uVar5;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = 0xffffffff;
    param_1 = param_1 + 1;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_1 = 0xff;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return uVar5;
}

