// rea decompile_all
// name: FUN_2000ec20
// address: 0x2000ec20
// body: available
// range: 0x2000ec20-0x2000edce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000ec20(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char local_400 [1024];
  
  iVar2 = FUN_20057fd0(param_1);
  if (iVar2 != 0) {
    if (param_2 == 0) {
      pcVar5 = *(char **)(iVar2 + 0xc);
    }
    else {
      FUN_20058750(param_1,param_2,local_400,0x400);
      pcVar5 = local_400;
    }
    uVar3 = *(uint *)(iVar2 + 4);
    if ((uVar3 & 8) != 0) {
      FUN_200130d0(pcVar5);
      return;
    }
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 1) != 0) {
        DAT_20230320 = 0;
        FUN_20012db0(pcVar5);
        return;
      }
      if ((uVar3 & 2) != 0) {
        FUN_20013af0(0,0x68,5,pcVar5);
        return;
      }
      if ((uVar3 & 0x10) == 0) {
        Com_Printf(&DAT_2011d114,pcVar5);
      }
      else {
        if (*pcVar5 == '*') {
          if (pcVar5[1] != '\0') {
            Com_sprintf(&DAT_201e907c,0x400,&DAT_2011d114,pcVar5 + 1);
            return;
          }
          DAT_201e907c._0_1_ = 0;
          return;
        }
        uVar3 = 0xffffffff;
        pcVar7 = pcVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar4 = 0xffffffff;
        pcVar7 = (char *)&DAT_201e907c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (~uVar3 + (~uVar4 - 1) < 0x400) {
          iVar2 = -1;
          pcVar7 = (char *)&DAT_201e907c;
          do {
            pcVar6 = pcVar7;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar6 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar6;
          } while (cVar1 != '\0');
          uVar3 = 0xffffffff;
          *(undefined2 *)(pcVar6 + -1) = DAT_2011d72c;
          do {
            pcVar7 = pcVar5;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar7 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar2 = -1;
          pcVar5 = (char *)&DAT_201e907c;
          do {
            pcVar6 = pcVar5;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar6 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar6;
          } while (cVar1 != '\0');
          pcVar5 = pcVar7 + -uVar3;
          pcVar7 = pcVar6 + -1;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar7 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          }
          return;
        }
      }
    }
    else if ((*(float *)(DAT_201e757c + 0x18) != 0.0) || ((uVar3 & 0x40) != 0)) {
      DAT_20230320 = 1;
      FUN_20012db0(pcVar5);
      return;
    }
  }
  return;
}

