// rea decompile_all
// name: FUN_200d8860
// address: 0x200d8860
// body: available
// range: 0x200d8860-0x200d8a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d8860(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010edfc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,6);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_20112a40;
  uVar3 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 3;
  FUN_2000a3a0(uVar3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_2000a5b0(1);
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x20);
  pcVar4 = (char *)FUN_200eb440(0);
  uVar7 = 0xffffffff;
  pcVar10 = pcVar4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar2 = FUN_2000a6c0(uVar7,1);
  if (cVar2 != '\0') {
    pcVar10 = (char *)in_ECX[0x28];
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar10 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar10 = pcVar10 + 1;
    }
    in_ECX[0x29] = uVar7;
    *(undefined1 *)(uVar7 + in_ECX[0x28]) = 0;
  }
  *(undefined1 *)(in_ECX + 0x2b) = 0;
  puVar9 = (undefined1 *)in_ECX[0x28];
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = &DAT_201116cc;
  }
  puVar1 = in_ECX + 0x23;
  iVar5 = (*DAT_2040363c)(puVar9,puVar1);
  iVar6 = (*DAT_20403640)(puVar1);
  in_ECX[8] = (iVar6 >> 1) + iVar5;
  uVar3 = __ftol();
  in_ECX[10] = uVar3;
  iVar5 = (*DAT_20403640)(puVar1);
  if ((int)in_ECX[0xc] < iVar5) {
    in_ECX[9] = iVar5;
    uVar3 = __ftol();
    in_ECX[0xb] = uVar3;
  }
  ExceptionList = pvStack_c;
  return;
}

