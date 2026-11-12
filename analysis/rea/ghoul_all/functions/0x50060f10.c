// rea decompile_all
// name: FUN_50060f10
// address: 0x50060f10
// body: available
// range: 0x50060f10-0x500611c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50060f10(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *local_204;
  char local_200 [512];
  
  pcVar6 = local_200;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  local_204 = (int *)**(int **)((int)this + 0x54);
  if (local_204 != *(int **)((int)this + 0x54)) {
    do {
      FUN_500fe2b0();
      uVar5 = 0xffffffff;
      pcVar6 = local_200;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
      FUN_5006b290((int *)&local_204);
    } while (local_204 != *(int **)((int)this + 0x54));
  }
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  local_204 = (int *)**(int **)((int)this + 0x68);
  if (local_204 != *(int **)((int)this + 0x68)) {
    do {
      FUN_500fe2b0();
      uVar5 = 0xffffffff;
      pcVar6 = local_200;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
      FUN_5006b290((int *)&local_204);
    } while (local_204 != *(int **)((int)this + 0x68));
  }
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  local_204 = (int *)**(int **)((int)this + 0x7c);
  if (local_204 != *(int **)((int)this + 0x7c)) {
    do {
      FUN_500fe2b0();
      uVar5 = 0xffffffff;
      pcVar6 = local_200;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
      piVar3 = (int *)local_204[2];
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x15);
        piVar2 = (int *)*piVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
LAB_50061178:
        local_204 = piVar3;
      }
      else {
        piVar3 = (int *)local_204[1];
        if (local_204 == (int *)piVar3[2]) {
          do {
            local_204 = piVar3;
            piVar3 = (int *)local_204[1];
          } while (local_204 == (int *)piVar3[2]);
        }
        if ((int *)local_204[2] != piVar3) goto LAB_50061178;
      }
    } while (local_204 != *(int **)((int)this + 0x7c));
  }
  FUN_500fe2b0();
  uVar5 = 0xffffffff;
  pcVar6 = local_200;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_5010784a(local_200,~uVar5 - 1,1,param_1);
  return;
}

