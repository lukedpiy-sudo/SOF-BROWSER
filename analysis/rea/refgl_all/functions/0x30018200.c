// rea decompile_all
// name: FUN_30018200
// address: 0x30018200
// body: available
// range: 0x30018200-0x30018348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30018200(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  int iVar5;
  int unaff_retaddr;
  
  DAT_300a4610 = 0x302;
  DAT_300a43fc = 0x303;
  if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  DAT_300a46e0 = DAT_300a46e0 | 1;
  if (((byte)DAT_300a4588 & 1) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a446c)(0x1d01);
  FUN_300062a0(0x2100);
  DAT_300a46e0 = DAT_300a46e0 & 0xfffffffd;
  if (((byte)DAT_300a4588 & 2) == 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  FUN_30017150((undefined4 *)(unaff_retaddr + 0x28));
  iVar4 = 0;
  if (*(int *)(*param_1 + 4) != 1 && -1 < *(int *)(*param_1 + 4) + -1) {
    do {
      iVar2 = param_1[1];
      iVar5 = 0;
      if (0 < iVar2) {
        do {
          if (iVar5 != 0) {
            iVar2 = iVar5;
          }
          if (iVar5 != param_1[2]) {
            iVar2 = *(int *)(*param_1 + (iVar2 + -1) * 0x1c);
            iVar1 = *(int *)(*param_1 + iVar5 * 0x1c);
            iVar3 = (iVar4 + 1) * 0x38;
            FUN_30017b80((void *)(iVar4 * 0x38 + iVar1),iVar3 + iVar1,iVar2 + iVar4 * 0x38,
                         iVar2 + iVar3);
            param_1 = unaff_EBX;
          }
          iVar2 = param_1[1];
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*param_1 + 4) + -1);
  }
  FUN_30017240(unaff_retaddr + 0x28);
  return;
}

