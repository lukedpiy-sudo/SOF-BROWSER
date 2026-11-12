// rea decompile_all
// name: FUN_200820a0
// address: 0x200820a0
// body: available
// range: 0x200820a0-0x200821bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200820a0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  int in_ECX;
  undefined1 *puVar8;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10 [4];
  
  local_10[0] = *param_1;
  local_10[1] = 0;
  bVar1 = true;
  puVar2 = *(undefined4 **)(in_ECX + 4);
  puVar3 = (undefined4 *)(*(undefined4 **)(in_ECX + 4))[1];
  while (puVar3 != *(undefined4 **)(in_ECX + 8)) {
    bVar1 = local_10[0] < (int)puVar3[3];
    puVar2 = puVar3;
    if (bVar1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    piVar4 = (int *)FUN_200753a0(local_20,puVar3,puVar2,local_10);
    return *piVar4 + 0x10;
  }
  local_24 = puVar2;
  if (bVar1) {
    puVar5 = (undefined4 *)FUN_20083550(local_1c);
    if (local_24 == (undefined4 *)*puVar5) {
      puVar5 = &param_1;
      param_1 = (int *)CONCAT31(param_1._1_3_,1);
      uVar6 = FUN_200753a0(local_18,puVar3,puVar2,local_10);
      FUN_2008c5b0(uVar6,puVar5);
      return local_10[2] + 0x10;
    }
    FUN_2008e140();
  }
  if ((int)local_24[3] < local_10[0]) {
    puVar8 = &local_26;
    local_26 = 1;
    ppuVar7 = (undefined4 **)FUN_200753a0(local_14,puVar3,puVar2,local_10);
  }
  else {
    puVar8 = &local_25;
    local_25 = 0;
    ppuVar7 = &local_24;
  }
  FUN_2008c5b0(ppuVar7,puVar8);
  return local_10[2] + 0x10;
}

