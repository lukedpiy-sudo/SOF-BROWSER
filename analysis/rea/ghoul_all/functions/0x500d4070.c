// rea decompile_all
// name: FUN_500d4070
// address: 0x500d4070
// body: available
// range: 0x500d4070-0x500d42e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500d4070(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 uStack_38;
  char cStack_37;
  float fStack_34;
  
  iVar4 = param_1;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  iStack_54 = 0;
  fStack_44 = *param_2;
  fStack_40 = param_2[1];
  fStack_3c = param_2[2];
  if ((*(uint *)(iVar5 + 0x194) & 0x40000) == 0) {
    iVar8 = iVar5 + 0x114;
    iVar6 = iVar5 + 0x108;
  }
  else {
    iVar8 = 0;
    iVar6 = 0;
  }
  pfVar1 = (float *)(param_1 + 4);
  (*DAT_5015cac0)(&fStack_44,iVar6,iVar8,pfVar1,param_1,3,&uStack_38);
  fStack_48 = fStack_3c;
  if (cStack_37 != '\0') {
    iVar8 = -1;
    param_1 = 100;
    do {
      do {
        do {
          do {
            iStack_54 = iStack_54 + 1;
            if (100 < iStack_54) {
              fStack_44 = *pfVar1;
              fStack_40 = *(float *)(iVar4 + 8);
              fStack_48 = *(float *)(iVar4 + 0xc);
              goto LAB_500d42c5;
            }
            iVar8 = iVar8 + 1;
            if (iVar8 == 0x12) {
              iVar8 = 0;
              param_1 = param_1 + 100;
            }
            fVar2 = (float)param_1;
            fStack_50 = fVar2 * (float)(&DAT_50129950)[iVar8 * 3] + fStack_44;
            fStack_4c = fVar2 * (float)(&DAT_50129954)[iVar8 * 3] + fStack_40;
            fStack_48 = fVar2 * (float)(&DAT_50129958)[iVar8 * 3] + fStack_3c;
          } while (*(int *)(iVar4 + 0x450) == 0);
          if ((((fStack_50 < DAT_501525c8) || (DAT_501525cc < fStack_50)) ||
              (fStack_4c < DAT_501525d0)) ||
             (((DAT_501525d4 < fStack_4c || (fStack_48 < DAT_501525d8)) ||
              (_DAT_501525dc < fStack_48)))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        } while (!bVar3);
        if ((*(uint *)(iVar5 + 0x194) & 0x40000) == 0) {
          iVar6 = iVar5 + 0x114;
          iVar7 = iVar5 + 0x108;
        }
        else {
          iVar6 = 0;
          iVar7 = 0;
        }
        (*DAT_5015cac0)(&fStack_50,iVar7,iVar6,pfVar1,iVar4,3,&uStack_38);
      } while (cStack_37 != '\0');
      if ((*(uint *)(iVar5 + 0x194) & 0x40000) == 0) {
        iVar6 = iVar5 + 0x114;
        iVar7 = iVar5 + 0x108;
      }
      else {
        iVar6 = 0;
        iVar7 = 0;
      }
      (*DAT_5015cac0)(pfVar1,iVar7,iVar6,&fStack_50,iVar4,3,&uStack_38);
    } while (fStack_34 == 0.0);
    fStack_44 = fStack_50;
    fStack_40 = fStack_4c;
  }
LAB_500d42c5:
  *param_3 = fStack_44;
  param_3[1] = fStack_40;
  param_3[2] = fStack_48;
  return;
}

