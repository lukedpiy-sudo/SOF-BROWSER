// rea decompile_all
// name: FUN_20107ed2
// address: 0x20107ed2
// body: available
// range: 0x20107ed2-0x20107f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_20107ed2(char *param_1)

{
  char cVar1;
  size_t _Size;
  int iVar2;
  char *pcVar3;
  void *local_8;
  
  local_8 = (void *)0x0;
  if (DAT_20408470 == 0) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
      cVar1 = *pcVar3;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar3 = cVar1 + -0x20;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
  }
  else {
    _Size = FUN_201018d7(DAT_20408470,0x200,param_1,0xffffffff,0,0,0,1);
    if (((_Size != 0) && (local_8 = _malloc(_Size), local_8 != (void *)0x0)) &&
       (iVar2 = FUN_201018d7(DAT_20408470,0x200,param_1,0xffffffff,local_8,_Size,0,1), iVar2 != 0))
    {
      FUN_20101cf0(param_1,local_8);
    }
    FUN_200f9d32(local_8);
  }
  return param_1;
}

