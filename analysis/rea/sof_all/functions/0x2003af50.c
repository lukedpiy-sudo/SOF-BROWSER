// rea decompile_all
// name: FUN_2003af50
// address: 0x2003af50
// body: available
// range: 0x2003af50-0x2003b096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2003af50(int param_1,int *param_2,undefined4 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_144 [60];
  undefined1 auStack_108 [4];
  undefined4 uStack_104;
  
  if (*param_2 == 0) {
    puVar3 = (undefined4 *)FUN_20069630(1,0);
    iVar4 = (**(code **)*puVar3)();
    *param_2 = iVar4;
    iVar4 = FUN_20049190(&DAT_2015ee44,param_3,iVar4);
    if (iVar4 == 0) {
      (**(code **)(*(int *)*param_2 + 0x6c))();
      *param_2 = 0;
      return;
    }
    (**(code **)(*(int *)*param_2 + 4))(1);
    (**(code **)(*(int *)*param_2 + 8))(1);
    FUN_200fabac(auStack_108,s_Ghoul__s_GHL_20133e30,param_3);
    uVar1 = (**(code **)(*(int *)*param_2 + 0xc))(auStack_108);
    *param_4 = uVar1;
  }
  if (param_1 != 0) {
    piVar5 = (int *)(**(code **)(*(int *)*param_2 + 0x60))();
    *(int **)(param_1 + 0xbc) = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x44))
                (CONCAT22((short)((uint)DAT_2027c478 >> 0x10),*param_4),DAT_2027c478,0,1,0,0,0);
    }
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x10400000;
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      sVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x9c))();
      *(int *)(param_1 + 0x34) = -(int)sVar2;
      if (*(float *)(param_1 + 0x48) != 0.0) {
        uStack_104 = 0;
        (**(code **)(**(int **)(param_1 + 0xbc) + 8))(auStack_144);
        FUN_200a0fb0(*(undefined4 *)(param_1 + 0x48));
        (**(code **)**(undefined4 **)(param_1 + 0xbc))(&stack0xfffffeb8);
      }
    }
  }
  return;
}

