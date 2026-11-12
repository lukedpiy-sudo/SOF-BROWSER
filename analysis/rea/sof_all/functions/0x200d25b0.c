// rea decompile_all
// name: FUN_200d25b0
// address: 0x200d25b0
// body: available
// range: 0x200d25b0-0x200d28d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d25b0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  int local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  int iStack_a8;
  int iStack_98;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e8d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_2000a5b0();
  local_4 = 0;
  cVar1 = FUN_200cf570();
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_2000a5b0();
  }
  else {
    if ((*(char *)(in_ECX + 0xb0) != '\0') &&
       ((((*(int *)(*(int *)(in_ECX + 0xc0) + 0x14) != 0 ||
          (*(int *)(*(int *)(in_ECX + 0xc4) + 0x14) != 0)) ||
         (*(int *)(*(int *)(in_ECX + 200) + 0x14) != 0)) ||
        (*(int *)(*(int *)(in_ECX + 0xcc) + 0x14) != 0)))) {
      Com_sprintf();
      (*DAT_20403594)(local_8c);
      (*DAT_20403630)();
      FUN_2000a5b0();
      FUN_2000a3a0(in_ECX + 0x8c,0);
      FUN_200c8690();
      (*DAT_20403630)(*(undefined4 *)(*(int *)(in_ECX + 0xb4) + 0x18),
                      *(undefined4 *)(*(int *)(in_ECX + 0xbc) + 0x18),
                      *(undefined4 *)(*(int *)(in_ECX + 0xb8) + 0x18),0x3f800000);
      *(undefined4 *)(*(int *)(in_ECX + 0xc0) + 0x14) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0xc4) + 0x14) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 200) + 0x14) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x14) = 0;
    }
    FUN_200d2410();
    local_4._0_1_ = 1;
    FUN_2000a3a0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iStack_98 != 0) {
      if (*(char *)(iStack_98 + -1) == '\0') {
        FUN_200f9f75();
      }
      else {
        *(char *)(iStack_98 + -1) = *(char *)(iStack_98 + -1) + -1;
      }
    }
    uVar2 = *(undefined4 *)(in_ECX + 0x38);
    FUN_2000a3a0();
    if ((*(char *)(in_ECX + 0x61) != '\0') &&
       (uVar2 = *(undefined4 *)(in_ECX + 0x3c), *(int *)(in_ECX + 0x11c) == 0)) {
      FUN_2000a3a0();
    }
    FUN_200234d0(local_ac);
    uVar2 = __ftol(uVar2);
    uVar2 = __ftol(uVar2);
    FUN_200c8960(local_b4,local_b0,uVar2);
    if (*(int *)(in_ECX + 0xd8) != 0) {
      (*DAT_20403638)(*(int *)(in_ECX + 0xe0) + local_b4);
    }
    if (*(int *)(in_ECX + 0xfc) != 0) {
      (*DAT_20403638)(*(int *)(in_ECX + 0x100) + local_b4);
    }
    if (*(int *)(in_ECX + 0x68) != 0) {
      FUN_200c48f0();
    }
    if (iStack_a8 != 0) {
      if (*(char *)(iStack_a8 + -1) == '\0') {
        FUN_200f9f75();
      }
      else {
        *(char *)(iStack_a8 + -1) = *(char *)(iStack_a8 + -1) + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

