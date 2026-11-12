// rea decompile_all
// name: FUN_501008f0
// address: 0x501008f0
// body: available
// range: 0x501008f0-0x50100b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_501008f0(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float fStack00000004;
  float fStack00000008;
  int iStack0000000c;
  float fStack00000010;
  float fStack00000014;
  float fStack00000018;
  float fStack0000001c;
  float fStack00000020;
  float fStack00000024;
  int in_stack_00001028;
  undefined4 *in_stack_00001030;
  float *in_stack_00001034;
  undefined4 in_stack_00001038;
  
  FUN_501074f0();
  fVar2 = (float)in_stack_00001030[1];
  fStack00000004 = (float)in_stack_00001030[2];
  fStack00000008 = (float)in_stack_00001030[3];
  FUN_500c2990(&stack0x00000028,(float *)&stack0x00000000,800.0,1,in_stack_00001038,0);
  fStack0000001c = *in_stack_00001034 - fVar2;
  fStack00000020 = in_stack_00001034[1] - fStack00000004;
  fStack00000024 = in_stack_00001034[2] - fStack00000008;
  FUN_500fe050(&stack0x0000001c);
  iStack0000000c = 0;
  if (0 < in_stack_00001028) {
    do {
      piVar1 = (int *)(&stack0x00000028 + iStack0000000c * 4);
      iVar5 = *(int *)(&stack0x00000028 + iStack0000000c * 4);
      if (*(int *)(iVar5 + 0x450) != 0) {
        fStack00000010 = *(float *)(iVar5 + 4) - fVar2;
        fStack00000014 = *(float *)(iVar5 + 8) - fStack00000004;
        fStack00000018 = *(float *)(iVar5 + 0xc) - fStack00000008;
        FUN_500fe050(&stack0x00000010);
        fVar3 = fStack00000010 * fStack0000001c +
                fStack00000014 * fStack00000020 + fStack00000018 * fStack00000024;
        if (fVar3 <= 0.9397) {
          if ((0.0 < fVar3) &&
             ((iVar5 = (*DAT_5015cad0)(*piVar1 + 4,&stack0x00000000), iVar5 != 0 ||
              (iVar5 = (*DAT_5015cad0)(*piVar1 + 4,in_stack_00001034), iVar5 != 0)))) {
            (**(code **)(**(int **)(*piVar1 + 0x450) + 0x8c))
                      (&stack0x00000000,in_stack_00001034,*in_stack_00001030);
          }
        }
        else {
          iVar5 = *piVar1;
          iVar6 = 10;
          bVar9 = true;
          pcVar7 = *(char **)(iVar5 + 0x1b4);
          pcVar8 = s_m_x_mmerc_50133614;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if ((!bVar9) || (DAT_5015ccdc - _DAT_5018c2a0 <= 10.0)) {
            (**(code **)(**(int **)(iVar5 + 0x450) + 0x88))
                      (&stack0x00000000,in_stack_00001034,*in_stack_00001030);
          }
          else {
            _DAT_5018c2a0 = DAT_5015ccdc;
            uVar4 = (*DAT_5015c9f4)(s_impact_Hawk_LookOut_adp_501538a0,0x3f666666,0x3e99999a,0,0);
            (*DAT_5015ca48)(iVar5,2,uVar4);
          }
        }
      }
      iStack0000000c = iStack0000000c + 1;
    } while (iStack0000000c < in_stack_00001028);
  }
  return;
}

