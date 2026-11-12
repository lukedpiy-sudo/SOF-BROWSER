// rea decompile_all
// name: FUN_200d5ce0
// address: 0x200d5ce0
// body: available
// range: 0x200d5ce0-0x200d5f86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d5ce0(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  uint local_28;
  int local_24;
  int local_20;
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ebb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  if ((*(int *)(in_ECX + 0x138) == 0) || (*(int *)(in_ECX + 0x13c) == 0)) {
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_24 = 0;
    while( true ) {
      if ((*(int *)(in_ECX + 0x168) == 0) ||
         ((uint)((*(int *)(in_ECX + 0x16c) - *(int *)(in_ECX + 0x168)) / 0x14) <= local_28)) break;
      puVar1 = *(undefined1 **)(*(int *)(in_ECX + 0x148) + local_24 + 8);
      puVar9 = &DAT_201116cc;
      if (puVar1 != (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      uVar6 = 0xffffffff;
      pcVar4 = s_ghoul_pmodels__20158c9c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar7 = 0xffffffff;
      pcVar4 = puVar9 + (~uVar6 - 1);
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar2 = FUN_2000a6c0(uVar7,1);
      if (cVar2 != '\0') {
        pcVar4 = puVar9 + (~uVar6 - 1);
        pcVar10 = local_18;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar10 = pcVar10 + 1;
        }
        FUN_2000a6a0(uVar7);
      }
      uVar6 = local_14;
      local_2c[0] = 0x2e;
      local_30[0] = 0x2e;
      uVar7 = FUN_200c94a0(local_30,0xffffffff,1);
      iVar3 = FUN_200c94a0(local_2c,0xffffffff,1);
      if (local_14 < uVar7) {
        FUN_201077fc();
      }
      uVar8 = uVar6 - iVar3;
      if (local_14 - uVar7 < uVar6 - iVar3) {
        uVar8 = local_14 - uVar7;
      }
      if (uVar8 != 0) {
        FUN_2000a930();
        FUN_200fa360(local_18 + uVar7,local_18 + uVar7 + uVar8,(local_14 - uVar8) - uVar7);
        uVar8 = local_14 - uVar8;
        cVar2 = FUN_2000a6c0(uVar8,0);
        if (cVar2 != '\0') {
          local_18[uVar8] = '\0';
          local_14 = uVar8;
        }
      }
      pcVar4 = local_18;
      if (local_18 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar3 = __strcmpi(pcVar4,*(char **)(*(int *)(in_ECX + 0x138) + 4));
      if (iVar3 == 0) {
        if (*(undefined4 **)(in_ECX + 0x50) != (undefined4 *)0x0) {
          Cvar_SetValue(**(undefined4 **)(in_ECX + 0x50),(float)(int)local_28);
        }
        FUN_200d5bc0(*(undefined4 *)(*(int *)(in_ECX + 0x168) + local_20));
      }
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x40;
      local_20 = local_20 + 0x14;
    }
    if (*(int *)(in_ECX + 0x50) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = __ftol();
    }
    *(undefined4 *)(in_ECX + 0x130) = uVar5;
    if (*(int *)(in_ECX + 300) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = __ftol();
    }
    *(undefined4 *)(in_ECX + 0x134) = uVar5;
    if (local_18 != (char *)0x0) {
      if (local_18[-1] != '\0') {
        local_18[-1] = local_18[-1] + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_200f9f75(local_18 + -1);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

