// rea decompile_all
// name: FUN_2004ecb0
// address: 0x2004ecb0
// body: available
// range: 0x2004ecb0-0x2004ee21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2004ecb0(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int aiStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  char *pcStack_30;
  undefined4 *puStack_2c;
  char *pcStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  uStack_20 = 0x11;
  iStack_24 = 2;
  pcStack_28 = (char *)0x2;
  puStack_2c = (undefined4 *)0x2004eccc;
  iVar3 = Ordinal_23();
  if (iVar3 == -1) {
    puStack_2c = (undefined4 *)0x2004ecd8;
    iVar3 = Ordinal_111();
    if (iVar3 != 0x273f) {
      puStack_2c = (undefined4 *)0x2004ece4;
      puStack_2c = (undefined4 *)FUN_2004f5b0();
      pcStack_30 = s_WARNING__UDP_OpenSocket__socket__20136ee0;
      iStack_34 = 0x2004ecef;
      Com_Printf();
    }
    return 0;
  }
  puStack_2c = &uStack_20;
  pcStack_30 = (char *)0x8004667e;
  uStack_38 = 0x2004ed09;
  iStack_34 = iVar3;
  iVar4 = Ordinal_12();
  if (iVar4 == -1) {
    uStack_38 = 0x2004ed13;
    uStack_38 = FUN_2004f5b0();
    uStack_3c = s_WARNING__UDP_OpenSocket__ioctl_F_20136eb4;
    aiStack_44[1] = 0x2004ed1e;
    Com_Printf();
    return 0;
  }
  uStack_3c = (char *)&pcStack_30;
  uStack_38 = 4;
  aiStack_44[1] = 0x20;
  aiStack_44[0] = 0xffff;
  iVar4 = Ordinal_21(iVar3);
  if (iVar4 == -1) {
    uVar5 = FUN_2004f5b0();
    Com_Printf(s_WARNING__UDP_OpenSocket__setsock_20136e7c,uVar5);
    return 0;
  }
  aiStack_44[0] = __ftol();
  if (0 < aiStack_44[0]) {
    Ordinal_21(iVar3,0,3,aiStack_44,4);
  }
  pcVar1 = pcStack_28;
  iVar4 = __strcmpi(pcStack_28,s_localhost_2011d7dc);
  if (((iVar4 == 0) || (pcVar1 == (char *)0x0)) || (*pcVar1 == '\0')) {
    uStack_38 = 0;
  }
  else {
    FUN_2004e000(pcVar1,&uStack_3c);
  }
  if (iStack_24 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = Ordinal_9(iStack_24);
  }
  iStack_34 = 0;
  uStack_3c = (char *)CONCAT22(uVar2,2);
  pcStack_30 = (char *)0x0;
  iVar4 = Ordinal_2(iVar3,&uStack_3c,0x10);
  if (iVar4 == -1) {
    uVar5 = FUN_2004f5b0();
    Com_Printf(s_WARNING__UDP_OpenSocket__bind____20136e58,uVar5);
    Ordinal_3(iVar3);
    return 0;
  }
  return iVar3;
}

