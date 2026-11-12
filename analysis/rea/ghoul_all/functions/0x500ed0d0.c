// rea decompile_all
// name: FUN_500ed0d0
// address: 0x500ed0d0
// body: available
// range: 0x500ed0d0-0x500ed3d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500ed0d0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  
  if (((uint)param_1[0x10] & 1) != 0) {
    for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(float *)this = *param_2;
      param_2 = param_2 + 1;
      this = (float *)((int)this + 4);
    }
    return;
  }
  if (((uint)param_2[0x10] & 1) != 0) {
    for (iVar19 = 0x11; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(float *)this = *param_1;
      param_1 = param_1 + 1;
      this = (float *)((int)this + 4);
    }
    return;
  }
  fVar1 = *param_1;
  fVar2 = param_2[3];
  fVar3 = param_1[1];
  fVar4 = param_2[7];
  fVar5 = param_1[2];
  fVar6 = param_2[0xb];
  fVar7 = param_1[3];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[3];
  fVar17 = param_2[0xd];
  fVar18 = param_1[3];
  *(float *)((int)this + 8) =
       param_2[0xe] * param_1[3] + param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  *(float *)((int)this + 4) = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  *(float *)this = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  *(float *)((int)this + 0xc) = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[4];
  fVar2 = param_2[3];
  fVar3 = param_1[5];
  fVar4 = param_2[7];
  fVar5 = param_1[6];
  fVar6 = param_2[0xb];
  fVar7 = param_1[7];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[7];
  fVar17 = param_2[0xd];
  fVar18 = param_1[7];
  *(float *)((int)this + 0x18) =
       param_2[0xe] * param_1[7] + param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  *(float *)((int)this + 0x14) = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  *(float *)((int)this + 0x10) = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  *(float *)((int)this + 0x1c) = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[8];
  fVar2 = param_2[3];
  fVar3 = param_1[9];
  fVar4 = param_2[7];
  fVar5 = param_1[10];
  fVar6 = param_2[0xb];
  fVar7 = param_1[0xb];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[0xb];
  fVar17 = param_2[0xd];
  fVar18 = param_1[0xb];
  *(float *)((int)this + 0x28) =
       param_2[0xe] * param_1[0xb] + param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  *(float *)((int)this + 0x24) = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  *(float *)((int)this + 0x20) = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  *(float *)((int)this + 0x2c) = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  fVar1 = param_1[0xc];
  fVar2 = param_2[3];
  fVar3 = param_1[0xd];
  fVar4 = param_2[7];
  fVar5 = param_1[0xe];
  fVar6 = param_2[0xb];
  fVar7 = param_1[0xf];
  fVar8 = param_2[0xf];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[4];
  fVar12 = param_2[5];
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[0xc];
  fVar16 = param_1[0xf];
  fVar17 = param_2[0xd];
  fVar18 = param_1[0xf];
  *(float *)((int)this + 0x38) =
       param_2[0xe] * param_1[0xf] + param_2[10] * fVar5 + param_2[2] * fVar1 + param_2[6] * fVar3;
  *(float *)((int)this + 0x34) = fVar17 * fVar18 + fVar14 * fVar5 + fVar12 * fVar3 + fVar10 * fVar1;
  *(float *)((int)this + 0x30) = fVar15 * fVar16 + fVar13 * fVar5 + fVar11 * fVar3 + fVar9 * fVar1;
  *(float *)((int)this + 0x3c) = fVar7 * fVar8 + fVar6 * fVar5 + fVar4 * fVar3 + fVar2 * fVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}

