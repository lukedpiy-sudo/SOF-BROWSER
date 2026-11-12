// rea decompile_all
// name: FUN_50082c70
// address: 0x50082c70
// body: available
// range: 0x50082c70-0x50082d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_50082c70(void *this,uint param_1,char param_2)

{
  uint3 uVar5;
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  if (0xfffffffd < param_1) {
    FUN_50106b6b();
  }
  if (param_2 == '\0') {
    if (param_1 < *(uint *)((int)this + 8)) {
      *(uint *)((int)this + 8) = param_1;
    }
  }
  else {
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar4 = *(undefined1 **)((int)this + 4);
  uVar5 = (uint3)((uint)puVar4 >> 8);
  if ((puVar4 == (undefined1 *)0x0) || (puVar4[-1] == '\0')) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar4 != (undefined1 *)0x0) {
          *(undefined4 *)((int)this + 8) = 0;
          *puVar4 = 0;
        }
        return (uint)uVar5 << 8;
      }
      uVar2 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        pcVar1 = puVar4 + -1;
        if (puVar4[-1] != '\0') {
          *pcVar1 = puVar4[-1] + -1;
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          return (uint)pcVar1 & 0xffffff00;
        }
        uVar2 = FUN_50106b60(pcVar1);
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar2 & 0xffffff00;
    }
    if (param_2 != '\0') {
      if ((0x1f < *(uint *)((int)this + 0xc)) || (*(uint *)((int)this + 0xc) < param_1)) {
        if (puVar4 != (undefined1 *)0x0) {
          if (puVar4[-1] != '\0') {
            puVar4[-1] = puVar4[-1] + -1;
            *(undefined4 *)((int)this + 4) = 0;
            *(undefined4 *)((int)this + 8) = 0;
            *(undefined4 *)((int)this + 0xc) = 0;
            uVar3 = FUN_50083080(param_1);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          FUN_50106b60(puVar4 + -1);
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        uVar3 = FUN_50083080(param_1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_50082d84;
    }
    if (param_1 <= *(uint *)((int)this + 0xc)) goto LAB_50082d84;
  }
  else if (param_1 == 0) {
    puVar4[-1] = puVar4[-1] + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)uVar5 << 8;
  }
  puVar4 = (undefined1 *)FUN_50083080(param_1);
LAB_50082d84:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}

