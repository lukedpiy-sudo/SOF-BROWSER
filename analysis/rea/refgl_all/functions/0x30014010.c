// rea decompile_all
// name: FUN_30014010
// address: 0x30014010
// body: available
// range: 0x30014010-0x3001411c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_30014010(float param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float unaff_EBP;
  int iVar5;
  float unaff_retaddr;
  float local_4;
  
  fVar2 = param_1;
  iVar1 = *(int *)((int)param_1 + 0x28);
  if ((*(int *)((int)param_1 + 0x38) == 0) ||
     (uVar3 = FUN_30012710((int)param_1), (char)uVar3 == '\0')) {
    iVar5 = iVar1 + 8;
    if ((*(byte *)(*(int *)((int)fVar2 + 0x34) + 0x20) & 0x40) == 0) {
      FUN_3001b650();
      (*DAT_300a4710)(6);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          (*DAT_300a465c)(iVar5 + 0xc);
          (*DAT_300a4520)(iVar5);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x1c;
        } while (iVar4 < *(int *)(iVar1 + 4));
      }
    }
    else {
      FUN_300127d0((int)fVar2,&local_4,&param_1);
      FUN_3001b650();
      (*DAT_300a4710)(6);
      iVar4 = 0;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          (*DAT_300a42f4)(*(float *)(iVar5 + 0xc) - unaff_EBP,
                          *(float *)(iVar5 + 0x10) - unaff_retaddr);
          (*DAT_300a4520)(iVar5);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x1c;
        } while (iVar4 < *(int *)(iVar1 + 4));
      }
    }
    (*DAT_300a45f4)();
    if ((((*(int *)((int)fVar2 + 0x38) != 0) &&
         ((*(uint *)(*(int *)((int)fVar2 + 0x34) + 0x20) & 0x10000) == 0)) &&
        (*(int *)(DAT_3008fb98 + 0x18) == 0x3f800000)) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
  }
  return;
}

