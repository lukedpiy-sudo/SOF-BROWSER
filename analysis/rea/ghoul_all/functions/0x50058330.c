// rea decompile_all
// name: FUN_50058330
// address: 0x50058330
// body: available
// range: 0x50058330-0x50058ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_50058330(undefined1 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8,
                 undefined1 param_9,undefined4 *param_10,undefined4 *param_11,undefined4 param_12,
                 undefined1 param_13,undefined4 *param_14,undefined4 *param_15,undefined4 param_16)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 *extraout_ECX;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int unaff_retaddr;
  undefined4 uStack00000064;
  int iStack000000a8;
  undefined4 *in_stack_000000b0;
  undefined4 *in_stack_000000b4;
  undefined4 *in_stack_000000c0;
  undefined4 *in_stack_000000c4;
  undefined4 uStack0000010c;
  int iStack00000110;
  undefined4 *in_stack_00000118;
  undefined4 *in_stack_0000011c;
  undefined4 *in_stack_00000128;
  undefined4 *in_stack_0000012c;
  undefined4 uStack00000174;
  void *in_stack_000104a0;
  int in_stack_000104b0;
  undefined4 uStack_c;
  undefined1 *local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  local_8 = &LAB_50113f3d;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_501074f0();
  iVar11 = 0;
  iVar10 = 0;
  if (*(int *)(extraout_ECX + 0x10) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*(int *)(extraout_ECX + 0x14) - *(int *)(extraout_ECX + 0x10)) / 0x44;
  }
  uVar3 = 0;
  puVar12 = (undefined4 *)&stack0x00000178;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  if ((in_stack_000104b0 < 0) || (iVar8 <= in_stack_000104b0)) {
LAB_50058caf:
    ExceptionList = in_stack_000104a0;
    return uVar3 & 0xffffff00;
  }
  local_8 = extraout_ECX;
  FUN_500fe2b0();
  uVar3 = (*DAT_5015cb64)();
  if (uVar3 == 0xffffffff) goto LAB_50058caf;
  if ((int)uVar3 < 0x10001) {
    if ((int)uVar3 < 1) goto LAB_5005845d;
  }
  else {
    uVar3 = 0x10000;
  }
  do {
    pcVar1 = (char *)(unaff_retaddr + iVar11);
    iVar11 = iVar11 + 1;
    if (*pcVar1 == '#') {
      do {
        pcVar1 = (char *)(unaff_retaddr + iVar11);
        iVar11 = iVar11 + 1;
      } while (*pcVar1 != '\n');
    }
    else {
      (&stack0x000004a0)[iVar10] = *pcVar1;
      iVar10 = iVar10 + 1;
    }
  } while (iVar11 < (int)uVar3);
LAB_5005845d:
  (&stack0x000004a0)[iVar10] = 0;
  iVar10 = -(int)&stack0x000004a0;
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_userinfo__50143078);
  iVar11 = 0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004a9 + iVar10));
  if (cVar2 != '\r') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004a9 + iVar10));
    do {
      (&stack0x00000178)[iVar11] = cVar2;
      cVar2 = puVar9[1];
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\r');
  }
  (&stack0x00000178)[iVar11] = 0;
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_accuracy__5014306c);
  iVar11 = 0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004a9 + iVar10));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004a9 + iVar10));
    do {
      (&stack0x00000068)[iVar11] = cVar2;
      cVar2 = puVar9[1];
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[iVar11] = 0;
  FUN_50107ece(&stack0x00000068,&stack0x00000068,(int *)0x0);
  __ftol();
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,&DAT_50143064);
  puVar7 = (undefined *)0x0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004a4 + -(int)&stack0x000004a0));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004a4 + -(int)&stack0x000004a0));
    do {
      (&stack0x00000068)[(int)puVar7] = cVar2;
      cVar2 = puVar9[1];
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[(int)puVar7] = 0;
  FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
  __ftol();
  iVar10 = -(int)&stack0x000004a0;
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_turning_speed__50143054);
  puVar7 = (undefined *)0x0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004ae + iVar10));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004ae + iVar10));
    do {
      (&stack0x00000068)[(int)puVar7] = cVar2;
      cVar2 = puVar9[1];
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[(int)puVar7] = 0;
  FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
  __ftol();
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_view_distance__50143044);
  puVar7 = (undefined *)0x0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004ae + iVar10));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004ae + iVar10));
    do {
      (&stack0x00000068)[(int)puVar7] = cVar2;
      cVar2 = puVar9[1];
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[(int)puVar7] = 0;
  FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
  __ftol();
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_general_intelligence__5014302c);
  puVar7 = (undefined *)0x0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004b5 + -(int)&stack0x000004a0));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004b5 + -(int)&stack0x000004a0));
    do {
      (&stack0x00000068)[(int)puVar7] = cVar2;
      cVar2 = puVar9[1];
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[(int)puVar7] = 0;
  FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
  __ftol();
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_canchat__50143020);
  puVar7 = (undefined *)0x0;
  cVar2 = *(char *)((int)puVar4 + (int)(&stack0x000004a8 + -(int)&stack0x000004a0));
  if (cVar2 != '\n') {
    puVar9 = (undefined1 *)((int)puVar4 + (int)(&stack0x000004a8 + -(int)&stack0x000004a0));
    do {
      (&stack0x00000068)[(int)puVar7] = cVar2;
      cVar2 = puVar9[1];
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (cVar2 != '\n');
  }
  (&stack0x00000068)[(int)puVar7] = 0;
  FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
  __ftol();
  puVar4 = FUN_50107030((uint *)&stack0x000004a0,s_chatfreq__50143014);
  if (puVar4 != (uint *)0x0) {
    iVar11 = 0;
    iVar10 = (int)puVar4 + (9 - (int)&stack0x000004a0);
    puVar7 = (undefined *)CONCAT31((int3)((uint)iVar10 >> 8),(&stack0x000004a9)[iVar10 + -9]);
    if ((&stack0x000004a9)[iVar10 + -9] != '\n') {
      iVar10 = (int)puVar4 + 9;
      do {
        (&stack0x00000068)[iVar11] = (char)puVar7;
        pcVar1 = (char *)(iVar10 + 1);
        puVar7 = (undefined *)CONCAT31((int3)((uint)puVar7 >> 8),*pcVar1);
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 1;
      } while (*pcVar1 != '\n');
    }
    (&stack0x00000068)[iVar11] = 0;
    FUN_50107ece(puVar7,&stack0x00000068,(int *)0x0);
    __ftol();
  }
  puVar9 = local_8;
  FUN_5005b350(local_8 + 0x1c,*(char **)(local_8 + 0x24),1,&stack0x00000178);
  param_2 = (undefined4 *)0x0;
  param_1 = uStack_c._2_1_;
  param_3 = (undefined4 *)0x0;
  param_4 = 0;
  param_6 = (undefined4 *)0x0;
  param_5 = uStack_c._2_1_;
  param_7 = (undefined4 *)0x0;
  param_8 = 0;
  param_10 = (undefined4 *)0x0;
  param_9 = uStack_c._2_1_;
  param_11 = (undefined4 *)0x0;
  param_12 = 0;
  param_14 = (undefined4 *)0x0;
  param_13 = uStack_c._2_1_;
  param_15 = (undefined4 *)0x0;
  param_16 = 0;
  FUN_5005a370(&stack0x00000044,(undefined1 *)((int)&uStack_c + 2));
  FUN_5005a370(&stack0x00000054,(undefined1 *)((int)&uStack_c + 3));
  uStack00000064 = 0;
  FUN_50057440(&param_1,(uint *)&stack0x000004a0,uVar3);
  local_8 = &stack0x000000ac;
  iStack000000a8 = in_stack_000104b0;
  FUN_5005a900(&stack0x000000ac,&param_1);
  FUN_5005a900(&stack0x000000bc,&param_5);
  FUN_5005a900(&stack0x000000cc,&param_9);
  FUN_5005a900(&stack0x000000dc,&param_13);
  FUN_5005a900(&stack0x000000ec,&stack0x00000044);
  FUN_5005a900(&stack0x000000fc,&stack0x00000054);
  uStack0000010c = uStack00000064;
  iStack00000110 = iStack000000a8;
  local_8 = &stack0x00000114;
  FUN_5005a900(&stack0x00000114,&stack0x000000ac);
  FUN_5005a900(&stack0x00000124,&stack0x000000bc);
  FUN_5005a900(&stack0x00000134,&stack0x000000cc);
  FUN_5005a900(&stack0x00000144,&stack0x000000dc);
  FUN_5005a900(&stack0x00000154,&stack0x000000ec);
  FUN_5005a900(&stack0x00000164,&stack0x000000fc);
  uStack00000174 = uStack0000010c;
  FUN_5005aa30(puVar9 + 0x2c,&local_8,&stack0x00000110);
  local_8 = &stack0x00000114;
  FUN_5005a970(&stack0x00000114,in_stack_00000118,in_stack_0000011c);
  FUN_5005a970(&stack0x00000124,in_stack_00000128,in_stack_0000012c);
  FUN_5005a390((int)&stack0x00000134);
  FUN_5005a390((int)&stack0x00000144);
  FUN_5005a390((int)&stack0x00000154);
  FUN_5005a390((int)&stack0x00000164);
  FUN_5006af10((int)&stack0x00000164);
  FUN_5006af10((int)&stack0x00000154);
  FUN_5006af10((int)&stack0x00000144);
  FUN_5006af10((int)&stack0x00000134);
  FUN_5006af10((int)&stack0x00000124);
  FUN_5006af10((int)&stack0x00000114);
  local_8 = &stack0x000000ac;
  FUN_5005a970(&stack0x000000ac,in_stack_000000b0,in_stack_000000b4);
  FUN_5005a970(&stack0x000000bc,in_stack_000000c0,in_stack_000000c4);
  FUN_5005a390((int)&stack0x000000cc);
  FUN_5005a390((int)&stack0x000000dc);
  FUN_5005a390((int)&stack0x000000ec);
  FUN_5005a390((int)&stack0x000000fc);
  FUN_5006af10((int)&stack0x000000fc);
  FUN_5006af10((int)&stack0x000000ec);
  FUN_5006af10((int)&stack0x000000dc);
  FUN_5006af10((int)&stack0x000000cc);
  FUN_5006af10((int)&stack0x000000bc);
  FUN_5006af10((int)&stack0x000000ac);
  (*DAT_5015cb68)();
  FUN_5005a970(&param_1,param_2,param_3);
  FUN_5005a970(&param_5,param_6,param_7);
  FUN_5005a970(&param_9,param_10,param_11);
  FUN_5005a970(&param_13,param_14,param_15);
  FUN_5005a390((int)&stack0x00000044);
  FUN_5005a390((int)&stack0x00000054);
  FUN_5006af10((int)&stack0x00000054);
  FUN_5006af10((int)&stack0x00000044);
  FUN_5006af10((int)&param_13);
  FUN_5006af10((int)&param_9);
  FUN_5006af10((int)&param_5);
  uVar5 = FUN_5006af10((int)&param_1);
  ExceptionList = in_stack_000104a0;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

