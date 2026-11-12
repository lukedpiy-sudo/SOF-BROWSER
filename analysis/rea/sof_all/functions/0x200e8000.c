// rea decompile_all
// name: FUN_200e8000
// address: 0x200e8000
// body: available
// range: 0x200e8000-0x200e81d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e8000(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *in_ECX;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2011014b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200eafe0(3);
  pcVar14 = s_default_20158314;
  pcVar3 = (char *)FUN_200eb440(0);
  iVar4 = __strcmpi(pcVar3,pcVar14);
  if (iVar4 == 0) {
    FUN_200eb490(param_1,s_Not_allowed_to_alter_default_fra_201592ac);
    FUN_200eb420();
    ExceptionList = local_c;
    return 0;
  }
  iVar4 = *(int *)*in_ECX;
  bVar1 = false;
  uVar5 = FUN_200eb440(0);
  iVar6 = FUN_200ca770(uVar5);
  if (iVar6 == 0) {
    pvVar7 = operator_new(0x58);
    iVar6 = 0;
    local_4 = 0;
    if (pvVar7 != (void *)0x0) {
      uVar5 = FUN_200eb440(0);
      uVar8 = FUN_200eb440(2);
      uVar9 = FUN_200eb440(1);
      iVar6 = FUN_200c60a0(iVar4,uVar9,uVar8,uVar5);
    }
    local_4 = 0xffffffff;
    bVar1 = true;
  }
  uVar11 = 0xffffffff;
  pcVar3 = s_default_20158314;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar11 = ~uVar11 - 1;
  cVar2 = FUN_2000a6c0(uVar11,1);
  if (cVar2 != '\0') {
    pcVar3 = s_default_20158314;
    pcVar14 = *(char **)(iVar6 + 0x34);
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar14 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar14 = pcVar14 + 1;
    }
    *(uint *)(iVar6 + 0x38) = uVar11;
    *(undefined1 *)(uVar11 + *(int *)(iVar6 + 0x34)) = 0;
  }
  FUN_200c6b50(param_1);
  if (bVar1) {
    uVar5 = FUN_200c6440();
    iVar10 = FUN_200ca770(uVar5);
    if (iVar10 == 0) {
      puVar13 = *(undefined1 **)(iVar6 + 0x20);
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &DAT_201116cc;
      }
      pcVar3 = s_Could_not_find_parent_for___s__2015928c;
      goto LAB_200e8195;
    }
    FUN_200c6530(iVar10);
  }
  FUN_200c6500();
  cVar2 = FUN_200c67d0();
  if (cVar2 != '\0') {
    ExceptionList = local_c;
    return 1;
  }
  puVar13 = *(undefined1 **)(iVar6 + 0x20);
  if (puVar13 == (undefined1 *)0x0) {
    puVar13 = &DAT_201116cc;
  }
  pcVar3 = s_Could_not_create___s__20159274;
LAB_200e8195:
  FUN_200eb490(param_1,pcVar3,puVar13);
  *(undefined1 *)(iVar4 + 0x90) = 0;
  ExceptionList = local_c;
  return 0;
}

