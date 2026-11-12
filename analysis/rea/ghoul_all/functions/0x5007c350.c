// rea decompile_all
// name: FUN_5007c350
// address: 0x5007c350
// body: available
// range: 0x5007c350-0x5007c492 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_5007c350(void *this,char param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint local_4;
  
  bVar1 = *(byte *)(*(int *)((int)this + 0x114) + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  if ((char)bVar1 < '\0') {
    *(undefined4 *)((int)this + 0x10c) = 0x80;
  }
  else {
    *(undefined4 *)((int)this + 0x10c) = 0;
  }
  local_4 = bVar1 & 0x7f;
  if ((bVar1 & 0x7f) != 0) {
    do {
      if (*(int *)((int)this + 0x148) == 0) {
        iVar6 = 0;
LAB_5007c3f1:
        FUN_500817d0(this,(byte *)s_Invalid_stack_for_HandleWait_50145914);
      }
      else {
        iVar6 = *(int *)(*(int *)(*(int *)((int)this + 0x144) + 4) + 8);
        piVar5 = *(int **)(*(int *)((int)this + 0x144) + 4);
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        FUN_50106b60((undefined *)piVar5);
        *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + -1;
        if (iVar6 == 0) goto LAB_5007c3f1;
      }
      iVar2 = *(int *)((int)this + 0x15c);
      piVar5 = *(int **)(iVar2 + 4);
      piVar3 = operator_new(0xc);
      *piVar3 = iVar2;
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar3;
      }
      piVar3[1] = (int)piVar5;
      *(int **)(iVar2 + 4) = piVar3;
      *(int **)piVar3[1] = piVar3;
      if (piVar3 + 2 != (int *)0x0) {
        piVar3[2] = iVar6;
      }
      local_4 = local_4 - 1;
      *(int *)((int)this + 0x160) = *(int *)((int)this + 0x160) + 1;
    } while (local_4 != 0);
  }
  if (param_1 == '\0') {
    *(undefined4 *)((int)this + 0x108) = 4;
  }
  else {
    *(undefined4 *)((int)this + 0x108) = 3;
  }
  uVar4 = FUN_500816b0((int)this);
  if ((char)uVar4 == '\0') {
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  uVar4 = FUN_50081730(this,0,'\0');
  return uVar4 & 0xffffff00;
}

