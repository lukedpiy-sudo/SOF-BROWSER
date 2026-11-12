// rea decompile_all
// name: FUN_20024210
// address: 0x20024210
// body: available
// range: 0x20024210-0x2002428f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HRESULT FUN_20024210(LPVOID *param_1)

{
  int *piVar1;
  HRESULT HVar2;
  int iVar3;
  
  if (param_1 == (LPVOID *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_1 = (LPVOID)0x0;
  HVar2 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar2) {
    FUN_20023d90();
    HVar2 = CoCreateInstance((IID *)&DAT_201117a4,(LPUNKNOWN)0x0,1,(IID *)&DAT_201117f4,param_1);
    if (HVar2 < 0) {
      return HVar2;
    }
    piVar1 = *param_1;
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    iVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,0,0x4a,0);
    if (-1 < iVar3) {
      return 0;
    }
  }
  piVar1 = *param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = (LPVOID)0x0;
  }
  return -0x7fffbffb;
}

