// rea decompile_all
// name: FUN_500e91c0
// address: 0x500e91c0
// body: available
// range: 0x500e91c0-0x500e9386 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500e91c0(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  int *piStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  piVar4 = param_1;
  param_1[0xd] = 0x400000;
  param_1[0x47] = -0x3d480000;
  param_1[0x48] = -0x3d7a0000;
  param_1[0x49] = -0x3df80000;
  param_1[0x4a] = 0x42b80000;
  param_1[0x4b] = 0x42860000;
  param_1[0x4c] = 0x42680000;
  bVar5 = (*(byte *)(param_1 + 0x6e) & 1) != 0;
  if (bVar5) {
    param_1[0x47] = -0x3d4a0000;
    param_1[0x48] = -0x3d7c0000;
    param_1[0x49] = -0x3dfc0000;
    param_1[0x4a] = 0x42b60000;
    param_1[0x4b] = 0x42840000;
    param_1[0x4c] = 0x42680000;
  }
  param_1[0x6e] = 2;
  param_1[0x68] = param_1[0x68] | 0x800;
  param_1[0x67] = 10;
  param_1[0x56] = 2;
  param_1[0xc3] = 1;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xae] = 0;
  fVar1 = DAT_5015ccdc + 0.1;
  param_1[0xbc] = 1000;
  param_1[0xbb] = 1000;
  param_1[0xad] = (int)fVar1;
  (*DAT_5015cb28)(param_1);
  param_1 = FUN_50008e90(10,(int)piVar4);
  piVar4[0x114] = (int)param_1;
  if (param_1 != (int *)0x0) {
    FUN_5006b100(&DAT_5018b440,(int *)&piStack_10,(uint *)&param_1);
    if (piStack_10 == DAT_5018b444) {
      param_2 = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      piStack_10 = param_1;
      uStack_c = 0;
      piVar2 = (int *)FUN_5000a2e0(&DAT_5018b440,auStack_8,(uint *)&piStack_10);
      *(int *)(*piVar2 + 0x10) = param_2;
      puVar3 = (undefined4 *)FUN_50010ba0(&DAT_5018b454,&param_2);
      *puVar3 = param_1;
    }
  }
  if ((int *)piVar4[0x114] != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*(int *)piVar4[0x114] + 0x240))();
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x134))(bVar5);
    }
  }
  return;
}

