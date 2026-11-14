// rea decompile_all
// name: FUN_1000b720
// address: 0x1000b720
// body: available
// range: 0x1000b720-0x1000b7b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_1000b720(int param_1,INT param_2)

{
  LPCSTR in_EAX;
  UINT UVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (*(code **)(in_EAX + 0x208) != (code *)0x0) {
    uVar3 = (**(code **)(in_EAX + 0x208))(param_1,0,0,0);
    if ((int)uVar3 != 0) {
      uVar4 = FUN_1001b510(extraout_ECX,(int)((ulonglong)uVar3 >> 0x20));
      return uVar4;
    }
  }
  UVar1 = GetPrivateProfileIntA(in_EAX + 0x104,(LPCSTR)(param_1 + 4),-99999,in_EAX);
  uVar2 = extraout_EDX;
  if (UVar1 == 0xfffe7961) {
    UVar1 = GetPrivateProfileIntA("Generic",(LPCSTR)(param_1 + 4),param_2,in_EAX);
    uVar2 = extraout_EDX_00;
  }
  if (*(code **)(in_EAX + 0x210) != (code *)0x0) {
    (**(code **)(in_EAX + 0x210))(param_1,(float)(int)UVar1);
    uVar2 = extraout_EDX_01;
  }
  return CONCAT44(uVar2,UVar1);
}

