// rea decompile_all
// name: FUN_20051e1b
// address: 0x20051e1b
// body: available
// range: 0x20051e1b-0x20051ebc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20051e1b(int param_1,uint param_2)

{
  LSTATUS LVar1;
  int in_ECX;
  HKEY local_8;
  
  *(undefined4 *)(in_ECX + 0x2c + param_1 * 4) =
       *(undefined4 *)(in_ECX + 0x48 + param_1 * 8 + (param_2 & 0xff) * 4);
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_2013755c,0,0x20006,&local_8);
  if (LVar1 != 0) {
    RegCreateKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_20137578,0,(LPSTR)0x0,0,0x20006,
                    (LPSECURITY_ATTRIBUTES)0x0,&local_8,(LPDWORD)0x0);
  }
  RegSetValueExA(local_8,(&PTR_s_Server_201374e4)[param_1],0,4,(BYTE *)(in_ECX + 0x2c + param_1 * 4)
                 ,4);
  RegCloseKey(local_8);
  return;
}

