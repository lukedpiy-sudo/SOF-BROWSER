// rea decompile_all
// name: FUN_30016ba0
// address: 0x30016ba0
// body: available
// range: 0x30016ba0-0x30016c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30016ba0(int param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *(int *)(param_1 + 8);
  local_c = 0;
  if (0 < local_8) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 8);
      this = (void *)FUN_30018010((int *)(param_1 + 0x6c),&local_4);
      if (local_c == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(*(int *)(param_1 + 0x6c) + local_4 * 0x1c);
      }
      FUN_30017e30(this,param_1,param_1,((float)local_c - (float)local_8 * 0.5) * (float)iVar1,
                   piVar2);
      local_8 = *(int *)(param_1 + 8);
      local_c = local_c + 1;
    } while (local_c < local_8);
  }
  *(undefined4 *)(param_1 + 0x78) = DAT_3008fd38;
  DAT_300a3740 = FUN_30007380(s_textures_uganda_cloud_3002fa28,2,'\0','\x01');
  if (DAT_300a3740 == (char *)0x0) {
    DAT_300a3740 = DAT_3008fc64;
  }
  return;
}

