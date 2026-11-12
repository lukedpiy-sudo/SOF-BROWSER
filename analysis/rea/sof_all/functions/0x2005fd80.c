// rea decompile_all
// name: FUN_2005fd80
// address: 0x2005fd80
// body: available
// range: 0x2005fd80-0x2005febe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005fd80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FUN_2001e730(&DAT_20367ebc);
  FUN_2001cb00(&DAT_20367ebc,0xb);
  FUN_2001cb00(&DAT_20367ebc,2);
  FUN_2001cd00(&DAT_20367ebc,param_1);
  if (param_2 == 0) {
    FUN_2001cb00(&DAT_20367ebc,8);
    FUN_2001cb70(&DAT_20367ebc,0x410);
  }
  else {
    FUN_2001cb00(&DAT_20367ebc,9);
  }
  piVar3 = DAT_20396eec;
  iVar2 = 0;
  iVar1 = __ftol();
  if (0 < iVar1) {
    do {
      iVar1 = __ftol();
      piVar3[0x149a] = DAT_20396de4 + iVar1 * -1000;
      if (1 < *piVar3) {
        FUN_2004d400(piVar3 + 0x149b,DAT_20367ec8,DAT_20367ec0);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x34ab;
      iVar1 = __ftol();
    } while (iVar2 < iVar1);
  }
  piVar3 = DAT_20396eec;
  iVar2 = 0;
  iVar1 = __ftol();
  if (0 < iVar1) {
    do {
      if (1 < *piVar3) {
        FUN_2004d400(piVar3 + 0x149b,DAT_20367ec8,DAT_20367ec0);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x34ab;
      iVar1 = __ftol();
    } while (iVar2 < iVar1);
  }
  return;
}

