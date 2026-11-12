// rea decompile_all
// name: FUN_20090e40
// address: 0x20090e40
// body: available
// range: 0x20090e40-0x20090fbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20090e40(int param_1)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  int in_ECX;
  float unaff_ESI;
  float10 fVar3;
  float fVar4;
  float fVar5;
  undefined1 *puVar6;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [16];
  undefined4 uStack_50;
  undefined4 uStack_c;
  
  *(undefined1 *)(in_ECX + 5) = 1;
  uVar1 = FUN_200c28e0(param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar2 = (undefined3)((uint)uVar1 >> 8);
  if (*(char *)(in_ECX + 0x40) != '\0') {
    (**(code **)(DAT_20403c04 + 0x68))();
    uStack_50 = 0;
    uStack_c = 0;
    FUN_20090b20(param_1,auStack_90);
    puVar6 = auStack_90;
    (**(code **)(DAT_20403c04 + 0x54))(puVar6);
    FUN_200a1410(&stack0xffffff5c,param_1 + 0x24);
    fVar4 = SQRT(unaff_ESI * unaff_ESI + fStack_9c * fStack_9c + fStack_a0 * fStack_a0);
    if (fVar4 <= 1e-10) {
      FUN_2007ebc0(0);
    }
    else {
      FUN_200c3870(fVar4);
    }
    fVar5 = 0.0;
    fVar4 = 1.0;
    fVar3 = (float10)fpatan((float10)(fStack_9c * -1.0),(float10)(unaff_ESI * -1.0));
    (**(code **)(DAT_20403c04 + 0x6c))
              ((float)((fVar3 / (float10)3.1415927) * (float10)-180.0 - (float10)90.0),0,0x3f800000,
               0);
    if (*(char *)(in_ECX + 0x41) != '\0') {
      fVar3 = (float10)fpatan((float10)fVar5,
                              SQRT((float10)fVar4 * (float10)fVar4 +
                                   (float10)(float)puVar6 * (float10)(float)puVar6));
      (**(code **)(DAT_20403c04 + 0x6c))
                ((float)((fVar3 / (float10)3.1415927) * (float10)180.0),0x3f800000,0,0);
    }
    (**(code **)(DAT_20403c04 + 0x54))(auStack_60);
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,1);
}

