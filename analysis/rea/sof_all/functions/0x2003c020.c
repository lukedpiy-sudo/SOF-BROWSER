// rea decompile_all
// name: FUN_2003c020
// address: 0x2003c020
// body: available
// range: 0x2003c020-0x2003c0c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2003c020(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_202b34ac;
  if (((DAT_202b34ac != 0) && (*(float *)(DAT_202ea4b8 + 0x18) == 0.0)) &&
     (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    puVar1 = (undefined4 *)(DAT_202b34ac + 100);
    DAT_202b34ac = *(undefined4 *)(DAT_202b34ac + 100);
    *puVar1 = DAT_202b34a8;
    DAT_202b34a8 = iVar3;
    *(undefined2 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x70) = 0;
    *(undefined1 *)(iVar3 + 0x3a) = 0xff;
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x88) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(undefined4 *)(iVar3 + 0x8c) = DAT_2027c478;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    uVar2 = DAT_2027c478;
    *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x68) = uVar2;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
    return iVar3;
  }
  return 0;
}

