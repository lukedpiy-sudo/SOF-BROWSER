// rea decompile_all
// name: FUN_50110f5d
// address: 0x50110f5d
// body: available
// range: 0x50110f5d-0x5011100d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_50110f5d(int param_1,int param_2)

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
      if (DAT_5018c964 == 3) {
        if (puVar3 <= DAT_5018c95c) {
          piVar1 = FUN_5010d83a(puVar3);
          _Size = puVar3;
joined_r0x50110fc6:
          if (piVar1 != (int *)0x0) {
            _memset(piVar1,0,(size_t)_Size);
            return piVar1;
          }
        }
      }
      else if ((DAT_5018c964 == 2) && (puVar4 <= DAT_5015886c)) {
        piVar1 = FUN_5010e2dd((uint)puVar4 >> 4);
        _Size = puVar4;
        goto joined_r0x50110fc6;
      }
      piVar1 = HeapAlloc(DAT_5018c960,8,(SIZE_T)puVar4);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_5018c594 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_5010f668(puVar4);
    if (iVar2 == 0) {
      return (int *)0x0;
    }
  } while( true );
}

