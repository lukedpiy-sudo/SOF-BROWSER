// rea decompile_all
// name: FUN_20067de0
// address: 0x20067de0
// body: available
// range: 0x20067de0-0x2006802c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20067de0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  char *in_ECX;
  char *pcVar4;
  int iVar5;
  undefined1 local_c [12];
  
  FUN_20068ef0(param_1);
  if (*in_ECX == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    uVar2 = FUN_20068a60();
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
      if ((int)uVar1 < 0) {
        uVar2 = 0;
      }
      pvVar3 = operator_new(uVar2 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18),pvVar3);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0x14));
      *(void **)(in_ECX + 0x1c) = (void *)((int)pvVar3 + uVar1 * 0xc);
      iVar5 = FUN_200b93c0();
      *(void **)(in_ECX + 0x14) = pvVar3;
      *(void **)(in_ECX + 0x18) = (void *)((int)pvVar3 + iVar5 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x14),uVar1,local_c);
    pcVar4 = *(char **)(in_ECX + 0x14);
    iVar5 = uVar1 * 0xc;
  }
  else {
    iVar5 = 0xc;
    pcVar4 = in_ECX + 4;
  }
  FUN_20069200(param_1,pcVar4,iVar5);
  FUN_20068ef0(param_1,in_ECX + 0x20);
  if (in_ECX[0x20] == '\0') {
    uVar1 = FUN_20068dc0(param_1);
    uVar2 = FUN_20068a60();
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
      if ((int)uVar1 < 0) {
        uVar2 = 0;
      }
      pvVar3 = operator_new(uVar2 * 0xc);
      FUN_20068c60(*(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38),pvVar3);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0x34));
      *(void **)(in_ECX + 0x3c) = (void *)((int)pvVar3 + uVar1 * 0xc);
      iVar5 = FUN_200b93c0();
      *(void **)(in_ECX + 0x34) = pvVar3;
      *(void **)(in_ECX + 0x38) = (void *)((int)pvVar3 + iVar5 * 0xc);
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x34),uVar1,local_c);
    pcVar4 = *(char **)(in_ECX + 0x34);
    iVar5 = uVar1 * 0xc;
  }
  else {
    pcVar4 = in_ECX + 0x24;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,pcVar4,iVar5);
  FUN_20068ef0(param_1,in_ECX + 0x40);
  if (in_ECX[0x40] == '\0') {
    iVar5 = FUN_20068dc0(param_1);
    FUN_20068480(iVar5);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x54),iVar5,local_c);
    pcVar4 = *(char **)(in_ECX + 0x54);
    iVar5 = iVar5 * 0xc;
  }
  else {
    pcVar4 = in_ECX + 0x44;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,pcVar4,iVar5);
  FUN_20068ef0(param_1,in_ECX + 0x60);
  if (in_ECX[0x60] == '\0') {
    iVar5 = FUN_20068dc0(param_1);
    FUN_20068480(iVar5);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x74),iVar5,local_c);
    pcVar4 = *(char **)(in_ECX + 0x74);
    iVar5 = iVar5 * 0xc;
  }
  else {
    pcVar4 = in_ECX + 100;
    iVar5 = 0xc;
  }
  FUN_20069200(param_1,pcVar4,iVar5);
  return 1;
}

