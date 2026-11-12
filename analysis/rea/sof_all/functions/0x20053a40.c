// rea decompile_all
// name: FUN_20053a40
// address: 0x20053a40
// body: available
// range: 0x20053a40-0x20053c74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20053a40(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_18 [6];
  
  *(undefined4 *)(DAT_20390290 + 200) = 0x420c0000;
  fVar5 = (float10)VectorLength(&DAT_2039022c);
  if ((float10)1.0 <= fVar5) {
    fVar6 = fVar5;
    if (fVar5 < (float10)_DAT_201375f0) {
      fVar6 = (float10)_DAT_201375f0;
    }
    fVar6 = fVar5 - (float10)DAT_2039025c * fVar6 * (float10)_DAT_20137608 * (float10)1.5;
    if (fVar6 < (float10)0.0) {
      fVar6 = (float10)0.0;
    }
    fVar6 = fVar6 / fVar5;
    DAT_2039022c = (float)((float10)DAT_2039022c * fVar6);
    DAT_20390230 = (float)((float10)DAT_20390230 * fVar6);
    DAT_20390234 = (float)((float10)DAT_20390234 * fVar6);
  }
  else {
    DAT_2039022c = 0.0;
    DAT_20390230 = 0.0;
    DAT_20390234 = 0.0;
  }
  sVar1 = *(short *)(DAT_20390290 + 0x26);
  sVar2 = *(short *)(DAT_20390290 + 0x28);
  VectorNormalize(&DAT_20390238);
  VectorNormalize(&DAT_20390244);
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 4;
    *(float *)((int)local_18 + iVar4 + 0xc) =
         (float)(int)sVar1 * *(float *)((int)&DAT_20390238 + iVar4) +
         (float)(int)sVar2 * *(float *)((int)&DAT_20390244 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 < 0xc);
  local_18[0] = local_18[3];
  local_18[1] = local_18[4];
  local_18[2] = (float)(int)*(short *)(DAT_20390290 + 0x2a) + local_18[5];
  fVar5 = (float10)VectorNormalize(local_18);
  if ((float10)_DAT_201375f4 < fVar5) {
    fVar5 = (float10)_DAT_201375f4;
  }
  fVar6 = fVar5 - ((float10)DAT_2039022c * (float10)local_18[0] +
                  (float10)DAT_20390230 * (float10)local_18[1] +
                  (float10)DAT_20390234 * (float10)local_18[2]);
  if (fVar6 < (float10)0.0 == (fVar6 == (float10)0.0)) {
    fVar5 = (float10)_DAT_201375fc * (float10)DAT_2039025c * fVar5;
    if ((float10)(float)fVar6 < fVar5) {
      fVar5 = (float10)(float)fVar6;
    }
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 4;
      *(float *)((int)&DAT_2039022c + iVar4) =
           (float)(fVar5 * (float10)*(float *)((int)local_18 + iVar4) +
                  (float10)*(float *)((int)&DAT_2039022c + iVar4));
      iVar4 = iVar3;
    } while (iVar3 < 0xc);
    DAT_20390220 = DAT_2039022c * DAT_2039025c + DAT_20390220;
    DAT_20390224 = DAT_20390230 * DAT_2039025c + DAT_20390224;
    DAT_20390228 = DAT_20390234 * DAT_2039025c + DAT_20390228;
  }
  return;
}

