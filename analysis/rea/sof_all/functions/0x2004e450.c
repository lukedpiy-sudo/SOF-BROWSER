// rea decompile_all
// name: FUN_2004e450
// address: 0x2004e450
// body: available
// range: 0x2004e450-0x2004e623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2004e474 to 0x200f9a44 WSOCK32.DLL::Ordinal_111 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2004e491 to 0x200f9a44 WSOCK32.DLL::Ordinal_111 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004e450(void)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_100 [256];
  
  iVar5 = Ordinal_57(local_100,0x100);
  if (iVar5 == -1) {
    Ordinal_111();
    return;
  }
  puVar6 = (undefined4 *)Ordinal_52(&stack0xfffffef8);
  if (puVar6 == (undefined4 *)0x0) {
    Ordinal_111();
    return;
  }
  Com_Printf(s_Hostname___s_20136d84,*puVar6);
  iVar5 = *(int *)puVar6[1];
  if (iVar5 != 0) {
    iVar8 = 0;
    do {
      iVar8 = iVar8 + 4;
      Com_Printf(s_Alias___s_20136d74,iVar5);
      iVar5 = *(int *)(iVar8 + puVar6[1]);
    } while (iVar5 != 0);
  }
  if (*(short *)(puVar6 + 2) == 2) {
    DAT_2039015c = -1;
    DAT_20390158 = 0;
    pcVar3 = *(char **)puVar6[3];
    while ((pcVar3 != (char *)0x0 && (DAT_20390158 < 4))) {
      uVar7 = Ordinal_14(*(undefined4 *)pcVar3);
      iVar8 = DAT_20390158;
      iVar5 = DAT_20390158 * 4;
      pbVar1 = &DAT_20390145 + DAT_20390158 * 4;
      (&DAT_20390144)[iVar5] = *pcVar3;
      *pbVar1 = pcVar3[1];
      (&DAT_20390146)[iVar8 * 4] = pcVar3[2];
      (&DAT_20390147)[iVar8 * 4] = pcVar3[3];
      cVar2 = (&DAT_20390144)[iVar5];
      uVar9 = uVar7;
      if (((cVar2 == -0x54) && ((*pbVar1 & 0xf0) == 0x10)) ||
         ((cVar2 == -0x40 && (*pbVar1 == 0xa8)))) {
        Com_Printf(s_LOCAL_20136d68);
      }
      else {
        Com_Printf(s_REMOTE_20136d5c);
        if (DAT_2039015c == -1) {
          DAT_2039015c = DAT_20390158;
        }
      }
      Com_Printf(s_IP___d___i__i__i__i_20136d44,DAT_20390158 + 1,uVar9 >> 0x18,uVar9 >> 0x10 & 0xff,
                 uVar7 >> 8 & 0xff,uVar7 & 0xff);
      DAT_20390158 = DAT_20390158 + 1;
      pcVar3 = *(char **)(puVar6[3] + DAT_20390158 * 4);
    }
    fVar4 = (float)DAT_20390158;
    if ((fVar4 < *(float *)(DAT_20390120 + 0x18) != (fVar4 == *(float *)(DAT_20390120 + 0x18))) &&
       (*(float *)(DAT_20390120 + 0x18) <= fVar4)) {
      DAT_2039015c = __ftol();
    }
    if (DAT_2039015c == -1) {
      DAT_2039015c = 0;
    }
  }
  return;
}

