// rea decompile_all
// name: FUN_20067bb0
// address: 0x20067bb0
// body: available
// range: 0x20067bb0-0x20067dd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20067bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  char *in_ECX;
  
  pfVar1 = (float *)(in_ECX + 0x80);
  FUN_20068f80(param_1,pfVar1);
  pfVar2 = (float *)(in_ECX + 0x8c);
  FUN_20068f80(param_1,pfVar2);
  FUN_20068f80(param_1,in_ECX + 0x98);
  pfVar3 = (float *)(in_ECX + 0xa4);
  *pfVar3 = *(float *)(in_ECX + 0x98);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(in_ECX + 0x9c);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(in_ECX + 0xa0);
  FUN_200c38a0(pfVar2);
  FUN_200c3870(SQRT(*(float *)(in_ECX + 0xac) * *(float *)(in_ECX + 0xac) +
                    *(float *)(in_ECX + 0xa8) * *(float *)(in_ECX + 0xa8) + *pfVar3 * *pfVar3));
  if (in_ECX[1] == '\0') {
    *in_ECX = '\x01';
    in_ECX[1] = '\x01';
    *(float *)(in_ECX + 4) = *pfVar1;
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 0x84);
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0x88);
  }
  if ((((*in_ECX == '\0') || (*(float *)(in_ECX + 4) != *pfVar1)) ||
      (*(float *)(in_ECX + 8) != *(float *)(in_ECX + 0x84))) ||
     (*(float *)(in_ECX + 0xc) != *(float *)(in_ECX + 0x88))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  *in_ECX = cVar4;
  if (cVar4 == '\0') {
    FUN_20068550(param_4,in_ECX + 4);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x18),pfVar1);
  }
  if (in_ECX[0x21] == '\0') {
    in_ECX[0x20] = '\x01';
    in_ECX[0x21] = '\x01';
    *(float *)(in_ECX + 0x24) = *pfVar2;
    *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(in_ECX + 0x90);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x94);
  }
  if (((in_ECX[0x20] == '\0') || (*(float *)(in_ECX + 0x24) != *pfVar2)) ||
     ((*(float *)(in_ECX + 0x28) != *(float *)(in_ECX + 0x90) ||
      (*(float *)(in_ECX + 0x2c) != *(float *)(in_ECX + 0x94))))) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  in_ECX[0x20] = cVar4;
  if (cVar4 == '\0') {
    FUN_20068550(param_4,in_ECX + 0x24);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x38),pfVar2);
  }
  if (in_ECX[0x41] == '\0') {
    in_ECX[0x40] = '\x01';
    in_ECX[0x41] = '\x01';
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x98);
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(in_ECX + 0x9c);
    *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(in_ECX + 0xa0);
  }
  if (in_ECX[0x40] != '\0') {
    cVar4 = FUN_20068320(in_ECX + 0x98);
    if (cVar4 != '\0') {
      cVar4 = '\x01';
      goto LAB_20067d79;
    }
  }
  cVar4 = '\0';
LAB_20067d79:
  in_ECX[0x40] = cVar4;
  if (cVar4 == '\0') {
    FUN_20068550(param_4,in_ECX + 0x44);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x58),in_ECX + 0x98);
  }
  FUN_20068360(param_2,param_3,param_4,param_5,pfVar3);
  return;
}

