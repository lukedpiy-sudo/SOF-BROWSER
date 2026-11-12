// rea decompile_all
// name: FUN_2000d8f0
// address: 0x2000d8f0
// body: available
// range: 0x2000d8f0-0x2000dd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000d8f0(int param_1)

{
  char cVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
    FUN_20013960();
    FUN_20055930();
    if (DAT_20225054 != 0) {
      **(undefined4 **)(DAT_20225054 + 4) = 0xffffffff;
    }
    DAT_201e7578 = DAT_201e7578 + param_1;
    if ((*(float *)(DAT_201e7560 + 0x18) != 0.0) ||
       (((DAT_201c1f00 != 7 || (99 < DAT_201e7578)) &&
        ((iVar2 = FUN_2001cae0(), iVar2 != 0 ||
         (1000.0 / *(float *)(DAT_20225050 + 0x18) <= (float)DAT_201e7578)))))) {
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_30 = FUN_20055930();
      }
      FUN_2004a990();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_2c = FUN_20055930();
      }
      FUN_2000d6a0((float)DAT_201e7578);
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_28 = FUN_20055930();
      }
      DAT_201e7578 = 0;
      if (5000 < param_1) {
        DAT_201c23c4 = FUN_20055930();
      }
      FUN_2000c5c0();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_24 = FUN_20055930();
      }
      FUN_20012150();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_20 = FUN_20055930();
      }
      FUN_20065cf0();
      FUN_2004ad40();
      FUN_20018530();
      FUN_2000d5b0();
      FUN_200060c0();
      FUN_2000b300();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_1c = FUN_20055930();
      }
      cVar1 = FUN_20017e90();
      if ((cVar1 == '\0') && (DAT_201c1f00 == 8)) {
        DAT_201c1f00 = 7;
      }
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_18 = FUN_20055930();
      }
      FUN_20011bb0();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_14 = FUN_20055930();
      }
      FUN_200670c0();
      if ((DAT_201e7594 == '\0') && (DAT_201c1f00 == 8)) {
        FUN_200168b0();
      }
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_10 = FUN_20055930();
      }
      if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
        DAT_20249624 = FUN_20055930();
      }
      FUN_20015fa0(0);
      if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
        DAT_2024962c = FUN_20055930();
      }
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        local_c = FUN_20055930();
      }
      (*DAT_20390d78)(&DAT_201e8ff0,&DAT_201e9058,&DAT_201e9064,&DAT_201e9070);
      FUN_200014b0();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        iStack_8 = FUN_20055930();
      }
      FUN_2002fca0();
      FUN_2002f940();
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        iStack_4 = FUN_20055930();
      }
      DAT_201c1f08 = DAT_201c1f08 + 1;
      iVar2 = DAT_20225080;
      if ((*(float *)(DAT_20249f54 + 0x18) != 0.0) && (DAT_201c1f00 == 8)) {
        if (DAT_20225080 == 0) {
          DAT_20225080 = FUN_20055930();
          iVar2 = DAT_20225080;
          if (DAT_20249628 != 0) {
            FUN_200faa48(DAT_20249628,&DAT_2011e720);
            iVar2 = DAT_20225080;
          }
        }
        else {
          iVar2 = FUN_20055930();
          if (DAT_20249628 != 0) {
            FUN_200faa48(DAT_20249628,&DAT_2011e71c,iVar2 - DAT_20225080);
          }
        }
      }
      DAT_20225080 = iVar2;
      if (*(float *)(DAT_20225094 + 0x18) != 0.0) {
        Com_Printf(s_IN__3i_sim__3i_rd__3i_sd__3i_md__2011e6d0,local_2c - local_30,
                   local_28 - local_2c,local_24 - local_28,local_20 - local_24,local_1c - local_20,
                   local_18 - local_1c,local_14 - local_18,local_10 - local_14,local_c - local_10,
                   iStack_8 - local_c,iStack_4 - iStack_8);
      }
    }
  }
  return;
}

