// rea decompile_all
// name: FUN_200bdca0
// address: 0x200bdca0
// body: available
// range: 0x200bdca0-0x200bde2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200bdd1d) */

void FUN_200bdca0(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 local_9 [5];
  uint local_4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(in_ECX + 0x18) + 7 + param_2;
    local_9[0] = 0;
    iVar5 = *(int *)(in_ECX + 0xc);
    local_4 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(in_ECX + 0x10) - iVar5;
    }
    if (uVar4 < local_4) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 0x10) - iVar5;
      }
      FUN_2009dd40(*(undefined4 *)(in_ECX + 0x10),local_4 - iVar5,local_9);
    }
    else if ((iVar5 != 0) && (local_4 < (uint)(*(int *)(in_ECX + 0x10) - iVar5))) {
      *(uint *)(in_ECX + 0x10) = iVar5 + local_4;
    }
    iVar5 = *(int *)(in_ECX + 0x18);
    iVar1 = iVar5 + (1 - ((int)(iVar5 + 7 + (iVar5 + 7 >> 0x1f & 7U)) >> 3)) * 8;
    uVar4 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    if (iVar1 == 8) {
      pbVar6 = (byte *)(iVar5 + *(int *)(in_ECX + 0xc));
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pbVar6 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar6 = *param_1;
        param_1 = param_1 + 1;
        pbVar6 = pbVar6 + 1;
      }
      pbVar6 = (byte *)(*(int *)(in_ECX + 0xc) + -1 + local_4);
      *pbVar6 = *pbVar6 & (byte)(0xff >> ((char)uVar4 * '\b' - (char)param_2 & 0x1fU));
    }
    else {
      iVar7 = 0;
      if (0 < (int)uVar4) {
        do {
          pbVar2 = (byte *)(*(int *)(in_ECX + 0xc) + iVar5);
          pbVar6 = param_1 + iVar7;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 1;
          *pbVar2 = *pbVar2 | *pbVar6 << ((byte)iVar1 & 0x1f);
        } while (iVar7 < (int)uVar4);
      }
      iVar7 = (int)(*(int *)(in_ECX + 0x18) + (*(int *)(in_ECX + 0x18) >> 0x1f & 7U)) >> 3;
      for (iVar5 = 8 - iVar1; iVar5 < param_2; iVar5 = iVar5 + 8) {
        iVar7 = iVar7 + 1;
        pbVar6 = (byte *)(*(int *)(in_ECX + 0xc) + iVar7);
        *pbVar6 = *pbVar6 | *param_1 >> ((byte)(8 - iVar1) & 0x1f);
        param_1 = param_1 + 1;
      }
    }
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + param_2;
  }
  return;
}

