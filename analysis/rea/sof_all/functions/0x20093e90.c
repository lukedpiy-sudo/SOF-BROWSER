// rea decompile_all
// name: FUN_20093e90
// address: 0x20093e90
// body: available
// range: 0x20093e90-0x20094025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20093e90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *in_ECX;
  undefined1 local_c [12];
  
  if (*in_ECX == '\0') {
    return;
  }
  FUN_200a1410(local_c,param_1);
  iVar1 = __ftol();
  if (iVar1 < -0x1e) {
    iVar1 = -0x1e;
  }
  else if (0x1d < iVar1) {
    iVar1 = 0x1d;
  }
  iVar2 = __ftol();
  if (iVar2 < -0x1e) {
    iVar2 = -0x1e;
  }
  else if (0x1d < iVar2) {
    iVar2 = 0x1d;
  }
  if (iVar1 < *(int *)(in_ECX + 0xfc)) {
    *(int *)(in_ECX + 0xfc) = iVar1;
  }
  if (*(int *)(in_ECX + 0x100) < iVar1) {
    *(int *)(in_ECX + 0x100) = iVar1;
  }
  if (iVar2 < *(int *)(in_ECX + 0x104)) {
    *(int *)(in_ECX + 0x104) = iVar2;
  }
  if (*(int *)(in_ECX + 0x108) < iVar2) {
    *(int *)(in_ECX + 0x108) = iVar2;
  }
  if (in_ECX[0x130] == '\0') {
    return;
  }
  *(int *)(in_ECX + *(int *)(in_ECX + 0x110) * 8 + 0x118) = iVar1 + 0x20;
  *(int *)(in_ECX + *(int *)(in_ECX + 0x110) * 8 + 0x11c) = iVar2 + 0x20;
  if (in_ECX[0x10c] == '\0') {
    if (in_ECX[0x10d] == '\0') {
      iVar1 = *(int *)(in_ECX + 0x110);
      *(int *)(in_ECX + 0x110) = iVar1 + 1;
      if (iVar1 + 1 < 3) {
        *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
        return;
      }
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x110);
      *(int *)(in_ECX + 0x110) = iVar1 + 1;
      if (*(int *)(in_ECX + 0x114) < 2) {
        *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
        return;
      }
      if (iVar1 + 1 != 3) goto LAB_20093fe1;
    }
    in_ECX[0x110] = '\0';
    in_ECX[0x111] = '\0';
    in_ECX[0x112] = '\0';
    in_ECX[0x113] = '\0';
  }
  else {
    if (*(int *)(in_ECX + 0x114) < 2) {
      *(int *)(in_ECX + 0x110) = *(int *)(in_ECX + 0x110) + 1;
      *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
      return;
    }
    *(uint *)(in_ECX + 0x110) = 2 - (uint)(*(int *)(in_ECX + 0x110) != 1);
  }
LAB_20093fe1:
  *(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 1;
  FUN_20094030();
  return;
}

