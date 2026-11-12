// rea decompile_all
// name: FUN_200d7d50
// address: 0x200d7d50
// body: available
// range: 0x200d7d50-0x200d7f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7d50(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 in_stack_ffffff6c;
  undefined4 in_stack_ffffff70;
  undefined4 uVar5;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 auStack_60 [44];
  undefined4 uStack_34;
  undefined4 local_4;
  
  local_4 = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_78 = 0;
  iVar4 = *(int *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0x14);
  uVar5 = 0x200d7d8e;
  (**(code **)(**(int **)(in_ECX + 0x90) + 0x44))
            (CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(in_ECX + 0x94)),
             *(undefined4 *)(iVar4 + 0x28),0,1);
  iVar4 = 3;
  puVar3 = (undefined4 *)(in_ECX + 0xfc);
  do {
    if ((float)puVar3[-6] != 0.0) {
      *puVar3 = 0x3f490fdb;
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_200802f0((undefined4 *)(in_ECX + 0xfc));
  FUN_200a0ea0(in_stack_ffffff6c,in_stack_ffffff70,uVar5);
  (**(code **)(**(int **)(in_ECX + 0x90) + 0xcc))(0,auStack_60,&uStack_78,&stack0xffffff94,0,0);
  if (*(int *)(in_ECX + 0x14) == 0) {
    __ftol();
    uVar5 = __ftol();
    *(undefined4 *)(in_ECX + 0x14) = uVar5;
  }
  if (*(int *)(in_ECX + 0x18) == 0) {
    __ftol();
    uVar5 = __ftol();
    *(undefined4 *)(in_ECX + 0x18) = uVar5;
  }
  iVar4 = __ftol();
  if (iVar4 == 0) {
    uVar5 = __ftol();
    *(undefined4 *)(in_ECX + 0x20) = uVar5;
    uVar5 = __ftol();
    *(undefined4 *)(in_ECX + 0x28) = uVar5;
  }
  iVar4 = __ftol();
  if ((iVar4 == 0) && (iVar4 = __ftol(), *(int *)(in_ECX + 0x30) < iVar4)) {
    *(int *)(in_ECX + 0x24) = iVar4;
    uVar5 = __ftol();
    *(undefined4 *)(in_ECX + 0x2c) = uVar5;
  }
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x8c) + 0x30))(&DAT_201556b0);
  if ((short)uVar5 == 0) {
    FUN_200eb490(uStack_34,s_Could_not_find_EOS_note_token_20158d10);
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x90) + 0x54))();
    (**(code **)(**(int **)(in_ECX + 0x90) + 0x5c))(in_ECX + 0xd8,uVar5);
  }
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x8c) + 0x30))(s_sound_20132e2c);
  if ((short)uVar5 != 0) {
    (**(code **)(**(int **)(in_ECX + 0x8c) + 0x38))(in_ECX + 0xe0,uVar5);
    piVar1 = *(int **)(in_ECX + 0x90);
    piVar2 = (int *)(**(code **)(*piVar1 + 0x88))();
    uVar5 = (**(code **)(*piVar2 + 0x30))(s_sound_20132e2c);
    (**(code **)(*piVar1 + 0x5c))(in_ECX + 0xdc,uVar5);
  }
  return;
}

