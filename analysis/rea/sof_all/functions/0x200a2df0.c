// rea decompile_all
// name: FUN_200a2df0
// address: 0x200a2df0
// body: available
// range: 0x200a2df0-0x200a5448 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200a3308) */
/* WARNING: Removing unreachable block (ram,0x200a330f) */
/* WARNING: Removing unreachable block (ram,0x200a3315) */
/* WARNING: Removing unreachable block (ram,0x200a3319) */
/* WARNING: Removing unreachable block (ram,0x200a331c) */
/* WARNING: Removing unreachable block (ram,0x200a3338) */
/* WARNING: Removing unreachable block (ram,0x200a333d) */
/* WARNING: Removing unreachable block (ram,0x200a3343) */
/* WARNING: Removing unreachable block (ram,0x200a3347) */
/* WARNING: Removing unreachable block (ram,0x200a334b) */
/* WARNING: Removing unreachable block (ram,0x200a334f) */
/* WARNING: Removing unreachable block (ram,0x200a3352) */
/* WARNING: Removing unreachable block (ram,0x200a335d) */
/* WARNING: Removing unreachable block (ram,0x200a3367) */
/* WARNING: Removing unreachable block (ram,0x200a3369) */
/* WARNING: Removing unreachable block (ram,0x200a43ac) */

undefined4
FUN_200a2df0(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 *param_4,uint param_5,
            float param_6,undefined1 *param_7,int param_8,int param_9,int param_10,
            undefined1 *param_11,int param_12,undefined4 param_13,byte param_14,undefined4 *param_15
            ,uint param_16,undefined4 param_17,undefined4 param_18,undefined4 param_19,
            undefined1 param_20,int param_21,int param_22,undefined4 param_23,int *param_24,
            undefined1 param_25,char *param_26,uint param_27,undefined4 param_28,undefined4 param_29
            ,int param_30,undefined4 param_31,undefined1 param_32,undefined4 *param_33,
            undefined4 param_34,undefined4 param_35,undefined1 param_36,undefined4 param_37,
            undefined4 param_38,undefined1 param_39,undefined4 param_40,undefined1 param_41,
            undefined4 param_42,undefined4 param_43,undefined1 param_44,undefined4 param_45,
            undefined4 param_46)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  HANDLE hFindFile;
  HANDLE hFindFile_00;
  LONG LVar4;
  void *pvVar5;
  undefined1 *puVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int extraout_ECX;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  LPCSTR pCVar20;
  undefined4 *puVar21;
  bool bVar22;
  bool bVar23;
  float10 fVar24;
  int iVar25;
  undefined1 uStack00000091;
  undefined1 uStack000000a5;
  undefined4 in_stack_000000fc;
  undefined4 in_stack_00000104;
  undefined4 in_stack_00000108;
  undefined4 in_stack_0000010c;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000118;
  char in_stack_0000011c;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000124;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000134;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000144;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000154;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_00000170;
  undefined4 in_stack_00000174;
  undefined4 in_stack_00000178;
  float in_stack_0000017c;
  undefined4 in_stack_00000180;
  undefined1 in_stack_00000184;
  undefined4 in_stack_0000018c;
  undefined1 uStack000001a4;
  undefined1 uStack000001a5;
  int *in_stack_000001a8;
  undefined1 in_stack_000001b0;
  undefined1 in_stack_000001b8;
  char *in_stack_000001bc;
  int in_stack_000001c8;
  undefined4 in_stack_000001cc;
  int in_stack_000001d4;
  int in_stack_000001d8;
  undefined4 in_stack_000001dc;
  undefined1 *in_stack_000001e0;
  int in_stack_000001e4;
  undefined1 in_stack_000001e8;
  void *in_stack_00001a48;
  LPCSTR in_stack_00001a58;
  char in_stack_00001a5c;
  undefined4 local_c;
  undefined1 *local_8;
  undefined3 uStack_4;
  char local_1;
  
  uStack_4 = 0xffffff;
  local_1 = 0xff;
  local_8 = &LAB_2010d4df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_200fa720();
  uVar13 = 0xffffffff;
  *(undefined1 *)(extraout_ECX + 0x44) = 1;
  *(undefined1 *)(extraout_ECX + 0x45) = 0;
  *(undefined4 *)(extraout_ECX + 0xe0) = 0;
  *(undefined1 *)(extraout_ECX + 0x28) = 0;
  pCVar20 = in_stack_00001a58;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  do {
    uVar16 = uVar13 - 1;
    uVar19 = uVar16;
    if (((int)uVar16 < 1) || (uVar19 = uVar13, in_stack_00001a58[uVar16] == '\\')) break;
    uVar13 = uVar16;
  } while (in_stack_00001a58[uVar16] != '/');
  pCVar20 = in_stack_00001a58;
  do {
    cVar2 = *pCVar20;
    pCVar20[(int)(&stack0x00000828 + -(int)in_stack_00001a58)] = cVar2;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  (&stack0x00000828)[uVar19] = 0;
  iVar14 = -1;
  pcVar17 = &stack0x00000828;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar2 != '\0');
  FUN_2000a600();
  iVar14 = -1;
  pCVar20 = in_stack_00001a58;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  FUN_2000a600();
  uVar13 = 0xffffffff;
  param_1._3_1_ = '\0';
  pCVar20 = in_stack_00001a58;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  if (in_stack_00001a58[~uVar13 - 2] == 'b') {
LAB_200a5421:
    uVar12 = FUN_200a18d0();
    ExceptionList = in_stack_00001a48;
    return uVar12;
  }
  uVar13 = 0xffffffff;
  pCVar20 = in_stack_00001a58;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  if (in_stack_00001a58[~uVar13 - 2] == 'B') goto LAB_200a5421;
  uVar13 = 0xffffffff;
  local_1 = '\0';
  pCVar20 = in_stack_00001a58;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  if (in_stack_00001a58[~uVar13 - 3] != 'f') {
    uVar13 = 0xffffffff;
    pCVar20 = in_stack_00001a58;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar2 = *pCVar20;
      pCVar20 = pCVar20 + 1;
    } while (cVar2 != '\0');
    if (in_stack_00001a58[~uVar13 - 3] != 'F') goto LAB_200a2f0e;
  }
  local_1 = '\x01';
LAB_200a2f0e:
  hFindFile = FindFirstFileA(in_stack_00001a58,(LPWIN32_FIND_DATAA)&stack0x000013e0);
  FindClose(hFindFile);
  pCVar20 = in_stack_00001a58;
  do {
    cVar2 = *pCVar20;
    pCVar20[(int)(&stack0x00000ff8 + -(int)in_stack_00001a58)] = cVar2;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  uVar13 = 0xffffffff;
  pcVar17 = &stack0x00000ff8;
  do {
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar2 != '\0');
  if (3 < ~uVar13 - 1) {
    uVar13 = 0xffffffff;
    pcVar17 = &stack0x00000ff8;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    pcVar17 = &DAT_20157820;
    do {
      cVar2 = *pcVar17;
      (&stack0xdfea97d4 + ~uVar13)[(int)pcVar17] = cVar2;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
  }
  hFindFile_00 = FindFirstFileA(&stack0x00000ff8,(LPWIN32_FIND_DATAA)&stack0x00001520);
  FindClose(hFindFile_00);
  if ((hFindFile_00 == (HANDLE)0xffffffff) && (hFindFile == (HANDLE)0xffffffff)) {
    FUN_200fabac();
    FUN_2008e9e0();
    ExceptionList = in_stack_00001a48;
    return 0;
  }
  if ((local_1 == '\0') &&
     ((((in_stack_00001a5c == '\0' && (hFindFile_00 != (HANDLE)0xffffffff)) &&
       (LVar4 = CompareFileTime((FILETIME *)&stack0x000013f4,(FILETIME *)&stack0x00001534),
       LVar4 < 0)) && (cVar2 = FUN_200a18d0(), cVar2 != '\0')))) {
    ExceptionList = in_stack_00001a48;
    return 1;
  }
  param_8 = 0;
  if (local_1 == '\0') {
    FUN_200fabac();
    FUN_2008ea00();
  }
  else {
    FUN_200fabac();
    FUN_2008ea00();
    param_8 = FUN_200faa9a();
    if (param_8 == 0) {
      FUN_200fabac();
      FUN_2008e9e0();
      ExceptionList = in_stack_00001a48;
      return 0;
    }
  }
  in_stack_00000120 = 0;
  in_stack_0000011c = param_1._3_1_;
  in_stack_00000124 = 0;
  in_stack_00000128 = 0;
  FUN_2009df30();
  FUN_2009df30();
  FUN_2009df30();
  FUN_2009df30();
  FUN_2009df30();
  param_20 = (byte)local_c;
  param_21 = 0;
  param_22 = 0;
  param_23 = 0;
  *(undefined4 *)(extraout_ECX + 0x13c) = 0;
  local_c._0_3_ = CONCAT12(1,(ushort)local_c);
  do {
    param_14 = (byte)local_c;
    local_c._0_2_ = (ushort)(byte)local_c;
    FUN_2000a5b0();
    if (local_1 == '\0') {
      iVar14 = -1;
      pCVar20 = in_stack_00001a58;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        cVar2 = *pCVar20;
        pCVar20 = pCVar20 + 1;
      } while (cVar2 != '\0');
      FUN_2000a600();
      pvVar5 = operator_new(0x24);
      if (pvVar5 == (void *)0x0) {
        iVar14 = 0;
      }
      else {
        iVar14 = FUN_200bd430();
      }
      *(int *)(extraout_ECX + 0x24) = iVar14;
      if (*(char *)(iVar14 + 2) != '\0') {
        FUN_200bd7b0();
        FUN_200fabac();
        FUN_2008e9e0();
      }
    }
    else {
LAB_200a3247:
      iVar14 = FUN_200fcba5();
      if (iVar14 != 0) {
        iVar14 = -1;
        pcVar17 = &stack0x00000440;
        do {
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
joined_r0x200a3282:
        if (iVar14 != -2) {
          uVar13 = 0xffffffff;
          pcVar17 = &stack0x00000440;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          if ((&stack0x0000043e)[~uVar13] != '\r') {
            uVar13 = 0xffffffff;
            pcVar17 = &stack0x00000440;
            do {
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              cVar2 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar2 != '\0');
            if ((&stack0x0000043e)[~uVar13] != '\t') {
              uVar13 = 0xffffffff;
              pcVar17 = &stack0x00000440;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar2 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar2 != '\0');
              if ((&stack0x0000043e)[~uVar13] != '\n') goto LAB_200a337c;
            }
          }
          uVar13 = 0xffffffff;
          pcVar17 = &stack0x00000440;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          (&stack0x0000043e)[~uVar13] = 0;
          iVar14 = -1;
          pcVar17 = &stack0x00000440;
          do {
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          goto joined_r0x200a3282;
        }
LAB_200a337c:
        uVar13 = 0xffffffff;
        pcVar17 = &stack0x00000440;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13;
        do {
          uVar16 = uVar13;
          uVar13 = uVar16 - 1;
          if ((int)uVar13 < 0) goto LAB_200a33aa;
        } while ((&stack0x0000043f)[uVar16] != '.');
        if (-1 < (int)uVar13) {
          (&stack0x0000043f)[uVar16] = 0;
        }
LAB_200a33aa:
        iVar14 = -1;
        pcVar17 = &stack0x00000440;
        do {
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        if (iVar14 != -2) {
          FUN_20107ed2();
          iVar14 = __strcmpi(&stack0x00000440,s__exclude_201577bc);
          if ((iVar14 == 0) || (iVar14 = __strcmpi(&stack0x00000440,s__only_201577b4), iVar14 == 0))
          {
            iVar14 = __strcmpi(&stack0x00000440,s__only_201577b4);
            if (iVar14 == 0) {
              local_c._0_3_ = (uint3)(ushort)local_c;
            }
            while (iVar14 = FUN_200fcba5(), iVar14 != 0) {
              iVar14 = -1;
              pcVar17 = &stack0x00000440;
              do {
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                cVar2 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar2 != '\0');
joined_r0x200a35e1:
              if (iVar14 != -2) {
                uVar13 = 0xffffffff;
                pcVar17 = &stack0x00000440;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                if ((&stack0x0000043e)[~uVar13] != '\r') {
                  uVar13 = 0xffffffff;
                  pcVar17 = &stack0x00000440;
                  do {
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    cVar2 = *pcVar17;
                    pcVar17 = pcVar17 + 1;
                  } while (cVar2 != '\0');
                  if ((&stack0x0000043e)[~uVar13] != '\t') {
                    uVar13 = 0xffffffff;
                    pcVar17 = &stack0x00000440;
                    do {
                      if (uVar13 == 0) break;
                      uVar13 = uVar13 - 1;
                      cVar2 = *pcVar17;
                      pcVar17 = pcVar17 + 1;
                    } while (cVar2 != '\0');
                    if ((&stack0x0000043e)[~uVar13] != '\n') goto LAB_200a365d;
                  }
                }
                uVar13 = 0xffffffff;
                pcVar17 = &stack0x00000440;
                do {
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                (&stack0x0000043e)[~uVar13] = 0;
                iVar14 = -1;
                pcVar17 = &stack0x00000440;
                do {
                  if (iVar14 == 0) break;
                  iVar14 = iVar14 + -1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                goto joined_r0x200a35e1;
              }
LAB_200a365d:
              iVar14 = -1;
              pcVar17 = &stack0x00000440;
              do {
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                cVar2 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar2 != '\0');
              if (iVar14 != -2) {
                iVar14 = __strcmpi(&stack0x00000440,&DAT_20157794);
                if (iVar14 == 0) break;
                FUN_20107ed2();
                FUN_200fabac();
                FUN_2008ea00();
                in_stack_000001e8 = (byte)local_c;
                FUN_2000a5b0();
                iVar14 = -1;
                pcVar17 = &stack0x00000440;
                do {
                  if (iVar14 == 0) break;
                  iVar14 = iVar14 + -1;
                  cVar2 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar2 != '\0');
                FUN_2000a600();
                FUN_200a77d0();
                FUN_2000a5b0();
              }
            }
          }
          else {
            FUN_2000a5b0();
            iVar14 = -1;
            pcVar17 = &stack0x00000440;
            do {
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              cVar2 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar2 != '\0');
            FUN_2000a600();
            FUN_2008e320();
            FUN_2008e200();
            FUN_2000a3a0();
            FUN_2000a5b0();
            FUN_2000a5b0();
            FUN_2000a5b0();
            FUN_200fabac();
            FUN_2008ea00();
            pvVar5 = operator_new(0x24);
            if (pvVar5 == (void *)0x0) {
              iVar14 = 0;
            }
            else {
              iVar14 = FUN_200bd430();
            }
            *(int *)(extraout_ECX + 0x24) = iVar14;
            if (*(char *)(iVar14 + 2) == '\0') goto LAB_200a376a;
            FUN_200bd7b0();
            FUN_200fabac();
            FUN_2008ea00();
          }
        }
        goto LAB_200a3247;
      }
LAB_200a376a:
      iVar14 = -1;
      pcVar17 = &stack0x00000440;
      do {
        if (iVar14 == 0) break;
        iVar14 = iVar14 + -1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar2 != '\0');
      if (iVar14 == -2) {
        FUN_2000a5b0();
        goto LAB_200a4a73;
      }
    }
    param_19 = *(undefined4 *)(extraout_ECX + 0x24);
    param_18 = 0;
    local_8 = (undefined1 *)FUN_20068dc0();
    if (local_8 != (undefined1 *)0x33fb1a2) {
      FUN_200bd7b0();
      FUN_200fabac();
      FUN_2008e9e0();
      FUN_2000a5b0();
      FUN_200f9f75();
      param_21 = 0;
      param_22 = 0;
      param_23 = 0;
      FUN_20092110();
      FUN_20092110();
      FUN_20092110();
      FUN_20092110();
LAB_200a49c1:
      FUN_20092110();
      FUN_20092110();
      ExceptionList = in_stack_00001a48;
      return 0;
    }
    iVar14 = FUN_20068dc0();
    if (iVar14 != 3) {
      FUN_200bd7b0();
      FUN_200fabac();
      FUN_2008e9e0();
      FUN_2000a5b0();
      FUN_200f9f75();
      param_21 = 0;
      param_22 = 0;
      param_23 = 0;
      FUN_20092110();
      FUN_20092110();
      FUN_20092110();
      FUN_20092110();
      goto LAB_200a49c1;
    }
    if (*(int *)(extraout_ECX + 0x110) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(extraout_ECX + 0x114) - *(int *)(extraout_ECX + 0x110) >> 2;
    }
    param_30 = iVar14;
    puVar6 = operator_new(0x30);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      *puVar6 = (byte)local_c;
      FUN_2000a5b0();
      FUN_2009df30();
    }
    param_4 = puVar6;
    FUN_2009e320();
    FUN_2009e320();
    param_5 = *(int *)(*(int *)(extraout_ECX + 0x110) + iVar14 * 4);
    FUN_200a2bf0();
    FUN_200234d0();
    piVar7 = (int *)FUN_2003c140();
    iVar25 = *piVar7;
    FUN_2000a5b0();
    *(int *)(iVar25 + 0x1c) = iVar14;
    FUN_20068f80();
    local_8 = (undefined1 *)FUN_20068dc0();
    uStack000001a4 = (byte)local_c;
    uStack000001a5 = (byte)local_c;
    in_stack_000001b0 = 1;
    FUN_200a8ec0();
    iVar25 = 0;
    if (0 < (int)local_8) {
      do {
        in_stack_00000184 = (byte)local_c;
        FUN_2000a5b0();
        FUN_2009df30();
        in_stack_0000017c = 0.0;
        fVar24 = (float10)FUN_20068d50();
        in_stack_000001b8 = (byte)local_c;
        in_stack_0000017c = (float)(fVar24 * (float10)1000.0);
        FUN_2000a5b0();
        FUN_20068ff0();
        pcVar17 = in_stack_000001bc;
        if (in_stack_000001bc == (char *)0x0) {
          pcVar17 = "";
        }
        pcVar18 = &stack0x00000c10;
        do {
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          *pcVar18 = cVar2;
          pcVar18 = pcVar18 + 1;
        } while (cVar2 != '\0');
        FUN_200a1650();
        uVar13 = 0xffffffff;
        pcVar17 = &stack0x00000c10;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        for (iVar15 = ~uVar13 - 2;
            (-1 < iVar15 &&
            (((cVar2 = (&stack0x00000c10)[iVar15], cVar2 == ' ' || (cVar2 == '\n')) ||
             (cVar2 == '\r')))); iVar15 = iVar15 + -1) {
        }
        uVar13 = 0;
        (&stack0x00000c11)[iVar15] = 0;
        (&stack0x00000c12)[iVar15] = 0;
        iVar15 = -1;
        pcVar17 = &stack0x00000c10;
        do {
          if (iVar15 == 0) break;
          iVar15 = iVar15 + -1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        if (iVar15 != -2) {
          do {
            if ((&stack0x00000c10)[uVar13] != ' ') break;
            uVar16 = 0xffffffff;
            uVar13 = uVar13 + 1;
            pcVar17 = &stack0x00000c10;
            do {
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              cVar2 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar2 != '\0');
          } while (uVar13 < ~uVar16 - 1);
        }
        uVar16 = 0xffffffff;
        pcVar17 = &stack0x00000c10;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        uVar19 = uVar13;
        if (uVar13 < ~uVar16 - 1) {
          do {
            if ((&stack0x00000c10)[uVar19] == ' ') break;
            uVar16 = 0xffffffff;
            uVar19 = uVar19 + 1;
            pcVar17 = &stack0x00000c10;
            do {
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              cVar2 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar2 != '\0');
          } while (uVar19 < ~uVar16 - 1);
        }
        (&stack0x00000c10)[uVar19] = 0;
        if (uVar13 != uVar19) {
          iVar15 = -1;
          pcVar17 = &stack0x00000c10 + uVar13;
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          FUN_2000a600();
          cVar2 = (&stack0x00000c11)[uVar19];
          while (cVar2 == ' ') {
            cVar2 = (&stack0x00000c12)[uVar19];
            uVar19 = uVar19 + 1;
          }
          iVar15 = -1;
          pcVar17 = &stack0x00000c11 + uVar19;
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          FUN_2000a600();
          iVar15 = -1;
          in_stack_00000180 = 0xffffffff;
          pcVar17 = &DAT_2015ee44;
          do {
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            cVar2 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar2 != '\0');
          iVar15 = FUN_20023c90();
          if (iVar15 != 0) {
            FUN_200234d0();
            FUN_200234d0();
            FUN_200a7b60();
            FUN_200a7b60();
            FUN_200a8090();
            param_7 = &stack0x0000032c;
            FUN_2000a5b0();
            FUN_2000a5b0();
            param_7 = &stack0x00000258;
            FUN_2000a5b0();
            FUN_2000a5b0();
            FUN_2000a5b0();
            FUN_2000a5b0();
          }
        }
        FUN_2000a5b0();
        FUN_2000a5b0();
        FUN_2000a5b0();
        iVar25 = iVar25 + 1;
      } while (iVar25 < (int)local_8);
    }
    param_24 = (int *)*in_stack_000001a8;
    if (param_24 != in_stack_000001a8) {
      do {
        FUN_2000a5b0();
        FUN_2009df30();
        FUN_2000a3a0();
        FUN_2000a3a0();
        FUN_200a82d0();
        FUN_2000a5b0();
        FUN_2000a5b0();
        FUN_200a9160();
      } while (param_24 != in_stack_000001a8);
    }
    FUN_200a7aa0();
    local_8 = (undefined1 *)FUN_20068dc0();
    FUN_200a8890();
    *(undefined1 **)(extraout_ECX + 0x13c) = local_8 + *(int *)(extraout_ECX + 0x13c);
    if (local_c._1_1_ == '\0') {
      *(undefined4 *)(param_5 + 0x1c) = 0x42c80000;
    }
    else {
      *(undefined4 *)(param_5 + 0x1c) = 0;
    }
    iVar25 = 0;
    param_10 = 0;
    param_11 = *(undefined1 **)(*(int *)(extraout_ECX + 0x120) + iVar14 * 4);
    param_12 = extraout_ECX + 0x11c;
    param_6 = 0.0;
    param_9 = iVar14;
    if (0 < (int)local_8) {
      do {
        if (iVar25 == 0) {
          fVar24 = (float10)FUN_20068d50();
          param_6 = (float)fVar24;
        }
        else {
          fVar24 = (float10)FUN_20068d50();
          if (iVar25 == 1) {
            *(float *)(param_5 + 0x1c) = (float)((fVar24 - (float10)param_6) * (float10)1000.0);
          }
        }
        param_11 = (undefined1 *)(*(int *)(*(int *)(extraout_ECX + 0x120) + iVar14 * 4) + iVar25);
        param_10 = iVar25;
        FUN_2008eef0();
        iVar25 = iVar25 + 1;
      } while (iVar25 < (int)local_8);
    }
    if ((local_c._1_1_ != '\0') && (0.0001 < ABS(*(float *)(param_5 + 0x1c) - 0.0))) {
      fVar1 = *(float *)(param_5 + 0x1c);
      *(undefined4 *)(param_5 + 0x1c) = 0;
      pfVar8 = *(float **)(param_5 + 0x24);
      if (*(float **)(param_5 + 0x24) != *(float **)(param_5 + 0x28)) {
        do {
          pfVar9 = pfVar8 + 10;
          *pfVar8 = (0.0 / fVar1) * *pfVar8;
          pfVar8 = pfVar9;
        } while (pfVar9 != *(float **)(param_5 + 0x28));
      }
    }
    param_11 = *(undefined1 **)(*(int *)(extraout_ECX + 0x120) + iVar14 * 4);
    param_10 = 0;
    FUN_200bd7b0();
    if (param_21 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = param_22 - param_21 >> 2;
    }
    for (; (*(int *)(extraout_ECX + 0xc4) != 0 &&
           (uVar13 < (uint)(*(int *)(extraout_ECX + 200) - *(int *)(extraout_ECX + 0xc4) >> 2)));
        uVar13 = uVar13 + 1) {
      FUN_200a8890();
    }
    FUN_200a98d0();
    param_25 = (byte)local_c;
    FUN_2000a5b0();
    uVar13 = 0xffffffff;
    pcVar17 = s_QUAKE_ORIGIN_20140a40;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      cVar2 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar2 != '\0');
    cVar2 = FUN_2000a6c0();
    if (cVar2 != '\0') {
      pcVar17 = s_QUAKE_ORIGIN_20140a40;
      pcVar18 = param_26;
      for (uVar16 = ~uVar13 - 1 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar13 = ~uVar13 - 1 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *pcVar18 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar18 = pcVar18 + 1;
      }
      FUN_2000a6a0();
    }
    param_32 = param_25;
    FUN_2000a5b0();
    FUN_2000a3a0();
    FUN_200a5450();
    FUN_200a79f0();
    if (param_3 == *(uint *)(extraout_ECX + 0xe8)) {
      FUN_2000a5b0();
      param_5 = 0xffffffff;
    }
    else {
      uVar13 = *(uint *)(param_3 + 0x20);
      FUN_2000a5b0();
      param_5 = uVar13;
    }
    FUN_2000a5b0();
    in_stack_000000fc = 0;
    FUN_2009df30();
    param_46._1_1_ = '\0';
    FUN_2009df30();
    if ((int)param_5 < 0) {
      FUN_200fabac();
      FUN_2008ea00();
      FUN_200a0cc0();
      in_stack_000001d4 = param_12;
      in_stack_000001c8 = param_9;
      in_stack_000001cc = param_10;
      if (param_46._1_1_ == '\0') {
        param_46._0_1_ = '\x01';
        param_46._1_1_ = '\x01';
        puVar11 = (undefined4 *)&stack0x000003fc;
        puVar21 = (undefined4 *)&stack0x000000bc;
        for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar21 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar21 = puVar21 + 1;
        }
LAB_200a4525:
        cVar2 = FUN_200a10a0();
        if (cVar2 != '\0') {
          param_46._0_1_ = '\x01';
          goto LAB_200a4582;
        }
      }
      else if ((char)param_46 != '\0') goto LAB_200a4525;
      param_46._0_1_ = '\0';
      FUN_20093030();
      FUN_200932c0();
    }
    else {
      iVar14 = *(int *)(*(int *)(extraout_ECX + 0xa4) + param_5 * 4);
      if (((*(char *)(iVar14 + 0x74) == '\0') && (*(int *)(iVar14 + 0xc0) != 0)) &&
         ((*(int *)(iVar14 + 0xc4) - *(int *)(iVar14 + 0xc0)) / 0x44 != 0)) {
        iVar25 = *(int *)(*(int *)(extraout_ECX + 0x130) + param_30 * 4);
      }
      else {
        iVar25 = 1;
      }
      param_7 = (undefined1 *)0x0;
      if (0 < iVar25) {
        do {
          param_11 = param_7 + *(int *)(*(int *)(extraout_ECX + 0x120) + param_30 * 4);
          if (*(char *)(iVar14 + 0x74) == '\0') {
            puVar11 = (undefined4 *)(*(int *)(iVar14 + 0xc0) + (int)param_11 * 0x44);
          }
          else {
            puVar11 = (undefined4 *)(iVar14 + 0x78);
          }
          puVar21 = (undefined4 *)&stack0x00000374;
          for (iVar15 = 0x11; iVar15 != 0; iVar15 = iVar15 + -1) {
            *puVar21 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar21 = puVar21 + 1;
          }
          FUN_200a0660();
          in_stack_000001e0 = param_11;
          in_stack_000001d8 = param_9;
          in_stack_000001dc = param_10;
          in_stack_000001e4 = param_12;
          if (param_46._1_1_ == '\0') {
            param_46._0_1_ = '\x01';
            param_46._1_1_ = '\x01';
            puVar11 = (undefined4 *)&stack0x000003b8;
            puVar21 = (undefined4 *)&stack0x000000bc;
            for (iVar15 = 0x11; iVar15 != 0; iVar15 = iVar15 + -1) {
              *puVar21 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar21 = puVar21 + 1;
            }
LAB_200a42a4:
            cVar2 = FUN_200a10a0();
            if (cVar2 == '\0') goto LAB_200a42c6;
            param_46._0_1_ = '\x01';
          }
          else {
            if ((char)param_46 != '\0') goto LAB_200a42a4;
LAB_200a42c6:
            param_46._0_1_ = '\0';
            FUN_20093030();
            FUN_200932c0();
          }
          param_7 = param_7 + 1;
        } while ((int)param_7 < iVar25);
      }
      FUN_2009df30();
      FUN_200a0cc0();
      in_stack_000001cc = param_10;
      in_stack_000001c8 = param_9;
      in_stack_000001d4 = param_12;
      puVar11 = (undefined4 *)&stack0x00000374;
      puVar21 = (undefined4 *)&stack0x0000027c;
      for (iVar14 = 0x11; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar21 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar21 = puVar21 + 1;
      }
      cVar2 = FUN_200a10a0();
      if (cVar2 == '\0') {
        FUN_20093030();
        FUN_200932c0();
      }
      cVar2 = (**(code **)(**(int **)(*(int *)(extraout_ECX + 0xa4) + param_5 * 4) + 4))();
      if (cVar2 != '\0') {
        FUN_200fabac();
        FUN_2008ea00();
      }
      FUN_20092110();
    }
LAB_200a4582:
    for (uVar13 = 0;
        (iVar14 = *(int *)(extraout_ECX + 0xa4), iVar14 != 0 &&
        (uVar13 < (uint)(*(int *)(extraout_ECX + 0xa8) - iVar14 >> 2))); uVar13 = uVar13 + 1) {
      if ((uVar13 != param_5) &&
         (cVar2 = (**(code **)(**(int **)(iVar14 + uVar13 * 4) + 4))(), cVar2 != '\0')) {
        FUN_200fabac();
        FUN_2008ea00();
      }
    }
    for (uVar13 = 0;
        (iVar14 = *(int *)(extraout_ECX + 0xc4), iVar14 != 0 &&
        (uVar13 < (uint)(*(int *)(extraout_ECX + 200) - iVar14 >> 2))); uVar13 = uVar13 + 1) {
      cVar2 = (**(code **)(**(int **)(iVar14 + uVar13 * 4) + 4))();
      if (cVar2 != '\0') {
        FUN_200fabac();
        FUN_2008ea00();
      }
    }
    for (uVar13 = 0;
        (iVar14 = *(int *)(extraout_ECX + 0xb4), iVar14 != 0 &&
        (uVar13 < (uint)(*(int *)(extraout_ECX + 0xb8) - iVar14 >> 2))); uVar13 = uVar13 + 1) {
      cVar2 = (**(code **)(**(int **)(iVar14 + uVar13 * 4) + 4))();
      if (cVar2 != '\0') {
        FUN_200fabac();
        FUN_2008ea00();
      }
    }
    for (uVar13 = 0;
        (iVar14 = *(int *)(extraout_ECX + 0xd4), iVar14 != 0 &&
        (uVar13 < (uint)(*(int *)(extraout_ECX + 0xd8) - iVar14 >> 2))); uVar13 = uVar13 + 1) {
      cVar2 = (**(code **)(**(int **)(iVar14 + uVar13 * 4) + 4))();
      if (cVar2 != '\0') {
        FUN_200fabac();
        FUN_2008ea00();
      }
    }
    FUN_2009d430();
    if (local_1 == '\0') break;
    FUN_2008c730();
    FUN_200f9f75();
    FUN_2008c730();
    FUN_200f9f75();
    in_stack_00000104 = 0;
    in_stack_00000108 = 0;
    in_stack_0000010c = 0;
    FUN_2000a5b0();
  } while( true );
  FUN_2008c730();
  FUN_200f9f75();
  FUN_2008c730();
  FUN_200f9f75();
  in_stack_00000104 = 0;
  in_stack_00000108 = 0;
  in_stack_0000010c = 0;
  FUN_2000a5b0();
LAB_200a4a73:
  if (param_8 != 0) {
    FUN_200fa9ae();
  }
  param_6 = (float)((uint)param_6 & 0xffffff00);
  param_41 = local_c._3_1_;
  uStack000000a5 = local_c._3_1_;
  param_44 = 0;
  FUN_20084e00();
  param_36 = local_c._3_1_;
  uStack00000091 = local_c._3_1_;
  param_39 = 0;
  FUN_20084e00();
  param_7 = *(undefined1 **)(extraout_ECX + 0xc4);
  param_8 = 0;
  if (param_7 != (undefined1 *)*(int *)(extraout_ECX + 200)) {
    bVar22 = local_c._2_1_ == '\0';
    do {
      FUN_200aad80();
      param_14 = local_c._3_1_;
      FUN_2000a5b0();
      uVar13 = 0xffffffff;
      pcVar17 = (char *)&DAT_20157660;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar2 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar2 != '\0');
      uVar13 = ~uVar13 - 1;
      cVar2 = FUN_2000a6c0();
      if (cVar2 != '\0') {
        puVar11 = &DAT_20157660;
        puVar21 = param_15;
        for (uVar16 = uVar13 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar21 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar21 = puVar21 + 1;
        }
        for (uVar16 = uVar13 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar21 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar21 = (undefined4 *)((int)puVar21 + 1);
        }
        *(undefined1 *)((int)param_15 + uVar13) = 0;
        param_16 = uVar13;
      }
      cVar2 = FUN_2008ee10();
      if (cVar2 == '\0') {
        param_32 = local_c._3_1_;
        FUN_2000a5b0();
        uVar13 = 0xffffffff;
        pcVar17 = (char *)&DAT_20157658;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        cVar2 = FUN_2000a6c0();
        if (cVar2 != '\0') {
          puVar11 = &DAT_20157658;
          puVar21 = param_33;
          for (uVar16 = ~uVar13 - 1 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar21 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar21 = puVar21 + 1;
          }
          for (uVar13 = ~uVar13 - 1 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)puVar21 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar21 = (undefined4 *)((int)puVar21 + 1);
          }
          FUN_2000a6a0();
        }
        uVar3 = FUN_2008ee10();
        local_c._0_2_ = CONCAT11(uVar3,(byte)local_c);
        FUN_2000a5b0();
        if (local_c._1_1_ != '\0') goto LAB_200a4d1c;
        param_25 = local_c._3_1_;
        FUN_2000a5b0();
        uVar13 = 0xffffffff;
        pcVar17 = (char *)&DAT_20157650;
        do {
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          cVar2 = *pcVar17;
          pcVar17 = pcVar17 + 1;
        } while (cVar2 != '\0');
        uVar13 = ~uVar13 - 1;
        cVar2 = FUN_2000a6c0();
        if (cVar2 != '\0') {
          pcVar17 = (char *)&DAT_20157650;
          pcVar18 = param_26;
          for (uVar16 = uVar13 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar16 = uVar13 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar18 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar18 = pcVar18 + 1;
          }
          param_26[uVar13] = '\0';
          param_27 = uVar13;
        }
        uVar3 = FUN_2008ee10();
        local_c._0_2_ = CONCAT11(uVar3,(byte)local_c);
        FUN_2000a5b0();
        cVar2 = local_c._1_1_;
        local_c._0_2_ = (ushort)(byte)local_c;
        if (cVar2 != '\0') goto LAB_200a4d1c;
      }
      else {
LAB_200a4d1c:
        local_c._0_2_ = CONCAT11(1,(byte)local_c);
      }
      FUN_2000a5b0();
      if (local_c._1_1_ != '\0') {
        param_6 = (float)CONCAT31(param_6._1_3_,1);
        FUN_200722e0();
      }
      uVar13 = *(uint *)(extraout_ECX + 0x144);
      FUN_200a79f0();
      bVar23 = param_3 != uVar13;
      param_4 = (undefined1 *)CONCAT31(param_4._1_3_,bVar23);
      if (bVar23 != bVar22) {
        FUN_200722e0();
      }
      param_7 = (undefined1 *)((int)param_7 + 4);
      param_8 = param_8 + 1;
    } while (param_7 != (undefined1 *)*(int *)(extraout_ECX + 200));
  }
  if ((*(int *)(extraout_ECX + 0xc4) == 0) ||
     (param_3 = *(int *)(extraout_ECX + 200) - *(int *)(extraout_ECX + 0xc4) >> 2, param_3 == 0)) {
    in_stack_00000110 = 0;
    in_stack_00000114 = 0;
    in_stack_00000118 = 0;
    FUN_20067780();
  }
  else {
    iVar14 = FUN_200b3be0();
    *(int *)(extraout_ECX + 0xe0) = iVar14;
    *(undefined4 *)(extraout_ECX + 0x2c) = *(undefined4 *)(iVar14 + 0x58);
    *(undefined4 *)(extraout_ECX + 0x30) = *(undefined4 *)(iVar14 + 0x5c);
    *(undefined4 *)(extraout_ECX + 0x34) = *(undefined4 *)(iVar14 + 0x60);
    FUN_200802f0();
    *(undefined1 *)(extraout_ECX + 0x44) = *(undefined1 *)(iVar14 + 0x70);
    *(undefined1 *)(extraout_ECX + 0x45) = *(undefined1 *)(iVar14 + 0x71);
    piVar7 = *(int **)(extraout_ECX + 0xc4);
    if (piVar7 != *(int **)(extraout_ECX + 200)) {
      do {
        if (*(int *)(*piVar7 + 0xe8) != 0) {
          FUN_200aac60();
          FUN_200f9f75();
        }
        iVar14 = *piVar7;
        piVar7 = piVar7 + 1;
        *(undefined4 *)(iVar14 + 0xe8) = 0;
      } while (piVar7 != *(int **)(extraout_ECX + 200));
    }
  }
  FUN_20083550();
  FUN_20073ea0();
  FUN_200f9f75();
  param_37 = 0;
  param_40 = 0;
  FUN_200f9f75();
  param_38 = 0;
  FUN_20083550();
  FUN_20073ea0();
  FUN_200f9f75();
  param_42 = 0;
  param_45 = 0;
  FUN_200f9f75();
  if (*(int *)(extraout_ECX + 0xa4) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(extraout_ECX + 0xa8) - *(int *)(extraout_ECX + 0xa4) >> 2;
  }
  local_8 = (undefined1 *)(iVar14 + -1);
  if (-1 < (int)local_8) {
    bVar22 = local_c._2_1_ == '\0';
    do {
      uVar13 = *(uint *)(extraout_ECX + 0x144);
      iVar14 = (int)local_8 * 4;
      FUN_200a79f0();
      bVar23 = param_3 != uVar13;
      param_4 = (undefined1 *)CONCAT31(param_4._1_3_,bVar23);
      if (bVar23 != bVar22) {
        piVar7 = *(int **)(iVar14 + *(int *)(extraout_ECX + 0xa4));
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x10))();
        }
        puVar21 = *(undefined4 **)(extraout_ECX + 0xa8);
        iVar14 = *(int *)(extraout_ECX + 0xa4) + iVar14;
        puVar11 = (undefined4 *)(iVar14 + 4);
        if (puVar11 != puVar21) {
          iVar14 = iVar14 - (int)puVar11;
          do {
            *(undefined4 *)(iVar14 + (int)puVar11) = *puVar11;
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar21);
        }
        *(int *)(extraout_ECX + 0xa8) = *(int *)(extraout_ECX + 0xa8) + -4;
      }
      local_8 = (undefined1 *)((int)local_8 + -1);
    } while (-1 < (int)local_8);
  }
  if (*(int *)(extraout_ECX + 0xc4) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(extraout_ECX + 200) - *(int *)(extraout_ECX + 0xc4) >> 2;
  }
  local_8 = (undefined1 *)(iVar14 + -1);
  if (-1 < (int)local_8) {
    bVar22 = local_c._2_1_ == '\0';
    do {
      uVar13 = *(uint *)(extraout_ECX + 0x144);
      iVar14 = (int)local_8 * 4;
      FUN_200a79f0();
      bVar23 = param_3 != uVar13;
      param_4 = (undefined1 *)CONCAT31(param_4._1_3_,bVar23);
      if (bVar23 != bVar22) {
        piVar7 = *(int **)(iVar14 + *(int *)(extraout_ECX + 0xc4));
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x10))();
        }
        puVar21 = *(undefined4 **)(extraout_ECX + 200);
        iVar14 = *(int *)(extraout_ECX + 0xc4) + iVar14;
        puVar11 = (undefined4 *)(iVar14 + 4);
        if (puVar11 != puVar21) {
          iVar14 = iVar14 - (int)puVar11;
          do {
            *(undefined4 *)(iVar14 + (int)puVar11) = *puVar11;
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar21);
        }
        *(int *)(extraout_ECX + 200) = *(int *)(extraout_ECX + 200) + -4;
      }
      local_8 = (undefined1 *)((int)local_8 + -1);
    } while (-1 < (int)local_8);
  }
  if (*(int *)(extraout_ECX + 0xb4) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(extraout_ECX + 0xb8) - *(int *)(extraout_ECX + 0xb4) >> 2;
  }
  local_8 = (undefined1 *)(iVar14 + -1);
  if (-1 < (int)local_8) {
    bVar22 = local_c._2_1_ == '\0';
    do {
      param_4 = *(undefined1 **)(extraout_ECX + 0x144);
      iVar14 = (int)local_8 * 4;
      FUN_200c18a0();
      if ((param_6 == (float)*(uint *)(extraout_ECX + 0x144)) ||
         (iVar25 = FUN_20023c40(), iVar25 < 0)) {
        piVar7 = (int *)&param_3;
        param_3 = *(uint *)(extraout_ECX + 0x144);
      }
      else {
        piVar7 = (int *)&param_6;
      }
      if (((undefined1 *)*piVar7 != param_4) != bVar22) {
        piVar7 = *(int **)(iVar14 + *(int *)(extraout_ECX + 0xb4));
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x10))();
        }
        puVar21 = *(undefined4 **)(extraout_ECX + 0xb8);
        iVar14 = *(int *)(extraout_ECX + 0xb4) + iVar14;
        puVar11 = (undefined4 *)(iVar14 + 4);
        if (puVar11 != puVar21) {
          iVar14 = iVar14 - (int)puVar11;
          do {
            *(undefined4 *)(iVar14 + (int)puVar11) = *puVar11;
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar21);
        }
        *(int *)(extraout_ECX + 0xb8) = *(int *)(extraout_ECX + 0xb8) + -4;
      }
      local_8 = (undefined1 *)((int)local_8 + -1);
    } while (-1 < (int)local_8);
  }
  if (*(int *)(extraout_ECX + 0xd4) == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(extraout_ECX + 0xd8) - *(int *)(extraout_ECX + 0xd4) >> 2;
  }
  local_8 = (undefined1 *)(iVar14 + -1);
  if (-1 < (int)local_8) {
    bVar22 = local_c._2_1_ == '\0';
    do {
      param_6 = *(float *)(extraout_ECX + 0x144);
      iVar14 = (int)local_8 * 4;
      param_3 = FUN_200a91b0();
      if ((param_3 == *(uint *)(extraout_ECX + 0x144)) || (iVar25 = FUN_20023c40(), iVar25 < 0)) {
        puVar10 = (uint *)&param_4;
        param_4 = *(undefined1 **)(extraout_ECX + 0x144);
      }
      else {
        puVar10 = &param_3;
      }
      if (((float)*puVar10 != param_6) != bVar22) {
        piVar7 = *(int **)(iVar14 + *(int *)(extraout_ECX + 0xd4));
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 0x10))();
        }
        puVar21 = *(undefined4 **)(extraout_ECX + 0xd8);
        iVar14 = *(int *)(extraout_ECX + 0xd4) + iVar14;
        puVar11 = (undefined4 *)(iVar14 + 4);
        if (puVar11 != puVar21) {
          iVar14 = iVar14 - (int)puVar11;
          do {
            *(undefined4 *)(iVar14 + (int)puVar11) = *puVar11;
            puVar11 = puVar11 + 1;
          } while (puVar11 != puVar21);
        }
        *(int *)(extraout_ECX + 0xd8) = *(int *)(extraout_ECX + 0xd8) + -4;
      }
      local_8 = (undefined1 *)((int)local_8 + -1);
    } while (-1 < (int)local_8);
  }
  FUN_200a6820();
  if (param_1._3_1_ == '\0') {
    FUN_200a23a0();
  }
  FUN_200f9f75();
  param_21 = 0;
  param_22 = 0;
  param_23 = 0;
  FUN_200f9f75();
  in_stack_00000170 = 0;
  in_stack_00000174 = 0;
  in_stack_00000178 = 0;
  FUN_200f9f75();
  in_stack_00000160 = 0;
  in_stack_00000164 = 0;
  in_stack_00000168 = 0;
  FUN_200f9f75();
  in_stack_00000150 = 0;
  in_stack_00000154 = 0;
  in_stack_00000158 = 0;
  FUN_200f9f75();
  in_stack_00000140 = 0;
  in_stack_00000144 = 0;
  in_stack_00000148 = 0;
  FUN_200f9f75();
  in_stack_00000130 = 0;
  in_stack_00000134 = 0;
  in_stack_00000138 = 0;
  FUN_200f9f75();
  ExceptionList = in_stack_00001a48;
  return 1;
}

