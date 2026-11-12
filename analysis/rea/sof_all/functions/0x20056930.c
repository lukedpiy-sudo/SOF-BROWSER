// rea decompile_all
// name: FUN_20056930
// address: 0x20056930
// body: available
// range: 0x20056930-0x20056b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20056930(char *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined **ppuVar12;
  int local_10;
  char *local_c;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_200f9f75(*(int *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar5 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    local_10 = 0;
    uVar9 = uVar5;
    if (0 < (int)uVar5) {
LAB_20056988:
      if ((param_1[local_10] == '$') && (iVar11 = 0, PTR_s__P_WHITE_20138758 != (undefined *)0x0)) {
        ppuVar12 = &PTR_s__P_WHITE_20138758;
        do {
          uVar6 = 0xffffffff;
          pcVar4 = *ppuVar12;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          iVar3 = _strncmp(param_1 + local_10,*ppuVar12,~uVar6 - 1);
          if (iVar3 == 0) {
            uVar6 = 0xffffffff;
            pcVar4 = (&PTR_DAT_2013875c)[iVar11 * 2];
            goto code_r0x200569ef;
          }
          ppuVar1 = ppuVar12 + 2;
          ppuVar12 = ppuVar12 + 2;
          iVar11 = iVar11 + 1;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      goto LAB_20056a1a;
    }
LAB_20056a37:
    if (*(float *)(DAT_20392dcc + 0x18) == 0.0) {
      local_c = operator_new(uVar9);
      *(char **)(in_ECX + 0xc) = local_c;
    }
    else {
      local_c = operator_new(uVar9 + 6);
      pcVar4 = &DAT_20138bf0;
      *(char **)(in_ECX + 0xc) = local_c;
      do {
        cVar2 = *pcVar4;
        (local_c + -0x20138bf0)[(int)pcVar4] = cVar2;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar9 = 0xffffffff;
      pcVar4 = local_c;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      local_c = local_c + (~uVar9 - 1);
    }
    local_10 = 0;
    if (0 < (int)uVar5) {
      do {
        if (param_1[local_10] == '$') {
          iVar11 = 0;
          if (PTR_s__P_WHITE_20138758 != (undefined *)0x0) {
            ppuVar12 = &PTR_s__P_WHITE_20138758;
LAB_20056ad3:
            uVar9 = 0xffffffff;
            pcVar4 = *ppuVar12;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            iVar3 = _strncmp(param_1 + local_10,*ppuVar12,~uVar9 - 1);
            if (iVar3 != 0) goto code_r0x20056af0;
            pcVar4 = (&PTR_DAT_2013875c)[iVar11 * 2];
            pcVar10 = local_c;
            do {
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
              *pcVar10 = cVar2;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            uVar9 = 0xffffffff;
            pcVar4 = (&PTR_DAT_2013875c)[iVar11 * 2];
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            local_c = local_c + (~uVar9 - 1);
            uVar9 = 0xffffffff;
            pcVar4 = (&PTR_s__P_WHITE_20138758)[iVar11 * 2];
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar2 != '\0');
            local_10 = local_10 + (~uVar9 - 2);
          }
LAB_20056b4e:
          if ((&PTR_s__P_WHITE_20138758)[iVar11 * 2] == (undefined *)0x0) goto LAB_20056b59;
        }
        else {
LAB_20056b59:
          *local_c = param_1[local_10];
          local_c = local_c + 1;
        }
        local_10 = local_10 + 1;
      } while (local_10 < (int)uVar5);
    }
  }
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (cVar2 == '\0') break;
code_r0x200569ef:
    if (uVar6 == 0) break;
  }
  uVar7 = 0xffffffff;
  pcVar4 = (&PTR_s__P_WHITE_20138758)[iVar11 * 2];
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar8 = 0xffffffff;
  uVar9 = uVar9 + ((~uVar6 - 1) - (~uVar7 - 1));
  pcVar4 = (&PTR_s__P_WHITE_20138758)[iVar11 * 2];
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  local_10 = local_10 + (~uVar8 - 2);
LAB_20056a1a:
  local_10 = local_10 + 1;
  if ((int)uVar5 <= local_10) goto LAB_20056a37;
  goto LAB_20056988;
code_r0x20056af0:
  ppuVar1 = ppuVar12 + 2;
  ppuVar12 = ppuVar12 + 2;
  iVar11 = iVar11 + 1;
  if (*ppuVar1 == (undefined *)0x0) goto LAB_20056b4e;
  goto LAB_20056ad3;
}

