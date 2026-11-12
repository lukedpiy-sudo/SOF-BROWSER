// rea decompile_all
// name: FUN_200257e0
// address: 0x200257e0
// body: available
// range: 0x200257e0-0x2002594f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20025916 to 0x20025540 FUN_20025540 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2002594b to 0x2001c6e0 Com_Printf (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200257e0(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  iVar1 = FUN_200fa6a0(param_1,&DAT_2011f220);
  if (iVar1 == 0) {
    iVar1 = FUN_200fa6a0(param_1,&DAT_201312b4);
    if (iVar1 == 0) {
      iVar1 = FUN_200fa6a0(param_1,&DAT_20130c64);
      if (iVar1 == 0) {
        iVar1 = FUN_200fa6a0(param_1,&DAT_201312b0);
        if (iVar1 == 0) {
          if (DAT_2026aa78 != DAT_2026a9f8) {
            do {
              iVar1 = *(int *)(DAT_2026aa78 + 0x80);
              if (iVar1 != 0) {
                FUN_20025480();
                FUN_200f9f75(iVar1);
              }
              iVar1 = *(int *)(DAT_2026aa78 + 0x84);
              Z_Free(DAT_2026aa78);
              DAT_2026aa78 = iVar1;
            } while (iVar1 != DAT_2026a9f8);
          }
          if ((DAT_20249618 != 0) && (*(float *)(DAT_20249618 + 0x18) == 0.0)) {
            FUN_20018180(s_vid_restart_snd_restart_20131294);
          }
          Com_sprintf(&DAT_2026aa80,0x80,s__s__s_2011f104,*(undefined4 *)(DAT_2026ab00 + 4),param_1)
          ;
          iVar1 = 5;
          bVar4 = true;
          pcVar2 = param_1;
          pcVar3 = &DAT_20131250;
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *pcVar2 == *pcVar3;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if ((!bVar4) && (*param_1 != '\0')) {
            FUN_200221b0(s_gamedir_20131258,param_1,0xc);
            FUN_20055450(s__s__s_2011f104,*(undefined4 *)(DAT_2026ab00 + 4),param_1);
            FUN_20025540();
            return;
          }
          FUN_200221b0(s_gamedir_20131258,&DAT_2015ee44,0xc);
          FUN_200221b0(&DAT_2011ee50,&DAT_2015ee44,0x14);
          return;
        }
      }
    }
  }
  Com_Printf();
  return;
}

