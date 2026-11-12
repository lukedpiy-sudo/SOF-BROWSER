// rea decompile_all
// name: FUN_200a57d0
// address: 0x200a57d0
// body: available
// range: 0x200a57d0-0x200a5943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200a57d0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d4f8;
  local_c = ExceptionList;
  local_1c[0] = *param_1;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  FUN_2000a3a0(puVar3,0,0xffffffff);
  uVar6 = 0;
  local_4 = 0;
  if (local_14 != 0) {
    do {
      if (local_18 == 0) {
        pcVar7 = "";
      }
      else {
        FUN_2000a930();
        pcVar7 = (char *)(local_18 + uVar6);
      }
      puVar3 = (undefined1 *)FUN_200483c0(uVar6);
      uVar2 = FUN_200fb2a2((int)*pcVar7);
      *puVar3 = uVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_14);
  }
  FUN_200c18a0(&param_1,local_1c);
  if ((param_1 == *(undefined1 **)(in_ECX + 0xe8)) ||
     (iVar4 = FUN_20023c40(param_1 + 0xc), iVar4 < 0)) {
    piVar5 = &local_20;
    local_20 = *(int *)(in_ECX + 0xe8);
  }
  else {
    piVar5 = (int *)&param_1;
  }
  iVar4 = *piVar5;
  if (iVar4 != *(int *)(in_ECX + 0xe8)) {
    *param_2 = *(undefined4 *)(iVar4 + 0x1c);
    uVar1 = *(undefined4 *)(iVar4 + 0x20);
    if (local_18 != 0) {
      if (*(char *)(local_18 + -1) == '\0') {
        FUN_200f9f75((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
      }
    }
    ExceptionList = local_c;
    return uVar1;
  }
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) != '\0') {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
      ExceptionList = local_c;
      return 0xffffffff;
    }
    FUN_200f9f75((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return 0xffffffff;
}

