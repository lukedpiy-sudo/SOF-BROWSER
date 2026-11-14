// rea decompile_all
// name: FUN_3000eaf0
// address: 0x3000eaf0
// body: available
// range: 0x3000eaf0-0x3000ec0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000eaf0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  
  FUN_3001c810(0x3008fe48,(float *)&DAT_3008fd94,(float *)&DAT_3008fd7c,
               -(90.0 - _DAT_3008fcfc * 0.5));
  FUN_3001c810(0x3008fe5c,(float *)&DAT_3008fd94,(float *)&DAT_3008fd7c,90.0 - _DAT_3008fcfc * 0.5);
  FUN_3001c810(0x3008fe70,(float *)&DAT_3008ff30,(float *)&DAT_3008fd7c,90.0 - _DAT_3008fd00 * 0.5);
  FUN_3001c810(0x3008fe84,(float *)&DAT_3008ff30,(float *)&DAT_3008fd7c,
               -(90.0 - _DAT_3008fd00 * 0.5));
  pfVar3 = (float *)&DAT_3008fe4c;
  do {
    fVar1 = DAT_3008fed4;
    *(undefined1 *)(pfVar3 + 3) = 5;
    pfVar5 = pfVar3 + -1;
    uVar4 = 0;
    iVar2 = 0;
    pfVar3[2] = DAT_3008fecc * *pfVar5 + DAT_3008fed0 * *pfVar3 + fVar1 * pfVar3[1];
    do {
      if (*pfVar5 < 0.0) {
        uVar4 = uVar4 | 1 << ((byte)iVar2 & 0x1f);
      }
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar2 < 3);
    *(char *)((int)pfVar3 + 0xd) = (char)uVar4;
    pfVar3 = pfVar3 + 5;
  } while ((int)pfVar3 < 0x3008fe9c);
  return;
}

