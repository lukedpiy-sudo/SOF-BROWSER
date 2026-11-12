// rea decompile_all
// name: FUN_20051fb4
// address: 0x20051fb4
// body: available
// range: 0x20051fb4-0x200520c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20051fb4(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined1 *in_ECX;
  int local_18;
  HKEY local_14;
  DWORD local_10;
  DWORD local_c;
  int local_8;
  
  RegOpenKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_20137594,0,0x20019,&local_14);
  local_10 = 4;
  local_8 = RegQueryValueExA(local_14,(&PTR_s_Server_201374e4)[param_1],(LPDWORD)0x0,&local_c,
                             (LPBYTE)&local_18,&local_10);
  RegCloseKey(local_14);
  if ((local_8 == 0) && (local_c == 4)) {
    if (local_18 == *(int *)(in_ECX + param_1 * 8 + 0x48)) {
      *(undefined4 *)(in_ECX + param_1 * 4 + 0x2c) = *(undefined4 *)(in_ECX + param_1 * 8 + 0x48);
      uVar1 = 0;
    }
    else if (local_18 == *(int *)(in_ECX + param_1 * 8 + 0x4c)) {
      *(undefined4 *)(in_ECX + param_1 * 4 + 0x2c) = *(undefined4 *)(in_ECX + param_1 * 8 + 0x4c);
      uVar1 = 1;
    }
    else {
      *(undefined4 *)(in_ECX + param_1 * 4 + 0x2c) = *(undefined4 *)(in_ECX + param_1 * 8 + 0x4c);
      if (param_2 == '\0') {
        *in_ECX = 1;
      }
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(in_ECX + param_1 * 4 + 0x2c) = *(undefined4 *)(in_ECX + param_1 * 8 + 0x4c);
    if (param_2 == '\0') {
      *in_ECX = 1;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

