// rea decompile_all
// name: FUN_2002b220
// address: 0x2002b220
// body: available
// range: 0x2002b220-0x2002b40c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002b220(undefined4 param_1,uint param_2,char param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_c [12];
  
  param_2 = param_2 & 0xff;
  fVar1 = (float)param_2 * 0.01;
  iVar2 = FUN_2003b170(&param_2);
  if (iVar2 != 0) {
    FUN_20038110(param_2,300,0x200,0x10);
    fVar5 = (float10)flrand(0,0x40c8f5c3);
    FUN_20039e00(param_2,param_1,fVar1 * 30.0,fVar1 * 30.0,0xfa,0xfa,0xfa,100,(float)fVar5);
    fVar5 = (float10)flrand(0xbf800000,0x3f800000,fVar1 * -33.333332,0xc3a6aaab,0);
    FUN_20039c90(param_2,0,0,(float)fVar5);
    iVar2 = 0;
    do {
      FUN_2002ffb0(local_c,fVar1 * 50.0);
      iVar3 = FUN_2003b170(&param_2);
      if (iVar3 == 0) {
        return;
      }
      FUN_20038110(param_2,500,0x200,0x1c);
      fVar5 = (float10)flrand(0,0x40c8f5c3);
      FUN_20039e00(param_2,param_1,fVar1 * 20.0,fVar1 * 20.0,0xfa,0xfa,0xfa,0x96,(float)fVar5);
      fVar5 = (float10)flrand(0xbf800000,0x3f800000,fVar1 * -33.333332,
                              (float)(int)-(uint)*(byte *)(param_2 + 0x2f) +
                              (float)(int)-(uint)*(byte *)(param_2 + 0x2f),0);
      FUN_20039c90(param_2,local_c,0,(float)fVar5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (param_3 != '\0') {
      uVar4 = FUN_2002d860(0x5b,0x3f800000,0,0);
      (*DAT_20390d7c)(param_1,0xffffffff,0,uVar4);
    }
  }
  return;
}

