// rea decompile_all
// name: FUN_500bf530
// address: 0x500bf530
// body: available
// range: 0x500bf530-0x500bf71c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bf530(float param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_8;
  
  iVar3 = *(int *)((int)param_1 + 0x324);
  if (iVar3 != 0) {
    local_50 = *(float *)((int)param_1 + 0x228);
    local_4c = *(float *)((int)param_1 + 0x22c);
    pfVar1 = (float *)((int)param_1 + 0x228);
    fVar4 = *(float *)(iVar3 + 0x150);
    local_48 = *(float *)((int)param_1 + 0x230);
    fVar2 = *(float *)(iVar3 + 0x138);
    local_3c = *(float *)(iVar3 + 0x154) * 0.5 + *(float *)(iVar3 + 0x13c);
    *pfVar1 = (*(float *)(iVar3 + 0x14c) * 0.5 + *(float *)(iVar3 + 0x134)) -
              *(float *)((int)param_1 + 4);
    *(float *)((int)param_1 + 0x22c) = (fVar4 * 0.5 + fVar2) - *(float *)((int)param_1 + 8);
    *(float *)((int)param_1 + 0x230) = local_3c - *(float *)((int)param_1 + 0xc);
    FUN_500fe050(pfVar1);
    if (((*pfVar1 != local_50) || (*(float *)((int)param_1 + 0x22c) != local_4c)) ||
       (*(float *)((int)param_1 + 0x230) != local_48)) {
      *(uint *)((int)param_1 + 0x1b8) = *(uint *)((int)param_1 + 0x1b8) | 0x80000000;
    }
  }
  local_5c = *(float *)((int)param_1 + 4);
  local_58 = *(float *)((int)param_1 + 8);
  local_44 = *(float *)((int)param_1 + 0x228) * 2048.0 + local_5c;
  local_54 = *(float *)((int)param_1 + 0xc);
  local_40 = *(float *)((int)param_1 + 0x22c) * 2048.0 + local_58;
  local_3c = *(float *)((int)param_1 + 0x230) * 2048.0 + local_54;
  fVar4 = param_1;
  do {
    (*DAT_5015cac0)(&local_5c,0,0,&local_44,fVar4,0x6000001,local_38);
    if (fStack_8 == 0.0) {
LAB_500bf704:
      *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      return;
    }
    if ((*(int *)((int)fStack_8 + 0x30c) != 0) && ((*(byte *)((int)fStack_8 + 0x1a0) & 4) == 0)) {
      FUN_5008bb10(fStack_8,param_1,*(float *)((int)param_1 + 0x32c),(float *)((int)param_1 + 0x228)
                   ,&fStack_30,&local_5c,*(int *)((int)param_1 + 0x310),1,4,0x22,0,0);
    }
    if (((*(byte *)((int)fStack_8 + 0x118) & 4) == 0) && (*(int *)((int)fStack_8 + 0x74) == 0)) {
      if ((int)*(uint *)((int)param_1 + 0x1b8) < 0) {
        *(uint *)((int)param_1 + 0x1b8) = *(uint *)((int)param_1 + 0x1b8) & 0x7fffffff;
      }
      goto LAB_500bf704;
    }
    local_5c = fStack_30;
    local_58 = fStack_2c;
    local_54 = fStack_28;
    fVar4 = fStack_8;
  } while( true );
}

