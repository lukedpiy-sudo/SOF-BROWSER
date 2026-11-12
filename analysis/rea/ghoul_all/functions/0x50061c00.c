// rea decompile_all
// name: FUN_50061c00
// address: 0x50061c00
// body: available
// range: 0x50061c00-0x50061d8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50061c00(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8c;
  uint local_88 [2];
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  if (*(int *)((int)this + 0x18) == 0) {
    local_8c = 0;
  }
  else {
    local_8c = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  puVar5 = local_80;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_500fe2b0();
  if (*(int *)(param_1 + 0x45c) == 0) {
    return;
  }
  FUN_50061b10(this,param_1,(short *)local_88,'\0');
  *(short *)(*(int *)(param_1 + 0x45c) + 0x408) = (short)local_88[0];
  uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x45c) + 0x408);
  iVar4 = *(int *)((int)this + 0x18) + uVar1 * 0x34;
  switch(*(undefined4 *)(*(int *)((int)this + 0x18) + 0x10 + uVar1 * 0x34)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  default:
    goto switchD_50061cb8_caseD_5;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
  }
  FUN_500fe2b0();
switchD_50061cb8_caseD_5:
  uVar2 = FUN_50060b30(this,*(short *)(*(int *)(param_1 + 0x45c) + 0x408));
  if ((char)uVar2 != '\0') {
    FUN_500fe2b0();
  }
  puVar3 = FUN_500c33f0();
  (*DAT_5015ca34)(param_1,s__s___d_of__d_type___s_origin___s_50143314,local_40,local_88[0] & 0xffff,
                  local_8c + -1,local_80,puVar3,iVar4);
  return;
}

