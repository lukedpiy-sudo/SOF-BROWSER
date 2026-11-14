// rea decompile_all
// name: FUN_3002aa94
// address: 0x3002aa94
// body: available
// range: 0x3002aa94-0x3002abc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_3002aa94(int param_1)

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
    puVar3 = &DAT_300aa780;
    pcVar7 = DAT_300aa780;
  }
  else if (((param_1 == 4) || (param_1 == 8)) || (param_1 == 0xb)) {
    puVar4 = FUN_3002abc1(param_1);
    pcVar7 = *(code **)(puVar4 + 8);
    puVar3 = (undefined4 *)(puVar4 + 8);
  }
  else if (param_1 == 0xf) {
    puVar3 = &DAT_300aa78c;
    pcVar7 = DAT_300aa78c;
  }
  else if (param_1 == 0x15) {
    puVar3 = &DAT_300aa784;
    pcVar7 = DAT_300aa784;
  }
  else {
    if (param_1 != 0x16) {
      return 0xffffffff;
    }
    puVar3 = &DAT_300aa788;
    pcVar7 = DAT_300aa788;
  }
  if (pcVar7 == (code *)0x1) {
    return 0;
  }
  if (pcVar7 == (code *)0x0) {
    __exit(3);
    puVar3 = extraout_EAX;
  }
  iVar1 = DAT_300aa77c;
  iVar5 = DAT_30034adc;
  if (((param_1 == 8) || (param_1 == 0xb)) || (iVar6 = param_1, param_1 == 4)) {
    DAT_300aa77c = 0;
    iVar6 = iVar1;
    if (param_1 == 8) {
      DAT_30034adc = 0x8c;
      param_1 = iVar5;
      goto LAB_3002ab58;
    }
LAB_3002ab84:
    *puVar3 = 0;
    if (iVar2 != 8) {
      (*pcVar7)(iVar2);
      if ((iVar2 != 0xb) && (iVar2 != 4)) {
        return 0;
      }
      goto LAB_3002aba7;
    }
  }
  else {
LAB_3002ab58:
    if (iVar2 != 8) goto LAB_3002ab84;
    if (DAT_30034ad0 < DAT_30034ad4 + DAT_30034ad0) {
      iVar5 = (DAT_30034ad4 + DAT_30034ad0) - DAT_30034ad0;
      puVar3 = (undefined4 *)(DAT_30034ad0 * 0xc + 0x30034a60);
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  (*pcVar7)(8,DAT_30034adc);
LAB_3002aba7:
  if (iVar2 == 8) {
    DAT_30034adc = param_1;
  }
  DAT_300aa77c = iVar6;
  return 0;
}

