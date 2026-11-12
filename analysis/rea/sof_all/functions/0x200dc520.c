// rea decompile_all
// name: FUN_200dc520
// address: 0x200dc520
// body: available
// range: 0x200dc520-0x200dc74c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dc520(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  int *local_24;
  int *local_20;
  char *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_20 = *(int **)(in_ECX + 0xbc);
  local_4 = 0;
  if (local_20 != *(int **)(in_ECX + 0xc0)) {
    piVar8 = local_20 + 0x10;
    local_24 = piVar8;
    do {
      puVar9 = (undefined1 *)piVar8[-0xe];
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &DAT_201116cc;
      }
      uVar5 = 0xffffffff;
      pcVar10 = &DAT_20158ef0;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar6 = 0xffffffff;
      pcVar10 = puVar9 + (~uVar5 - 1);
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_2000a600(puVar9 + (~uVar5 - 1),~uVar6 - 1);
      FUN_2000a930();
      if (local_18 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar10 = local_18 + local_14;
      }
      FUN_2000a930();
      if (local_18 == (char *)0x0) {
        pcVar7 = (char *)0x0;
      }
      else {
        pcVar7 = local_18 + local_14;
      }
      uVar5 = 0xffffffff;
      pcVar12 = &DAT_20158ee8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_200e32f0((int)pcVar7 - (~uVar5 - 1),pcVar10);
      if (*(char *)(in_ECX + 0x9c) == '\0') {
LAB_200dc67b:
        pcVar10 = local_18;
        if (local_18 == (char *)0x0) {
          pcVar10 = "";
        }
        iVar4 = FUN_20060360(pcVar10);
        if (iVar4 == 0) {
          piVar2 = *(int **)(in_ECX + 0xc0);
          piVar11 = piVar8;
          for (; piVar11 != piVar2; piVar11 = piVar11 + 0x10) {
            FUN_20027bd0(piVar11);
            piVar8 = local_24;
          }
          iVar3 = *(int *)(in_ECX + 0xc0);
          for (iVar4 = iVar3 + -0x40; iVar4 != iVar3; iVar4 = iVar4 + 0x40) {
            FUN_20025fd0();
          }
          *(int *)(in_ECX + 0xc0) = *(int *)(in_ECX + 0xc0) + -0x40;
        }
        else {
          FUN_20060190();
          *local_20 = in_ECX;
          local_20 = local_20 + 0x10;
          piVar8 = piVar8 + 0x10;
          local_24 = piVar8;
        }
      }
      else {
        pcVar10 = local_18;
        if (local_18 == (char *)0x0) {
          pcVar10 = "";
        }
        iVar4 = __strcmpi(pcVar10,&DAT_20139004);
        if (iVar4 != 0) goto LAB_200dc67b;
        piVar2 = *(int **)(in_ECX + 0xc0);
        piVar11 = piVar8;
        for (; piVar11 != piVar2; piVar11 = piVar11 + 0x10) {
          FUN_20027bd0(piVar11);
          piVar8 = local_24;
        }
        iVar3 = *(int *)(in_ECX + 0xc0);
        for (iVar4 = iVar3 + -0x40; iVar4 != iVar3; iVar4 = iVar4 + 0x40) {
          FUN_200c9520(0);
        }
        *(int *)(in_ECX + 0xc0) = *(int *)(in_ECX + 0xc0) + -0x40;
      }
    } while (local_20 != *(int **)(in_ECX + 0xc0));
  }
  if (local_18 != (char *)0x0) {
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

