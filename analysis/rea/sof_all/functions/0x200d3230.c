// rea decompile_all
// name: FUN_200d3230
// address: 0x200d3230
// body: available
// range: 0x200d3230-0x200d33e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d3230(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e998;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,8);
  puVar1 = in_ECX + 0x23;
  local_4 = 0;
  *(undefined1 *)puVar1 = (undefined1)param_1;
  FUN_2000a5b0(0);
  puVar4 = in_ECX + 0x2b;
  *(undefined1 *)puVar4 = (undefined1)param_1;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x30] = 0;
  *(undefined1 *)(in_ECX + 0x2f) = (undefined1)param_1;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x33) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 4;
  *in_ECX = &PTR_FUN_20112888;
  uVar2 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 5;
  FUN_2000a3a0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_18 != 0) {
    if (*(char *)(local_18 + -1) == '\0') {
      FUN_200f9f75((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = *(char *)(local_18 + -1) + -1;
    }
  }
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x20);
  in_ECX[0x27] = 0;
  FUN_200eafe0(1);
  puVar5 = puVar1;
  uVar2 = FUN_200eb440(0);
  uVar2 = FUN_200c92d0(uVar2,puVar4,puVar5);
  in_ECX[0x29] = uVar2;
  in_ECX[8] = uVar2;
  uVar2 = __ftol();
  in_ECX[10] = uVar2;
  iVar3 = (*DAT_20403640)(puVar1);
  if ((int)in_ECX[0xc] < iVar3) {
    in_ECX[9] = iVar3;
    uVar2 = __ftol();
    in_ECX[0xb] = uVar2;
  }
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  ExceptionList = pvStack_c;
  return;
}

