// rea decompile_all
// name: FUN_20040c60
// address: 0x20040c60
// body: available
// range: 0x20040c60-0x20040e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20040c60(float *param_1,int param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  float local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  pfVar3 = param_1;
  fVar2 = param_1[0xd];
  local_3c = 0;
  local_38 = 0;
  local_34 = 0xc4480000;
  if ((((-1 < (int)fVar2) && ((int)fVar2 < 0x2b)) &&
      (*(int *)(&DAT_20131670 + (int)fVar2 * 0xc) != 0)) &&
     ((_DAT_20321ce8 + 200.0 <= (float)DAT_201e8fc4 || (DAT_20321ce0 != fVar2)))) {
    DAT_20321ce0 = param_1[0xd];
    pfVar1 = param_1 + 3;
    _DAT_20321ce8 = (float)DAT_201e8fc4;
    FUN_20054c90(local_24,pfVar1);
    FUN_20055280(pfVar1,local_24,local_18);
    param_1 = (float *)0x0;
    if (0 < param_2) {
      while (iVar4 = FUN_2003ba40(), iVar4 != 0) {
        fVar5 = (float10)flrand(0x41a00000,0x42200000);
        local_48 = (float)(fVar5 * (float10)*pfVar1 + (float10)*pfVar3);
        local_44 = (float)(fVar5 * (float10)pfVar3[4] + (float10)pfVar3[1]);
        local_40 = (float)(fVar5 * (float10)pfVar3[5] + (float10)pfVar3[2]);
        fVar5 = (float10)flrand(-param_3,param_3);
        fVar5 = (float10)flrand(-param_3,param_3,local_18,(float)fVar5);
        fVar5 = (float10)flrand(param_3 * 0.1,param_3 + param_3,local_24,(float)fVar5);
        FUN_2002ff30(local_30,pfVar1,(float)fVar5);
        fVar5 = (float10)flrand(0x42c80000,0x43960000);
        local_28 = (float)(fVar5 + (float10)local_28);
        FUN_2002ffb0(local_c,0x43480000);
        FUN_2003be00(iVar4,&local_48,&DAT_20390c24,0,0,0);
        FUN_2003be70(iVar4,local_30,&local_3c,local_c,6);
        FUN_2003bec0(iVar4,pfVar3[0xd]);
        *(undefined1 **)(iVar4 + 0xd8) = &LAB_20029da0;
        param_1 = (float *)((int)param_1 + 1);
        if (param_2 <= (int)param_1) {
          return;
        }
      }
    }
  }
  return;
}

