// rea decompile_all
// name: FUN_200d4060
// address: 0x200d4060
// body: available
// range: 0x200d4060-0x200d429c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d4060(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  
  if (*(uint *)(in_ECX + 0xa0) == 0) {
    if (*(char *)(in_ECX + 0x9d) == '\0') {
      iVar2 = *(int *)(param_1 + 8);
      while (iVar2 != 0) {
        puVar4 = *(undefined1 **)(param_1 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_201116cc;
        }
        iVar2 = (*DAT_2040363c)(puVar4,in_ECX + 0x8c);
        if (iVar2 <= *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0xa4)) {
          return;
        }
        if (*(int *)(param_1 + 4) != 0) {
          if (*(char *)(*(int *)(param_1 + 4) + -1) != '\0') {
            FUN_2000a6c0(*(undefined4 *)(param_1 + 8),0);
          }
          if (*(int *)(param_1 + 4) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
          }
        }
        iVar2 = *(int *)(param_1 + 4);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(param_1 + 8) + iVar2;
        }
        if (iVar2 != 0) {
          if (*(char *)(iVar2 + -1) != '\0') {
            FUN_2000a6c0(*(undefined4 *)(param_1 + 8),0);
          }
          if (*(int *)(param_1 + 4) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
          }
        }
        if (iVar3 + -1 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (iVar3 + -1) - *(int *)(param_1 + 4);
        }
        if (*(uint *)(param_1 + 8) < uVar5) {
          FUN_201077fc();
        }
        if (*(uint *)(param_1 + 8) != uVar5) {
          FUN_2000a930();
          FUN_200fa360(*(int *)(param_1 + 4) + uVar5,*(int *)(param_1 + 4) + 1 + uVar5,
                       (*(int *)(param_1 + 8) + -1) - uVar5);
          iVar2 = *(int *)(param_1 + 8) + -1;
          cVar1 = FUN_2000a6c0(iVar2,0);
          if (cVar1 != '\0') {
            *(int *)(param_1 + 8) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 4)) = 0;
          }
        }
        iVar2 = *(int *)(param_1 + 8);
      }
    }
    else {
      iVar3 = (*DAT_2040363c)(&DAT_20130de0,in_ECX + 0x8c);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        while (uVar5 = *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0xa4),
              uVar5 <= (uint)(iVar2 * iVar3) && iVar2 * iVar3 - uVar5 != 0) {
          if ((*(int *)(param_1 + 4) != 0) && (*(char *)(*(int *)(param_1 + 4) + -1) != '\0')) {
            FUN_2000a6c0(iVar2,0);
          }
          if (*(int *)(param_1 + 4) != 0) {
            *(undefined1 *)(*(int *)(param_1 + 4) + -1) = 0;
          }
          if (*(int *)(param_1 + 4) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 8) + *(int *)(param_1 + 4);
          }
          FUN_2000a930();
          if (iVar2 + -1 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (iVar2 + -1) - *(int *)(param_1 + 4);
          }
          FUN_20027e40(iVar2,1);
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            return;
          }
        }
      }
    }
  }
  else if (*(uint *)(in_ECX + 0xa0) < *(uint *)(param_1 + 8)) {
    FUN_2000a930();
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 8) + *(int *)(param_1 + 4);
    }
    iVar2 = (iVar2 - *(int *)(param_1 + 8)) + *(int *)(in_ECX + 0xa0);
    FUN_2000a930();
    if (iVar2 == 0) {
      FUN_20027e40(0,1);
      return;
    }
    FUN_20027e40(iVar2 - *(int *)(param_1 + 4),1);
    return;
  }
  return;
}

