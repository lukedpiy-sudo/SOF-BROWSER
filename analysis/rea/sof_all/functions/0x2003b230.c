// rea decompile_all
// name: FUN_2003b230
// address: 0x2003b230
// body: available
// range: 0x2003b230-0x2003b352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2003b230(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  
  iVar3 = DAT_20321ccc;
  if ((*(float *)(DAT_202ea4b8 + 0x18) == 0.0) && (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    iVar1 = DAT_20321ccc * 0xdc;
    *param_1 = (int)(&DAT_2027c490 + iVar1);
    if ((((&DAT_2027c504)[iVar1] & 8) != 0) && ((int *)(&DAT_2027c54c)[iVar3 * 0x37] != (int *)0x0))
    {
      sVar5 = (**(code **)(*(int *)(&DAT_2027c54c)[iVar3 * 0x37] + 0x9c))();
      if (0 < sVar5) {
        (**(code **)(*(int *)(&DAT_2027c54c)[iVar3 * 0x37] + 0xd4))();
        bVar2 = (&DAT_2027c504)[iVar1];
        (&DAT_2027c54c)[iVar3 * 0x37] = 0;
        (&DAT_2027c504)[iVar1] = bVar2 & 0xf7;
      }
    }
    iVar3 = *param_1;
    *(undefined2 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x70) = 0;
    *(undefined1 *)(iVar3 + 0x3a) = 0xff;
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x88) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
    uVar4 = DAT_2027c478;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined4 *)(iVar3 + 0x8c) = uVar4;
    *(undefined4 *)(iVar3 + 0x68) = DAT_2027c478;
    *(undefined4 *)(iVar3 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
    DAT_20321ccc = DAT_20321ccc + 1;
    if ((*(float *)(DAT_202b34b0 + 0x18) <= (float)DAT_20321ccc) || (0x3ff < DAT_20321ccc)) {
      DAT_20321ccc = 0;
    }
    *(undefined4 *)(*param_1 + 200) = 0;
    return 1;
  }
  return 0;
}

