// rea decompile_all
// name: FUN_200da7a0
// address: 0x200da7a0
// body: available
// range: 0x200da7a0-0x200dab0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200da7a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_a9;
  char *apcStack_a4 [2];
  undefined1 local_9c [16];
  undefined1 auStack_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f13d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,0xb);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = local_a9;
  FUN_2000a5b0(0);
  in_ECX[0x27] = 0xffffffff;
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x28) = local_a9;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x2c) = local_a9;
  FUN_2000a5b0(0);
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x30) = local_a9;
  FUN_2000a5b0(0);
  in_ECX[0x35] = 0;
  *(undefined1 *)(in_ECX + 0x34) = local_a9;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x38) = local_a9;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x3c) = local_a9;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  local_4._0_1_ = 7;
  *in_ECX = &PTR_FUN_20112b40;
  uVar2 = FUN_200c5b50(local_9c);
  local_4._0_1_ = 8;
  FUN_2000a3a0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_2000a5b0(1);
  iVar3 = (*DAT_20403640)(in_ECX + 0x23);
  apcStack_a4[0] = (char *)(iVar3 << 4);
  in_ECX[8] = apcStack_a4[0];
  FUN_200cead0();
  uVar2 = __ftol();
  in_ECX[10] = uVar2;
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x41] = in_ECX[0x13];
  in_ECX[0xf] = uVar2;
  in_ECX[0x11] = 0xffff00ff;
  in_ECX[0x12] = 0xffff00ff;
  FUN_200eafe0(3);
  apcStack_a4[0] = (char *)FUN_200eb440(0);
  uVar6 = 0xffffffff;
  pcVar10 = apcStack_a4[0];
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar10 = apcStack_a4[0];
    pcVar11 = (char *)in_ECX[0x29];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_2000a6a0(uVar6);
  }
  apcStack_a4[0] = (char *)FUN_200eb440(1);
  uVar6 = 0xffffffff;
  pcVar10 = apcStack_a4[0];
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar10 = apcStack_a4[0];
    pcVar11 = (char *)in_ECX[0x2d];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_2000a6a0(uVar6);
  }
  apcStack_a4[0] = (char *)FUN_200eb440(2);
  uVar6 = 0xffffffff;
  pcVar10 = apcStack_a4[0];
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar10 = apcStack_a4[0];
    pcVar11 = (char *)in_ECX[0x31];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    in_ECX[0x32] = uVar6;
    *(undefined1 *)(uVar6 + in_ECX[0x31]) = 0;
  }
  puVar9 = &DAT_201116cc;
  if ((undefined1 *)in_ECX[0x31] != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)in_ECX[0x31];
  }
  puVar8 = (undefined1 *)in_ECX[0x2d];
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_201116cc;
  }
  puVar4 = (undefined1 *)in_ECX[0x29];
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_201116cc;
  }
  Com_sprintf(auStack_8c,0x80,s__s__s__s_20158b38,puVar4,puVar8,puVar9);
  FUN_20025bb0(in_ECX + 0x34,auStack_8c,0);
  puVar5 = (undefined4 *)FUN_200e6370(apcStack_a4);
  in_ECX[0x27] = *puVar5;
  in_ECX[0x40] = 1;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  ExceptionList = pvStack_c;
  return;
}

