// rea decompile_all
// name: FUN_20015da0
// address: 0x20015da0
// body: available
// range: 0x20015da0-0x20015f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20015da0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if ((DAT_201e7594 != '\0') && (*(float *)(DAT_20230eb0 + 0x18) != 0.0)) {
    if (*(int *)(DAT_20230eb0 + 0x14) != 0) {
      if ((4.0 < *(float *)(DAT_20230eb0 + 0x18)) || (*(float *)(DAT_20230eb0 + 0x18) < 0.0)) {
        *(undefined4 *)(DAT_20230eb0 + 0x18) = 0x40800000;
      }
      *(undefined4 *)(DAT_20230eb0 + 0x14) = 0;
      iVar1 = __ftol();
      if (iVar1 != 0) {
        Com_sprintf(&DAT_20225940,0x40,s_pics_menus_status_ch_i_2011f7a4,iVar1);
        (*DAT_204035b4)(&DAT_20225ea0,&DAT_20225938,&DAT_20225940);
        if (DAT_20225ea0 == 0) {
          DAT_20225940 = 0;
          return;
        }
      }
    }
    if ((((DAT_20225940 != '\0') && ((DAT_201e7f48 & 0x800) == 0)) && (DAT_201e7f44 != 0)) &&
       (((uVar2 = _DAT_201e7efc & 0xff, uVar2 != 2 && (uVar2 != 4)) && (uVar2 != 0x10)))) {
      if ((DAT_201e7f48 & 0x10) != 0) {
        if ((DAT_201e7f48 & 0x20) == 0) {
          local_4 = 0xff0000ff;
        }
        else {
          local_4 = 0xff00ff00;
        }
        (*DAT_204035bc)((DAT_20225ed8 - DAT_20225ea0 >> 1) + DAT_20225ed0,
                        (DAT_20225edc - DAT_20225938 >> 1) + DAT_20225ed4,0x3f800000,0x3f800000,
                        &local_4,&DAT_20225940);
        return;
      }
      (*DAT_204035b8)((DAT_20225ed8 - DAT_20225ea0 >> 1) + DAT_20225ed0,
                      (DAT_20225edc - DAT_20225938 >> 1) + DAT_20225ed4,&DAT_20225940,0xffffffff);
    }
  }
  return;
}

