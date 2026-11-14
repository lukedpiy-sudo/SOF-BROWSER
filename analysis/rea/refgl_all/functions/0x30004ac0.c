// rea decompile_all
// name: FUN_30004ac0
// address: 0x30004ac0
// body: available
// range: 0x30004ac0-0x30004b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_30004ac0(void *this,char *param_1,undefined1 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  *(undefined1 *)this = *param_2;
  uVar2 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  if (0xfffffffd < uVar2) {
    FUN_3001f8c7();
  }
  *(undefined4 *)((int)this + 8) = 0;
  if ((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + -1) == '\0')) {
    if (uVar2 == 0) {
      FUN_300033d0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar2 <= *(uint *)((int)this + 0xc)))
    goto LAB_30004b4e;
    FUN_300033d0(this,'\x01');
  }
  else if (uVar2 == 0) {
    FUN_300033d0(this,'\x01');
    return this;
  }
  FUN_30003540(uVar2);
LAB_30004b4e:
  pcVar4 = *(char **)((int)this + 4);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = *param_1;
    param_1 = param_1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  *(uint *)((int)this + 8) = uVar2;
  *(undefined1 *)(uVar2 + *(int *)((int)this + 4)) = 0;
  return this;
}

