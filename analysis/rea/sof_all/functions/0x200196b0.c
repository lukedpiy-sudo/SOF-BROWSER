// rea decompile_all
// name: FUN_200196b0
// address: 0x200196b0
// body: available
// range: 0x200196b0-0x200198a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200196b0(void)

{
  byte bVar1;
  int iVar2;
  _MEMORYSTATUS local_b4;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [32];
  undefined1 local_60 [48];
  char local_30 [48];
  
  FUN_20021260(&local_94);
  Com_Printf(s_____________Cpu_info_____________2012042c);
  Com_Printf(s_Processor____s__s_20120418,(&PTR_s_Intel_20120028)[local_94],local_60);
  Com_Printf(s_Type____s_20120408,(&PTR_s_Original_OEM_processor_20120038)[local_90]);
  Com_Printf(s_Speed____d_MHz_201203f4,local_88);
  if (local_84 != 0) {
    Com_Printf(s_Proc_ID____s_201203e4,local_80);
  }
  if (local_94 == 1) {
    iVar2 = (local_88 * 5) / 6;
  }
  else {
    iVar2 = local_88;
    if (local_94 == 2) {
      iVar2 = (int)(local_88 * 3 + (local_88 * 3 >> 0x1f & 3U)) >> 2;
    }
  }
  Cvar_SetValue(s_cpu_speed_201203d8,(float)iVar2);
  if (iVar2 < 0x187) {
    bVar1 = (0x122 < iVar2) + 2;
  }
  else {
    bVar1 = 4;
  }
  Cvar_SetValue(s_cpu_speed_level_201203c8,(float)bVar1);
  if (local_30[0] != '\0') {
    Com_Printf(s_Name____s_201203b8,local_30);
  }
  if ((local_8c & 0x800000) != 0) {
    Com_Printf(s_MMX_instructions_supported_2012039c);
  }
  if ((int)local_8c < 0) {
    Com_Printf(s_3DNow__instructions_supported_2012037c);
  }
  if ((local_8c & 0x10) != 0) {
    Com_Printf(s_RDTSC_instruction_supported_2012035c);
  }
  Com_Printf(s__________________________________20120338);
  local_b4.dwLength = 0x20;
  GlobalMemoryStatus(&local_b4);
  iVar2 = ((int)(local_b4.dwTotalPhys + ((int)local_b4.dwTotalPhys >> 0x1f & 0xfffffU)) >> 0x14) + 1
  ;
  Com_Printf(s__dMB_of_physical_memory_2012031c,iVar2);
  Cvar_SetValue(s_cpu_memory_20120310,(float)iVar2);
  if (iVar2 < 0x41) {
    bVar1 = (0x30 < iVar2) + 1;
  }
  else {
    bVar1 = 3;
  }
  Cvar_SetValue(s_cpu_memory_level_201202fc,(float)bVar1);
  return;
}

