// rea decompile_all
// name: FUN_20015b10
// address: 0x20015b10
// body: available
// range: 0x20015b10-0x20015d4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20015b10(void)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  byte *local_20;
  float *local_18;
  float local_c;
  float local_8;
  float local_4;
  
  iVar8 = -1;
  bVar2 = true;
  iVar3 = FUN_200f9e9e(&DAT_201e9ccc);
  if ((iVar3 == 0) && (*(float *)(DAT_20225090 + 0x18) == 0.0)) {
    bVar2 = false;
  }
  iVar3 = FUN_200f9e9e(&DAT_201e9d0c);
  iVar4 = FUN_200f9e9e(&DAT_201e9c8c);
  uVar6 = 0;
  if (0 < iVar4) {
    local_20 = &DAT_2015f133;
    pfVar9 = (float *)&DAT_20222064;
    do {
      if ((uVar6 & 0x1f) == 0) {
        FUN_200157a0(uVar6);
      }
      if ((1 << ((byte)uVar6 & 0x1f) & DAT_20224ff8) != 0) {
        local_c = pfVar9[-2];
        local_8 = pfVar9[-1];
        pfVar7 = (float *)0x0;
        local_18 = (float *)0x0;
        local_4 = (float)(int)(*local_20 - 0x7e) + *pfVar9;
        if (bVar2) {
          local_18 = pfVar9 + -0x52;
        }
        if ((iVar3 == 0) || (pfVar1 = pfVar9 + -0x12, *(char *)(pfVar9 + -0x12) == '\0')) {
          if (((&DAT_2022501c)[uVar6] != 0) && ((DAT_201e7e94 != 2 && (DAT_201e7e94 != 7)))) {
            pfVar7 = (float *)(&DAT_20224bf8 + (uint)(byte)(&DAT_2022501c)[uVar6] * 0x40);
          }
        }
        else {
          pfVar7 = pfVar1;
          if ((DAT_201e7e94 == 2) || (DAT_201e7e94 == 7)) {
            iVar8 = -0xff0100;
            if (((DAT_201e94c8 == 4) || (DAT_201e94c8 == 6)) ||
               ((DAT_201e94c8 == 7 && (iVar5 = FUN_200f9e9e(&DAT_201e974c), iVar5 != 0)))) {
              iVar8 = (-(uint)(*(char *)(pfVar9 + 1) != '0') & 0xff0100ff) - 0x10000;
            }
          }
          else if (((DAT_201e94c8 == 4) || (DAT_201e94c8 == 6)) ||
                  ((DAT_201e94c8 == 7 && (iVar8 = FUN_200f9e9e(&DAT_201e974c), iVar8 != 0)))) {
            iVar8 = (-(uint)(*(char *)(pfVar9 + 1) != '0') & 0xff0100ff) - 0x10000;
          }
          else {
            iVar8 = __strcmpi((char *)(pfVar9 + -0x42),&DAT_20221f5c + DAT_201e94c4 * 0x15c);
            iVar8 = (-(uint)(iVar8 != 0) & 0xffff01ff) - 0xff0100;
          }
        }
        (*DAT_2040361c)(&local_c,local_18,pfVar7,iVar8);
      }
      uVar6 = uVar6 + 1;
      pfVar9 = pfVar9 + 0x57;
      local_20 = local_20 + 0x18c;
    } while ((int)uVar6 < iVar4);
  }
  return;
}

