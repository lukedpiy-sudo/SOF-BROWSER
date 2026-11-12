// rea decompile_all
// name: FUN_20095c50
// address: 0x20095c50
// body: available
// range: 0x20095c50-0x20095e5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20095c50(undefined4 param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined1 local_c [12];
  
  FUN_20068ef0(param_1,(char *)(in_ECX + 4));
  if (*(char *)(in_ECX + 4) == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    if (*(int *)(in_ECX + 0x18) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0x18)) / 0xc;
    }
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
      if ((int)uVar1 < 0) {
        uVar4 = 0;
      }
      pvVar2 = operator_new(uVar4 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),pvVar2);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0x18));
      *(void **)(in_ECX + 0x20) = (void *)((int)pvVar2 + uVar1 * 0xc);
      iVar3 = FUN_200b93c0();
      *(void **)(in_ECX + 0x18) = pvVar2;
      *(void **)(in_ECX + 0x1c) = (void *)((int)pvVar2 + iVar3 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x18),uVar1,local_c);
    FUN_20069200(param_1,*(undefined4 *)(in_ECX + 0x18),uVar1 * 0xc);
  }
  else {
    FUN_20069200(param_1,in_ECX + 8,0xc);
  }
  FUN_20068ef0(param_1,(char *)(in_ECX + 0x24));
  if (*(char *)(in_ECX + 0x24) == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    if (*(int *)(in_ECX + 0x38) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x38)) / 0xc;
    }
    if (uVar4 < uVar1) {
      uVar4 = uVar1;
      if ((int)uVar1 < 0) {
        uVar4 = 0;
      }
      pvVar2 = operator_new(uVar4 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x3c),pvVar2);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x3c));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0x38));
      *(void **)(in_ECX + 0x40) = (void *)((int)pvVar2 + uVar1 * 0xc);
      iVar3 = FUN_200b93c0();
      *(void **)(in_ECX + 0x38) = pvVar2;
      *(void **)(in_ECX + 0x3c) = (void *)((int)pvVar2 + iVar3 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x38),uVar1,local_c);
    FUN_20069200(param_1,*(undefined4 *)(in_ECX + 0x38),uVar1 * 0xc);
  }
  else {
    FUN_20069200(param_1,in_ECX + 0x28,0xc);
  }
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  return 1;
}

