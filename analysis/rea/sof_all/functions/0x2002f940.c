// rea decompile_all
// name: FUN_2002f940
// address: 0x2002f940
// body: available
// range: 0x2002f940-0x2002fa7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2002f940(void)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar5 = __ftol();
  iVar7 = 0;
  puVar6 = &DAT_2026b42c;
  _DAT_2027c440 = iVar5;
  do {
    if (iVar7 == 0xd) {
      FUN_200fb019(&DAT_201e960c,s__f__f__f_2011f7f4,&DAT_2027c420,&DAT_2027c424,&DAT_2027c428);
    }
    else {
      iVar2 = puVar6[-3];
      if (iVar2 == 0) {
        *puVar6 = 0x3f800000;
        puVar6[-1] = 0x3f800000;
        puVar6[-2] = 0x3f800000;
      }
      else {
        if (iVar2 == 1) {
          uVar1 = puVar6[1];
          *puVar6 = uVar1;
        }
        else {
          uVar1 = puVar6[iVar5 % iVar2 + 1];
          *puVar6 = uVar1;
        }
        puVar6[-1] = uVar1;
        puVar6[-2] = uVar1;
      }
    }
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x44;
  } while (iVar7 < 0x100);
  if (DAT_201e8fc8 < _DAT_2027c438) {
    fVar3 = (_DAT_2027c438 - DAT_201e8fc8) / (_DAT_2027c438 - _DAT_2027c43c);
    fVar4 = 1.0 - fVar3;
    _DAT_2026c1f4 = _DAT_2027c42c * fVar3 + DAT_2027c420 * fVar4;
    _DAT_2026c1f8 = _DAT_2027c430 * fVar3 + DAT_2027c424 * fVar4;
    _DAT_2026c1fc = _DAT_2027c434 * fVar3 + DAT_2027c428 * fVar4;
    return;
  }
  _DAT_2026c1f4 = DAT_2027c420;
  _DAT_2026c1f8 = DAT_2027c424;
  _DAT_2026c1fc = DAT_2027c428;
  return;
}

