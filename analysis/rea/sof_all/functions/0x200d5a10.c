// rea decompile_all
// name: FUN_200d5a10
// address: 0x200d5a10
// body: available
// range: 0x200d5a10-0x200d5bba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200d5a10(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int unaff_ESI;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_cc [42];
  undefined1 auStack_a2 [100];
  char acStack_3e [62];
  
  piVar2 = (int *)(**(code **)(*param_1 + 4))();
  if (piVar2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = (int *)(**(code **)(*piVar2 + 0x60))();
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar7 = *piVar2;
  uVar4 = (**(code **)(*param_1 + 0x1c))();
  uVar4 = (**(code **)(iVar7 + 0xc))(uVar4);
  if ((short)uVar4 == 0) {
    return (int *)0x0;
  }
  if ((char)param_1 == '\0') {
    (**(code **)(*piVar3 + 0x44))
              (uVar4,*(undefined4 *)
                      (*(int *)(*(int *)**(undefined4 **)(unaff_EBX + 4) + 0x14) + 0x28),0,1,0,0,0);
  }
  else {
    *(int **)(unaff_EBX + 0x8c) = piVar2;
    *(short *)(unaff_EBX + 0x94) = (short)uVar4;
  }
  iVar5 = (**(code **)(*param_1 + 0xc))();
  iVar7 = 0;
  if (0 < iVar5) {
    do {
      cVar1 = (**(code **)(*param_1 + 0x38))(iVar7 + 1,local_cc);
      if (cVar1 != '\0') {
        if (acStack_3e[0] == '\0') {
          piVar2 = (int *)(**(code **)(*piVar3 + 0x88))();
          uVar8 = (**(code **)(*piVar2 + 0x1c))(acStack_3e);
          piVar2 = (int *)(**(code **)(*piVar3 + 0x88))();
          uVar4 = (**(code **)(*piVar2 + 0x40))(&stack0xffffff28);
          if ((short)uVar4 != 0) {
            piVar2 = (int *)(**(code **)(*piVar3 + 0x88))();
            uVar6 = (**(code **)(*piVar2 + 0x50))(uVar4,auStack_a2,0);
            if ((short)uVar6 != 0) goto LAB_200d5b8f;
          }
        }
        else {
          piVar2 = (int *)(**(code **)(*piVar3 + 0x88))();
          uVar4 = (**(code **)(*piVar2 + 0x40))(&stack0xffffff2c);
          if ((short)uVar4 != 0) {
            piVar2 = (int *)(**(code **)(*piVar3 + 0x88))();
            uVar6 = (**(code **)(*piVar2 + 0x50))(uVar4,auStack_a2,0);
            if ((short)uVar6 != 0) {
              uVar8 = 0;
LAB_200d5b8f:
              (**(code **)(*piVar3 + 0x2c))(uVar4,uVar6,uVar8);
            }
          }
        }
      }
      iVar5 = (**(code **)(*param_1 + 0xc))();
      iVar7 = unaff_ESI;
    } while (unaff_ESI < iVar5);
  }
  return piVar3;
}

