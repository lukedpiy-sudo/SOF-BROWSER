// rea decompile_all
// name: FUN_5003d500
// address: 0x5003d500
// body: available
// range: 0x5003d500-0x5003d6a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003d500(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puStack_18;
  
  iVar5 = *(int *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0xa8) = 1;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  if (iVar5 != 0) {
    if (*(float *)(DAT_5015c8bc + 0x18) != 0.0) {
      (*DAT_5015ca24)(s_Finishing_pathpoint__time__f_5014247c,(double)DAT_5015ccdc);
    }
    if (*(float *)(DAT_5015c8bc + 0x18) != 0.0) {
      (*DAT_5015ca24)(s__d_getting_next_point__old___s__l_50142448,*param_2,
                      *(undefined4 *)(*(int *)((int)this + 0x60) + 0x1c8));
    }
    iVar3 = FUN_500af0c0(*(int *)((int)this + 0x60));
    if (iVar3 != 0) {
      *(int *)((int)this + 0xb4) = iVar3;
    }
    iVar3 = *(int *)((int)this + 0x60);
    if (*(int *)(iVar3 + 0x1dc) != 0) {
      uVar1 = *(undefined4 *)(iVar3 + 0x1c4);
      *(int *)(iVar3 + 0x1c4) = *(int *)(iVar3 + 0x1dc);
      (**(code **)(*param_1 + 0x13c))(0xffffffff);
      if (puStack_18 == (undefined4 *)0x0) {
        piVar6 = *(int **)((int)this + 0x60);
        puStack_18 = param_2;
      }
      else {
        piVar6 = *(int **)((int)this + 0x60);
      }
      FUN_500c2f80(piVar6,(int)puStack_18);
      *(undefined4 *)(*(int *)((int)this + 0x60) + 0x1c4) = uVar1;
    }
    pcVar2 = *(char **)(*(int *)((int)this + 0x60) + 0x1c4);
    if (pcVar2 == (char *)0x0) {
      *(undefined4 *)((int)this + 0x60) = 0;
    }
    else {
      uVar4 = FUN_500c2e80(pcVar2);
      *(uint *)((int)this + 0x60) = uVar4;
    }
    iVar3 = *(int *)((int)this + 0x60);
    if (iVar3 != 0) {
      *(float *)((int)this + 0x2c) = *(float *)(iVar3 + 4) - (float)param_2[1];
      *(float *)((int)this + 0x30) = *(float *)(iVar3 + 8) - (float)param_2[2];
      *(float *)((int)this + 0x34) = *(float *)(iVar3 + 0xc) - (float)param_2[3];
      FUN_500fe050((float *)((int)this + 0x2c));
      return;
    }
    if ((*(byte *)(iVar5 + 0x1b8) & 1) != 0) {
      iVar5 = __strcmpi(*(char **)(iVar5 + 0x1b4),s_path_corner_5014243c);
      if (iVar5 != 0) {
        param_2[0x6e] = param_2[0x6e] | 0x80;
        param_2[0x68] = param_2[0x68] | 0x800;
      }
    }
  }
  return;
}

