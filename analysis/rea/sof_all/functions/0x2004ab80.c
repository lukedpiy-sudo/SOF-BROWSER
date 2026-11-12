// rea decompile_all
// name: FUN_2004ab80
// address: 0x2004ab80
// body: available
// range: 0x2004ab80-0x2004ad1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004ab80(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar3 = 0;
  do {
    (&DAT_20364600)[iVar3] = 0;
    (&DAT_203645e8)[iVar3] = 0;
    switch(iVar3) {
    case 0:
      puVar1 = &DAT_203646e8;
      break;
    case 1:
      puVar1 = &DAT_203646ec;
      break;
    case 2:
      puVar1 = &DAT_203646f0;
      break;
    case 3:
      puVar1 = &DAT_203646f4;
      break;
    case 4:
      puVar1 = &DAT_203646f8;
      break;
    default:
      puVar1 = &DAT_203646fc;
    }
    (&DAT_20364620)[iVar3] = puVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  if (*(float *)(DAT_203646c0 + 0x18) == 0.0) {
    DAT_20364600 = 4;
    DAT_20364604 = 1;
  }
  else {
    iVar3 = 9;
    bVar6 = true;
    pcVar4 = *(char **)(DAT_20364654 + 4);
    pcVar5 = s_joystick_20135208;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      Com_Printf(s__s_configured_20135338,*(char **)(DAT_20364654 + 4));
    }
    uVar2 = __ftol();
    DAT_20364600 = uVar2 & 0xf;
    DAT_203645e8 = uVar2 & 0x10;
    uVar2 = __ftol();
    DAT_20364604 = uVar2 & 0xf;
    DAT_203645ec = uVar2 & 0x10;
    _DAT_203645f0 = __ftol();
    _DAT_20364608 = _DAT_203645f0 & 0xf;
    _DAT_203645f0 = _DAT_203645f0 & 0x10;
    _DAT_203645f4 = __ftol();
    _DAT_2036460c = _DAT_203645f4 & 0xf;
    _DAT_203645f4 = _DAT_203645f4 & 0x10;
    _DAT_203645f8 = __ftol();
    _DAT_20364610 = _DAT_203645f8 & 0xf;
    _DAT_203645f8 = _DAT_203645f8 & 0x10;
    _DAT_203645fc = __ftol();
    _DAT_20364614 = _DAT_203645fc & 0xf;
    _DAT_203645fc = _DAT_203645fc & 0x10;
  }
  DAT_20364750 = 0x4c0;
  iVar3 = 0;
  do {
    if (*(int *)((int)&DAT_20364600 + iVar3) != 0) {
      DAT_20364750 = DAT_20364750 | *(uint *)((int)&DAT_20135060 + iVar3);
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x18);
  return;
}

