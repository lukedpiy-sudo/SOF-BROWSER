// rea decompile_all
// name: FUN_2001f720
// address: 0x2001f720
// body: available
// range: 0x2001f720-0x2001fa73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001f720(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_2010ae70;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(DAT_20249f54 + 0x14) != 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(DAT_20249f54 + 0x14) = 0;
    if (*(float *)(DAT_20249f54 + 0x18) == 0.0) {
      if (DAT_20249628 != 0) {
        FUN_200fa9ae(DAT_20249628);
        DAT_20249628 = 0;
      }
    }
    else {
      if (DAT_20249628 != 0) {
        FUN_200fa9ae(DAT_20249628);
        DAT_20249628 = 0;
      }
      DAT_20249628 = FUN_200faa9a(s_stats_log_20121790,&DAT_2011de68);
      if (DAT_20249628 != 0) {
        FUN_200faa48(DAT_20249628,s_entities_dlights_parts_frame_tim_2012176c);
      }
    }
  }
  if (*(float *)(DAT_20249630 + 0x18) == 0.0) {
    iVar1 = param_1;
    if ((*(float *)(DAT_20248e10 + 0x18) != 0.0) && (iVar1 = __ftol(), iVar1 < 1)) {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = __ftol();
  }
  if (*(float *)(DAT_20249e48 + 0x18) != 0.0) {
    if ((DAT_20248d8c != 0) || (3 < DAT_20246d5c)) {
      Com_Printf(s__4i_traces__4i_points_20121754,DAT_20248d8c,DAT_20246d5c);
    }
    DAT_20248d8c = 0;
    DAT_20248de0 = 0;
    DAT_20246d5c = 0;
  }
  while (iVar2 = FUN_20065860(), iVar2 != 0) {
    uVar3 = FUN_20055450(&DAT_2011d990,iVar2);
    FUN_20018180(uVar3);
  }
  FUN_20018530();
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    DAT_20249e40 = FUN_20055930();
    DAT_20249f48 = DAT_20249e40;
    param_1 = DAT_20249e40;
  }
  FUN_2005f5b0(iVar1);
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    DAT_20249624 = FUN_20055930();
    DAT_2024962c = DAT_20249624;
    local_18 = DAT_20249624;
  }
  FUN_2000d8f0(iVar1);
  iVar1 = param_1;
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    iVar1 = FUN_20055930();
  }
  if (DAT_204076d0 != 0) {
    FUN_200f4ee0();
  }
  if (*(float *)(DAT_20249f44 + 0x18) != 0.0) {
    iVar2 = DAT_20249f48 - DAT_20249e40;
    iVar5 = DAT_2024962c - DAT_20249624;
    iVar6 = (local_18 - iVar2) - param_1;
    iVar4 = (iVar1 - iVar5) - local_18;
    if (*(float *)(DAT_20249f44 + 0x18) == 3.0) {
      if (DAT_2024af60 == 10) {
        DAT_2024af60 = 0;
        Com_Printf(s_gm__3i_2012174c,DAT_20249f50 / 10);
        DAT_20249f50 = 0;
      }
      FUN_20012aa0(0,0,0,DAT_20249f50 / 10,0);
      if (iVar2 != 0) {
        DAT_2024af60 = DAT_2024af60 + 1;
        DAT_20249f50 = DAT_20249f50 + iVar2;
      }
    }
    else {
      Com_Printf(s_all__3i_sv__3i_gm__3i_cl__3i_rf__20121724,iVar1 - param_1,iVar6,iVar2,iVar4,iVar5
                );
      if (*(float *)(DAT_20249f44 + 0x18) == 2.0) {
        FUN_20012aa0(iVar1 - param_1,iVar6,iVar4,iVar2,iVar5);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

