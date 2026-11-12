// rea decompile_all
// name: FUN_20091ed0
// address: 0x20091ed0
// body: available
// range: 0x20091ed0-0x20091fb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20091ed0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined1 local_5c [80];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010cbf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  in_ECX[1] = param_3;
  *in_ECX = &PTR_FUN_20113ba4;
  local_4 = 1;
  FUN_2010795b(&DAT_201365ec);
  puVar1 = (undefined4 *)FUN_20107c16(local_5c);
  in_ECX[2] = *puVar1;
  in_ECX[3] = puVar1[1];
  in_ECX[4] = puVar1[2];
  in_ECX[5] = puVar1[3];
  if (DAT_2040871c == 0) {
    DAT_2040871c = in_ECX[4];
    FUN_200f9f16(&LAB_20092020);
    in_ECX[5] = 0;
  }
  FUN_20107a14();
  if (in_ECX[5] != 0) {
    FUN_200f9d32(in_ECX[4]);
    in_ECX[5] = 0;
  }
  iVar2 = DAT_2040871c;
  if (param_1 != 0) {
    in_ECX[5] = param_2 & 0xff;
    iVar2 = param_1;
  }
  in_ECX[4] = iVar2;
  ExceptionList = local_c;
  return;
}

