// rea decompile_all
// name: FUN_20012ba0
// address: 0x20012ba0
// body: available
// range: 0x20012ba0-0x20012d3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20012ba0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = __ftol();
  iVar6 = DAT_2022fee8;
  if (DAT_20225ed8 < local_20) {
    local_20 = DAT_20225ed8;
  }
  iVar4 = DAT_20225edc + DAT_20225ed4;
  __ftol();
  local_1c = __ftol();
  local_18 = 0;
  if (0 < local_20) {
    do {
      local_14 = 5;
      iVar7 = 0;
      puVar5 = &DAT_20225efc + ((DAT_20225e9c - local_18) - 1U & 0x3ff) * 0x28;
      do {
        if (*(float *)(puVar5 + -0x14) != 0.0) {
          if (*(float *)(puVar5 + -0x14) * *(float *)(DAT_2022fefc + 0x18) +
              *(float *)(DAT_202259ec + 0x18) < 0.0) {
            __ftol();
          }
          iVar1 = __ftol();
          iVar2 = __ftol();
          iVar3 = iVar4 - iVar7;
          (*DAT_204035ec)((float)local_1c,(float)iVar3,(float)local_1c,
                          (float)(iVar3 - iVar2 % iVar1),*(undefined4 *)(iVar6 + 0x18),puVar5);
          iVar7 = iVar7 + iVar2 % iVar1;
          iVar6 = DAT_2022fee8;
        }
        puVar5 = puVar5 + 4;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_1c = __ftol();
      local_18 = local_18 + 1;
    } while (local_18 < local_20);
  }
  return;
}

