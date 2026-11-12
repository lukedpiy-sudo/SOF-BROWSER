// rea decompile_all
// name: FUN_20054640
// address: 0x20054640
// body: available
// range: 0x20054640-0x2005474f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20054640(void)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(DAT_20390290 + 0x10) & 0x20) == 0) {
    iVar3 = 0x14;
    iVar4 = 0xbc;
    do {
      iVar2 = iVar3 + 0xc;
      psVar1 = (short *)(iVar3 + DAT_20390290);
      iVar3 = iVar3 + 2;
      *(float *)(iVar4 + DAT_20390290) =
           (float)(int)(short)(*(short *)(iVar2 + DAT_20390290) + *psVar1) * 0.005493164;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x1a);
    if ((*(float *)(DAT_20390290 + 0xbc) <= 89.0) || (180.0 <= *(float *)(DAT_20390290 + 0xbc))) {
      if ((*(float *)(DAT_20390290 + 0xbc) < 271.0) && (180.0 <= *(float *)(DAT_20390290 + 0xbc))) {
        *(undefined4 *)(DAT_20390290 + 0xbc) = 0x43878000;
      }
    }
    else {
      *(undefined4 *)(DAT_20390290 + 0xbc) = 0x42b20000;
    }
  }
  else {
    *(float *)(DAT_20390290 + 0xc0) =
         (float)((int)*(short *)(DAT_20390290 + 0x22) + (int)*(short *)(DAT_20390290 + 0x16)) *
         0.005493164;
    *(undefined4 *)(DAT_20390290 + 0xbc) = 0;
    *(undefined4 *)(DAT_20390290 + 0xc4) = 0;
  }
  FUN_20054b30(DAT_20390290 + 0xbc,&DAT_20390238,&DAT_20390244,&DAT_20390250);
  return;
}

