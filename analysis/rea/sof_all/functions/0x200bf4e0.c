// rea decompile_all
// name: FUN_200bf4e0
// address: 0x200bf4e0
// body: available
// range: 0x200bf4e0-0x200bf6f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200bf4e0(uint param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_408 [4];
  char *local_404;
  uint local_400;
  uint local_3f8;
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010db0b;
  local_c = ExceptionList;
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  if ((*(int *)(in_ECX + 0x3c) == 0) ||
     ((uint)((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x14) <= param_1)) {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x14;
    }
    param_1 = iVar8 - 1;
  }
  iVar8 = param_1 * 0x14;
  if (*(int *)(iVar8 + 0x10 + *(int *)(in_ECX + 0x3c)) != 0) goto LAB_200bf6d3;
  uVar5 = 0xffffffff;
  pcVar6 = s_CUSTOM__2015815c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_c;
  iVar3 = FUN_2008c2d0(s_CUSTOM__2015815c,0,~uVar5 - 1);
  if (iVar3 != 0) {
    uVar5 = 0xffffffff;
    pcVar6 = s_CUSTOM__20158154;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    iVar3 = FUN_2008c2d0(s_CUSTOM__20158154,0,~uVar5 - 1);
    if (iVar3 != 0) {
      iVar3 = *(int *)(in_ECX + 0x3c);
      uVar4 = FUN_200c07e0(in_ECX + 0x10,iVar8 + iVar3,*(undefined1 *)(in_ECX + 0x20),
                           *(undefined1 *)(in_ECX + 0x21));
      *(undefined4 *)(iVar8 + 0x10 + iVar3) = uVar4;
      goto LAB_200bf6d3;
    }
  }
  pcVar6 = *(char **)(in_ECX + 0x14);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  pcVar9 = local_3f4;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar9 = cVar2;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  iVar3 = FUN_200fa6a0(local_3f4,s_GHOUL__2015814c);
  if (iVar3 == 0) {
    iVar3 = FUN_200fa6a0(local_3f4,s_GHOUL__20158144);
    if (iVar3 != 0) goto LAB_200bf61b;
  }
  else {
LAB_200bf61b:
    *(undefined1 *)(iVar3 + 6) = 0;
  }
  iVar3 = *(int *)(in_ECX + 0x3c);
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar6 = local_3f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_3f8 = uVar5;
  cVar2 = FUN_2000a6c0(uVar5,1);
  if (cVar2 != '\0') {
    pcVar6 = local_3f4;
    pcVar9 = local_404;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_404[uVar5] = '\0';
    local_400 = uVar5;
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  local_4 = 0;
  uVar4 = FUN_200c07e0(local_408,iVar8 + iVar3,*(undefined1 *)(in_ECX + 0x20),
                       *(undefined1 *)(in_ECX + 0x21));
  *(undefined4 *)(iVar8 + 0x10 + iVar1) = uVar4;
  if (local_404 != (char *)0x0) {
    if (local_404[-1] == '\0') {
      FUN_200f9f75(local_404 + -1);
    }
    else {
      local_404[-1] = local_404[-1] + -1;
    }
  }
LAB_200bf6d3:
  ExceptionList = local_c;
  return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x10 + iVar8);
}

