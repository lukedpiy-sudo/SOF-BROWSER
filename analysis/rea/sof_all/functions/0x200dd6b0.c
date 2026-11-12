// rea decompile_all
// name: FUN_200dd6b0
// address: 0x200dd6b0
// body: available
// range: 0x200dd6b0-0x200dd8de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200dd6b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  int local_28;
  int local_20;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f438;
  puVar1 = *(undefined4 **)(in_ECX + 0xb0);
  ppvVar4 = &pvStack_c;
  puVar3 = (undefined4 *)*puVar1;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar4, puVar3 != puVar1) {
    puVar2 = (undefined4 *)*puVar3;
    FUN_200275c0(&local_20,puVar3);
    ppvVar4 = ExceptionList;
    puVar3 = puVar2;
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  local_28 = 0;
  local_20 = 0;
  do {
    iVar12 = local_20;
    iVar7 = *(int *)(in_ECX + 0xb8);
    if (1 < iVar7) goto LAB_200dd877;
    if ((char *)(&DAT_20365298)[local_20] != (char *)0x0) {
      pcVar6 = *(char **)(in_ECX + 0xa0);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = "";
      }
      iVar7 = __strcmpi((char *)(&DAT_20365298)[local_20],pcVar6);
      if (iVar7 == 0) {
        pcVar6 = (char *)FUN_2004b610(iVar12);
        uVar10 = 0xffffffff;
        local_18 = (char *)0x0;
        local_14 = 0;
        local_10 = 0;
        pcVar13 = pcVar6;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar5 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar5 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar5 = FUN_2000a6c0(uVar10,1);
        if (cVar5 != '\0') {
          pcVar13 = local_18;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar13 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_2000a6a0(uVar10);
        }
        local_4 = 0;
        iVar7 = *(int *)(in_ECX + 0xb0);
        piVar14 = *(int **)(iVar7 + 4);
        piVar8 = operator_new(0x18);
        *piVar8 = iVar7;
        if (piVar14 == (int *)0x0) {
          piVar14 = piVar8;
        }
        piVar8[1] = (int)piVar14;
        *(int **)(iVar7 + 4) = piVar8;
        *(int **)piVar8[1] = piVar8;
        FUN_200279a0(piVar8 + 2,local_1c);
        *(int *)(in_ECX + 0xb4) = *(int *)(in_ECX + 0xb4) + 1;
        local_4 = 0xffffffff;
        if (local_18 != (char *)0x0) {
          if (local_18[-1] == '\0') {
            FUN_200f9f75(local_18 + -1);
          }
          else {
            local_18[-1] = local_18[-1] + -1;
          }
        }
        local_18 = (char *)0x0;
        local_14 = 0;
        local_10 = 0;
        *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
        uVar9 = FUN_2004b610(local_20,in_ECX + 0x8c);
        iVar7 = (*DAT_2040363c)(uVar9);
        local_28 = local_28 + iVar7;
        iVar12 = local_20;
      }
    }
    local_20 = iVar12 + 1;
  } while (local_20 < 0x100);
  iVar7 = *(int *)(in_ECX + 0xb8);
LAB_200dd877:
  if (iVar7 == 2) {
    iVar7 = (*DAT_2040363c)(&DAT_20158f4c,in_ECX + 0x8c);
    local_28 = local_28 + iVar7;
  }
  if (*(int *)(in_ECX + 0xb8) != 0) {
    ExceptionList = pvStack_c;
    return local_28;
  }
  iVar7 = (*DAT_2040363c)(&DAT_20139424,in_ECX + 0x8c);
  ExceptionList = pvStack_c;
  return iVar7;
}

