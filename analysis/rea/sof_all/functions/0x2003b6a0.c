// rea decompile_all
// name: FUN_2003b6a0
// address: 0x2003b6a0
// body: available
// range: 0x2003b6a0-0x2003b7e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003b6a0(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  
  if ((*(float *)(DAT_202ea4b8 + 0x18) == 0.0) && (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    iVar3 = __ftol();
    if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    if (0 < iVar3) {
      pfVar5 = (float *)&DAT_202ead34;
      do {
        if ((pfVar5[9] == 0.0) || (*(int *)((int)pfVar5[9] + 0x15c) == DAT_201e7e64)) {
          if ((*pfVar5 != 0.0) && (pcVar1 = (code *)pfVar5[1], pcVar1 != (code *)0x0)) {
            uVar4 = __ftol();
            (*pcVar1)(pfVar5 + -0x1b,uVar4);
          }
        }
        else {
          *pfVar5 = 0.0;
        }
        pfVar5 = pfVar5 + 0x37;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = __ftol();
    if (0x400 < iVar3) {
      iVar3 = 0x400;
    }
    iVar2 = DAT_202b34a8;
    if (0 < iVar3) {
      puVar6 = &DAT_2027c500;
      do {
        if (((float)puVar6[-1] != 0.0) && (pcVar1 = (code *)*puVar6, pcVar1 != (code *)0x0)) {
          uVar4 = __ftol();
          (*pcVar1)(puVar6 + -0x1c,uVar4);
        }
        puVar6 = puVar6 + 0x37;
        iVar3 = iVar3 + -1;
        iVar2 = DAT_202b34a8;
      } while (iVar3 != 0);
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 100)) {
      pcVar1 = *(code **)(iVar2 + 0x70);
      if (pcVar1 != (code *)0x0) {
        uVar4 = __ftol();
        (*pcVar1)(iVar2,uVar4);
      }
      if (*(int *)(iVar2 + 0x84) != 0) {
        FUN_2003b520(iVar2);
      }
    }
  }
  return;
}

