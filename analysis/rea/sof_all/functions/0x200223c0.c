// rea decompile_all
// name: FUN_200223c0
// address: 0x200223c0
// body: available
// range: 0x200223c0-0x200224a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2002249c to 0x20050750 FUN_20050750 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200223c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  float10 fVar7;
  undefined1 local_80 [128];
  
  puVar1 = DAT_2024b1d8;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      FUN_20050750();
      return;
    }
    if (puVar1[2] != 0) {
      Z_Free(puVar1[1]);
      uVar3 = puVar1[2];
      puVar1[1] = uVar3;
      puVar1[2] = 0;
      if ((-1 < (char)puVar1[3]) || (DAT_2024b1dc != '\0')) {
        if ((puVar1[3] & 0x20) == 0) {
          fVar7 = (float10)FUN_200fafcc(uVar3);
          puVar1[6] = (float)fVar7;
        }
        else {
          iVar2 = FUN_200f9e13();
          puVar1[6] = (float)iVar2;
          Z_Free(puVar1[1]);
          uVar3 = __ftol();
          Com_sprintf(local_80,0x80,&DAT_2011d0b4,uVar3);
          uVar3 = FUN_2001ea20(local_80);
          puVar1[1] = uVar3;
        }
      }
      iVar2 = 5;
      bVar6 = true;
      pcVar4 = (char *)*puVar1;
      pcVar5 = &DAT_2011ee50;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        FUN_200257e0(puVar1[1]);
        FUN_20025770();
      }
    }
    puVar1 = (undefined4 *)puVar1[7];
  } while( true );
}

