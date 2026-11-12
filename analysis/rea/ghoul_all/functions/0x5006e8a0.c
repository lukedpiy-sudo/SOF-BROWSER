// rea decompile_all
// name: FUN_5006e8a0
// address: 0x5006e8a0
// body: available
// range: 0x5006e8a0-0x5006e97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5006e8a0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = 1;
  if (0 < DAT_5015d8c8) {
    iVar5 = 0x464;
    do {
      iVar1 = DAT_5015cca0 + iVar5;
      if (((*(int *)(DAT_5015cca0 + 0x78 + iVar5) != 0) && (*(int *)(iVar1 + 0x74) != 0)) &&
         (**(int **)(*(int *)(iVar1 + 0x74) + 0x350) == param_1)) {
        iVar6 = 0;
        iVar2 = FUN_5006b5c0();
        if (1 < iVar2) {
          uVar3 = FUN_50107636();
          iVar2 = (int)uVar3 % DAT_5015d8c8 + 1;
          do {
            iVar4 = iVar2 + 1;
            iVar6 = DAT_5015cca0 + iVar2 * 0x464;
            if (DAT_5015d8c8 < iVar4) {
              iVar4 = 1;
            }
            iVar2 = iVar4;
          } while (((*(int *)(iVar6 + 0x78) == 0) || (*(int *)(*(int *)(iVar6 + 0x74) + 0x2dc) != 0)
                   ) || ((*(int *)(iVar6 + 0x74) == 0 || (iVar6 == iVar1))));
        }
        *(int *)(*(int *)(*(int *)(iVar1 + 0x74) + 0x350) + 4) = iVar6;
      }
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x464;
    } while (local_8 <= DAT_5015d8c8);
  }
  (**(code **)(*(int *)this + 0x44))();
  return;
}

