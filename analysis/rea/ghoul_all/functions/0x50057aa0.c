// rea decompile_all
// name: FUN_50057aa0
// address: 0x50057aa0
// body: available
// range: 0x50057aa0-0x50057d62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50057aa0(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  void *this_00;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puStack_c;
  undefined4 *puStack_4;
  
  (*DAT_5015caac)(&DAT_50143000);
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 0x10) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x10)) / 0x44;
  }
  if (uVar7 < uVar1) {
    uVar7 = uVar1;
    if ((int)uVar1 < 0) {
      uVar7 = 0;
    }
    puVar3 = operator_new(uVar7 * 0x44);
    puVar5 = *(undefined4 **)((int)this + 0x14);
    puStack_4 = puVar3;
    for (puVar9 = *(undefined4 **)((int)this + 0x10); puVar9 != puVar5; puVar9 = puVar9 + 0x11) {
      FUN_5005c170(puVar3,puVar9);
      puVar3 = puVar3 + 0x11;
    }
    pvVar2 = *(void **)((int)this + 0x14);
    for (this_00 = *(void **)((int)this + 0x10); this_00 != pvVar2;
        this_00 = (void *)((int)this_00 + 0x44)) {
      FUN_5005c3b0(this_00,0);
    }
    FUN_50106b60(*(undefined **)((int)this + 0x10));
    puVar9 = puStack_4;
    *(undefined4 **)((int)this + 0x18) = puStack_4 + uVar1 * 0x11;
    iVar4 = FUN_5005a3d0((int)this + 0xc);
    *(undefined4 **)((int)this + 0x10) = puVar9;
    *(undefined4 **)((int)this + 0x14) = puVar9 + iVar4 * 0x11;
  }
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 0x20) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0x28) - *(int *)((int)this + 0x20)) / 0x21c;
  }
  if (uVar7 < uVar1) {
    uVar7 = uVar1;
    if ((int)uVar1 < 0) {
      uVar7 = 0;
    }
    puVar5 = operator_new(uVar7 * 0x21c);
    puVar9 = *(undefined4 **)((int)this + 0x20);
    puStack_4 = *(undefined4 **)((int)this + 0x24);
    puStack_c = puVar5;
    if (puVar9 != puStack_4) {
      do {
        FUN_5005c190(puStack_c,puVar9);
        puVar9 = puVar9 + 0x87;
        puStack_c = puStack_c + 0x87;
      } while (puVar9 != puStack_4);
    }
    FUN_50043230();
    FUN_50106b60(*(undefined **)((int)this + 0x20));
    *(undefined4 **)((int)this + 0x28) = puVar5 + uVar1 * 0x87;
    iVar4 = FUN_5005a9c0((int)this + 0x1c);
    *(undefined4 **)((int)this + 0x20) = puVar5;
    *(undefined4 **)((int)this + 0x24) = puVar5 + iVar4 * 0x87;
  }
  *(undefined4 **)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  if (param_2 != 0) {
    FUN_500fe2b0();
  }
  puVar9 = *(undefined4 **)((int)this + 0x90);
  param_1 = (undefined4 *)*puVar9;
  while (param_1 != puVar9) {
    puVar5 = (undefined4 *)FUN_50049a30(&param_1,&param_2);
    FUN_500499f0((void *)((int)this + 0x8c),(int *)&puStack_4,(int *)*puVar5);
  }
  FUN_5005acf0((void *)((int)this + 0x98),&param_1,(int *)**(int **)((int)this + 0x9c),
               *(int **)((int)this + 0x9c));
  FUN_5005acf0((void *)((int)this + 0xa4),&param_1,(int *)**(int **)((int)this + 0xa8),
               *(int **)((int)this + 0xa8));
  puVar9 = (undefined4 *)((int)this + 0xb0);
  puVar5 = puVar9;
  for (iVar4 = 0xc0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar8 = 0;
  puVar5 = (undefined4 *)((int)this + 0x3b5);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0x1010101;
    puVar5 = puVar5 + 1;
  }
  do {
    uVar12 = 0;
    uVar11 = 0;
    pcVar10 = s________50142ff0;
    puVar6 = FUN_500fe1e0((byte *)s_bot_name_i_50142fe4);
    uVar11 = (*DAT_5015cb4c)(puVar6,pcVar10,uVar11,uVar12);
    *puVar9 = uVar11;
    iVar8 = iVar8 + 1;
    puVar9 = puVar9 + 6;
  } while (iVar8 < 0x20);
  *(undefined1 *)((int)this + 0x3b4) = 1;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  FUN_500581c0((int)this);
  return;
}

