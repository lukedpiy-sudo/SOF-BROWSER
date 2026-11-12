// rea decompile_all
// name: FUN_2001a640
// address: 0x2001a640
// body: available
// range: 0x2001a640-0x2001a837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2001a640(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  DAT_20248df0 = DAT_20248d70;
  DAT_20248de8 = DAT_20248d94 + DAT_20248e04 * 0x14;
  if ((((0x10000 < DAT_20248d70 + 6) || (0x2000 < _DAT_20248d88 + 1)) ||
      (0x10000 < DAT_20248de4 + 1)) ||
     ((0x10000 < DAT_20244cb0 + 6 || (0x10000 < DAT_20248e04 + 0xc)))) {
    Com_Error(1,s_Not_enough_room_for_box_tree_201205b0);
  }
  DAT_20248d9c = (undefined4 *)(_DAT_20248d88 * 0x10 + DAT_20244c5c);
  DAT_20248d9c[1] = 6;
  DAT_20248d9c[2] = DAT_20244cb0;
  *DAT_20248d9c = 0x2000000;
  DAT_20248d6c = (undefined4 *)(DAT_20246ce4 + DAT_201204a4 * 0x3c);
  *DAT_20248d6c = 0x2000000;
  *(undefined2 *)(DAT_20248d6c + 0xe) = (undefined2)DAT_20248de4;
  *(undefined2 *)((int)DAT_20248d6c + 0x3a) = 1;
  *(undefined2 *)(DAT_20244cbc + DAT_20248de4 * 2) = DAT_20248d88;
  uVar2 = 0;
  do {
    iVar6 = DAT_20248d94;
    piVar1 = (int *)(DAT_20244c58 + (DAT_20244cb0 + uVar2) * 8);
    uVar3 = uVar2 & 1;
    iVar5 = DAT_20248e04 + uVar2 * 2;
    piVar1[1] = (int)&DAT_20246d10;
    *piVar1 = iVar6 + (iVar5 + uVar3) * 0x14;
    iVar5 = DAT_20246d64 + (DAT_20248df0 + uVar2) * 0x3c;
    *(uint *)(iVar5 + 0x24) = DAT_20248d94 + (DAT_20248e04 + uVar2 * 2) * 0x14;
    *(int *)(iVar5 + 0x30 + uVar3 * 4) = -1 - DAT_20246d58;
    if (uVar2 == 5) {
      iVar6 = -1 - DAT_201204a4;
    }
    else {
      iVar6 = DAT_20248df0 + 1 + uVar2;
    }
    *(int *)(iVar5 + 0x30 + (uVar3 ^ 1) * 4) = iVar6;
    puVar4 = (undefined4 *)(DAT_20248de8 + uVar2 * 0x28);
    iVar5 = (int)uVar2 >> 1;
    *(char *)(puVar4 + 4) = (char)iVar5;
    *(undefined1 *)((int)puVar4 + 0x11) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[iVar5] = 0x3f800000;
    puVar4 = (undefined4 *)(uVar2 * 0x28 + 0x14 + DAT_20248de8);
    *(char *)(puVar4 + 4) = (char)iVar5 + '\x03';
    uVar2 = uVar2 + 1;
    *(undefined1 *)((int)puVar4 + 0x11) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[iVar5] = 0xbf800000;
  } while ((int)uVar2 < 6);
  return;
}

