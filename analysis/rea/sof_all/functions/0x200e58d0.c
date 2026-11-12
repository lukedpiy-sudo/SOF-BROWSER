// rea decompile_all
// name: FUN_200e58d0
// address: 0x200e58d0
// body: available
// range: 0x200e58d0-0x200e59d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e58d0(undefined1 param_1)

{
  char cVar1;
  undefined4 *in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010fcc2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 5) = param_1;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 9) = param_1;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(in_ECX + 0xd) = param_1;
  FUN_2000a5b0(0);
  in_ECX[0x14] = 0;
  *(undefined1 *)(in_ECX + 0x13) = param_1;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(in_ECX + 0x1d) = param_1;
  FUN_2000a5b0(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  puVar5 = in_ECX;
  for (iVar2 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar2 != 0;
      iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)register0x00000010;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_2015ee44;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_2000a6c0(uVar3,1);
  if (cVar1 != '\0') {
    puVar5 = (undefined4 *)&DAT_2015ee44;
    puVar7 = (undefined4 *)in_ECX[0x1e];
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    in_ECX[0x1f] = uVar3;
    *(undefined1 *)(uVar3 + in_ECX[0x1e]) = 0;
  }
  in_ECX[0x11] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x17] = 0;
  ExceptionList = local_c;
  return;
}

