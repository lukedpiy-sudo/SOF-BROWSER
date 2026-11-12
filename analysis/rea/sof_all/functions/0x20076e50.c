// rea decompile_all
// name: FUN_20076e50
// address: 0x20076e50
// body: available
// range: 0x20076e50-0x2007703c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20076e50(short param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_15;
  int *local_14;
  int *local_10;
  undefined1 local_c [8];
  undefined1 local_4 [4];
  
  if ((int)param_1 == *(short *)(in_ECX + 0x14) + -1) {
    piVar5 = *(int **)(in_ECX + 4);
    *(short *)(in_ECX + 0x14) = *(short *)(in_ECX + 0x14) + -1;
    local_10 = piVar5;
    if (piVar5 != (int *)*piVar5) {
      do {
        local_14 = piVar5;
        FUN_20074e10();
        local_10 = piVar5;
        if ((int)(short)local_14[3] != *(short *)(in_ECX + 0x14) + -1) break;
        *(short *)(in_ECX + 0x14) = *(short *)(in_ECX + 0x14) + -1;
        piVar5 = local_14;
        local_10 = local_14;
      } while (local_14 != (int *)**(undefined4 **)(in_ECX + 4));
    }
    piVar5 = *(int **)(in_ECX + 4);
    if ((*(int *)(in_ECX + 0x10) != 0) && (local_10 == (int *)*piVar5)) {
      FUN_20073210(piVar5[1]);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 4) = *(undefined4 *)(in_ECX + 8);
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)*(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 4);
      *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
      FUN_20083550(local_c);
      return;
    }
    if (local_10 != piVar5) {
      do {
        piVar2 = local_10;
        FUN_20073500();
        FUN_200719a0(local_4,piVar2);
      } while (local_10 != piVar5);
      return;
    }
  }
  else {
    bVar1 = true;
    piVar5 = *(int **)(in_ECX + 4);
    piVar2 = (int *)(*(int **)(in_ECX + 4))[1];
    while (piVar2 != *(int **)(in_ECX + 8)) {
      bVar1 = param_1 < (short)piVar2[3];
      piVar5 = piVar2;
      if (bVar1) {
        piVar2 = (int *)*piVar2;
      }
      else {
        piVar2 = (int *)piVar2[2];
      }
    }
    if (*(char *)(in_ECX + 0xc) != '\0') {
      puVar6 = &local_15;
      local_15 = 1;
      uVar3 = FUN_20073250(local_4,piVar2,piVar5,&param_1);
      FUN_2008c5b0(uVar3,puVar6);
      return;
    }
    local_14 = piVar5;
    if (bVar1) {
      puVar4 = (undefined4 *)FUN_20083550(local_4);
      if (local_14 == (int *)*puVar4) {
        puVar6 = &local_15;
        local_15 = 1;
        uVar3 = FUN_20073250(local_4,piVar2,piVar5,&param_1);
        FUN_2008c5b0(uVar3,puVar6);
        return;
      }
      FUN_20074e10();
    }
    puVar6 = &local_15;
    if ((short)local_14[3] < param_1) {
      local_15 = 1;
      uVar3 = FUN_20073250(local_4,piVar2,piVar5,&param_1);
      FUN_2008c5b0(uVar3,puVar6);
      return;
    }
    local_15 = 0;
    FUN_2008c5b0(&local_14,puVar6);
  }
  return;
}

