// rea decompile_all
// name: FUN_200e07a0
// address: 0x200e07a0
// body: available
// range: 0x200e07a0-0x200e096b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200e07a0(undefined4 param_1,undefined1 param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f824;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840();
  *(undefined1 *)(in_ECX + 0x23) = param_2;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(in_ECX + 0x2c) = param_2;
  pvVar2 = operator_new(0x50);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  in_ECX[0x2d] = pvVar2;
  in_ECX[0x2e] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *in_ECX = &PTR_FUN_20112d40;
  FUN_200eafe0();
  pcVar3 = (char *)FUN_200eb440();
  uVar6 = 0xffffffff;
  pcVar8 = pcVar3;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar1 = FUN_2000a6c0();
  if (cVar1 != '\0') {
    pcVar8 = (char *)in_ECX[0x24];
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    in_ECX[0x25] = uVar6;
    *(undefined1 *)(uVar6 + in_ECX[0x24]) = 0;
  }
  FUN_200eb440();
  uVar4 = FUN_200f9e13();
  in_ECX[8] = uVar4;
  uVar4 = __ftol();
  in_ECX[10] = uVar4;
  FUN_200eb440();
  iVar5 = FUN_200f9e13();
  if ((int)in_ECX[0xc] < iVar5) {
    in_ECX[9] = iVar5;
    uVar4 = __ftol();
    in_ECX[0xb] = uVar4;
  }
  FUN_2000a3a0(in_ECX + 0x23,0,0xffffffff);
  FUN_200c87f0(param_1,in_ECX + 0x27,in_ECX + 0x28);
  in_ECX[0x2a] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 1;
  in_ECX[0x29] = (int)in_ECX[8] / (int)in_ECX[0x27];
  ExceptionList = local_c;
  return;
}

