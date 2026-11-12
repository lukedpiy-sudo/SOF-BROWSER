// rea decompile_all
// name: FUN_200a0dd0
// address: 0x200a0dd0
// body: available
// range: 0x200a0dd0-0x200a0e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a0dd0(int param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  pfVar2 = in_ECX;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar2 = 0.0;
    pfVar2 = pfVar2 + 1;
  }
  iVar3 = 4;
  pfVar2 = in_ECX;
  do {
    *pfVar2 = 1.0;
    pfVar2 = pfVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = (float)fVar5;
  fVar5 = (float10)fcos((float10)param_2);
  if (param_1 == 0) {
    in_ECX[5] = (float)fVar5;
    in_ECX[6] = -fVar1;
    in_ECX[9] = fVar1;
    in_ECX[10] = (float)fVar5;
  }
  else if (param_1 == 1) {
    *in_ECX = (float)fVar5;
    in_ECX[8] = -fVar1;
    in_ECX[2] = fVar1;
    in_ECX[10] = (float)fVar5;
  }
  else if (param_1 == 2) {
    *in_ECX = (float)fVar5;
    in_ECX[1] = -fVar1;
    in_ECX[4] = fVar1;
    in_ECX[5] = (float)fVar5;
  }
  in_ECX[0x10] = 0.0;
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      fVar1 = in_ECX[iVar4 + iVar3 * 4];
      if (iVar3 == iVar4) {
        fVar1 = 1.0 - fVar1;
      }
      if (0.0001 < ABS(fVar1)) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      in_ECX[0x10] = 1.4013e-45;
      return;
    }
  } while( true );
}

