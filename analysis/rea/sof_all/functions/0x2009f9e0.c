// rea decompile_all
// name: FUN_2009f9e0
// address: 0x2009f9e0
// body: available
// range: 0x2009f9e0-0x2009fc18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_2009f9e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  *(undefined1 *)in_ECX = *(undefined1 *)param_1;
  iVar4 = 0x11;
  *(undefined1 *)((int)in_ECX + 1) = *(undefined1 *)((int)param_1 + 1);
  puVar8 = param_1;
  puVar11 = in_ECX;
  while( true ) {
    puVar11 = puVar11 + 1;
    puVar8 = puVar8 + 1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    *puVar11 = *puVar8;
  }
  if (in_ECX + 0x12 != param_1 + 0x12) {
    puVar8 = (undefined4 *)param_1[0x13];
    if (puVar8 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (param_1[0x14] - (int)puVar8) / 0x44;
    }
    puVar11 = (undefined4 *)in_ECX[0x13];
    if (puVar11 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (in_ECX[0x14] - (int)puVar11) / 0x44;
    }
    if (uVar7 <= uVar5) {
      puVar10 = (undefined4 *)param_1[0x14];
      while (puVar8 != puVar10) {
        puVar1 = puVar8 + 0x11;
        puVar6 = puVar11 + 0x11;
        puVar9 = puVar8;
        puVar12 = puVar11;
        for (iVar4 = 0x11; puVar8 = puVar1, puVar11 = puVar6, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      if (param_1[0x13] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(param_1[0x14] - param_1[0x13]) / 0x44;
      }
      in_ECX[0x14] = in_ECX[0x13] + iVar4 * 0x44;
      return in_ECX;
    }
    if (puVar8 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (param_1[0x14] - (int)puVar8) / 0x44;
    }
    if (puVar11 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (in_ECX[0x15] - (int)puVar11) / 0x44;
    }
    if (uVar7 <= uVar5) {
      if (puVar11 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (in_ECX[0x14] - (int)puVar11) / 0x44;
      }
      puVar10 = puVar8 + iVar4 * 0x11;
      while (puVar8 != puVar10) {
        puVar1 = puVar8 + 0x11;
        puVar6 = puVar11 + 0x11;
        puVar9 = puVar8;
        puVar12 = puVar11;
        for (iVar4 = 0x11; puVar8 = puVar1, puVar11 = puVar6, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      puVar8 = (undefined4 *)param_1[0x14];
      iVar4 = in_ECX[0x14];
      for (; puVar10 != puVar8; puVar10 = puVar10 + 0x11) {
        FUN_20093840(iVar4,puVar10);
        iVar4 = iVar4 + 0x44;
      }
      if (param_1[0x13] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(param_1[0x14] - param_1[0x13]) / 0x44;
      }
      in_ECX[0x14] = in_ECX[0x13] + iVar4 * 0x44;
      return in_ECX;
    }
    FUN_200f9f75(puVar11);
    if (param_1[0x13] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(param_1[0x14] - param_1[0x13]) / 0x44;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    pvVar2 = operator_new(iVar4 * 0x44);
    in_ECX[0x13] = pvVar2;
    uVar3 = FUN_200937d0(param_1[0x13],param_1[0x14],pvVar2);
    in_ECX[0x14] = uVar3;
    in_ECX[0x15] = uVar3;
  }
  return in_ECX;
}

