// rea decompile_all
// name: FUN_200f85c0
// address: 0x200f85c0
// body: available
// range: 0x200f85c0-0x200f8a26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200f85c0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int *_Str1;
  undefined4 *puVar10;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_104;
  int local_100;
  
  uStack_178 = &local_14c;
  local_100 = param_1[0x22];
  uStack_17c = 0;
  uStack_180 = 0;
  local_14c = 0;
  local_148 = 0;
  local_104 = 1;
  iVar2 = Ordinal_18(0x40,&local_104);
  if (iVar2 < 1) {
    return 0;
  }
  iVar2 = Ordinal_16(param_1[0x22],&DAT_20407a08 + (int)DAT_20408260,0x7ff - (int)DAT_20408260,0);
  if ((iVar2 == -1) || (iVar2 == 0)) {
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
  _Str1 = (int *)&DAT_20407a08;
  DAT_20408260 = (undefined1 *)((int)DAT_20408260 + iVar2);
  if (-1 < (int)DAT_20408260 + -6) {
    while( true ) {
      iVar9 = 0;
      iVar2 = _strncmp((char *)_Str1,s__final__2015a8e8,7);
      if ((iVar2 == 0) || (param_1[0x1d] != 0)) {
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
      iVar2 = param_1[0x24];
      if ((iVar2 == 6) || (iVar2 == 7)) {
        iVar2 = param_1[0x27];
        puVar7 = &DAT_20407a08 + ((int)DAT_20408260 - (int)_Str1);
        if (iVar2 == 0) {
          iVar2 = 3;
          piVar3 = _Str1;
          do {
            if (piVar3 == (int *)(puVar7 + (int)_Str1)) {
              if (iVar2 != 0) goto LAB_200f89b5;
              break;
            }
            if ((char)*piVar3 == '\\') {
              iVar2 = iVar2 + -1;
            }
            piVar3 = (int *)((int)piVar3 + 1);
          } while (iVar2 != 0);
          iVar2 = (int)piVar3 - (int)_Str1;
          if (iVar2 == -1) break;
          if (0xb < iVar2) {
            _strncpy(&stack0xfffffe98,(char *)(_Str1 + 3),iVar2 - 0xc);
            *(undefined1 *)((int)&uStack_178 + iVar2 + 3) = 0;
            DAT_20408208 = FUN_200f9e9e(&stack0xfffffe98);
            if (DAT_20408208 < 0x15) {
              param_1[0x27] = 1;
              if (0 < DAT_20408208) {
                puVar10 = &DAT_20408210;
                for (iVar9 = DAT_20408208; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *puVar10 = 0;
                  puVar10 = puVar10 + 1;
                }
              }
              iVar2 = iVar2 + -1;
              goto LAB_200f8912;
            }
          }
        }
        else if (iVar2 == 1) {
          iVar2 = 2;
          piVar3 = _Str1;
          do {
            if (piVar3 == (int *)(puVar7 + (int)_Str1)) {
              if (iVar2 != 0) goto LAB_200f89b5;
              break;
            }
            if ((char)*piVar3 == '\\') {
              iVar2 = iVar2 + -1;
            }
            piVar3 = (int *)((int)piVar3 + 1);
          } while (iVar2 != 0);
          iVar2 = (int)piVar3 - (int)_Str1;
          if (iVar2 == -1) break;
          _strncpy(&stack0xfffffe98,(char *)((int)_Str1 + 1),iVar2 - 2);
          (&stack0xfffffe96)[iVar2] = 0;
          uStack_180 = FUN_200fcecc(&stack0xfffffe98);
          FUN_200f9550(param_1[0x25],&uStack_180);
          iVar9 = 0;
          if (0 < DAT_20408208) {
            do {
              if ((&DAT_20408210)[iVar9] == 0) {
                iVar8 = DAT_20408208 + -1;
                (&DAT_20408210)[iVar9] = uStack_180;
                if (iVar9 == iVar8) {
                  param_1[0x27] = 2;
                }
                iVar2 = iVar2 + -1;
                goto LAB_200f8912;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < DAT_20408208);
            param_1[0x1d] = 1;
            goto LAB_200f8927;
          }
        }
        else if (iVar2 == 2) {
          iVar2 = FUN_200f8a70(_Str1,puVar7,DAT_20408208 + 1);
          if (iVar2 == -1) break;
          uVar6 = FUN_200f8a30(param_1,&DAT_20408210,DAT_20408208,_Str1,param_1[0x24]);
          *(char *)(iVar2 + -1 + (int)_Str1) = '\\';
          (*(code *)param_1[0x1e])(param_1,2,param_1[0x1f],uVar6,0);
          iVar2 = iVar2 + -1;
LAB_200f8912:
          if (-1 < iVar2) {
            if (iVar2 != 0) {
              _Str1 = (int *)((int)_Str1 + iVar2);
              goto LAB_200f8927;
            }
            break;
          }
        }
        param_1[0x1d] = 1;
      }
      else {
        iVar8 = *_Str1;
        uStack_17c = CONCAT22((short)((uint)iVar2 >> 0x10),(short)_Str1[1]);
        iVar2 = param_1[0x26];
        _Str1 = (int *)((int)_Str1 + 6);
        uVar1 = Ordinal_15(uStack_17c);
        if (0 < iVar2) {
          do {
            piVar3 = (int *)FUN_200f44b0(param_1[1],iVar9);
            uStack_178 = (undefined4 *)*piVar3;
            uVar4 = FUN_200f7bc0(uStack_178);
            if ((uVar1 == uVar4) && (iVar5 = FUN_200f44a0(uStack_178), iVar5 == iVar8)) {
              if (iVar9 != -1) goto LAB_200f8927;
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iVar2);
        }
        iVar2 = param_1[0x24];
        uVar6 = Ordinal_15(uStack_17c);
        FUN_200f7920(iVar8,uVar6,iVar2,param_1[0x25]);
        FUN_200f44d0(param_1[1],&stack0xfffffe8c);
      }
LAB_200f8927:
      if ((int)DAT_20408260 + -6 < (int)(_Str1 + -0x8101e82)) break;
    }
  }
LAB_200f89b5:
  DAT_20408260 = &DAT_20407a08 + ((int)DAT_20408260 - (int)_Str1);
  FUN_200fa360(&DAT_20407a08,_Str1,DAT_20408260);
  return 0;
}

