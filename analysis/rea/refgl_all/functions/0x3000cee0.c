// rea decompile_all
// name: FUN_3000cee0
// address: 0x3000cee0
// body: available
// range: 0x3000cee0-0x3000d6ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3000cee0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float10 extraout_ST0;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  float afStack_c [3];
  
  iVar5 = 0;
  iVar2 = FUN_3000dc50((undefined8 *)(param_1 + 1),(undefined8 *)(param_1 + 4));
  if ((iVar2 == 0) && (*param_1 != 0)) {
    if (*(float *)(DAT_3008fc7c + 0x18) < _DAT_3008fd78) {
      iVar2 = param_1[8];
      lVar8 = __ftol();
      iVar5 = (int)lVar8;
      if (iVar2 < (int)lVar8) {
        iVar5 = iVar2;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      if ((iVar2 == 1) &&
         (fVar7 = (float10)(*DAT_3008fe28)(), fVar7 < (float10)(float)((float10)1.0 - extraout_ST0))
         ) {
        *(byte *)(*param_1 + 0x38) = *(byte *)(*param_1 + 0x38) | 1;
        return;
      }
      iVar2 = *param_1;
      if (iVar2 != 0) {
        while (iVar5 != 0) {
          if ((*(ushort *)(iVar2 + 0x38) & 0x1000) == 0) {
            iVar5 = iVar5 + -1;
            *(ushort *)(iVar2 + 0x38) = *(ushort *)(iVar2 + 0x38) | 1;
            *(undefined4 *)(iVar2 + 0xc) = 0;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
          }
          if ((*(int *)(iVar2 + 0x60) == 0) ||
             (iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x60), iVar2 == 0)) break;
        }
      }
      if ((*param_1 != 0) && (iVar2 = *(int *)(*param_1 + 0x60), iVar2 != 0)) {
        while (iVar5 != 0) {
          if ((*(ushort *)(iVar2 + 0x38) & 0x1000) == 0) {
            iVar5 = iVar5 + -1;
            *(ushort *)(iVar2 + 0x38) = *(ushort *)(iVar2 + 0x38) | 1;
            *(undefined4 *)(iVar2 + 0xc) = 0;
            *(undefined4 *)(iVar2 + 0x10) = 0;
            *(undefined4 *)(iVar2 + 0x18) = 0;
          }
          if ((*(int *)(iVar2 + 0x60) == 0) ||
             (iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x60), iVar2 == 0)) break;
        }
      }
    }
    if (((*(byte *)(*param_1 + 0x39) & 8) != 0) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xfffffff7, ((byte)DAT_300a4588 & 8) == 0)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    pfVar6 = (float *)*param_1;
    if (((uint)pfVar6[0xe] & 8) == 0) {
      FUN_300062a0(0x2100);
      if (((uint)pfVar6[0xe] & 0x400) == 0) {
        if (((uint)pfVar6[0xe] & 0x200) == 0) {
          FUN_3000d710(DAT_3008fcd4,0x302,0x303);
          FUN_3000d880(DAT_3008fcd4,0xbe2);
          DAT_3008fb88 = 3;
        }
        else {
          FUN_3000d740(DAT_3008fcd4,0xbc0);
          FUN_3000d710(DAT_3008fcd4,1,1);
          FUN_3000d880(DAT_3008fcd4,0xbe2);
          DAT_3008fb88 = 2;
        }
      }
      else {
        DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
        if (((byte)DAT_300a4588 & 4) == 0) {
          *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
        }
        FUN_3000d710(DAT_3008fcd4,0,0x301);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 1;
      }
      FUN_3000c420((int)pfVar6);
    }
    else {
      fStack_18 = ((float)param_1[1] + (float)param_1[4]) * 0.5;
      iStack_10 = param_1[6];
      fStack_14 = ((float)param_1[2] + (float)param_1[5]) * 0.5;
      FUN_30008ff0(&fStack_18,afStack_c,
                   CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)((int)pfVar6 + 0x3a)));
      FUN_300062a0(0x2100);
      if (((uint)pfVar6[0xe] & 0x400) == 0) {
        if (((uint)pfVar6[0xe] & 0x200) == 0) {
          FUN_3000d710(DAT_3008fcd4,0x302,0x303);
          FUN_3000d880(DAT_3008fcd4,0xbe2);
          DAT_3008fb88 = 3;
          FUN_3000c4a0((int)pfVar6,afStack_c);
        }
        else {
          FUN_3000d740(DAT_3008fcd4,0xbc0);
          FUN_3000d710(DAT_3008fcd4,1,1);
          FUN_3000d880(DAT_3008fcd4,0xbe2);
          DAT_3008fb88 = 2;
          FUN_3000c4a0((int)pfVar6,afStack_c);
        }
      }
      else {
        DAT_300a46e0 = DAT_300a46e0 & 0xfffffffb;
        if (((byte)DAT_300a4588 & 4) == 0) {
          *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
        }
        FUN_3000d710(DAT_3008fcd4,0,0x301);
        FUN_3000d880(DAT_3008fcd4,0xbe2);
        DAT_3008fb88 = 1;
        FUN_3000c4a0((int)pfVar6,afStack_c);
      }
    }
    fVar9 = DAT_3008fc64;
    if ((char *)pfVar6[0xd] != (char *)0x0) {
      if (pfVar6[0xc] == 0.0) {
        pcVar3 = FUN_30007380((char *)pfVar6[0xd],1,'\0','\x01');
        pfVar6[0xc] = (float)pcVar3;
        if (pcVar3 == (char *)0x0) {
          pfVar6[0xc] = DAT_3008fc64;
        }
      }
      fVar9 = pfVar6[0xc];
    }
    FUN_30006400((int)fVar9);
    if ((int)pfVar6[0xf] < 0) {
      if (*(int *)(DAT_3008fc6c + 0xcc) == 0) {
        pfVar6[0xf] = 0.0;
      }
      else {
        piVar4 = FUN_3000a400(pfVar6,DAT_3008fc6c);
        pfVar6[0xf] = (float)piVar4[0xb];
      }
    }
    if (pfVar6[0xf] != 0.0) {
      FUN_30012990((int)pfVar6[0xf],pfVar6,DAT_3008fb88,(float *)0x0);
    }
    uVar1 = *(ushort *)(pfVar6 + 0xe);
    if ((char)uVar1 < '\0') {
      if ((uVar1 & 2) == 0) {
        FUN_3001b650();
        (*DAT_300a4710)();
        do {
          FUN_3000c950(pfVar6);
          *(ushort *)(pfVar6 + 0xe) = *(ushort *)(pfVar6 + 0xe) | 0x1000;
          pfVar6 = (float *)pfVar6[0x18];
          if (iVar5 != 0) {
            if (pfVar6 == (float *)0x0) break;
            *(byte *)(pfVar6 + 0xe) = *(byte *)(pfVar6 + 0xe) | 1;
            pfVar6[3] = 0.0;
            pfVar6[4] = 0.0;
            pfVar6[6] = 0.0;
            pfVar6 = (float *)pfVar6[0x18];
            iVar5 = iVar5 + -1;
          }
        } while (pfVar6 != (float *)0x0);
        (*DAT_300a45f4)();
      }
      else {
        FUN_3001b650();
        (*DAT_300a4710)();
        do {
          (*DAT_300a42f4)();
          (*DAT_300a4520)();
          (*DAT_300a42f4)(0,0x3fa00000);
          (*DAT_300a4520)(&stack0xffffffd0);
          (*DAT_300a42f4)(0x3fa00000,0);
          FUN_30008ee0(pfVar6,pfVar6[4],(float *)&DAT_3008ff30,(float *)&stack0xffffffc4);
          (*DAT_300a4520)(&stack0xffffffc4);
          *(ushort *)(pfVar6 + 0xe) = *(ushort *)(pfVar6 + 0xe) | 0x1000;
          pfVar6 = (float *)pfVar6[0x18];
          if (iVar5 != 0) {
            if (pfVar6 == (float *)0x0) break;
            *(byte *)(pfVar6 + 0xe) = *(byte *)(pfVar6 + 0xe) | 1;
            pfVar6[3] = 0.0;
            pfVar6[4] = 0.0;
            pfVar6[6] = 0.0;
            pfVar6 = (float *)pfVar6[0x18];
            iVar5 = iVar5 + -1;
          }
        } while (pfVar6 != (float *)0x0);
        (*DAT_300a45f4)();
      }
    }
    else if ((uVar1 & 2) == 0) {
      do {
        if (((uint)pfVar6[0xe] & 8) == 0) {
          if (((uint)pfVar6[0xe] & 0x600) == 0) {
            (*DAT_300a4718)();
          }
          else {
            (*DAT_300a4490)();
          }
        }
        else {
          FUN_3000c4a0((int)pfVar6,afStack_c);
        }
        FUN_3001b650();
        (*DAT_300a4710)();
        FUN_3000c950(pfVar6);
        (*DAT_300a45f4)();
        *(ushort *)(pfVar6 + 0xe) = *(ushort *)(pfVar6 + 0xe) | 0x1000;
        pfVar6 = (float *)pfVar6[0x18];
        if (iVar5 != 0) {
          if (pfVar6 == (float *)0x0) break;
          *(byte *)(pfVar6 + 0xe) = *(byte *)(pfVar6 + 0xe) | 1;
          pfVar6[3] = 0.0;
          pfVar6[4] = 0.0;
          pfVar6[6] = 0.0;
          pfVar6 = (float *)pfVar6[0x18];
          iVar5 = iVar5 + -1;
        }
      } while (pfVar6 != (float *)0x0);
    }
    else {
      do {
        if (((uint)pfVar6[0xe] & 8) == 0) {
          if (((uint)pfVar6[0xe] & 0x600) == 0) {
            (*DAT_300a4718)();
          }
          else {
            (*DAT_300a4490)();
          }
        }
        else {
          FUN_3000c4a0((int)pfVar6,afStack_c);
        }
        FUN_3001b650();
        (*DAT_300a4710)();
        FUN_3000c560(pfVar6);
        (*DAT_300a45f4)();
        *(byte *)((int)pfVar6 + 0x39) = *(byte *)((int)pfVar6 + 0x39) | 0x10;
        pfVar6 = (float *)pfVar6[0x18];
        if (iVar5 != 0) {
          if (pfVar6 == (float *)0x0) break;
          *(byte *)(pfVar6 + 0xe) = *(byte *)(pfVar6 + 0xe) | 1;
          pfVar6[3] = 0.0;
          pfVar6[4] = 0.0;
          pfVar6[6] = 0.0;
          pfVar6 = (float *)pfVar6[0x18];
          iVar5 = iVar5 + -1;
        }
      } while (pfVar6 != (float *)0x0);
    }
    if ((*(int *)(*param_1 + 0x3c) != 0) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xffffffef, ((byte)DAT_300a4588 & 0x10) == 0)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    if (((*(byte *)(*param_1 + 0x39) & 8) != 0) &&
       (DAT_300a46e0 = DAT_300a46e0 | 8, ((byte)DAT_300a4588 & 8) != 0)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a4610 = 0x302;
    DAT_300a43fc = 0x303;
    if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a46e0 = DAT_300a46e0 | 4;
    if (((byte)DAT_300a4588 & 4) != 0) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a445c = 0x204;
    DAT_300a4604 = 0x3d4ccccd;
    if ((DAT_300a4780 == 0x204) && (_DAT_300a42e8 == 0.05)) {
      *(int *)((int)DAT_3008fcd4 + 0x10) = *(int *)((int)DAT_3008fcd4 + 0x10) + 1;
    }
  }
  return;
}

