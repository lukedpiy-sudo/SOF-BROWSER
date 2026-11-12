// rea decompile_all
// name: FUN_2006a940
// address: 0x2006a940
// body: available
// range: 0x2006a940-0x2006ade6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_2006a940(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int local_10 [2];
  uint local_8;
  undefined1 local_4 [4];
  
  cVar2 = FUN_2006a370(param_1,in_ECX + 4);
  if (cVar2 == '\0') {
    param_3 = 0;
    FUN_20076090(&param_3);
    param_3 = 0;
    FUN_20076090(&param_3);
    param_3 = 0;
    FUN_20076090(&param_3);
    return '\0';
  }
  FUN_20083550(local_10);
  iVar6 = local_10[0];
  FUN_20083550(local_10);
  iVar7 = local_10[0];
  iVar10 = *(int *)(in_ECX + 0x34);
  uVar5 = param_3;
  while (iVar7 != iVar10) {
    FUN_20071e30(local_10,iVar7 + 0xc);
    if (local_10[0] != *(int *)(uVar5 + 4)) {
      cVar3 = FUN_200bdbc0();
      if (cVar3 != '\0') goto LAB_2006a9f5;
      FUN_2008acc0(param_1);
      uVar5 = param_3;
      iVar6 = iVar7;
    }
    FUN_20073500();
    iVar10 = *(int *)(in_ECX + 0x34);
  }
  cVar3 = FUN_200bdbc0();
  param_1._0_1_ = cVar2;
  if (cVar3 != '\0') {
LAB_2006a9f5:
    param_1._0_1_ = '\0';
    iVar7 = iVar6;
  }
  iVar10 = **(int **)(in_ECX + 0x34);
  while (iVar10 != iVar7) {
    FUN_20071790(&local_8,iVar10 + 0xc);
    FUN_20073500();
  }
  FUN_20071d80(&param_3,**(undefined4 **)(in_ECX + 0x34),iVar7);
  local_8 = 0;
  param_3 = param_3 & 0xffffff00;
  FUN_200bdca0(&param_3,1);
  if ((char)param_1 == '\0') {
    param_3._0_1_ = (char)param_1;
    FUN_200bdca0(&param_3,1);
    param_3 = (uint)param_3._1_3_ << 8;
    FUN_200bdca0(&param_3,1);
    return '\0';
  }
  FUN_20083550(&param_3);
  uVar1 = param_3;
  FUN_20083550(&param_3);
  uVar8 = param_3;
  uVar5 = *(uint *)(in_ECX + 0x48);
  while (uVar8 != uVar5) {
    cVar2 = FUN_200bdbc0();
    if (cVar2 != '\0') goto LAB_2006ab80;
    iVar10 = 1;
    psVar9 = (short *)(uVar8 + 0xc);
    if (*(short *)(uVar8 + 0xc) == 0) {
      psVar9 = (short *)&param_3;
      param_3 = (uint)param_3._1_3_ << 8;
    }
    else {
      param_3 = CONCAT31(param_3._1_3_,1);
      FUN_200bdca0(&param_3,1);
      local_10[0] = 0;
      sVar4 = 0x10;
      do {
        if (*psVar9 < sVar4) break;
        sVar4 = sVar4 << 4;
        local_10[0] = local_10[0] + 1;
      } while (sVar4 != 0);
      FUN_200bdca0(local_10,2);
      iVar10 = local_10[0] * 4 + 4;
    }
    FUN_200bdca0(psVar9,iVar10);
    FUN_20073500();
    uVar1 = uVar8;
    uVar5 = *(uint *)(in_ECX + 0x48);
  }
  cVar2 = FUN_200bdbc0();
  if (cVar2 != '\0') {
LAB_2006ab80:
    param_1._0_1_ = '\0';
    uVar8 = uVar1;
  }
  uVar5 = **(uint **)(in_ECX + 0x48);
  while (uVar5 != uVar8) {
    FUN_20071790(&local_8,uVar5 + 0xc);
    FUN_20073500();
  }
  FUN_20071d80(&param_3,**(undefined4 **)(in_ECX + 0x48),uVar8);
  local_8 = 0;
  param_3 = param_3 & 0xffffff00;
  FUN_200bdca0(&param_3,1);
  if ((char)param_1 == '\0') {
    param_3 = param_3 & 0xffffff00;
    FUN_200bdca0(&param_3,1);
    return '\0';
  }
  local_8 = in_ECX + 0x1c;
  FUN_20083550(&param_3);
  uVar1 = param_3;
  FUN_20083550(&param_3);
  uVar8 = param_3;
  uVar5 = *(uint *)(in_ECX + 0x20);
  while (uVar8 != uVar5) {
    cVar2 = FUN_200bdbc0();
    if (cVar2 != '\0') goto LAB_2006acfc;
    iVar10 = 1;
    psVar9 = (short *)(uVar8 + 0xc);
    if (*(short *)(uVar8 + 0xc) == 0) {
      param_3 = (uint)param_3._1_3_ << 8;
      psVar9 = (short *)&param_3;
    }
    else {
      param_3 = CONCAT31(param_3._1_3_,1);
      FUN_200bdca0(&param_3,1);
      local_10[0] = 0;
      sVar4 = 0x10;
      do {
        if (*psVar9 < sVar4) break;
        sVar4 = sVar4 << 4;
        local_10[0] = local_10[0] + 1;
      } while (sVar4 != 0);
      FUN_200bdca0(local_10,2);
      iVar10 = local_10[0] * 4 + 4;
    }
    FUN_200bdca0(psVar9,iVar10);
    FUN_20073500();
    uVar1 = uVar8;
    uVar5 = *(uint *)(in_ECX + 0x20);
  }
  cVar2 = FUN_200bdbc0();
  if (cVar2 != '\0') {
LAB_2006acfc:
    param_1._0_1_ = '\0';
    uVar8 = uVar1;
  }
  FUN_20083550(&param_3);
  uVar5 = param_3;
  while (uVar5 != uVar8) {
    FUN_20071790(&local_8,uVar5 + 0xc);
    param_3 = local_8;
    FUN_2008c5b0(&param_3,local_4);
    FUN_20073500();
  }
  FUN_20071d80(&param_3,**(undefined4 **)(in_ECX + 0x20),uVar8);
  local_8 = 0;
  param_3 = param_3 & 0xffffff00;
  FUN_200bdca0(&param_3,1);
  return (char)param_1;
}

