// rea decompile_all
// name: FUN_20057800
// address: 0x20057800
// body: available
// range: 0x20057800-0x20057a39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20057800(undefined4 param_1,undefined4 param_2,int param_3,char *param_4,undefined4 param_5
                 )

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined1 auStack_30 [4];
  char *pcStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010b530;
  local_c = ExceptionList;
  if (param_3 == 4) {
    ExceptionList = &local_c;
    iVar4 = FUN_200f9e13(param_4);
    local_48 = 0;
    if (0 < iVar4) {
      do {
        FUN_200563b0(param_1,param_2,&param_3,&param_4);
        if (param_3 != 0xd) {
          ExceptionList = local_c;
          return false;
        }
        iVar5 = FUN_200f9e13(param_4);
        iVar9 = in_ECX + iVar5 * 0x10;
        cVar2 = (**(code **)(*(int *)(iVar9 + 0x1c) + 0xc))(param_1,param_2,param_5);
        if (cVar2 == '\0') {
          ExceptionList = local_c;
          return false;
        }
        pcVar7 = *(char **)(iVar9 + 0x24);
        if (pcVar7 != (char *)0x0) {
          auStack_30[0] = param_4._0_1_;
          uVar6 = 0xffffffff;
          pcStack_2c = (char *)0x0;
          uStack_28 = 0;
          uStack_24 = 0;
          pcVar3 = pcVar7;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6 - 1;
          cVar2 = FUN_2000a6c0(uVar6,1);
          if (cVar2 != '\0') {
            pcVar3 = pcStack_2c;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar8 = uVar6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar3 = pcVar3 + 1;
            }
            FUN_2000a6a0(uVar6);
          }
          iStack_4 = 0;
          FUN_200234d0(auStack_30);
          uStack_10 = 0;
          iStack_4._0_1_ = 1;
          FUN_2004c7a0(auStack_40,auStack_20);
          FUN_2008c5b0(auStack_40,auStack_3c);
          iVar9 = iStack_38;
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_2000a5b0(1);
          *(int *)(iVar9 + 0x1c) = iVar5;
          iStack_4 = 0xffffffff;
          if (pcStack_2c != (char *)0x0) {
            if (pcStack_2c[-1] == '\0') {
              FUN_200f9f75(pcStack_2c + -1);
            }
            else {
              pcStack_2c[-1] = pcStack_2c[-1] + -1;
            }
          }
          pcStack_2c = (char *)0x0;
          uStack_28 = 0;
          uStack_24 = 0;
        }
        local_48 = local_48 + 1;
      } while (local_48 < iVar4);
    }
  }
  else if (param_3 == 1) {
    ExceptionList = &local_c;
    uVar1 = FUN_200f9e13(param_4);
    *(undefined1 *)(in_ECX + 4) = uVar1;
  }
  else {
    if (param_3 != 2) {
      return param_3 != -1;
    }
    ExceptionList = &local_c;
    if (*(int *)(in_ECX + 0x18) != 0) {
      ExceptionList = &local_c;
      FUN_200f9f75(*(int *)(in_ECX + 0x18));
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
    pcVar7 = param_4;
    if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
      uVar6 = 0xffffffff;
      pcVar3 = param_4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      pcVar3 = operator_new(~uVar6);
      *(char **)(in_ECX + 0x18) = pcVar3;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar3 = cVar2;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
    }
  }
  ExceptionList = local_c;
  return true;
}

