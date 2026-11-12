// rea decompile_all
// name: FUN_200e1eb0
// address: 0x200e1eb0
// body: available
// range: 0x200e1eb0-0x200e2007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e1eb0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  uint uVar4;
  char *pcVar5;
  undefined1 local_29;
  int local_28;
  int local_24 [2];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010fa0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[0xe] = 0xffffffff;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0xffffffff;
  in_ECX[0x11] = 0xffffffff;
  in_ECX[0x12] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1b) = local_29;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[1] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x23) = local_29;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  *(undefined1 *)(in_ECX + 0x28) = local_29;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *in_ECX = &PTR_FUN_20112dc0;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_200e37e0(in_ECX[0x29],in_ECX[0x2a]);
  iVar2 = FS_LoadFile(s_bot_botlist_txt_20159078,local_24,0);
  local_28 = local_24[0];
  if (-1 < iVar2) {
    while (local_28 != 0) {
      pcVar3 = (char *)FUN_20055470(&local_28);
      uVar4 = 0xffffffff;
      pcVar5 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(pcVar3,~uVar4 - 1);
      if (local_28 == 0) break;
      FUN_2008ce10(in_ECX[0x2a],1,local_1c);
    }
    FS_FreeFile(local_24[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_2000a5b0(1);
  ExceptionList = local_c;
  return;
}

