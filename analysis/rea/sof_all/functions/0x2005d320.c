// rea decompile_all
// name: FUN_2005d320
// address: 0x2005d320
// body: available
// range: 0x2005d320-0x2005d528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2005d320(byte *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *_Str1;
  undefined1 *puVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int local_4;
  
  iVar5 = -1;
  local_4 = -1;
  if (((param_1 != (byte *)0x0) && (bVar1 = *param_1, bVar1 != 0)) &&
     (((bVar1 != 0x2f && (bVar1 != 0x5c)) ||
      (pbVar3 = param_1 + 1, param_1 = param_1 + 1, *pbVar3 != 0)))) {
    iVar9 = 1;
    if (1 < param_3) {
      _Str1 = &DAT_203a23b4 + param_2 * 0x40;
      do {
        if (*_Str1 == '\0') {
          if (iVar5 == -1) {
            iVar5 = iVar9;
            local_4 = iVar9;
          }
        }
        else {
          iVar2 = __strcmpi(_Str1,(char *)param_1);
          if (iVar2 == 0) {
            return iVar9;
          }
        }
        iVar9 = iVar9 + 1;
        _Str1 = _Str1 + 0x40;
      } while (iVar9 < param_3);
    }
    if (param_4 != 0) {
      if (iVar5 == -1) {
        iVar5 = iVar9;
        local_4 = iVar9;
      }
      if (iVar5 == param_3) {
        Com_Printf(s_Items_in_Slot__20139720);
        iVar9 = 1;
        if (1 < param_3) {
          puVar7 = &DAT_203a23b4 + param_2 * 0x40;
          do {
            Com_Printf(s__d___s_20139718,iVar9,puVar7);
            iVar9 = iVar9 + 1;
            puVar7 = puVar7 + 0x40;
          } while (iVar9 < param_3);
        }
        Com_Error(1,s__Index___s_overflow_20139704,param_5);
      }
      _strncpy(&DAT_203a2374 + (param_2 + iVar5) * 0x40,(char *)param_1,0x40);
      if (DAT_203a1f20 != 1) {
        FUN_2001e730(&DAT_203f6c34);
        FUN_2001cb00(&DAT_203f6c34,0xf);
        FUN_2001cb70(&DAT_203f6c34,param_2 + iVar5);
        uVar6 = 0;
        uVar4 = DAT_201217a8;
        uVar11 = DAT_201217a8;
        if (DAT_201217a8 != 0) {
          do {
            uVar10 = (int)(uVar4 - uVar6) / 2 + uVar6;
            pbVar3 = (&PTR_DAT_201217b0)[uVar10];
            pbVar8 = param_1;
            do {
              bVar1 = *pbVar3;
              bVar12 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_2005d4b0:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_2005d4b5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar12 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_2005d4b0;
              pbVar3 = pbVar3 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_2005d4b5:
            if (iVar5 < 0) {
              uVar6 = uVar10 + 1;
              uVar10 = uVar4;
            }
            else {
              uVar11 = uVar10;
              if (iVar5 < 1) break;
            }
            uVar4 = uVar10;
            uVar11 = DAT_201217a8;
          } while (uVar6 != uVar10);
        }
        uVar11 = uVar11 & 0xffff;
        if ((int)DAT_201217a8 <= (int)uVar11) {
          uVar11 = 0xffffffff;
        }
        FUN_2001cb70(&DAT_203f6c34,uVar11);
        if ((int)uVar11 < 0) {
          FUN_2001cd00(&DAT_203f6c34,param_1);
        }
        FUN_20061a80(&DAT_20390c24,3,0);
        iVar5 = local_4;
      }
      return iVar5;
    }
  }
  return 0;
}

