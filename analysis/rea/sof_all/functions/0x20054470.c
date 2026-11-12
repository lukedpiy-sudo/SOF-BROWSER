// rea decompile_all
// name: FUN_20054470
// address: 0x20054470
// body: available
// range: 0x20054470-0x20054633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20054470(void)

{
  short sVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int local_94;
  float local_88 [6];
  char acStack_70 [56];
  undefined1 local_38 [56];
  
  iVar3 = DAT_20390290[1];
  sVar1 = *(short *)((int)DAT_20390290 + 6);
  iVar4 = DAT_20390290[2];
  local_94 = 1;
  do {
    iVar11 = 1;
    *(short *)(DAT_20390290 + 2) = (short)local_94 + (short)iVar4;
    do {
      iVar10 = 1;
      *(short *)((int)DAT_20390290 + 6) = sVar1 + (short)iVar11;
      do {
        *(short *)(DAT_20390290 + 1) = (short)iVar10 + (short)iVar3;
        if ((0 < *DAT_20390290) && (*DAT_20390290 < 3)) {
LAB_20054593:
          DAT_20390220 = (float)(int)(short)DAT_20390290[1] * 0.125;
          DAT_20390224 = (float)(int)*(short *)((int)DAT_20390290 + 6) * 0.125;
          DAT_20390228 = (float)(int)(short)DAT_20390290[2] * 0.125;
          _DAT_2039027c = (float)(int)(short)DAT_20390290[1];
          _DAT_20390280 = (float)(int)*(short *)((int)DAT_20390290 + 6);
          _DAT_20390284 = (float)(int)(short)DAT_20390290[2];
          return;
        }
        piVar8 = DAT_20390290 + 1;
        iVar9 = 0;
        do {
          iVar5 = *piVar8;
          iVar6 = iVar9 + 4;
          piVar8 = (int *)((int)piVar8 + 2);
          fVar2 = (float)(int)(short)iVar5 * 0.125;
          *(float *)((int)local_88 + iVar9) = fVar2;
          *(float *)((int)local_88 + iVar9 + 0xc) = fVar2;
          iVar9 = iVar6;
        } while (iVar6 < 0xc);
        puVar7 = (undefined4 *)
                 (*(code *)DAT_20390290[0x3c])
                           (local_38,local_88 + 3,DAT_20390290 + 0x33,DAT_20390290 + 0x36,local_88);
        pcVar12 = acStack_70;
        for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined4 *)pcVar12 = *puVar7;
          puVar7 = puVar7 + 1;
          pcVar12 = pcVar12 + 4;
        }
        if (acStack_70[0] == '\0') goto LAB_20054593;
        iVar10 = iVar10 + -1;
      } while (-2 < iVar10);
      iVar11 = iVar11 + -1;
    } while (-2 < iVar11);
    local_94 = local_94 + -1;
    if (local_94 < -1) {
      Com_DPrintf(s_Bad_InitialSnapPosition_20137650);
      return;
    }
  } while( true );
}

