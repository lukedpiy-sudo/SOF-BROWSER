// rea decompile_all
// name: FUN_200dc750
// address: 0x200dc750
// body: available
// range: 0x200dc750-0x200dc970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200dc750(void)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int local_68;
  uint local_64;
  undefined1 *local_58;
  int local_54;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  local_64 = 0;
  local_68 = 0;
  do {
    if ((*(int *)(in_ECX + 0xbc) == 0) ||
       ((uint)(*(int *)(in_ECX + 0xc0) - *(int *)(in_ECX + 0xbc) >> 6) <= local_64)) {
      if (local_58 != (undefined1 *)0x0) {
        if (local_58[-1] != '\0') {
          local_58[-1] = local_58[-1] + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_200f9f75(local_58 + -1);
      }
      ExceptionList = local_c;
      return;
    }
    puVar7 = *(undefined1 **)(*(int *)(in_ECX + 0xbc) + 8 + local_68);
    puVar6 = &DAT_201116cc;
    if (puVar7 != (undefined1 *)0x0) {
      puVar6 = puVar7;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_20158ef0;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar5 = 0xffffffff;
    pcVar3 = puVar6 + (~uVar4 - 1);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_2000a600(puVar6 + (~uVar4 - 1),~uVar5 - 1);
    FUN_2000a930();
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar7 = local_58 + local_54;
    }
    FUN_2000a930();
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      puVar6 = local_58 + local_54;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_20158ee8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    FUN_200e32f0((int)puVar6 - (~uVar4 - 1),puVar7);
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    FUN_200610b0(puVar7,local_4c);
    uVar4 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0xbc) + 0x20 + local_68;
    pcVar3 = local_4c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_2000a6c0(uVar4,1);
    if (cVar2 != '\0') {
      pcVar3 = local_4c;
      pcVar8 = *(char **)(iVar1 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(uint *)(iVar1 + 8) = uVar4;
      *(undefined1 *)(uVar4 + *(int *)(iVar1 + 4)) = 0;
    }
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = &DAT_201116cc;
    }
    pcVar3 = (char *)FUN_20061240(puVar7);
    uVar4 = 0xffffffff;
    iVar1 = local_68 + 0x30 + *(int *)(in_ECX + 0xbc);
    pcVar8 = pcVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_2000a6c0(uVar4,1);
    if (cVar2 != '\0') {
      pcVar8 = *(char **)(iVar1 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(uint *)(iVar1 + 8) = uVar4;
      *(undefined1 *)(*(int *)(iVar1 + 4) + uVar4) = 0;
    }
    local_64 = local_64 + 1;
    local_68 = local_68 + 0x40;
  } while( true );
}

