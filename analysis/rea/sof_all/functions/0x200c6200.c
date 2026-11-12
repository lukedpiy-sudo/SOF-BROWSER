// rea decompile_all
// name: FUN_200c6200
// address: 0x200c6200
// body: available
// range: 0x200c6200-0x200c6346 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c6200(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010df21;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 3) = param_2._0_1_;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = param_2._0_1_;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0xc) = param_2._0_1_;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[1] = 0;
  *in_ECX = param_1;
  in_ECX[2] = 0;
  in_ECX[0xb] = 0;
  iVar2 = DAT_2040365c;
  in_ECX[0x12] = DAT_2040365c;
  iVar3 = DAT_20403660;
  in_ECX[0x13] = DAT_20403660;
  in_ECX[0x14] = iVar2;
  in_ECX[0x15] = iVar3;
  uVar4 = 0xffffffff;
  local_4 = 2;
  *(float *)(param_1 + 0xac) = (float)DAT_2040365c * 0.0015625;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  pcVar6 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar4 - 1;
  uVar4 = FUN_2000a830();
  if (uVar4 < uVar5) {
    FUN_201075d0();
  }
  in_ECX[5] = 0;
  if ((in_ECX[4] == 0) || (*(char *)(in_ECX[4] + -1) == '\0')) {
    if (uVar5 == 0) {
      FUN_2000a5b0(1);
      ExceptionList = pvStack_c;
      return;
    }
    if (((uint)in_ECX[6] < 0x20) && (uVar5 <= (uint)in_ECX[6])) goto LAB_200c630d;
    FUN_2000a5b0(1);
  }
  else if (uVar5 == 0) {
    FUN_2000a5b0(1);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_2000a840(uVar5);
LAB_200c630d:
  pcVar6 = (char *)in_ECX[4];
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *param_2;
    param_2 = param_2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_2000a6a0(uVar5);
  ExceptionList = pvStack_c;
  return;
}

