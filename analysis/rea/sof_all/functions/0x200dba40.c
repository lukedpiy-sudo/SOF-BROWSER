// rea decompile_all
// name: FUN_200dba40
// address: 0x200dba40
// body: available
// range: 0x200dba40-0x200dbbc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200dba40(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  char *pcVar6;
  
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      return 1;
    }
    pcVar6 = s_backfill_20158328;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar6);
    if (iVar3 == 0) {
      FUN_200eafe0(1);
      uVar4 = FUN_200eb440(0);
      piVar5 = (int *)FUN_200c9de0(uVar4);
      in_ECX[0x27] = *piVar5;
    }
    else {
      pcVar6 = &DAT_20158eb4;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar6);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        iVar3 = FUN_200d9b40(param_1);
        in_ECX[0x40] = iVar3;
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
LAB_200dbb75:
            in_ECX[0x41] = 2;
          }
          else {
            pcVar6 = s_right_20158290;
            pcVar2 = (char *)FUN_200eb440(0);
            iVar3 = __strcmpi(pcVar2,pcVar6);
            if (iVar3 == 0) {
              in_ECX[0x41] = 3;
            }
            else {
              pcVar6 = s_center_20158298;
              pcVar2 = (char *)FUN_200eb440(0);
              iVar3 = __strcmpi(pcVar2,pcVar6);
              if (iVar3 != 0) {
                FUN_200eb490(param_1,s_Invalid_align_parameter_20158804);
                goto LAB_200dbb75;
              }
              in_ECX[0x41] = 1;
            }
          }
        }
        else {
          cVar1 = FUN_200cf890(param_1);
          if (cVar1 == '\0') {
            FUN_200eb490(param_1,s_Unrecognised_filereq_keyword_20158ebc);
            return 0;
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

