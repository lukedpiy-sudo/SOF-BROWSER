// rea decompile_all
// name: FUN_5004bd20
// address: 0x5004bd20
// body: available
// range: 0x5004bd20-0x5004beb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004bd20(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  float10 fVar9;
  
  piVar1 = param_1;
  uVar2 = FUN_50043fe0(param_1);
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  uVar2 = FUN_50043fe0(param_1);
  *(undefined4 *)this = uVar2;
  FUN_50043fb0(param_1,(undefined4 *)((int)this + 4));
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) + 14.0;
  if ((*(uint *)((int)this + 0x2c) & 0x18005) != 0) {
    iVar3 = FUN_50043fe0(param_1);
    *(int *)((int)this + 0x10) = iVar3;
    pvVar4 = operator_new(iVar3 * 0xc);
    *(void **)((int)this + 0x14) = pvVar4;
    pvVar4 = operator_new(param_2);
    *(void **)((int)this + 0x20) = pvVar4;
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x10)) {
      param_1 = (int *)0x0;
      do {
        puVar8 = (undefined4 *)(*(int *)((int)this + 0x14) + (int)param_1);
        uVar2 = FUN_50043fe0(piVar1);
        *puVar8 = uVar2;
        fVar9 = FUN_50043fa0(piVar1);
        puVar8[1] = (float)fVar9;
        uVar2 = FUN_50043fe0(piVar1);
        puVar8[2] = uVar2;
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 3;
      } while (iVar3 < *(int *)((int)this + 0x10));
    }
    puVar8 = (undefined4 *)*piVar1;
    puVar5 = *(undefined4 **)((int)this + 0x20);
    for (uVar6 = param_2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar6 = param_2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *piVar1 = *piVar1 + param_2;
    uVar6 = param_2 * 2;
    puVar5 = operator_new(uVar6);
    *(undefined4 **)((int)this + 0x24) = puVar5;
    puVar8 = (undefined4 *)*piVar1;
    for (uVar7 = (param_2 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *piVar1 = *piVar1 + uVar6;
    iVar3 = FUN_50043fe0(piVar1);
    *(int *)((int)this + 0x18) = iVar3;
    pvVar4 = operator_new(iVar3 * 0xc);
    *(void **)((int)this + 0x1c) = pvVar4;
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x18)) {
      param_2 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)((int)this + 0x1c) + param_2);
        uVar2 = FUN_50043fe0(piVar1);
        *puVar8 = uVar2;
        fVar9 = FUN_50043fa0(piVar1);
        puVar8[1] = (float)fVar9;
        uVar2 = FUN_50043fe0(piVar1);
        puVar8[2] = uVar2;
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 0xc;
      } while (iVar3 < *(int *)((int)this + 0x18));
    }
    fVar9 = FUN_50043fa0(piVar1);
    *(float *)((int)this + 0x28) = (float)fVar9;
    uVar2 = FUN_50043fe0(piVar1);
    *(undefined4 *)((int)this + 0x30) = uVar2;
    uVar2 = FUN_50043fe0(piVar1);
    *(undefined4 *)((int)this + 0x34) = uVar2;
    uVar2 = FUN_50043fe0(piVar1);
    *(undefined4 *)((int)this + 0x44) = uVar2;
    fVar9 = FUN_50043fa0(piVar1);
    *(float *)((int)this + 0x48) = (float)fVar9;
    fVar9 = FUN_50043fa0(piVar1);
    *(float *)((int)this + 0x4c) = (float)fVar9;
  }
  return;
}

