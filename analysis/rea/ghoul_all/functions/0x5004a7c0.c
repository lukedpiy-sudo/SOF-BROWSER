// rea decompile_all
// name: FUN_5004a7c0
// address: 0x5004a7c0
// body: available
// range: 0x5004a7c0-0x5004a9a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_5004a7c0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *this;
  int *piVar5;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_8;
  undefined4 local_4;
  int *piVar6;
  
  piVar4 = param_3;
  piVar5 = param_2;
  if (param_1 != param_2) {
    do {
      piVar6 = piVar5 + -0x22;
      this = piVar4 + -0x22;
      if (this != piVar6) {
        piVar2 = (int *)piVar4[-0x21];
        piVar10 = (int *)piVar5[-0x21];
        piVar1 = (int *)*piVar2;
        for (param_3 = (int *)*piVar10; (piVar1 != piVar2 && (param_3 != piVar10));
            param_3 = (int *)*param_3) {
          piVar8 = piVar1 + 2;
          piVar1 = (int *)*piVar1;
          piVar7 = param_3 + 2;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          }
        }
        FUN_5005acf0(this,&local_8,piVar1,piVar2);
        FUN_5004aee0(this,(int)piVar2,param_3,piVar10);
      }
      if (piVar4 + -0x1f != piVar5 + -0x1f) {
        piVar2 = (int *)piVar4[-0x1e];
        piVar10 = (int *)*piVar2;
        param_3 = piVar10;
        FUN_500fc2d0(piVar5 + -0x1f,&param_2);
        piVar1 = (int *)piVar5[-0x1e];
        for (; (piVar10 != piVar2 && (param_2 != piVar1)); param_2 = (int *)*param_2) {
          piVar8 = param_2 + 2;
          piVar10 = piVar10 + 2;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar10 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar10 = piVar10 + 1;
          }
          piVar10 = (int *)*param_3;
          param_3 = piVar10;
        }
        FUN_5005acf0(piVar4 + -0x1f,&local_4,piVar10,piVar2);
        FUN_5004aee0(piVar4 + -0x1f,(int)piVar2,param_2,piVar1);
      }
      piVar2 = piVar4 + -0x1c;
      iVar9 = (int)piVar6 - (int)this;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)(iVar9 + (int)piVar2);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar4[-0x19] = piVar5[-0x19];
      piVar4[-0x18] = piVar5[-0x18];
      piVar4[-0x17] = piVar5[-0x17];
      piVar4[-0x16] = piVar5[-0x16];
      piVar4[-0x15] = piVar5[-0x15];
      piVar4[-0x14] = piVar5[-0x14];
      piVar2 = piVar4 + -0x13;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar9);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar4[-0x10] = piVar5[-0x10];
      piVar4[-0xf] = piVar5[-0xf];
      piVar4[-0xe] = piVar5[-0xe];
      piVar4[-0xd] = piVar5[-0xd];
      piVar4[-0xc] = piVar5[-0xc];
      piVar4[-0xb] = piVar5[-0xb];
      FUN_5004ae20(piVar4 + -10,(int)(piVar5 + -10));
      piVar2 = piVar4 + -7;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar9);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar2 = piVar4 + -4;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar9);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar4[-1] = piVar5[-1];
      piVar4 = this;
      piVar5 = piVar6;
    } while (piVar6 != param_1);
    return this;
  }
  return param_3;
}

