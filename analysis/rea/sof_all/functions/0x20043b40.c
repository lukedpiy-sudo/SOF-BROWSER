// rea decompile_all
// name: FUN_20043b40
// address: 0x20043b40
// body: available
// range: 0x20043b40-0x20043cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_20043b40(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_8;
  
  iStack_58 = param_1;
  uStack_5c = 0x20043b57;
  piVar3 = (int *)FUN_2002d890();
  iStack_58 = 0x20043b61;
  puVar4 = (undefined4 *)FUN_2003c020();
  if ((puVar4 != (undefined4 *)0x0) && (piVar3 != (int *)0x0)) {
    puVar4[0x1b] = param_6 * 1000.0 + (float)DAT_201c1f1c;
    puVar4[10] = *param_3;
    puVar4[0xb] = param_3[1];
    puVar4[0xc] = param_3[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[0x12] = param_4;
    *puVar4 = 0;
    puVar4[0x10] = 0;
    puVar4[0xd] = 0;
    iStack_58 = 0x20043bba;
    piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
    iStack_58 = 0;
    puVar4[0x2f] = piVar3;
    iVar1 = *piVar3;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_64 = 1;
    uVar5 = FUN_2002d950(param_1,DAT_201e8fc8,0);
    (**(code **)(iVar1 + 0x44))(uVar5);
    if (iStack_14 != 0) {
      piVar3 = (int *)(**(code **)(*(int *)puVar4[0x2f] + 0x88))();
      uVar5 = (**(code **)(*piVar3 + 0x40))((&PTR_s_Brick_20137678)[param_1 * 4]);
      piVar3 = (int *)(**(code **)(*(int *)puVar4[0x2f] + 0x88))();
      uVar6 = (**(code **)(*piVar3 + 0x50))(uVar5,uStack_18,0);
      if (((short)uVar5 != 0) && ((short)uVar6 != 0)) {
        (**(code **)(*(int *)puVar4[0x2f] + 0x2c))(uVar5,uVar6,0);
      }
    }
    puVar4[0x15] = puVar4[0x15] | 0x400000;
    sVar2 = (**(code **)(*(int *)puVar4[0x2f] + 0x9c))();
    puVar4[0xd] = -(int)sVar2;
    puVar4[0x32] = uStack_8;
    if (param_1 == 0x13) {
      puVar4[0x2b] = 0xff800000;
    }
    *(undefined1 *)((int)puVar4 + 0x4f) = 0xff;
    (**(code **)(*(int *)puVar4[0x2f] + 8))(&uStack_60);
    FUN_200a0fb0(uStack_10);
    (*(code *)**(undefined4 **)puVar4[0x2f])(&uStack_64);
    return puVar4;
  }
  return (undefined4 *)0x0;
}

