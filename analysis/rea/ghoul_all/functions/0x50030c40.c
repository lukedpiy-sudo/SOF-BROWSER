// rea decompile_all
// name: FUN_50030c40
// address: 0x50030c40
// body: available
// range: 0x50030c40-0x50030e86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50030c40(void *this,int param_1)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  
  FUN_50012760(this,param_1);
  *(undefined ***)this = &PTR_FUN_50126eb0;
  iVar3 = param_1 - (int)this;
  puVar1 = (undefined2 *)((int)this + 0x48);
  iVar5 = 3;
  do {
    iVar4 = 4;
    do {
      *puVar1 = *(undefined2 *)(iVar3 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar6 = (undefined1 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined ***)this = &PTR_LAB_50127030;
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  puVar2 = (undefined1 *)((int)this + 0x74);
  do {
    *puVar2 = puVar2[iVar3];
    puVar2[0x40] = *puVar6;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  } while ((int)(puVar2 + (-0x74 - (int)this)) < 0x40);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  puVar2 = (undefined1 *)((int)this + 0xf8);
  do {
    *puVar2 = puVar2[iVar3];
    puVar2 = puVar2 + 1;
  } while ((int)(puVar2 + (-0xf8 - (int)this)) < 0x40);
  puVar2 = (undefined1 *)((int)this + 0x138);
  do {
    *puVar2 = puVar2[iVar3];
    puVar2 = puVar2 + 1;
  } while ((int)(puVar2 + (-0x138 - (int)this)) < 0x40);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)((int)this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)((int)this + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)((int)this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)((int)this + 0x19c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)((int)this + 0x1a0) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)((int)this + 0x1a4) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)((int)this + 0x1a8) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)((int)this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)((int)this + 0x1b8) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)((int)this + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)((int)this + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)((int)this + 0x1cc) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)((int)this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)((int)this + 0x1d8) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined1 *)((int)this + 0x1e8) = *(undefined1 *)(param_1 + 0x1e8);
  *(undefined1 *)((int)this + 0x1e9) = *(undefined1 *)(param_1 + 0x1e9);
  *(undefined1 *)((int)this + 0x1ea) = *(undefined1 *)(param_1 + 0x1ea);
  return this;
}

