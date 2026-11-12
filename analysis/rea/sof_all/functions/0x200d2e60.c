// rea decompile_all
// name: FUN_200d2e60
// address: 0x200d2e60
// body: available
// range: 0x200d2e60-0x200d3229 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200d2e60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int local_e8;
  undefined1 local_e4 [4];
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  uint local_d4;
  int local_d0;
  undefined1 local_cc [4];
  undefined1 *local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 local_bc [4];
  undefined1 *local_b8;
  undefined1 local_ac [4];
  undefined1 *local_a8;
  undefined1 *local_98;
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_2010e937;
  local_c = ExceptionList;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_2000a5b0(0);
  local_4._0_1_ = 1;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  FUN_2000a5b0(0);
  local_4._0_1_ = 3;
  FUN_2000a5b0(0);
  local_4._0_1_ = 4;
  pcVar3 = (char *)FUN_200eb440(0);
  uVar5 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(pcVar3,~uVar5 - 1);
  pcVar3 = (char *)FUN_200eb440(1);
  uVar5 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(pcVar3,~uVar5 - 1);
  pcVar3 = (char *)FUN_200eb440(2);
  uVar5 = 0xffffffff;
  pcVar7 = pcVar3;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(pcVar3,~uVar5 - 1);
  local_d0 = 0;
  FUN_200e37e0(*(undefined4 *)(in_ECX + 0xb0),*(undefined4 *)(in_ECX + 0xb4));
  FUN_200e37e0(*(undefined4 *)(in_ECX + 0xc0),*(undefined4 *)(in_ECX + 0xc4));
  if (local_b8 == (undefined1 *)0x0) {
    local_b8 = &DAT_201116cc;
  }
  if (local_98 == (undefined1 *)0x0) {
    local_98 = &DAT_201116cc;
  }
  if (local_a8 == (undefined1 *)0x0) {
    local_a8 = &DAT_201116cc;
  }
  Com_sprintf(local_8c,0x80,s__s__s__s_20158b38,local_a8,local_98,local_b8);
  FUN_20025bb0(local_e4,local_8c,1);
  FUN_200c9130(local_e4);
  if ((local_e0 == 0) || (local_dc - local_e0 >> 6 == 0)) {
    local_4._0_1_ = 3;
    FUN_2000a5b0(1);
    local_4._0_1_ = 2;
    FUN_2000a5b0(1);
    local_4._0_1_ = 1;
    FUN_2000a5b0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    iVar2 = local_dc;
    local_4 = 0xffffffff;
    for (iVar6 = local_e0; iVar6 != iVar2; iVar6 = iVar6 + 0x40) {
      FUN_200c9520(0);
    }
    FUN_200f9f75(local_e0);
    local_d0 = 0;
  }
  else {
    FUN_200c8d90(local_e4,local_ac,local_bc);
    local_e8 = 0;
    for (local_d4 = 0; (local_e0 != 0 && (local_d4 < (uint)(local_dc - local_e0 >> 6)));
        local_d4 = local_d4 + 1) {
      FUN_200c8b90(local_e8 + local_e0,local_cc,local_ac,local_bc);
      FUN_200e3660(*(undefined4 *)(in_ECX + 0xb4),local_cc);
      FUN_2008ce10(*(undefined4 *)(in_ECX + 0xc4),1,local_cc);
      puVar4 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      iVar6 = (*DAT_2040363c)(puVar4,in_ECX + 0x8c);
      if (local_d0 < iVar6) {
        local_d0 = iVar6;
      }
      local_e8 = local_e8 + 0x40;
    }
    local_4._0_1_ = 3;
    FUN_2000a5b0(1);
    local_4._0_1_ = 2;
    FUN_2000a5b0(1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_2000a5b0(1);
    if (local_c8 != (undefined1 *)0x0) {
      if (local_c8[-1] == '\0') {
        FUN_200f9f75(local_c8 + -1);
      }
      else {
        local_c8[-1] = local_c8[-1] + -1;
      }
    }
    iVar2 = local_dc;
    local_c8 = (undefined1 *)0x0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    local_4 = 0xffffffff;
    for (iVar6 = local_e0; iVar6 != iVar2; iVar6 = iVar6 + 0x40) {
      FUN_20025fd0();
    }
    FUN_200f9f75(local_e0);
  }
  ExceptionList = local_c;
  return local_d0;
}

