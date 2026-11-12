// rea decompile_all
// name: FUN_500a4de0
// address: 0x500a4de0
// body: available
// range: 0x500a4de0-0x500a4f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a4de0(void *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int **ppiVar6;
  ushort uVar7;
  int *piStack_c;
  int *apiStack_8 [2];
  
  if ((*(int *)((int)param_1 + 0x24) != 0) && (*(char *)((int)param_1 + 0x28) == '\0')) {
    puVar4 = FUN_500a5110(param_1,0);
    fVar1 = *(float *)(DAT_5015d9b0 + 0x18);
    uVar7 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe;
    if ((fVar1 < 0.0 || (fVar1 == 0.0) != 0) ||
       (fVar1 = *(float *)(DAT_5015d2b8 + 0x18),
       uVar7 = (ushort)(fVar1 < 0.0) << 8 | (ushort)(fVar1 == 0.0) << 0xe,
       fVar1 < 0.0 || (fVar1 == 0.0) != 0)) {
      uVar5 = (uint)uVar7;
    }
    else {
      uVar5 = CONCAT31((uint3)(byte)(uVar7 >> 8),1);
    }
    (**(code **)(**(int **)((int)param_1 + 0x24) + 8))(uVar5);
    uVar5 = puVar4[3];
    FUN_500c7d40((void *)((int)param_1 + 4),(int *)&piStack_c,(uint *)&stack0xfffffff0);
    if ((piStack_c == *(int **)((int)param_1 + 8)) || (uVar5 < (uint)piStack_c[3])) {
      apiStack_8[0] = *(int **)((int)param_1 + 8);
      ppiVar6 = apiStack_8;
    }
    else {
      ppiVar6 = &piStack_c;
    }
    piVar2 = *ppiVar6;
    if (piVar2 != *(int **)((int)param_1 + 8)) {
      if ((int *)piVar2[4] != (int *)0x0) {
        piStack_c = (int *)piVar2[4];
        FUN_5006b100(&DAT_5018b4b8,(int *)apiStack_8,(uint *)&piStack_c);
        piVar3 = apiStack_8[0];
        if (apiStack_8[0] != DAT_5018b4bc) {
          FUN_5006b1a0(&DAT_5018b4cc,(int *)apiStack_8,apiStack_8[0] + 4);
          FUN_500c4640(&DAT_5018b4cc,apiStack_8,apiStack_8[0]);
          FUN_500a6c30(&DAT_5018b4b8,apiStack_8,piVar3);
          if (piStack_c != (int *)0x0) {
            FUN_500a4dc0(piStack_c,1);
          }
        }
      }
      piVar2[4] = 0;
      FUN_500c4640((void *)((int)param_1 + 4),apiStack_8,piVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x28) = 1;
  return;
}

