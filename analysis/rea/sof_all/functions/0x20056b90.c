// rea decompile_all
// name: FUN_20056b90
// address: 0x20056b90
// body: available
// range: 0x20056b90-0x20056c6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20056b90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  
  iVar6 = 0;
  if (*(char **)(in_ECX + 0xc) != (char *)0x0) {
    uVar8 = 0xffffffff;
    pcVar12 = *(char **)(in_ECX + 0xc);
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    iVar6 = 0;
    puVar10 = param_1;
    if (0 < (int)(~uVar8 - 1)) {
      param_3 = param_3 + -4;
      do {
        iVar5 = *(int *)(in_ECX + 0xc);
        iVar11 = iVar6;
        if (*(char *)(iVar5 + iVar6) == '%') {
          iVar11 = iVar6 + 1;
          switch(*(undefined1 *)(iVar5 + 1 + iVar6)) {
          case 100:
            puVar1 = (undefined4 *)(param_3 + 4);
            param_3 = param_3 + 4;
            *puVar10 = *puVar1;
            puVar10 = puVar10 + 1;
            break;
          case 0x68:
            cVar4 = *(char *)(iVar5 + 1 + iVar11);
            iVar11 = iVar6 + 2;
            if ((cVar4 == 'd') || (cVar4 == 'u')) {
              puVar2 = (undefined2 *)(param_3 + 4);
              param_3 = param_3 + 4;
              *(undefined2 *)puVar10 = *puVar2;
              puVar10 = (undefined4 *)((int)puVar10 + 2);
            }
            break;
          case 0x70:
            puVar3 = (undefined1 *)(param_3 + 4);
            param_3 = param_3 + 4;
            *(undefined1 *)puVar10 = *puVar3;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            break;
          case 0x73:
            pcVar12 = *(char **)(param_3 + 4);
            param_3 = param_3 + 4;
            pcVar7 = pcVar12;
            do {
              cVar4 = *pcVar7;
              pcVar7[(int)puVar10 - (int)pcVar12] = cVar4;
              pcVar7 = pcVar7 + 1;
            } while (cVar4 != '\0');
            uVar9 = 0xffffffff;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar4 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar4 != '\0');
            puVar10 = (undefined4 *)((int)puVar10 + ~uVar9);
          }
        }
        iVar6 = iVar11 + 1;
      } while (iVar6 < (int)(~uVar8 - 1));
    }
    iVar6 = (int)puVar10 - (int)param_1;
  }
  return iVar6;
}

