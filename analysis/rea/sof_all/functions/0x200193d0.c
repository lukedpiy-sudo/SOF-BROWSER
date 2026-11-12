// rea decompile_all
// name: FUN_200193d0
// address: 0x200193d0
// body: available
// range: 0x200193d0-0x200194e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200193d0(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  size_t _MaxCount;
  byte *pbVar7;
  bool bVar8;
  
  uVar6 = 0xffffffff;
  pbVar7 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  _MaxCount = ~uVar6 - 1;
  puVar3 = DAT_20241840;
  if (_MaxCount != 0) {
    for (; puVar2 = DAT_20243c54, puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      pbVar7 = (byte *)puVar3[1];
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_20019425:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_2001942a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_20019425;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_2001942a:
      if (iVar5 == 0) {
        return (undefined4 *)puVar3[1];
      }
    }
    for (; puVar3 = DAT_20241840, puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      pbVar7 = (byte *)(puVar2 + 1);
      pbVar4 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_20019473:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_20019478;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_20019473;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_20019478:
      if (iVar5 == 0) {
        return puVar2 + 1;
      }
    }
    for (; puVar2 = DAT_20243c54, puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
      iVar5 = _strncmp((char *)param_1,(char *)puVar3[1],_MaxCount);
      if (iVar5 == 0) {
        return (undefined4 *)puVar3[1];
      }
    }
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar5 = _strncmp((char *)param_1,(char *)(puVar2 + 1),_MaxCount);
      if (iVar5 == 0) {
        return puVar2 + 1;
      }
    }
  }
  return (undefined4 *)0x0;
}

