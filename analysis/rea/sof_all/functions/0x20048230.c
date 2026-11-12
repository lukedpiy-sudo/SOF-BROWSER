// rea decompile_all
// name: FUN_20048230
// address: 0x20048230
// body: available
// range: 0x20048230-0x200483b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20048230(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010b2d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20111d88;
  local_4 = 2;
  piVar3 = *(int **)in_ECX[0xbf];
  if (piVar3 != (int *)in_ECX[0xbf]) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)in_ECX[0xbf]);
  }
  piVar3 = *(int **)in_ECX[0xc2];
  if (piVar3 != (int *)in_ECX[0xc2]) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)in_ECX[0xc2]);
  }
  piVar3 = *(int **)in_ECX[0xc5];
  if (piVar3 != (int *)in_ECX[0xc5]) {
    do {
      FUN_200f9f75(piVar3[2]);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)in_ECX[0xc5]);
  }
  piVar3 = (int *)in_ECX[0xc5];
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    puVar2 = (undefined4 *)FUN_2008d0b0(local_14,0);
    FUN_200ba400(local_10,*puVar2);
  }
  FUN_200f9f75(in_ECX[0xc5]);
  in_ECX[0xc5] = 0;
  in_ECX[0xc6] = 0;
  piVar3 = (int *)in_ECX[0xc2];
  local_4._0_1_ = 1;
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    puVar2 = (undefined4 *)FUN_2008d0b0(local_10,0);
    FUN_200ba400(local_14,*puVar2);
  }
  FUN_200f9f75(in_ECX[0xc2]);
  in_ECX[0xc2] = 0;
  in_ECX[0xc3] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2008c530(local_10,*(undefined4 *)in_ECX[0xbf],(undefined4 *)in_ECX[0xbf]);
  FUN_200f9f75(in_ECX[0xbf]);
  in_ECX[0xbf] = 0;
  in_ECX[0xc0] = 0;
  *in_ECX = &PTR_LAB_20111dd8;
  ExceptionList = local_c;
  return;
}

