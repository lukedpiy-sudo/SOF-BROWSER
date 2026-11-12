// rea decompile_all
// name: FUN_200d8cb0
// address: 0x200d8cb0
// body: available
// range: 0x200d8cb0-0x200d8e3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d8cb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ee8c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_200ce840(param_1,7);
  puVar1 = in_ECX + 0x23;
  local_4 = 0;
  *(undefined1 *)puVar1 = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x28) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *in_ECX = &PTR_FUN_20112a80;
  uVar2 = FUN_200c5b50(local_1c);
  local_4._0_1_ = 3;
  FUN_2000a3a0(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
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
  FUN_200eafe0(1);
  uVar7 = 0;
  uVar6 = 0;
  puVar5 = &DAT_2015ee44;
  uVar2 = FUN_200eb440(0);
  iVar3 = Cvar_Get(uVar2,puVar5,uVar6,uVar7);
  in_ECX[0x27] = iVar3;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  iVar3 = (*DAT_2040363c)(*(undefined4 *)(iVar3 + 4),puVar1);
  iVar4 = (*DAT_20403640)(puVar1);
  in_ECX[8] = (iVar4 >> 1) + iVar3;
  uVar2 = __ftol();
  in_ECX[10] = uVar2;
  iVar3 = (*DAT_20403640)(puVar1);
  if ((int)in_ECX[0xc] < iVar3) {
    in_ECX[9] = iVar3;
    uVar2 = __ftol();
    in_ECX[0xb] = uVar2;
  }
  ExceptionList = pvStack_c;
  return;
}

