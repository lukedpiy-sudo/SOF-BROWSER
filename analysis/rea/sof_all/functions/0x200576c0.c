// rea decompile_all
// name: FUN_200576c0
// address: 0x200576c0
// body: available
// range: 0x200576c0-0x200577f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200576c0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b508;
  local_c = ExceptionList;
  pcVar9 = *(char **)(in_ECX + 0x18);
  if (pcVar9 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    uVar7 = 0xffffffff;
    pcVar8 = param_1;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if ((uVar6 + 1 <= ~uVar7 - 1) &&
       (ExceptionList = &local_c, local_20 = in_ECX, iVar3 = _strncmp(param_1,pcVar9,uVar6 - 1),
       iVar3 == 0)) {
      local_1c[0] = param_1._0_1_;
      uVar7 = 0xffffffff;
      local_18 = 0;
      pcVar9 = pcVar2 + uVar6;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      local_14 = 0;
      local_10 = 0;
      FUN_2000a600(pcVar2 + uVar6,~uVar7 - 1);
      iVar3 = local_20;
      local_4 = 0;
      FUN_200c18a0(&param_1,local_1c);
      if ((param_1 == *(char **)(iVar3 + 0x1020)) ||
         (iVar4 = FUN_20023c40(param_1 + 0xc), iVar4 < 0)) {
        piVar5 = &local_20;
        local_20 = *(int *)(iVar3 + 0x1020);
      }
      else {
        piVar5 = (int *)&param_1;
      }
      iVar4 = *piVar5;
      if (local_18 != 0) {
        if (*(char *)(local_18 + -1) == '\0') {
          FUN_200f9f75((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
        }
      }
      if (iVar4 != *(int *)(iVar3 + 0x1020)) {
        ExceptionList = local_c;
        return *(undefined4 *)(iVar4 + 0x1c);
      }
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}

