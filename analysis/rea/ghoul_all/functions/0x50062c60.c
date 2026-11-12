// rea decompile_all
// name: FUN_50062c60
// address: 0x50062c60
// body: available
// range: 0x50062c60-0x50062de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50062c60(void *this,int param_1,ushort param_2)

{
  char *pcVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  void *local_4;
  
  uVar3 = param_2;
  if (DAT_50159af8 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (DAT_50159afc - DAT_50159af8) / 0x1c;
  }
  iVar6 = iVar6 + -1;
  if (0 < iVar6) {
    puVar5 = (ushort *)(DAT_50159af8 + 4 + iVar6 * 0x1c);
    do {
      if ((puVar5[-1] <= param_2) && (param_2 <= *puVar5)) {
        cVar7 = (char)iVar6;
        goto LAB_50062cbd;
      }
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + -0xe;
    } while (0 < iVar6);
  }
  cVar7 = '\0';
LAB_50062cbd:
  _param_2 = **(int **)((int)this + 0x28);
  pcVar1 = *(char **)(**(int **)((int)this + 0x28) + 8);
  local_4 = this;
  puVar4 = (undefined4 *)FUN_50049a30(&param_2,&local_4);
  piVar2 = (int *)*puVar4;
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
  FUN_50106b60((undefined *)piVar2);
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + -1;
  *(char **)((int)this + 0x20) = pcVar1;
  if (cVar7 == *pcVar1) {
    *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar1 + 2);
  }
  else {
    *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar1 + 4);
  }
  if (uVar3 < *(ushort *)((int)this + 0x30)) {
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 0;
    if ((DAT_50159a78 != 0) && (uVar3 + 1 < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
      *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) = DAT_50159a78 + (uVar3 + 1) * 0x34;
      return;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 1;
    uVar8 = uVar3 - 1;
    if (((-1 < (int)uVar8) && (DAT_50159a78 != 0)) &&
       (uVar8 < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
      *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) = DAT_50159a78 + uVar8 * 0x34;
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x40) = 0;
  return;
}

