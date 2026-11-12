// rea decompile_all
// name: FUN_200478c0
// address: 0x200478c0
// body: available
// range: 0x200478c0-0x20047a44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200478c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  float *pfVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint3 uVar6;
  int in_ECX;
  int *piVar7;
  float10 fVar8;
  char local_fc [50];
  char local_ca [50];
  char local_98 [100];
  char local_34 [52];
  
  local_98[0] = '\0';
  local_fc[0] = '\0';
  local_ca[0] = '\0';
  local_34[0] = '\0';
  FUN_20047550(param_1,param_2,local_98);
  uVar6 = extraout_var;
  if ((extraout_AL != '\0') && (local_98[0] != '\0')) {
    FUN_20047550(param_1,param_2,local_fc);
    uVar6 = extraout_var_00;
    if ((extraout_AL_00 != '\0') && (local_fc[0] != '\0')) {
      FUN_20047550(param_1,param_2,local_ca);
      uVar6 = extraout_var_01;
      if ((extraout_AL_01 != '\0') && (local_ca[0] != '\0')) {
        FUN_20047550(param_1,param_2,local_34);
        uVar6 = extraout_var_02;
        if ((extraout_AL_02 != '\0') && (local_34[0] != '\0')) {
          fVar8 = (float10)FUN_200fafcc(local_34);
          pfVar2 = operator_new(0xcc);
          pcVar3 = local_fc;
          do {
            cVar1 = *pcVar3;
            pcVar3[(int)pfVar2 + (4 - (int)local_fc)] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          pcVar3 = local_ca;
          do {
            cVar1 = *pcVar3;
            pcVar3[(int)pfVar2 + (0x36 - (int)local_ca)] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          pcVar3 = local_98;
          do {
            cVar1 = *pcVar3;
            pcVar3[(int)pfVar2 + (0x68 - (int)local_98)] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          *pfVar2 = (float)fVar8;
          iVar5 = *(int *)(in_ECX + 0x308);
          piVar7 = *(int **)(iVar5 + 4);
          piVar4 = operator_new(0xc);
          *piVar4 = iVar5;
          if (piVar7 == (int *)0x0) {
            piVar7 = piVar4;
          }
          piVar4[1] = (int)piVar7;
          *(int **)(iVar5 + 4) = piVar4;
          *(int **)piVar4[1] = piVar4;
          if (piVar4 + 2 != (int *)0x0) {
            piVar4[2] = (int)pfVar2;
          }
          iVar5 = *(int *)(in_ECX + 0x30c) + 1;
          *(int *)(in_ECX + 0x30c) = iVar5;
          return CONCAT31((int3)((uint)iVar5 >> 8),1);
        }
      }
    }
  }
  return (uint)uVar6 << 8;
}

