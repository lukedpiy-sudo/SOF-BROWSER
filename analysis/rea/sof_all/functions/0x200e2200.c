// rea decompile_all
// name: FUN_200e2200
// address: 0x200e2200
// body: available
// range: 0x200e2200-0x200e2359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e224b) */
/* WARNING: Removing unreachable block (ram,0x200e224f) */
/* WARNING: Removing unreachable block (ram,0x200e224d) */

void FUN_200e2200(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010fa78;
  local_c = ExceptionList;
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  uVar1 = *(undefined4 *)(in_ECX + 0xa4);
  ExceptionList = &local_c;
  FUN_200716d0(uVar1,*(undefined4 *)(in_ECX + 0xa8));
  *(undefined4 *)(in_ECX + 0xa8) = uVar1;
  iVar3 = FS_LoadFile(s_bot_botlist_txt_20159078,&local_20,0);
  local_24 = local_20;
  if (-1 < iVar3) {
    while (local_24 != 0) {
      pcVar4 = (char *)FUN_20055470(&local_24);
      uVar5 = 0xffffffff;
      pcVar7 = pcVar4;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar2 = FUN_2000a6c0(uVar5,1);
      if (cVar2 != '\0') {
        pcVar7 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar7 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
        }
        local_18[uVar5] = '\0';
        local_14 = uVar5;
      }
      if (local_24 == 0) break;
      FUN_2008ce10(*(undefined4 *)(in_ECX + 0xa8),1,local_1c);
    }
    FS_FreeFile(local_20);
  }
  if (local_18 != (char *)0x0) {
    if (local_18[-1] != '\0') {
      local_18[-1] = local_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

