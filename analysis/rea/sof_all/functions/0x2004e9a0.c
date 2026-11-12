// rea decompile_all
// name: FUN_2004e9a0
// address: 0x2004e9a0
// body: available
// range: 0x2004e9a0-0x2004eca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004e9a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  float10 fVar6;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000020;
  undefined1 uStack00000024;
  undefined1 uStack00000025;
  undefined1 uStack00000026;
  undefined1 uStack00000027;
  undefined4 in_stack_00000028;
  undefined2 in_stack_0000002c;
  int in_stack_00004028;
  uint in_stack_00004034;
  uint in_stack_00004038;
  undefined4 *in_stack_0000403c;
  int in_stack_00004040;
  char *apcStack_3c [5];
  int iStack_28;
  undefined4 *puStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  FUN_200fa720();
  if ((0.0 < *(float *)(DAT_20367eb0 + 0x18)) && (*(float *)(DAT_20367eb0 + 0x18) < 1.0)) {
    uStack_1c = 0x2004e9e3;
    fVar6 = (float10)flrand();
    if ((float10)*(float *)(DAT_20367eb0 + 0x18) < fVar6) {
      return;
    }
  }
  if (in_stack_00004040 == 0) {
    iVar1 = (in_stack_00004034 ^ 1) * 0x10018;
    uVar3 = *(uint *)(&DAT_2037ff14 + (in_stack_00004034 ^ 1) * 0x10018);
    *(uint *)(&DAT_2037ff14 + iVar1) = uVar3 + 1;
    puVar4 = (undefined4 *)(&DAT_2036ff00 + (uVar3 & 3) * 0x4004 + iVar1);
    for (uVar2 = in_stack_00004038 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *in_stack_0000403c;
      in_stack_0000403c = in_stack_0000403c + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = in_stack_00004038 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)in_stack_0000403c;
      in_stack_0000403c = (undefined4 *)((int)in_stack_0000403c + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(uint *)((int)(&DAT_2036ff00 + (uVar3 & 3) * 0x4004 + iVar1) + 0x4000) = in_stack_00004038;
    return;
  }
  if (in_stack_00004040 == 1) {
    in_stack_00000020 = (&DAT_20390118)[in_stack_00004034];
  }
  else if (in_stack_00004040 == 2) {
    in_stack_00000020 = (&DAT_20390118)[in_stack_00004034];
  }
  else if (in_stack_00004040 == 3) {
    in_stack_00000020 = (&DAT_20390110)[in_stack_00004034];
  }
  else {
    if (in_stack_00004040 != 4) {
      uStack_1c = 0x2004eaee;
      Com_Error();
      goto LAB_2004eaf5;
    }
    in_stack_00000020 = (&DAT_20390110)[in_stack_00004034];
  }
  if (in_stack_00000020 == 0) {
    return;
  }
LAB_2004eaf5:
  uStack_1c = 0x2004eb07;
  FUN_2004dc90();
  iStack_28 = in_stack_00000020;
  if (((DAT_20390164 == 0) || (*(char *)(DAT_20390164 + 4) == '\0')) ||
     ((in_stack_00004040 != 2 && (in_stack_00004040 != 1)))) {
    uStack_1c = 0;
    apcStack_3c[4] = (char *)0x2004ebd2;
    puStack_24 = in_stack_0000403c;
    uStack_20 = in_stack_00004038;
    iVar1 = Ordinal_20();
  }
  else {
    in_stack_00000028 = in_stack_00000014;
    in_stack_0000002c = in_stack_00000010._2_2_;
    uStack00000024 = 0;
    uStack00000025 = 0;
    uStack00000026 = 0;
    uStack00000027 = 1;
    puVar4 = (undefined4 *)&stack0x0000002e;
    for (uVar3 = in_stack_00004038 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *in_stack_0000403c;
      in_stack_0000403c = in_stack_0000403c + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = in_stack_00004038 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)in_stack_0000403c;
      in_stack_0000403c = (undefined4 *)((int)in_stack_0000403c + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    uStack_20 = in_stack_00004038 + 10;
    uStack_1c = 0;
    puStack_24 = (undefined4 *)&stack0x00000024;
    apcStack_3c[4] = (char *)0x2004ebab;
    iVar1 = Ordinal_20();
    in_stack_00004040 = in_stack_00004028;
  }
  if (iVar1 == -1) {
    apcStack_3c[4] = (char *)0x2004ebe0;
    iVar1 = Ordinal_111();
    if ((iVar1 != 0x2733) &&
       ((iVar1 != 0x2741 || ((in_stack_00004040 != 1 && (in_stack_00004040 != 4)))))) {
      if ((*(float *)(DAT_20249618 + 0x18) == 0.0) && (DAT_203a1f20 == 0)) {
        if (iVar1 != 0x2741) {
          apcStack_3c[4] = (char *)0x2004ec6c;
          apcStack_3c[4] = (char *)FUN_2004f5b0();
          apcStack_3c[3] = s_NET_SendPacket_ERROR___s_20136df4;
          apcStack_3c[2] = (char *)0x1;
          apcStack_3c[1] = (char *)0x2004ec79;
          Com_Error();
          return;
        }
        puVar4 = (undefined4 *)&stack0x00004028;
        ppcVar5 = apcStack_3c;
        for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppcVar5 = (char *)*puVar4;
          puVar4 = puVar4 + 1;
          ppcVar5 = ppcVar5 + 1;
        }
        apcStack_3c[4] = (char *)FUN_2004def0();
        apcStack_3c[3] = (char *)0x2004ec4e;
        apcStack_3c[3] = (char *)FUN_2004f5b0();
        apcStack_3c[2] = s_NET_SendPacket_Warning___s____s_20136e10;
        apcStack_3c[1] = (char *)0x2004ec59;
        Com_DPrintf();
        return;
      }
      apcStack_3c[4] = (char *)0x2004ec8c;
      apcStack_3c[4] = (char *)FUN_2004f5b0();
      apcStack_3c[3] = s_NET_SendPacket_ERROR___s_20136dd8;
      apcStack_3c[2] = (char *)0x2004ec97;
      Com_Printf();
    }
  }
  return;
}

