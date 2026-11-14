// rea decompile_all
// name: wglChoosePixelFormat
// address: 0x100016e0
// body: available
// range: 0x100016e0-0x1000173b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void wglChoosePixelFormat(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [2];
  undefined1 local_27;
  uint local_8;
  
                    /* 0x16e0  338  wglChoosePixelFormat */
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  puVar2 = local_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_27 = 0x20;
  if ((DAT_10029a88 == 0) && (DAT_10029a8c == '\0')) {
    FUN_10001d10();
  }
  (*DAT_100299d8)(param_1,local_30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

