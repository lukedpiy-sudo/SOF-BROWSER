// rea decompile_all
// name: FUN_300167b0
// address: 0x300167b0
// body: available
// range: 0x300167b0-0x30016939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_300167b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_30020910();
  puVar1 = &DAT_3009042c;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_3008fd90 = 1;
  FUN_30006170('\x01');
  uStack_10 = 0x300167e4;
  FUN_30006130(0x84c1);
  puVar1 = &DAT_300a0634;
  do {
    puVar1[-1] = 0x3f800000;
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0x40400000;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x300a1634);
  DAT_3008fd44 = &DAT_300a0630;
  if (DAT_3008ffd0 == 0) {
    DAT_3008ffd0 = 0x400;
  }
  DAT_30090024 = 1;
  uVar2 = FUN_30020f12(*(char **)(DAT_3008fc68 + 4),(int)**(char **)(DAT_3008fc68 + 4));
  if (uVar2 == 0x41) {
    DAT_30090020 = 4;
  }
  else {
    uVar2 = FUN_30020f12(*(char **)(DAT_3008fc68 + 4),(int)**(char **)(DAT_3008fc68 + 4));
    if (uVar2 == 0x43) {
      DAT_30090020 = 4;
    }
    else {
      uVar2 = FUN_30020f12(*(char **)(DAT_3008fc68 + 4),(int)**(char **)(DAT_3008fc68 + 4));
      if (uVar2 == 0x49) {
        DAT_30090020 = 0x804b;
      }
      else {
        uVar2 = FUN_30020f12(*(char **)(DAT_3008fc68 + 4),(int)**(char **)(DAT_3008fc68 + 4));
        DAT_30090020 = (-(uint)(uVar2 != 0x4c) & 0xffff7fc3) + 0x8040;
      }
    }
  }
  FUN_300062f0(DAT_3008ffd0);
  uStack_10 = 0x300168ef;
  (*DAT_300a457c)();
  uStack_10 = 0x46180400;
  uStack_14 = 0x2800;
  uStack_18 = 0xde1;
  (*DAT_300a457c)();
  (*DAT_300a43f4)(0xde1,0,DAT_30090020,0x80,0x80,0,0x1908,0x1401,&uStack_18);
  return;
}

