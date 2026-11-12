// rea decompile_all
// name: FUN_20106d6b
// address: 0x20106d6b
// body: available
// range: 0x20106d6b-0x20106ffd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_20106d6b(int param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 uStack_10;
  undefined2 local_e;
  undefined2 uStack_c;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar2 = param_6;
  uVar4 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar4 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar4 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_20106e60;
          pcVar10 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_20106e60:
            pcVar10 = "1#QNAN";
            goto LAB_20106e65;
          }
          pcVar10 = "1#IND";
        }
        FUN_20101cf0(param_6 + 2,pcVar10);
        *(undefined1 *)((int)psVar2 + 3) = 5;
      }
      else {
        pcVar10 = "1#SNAN";
LAB_20106e65:
        FUN_20101cf0(param_6 + 2,pcVar10);
        *(undefined1 *)((int)psVar2 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar4;
    cStack_9 = (char)(uVar4 >> 8);
    local_e = (undefined2)param_2;
    uStack_c = (undefined2)(param_2 >> 0x10);
    local_12 = (undefined2)param_1;
    uStack_10 = (undefined2)((uint)param_1 >> 0x10);
    sVar7 = (short)(((uVar4 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar4 * 0x4d10 >>
                   0x10);
    FUN_201074d6(&local_14,-(int)sVar7,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar7 = sVar7 + 1;
      FUN_201072b6(&local_14,&local_20);
    }
    *psVar2 = sVar7;
    iVar9 = param_4;
    if (((param_5 & 1) == 0) || (iVar9 = param_4 + sVar7, 0 < param_4 + sVar7)) {
      if (0x15 < iVar9) {
        iVar9 = 0x15;
      }
      iVar8 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_20106c49(&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar8 < 0) {
        param_6 = (short *)0x0;
        for (uVar4 = -iVar8 & 0xff; uVar4 != 0; uVar4 = uVar4 - 1) {
          FUN_20106c77(&local_14);
        }
      }
      param_4 = iVar9 + 1;
      psVar5 = psVar2 + 2;
      param_6 = psVar5;
      if (0 < param_4) {
        do {
          param_1 = CONCAT22(local_12,local_14);
          param_2 = CONCAT22(local_e,uStack_10);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,uStack_c));
          FUN_20106c49(&local_14);
          FUN_20106c49(&local_14);
          ___add_12(&local_14,&param_1);
          FUN_20106c49(&local_14);
          cVar3 = cStack_9;
          cStack_9 = '\0';
          psVar5 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar3 + '0';
          param_6 = psVar5;
        } while (param_4 != 0);
      }
      psVar6 = psVar5 + -1;
      psVar1 = psVar2 + 2;
      if ('4' < *(char *)((int)psVar5 + -1)) {
        for (; psVar1 <= psVar6; psVar6 = (short *)((int)psVar6 + -1)) {
          if ((char)*psVar6 != '9') {
            if (psVar1 <= psVar6) goto LAB_20106fbd;
            break;
          }
          *(char *)psVar6 = '0';
        }
        psVar6 = (short *)((int)psVar6 + 1);
        *psVar2 = *psVar2 + 1;
LAB_20106fbd:
        *(char *)psVar6 = (char)*psVar6 + '\x01';
LAB_20106fbf:
        cVar3 = ((char)psVar6 - (char)psVar2) + -3;
        *(char *)((int)psVar2 + 3) = cVar3;
        *(undefined1 *)(cVar3 + 4 + (int)psVar2) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar6; psVar6 = (short *)((int)psVar6 + -1)) {
        if ((char)*psVar6 != '0') {
          if (psVar1 <= psVar6) goto LAB_20106fbf;
          break;
        }
      }
      *psVar2 = 0;
      *(undefined1 *)(psVar2 + 1) = 0x20;
      *(undefined1 *)((int)psVar2 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_20106ff5;
    }
  }
  *psVar2 = 0;
  *(undefined1 *)(psVar2 + 1) = 0x20;
  *(undefined1 *)((int)psVar2 + 3) = 1;
  *(undefined1 *)(psVar2 + 2) = 0x30;
LAB_20106ff5:
  *(undefined1 *)((int)psVar2 + 5) = 0;
  return 1;
}

