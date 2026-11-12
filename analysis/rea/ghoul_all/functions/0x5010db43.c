// rea decompile_all
// name: FUN_5010db43
// address: 0x5010db43
// body: available
// range: 0x5010db43-0x5010dbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_5010db43(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_5018c954 == DAT_5018c944) {
    pvVar2 = HeapReAlloc(DAT_5018c960,0,DAT_5018c958,(DAT_5018c944 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_5018c944 = DAT_5018c944 + 0x10;
    DAT_5018c958 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_5018c958 + DAT_5018c954 * 0x14);
  pvVar2 = HeapAlloc(DAT_5018c960,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_5018c954 = DAT_5018c954 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_5018c960,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}

