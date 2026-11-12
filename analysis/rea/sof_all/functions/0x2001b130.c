// rea decompile_all
// name: FUN_2001b130
// address: 0x2001b130
// body: available
// range: 0x2001b130-0x2001b1ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2001b130(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = (uint *)(DAT_20246ce4 + param_1 * 0x3c);
  if (*(int *)(DAT_20246ce4 + 0x34 + param_1 * 0x3c) != 0) {
    _DAT_20244cac = param_1;
  }
  if (((DAT_20248d98 & *puVar1) != 0) &&
     (iVar4 = 0, uVar3 = DAT_20246ce0, *(short *)((int)puVar1 + 0x3a) != 0)) {
    do {
      puVar2 = (uint *)((uint)*(ushort *)(DAT_20244cbc + ((uint)(ushort)puVar1[0xe] + iVar4) * 2) *
                        0x10 + DAT_20244c5c);
      if ((puVar2[3] != uVar3) &&
         ((puVar2[3] = uVar3, uVar3 = DAT_20246ce0, (DAT_20248d98 & *puVar2) != 0 &&
          (FUN_2001ad70(&DAT_20246cf0,&DAT_20244c6c,&DAT_20244c60,&DAT_20248df4,&DAT_20244c78,puVar2
                       ), uVar3 = DAT_20246ce0, DAT_20244c7c == 0.0)))) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)((int)puVar1 + 0x3a));
  }
  return;
}

