// rea decompile_all
// name: FUN_200c7630
// address: 0x200c7630
// body: available
// range: 0x200c7630-0x200c78ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c7630(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  void *in_stack_0000100c;
  undefined4 in_stack_0000101c;
  char *in_stack_00001020;
  byte in_stack_00001024;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010e039;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_200fa720();
  iVar6 = -1;
  pcVar4 = in_stack_00001020;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  if (iVar6 == -2) {
    in_stack_00001020 = s_default_20158314;
  }
  if (DAT_201e7f58._3_1_ != '\0') {
    DAT_201ca520 = 1;
    ExceptionList = in_stack_0000100c;
    return;
  }
  if (DAT_201c1f24 != '\0') {
    ExceptionList = in_stack_0000100c;
    return;
  }
  if (DAT_20406554 == (undefined1 *)0x0) {
    FUN_200216c0(0);
    (*DAT_20390d4c)();
    FUN_20012830();
    puStack_8 = operator_new(0xa8);
    if (puStack_8 == (undefined1 *)0x0) {
      DAT_20406554 = (undefined1 *)0x0;
    }
    else {
      DAT_20406554 = (undefined1 *)FUN_200cb520();
    }
  }
  *DAT_20406554 = 0;
  iVar6 = __strcmpi(in_stack_00001020,s_default_20158314);
  if (iVar6 == 0) {
    iVar6 = FUN_200cbe70();
    if (iVar6 != 0) {
      pcVar4 = (char *)FUN_20055450(s_exec_menus__s_20158388,iVar6);
      iVar6 = -(int)pcVar4;
      do {
        cVar3 = *pcVar4;
        pcVar4[(int)(&stack0x0000000c + iVar6)] = cVar3;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      pcVar4 = (char *)FUN_200fb453(&stack0x0000000c,PTR_DAT_20158354);
      if (pcVar4 != (char *)0x0) {
        uVar2 = uStack_c._3_1_;
        do {
          uStack_4 = CONCAT31(uStack_4._1_3_,uVar2);
          FUN_2000a5b0(0);
          uVar7 = 0xffffffff;
          pcVar8 = pcVar4;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar3 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar3 != '\0');
          FUN_2000a600(pcVar4,~uVar7 - 1);
          FUN_20073050(&puStack_8,DAT_2040655c,&uStack_4);
          FUN_2000a5b0(1);
          pcVar4 = (char *)FUN_200fb453(0,PTR_DAT_20158354);
        } while (pcVar4 != (char *)0x0);
      }
    }
    in_stack_0000101c = FUN_200cbe30(in_stack_0000101c);
    iVar6 = FUN_200cbc10(in_stack_0000101c);
    if (iVar6 != 0) goto LAB_200c78b6;
  }
  iVar6 = FUN_20055930();
  cVar3 = FUN_200cbd00(in_stack_0000101c,in_stack_00001020);
  if ((((cVar3 == '\0') && (iVar5 = __strcmpi(in_stack_00001020,s_default_20158314), iVar5 == 0)) &&
      (DAT_20406554 != (undefined1 *)0x0)) &&
     (cVar3 = FUN_200cbde0(), puVar1 = DAT_20406554, cVar3 == '\0')) {
    if (DAT_20406554 != (undefined1 *)0x0) {
      FUN_200cb840();
      FUN_200f9f75(puVar1);
      DAT_20406554 = (undefined1 *)0x0;
    }
    FUN_200216c0(0);
    FUN_20057f40(4);
    FUN_20012810();
    Cvar_SetValue(s_menu_animated_20158360,0);
  }
  iVar5 = FUN_20055930();
  FUN_2001c940(s_Overall_menu_creation_time___d_m_201583a4,iVar5 - iVar6);
LAB_200c78b6:
  if (DAT_20406554 != (undefined1 *)0x0) {
    DAT_20406554[1] = DAT_20406554[1] | in_stack_00001024;
    *DAT_20406554 = 1;
  }
  ExceptionList = in_stack_0000100c;
  return;
}

