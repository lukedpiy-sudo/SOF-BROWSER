// rea decompile_all
// name: FUN_20079100
// address: 0x20079100
// body: available
// range: 0x20079100-0x20079327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20079100(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010becf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *in_ECX = &PTR_LAB_201122d8;
  FUN_20077040(param_4);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x3b) = (undefined1)param_2;
  pvVar1 = operator_new(0x10);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  in_ECX[0x3c] = pvVar1;
  in_ECX[0x3d] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x3e) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0xf9) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  FUN_20085140();
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x43) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0x10d) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  FUN_20085140();
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x4e) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0x139) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x51) = 1;
  FUN_20085140();
  local_4._0_1_ = 4;
  *(undefined1 *)(in_ECX + 0x53) = (undefined1)param_2;
  *(undefined1 *)((int)in_ECX + 0x14d) = (undefined1)param_2;
  *(undefined1 *)(in_ECX + 0x56) = 1;
  FUN_200855b0();
  *(undefined1 *)(in_ECX + 0x6d) = (undefined1)param_2;
  local_4._0_1_ = 5;
  uVar2 = FUN_20083520(0,0);
  in_ECX[0x6e] = uVar2;
  in_ECX[0x6f] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  *in_ECX = &PTR_LAB_201121f8;
  *(undefined1 *)(in_ECX + 0x74) = 1;
  in_ECX[0x72] = 0;
  *(undefined2 *)(in_ECX + 0x73) = 0;
  *(undefined2 *)((int)in_ECX + 0x1ce) = param_2;
  *(undefined2 *)(in_ECX + 0x70) = param_3;
  uVar2 = FUN_20079330(0,0,0x3f800000);
  FUN_200802f0(uVar2);
  *(undefined1 *)(in_ECX + 0x5a) = 0;
  in_ECX[0x59] = 0xbf800000;
  in_ECX[100] = 0xbf800000;
  in_ECX[0x65] = 0;
  in_ECX[0x6b] = 0;
  *(undefined2 *)(in_ECX + 0x6c) = 0;
  *(undefined1 *)((int)in_ECX + 0x1b2) = 1;
  FUN_20082060();
  in_ECX[0x58] = 0;
  in_ECX[0x71] = param_1;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4d] = 0;
  *(undefined1 *)((int)in_ECX + 0x129) = 0;
  *(undefined1 *)(in_ECX + 0x4a) = 0;
  *(undefined1 *)((int)in_ECX + 0x12a) = *(undefined1 *)(param_1 + 0x116);
  if ((((DAT_20157004 != 1.0) && (*(char *)(param_1 + 0x118) != '\0')) && (in_ECX[0x72] == 0)) &&
     (0xf < (ushort)param_4)) {
    FUN_200a05a0(DAT_20157004);
  }
  ExceptionList = local_c;
  return;
}

