// rea decompile_all
// name: FUN_200241b0
// address: 0x200241b0
// body: available
// range: 0x200241b0-0x2002420e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200241b0(HKEY param_1,LPCSTR param_2,BYTE *param_3)

{
  BYTE BVar1;
  uint uVar2;
  BYTE *pBVar3;
  DWORD local_4;
  
  RegCreateKeyExA((HKEY)0x80000000,(LPCSTR)param_1,0,s_REG_SZ_20131144,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&param_1,&local_4);
  uVar2 = 0xffffffff;
  pBVar3 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    BVar1 = *pBVar3;
    pBVar3 = pBVar3 + 1;
  } while (BVar1 != '\0');
  RegSetValueExA(param_1,param_2,0,1,param_3,~uVar2 - 1);
  RegCloseKey(param_1);
  return;
}

