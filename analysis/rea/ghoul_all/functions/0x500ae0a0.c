// rea decompile_all
// name: FUN_500ae0a0
// address: 0x500ae0a0
// body: available
// range: 0x500ae0a0-0x500ae229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500ae225 to 0x50096c00 FUN_50096c00 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500ae0a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 local_100 [256];
  
  puVar8 = local_100;
  pcVar10 = s_gamemap___s__5014cd94;
  uVar9 = 0x100;
  uVar11 = DAT_5015d1cc;
  FUN_500fe2b0();
  (*DAT_5015cb78)(local_100,puVar8,uVar9,pcVar10,uVar11);
  DAT_5015d1cc = 0;
  DAT_5015d1d0 = 0;
  _DAT_5015d1c8 = 0;
  iVar6 = 0;
  lVar7 = __ftol();
  if (0 < (int)lVar7) {
    iVar4 = 0x464;
    do {
      if ((*(int *)(iVar4 + 0x78 + DAT_5015cca0) != 0) &&
         (((int *)(iVar4 + DAT_5015cca0))[0x1d] != 0)) {
        FUN_500f9a00((int *)(iVar4 + DAT_5015cca0));
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x464;
      lVar7 = __ftol();
    } while (iVar6 < (int)lVar7);
  }
  FUN_5005cfa0(0x50159a60);
  FUN_50057d70(&DAT_50159680);
  iVar6 = 0;
  if (0 < DAT_5015d8c8) {
    iVar5 = 0;
    iVar4 = DAT_5015cca0;
    do {
      if ((*(int *)(iVar5 + 0x4d8 + iVar4) != 0) &&
         (puVar2 = *(undefined4 **)(iVar5 + 0x8c0 + iVar4), puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
        *(undefined4 *)(iVar5 + 0x8c0 + DAT_5015cca0) = 0;
        iVar4 = DAT_5015cca0;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x464;
    } while (iVar6 < DAT_5015d8c8);
  }
  (**(code **)(*DAT_5015c4d8 + 0x30))();
  DAT_5015d8d5 = 0;
  (*DAT_5015cb50)(s_sv_jumpcinematic_501454f0,&DAT_50144958);
  iVar6 = 0;
  lVar7 = __ftol();
  if (0 < (int)lVar7) {
    iVar5 = 0x464;
    iVar4 = DAT_5015cca0;
    do {
      if (*(int *)(iVar5 + 0x78 + iVar4) != 0) {
        iVar3 = *(int *)(iVar5 + 0x74 + iVar4);
        piVar1 = (int *)(iVar5 + 0x2ec + iVar4);
        iVar4 = *(int *)(iVar3 + 0x300);
        if (iVar4 < *piVar1) {
          *piVar1 = iVar4;
        }
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        iVar4 = DAT_5015cca0;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x464;
      lVar7 = __ftol();
    } while (iVar6 < (int)lVar7);
  }
  FUN_50096c00();
  return;
}

