// rea decompile_all
// name: FUN_1000b7c0
// address: 0x1000b7c0
// body: available
// range: 0x1000b7c0-0x1000b899 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1000b7c0(LPCSTR param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  double dVar4;
  float local_2c;
  CHAR local_28 [32];
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  if ((*(code **)(param_1 + 0x208) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x208))(param_2,0,0,0), iVar2 != 0)) goto LAB_1000b885;
  GetPrivateProfileStringA(param_1 + 0x104,(LPCSTR)(param_2 + 4),(LPCSTR)0x0,local_28,0x1f,param_1);
  pcVar3 = local_28;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)((int)local_28 + 1U)) {
    GetPrivateProfileStringA("Generic",(LPCSTR)(param_2 + 4),(LPCSTR)0x0,local_28,0x1f,param_1);
    pcVar3 = local_28;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != (char *)((int)local_28 + 1U)) goto LAB_1000b85f;
    local_2c = param_3;
  }
  else {
LAB_1000b85f:
    dVar4 = _atof(local_28);
    local_2c = (float)dVar4;
  }
  if (*(code **)(param_1 + 0x210) != (code *)0x0) {
    (**(code **)(param_1 + 0x210))(param_2,local_2c);
  }
LAB_1000b885:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

