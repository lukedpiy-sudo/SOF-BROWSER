// rea decompile_all
// name: FUN_2004d640
// address: 0x2004d640
// body: available
// range: 0x2004d640-0x2004d7c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004d640(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  char *apcStack_34 [3];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  uStack_1c = param_2;
  uStack_20 = 0x2004d651;
  FUN_2001e220();
  uStack_20 = param_2;
  uStack_24 = 0x2004d657;
  uVar1 = FUN_2001e310();
  uStack_24 = param_2;
  uStack_28 = 0x2004d65f;
  uVar2 = FUN_2001e310();
  if (*(int *)(param_1 + 4) == 1) {
    uStack_1c = param_2;
    uStack_20 = 0x2004d674;
    FUN_2001e290();
  }
  uVar4 = uVar1 & 0x7fffffff;
  uVar5 = uVar2 >> 0x1f;
  uVar2 = uVar2 & 0x7fffffff;
  if (*(float *)(DAT_2036bee8 + 0x18) != 0.0) {
    uStack_20 = uVar2;
    uStack_1c = uVar5;
    if ((int)uVar1 < 0) {
      uStack_24 = *(uint *)(param_1 + 0x38) ^ 1;
      apcStack_34[2] = *(char **)(param_2 + 0xc);
      apcStack_34[1] = s_recv__4i___s__i_reliable__i_ack__201369e0;
      apcStack_34[0] = (char *)0x2004d6ce;
      uStack_28 = uVar4;
      Com_Printf();
    }
    else {
      uStack_28 = *(uint *)(param_2 + 0xc);
      apcStack_34[2] = s_recv__4i___s__i_ack__i_rack__i_201369c0;
      apcStack_34[1] = (char *)0x2004d6e6;
      uStack_24 = uVar4;
      Com_Printf();
    }
  }
  uStack_1c = *(uint *)(param_1 + 0x2c);
  if (uStack_1c < uVar4) {
    uStack_20 = (uVar4 - uStack_1c) + -1;
    *(uint *)(param_1 + 8) = uStack_20;
    if ((0 < (int)uStack_20) && (*(float *)(DAT_20367eb4 + 0x18) != 0.0)) {
      puVar6 = (undefined4 *)(param_1 + 0x14);
      ppcVar7 = apcStack_34;
      uStack_1c = uVar4;
      for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar7 = (char *)*puVar6;
        puVar6 = puVar6 + 1;
        ppcVar7 = ppcVar7 + 1;
      }
      uStack_24 = FUN_2004def0();
      uStack_28 = (uint)s__s_Dropped__i_packets_at__i_2013697c;
      apcStack_34[2] = (char *)0x2004d781;
      Com_Printf();
    }
    if (uVar5 == *(uint *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x404c) = 0;
    }
    *(uint *)(param_1 + 0x2c) = uVar4;
    *(uint *)(param_1 + 0x30) = uVar2;
    *(uint *)(param_1 + 0x34) = uVar5;
    if ((int)uVar1 < 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) ^ 1;
    }
    *(undefined4 *)(param_1 + 0xc) = DAT_20390d38;
    return 1;
  }
  if (*(float *)(DAT_20367eb4 + 0x18) != 0.0) {
    puVar6 = (undefined4 *)(param_1 + 0x14);
    ppcVar7 = apcStack_34;
    uStack_20 = uVar4;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar7 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      ppcVar7 = ppcVar7 + 1;
    }
    uStack_24 = FUN_2004def0();
    uStack_28 = (uint)s__s_Out_of_order_packet__i_at__i_2013699c;
    apcStack_34[2] = (char *)0x2004d72d;
    Com_Printf();
  }
  return 0;
}

