// rea decompile_all
// name: FUN_20042dc0
// address: 0x20042dc0
// body: available
// range: 0x20042dc0-0x20042ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20042dc0(void)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b1f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200fb5cd(in_ECX + 2,0x6c,0x100,FUN_20041b70,FUN_20041bc0);
  local_4 = 0;
  FUN_200fb5cd(in_ECX + 0x1b02,0x6c,0x100,FUN_20041b70,FUN_20041bc0);
  puVar1 = in_ECX + 0x3602;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_14 = 0x100;
  puVar2 = in_ECX + 0x3608;
  do {
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 1;
    puVar2[4] = 0x3f800000;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0x3f800000;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0x3f800000;
    puVar2[0x1b] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x19] = 0;
    FUN_20011520(puVar2 + 0x29,0x40,10,&LAB_20042ef0);
    *puVar1 = 0;
    puVar2[0xcc] = 0;
    puVar1 = puVar1 + 0xd3;
    puVar2 = puVar2 + 0xd3;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *in_ECX = 0;
  in_ECX[1] = 0;
  ExceptionList = local_c;
  return;
}

