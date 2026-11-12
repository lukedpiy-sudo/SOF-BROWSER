// rea decompile_all
// name: FUN_20095740
// address: 0x20095740
// body: available
// range: 0x20095740-0x2009583b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20095740(int param_1)

{
  int in_ECX;
  undefined4 **ppuStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0x3f800000;
  local_10 = *(undefined4 *)(in_ECX + 0x68);
  local_c = *(undefined4 *)(in_ECX + 0x6c);
  local_8 = *(undefined4 *)(in_ECX + 0x70);
  puStack_1c = &local_10;
  param_1 = param_1 + 0x4000;
  uStack_20 = 0x1201;
  ppuStack_28 = (undefined4 **)0x20095785;
  iStack_24 = param_1;
  (**(code **)(DAT_20403c04 + 0xb0))();
  ppuStack_28 = &puStack_1c;
  (**(code **)(DAT_20403c04 + 0xb0))(param_1,0x1202);
  iStack_24 = *(undefined4 *)(in_ECX + 0x60);
  ppuStack_28 = *(undefined4 ***)(in_ECX + 0x5c);
  uStack_20 = *(undefined4 *)(in_ECX + 100);
  puStack_1c = (undefined4 *)0x0;
  if (DAT_20403c0c == '\0') {
    puStack_1c = (undefined4 *)0x3f800000;
  }
  (**(code **)(DAT_20403c04 + 0xb0))(param_1,0x1203,&ppuStack_28);
  if (DAT_20156fc8 == '\0') {
    (**(code **)(DAT_20403c04 + 0xac))(param_1,0x1208,0);
  }
  else {
    (**(code **)(DAT_20403c04 + 0xac))(param_1,0x1208,1.0 / *(float *)(in_ECX + 0xc4));
  }
  (**(code **)(DAT_20403c04 + 0xac))(param_1,0x1209,0);
  return;
}

