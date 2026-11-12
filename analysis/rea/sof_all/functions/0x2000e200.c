// rea decompile_all
// name: FUN_2000e200
// address: 0x2000e200
// body: available
// range: 0x2000e200-0x2000e35c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000e200(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *_Source;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  Com_DPrintf(s_Serverdata_packet_received__2011ee80);
  FUN_2000b9b0();
  DAT_201c1f00 = 7;
  _DAT_201ca3f8 = FUN_2001e310(&DAT_20367ebc);
  if (_DAT_201ca3f8 != 0x21) {
    Com_Error(1,s_Server_returned_version__i__not___2011ee5c,_DAT_201ca3f8,0x21);
  }
  DAT_201e9480 = FUN_2001e310(&DAT_20367ebc);
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  DAT_201e947c = iVar2 != 0;
  DAT_201e94c8 = FUN_2001e260(&DAT_20367ebc);
  uVar3 = FUN_20055450(&DAT_2011ee58,DAT_201e94c8,0x14);
  FUN_200221b0(s_deathmatch_2011d664,uVar3);
  _Source = (byte *)FUN_2001e3b0(&DAT_20367ebc);
  _strncpy(&DAT_201e9484,(char *)_Source,0x3f);
  if (*_Source == 0) {
    if ((*(int *)(DAT_2026ab10 + 4) == 0) && (cRam00000000 == '\0')) goto LAB_2000e31f;
  }
  else {
    pbVar4 = *(byte **)(DAT_2026ab10 + 4);
    if ((pbVar4 != (byte *)0x0) && (pbVar5 = _Source, *pbVar4 != 0)) {
      do {
        bVar1 = *pbVar4;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_2000e2f3:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_2000e2f8;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_2000e2f3;
        pbVar4 = pbVar4 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_2000e2f8:
      if (iVar2 == 0) goto LAB_2000e31f;
    }
  }
  Cvar_Set(&DAT_2011ee50,_Source);
LAB_2000e31f:
  DAT_201e94c4 = FUN_2001e290(&DAT_20367ebc);
  uVar3 = FUN_2001e3b0(&DAT_20367ebc);
  if (DAT_201e94c4 != -1) {
    Com_Printf(&DAT_2011d990,uVar3);
    DAT_201e7594 = 0;
  }
  return;
}

