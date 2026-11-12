// rea decompile_all
// name: FUN_500adbb0
// address: 0x500adbb0
// body: available
// range: 0x500adbb0-0x500add5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500adbb0(void)

{
  int iVar1;
  uint *puVar2;
  char *_Str1;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 0x50))();
  if (iVar1 == 0) {
    if ((char)**(uint **)(DAT_5015c940 + 4) != '\0') {
      puVar2 = FUN_50112843(*(uint **)(DAT_5015c940 + 4));
      pcVar5 = (char *)0x0;
      _Str1 = (char *)FUN_50107f68((byte *)puVar2,PTR_DAT_5014c614);
      if (_Str1 != (char *)0x0) {
        do {
          iVar1 = __strcmpi(_Str1,&DAT_5015cd20);
          if (iVar1 == 0) {
            FUN_50107f68((byte *)0x0,PTR_DAT_5014c614);
            piVar3 = FUN_500c3690();
            piVar3[0x6d] = (int)s_target_changelevel_5014cd80;
            FUN_500fe2b0();
            piVar3[0xc0] = (int)&DAT_5015cd60;
            FUN_500f6510((int)piVar3);
            FUN_5010880b((undefined *)puVar2);
            return;
          }
          if (pcVar5 == (char *)0x0) {
            pcVar5 = _Str1;
          }
          _Str1 = (char *)FUN_50107f68((byte *)0x0,PTR_DAT_5014c614);
        } while (_Str1 != (char *)0x0);
        if (pcVar5 != (char *)0x0) {
          piVar3 = FUN_500c3690();
          piVar3[0x6d] = (int)s_target_changelevel_5014cd80;
          FUN_500fe2b0();
          piVar3[0xc0] = (int)&DAT_5015cd60;
          FUN_500f6510((int)piVar3);
          FUN_5010880b((undefined *)puVar2);
          return;
        }
      }
      FUN_5010880b((undefined *)puVar2);
    }
    if (DAT_5015cd60 != '\0') {
      piVar3 = FUN_500c3690();
      goto LAB_500add1e;
    }
    uVar4 = FUN_500c26a0(0,0x1b4,s_target_changelevel_5014cd80,(void *)0x0);
    if (uVar4 != 0) {
      FUN_500f6510(uVar4);
      return;
    }
  }
  piVar3 = FUN_500c3690();
LAB_500add1e:
  piVar3[0x6d] = (int)s_target_changelevel_5014cd80;
  FUN_500fe2b0();
  piVar3[0xc0] = (int)&DAT_5015cd60;
  FUN_500f6510((int)piVar3);
  return;
}

