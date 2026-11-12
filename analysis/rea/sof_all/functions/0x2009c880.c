// rea decompile_all
// name: FUN_2009c880
// address: 0x2009c880
// body: available
// range: 0x2009c880-0x2009c9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009c880(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int local_40c;
  undefined1 local_408 [4];
  char *local_404;
  uint local_400;
  int local_3f8;
  char local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d00b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  pcVar4 = *(char **)(param_1 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  pcVar7 = local_3f4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_20107ed2(local_3f4);
  uVar5 = 0xffffffff;
  pcVar4 = local_3f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0(uVar5,1);
  if (cVar1 != '\0') {
    pcVar4 = local_3f4;
    pcVar7 = local_404;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_404[uVar5] = '\0';
    local_400 = uVar5;
  }
  FUN_200c18a0(&local_40c,local_408);
  if (local_40c != *(int *)(in_ECX + 0x18)) {
    iVar2 = FUN_20023c40(local_40c + 0xc);
    if (-1 < iVar2) {
      piVar3 = &local_40c;
      goto LAB_2009c972;
    }
  }
  piVar3 = &local_3f8;
  local_3f8 = *(int *)(in_ECX + 0x18);
LAB_2009c972:
  if (*piVar3 != *(int *)(in_ECX + 0x18)) {
    *(undefined1 *)(*(int *)(*piVar3 + 0x1c) + *(int *)(in_ECX + 0x3c)) = 1;
  }
  if (local_404 != (char *)0x0) {
    if (local_404[-1] != '\0') {
      local_404[-1] = local_404[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(local_404 + -1);
  }
  ExceptionList = local_c;
  return;
}

