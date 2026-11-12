// rea decompile_all
// name: FUN_200a23a0
// address: 0x200a23a0
// body: available
// range: 0x200a23a0-0x200a2b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a23a0(char *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_810;
  int *piStack_804;
  int iStack_7f4;
  char local_7e8 [2004];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_2010d2a6;
  local_14 = ExceptionList;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4[(int)(local_7e8 + -(int)param_1)] = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_2015764c;
  pcVar4 = local_7e8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  do {
    cVar1 = *pcVar8;
    (&stack0xdfea81c8 + ~uVar6)[(int)pcVar8] = cVar1;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_14;
  iVar5 = FUN_200faa9a();
  FUN_2000a5b0();
  iVar7 = -1;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600();
  uVar6 = 0;
  local_c = 0;
  FUN_200bd290();
  local_c = CONCAT31(local_c._1_3_,1);
  if (local_810 == '\0') {
    if (iVar5 != 0) {
      FUN_200faa48();
      FUN_200faa48();
      FUN_200faa48();
      FUN_200692e0();
      FUN_200692e0();
      FUN_200692e0();
      FUN_20069380();
      FUN_200692e0();
      FUN_200692e0();
      for (; (*(int *)(in_ECX + 0x110) != 0 &&
             (uVar6 < (uint)(*(int *)(in_ECX + 0x114) - *(int *)(in_ECX + 0x110) >> 2)));
          uVar6 = uVar6 + 1) {
        FUN_200faa48();
        FUN_200faa48();
        iVar5 = *(int *)(*(int *)(in_ECX + 0x110) + uVar6 * 4);
        *(undefined4 *)(iVar5 + 0x10) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        FUN_200692b0();
        FUN_200692e0();
        FUN_20069380();
        FUN_200faa48();
        FUN_200692e0();
        iVar5 = *(int *)(*(int *)(in_ECX + 0x110) + uVar6 * 4);
        iVar7 = *(int *)(iVar5 + 0x24);
        if (iVar7 != *(int *)(iVar5 + 0x28)) {
          do {
            FUN_200faa48();
            FUN_200692e0();
            FUN_200692e0();
            FUN_20069380();
            FUN_20069380();
            iVar7 = iVar7 + 0x28;
          } while (iVar7 != *(int *)(*(int *)(*(int *)(in_ECX + 0x110) + uVar6 * 4) + 0x28));
        }
        FUN_200faa48();
        FUN_200692e0();
        FUN_200692e0();
      }
      FUN_2009c650();
      FUN_20067510();
      FUN_200faa48();
      FUN_200692e0();
      FUN_200692e0();
      puVar9 = *(undefined4 **)(in_ECX + 0xa4);
      if (puVar9 != *(undefined4 **)(in_ECX + 0xa8)) {
        do {
          (**(code **)(*(int *)*puVar9 + 0xc))();
          FUN_200faa48();
          puVar9 = puVar9 + 1;
        } while (puVar9 != *(undefined4 **)(in_ECX + 0xa8));
      }
      FUN_200faa48();
      FUN_200692e0();
      FUN_200692e0();
      puVar9 = *(undefined4 **)(in_ECX + 0xb4);
      if (puVar9 != *(undefined4 **)(in_ECX + 0xb8)) {
        do {
          FUN_200faa48();
          (**(code **)(*(int *)*puVar9 + 0xc))();
          puVar9 = puVar9 + 1;
        } while (puVar9 != *(undefined4 **)(in_ECX + 0xb8));
      }
      FUN_200faa48();
      FUN_200692e0();
      FUN_200692e0();
      puVar9 = *(undefined4 **)(in_ECX + 0xc4);
      if (puVar9 != *(undefined4 **)(in_ECX + 200)) {
        do {
          FUN_200faa48();
          (**(code **)(*(int *)*puVar9 + 0xc))();
          puVar9 = puVar9 + 1;
        } while (puVar9 != *(undefined4 **)(in_ECX + 200));
      }
      if ((*(int *)(in_ECX + 0xc4) != 0) &&
         (*(int *)(in_ECX + 200) - *(int *)(in_ECX + 0xc4) >> 2 != 0)) {
        FUN_200ab850();
      }
      FUN_200faa48();
      FUN_200692e0();
      FUN_200692e0();
      puVar9 = *(undefined4 **)(in_ECX + 0xd4);
      if (puVar9 != *(undefined4 **)(in_ECX + 0xd8)) {
        do {
          FUN_200faa48();
          (**(code **)(*(int *)*puVar9 + 0xc))();
          puVar9 = puVar9 + 1;
        } while (puVar9 != *(undefined4 **)(in_ECX + 0xd8));
      }
      FUN_200bd350();
      FUN_200faa48();
      FUN_200faa48();
      if (*(int *)(in_ECX + 0xe0) != 0) {
        FUN_200faa48();
        FUN_200ab2b0();
        FUN_200faa48();
      }
      FUN_200fa9ae();
      piVar3 = (int *)*piStack_804;
      while (piVar3 != piStack_804) {
        piVar2 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_200f9f75();
        piVar3 = piVar2;
      }
      FUN_200f9f75();
      if (iStack_7f4 != 0) {
        if (*(char *)(iStack_7f4 + -1) != '\0') {
          *(char *)(iStack_7f4 + -1) = *(char *)(iStack_7f4 + -1) + -1;
          ExceptionList = local_14;
          return;
        }
        FUN_200f9f75();
      }
      ExceptionList = local_14;
      return;
    }
    FUN_200fabac();
  }
  else {
    FUN_200fabac();
  }
  FUN_2008e9e0();
  local_c = local_c & 0xffffff00;
  FUN_200b9490();
  local_c = 0xffffffff;
  FUN_2000a5b0();
  ExceptionList = local_14;
  return;
}

