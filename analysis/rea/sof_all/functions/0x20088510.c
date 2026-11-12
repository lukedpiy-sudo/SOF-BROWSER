// rea decompile_all
// name: FUN_20088510
// address: 0x20088510
// body: available
// range: 0x20088510-0x20088972 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20088510(char param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  int *in_ECX;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 uStack_75;
  int *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined1 local_68 [12];
  char local_5c [4];
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined1 local_48 [4];
  undefined4 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined1 local_34 [4];
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c2c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_2008c380(&local_7a,0,&local_7b);
  local_4 = 0;
  FUN_2008c380(&local_78,0,&local_79);
  local_4._0_1_ = 1;
  FUN_2008c380(&local_76,0,&local_77);
  local_4._0_1_ = 2;
  local_5c[0] = param_1;
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_20155ea8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_20155ea8,~uVar5 - 1);
  local_4._0_1_ = 3;
  FUN_20026c70(&local_6c,local_5c);
  local_70 = local_6c;
  FUN_2008c5b0(&local_70,local_68);
  local_4._0_1_ = 2;
  FUN_2000a5b0(1);
  local_5c[0] = param_1;
  FUN_2000a5b0(0);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_201556b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_2000a600(&DAT_201556b0,~uVar5 - 1);
  local_4._0_1_ = 4;
  FUN_20026c70(&local_6c,local_5c);
  local_70 = local_6c;
  FUN_2008c5b0(&local_70,local_68);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_2000a5b0(1);
  piVar7 = (int *)in_ECX[0x13];
  if (piVar7 != (int *)in_ECX[0x14]) {
    do {
      if (*piVar7 != 0) {
        FUN_200a6650(local_20);
        FUN_200a6e40(local_34);
        FUN_200a6bd0(local_48);
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (int *)in_ECX[0x14]);
  }
  FUN_20083550(&local_70);
  local_74 = local_70;
  if (local_70 != local_1c) {
    do {
      puVar4 = (undefined1 *)local_74[4];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      (**(code **)(*in_ECX + 0x18))(puVar4);
      FUN_20027950();
    } while (local_74 != local_1c);
  }
  FUN_20083550(&local_70);
  local_74 = local_70;
  if (local_70 != puStack_44) {
    do {
      puVar4 = (undefined1 *)local_74[4];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      (**(code **)(*in_ECX + 0x2c))(puVar4);
      FUN_20027950();
    } while (local_74 != puStack_44);
  }
  local_74 = (int *)*piStack_30;
  if (local_74 != piStack_30) {
    do {
      puVar4 = (undefined1 *)local_74[4];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_201116cc;
      }
      (**(code **)(*in_ECX + 0x3c))(puVar4);
      FUN_20027950();
    } while (local_74 != piStack_30);
  }
  if (param_1 != '\0') {
    iVar8 = in_ECX[0x28];
    local_70 = (undefined4 *)0x1;
    if (iVar8 != in_ECX[0x29]) {
      do {
        FUN_2008c380(&uStack_75,0,&param_1);
        local_4 = CONCAT31(local_4._1_3_,5);
        for (uVar5 = 0;
            (iVar3 = *(int *)(iVar8 + 8), iVar3 != 0 &&
            (uVar5 < (uint)(*(int *)(iVar8 + 0xc) - iVar3 >> 1))); uVar5 = uVar5 + 1) {
          sVar2 = *(short *)(iVar3 + uVar5 * 2);
          if (-1 < sVar2) {
            FUN_200a6f50((int)sVar2,local_5c);
          }
        }
        local_74 = (int *)*piStack_58;
        if (local_74 != piStack_58) {
          do {
            puVar4 = (undefined1 *)local_74[4];
            if (puVar4 == (undefined1 *)0x0) {
              puVar4 = &DAT_201116cc;
            }
            (**(code **)(*in_ECX + 0x4c))(local_70,puVar4,0);
            FUN_20027950();
          } while (local_74 != piStack_58);
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_2008c420(&local_6c,*piStack_58,piStack_58);
        FUN_200f9f75(piStack_58);
        piStack_58 = (int *)0x0;
        uStack_4c = 0;
        FUN_200f9f75(uStack_54);
        iVar8 = iVar8 + 0x14;
        local_70 = (undefined4 *)((int)local_70 + 1);
        uStack_54 = 0;
      } while (iVar8 != in_ECX[0x29]);
    }
  }
  local_4._0_1_ = 1;
  FUN_2008c420(&param_1,*puStack_44,puStack_44);
  FUN_200f9f75(puStack_44);
  puStack_44 = (undefined4 *)0x0;
  uStack_38 = 0;
  FUN_200f9f75(uStack_40);
  uStack_40 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_2008c420(&param_1,*piStack_30,piStack_30);
  FUN_200f9f75(piStack_30);
  piStack_30 = (int *)0x0;
  uStack_24 = 0;
  FUN_200f9f75(uStack_2c);
  uStack_2c = 0;
  local_4 = 0xffffffff;
  FUN_2008c420(&param_1,*local_1c,local_1c);
  FUN_200f9f75(local_1c);
  local_1c = (undefined4 *)0x0;
  uStack_10 = 0;
  FUN_200f9f75(uStack_18);
  ExceptionList = pvStack_c;
  return;
}

