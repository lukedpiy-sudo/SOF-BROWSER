// rea decompile_all
// name: FUN_300116d0
// address: 0x300116d0
// body: available
// range: 0x300116d0-0x3001186c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300116d0(void)

{
  float10 fVar1;
  float10 fVar2;
  int iVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_c [3];
  
  if ((*(byte *)(DAT_3008fed8 + 0x54) & 8) == 0) {
    uStack_20 = 0x3001170b;
    FUN_30008ff0((float *)(DAT_3008fed8 + 0x28),local_c,0xff);
  }
  else {
    local_c[2] = 1.0;
    local_c[1] = 1.0;
    local_c[0] = 1.0;
  }
  (*DAT_300a4624)();
  iVar3 = DAT_3008fed8;
  uStack_20 = *(undefined4 *)(DAT_3008fed8 + 0x28);
  uStack_24 = 0x30011738;
  (*DAT_300a4698)();
  uStack_30 = *(undefined4 *)(iVar3 + 8);
  uStack_24 = 0x3f800000;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_34 = 0x3001174e;
  (*DAT_300a43b8)();
  uStack_34 = 0;
  uStack_38 = 0x3f800000;
  uStack_3c = 0;
  fStack_40 = -*(float *)(iVar3 + 4);
  uStack_44 = 0x30011766;
  (*DAT_300a43b8)();
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0x3f800000;
  (*DAT_300a43b8)(-*(float *)(iVar3 + 0xc));
  (*DAT_300a44ec)(0xde1);
  (*DAT_300a4724)(&uStack_4c);
  FUN_3001b650();
  (*DAT_300a4710)(6);
  (*DAT_300a47c4)(0,0,0xc1800000);
  iVar3 = 0;
  do {
    fVar1 = (float10)fsin((float10)iVar3 * (float10)1.5707963267948966);
    fVar2 = (float10)fcos((float10)iVar3 * (float10)1.5707963267948966);
    (*DAT_300a47c4)((float)(fVar2 * (float10)16.0),(float)(fVar1 * (float10)16.0),0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  (*DAT_300a45f4)();
  FUN_3001b650();
  (*DAT_300a4710)(6);
  (*DAT_300a47c4)(0,0,0x41800000);
  iVar3 = 4;
  do {
    fVar1 = (float10)fsin((float10)iVar3 * (float10)1.5707963267948966);
    fVar2 = (float10)fcos((float10)iVar3 * (float10)1.5707963267948966);
    (*DAT_300a47c4)((float)(fVar2 * (float10)16.0),(float)(fVar1 * (float10)16.0),0);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  (*DAT_300a45f4)();
  (*DAT_300a47f0)();
  (*DAT_300a45fc)(0xde1);
  return;
}

