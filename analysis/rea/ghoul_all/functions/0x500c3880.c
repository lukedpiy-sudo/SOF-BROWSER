// rea decompile_all
// name: FUN_500c3880
// address: 0x500c3880
// body: available
// range: 0x500c3880-0x500c39ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c3880(int *param_1)

{
  int *piVar1;
  undefined *puVar2;
  int *piVar3;
  int **ppiVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int *piStack_8;
  int *piStack_4;
  
  piVar3 = param_1;
  if ((param_1[0x68] & 0x800000U) != 0) {
    FUN_5006a7c0(&DAT_5015c7b8,(uint)param_1);
  }
  puVar2 = (undefined *)piVar3[0x84];
  if (puVar2 != (undefined *)0x0) {
    FUN_500b69a0((int)puVar2);
    FUN_50106b60(puVar2);
    piVar3[0x84] = 0;
  }
  FUN_500a5d30(&DAT_5015c79c,(int)piVar3);
  (*DAT_5015cb2c)(piVar3);
  piVar6 = (int *)piVar3[0x114];
  if (piVar6 != (int *)0x0) {
    if (piVar6 != (int *)0x0) {
      param_1 = piVar6;
      FUN_5006b100(&DAT_5018b440,(int *)&piStack_8,(uint *)&param_1);
      piVar6 = piStack_8;
      if (piStack_8 != DAT_5018b444) {
        piVar1 = piStack_8 + 4;
        piStack_4 = FUN_5000a3a0(&DAT_5018b454,piVar1);
        if ((piStack_4 == DAT_5018b458) || (*piVar1 < piStack_4[3])) {
          piStack_8 = DAT_5018b458;
          ppiVar4 = &piStack_8;
        }
        else {
          ppiVar4 = &piStack_4;
        }
        FUN_500c4640(&DAT_5018b454,&piStack_4,*ppiVar4);
        FUN_500c4640(&DAT_5018b440,&piStack_4,piVar6);
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 4))(1);
        }
      }
    }
    piVar3[0x114] = 0;
  }
  FUN_500b9d80((int)piVar3);
  iVar5 = (int)piVar3 - DAT_5015cca0;
  lVar7 = __ftol();
  if (iVar5 / 0x464 <= (int)lVar7 + 8) {
    piVar3[0xd] = 0;
    return;
  }
  piVar6 = piVar3;
  for (iVar5 = 0x119; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  piVar3[0x6d] = (int)s_freed_5014cf28;
  iVar5 = DAT_5015ccdc;
  piVar3[0x1e] = 0;
  piVar3[0x6a] = iVar5;
  return;
}

