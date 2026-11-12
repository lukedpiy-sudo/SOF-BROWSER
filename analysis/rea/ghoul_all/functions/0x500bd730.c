// rea decompile_all
// name: FUN_500bd730
// address: 0x500bd730
// body: available
// range: 0x500bd730-0x500bd8d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd730(char *param_1,byte *param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 *extraout_ECX;
  uint uVar9;
  undefined **ppuVar10;
  byte *pbVar11;
  float10 fVar12;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  ppuVar10 = &PTR_s_classname_5014ed70;
  puVar4 = PTR_s_classname_5014ed70;
  do {
    if (puVar4 == (undefined *)0x0) {
      (*DAT_5015ca24)(s__s_is_not_a_field_5014fefc,param_1);
switchD_500bd799_default:
      return;
    }
    iVar6 = __strcmpi(*ppuVar10,param_1);
    if (iVar6 == 0) {
      if (((uint)ppuVar10[3] & 1) == 0) {
        param_1 = (char *)param_3;
      }
      else {
        param_1 = (char *)&DAT_5015cb90;
        param_3 = extraout_ECX;
      }
      switch(ppuVar10[2]) {
      case (undefined *)0x0:
        uVar8 = FUN_5010839e(param_2,param_2);
        *(undefined4 *)(param_1 + (int)ppuVar10[1]) = uVar8;
        return;
      case (undefined *)0x1:
        uVar5 = FUN_5010839e(param_3,param_2);
        *(undefined2 *)(param_1 + (int)ppuVar10[1]) = uVar5;
        return;
      case (undefined *)0x2:
        fVar12 = FUN_501083a9((undefined *)param_3,param_2);
        *(float *)(param_1 + (int)ppuVar10[1]) = (float)fVar12;
        return;
      case (undefined *)0x3:
        uVar9 = 0xffffffff;
        pbVar11 = param_2;
        break;
      case (undefined *)0x4:
        FUN_50108004((char *)param_2,(byte *)s__f__f__f_50145ee8);
        *(undefined4 *)(param_1 + (int)ppuVar10[1]) = local_c;
        *(undefined4 *)(param_1 + (int)(ppuVar10[1] + 4)) = local_8;
        *(undefined4 *)(param_1 + (int)(ppuVar10[1] + 8)) = local_4;
        return;
      case (undefined *)0x5:
        fVar12 = FUN_501083a9(param_2,param_2);
        pcVar1 = param_1 + (int)ppuVar10[1];
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        *(float *)(param_1 + (int)(ppuVar10[1] + 4)) = (float)fVar12;
        pcVar1 = param_1 + (int)(ppuVar10[1] + 8);
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        return;
      default:
        goto switchD_500bd799_default;
      }
      break;
    }
    puVar4 = ppuVar10[4];
    ppuVar10 = ppuVar10 + 4;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    bVar3 = *pbVar11;
    pbVar11 = pbVar11 + 1;
    if (bVar3 == 0) break;
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9;
  pbVar7 = (byte *)(*DAT_5015cb38)(uVar9,0x2fe);
  iVar6 = 0;
  pbVar11 = pbVar7;
  if (0 < (int)uVar9) {
    do {
      if ((param_2[iVar6] == 0x5c) && (iVar6 < (int)(uVar9 - 1))) {
        iVar2 = iVar6 + 1;
        iVar6 = iVar6 + 1;
        if (param_2[iVar2] == 0x6e) {
          *pbVar11 = 10;
        }
        else {
          *pbVar11 = 0x5c;
        }
      }
      else {
        *pbVar11 = param_2[iVar6];
      }
      pbVar11 = pbVar11 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar9);
  }
  *(byte **)(param_1 + (int)ppuVar10[1]) = pbVar7;
  return;
}

