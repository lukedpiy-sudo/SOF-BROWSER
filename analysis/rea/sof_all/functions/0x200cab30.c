// rea decompile_all
// name: FUN_200cab30
// address: 0x200cab30
// body: available
// range: 0x200cab30-0x200cac70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cab30(char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *in_ECX;
  int *piVar5;
  
  if ((char)in_ECX[0x2e] == '\0') {
    FUN_200ca550();
  }
  if ((char)in_ECX[0x23] != '\0') {
    cVar1 = FUN_2004b3c0(2);
    if (cVar1 != '\0') {
      iVar2 = FUN_200cbe80();
      in_ECX[0x27] = iVar2 - in_ECX[0x25];
      iVar2 = FUN_200cbe90();
      in_ECX[0x28] = iVar2 - in_ECX[0x26];
    }
    if (*in_ECX != 0) {
      FUN_200cab30(0);
    }
  }
  iVar2 = FUN_200ca7c0();
  in_ECX[9] = iVar2;
  piVar5 = *(int **)in_ECX[7];
  if (piVar5 != (int *)in_ECX[7]) {
    do {
      if (param_1 != '\0') {
        FUN_200c6a30();
      }
      FUN_200c6700();
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)in_ECX[7]);
  }
  if (param_1 != '\0') {
    FUN_200ca8c0();
    if (in_ECX[0x17] != 0) {
      FUN_200ea8a0(in_ECX);
      iVar2 = in_ECX[0x17];
      iVar3 = FUN_20055930();
      if (*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x18) < iVar3) {
        iVar2 = in_ECX[0x17];
        if (iVar2 != 0) {
          FUN_2004fa40();
          FUN_200f9f75(iVar2);
        }
        in_ECX[0x17] = 0;
      }
    }
  }
  if ((0.0 <= (float)in_ECX[0x3e]) &&
     ((float)in_ECX[0x3d] + (float)in_ECX[0x3e] < *(float *)(in_ECX[5] + 0x28))) {
    puVar4 = (undefined1 *)in_ECX[0x40];
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    FUN_20018180(puVar4);
    FUN_20018180(&DAT_2011dd40);
    in_ECX[0x3e] = -0x40800000;
  }
  return;
}

