// rea decompile_all
// name: FUN_20067640
// address: 0x20067640
// body: available
// range: 0x20067640-0x200676e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20067640(float *param_1,float param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 in_EAX;
  uint uVar3;
  float *in_ECX;
  undefined3 uVar4;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,*(char *)(in_ECX + 6));
  if (*(char *)(in_ECX + 6) == '\0') {
    uVar3 = CONCAT31(uVar4,*(char *)(param_1 + 6));
    if ((*(char *)(param_1 + 6) == '\0') &&
       (((uVar3 = CONCAT31(uVar4,*(char *)((int)in_ECX + 0x19)),
         *(char *)((int)in_ECX + 0x19) != '\0' ||
         (uVar3 = CONCAT31(uVar4,*(char *)((int)param_1 + 0x19)),
         *(char *)((int)param_1 + 0x19) != '\0')) ||
        (((uVar1 = (ushort)(*in_ECX - param_2 < param_1[3]),
          uVar2 = (ushort)(*in_ECX - param_2 == param_1[3]),
          uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0 &&
          (((uVar1 = (ushort)(in_ECX[1] - param_2 < param_1[4]),
            uVar2 = (ushort)(in_ECX[1] - param_2 == param_1[4]),
            uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0 &&
            (uVar1 = (ushort)(in_ECX[2] - param_2 < param_1[5]),
            uVar2 = (ushort)(in_ECX[2] - param_2 == param_1[5]),
            uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0)) &&
           (uVar1 = (ushort)(*param_1 - param_2 < in_ECX[3]),
           uVar2 = (ushort)(*param_1 - param_2 == in_ECX[3]),
           uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0)))) &&
         ((uVar1 = (ushort)(param_1[1] - param_2 < in_ECX[4]),
          uVar2 = (ushort)(param_1[1] - param_2 == in_ECX[4]),
          uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0 &&
          (uVar1 = (ushort)(param_1[2] - param_2 < in_ECX[5]),
          uVar2 = (ushort)(param_1[2] - param_2 == in_ECX[5]),
          uVar3 = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0)))))))) {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

