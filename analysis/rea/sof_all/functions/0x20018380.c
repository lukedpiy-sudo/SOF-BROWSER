// rea decompile_all
// name: FUN_20018380
// address: 0x20018380
// body: available
// range: 0x20018380-0x2001852c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20018380(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int in_stack_00002004;
  char *in_stack_00002008;
  
  FUN_200fa720();
  uVar2 = DAT_2023f830;
  puVar4 = (undefined4 *)0x0;
  if (in_stack_00002004 == 0) {
    puVar4 = &DAT_20241848;
    puVar5 = (undefined4 *)register0x00000010;
    for (uVar3 = DAT_2023f830 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = DAT_2023f830 & 3;
    DAT_2023f830 = 0;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_200194f0(in_stack_00002008);
    FUN_20018530();
    puVar4 = (undefined4 *)register0x00000010;
    puVar5 = &DAT_20241848;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    DAT_2023f830 = uVar2;
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  else {
    if (in_stack_00002004 != 1) {
      if (in_stack_00002004 != 2) {
        Com_Error(0,s_Cbuf_ExecuteText__bad_exec_when_201200d0);
        return;
      }
      uVar2 = 0xffffffff;
      pcVar7 = in_stack_00002008;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (DAT_2023f82c <= (int)((~uVar2 - 1) + DAT_2023f830)) {
        Com_Printf(s_Cbuf_AddText__overflow_201200b8);
        return;
      }
      uVar2 = 0xffffffff;
      pcVar7 = in_stack_00002008;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_2001e7b0(&DAT_2023f824,in_stack_00002008,~uVar2 - 1);
      return;
    }
    if (DAT_2023f830 != 0) {
      puVar4 = (undefined4 *)Z_Malloc(DAT_2023f830);
      puVar5 = DAT_2023f828;
      puVar6 = puVar4;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      FUN_2001e730(&DAT_2023f824);
    }
    uVar3 = 0xffffffff;
    pcVar7 = in_stack_00002008;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if ((int)((~uVar3 - 1) + DAT_2023f830) < DAT_2023f82c) {
      uVar3 = 0xffffffff;
      pcVar7 = in_stack_00002008;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_2001e7b0(&DAT_2023f824,in_stack_00002008,~uVar3 - 1);
    }
    else {
      Com_Printf(s_Cbuf_AddText__overflow_201200b8);
    }
    if (uVar2 != 0) {
      FUN_2001e7b0(&DAT_2023f824,puVar4,uVar2);
      Z_Free(puVar4);
      return;
    }
  }
  return;
}

