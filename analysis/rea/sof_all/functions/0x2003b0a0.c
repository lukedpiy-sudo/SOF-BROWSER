// rea decompile_all
// name: FUN_2003b0a0
// address: 0x2003b0a0
// body: available
// range: 0x2003b0a0-0x2003b161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003b0a0(int param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_44 [64];
  undefined4 uStack_4;
  
  piVar3 = (int *)FUN_2002d890(param_2);
  if (piVar3 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar3 + 0x60))();
    *(int **)(param_1 + 0xbc) = piVar3;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar4 = FUN_2002d950(param_2,DAT_2027c478,0,1,0,0,0);
      (**(code **)(iVar1 + 0x44))(uVar4);
    }
  }
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x10400000;
  if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
    sVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x9c))();
    *(int *)(param_1 + 0x34) = -(int)sVar2;
    if (*(float *)(param_1 + 0x48) != 0.0) {
      uStack_4 = 0;
      (**(code **)(**(int **)(param_1 + 0xbc) + 8))(auStack_44);
      FUN_200a0fb0(*(undefined4 *)(param_1 + 0x48));
      (**(code **)**(undefined4 **)(param_1 + 0xbc))(&stack0xffffffb8);
    }
  }
  return;
}

