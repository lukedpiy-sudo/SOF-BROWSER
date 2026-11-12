// rea decompile_all
// name: FUN_2009d1a0
// address: 0x2009d1a0
// body: available
// range: 0x2009d1a0-0x2009d3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009d1a0(char param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  undefined1 local_25;
  uint local_24;
  int local_20;
  char local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010d0e0;
  local_c = ExceptionList;
  local_1c = param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 1;
  local_25 = 0;
  ExceptionList = &local_c;
  if ((*(int *)(in_ECX + 0x2c) != 0) &&
     (iVar4 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2, ExceptionList = &local_c,
     iVar4 != 0)) {
    ExceptionList = &local_c;
    FUN_2009dd40(0,iVar4,&local_25);
  }
  for (puVar1 = (undefined4 *)*param_3; puVar1 != param_3; puVar1 = (undefined4 *)*puVar1) {
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + puVar1[2] * 4) + 0x24);
    if ((*(int *)(iVar4 + 0x88) != 0) && (*(char *)(iVar4 + 0x8c) != '\0')) {
      FUN_2009db70(puVar1[3]);
    }
    *(undefined1 *)(local_18 + puVar1[2]) = 1;
  }
  uVar7 = 0;
  do {
    while( true ) {
      uVar8 = 0;
      iVar4 = *(int *)(in_ECX + 0x2c);
      local_24 = uVar7;
      if ((iVar4 == 0) || ((uint)(*(int *)(in_ECX + 0x30) - iVar4 >> 2) <= uVar7)) {
        FUN_200f9f75(local_18);
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        puVar1 = (undefined4 *)*param_3;
        local_4 = 0xffffffff;
        while (puVar1 != param_3) {
          puVar6 = (undefined4 *)FUN_2008d0b0(&local_20,0);
          FUN_200ba400(&local_24,*puVar6);
        }
        FUN_200f9f75(param_3);
        ExceptionList = local_c;
        return;
      }
      if (((param_1 != '\0') &&
          (iVar4 = *(int *)(*(int *)(iVar4 + uVar7 * 4) + 0x24), *(int *)(iVar4 + 0x160) != 0)) &&
         (*(char *)(iVar4 + 0x164) != '\0')) {
        FUN_2009db70(0);
      }
      if (*(char *)(local_18 + uVar7) == '\0') break;
LAB_2009d306:
      uVar7 = uVar7 + 1;
    }
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x2c) + uVar7 * 4) + 0x24);
    iVar2 = *(int *)(iVar4 + 0x88);
    if ((iVar2 == 0) || (*(char *)(iVar4 + 0x8c) == '\0')) goto LAB_2009d306;
    if (DAT_204064ec != '\0') {
      iVar4 = FUN_2008c1b0();
      uVar7 = local_24;
      if (iVar4 != 0) {
        do {
          iVar4 = *(int *)(iVar2 + 0x4c);
          if ((iVar4 != 0) && (local_20 = *(int *)(iVar2 + 0x50) - iVar4, local_20 != 0)) {
            *(undefined1 *)(uVar8 + iVar4) = 1;
          }
          FUN_200bf4e0(uVar8);
          uVar8 = uVar8 + 1;
          uVar5 = FUN_2008c1b0();
          uVar7 = local_24;
        } while (uVar8 < uVar5);
      }
      goto LAB_2009d306;
    }
    puVar3 = *(undefined1 **)(iVar2 + 0x4c);
    if ((puVar3 != (undefined1 *)0x0) &&
       (local_20 = *(int *)(iVar2 + 0x50) - (int)puVar3, local_20 != 0)) {
      *puVar3 = 1;
    }
    FUN_200bf4e0(0);
    uVar7 = uVar7 + 1;
  } while( true );
}

