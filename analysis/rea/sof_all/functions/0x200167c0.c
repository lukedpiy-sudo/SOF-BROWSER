// rea decompile_all
// name: FUN_200167c0
// address: 0x200167c0
// body: available
// range: 0x200167c0-0x200168aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200167c0(void)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  puVar6 = &DAT_20230330;
  for (iVar5 = 0xe0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar8 = 0;
  DAT_2023f2d0 = 0x20;
  iVar5 = 0x472cc;
  puVar6 = &DAT_20230330;
  do {
    uVar2 = uVar8 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    pfVar3 = (float *)&DAT_201e9064;
    do {
      pfVar4 = pfVar3 + 1;
      *(float *)(iVar5 + -4 + (int)pfVar4) =
           ((float)(int)uVar2 - 1.5) * 64.0 * *pfVar3 +
           (float)((((int)(uVar8 + ((int)uVar8 >> 0x1f & 3U)) >> 2) + 2) * 0x40) * pfVar3[-3] +
           pfVar3[-0x1d];
      pfVar3 = pfVar4;
    } while ((int)pfVar4 < 0x201e9070);
    puVar6[6] = 0x43480000;
    puVar7 = puVar6 + 7;
    iVar5 = iVar5 + 0x1c;
    iVar1 = (int)uVar8 % 6 + 1;
    puVar6[3] = (float)((int)uVar8 % 6 - 1U & 1);
    uVar8 = uVar8 + 1;
    puVar6[4] = (float)(iVar1 >> 1 & 1);
    puVar6[5] = (float)(iVar1 >> 2 & 1);
    puVar6 = puVar7;
  } while ((int)puVar7 < 0x202306b0);
  return;
}

