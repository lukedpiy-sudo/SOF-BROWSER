// rea decompile_all
// name: FUN_20069fd0
// address: 0x20069fd0
// body: available
// range: 0x20069fd0-0x2006a1be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20069fd0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int in_ECX;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  short sVar13;
  ushort uVar14;
  char *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined4 local_18;
  undefined2 local_14;
  char *local_10;
  undefined2 local_c [2];
  int local_8 [2];
  
  uVar9 = param_1;
  local_20 = *(undefined1 **)(param_1 + 4);
  if (local_20 == (undefined1 *)0x0) {
    local_20 = &DAT_201116cc;
  }
  FUN_200720f0(&local_1c,&local_20);
  if (local_1c != *(int *)(in_ECX + 0x24)) {
    return (uint)*(ushort *)(local_1c + 0x10);
  }
  iVar4 = *(int *)(in_ECX + 4);
  if (iVar4 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(in_ECX + 8) - iVar4;
  }
  param_1 = param_1 & 0xffffff00;
  uVar2 = *(int *)(uVar9 + 8) + 1 + iVar12;
  if (iVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(int *)(in_ECX + 8) - iVar4;
  }
  if (uVar6 < uVar2) {
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(in_ECX + 8) - iVar4;
    }
    FUN_2009dd40(*(undefined4 *)(in_ECX + 8),uVar2 - iVar7,&param_1);
  }
  else if ((iVar4 != 0) && (uVar2 < (uint)(*(int *)(in_ECX + 8) - iVar4))) {
    FUN_200b94e0(uVar2 + iVar4,*(int *)(in_ECX + 8));
  }
  pcVar10 = *(char **)(uVar9 + 4);
  local_24 = (char *)(*(int *)(in_ECX + 4) + iVar12);
  pcVar11 = local_24;
  if (pcVar10 == (char *)0x0) {
    pcVar10 = "";
  }
  do {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar11 = cVar3;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  FUN_200a8890(*(undefined4 *)(in_ECX + 0x18),1,&local_24);
  if (iVar4 != *(int *)(in_ECX + 4)) {
    uVar5 = *(undefined4 *)(in_ECX + 0x24);
    puVar8 = (undefined4 *)FUN_20083550(&param_1);
    FUN_20072040(&local_18,*puVar8,uVar5);
    uVar14 = 0;
    while( true ) {
      if (*(int *)(in_ECX + 0x14) == 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2;
      }
      uVar9 = (uint)uVar14;
      if (iVar12 - 1U <= uVar9) break;
      local_14 = 0;
      piVar1 = (int *)(*(int *)(in_ECX + 0x14) + uVar9 * 4);
      *piVar1 = *piVar1 + (*(int *)(in_ECX + 4) - iVar4);
      local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar9 * 4);
      FUN_20073ab0(&local_10,&local_18);
      FUN_2008c5b0(&local_10,local_c);
      *(ushort *)(local_8[0] + 0x10) = uVar14;
      uVar14 = uVar14 + 1;
    }
  }
  if (*(int *)(in_ECX + 0x14) == 0) {
    sVar13 = 0;
  }
  else {
    sVar13 = (short)(*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2);
  }
  local_10 = local_24;
  local_c[0] = 0;
  FUN_20073ab0(local_8,&local_10);
  *(short *)(local_8[0] + 0x10) = sVar13 + -1;
  if (*(int *)(in_ECX + 0x14) == 0) {
    return 0xffffffff;
  }
  return (*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2) - 1;
}

