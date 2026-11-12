// rea decompile_all
// name: FUN_500afaf0
// address: 0x500afaf0
// body: available
// range: 0x500afaf0-0x500afb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500afaf0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0xffffffff;
  pcVar5 = *(char **)(param_1 + 0x1ac);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = *(int *)(param_1 + 0x344);
  do {
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x318) != 0) {
      iVar3 = *(int *)(iVar2 + 0x318) + -1;
      if ((int)(~uVar4 - 1) < iVar3) {
LAB_500afb5b:
        *(undefined4 *)(iVar2 + 0x28) = 0xc;
      }
      else {
        cVar1 = *(char *)(iVar3 + *(int *)(param_1 + 0x1ac));
        if ((cVar1 < '0') || ('9' < cVar1)) {
          if (cVar1 == '-') {
            *(undefined4 *)(iVar2 + 0x28) = 10;
          }
          else {
            if (cVar1 != ':') goto LAB_500afb5b;
            *(undefined4 *)(iVar2 + 0x28) = 0xb;
          }
        }
        else {
          *(int *)(iVar2 + 0x28) = cVar1 + -0x30;
        }
      }
    }
    iVar2 = *(int *)(iVar2 + 0x33c);
  } while( true );
}

