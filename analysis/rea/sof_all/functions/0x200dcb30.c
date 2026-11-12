// rea decompile_all
// name: FUN_200dcb30
// address: 0x200dcb30
// body: available
// range: 0x200dcb30-0x200dccb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200dcb30(undefined4 param_1)

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
      iVar3 = __ftol();
      in_ECX[8] = iVar3;
      iVar3 = __ftol();
      in_ECX[10] = iVar3;
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
      in_ECX[0x29] = *piVar5;
    }
    else {
      pcVar6 = &DAT_20158eb4;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar6);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        iVar3 = FUN_200d9b40(param_1);
        in_ECX[0x32] = iVar3;
      }
      else {
        pcVar6 = s_spacing_20158f20;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar6);
        if (iVar3 == 0) {
          FUN_200eafe0(1);
          uVar4 = FUN_200eb440(0);
          iVar3 = FUN_200f9e13(uVar4);
          in_ECX[0x28] = iVar3;
        }
        else {
          pcVar6 = s_saving_20158f18;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar6);
          if (iVar3 == 0) {
            *(undefined1 *)(in_ECX + 0x27) = 1;
            cVar1 = FUN_200c72b0();
            if (cVar1 == '\0') {
              *(undefined1 *)(in_ECX[1] + 0x8a) = 0;
            }
          }
          else {
            cVar1 = FUN_200cf890(param_1);
            if (cVar1 == '\0') {
              FUN_200eb490(param_1,s_Unrecognised_loadbox_keyword_20158ef8);
              return 0;
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

