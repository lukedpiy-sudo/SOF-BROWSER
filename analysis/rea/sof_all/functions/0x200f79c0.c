// rea decompile_all
// name: FUN_200f79c0
// address: 0x200f79c0
// body: available
// range: 0x200f79c0-0x200f7b99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f79c0(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_14;
  char *local_10 [4];
  
  if ((byte *)((int)param_2 + 1) != (byte *)0x0) {
    DAT_20407a00 = (byte *)((int)param_2 + 1);
  }
  param_2 = DAT_20407a00;
  bVar1 = *DAT_20407a00;
  if (bVar1 != 0) {
    do {
      if (bVar1 == 0x5c) break;
      DAT_20407a00 = DAT_20407a00 + 1;
      bVar1 = *DAT_20407a00;
    } while (bVar1 != 0);
    if (DAT_20407a00 != param_2) goto LAB_200f79f8;
  }
  param_2 = (byte *)0x0;
LAB_200f79f8:
  if (*DAT_20407a00 != 0) {
    *DAT_20407a00 = 0;
    DAT_20407a00 = DAT_20407a00 + 1;
  }
  if (param_2 != (byte *)0x0) {
    local_10[0] = s_queryid_2015a900;
    local_10[1] = s_final_2013aa08;
    local_14 = DAT_20407a00;
    do {
      bVar1 = *local_14;
      pbVar7 = local_14;
      if (bVar1 == 0) {
LAB_200f7a47:
        local_14 = (byte *)0x0;
      }
      else {
        do {
          if (bVar1 == 0x5c) break;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar7;
          DAT_20407a00 = pbVar7;
        } while (bVar1 != 0);
        if (pbVar7 == local_14) goto LAB_200f7a47;
      }
      if (*pbVar7 != 0) {
        *pbVar7 = 0;
        pbVar7 = DAT_20407a00 + 1;
        DAT_20407a00 = pbVar7;
      }
      if (local_14 == (byte *)0x0) {
        local_14 = &DAT_2015ee44;
      }
      uVar5 = 0;
      do {
        pbVar6 = (byte *)local_10[uVar5];
        pbVar2 = param_2;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_200f7a9a:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_200f7a9f;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_200f7a9a;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_200f7a9f:
        if (iVar3 == 0) goto LAB_200f7b54;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      puVar4 = (undefined4 *)FUN_200f9600(*(undefined4 *)(param_1 + 0x10),&param_2);
      if (puVar4 == (undefined4 *)0x0) {
        param_2 = (byte *)FUN_200fcecc(param_2);
        FUN_200f9550(*(undefined4 *)(param_1 + 0x10),&param_2);
        local_10[2] = (char *)param_2;
      }
      else {
        local_10[2] = (char *)*puVar4;
      }
      param_2 = local_14;
      puVar4 = (undefined4 *)FUN_200f9600(*(undefined4 *)(param_1 + 0x10),&param_2);
      if (puVar4 == (undefined4 *)0x0) {
        param_2 = (byte *)FUN_200fcecc(param_2);
        FUN_200f9550(*(undefined4 *)(param_1 + 0x10),&param_2);
        local_10[3] = (char *)param_2;
      }
      else {
        local_10[3] = (char *)*puVar4;
      }
      FUN_200f9550(*(undefined4 *)(param_1 + 0xc),local_10 + 2);
      pbVar7 = DAT_20407a00;
LAB_200f7b54:
      param_2 = pbVar7;
      bVar1 = *param_2;
      local_14 = param_2;
      if (bVar1 == 0) {
LAB_200f7b71:
        param_2 = (byte *)0x0;
      }
      else {
        do {
          if (bVar1 == 0x5c) break;
          local_14 = local_14 + 1;
          bVar1 = *local_14;
          DAT_20407a00 = local_14;
        } while (bVar1 != 0);
        if (local_14 == param_2) goto LAB_200f7b71;
      }
      if (*local_14 != 0) {
        *local_14 = 0;
        local_14 = DAT_20407a00 + 1;
        DAT_20407a00 = local_14;
      }
    } while (param_2 != (byte *)0x0);
  }
  return;
}

