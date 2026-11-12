// rea decompile_all
// name: FUN_2003e060
// address: 0x2003e060
// body: available
// range: 0x2003e060-0x2003e1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003e060(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = *(uint *)(in_ECX + 4);
  if ((int)uVar7 < 0) {
    uVar7 = uVar7 + ((-uVar7 - 1) / 0xb + 1) * 0xb;
  }
  if (10 < (int)uVar7) {
    uVar7 = uVar7 % 0xb;
  }
  FUN_2002e3e0(uVar7,0);
  Com_Printf();
  fVar1 = *(float *)(in_ECX + 0x10);
  fVar2 = *(float *)(in_ECX + 0x1c);
  dVar10 = (double)*(float *)(in_ECX + 0x14);
  fVar3 = *(float *)(in_ECX + 0x18);
  uVar4 = FUN_2002e3e0();
  dVar9 = (double)fVar1;
  uVar5 = FUN_2002e3e0();
  dVar8 = (double)fVar2;
  uVar6 = FUN_2002e3e0();
  uVar4 = FUN_2002e3e0(uVar7,1,(double)fVar3,uVar6,dVar8,uVar5,dVar9,uVar4,dVar10);
  Com_Printf(&DAT_2013439c,uVar4);
  fVar1 = *(float *)(in_ECX + 0x30);
  fVar2 = *(float *)(in_ECX + 0x24);
  dVar10 = (double)*(float *)(in_ECX + 0x34);
  fVar3 = *(float *)(in_ECX + 0x20);
  uVar4 = FUN_2002e3e0();
  dVar9 = (double)fVar1;
  uVar5 = FUN_2002e3e0();
  dVar8 = (double)fVar2;
  uVar6 = FUN_2002e3e0();
  uVar4 = FUN_2002e3e0(uVar7,3,(double)fVar3,uVar6,dVar8,uVar5,dVar9,uVar4,dVar10);
  Com_Printf(&DAT_2013435c,uVar4);
  FUN_2002e3e0();
  FUN_2002e3e0();
  Com_Printf();
  return;
}

