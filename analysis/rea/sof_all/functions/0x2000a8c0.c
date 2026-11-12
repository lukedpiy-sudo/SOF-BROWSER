// rea decompile_all
// name: FUN_2000a8c0
// address: 0x2000a8c0
// body: available
// range: 0x2000a8c0-0x2000a92c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000a8c0(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  undefined4 *puVar7;
  
  uVar5 = *(uint *)(unaff_EBX + 8);
  if (uVar5 != 0) {
    puVar6 = *(undefined4 **)(unaff_EBX + 4);
    puVar7 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    unaff_EDI = *(undefined4 *)(unaff_EBP + -0x14);
  }
  iVar1 = *(int *)(unaff_EBX + 4);
  iVar2 = *(int *)(unaff_EBX + 8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  puVar3 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBX + 4) = puVar3 + 1;
  *puVar3 = 0;
  *(undefined4 *)(unaff_EBX + 0xc) = unaff_EDI;
  *(int *)(unaff_EBX + 8) = iVar2;
  *(undefined1 *)(iVar2 + *(int *)(unaff_EBX + 4)) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

