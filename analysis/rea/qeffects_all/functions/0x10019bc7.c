// rea decompile_all
// name: FUN_10019bc7
// address: 0x10019bc7
// body: available
// range: 0x10019bc7-0x10019c54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019c54 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_10019bc7(undefined4 param_1,undefined4 param_2,int *param_3,char *param_4,rsize_t param_5)

{
  code *pcVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  errno_t eVar5;
  uint local_34;
  uint uStack_30;
  ushort uStack_2c;
  char *local_28;
  short local_24;
  char local_22;
  char local_20 [24];
  uint local_8;
  
  piVar2 = param_3;
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  ___dtold(&local_34,&param_1);
  iVar4 = _I10_OUTPUT(local_34,uStack_30,uStack_2c,0x11,0,&local_24);
  pcVar3 = local_28;
  piVar2[2] = iVar4;
  *piVar2 = (int)local_22;
  piVar2[1] = (int)local_24;
  eVar5 = _strcpy_s(local_28,param_5,local_20);
  if (eVar5 == 0) {
    piVar2[3] = (int)pcVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

