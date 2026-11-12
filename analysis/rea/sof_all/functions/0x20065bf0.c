// rea decompile_all
// name: FUN_20065bf0
// address: 0x20065bf0
// body: available
// range: 0x20065bf0-0x20065ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20065bf0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_100;
  undefined4 local_ff;
  
  if ((DAT_2024961c == 0) || (uVar1 = __ftol(), (uVar1 & 2) == 0)) {
    if (DAT_20249618 == 0) {
      return;
    }
    if (*(float *)(DAT_20249618 + 0x18) == 0.0) {
      return;
    }
  }
  DAT_20403541 = 1;
  if ((DAT_20403544 == 0) && (DAT_20365e9c != 0)) {
    DAT_20403544 = 1;
    local_100 = 0xd;
    puVar3 = &local_ff;
    for (uVar1 = DAT_20365e9c >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = &DAT_20202020;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = DAT_20365e9c & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar3 = 0x20;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(undefined1 *)((int)&local_ff + DAT_20365e9c) = 0xd;
    *(undefined1 *)((int)&local_ff + DAT_20365e9c + 1) = 0;
    FUN_200faaad(&local_100);
  }
  FUN_200faaad(&DAT_2011d114,param_1);
  if ((DAT_20365e9c != 0) && (iVar2 = FUN_200faaf0(param_1,10), iVar2 != 0)) {
    FUN_200faaad(&DAT_2011d114,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
    DAT_20403544 = 0;
  }
  return;
}

