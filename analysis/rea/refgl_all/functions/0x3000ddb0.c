// rea decompile_all
// name: GetRefAPI
// address: 0x3000ddb0
// body: available
// range: 0x3000ddb0-0x3000dfdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl GetRefAPI(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 **ppuVar3;
  undefined4 *puVar4;
  undefined1 *local_dc [4];
  undefined1 *local_cc;
  undefined1 *local_c8;
  undefined1 *local_c4;
  undefined1 *local_c0;
  undefined1 *local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined *local_a8;
  undefined1 *local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined1 *local_94;
  undefined1 *local_90;
  undefined1 *local_8c;
  code *local_88;
  code *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  code *local_78;
  code *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  code *local_60;
  undefined1 *local_58;
  code *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  code *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  code *local_2c;
  undefined1 *local_28;
  code *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  local_dc[0] = (undefined1 *)0x3;
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar4 = &DAT_3008fdc8;
                    /* 0xddb0  1  GetRefAPI */
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_cc = &LAB_3000ab80;
  local_c8 = &LAB_3000b900;
  local_c4 = &LAB_30007a30;
  local_c0 = &LAB_30007a50;
  local_bc = &LAB_30007a80;
  local_b8 = &LAB_30007aa0;
  local_b4 = &LAB_30007ad0;
  local_b0 = &LAB_30007af0;
  local_ac = &LAB_30019380;
  local_a4 = &LAB_30016a40;
  local_a0 = &LAB_3000b990;
  local_9c = &LAB_3000dfe0;
  local_a8 = &DAT_30016b90;
  local_98 = &LAB_30001cd0;
  local_94 = &LAB_30001ed0;
  local_90 = &LAB_30002080;
  local_8c = &LAB_30002240;
  local_88 = FUN_30001d10;
  local_84 = FUN_30001850;
  local_7c = &LAB_300019d0;
  local_78 = FUN_30001a40;
  local_80 = &LAB_30001ab0;
  local_70 = FUN_30001b00;
  local_6c = &LAB_30002460;
  local_68 = &LAB_300025b0;
  local_64 = &LAB_30002740;
  local_60 = FUN_30002a40;
  local_58 = &LAB_30002c00;
  local_54 = FUN_30002d20;
  local_50 = &LAB_30002ea0;
  local_4c = &LAB_30002f10;
  local_48 = &LAB_30002f60;
  local_44 = &LAB_30002fb0;
  local_40 = &LAB_30003000;
  local_3c = &LAB_30007c80;
  local_38 = FUN_30008ff0;
  local_34 = &LAB_30016960;
  local_30 = &LAB_30003040;
  local_dc[1] = &DAT_3000f550;
  local_28 = &LAB_30012280;
  local_24 = FUN_30012360;
  local_dc[2] = &LAB_30010c60;
  local_dc[3] = &LAB_30010ce0;
  local_1c = &LAB_300078e0;
  local_8 = &LAB_30011db0;
  local_2c = FUN_30010d50;
  local_20 = &LAB_3001c640;
  local_18 = &LAB_3001c6d0;
  local_14 = FUN_300045b0;
  local_10 = FUN_300042f0;
  local_c = FUN_300044c0;
  local_4 = &LAB_3001d4d0;
  FUN_3001d340();
  ppuVar3 = local_dc;
  for (iVar1 = 0x37; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

