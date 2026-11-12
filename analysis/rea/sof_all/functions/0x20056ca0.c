// rea decompile_all
// name: FUN_20056ca0
// address: 0x20056ca0
// body: available
// range: 0x20056ca0-0x20056dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20056ca0(undefined1 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 local_100 [64];
  
  *param_1 = 0;
  uVar3 = 0;
  if (*(char **)(in_ECX + 0xc) != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = *(char **)(in_ECX + 0xc);
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    iVar6 = ~uVar5 - 1;
    pcVar4 = operator_new(~uVar5);
    pcVar7 = *(char **)(in_ECX + 0xc);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar10 = 0;
    puVar9 = local_100;
    if (0 < iVar6) {
      do {
        iVar11 = iVar10;
        if (pcVar4[iVar10] == '%') {
          iVar11 = iVar10 + 1;
          switch(pcVar4[iVar10 + 1]) {
          case 'd':
            uVar3 = *(undefined4 *)param_3;
            param_3 = param_3 + 4;
            *puVar9 = uVar3;
            break;
          default:
            goto switchD_20056d20_caseD_65;
          case 'h':
            iVar11 = iVar10 + 2;
            if (pcVar4[iVar10 + 2] == 'd') {
              uVar2 = *(undefined2 *)param_3;
              param_3 = param_3 + 2;
              *(undefined2 *)puVar9 = uVar2;
            }
            else {
              if (pcVar4[iVar10 + 2] != 'u') goto switchD_20056d20_caseD_65;
              uVar2 = *(undefined2 *)param_3;
              param_3 = param_3 + 2;
              *(undefined2 *)puVar9 = uVar2;
            }
            break;
          case 'p':
            uVar3 = FUN_2001fb60(*param_3);
            *puVar9 = uVar3;
            param_3 = param_3 + 1;
            pcVar4[iVar11] = 's';
            break;
          case 's':
            uVar5 = 0xffffffff;
            *puVar9 = param_3;
            pcVar7 = param_3;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            param_3 = param_3 + ~uVar5;
          }
          puVar9 = puVar9 + 1;
        }
switchD_20056d20_caseD_65:
        iVar10 = iVar11 + 1;
      } while (iVar10 < iVar6);
    }
    uVar3 = FUN_200fbb49(param_1,param_2,pcVar4,local_100);
    FUN_200f9f75(pcVar4);
  }
  return uVar3;
}

