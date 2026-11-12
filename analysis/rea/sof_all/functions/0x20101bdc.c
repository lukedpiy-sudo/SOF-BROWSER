// rea decompile_all
// name: FUN_20101bdc
// address: 0x20101bdc
// body: available
// range: 0x20101bdc-0x20101c8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_20101bdc(int param_1,int param_2)

{
  size_t _Size;
  void *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 * param_2;
  uVar4 = uVar3;
  if (uVar3 < 0xffffffe1) {
    if (uVar3 == 0) {
      uVar4 = 1;
    }
    uVar4 = uVar4 + 0xf & 0xfffffff0;
  }
  do {
    if (uVar4 < 0xffffffe1) {
      if (DAT_20408b68 == 3) {
        if (uVar3 <= DAT_20408b84) {
          _Dst = (void *)FUN_200fd407(uVar3);
          _Size = uVar3;
joined_r0x20101c45:
          if (_Dst != (void *)0x0) {
            _memset(_Dst,0,_Size);
            return _Dst;
          }
        }
      }
      else if ((DAT_20408b68 == 2) && (uVar4 <= DAT_2015d28c)) {
        _Dst = (void *)FUN_200fdeaa(uVar4 >> 4);
        _Size = uVar4;
        goto joined_r0x20101c45;
      }
      pvVar1 = HeapAlloc(DAT_20408b64,8,uVar4);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_2040841c == 0) {
      return (void *)0x0;
    }
    iVar2 = FUN_200fe27f(uVar4);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  } while( true );
}

