// rea decompile_all
// name: FUN_2006b5b0
// address: 0x2006b5b0
// body: available
// range: 0x2006b5b0-0x2006b6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2006b5b0(short param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined1 *puVar7;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 *local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  short local_8 [2];
  undefined4 local_4;
  
  local_8[0] = param_1;
  local_4 = 0;
  bVar1 = true;
  puVar2 = *(undefined4 **)(in_ECX + 0x128);
  puVar3 = (undefined4 *)(*(undefined4 **)(in_ECX + 0x128))[1];
  while (puVar3 != *(undefined4 **)(in_ECX + 300)) {
    bVar1 = param_1 < *(short *)(puVar3 + 3);
    puVar2 = puVar3;
    if (bVar1) {
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      puVar3 = (undefined4 *)puVar3[2];
    }
  }
  if (*(char *)(in_ECX + 0x130) == '\0') {
    local_24 = puVar2;
    if (bVar1) {
      puVar4 = (undefined4 *)FUN_20083550(local_1c);
      if (local_24 == (undefined4 *)*puVar4) {
        puVar7 = &local_27;
        local_27 = 1;
        uVar6 = FUN_20075a30(local_18,puVar3,puVar2,local_8);
        FUN_2008c5b0(uVar6,puVar7);
        *(undefined4 *)(local_10 + 0x10) = param_2;
        return;
      }
      FUN_2008e140();
    }
    if (local_8[0] <= *(short *)(local_24 + 3)) {
      local_25 = 0;
      FUN_2008c5b0(&local_24,&local_25);
      *(undefined4 *)(local_10 + 0x10) = param_2;
      return;
    }
    local_26 = 1;
    puVar5 = (undefined2 *)&local_26;
    puVar7 = local_14;
  }
  else {
    param_1 = CONCAT11(param_1._1_1_,1);
    puVar5 = &param_1;
    puVar7 = local_20;
  }
  uVar6 = FUN_20075a30(puVar7,puVar3,puVar2,local_8);
  FUN_2008c5b0(uVar6,puVar5);
  *(undefined4 *)(local_10 + 0x10) = param_2;
  return;
}

