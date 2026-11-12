// rea decompile_all
// name: FUN_500bd570
// address: 0x500bd570
// body: available
// range: 0x500bd570-0x500bd6ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bd570(int *param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  char *_Str1;
  int iVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  int unaff_EBP;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  int local_4;
  
  local_4 = 0;
  _Str1 = (char *)param_1[0x6d];
  if (_Str1 == (char *)0x0) {
    (*DAT_5015ca24)(s_ED_CallSpawn__NULL_classname_5014fedc);
    return;
  }
  if (*_Str1 == '_') {
    FUN_500c3880(param_1);
    return;
  }
  if (((*(float *)(DAT_5015c8b0 + 0x18) != 0.0) &&
      (iVar3 = _strncmp(_Str1,s_misc__5014fed4,5), iVar3 == 0)) &&
     ((*(byte *)(param_1 + 0x6e) & 0x40) != 0)) {
    FUN_500c3880(param_1);
    return;
  }
  local_4 = FUN_5006a3e0(&DAT_5015c7b8,(byte *)param_1[0x6d]);
  if (local_4 == 0) {
    ppuVar5 = &PTR_PTR_5014f380;
    puVar7 = (undefined4 *)PTR_PTR_5014f380;
    while (puVar7 != (undefined4 *)0x0) {
      pbVar4 = (byte *)*puVar7;
      if (pbVar4 != (byte *)0x0) {
        pbVar6 = (byte *)param_1[0x6d];
LAB_500bd658:
        do {
          bVar2 = *pbVar4;
          bVar8 = bVar2 < *pbVar6;
          if (bVar2 == *pbVar6) {
            if (bVar2 != 0) {
              bVar2 = pbVar4[1];
              bVar8 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_500bd67c;
              pbVar4 = pbVar4 + 2;
              pbVar6 = pbVar6 + 2;
              if (bVar2 != 0) goto LAB_500bd658;
            }
            iVar3 = 0;
          }
          else {
LAB_500bd67c:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          }
          if (iVar3 == 0) {
            (*(code *)puVar7[1])(param_1);
            return;
          }
          pbVar4 = (byte *)puVar7[2];
          puVar7 = puVar7 + 2;
          pbVar6 = (byte *)param_1[0x6d];
        } while (pbVar4 != (byte *)0x0);
      }
      ppuVar1 = ppuVar5 + 1;
      ppuVar5 = ppuVar5 + 1;
      puVar7 = (undefined4 *)*ppuVar1;
    }
    (*DAT_5015ca24)(s__s_doesn_t_have_a_spawn_function_5014feb0,param_1[0x6d]);
    FUN_500c3880(param_1);
  }
  else {
    iVar3 = (**(code **)(*DAT_5015c4d8 + 0x14))(param_1,&local_4);
    if (iVar3 != 0) {
      FUN_500aa030((char *)param_1,unaff_EBP);
      return;
    }
  }
  return;
}

