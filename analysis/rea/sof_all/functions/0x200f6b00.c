// rea decompile_all
// name: FUN_200f6b00
// address: 0x200f6b00
// body: available
// range: 0x200f6b00-0x200f6fb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f6b00(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iStack00000010;
  undefined **ppuStack00000014;
  undefined2 in_stack_00000028;
  undefined1 in_stack_00000128;
  int *in_stack_00001e88;
  
  FUN_200fa720();
  if (in_stack_00001e88 == (int *)0x0) {
    in_stack_00001e88 = (int *)PTR_DAT_2015a828;
  }
  if (*in_stack_00001e88 != -1) {
    while ((iVar4 = Ordinal_18(), iVar4 != -1 && (iVar4 != 0))) {
      iVar4 = Ordinal_17();
      uVar3 = DAT_2015ee44;
      if (iVar4 != -1) {
        (&DAT_204076e8)[iVar4] = 0;
        puVar10 = (undefined4 *)&stack0x00000229;
        for (iVar4 = 0x15d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0;
        *(undefined1 *)((int)puVar10 + 2) = 0;
        in_stack_00000128 = uVar3;
        puVar10 = (undefined4 *)&stack0x00000129;
        for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        iVar4 = in_stack_00001e88[0x37];
        in_stack_00001e88[0x38] = 0;
        *(undefined2 *)puVar10 = 0;
        *(undefined1 *)((int)puVar10 + 2) = 0;
        in_stack_00001e88[0x37] = iVar4 + 1;
        if ('\0' < (char)in_stack_00001e88[0x3a]) {
          *(undefined1 *)(in_stack_00001e88 + 0x3a) = 0;
        }
        iStack00000010 = 0;
        ppuStack00000014 = &PTR_s_basic_2015a714;
        do {
          in_stack_00000028 = DAT_20130c64;
          puVar10 = (undefined4 *)&stack0x0000002a;
          for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *(undefined2 *)puVar10 = 0;
          DAT_204077e8 = DAT_204077e8 ^ 1;
          uVar6 = 0xffffffff;
          pcVar5 = *ppuStack00000014;
          do {
            pcVar9 = pcVar5;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar9 = pcVar5 + 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar9;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar4 = -1;
          pcVar5 = (char *)&stack0x00000028;
          do {
            pcVar8 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar8 = pcVar5 + 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar8;
          } while (cVar2 != '\0');
          pcVar5 = pcVar9 + -uVar6;
          pcVar9 = pcVar8 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar9 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar9 = pcVar9 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar9 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar9 = pcVar9 + 1;
          }
          iVar4 = -1;
          pcVar5 = (char *)&stack0x00000028;
          do {
            pcVar9 = pcVar5;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar9 = pcVar5 + 1;
            cVar2 = *pcVar5;
            pcVar5 = pcVar9;
          } while (cVar2 != '\0');
          *(undefined2 *)(pcVar9 + -1) = DAT_20130c64;
          iVar4 = FUN_200fa6a0();
          if (iVar4 != 0) {
            uVar6 = 0xffffffff;
            pcVar5 = (char *)&stack0x00000028;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar2 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            pcVar9 = (char *)(iVar4 + (~uVar6 - 1));
            pcVar5 = &DAT_204077f0 + DAT_204077e8 * 0x100;
            cVar2 = *pcVar9;
            pcVar8 = pcVar5;
            while ((cVar2 != '\0' && (cVar2 != '\\'))) {
              *pcVar8 = cVar2;
              pcVar1 = pcVar9 + 1;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
              cVar2 = *pcVar1;
            }
            *pcVar8 = '\0';
            if (pcVar5 != (char *)0x0) {
              switch(iStack00000010) {
              case 0:
                puVar10 = (undefined4 *)&stack0x000008a5;
                for (iVar4 = 0x15d; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                *(undefined2 *)puVar10 = 0;
                *(undefined1 *)((int)puVar10 + 2) = 0;
                (*(code *)in_stack_00001e88[0x32])();
                FUN_200f7190();
                break;
              case 1:
                puVar10 = (undefined4 *)&stack0x00001395;
                for (iVar4 = 0x15d; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                *(undefined2 *)puVar10 = 0;
                *(undefined1 *)((int)puVar10 + 2) = 0;
                (*(code *)in_stack_00001e88[0x33])();
                FUN_200f7190();
                break;
              case 2:
                puVar10 = (undefined4 *)&stack0x00000e1d;
                for (iVar4 = 0x15d; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                *(undefined2 *)puVar10 = 0;
                *(undefined1 *)((int)puVar10 + 2) = 0;
                (*(code *)in_stack_00001e88[0x34])();
                FUN_200f7190();
                break;
              case 3:
                puVar10 = (undefined4 *)&stack0x0000190d;
                for (iVar4 = 0x15d; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
                *(undefined2 *)puVar10 = 0;
                *(undefined1 *)((int)puVar10 + 2) = 0;
                (*(code *)in_stack_00001e88[0x35])();
                FUN_200f7190();
                break;
              case 4:
                FUN_200f7330();
                FUN_200f73a0();
                FUN_200f7410();
                FUN_200f7480();
                break;
              case 5:
                FUN_200f7330();
                FUN_200f70f0();
                FUN_200f73a0();
                FUN_200f70f0();
                FUN_200f7410();
                FUN_200f70f0();
                FUN_200f7480();
                break;
              case 6:
                FUN_200f74f0();
                break;
              case 7:
                iVar4 = -(int)pcVar5;
                do {
                  cVar2 = *pcVar5;
                  pcVar5[(int)(&stack0x00000128 + iVar4)] = cVar2;
                  pcVar5 = pcVar5 + 1;
                } while (cVar2 != '\0');
              }
            }
          }
          ppuStack00000014 = ppuStack00000014 + 1;
          iVar4 = iStack00000010 + 2;
          iStack00000010 = iStack00000010 + 1;
        } while (iVar4 < 9);
        FUN_200f7550();
      }
    }
  }
  return;
}

