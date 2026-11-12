// rea decompile_all
// name: FUN_500eb6a0
// address: 0x500eb6a0
// body: available
// range: 0x500eb6a0-0x500eb84e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500eb6a0(int *param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  piVar6 = param_1;
  param_1[0xd] = 0x400000;
  param_1[0x47] = -0x3ce80000;
  param_1[0x48] = -0x3d560000;
  param_1[0x49] = -0x3dd00000;
  param_1[0x4a] = 0x43180000;
  param_1[0x4b] = 0x42aa0000;
  param_1[0x4c] = 0x42a00000;
  bVar1 = *(byte *)(param_1 + 0x6e);
  param_1[0x6e] = 2;
  param_1[0x68] = param_1[0x68] | 0x800;
  param_1[0x67] = 10;
  param_1[0x56] = 2;
  param_1[0xc3] = 1;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xae] = 0;
  fVar2 = DAT_5015ccdc + 0.1;
  param_1[0xb1] = (int)FUN_500eb650;
  param_1[0xb0] = (int)&LAB_500eb530;
  param_1[0xad] = (int)fVar2;
  iVar3 = (DAT_5015d950 * 5 + 5) * 100;
  param_1[0xbc] = iVar3;
  param_1[0xbb] = iVar3;
  (*DAT_5015cb28)(param_1);
  param_1 = FUN_50008e90(9,(int)piVar6);
  piVar6[0x114] = (int)param_1;
  if ((param_1 != (int *)0x0) &&
     (FUN_5006b100(&DAT_5018b440,(int *)&piStack_10,(uint *)&param_1), piStack_10 == DAT_5018b444))
  {
    param_2 = DAT_501546ec;
    DAT_501546ec = DAT_501546ec + 1;
    piStack_10 = param_1;
    uStack_c = 0;
    piVar4 = (int *)FUN_5000a2e0(&DAT_5018b440,auStack_8,(uint *)&piStack_10);
    *(int *)(*piVar4 + 0x10) = param_2;
    puVar5 = (undefined4 *)FUN_50010ba0(&DAT_5018b454,&param_2);
    *puVar5 = param_1;
  }
  if (((int *)piVar6[0x114] != (int *)0x0) &&
     (piVar6 = (int *)(**(code **)(*(int *)piVar6[0x114] + 0x228))(), piVar6 != (int *)0x0)) {
    (**(code **)(*piVar6 + 0x134))((bVar1 & 1) != 0);
  }
  return;
}

