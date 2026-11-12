// rea decompile_all
// name: FUN_50062df0
// address: 0x50062df0
// body: available
// range: 0x50062df0-0x500630af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50062df0(void *this,int param_1,ushort param_2)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  
  uVar1 = param_2;
  if (DAT_50159af8 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (DAT_50159afc - DAT_50159af8) / 0x1c;
  }
  iVar5 = iVar5 + -1;
  if (0 < iVar5) {
    puVar3 = (ushort *)(DAT_50159af8 + 4 + iVar5 * 0x1c);
    do {
      if ((puVar3[-1] <= param_2) && (param_2 <= *puVar3)) {
        cVar6 = (char)iVar5;
        goto LAB_50062e4d;
      }
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + -0xe;
    } while (0 < iVar5);
  }
  cVar6 = '\0';
LAB_50062e4d:
  iVar5 = *(int *)((int)this + 0x20);
  if ((iVar5 == 0) || ((param_2 != *(ushort *)(iVar5 + 2) && (param_2 != *(ushort *)(iVar5 + 4)))))
  {
    uVar1 = *(ushort *)((int)this + 0x30);
joined_r0x50063042:
    if (param_2 < uVar1) {
      iVar5 = *(int *)(param_1 + 0x45c);
LAB_5006304e:
      *(undefined4 *)(iVar5 + 0x50) = 0;
      iVar5 = *(int *)(param_1 + 0x45c);
      uVar4 = *(int *)(*(int *)(iVar5 + 0x40) + 0xc) + 1;
      if (((-1 < (int)uVar4) && (DAT_50159a78 != 0)) &&
         (uVar4 < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
        *(uint *)(iVar5 + 0x40) = DAT_50159a78 + uVar4 * 0x34;
        return;
      }
      goto LAB_5006302f;
    }
    if (param_2 <= uVar1) {
      *(undefined2 *)((int)this + 0x30) = 0;
      return;
    }
    iVar5 = *(int *)(param_1 + 0x45c);
  }
  else {
    *(int *)((int)this + 0x1c) = iVar5;
    if (*(int *)((int)this + 0x2c) == 0) {
      uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x4c) + 0xc);
      *(undefined4 *)((int)this + 0x20) = 0;
      *(ushort *)((int)this + 0x30) = uVar1;
      goto joined_r0x50063042;
    }
    pcVar2 = *(char **)(**(int **)((int)this + 0x28) + 8);
    FUN_500499f0((void *)((int)this + 0x24),(int *)&param_2,
                 (int *)**(undefined4 **)((int)this + 0x28));
    *(char **)((int)this + 0x20) = pcVar2;
    if ((*(char **)((int)this + 0x1c) != (char *)0x0) && (*(char **)((int)this + 0x1c) == pcVar2)) {
      if (cVar6 == *pcVar2) {
        *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar2 + 4);
      }
      else {
        *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar2 + 2);
      }
      if (uVar1 < *(ushort *)((int)this + 0x30)) {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 0;
        if ((DAT_50159a78 != 0) &&
           ((uint)*(ushort *)((int)this + 0x30) < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
          *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) =
               DAT_50159a78 + (uint)*(ushort *)((int)this + 0x30) * 0x34;
          return;
        }
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x50) = 1;
        if ((DAT_50159a78 != 0) &&
           ((uint)*(ushort *)((int)this + 0x30) < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
          *(uint *)(*(int *)(param_1 + 0x45c) + 0x40) =
               DAT_50159a78 + (uint)*(ushort *)((int)this + 0x30) * 0x34;
          return;
        }
      }
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x40) = 0;
      return;
    }
    if (cVar6 == *pcVar2) {
      *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar2 + 2);
    }
    else {
      *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(pcVar2 + 4);
    }
    iVar5 = *(int *)(param_1 + 0x45c);
    if (uVar1 < *(ushort *)((int)this + 0x30)) goto LAB_5006304e;
  }
  *(undefined4 *)(iVar5 + 0x50) = 1;
  iVar5 = *(int *)(param_1 + 0x45c);
  uVar4 = *(int *)(*(int *)(iVar5 + 0x40) + 0xc) - 1;
  if (((-1 < (int)uVar4) && (DAT_50159a78 != 0)) &&
     (uVar4 < (uint)((DAT_50159a7c - DAT_50159a78) / 0x34))) {
    *(uint *)(iVar5 + 0x40) = DAT_50159a78 + uVar4 * 0x34;
    return;
  }
LAB_5006302f:
  *(undefined4 *)(iVar5 + 0x40) = 0;
  return;
}

