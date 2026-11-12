// rea decompile_all
// name: FUN_200fdeaa
// address: 0x200fdeaa
// body: available
// range: 0x200fdeaa-0x200fe0b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * FUN_200fdeaa(uint param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  int *piVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar8 = (int *)PTR_LOOP_2015d288;
  do {
    if (piVar8[4] != -1) {
      piVar5 = (int *)piVar8[2];
      iVar3 = ((int)piVar5 + (-0x18 - (int)piVar8) >> 3) * 0x1000 + piVar8[4];
      if (piVar5 < piVar8 + 0x806) {
        do {
          if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
            piVar4 = (int *)FUN_200fe0b2(iVar3,*piVar5,param_1);
            if (piVar4 != (int *)0x0) goto LAB_200fdf75;
            piVar5[1] = param_1;
          }
          piVar5 = piVar5 + 2;
          iVar3 = iVar3 + 0x1000;
        } while (piVar5 < piVar8 + 0x806);
      }
      piVar1 = (int *)piVar8[2];
      iVar3 = piVar8[4];
      for (piVar5 = piVar8 + 6; piVar5 < piVar1; piVar5 = piVar5 + 2) {
        if (((int)param_1 <= *piVar5) && (param_1 < (uint)piVar5[1])) {
          piVar4 = (int *)FUN_200fe0b2(iVar3,*piVar5,param_1);
          if (piVar4 != (int *)0x0) {
LAB_200fdf75:
            PTR_LOOP_2015d288 = (undefined *)piVar8;
            *piVar5 = *piVar5 - param_1;
            piVar8[2] = (int)piVar5;
            return piVar4;
          }
          piVar5[1] = param_1;
        }
        iVar3 = iVar3 + 0x1000;
      }
    }
    piVar8 = (int *)*piVar8;
    if (piVar8 == (int *)PTR_LOOP_2015d288) {
      ppuVar9 = &PTR_LOOP_2015b268;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_2015b268) {
          puVar6 = (undefined *)FUN_200fdbb2();
          if (puVar6 == (undefined *)0x0) {
            return (int *)0x0;
          }
          piVar8 = *(int **)(puVar6 + 0x10);
          *(char *)(piVar8 + 2) = (char)param_1;
          PTR_LOOP_2015d288 = puVar6;
          *piVar8 = (int)piVar8 + param_1 + 8;
          piVar8[1] = 0xf0 - param_1;
          *(uint *)(puVar6 + 0x18) = *(int *)(puVar6 + 0x18) - (param_1 & 0xff);
          return piVar8 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar8 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar6 = *ppuVar2;
      ppuVar7 = ppuVar2;
      for (; (puVar6 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar7 = ppuVar7 + 2;
        puVar6 = *ppuVar7;
      }
      piVar5 = VirtualAlloc(piVar8,local_8 << 0xc,0x1000,4);
      if (piVar5 != piVar8) {
        return (int *)0x0;
      }
      _memset(piVar8,local_8 << 0xc,0);
      ppuVar7 = ppuVar2;
      if (0 < local_8) {
        piVar5 = piVar8 + 1;
        do {
          *(undefined1 *)(piVar5 + 0x3d) = 0xff;
          piVar5[-1] = (int)(piVar5 + 1);
          *piVar5 = 0xf0;
          *ppuVar7 = (undefined *)0xf0;
          ppuVar7[1] = (undefined *)0xf1;
          piVar5 = piVar5 + 0x400;
          ppuVar7 = ppuVar7 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar7 < ppuVar9 + 0x806 && (*ppuVar7 != (undefined *)0xffffffff));
          ppuVar7 = ppuVar7 + 2) {
      }
      PTR_LOOP_2015d288 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar7 < ppuVar9 + 0x806) & (uint)ppuVar7);
      *(char *)(piVar8 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar8[1] = piVar8[1] - param_1;
      *piVar8 = (int)piVar8 + param_1 + 8;
      return piVar8 + 0x40;
    }
  } while( true );
}

