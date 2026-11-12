// rea decompile_all
// name: FUN_5001cf30
// address: 0x5001cf30
// body: available
// range: 0x5001cf30-0x5001d026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001cf30(void *this,int param_1,char *param_2,char *param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  char *pcVar8;
  char acStack_100 [256];
  
  iVar2 = __strcmpi(param_2,s_g_half_head_5013342c);
  if (iVar2 == 0) {
    piVar5 = *(int **)(param_1 + 0x164);
    piVar3 = (int *)(**(code **)(*piVar5 + 0x88))();
    uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_50133428);
    if ((short)uVar4 == 0) goto LAB_5001cfec;
    uVar4 = (**(code **)(*piVar5 + 0x30))(uVar4,0,0);
    if ((short)uVar4 == 0) goto LAB_5001cfec;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    (**(code **)(*piVar5 + 0x58))(uVar4,acStack_100);
    pcVar8 = acStack_100;
    uVar7 = 0;
  }
  else {
    pcVar8 = (char *)0x0;
    uVar7 = 1;
  }
  puVar6 = FUN_500a5c10(&DAT_5015c79c,s_Enemy_Bolt_50133408,param_2,uVar7,pcVar8,(char *)0x0,'\0');
  *(undefined4 **)(*(int *)((int)this + 100) + 0x10 + param_4 * 0x30) = puVar6;
LAB_5001cfec:
  if (*param_3 != '\0') {
    iVar2 = *(int *)(*(int *)((int)this + 100) + 0x10 + param_4 * 0x30);
    if (iVar2 != 0) {
      uVar1 = (**(code **)(**(int **)(iVar2 + 0x24) + 0x1c))(param_3);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x14 + param_4 * 0x30) = uVar1;
    }
  }
  return;
}

