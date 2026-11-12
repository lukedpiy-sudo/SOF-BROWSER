// rea decompile_all
// name: FUN_20025540
// address: 0x20025540
// body: available
// range: 0x20025540-0x20025748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20025744 to 0x20055bb0 FUN_20055bb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20025540(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_90 [4];
  byte local_8c;
  undefined1 local_80 [128];
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)&DAT_2026aa80 - (int)param_1] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = Z_Malloc(0x88);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2[iVar3 - (int)param_1] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  *(int *)(iVar3 + 0x84) = DAT_2026aa78;
  DAT_2026aa78 = iVar3;
  do {
    Com_sprintf(local_80,0x80,s__s_pak_i_pak_20131218,param_1,iVar6);
    iVar3 = FUN_2004fec0(local_80);
    if (iVar3 != 0) {
      iVar4 = Z_Malloc(0x88);
      *(int *)(iVar4 + 0x80) = iVar3;
      *(int *)(iVar4 + 0x84) = DAT_2026aa78;
      DAT_2026aa78 = iVar4;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  Com_sprintf(local_80,0x80,s__s___pak_2013120c,param_1);
  pcVar2 = (char *)FUN_20055a40(local_80,0,4,local_90);
  do {
    if (pcVar2 == (char *)0x0) {
      FUN_20055bb0();
      return;
    }
    uVar5 = 0xffffffff;
    pcVar7 = pcVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    if (((((pcVar2[uVar5 - 2] != '.') && (pcVar2[uVar5 - 3] != '.')) && ((local_8c & 0x10) == 0)) &&
        (((((int)(uVar5 - 1) < 8 || (iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 9]), iVar3 != 0x50))
          || ((iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 8]), iVar3 != 0x41 ||
              ((iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 7]), iVar3 != 0x4b ||
               (pcVar2[uVar5 - 6] < '0')))))) ||
         (('9' < pcVar2[uVar5 - 6] ||
          ((((iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 5]), iVar3 != 0x2e ||
             (iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 4]), iVar3 != 0x50)) ||
            (iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 3]), iVar3 != 0x41)) ||
           (iVar3 = FUN_200fb2a2((int)pcVar2[uVar5 - 2]), iVar3 != 0x4b)))))))) &&
       (iVar3 = FUN_2004fec0(pcVar2), iVar3 != 0)) {
      iVar6 = Z_Malloc(0x88);
      *(int *)(iVar6 + 0x80) = iVar3;
      *(int *)(iVar6 + 0x84) = DAT_2026aa78;
      DAT_2026aa78 = iVar6;
    }
    pcVar2 = (char *)FUN_20055980(0,4,local_90);
  } while( true );
}

