// rea decompile_all
// name: FUN_200f7ec0
// address: 0x200f7ec0
// body: available
// range: 0x200f7ec0-0x200f8197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f7ec0(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iStack_180;
  undefined4 *puStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  char *pcStack_16c;
  char *pcStack_168;
  undefined4 uStack_164;
  undefined1 auStack_70 [40];
  int iStack_48;
  
  if (*param_1 != 0) {
    return 4;
  }
  uStack_164 = 0x70e4;
  param_1[0x24] = 5;
  pcStack_168 = (char *)0x200f7f02;
  Ordinal_9();
  pcStack_168 = s_master_gamespy_com_2015a918;
  pcStack_16c = (char *)0x200f7f11;
  iVar2 = Ordinal_10();
  if (iVar2 == -1) {
    pcStack_16c = s_master_gamespy_com_2015a918;
    uStack_170 = 0x200f7f24;
    iVar2 = Ordinal_52();
    if (iVar2 == 0) {
      return 2;
    }
  }
  pcStack_16c = (char *)0x6;
  uStack_170 = 1;
  uStack_174 = 2;
  uStack_178 = 0x200f7f4e;
  iStack_180 = Ordinal_23();
  param_1[0x22] = iStack_180;
  if (iStack_180 == -1) {
    return 1;
  }
  puStack_17c = &uStack_164;
  uStack_178 = 0x10;
  iVar2 = Ordinal_4();
  if (iVar2 == 0) {
    iVar2 = Ordinal_16(param_1[0x22],&stack0xfffffea0,0xff,0);
    if (iVar2 != -1) {
      *(undefined1 *)((int)&uStack_170 + iVar2) = 0;
      iVar2 = FUN_200fa6a0(&uStack_170,s__secure__2015aa28);
      if (iVar2 == 0) {
        return 5;
      }
      FUN_200f92d0(param_1 + 0xb,6,iVar2 + 8,6);
      FUN_200f9200(iVar2 + 8,6,auStack_70);
      FUN_200fabac(&uStack_170,s__gamename__s_gamever__s_location_2015a9e0,param_1 + 0x13,
                   &DAT_2015aa24,auStack_70);
      uVar5 = 0xffffffff;
      pcVar3 = (char *)&uStack_170;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar2 = Ordinal_19(param_1[0x22],&uStack_170,~uVar5 - 1,0);
      if ((iVar2 != -1) && (iVar2 != 0)) {
        if (param_1[0x24] == 6) {
          pcVar3 = s_groups_2015a9d8;
          param_1[0x27] = 0;
        }
        else if (param_1[0x24] == 7) {
          pcVar3 = s_info2_2015a9d0;
          param_1[0x27] = 0;
        }
        else {
          pcVar3 = &DAT_2015a9cc;
        }
        FUN_200fabac(&iStack_180,s__list__s_gamename__s_final__2015a9b0,pcVar3,param_1 + 3);
        uVar5 = 0xffffffff;
        piVar6 = &iStack_180;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          iVar2 = *piVar6;
          piVar6 = (int *)((int)piVar6 + 1);
        } while ((char)iVar2 != '\0');
        iVar2 = Ordinal_19(param_1[0x22],&iStack_180,~uVar5 - 1,0);
        if ((iVar2 != -1) && (iVar2 != 0)) {
          *param_1 = 1;
          (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
          iVar2 = 0;
          if (0 < param_1[0x1b]) {
            iVar7 = 0;
            do {
              uVar4 = Ordinal_23(2,2,0x11);
              *(undefined4 *)(iVar7 + param_1[2]) = uVar4;
              if (*(int *)(param_1[2] + iVar7) == -1) {
                if (iVar2 == 0) {
                  return 1;
                }
                param_1[0x1b] = iVar2;
                break;
              }
              *(undefined4 *)(param_1[2] + iVar7 + 4) = 0;
              iVar2 = iVar2 + 1;
              *(undefined4 *)(param_1[2] + 8 + iVar7) = 0;
              iVar7 = iVar7 + 0x1c;
            } while (iVar2 < param_1[0x1b]);
          }
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          iVar2 = FUN_200f44a0(param_1[1]);
          param_1[0x26] = iVar2;
          if (iStack_48 == 0) {
            iVar2 = *param_1;
            while (iVar2 != 0) {
              switch(iVar2) {
              case 1:
                FUN_200f85c0(param_1);
                break;
              case 2:
                FUN_200f8270(param_1);
                break;
              case 3:
                FUN_200f8ab0(param_1);
              }
              FUN_200f96a0(10);
              iVar2 = *param_1;
            }
          }
          return 0;
        }
      }
    }
  }
  else {
    Ordinal_3(param_1[0x22]);
  }
  return 3;
}

