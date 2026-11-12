// rea decompile_all
// name: FUN_200de120
// address: 0x200de120
// body: available
// range: 0x200de120-0x200de31d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200de120(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      return 1;
    }
    pcVar6 = s_atext_20158bb0;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar6);
    if (iVar3 == 0) {
      FUN_200eafe0(1);
      pcVar2 = (char *)FUN_200eb440(0);
      uVar4 = 0xffffffff;
      pcVar6 = pcVar2;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar4 - 1;
      uVar4 = FUN_2000a830();
      if (uVar4 < uVar5) {
        FUN_201075d0();
      }
      in_ECX[0x31] = 0;
      if ((in_ECX[0x30] == 0) || (*(char *)(in_ECX[0x30] + -1) == '\0')) {
        if (uVar5 != 0) {
          if ((0x1f < (uint)in_ECX[0x32]) || ((uint)in_ECX[0x32] < uVar5)) {
            FUN_2000a5b0(1);
            goto LAB_200de1f3;
          }
          goto LAB_200de1f9;
        }
        FUN_2000a5b0(1);
      }
      else if (uVar5 == 0) {
        FUN_2000a5b0(1);
      }
      else {
LAB_200de1f3:
        FUN_2000a840(uVar5);
LAB_200de1f9:
        pcVar6 = (char *)in_ECX[0x30];
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar6 = pcVar6 + 1;
        }
        in_ECX[0x31] = uVar5;
        *(undefined1 *)(uVar5 + in_ECX[0x30]) = 0;
      }
    }
    else {
      pcVar6 = s_talign_20158eac;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar6);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        pcVar6 = &DAT_20158288;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar6);
        if (iVar3 == 0) {
LAB_200de2c6:
          in_ECX[0x33] = 2;
        }
        else {
          pcVar6 = s_right_20158290;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar6);
          if (iVar3 == 0) {
            in_ECX[0x33] = 3;
          }
          else {
            pcVar6 = s_center_20158298;
            pcVar2 = (char *)FUN_200eb440(0);
            iVar3 = __strcmpi(pcVar2,pcVar6);
            if (iVar3 != 0) {
              FUN_200eb490(param_1,s_Invalid_align_parameter_20158804);
              goto LAB_200de2c6;
            }
            in_ECX[0x33] = 1;
          }
        }
      }
      else {
        cVar1 = FUN_200cf890(param_1);
        if (cVar1 == '\0') {
          FUN_200eb490(param_1,s_Unrecognised_setkey_keyword_20158f60);
          return 0;
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

