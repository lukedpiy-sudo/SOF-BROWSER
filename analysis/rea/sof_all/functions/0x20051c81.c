// rea decompile_all
// name: FUN_20051c81
// address: 0x20051c81
// body: available
// range: 0x20051c81-0x20051e1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20051c81(undefined1 *param_1)

{
  LSTATUS LVar1;
  undefined1 *in_ECX;
  HKEY local_48;
  DWORD local_44;
  uint local_40;
  uint local_3c;
  byte local_38 [36];
  uint local_14;
  DWORD local_10;
  uint local_9;
  undefined1 uStack_5;
  
  local_9 = CONCAT31(local_9._1_3_,1);
  RegOpenKeyExA((HKEY)0x80000001,s_Software_Raven_Software_SoF_20137540,0,0x20019,&local_48);
  local_44 = 0x24;
  LVar1 = RegQueryValueExA(local_48,PTR_s_Server_201374e4,(LPDWORD)0x0,&local_10,local_38,&local_44)
  ;
  uStack_5 = (undefined1)((uint)LVar1 >> 0x18);
  if ((LVar1 == 0) && (local_10 == 3)) {
    if (0x24 < local_44) {
      local_44 = 0x24;
    }
    local_3c = 0;
    if (local_44 < 5) {
      *in_ECX = 1;
      local_9 = 0;
    }
    else {
      for (local_40 = 0; local_40 < local_44 - 4; local_40 = local_40 + 1) {
        param_1[local_40] =
             local_38[local_40] -
             (char)(*(uint *)(in_ECX + 0x80) >> ((byte)((local_40 & 7) << 3) & 0x1f));
        in_ECX[local_40 + 1] = local_38[local_40];
        local_3c = (uint)(byte)in_ECX[local_40 + 1] + local_3c * 2;
      }
      local_3c = local_3c ^ *(uint *)(in_ECX + 0x80);
      local_14 = 0;
      for (; local_40 < local_44; local_40 = local_40 + 1) {
        local_14 = (local_14 >> 8) + (uint)local_38[local_40] * 0x1000000;
        in_ECX[local_40 + 1] = local_38[local_40];
      }
      *(DWORD *)(in_ECX + 0x28) = local_44;
      if (local_14 != local_3c) {
        *in_ECX = 1;
        local_9._0_1_ = 0;
      }
      local_9 = (uint)(byte)local_9;
    }
  }
  else {
    *in_ECX = 1;
    local_9 = LVar1 << 8;
  }
  RegCloseKey(local_48);
  if ((local_9 & 0xff) == 0) {
    *param_1 = 0;
  }
  return local_9 & 0xff;
}

