// rea decompile_all
// name: FUN_20053cf0
// address: 0x20053cf0
// body: available
// range: 0x20053cf0-0x20053ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20053cf0(void)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  *(undefined4 *)(DAT_20390290 + 200) = 0x40a00000;
  fVar6 = (float10)VectorLength(&DAT_2039022c);
  if ((float10)1.0 <= fVar6) {
    fVar7 = fVar6;
    if (fVar6 < (float10)_DAT_201375f0) {
      fVar7 = (float10)_DAT_201375f0;
    }
    fVar7 = fVar6 - (float10)DAT_2039025c * fVar7 * (float10)_DAT_20137608 * (float10)1.5;
    if (fVar7 < (float10)0.0) {
      fVar7 = (float10)0.0;
    }
    fVar7 = fVar7 / fVar6;
    DAT_2039022c = (float)((float10)DAT_2039022c * fVar7);
    DAT_20390230 = (float)((float10)DAT_20390230 * fVar7);
    DAT_20390234 = (float)((float10)DAT_20390234 * fVar7);
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
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(float *)((int)local_c + iVar5) =
         (float)(int)sVar1 * *(float *)((int)&DAT_20390238 + iVar5) +
         (float)(int)sVar2 * *(float *)((int)&DAT_20390244 + iVar5);
    iVar5 = iVar4;
  } while (iVar4 < 0xc);
  local_24[0] = local_c[0];
  local_24[1] = local_c[1];
  local_24[2] = (float)(int)*(short *)(DAT_20390290 + 0x2a) + local_c[2];
  fVar6 = (float10)VectorNormalize(local_24);
  if ((float10)_DAT_201375f4 < fVar6) {
    fVar6 = (float10)_DAT_201375f4;
  }
  fVar7 = fVar6 - ((float10)DAT_2039022c * (float10)local_24[0] +
                  (float10)DAT_20390230 * (float10)local_24[1] +
                  (float10)local_24[2] * (float10)DAT_20390234);
  if (fVar7 < (float10)0.0 != (fVar7 == (float10)0.0)) {
    return;
  }
  fVar6 = (float10)_DAT_201375fc * (float10)DAT_2039025c * fVar6;
  if ((float10)(float)fVar7 < fVar6) {
    fVar6 = (float10)(float)fVar7;
  }
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 4;
    *(float *)((int)&DAT_2039022c + iVar5) =
         (float)(fVar6 * (float10)*(float *)((int)local_24 + iVar5) +
                (float10)*(float *)((int)&DAT_2039022c + iVar5));
    iVar5 = iVar4;
  } while (iVar4 < 0xc);
  local_14 = *(undefined4 *)(DAT_20390290 + 0xd0);
  local_24[3] = *(float *)(DAT_20390290 + 0xcc);
  local_c[0] = *(float *)(DAT_20390290 + 0xd8);
  uVar3 = *(undefined4 *)(DAT_20390290 + 0xf0);
  local_10 = *(undefined4 *)(DAT_20390290 + 0xd4);
  local_c[2] = *(float *)(DAT_20390290 + 0xe0);
  local_c[1] = *(float *)(DAT_20390290 + 0xdc);
  *(undefined4 *)(DAT_20390290 + 0xd0) = 0xc0a00000;
  *(undefined4 *)(DAT_20390290 + 0xcc) = 0xc0a00000;
  *(undefined4 *)(DAT_20390290 + 0xd4) = 0xc0000000;
  *(undefined4 *)(DAT_20390290 + 0xdc) = 0x40a00000;
  *(undefined4 *)(DAT_20390290 + 0xd8) = 0x40a00000;
  *(undefined4 *)(DAT_20390290 + 0xe0) = 0x41000000;
  *(undefined1 **)(DAT_20390290 + 0xf0) = &LAB_20053c80;
  FUN_20052a10(0);
  iVar5 = DAT_20390290;
  *(float *)(DAT_20390290 + 0xcc) = local_24[3];
  *(undefined4 *)(iVar5 + 0xd0) = local_14;
  *(undefined4 *)(iVar5 + 0xd4) = local_10;
  iVar5 = DAT_20390290;
  *(float *)(DAT_20390290 + 0xd8) = local_c[0];
  *(float *)(iVar5 + 0xdc) = local_c[1];
  *(float *)(iVar5 + 0xe0) = local_c[2];
  *(undefined4 *)(DAT_20390290 + 0xf0) = uVar3;
  return;
}

