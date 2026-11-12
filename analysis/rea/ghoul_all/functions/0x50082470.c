// rea decompile_all
// name: FUN_50082470
// address: 0x50082470
// body: available
// range: 0x50082470-0x50082596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x50082493) */

undefined1 * __thiscall FUN_50082470(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  uVar1 = *param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)this = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar6 = *(uint *)(param_1 + 8);
  if (this == param_1) {
    if (uVar6 != 0) {
      FUN_50106d97();
    }
    iVar2 = *(int *)((int)this + 8) - uVar6;
    iVar8 = -1;
    if ((iVar2 == -1) || (iVar8 = iVar2, iVar2 != 0)) {
      FUN_50083170((int)this);
      puVar7 = (undefined4 *)(*(int *)((int)this + 4) + uVar6);
      FUN_50108400(puVar7,(undefined4 *)((int)puVar7 + iVar8),
                   (*(int *)((int)this + 8) - iVar8) - uVar6);
      uVar6 = *(int *)((int)this + 8) - iVar8;
      uVar3 = FUN_50082c70(this,uVar6,'\0');
      if ((char)uVar3 != '\0') {
        FUN_50082c50(this,uVar6);
        return this;
      }
    }
  }
  else {
    if (uVar6 != 0) {
      puVar4 = *(undefined1 **)(param_1 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_50129750;
      }
      if ((int)(uint)(byte)puVar4[-1] < -1) {
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        puVar4 = *(undefined1 **)(param_1 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_50129750;
        }
        *(undefined1 **)((int)this + 4) = puVar4;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        return this;
      }
    }
    uVar3 = FUN_50082c70(this,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      puVar7 = (undefined4 *)&DAT_50129750;
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 4);
      }
      puVar9 = *(undefined4 **)((int)this + 4);
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_50082c50(this,uVar6);
    }
  }
  return this;
}

