// rea decompile_all
// name: FUN_500d4950
// address: 0x500d4950
// body: available
// range: 0x500d4950-0x500d4bfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500d4950(int param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float afStack_44 [3];
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar3 = *(int **)(param_1 + 0x450);
  iVar5 = (**(code **)(*piVar3 + 0x238))();
  FUN_500fdd70((float *)(param_1 + 0x10),afStack_44,&fStack_5c,(float *)0x0);
  fStack_48 = fStack_54 * param_2;
  if (param_2 < 0.0) {
    uVar6 = *(uint *)(iVar5 + 0x194) | 4;
  }
  else {
    uVar6 = *(uint *)(iVar5 + 0x194) & 0xfffffffb;
  }
  pfVar1 = (float *)(param_1 + 4);
  *(uint *)(iVar5 + 0x194) = uVar6;
  pfVar2 = (float *)(iVar5 + 0xc0);
  *pfVar2 = fStack_5c * param_2 + *pfVar1;
  *(float *)(iVar5 + 0xc4) = fStack_58 * param_2 + *(float *)(param_1 + 8);
  *(float *)(iVar5 + 200) = fStack_48 + *(float *)(param_1 + 0xc);
  *(float *)(iVar5 + 0xb4) = *pfVar1;
  *(undefined4 *)(iVar5 + 0xb8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x450) != 0) {
    if ((((*pfVar2 < DAT_501525c8) || (DAT_501525cc < *pfVar2)) ||
        (*(float *)(iVar5 + 0xc4) < DAT_501525d0)) ||
       (((DAT_501525d4 < *(float *)(iVar5 + 0xc4) || (*(float *)(iVar5 + 200) < DAT_501525d8)) ||
        (_DAT_501525dc < *(float *)(iVar5 + 200))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_500d4b6e;
  }
  iVar8 = 0;
  do {
    *pfVar2 = (*pfVar2 - *pfVar1) * 0.5 + *pfVar1;
    *(float *)(iVar5 + 0xc4) =
         (*(float *)(iVar5 + 0xc4) - *(float *)(param_1 + 8)) * 0.5 + *(float *)(param_1 + 8);
    *(float *)(iVar5 + 200) =
         (*(float *)(iVar5 + 200) - *(float *)(param_1 + 0xc)) * 0.5 + *(float *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x450) != 0) {
      if (((*pfVar2 < DAT_501525c8) || (DAT_501525cc < *pfVar2)) ||
         ((*(float *)(iVar5 + 0xc4) < DAT_501525d0 ||
          (((DAT_501525d4 < *(float *)(iVar5 + 0xc4) || (*(float *)(iVar5 + 200) < DAT_501525d8)) ||
           (_DAT_501525dc < *(float *)(iVar5 + 200))))))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  if (iVar8 == 10) {
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
    piVar3[0x9c] = 1;
    return;
  }
LAB_500d4b6e:
  if ((*(uint *)(iVar5 + 0x194) & 0x40000) == 0) {
    iVar8 = iVar5 + 0x114;
    iVar7 = iVar5 + 0x108;
  }
  else {
    iVar8 = 0;
    iVar7 = 0;
  }
  (*DAT_5015cac0)(pfVar1,iVar7,iVar8,pfVar2,param_1,3,auStack_38);
  if (fStack_34 < 1.0) {
    *pfVar2 = fStack_30;
    *(undefined4 *)(iVar5 + 0xc4) = uStack_2c;
    *(undefined4 *)(iVar5 + 200) = uStack_28;
  }
  if ((int *)piVar3[99] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[99] + 0x90))(&LAB_500d4f70);
  }
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

