// rea decompile_all
// name: FUN_200217f0
// address: 0x200217f0
// body: available
// range: 0x200217f0-0x200218b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200217f0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  uVar4 = 0xffffffff;
  pbVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  puVar6 = DAT_2024b1d8;
  if (~uVar4 - 1 != 0) {
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[7]) {
      pbVar5 = (byte *)*puVar6;
      pbVar2 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_20021848:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_2002184d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_20021848;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_2002184d:
      if ((iVar3 == 0) && ((-1 < *(char *)(puVar6 + 3) || (DAT_2024b1dc != '\0')))) {
        return *puVar6;
      }
    }
    puVar6 = DAT_2024b1d8;
    if (DAT_2024b1d8 != (undefined4 *)0x0) {
      while ((iVar3 = _strncmp((char *)param_1,(char *)*puVar6,~uVar4 - 1), iVar3 != 0 ||
             ((*(char *)(puVar6 + 3) < '\0' && (DAT_2024b1dc == '\0'))))) {
        puVar6 = (undefined4 *)puVar6[7];
        if (puVar6 == (undefined4 *)0x0) {
          return 0;
        }
      }
      return *puVar6;
    }
  }
  return 0;
}

