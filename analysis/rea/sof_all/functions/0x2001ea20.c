// rea decompile_all
// name: FUN_2001ea20
// address: 0x2001ea20
// body: available
// range: 0x2001ea20-0x2001eac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001ea20(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 + 0x10;
  puVar3 = _malloc(uVar4);
  if (puVar3 == (undefined4 *)0x0) {
    Com_Error(0,s_Z_Malloc__failed_on_allocation_o_201213dc,uVar4);
  }
  puVar7 = puVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DAT_20249634 = DAT_20249634 + 1;
  DAT_20249e70 = DAT_20249e70 + uVar4;
  *(undefined2 *)(puVar3 + 2) = 0x1d1d;
  *(undefined2 *)((int)puVar3 + 10) = 0;
  puVar3[3] = uVar4;
  puVar3[1] = DAT_20249e58;
  *puVar3 = &DAT_20249e54;
  *DAT_20249e58 = puVar3;
  iVar2 = 0x10 - (int)param_1;
  DAT_20249e58 = puVar3;
  do {
    cVar1 = *param_1;
    param_1[(int)((int)puVar3 + iVar2)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

