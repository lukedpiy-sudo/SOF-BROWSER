// rea decompile_all
// name: FUN_2000d6a0
// address: 0x2000d6a0
// body: available
// range: 0x2000d6a0-0x2000d8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000d6a0(float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 extraout_ST0;
  
  DAT_201c1f10 = param_1 * 0.001;
  DAT_201e8fc4 = __ftol();
  iVar2 = DAT_202250a8;
  DAT_201c1f0c = DAT_20390d38;
  if (((*(float *)(DAT_202250a8 + 0x18) == 0.0) && (DAT_201c1f00 == 8)) &&
     (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    DAT_201e8fc8 = (float)((float10)DAT_201e8fc8 + extraout_ST0);
    DAT_201c1f1c = __ftol();
  }
  fVar1 = 1.0 / DAT_201c1f10;
  if (fVar1 < *(float *)(DAT_2015ee54 + 0x18)) {
    fVar1 = *(float *)(DAT_2015ee54 + 0x18);
  }
  _DAT_201e8fd4 = DAT_201c1f14 * 0.9 + fVar1 * 0.1;
  if (_DAT_201e8fd4 < *(float *)(DAT_2015ee54 + 0x18)) {
    _DAT_201e8fd4 = *(float *)(DAT_2015ee54 + 0x18);
  }
  fVar1 = 1.0 / *(float *)(DAT_2015ee54 + 0x18);
  if (fVar1 < DAT_201c1f10) {
    DAT_201c1f10 = fVar1;
  }
  _DAT_201c1f20 = _DAT_201e8fd4 / *(float *)(DAT_2022506c + 0x18);
  if (1.0 < _DAT_201c1f20) {
    _DAT_201c1f20 = 1.0;
  }
  DAT_201c1f14 = _DAT_201e8fd4;
  if ((*(float *)(DAT_2015ee58 + 0x18) != 0.0) && (*(float *)(iVar2 + 0x18) == 0.0)) {
    DAT_202250b0 = DAT_202250b0 + 1;
    _DAT_202250b4 = _DAT_202250b4 + 1.0 / DAT_201c1f10;
    if (*(int *)(DAT_2015ee58 + 0x18) == 0x40000000) {
      Com_Printf();
    }
    else if (DAT_202250b0 == 10) {
      Com_Printf();
      DAT_202250b0 = 0;
      _DAT_202250b4 = 0.0;
    }
  }
  if (*(float *)(DAT_2015ee64 + 0x18) != 0.0) {
    uVar3 = FUN_20055450(s_Location____3f___3f___3f__Dir____2011e68c,(double)_DAT_2015f0fc,
                         (double)_DAT_2015f100,(double)_DAT_2015f104,(double)_DAT_2015f10c);
    Com_Printf(uVar3);
  }
  return;
}

