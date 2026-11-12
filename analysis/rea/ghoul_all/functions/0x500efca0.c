// rea decompile_all
// name: FUN_500efca0
// address: 0x500efca0
// body: available
// range: 0x500efca0-0x500efe42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500efca0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 auStack_98 [48];
  char acStack_68 [104];
  
  iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
  if (iVar2 == 0) {
    pcVar3 = s_mullins_50146a9c;
    do {
      cVar1 = *pcVar3;
      pcVar3[param_2 + -0x50146a9c] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    return;
  }
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x74) + 0x354) != 0)) &&
     (*(int **)(param_1 + 0x164) != (int *)0x0)) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar4);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x4f2;
      pcVar3 = acStack_68 + 4;
      puVar7 = &DAT_50142f40;
      uVar6 = 100;
      FUN_500fe2b0();
      piVar5 = (int *)(*DAT_5015cae4)(acStack_68 + 4,pcVar3,uVar6,puVar7,iVar2);
      if (piVar5 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar5 + 0x44))();
        if (cVar1 != '\0') {
          (**(code **)(*piVar5 + 0x30))(auStack_98);
          iVar2 = __strcmpi(&stack0xffffff64,s_Noteam_50154410);
          if (iVar2 == 0) {
            FUN_500fe2b0();
            for (iVar2 = 0; ((acStack_68[0] != '\0' && (acStack_68[0] != '.')) && (iVar2 < 100));
                iVar2 = iVar2 + 1) {
              acStack_68[0] = acStack_68[iVar2 + 1];
            }
            acStack_68[iVar2] = '\0';
            pcVar3 = acStack_68;
            do {
              cVar1 = *pcVar3;
              pcVar3[param_1 - (int)acStack_68] = cVar1;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            (**(code **)(*piVar5 + 0x48))(1);
            return;
          }
          pcVar3 = &stack0xffffff64;
          do {
            cVar1 = *pcVar3;
            pcVar3[param_1 - (int)&stack0xffffff64] = cVar1;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          (**(code **)(*piVar5 + 0x48))(1);
          return;
        }
        (**(code **)(*piVar5 + 0x48))(1);
      }
    }
  }
  pcVar3 = s_mullins_50146a9c;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_2 + -0x50146a9c] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return;
}

