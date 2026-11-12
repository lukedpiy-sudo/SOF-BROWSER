// rea decompile_all
// name: FUN_20096b10
// address: 0x20096b10
// body: available
// range: 0x20096b10-0x20096db9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20096b10(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined1 local_c [12];
  
  FUN_20068ef0(param_1,(char *)(in_ECX + 4));
  if (*(char *)(in_ECX + 4) == '\0') {
    iVar5 = FUN_20068dc0(param_1);
    FUN_20068480(iVar5);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x18),iVar5,local_c);
    iVar4 = *(int *)(in_ECX + 0x18);
    iVar5 = iVar5 * 0xc;
  }
  else {
    iVar4 = in_ECX + 8;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,iVar4,iVar5);
  FUN_2009a3c0(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_20068ef0(param_1,(char *)(in_ECX + 0xc0));
  if (*(char *)(in_ECX + 0xc0) == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    uVar2 = FUN_20068a60();
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
      if ((int)uVar1 < 0) {
        uVar2 = 0;
      }
      pvVar3 = operator_new(uVar2 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8),pvVar3);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0xd4));
      *(void **)(in_ECX + 0xdc) = (void *)((int)pvVar3 + uVar1 * 0xc);
      iVar4 = FUN_200b93c0();
      *(void **)(in_ECX + 0xd4) = pvVar3;
      *(void **)(in_ECX + 0xd8) = (void *)((int)pvVar3 + iVar4 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0xd4),uVar1,local_c);
    iVar4 = *(int *)(in_ECX + 0xd4);
    iVar5 = uVar1 * 0xc;
  }
  else {
    iVar4 = in_ECX + 0xc4;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,iVar4,iVar5);
  FUN_200c2930(param_1);
  FUN_200c2930(param_1);
  FUN_20068ef0(param_1,(char *)(in_ECX + 0x110));
  if (*(char *)(in_ECX + 0x110) == '\0') {
    iVar5 = FUN_20068dc0(param_1);
    FUN_20068480(iVar5);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x124),iVar5,local_c);
    iVar4 = *(int *)(in_ECX + 0x124);
    iVar5 = iVar5 * 0xc;
  }
  else {
    iVar4 = in_ECX + 0x114;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,iVar4,iVar5);
  FUN_20068ef0(param_1,(char *)(in_ECX + 0x130));
  if (*(char *)(in_ECX + 0x130) == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    uVar2 = FUN_20068a60();
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
      if ((int)uVar1 < 0) {
        uVar2 = 0;
      }
      pvVar3 = operator_new(uVar2 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0x144),*(undefined4 *)(in_ECX + 0x148),pvVar3);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0x144),*(undefined4 *)(in_ECX + 0x148));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0x144));
      *(void **)(in_ECX + 0x14c) = (void *)((int)pvVar3 + uVar1 * 0xc);
      iVar4 = FUN_200b93c0();
      *(void **)(in_ECX + 0x144) = pvVar3;
      *(void **)(in_ECX + 0x148) = (void *)((int)pvVar3 + iVar4 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x144),uVar1,local_c);
    iVar4 = *(int *)(in_ECX + 0x144);
    iVar5 = uVar1 * 0xc;
  }
  else {
    iVar4 = in_ECX + 0x134;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,iVar4,iVar5);
  return 1;
}

