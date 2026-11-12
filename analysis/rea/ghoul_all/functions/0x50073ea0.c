// rea decompile_all
// name: FUN_50073ea0
// address: 0x50073ea0
// body: available
// range: 0x50073ea0-0x50073fa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50073ea0(void *this,float param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  float unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar4;
  float unaff_EDI;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_5006a470(&DAT_5015c7b8,(int)param_1);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x54), iVar2 != -1)) {
    piVar4 = (int *)**(int **)((int)this + 0x14);
    if (piVar4 != *(int **)((int)this + 0x14)) {
      do {
        if ((*(int *)((int)piVar4 + 0xc) == iVar2) &&
           (uVar1 = FUN_50073760(param_1,(float)((int)piVar4 + 0x10),unaff_EDI,unaff_ESI,unaff_EBP),
           (char)uVar1 != '\0')) {
          iVar3 = 0;
          uVar6 = 1;
          *(uint *)((int)param_1 + 0x118) = *(uint *)((int)param_1 + 0x118) | 1;
          *(undefined4 *)((int)param_1 + 0x2ec) = 0xfffffffe;
          *(undefined4 *)((int)param_1 + 0x158) = 0;
          puVar5 = (undefined4 *)((int)param_1 + 4);
          iVar2 = (*DAT_5015c9f8)(s_environ_irespawn_50144c24);
          FUN_500852e0(&DAT_5015c518,iVar2,puVar5,uVar6,iVar3);
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)piVar4 + 0x10);
          *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)piVar4 + 0x14);
          *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)piVar4 + 0x18);
          *(code **)((int)param_1 + 0x2b8) = FUN_500738b0;
          *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
          return;
        }
        if (*(char *)((int)*(int **)((int)piVar4 + 8) + 0x1d) == '\0') {
          iVar3 = FUN_50074c20(*(int **)((int)piVar4 + 8));
LAB_50073f14:
          piVar4 = (int *)iVar3;
        }
        else {
          iVar3 = *(int *)((int)piVar4 + 4);
          if (piVar4 == (int *)*(int *)(iVar3 + 8)) {
            do {
              piVar4 = (int *)iVar3;
              iVar3 = *(int *)((int)piVar4 + 4);
            } while (piVar4 == (int *)*(int *)(iVar3 + 8));
          }
          if (*(int *)((int)piVar4 + 8) != iVar3) goto LAB_50073f14;
        }
      } while (piVar4 != (int *)*(int *)((int)this + 0x14));
    }
    *(float *)((int)param_1 + 0x2b4) = DAT_5015ccdc + *(float *)((int)this + 0xc);
  }
  return;
}

