// rea decompile_all
// name: _raise
// address: 0x10013329
// body: available
// range: 0x10013329-0x10013489 inclusive
// range: 0x1001349f-0x100134cb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2010 Release */

int __cdecl _raise(int _SigNum)

{
  uint uVar1;
  int *piVar2;
  PVOID Ptr;
  code *pcVar3;
  int _File;
  int extraout_EAX;
  undefined4 uVar4;
  undefined4 *puVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        puVar5 = &DAT_100289d0;
        Ptr = DAT_100289d0;
        goto LAB_100133d3;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_100133b1;
        if (_SigNum != 8) goto LAB_1001339f;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    uVar1 = siglookup((uint)p_Var6->_pxcptacttab);
    puVar5 = (undefined4 *)(uVar1 + 8);
    pcVar3 = (code *)*puVar5;
  }
  else {
    if (_SigNum == 0xf) {
      puVar5 = &DAT_100289dc;
      Ptr = DAT_100289dc;
    }
    else if (_SigNum == 0x15) {
      puVar5 = &DAT_100289d4;
      Ptr = DAT_100289d4;
    }
    else {
      if (_SigNum != 0x16) {
LAB_1001339f:
        piVar2 = __errno();
        *piVar2 = 0x16;
        FUN_1000d7dd();
        return -1;
      }
LAB_100133b1:
      puVar5 = &DAT_100289d8;
      Ptr = DAT_100289d8;
    }
LAB_100133d3:
    local_20 = 1;
    pcVar3 = DecodePointer(Ptr);
  }
  _File = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    __exit(3);
    _File = extraout_EAX;
  }
  if (local_20 != _File) {
    __lock(_File);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_10013437;
    }
  }
  else {
LAB_10013437:
    if (_SigNum == 8) {
      for (local_28 = 3; local_28 < 0xc; local_28 = local_28 + 1) {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_1001346f;
    }
  }
  uVar4 = FUN_10011b6b();
  *puVar5 = uVar4;
LAB_1001346f:
  FUN_10013490();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}

