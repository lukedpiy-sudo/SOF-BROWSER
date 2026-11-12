// rea decompile_all
// name: FUN_50062940
// address: 0x50062940
// body: available
// range: 0x50062940-0x50062b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50062940(void *this,char *param_1)

{
  void *this_00;
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  ushort uVar8;
  undefined4 *puVar9;
  char local_d;
  short local_8;
  
  local_d = *param_1;
  cVar1 = *(char *)this;
  if (cVar1 == local_d) {
    local_d = param_1[1];
    local_8 = *(short *)(param_1 + 4);
    uVar8 = *(ushort *)(param_1 + 2);
  }
  else {
    uVar8 = *(ushort *)(param_1 + 4);
    local_8 = *(short *)(param_1 + 2);
  }
  this_00 = (void *)((int)this + 8);
  if ((*(int *)((int)this + 0xc) == 0) ||
     (*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2 == 0)) {
    FUN_500632d0(this_00,*(undefined4 **)((int)this + 0x10),1,&param_1);
    if (*(int *)((int)this + 0xc) != 0) {
      *(char *)((int)this + 0x18) =
           (char)(*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2);
      return;
    }
    *(undefined1 *)((int)this + 0x18) = 0;
    return;
  }
  puVar9 = *(undefined4 **)((int)this + 0xc);
  do {
    if (puVar9 == *(undefined4 **)((int)this + 0x10)) {
      FUN_500632d0(this_00,*(undefined4 **)((int)this + 0x10),1,&param_1);
      iVar7 = *(int *)((int)this + 0xc);
      if (iVar7 == 0) {
        *(undefined1 *)((int)this + 0x18) = 0;
        return;
      }
LAB_50062aeb:
      *(char *)((int)this + 0x18) = (char)(*(int *)((int)this + 0x10) - iVar7 >> 2);
      return;
    }
    pcVar2 = (char *)*puVar9;
    if ((*(ushort *)(pcVar2 + 2) == uVar8) && (*(short *)(pcVar2 + 4) == local_8)) {
      return;
    }
    cVar5 = *pcVar2;
    if (cVar1 == cVar5) {
      cVar5 = pcVar2[1];
    }
    if (cVar5 == '\0') {
      if (cVar1 == *pcVar2) {
        uVar6 = *(ushort *)(pcVar2 + 2);
      }
      else {
        uVar6 = *(ushort *)(pcVar2 + 4);
      }
      if (uVar6 == uVar8) {
        puVar3 = *(undefined4 **)((int)this + 0x10);
        puVar4 = puVar9 + 1;
        if (puVar4 != puVar3) {
          iVar7 = (int)puVar9 - (int)puVar4;
          do {
            *(undefined4 *)(iVar7 + (int)puVar4) = *puVar4;
            puVar4 = puVar4 + 1;
          } while (puVar4 != puVar3);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -4;
        FUN_50062940(this,param_1);
        return;
      }
    }
    if (local_d == '\0') {
      if (cVar1 == *pcVar2) {
        uVar6 = *(ushort *)(pcVar2 + 2);
      }
      else {
        uVar6 = *(ushort *)(pcVar2 + 4);
      }
      if (uVar6 == uVar8) {
        return;
      }
    }
    if (cVar1 == *pcVar2) {
      uVar6 = *(ushort *)(pcVar2 + 2);
    }
    else {
      uVar6 = *(ushort *)(pcVar2 + 4);
    }
    if (uVar8 < uVar6) {
      FUN_500632d0(this_00,puVar9,1,&param_1);
      iVar7 = *(int *)((int)this + 0xc);
      if (iVar7 == 0) {
        *(undefined1 *)((int)this + 0x18) = 0;
        return;
      }
      goto LAB_50062aeb;
    }
    puVar9 = puVar9 + 1;
  } while( true );
}

