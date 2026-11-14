// rea decompile_all
// name: __fltin2
// address: 0x1001218e
// body: available
// range: 0x1001218e-0x10012234 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2010 Release */

FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  char *local_28;
  char *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = ___strgtold12_l(&local_14,&local_28,_Str,0,0,0,0,_Locale);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_20.x._0_4_ = 0;
    local_20.x._4_4_ = 0;
  }
  _Flt->nbytes = (int)local_28 - (int)local_24;
  *(undefined4 *)&_Flt->dval = local_20.x._0_4_;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_20.x._4_4_;
  _Flt->flags = uVar3;
  p_Var2 = (FLT)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}

