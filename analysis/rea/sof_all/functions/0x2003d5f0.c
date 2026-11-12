// rea decompile_all
// name: FUN_2003d5f0
// address: 0x2003d5f0
// body: available
// range: 0x2003d5f0-0x2003d72e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003d5f0(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  uint uVar4;
  double dVar5;
  
  uVar4 = *(uint *)(in_ECX + 4);
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + ((-uVar4 - 1) / 7 + 1) * 7;
  }
  if (6 < (int)uVar4) {
    uVar4 = uVar4 % 7;
  }
  FUN_2002e3e0(uVar4,0);
  Com_Printf();
  FUN_2002e3e0(uVar4,4,in_ECX + 0x24);
  FUN_2002e3e0();
  Com_Printf();
  dVar5 = (double)*(float *)(in_ECX + 0x18);
  uVar2 = FUN_2002e3e0();
  uVar2 = FUN_2002e3e0(uVar4,1,(double)*(float *)(in_ECX + 0x10),uVar2,dVar5);
  Com_Printf(&DAT_20134238,uVar2);
  dVar5 = (double)*(float *)(in_ECX + 0x1c);
  uVar2 = FUN_2002e3e0();
  uVar2 = FUN_2002e3e0(uVar4,2,(double)*(float *)(in_ECX + 0x14),uVar2,dVar5);
  Com_Printf(&DAT_201341f0,uVar2);
  iVar1 = *(int *)(in_ECX + 0x20);
  if (iVar1 == 0) {
    pcVar3 = s_Forward_2013389c;
  }
  else if (iVar1 == 1) {
    pcVar3 = s_Downward_201341cc;
  }
  else {
    pcVar3 = s_Backward_20133884;
    if (iVar1 != 2) {
      pcVar3 = &DAT_2015ee44;
    }
  }
  uVar2 = FUN_2002e3e0(uVar4,3,pcVar3);
  Com_Printf(&DAT_201341d8,uVar2);
  return;
}

