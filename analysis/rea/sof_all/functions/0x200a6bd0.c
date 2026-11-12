// rea decompile_all
// name: FUN_200a6bd0
// address: 0x200a6bd0
// body: available
// range: 0x200a6bd0-0x200a6d3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6bd0(void)

{
  undefined1 uVar1;
  int in_ECX;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d6e8;
  local_c = ExceptionList;
  piVar2 = *(int **)(in_ECX + 0x110);
  ExceptionList = &local_c;
  if (piVar2 != *(int **)(in_ECX + 0x114)) {
    do {
      iVar6 = *(int *)(*piVar2 + 0x24);
      if (iVar6 != *(int *)(*piVar2 + 0x28)) {
        do {
          local_1c[0] = *(undefined1 *)(iVar6 + 8);
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          FUN_2000a3a0(iVar6 + 8,0,0xffffffff);
          uVar4 = 0;
          local_4 = 0;
          if (local_14 != 0) {
            bVar7 = false;
            do {
              if ((bVar7) || (local_18 == 0)) {
                pcVar3 = "";
              }
              else {
                FUN_2000a930();
                pcVar3 = (char *)(local_18 + uVar4);
              }
              if ((local_14 < uVar4) || (local_18 == 0)) {
                puVar5 = &DAT_201116cc;
              }
              else {
                FUN_2000a930();
                puVar5 = (undefined1 *)(local_18 + uVar4);
              }
              uVar1 = FUN_200fb2a2((int)*pcVar3);
              *puVar5 = uVar1;
              uVar4 = uVar4 + 1;
              bVar7 = local_14 < uVar4;
            } while (!bVar7 && local_14 != uVar4);
          }
          FUN_20026c70(local_24,local_1c);
          local_4 = 0xffffffff;
          if (local_18 != 0) {
            if (*(char *)(local_18 + -1) == '\0') {
              FUN_200f9f75((char *)(local_18 + -1));
            }
            else {
              *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
            }
          }
          iVar6 = iVar6 + 0x28;
        } while (iVar6 != *(int *)(*piVar2 + 0x28));
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(in_ECX + 0x114));
  }
  ExceptionList = local_c;
  return;
}

