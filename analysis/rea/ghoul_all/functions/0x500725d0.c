// rea decompile_all
// name: FUN_500725d0
// address: 0x500725d0
// body: available
// range: 0x500725d0-0x5007274a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500725d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if ((((param_2[0x1d] != 0) && (param_2[0xf3] != 0)) &&
      (param_2[0xf3] != *(int *)(param_1 + 0x318))) && (*(float *)(DAT_5015c8a4 + 0x18) == 0.0)) {
    pcVar3 = s_ctf_flag_blue_50144c38;
    if (*(int *)(param_1 + 0x318) != 1) {
      pcVar3 = s_ctf_flag_red_50144c48;
    }
    uVar4 = FUN_500c26a0(0,0x1b4,pcVar3,(void *)0x0);
    if ((uVar4 == 0) || (*(int *)(uVar4 + 0x3cc) != 0)) {
      uVar5 = (*DAT_5015c9f4)(s_dm_ctf_flagbase_wav_50145104,0x3f800000,0,0,0);
      (*DAT_5015ca48)(param_2,8,uVar5);
      (**(code **)(*DAT_5015c4d8 + 0x34))(*(undefined4 *)(param_2[0x1d] + 0x324));
      if (param_2[0xf3] == 1) {
        uVar5 = *param_2;
        uVar7 = 0xa13;
      }
      else {
        uVar5 = *param_2;
        uVar7 = 0xa05;
      }
      (*DAT_5015cab0)(0,uVar7,uVar5,0xf);
      *(int *)(param_2[0x1d] + 0x308) = *(int *)(param_2[0x1d] + 0x308) + 0xf;
      if (*(float *)(DAT_5015c9b0 + 0x18) != 0.0) {
        iVar1 = *DAT_5015c4d8;
        lVar6 = __ftol();
        cVar2 = (**(code **)(iVar1 + 0x38))((int)lVar6);
        if (cVar2 != '\0') {
          (*DAT_5015cb54)(s_ctf_flag_captured_501450a8,0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x5007270a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*_DAT_5015ca44)();
          return;
        }
      }
      (*DAT_5015cb54)(s_ctf_loops_count_501450bc,*(float *)(DAT_5015c9e0 + 0x18) + 1.0);
      FUN_500724d0(s_ctf_flag_blue_50144c38,1);
      FUN_500724d0(s_ctf_flag_red_50144c48,2);
    }
  }
  return;
}

