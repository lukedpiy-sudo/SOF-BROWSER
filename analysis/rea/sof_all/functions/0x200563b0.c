// rea decompile_all
// name: FUN_200563b0
// address: 0x200563b0
// body: available
// range: 0x200563b0-0x2005655d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x20056435) */
/* WARNING: Removing unreachable block (ram,0x2005644a) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000000 : 0x20056452 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_200563b0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  char unaff_retaddr;
  int *in_stack_00002004;
  int *in_stack_00002008;
  undefined4 *in_stack_0000200c;
  undefined4 *in_stack_00002010;
  
  FUN_200fa720();
  DAT_20390dc8._0_1_ = 0;
  *in_stack_0000200c = 0xffffffff;
  *in_stack_00002010 = &DAT_20390dc8;
  iVar5 = 0x2000;
  puVar8 = (undefined1 *)register0x00000010;
  if (0 < *in_stack_00002008) {
    do {
      puVar2 = (undefined1 *)*in_stack_00002004;
      puVar9 = puVar8 + 1;
      *puVar8 = *puVar2;
      *in_stack_00002004 = (int)(puVar2 + 1);
      iVar3 = *in_stack_00002008;
      iVar5 = iVar5 + -1;
      *in_stack_00002008 = iVar3 + -1;
      if ((iVar3 + -1 < 1) || (iVar5 < 1)) break;
      puVar8 = puVar9;
    } while (*(char *)(*in_stack_00002004 + -1) != '\n');
    *puVar9 = 0;
    pcVar7 = (char *)register0x00000010;
    while (unaff_retaddr != '\0') {
      iVar5 = FUN_200faaf0(&DAT_20138bd4,(int)unaff_retaddr);
      if (iVar5 != 0) {
        if (*pcVar7 != '\0') {
          *pcVar7 = '\0';
          pcVar7 = pcVar7 + 1;
        }
        break;
      }
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      unaff_retaddr = *pcVar6;
    }
    uVar4 = FUN_20056300(&stack0x00000000,1);
    *in_stack_0000200c = uVar4;
    cVar1 = *pcVar7;
    while ((cVar1 != '\0' && (iVar5 = FUN_200faaf0(&DAT_20138bd4,(int)cVar1), iVar5 != 0))) {
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    if (*pcVar7 == '\"') {
      pcVar6 = (char *)&DAT_20390dc8;
      pcVar7 = pcVar7 + 1;
      puVar10 = &DAT_20390dc8;
      for (iVar5 = 0x800; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      while (((*pcVar7 != '\"' || (iVar5 = FUN_200faaf0(&DAT_20138bd0,(int)pcVar7[1]), iVar5 == 0))
             && (cVar1 = *pcVar7, cVar1 != '\0'))) {
        if ((cVar1 == '\\') && (pcVar7[1] == 'n')) {
          *pcVar6 = '\n';
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 2;
        }
        else {
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      if (*pcVar7 == '\"') {
        *pcVar7 = '\0';
        return;
      }
    }
    else {
      cVar1 = *pcVar7;
      pcVar6 = pcVar7;
      while ((cVar1 != '\0' && (iVar5 = FUN_200faaf0(&DAT_20138bd0,(int)cVar1), iVar5 == 0))) {
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 1;
      }
      *pcVar6 = '\0';
      iVar5 = (int)&DAT_20390dc8 - (int)pcVar7;
      do {
        cVar1 = *pcVar7;
        pcVar7[iVar5] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}

