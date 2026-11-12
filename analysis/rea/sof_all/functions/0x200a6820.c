// rea decompile_all
// name: FUN_200a6820
// address: 0x200a6820
// body: available
// range: 0x200a6820-0x200a6bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6820(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int *local_84;
  undefined1 local_80 [4];
  undefined4 local_7c [2];
  undefined1 local_74 [8];
  undefined1 local_6c [4];
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  int local_40;
  undefined1 local_3c [16];
  undefined4 local_2c;
  int local_28;
  undefined1 local_24 [16];
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d6d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200a7ff0();
  piVar2 = *(int **)(in_ECX + 0xc4);
  if (piVar2 != *(int **)(in_ECX + 200)) {
    do {
      iVar1 = *(int *)(in_ECX + 0xc4);
      FUN_200234d0(*piVar2 + 8);
      local_44 = 1;
      local_4 = 0;
      local_40 = (int)piVar2 - iVar1 >> 2;
      FUN_200234d0(local_54);
      local_2c = local_44;
      local_28 = local_40;
      local_4._0_1_ = 1;
      FUN_200a7cf0(&local_84,local_3c);
      FUN_2008c5b0(&local_84,local_80);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 200));
  }
  piVar2 = *(int **)(in_ECX + 0xd4);
  if (piVar2 != *(int **)(in_ECX + 0xd8)) {
    do {
      iVar1 = *(int *)(in_ECX + 0xd4);
      FUN_200234d0(*piVar2 + 8);
      local_44 = 3;
      local_4 = 2;
      local_40 = (int)piVar2 - iVar1 >> 2;
      FUN_200234d0(local_54);
      local_2c = local_44;
      local_28 = local_40;
      local_4._0_1_ = 3;
      FUN_200a7cf0(&local_84,local_3c);
      FUN_2008c5b0(&local_84,local_80);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0xd8));
  }
  piVar2 = *(int **)(in_ECX + 0xa4);
  if (piVar2 != *(int **)(in_ECX + 0xa8)) {
    do {
      iVar1 = *(int *)(in_ECX + 0xa4);
      FUN_200234d0(*piVar2 + 8);
      local_44 = 0;
      local_4 = 4;
      local_40 = (int)piVar2 - iVar1 >> 2;
      FUN_200234d0(local_54);
      local_2c = local_44;
      local_28 = local_40;
      local_4._0_1_ = 5;
      FUN_200a7cf0(local_7c,local_3c);
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      FUN_2000a5b0(1);
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0xa8));
  }
  local_84 = *(int **)(in_ECX + 0xb4);
  if (local_84 != *(int **)(in_ECX + 0xb8)) {
    local_7c[0] = 2;
    do {
      iVar1 = *local_84;
      iVar3 = (int)local_84 - *(int *)(in_ECX + 0xb4);
      local_6c[0] = *(undefined1 *)(iVar1 + 8);
      FUN_2000a5b0(0);
      FUN_2000a3a0((undefined1 *)(iVar1 + 8),0,0xffffffff);
      local_5c = local_7c[0];
      local_4 = 6;
      local_58 = iVar3 >> 2;
      FUN_200234d0(local_6c);
      local_14 = local_5c;
      local_10 = local_58;
      local_4._0_1_ = 7;
      FUN_200a7cf0(local_74,local_24);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      if (local_68 != 0) {
        if (*(char *)(local_68 + -1) == '\0') {
          FUN_200f9f75((char *)(local_68 + -1));
        }
        else {
          *(char *)(local_68 + -1) = *(char *)(local_68 + -1) + -1;
        }
      }
      local_84 = local_84 + 1;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
    } while (local_84 != *(int **)(in_ECX + 0xb8));
  }
  ExceptionList = local_c;
  return;
}

