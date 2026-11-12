// rea decompile_all
// name: FUN_200da280
// address: 0x200da280
// body: available
// range: 0x200da280-0x200da4e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200da280(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int in_ECX;
  int local_2c;
  uint uStack_28;
  int local_24;
  uint uStack_20;
  undefined1 local_1c [4];
  undefined1 *puStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  cVar1 = FUN_200cf570(&local_2c,&local_24);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
    ExceptionList = local_c;
    return;
  }
  iVar3 = *(int *)(in_ECX + 4);
  iVar2 = FUN_200c66d0();
  if (*(int **)(in_ECX + 0x68) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(in_ECX + 0x68);
  }
  iVar3 = ((iVar2 + *(int *)(iVar3 + 0x80)) - iVar4) - *(int *)(in_ECX + 0x10);
  if (*(int *)(in_ECX + 0x24) < iVar3) {
    iVar3 = *(int *)(in_ECX + 0x24);
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar2 = in_ECX + 0x8c;
  iVar4 = (*DAT_20403640)(iVar2);
  uStack_20 = iVar3 / iVar4;
  (*DAT_204035e4)(local_2c,local_24,*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),
                  in_ECX + 0x9c);
  iVar4 = 0;
  iVar3 = local_24;
  for (uStack_28 = 0;
      (local_24 = iVar4, *(int *)(in_ECX + 0xd4) != 0 &&
      (uStack_28 < (uint)(*(int *)(in_ECX + 0xd8) - *(int *)(in_ECX + 0xd4) >> 6)));
      uStack_28 = uStack_28 + 1) {
    FUN_200c8b90(*(int *)(in_ECX + 0xd4) + iVar4,local_1c,in_ECX + 0xa0,in_ECX + 0xc0);
    puVar6 = &DAT_201116cc;
    if (puStack_18 != (undefined1 *)0x0) {
      puVar6 = puStack_18;
    }
    if (*(int *)(in_ECX + 0x4c) == 1) {
      iVar4 = (*DAT_2040363c)(puVar6,iVar2);
      iVar4 = *(int *)(in_ECX + 0x20) - iVar4 >> 1;
    }
    else if (*(int *)(in_ECX + 0x4c) == 3) {
      iVar4 = (*DAT_2040363c)(puVar6,iVar2);
      iVar4 = *(int *)(in_ECX + 0x20) - iVar4;
    }
    else {
      iVar4 = 0;
    }
    if ((uStack_28 == uStack_20) && (*(char *)(in_ECX + 0x61) != '\0')) {
      uVar5 = (*DAT_20403640)(iVar2,in_ECX + 0x40);
      (*DAT_204035e4)(local_2c,iVar3,*(undefined4 *)(in_ECX + 0x20),uVar5);
      puVar6 = puStack_18;
      if (puStack_18 == (undefined1 *)0x0) {
        puVar6 = &DAT_201116cc;
      }
      uVar5 = *(undefined4 *)(in_ECX + 0x3c);
    }
    else {
      puVar6 = &DAT_201116cc;
      if (puStack_18 != (undefined1 *)0x0) {
        puVar6 = puStack_18;
      }
      uVar5 = *(undefined4 *)(in_ECX + 0x38);
    }
    (*DAT_20403638)(iVar4 + local_2c,iVar3,puVar6,uVar5,iVar2,0);
    iVar4 = (*DAT_20403640)(iVar2);
    iVar3 = iVar3 + iVar4;
    iVar4 = local_24 + 0x40;
  }
  if (*(int *)(in_ECX + 0x68) != 0) {
    FUN_200c48f0(in_ECX);
  }
  if (puStack_18 != (undefined1 *)0x0) {
    if (puStack_18[-1] != '\0') {
      puStack_18[-1] = puStack_18[-1] + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_200f9f75(puStack_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

