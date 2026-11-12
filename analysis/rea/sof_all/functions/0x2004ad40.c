// rea decompile_all
// name: FUN_2004ad40
// address: 0x2004ad40
// body: available
// range: 0x2004ad40-0x2004ae8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004ad40(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = DAT_20364700;
  uVar2 = DAT_20364658;
  if (*(float *)(DAT_2036464c + 0x18) != 0.0) {
    uVar2 = 0;
    if (DAT_20364640 != 0) {
      do {
        uVar4 = 1 << ((byte)uVar2 & 0x1f);
        uVar1 = uVar4 & uVar3;
        if ((uVar1 != 0) && ((DAT_203646b0 & uVar4) == 0)) {
          FUN_2004c420(((3 < (int)uVar2) - 1 & 0xffffffe1) + 0xe0 + uVar2,1,0);
        }
        if ((uVar1 == 0) && ((DAT_203646b0 & uVar4) != 0)) {
          FUN_2004c420(((3 < (int)uVar2) - 1 & 0xffffffe1) + 0xe0 + uVar2,0,0);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_20364640);
    }
    DAT_203646b0 = uVar3;
    uVar2 = DAT_20364658;
    if (DAT_20364760 != 0) {
      uVar2 = 0;
      if (DAT_20364708 != 0xffff) {
        if (DAT_20364708 == 0) {
          uVar2 = 1;
        }
        else if (DAT_20364708 == 9000) {
          uVar2 = 2;
        }
        else if (DAT_20364708 == 18000) {
          uVar2 = 4;
        }
        else if (DAT_20364708 == 27000) {
          uVar2 = 8;
        }
      }
      iVar5 = 0;
      do {
        uVar3 = 1 << ((byte)iVar5 & 0x1f);
        if (((uVar3 & uVar2) != 0) && ((DAT_20364658 & uVar3) == 0)) {
          FUN_2004c420(iVar5 + 0xfc,1,0);
        }
        if (((uVar3 & uVar2) == 0) && ((DAT_20364658 & uVar3) != 0)) {
          FUN_2004c420(iVar5 + 0xfc,0,0);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
    }
  }
  DAT_20364658 = uVar2;
  return;
}

