// rea decompile_all
// name: FUN_2006af30
// address: 0x2006af30
// body: available
// range: 0x2006af30-0x2006b0a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2006af30(void *param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined2 uVar3;
  undefined1 local_69;
  int local_68;
  undefined4 local_64;
  undefined2 local_60 [2];
  undefined4 local_5c;
  int local_58 [2];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [20];
  undefined2 local_24 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b86b;
  local_c = ExceptionList;
  uVar3 = SUB42(param_1,0);
  ppvVar1 = &local_c;
  if ((*(int *)(in_ECX + 0xcc) != 0) &&
     (local_68 = **(int **)(in_ECX + 0xc0), ExceptionList = &local_c, ppvVar1 = &local_c,
     (int *)local_68 != *(int **)(in_ECX + 0xc0))) {
    do {
      FUN_20081f40(&local_69,&param_1);
      local_4 = 0;
      local_24[0] = uVar3;
      FUN_20073d60(local_38);
      local_4._0_1_ = 1;
      FUN_20072bb0(local_50,local_24);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_20072230();
      local_4 = 0xffffffff;
      FUN_20072230();
      local_64 = uVar2;
      FUN_20071790(local_48,&local_64);
      FUN_200722e0(local_40,local_68 + 0xc);
      FUN_20085230();
      ppvVar1 = ExceptionList;
    } while (local_68 != *(int *)(in_ECX + 0xc0));
  }
  ExceptionList = ppvVar1;
  param_1 = operator_new(0x134);
  local_4 = 2;
  if (param_1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2006f400(in_ECX,uVar2);
  }
  local_4 = 0xffffffff;
  local_5c = 0;
  local_60[0] = uVar3;
  FUN_20074440(local_58,local_60);
  *(undefined4 *)(local_58[0] + 0x10) = uVar2;
  ExceptionList = local_c;
  return uVar2;
}

