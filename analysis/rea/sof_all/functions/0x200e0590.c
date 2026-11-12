// rea decompile_all
// name: FUN_200e0590
// address: 0x200e0590
// body: available
// range: 0x200e0590-0x200e079b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200e0590(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char local_80 [128];
  
  pcVar2 = (char *)FUN_20021760();
  pcVar7 = local_80;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = (char *)FUN_200fb453();
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar2 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    pcVar2 = *(char **)(in_ECX + 4);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    *(uint *)(in_ECX + 8) = uVar5;
    *(undefined1 *)(uVar5 + *(int *)(in_ECX + 4)) = 0;
  }
  iVar3 = FUN_200fb453();
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_200f9e13();
  *(undefined4 *)(in_ECX + 0x10) = uVar4;
  pcVar7 = (char *)FUN_200fb453();
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  uVar5 = 0xffffffff;
  pcVar2 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar5 - 1;
  uVar5 = FUN_2000a830();
  if (uVar5 < uVar6) {
    FUN_201075d0();
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if ((*(int *)(in_ECX + 0x18) == 0) || (*(char *)(*(int *)(in_ECX + 0x18) + -1) == '\0')) {
    if (uVar6 == 0) {
      FUN_2000a5b0();
      goto LAB_200e06fc;
    }
    if ((0x1f < *(uint *)(in_ECX + 0x20)) || (*(uint *)(in_ECX + 0x20) < uVar6)) {
      FUN_2000a5b0();
      goto LAB_200e06d5;
    }
  }
  else {
    if (uVar6 == 0) {
      FUN_2000a5b0();
      goto LAB_200e06fc;
    }
LAB_200e06d5:
    FUN_2000a840();
  }
  pcVar2 = *(char **)(in_ECX + 0x18);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  *(uint *)(in_ECX + 0x1c) = uVar6;
  *(undefined1 *)(uVar6 + *(int *)(in_ECX + 0x18)) = 0;
LAB_200e06fc:
  iVar3 = FUN_200fb453();
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = FUN_200f9e13();
  *(undefined4 *)(in_ECX + 0x24) = uVar4;
  uVar5 = CONCAT31((int3)((uint)uVar4 >> 8),param_3);
  if (param_3 != '\0') {
    FUN_2000a3a0(in_ECX,0,0xffffffff);
    FUN_200c87f0(param_2,(uint *)(in_ECX + 0x28),(int *)(in_ECX + 0x2c));
    uVar5 = *(uint *)(in_ECX + 0x28);
    if (((int)uVar5 < 1) || (*(int *)(in_ECX + 0x2c) < 1)) {
      return uVar5 & 0xffffff00;
    }
  }
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  return CONCAT31((int3)(uVar5 >> 8),1);
}

