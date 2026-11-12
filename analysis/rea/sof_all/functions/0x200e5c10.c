// rea decompile_all
// name: FUN_200e5c10
// address: 0x200e5c10
// body: available
// range: 0x200e5c10-0x200e5d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e5c2c) */

void FUN_200e5c10(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (in_ECX + 0x34 == param_1) {
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
        *(undefined1 **)(in_ECX + 0x38) = puVar3;
        *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0xc);
        puVar3[-1] = puVar3[-1] + '\x01';
        goto LAB_200e5cd6;
      }
    }
    cVar2 = FUN_2000a6c0(uVar1,1);
    if (cVar2 != '\0') {
      puVar7 = *(undefined4 **)(param_1 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_201116cc;
      }
      puVar8 = *(undefined4 **)(in_ECX + 0x38);
      for (uVar6 = uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_2000a6a0(uVar1);
    }
  }
LAB_200e5cd6:
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_201116cc;
  }
  uVar4 = FUN_200f9e13(puVar3);
  *(undefined4 *)(in_ECX + 0x44) = uVar4;
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_201116cc;
  }
  iVar5 = FUN_200faaf0(puVar3,0x2f);
  uVar4 = FUN_200f9e13(iVar5);
  *(undefined4 *)(in_ECX + 0x48) = uVar4;
  iVar5 = FUN_200faaf0(iVar5 + 1,0x2f);
  if (iVar5 != 0) {
    uVar4 = FUN_200f9e13(iVar5 + 1);
    *(undefined4 *)(in_ECX + 0x48) = uVar4;
  }
  return;
}

