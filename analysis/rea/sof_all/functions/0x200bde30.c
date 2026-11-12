// rea decompile_all
// name: FUN_200bde30
// address: 0x200bde30
// body: available
// range: 0x200bde30-0x200be056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200bde30(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  byte local_c [8];
  uint local_4;
  
  uVar5 = 0xffffffff;
  pbVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    bVar7 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar7 != 0);
  if (0xfa < ~uVar5 - 1) {
    FUN_2008e9e0(s__7Huge_Ghoul_String_2015805e + 2);
  }
  uVar5 = 0;
  uVar8 = DAT_2013adf0;
  uVar11 = DAT_2013adf0;
  if (DAT_2013adf0 != 0) {
    do {
      uVar10 = (int)(uVar8 - uVar5) / 2 + uVar5;
      pbVar6 = (&PTR_DAT_2013adf8)[uVar10];
      pbVar9 = param_1;
      do {
        bVar7 = *pbVar6;
        bVar12 = bVar7 < *pbVar9;
        if (bVar7 != *pbVar9) {
LAB_200bdea8:
          iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_200bdead;
        }
        if (bVar7 == 0) break;
        bVar7 = pbVar6[1];
        bVar12 = bVar7 < pbVar9[1];
        if (bVar7 != pbVar9[1]) goto LAB_200bdea8;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar7 != 0);
      iVar4 = 0;
LAB_200bdead:
      if (iVar4 < 0) {
        uVar5 = uVar10 + 1;
        uVar10 = uVar8;
      }
      else {
        uVar11 = uVar10;
        if (iVar4 < 1) break;
      }
      uVar8 = uVar10;
      uVar11 = DAT_2013adf0;
    } while (uVar5 != uVar10);
  }
  local_4 = uVar11;
  if ((int)DAT_2013adf0 <= (int)(uVar11 & 0xffff)) {
    local_c[0] = 0;
    FUN_200bdca0(local_c,1);
    uVar5 = 0xffffffff;
    pbVar6 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar7 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar7 != 0);
    local_4 = 0;
    FUN_200bda00(param_1,&DAT_204058c0,~uVar5 - 1,&local_4);
    uVar5 = local_4;
    if (0xff < (int)local_4) {
      FUN_2008e9e0(s__7Huge_Ghoul_String_2015805e + 2);
    }
    bVar7 = (byte)uVar5;
    iVar4 = 1;
    local_c[0] = bVar7;
    if (bVar7 == 0) {
      pbVar6 = (byte *)&param_1;
      param_1 = (byte *)((uint)param_1._1_3_ << 8);
    }
    else {
      param_1 = (byte *)CONCAT31(param_1._1_3_,1);
      FUN_200bdca0(&param_1,1);
      param_1 = (byte *)0x0;
      bVar2 = 4;
      do {
        if (bVar7 < bVar2) break;
        param_1 = (byte *)((int)param_1 + 1);
        bVar1 = bVar2 & 0x3f;
        bVar2 = bVar2 << 2;
      } while (bVar1 != 0);
      FUN_200bdca0(&param_1,2);
      pbVar6 = local_c;
      iVar4 = (int)param_1 * 2 + 2;
    }
    FUN_200bdca0(pbVar6,iVar4);
    FUN_200bdca0(&DAT_204058c0,uVar5 * 8);
    return;
  }
  param_1._0_1_ = 1;
  FUN_200bdca0(&param_1,1);
  if ((ushort)uVar11 == 0) {
    param_1 = (byte *)((uint)param_1._1_3_ << 8);
    FUN_200bdca0(&param_1,1);
    return;
  }
  param_1 = (byte *)CONCAT31(param_1._1_3_,1);
  FUN_200bdca0(&param_1,1);
  param_1 = (byte *)0x0;
  uVar3 = 0x10;
  do {
    if ((ushort)uVar11 < uVar3) break;
    uVar3 = uVar3 << 4;
    param_1 = (byte *)((int)param_1 + 1);
  } while (uVar3 != 0);
  FUN_200bdca0(&param_1,2);
  FUN_200bdca0(&local_4,(int)param_1 * 4 + 4);
  return;
}

