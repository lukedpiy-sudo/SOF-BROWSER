// rea decompile_all
// name: FUN_5007d1a0
// address: 0x5007d1a0
// body: available
// range: 0x5007d1a0-0x5007d28d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5007d1a0(void *this,char param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  cVar1 = *(char *)(*(int *)((int)this + 0x114) + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  if (cVar1 == '\0') {
    if (*(int *)((int)this + 0x148) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x144) + 4) + 8);
      piVar2 = *(int **)(*(int *)((int)this + 0x144) + 4);
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      FUN_50106b60((undefined *)piVar2);
      *(int *)((int)this + 0x148) = *(int *)((int)this + 0x148) + -1;
    }
    iVar3 = (**(code **)(*piVar4 + 0x10))();
    if (iVar3 != 0) {
      if (param_1 != '\0') {
        *(undefined4 *)(iVar3 + 0x158) = 1;
        *(undefined1 **)(iVar3 + 0x2c4) = &LAB_500c0320;
        (*DAT_5015cb28)(iVar3);
        (**(code **)*piVar4)(1);
        return;
      }
      *(undefined4 *)(iVar3 + 0x158) = 0;
      *(undefined4 *)(iVar3 + 0x2c4) = 0;
    }
    (**(code **)*piVar4)(1);
  }
  else if (cVar1 == '\x02') {
    FUN_50075190(param_1);
    return;
  }
  return;
}

