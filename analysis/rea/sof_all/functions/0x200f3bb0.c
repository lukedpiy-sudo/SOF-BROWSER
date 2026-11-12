// rea decompile_all
// name: FUN_200f3bb0
// address: 0x200f3bb0
// body: available
// range: 0x200f3bb0-0x200f3d1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f3bb0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  uVar5 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _malloc(~uVar5);
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  iVar7 = (int)pcVar2 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar7] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if (*pcVar2 == ':') {
    *pcVar2 = '\0';
    pcVar6 = pcVar2 + 1;
  }
  else {
    pcVar6 = (char *)FUN_200fa6a0(pcVar2,&DAT_20159c5c);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
      pcVar6 = pcVar6 + 2;
    }
  }
  pcVar3 = (char *)FUN_200fb453(pcVar2,&DAT_2011d72c);
  while (pcVar3 != (char *)0x0) {
    iVar7 = FUN_200f9a92(*(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 0x24) * 4 + 4);
    if (iVar7 == 0) goto LAB_200f3d0f;
    *(int *)(param_2 + 0x20) = iVar7;
    uVar5 = 0xffffffff;
    pcVar8 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pvVar4 = _malloc(~uVar5);
    if (pvVar4 == (void *)0x0) goto LAB_200f3d0f;
    iVar7 = (int)pvVar4 - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar7] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(void **)(*(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x24) * 4) = pvVar4;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    pcVar3 = (char *)FUN_200fb453(0,&DAT_2011d72c);
  }
  if (pcVar6 == (char *)0x0) {
LAB_200f3cf8:
    FUN_200f9d32(pcVar2);
    return 1;
  }
  iVar7 = FUN_200f9a92(*(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 0x24) * 4 + 4);
  if (iVar7 != 0) {
    *(int *)(param_2 + 0x20) = iVar7;
    uVar5 = 0xffffffff;
    pcVar3 = pcVar6;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pvVar4 = _malloc(~uVar5);
    if (pvVar4 != (void *)0x0) {
      iVar7 = (int)pvVar4 - (int)pcVar6;
      do {
        cVar1 = *pcVar6;
        pcVar6[iVar7] = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      *(void **)(*(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x24) * 4) = pvVar4;
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
      goto LAB_200f3cf8;
    }
  }
LAB_200f3d0f:
  FUN_200f9d32(pcVar2);
  return 0;
}

