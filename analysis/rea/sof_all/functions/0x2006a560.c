// rea decompile_all
// name: FUN_2006a560
// address: 0x2006a560
// body: available
// range: 0x2006a560-0x2006a672 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2006a560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  undefined3 extraout_var;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
LAB_2006a583:
  do {
    local_24 = local_24 & 0xffffff00;
    local_20 = 0;
    uVar2 = FUN_200be390(&param_1,1);
    if ((char)param_1 != '\0') {
      FUN_200be390(&local_24,2);
      uVar2 = FUN_200be390(&local_20,(local_24 & 0xff) * 4 + 4);
    }
    if ((short)local_20 == 0) {
      uVar3 = (undefined3)((uint)uVar2 >> 8);
      if (*(char *)(iVar1 + 0x14) != '\0') {
        FUN_2008e9e0(s_StringTable_underflowed_20156cb8);
        uVar3 = extraout_var;
      }
      ExceptionList = local_c;
      return CONCAT31(uVar3,1);
    }
    local_18 = 0;
    local_1c[0] = (char)param_1;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    FUN_200be060(local_1c);
    FUN_20069fd0(local_1c);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      if (*(char *)(local_18 + -1) != '\0') {
        *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_2006a583;
      }
      FUN_200f9f75((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  } while( true );
}

