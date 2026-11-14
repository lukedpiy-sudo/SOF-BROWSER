// rea decompile_all
// name: FUN_3002ac06
// address: 0x3002ac06
// body: available
// range: 0x3002ac06-0x3002acb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_3002ac06(int param_1,int param_2)

{
  uint *_Size;
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)(param_1 * param_2);
  puVar4 = puVar3;
  if (puVar3 < (uint *)0xffffffe1) {
    if (puVar3 == (uint *)0x0) {
      puVar4 = (uint *)0x1;
    }
    puVar4 = (uint *)((int)puVar4 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar4 < (uint *)0xffffffe1) {
      if (DAT_300abb34 == 3) {
        if (puVar3 <= DAT_300abb2c) {
          piVar1 = FUN_30021f86(puVar3);
          _Size = puVar3;
joined_r0x3002ac6f:
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            return piVar1;
          }
        }
      }
      else if ((DAT_300abb34 == 2) && (puVar4 <= DAT_30033dfc)) {
        piVar1 = FUN_30022a29((uint)puVar4 >> 4);
        _Size = puVar4;
        goto joined_r0x3002ac6f;
      }
      piVar1 = HeapAlloc(DAT_300abb30,8,(SIZE_T)puVar4);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_300aa4c4 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_30021955(puVar4);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  } while( true );
}

