// rea decompile_all
// name: FUN_2003cd30
// address: 0x2003cd30
// body: available
// range: 0x2003cd30-0x2003ce03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003cd30(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  
  FUN_20041d00(param_1);
  pcVar8 = (char *)(in_ECX + 0x24);
  puVar6 = (undefined4 *)*param_1;
  pcVar7 = pcVar8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pcVar7 = pcVar7 + 4;
  }
  uVar4 = 0xffffffff;
  *param_1 = *param_1 + 0x40;
  pcVar7 = pcVar8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_2011f2f0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (~uVar5 - 1 < ~uVar4 - 1) {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_2011f2f0;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar3 = __strcmpi((char *)((in_ECX - (~uVar4 - 1)) + ~uVar5 + 0x23),&DAT_2011f2f0);
    if (iVar3 != 0) {
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_2011f2f0;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = 0xffffffff;
      pcVar8 = (char *)(in_ECX + 0x24);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)((in_ECX - (~uVar4 - 1)) + ~uVar5 + 0x23) = 0;
    }
  }
  fVar9 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 0x10) = (float)fVar9;
  fVar9 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 0x14) = (float)fVar9;
  fVar9 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 0x18) = (float)fVar9;
  fVar9 = (float10)FUN_20041cc0(param_1);
  *(float *)(in_ECX + 0x1c) = (float)fVar9;
  uVar2 = FUN_20041d00(param_1);
  *(undefined4 *)(in_ECX + 0x20) = uVar2;
  return;
}

