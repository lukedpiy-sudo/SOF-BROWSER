// rea decompile_all
// name: FUN_20019250
// address: 0x20019250
// body: available
// range: 0x20019250-0x200193c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_20019250(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  size_t _MaxCount;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  uVar5 = 0xffffffff;
  pbVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  _MaxCount = ~uVar5 - 1;
  if (_MaxCount != 0) {
    puVar8 = DAT_20241840;
    puVar6 = DAT_20241840;
    if (param_2 == (byte *)0x0) {
joined_r0x200192d3:
      for (; puVar2 = DAT_20243c54, puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
        pbVar7 = (byte *)puVar8[1];
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_200192fe:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_20019303;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_200192fe;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_20019303:
        if (iVar4 == 0) {
          return (undefined4 *)puVar8[1];
        }
      }
      for (; puVar8 = DAT_20243c54, puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
        pbVar7 = (byte *)(puVar2 + 1);
        pbVar3 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_20019348:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_2001934d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_20019348;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_2001934d:
        if (iVar4 == 0) {
          return puVar2 + 1;
        }
      }
      for (; DAT_20243c54 = puVar8, puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
        iVar4 = _strncmp((char *)param_1,(char *)puVar6[1],_MaxCount);
        if (iVar4 == 0) {
          return (undefined4 *)puVar6[1];
        }
        puVar8 = DAT_20243c54;
      }
      if (puVar8 != (undefined4 *)0x0) {
        do {
          iVar4 = _strncmp((char *)param_1,(char *)(puVar8 + 1),_MaxCount);
          if (iVar4 == 0) {
            return puVar8 + 1;
          }
          puVar8 = (undefined4 *)*puVar8;
        } while (puVar8 != (undefined4 *)0x0);
        return (undefined4 *)0x0;
      }
    }
    else {
      for (; puVar8 != (undefined4 *)0x0; puVar8 = (undefined4 *)*puVar8) {
        pbVar7 = (byte *)puVar8[1];
        pbVar3 = param_2;
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_200192a6:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_200192ab;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_200192a6;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_200192ab:
        if (iVar4 == 0) {
          puVar8 = (undefined4 *)*puVar8;
          puVar6 = puVar8;
          if (puVar8 == (undefined4 *)0x0) {
            return (undefined4 *)0x0;
          }
          goto joined_r0x200192d3;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

