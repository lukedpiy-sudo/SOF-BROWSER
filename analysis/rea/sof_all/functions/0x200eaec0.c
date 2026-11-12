// rea decompile_all
// name: FUN_200eaec0
// address: 0x200eaec0
// body: available
// range: 0x200eaec0-0x200eaf51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eaec0(char *param_1)

{
  char cVar1;
  char *_Dest;
  char *pcVar2;
  int *in_ECX;
  uint uVar3;
  size_t _Count;
  size_t _Count_00;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  _Count = ~uVar3 - 1;
  _Dest = operator_new(in_ECX[4] + _Count);
  _Count_00 = in_ECX[1] - *in_ECX;
  _strncpy(_Dest,(char *)*in_ECX,_Count_00);
  _strncpy(_Dest + _Count_00,param_1,_Count);
  pcVar2 = (char *)(*in_ECX + _Count_00);
  pcVar4 = _Dest + _Count_00 + _Count;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  in_ECX[1] = (int)(_Dest + (in_ECX[1] - *in_ECX));
  in_ECX[2] = (int)(_Dest + in_ECX[4] + _Count);
  FUN_200f9f75(*in_ECX);
  *in_ECX = (int)_Dest;
  in_ECX[4] = in_ECX[4] + _Count;
  return;
}

