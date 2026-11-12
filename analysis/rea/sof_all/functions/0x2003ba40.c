// rea decompile_all
// name: FUN_2003ba40
// address: 0x2003ba40
// body: available
// range: 0x2003ba40-0x2003bb51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_2003ba40(void)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  iVar6 = DAT_20321ccc;
  if ((*(float *)(DAT_202ea4b8 + 0x18) == 0.0) && (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    iVar1 = DAT_20321ccc * 0xdc;
    if ((((&DAT_2027c504)[DAT_20321ccc * 0xdc] & 8) != 0) &&
       (((int *)(&DAT_2027c54c)[DAT_20321ccc * 0x37] != (int *)0x0 &&
        (sVar7 = (**(code **)(*(int *)(&DAT_2027c54c)[DAT_20321ccc * 0x37] + 0x9c))(), 0 < sVar7))))
    {
      (**(code **)(*(int *)(&DAT_2027c54c)[iVar6 * 0x37] + 0xd4))();
      bVar2 = (&DAT_2027c504)[iVar1];
      (&DAT_2027c54c)[iVar6 * 0x37] = 0;
      (&DAT_2027c504)[iVar1] = bVar2 & 0xf7;
    }
    uVar4 = DAT_2027c478;
    iVar8 = DAT_20321ccc + 1;
    *(undefined4 *)(&DAT_2027c4bc + iVar1) = 0xffffffff;
    DAT_20321ccc = iVar8;
    *(undefined4 *)(&DAT_2027c4d0 + iVar1) = 0xffffffff;
    fVar3 = (float)DAT_20321ccc;
    *(undefined4 *)(&DAT_2027c4cc + iVar1) = 0xffffffff;
    iVar5 = DAT_202b34b0;
    *(undefined2 *)(&DAT_2027c4c8 + iVar1) = 0;
    (&DAT_2027c500)[iVar6 * 0x37] = 0;
    (&DAT_2027c4ca)[iVar1] = 0xff;
    *(undefined4 *)(&DAT_2027c568 + iVar1) = 0;
    *(undefined4 *)(&DAT_2027c514 + iVar1) = 0;
    *(undefined4 *)(&DAT_2027c518 + iVar1) = 0;
    *(undefined4 *)(&DAT_2027c4f0 + iVar1) = 0;
    *(undefined4 *)(&DAT_2027c51c + iVar1) = uVar4;
    *(undefined4 *)(&DAT_2027c520 + iVar1) = 0;
    *(undefined4 *)(&DAT_2027c4f8 + iVar1) = uVar4;
    (&DAT_2027c4c4)[iVar6 * 0x37] = 0;
    *(undefined4 *)(&DAT_2027c4c0 + iVar1) = 0;
    if ((*(float *)(iVar5 + 0x18) <= fVar3) || (0x3ff < iVar8)) {
      DAT_20321ccc = 0;
    }
    *(undefined4 *)(&DAT_2027c558 + iVar1) = 0;
    return &DAT_2027c490 + iVar1;
  }
  return (undefined *)0x0;
}

