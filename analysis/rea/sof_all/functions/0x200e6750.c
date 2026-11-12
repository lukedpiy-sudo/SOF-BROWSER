// rea decompile_all
// name: FUN_200e6750
// address: 0x200e6750
// body: available
// range: 0x200e6750-0x200e689d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e6750(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      return 1;
    }
    pcVar8 = &DAT_201591b8;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar8);
    if (iVar3 == 0) {
      FUN_200eafe0(1);
      pcVar2 = (char *)FUN_200eb440(0);
      uVar6 = 0xffffffff;
      pcVar8 = pcVar2;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_2000a6c0(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = *(char **)(in_ECX + 0x28);
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar8 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar8 = pcVar8 + 1;
        }
        *(uint *)(in_ECX + 0x2c) = uVar6;
        *(undefined1 *)(uVar6 + *(int *)(in_ECX + 0x28)) = 0;
      }
    }
    else {
      pcVar8 = &DAT_20158964;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar8);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        uVar4 = FUN_200eb440(0);
        puVar5 = (undefined4 *)FUN_200c9de0(uVar4);
        *(undefined4 *)(in_ECX + 0x1c) = *puVar5;
      }
      else {
        pcVar8 = s_atint_2015895c;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar8);
        if (iVar3 != 0) {
          FUN_200eb490(param_1,s_Unrecognised_font_keyword_2015919c);
          return 0;
        }
        FUN_200eafe0(1);
        uVar4 = FUN_200eb440(0);
        puVar5 = (undefined4 *)FUN_200c9de0(uVar4);
        *(undefined4 *)(in_ECX + 0x20) = *puVar5;
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

