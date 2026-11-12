// rea decompile_all
// name: FUN_200ce840
// address: 0x200ce840
// body: available
// range: 0x200ce840-0x200ce9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ce840(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e66b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[0xe] = 0xffffffff;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0xffffffff;
  in_ECX[0x11] = 0xffffffff;
  in_ECX[0x12] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1b) = (undefined1)param_1;
  FUN_2000a5b0(0);
  *in_ECX = &PTR_FUN_20112788;
  in_ECX[1] = param_1;
  in_ECX[2] = param_2;
  in_ECX[7] = 0x3f800000;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xc] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0xffffffff;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0x10] = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  in_ECX[0x14] = 0;
  in_ECX[0x13] = uVar2;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1f] = 0;
  *(undefined1 *)((int)in_ECX + 0x61) = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)((int)in_ECX + 0x62) = 0;
  in_ECX[0x20] = 0;
  *(undefined2 *)(in_ECX + 0x21) = 0;
  *(undefined1 *)((int)in_ECX + 99) = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x65) = 0;
  *(undefined1 *)((int)in_ECX + 0x66) = 0;
  *(undefined1 *)((int)in_ECX + 0x67) = 1;
  in_ECX[0x22] = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    puVar1 = operator_new(0x20);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar4 = *(undefined4 **)(in_ECX[1] + 0x50);
      puVar1[2] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      puVar5 = puVar1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    in_ECX[0x1a] = puVar1;
    uVar2 = __ftol();
    in_ECX[10] = uVar2;
    uVar2 = __ftol();
    in_ECX[0xb] = uVar2;
  }
  ExceptionList = local_c;
  return;
}

