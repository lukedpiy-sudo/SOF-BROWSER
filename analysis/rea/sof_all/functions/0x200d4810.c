// rea decompile_all
// name: FUN_200d4810
// address: 0x200d4810
// body: available
// range: 0x200d4810-0x200d4acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d4810(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  undefined1 *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ead8;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  if (*(int *)(in_ECX + 0x50) == 0) {
    pcVar3 = &DAT_2015ee44;
  }
  else {
    pcVar3 = *(char **)(*(int *)(in_ECX + 0x50) + 4);
  }
  uVar4 = 0xffffffff;
  pcVar6 = pcVar3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(pcVar3,~uVar4 - 1);
  switch(param_1) {
  case 8:
  case 0x2e:
    if (local_14 != 0) {
      FUN_2000a930();
      if (local_18 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        puVar5 = local_18 + local_14;
      }
      FUN_2000a930();
      if (puVar5 + -1 == (undefined1 *)0x0) {
        FUN_20027e40(0,1);
      }
      else {
        FUN_20027e40((int)(puVar5 + -1) - (int)local_18,1);
      }
    }
    break;
  default:
    pcVar3 = (char *)FUN_2004b3f0();
    if (pcVar3 == (char *)0x0) {
      cVar1 = FUN_2004b460(param_1);
      if (cVar1 != '\0') {
        FUN_200e3570(1,cVar1);
      }
    }
    else {
      uVar4 = 0xffffffff;
      pcVar6 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_200e3d90(pcVar3,~uVar4 - 1);
      FUN_200f9d32(pcVar3);
    }
    break;
  case 0xd:
  case 0xe:
  case 0x1b:
    break;
  case 0x26:
    if (((*(char *)(in_ECX + 0xa8) == '\0') || (*(int *)(in_ECX + 0xc4) == 0)) ||
       (*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 4 == 0)) break;
    iVar2 = *(int *)(in_ECX + 0xbc) + -1;
    *(int *)(in_ECX + 0xbc) = iVar2;
    if (iVar2 < 0) {
      if (*(int *)(in_ECX + 0xc4) == 0) {
        *(int *)(in_ECX + 0xbc) = iVar2;
      }
      else {
        *(int *)(in_ECX + 0xbc) = iVar2 + (*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 4);
      }
    }
    goto LAB_200d49d9;
  case 0x28:
    if (((*(char *)(in_ECX + 0xa8) == '\0') || (*(int *)(in_ECX + 0xc4) == 0)) ||
       (*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 4 == 0)) break;
    uVar4 = *(int *)(in_ECX + 0xbc) + 1;
    *(uint *)(in_ECX + 0xbc) = uVar4;
    if ((*(int *)(in_ECX + 0xc4) == 0) ||
       ((uint)(*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 4) <= uVar4)) {
      if (*(int *)(in_ECX + 0xc4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 4;
      }
      *(uint *)(in_ECX + 0xbc) = uVar4 - iVar2;
    }
LAB_200d49d9:
    FUN_2000a3a0(*(int *)(in_ECX + 0xbc) * 0x10 + *(int *)(in_ECX + 0xc4),0,0xffffffff);
  }
  FUN_200d4060(local_1c);
  puVar5 = &DAT_201116cc;
  if (local_18 != (undefined1 *)0x0) {
    puVar5 = local_18;
  }
  if (*(undefined4 **)(in_ECX + 0x50) != (undefined4 *)0x0) {
    Cvar_Set(**(undefined4 **)(in_ECX + 0x50),puVar5);
  }
  FUN_2000a3a0(local_1c,0,0xffffffff);
  if (local_18 != (undefined1 *)0x0) {
    if (local_18[-1] != '\0') {
      local_18[-1] = local_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

