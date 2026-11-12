// rea decompile_all
// name: FUN_500581c0
// address: 0x500581c0
// body: available
// range: 0x500581c0-0x50058320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_500581c0(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar5;
  undefined4 *unaff_ESI;
  int iVar6;
  undefined4 *unaff_EDI;
  undefined4 *in_stack_ffffff24;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_stack_ffffff2c;
  undefined1 in_stack_ffffff30;
  undefined4 *in_stack_ffffff34;
  undefined4 *in_stack_ffffff38;
  undefined4 in_stack_ffffff3c;
  undefined1 in_stack_ffffff40;
  undefined4 *in_stack_ffffff44;
  undefined4 *in_stack_ffffff48;
  undefined4 in_stack_ffffff4c;
  char acStack_94 [64];
  undefined4 uStack_54;
  char acStack_50 [64];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_50113d63;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined4 *)(*DAT_5015cb64)(param_1 + 0x44,&stack0xffffff24,0);
  if (puVar2 == (undefined4 *)0xffffffff) {
    uVar3 = 0xffffff00;
  }
  else {
    puVar7 = in_stack_ffffff24;
    puVar8 = puVar2;
    if (0 < (int)puVar2) {
      do {
        iVar5 = 0;
        cVar4 = *(char *)((int)in_stack_ffffff24 + iVar6);
        iVar6 = iVar6 + 1;
        if (cVar4 == '#') {
          do {
            pcVar1 = (char *)((int)in_stack_ffffff24 + iVar6);
            iVar6 = iVar6 + 1;
          } while (*pcVar1 != '\n');
        }
        else {
          while (cVar4 != '\r') {
            (&stack0xffffff2c)[iVar5] = cVar4;
            pcVar1 = (char *)((int)in_stack_ffffff24 + iVar6);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 1;
            cVar4 = *pcVar1;
          }
          (&stack0xffffff2c)[iVar5] = 0;
          _strncpy(acStack_50,&stack0xffffff2c,0x40);
          uStack_10 = 0;
          iStack_4 = 0;
          _strncpy(acStack_94,&stack0xffffff2c,0x40);
          uStack_54 = 0;
          iStack_4._0_1_ = 1;
          FUN_5005b040((void *)(param_1 + 0xc),*(undefined4 **)(param_1 + 0x14),1,
                       (undefined4 *)acStack_94);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
          if (*(int *)(param_1 + 0x10) == 0) {
            cVar4 = '\0';
          }
          else {
            cVar4 = (char)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x44);
          }
          in_stack_ffffff24 = puVar7;
          puVar2 = puVar8;
          FUN_50058330(cVar4 + -1,unaff_EDI,unaff_ESI,unaff_EBP,(char)unaff_EBX,puVar7,puVar8,
                       in_stack_ffffff2c,in_stack_ffffff30,in_stack_ffffff34,in_stack_ffffff38,
                       in_stack_ffffff3c,in_stack_ffffff40,in_stack_ffffff44,in_stack_ffffff48,
                       in_stack_ffffff4c);
          iVar6 = iVar6 + 1;
          iStack_4 = 0xffffffff;
          puVar7 = in_stack_ffffff24;
          puVar8 = puVar2;
        }
      } while (iVar6 < (int)puVar2);
    }
    uVar3 = (*DAT_5015cb68)(in_stack_ffffff24);
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  ExceptionList = pvStack_c;
  return uVar3;
}

