// rea decompile_all
// name: FUN_20029c90
// address: 0x20029c90
// body: available
// range: 0x20029c90-0x20029d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20029c90(undefined4 param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x42c80000;
  iVar1 = FUN_2003b170(&local_20);
  if (iVar1 != 0) {
    local_c = 0;
    local_8 = 0;
    local_4 = 0x41f00000;
    FUN_20038110(local_20,0x4b0,8,0);
    local_1c = FUN_200f9f57();
    local_1c = local_1c % 0x274;
    FUN_20039e00(local_20,param_1,0x41200000,0x41200000,0xaa,0xaa,0xaa,200,(float)local_1c * 0.01);
    iVar1 = FUN_200f9f57(0x3f19999a,(float)(int)-(uint)*(byte *)(local_20 + 0x2f) * 1.6666666,0);
    FUN_20039c90(local_20,&local_c,&local_18,(float)(iVar1 % 0x274) * 0.01);
  }
  return;
}

