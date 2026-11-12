// rea decompile_all
// name: FUN_5001e420
// address: 0x5001e420
// body: available
// range: 0x5001e420-0x5001e596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001e420(void *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_200 [256];
  undefined1 local_100 [256];
  
  if (*(char *)((int)this + 0x74) == '\0') {
    return;
  }
  if ((*(int **)(param_1 + 0x450) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x450) + 0xd4))(param_1), iVar2 != 0)) {
    return;
  }
  if (DAT_5015d8d5 != '\0') {
    return;
  }
  FUN_50001090(local_100);
  cVar1 = (**(code **)(*(int *)this + 0x1e8))();
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x2ec) < 1) {
    return;
  }
  if (*(int *)((int)this + 0x1b8) != 0) {
    return;
  }
  iVar2 = *(int *)((int)this + 0x18c);
  if (iVar2 < 1) {
    return;
  }
  if (*(int *)((int)this + 0x194) == 0) {
    if (((DAT_50159110 < 1) || (iVar2 < DAT_50159110)) || (iVar2 < 2)) {
      iVar2 = (*DAT_5015cb24)(1,iVar2);
    }
    else {
      iVar2 = (*DAT_5015cb24)(1,iVar2 + -1);
      *(int *)((int)this + 0x194) = iVar2;
      if (iVar2 < DAT_50159110) goto LAB_5001e503;
      iVar2 = iVar2 + 1;
    }
    *(int *)((int)this + 0x194) = iVar2;
  }
LAB_5001e503:
  DAT_50159110 = *(undefined4 *)((int)this + 0x194);
  FUN_500fe2b0();
  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
    (*DAT_5015ca24)(s_greet_sound___s_50133534,auStack_200);
  }
  iVar2 = (*DAT_5015c9f4)(auStack_200);
  if (iVar2 != 0) {
    *(int *)((int)this + 0x68) = iVar2;
    *(int *)((int)this + 0x6c) = param_2;
    *(undefined4 *)((int)this + 0x70) = 0x3fcccccd;
  }
  return;
}

