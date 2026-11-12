// rea decompile_all
// name: FUN_200dcf40
// address: 0x200dcf40
// body: available
// range: 0x200dcf40-0x200dd0a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200dcf40(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  char *pcVar6;
  
  cVar1 = FUN_200eafe0(1);
  while (cVar1 == '\0') {
    pcVar6 = s_width_2015892c;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar6);
    if (iVar3 == 0) {
      FUN_200eafe0(1);
      uVar4 = FUN_200eb440(0);
      iVar3 = FUN_200f9e13(uVar4);
      in_ECX[0x23] = iVar3;
    }
    else {
      pcVar6 = &DAT_20158f28;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar6);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        uVar4 = FUN_200eb440(0);
        iVar3 = FUN_200f9e13(uVar4);
        in_ECX[0x24] = iVar3;
      }
      else {
        pcVar6 = &DAT_20158964;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar6);
        if (iVar3 == 0) {
          FUN_200eafe0(1);
          uVar4 = FUN_200eb440(0);
          piVar5 = (int *)FUN_200c9de0(uVar4);
          iVar3 = *piVar5;
          in_ECX[0xe] = iVar3;
          in_ECX[0xf] = iVar3;
        }
        else {
          pcVar6 = s_height_20158924;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar6);
          if (iVar3 == 0) {
            FUN_200eafe0(1);
            uVar4 = FUN_200eb440(0);
            iVar3 = FUN_200f9e13(uVar4);
            if (in_ECX[0xc] < iVar3) {
              in_ECX[9] = iVar3;
              iVar3 = __ftol();
              in_ECX[0xb] = iVar3;
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  }
  (**(code **)(*in_ECX + 0x28))();
  return 1;
}

