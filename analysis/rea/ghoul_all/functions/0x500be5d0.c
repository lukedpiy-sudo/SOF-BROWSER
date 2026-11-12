// rea decompile_all
// name: FUN_500be5d0
// address: 0x500be5d0
// body: available
// range: 0x500be5d0-0x500be6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500be5d0(void)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uStack_104;
  undefined1 local_100 [256];
  
  puVar4 = &DAT_50188950;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  bVar1 = (*DAT_5015ca58)(local_100,0x100);
  uStack_104 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar3 = local_100 + uStack_104;
    do {
      puVar3 = puVar3 + -1;
      switch(*puVar3) {
      case 0:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x21:
      case 0x22:
      case 0x23:
        iVar2 = 0x1e;
        DAT_50188975 = 1;
        DAT_5018899c = 1;
        break;
      default:
        goto switchD_500be628_caseD_1;
      case 2:
      case 3:
      case 4:
      case 5:
        iVar2 = 0x16;
        DAT_5018897a = 1;
        DAT_5018899a = 1;
        break;
      case 6:
      case 7:
      case 8:
        iVar2 = 0x12;
        DAT_50188979 = 1;
        DAT_50188998 = 1;
        break;
      case 9:
        iVar2 = 6;
        DAT_5018897b = 1;
        DAT_5018899b = 1;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x1b:
      case 0x24:
        iVar2 = 10;
        DAT_50188976 = 1;
        DAT_5018899d = 1;
        break;
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x28:
        iVar2 = 0x1a;
        DAT_50188977 = 1;
        DAT_5018899e = 1;
        break;
      case 0x19:
      case 0x1a:
        iVar2 = 0xe;
        DAT_50188978 = 1;
        DAT_50188997 = 1;
        break;
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x27:
      case 0x29:
      case 0x2a:
        goto switchD_500be628_caseD_1c;
      case 0x20:
        DAT_501889ab = 1;
        goto switchD_500be628_caseD_1c;
      case 0x25:
      case 0x26:
        DAT_501889a4 = 1;
switchD_500be628_caseD_1c:
        iVar2 = 2;
        DAT_50188999 = 1;
      }
      *(undefined4 *)((int)&DAT_50188950 + iVar2) = 0x1010101;
switchD_500be628_caseD_1:
      uStack_104 = uStack_104 - 1;
    } while (uStack_104 != 0);
  }
  DAT_50188950._0_1_ = 1;
  DAT_50188950._1_1_ = 1;
  return;
}

