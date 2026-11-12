// rea decompile_all
// name: FUN_5004a3c0
// address: 0x5004a3c0
// body: available
// range: 0x5004a3c0-0x5004a5a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * __cdecl FUN_5004a3c0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *this;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  this = param_3;
  piVar4 = param_1;
  if (param_1 != param_2) {
    do {
      if (this != piVar4) {
        piVar2 = (int *)this[1];
        piVar8 = (int *)piVar4[1];
        piVar1 = (int *)*piVar2;
        for (param_3 = (int *)*piVar8; (piVar1 != piVar2 && (param_3 != piVar8));
            param_3 = (int *)*param_3) {
          piVar6 = piVar1 + 2;
          piVar1 = (int *)*piVar1;
          piVar5 = param_3 + 2;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          }
        }
        FUN_5005acf0(this,&local_8,piVar1,piVar2);
        FUN_5004aee0(this,(int)piVar2,param_3,piVar8);
      }
      if (this + 3 != piVar4 + 3) {
        piVar2 = (int *)this[4];
        piVar8 = (int *)*piVar2;
        param_3 = piVar8;
        FUN_500fc2d0(piVar4 + 3,&param_1);
        piVar1 = (int *)piVar4[4];
        for (; (piVar8 != piVar2 && (param_1 != piVar1)); param_1 = (int *)*param_1) {
          piVar6 = param_1 + 2;
          piVar8 = piVar8 + 2;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar8 = piVar8 + 1;
          }
          piVar8 = (int *)*param_3;
          param_3 = piVar8;
        }
        FUN_5005acf0(this + 3,&local_4,piVar8,piVar2);
        FUN_5004aee0(this + 3,(int)piVar2,param_1,piVar1);
      }
      piVar2 = this + 6;
      iVar7 = (int)piVar4 - (int)this;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)(iVar7 + (int)piVar2);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      this[9] = piVar4[9];
      this[10] = piVar4[10];
      this[0xb] = piVar4[0xb];
      this[0xc] = piVar4[0xc];
      this[0xd] = piVar4[0xd];
      this[0xe] = piVar4[0xe];
      piVar2 = this + 0xf;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar7);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      this[0x12] = piVar4[0x12];
      this[0x13] = piVar4[0x13];
      this[0x14] = piVar4[0x14];
      this[0x15] = piVar4[0x15];
      this[0x16] = piVar4[0x16];
      this[0x17] = piVar4[0x17];
      FUN_5004ae20(this + 0x18,(int)(piVar4 + 0x18));
      piVar2 = this + 0x1b;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar7);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar2 = this + 0x1e;
      iVar3 = 3;
      do {
        *piVar2 = *(int *)((int)piVar2 + iVar7);
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar2 = piVar4 + 0x22;
      this[0x21] = piVar4[0x21];
      this = this + 0x22;
      piVar4 = piVar2;
    } while (piVar2 != param_2);
    return this;
  }
  return param_3;
}

