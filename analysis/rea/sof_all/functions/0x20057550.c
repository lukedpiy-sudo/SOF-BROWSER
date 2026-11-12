// rea decompile_all
// name: FUN_20057550
// address: 0x20057550
// body: available
// range: 0x20057550-0x200576b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20057550(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_2010b4ef;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_20111ee8;
  piVar1 = (int *)in_ECX[0x408];
  piVar2 = (int *)*piVar1;
  local_4 = 2;
  if (((in_ECX[0x40b] == 0) || (piVar4 = (int *)FUN_20083550(local_18), piVar2 != (int *)*piVar4))
     || (piVar1 != (int *)in_ECX[0x408])) {
    while (piVar2 != piVar1) {
      puVar5 = (undefined4 *)FUN_20073130(local_18,0);
      FUN_20073590(local_10,*puVar5);
    }
  }
  else {
    FUN_2003c230(((int *)in_ECX[0x408])[1]);
    *(undefined4 *)(in_ECX[0x408] + 4) = in_ECX[0x409];
    in_ECX[0x40b] = 0;
    *(undefined4 *)in_ECX[0x408] = in_ECX[0x408];
    *(undefined4 *)(in_ECX[0x408] + 8) = in_ECX[0x408];
    FUN_20083550(local_14);
  }
  local_4._0_1_ = 1;
  FUN_20058c00(local_10,*(undefined4 *)in_ECX[0x408],(undefined4 *)in_ECX[0x408]);
  FUN_200f9f75(in_ECX[0x408]);
  in_ECX[0x408] = 0;
  in_ECX[0x40b] = 0;
  FUN_200f9f75(in_ECX[0x409]);
  in_ECX[0x409] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_200fb4ef(in_ECX + 7,0x10,0x100,FUN_20056890);
  *in_ECX = &PTR_LAB_20111ed8;
  if (in_ECX[6] != 0) {
    FUN_200f9f75(in_ECX[6]);
    in_ECX[6] = 0;
  }
  iVar3 = in_ECX[3];
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = *(char *)(iVar3 + -1) + -1;
    }
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  ExceptionList = local_c;
  return;
}

