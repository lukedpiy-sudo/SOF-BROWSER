// rea decompile_all
// name: FUN_5004fed0
// address: 0x5004fed0
// body: available
// range: 0x5004fed0-0x500500aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5004fed0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  float unaff_retaddr;
  int *local_34;
  int local_30;
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x45c) + 0x30) == 0) {
    return 0;
  }
  local_34 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
  local_30 = param_1;
  (**(code **)(*local_34 + 0xf4))(&local_34);
  uVar1 = *(undefined4 *)(unaff_EBX + 0x2c);
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x70))();
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x6c))();
  switch(uVar1) {
  case 1:
    if (iVar3 < 2) {
      return 0;
    }
    if (unaff_retaddr <= 300.0) {
      return 0;
    }
    bVar6 = unaff_retaddr < 500.0 | (byte)((ushort)((ushort)NAN(unaff_retaddr) << 10) >> 8);
    goto LAB_50050091;
  case 7:
    if (iVar2 < 3) {
      iVar2 = (**(code **)(*DAT_5015c4d8 + 0x68))();
      goto LAB_50050067;
    }
    goto LAB_50050074;
  case 9:
    bVar5 = SBORROW4(iVar2,10);
    iVar3 = -10;
    bVar4 = iVar2 == 10;
    goto LAB_5005005a;
  case 10:
    if ((((3 < iVar2) || (iVar2 = (**(code **)(*DAT_5015c4d8 + 0x68))(), iVar2 != 0)) ||
        (DAT_50159684 == 3)) && (360000.0 < unaff_retaddr)) {
      return 1;
    }
    break;
  case 0xb:
    if ((((10 < iVar2) || (iVar2 = (**(code **)(*DAT_5015c4d8 + 0x68))(), iVar2 != 0)) ||
        (DAT_50159684 == 3)) &&
       ((unaff_retaddr < 90000.0 &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x200) < 0x14)))) {
      return 1;
    }
    break;
  case 0xc:
    bVar5 = SBORROW4(iVar2,6);
    iVar3 = -6;
    bVar4 = iVar2 == 6;
LAB_5005005a:
    if (bVar4 || bVar5 != iVar2 + iVar3 < 0) {
      iVar2 = (**(code **)(*DAT_5015c4d8 + 0x68))();
LAB_50050067:
      if ((iVar2 == 0) && (DAT_50159684 != 3)) {
        return 0;
      }
    }
LAB_50050074:
    if (122500.0 < unaff_retaddr) {
      bVar6 = unaff_retaddr < 250000.0 | (byte)((ushort)((ushort)NAN(unaff_retaddr) << 10) >> 8);
LAB_50050091:
      if ((POPCOUNT(bVar6) & 1U) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

