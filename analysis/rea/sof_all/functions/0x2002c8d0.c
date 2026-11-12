// rea decompile_all
// name: FUN_2002c8d0
// address: 0x2002c8d0
// body: available
// range: 0x2002c8d0-0x2002ca14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002c8d0(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_EBP;
  int iVar8;
  int iVar9;
  char acStack_68 [104];
  
  if (param_1 != DAT_201e94c4 + 1) {
    iVar8 = param_1 * 0x18c;
    if (*(int *)(&DAT_2015f054 + iVar8) == DAT_201e7e64) {
      uVar1 = *(undefined2 *)(&DAT_2015ef94 + iVar8);
      piVar2 = (int *)FUN_20069630(1,0);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x24))(uVar1);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x80))();
        iVar9 = 0;
        if (0 < iVar3) {
          do {
            iVar4 = (**(code **)(*piVar2 + 0x84))(iVar9,&stack0xffffff90);
            if (iVar4 != 0) {
              piVar5 = (int *)(**(code **)(*piVar2 + 0x88))();
              (**(code **)(*piVar5 + 0x28))(unaff_EBP,acStack_68);
              iVar6 = __strcmpi(acStack_68,s_wbolt_hand_r_20131570);
              if (iVar6 == 0) {
                uVar7 = FUN_20030570(&DAT_2015ef6c + iVar8,iVar4,0,s_flash_20131568,param_1,param_2,
                                     0,0);
                uVar7 = FUN_20030540(&DAT_2015ef6c + iVar8,uVar7);
                FUN_200303c0(uVar7);
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar3);
        }
      }
    }
    return;
  }
  *param_2 = DAT_201e8ff0;
  param_2[1] = DAT_201e8ff4;
  param_2[2] = DAT_201e8ff8;
  return;
}

