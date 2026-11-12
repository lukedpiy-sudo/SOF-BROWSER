// rea decompile_all
// name: FUN_2008c2d0
// address: 0x2008c2d0
// body: available
// range: 0x2008c2d0-0x2008c372 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2008c2d0(char *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  int in_ECX;
  char *_Buf;
  uint uVar2;
  char *_MaxCount;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((param_3 != 0) || (*(uint *)(in_ECX + 8) < param_2)) {
    if ((param_2 < *(uint *)(in_ECX + 8)) &&
       (uVar2 = *(uint *)(in_ECX + 8) - param_2, param_3 <= uVar2)) {
      _Buf = (char *)(*(int *)(in_ECX + 4) + param_2);
      _MaxCount = (char *)(uVar2 + (1 - param_3));
      pcVar1 = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
      if (pcVar1 != (char *)0x0) {
        do {
          bVar5 = true;
          uVar2 = param_3;
          pcVar3 = pcVar1;
          pcVar4 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar5 = *pcVar3 == *pcVar4;
            pcVar3 = pcVar3 + 1;
            pcVar4 = pcVar4 + 1;
          } while (bVar5);
          if (bVar5) {
            return (int)pcVar1 - *(int *)(in_ECX + 4);
          }
          _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar1));
          _Buf = pcVar1 + 1;
          pcVar1 = _memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
          if (pcVar1 == (char *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}

