// rea decompile_all
// name: FUN_500ac710
// address: 0x500ac710
// body: available
// range: 0x500ac710-0x500ac8fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500ac710(void)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  FUN_5010777b((double)*(float *)(DAT_5015d298 + 0x18));
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (*(float *)(DAT_5015c8c8 + 0x18) != 0.0) goto LAB_500ac8e4;
  if (iVar1 < 0) {
LAB_500ac758:
    (*DAT_5015cb58)(s_sk_toughness_5014c664,&DAT_50144958);
    (*DAT_5015cb58)(s_sk_spawning_5014c658,&DAT_50144958);
    (*DAT_5015cb58)(s_sk_saving_5014c648,&DAT_5014c654);
    (*DAT_5015cb58)(s_cheats_5014c640,&DAT_50144e4c);
    puVar4 = &DAT_50144958;
  }
  else {
    if (5 < iVar1) goto LAB_500ac8e4;
    if (iVar1 == 0) goto LAB_500ac758;
    if (iVar1 == 1) {
      (*DAT_5015cb58)(s_sk_toughness_5014c664,&DAT_50144e4c);
      (*DAT_5015cb58)(s_sk_spawning_5014c658,&DAT_50144e4c);
      (*DAT_5015cb58)(s_sk_saving_5014c648,&DAT_5014c63c);
      (*DAT_5015cb58)(s_cheats_5014c640,&DAT_50144e4c);
      puVar4 = &DAT_50144e4c;
    }
    else if (iVar1 == 2) {
      (*DAT_5015cb58)(s_sk_toughness_5014c664,&DAT_5014c638);
      (*DAT_5015cb58)(s_sk_spawning_5014c658,&DAT_5014c638);
      (*DAT_5015cb58)(s_sk_saving_5014c648,&DAT_5014c634);
      (*DAT_5015cb58)(s_cheats_5014c640,&DAT_50144e4c);
      puVar4 = &DAT_5014c638;
    }
    else if (iVar1 == 3) {
      (*DAT_5015cb58)(s_sk_toughness_5014c664,&DAT_5014c630);
      (*DAT_5015cb58)(s_sk_spawning_5014c658,&DAT_5014c62c);
      (*DAT_5015cb58)(s_sk_saving_5014c648,&DAT_5014c638);
      (*DAT_5015cb58)(s_cheats_5014c640,&DAT_50144958);
      puVar4 = &DAT_5014c62c;
    }
    else {
      if (iVar1 != 4) goto LAB_500ac8e4;
      (*DAT_5015cb58)(s_sk_toughness_5014c664,&DAT_5014c62c);
      (*DAT_5015cb58)(s_sk_spawning_5014c658,&DAT_5014c630);
      (*DAT_5015cb58)(s_sk_saving_5014c648,&DAT_50144958);
      (*DAT_5015cb58)(s_cheats_5014c640,&DAT_50144958);
      puVar4 = &DAT_5014c630;
    }
  }
  (*DAT_5015cb58)(s_sk_maxencum_5014c620,puVar4);
LAB_500ac8e4:
  FUN_500bc9e0(&DAT_5015d900);
  fVar2 = FUN_500bcbd0(0x5015d900);
  _DAT_5015d954 = (float)fVar2;
  return;
}

