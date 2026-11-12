// rea decompile_all
// name: FUN_20052a10
// address: 0x20052a10
// body: available
// range: 0x20052a10-0x20052c85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20052a10(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  char acStack_70 [8];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  undefined1 local_38 [56];
  
  fVar3 = DAT_20390234;
  fVar2 = DAT_20390230;
  fVar1 = DAT_2039022c;
  local_94 = DAT_20390220;
  local_90 = DAT_20390224;
  local_8c = DAT_20390228;
  FUN_20052620(param_1);
  local_a0 = DAT_20390220;
  local_9c = DAT_20390224;
  local_88 = DAT_2039022c;
  local_98 = DAT_20390228;
  local_84 = DAT_20390230;
  local_ac = local_94;
  local_80 = DAT_20390234;
  local_a8 = local_90;
  local_a4 = local_8c + 18.0;
  puVar4 = (undefined4 *)
           (**(code **)(DAT_20390290 + 0xf0))
                     (local_38,&local_ac,DAT_20390290 + 0xcc,DAT_20390290 + 0xd8,&local_ac);
  pcVar6 = acStack_70;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pcVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar6 = pcVar6 + 4;
  }
  if (acStack_70[0] == '\0') {
    DAT_20390220 = local_ac;
    DAT_20390224 = local_a8;
    DAT_20390228 = local_a4;
    DAT_2039022c = fVar1;
    DAT_20390230 = fVar2;
    DAT_20390234 = fVar3;
    FUN_20052620(param_1);
    fStack_7c = DAT_20390220;
    fStack_78 = DAT_20390224;
    fStack_74 = DAT_20390228 - 18.0;
    puVar4 = (undefined4 *)
             (**(code **)(DAT_20390290 + 0xf0))
                       (local_38,&DAT_20390220,DAT_20390290 + 0xcc,DAT_20390290 + 0xd8,&fStack_7c);
    pcVar6 = acStack_70;
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar6 = pcVar6 + 4;
    }
    if (acStack_70[0] == '\0') {
      DAT_20390220 = fStack_68;
      DAT_20390224 = fStack_64;
      DAT_20390228 = fStack_60;
    }
    if (((DAT_20390220 - local_ac) * fVar1 +
         (DAT_20390224 - local_a8) * fVar2 + (DAT_20390228 - local_a4) * fVar3 <
         (local_a0 - local_94) * fVar1 +
         (local_9c - local_90) * fVar2 + fVar3 * (local_98 - local_8c)) || (fStack_54 < 0.7)) {
      DAT_20390220 = local_a0;
      DAT_20390224 = local_9c;
      DAT_20390228 = local_98;
      DAT_2039022c = local_88;
      DAT_20390230 = local_84;
      DAT_20390234 = local_80;
    }
  }
  return;
}

