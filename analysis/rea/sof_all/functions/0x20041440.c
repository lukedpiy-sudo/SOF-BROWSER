// rea decompile_all
// name: FUN_20041440
// address: 0x20041440
// body: available
// range: 0x20041440-0x2004152c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20041440(float *param_1,int param_2,float param_3,char param_4,int param_5)

{
  uint uVar1;
  float10 fVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1 - DAT_201e8ff0;
  local_8 = param_1[1] - DAT_201e8ff4;
  local_4 = param_1[2] - DAT_201e8ff8;
  fVar2 = (float10)VectorLength(&local_c);
  fVar2 = (float10)50.0 / fVar2;
  if ((float10)1.0 < fVar2) {
    fVar2 = (float10)1.0;
  }
  uVar6 = 0;
  uVar5 = 0x3f800000;
  fVar4 = (float)(fVar2 * (float10)param_3);
  if (param_4 == '\0') {
    uVar1 = FUN_200f9f57(fVar4,0x3f800000,0);
    iVar3 = (uVar1 & 3) + (uint)(byte)(&DAT_201348be)[param_2 * 0x10];
  }
  else {
    uVar5 = FUN_2002d860((&DAT_201348c0)[param_2 * 0x10],fVar4);
    (*DAT_20390d7c)(param_1,0xffffffff,0,uVar5);
    if (param_5 == 7) {
      return;
    }
    uVar6 = 0;
    uVar5 = 0x3f800000;
    iVar3 = 0x65;
  }
  uVar5 = FUN_2002d860(iVar3,fVar4,uVar5,uVar6);
  (*DAT_20390d7c)(param_1,0xffffffff,0,uVar5);
  return;
}

