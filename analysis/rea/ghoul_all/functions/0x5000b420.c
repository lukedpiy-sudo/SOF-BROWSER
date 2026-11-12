// rea decompile_all
// name: FUN_5000b420
// address: 0x5000b420
// body: available
// range: 0x5000b420-0x5000b5f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_5000b420(void *this,uint param_1,uint param_2,uint param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  uVar2 = param_3;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined ***)this = &PTR_FUN_501252b8;
  *(uint *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = *param_5;
  *(undefined4 *)((int)this + 0xc) = param_5[1];
  *(undefined4 *)((int)this + 0x10) = param_5[2];
  *(undefined4 *)((int)this + 0x14) = *param_4;
  *(undefined4 *)((int)this + 0x18) = param_4[1];
  *(undefined4 *)((int)this + 0x1c) = param_4[2];
  *(float *)((int)this + 0x20) = DAT_5015ccdc;
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(uint *)((int)this + 0x2c) = param_1;
  param_3 = param_1;
  if (param_1 != 0) {
    FUN_5006b100(&DAT_5018b508,(int *)&param_4,&param_3);
    if (param_4 == DAT_5018b50c) {
      param_5 = DAT_501546ec;
      DAT_501546ec = (undefined4 *)((int)DAT_501546ec + 1);
      param_4 = (undefined4 *)0x0;
      puVar3 = (uint *)FUN_50010d00(local_10,&param_3,&param_4);
      piVar4 = (int *)FUN_5000a2e0(&DAT_5018b508,local_8,puVar3);
      *(undefined4 **)(*piVar4 + 0x10) = param_5;
      puVar3 = (uint *)FUN_50010ba0(&DAT_5018b51c,(int *)&param_5);
      *puVar3 = param_3;
    }
  }
  *(uint *)((int)this + 0x30) = param_2;
  param_3 = param_2;
  if (param_2 != 0) {
    FUN_5006b100(&DAT_5018b530,(int *)&param_4,&param_3);
    if (param_4 == DAT_5018b534) {
      param_5 = DAT_501546ec;
      DAT_501546ec = (undefined4 *)((int)DAT_501546ec + 1);
      param_4 = (undefined4 *)0x0;
      puVar3 = (uint *)FUN_50010d00(local_8,&param_3,&param_4);
      piVar4 = (int *)FUN_5000a2e0(&DAT_5018b530,local_10,puVar3);
      *(undefined4 **)(*piVar4 + 0x10) = param_5;
      puVar3 = (uint *)FUN_50010ba0(&DAT_5018b544,(int *)&param_5);
      *puVar3 = param_3;
    }
  }
  if (uVar2 == 0) {
    *(undefined4 *)((int)this + 0x34) = 0x3f800000;
    *(undefined4 *)((int)this + 0x38) = 0x41f00000;
  }
  else {
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(uVar2 + 0x3c);
    *(float *)((int)this + 0x38) = *(float *)(uVar2 + 0x40) + *(float *)(uVar2 + 0x40);
  }
  *(undefined4 *)((int)this + 0x3c) = 4;
  *(float *)((int)this + 0x40) = DAT_5015ccdc;
  *(float *)((int)this + 0x44) = param_7;
  *(float *)((int)this + 0x48) = param_7 + *(float *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  fVar1 = DAT_5015ccdc + 999.0;
  *(undefined4 *)((int)this + 0x6c) = param_6;
  *(undefined4 *)((int)this + 0x5c) = param_8;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(float *)((int)this + 0x58) = fVar1;
  return this;
}

