// rea decompile_all
// name: FUN_20068550
// address: 0x20068550
// body: available
// range: 0x20068550-0x20068786 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2006876a) */
/* WARNING: Removing unreachable block (ram,0x200686fd) */

void FUN_20068550(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
  }
  if (uVar4 < param_1) {
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(in_ECX + 8) - iVar2) / 0xc;
    }
    iVar1 = *(int *)(in_ECX + 8);
    param_1 = param_1 - iVar5;
    if ((uint)((*(int *)(in_ECX + 0xc) - iVar1) / 0xc) < param_1) {
      if ((iVar2 == 0) || (uVar4 = (iVar1 - iVar2) / 0xc, uVar4 <= param_1)) {
        uVar4 = param_1;
      }
      iVar5 = FUN_200b93c0();
      iVar5 = iVar5 + uVar4;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = 0;
      }
      pvVar3 = operator_new(iVar2 * 0xc);
      iVar2 = FUN_20068c60(*(undefined4 *)(in_ECX + 4),iVar1,pvVar3);
      FUN_20068ca0(iVar2,param_1,param_2);
      FUN_20068c60(iVar1,*(undefined4 *)(in_ECX + 8),iVar2 + param_1 * 0xc);
      FUN_2008c730(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 4));
      *(void **)(in_ECX + 0xc) = (void *)((int)pvVar3 + iVar5 * 0xc);
      iVar2 = FUN_200b93c0();
      *(void **)(in_ECX + 4) = pvVar3;
      *(void **)(in_ECX + 8) = (void *)((int)pvVar3 + (iVar2 + param_1) * 0xc);
      return;
    }
    if (param_1 != 0) {
      FUN_20068c60(iVar1,iVar1,iVar1 + param_1 * 0xc);
      FUN_20068ca0(*(int *)(in_ECX + 8),param_1 - (*(int *)(in_ECX + 8) - iVar1) / 0xc,param_2);
      FUN_20068cd0(iVar1,*(undefined4 *)(in_ECX + 8),param_2);
      *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_1 * 0xc;
      return;
    }
  }
  else if ((iVar2 != 0) && (param_1 < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0xc))) {
    *(uint *)(in_ECX + 8) = iVar2 + param_1 * 0xc;
  }
  return;
}

