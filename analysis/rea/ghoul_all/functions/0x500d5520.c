// rea decompile_all
// name: FUN_500d5520
// address: 0x500d5520
// body: available
// range: 0x500d5520-0x500d56af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d5520(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  int *piVar6;
  
  piVar1 = *(int **)(param_1 + 0x450);
  iVar4 = (**(code **)(*piVar1 + 0x238))();
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  if (*(int *)(iVar4 + 0x58) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(iVar4 + 0x58) + 0x1c);
  }
  if (*(int *)(iVar4 + 0x5c) == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)(iVar4 + 0x5c) + 0x1c);
  }
  uVar3 = FUN_500d2180(param_1);
  if (CONCAT31(extraout_var,uVar3) != 0) {
    fVar2 = (*(float *)(param_1 + 0xc) - *(float *)(iVar4 + 0xe0)) * 0.44642857 * 10.0 * 0.01;
    if (fVar2 < 2.0) {
      fVar2 = 2.0;
    }
    *(float *)(iVar4 + 0x130) = fVar2;
    if (fVar2 <= ABS(*(float *)(param_1 + 0xc) - *(float *)(iVar4 + 0xe0))) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - fVar2;
    }
    else {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar4 + 0xd8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar4 + 0xdc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0xe0);
      if ((*(byte *)(iVar4 + 0x194) & 2) == 0) {
        if ((piVar5 != (int *)0x0) && (piVar6 != (int *)0x0)) {
          FUN_500b41d0(piVar5,s_rotor_end_50152af4,0);
          FUN_500b41d0(piVar6,s_rotor_end_50152af4,0);
          *(undefined4 *)(iVar4 + 0x178) = 0;
          *(uint *)(iVar4 + 0x194) = *(uint *)(iVar4 + 0x194) | 2;
          return;
        }
      }
      else if (*(int *)(iVar4 + 0x178) != 0) {
        if ((piVar5 != (int *)0x0) && (piVar6 != (int *)0x0)) {
          FUN_500b41d0(piVar5,s_rotor_50152610,0);
          FUN_500b41d0(piVar6,s_rotor_50152610,0);
          *(uint *)(iVar4 + 0x194) = *(uint *)(iVar4 + 0x194) & 0xfffffffd;
        }
        piVar1 = (int *)piVar1[99];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x90))(&LAB_500d56b0);
        }
        *(undefined4 *)(iVar4 + 0x130) = 0;
        return;
      }
    }
  }
  return;
}

