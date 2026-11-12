// rea decompile_all
// name: FUN_2003ffb0
// address: 0x2003ffb0
// body: available
// range: 0x2003ffb0-0x2004011e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003ffb0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  int local_34;
  float afStack_30 [9];
  undefined1 local_c [12];
  
  afStack_30[3] = 0.0;
  afStack_30[4] = 0.0;
  afStack_30[5] = -800.0;
  iVar2 = irand(5,0xb);
  local_34 = iVar2;
  (*DAT_20403614)(param_1,local_c,0xff);
  iStack_40 = 1;
  if (1 < iVar2) {
    do {
      iVar2 = FUN_2003b170(&uStack_44);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = 0;
      do {
        pfVar1 = (float *)((int)afStack_30 + iVar2);
        uVar3 = FUN_200f9f57();
        fStack_3c = (float)(uVar3 & 3);
        *pfVar1 = ((float)(int)fStack_3c + *(float *)((param_1 - (int)afStack_30) + (int)pfVar1)) -
                  1.0;
        fVar5 = (float10)flrand(0xbdcccccd,0x3dcccccd);
        fStack_38 = (float)(fVar5 + (float10)*(float *)((int)pfVar1 + (param_2 - (int)afStack_30)));
        iVar4 = irand(0x20,0xa0);
        fStack_3c = (float)iVar4 * fStack_38;
        fStack_38 = (float)irand(0xffffffe0,0x20);
        iVar4 = iVar2 + 4;
        *(float *)((int)afStack_30 + iVar2 + 0x18) = (float)(int)fStack_38 + fStack_3c;
        iVar2 = iVar4;
      } while (iVar4 < 0xc);
      FUN_20039e00(uStack_44,afStack_30,0x3f800000,0x3f800000,100,100,0x78,0xfa,0);
      FUN_20039c90(uStack_44,afStack_30 + 6,afStack_30 + 3,0,0,0,4);
      FUN_20038110(uStack_44,0x4b0,0,10);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < local_34);
  }
  return;
}

