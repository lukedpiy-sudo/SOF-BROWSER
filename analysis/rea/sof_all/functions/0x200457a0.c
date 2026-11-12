// rea decompile_all
// name: FUN_200457a0
// address: 0x200457a0
// body: available
// range: 0x200457a0-0x2004590d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200457a0(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = -500.0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  do {
    iVar2 = FUN_2003b170(&param_2);
    if (iVar2 == 0) {
      return;
    }
    local_c = (float)local_1c * *pfVar1;
    local_8 = (float)local_1c * pfVar1[1];
    local_4 = (float)local_24;
    local_10 = (float)local_20;
    FUN_20038110(param_2,600,8,0);
    iVar2 = FUN_200f9f57();
    FUN_20039e00(param_2,param_1,0x40400000,0x40400000,0x3c,0,0,200,(float)(iVar2 % 0x274) * 0.01);
    iVar2 = FUN_200f9f57((float)local_28 * 1.6666666,
                         (float)(int)-(uint)*(byte *)((int)param_2 + 0x2f) * 1.6666666,0);
    FUN_20039c90(param_2,&local_c,&local_18,(float)(iVar2 % 0x274) * 0.01);
    local_28 = local_28 + 1;
    local_1c = local_1c + 0xf;
    local_24 = local_24 + 10;
    local_20 = local_20 + -0x28;
  } while (local_1c < 0x4b);
  return;
}

