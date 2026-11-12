// rea decompile_all
// name: FUN_200be060
// address: 0x200be060
// body: available
// range: 0x200be060-0x200be2fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_200be060(int param_1)

{
  char cVar1;
  uint in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  char local_11;
  uint local_10;
  uint local_c;
  undefined1 *local_8 [2];
  
  local_c = in_ECX;
  FUN_200be390(&local_11,1);
  if (local_11 != '\0') {
    local_c = local_c & 0xffffff00;
    local_10 = 0;
    FUN_200be390(&local_11,1);
    if (local_11 != '\0') {
      FUN_200be390(&local_c,2);
      FUN_200be390(&local_10,(local_c & 0xff) * 4 + 4);
    }
    uVar2 = 0xffffffff;
    pcVar6 = (&PTR_DAT_2013adf8)[local_10 & 0xffff];
    pcVar8 = pcVar6;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_2000a6c0(uVar2,1);
    if (cVar1 != '\0') {
      pcVar8 = *(char **)(param_1 + 4);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(uint *)(param_1 + 8) = uVar2;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
    }
    return *(undefined1 *)(in_ECX + 0x14);
  }
  local_8[0] = (undefined1 *)((uint)local_8[0] & 0xffffff00);
  local_10 = local_10 & 0xffffff00;
  FUN_200be390(&local_11,1);
  if (local_11 != '\0') {
    FUN_200be390(local_8,2);
    FUN_200be390(&local_10,((uint)local_8[0] & 0xff) * 2 + 2);
  }
  FUN_200be390(&DAT_204062d0,(local_10 & 0xff) << 3);
  local_8[0] = &DAT_204061c8;
  if ((char)DAT_204062d0 == -1) {
    uVar2 = (local_10 & 0xff) - 1;
    puVar7 = (undefined4 *)((int)&DAT_204062d0 + 1);
    puVar10 = (undefined4 *)&DAT_204061c8;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  else {
    uVar3 = 0;
    iVar5 = ((local_10 & 0xff) * 8 - (DAT_204062d0 & 0xff)) + -8;
    uVar2 = 0;
    piVar9 = DAT_204063d4;
    if (0 < iVar5) {
      do {
        do {
          uVar4 = uVar3 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)((int)&DAT_204062d0 + ((int)(uVar3 + ((int)uVar3 >> 0x1f & 7U)) >> 3) + 1) &
              (byte)(1 << ((byte)uVar4 & 0x1f))) == 0) {
            piVar9 = (int *)*piVar9;
          }
          else {
            piVar9 = (int *)piVar9[1];
          }
          uVar3 = uVar3 + 1;
        } while (*piVar9 != 0);
        *local_8[0] = (char)piVar9[2];
        local_8[0] = local_8[0] + 1;
        uVar2 = uVar2 + 1;
        piVar9 = DAT_204063d4;
      } while ((int)uVar3 < iVar5);
    }
  }
  uVar3 = 0xffffffff;
  (&DAT_204061c8)[uVar2] = 0;
  pcVar6 = &DAT_204061c8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar3 - 1;
  if (0xfffffffd < uVar2) {
    FUN_201075d0();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 4) == 0) || (*(char *)(*(int *)(param_1 + 4) + -1) == '\0')) {
    if (uVar2 == 0) {
      FUN_2000a5b0(1);
      return *(undefined1 *)(local_c + 0x14);
    }
    if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar2 <= *(uint *)(param_1 + 0xc))) goto LAB_200be2cb;
    FUN_2000a5b0(1);
  }
  else if (uVar2 == 0) {
    FUN_2000a5b0(1);
    return *(undefined1 *)(local_c + 0x14);
  }
  FUN_2000a840(uVar2);
LAB_200be2cb:
  puVar7 = (undefined4 *)&DAT_204061c8;
  puVar10 = *(undefined4 **)(param_1 + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined1 *)(uVar2 + *(int *)(param_1 + 4)) = 0;
  return *(undefined1 *)(local_c + 0x14);
}

