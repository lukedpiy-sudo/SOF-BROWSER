// rea decompile_all
// name: FUN_2006a680
// address: 0x2006a680
// body: available
// range: 0x2006a680-0x2006a793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2006a6be) */
/* WARNING: Removing unreachable block (ram,0x2006a6db) */

void FUN_2006a680(void)

{
  char cVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20072040(local_20,**(undefined4 **)(in_ECX + 0x24),*(undefined4 **)(in_ECX + 0x24));
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
  FUN_2000a5b0(0);
  uVar2 = 0xffffffff;
  pcVar5 = &DAT_2015ee44;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_2000a6c0(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_2015ee44;
    puVar6 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined1 *)((int)local_18 + uVar2) = 0;
    local_14 = uVar2;
  }
  local_4 = 0;
  FUN_20069fd0(local_1c);
  if (local_18 != (undefined4 *)0x0) {
    if (*(char *)((int)local_18 + -1) != '\0') {
      *(char *)((int)local_18 + -1) = *(char *)((int)local_18 + -1) + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75((char *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

