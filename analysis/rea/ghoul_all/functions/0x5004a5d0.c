// rea decompile_all
// name: FUN_5004a5d0
// address: 0x5004a5d0
// body: available
// range: 0x5004a5d0-0x5004a7bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5004a5d0(void *param_1,void *param_2,void *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *local_14;
  int *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_3 - (int)param_1;
    do {
      if (param_1 != param_3) {
        piVar7 = *(int **)((int)param_1 + 4);
        local_c = *(undefined4 **)((int)param_3 + 4);
        piVar4 = (int *)*piVar7;
        for (puVar1 = (undefined4 *)*local_c; (piVar4 != piVar7 && (puVar1 != local_c));
            puVar1 = (undefined4 *)*puVar1) {
          piVar6 = piVar4 + 2;
          piVar4 = (int *)*piVar4;
          piVar5 = puVar1 + 2;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          }
        }
        local_10 = piVar7;
        FUN_5005acf0(param_1,&local_8,piVar4,piVar7);
        FUN_5004aee0(param_1,(int)piVar7,puVar1,local_c);
      }
      if ((void *)((int)param_1 + 0xc) != (void *)((int)param_3 + 0xc)) {
        piVar7 = *(int **)((int)param_1 + 0x10);
        piVar4 = (int *)*piVar7;
        local_10 = piVar7;
        FUN_500fc2d0((void *)((int)param_3 + 0xc),&local_14);
        local_c = *(undefined4 **)((int)param_3 + 0x10);
        if (piVar4 != piVar7) {
          do {
            if (local_14 == local_c) break;
            piVar7 = piVar4 + 2;
            piVar4 = (int *)*piVar4;
            piVar6 = local_14 + 2;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            local_14 = (undefined4 *)*local_14;
            piVar7 = local_10;
          } while (piVar4 != local_10);
        }
        FUN_5005acf0((void *)((int)param_1 + 0xc),&local_4,piVar4,piVar7);
        FUN_5004aee0((void *)((int)param_1 + 0xc),(int)piVar7,local_14,local_c);
      }
      puVar1 = (undefined4 *)((int)param_1 + 0x18);
      iVar2 = 3;
      do {
        *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_3 + 0x24);
      *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)((int)param_3 + 0x28);
      *(undefined4 *)((int)param_1 + 0x2c) = *(undefined4 *)((int)param_3 + 0x2c);
      *(undefined4 *)((int)param_1 + 0x30) = *(undefined4 *)((int)param_3 + 0x30);
      *(undefined4 *)((int)param_1 + 0x34) = *(undefined4 *)((int)param_3 + 0x34);
      *(undefined4 *)((int)param_1 + 0x38) = *(undefined4 *)((int)param_3 + 0x38);
      puVar1 = (undefined4 *)((int)param_1 + 0x3c);
      iVar2 = 3;
      do {
        *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined4 *)((int)param_1 + 0x48) = *(undefined4 *)((int)param_3 + 0x48);
      *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)((int)param_3 + 0x4c);
      *(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)((int)param_3 + 0x50);
      *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)param_3 + 0x54);
      *(undefined4 *)((int)param_1 + 0x58) = *(undefined4 *)((int)param_3 + 0x58);
      *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_3 + 0x5c);
      FUN_5004ae20((void *)((int)param_1 + 0x60),(int)param_3 + 0x60);
      iVar2 = 3;
      puVar1 = (undefined4 *)((int)param_1 + 0x6c);
      do {
        iVar2 = iVar2 + -1;
        *puVar1 = *(undefined4 *)(iVar3 + -4 + (int)(puVar1 + 1));
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0);
      iVar2 = 3;
      puVar1 = (undefined4 *)((int)param_1 + 0x78);
      do {
        iVar2 = iVar2 + -1;
        *puVar1 = *(undefined4 *)(iVar3 + -4 + (int)(puVar1 + 1));
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0);
      *(undefined4 *)((int)param_1 + 0x84) = *(undefined4 *)((int)param_3 + 0x84);
      param_1 = (void *)((int)param_1 + 0x88);
      iVar3 = iVar3 + -0x88;
    } while (param_1 != param_2);
  }
  return;
}

