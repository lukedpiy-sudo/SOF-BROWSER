// rea decompile_all
// name: FUN_20042f80
// address: 0x20042f80
// body: available
// range: 0x20042f80-0x200430ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20042f80(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  bVar1 = FUN_2001e260(&DAT_20367ebc);
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 1;
  local_60 = 0x3f800000;
  local_5c = 0;
  local_58 = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  local_40 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  FUN_200427e0();
  iVar3 = 0;
  piVar4 = &DAT_2032faa8;
  iVar2 = 0;
  do {
    if (*piVar4 == 0) {
      (&DAT_2032faa8)[iVar3 * 0xd3] = 1;
      if ((iVar3 * 0xd3 & 0x3fffffffU) != 0x37f34228) {
        FUN_20041da0(&DAT_20321f60 + (uint)bVar1 * 0x6c,&local_84,2);
      }
      return;
    }
    iVar2 = iVar2 + 0x34c;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0xd3;
  } while (iVar2 < 0x34c00);
  return;
}

