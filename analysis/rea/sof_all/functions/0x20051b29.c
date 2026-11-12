// rea decompile_all
// name: FUN_20051b29
// address: 0x20051b29
// body: available
// range: 0x20051b29-0x20051c80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20051b29(char *param_1)

{
  LSTATUS LVar1;
  size_t sVar2;
  int in_ECX;
  uint local_14;
  HKEY local_10;
  uint local_c;
  uint local_8;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_20137508,0,0x20006,&local_10)
  ;
  if (LVar1 != 0) {
    RegCreateKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_20137524,0,(LPSTR)0x0,0,0x20006,
                    (LPSECURITY_ATTRIBUTES)0x0,&local_10,(LPDWORD)0x0);
  }
  sVar2 = _strlen(param_1);
  local_14 = sVar2 + 1;
  if (0x20 < local_14) {
    local_14 = 0x20;
  }
  local_8 = 0;
  for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
    *(char *)(in_ECX + local_c + 1) =
         param_1[local_c] + (char)(*(uint *)(in_ECX + 0x80) >> ((byte)((local_c & 7) << 3) & 0x1f));
    local_8 = (uint)*(byte *)(in_ECX + local_c + 1) + local_8 * 2;
  }
  local_8 = local_8 ^ *(uint *)(in_ECX + 0x80);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(char *)(in_ECX + 1 + local_14 + local_c) = (char)(local_8 >> ((byte)(local_c << 3) & 0x1f));
  }
  *(uint *)(in_ECX + 0x28) = local_14 + 4;
  RegSetValueExA(local_10,PTR_s_Server_201374e4,0,3,(BYTE *)(in_ECX + 1),local_14 + 4);
  RegCloseKey(local_10);
  return;
}

