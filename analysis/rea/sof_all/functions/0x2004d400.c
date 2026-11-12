// rea decompile_all
// name: FUN_2004d400
// address: 0x2004d400
// body: available
// range: 0x2004d400-0x2004d631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004d400(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_stack_00004018;
  int in_stack_0000401c;
  
  FUN_200fa720();
  if (*(char *)((int)in_stack_00004018 + 0x49) != '\0') {
    puVar6 = in_stack_00004018 + 5;
    puVar7 = (undefined4 *)&stack0xffffffdc;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *in_stack_00004018 = 1;
    uVar2 = FUN_2004def0();
    Com_Printf(s__s_Outgoing_message_overflow_2013695c,uVar2);
    return;
  }
  bVar1 = false;
  if (((int)in_stack_00004018[0x11] < (int)in_stack_00004018[0xc]) &&
     (in_stack_00004018[0xd] != in_stack_00004018[0x10])) {
    bVar1 = true;
  }
  if (in_stack_00004018[0x1013] == 0) {
    if (in_stack_00004018[0x15] != 0) {
      bVar1 = true;
    }
    uVar5 = in_stack_00004018[0x15];
    if (uVar5 != 0) {
      puVar6 = in_stack_00004018 + 0x17;
      puVar7 = in_stack_00004018 + 0x1014;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      uVar2 = in_stack_00004018[0x15];
      in_stack_00004018[0x15] = 0;
      in_stack_00004018[0x1013] = uVar2;
      in_stack_00004018[0x10] = in_stack_00004018[0x10] ^ 1;
    }
  }
  FUN_2001e700();
  iVar3 = in_stack_00004018[0xe];
  uVar5 = in_stack_00004018[0xb];
  in_stack_00004018[0xf] = in_stack_00004018[0xf] + 1;
  in_stack_00004018[4] = DAT_20390d38;
  FUN_2001cbf0();
  FUN_2001cbf0(&stack0x00000000,iVar3 << 0x1f | uVar5 & 0x7fffffff);
  if (in_stack_00004018[1] == 0) {
    __ftol();
    FUN_2001cb70();
  }
  if (bVar1) {
    FUN_2001e7b0();
    in_stack_00004018[0x11] = in_stack_00004018[0xf];
  }
  if (param_2 - param_3 < in_stack_0000401c) {
    Com_Printf();
  }
  else {
    FUN_2001e7b0();
  }
  uVar2 = in_stack_00004018[1];
  puVar6 = in_stack_00004018 + 5;
  puVar7 = (undefined4 *)&stack0xffffffdc;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_2004e9a0(uVar2,param_3,param_1);
  if (*(float *)(DAT_2036bee8 + 0x18) != 0.0) {
    if (bVar1) {
      Com_Printf(s_send__4i___s__i_reliable__i_ack__20136908);
      return;
    }
    Com_Printf();
  }
  return;
}

