// rea decompile_all
// name: FUN_500d72d0
// address: 0x500d72d0
// body: available
// range: 0x500d72d0-0x500d73aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500d72d0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
  piVar5 = (int *)0x0;
  if ((((*(float *)(iVar2 + 0x1a4) <= DAT_5015ccdc) || (iVar3 = *(int *)(iVar2 + 0x1a0), iVar3 == 0)
       ) || (*(int *)(iVar3 + 0x78) == 0)) || (*(int *)(iVar3 + 0x30c) == 0)) {
    fVar1 = DAT_5015ccdc + 30.0;
    *(undefined4 *)(iVar2 + 0x1a0) = 0;
    iVar3 = 1;
    *(float *)(iVar2 + 0x1a4) = fVar1;
    piVar4 = (int *)(DAT_5015cca0 + 0x4dc);
    do {
      if (piVar4[-1] == 0) break;
      if ((*piVar4 != 0) && (piVar4[0xa5] != 0)) {
        if (piVar5 == (int *)0x0) {
          param_1 = iVar3;
          piVar5 = piVar4 + -0x1e;
        }
        if (*(int *)(iVar2 + 0x198) < iVar3) {
          *(int *)(iVar2 + 0x198) = iVar3;
          *(int **)(iVar2 + 0x1a0) = piVar4 + -0x1e;
          break;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x119;
    } while (iVar3 < 0x21);
    if (piVar5 != (int *)0x0) {
      *(int *)(iVar2 + 0x198) = param_1;
      *(int **)(iVar2 + 0x1a0) = piVar5;
    }
    iVar3 = *(int *)(iVar2 + 0x1a0);
  }
  return iVar3;
}

