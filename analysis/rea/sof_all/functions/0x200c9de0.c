// rea decompile_all
// name: FUN_200c9de0
// address: 0x200c9de0
// body: available
// range: 0x200c9de0-0x200c9ed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200c9de0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  char *pcVar8;
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
  puStack_8 = &LAB_2010e2f8;
  local_c = ExceptionList;
  local_1c[0] = param_1._0_1_;
  uVar7 = 0xffffffff;
  pcVar8 = param_1;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  FUN_2000a600(param_1,~uVar7 - 1);
  local_4 = 0;
  FUN_200c18a0(&param_1,local_1c);
  if (param_1 != *(char **)(in_ECX + 0xd4)) {
    iVar3 = FUN_20023c40(param_1 + 0xc);
    if (-1 < iVar3) {
      piVar4 = (int *)&param_1;
      goto LAB_200c9e77;
    }
  }
  local_20 = *(int *)(in_ECX + 0xd4);
  piVar4 = &local_20;
LAB_200c9e77:
  iVar3 = *piVar4;
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) == '\0') {
      FUN_200f9f75((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
    }
  }
  if (iVar3 == *(int *)(in_ECX + 0xd4)) {
    puVar6 = (undefined4 *)(in_ECX + 0xe4);
    uVar5 = FUN_200fce1b(pcVar2,0,0);
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (undefined4 *)(iVar3 + 0x1c);
  }
  ExceptionList = local_c;
  return puVar6;
}

