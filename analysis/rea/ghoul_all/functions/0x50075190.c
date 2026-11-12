// rea decompile_all
// name: FUN_50075190
// address: 0x50075190
// body: available
// range: 0x50075190-0x500753bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50075190(char param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piStack_34;
  int iStack_30;
  
  if (param_1 == '\0') {
    if (*(int *)(DAT_5015c97c + 0x18) == 0x40000000) {
      (*DAT_5015cb50)(s_sv_jumpcinematic_501454f0,&DAT_50144958);
      (*DAT_5015cb50)(s_s_disable_501454e4,&DAT_50144958);
    }
    iVar4 = 0;
    DAT_5015d8d5 = '\0';
    DAT_501451cc = 1;
    if (0 < DAT_5015c938) {
      iVar2 = 0;
      iVar3 = DAT_5015cca0;
      do {
        if (*(int *)(iVar2 + 0x450 + iVar3) != 0) {
          if (*(int *)(iVar2 + 0x318 + iVar3) == 0xff) {
            *(undefined4 *)(iVar2 + 0x318 + iVar3) = 0;
            iVar3 = DAT_5015cca0;
          }
          else if ((*(uint *)(iVar2 + 0x1a0 + iVar3) & 0x20000) != 0) {
            *(float *)(iVar2 + 0x2b4 + iVar3) = DAT_5015ccdc - *(float *)(iVar2 + 0x2b4 + iVar3);
            *(undefined4 *)(iVar2 + 0x158 + DAT_5015cca0) = 2;
            *(uint *)(iVar2 + 0x1a0 + DAT_5015cca0) =
                 *(uint *)(iVar2 + 0x1a0 + DAT_5015cca0) & 0xfffdffff;
            piVar1 = *(int **)(iVar2 + 0x164 + DAT_5015cca0);
            iVar3 = DAT_5015cca0;
            if (piVar1 != (int *)0x0) {
              (**(code **)(*piVar1 + 0x10))(1,DAT_5015ccdc);
              iVar3 = DAT_5015cca0;
            }
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x464;
      } while (iVar4 < DAT_5015c938);
    }
  }
  else {
    iVar3 = 1;
    iVar4 = DAT_5015cca0;
    if (1 < DAT_5015c938) {
      iVar2 = 0x464;
      do {
        piVar1 = (int *)(iVar2 + iVar4);
        if (((piVar1 != (int *)0x0) && (piVar1[0x58] == iVar4 + 0x464)) && (piVar1[0xbb] == 0x7a69))
        {
          FUN_500c3880(piVar1);
          iVar4 = DAT_5015cca0;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x464;
      } while (iVar3 < DAT_5015c938);
    }
    if ((*(int *)(iVar4 + 0x4d8) != 0) && (DAT_5015d8d5 == '\0')) {
      DAT_5015d8d5 = '\x01';
      (*DAT_5015cb78)(s__attack_50145538);
      (*DAT_5015cb78)(s__altattack_5014552c);
      (*DAT_5015cb78)(s__weaponExtra1_5014551c);
      (*DAT_5015cb78)(s__weaponExtra2_5014550c);
      (*DAT_5015cb78)(s__use_50145504);
      if (*(int *)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x34c) != 0) {
        iStack_30 = DAT_5015cca0 + 0x464;
        piStack_34 = *(int **)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x34c);
        (**(code **)(*piStack_34 + 0xf4))(&piStack_34);
        (**(code **)(**(int **)(*(int *)(DAT_5015cca0 + 0x4d8) + 0x34c) + 0xe8))();
        return;
      }
    }
  }
  return;
}

