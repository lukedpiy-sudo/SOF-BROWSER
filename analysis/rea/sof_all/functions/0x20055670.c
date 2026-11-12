// rea decompile_all
// name: FUN_20055670
// address: 0x20055670
// body: available
// range: 0x20055670-0x20055749 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20055670(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_400 [512];
  byte local_200 [512];
  
  iVar2 = FUN_200fa6a0(param_2,&DAT_20130c64);
  if (iVar2 != 0) {
    return;
  }
  do {
    pbVar4 = param_1;
    if (*param_1 == 0x5c) {
      pbVar4 = param_1 + 1;
    }
    pbVar5 = local_400;
    bVar1 = *pbVar4;
    while (bVar1 != 0x5c) {
      if (bVar1 == 0) {
        return;
      }
      *pbVar5 = bVar1;
      pbVar3 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar3;
    }
    bVar1 = pbVar4[1];
    *pbVar5 = 0;
    pbVar5 = local_200;
    while ((pbVar3 = pbVar4 + 1, bVar1 != 0x5c && (bVar1 != 0))) {
      *pbVar5 = bVar1;
      pbVar5 = pbVar5 + 1;
      bVar1 = pbVar4[2];
      pbVar4 = pbVar3;
    }
    *pbVar5 = 0;
    pbVar4 = local_400;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_20055712:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_20055717;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_20055712;
      pbVar5 = pbVar5 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_20055717:
    if (iVar2 == 0) {
      iVar2 = (int)param_1 - (int)pbVar3;
      do {
        bVar1 = *pbVar3;
        pbVar3[iVar2] = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
      return;
    }
    param_1 = pbVar3;
    if (*pbVar3 == 0) {
      return;
    }
  } while( true );
}

