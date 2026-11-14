// rea decompile_all
// name: FUN_300138f0
// address: 0x300138f0
// body: available
// range: 0x300138f0-0x30013bd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300138f0(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float local_3c [3];
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(DAT_3008fc78 + 0x68) != 0) {
    DAT_3008fed8 = param_1;
    if (((*(float *)(param_1 + 4) == 0.0) && (*(float *)(param_1 + 8) == 0.0)) &&
       (*(float *)(param_1 + 0xc) == 0.0)) {
      local_30._0_4_ = *(float *)(param_1 + 0x28) + *(float *)(DAT_3008fc78 + 0x48);
      bVar1 = false;
      local_30._4_4_ = *(float *)(param_1 + 0x2c) + *(float *)(DAT_3008fc78 + 0x4c);
      local_28 = *(float *)(param_1 + 0x30) + *(float *)(DAT_3008fc78 + 0x50);
      local_3c[0] = *(float *)(param_1 + 0x28) + *(float *)(DAT_3008fc78 + 0x54);
      local_3c[1] = *(float *)(param_1 + 0x2c) + *(float *)(DAT_3008fc78 + 0x58);
      local_3c[2] = *(float *)(param_1 + 0x30) + *(float *)(DAT_3008fc78 + 0x5c);
    }
    else {
      bVar1 = true;
      iVar5 = 0;
      pfVar6 = (float *)(param_1 + 0x28);
      do {
        iVar4 = iVar5 + 4;
        *(float *)((int)&local_30 + iVar5) = *pfVar6 - *(float *)(DAT_3008fc78 + 0x60);
        *(float *)((int)local_3c + iVar5) = *pfVar6 + *(float *)(DAT_3008fc78 + 0x60);
        iVar5 = iVar4;
        pfVar6 = pfVar6 + 1;
      } while (iVar4 < 0xc);
    }
    iVar5 = FUN_3000dc50(&local_30,(undefined8 *)local_3c);
    if (iVar5 == 0) {
      if (*(float *)(DAT_3008ff2c + 0x18) == 0.0) {
        (*DAT_300a4490)(0x3f800000,0x3f800000,0x3f800000);
      }
      else {
        (*DAT_300a46f8)(0x3f800000,0x3f800000,0x3f800000,0x3ecccccd);
        DAT_300a46e0 = DAT_300a46e0 | 1;
        if (((byte)DAT_300a4588 & 1) != 0) {
          *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
        }
        DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7;
        if (((byte)DAT_300a4588 & 8) == 0) {
          *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
        }
      }
      fVar2 = DAT_3008fd04;
      puVar7 = &DAT_30090028;
      for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      DAT_30090010 = fVar2 - *(float *)(param_1 + 0x28);
      DAT_30090014 = DAT_3008fd08 - *(float *)(param_1 + 0x2c);
      DAT_30090018 = DAT_3008fd0c - *(float *)(param_1 + 0x30);
      pfVar6 = (float *)(param_1 + 4);
      *pfVar6 = -*pfVar6;
      *(float *)(param_1 + 0xc) = -*(float *)(param_1 + 0xc);
      fVar3 = DAT_30090018;
      fVar2 = DAT_30090014;
      if (bVar1) {
        fVar8 = DAT_30090010;
        FUN_3001ca90(pfVar6,local_3c + 2,&local_28,&fStack_1c);
        DAT_30090010 = local_3c[2] * fVar8 + (float)local_30 * fVar2 + local_30._4_4_ * fVar3;
        DAT_30090014 = -(local_28 * fVar8 + fStack_24 * fVar2 + fStack_20 * fVar3);
        DAT_30090018 = fStack_1c * fVar8 + fStack_18 * fVar2 + fStack_14 * fVar3;
      }
      *pfVar6 = -*pfVar6;
      *(float *)(param_1 + 0xc) = -*(float *)(param_1 + 0xc);
      (*DAT_300a4624)();
      FUN_3000dcd0(param_1);
      FUN_30013be0();
      if (*(float *)(DAT_3008ff2c + 0x18) != 0.0) {
        DAT_300a46e0 = DAT_300a46e0 & 0xfffffffe;
        if (((byte)DAT_300a4588 & 1) == 0) {
          *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
        }
        DAT_300a46e0 = DAT_300a46e0 | 8;
        if (((byte)DAT_300a4588 & 8) != 0) {
          *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x30013bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_300a47f0)();
      return;
    }
  }
  return;
}

