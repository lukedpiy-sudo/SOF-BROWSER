// rea decompile_all
// name: FUN_200e4a60
// address: 0x200e4a60
// body: available
// range: 0x200e4a60-0x200e4ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200e4a82) */

void FUN_200e4a60(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    uVar1 = *(uint *)(param_3 + 8);
    if (param_1 == param_3) {
      if (*(uint *)(param_1 + 8) < uVar1) {
        FUN_201077fc();
      }
      iVar3 = *(int *)(param_1 + 8) - uVar1;
      iVar6 = -1;
      if ((iVar3 == -1) || (iVar6 = iVar3, iVar3 != 0)) {
        FUN_2000a930();
        iVar3 = *(int *)(param_1 + 4) + uVar1;
        FUN_200fa360(iVar3,iVar3 + iVar6,(*(int *)(param_1 + 8) - iVar6) - uVar1);
        iVar6 = *(int *)(param_1 + 8) - iVar6;
        cVar2 = FUN_2000a6c0(iVar6,0);
        if (cVar2 != '\0') {
          FUN_2000a6a0(iVar6);
        }
      }
    }
    else {
      if (uVar1 != 0) {
        puVar4 = *(undefined1 **)(param_3 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_201116cc;
        }
        if ((int)(uint)(byte)puVar4[-1] < -1) {
          iVar6 = *(int *)(param_1 + 4);
          if (iVar6 != 0) {
            if (*(char *)(iVar6 + -1) == '\0') {
              FUN_200f9f75((char *)(iVar6 + -1));
            }
            else {
              *(char *)(iVar6 + -1) = *(char *)(iVar6 + -1) + -1;
            }
          }
          *(undefined4 *)(param_1 + 4) = 0;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 0xc) = 0;
          puVar4 = *(undefined1 **)(param_3 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_201116cc;
          }
          *(undefined1 **)(param_1 + 4) = puVar4;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_200e4b94;
        }
      }
      cVar2 = FUN_2000a6c0(uVar1,1);
      if (cVar2 != '\0') {
        puVar7 = *(undefined4 **)(param_3 + 4);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&DAT_201116cc;
        }
        puVar8 = *(undefined4 **)(param_1 + 4);
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        *(uint *)(param_1 + 8) = uVar1;
        *(undefined1 *)(uVar1 + *(int *)(param_1 + 4)) = 0;
      }
    }
LAB_200e4b94:
    param_1 = param_1 + 0x10;
  } while( true );
}

