// rea decompile_all
// name: FUN_5011176b
// address: 0x5011176b
// body: available
// range: 0x5011176b-0x50111897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5011176b(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *extraout_EAX;
  int iVar5;
  int iVar6;
  code *pcVar7;
  
  iVar2 = param_1;
  if (param_1 == 2) {
    puVar3 = &DAT_5018c5e8;
    pcVar7 = DAT_5018c5e8;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    puVar4 = FUN_50111898(param_1);
    pcVar7 = *(code **)(puVar4 + 8);
    puVar3 = (undefined4 *)(puVar4 + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_5018c5f4;
    pcVar7 = DAT_5018c5f4;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_5018c5ec;
    pcVar7 = DAT_5018c5ec;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_5018c5f0;
    pcVar7 = DAT_5018c5f0;
  }
  if (pcVar7 == (code *)0x1) {
    return 0;
  }
  if (pcVar7 == (code *)0x0) {
    __exit(3);
    puVar3 = extraout_EAX;
  }
  iVar1 = DAT_5018c5fc;
  iVar5 = DAT_50158d44;
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar6 = param_1, param_1 == 4)) {
    DAT_5018c5fc = 0;
    iVar6 = iVar1;
    if (param_1 == 8) {
      DAT_50158d44 = 0x8c;
      param_1 = iVar5;
      goto LAB_5011182f;
    }
LAB_5011185b:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar7)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_5011187e;
    }
  }
  else {
LAB_5011182f:
    if (iVar2 != 8) goto LAB_5011185b;
    if (DAT_50158d38 < DAT_50158d3c + DAT_50158d38) {
      iVar5 = (DAT_50158d3c + DAT_50158d38) - DAT_50158d38;
      puVar3 = (undefined4 *)(DAT_50158d38 * 0xc + 0x50158cc8);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  (*pcVar7)(8,DAT_50158d44);
LAB_5011187e:
  if (iVar2 == 8) {
    DAT_50158d44 = param_1;
  }
  DAT_5018c5fc = iVar6;
  return 0;
}

