// rea decompile_all
// name: FUN_20059dd0
// address: 0x20059dd0
// body: available
// range: 0x20059dd0-0x20059f11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20059dd0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  
  iVar2 = Cmd_Argc();
  if (1 < iVar2) {
    pbVar3 = (byte *)Cmd_Argv(1);
    piVar9 = DAT_20396eec;
    if (('/' < (char)*pbVar3) && ((char)*pbVar3 < ':')) {
      uVar4 = Cmd_Argv(1);
      iVar2 = FUN_200f9e9e(uVar4);
      if ((-1 < iVar2) && (iVar5 = __ftol(), iVar2 < iVar5)) {
        DAT_203fec94 = DAT_20396eec + iVar2 * 0x34ab;
        DAT_20402cd8 = DAT_203fec94[0xa6];
        if (*DAT_203fec94 != 0) {
          return 1;
        }
        Com_Printf(s_Client__i_is_not_active_2011d5a0,iVar2);
        return 0;
      }
      Com_Printf(s_Bad_client_slot___i_2011d588,iVar2);
      return 0;
    }
    iVar5 = 0;
    iVar2 = __ftol();
    if (0 < iVar2) {
      do {
        if (*piVar9 != 0) {
          pbVar6 = (byte *)(piVar9 + 0xa7);
          pbVar8 = pbVar3;
          do {
            bVar1 = *pbVar6;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_20059ec8:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_20059ecd;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_20059ec8;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_20059ecd:
          if (iVar7 == 0) {
            DAT_203fec94 = piVar9;
            DAT_20402cd8 = piVar9[0xa6];
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        piVar9 = piVar9 + 0x34ab;
      } while (iVar5 < iVar2);
    }
    Com_Printf(s_Userid__s_is_not_on_the_server_2011d568,pbVar3);
  }
  return 0;
}

