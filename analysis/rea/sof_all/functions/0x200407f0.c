// rea decompile_all
// name: FUN_200407f0
// address: 0x200407f0
// body: available
// range: 0x200407f0-0x200409e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200407f0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar1 = (float)DAT_201e8fc4;
  local_c = 0;
  local_8 = 0;
  local_4 = 0xc4480000;
  local_3c = 0.0;
  local_38 = 0.0;
  local_34 = 0;
  local_30 = 0.0;
  local_2c = 0.0;
  local_28 = 10.0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (_DAT_20321cf4 + 300.0 <= fVar1) {
    _DAT_20321cf4 = fVar1;
    if (param_2 == 0) {
      param_2 = irand(5,10);
    }
    iVar4 = 0;
    if (0 < param_2) {
      while (iVar3 = FUN_2003ba40(), iVar3 != 0) {
        fVar5 = (float10)flrand(0,0x43b38000);
        local_38 = (float)fVar5;
        fVar5 = (float10)flrand(0x42200000,0x42700000);
        local_3c = (float)fVar5;
        local_24 = 0xc2c80000;
        fVar5 = (float10)flrand(0,0x428c0000);
        fVar6 = (float10)flrand(0x43340000,0x43700000);
        fVar7 = (float10)fcos((float10)local_38 * (float10)0.017453292);
        local_30 = (float)(fVar7 * (float10)(float)fVar5);
        fVar7 = (float10)fsin((float10)local_38 * (float10)0.017453292);
        local_2c = (float)(fVar7 * (float10)(float)fVar5);
        local_28 = (float)fVar6;
        fVar5 = (float10)flrand(0x3f800000,0x40a00000);
        fVar1 = param_1[2];
        fVar6 = (float10)flrand(0xc0800000,0x40800000);
        fVar2 = param_1[1];
        fVar7 = (float10)flrand(0xc0800000,0x40800000);
        local_18 = (float)(fVar7 + (float10)*param_1);
        local_14 = (float)(fVar6 + (float10)fVar2);
        local_10 = (float)(fVar5 + (float10)fVar1);
        FUN_2003be00(iVar3,&local_18,&local_3c,0,0,0);
        FUN_2003beb0(iVar3,&LAB_20040500);
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        thunk_FUN_2003b0a0(iVar3,0x16);
        FUN_2003be70(iVar3,&local_30,&local_c,&local_24,1);
        iVar4 = iVar4 + 1;
        if (param_2 <= iVar4) {
          return;
        }
      }
    }
  }
  return;
}

