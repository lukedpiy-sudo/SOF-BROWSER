// rea decompile_all
// name: FUN_20062560
// address: 0x20062560
// body: available
// range: 0x20062560-0x2006275b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200626a9 to 0x20063490 FUN_20063490 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20062560(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  
  FUN_200fa720();
  if (((DAT_203a1f20 == 3) && (DAT_203fac48 != 0)) && (*(float *)(DAT_203feccc + 0x18) == 0.0)) {
    iVar1 = FUN_200252d0(&stack0x00000000,4,DAT_203fac48);
    if (iVar1 == 4) {
      if (DAT_20136a0c < 0) {
        Com_Error(1,s_SV_SendClientMessages__msglen_>_M_2013a354);
      }
      iVar1 = FUN_200252d0(&stack0x00000004,0,DAT_203fac48);
      if (iVar1 == 0) goto LAB_200625a4;
    }
    if (DAT_203fac48 != 0) {
      FS_FCloseFile(DAT_203fac48);
      DAT_203fac48 = 0;
    }
    FUN_20063490();
    return;
  }
LAB_200625a4:
  piVar4 = DAT_20396eec;
  iVar5 = 0;
  iVar1 = __ftol();
  if (0 < iVar1) {
    do {
      if (*piVar4 != 0) {
        if (*(char *)((int)piVar4 + 0x52b5) != '\0') {
          FUN_2001e730(piVar4 + 0x14ad);
          FUN_2001e730(piVar4 + 0xb1);
          FUN_200618d0(2,s__s_overflowed_2013a380,piVar4 + 0xa7);
          FUN_2005e170(piVar4,0x40c);
        }
        if (DAT_203a1f20 == 3) {
          puVar6 = &stack0x00000004;
LAB_2006272d:
          FUN_2004d400(piVar4 + 0x149b,0,puVar6);
        }
        else if (*piVar4 == 3) {
          if (piVar4[0x14a0] != 0) {
            iVar1 = 0;
            piVar2 = piVar4 + 0x9a;
            iVar3 = 10;
            do {
              iVar1 = iVar1 + *piVar2;
              piVar2 = piVar2 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            if (piVar4[0xa4] < iVar1) {
              piVar4[0xa5] = piVar4[0xa5] + 1;
              piVar4[DAT_203a1f30 % 10 + 0x9a] = 0;
              goto LAB_20062735;
            }
          }
          FUN_200622f0(piVar4);
        }
        else if ((piVar4[0x14b0] != 0) || (1000 < DAT_20390d38 - piVar4[0x149f])) {
          puVar6 = (undefined1 *)0x0;
          goto LAB_2006272d;
        }
      }
LAB_20062735:
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 0x34ab;
      iVar1 = __ftol();
    } while (iVar5 < iVar1);
  }
  return;
}

