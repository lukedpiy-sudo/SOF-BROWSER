// rea decompile_all
// name: FUN_500f22e0
// address: 0x500f22e0
// body: available
// range: 0x500f22e0-0x500f2769 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_500f22e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,float *param_6,int param_7,undefined4 param_8,uint param_9,
            int param_10)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_88 [64];
  undefined4 uStack_48;
  float afStack_44 [10];
  undefined4 uStack_1c;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  if (0 < param_7) {
    if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 0)) {
      if ((*(int **)(iVar1 + 0x354) == (int *)0x0) || (*(int *)(iVar1 + 0x7c) == 0)) {
        if ((param_9 & 2) == 0) {
          piVar4 = *(int **)(iVar1 + 0x34c);
          goto LAB_500f270b;
        }
      }
      else {
        if (0 < *(int *)(param_1 + 0x2ec)) {
          (**(code **)(**(int **)(iVar1 + 0x354) + 0x104))();
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x100))();
        iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
        if (iVar1 != 0) {
          if ((*(int *)(param_1 + 0x74) != 0) &&
             (piVar4 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c), piVar4 != (int *)0x0)) {
            (**(code **)(*piVar4 + 0x80))();
          }
          if ((DAT_5018bf80 == 0) && ((param_9 & 0x300) != 0)) {
            uStack_48 = 0;
            uStack_4 = 0;
            FUN_500c3da0((undefined4 *)(param_1 + 4),(float *)(param_1 + 0x10),afStack_44);
            FUN_500ec880(auStack_88,afStack_44);
            fStack_a0 = *param_6;
            fStack_9c = param_6[1];
            fStack_98 = param_6[2];
            FUN_500ed3e0(auStack_88,(float *)&DAT_5018c284,&fStack_a0);
            FUN_500ed490(auStack_88,(undefined4 *)&DAT_5018bf84,param_4);
            FUN_500feb10(&DAT_5018bf84,
                         SQRT(_DAT_5018bf84 * _DAT_5018bf84 +
                              DAT_5018bf8c * DAT_5018bf8c + _DAT_5018bf88 * _DAT_5018bf88));
            DAT_5018bf80 = (**(code **)(**(int **)(param_1 + 0x164) + 0xac))();
          }
          iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x9c))
                            (param_1,param_2,param_3,param_4,param_5,param_6);
          cVar7 = (char)((uint)param_5 >> 0x18);
          if ((0 < iVar1) &&
             (iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x11c))(),
             iVar2 == 8)) {
            lVar6 = __ftol();
            iVar1 = (int)lVar6;
          }
          if (iVar1 < *(int *)(param_1 + 0x2ec)) {
            FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x1c),(float *)&stack0xffffff3c,
                         (float *)0x0,(float *)0x0);
            iVar2 = (**(code **)(*DAT_5015c4d8 + 4))();
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 0x74);
              if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x10) & 1) == 0)) {
                uVar5 = 0;
              }
              else {
                uVar5 = 1;
              }
              if ((((iVar2 != 0) && (*(int **)(iVar2 + 0x354) != (int *)0x0)) &&
                  (0 < *(int *)(param_1 + 0x2ec))) &&
                 (iVar2 = (**(code **)(**(int **)(iVar2 + 0x354) + 0x14))
                                    (param_1,uStack_1c,0x3f800000,1,&stack0xffffff30,
                                     &stack0xffffff3c,2,uVar5,0,0), iVar2 != 0)) {
                FUN_500f0b00(param_1,(int)&stack0xffffff30);
                (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x58))(param_1,iVar2);
              }
            }
          }
          else {
            FUN_500f0d30(param_1,param_2,param_3,param_7,uStack_1c,uStack_c);
          }
          FUN_500f2100(param_1,iVar1,uStack_c,iStack_8);
          bVar3 = false;
          if ((*(int *)(param_1 + 0x74) != 0) &&
             (piVar4 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c), piVar4 != (int *)0x0)) {
            iVar2 = (**(code **)(*piVar4 + 0x80))();
            bVar3 = 0 < iVar2;
          }
          if (((bool)cVar7 != bVar3) && (iVar1 < *(int *)(param_1 + 0x2ec))) {
            FUN_500efe50(param_1,(byte *)(*(int *)(param_1 + 0x74) + 0xcc));
          }
          return iVar1;
        }
        if ((param_9 & 2) == 0) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x74) + 0x34c);
LAB_500f270b:
          iVar1 = (**(code **)(*piVar4 + 0x7c))();
          FUN_500f2100(param_1,iVar1,param_9,param_7);
          return iVar1;
        }
      }
    }
    FUN_500f2100(param_1,param_7,param_9,param_10);
  }
  return param_7;
}

