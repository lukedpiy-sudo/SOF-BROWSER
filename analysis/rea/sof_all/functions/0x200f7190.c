// rea decompile_all
// name: FUN_200f7190
// address: 0x200f7190
// body: available
// range: 0x200f7190-0x200f7321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f7190(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  char local_50 [80];
  
  uVar3 = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar2 = param_4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  for (uVar3 = ~uVar3 + (~uVar4 - 2); 0x545 < uVar3; uVar3 = ~uVar3 + (~uVar4 - 2)) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    pcVar2 = param_4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x547) {
      iVar5 = -1;
      pcVar2 = param_3;
      goto code_r0x200f7288;
    }
    iVar5 = 0;
    pcVar2 = param_4;
    pcVar7 = param_4;
    do {
      if (*pcVar2 == '\\') {
        uVar3 = uVar4 & 0x80000001;
        bVar8 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar8 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar8) {
          pcVar7 = pcVar2;
        }
        uVar4 = uVar4 + 1;
      }
      pcVar2 = pcVar2 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x546);
    if (pcVar7 == param_4) {
      return;
    }
    *pcVar7 = '\0';
    FUN_200f7190(param_1,param_2,param_3,param_4);
    uVar3 = 0xffffffff;
    *pcVar7 = '\\';
    pcVar2 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar2 = param_3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_4 = pcVar7;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_4;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  do {
    pcVar7 = param_3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -uVar3;
  pcVar7 = pcVar7 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
  while( true ) {
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '\0') break;
code_r0x200f7288:
    if (iVar5 == 0) break;
  }
  if (iVar5 != -2) {
    iVar5 = param_1[0x38];
    param_1[0x38] = iVar5 + 1;
    FUN_200fabac(local_50,s__queryid__d__d_2015a8cc,param_1[0x37],iVar5 + 1);
    uVar3 = 0xffffffff;
    pcVar2 = local_50;
    do {
      pcVar7 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar2 = param_3;
    do {
      pcVar6 = pcVar2;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar6;
    } while (cVar1 != '\0');
    pcVar2 = pcVar7 + -uVar3;
    pcVar7 = pcVar6 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar2 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    Ordinal_20(*param_1,param_3,~uVar3 - 1,0,param_2,0x10);
    *param_3 = '\0';
  }
  iVar5 = (int)param_3 - (int)param_4;
  do {
    cVar1 = *param_4;
    param_4[iVar5] = cVar1;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  return;
}

