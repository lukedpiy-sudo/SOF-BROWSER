// rea decompile_all
// name: FUN_2004c280
// address: 0x2004c280
// body: available
// range: 0x2004c280-0x2004c417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004c280(void)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int local_40;
  undefined4 *local_3c;
  int local_38 [2];
  undefined1 local_30 [4];
  char *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b3b0;
  local_c = ExceptionList;
  puVar3 = &DAT_20365ea1;
  ExceptionList = &local_c;
  do {
    puVar3[-1] = 0x5d;
    *puVar3 = 0;
    puVar3 = puVar3 + 0x100;
  } while ((int)puVar3 < 0x20367ea1);
  DAT_20365e9c = 1;
  local_3c = &DAT_20135350;
  local_40 = 0;
  do {
    pcVar6 = (char *)*local_3c;
    if (pcVar6 != (char *)0x0) {
      uVar4 = 0xffffffff;
      local_2c = (char *)0x0;
      local_28 = 0;
      local_24 = 0;
      pcVar7 = pcVar6;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar2 = FUN_2000a6c0(uVar4,1);
      if (cVar2 != '\0') {
        pcVar7 = local_2c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_2c[uVar4] = '\0';
        local_28 = uVar4;
      }
      local_4 = 0;
      FUN_200234d0(local_30);
      local_10 = 0;
      local_4._0_1_ = 1;
      FUN_2004c7a0(local_38,local_20);
      iVar1 = local_38[0];
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_2000a5b0(1);
      local_4 = 0xffffffff;
      *(int *)(iVar1 + 0x1c) = local_40;
      if (local_2c != (char *)0x0) {
        if (local_2c[-1] == '\0') {
          FUN_200f9f75(local_2c + -1);
        }
        else {
          local_2c[-1] = local_2c[-1] + -1;
        }
      }
      local_2c = (char *)0x0;
      local_28 = 0;
      local_24 = 0;
    }
    local_40 = local_40 + 1;
    local_3c = local_3c + 4;
    if (0xff < local_40) {
      Cmd_AddCommand(&DAT_2013682c,&LAB_2004c010);
      Cmd_AddCommand(s_unbind_20136824,&LAB_2004bea0);
      Cmd_AddCommand(s_unbindall_20136818,FUN_2004bf70);
      Cmd_AddCommand(s_bindlist_2013680c,&LAB_2004c230);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

