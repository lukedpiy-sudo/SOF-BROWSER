// rea decompile_all
// name: FUN_2009c080
// address: 0x2009c080
// body: available
// range: 0x2009c080-0x2009c3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2009c080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  undefined1 local_b1d;
  undefined1 *local_b1c;
  undefined1 *local_b18;
  undefined1 local_b11;
  undefined4 local_b10;
  int local_b0c;
  undefined1 local_b08 [16];
  undefined1 local_af8 [4];
  char *local_af4;
  undefined1 local_ae4 [8];
  char local_adc [1000];
  char local_6f4 [1768];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010cf27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_b10 = FUN_20068dc0(param_1);
  iVar3 = FUN_20068dc0(param_1);
  if (iVar3 == 0) {
    FUN_2009e290(&local_b18,&local_b10);
    if (local_b18 == *(undefined1 **)(in_ECX + 4)) {
      FUN_2008e9e0(s_Material_Not_Found_2015738c);
    }
    iVar3 = *(int *)(local_b18 + 0x10);
  }
  else {
    local_b08[0] = local_b1d;
    FUN_2000a5b0(0);
    local_4 = 0;
    FUN_20069200(param_1,local_6f4,0x6e8);
    local_af8[0] = local_b1d;
    FUN_2000a5b0(0);
    uVar6 = 0xffffffff;
    pcVar7 = local_6f4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(local_6f4,~uVar6 - 1);
    local_4._0_1_ = 1;
    if (local_af4 == (char *)0x0) {
      local_af4 = "";
    }
    pcVar7 = local_adc;
    do {
      cVar1 = *local_af4;
      local_af4 = local_af4 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_20107ed2(local_adc);
    uVar6 = 0xffffffff;
    pcVar7 = local_adc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(local_adc,~uVar6 - 1);
    local_4._0_1_ = 0;
    FUN_2000a5b0(1);
    FUN_200a79f0(&local_b0c,local_b08);
    if (local_b0c == *(int *)(in_ECX + 0x18)) {
      local_b18 = operator_new(0xd0);
      local_4._0_1_ = 2;
      local_b1c = local_b18;
      if (local_b18 == (undefined1 *)0x0) {
        local_b18 = (undefined1 *)0x0;
      }
      else {
        FUN_2009df30(&local_b1d);
        local_4._0_1_ = 3;
        FUN_2009df30(&local_b11);
        local_4._0_1_ = 4;
        FUN_200920f0();
        local_4._0_1_ = 5;
        FUN_200920f0();
        local_4._0_1_ = 6;
        FUN_20092130();
        local_4._0_1_ = 7;
        FUN_20092130();
        local_4._0_1_ = 8;
        FUN_20092130();
        local_4._0_1_ = 9;
        FUN_20092130();
        *local_b18 = 0;
      }
      local_4._0_1_ = 0;
      FUN_2009e320(*(undefined4 *)(in_ECX + 0x30),&local_b18);
      if (*(int *)(in_ECX + 0x2c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x30) - *(int *)(in_ECX + 0x2c) >> 2;
      }
      iVar3 = iVar3 + -1;
      local_b1c = (undefined1 *)0x0;
      uVar4 = FUN_2009dbf0(local_b08,&local_b1c);
      local_4._0_1_ = 10;
      piVar5 = (int *)FUN_2003c140(local_ae4,uVar4);
      iVar2 = *piVar5;
      local_4._0_1_ = 0;
      FUN_2000a5b0(1);
      *(int *)(iVar2 + 0x1c) = iVar3;
    }
    else {
      iVar3 = *(int *)(local_b0c + 0x1c);
    }
    local_b1c = (undefined1 *)0x0;
    uVar4 = FUN_2009e300(&local_b10,&local_b1c);
    piVar5 = (int *)FUN_2008cc10(local_af8,uVar4);
    *(int *)(*piVar5 + 0x10) = iVar3;
    FUN_2009b400(param_3,param_4,param_5,param_6,local_6f4,local_b08);
    local_4 = 0xffffffff;
    FUN_2000a5b0(1);
  }
  ExceptionList = local_c;
  return *(int *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4) + 8;
}

