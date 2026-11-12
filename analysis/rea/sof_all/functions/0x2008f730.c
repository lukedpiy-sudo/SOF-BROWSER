// rea decompile_all
// name: FUN_2008f730
// address: 0x2008f730
// body: available
// range: 0x2008f730-0x2008f9c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008f730(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined1 local_50 [64];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c78c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 2) = (undefined1)param_1;
  FUN_2000a5b0(0);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 6) = (undefined1)param_1;
  FUN_2000a5b0(0);
  iVar6 = param_1;
  *(undefined1 *)(in_ECX + 0xc) = (undefined1)param_1;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0xb] = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x2f) = (undefined1)param_1;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  *(undefined1 *)((int)in_ECX + 0x75) = 0;
  *(undefined1 *)(in_ECX + 0x39) = 1;
  *(undefined1 *)((int)in_ECX + 0xe5) = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_LAB_2011248c;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  FUN_20068ff0(param_1,in_ECX + 2);
  FUN_20068ff0(iVar6,in_ECX + 6);
  FUN_200c2430(iVar6);
  FUN_20068ef0(iVar6,in_ECX + 0x10);
  FUN_20068ef0(iVar6,(int)in_ECX + 0x41);
  FUN_20068ef0(iVar6,(int)in_ECX + 0x42);
  FUN_200674d0(iVar6);
  FUN_20068e30(iVar6,in_ECX + 0x1a);
  if (in_ECX[0x1a] == 0) {
    FUN_20068ef0(iVar6,in_ECX + 0x1d);
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      param_1 = FUN_20068dc0(iVar6);
      uVar3 = FUN_20093590();
      if (uVar3 < param_1) {
        uVar3 = param_1;
        if ((int)param_1 < 0) {
          uVar3 = 0;
        }
        pvVar4 = operator_new(uVar3 * 0x44);
        FUN_200937d0(in_ECX[0x30],in_ECX[0x31],pvVar4);
        FUN_2008c730(in_ECX[0x30],in_ECX[0x31]);
        FUN_200f9f75(in_ECX[0x30]);
        in_ECX[0x32] = (void *)((int)pvVar4 + param_1 * 0x44);
        iVar5 = FUN_200921b0();
        in_ECX[0x30] = pvVar4;
        in_ECX[0x31] = (void *)((int)pvVar4 + iVar5 * 0x44);
      }
      local_10 = 0;
      FUN_200932c0(in_ECX[0x30],param_1,local_50);
      FUN_20069200(iVar6,in_ECX[0x30],param_1 * 0x44);
    }
    else {
      FUN_20069200(iVar6,in_ECX + 0x1e,0x44);
    }
  }
  else {
    FUN_20068f80(iVar6,in_ECX + 0x11);
    FUN_20068f80(iVar6,in_ECX + 0x14);
    FUN_20068f80(iVar6,in_ECX + 0x17);
    pcVar2 = *(char **)(iVar6 + 4);
    if (*pcVar2 == '\0') {
      iVar6 = (*DAT_204058ac)(&param_1,4,1,*(undefined4 *)(pcVar2 + 4));
      pcVar2[2] = pcVar2[2] | iVar6 != 1;
    }
    else {
      piVar1 = *(int **)(pcVar2 + 0x18) + 1;
      if (*(int **)(pcVar2 + 0x20) < piVar1) {
        pcVar2[2] = '\x01';
        *(int **)(pcVar2 + 0x18) = *(int **)(pcVar2 + 0x20);
      }
      else {
        param_1 = **(int **)(pcVar2 + 0x18);
        *(int **)(pcVar2 + 0x18) = piVar1;
      }
    }
    iVar6 = *(int *)(pcVar2 + 0x14);
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    in_ECX[0x1b] = iVar6 + param_1;
  }
  ExceptionList = local_c;
  return;
}

