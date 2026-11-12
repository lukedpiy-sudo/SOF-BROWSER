// rea decompile_all
// name: FUN_2002d5c0
// address: 0x2002d5c0
// body: available
// range: 0x2002d5c0-0x2002d725 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002d5c0(void)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  char *pcVar10;
  uint uVar11;
  char local_220 [7];
  undefined1 local_219;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_212;
  undefined1 local_20e;
  undefined1 local_20b;
  undefined1 local_20a;
  byte local_204;
  undefined3 uStack_203;
  undefined4 local_200 [63];
  undefined1 auStack_104 [260];
  
  pcVar10 = local_220;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  *pcVar10 = '\0';
  puVar4 = local_200;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  bVar2 = FUN_20023470(local_200,0x100);
  _local_204 = CONCAT31(uStack_203,bVar2);
  piVar7 = &DAT_2026add8;
  do {
    if (*piVar7 != 0) {
      *piVar7 = 0;
    }
    *(undefined2 *)(piVar7 + 1) = 0;
    piVar7 = piVar7 + 2;
  } while ((int)piVar7 < 0x2026ae98);
  if (bVar2 != 0) {
    uVar11 = (uint)bVar2;
    puVar8 = (undefined1 *)((int)local_200 + uVar11);
    do {
      puVar8 = puVar8 + -1;
      switch(*puVar8) {
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
        local_212 = 1;
        break;
      case 0x25:
        local_220[1] = 1;
        break;
      case 0x26:
        local_220[1] = 1;
      case 0x20:
      case 0x28:
        local_215 = 1;
        break;
      case 0x27:
        local_20b = 1;
        break;
      case 0x29:
        local_20a = 1;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_20e = 1;
  local_219 = 1;
  local_216 = 1;
  iVar6 = 0;
  ppuVar9 = &PTR_s_Objects_Generic_chunks_brick_20137670;
  do {
    if (local_220[iVar6] != '\0') {
      puVar4 = (undefined4 *)FUN_20069630(1,0);
      uVar5 = (**(code **)*puVar4)();
      puVar1 = *ppuVar9;
      (&DAT_2026add8)[iVar6 * 2] = uVar5;
      FUN_20049190(puVar1,ppuVar9[1],uVar5);
      (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 4))(1);
      FUN_200fabac(auStack_104,s_Ghoul__s__s_GHL_201322f4,*ppuVar9,ppuVar9[1]);
      sVar3 = (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 0xc))(auStack_104);
      (&DAT_2026addc)[iVar6 * 4] = sVar3;
      if (sVar3 != 0) {
        (**(code **)(*(int *)(&DAT_2026add8)[iVar6 * 2] + 8))(1);
      }
    }
    ppuVar9 = ppuVar9 + 4;
    iVar6 = iVar6 + 1;
  } while ((int)ppuVar9 < 0x201377f0);
  return;
}

