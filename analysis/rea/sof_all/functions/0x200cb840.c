// rea decompile_all
// name: FUN_200cb840
// address: 0x200cb840
// body: available
// range: 0x200cb840-0x200cbb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200cb840(void)

{
  void **ppvVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int local_9c;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [8];
  undefined1 local_8c [128];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010e478;
  puVar3 = *(undefined4 **)(in_ECX + 4);
  local_4 = 6;
  ppvVar1 = &pvStack_c;
  pvStack_c = ExceptionList;
  while (ExceptionList = ppvVar1, puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 4) = *puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_200c9b10();
      FUN_200f9f75(puVar3);
    }
    ppvVar1 = ExceptionList;
    puVar3 = *(undefined4 **)(in_ECX + 4);
  }
  piVar4 = (int *)**(int **)(in_ECX + 0xa0);
  if (piVar4 != *(int **)(in_ECX + 0xa0)) {
    do {
      puVar2 = (undefined1 *)piVar4[3];
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_201116cc;
      }
      Com_sprintf(local_8c,0x80,s__s__s_2011f104,s_pics_menus_20158678,puVar2);
      (*DAT_20403594)(local_8c);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(in_ECX + 0xa0));
  }
  FUN_200c1520(&local_9c,**(undefined4 **)(in_ECX + 0xa0),*(undefined4 **)(in_ECX + 0xa0));
  local_9c = FUN_200cd920(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x40),
                          *(undefined4 *)(in_ECX + 0x3c));
  FUN_200cd880(local_9c,*(undefined4 *)(in_ECX + 0x40));
  *(int *)(in_ECX + 0x40) = local_9c;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x1c))();
  DAT_201c1f04 = 0;
  FUN_2004c740();
  Cvar_Set(s_scr_menuoverlay_2011f568,&DAT_2011c4ac);
  Cvar_Set(s_scr_showpause_2011f630,&DAT_2011d31c);
  Cvar_Set(s_paused_2011d4b0,&DAT_2011c4ac);
  local_4._0_1_ = 5;
  FUN_200c1520(&local_9c,**(undefined4 **)(in_ECX + 0xa0),*(undefined4 **)(in_ECX + 0xa0));
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0xa0));
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  local_9c = *(int *)(in_ECX + 0x94);
  iVar5 = *(int *)(in_ECX + 0x90);
  local_4._0_1_ = 4;
  if (iVar5 != local_9c) {
    do {
      FUN_20027f20(0);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 != local_9c);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x90));
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  local_9c = *(int *)(in_ECX + 0x84);
  iVar5 = *(int *)(in_ECX + 0x80);
  local_4._0_1_ = 3;
  if (iVar5 != local_9c) {
    do {
      FUN_20027f20(0);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 != local_9c);
  }
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x80));
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  local_9c = *(int *)(in_ECX + 0x74);
  local_4._0_1_ = 2;
  puVar3 = (undefined4 *)FUN_20083550(auStack_98);
  FUN_200c1520(auStack_94,*puVar3,local_9c);
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x74));
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  local_9c = *(int *)(in_ECX + 0x68);
  local_4._0_1_ = 1;
  puVar3 = (undefined4 *)FUN_20083550(auStack_94);
  FUN_200c1520(auStack_98,*puVar3,local_9c);
  FUN_200f9f75(*(undefined4 *)(in_ECX + 0x68));
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  local_4 = 0xffffffff;
  FUN_200cd5d0();
  ExceptionList = pvStack_c;
  return;
}

