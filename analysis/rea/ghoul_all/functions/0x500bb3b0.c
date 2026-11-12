// rea decompile_all
// name: FUN_500bb3b0
// address: 0x500bb3b0
// body: available
// range: 0x500bb3b0-0x500bb49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bb3b0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_46c;
  int local_468;
  undefined4 auStack_464 [276];
  undefined4 local_14;
  
  iVar1 = 0;
  local_14 = 0;
  local_468 = 0;
  local_46c = 0;
  if (0 < DAT_5015c938) {
    piVar2 = DAT_5015cca0 + 0x1e;
    do {
      if (*piVar2 != 0) {
        local_468 = local_468 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x119;
      local_46c = iVar1;
    } while (iVar1 < DAT_5015c938);
  }
  (*DAT_5015cb44)(0x4e4d4544,&local_468,4);
  local_46c = 0;
  puVar3 = DAT_5015cca0;
  if (0 < DAT_5015c938) {
    do {
      if (puVar3[0x1e] != 0) {
        (*DAT_5015cb44)(0x45444e4d,&local_46c,4);
        (*DAT_5015cb2c)(puVar3);
        puVar4 = puVar3;
        puVar5 = auStack_464;
        for (iVar1 = 0x119; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        (*DAT_5015cb28)(puVar3);
        FUN_500ba790((int *)&PTR_DAT_5014df20,(int)auStack_464,0x45444354,0x464);
      }
      local_46c = local_46c + 1;
      puVar3 = puVar3 + 0x119;
    } while (local_46c < DAT_5015c938);
  }
  return;
}

