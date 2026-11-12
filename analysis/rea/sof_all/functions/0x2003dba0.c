// rea decompile_all
// name: FUN_2003dba0
// address: 0x2003dba0
// body: available
// range: 0x2003dba0-0x2003dccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003dba0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  double dVar7;
  
  uVar6 = *(uint *)(in_ECX + 4);
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 8 + (-uVar6 - 1 & 0xfffffff8);
  }
  if (7 < (int)uVar6) {
    uVar6 = uVar6 + (uVar6 >> 3) * -8;
  }
  uVar4 = FUN_2002e3e0(uVar6,0);
  Com_Printf(s__sGo_back_to_Main_Effect_201341b0,uVar4);
  fVar1 = *(float *)(in_ECX + 0x18);
  fVar2 = *(float *)(in_ECX + 0x14);
  fVar3 = *(float *)(in_ECX + 0x10);
  uVar4 = FUN_2002e3e0(uVar6,6,(double)*(float *)(in_ECX + 0x1c));
  uVar4 = FUN_2002e3e0(uVar6,5,(double)fVar1,uVar4);
  dVar7 = (double)fVar2;
  uVar5 = FUN_2002e3e0();
  uVar4 = FUN_2002e3e0(uVar6,1,(double)fVar3,uVar5,dVar7,uVar4);
  Com_Printf(&DAT_201342f0,uVar4);
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(in_ECX + 0x20);
  uVar4 = FUN_2002e3e0(uVar6,7,(&PTR_s_No_force_feedback_20133e40)[*(int *)(in_ECX + 0x28)]);
  uVar4 = FUN_2002e3e0(uVar6,4,(double)fVar1,uVar4);
  uVar4 = FUN_2002e3e0(uVar6,3,(double)fVar2,uVar4);
  Com_Printf(&DAT_201342b0,uVar4);
  Com_Printf();
  return;
}

