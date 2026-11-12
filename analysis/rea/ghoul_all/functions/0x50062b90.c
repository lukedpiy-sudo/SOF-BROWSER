// rea decompile_all
// name: FUN_50062b90
// address: 0x50062b90
// body: available
// range: 0x50062b90-0x50062c06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50062b90(void *this,char *param_1)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined4 in_EAX;
  char *pcVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  undefined4 *puVar8;
  
  cVar1 = *(char *)this;
  cVar2 = *param_1;
  if (cVar1 == cVar2) {
    cVar7 = param_1[1];
    cVar5 = cVar2;
  }
  else {
    cVar5 = param_1[1];
    cVar7 = cVar2;
  }
  pcVar4 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  if (cVar5 == cVar1) {
    for (puVar8 = *(undefined4 **)((int)this + 0xc); puVar8 != *(undefined4 **)((int)this + 0x10);
        puVar8 = puVar8 + 1) {
      pcVar4 = (char *)*puVar8;
      cVar5 = *pcVar4;
      if (cVar1 == cVar5) {
        cVar5 = pcVar4[1];
      }
      if (cVar5 == cVar7) {
        if (cVar1 == *pcVar4) {
          sVar3 = *(short *)(pcVar4 + 2);
        }
        else {
          sVar3 = *(short *)(pcVar4 + 4);
        }
        pcVar4 = (char *)CONCAT22((short)((uint)pcVar4 >> 0x10),sVar3);
        if (cVar1 == cVar2) {
          sVar6 = *(short *)(param_1 + 2);
        }
        else {
          sVar6 = *(short *)(param_1 + 4);
        }
        if (sVar3 == sVar6) {
          return CONCAT31((int3)((uint)pcVar4 >> 8),1);
        }
      }
    }
  }
  return (uint)pcVar4 & 0xffffff00;
}

