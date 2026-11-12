// rea decompile_all
// name: FUN_20020f90
// address: 0x20020f90
// body: available
// range: 0x20020f90-0x20021126 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20020fe0 to 0x20014100 FUN_20014100 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2002111d to 0x20020c90 FUN_20020c90 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20020f90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_40 [64];
  
  if (*(float *)(DAT_2024afb8 + 0x18) == 0.0) {
    param_1 = 0xff000000;
    (*DAT_204035e4)(0,0,DAT_2040365c,DAT_20403660,&param_1);
    FUN_20014100();
    return;
  }
  iVar2 = __ftol();
  if (iVar2 < 1) {
    return;
  }
  if (DAT_20403660 < iVar2) {
    iVar2 = DAT_20403660;
  }
  param_1 = 0xffffffff;
  (*DAT_204035c4)(0,iVar2 - DAT_20403660,DAT_2040365c,DAT_20403660,&param_1,
                  s_pics_console_conback_201306a8,0);
  FUN_200140b0(0,0);
  FUN_200140b0(DAT_2040365c + -1,iVar2 + -1);
  Com_sprintf(auStack_40,0x40,&DAT_201306a0);
  (*DAT_204035d0)(DAT_2040365c + -0x2c,iVar2 + -0xc,auStack_40,0x400);
  iVar5 = iVar2 + -0x18;
  iVar6 = iVar2 + -8 >> 3;
  DAT_2024afa0 = iVar2;
  if (DAT_2024af8c != DAT_2024af88) {
    (*DAT_204035d0)(8,iVar5,&DAT_20130618,DAT_2024af98);
    iVar5 = iVar2 + -0x20;
    iVar6 = iVar6 + -1;
  }
  iVar3 = 0;
  iVar2 = DAT_2024af78;
  iVar4 = DAT_2024af8c;
  if (0 < iVar6) {
    do {
      if ((iVar4 < 0) || (iVar2 <= DAT_2024af88 - iVar4)) break;
      iVar1 = *(int *)(DAT_2024af74 + (iVar4 % iVar2) * 4);
      if (-1 < iVar1) {
        (*DAT_204035d0)(8,iVar5,iVar1 + DAT_2024af7c,DAT_2024af98);
        iVar2 = DAT_2024af78;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -8;
      iVar4 = iVar4 + -1;
    } while (iVar3 < iVar6);
  }
  FUN_20020c90();
  return;
}

