// rea decompile_all
// name: FUN_500ad490
// address: 0x500ad490
// body: available
// range: 0x500ad490-0x500ad5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500ad59c to 0x5004c3a0 FUN_5004c3a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500ad490(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  (*DAT_5015ca24)(s______ShutdownGame______5014cc38);
  uVar3 = extraout_ECX;
  if (DAT_5015d9b8 != 0) {
    (**(code **)(DAT_5015d9b8 + 0x20))();
    uVar3 = extraout_ECX_00;
  }
  FUN_500761a0(uVar3);
  FUN_5005cfa0(0x50159a60);
  FUN_50057d70(&DAT_50159680);
  iVar4 = 0;
  if (0 < DAT_5015d8c8) {
    iVar5 = 0;
    iVar2 = DAT_5015cca0;
    do {
      if (*(int *)(iVar5 + 0x4d8 + iVar2) != 0) {
        puVar1 = *(undefined4 **)(iVar5 + 0x8c0 + iVar2);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
          *(undefined4 *)(iVar5 + 0x8c0 + DAT_5015cca0) = 0;
          iVar2 = DAT_5015cca0;
        }
        FUN_500efb70(iVar5 + 0x464 + iVar2);
        FUN_500f4cf0(iVar5 + 0x464 + DAT_5015cca0);
        FUN_50106b60(*(undefined **)(*(int *)(iVar5 + 0x4d8 + DAT_5015cca0) + 0x350));
        *(undefined4 *)(*(int *)(iVar5 + 0x4d8 + DAT_5015cca0) + 0x6c) = 0;
        iVar2 = DAT_5015cca0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x464;
    } while (iVar4 < DAT_5015d8c8);
  }
  FUN_50068be0((int *)&DAT_5015c7b8);
  FUN_500c3a20();
  *DAT_5015cafc = 0;
  FUN_500b9e90();
  FUN_50096c00();
  FUN_5006b730();
  FUN_5004c3a0(&DAT_50159120);
  return;
}

