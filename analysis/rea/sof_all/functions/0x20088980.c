// rea decompile_all
// name: FUN_20088980
// address: 0x20088980
// body: available
// range: 0x20088980-0x20088cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20088980(undefined4 *param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_70;
  undefined1 *local_58;
  uint local_54;
  uint local_44;
  undefined1 *local_38;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c2f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_2000a5b0(0);
  local_4 = 0;
  if (param_2 != 0) {
    pcVar4 = (char *)FUN_2006a240(CONCAT22((short)((uint)*(int *)(in_ECX + 0xe0) >> 0x10),
                                           *(undefined2 *)
                                            (*(int *)(in_ECX + 0xe0) + -2 + (uint)param_2 * 2)));
    uVar10 = 0xffffffff;
    pcVar5 = pcVar4;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar4,~uVar10 - 1);
    uVar10 = 0;
    if (local_54 != 0) {
      do {
        pcVar5 = (char *)FUN_200483c0(uVar10);
        puVar6 = (undefined1 *)FUN_200483c0(uVar10);
        uVar3 = FUN_200fb2a2((int)*pcVar5);
        *puVar6 = uVar3;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_54);
    }
  }
  uVar10 = 0;
  do {
    iVar7 = *(int *)(in_ECX + 0x4c);
    if ((iVar7 == 0) || ((uint)(*(int *)(in_ECX + 0x50) - iVar7 >> 2) <= uVar10)) {
      if (local_58 != (undefined1 *)0x0) {
        if (local_58[-1] != '\0') {
          local_58[-1] = local_58[-1] + -1;
          ExceptionList = pvStack_c;
          return;
        }
        FUN_200f9f75(local_58 + -1);
      }
      ExceptionList = pvStack_c;
      return;
    }
    if (*(int *)(iVar7 + uVar10 * 4) != 0) {
      iVar7 = FUN_2008c740();
      local_70 = 0;
      if (0 < iVar7) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x4c) + uVar10 * 4) + 0x110) +
                          local_70 * 4);
          iVar11 = *(int *)(iVar2 + 0x24);
          if (iVar11 != *(int *)(iVar2 + 0x28)) {
            iVar13 = iVar11 + 8;
            do {
              uVar12 = 0;
              if (param_2 == 0) {
LAB_20088b91:
                FUN_2000a5b0(0);
                local_4._0_1_ = 2;
                if (param_2 == 0) {
                  uVar9 = FUN_2008e200(local_1c,iVar13,&DAT_2011d72c);
                  local_4._0_1_ = 3;
                  uVar9 = FUN_2008e320(local_2c,uVar9,iVar13 + 0x10);
                  local_4._0_1_ = 4;
                  FUN_2000a3a0(uVar9,0,0xffffffff);
                  local_4._0_1_ = 3;
                  FUN_2000a5b0(1);
                  local_4._0_1_ = 2;
                  FUN_2000a5b0(1);
                }
                else {
                  FUN_2000a3a0(iVar13 + 0x10,0,0xffffffff);
                }
                puVar6 = local_38;
                if (local_38 == (undefined1 *)0x0) {
                  puVar6 = &DAT_201116cc;
                }
                (**(code **)*param_1)(0,0,0,puVar6);
                local_4 = (uint)local_4._1_3_ << 8;
                if (local_38 != (undefined1 *)0x0) {
                  if (local_38[-1] == '\0') {
                    FUN_200f9f75(local_38 + -1);
                  }
                  else {
                    local_38[-1] = local_38[-1] + -1;
                  }
                }
                local_38 = (undefined1 *)0x0;
              }
              else {
                FUN_2000a5b0(0);
                FUN_2000a3a0(iVar13,0,0xffffffff);
                local_4._0_1_ = 1;
                if (local_44 != 0) {
                  do {
                    pcVar5 = (char *)FUN_200483c0(uVar12);
                    puVar6 = (undefined1 *)FUN_200483c0(uVar12);
                    uVar3 = FUN_200fb2a2((int)*pcVar5);
                    *puVar6 = uVar3;
                    uVar12 = uVar12 + 1;
                  } while (uVar12 < local_44);
                }
                puVar6 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar6 = &DAT_201116cc;
                }
                iVar8 = FUN_20023c90(0,local_44,puVar6,local_54);
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_2000a5b0(1);
                if (iVar8 == 0) goto LAB_20088b91;
              }
              iVar11 = iVar11 + 0x28;
              iVar13 = iVar13 + 0x28;
            } while (iVar11 != *(int *)(iVar2 + 0x28));
          }
          local_70 = local_70 + 1;
        } while (local_70 < iVar7);
      }
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

