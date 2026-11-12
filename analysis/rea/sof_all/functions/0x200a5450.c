// rea decompile_all
// name: FUN_200a5450
// address: 0x200a5450
// body: available
// range: 0x200a5450-0x200a5537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a5450(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  uVar4 = 0;
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 != 0) {
    do {
      if (*(int *)(param_1 + 4) == 0) {
        pcVar5 = "";
      }
      else {
        if (*(char *)(*(int *)(param_1 + 4) + -1) != '\0') {
          uVar3 = FUN_2000a830();
          if (uVar3 < uVar6) {
            FUN_201075d0();
          }
          if (uVar6 < *(uint *)(param_1 + 8)) {
            *(uint *)(param_1 + 8) = uVar6;
          }
          iVar1 = *(int *)(param_1 + 4);
          if ((iVar1 == 0) || (*(char *)(iVar1 + -1) == '\0')) {
            if (uVar6 == 0) {
              if (iVar1 != 0) {
                FUN_2000a6a0(0);
              }
            }
            else if (*(uint *)(param_1 + 0xc) < uVar6) goto LAB_200a54c5;
          }
          else if (uVar6 == 0) {
            FUN_2000a5b0(1);
          }
          else {
LAB_200a54c5:
            FUN_2000a840(uVar6);
          }
        }
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
        }
        pcVar5 = (char *)(*(int *)(param_1 + 4) + uVar4);
      }
      if ((*(uint *)(param_1 + 8) < uVar4) || (*(int *)(param_1 + 4) == 0)) {
        puVar7 = &DAT_201116cc;
      }
      else {
        if (*(char *)(*(int *)(param_1 + 4) + -1) != '\0') {
          FUN_2000a6c0(*(uint *)(param_1 + 8),0);
        }
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
        }
        puVar7 = (undefined1 *)(*(int *)(param_1 + 4) + uVar4);
      }
      uVar2 = FUN_200fb2a2((int)*pcVar5);
      *puVar7 = uVar2;
      uVar6 = *(uint *)(param_1 + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return;
}

