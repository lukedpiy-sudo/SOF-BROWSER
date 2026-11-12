// rea decompile_all
// name: FUN_200d6440
// address: 0x200d6440
// body: available
// range: 0x200d6440-0x200d6659 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200d6440(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  void **ppvVar12;
  int in_ECX;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  undefined1 *puStack_fc;
  int iStack_f8;
  int *piStack_e0;
  void *pvStack_dc;
  int iStack_d8;
  int *apiStack_d4 [10];
  char acStack_aa [8];
  undefined1 auStack_a2 [162];
  
  piVar3 = (int *)FUN_200494c0(param_1);
  if (((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x44))(), cVar2 == '\0')) ||
     (piVar4 = (int *)(**(code **)**(undefined4 **)
                                    (*(int *)(*(int *)**(undefined4 **)(in_ECX + 4) + 0x14) + 0x24))
                                (), piVar4 == (int *)0x0)) {
    return (int *)0x0;
  }
  puVar1 = (undefined4 *)*piVar4;
  iStack_f8 = 0;
  apiStack_d4[0] = piVar4;
  puStack_fc = (undefined1 *)(**(code **)(*piVar3 + 0x1c))();
  (*(code *)*puVar1)();
  (**(code **)(*piVar4 + 4))(0);
  iVar5 = (**(code **)(*piVar3 + 0xc))();
  if (0 < iVar5) {
    iVar5 = (**(code **)(*piVar3 + 0xc))();
    piVar6 = operator_new(iVar5 << 7);
    iVar5 = (**(code **)(*piVar3 + 0xc))();
    pvVar7 = operator_new(iVar5 << 7);
    pvStack_dc = pvVar7;
    iVar5 = (**(code **)(*piVar3 + 0xc))();
    pvVar13 = pvVar7;
    if (0 < iVar5) {
      pvVar14 = (void *)((int)piVar6 - (int)auStack_a2);
      pcVar8 = (char *)((int)piVar6 - (int)pvVar7);
      pvVar15 = pvVar14;
      piVar4 = (int *)0x0;
      do {
        iStack_d8 = (int)piVar4 + 1;
        cVar2 = (**(code **)(*piVar3 + 0x38))(iStack_d8,apiStack_d4);
        if (cVar2 == '\0') {
          puStack_fc[(int)pvVar14] = 0;
          *puStack_fc = 0;
        }
        else {
          iVar5 = 0;
          pcVar11 = pcVar8;
          if (0 < (int)piVar4) {
            do {
              pvVar15 = pvVar7;
              if (((*(char *)((int)pvVar14 + (int)pcVar11) != '\0') && (*pcVar11 != '\0')) &&
                 ((iVar9 = __strcmpi((char *)((int)pvVar14 + (int)pcVar11),acStack_aa), iVar9 == 0
                  && (iVar9 = __strcmpi(pcVar11,(char *)&pvStack_dc), iVar9 == 0))))
              goto LAB_200d65b8;
              iVar5 = iVar5 + 1;
              pcVar11 = pcVar11 + 0x80;
              pvVar7 = pvVar15;
            } while (iVar5 < (int)piVar4);
          }
          uVar10 = (**(code **)(*piVar6 + 0x40))(&pvStack_dc);
          if ((short)uVar10 != 0) {
            (**(code **)(*piVar6 + 0x4c))(uVar10,acStack_aa,0);
          }
LAB_200d65b8:
          pcVar11 = acStack_aa;
          do {
            cVar2 = *pcVar11;
            *(char *)((int)pvVar15 + (int)pcVar11) = cVar2;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          ppvVar12 = &pvStack_dc;
          do {
            cVar2 = *(char *)ppvVar12;
            *(char *)((int)ppvVar12 + iStack_f8) = cVar2;
            ppvVar12 = (void **)((int)ppvVar12 + 1);
          } while (cVar2 != '\0');
        }
        iStack_f8 = iStack_f8 + 0x80;
        pvVar15 = (void *)((int)pvVar15 + 0x80);
        puStack_fc = puStack_fc + 0x80;
        pvVar7 = pvVar15;
        iVar5 = (**(code **)(*piVar3 + 0xc))();
        pvVar13 = pvStack_dc;
        piVar4 = piStack_e0;
      } while ((int)piStack_e0 < iVar5);
    }
    FUN_200f9f75(piVar6);
    FUN_200f9f75(pvVar13);
  }
  (**(code **)(*piVar3 + 8))(piVar4);
  return piVar3;
}

