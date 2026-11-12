// rea decompile_all
// name: FUN_5004ab80
// address: 0x5004ab80
// body: available
// range: 0x5004ab80-0x5004adc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_5004ab80(void *this,void *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *local_c;
  undefined4 *local_8;
  int local_4;
  
  if (this != param_1) {
    piVar1 = *(int **)((int)this + 4);
    puVar6 = *(undefined4 **)((int)param_1 + 4);
    piVar2 = (int *)*piVar1;
    for (local_c = (undefined4 *)*puVar6;
        (local_8 = puVar6, piVar2 != piVar1 && (local_c != puVar6));
        local_c = (undefined4 *)*local_c) {
      piVar10 = piVar2 + 2;
      piVar2 = (int *)*piVar2;
      piVar8 = local_c + 2;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar10 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      }
    }
    while (puVar3 = local_c, piVar2 != piVar1) {
      piVar10 = (int *)*piVar2;
      FUN_500499f0(this,(int *)&local_8,piVar2);
      piVar2 = piVar10;
    }
    for (; puVar3 != puVar6; puVar3 = (undefined4 *)*puVar3) {
      FUN_5004add0(this,&local_8,(int)piVar1,puVar3 + 2);
    }
  }
  if ((int)this + 0xc != (int)param_1 + 0xc) {
    puVar6 = *(undefined4 **)((int)this + 0x10);
    puVar3 = *(undefined4 **)((int)param_1 + 0x10);
    local_8 = (undefined4 *)*puVar6;
    for (puVar4 = (undefined4 *)*puVar3; (local_c = puVar4, local_8 != puVar6 && (puVar4 != puVar3))
        ; puVar4 = (undefined4 *)*puVar4) {
      puVar5 = local_8 + 2;
      local_8 = (undefined4 *)*local_8;
      puVar9 = puVar4 + 2;
      for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    while (local_8 != puVar6) {
      puVar5 = (undefined4 *)FUN_50049a30(&local_8,&local_c);
      FUN_500499f0((void *)((int)this + 0xc),&local_4,(int *)*puVar5);
    }
    FUN_5004aee0((void *)((int)this + 0xc),(int)puVar6,puVar4,puVar3);
  }
  puVar6 = (undefined4 *)((int)this + 0x18);
  iVar11 = (int)param_1 - (int)this;
  iVar7 = 3;
  do {
    *puVar6 = *(undefined4 *)(iVar11 + (int)puVar6);
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)((int)param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)param_1 + 0x38);
  puVar6 = (undefined4 *)((int)this + 0x3c);
  iVar7 = 3;
  do {
    *puVar6 = *(undefined4 *)((int)puVar6 + iVar11);
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)param_1 + 0x5c);
  if ((void *)((int)this + 0x60) != (void *)((int)param_1 + 0x60)) {
    piVar1 = *(int **)((int)this + 100);
    piVar2 = (int *)*piVar1;
    FUN_500fc2d0((void *)((int)param_1 + 0x60),&local_c);
    local_8 = *(undefined4 **)((int)param_1 + 100);
    for (; (piVar2 != piVar1 && (local_c != local_8)); local_c = (undefined4 *)*local_c) {
      piVar2[2] = local_c[2];
      piVar2 = (int *)*piVar2;
    }
    FUN_5005acf0((void *)((int)this + 0x60),&local_4,piVar2,piVar1);
    FUN_5004af50((void *)((int)this + 0x60),(int)piVar1,local_c,local_8);
  }
  puVar6 = (undefined4 *)((int)this + 0x6c);
  iVar7 = 3;
  do {
    *puVar6 = *(undefined4 *)((int)puVar6 + iVar11);
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar6 = (undefined4 *)((int)this + 0x78);
  iVar7 = 3;
  do {
    *puVar6 = *(undefined4 *)(iVar11 + (int)puVar6);
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)param_1 + 0x84);
  return this;
}

