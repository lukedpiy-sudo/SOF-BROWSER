// rea decompile_all
// name: Com_Printf
// address: 0x2001c6e0
// body: available
// range: 0x2001c6e0-0x2001c8dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Com_Printf(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
                    /* 0x1c6e0  8  Com_Printf */
  FUN_200fa720();
  FUN_200fb04d();
  if (DAT_20249e68 == 0) {
    FUN_20020ae0();
    if ((DAT_20249f4c != 0) && (*(float *)(DAT_20249f4c + 0x18) != 0.0)) {
      if ((DAT_20249e4c == 0) || (1.0 < *(float *)(DAT_20249f4c + 0x18))) {
        FUN_20025760();
        Com_sprintf();
        DAT_20249e4c = FUN_200faa9a();
      }
      if (DAT_20249e4c != 0) {
        FUN_200204f0();
        FUN_200faa48();
      }
      if (1.0 < *(float *)(DAT_20249f4c + 0x18)) {
        FUN_200fa9ae();
        DAT_20249e4c = 0;
      }
    }
    if (((DAT_2024961c != 0) && (uVar2 = __ftol(), (uVar2 & 2) != 0)) ||
       ((DAT_20249618 != 0 && (*(float *)(DAT_20249618 + 0x18) != 0.0)))) {
      FUN_200204f0();
      FUN_20065bf0();
    }
    return;
  }
  uVar2 = 0xffffffff;
  pcVar5 = DAT_20249e44;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = 0xffffffff;
  pcVar5 = &stack0x00000040;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (DAT_20249620 - 1U < ~uVar2 + (~uVar3 - 2)) {
    (*DAT_20249e50)();
    *DAT_20249e44 = '\0';
  }
  uVar2 = 0xffffffff;
  pcVar5 = &stack0x00000040;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar5 = DAT_20249e44;
  do {
    pcVar6 = pcVar5;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar7 + -uVar2;
  pcVar7 = pcVar6 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}

