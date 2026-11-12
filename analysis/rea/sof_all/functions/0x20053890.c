// rea decompile_all
// name: FUN_20053890
// address: 0x20053890
// body: available
// range: 0x20053890-0x20053a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20053890(void)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float afStack_70 [11];
  uint uStack_44;
  undefined1 local_38 [56];
  
  if (*(char *)(DAT_20390290 + 0x11) == '\0') {
    DAT_20390288 = 0;
    local_7c = DAT_20390238;
    local_78 = DAT_2039023c;
    local_74 = 0.0;
    VectorNormalize(&local_7c);
    local_88 = DAT_20390220 + local_7c;
    local_84 = DAT_20390224 + local_78;
    local_80 = DAT_20390228 + local_74;
    pfVar1 = (float *)(**(code **)(DAT_20390290 + 0xf0))
                                (local_38,&DAT_20390220,DAT_20390290 + 0xcc,DAT_20390290 + 0xd8,
                                 &local_88);
    pfVar4 = afStack_70;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar4 = pfVar4 + 1;
    }
    if ((afStack_70[1] < 1.0) && ((uStack_44 & 0x20000000) != 0)) {
      DAT_20390288 = 1;
    }
    if (*(int *)(DAT_20390290 + 0xec) == 2) {
      local_88 = local_7c * 30.0 + DAT_20390220;
      local_84 = local_78 * 30.0 + DAT_20390224;
      local_80 = local_74 * 30.0 + DAT_20390228 + 4.0;
      uVar2 = (**(code **)(DAT_20390290 + 0xf4))(&local_88);
      if ((uVar2 & 1) != 0) {
        local_80 = local_80 + 16.0;
        iVar3 = (**(code **)(DAT_20390290 + 0xf4))(&local_88);
        if (iVar3 == 0) {
          DAT_2039022c = DAT_20390238 * 200.0;
          DAT_20390234 = 0x43af0000;
          DAT_20390230 = DAT_2039023c * 200.0;
          *(byte *)(DAT_20390290 + 0x10) = *(byte *)(DAT_20390290 + 0x10) | 8;
          *(undefined1 *)(DAT_20390290 + 0x11) = 0xff;
        }
      }
    }
  }
  return;
}

