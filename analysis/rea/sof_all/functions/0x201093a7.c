// rea decompile_all
// name: FUN_201093a7
// address: 0x201093a7
// body: available
// range: 0x201093a7-0x201095eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_201093a7(void)

{
  BYTE *pBVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  _cpinfo local_28;
  undefined2 *local_14;
  undefined2 *local_10;
  undefined2 *local_c;
  void *local_8;
  
  uVar9 = 0;
  local_8 = (void *)0x0;
  local_c = (undefined2 *)0x0;
  if (DAT_20408470 == 0) {
    PTR_DAT_2015d2b8 = &DAT_2015d2c2;
    PTR_DAT_2015d2bc = &DAT_2015d2c2;
    FUN_200f9d32(DAT_204087bc);
    FUN_200f9d32(DAT_204087c0);
    DAT_204087bc = (undefined2 *)0x0;
    DAT_204087c0 = (undefined2 *)0x0;
    return 0;
  }
  if ((DAT_20408480 != 0) || (iVar3 = FUN_2010a016(0,DAT_204087d0,0x1004,&DAT_20408480), iVar3 == 0)
     ) {
    puVar4 = _malloc(0x202);
    local_14 = puVar4;
    local_10 = _malloc(0x202);
    local_8 = _malloc(0x101);
    local_c = _malloc(0x202);
    if ((puVar4 != (undefined2 *)0x0) &&
       (((local_10 != (undefined2 *)0x0 && (local_8 != (void *)0x0)) &&
        (local_c != (undefined2 *)0x0)))) {
      iVar3 = 0;
      do {
        *(char *)(iVar3 + (int)local_8) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar5 = GetCPInfo(DAT_20408480,&local_28);
      if ((BVar5 != 0) && (local_28.MaxCharSize < 3)) {
        DAT_2015d4c4 = local_28.MaxCharSize & 0xffff;
        if ((1 < DAT_2015d4c4) && (local_28.LeadByte[0] != '\0')) {
          pBVar6 = local_28.LeadByte + 1;
          do {
            bVar2 = *pBVar6;
            if (bVar2 == 0) break;
            for (uVar7 = (uint)pBVar6[-1]; (int)uVar7 <= (int)(uint)bVar2; uVar7 = uVar7 + 1) {
              *(undefined1 *)(uVar7 + (int)local_8) = 0;
              bVar2 = *pBVar6;
            }
            pBVar1 = pBVar6 + 1;
            pBVar6 = pBVar6 + 2;
          } while (*pBVar1 != 0);
        }
        iVar3 = FUN_2010567e(1,local_8,0x100,puVar4 + 1,0,0,0);
        if (iVar3 != 0) {
          *puVar4 = 0;
          iVar3 = 0;
          puVar4 = local_c;
          do {
            *puVar4 = (short)iVar3;
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x100);
          puVar4 = local_10 + 1;
          iVar3 = FUN_2010a14e(1,local_c,0x100,puVar4,0,0);
          if (iVar3 != 0) {
            *local_10 = 0;
            if ((1 < (int)DAT_2015d4c4) && (local_28.LeadByte[0] != '\0')) {
              pBVar6 = local_28.LeadByte + 1;
              do {
                if (*pBVar6 == 0) break;
                uVar7 = (uint)pBVar6[-1];
                if (uVar7 <= *pBVar6) {
                  puVar8 = local_14 + uVar7 + 1;
                  do {
                    *puVar8 = 0x8000;
                    uVar7 = uVar7 + 1;
                    puVar8 = puVar8 + 1;
                  } while ((int)uVar7 <= (int)(uint)*pBVar6);
                }
                pBVar1 = pBVar6 + 1;
                pBVar6 = pBVar6 + 2;
              } while (*pBVar1 != 0);
            }
            PTR_DAT_2015d2b8 = (undefined *)(local_14 + 1);
            PTR_DAT_2015d2bc = (undefined *)puVar4;
            if (DAT_204087bc != (undefined2 *)0x0) {
              FUN_200f9d32(DAT_204087bc);
            }
            DAT_204087bc = local_14;
            if (DAT_204087c0 != (undefined2 *)0x0) {
              FUN_200f9d32(DAT_204087c0);
            }
            DAT_204087c0 = local_10;
            goto LAB_20109585;
          }
        }
      }
    }
  }
  FUN_200f9d32(local_14);
  FUN_200f9d32(local_10);
  uVar9 = 1;
LAB_20109585:
  FUN_200f9d32(local_8);
  FUN_200f9d32(local_c);
  return uVar9;
}

