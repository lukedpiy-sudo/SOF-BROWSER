// rea decompile_all
// name: FUN_500ef7b0
// address: 0x500ef7b0
// body: available
// range: 0x500ef7b0-0x500efb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ef7b0(int *param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iStack_8;
  int iStack_4;
  
  lVar7 = __ftol();
  piVar3 = param_1;
  iVar6 = (int)lVar7 + 1 + DAT_5015d22c;
  DAT_5015d22c = DAT_5015d22c + 1 & 0x80000007;
  piVar1 = (int *)(DAT_5015cca0 + iVar6 * 0x464);
  if ((int)DAT_5015d22c < 0) {
    DAT_5015d22c = (DAT_5015d22c - 1 | 0xfffffff8) + 1;
  }
  (*DAT_5015cb2c)(param_1);
  if (((piVar3 != (int *)0x0) && (piVar3[0x1d] != 0)) &&
     (piVar4 = *(int **)(piVar3[0x1d] + 0x354), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0xe8))(piVar3);
  }
  FUN_500c3830((int)piVar1);
  FUN_500a5d30(&DAT_5015c79c,(int)piVar1);
  piVar4 = (int *)piVar1[0x114];
  if (piVar4 != (int *)0x0) {
    if (piVar4 != (int *)0x0) {
      FUN_500f2900(&DAT_5018b440,piVar4);
    }
    piVar1[0x114] = 0;
  }
  (*DAT_5015cb2c)(piVar1);
  piVar1[4] = piVar3[4];
  piVar1[5] = piVar3[5];
  piVar1[6] = piVar3[6];
  piVar1[4] = 0;
  piVar1[1] = piVar3[1];
  piVar1[2] = piVar3[2];
  piVar1[3] = piVar3[3];
  piVar1[0xd] = piVar3[0xd];
  *piVar1 = ((int)piVar1 - DAT_5015cca0) / 0x464;
  piVar1[0x46] = piVar3[0x46];
  piVar1[0x47] = piVar3[0x47];
  piVar1[0x48] = piVar3[0x48];
  piVar1[0x49] = piVar3[0x49];
  piVar1[0x4a] = piVar3[0x4a];
  piVar1[0x4b] = piVar3[0x4b];
  piVar1[0x4c] = piVar3[0x4c];
  piVar1[0x4d] = piVar3[0x4d];
  piVar1[0x4e] = piVar3[0x4e];
  piVar1[0x4f] = piVar3[0x4f];
  piVar1[0x50] = piVar3[0x50];
  piVar1[0x51] = piVar3[0x51];
  piVar1[0x52] = piVar3[0x52];
  piVar1[0x53] = piVar3[0x53];
  piVar1[0x54] = piVar3[0x54];
  piVar1[0x55] = piVar3[0x55];
  piVar1[0x56] = piVar3[0x56];
  piVar1[0x57] = piVar3[0x57];
  piVar1[0x58] = piVar3[0x58];
  piVar1[0x67] = piVar3[0x67];
  piVar1[0xae] = (int)&LAB_500ef6d0;
  fVar2 = DAT_5015ccdc + *(float *)(DAT_5015d958 + 0x18);
  piVar1[0xc3] = 1;
  piVar1[0x58] = (int)piVar3;
  piVar1[0xae] = (int)&LAB_500ef790;
  piVar1[0xad] = (int)fVar2;
  piVar1[0xad] = (int)(DAT_5015ccdc + 0.1);
  param_1 = FUN_50008e90(0xe,(int)piVar1);
  piVar1[0x114] = (int)param_1;
  if (param_1 != (int *)0x0) {
    FUN_5006b100(&DAT_5018b440,&iStack_4,(uint *)&param_1);
    if (iStack_4 == DAT_5018b444) {
      iStack_8 = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      piVar4 = (int *)FUN_500a6440(&DAT_5018b440,(uint *)&param_1);
      *piVar4 = iStack_8;
      puVar5 = (undefined4 *)FUN_50010ba0(&DAT_5018b454,&iStack_8);
      *puVar5 = param_1;
    }
  }
  if (DAT_5015ccdc + 1.2 < (float)piVar3[0xdb]) {
    if (piVar1[0x59] != 0) {
      iVar11 = 0;
      iVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      piVar4 = piVar1;
      iVar6 = (*DAT_5015c9f8)(s_environ_onfireburst_501464bc);
      FUN_500853c0(&DAT_5015c518,iVar6,(int)piVar4,uVar8,uVar9,iVar10,iVar11);
    }
    piVar1[0xdb] = (int)(DAT_5015ccdc + 4.0);
    piVar1[0xdd] = piVar3[0xdd];
  }
  if (DAT_5015ccdc + 0.5 < (float)piVar3[0xdc]) {
    if (piVar1[0x59] != 0) {
      iVar11 = 0;
      iVar10 = 0;
      uVar9 = 1;
      uVar8 = 0;
      piVar4 = piVar1;
      iVar6 = (*DAT_5015c9f8)(s_weapons_world_phosburn_501543f8);
      FUN_500853c0(&DAT_5015c518,iVar6,(int)piVar4,uVar8,uVar9,iVar10,iVar11);
    }
    piVar1[0xdb] = (int)(DAT_5015ccdc + 2.0);
    piVar1[0xdd] = piVar3[0xdd];
  }
  (*DAT_5015cb28)(piVar1);
  return;
}

