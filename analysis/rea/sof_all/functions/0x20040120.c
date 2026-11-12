// rea decompile_all
// name: FUN_20040120
// address: 0x20040120
// body: available
// range: 0x20040120-0x20040284 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_20040120(undefined4 param_1,int param_2,byte param_3,uint param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10 [4];
  
  param_4 = param_4 & 0xff;
  local_18 = 0;
  local_14 = 0;
  local_10[0] = -300.0;
  local_24 = 0;
  local_20 = 0.0;
  local_1c = 0;
  if (param_4 == 0) {
    param_4 = irand(1,4);
  }
  iVar4 = 0;
  if (0 < (int)param_4) {
    do {
      iVar2 = FUN_2003ba40();
      if (iVar2 == 0) {
        return;
      }
      iVar5 = 0;
      do {
        fVar6 = (float10)flrand(0xbdcccccd,0x3dcccccd);
        fVar1 = *(float *)(param_2 + iVar5 * 4);
        fVar7 = (float10)flrand(0x3ea3d70a,0x3fcccccd);
        iVar3 = irand(0xffffffe0,0x20);
        iVar5 = iVar5 + 1;
        local_10[iVar5] =
             (float)iVar3 +
             (float)(fVar7 * (float10)(float)(fVar6 + (float10)fVar1) * (float10)param_3);
      } while (iVar5 < 3);
      iVar5 = irand(0xfffffc7c,900);
      local_20 = (float)iVar5;
      local_24 = 0;
      local_1c = 0;
      FUN_2003be00(iVar2,param_1,&DAT_20390c24,0,0,0);
      FUN_2003be70(iVar2,local_10 + 1,&local_18,&local_24,5);
      thunk_FUN_2003b0a0(iVar2,0x15);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_4);
  }
  return;
}

