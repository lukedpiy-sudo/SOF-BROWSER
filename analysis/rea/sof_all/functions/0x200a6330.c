// rea decompile_all
// name: FUN_200a6330
// address: 0x200a6330
// body: available
// range: 0x200a6330-0x200a6649 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200a6330(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *puStack_14;
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010d67f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *in_ECX = &PTR_FUN_20111f3c;
  local_4 = 0xb;
  if (in_ECX[0x15] != 0) {
    FUN_200f9f75(in_ECX[0x15]);
  }
  if (in_ECX[0x14] != 0) {
    FUN_200f9f75(in_ECX[0x14]);
  }
  piVar4 = (int *)in_ECX[0x29];
  if (piVar4 != (int *)in_ECX[0x2a]) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x10))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x2a]);
  }
  piVar4 = (int *)in_ECX[0x2d];
  if (piVar4 != (int *)in_ECX[0x2e]) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x10))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x2e]);
  }
  piVar4 = (int *)in_ECX[0x31];
  if (piVar4 != (int *)in_ECX[0x32]) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x10))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x32]);
  }
  piVar4 = (int *)in_ECX[0x35];
  if (piVar4 != (int *)in_ECX[0x36]) {
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0x10))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x36]);
  }
  piVar4 = (int *)in_ECX[0x44];
  if (piVar4 != (int *)in_ECX[0x45]) {
    do {
      puVar3 = (undefined4 *)*piVar4;
      puStack_14 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        local_4._0_1_ = 0xc;
        FUN_200a7980();
        local_4 = CONCAT31(local_4._1_3_,0xb);
        FUN_2000a5b0(1);
        FUN_200f9f75(puVar3);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)in_ECX[0x45]);
  }
  iVar1 = in_ECX[0x38];
  if (iVar1 != 0) {
    FUN_200ab140();
    FUN_200f9f75(iVar1);
  }
  FUN_2009c6b0();
  iVar1 = in_ECX[9];
  if (iVar1 != 0) {
    FUN_200bd7a0();
    FUN_200f9f75(iVar1);
  }
  local_4._0_1_ = 10;
  FUN_200a78c0();
  puStack_14 = in_ECX + 0x47;
  local_4._0_1_ = 0xd;
  FUN_2008c730(in_ECX[0x4c],in_ECX[0x4d]);
  FUN_200f9f75(in_ECX[0x4c]);
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  local_4._0_1_ = 9;
  FUN_20092110();
  FUN_200f9f75(in_ECX[0x44]);
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  local_4._0_1_ = 7;
  FUN_20058ae0();
  uVar2 = in_ECX[0x3a];
  local_4._0_1_ = 6;
  puVar3 = (undefined4 *)FUN_20083550(&puStack_14);
  FUN_200a7f40(auStack_10,*puVar3,uVar2);
  FUN_200f9f75(in_ECX[0x3a]);
  in_ECX[0x3a] = 0;
  in_ECX[0x3d] = 0;
  FUN_200f9f75(in_ECX[0x3b]);
  in_ECX[0x3b] = 0;
  FUN_200f9f75(in_ECX[0x35]);
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  FUN_200f9f75(in_ECX[0x31]);
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  FUN_200f9f75(in_ECX[0x2d]);
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  FUN_200f9f75(in_ECX[0x29]);
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  local_4._0_1_ = 1;
  FUN_2009d5d0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2000a5b0(1);
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_200f9f75((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  ExceptionList = pvStack_c;
  return;
}

