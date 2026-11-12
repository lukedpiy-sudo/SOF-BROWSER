// rea decompile_all
// name: FUN_500fe510
// address: 0x500fe510
// body: available
// range: 0x500fe510-0x500fe6ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500fe510(byte *param_1,uint *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_200 [512];
  
  puVar3 = FUN_50107030(param_2,&DAT_501557dc);
  if ((puVar3 != (uint *)0x0) ||
     (puVar3 = FUN_50107030(param_3,&DAT_501557dc), puVar3 != (uint *)0x0)) {
    FUN_500adb20((byte *)s_Can_t_use_keys_or_values_with_a___501557e8);
    return;
  }
  puVar3 = FUN_50107030(param_2,&DAT_501557e0);
  if (puVar3 != (uint *)0x0) {
    FUN_500adb20((byte *)s_Can_t_use_keys_or_values_with_a_s_50155884);
    return;
  }
  puVar3 = FUN_50107030(param_2,&DAT_501557e4);
  if ((puVar3 != (uint *)0x0) ||
     (puVar3 = FUN_50107030(param_3,&DAT_501557e4), puVar3 != (uint *)0x0)) {
    FUN_500adb20((byte *)s_Can_t_use_keys_or_values_with_a___5015580c);
    return;
  }
  uVar4 = 0xffffffff;
  puVar3 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar6 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((char)uVar6 != '\0');
  if (~uVar4 - 1 < 0x40) {
    uVar4 = 0xffffffff;
    puVar3 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      uVar6 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar6 != '\0');
    if (~uVar4 - 1 < 0x40) {
      FUN_500fe400(param_1,param_2);
      if (param_3 == (uint *)0x0) {
        return;
      }
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        uVar4 = *param_3;
        param_3 = (uint *)((int)param_3 + 1);
      } while ((char)uVar4 != '\0');
      if (iVar5 == -2) {
        return;
      }
      FUN_500fe2b0();
      uVar4 = 0xffffffff;
      pbVar7 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      uVar6 = 0xffffffff;
      pbVar7 = local_200;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      if (0x200 < ~uVar4 + (~uVar6 - 2)) {
        FUN_500adb20((byte *)s_Info_string_length_exceeded_5015585c);
        return;
      }
      uVar4 = 0xffffffff;
      pbVar7 = param_1;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
      pbVar8 = param_1 + (~uVar4 - 1);
      pbVar7 = local_200;
      while (local_200[0] != 0) {
        *pbVar8 = local_200[0];
        pbVar1 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
        local_200[0] = *pbVar1;
      }
      *pbVar8 = 0;
      return;
    }
  }
  FUN_500adb20((byte *)s_Keys_and_values_must_be_<_64_cha_50155830);
  return;
}

