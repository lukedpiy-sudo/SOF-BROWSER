// rea decompile_all
// name: FUN_5005c5d0
// address: 0x5005c5d0
// body: available
// range: 0x5005c5d0-0x5005c6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5005c5d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_50159460 = 0;
  DAT_50159468 = 0;
  DAT_50159464 = 0;
  FUN_5005e4c0(0x50159a60);
  iVar1 = DAT_5015d8c8 * 0x464;
  iVar3 = iVar1 + DAT_5015cca0;
  iVar4 = DAT_5015d8c8;
  if (DAT_5015d8c8 <= DAT_5015d8cc + -10) {
    do {
      if ((((*(int *)(iVar3 + 0x78) != 0) && (*(int *)(iVar3 + 0x1b4) != 0)) &&
          ((*(float *)(iVar3 + 4) != 0.0 ||
           ((*(float *)(iVar3 + 8) != 0.0 || (*(float *)(iVar3 + 0xc) != 0.0)))))) &&
         (((iVar2 = FUN_5006a470(&DAT_5015c7b8,iVar3), iVar2 != 0 && (*(int *)(iVar2 + 0x44) == 1))
          || ((iVar2 = FUN_5006a470(&DAT_5015c7b8,iVar3), iVar2 != 0 &&
              ((*(int *)(iVar2 + 0x54) == 0x24 || (*(int *)(iVar2 + 0x54) == 0x27)))))))) {
        FUN_5005dcf0(&DAT_50159a60,iVar3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x464;
      iVar3 = iVar1 + DAT_5015cca0;
    } while (iVar4 <= DAT_5015d8cc + -10);
  }
  return;
}

