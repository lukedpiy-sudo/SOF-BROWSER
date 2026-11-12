// rea decompile_all
// name: FUN_200f8390
// address: 0x200f8390
// body: available
// range: 0x200f8390-0x200f85b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f8390(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char local_40 [64];
  
  pcVar2 = param_2;
  iVar4 = *(int *)(param_1 + 0x9c);
  if (iVar4 == 0) {
    iVar4 = 3;
    do {
      if (pcVar2 == param_2 + param_3) {
        if (iVar4 != 0) {
          return 0;
        }
        break;
      }
      if (*pcVar2 == '\\') {
        iVar4 = iVar4 + -1;
      }
      pcVar2 = pcVar2 + 1;
    } while (iVar4 != 0);
    iVar4 = (int)pcVar2 - (int)param_2;
    if (iVar4 == -1) {
      return 0;
    }
    if (iVar4 < 0xc) {
      return -1;
    }
    _strncpy(local_40,param_2 + 0xc,iVar4 - 0xc);
    local_40[iVar4 + -0xd] = '\0';
    DAT_20408208 = FUN_200f9e9e(local_40);
    if (DAT_20408208 < 0x15) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
      if (0 < DAT_20408208) {
        puVar6 = &DAT_20408210;
        for (iVar3 = DAT_20408208; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
LAB_200f85ac:
      return iVar4 + -1;
    }
  }
  else if (iVar4 == 1) {
    iVar4 = 2;
    do {
      if (pcVar2 == param_2 + param_3) {
        if (iVar4 != 0) {
          return 0;
        }
        break;
      }
      if (*pcVar2 == '\\') {
        iVar4 = iVar4 + -1;
      }
      pcVar2 = pcVar2 + 1;
    } while (iVar4 != 0);
    iVar4 = (int)pcVar2 - (int)param_2;
    if (iVar4 == -1) {
      return 0;
    }
    _strncpy(local_40,param_2 + 1,iVar4 - 2);
    local_40[iVar4 + -2] = '\0';
    param_3 = FUN_200fcecc(local_40);
    FUN_200f9550(*(undefined4 *)(param_1 + 0x94),&param_3);
    iVar3 = 0;
    if (0 < DAT_20408208) {
      while ((&DAT_20408210)[iVar3] != 0) {
        iVar3 = iVar3 + 1;
        if (DAT_20408208 <= iVar3) {
          return -1;
        }
      }
      iVar5 = DAT_20408208 + -1;
      (&DAT_20408210)[iVar3] = param_3;
      if (iVar3 == iVar5) {
        *(undefined4 *)(param_1 + 0x9c) = 2;
        return iVar4 + -1;
      }
      goto LAB_200f85ac;
    }
  }
  else if (iVar4 == 2) {
    iVar4 = DAT_20408208 + 1;
    pcVar1 = param_2;
    if (iVar4 != 0) {
      do {
        if (pcVar1 == param_2 + param_3) {
          if (iVar4 != 0) {
            return 0;
          }
          break;
        }
        if (*pcVar1 == '\\') {
          iVar4 = iVar4 + -1;
        }
        pcVar1 = pcVar1 + 1;
      } while (iVar4 != 0);
    }
    iVar4 = (int)pcVar1 - (int)param_2;
    if (iVar4 == -1) {
      return 0;
    }
    param_2 = (char *)FUN_200f76f0(&DAT_20408210,DAT_20408208,param_2,
                                   *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    FUN_200f44d0(*(undefined4 *)(param_1 + 4),&param_2);
    pcVar2[iVar4 + -1] = '\\';
    (**(code **)(param_1 + 0x78))(param_1,2,*(undefined4 *)(param_1 + 0x7c),param_2,0);
    return iVar4 + -1;
  }
  return -1;
}

