// rea decompile_all
// name: FUN_20054000
// address: 0x20054000
// body: available
// range: 0x20054000-0x2005425d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20054000(void)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char acStack_70 [56];
  undefined1 local_38 [56];
  
  DAT_20390290[0x33] = -0x3e800000;
  DAT_20390290[0x34] = -0x3e800000;
  DAT_20390290[0x36] = 0x41800000;
  DAT_20390290[0x37] = 0x41800000;
  if (*DAT_20390290 == 4) {
    DAT_20390290[0x35] = 0;
    DAT_20390290[0x38] = 0x41800000;
    DAT_20390290[0x32] = 0x41000000;
    return;
  }
  DAT_20390290[0x35] = -0x3e400000;
  if (*DAT_20390290 == 3) {
    bVar2 = *(byte *)(DAT_20390290 + 4) | 1;
LAB_20054118:
    *(byte *)(DAT_20390290 + 4) = bVar2;
  }
  else {
    if (*(short *)((int)DAT_20390290 + 0x2a) < 0) {
      if ((*(char *)((int)DAT_20390290 + 0x1f) != '\0') && ((*(byte *)(DAT_20390290 + 4) & 1) == 0))
      goto LAB_200541c8;
      bVar2 = *(byte *)(DAT_20390290 + 4) | 1;
      goto LAB_20054118;
    }
    if ((*(byte *)(DAT_20390290 + 4) & 1) == 0) goto LAB_200541c8;
    if (*(char *)((int)DAT_20390290 + 0x1f) == '\0') {
      DAT_20390290[0x38] = 0x42200000;
      puVar1 = (undefined4 *)
               (*(code *)DAT_20390290[0x3c])
                         (local_38,&DAT_20390220,DAT_20390290 + 0x33,DAT_20390290 + 0x36,
                          &DAT_20390220);
      pcVar4 = acStack_70;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar4 = *puVar1;
        puVar1 = puVar1 + 1;
        pcVar4 = pcVar4 + 4;
      }
      if (acStack_70[0] == '\0') {
        bVar2 = *(byte *)(DAT_20390290 + 4) & 0xfe;
        goto LAB_20054118;
      }
    }
  }
  if ((*(byte *)(DAT_20390290 + 4) & 1) != 0) {
    DAT_20390290[0x38] = 0x41600000;
    DAT_20390290[0x32] = 0;
    if (DAT_20157004 == 1.0) {
      return;
    }
    DAT_20390290[0x32] = (int)(DAT_20157004 * 24.0 - 24.0);
    if ((float)DAT_20390290[0x32] < -10.0) {
      DAT_20390290[0x32] = -0x3ee00000;
    }
    if ((float)DAT_20390290[0x32] <= 13.0) {
      return;
    }
    DAT_20390290[0x32] = 0x41500000;
    return;
  }
LAB_200541c8:
  DAT_20390290[0x38] = 0x42200000;
  DAT_20390290[0x32] = 0x420c0000;
  if (DAT_20157004 != 1.0) {
    DAT_20390290[0x32] = (int)(DAT_20157004 * 59.0 - 24.0);
    if ((float)DAT_20390290[0x32] < -8.0) {
      DAT_20390290[0x32] = -0x3f000000;
    }
    if (39.0 < (float)DAT_20390290[0x32]) {
      DAT_20390290[0x32] = 0x421c0000;
    }
  }
  return;
}

