// rea decompile_all
// name: FUN_200a7b60
// address: 0x200a7b60
// body: available
// range: 0x200a7b60-0x200a7c8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200a7ba2) */

void FUN_200a7b60(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = *param_1;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX == param_1) {
    FUN_20027e40(uVar1,0xffffffff);
    FUN_20027e40(0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar3 = *(undefined1 **)(param_1 + 4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_201116cc;
      }
      if ((int)(uint)(byte)puVar3[-1] < -1) {
        FUN_2000a5b0(1);
        puVar3 = *(undefined1 **)(param_1 + 4);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_201116cc;
        }
        *(undefined1 **)(in_ECX + 4) = puVar3;
        *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_200a7c53;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_201116cc;
      }
      puVar6 = *(undefined4 **)(in_ECX + 4);
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_200a7c53:
  local_4 = 0;
  in_ECX[0x10] = param_1[0x10];
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  FUN_2000a3a0(param_1 + 0x10,0,0xffffffff);
  ExceptionList = local_c;
  return;
}

