// rea decompile_all
// name: FUN_2009c720
// address: 0x2009c720
// body: available
// range: 0x2009c720-0x2009c87f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2009c720(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
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
  puStack_8 = &LAB_2010cfeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  pcVar5 = *(char **)(param_1 + 4);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  pcVar8 = local_3f4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar8 = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_20107ed2(local_3f4);
  uVar6 = 0xffffffff;
  pcVar5 = local_3f4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0(uVar6,1);
  if (cVar1 != '\0') {
    pcVar5 = local_3f4;
    pcVar8 = local_404;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar8 = pcVar8 + 1;
    }
    local_404[uVar6] = '\0';
    local_400 = uVar6;
  }
  FUN_200c18a0(&local_40c,local_408);
  if ((local_40c == *(int *)(in_ECX + 0x18)) || (iVar2 = FUN_20023c40(local_40c + 0xc), iVar2 < 0))
  {
    piVar3 = &local_3f8;
    local_3f8 = *(int *)(in_ECX + 0x18);
  }
  else {
    piVar3 = &local_40c;
  }
  if (*piVar3 == *(int *)(in_ECX + 0x18)) {
    if (local_404 != (char *)0x0) {
      if (local_404[-1] == '\0') {
        FUN_200f9f75(local_404 + -1);
      }
      else {
        local_404[-1] = local_404[-1] + -1;
      }
    }
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(*piVar3 + 0x1c);
    if (local_404 != (char *)0x0) {
      if (local_404[-1] == '\0') {
        FUN_200f9f75(local_404 + -1);
      }
      else {
        local_404[-1] = local_404[-1] + -1;
      }
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

