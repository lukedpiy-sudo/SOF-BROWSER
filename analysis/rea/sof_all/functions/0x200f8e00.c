// rea decompile_all
// name: FUN_200f8e00
// address: 0x200f8e00
// body: available
// range: 0x200f8e00-0x200f917b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f8e00(int *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  DWORD DVar5;
  undefined4 uVar6;
  char *_Str1;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined2 uStack_6ec;
  undefined2 uStack_6ea;
  undefined4 local_6e0;
  int local_6dc;
  undefined1 auStack_5f0 [20];
  undefined1 auStack_5dc [1500];
  
  switch(*param_1) {
  default:
    return 0;
  case 1:
    break;
  case 2:
    local_6fc = 0x10;
    local_6f8 = 0;
    local_6f4 = 0;
    while( true ) {
      local_6dc = param_1[0x22];
      local_6e0 = 1;
      iVar4 = Ordinal_18(0x40,&local_6e0,0,0);
      if ((iVar4 == -1) || (iVar4 == 0)) break;
      iVar4 = Ordinal_17(param_1[0x22],auStack_5f0,0x5db,0,&local_704,&stack0xfffff8f0);
      if ((iVar4 != -1) && (iVar4 = FUN_200fa6a0(auStack_5dc), iVar4 != 0)) {
        uVar6 = Ordinal_15();
        local_704 = FUN_200f7920(CONCAT22(uStack_6ea,uStack_6ec),uVar6,5);
        FUN_200f44d0(param_1[1],&local_704);
      }
    }
    DVar5 = GetTickCount();
    if (DVar5 - param_1[0x23] < 0xbb9) {
      return 0;
    }
    Ordinal_3(param_1[0x22]);
    param_1[0x22] = -1;
    FUN_200f81b0(param_1,3);
    return 0;
  case 3:
    uVar6 = FUN_200f8ab0();
    return uVar6;
  }
  local_6dc = param_1[0x22];
  local_704 = 0;
  local_700 = 0;
  local_6e0 = 1;
  iVar4 = Ordinal_18(0x40,&local_6e0,0,0,&local_704);
  if (iVar4 < 1) {
    return 0;
  }
  iVar4 = Ordinal_16(param_1[0x22],&DAT_20407a08 + (int)DAT_20408260,0x7ff - (int)DAT_20408260,0);
  if ((iVar4 == -1) || (iVar4 == 0)) {
    Ordinal_3(param_1[0x22]);
    param_1[0x22] = -1;
    DAT_20408260 = (undefined1 *)0x0;
    if (*param_1 != 0) {
      param_1[0x1d] = 1;
    }
    *param_1 = 3;
    (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
    return 3;
  }
  _Str1 = &DAT_20407a08;
  DAT_20408260 = (undefined1 *)((int)DAT_20408260 + iVar4);
  if (-1 < (int)DAT_20408260 + -6) {
    do {
      iVar4 = _strncmp(_Str1,s__final__2015a8e8,7);
      if ((iVar4 == 0) || (param_1[0x1d] != 0)) {
        Ordinal_3(param_1[0x22]);
        param_1[0x22] = -1;
        DAT_20408260 = (undefined1 *)0x0;
        if ((param_1[0x24] != 6) && (param_1[0x24] != 7)) {
          *param_1 = 3;
          (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
          return 0;
        }
        *param_1 = 0;
        (*(code *)param_1[0x1e])(param_1,1,param_1[0x1f],0,0);
        return 0;
      }
      if ((int)DAT_20408260 < 6) break;
      if ((param_1[0x24] == 6) || (param_1[0x24] == 7)) {
        iVar4 = FUN_200f8390(param_1,_Str1,&DAT_20407a08 + ((int)DAT_20408260 - (int)_Str1));
        if (iVar4 < 0) {
          param_1[0x1d] = 1;
        }
        else {
          if (iVar4 == 0) break;
          _Str1 = _Str1 + iVar4;
        }
      }
      else {
        uVar6 = *(undefined4 *)_Str1;
        uVar1 = *(undefined2 *)(_Str1 + 4);
        _Str1 = _Str1 + 6;
        uVar2 = Ordinal_15(uVar1,param_1[0x26]);
        iVar4 = FUN_200f8210(param_1,uVar6,uVar2);
        if (iVar4 == -1) {
          uVar3 = Ordinal_15(uVar1,param_1[0x24]);
          FUN_200f81d0(param_1,uVar6,uVar3);
        }
      }
    } while ((int)(_Str1 + -0x20407a08) <= (int)DAT_20408260 + -6);
  }
  DAT_20408260 = &DAT_20407a08 + ((int)DAT_20408260 - (int)_Str1);
  FUN_200fa360(&DAT_20407a08,_Str1,DAT_20408260);
  return 0;
}

