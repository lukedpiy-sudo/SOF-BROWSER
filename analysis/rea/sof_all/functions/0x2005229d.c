// rea decompile_all
// name: FUN_2005229d
// address: 0x2005229d
// body: available
// range: 0x2005229d-0x20052451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005229d(char *param_1)

{
  LSTATUS LVar1;
  size_t sVar2;
  int in_ECX;
  char local_e;
  char cStack_d;
  undefined2 uStack_c;
  undefined1 uStack_a;
  undefined1 uStack_9;
  uint local_8;
  
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_201375b8,0,0x20006,
                        (PHKEY)&uStack_c);
  if (LVar1 != 0) {
    RegCreateKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_201375d4,0,(LPSTR)0x0,0,0x20006,
                    (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)&uStack_c,(LPDWORD)0x0);
  }
  sVar2 = _strlen(param_1);
  if (sVar2 < 0x21) {
    FUN_20107ed2(param_1);
    for (local_8 = 0; local_8 < sVar2; local_8 = local_8 + 2) {
      cStack_d = '\0';
      local_e = '\0';
      if ((param_1[local_8] < '0') || ('9' < param_1[local_8])) {
        if (('@' < param_1[local_8]) && (param_1[local_8] < 'G')) {
          local_e = param_1[local_8] + -0x37;
        }
      }
      else {
        local_e = param_1[local_8] + -0x30;
      }
      if ((param_1[local_8 + 1] < '0') || ('9' < param_1[local_8 + 1])) {
        if (('@' < param_1[local_8 + 1]) && (param_1[local_8 + 1] < 'G')) {
          cStack_d = param_1[local_8 + 1] + -0x37;
        }
      }
      else {
        cStack_d = param_1[local_8 + 1] + -0x30;
      }
      *(char *)(in_ECX + 1 + (local_8 >> 1)) = local_e * '\x10' + cStack_d;
    }
    *(size_t *)(in_ECX + 0x28) = sVar2 >> 1;
    RegSetValueExA((HKEY)CONCAT13(uStack_9,CONCAT12(uStack_a,uStack_c)),PTR_s_Server_201374e4,0,3,
                   (BYTE *)(in_ECX + 1),*(DWORD *)(in_ECX + 0x28));
    RegCloseKey((HKEY)CONCAT13(uStack_9,CONCAT12(uStack_a,uStack_c)));
  }
  return;
}

