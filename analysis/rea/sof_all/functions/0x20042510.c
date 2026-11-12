// rea decompile_all
// name: FUN_20042510
// address: 0x20042510
// body: available
// range: 0x20042510-0x2004262a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_20042510(void)

{
  int iVar1;
  int *in_ECX;
  float *pfVar2;
  float10 fVar3;
  
  if ((float)in_ECX[0xc] <= DAT_2027c478) {
    if (((float)in_ECX[0xc] < (float)in_ECX[0xd] != ((float)in_ECX[0xc] == (float)in_ECX[0xd])) &&
       (iVar1 = in_ECX[10], *(int *)(iVar1 + 0x84) == 0)) {
      if ((*(int *)(iVar1 + 0x80) == 0) || (*(int *)(iVar1 + 0x78) != 0)) {
        FUN_20036160(iVar1 + 4,
                     1.0 - (DAT_2027c478 - (float)in_ECX[0xb]) /
                           ((float)in_ECX[0xd] - (float)in_ECX[0xb]),in_ECX);
        iVar1 = in_ECX[9];
        pfVar2 = (float *)(iVar1 + 0x10);
        if (*pfVar2 == *(float *)(iVar1 + 0x14)) {
          fVar3 = (float10)*pfVar2;
        }
        else {
          fVar3 = (float10)flrand(*pfVar2,*(undefined4 *)(iVar1 + 0x14));
        }
        if (fVar3 < (float10)0.01) {
          in_ECX[0xd] = (int)((float)in_ECX[0xc] - 1.0);
        }
        iVar1 = in_ECX[9];
        pfVar2 = (float *)(iVar1 + 0x10);
        if (*pfVar2 == *(float *)(iVar1 + 0x14)) {
          fVar3 = (float10)*pfVar2;
        }
        else {
          fVar3 = (float10)flrand(*pfVar2,*(undefined4 *)(iVar1 + 0x14));
        }
        in_ECX[0xc] = (int)(float)((float10)DAT_2027c478 + fVar3);
      }
    }
    if ((float)in_ECX[0xd] < DAT_2027c478) {
      if (*in_ECX == 0) {
        return '\0';
      }
      return ((*(byte *)(in_ECX[9] + 0x28) & 1) != 0) + '\x01';
    }
  }
  return '\x02';
}

