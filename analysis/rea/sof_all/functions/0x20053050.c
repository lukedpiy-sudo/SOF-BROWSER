// rea decompile_all
// name: FUN_20053050
// address: 0x20053050
// body: available
// range: 0x20053050-0x2005319d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20053050(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_18 [6];
  
  sVar1 = *(short *)(DAT_20390290 + 0x28);
  sVar2 = *(short *)(DAT_20390290 + 0x26);
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    *(float *)((int)local_18 + iVar4) =
         (float)(int)sVar2 * *(float *)((int)&DAT_20390238 + iVar4) +
         (float)(int)sVar1 * *(float *)((int)&DAT_20390244 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 < 0xc);
  if (((sVar2 == 0) && (sVar1 == 0)) && (*(short *)(DAT_20390290 + 0x2a) == 0)) {
    local_18[2] = local_18[2] - 60.0;
  }
  else {
    local_18[2] = (float)(int)*(short *)(DAT_20390290 + 0x2a) + local_18[2];
  }
  FUN_20052db0(local_18);
  local_18[3] = local_18[0];
  local_18[4] = local_18[1];
  local_18[5] = local_18[2];
  fVar5 = (float10)VectorNormalize(local_18 + 3);
  if ((float10)_DAT_201375f4 < fVar5) {
    fVar5 = (float10)_DAT_201375f4;
  }
  fVar6 = fVar5 * (float10)0.5 -
          ((float10)DAT_2039022c * (float10)local_18[3] +
          (float10)DAT_20390230 * (float10)local_18[4] +
          (float10)DAT_20390234 * (float10)local_18[5]);
  if (fVar6 < (float10)0.0 == (fVar6 == (float10)0.0)) {
    fVar5 = (float10)_DAT_20137604 * (float10)_DAT_2039028c * (float10)DAT_2039025c *
            fVar5 * (float10)0.5;
    if ((float10)(float)fVar6 < fVar5) {
      fVar5 = (float10)(float)fVar6;
    }
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(float *)((int)&DAT_2039022c + iVar4) =
           (float)(fVar5 * (float10)*(float *)((int)local_18 + iVar4 + 0xc) +
                  (float10)*(float *)((int)&DAT_2039022c + iVar4));
      iVar4 = iVar3;
    } while (iVar3 < 0xc);
  }
  FUN_20052a10(1);
  return;
}

