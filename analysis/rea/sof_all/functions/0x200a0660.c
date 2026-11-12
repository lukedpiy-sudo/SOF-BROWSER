// rea decompile_all
// name: FUN_200a0660
// address: 0x200a0660
// body: available
// range: 0x200a0660-0x200a082c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0660(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_64 [4];
  undefined1 local_54 [16];
  undefined4 local_44 [16];
  uint local_4;
  
  iVar3 = 0x10;
  uVar1 = param_1[0x10];
  puVar2 = in_ECX;
  if ((uVar1 & 1) != 0) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    iVar3 = 4;
    puVar2 = in_ECX;
    do {
      *puVar2 = 0x3f800000;
      puVar2 = puVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    in_ECX[0x10] = 1;
    return;
  }
  puVar2 = param_1;
  puVar4 = local_44;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_4 = uVar1;
  iVar3 = FUN_200a08f0(local_44,local_54,&param_1);
  if (iVar3 != 0) {
    local_64[0] = 0x3f800000;
    local_64[1] = 0;
    local_64[2] = 0;
    local_64[3] = 0;
    FUN_200a0830(local_44,local_54,local_64);
    iVar3 = 0;
    puVar2 = in_ECX;
    do {
      puVar4 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0;
    local_64[1] = 0x3f800000;
    local_64[2] = 0;
    local_64[3] = 0;
    FUN_200a0830(local_44,local_54,local_64);
    iVar3 = 0;
    puVar2 = in_ECX + 1;
    do {
      puVar4 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0;
    local_64[1] = 0;
    local_64[2] = 0x3f800000;
    local_64[3] = 0;
    FUN_200a0830(local_44,local_54,local_64);
    iVar3 = 0;
    puVar2 = in_ECX + 2;
    do {
      puVar4 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 4;
    } while (iVar3 < 4);
    local_64[0] = 0;
    local_64[1] = 0;
    local_64[2] = 0;
    local_64[3] = 0x3f800000;
    FUN_200a0830(local_44,local_54,local_64);
    iVar3 = 0;
    puVar2 = in_ECX + 3;
    do {
      puVar4 = local_64 + iVar3;
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar4;
      puVar2 = puVar2 + 4;
    } while (iVar3 < 4);
    in_ECX[0x10] = 0;
    return;
  }
  puVar2 = in_ECX;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 4;
  puVar2 = in_ECX;
  do {
    *puVar2 = 0x3f800000;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  in_ECX[0x10] = 1;
  return;
}

