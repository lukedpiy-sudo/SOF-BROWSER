// rea decompile_all
// name: FUN_500f5c20
// address: 0x500f5c20
// body: available
// range: 0x500f5c20-0x500f5e44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500f5e40 to 0x500697b0 FUN_500697b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f5c20(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (_DAT_5015d1c8 == 0.0) {
    if (param_1[0x116] == 0) {
      FUN_500bd4e0((int)param_1);
    }
    FUN_500bd4e0((int)param_1);
    iVar1 = param_1[0x1d];
    if (((*(float *)(DAT_5015c8c8 + 0x18) == 0.0) ||
        (*(int *)(iVar1 + 0x2dc) == *(int *)(iVar1 + 800))) ||
       (DAT_5015ccdc - *(float *)(iVar1 + 0x560) < 5.0)) {
      if (param_1[0xbe] == 0) {
        if (*(int *)(iVar1 + 800) == 0) {
          FUN_500f5200((int)param_1);
        }
        if (*(int **)(iVar1 + 0x34c) != (int *)0x0) {
          iVar2 = (**(code **)(**(int **)(iVar1 + 0x34c) + 0x8c))();
          if (iVar2 == 0) {
            if (DAT_5015c78c != 0) goto LAB_500f5dfe;
            uVar3 = param_1[0x68] & 0xffffffdf;
          }
          else {
            uVar3 = param_1[0x68] | 0x20;
          }
          param_1[0x68] = uVar3;
        }
LAB_500f5dfe:
        iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
        if (iVar2 == 0) {
          iVar4 = FUN_500f6d20();
          iVar2 = FUN_500b0d40((int)param_1,iVar4,iVar2);
          if (iVar2 == 0) {
            FUN_500f6c70((float *)(param_1 + 1));
          }
        }
        *(undefined4 *)(iVar1 + 0x484) = 0;
        FUN_500697b0(0x5015c7b8);
        return;
      }
      if (DAT_5015ccdc <= *(float *)(iVar1 + 0x560)) {
        return;
      }
      iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
      if ((*(uint *)(iVar1 + 0x484) & (-(uint)(iVar2 != 0) & 2) - 1) == 0) {
        iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
        if (iVar2 == 0) {
          return;
        }
        iVar2 = (**(code **)(*DAT_5015c4d8 + 0x60))();
        if (iVar2 == 0) {
          return;
        }
      }
      iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
      if (iVar2 == 0) {
        (*DAT_5015cb78)(s_respawn_5014cda4);
      }
      else {
        FUN_500ef7b0(param_1);
        FUN_500f38a0((int)param_1);
        if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
          FUN_50083bb0((int)param_1,0xf);
          *(undefined1 *)(param_1[0x1d] + 0x10) = 0x20;
          *(undefined1 *)(param_1[0x1d] + 0x11) = 0xe;
        }
        param_1[0xc] = param_1[0xc] | 0x4000;
        *(float *)(param_1[0x1d] + 0x560) = DAT_5015ccdc;
      }
      *(undefined4 *)(iVar1 + 0x484) = 0;
      if (param_1[0x116] == 0) {
        *(undefined4 *)(iVar1 + 0x488) = 0;
        *(uint *)(iVar1 + 0x47c) = *(uint *)(iVar1 + 0x47c) | 1;
        *(uint *)(iVar1 + 0x480) = *(uint *)(iVar1 + 0x480) | 1;
        return;
      }
    }
    else {
      FUN_500f35d0(param_1);
    }
  }
  return;
}

