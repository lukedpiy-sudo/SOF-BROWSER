// rea decompile_all
// name: FUN_2004f090
// address: 0x2004f090
// body: available
// range: 0x2004f090-0x2004f1a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2004f090(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  uint uStack_30;
  char *pcStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_1c = 1000;
  uStack_20 = 2;
  uStack_24 = 6;
  puStack_28 = (undefined4 *)0x2004f0aa;
  uVar2 = Ordinal_23();
  if (uVar2 == 0xffffffff) {
    puStack_28 = (undefined4 *)0x2004f0b6;
    iVar3 = Ordinal_111();
    if (iVar3 != 0x273f) {
      puStack_28 = (undefined4 *)0x2004f0c2;
      puStack_28 = (undefined4 *)FUN_2004f5b0();
      pcStack_2c = s_WARNING__IPX_Socket__socket___s_20136fec;
      uStack_30 = 0x2004f0cd;
      Com_Printf();
    }
    return 0;
  }
  puStack_28 = &uStack_20;
  pcStack_2c = (char *)0x8004667e;
  uStack_34 = 0xf0e7;
  uStack_32 = 0x2004;
  uStack_30 = uVar2;
  iVar3 = Ordinal_12();
  if (iVar3 == -1) {
    uStack_34 = 0xf0f1;
    uStack_32 = 0x2004;
    uVar4 = FUN_2004f5b0();
    uStack_34 = (undefined2)uVar4;
    uStack_32 = (undefined2)((uint)uVar4 >> 0x10);
    uStack_38._0_2_ = 0x6fc4;
    uStack_38._2_2_ = 0x2013;
    uStack_3c = 0xf0fc;
    uStack_3a = 0x2004;
    Com_Printf();
    return 0;
  }
  uStack_38 = &pcStack_2c;
  uStack_34 = 4;
  uStack_32 = 0;
  uStack_3c = 0x20;
  uStack_3a = 0;
  iVar3 = Ordinal_21(uVar2,0xffff);
  if (iVar3 == -1) {
    uVar4 = FUN_2004f5b0();
    Com_Printf(s_WARNING__IPX_Socket__setsockopt_S_20136f90,uVar4);
    return 0;
  }
  uStack_38._2_2_ = 0;
  uStack_34 = 0;
  uStack_3c = 6;
  uStack_3a = 0;
  uStack_38._0_2_ = 0;
  uStack_32 = 0;
  if (puStack_28 == (undefined4 *)0xffffffff) {
    uStack_30 = uStack_30 & 0xffff0000;
  }
  else {
    uVar1 = Ordinal_9(puStack_28);
    uStack_30 = CONCAT22(uStack_30._2_2_,uVar1);
  }
  iVar3 = Ordinal_2(uVar2,&uStack_3c,0xe);
  if (iVar3 == -1) {
    uVar4 = FUN_2004f5b0();
    Com_Printf(s_WARNING__IPX_Socket__bind___s_20136f70,uVar4);
    Ordinal_3(uVar2);
    return 0;
  }
  return uVar2;
}

