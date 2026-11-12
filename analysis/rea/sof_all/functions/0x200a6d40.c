// rea decompile_all
// name: FUN_200a6d40
// address: 0x200a6d40
// body: available
// range: 0x200a6d40-0x200a6e36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6d40(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4;
  
  uVar2 = param_1;
  local_1c = *(undefined4 **)(in_ECX + 0x110);
  local_18 = in_ECX;
  if (local_1c != *(undefined4 **)(in_ECX + 0x114)) {
    do {
      puVar4 = *(undefined4 **)(uVar2 + 4);
      uVar1 = *local_1c;
      bVar7 = true;
      puVar6 = (undefined4 *)puVar4[1];
      if (puVar6 != *(undefined4 **)(uVar2 + 8)) {
        do {
          puVar4 = puVar6;
          iVar3 = FUN_20023c40(puVar4 + 3);
          bVar7 = iVar3 < 0;
          if (bVar7) {
            puVar6 = (undefined4 *)*puVar4;
          }
          else {
            puVar6 = (undefined4 *)puVar4[2];
          }
        } while (puVar6 != *(undefined4 **)(uVar2 + 8));
      }
      if (*(char *)(uVar2 + 0xc) == '\0') {
        local_20 = puVar4;
        if (bVar7) {
          if (puVar4 == (undefined4 *)**(int **)(uVar2 + 4)) {
            puVar5 = local_10;
            goto LAB_200a6de0;
          }
          FUN_20086e70();
        }
        iVar3 = FUN_20023c40(uVar1);
        if (iVar3 < 0) {
          puVar5 = local_c;
          goto LAB_200a6de0;
        }
        param_1 = param_1 & 0xffffff00;
        FUN_2008c5b0(&local_20,&param_1);
      }
      else {
        puVar5 = local_14;
LAB_200a6de0:
        puVar4 = (undefined4 *)FUN_20027330(puVar5,puVar6,puVar4,uVar1);
        local_8 = *puVar4;
        local_4 = 1;
      }
      local_1c = local_1c + 1;
    } while (local_1c != *(undefined4 **)(local_18 + 0x114));
  }
  return;
}

