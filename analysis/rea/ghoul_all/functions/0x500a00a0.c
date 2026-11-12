// rea decompile_all
// name: FUN_500a00a0
// address: 0x500a00a0
// body: available
// range: 0x500a00a0-0x500a0225 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a00a0(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [4];
  float fStack_34;
  
  fVar4 = (float10)*(float *)((int)param_1 + 0x14) * (float10)0.01745329252;
  local_44 = *(undefined4 *)((int)param_1 + 4);
  local_40 = *(undefined4 *)((int)param_1 + 8);
  fVar5 = (float10)fsin(fVar4);
  local_50 = (float)(fVar5 * (float10)-8000.0 + (float10)*(float *)((int)param_1 + 4));
  fVar4 = (float10)fcos(fVar4);
  local_4c = (float)(fVar4 * (float10)8000.0 + (float10)*(float *)((int)param_1 + 8));
  local_3c = *(float *)((int)param_1 + 0xc) + 40.0;
  local_48 = *(float *)((int)param_1 + 0xc) + 40.0;
  (*DAT_5015cac0)(&local_44,0,0,&local_50,param_1,*(undefined4 *)((int)param_1 + 0x15c),local_38);
  fVar4 = (float10)*(float *)((int)param_1 + 0x14) * (float10)0.01745329252;
  fVar5 = (float10)fsin(fVar4);
  *(float *)((int)param_1 + 0x358) =
       (float)(fVar5 * (float10)fStack_34 * (float10)-8000.0 + (float10)*(float *)((int)param_1 + 4)
              );
  fVar4 = (float10)fcos(fVar4);
  *(float *)((int)param_1 + 0x35c) =
       (float)(fVar4 * (float10)fStack_34 * (float10)8000.0 + (float10)*(float *)((int)param_1 + 8))
  ;
  FUN_500b4b50(param_1);
  fVar4 = (float10)*(float *)((int)param_1 + 0x14) * (float10)0.01745329252;
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  *(undefined4 *)((int)param_1 + 0x288) = 0;
  fVar5 = (float10)fsin(fVar4);
  *(float *)((int)param_1 + 0x24c) =
       (float)((float10)*(float *)((int)param_1 + 0x220) * (float10)-1.0 * fVar5);
  fVar4 = (float10)fcos(fVar4);
  *(float *)((int)param_1 + 0x250) = (float)(fVar4 * (float10)*(float *)((int)param_1 + 0x220));
  fVar1 = DAT_5015ccdc + 0.1;
  *(undefined1 **)((int)param_1 + 0x2b8) = &LAB_5009ff30;
  *(undefined4 *)((int)param_1 + 0x2c4) = 0;
  *(float *)((int)param_1 + 0x2b4) = fVar1;
  *(undefined4 *)((int)param_1 + 0x2c8) = 0;
  uVar2 = (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Move_w_5014b0ec);
  *(undefined4 *)((int)param_1 + 0x3c) = uVar2;
  *(undefined4 *)((int)param_1 + 0x40) = 0xfb;
  iVar3 = (*DAT_5015cb24)(1,3);
  if (iVar3 == 1) {
    uVar2 = (*DAT_5015c9f4)(s_Ambient_Locs_Subway_Train_Horn2__5014b110,0x3f800000,0x3f800000,0,0);
    (*DAT_5015ca48)(param_1,4,uVar2);
  }
  FUN_5009fc90((int)param_1);
  return;
}

