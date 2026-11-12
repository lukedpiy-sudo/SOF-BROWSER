// rea decompile_all
// name: FUN_200d4310
// address: 0x200d4310
// body: available
// range: 0x200d4310-0x200d44c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200d4310(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 local_1c [4];
  char *pcStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010eab8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  uVar8 = (*DAT_2040363c)(&DAT_20158bb8,in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0xa4) = uVar8;
  iVar9 = (*DAT_20403640)(in_ECX + 0x8c);
  if (*(int *)(in_ECX + 0x30) < iVar9) {
    *(int *)(in_ECX + 0x24) = iVar9;
    uVar8 = __ftol();
    *(undefined4 *)(in_ECX + 0x2c) = uVar8;
  }
  if (*(int *)(in_ECX + 0x50) == 0) {
    pcVar14 = &DAT_2015ee44;
  }
  else {
    pcVar14 = *(char **)(*(int *)(in_ECX + 0x50) + 4);
  }
  uVar12 = 0xffffffff;
  pcVar15 = pcVar14;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar7 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar7 != '\0');
  uVar12 = ~uVar12 - 1;
  cVar7 = FUN_2000a6c0(uVar12,1);
  if (cVar7 != '\0') {
    pcVar15 = pcStack_18;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar13 = uVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar15 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar15 = pcVar15 + 1;
    }
    pcStack_18[uVar12] = '\0';
    uStack_14 = uVar12;
  }
  FUN_200d4060(local_1c);
  pcVar14 = "";
  if (pcStack_18 != (char *)0x0) {
    pcVar14 = pcStack_18;
  }
  if (*(undefined4 **)(in_ECX + 0x50) != (undefined4 *)0x0) {
    Cvar_Set(**(undefined4 **)(in_ECX + 0x50),pcVar14);
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    piVar1 = (int *)**(int **)(in_ECX + 4);
    iVar9 = *(int *)(*piVar1 + 0xa0);
    iVar10 = FUN_200c64f0();
    iVar2 = piVar1[0x11];
    iVar3 = *(int *)(in_ECX + 0x10);
    piVar1 = (int *)**(int **)(in_ECX + 4);
    iVar4 = *(int *)(*piVar1 + 0x9c);
    iVar11 = FUN_200c64f0();
    uVar8 = *(undefined4 *)(in_ECX + 0x2c);
    uVar5 = *(undefined4 *)(in_ECX + 0x28);
    iVar6 = *(int *)(in_ECX + 0x68);
    *(int *)(iVar6 + 0x10) = iVar11 + piVar1[0x10] + *(int *)(in_ECX + 0xc) + iVar4;
    *(int *)(iVar6 + 0x14) = iVar10 + iVar2 + iVar3 + iVar9;
    *(undefined4 *)(iVar6 + 0x18) = uVar5;
    *(undefined4 *)(iVar6 + 0x1c) = uVar8;
  }
  if (pcStack_18 != (char *)0x0) {
    if (pcStack_18[-1] != '\0') {
      pcStack_18[-1] = pcStack_18[-1] + -1;
      ExceptionList = pvStack_c;
      return 1;
    }
    FUN_200f9f75(pcStack_18 + -1);
  }
  ExceptionList = pvStack_c;
  return 1;
}

