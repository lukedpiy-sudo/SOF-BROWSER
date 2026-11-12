// rea decompile_all
// name: FUN_500623e0
// address: 0x500623e0
// body: available
// range: 0x500623e0-0x500625cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500623e0(int param_1)

{
  short sVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  undefined *local_18;
  undefined2 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114298;
  local_c = ExceptionList;
  puVar6 = (undefined *)0x0;
  local_18 = (undefined *)0x0;
  local_14 = (undefined2 *)0x0;
  local_10 = 0;
  local_4 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  ExceptionList = &local_c;
  local_20 = param_1;
  do {
    if ((*(int *)(param_1 + 0x98) == 0) ||
       ((uint)((*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x1c) <= local_28)) {
      FUN_500adb20((byte *)s_Paths_verified___d_error_sreport_5014348c);
      local_14 = (undefined2 *)local_18;
      FUN_50106b60(local_18);
      ExceptionList = local_c;
      return;
    }
    pcVar8 = (char *)(*(int *)(param_1 + 0x98) + local_24);
    if ('\x01' < pcVar8[0x18]) {
      iVar5 = (int)pcVar8[0x18];
      local_2c = 0;
      if (0 < iVar5) {
        do {
          iVar7 = 0;
          pcVar3 = *(char **)(*(int *)(pcVar8 + 0xc) + local_2c * 4);
          if (0 < iVar5) {
            do {
              if (((local_2c != iVar7) &&
                  (pcVar4 = *(char **)(*(int *)(pcVar8 + 0xc) + iVar7 * 4), pcVar3 != (char *)0x0))
                 && (pcVar4 != (char *)0x0)) {
                if (*pcVar8 == *pcVar3) {
                  sVar1 = *(short *)(pcVar3 + 2);
                }
                else {
                  sVar1 = *(short *)(pcVar3 + 4);
                }
                local_30 = CONCAT22((short)((uint)local_2c >> 0x10),sVar1);
                if (*pcVar8 == *pcVar4) {
                  sVar2 = *(short *)(pcVar4 + 2);
                }
                else {
                  sVar2 = *(short *)(pcVar4 + 4);
                }
                if (sVar1 == sVar2) {
                  if (puVar6 == (undefined *)0x0) {
                    iVar5 = 0;
                  }
                  else {
                    iVar5 = (int)local_14 - (int)puVar6 >> 1;
                  }
                  do {
                    iVar5 = iVar5 + -1;
                    if (iVar5 < 0) {
                      FUN_50063f90(local_1c,local_14,1,(undefined2 *)&local_30);
                      FUN_500adb20((byte *)s_ERROR__Path__d_has_two_junctures_501434b8);
                      puVar6 = local_18;
                      break;
                    }
                  } while (*(short *)(puVar6 + iVar5 * 2) != sVar1);
                }
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < pcVar8[0x18]);
          }
          iVar5 = (int)pcVar8[0x18];
          local_2c = local_2c + 1;
          param_1 = local_20;
        } while (local_2c < iVar5);
      }
    }
    local_28 = local_28 + 1;
    local_24 = local_24 + 0x1c;
  } while( true );
}

