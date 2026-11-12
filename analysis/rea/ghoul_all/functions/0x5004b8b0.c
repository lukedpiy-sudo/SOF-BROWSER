// rea decompile_all
// name: FUN_5004b8b0
// address: 0x5004b8b0
// body: available
// range: 0x5004b8b0-0x5004bb76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5004b8b0(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  float10 fVar15;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  piVar1 = param_1;
  iVar8 = 0;
  iVar14 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar11 = *(int *)((int)this + 0xc) + iVar8;
      FUN_50106b60(*(undefined **)(iVar11 + 4));
      *(undefined4 *)(iVar11 + 4) = 0;
      iVar14 = iVar14 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar14 < *(int *)((int)this + 8));
  }
  FUN_50106b60(*(undefined **)((int)this + 0xc));
  *(undefined4 *)((int)this + 8) = 0;
  FUN_50106b60(*(undefined **)((int)this + 4));
  FUN_50106b60(*(undefined **)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar5 = FUN_50043fe0(param_1);
  *(undefined4 *)this = uVar5;
  uVar5 = FUN_50043fe0(param_1);
  *(undefined4 *)((int)this + 8) = uVar5;
  pvVar6 = operator_new(*(int *)this * 0x38);
  iVar8 = *(int *)((int)this + 8);
  *(void **)((int)this + 4) = pvVar6;
  pvVar6 = operator_new(iVar8 * 0xc);
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else if (-1 < iVar8 + -1) {
    puVar10 = (undefined4 *)((int)pvVar6 + 8);
    do {
      puVar10[-2] = 0;
      puVar10[-1] = 0;
      *puVar10 = 0;
      puVar10 = puVar10 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(void **)((int)this + 0xc) = pvVar6;
  local_c = 0;
  if (0 < *(int *)((int)this + 8)) {
    local_1c = 0;
    do {
      piVar12 = (int *)(*(int *)((int)this + 0xc) + local_1c);
      fVar15 = FUN_50043fa0(piVar1);
      piVar12[2] = (int)(float)fVar15;
      iVar8 = FUN_50043fe0(piVar1);
      *piVar12 = iVar8;
      pvVar6 = operator_new(iVar8 * 0xc);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else if (-1 < iVar8 + -1) {
        puVar10 = (undefined4 *)((int)pvVar6 + 8);
        do {
          puVar10[-2] = 0;
          puVar10[-1] = 0;
          *puVar10 = 0;
          puVar10 = puVar10 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      piVar12[1] = (int)pvVar6;
      local_10 = 0;
      if (0 < *piVar12) {
        local_20 = 0;
        do {
          piVar9 = (int *)(piVar12[1] + local_20);
          fVar15 = FUN_50043fa0(piVar1);
          piVar9[2] = (int)(float)fVar15;
          iVar8 = FUN_50043fe0(piVar1);
          *piVar9 = iVar8;
          DAT_50159158 = DAT_50159158 + iVar8;
          piVar9[1] = DAT_5015914c + (DAT_50159158 - iVar8) * 0x38;
          local_14 = 0;
          if (0 < *piVar9) {
            param_1 = (int *)0x0;
            do {
              puVar13 = (undefined4 *)(piVar9[1] + (int)param_1);
              FUN_50043fb0(piVar1,puVar13);
              bVar2 = FUN_50044000(piVar1);
              puVar13[3] = (uint)bVar2;
              sVar3 = FUN_50043ff0(piVar1);
              puVar13[4] = (int)sVar3;
              puVar10 = puVar13 + 5;
              local_18 = 0xc;
              do {
                uVar4 = FUN_50043ff0(piVar1);
                *(undefined2 *)puVar10 = uVar4;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
                local_18 = local_18 + -1;
              } while (local_18 != 0);
              puVar10 = puVar13 + 0xc;
              local_18 = 4;
              do {
                uVar4 = FUN_50043ff0(piVar1);
                *(undefined2 *)puVar10 = uVar4;
                puVar10 = (undefined4 *)((int)puVar10 + 2);
                local_18 = local_18 + -1;
              } while (local_18 != 0);
              fVar15 = FUN_50043fa0(piVar1);
              puVar13[0xb] = (float)fVar15;
              local_14 = local_14 + 1;
              param_1 = param_1 + 0xe;
            } while (local_14 < *piVar9);
          }
          local_10 = local_10 + 1;
          local_20 = local_20 + 0xc;
        } while (local_10 < *piVar12);
      }
      local_c = local_c + 1;
      local_1c = local_1c + 0xc;
    } while (local_c < *(int *)((int)this + 8));
  }
  iVar8 = ((int)(*(int *)this + (*(int *)this >> 0x1f & 0xfU)) >> 4) + 1;
  *(int *)((int)this + 0x14) = iVar8;
  puVar10 = operator_new(iVar8 * 4);
  *(undefined4 **)((int)this + 0x18) = puVar10;
  for (uVar7 = *(uint *)((int)this + 0x14) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar10 = 0;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  return;
}

