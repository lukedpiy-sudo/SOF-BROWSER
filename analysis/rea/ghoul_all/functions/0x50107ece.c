// rea decompile_all
// name: FUN_50107ece
// address: 0x50107ece
// body: available
// range: 0x50107ece-0x50107f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_50107ece(undefined *param_1,byte *param_2,int *param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *_Str;
  float10 fVar3;
  byte *this;
  undefined *puVar4;
  
  _Str = param_2;
  while( true ) {
    if (DAT_501565a8 < 2) {
      uVar1 = (byte)PTR_DAT_5015639c[(uint)*_Str * 2] & 8;
      param_1 = PTR_DAT_5015639c;
    }
    else {
      puVar4 = (undefined *)0x8;
      uVar1 = FUN_5010c4e5(param_1,(uint)*_Str,8);
      param_1 = puVar4;
    }
    if (uVar1 == 0) break;
    _Str = _Str + 1;
  }
  this = _Str;
  _strlen((char *)_Str);
  puVar2 = (uint *)FUN_5010c454(this,_Str);
  if (param_3 != (int *)0x0) {
    *param_3 = (int)(_Str + puVar2[1]);
  }
  uVar1 = *puVar2;
  if ((uVar1 & 0x240) == 0) {
    if ((uVar1 & 0x81) == 0) {
      if ((uVar1 & 0x100) == 0) {
        return (float10)*(double *)(puVar2 + 4);
      }
      fVar3 = (float10)0;
    }
    else {
      fVar3 = (float10)_DAT_50156390;
      if (*_Str == 0x2d) {
        fVar3 = -fVar3;
      }
    }
    _DAT_5018c304 = 0x22;
  }
  else {
    fVar3 = (float10)0;
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_2;
    }
  }
  return fVar3;
}

