// rea decompile_all
// name: FUN_200c9fe0
// address: 0x200c9fe0
// body: available
// range: 0x200c9fe0-0x200ca10e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_200c9fe0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  piVar6 = (int *)**(int **)(in_ECX + 0x1c);
  if (piVar6 != *(int **)(in_ECX + 0x1c)) {
    do {
      pcVar2 = *(char **)(piVar6[2] + 0x10);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = "";
      }
      iVar3 = __strcmpi(pcVar2,param_2);
      if (iVar3 == 0) {
        iVar3 = piVar6[2];
        if (iVar3 != 0) {
          uVar4 = 0xffffffff;
          pcVar2 = param_1;
          goto code_r0x200ca04e;
        }
        break;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(in_ECX + 0x1c));
  }
  Com_Printf(s_Error___Cannot_find_frame___s__20158704,param_2);
  return 0;
  while( true ) {
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x200ca04e:
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4 - 1;
  if (0xfffffffd < uVar4) {
    FUN_201075d0();
  }
  *(undefined4 *)(iVar3 + 0x24) = 0;
  if ((*(int *)(iVar3 + 0x20) == 0) || (*(char *)(*(int *)(iVar3 + 0x20) + -1) == '\0')) {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200ca0d7;
    }
    if ((0x1f < *(uint *)(iVar3 + 0x28)) || (*(uint *)(iVar3 + 0x28) < uVar4)) {
      FUN_2000a5b0(1);
      goto LAB_200ca0ac;
    }
  }
  else {
    if (uVar4 == 0) {
      FUN_2000a5b0(1);
      goto LAB_200ca0d7;
    }
LAB_200ca0ac:
    FUN_2000a840(uVar4);
  }
  pcVar2 = param_1;
  pcVar7 = *(char **)(iVar3 + 0x20);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  *(uint *)(iVar3 + 0x24) = uVar4;
  *(undefined1 *)(*(int *)(iVar3 + 0x20) + uVar4) = 0;
LAB_200ca0d7:
  cVar1 = FUN_200c67d0();
  if (cVar1 != '\0') {
    return *(undefined1 *)(in_ECX + 0x90);
  }
  Com_Printf(s_Error___Could_not_create___s__201586e4,param_1);
  return 0;
}

