// rea decompile_all
// name: FUN_500487c0
// address: 0x500487c0
// body: available
// range: 0x500487c0-0x50048924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500487c0(int param_1)

{
  FILE *pFVar1;
  void *pvVar2;
  int local_8c;
  FILE *local_88;
  char local_84 [4];
  CHAR local_80 [128];
  
  FUN_500fe2b0();
  pFVar1 = (FILE *)FUN_50107c80(local_80,&DAT_5014298c);
  local_88 = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    FUN_500adb20((byte *)s_ERROR__couldn_t_open__s__50142970);
    return;
  }
  local_84[0] = '(';
  local_84[1] = '\0';
  local_84[2] = '\0';
  local_84[3] = '\0';
  FUN_5010784a(local_84,4,1,(int *)pFVar1);
  if (*(int *)(param_1 + 4) == 0) {
    local_8c = 0;
  }
  else {
    local_8c = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x88;
  }
  FUN_5010784a((char *)&local_8c,4,1,(int *)pFVar1);
  pvVar2 = *(void **)(param_1 + 4);
  if (pvVar2 != *(void **)(param_1 + 8)) {
    do {
      FUN_500467a0(pvVar2,&local_88);
      pvVar2 = (void *)((int)pvVar2 + 0x88);
    } while (pvVar2 != *(void **)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x186a18) == 0) {
    local_8c = 0;
  }
  else {
    local_8c = (*(int *)(param_1 + 0x186a1c) - *(int *)(param_1 + 0x186a18)) / 0x88;
  }
  FUN_5010784a((char *)&local_8c,4,1,(int *)pFVar1);
  pvVar2 = *(void **)(param_1 + 0x186a18);
  if (pvVar2 != *(void **)(param_1 + 0x186a1c)) {
    do {
      FUN_500467a0(pvVar2,&local_88);
      pvVar2 = (void *)((int)pvVar2 + 0x88);
    } while (pvVar2 != *(void **)(param_1 + 0x186a1c));
  }
  FUN_50044d60((void *)(param_1 + 0x10),(int *)&local_88);
  FUN_50107c0a(pFVar1);
  return;
}

