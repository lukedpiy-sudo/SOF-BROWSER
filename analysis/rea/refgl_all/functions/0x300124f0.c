// rea decompile_all
// name: FUN_300124f0
// address: 0x300124f0
// body: available
// range: 0x300124f0-0x30012702 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300124f0(void)

{
  float fVar1;
  int iVar2;
  float unaff_EBP;
  int iVar3;
  float unaff_ESI;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  int unaff_retaddr;
  float afStack_74 [5];
  undefined1 local_60 [52];
  undefined4 local_2c;
  
  lVar6 = __ftol();
  local_2c = (undefined4)lVar6;
  DAT_3008fed8 = local_60;
  (*DAT_300a4350)(&DAT_3008fee8);
  if (*(int *)(unaff_retaddr + 0x38) != 0) {
    FUN_30012710(unaff_retaddr);
  }
  if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
    (*DAT_300a44ec)(0xde1);
  }
  iVar4 = *(int *)(unaff_retaddr + 0x34);
  if (*(int *)(iVar4 + 0x28) != 0) {
    if (((*(uint *)(iVar4 + 0x20) & 0x1000) == 0) ||
       (*(char *)(*(int *)(iVar4 + 0x2c) + 0x55) == '\0')) {
      iVar2 = *(int *)(DAT_3008fed8 + 0x34);
    }
    else {
      lVar6 = __ftol();
      iVar2 = (int)lVar6;
    }
    for (iVar2 = iVar2 % *(int *)(iVar4 + 0x24); iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar4 = *(int *)(iVar4 + 0x28);
    }
  }
  FUN_30006400(*(int *)(iVar4 + 0x2c));
  DAT_3008fda0 = DAT_3008fda0 + 1;
  if ((*(byte *)(*(int *)(unaff_retaddr + 0x34) + 0x20) & 8) == 0) {
    iVar4 = *(int *)(unaff_retaddr + 0x28);
    FUN_300127d0(unaff_retaddr,afStack_74,(float *)&stack0xffffff88);
    (*DAT_300a446c)(0x1d01);
    FUN_3001b650();
    (*DAT_300a4710)(6);
    iVar2 = *(int *)(iVar4 + 4);
    iVar3 = 0;
    pfVar5 = (float *)(iVar4 + 8);
    if (0 < iVar2) {
      do {
        fVar1 = *(float *)(DAT_3008fc98 + 0x18);
        if (fVar1 == 0.0) {
          FUN_30008ff0(pfVar5,(float *)&stack0xffffff88,0xff);
          (*DAT_300a4724)(&stack0xffffff88);
          (*DAT_300a42f4)(pfVar5[3] - unaff_ESI,pfVar5[4] - unaff_EBP);
        }
        else {
          (*DAT_300a4718)(CONCAT31((int3)(CONCAT22((short)((uint)iVar2 >> 0x10),
                                                   (ushort)(fVar1 < 0.0) << 8 |
                                                   (ushort)NAN(fVar1) << 10 |
                                                   (ushort)(fVar1 == 0.0) << 0xe) >> 8),
                                   *(undefined1 *)(unaff_retaddr + 0x28)),
                          *(int *)(unaff_retaddr + 0x28) >> 8,unaff_retaddr,0x60);
        }
        (*DAT_300a4520)(pfVar5);
        iVar2 = *(int *)(iVar4 + 4);
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 7;
      } while (iVar3 < iVar2);
    }
    (*DAT_300a45f4)();
  }
  else {
    FUN_30018640(unaff_retaddr);
  }
  if (*(float *)(DAT_3008fc98 + 0x18) != 0.0) {
    (*DAT_300a45fc)(0xde1);
  }
  if (*(int *)(unaff_retaddr + 0x38) != 0) {
    if ((((*(uint *)(*(int *)(unaff_retaddr + 0x34) + 0x20) & 0x10000) == 0) &&
        (*(int *)(DAT_3008fb98 + 0x18) == 0x3f800000)) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_30012d60(0,(float *)&DAT_300a5354);
  }
  return;
}

