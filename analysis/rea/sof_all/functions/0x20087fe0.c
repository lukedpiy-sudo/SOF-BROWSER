// rea decompile_all
// name: FUN_20087fe0
// address: 0x20087fe0
// body: available
// range: 0x20087fe0-0x20088238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20087fe0(int param_1,undefined1 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined2 extraout_var;
  undefined2 uVar8;
  int in_ECX;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  char *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c258;
  local_c = ExceptionList;
  uVar9 = 0xffffffff;
  pcVar7 = s_GHOUL_ENEMY_2015711c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar11 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_2008c2d0(s_GHOUL_ENEMY_2015711c,0,~uVar9 - 1);
  if (iVar3 == -1) {
    uVar9 = 0xffffffff;
    pcVar7 = s_GHOUL_ENEMY_20157110;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_2008c2d0(s_GHOUL_ENEMY_20157110,0,~uVar9 - 1);
    if (iVar3 != -1) goto LAB_20088047;
  }
  else {
LAB_20088047:
    *(undefined1 *)(in_ECX + 0x118) = 1;
  }
  param_1 = 0;
  local_1c[0] = param_2;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_200a2bf0(iVar4,local_1c);
  uVar9 = 0;
  while( true ) {
    iVar3 = *(int *)(in_ECX + 0x4c);
    if ((iVar3 == 0) || ((uint)(*(int *)(in_ECX + 0x50) - iVar3 >> 2) <= uVar9)) goto LAB_200880b3;
    if ((*(int *)(iVar3 + uVar9 * 4) != 0) && (param_1 = FUN_200a5770(local_1c), -1 < param_1))
    break;
    uVar9 = uVar9 + 1;
  }
  iVar3 = *(int *)(*(int *)(in_ECX + 0x4c) + uVar9 * 4);
  if (iVar3 != 0) goto LAB_20088126;
LAB_200880b3:
  puVar10 = *(undefined1 **)(iVar4 + 4);
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = &DAT_201116cc;
  }
  iVar3 = FUN_20069a00(puVar10,local_1c,&param_1);
  if (iVar3 == 0) {
    if (-1 < *(short *)(in_ECX + 4)) goto LAB_200881d7;
  }
  else {
    if (*(int *)(iVar3 + 0xd4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0xd8) - *(int *)(iVar3 + 0xd4) >> 2;
    }
    *(byte *)(in_ECX + 0x116) = *(byte *)(in_ECX + 0x116) | iVar4 != 0;
    FUN_2008ce10(*(undefined4 *)(in_ECX + 0x40),1,local_1c);
  }
LAB_20088126:
  FUN_2008d0c0(*(undefined4 *)(in_ECX + 0x20),1,&param_2);
  *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
  local_30 = param_1;
  local_40 = iVar3;
  FUN_2009e290(&local_3c,&local_40);
  if (local_3c == *(int *)(in_ECX + 0x6c)) {
    if (*(int *)(in_ECX + 0x4c) != 0) {
      iVar11 = *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2;
    }
    FUN_2009e320(*(undefined4 *)(in_ECX + 0x50),&local_40);
    local_38 = 0;
    uVar5 = FUN_2009e300(&local_40,&local_38);
    piVar6 = (int *)FUN_2008cc10(local_24,uVar5);
    *(int *)(*piVar6 + 0x10) = iVar11;
  }
  else {
    iVar11 = *(int *)(local_3c + 0x10);
  }
  local_34 = local_30;
  local_38 = iVar11;
  FUN_2008ca30(*(undefined4 *)(in_ECX + 0x60),&local_38);
LAB_200881d7:
  if (iVar3 == 0) {
    if (local_18 != (char *)0x0) {
      pcVar7 = local_18 + -1;
      local_18 = local_18 + -1;
      if (*pcVar7 == '\0') {
        local_18 = (char *)FUN_200f9f75(local_18);
      }
      else {
        *local_18 = *pcVar7 + -1;
      }
    }
    uVar9 = (uint)local_18 & 0xffff0000;
  }
  else {
    uVar2 = *(undefined2 *)(in_ECX + 0xc);
    uVar8 = 0;
    if (local_18 != (char *)0x0) {
      pcVar7 = local_18 + -1;
      if (local_18[-1] != '\0') {
        *pcVar7 = local_18[-1] + -1;
        ExceptionList = local_c;
        return CONCAT22((short)((uint)pcVar7 >> 0x10),uVar2);
      }
      FUN_200f9f75(pcVar7);
      uVar8 = extraout_var;
    }
    uVar9 = CONCAT22(uVar8,uVar2);
  }
  ExceptionList = local_c;
  return uVar9;
}

