// rea decompile_all
// name: FUN_500272c0
// address: 0x500272c0
// body: available
// range: 0x500272c0-0x50027365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500272c0(void *this,float *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  
  uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1,this);
  switch(uVar2) {
  default:
    fVar4 = 0.0;
    break;
  case 3:
    fVar4 = 0.1;
    break;
  case 5:
    fVar4 = 0.4;
    break;
  case 6:
    fVar4 = 0.3;
    break;
  case 9:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1d:
    fVar4 = 0.2;
  }
  fVar1 = -fVar4;
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,fVar4);
  *param_1 = (float)(fVar3 + (float10)*param_1);
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,fVar4);
  param_1[1] = (float)(fVar3 + (float10)param_1[1]);
  fVar3 = (float10)(*DAT_5015cb20)(fVar1,fVar4);
  param_1[2] = (float)(fVar3 + (float10)param_1[2]);
  FUN_500fe050(param_1);
  return;
}

