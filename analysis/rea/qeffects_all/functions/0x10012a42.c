// rea decompile_all
// name: FUN_10012a42
// address: 0x10012a42
// body: available
// range: 0x10012a42-0x10012b1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012b1d with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10012a42(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  size_t sVar3;
  char *_Dst;
  errno_t eVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  
  if (DAT_1002abd0 == 0) {
    ___initmbctable();
  }
  iVar7 = 0;
  pcVar6 = DAT_10028394;
  if (DAT_10028394 != (char *)0x0) {
    for (; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar3 + 1) {
      if (*pcVar6 != '=') {
        iVar7 = iVar7 + 1;
      }
      sVar3 = _strlen(pcVar6);
    }
    puVar2 = __calloc_crt(iVar7 + 1,4);
    pcVar6 = DAT_10028394;
    DAT_100286e0 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        if (*pcVar6 == '\0') {
          _free(DAT_10028394);
          DAT_10028394 = (char *)0x0;
          *puVar2 = 0;
          DAT_1002abc4 = 1;
          return 0;
        }
        sVar3 = _strlen(pcVar6);
        sVar3 = sVar3 + 1;
        if (*pcVar6 != '=') {
          _Dst = __calloc_crt(sVar3,1);
          *puVar2 = _Dst;
          if (_Dst == (char *)0x0) {
            _free(DAT_100286e0);
            DAT_100286e0 = (undefined4 *)0x0;
            return 0xffffffff;
          }
          eVar4 = _strcpy_s(_Dst,sVar3,pcVar6);
          if (eVar4 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          puVar2 = puVar2 + 1;
        }
        pcVar6 = pcVar6 + sVar3;
      } while( true );
    }
  }
  return 0xffffffff;
}

