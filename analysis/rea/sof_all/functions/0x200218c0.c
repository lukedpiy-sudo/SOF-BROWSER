// rea decompile_all
// name: FUN_200218c0
// address: 0x200218c0
// body: available
// range: 0x200218c0-0x200219dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200218c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  uVar5 = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  if (~uVar5 - 1 != 0) {
    puVar2 = DAT_2024b1d8;
    puVar7 = DAT_2024b1d8;
    if (param_2 == (byte *)0x0) {
joined_r0x20021947:
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[7]) {
        pbVar6 = (byte *)*puVar2;
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_20021974:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_20021979;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_20021974;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_20021979:
        if ((iVar4 == 0) && ((-1 < *(char *)(puVar2 + 3) || (DAT_2024b1dc != '\0')))) {
          return *puVar2;
        }
      }
      if (puVar7 != (undefined4 *)0x0) {
        while ((iVar4 = _strncmp((char *)param_1,(char *)*puVar7,~uVar5 - 1), iVar4 != 0 ||
               ((*(char *)(puVar7 + 3) < '\0' && (DAT_2024b1dc == '\0'))))) {
          puVar7 = (undefined4 *)puVar7[7];
          if (puVar7 == (undefined4 *)0x0) {
            return 0;
          }
        }
        return *puVar7;
      }
    }
    else {
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[7]) {
        pbVar6 = (byte *)*puVar2;
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_20021919:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_2002191e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_20021919;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_2002191e:
        if ((iVar4 == 0) && ((-1 < *(char *)(puVar2 + 3) || (DAT_2024b1dc != '\0')))) {
          puVar2 = (undefined4 *)puVar2[7];
          puVar7 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            return 0;
          }
          goto joined_r0x20021947;
        }
      }
    }
  }
  return 0;
}

