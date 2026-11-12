// rea decompile_all
// name: FUN_5007ae90
// address: 0x5007ae90
// body: available
// range: 0x5007ae90-0x5007b17c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5007ae90(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  void *pvStack_4;
  
  cVar4 = (char)param_1;
  pvStack_4 = this;
  if ((*(int *)((int)this + 0x104) != 0) && (cVar4 != '\0')) {
    (*DAT_5015cb68)(*(int *)((int)this + 0x104));
    *(undefined4 *)((int)this + 0x104) = 0;
  }
  iVar3 = *(int *)((int)this + 0x130);
  while (iVar3 != 0) {
    piVar1 = (int *)**(undefined4 **)((int)this + 300);
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x130) + -1;
    *(int *)((int)this + 0x130) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x13c);
  while (iVar3 != 0) {
    iVar3 = **(int **)((int)this + 0x138);
    puVar2 = *(undefined4 **)(iVar3 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    param_1 = iVar3;
    puVar2 = (undefined4 *)FUN_50049a30(&param_1,&pvStack_4);
    piVar1 = (int *)*puVar2;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x13c) + -1;
    *(int *)((int)this + 0x13c) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x148);
  while (iVar3 != 0) {
    iVar3 = **(int **)((int)this + 0x144);
    puVar2 = *(undefined4 **)(iVar3 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    param_1 = iVar3;
    puVar2 = (undefined4 *)FUN_50049a30(&param_1,&pvStack_4);
    piVar1 = (int *)*puVar2;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x148) + -1;
    *(int *)((int)this + 0x148) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x160);
  while (iVar3 != 0) {
    piVar1 = (int *)**(undefined4 **)((int)this + 0x15c);
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x160) + -1;
    *(int *)((int)this + 0x160) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x154);
  while (iVar3 != 0) {
    iVar3 = **(int **)((int)this + 0x150);
    puVar2 = *(undefined4 **)(iVar3 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_50078a00(puVar2);
      FUN_50106b60((undefined *)puVar2);
    }
    param_1 = iVar3;
    puVar2 = (undefined4 *)FUN_50049a30(&param_1,&pvStack_4);
    piVar1 = (int *)*puVar2;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x154) + -1;
    *(int *)((int)this + 0x154) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x16c);
  while (iVar3 != 0) {
    piVar1 = (int *)**(undefined4 **)((int)this + 0x168);
    if ((undefined4 *)piVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar1[2])(1);
    }
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x16c) + -1;
    *(int *)((int)this + 0x16c) = iVar3;
  }
  iVar3 = *(int *)((int)this + 0x178);
  while (iVar3 != 0) {
    iVar3 = **(int **)((int)this + 0x174);
    puVar2 = *(undefined4 **)(iVar3 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    param_1 = iVar3;
    puVar2 = (undefined4 *)FUN_50049a30(&param_1,&pvStack_4);
    piVar1 = (int *)*puVar2;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    iVar3 = *(int *)((int)this + 0x178) + -1;
    *(int *)((int)this + 0x178) = iVar3;
  }
  piVar1 = *(int **)((int)this + 0x180);
  puVar2 = (undefined4 *)FUN_500fc2d0((void *)((int)this + 0x17c),&param_1);
  FUN_5005acf0((void *)((int)this + 0x17c),&pvStack_4,(int *)*puVar2,piVar1);
  puVar2 = (undefined4 *)((int)this + 0x318);
  iVar3 = 100;
  do {
    if ((undefined *)*puVar2 != (undefined *)0x0) {
      FUN_50106b60((undefined *)*puVar2);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_5007b180(this,cVar4);
  return;
}

