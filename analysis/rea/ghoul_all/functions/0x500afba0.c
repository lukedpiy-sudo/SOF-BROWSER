// rea decompile_all
// name: FUN_500afba0
// address: 0x500afba0
// body: available
// range: 0x500afba0-0x500afee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500afba0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = param_1;
  if (param_1[0xc9] == 0) {
    uVar4 = FUN_500c26a0(0,0x1c8,(char *)param_1[0x71],(void *)0x0);
    piVar3[0xc9] = uVar4;
    if (uVar4 == 0) {
      return;
    }
  }
  if ((piVar3[0x6e] & 1U) == 0) {
    if ((piVar3[0x6e] & 2U) == 0) {
      FUN_501089d4((int *)&param_1);
      FUN_50108874((int *)&param_1);
      FUN_500fe2b0();
    }
    else {
      iVar1 = piVar3[0xef];
      if (iVar1 == 0) {
        FUN_500fe2b0();
        piVar3[0xbb] = piVar3[0xbb] + -1;
      }
      else if (iVar1 == 1) {
        FUN_500fe2b0();
        piVar3[0xbb] = piVar3[0xbb] + -1;
      }
      else {
        if (iVar1 == 2) {
          FUN_500fe2b0();
        }
        piVar3[0xbb] = piVar3[0xbb] + -1;
      }
    }
  }
  else {
    iVar1 = piVar3[0xef];
    if (iVar1 == 0) {
      FUN_500fe2b0();
      piVar3[0xbb] = piVar3[0xbb] + 1;
    }
    else if (iVar1 == 1) {
      FUN_500fe2b0();
      piVar3[0xbb] = piVar3[0xbb] + 1;
    }
    else {
      if (iVar1 == 2) {
        FUN_500fe2b0();
      }
      piVar3[0xbb] = piVar3[0xbb] + 1;
    }
  }
  *(int *)(piVar3[0xc9] + 0x1ac) = piVar3[0x6b];
  (**(code **)(piVar3[0xc9] + 0x2c4))(piVar3[0xc9],piVar3,piVar3);
  if ((((piVar3[0x6e] & 1U) != 0) && ((float)piVar3[0xd8] < (float)piVar3[0xbb])) ||
     (((piVar3[0x6e] & 2U) != 0 && ((float)piVar3[0xbb] < (float)piVar3[0xd8])))) {
    if (piVar3[0x77] != 0) {
      iVar1 = piVar3[0x71];
      iVar2 = piVar3[0x6b];
      piVar3[0x71] = piVar3[0x77];
      piVar3[0x6b] = 0;
      FUN_500c2f80(piVar3,piVar3[0xcb]);
      piVar3[0x71] = iVar1;
      piVar3[0x6b] = iVar2;
    }
    uVar4 = piVar3[0x6e];
    if ((uVar4 & 8) == 0) {
      return;
    }
    piVar3[0xcb] = 0;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 2) != 0) {
        piVar3[0xd8] = 0;
        piVar3[0xbb] = piVar3[0xc6];
      }
    }
    else {
      piVar3[0xbb] = 0;
      piVar3[0xd8] = (int)(float)piVar3[0xc6];
    }
    if ((uVar4 & 4) != 0) {
      return;
    }
  }
  piVar3[0xad] = (int)(DAT_5015ccdc + 1.0);
  return;
}

