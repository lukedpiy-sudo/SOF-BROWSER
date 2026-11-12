// rea decompile_all
// name: FUN_200c9130
// address: 0x200c9130
// body: available
// range: 0x200c9130-0x200c92c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c91b3) */

void FUN_200c9130(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_c;
  undefined4 *local_4;
  
  puVar7 = *(undefined4 **)(param_1 + 4);
  local_c = *(undefined4 **)(param_1 + 8);
  local_4 = puVar7;
  if (puVar7 != local_c) {
    do {
      if (puVar7[5] == 0) {
        puVar7 = puVar7 + 0x10;
        local_4 = puVar7;
      }
      else {
        puVar9 = puVar7 + 0x10;
        if (puVar9 != local_c) {
          puVar6 = puVar7 + 0xd;
          do {
            puVar6[-0xd] = *puVar9;
            FUN_2000a3a0(puVar6 + 4,0,0xffffffff);
            puVar6[-8] = puVar6[8];
            puVar6[-7] = puVar6[9];
            puVar6[-6] = puVar6[10];
            FUN_2000a3a0(puVar6 + 0xb,0,0xffffffff);
            uVar1 = puVar6[0x11];
            if (puVar6 + -1 == puVar6 + 0xf) {
              FUN_20027e40(uVar1,0xffffffff);
              FUN_20027e40(0,0);
            }
            else {
              if (uVar1 != 0) {
                puVar4 = (undefined1 *)puVar6[0x10];
                if (puVar4 == (undefined1 *)0x0) {
                  puVar4 = &DAT_201116cc;
                }
                if ((int)(uint)(byte)puVar4[-1] < -1) {
                  FUN_2000a5b0(1);
                  puVar4 = (undefined1 *)puVar6[0x10];
                  if (puVar4 == (undefined1 *)0x0) {
                    puVar4 = &DAT_201116cc;
                  }
                  *puVar6 = puVar4;
                  puVar6[1] = puVar6[0x11];
                  puVar6[2] = puVar6[0x12];
                  puVar4[-1] = puVar4[-1] + '\x01';
                  goto LAB_200c9263;
                }
              }
              cVar3 = FUN_2000a6c0(uVar1,1);
              if (cVar3 != '\0') {
                puVar7 = (undefined4 *)puVar6[0x10];
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = (undefined4 *)&DAT_201116cc;
                }
                puVar10 = (undefined4 *)*puVar6;
                for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *puVar10 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar10 = puVar10 + 1;
                }
                for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                  *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
                  puVar7 = (undefined4 *)((int)puVar7 + 1);
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                }
                FUN_2000a6a0(uVar1);
              }
            }
LAB_200c9263:
            puVar9 = puVar9 + 0x10;
            puVar6 = puVar6 + 0x10;
            puVar7 = local_4;
          } while (puVar9 != local_c);
        }
        iVar2 = *(int *)(param_1 + 8);
        for (iVar8 = iVar2 + -0x40; iVar8 != iVar2; iVar8 = iVar8 + 0x40) {
          FUN_20025fd0();
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x40;
      }
      local_c = *(undefined4 **)(param_1 + 8);
    } while (puVar7 != local_c);
  }
  return;
}

