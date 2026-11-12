// rea decompile_all
// name: FUN_200335c0
// address: 0x200335c0
// body: available
// range: 0x200335c0-0x200339ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200335c0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0x36;
  if (param_1 != 1000) {
    if (param_1 == 999) {
      iVar3 = *(int *)(in_ECX + 0x1bc);
      if (iVar3 < 0xd) {
        *(undefined4 *)(in_ECX + 0x1bc) = 0x4f;
      }
      else if (iVar3 < 0x19) {
        *(undefined4 *)(in_ECX + 0x1bc) = 0;
      }
      else if (iVar3 < 0x24) {
        *(undefined4 *)(in_ECX + 0x1bc) = 0xd;
      }
      else if (iVar3 < 0x2e) {
        *(undefined4 *)(in_ECX + 0x1bc) = 0x19;
      }
      else if (iVar3 < 0x36) {
        *(undefined4 *)(in_ECX + 0x1bc) = 0x24;
      }
      else if (iVar3 < 0x42) {
        *(uint *)(in_ECX + 0x1bc) = (-(uint)((*(byte *)(in_ECX + 0xe0) & 0x10) != 0) & 10) + 0x24;
      }
      else {
        if (iVar3 < 0x49) {
          if ((*(int *)(in_ECX + 0x30) != 3) && (*(int *)(in_ECX + 0x30) != 4)) {
            *(uint *)(in_ECX + 0x1bc) =
                 (-(uint)((*(byte *)(in_ECX + 0xe0) & 0x10) != 0) & 10) + 0x24;
            goto LAB_20033826;
          }
        }
        else {
          uVar4 = ((0x4e < iVar3) - 1 & 0xfffffff9) + 0x49;
        }
        *(uint *)(in_ECX + 0x1bc) = uVar4;
      }
    }
    else {
      param_1 = *(int *)(in_ECX + 0x1bc) + param_1;
      *(int *)(in_ECX + 0x1bc) = param_1;
      if (param_1 < 0) {
        do {
          param_1 = param_1 + 0x53;
        } while (param_1 < 0);
        *(int *)(in_ECX + 0x1bc) = param_1;
      }
      iVar3 = *(int *)(in_ECX + 0x1bc);
      if (0x52 < iVar3) {
        do {
          iVar3 = iVar3 + -0x53;
        } while (0x52 < iVar3);
        *(int *)(in_ECX + 0x1bc) = iVar3;
      }
    }
    goto LAB_20033826;
  }
  iVar3 = *(int *)(in_ECX + 0x1bc);
  if (iVar3 < 0xd) {
    *(undefined4 *)(in_ECX + 0x1bc) = 0xd;
    goto LAB_20033826;
  }
  if (iVar3 < 0x19) {
    *(undefined4 *)(in_ECX + 0x1bc) = 0x19;
    goto LAB_20033826;
  }
  if (iVar3 < 0x24) {
    *(undefined4 *)(in_ECX + 0x1bc) = 0x24;
    goto LAB_20033826;
  }
  if (iVar3 < 0x2e) {
    if ((*(byte *)(in_ECX + 0xe0) & 0x10) != 0) {
      *(undefined4 *)(in_ECX + 0x1bc) = 0x2e;
      goto LAB_20033826;
    }
LAB_2003365b:
    if ((*(int *)(in_ECX + 0x30) != 3) && (*(int *)(in_ECX + 0x30) != 4)) {
      *(undefined4 *)(in_ECX + 0x1bc) = 0x42;
      goto LAB_20033826;
    }
  }
  else {
    if (iVar3 < 0x36) goto LAB_2003365b;
    if (iVar3 < 0x42) {
      *(undefined4 *)(in_ECX + 0x1bc) = 0x42;
      goto LAB_20033826;
    }
    if (iVar3 < 0x49) {
      *(undefined4 *)(in_ECX + 0x1bc) = 0x49;
      goto LAB_20033826;
    }
    uVar4 = (0x4e < iVar3) - 1 & 0x4f;
  }
  *(uint *)(in_ECX + 0x1bc) = uVar4;
LAB_20033826:
  iVar3 = __ftol();
  while( true ) {
    iVar5 = *(int *)(in_ECX + 0x1bc);
    bVar2 = false;
    if ((iVar5 == 0x26) &&
       (((iVar1 = *(int *)(in_ECX + 0x30), iVar1 == 1 || (iVar1 == 3)) || (iVar1 == 4)))) {
      bVar2 = true;
    }
    if ((iVar5 == 0x27) &&
       (((iVar1 = *(int *)(in_ECX + 0x30), iVar1 == 1 || (iVar1 == 3)) || (iVar1 == 4)))) {
      bVar2 = true;
    }
    if ((iVar5 == 0x28) &&
       (((iVar1 = *(int *)(in_ECX + 0x30), iVar1 == 1 || (iVar1 == 3)) || (iVar1 == 4)))) {
      bVar2 = true;
    }
    if ((iVar5 == 0x29) &&
       (((iVar1 = *(int *)(in_ECX + 0x30), iVar1 == 1 || (iVar1 == 3)) || (iVar1 == 4)))) {
      bVar2 = true;
    }
    if ((iVar5 == 0x17) && (*(int *)(in_ECX + 0x30) != 1)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x18) && (*(int *)(in_ECX + 0x30) != 1)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x12) &&
       (((iVar1 = *(int *)(in_ECX + 0x30), iVar1 == 0 || (iVar1 == 3)) || (iVar1 == 4)))) {
      bVar2 = true;
    }
    if ((iVar5 == 0x13) && ((*(byte *)(in_ECX + 0xe0) & 1) != 0)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x14) && ((*(byte *)(in_ECX + 0xe0) & 1) != 0)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x15) && ((*(byte *)(in_ECX + 0xe0) & 1) != 0)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x16) && ((*(byte *)(in_ECX + 0xe0) & 1) != 0)) {
      bVar2 = true;
    }
    if ((iVar5 == 0x2c) && ((*(byte *)(in_ECX + 0xe0) & 0xc0) == 0)) {
      bVar2 = true;
    }
    if (((0x2d < iVar5) && (iVar5 < 0x35)) && ((*(byte *)(in_ECX + 0xe0) & 0x10) == 0)) {
      bVar2 = true;
    }
    if ((((iVar5 < 0x36) || (0x41 < iVar5)) ||
        ((*(int *)(in_ECX + 0x30) == 3 || (*(int *)(in_ECX + 0x30) == 4)))) && (!bVar2)) break;
    iVar5 = iVar5 + iVar3;
    *(int *)(in_ECX + 0x1bc) = iVar5;
    if (iVar5 < 0) {
      do {
        iVar5 = iVar5 + 0x53;
      } while (iVar5 < 0);
      *(int *)(in_ECX + 0x1bc) = iVar5;
    }
    iVar5 = *(int *)(in_ECX + 0x1bc);
    if (0x52 < iVar5) {
      do {
        iVar5 = iVar5 + -0x53;
      } while (0x52 < iVar5);
      *(int *)(in_ECX + 0x1bc) = iVar5;
    }
  }
  return;
}

