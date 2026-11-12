// rea decompile_all
// name: FUN_50056d20
// address: 0x50056d20
// body: available
// range: 0x50056d20-0x50057036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50056d20(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  char *local_40c;
  char local_400 [512];
  char local_200 [512];
  
  iVar8 = 0;
  bVar3 = false;
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x74) != 0)) &&
      (iVar4 = *(int *)(param_1 + 0x45c), iVar4 != 0)) &&
     ((*(int *)(iVar4 + 0x404) != 0 && (*(float *)(DAT_5015d278 + 0x18) != 0.0)))) {
    pcVar5 = local_200;
    for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    iVar4 = FUN_50057620(*(void **)(iVar4 + 0x404),param_3);
    if (iVar4 != 0) {
      FUN_500fe2b0();
    }
    if (local_200[0] != '\0') {
      local_40c = local_200;
      do {
        cVar2 = *local_40c;
        if (cVar2 == '\0') break;
        if (cVar2 == '%') {
          iVar4 = 0;
          bVar3 = true;
          local_400[iVar8] = '\0';
          FUN_50107654(local_400,&DAT_50133ae0);
          pcVar5 = (char *)(*(int *)(param_2 + 0x74) + 0x2cc);
          cVar2 = *pcVar5;
          while (cVar2 != '\0') {
            pcVar1 = pcVar5 + 1;
            iVar4 = iVar4 + 1;
            pcVar5 = pcVar5 + 1;
            cVar2 = *pcVar1;
          }
          iVar8 = iVar8 + iVar4;
        }
        else if (cVar2 == '$') {
          puVar6 = operator_new(0x100);
          iVar4 = 0;
          bVar3 = true;
          local_400[iVar8] = '\0';
          FUN_50107654((undefined1 *)puVar6,&DAT_50142f3c);
          FUN_50107d31(puVar6);
          FUN_50107654(local_400,&DAT_50133ae0);
          cVar2 = (char)*puVar6;
          while (cVar2 != '\0') {
            iVar7 = iVar4 + 1;
            iVar4 = iVar4 + 1;
            cVar2 = *(char *)(iVar7 + (int)puVar6);
          }
          iVar8 = iVar8 + iVar4;
          FUN_50106b60((undefined *)puVar6);
        }
        else if (cVar2 == '&') {
          puVar6 = operator_new(0x100);
          iVar4 = 0;
          bVar3 = true;
          local_400[iVar8] = '\0';
          FUN_50107654((undefined1 *)puVar6,&DAT_50142f3c);
          FUN_50107c93(puVar6);
          FUN_50107654(local_400,&DAT_50133ae0);
          cVar2 = (char)*puVar6;
          while (cVar2 != '\0') {
            iVar7 = iVar4 + 1;
            iVar4 = iVar4 + 1;
            cVar2 = *(char *)(iVar7 + (int)puVar6);
          }
          iVar8 = iVar8 + iVar4;
          FUN_50106b60((undefined *)puVar6);
        }
        else {
          local_400[iVar8] = cVar2;
          iVar8 = iVar8 + 1;
        }
        local_40c = local_40c + 1;
      } while (*local_40c != '\0');
    }
    local_400[iVar8] = '\0';
    *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x29c) = 0;
    iVar8 = 0;
    while ((local_400[0] != '\0' && (iVar8 < 0x100))) {
      *(char *)(*(int *)(param_1 + 0x45c) + 0x2af + iVar8 + 1) = local_400[0];
      local_400[0] = local_400[iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x45c) + 0x2b0 + iVar8 + -1) = 0;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x294) = (float)((iVar8 + -1) / 5) + DAT_5015ccdc;
    if (*(float *)(*(int *)(param_1 + 0x45c) + 0x294) < DAT_5015ccdc + 2.5) {
      *(float *)(*(int *)(param_1 + 0x45c) + 0x294) = DAT_5015ccdc + 2.5;
    }
    if (bVar3) {
      *(int *)(*(int *)(param_1 + 0x45c) + 0x290) = param_2;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x290) = 0;
    }
    *(int *)(*(int *)(param_1 + 0x45c) + 0x2a4) = param_3;
  }
  return;
}

