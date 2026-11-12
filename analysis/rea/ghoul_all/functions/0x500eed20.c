// rea decompile_all
// name: FUN_500eed20
// address: 0x500eed20
// body: available
// range: 0x500eed20-0x500eef10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500eed20(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iStack_6c;
  int iStack_68;
  char acStack_64 [100];
  
  DAT_5018b358 = '\0';
  if ((DAT_5015c4d8 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar2 != 0)) {
    if (**(char **)(DAT_5015c974 + 4) == '\0') {
      (*DAT_5015cb10)(s___________________________No_pmo_501542a0);
      return;
    }
    piVar6 = &iStack_68;
    uVar7 = 0;
    puVar3 = FUN_500fe1e0((byte *)s__s_gpl_50154294);
    iVar2 = (*DAT_5015cb64)(puVar3,piVar6,uVar7);
    iStack_6c = iStack_68;
    if (iVar2 == -1) {
      (*DAT_5015cb10)(s___________________________Could_n_50154248,*(undefined4 *)(DAT_5015c974 + 4)
                     );
      return;
    }
    while (iStack_6c != 0) {
      pcVar4 = FUN_500fe200(&iStack_6c);
      pcVar5 = acStack_64;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = -1;
      pcVar5 = acStack_64;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if (((iVar2 != -2) && (uVar7 = FUN_500eef20(acStack_64), (char)uVar7 != '\0')) &&
         (DAT_5018b358 == '\0')) {
        FUN_500fe2b0();
      }
    }
    (*DAT_5015cb68)(iStack_68);
    if (**(char **)(DAT_5015d27c + 4) != '\0') {
      piVar6 = &iStack_68;
      uVar7 = 0;
      puVar3 = FUN_500fe1e0((byte *)s__s_gpl_50154294);
      iVar2 = (*DAT_5015cb64)(puVar3,piVar6,uVar7);
      iStack_6c = iStack_68;
      if (iVar2 != -1) {
        while (iStack_6c != 0) {
          pcVar4 = FUN_500fe200(&iStack_6c);
          pcVar5 = acStack_64;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          iVar2 = -1;
          pcVar5 = acStack_64;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (((iVar2 != -2) && (uVar7 = FUN_500eef20(acStack_64), (char)uVar7 != '\0')) &&
             (DAT_5018b358 == '\0')) {
            FUN_500fe2b0();
          }
        }
        (*DAT_5015cb68)(iStack_68);
      }
    }
    if ((DAT_5018b358 == '\0') && (uVar7 = FUN_500eef20(s_mullins_50146a9c), (char)uVar7 != '\0')) {
      iVar2 = 0;
      do {
        pcVar5 = s_mullins_gpm_50154238 + iVar2;
        (&DAT_5018b358)[iVar2] = *pcVar5;
        iVar2 = iVar2 + 1;
      } while (*pcVar5 != '\0');
    }
  }
  return;
}

