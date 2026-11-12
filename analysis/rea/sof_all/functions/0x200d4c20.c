// rea decompile_all
// name: FUN_200d4c20
// address: 0x200d4c20
// body: available
// range: 0x200d4c20-0x200d4e9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d4c20(int param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int local_20;
  int local_1c;
  uint local_18;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010eb14;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200ce840();
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x23) = param_2;
  FUN_2000a5b0();
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x27) = param_2;
  FUN_2000a5b0();
  *in_ECX = &PTR_FUN_20112910;
  in_ECX[0xe] = *(undefined4 *)(param_1 + 0x1c);
  in_ECX[0xf] = *(undefined4 *)(param_1 + 0x20);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 0x2b) = 1;
  *(undefined1 *)((int)in_ECX + 0xad) = 0;
  FUN_200eafe0();
  FUN_200eb440();
  local_20 = FUN_200f9e13();
  FUN_200eb440();
  local_1c = FUN_200f9e13();
  if ((local_20 == 0) && (local_1c == 0)) {
    *(undefined1 *)(in_ECX + 0x2b) = 0;
    local_14 = (char *)FUN_200eb440();
    uVar5 = 0xffffffff;
    pcVar3 = local_14;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    local_18 = ~uVar5 - 1;
    cVar2 = FUN_2000a6c0();
    if (cVar2 != '\0') {
      pcVar3 = local_14;
      pcVar7 = (char *)in_ECX[0x24];
      for (uVar5 = local_18 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = local_18 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      in_ECX[0x25] = local_18;
      *(undefined1 *)(local_18 + in_ECX[0x24]) = 0;
    }
    pcVar3 = (char *)FUN_200eb440();
    uVar5 = 0xffffffff;
    pcVar7 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    local_14 = (char *)uVar5;
    cVar2 = FUN_2000a6c0();
    if (cVar2 != '\0') {
      pcVar7 = (char *)in_ECX[0x28];
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar7 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar7 = pcVar7 + 1;
      }
      in_ECX[0x29] = uVar5;
      *(undefined1 *)(uVar5 + in_ECX[0x28]) = 0;
    }
    FUN_2000a3a0(in_ECX + 0x27,0,0xffffffff);
    FUN_200c87f0(param_1,in_ECX + 0x2c,in_ECX + 0x2d);
    FUN_2000a5b0(0);
    FUN_2000a3a0(in_ECX + 0x23,0,0xffffffff);
    FUN_200c87f0(param_1,&local_20,&local_1c);
  }
  iVar1 = local_1c;
  in_ECX[8] = local_20;
  uVar4 = __ftol();
  in_ECX[10] = uVar4;
  if ((int)in_ECX[0xc] < iVar1) {
    in_ECX[9] = iVar1;
    uVar4 = __ftol();
    in_ECX[0xb] = uVar4;
  }
  ExceptionList = local_c;
  return;
}

