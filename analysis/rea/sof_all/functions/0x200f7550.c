// rea decompile_all
// name: FUN_200f7550
// address: 0x200f7550
// body: available
// range: 0x200f7550-0x200f76c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f7550(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_298 [80];
  char local_248 [128];
  undefined1 local_1c8 [256];
  undefined1 local_c8 [200];
  
  if (*param_4 != '\0') {
    uVar3 = 0xffffffff;
    pcVar6 = param_4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    if (0x80 < iVar4) {
      return;
    }
    iVar2 = -(int)param_4;
    do {
      cVar1 = *param_4;
      param_4[(int)(local_248 + iVar2)] = cVar1;
      param_4 = param_4 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    pcVar6 = (char *)(param_1 + 0x12);
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_200f92d0(param_1 + 0x12,~uVar3 - 1,local_248,iVar4);
    FUN_200f9200(local_248,iVar4,local_c8);
    FUN_200fabac(local_1c8,s__validate__s_2015a8f0,local_c8);
    FUN_200f7190(param_1,param_2,param_3,local_1c8);
  }
  FUN_200fabac(local_1c8,s__final__2015a8e8);
  FUN_200f7190(param_1,param_2,param_3,local_1c8);
  iVar4 = -1;
  pcVar6 = param_3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    iVar4 = param_1[0x38];
    param_1[0x38] = iVar4 + 1;
    FUN_200fabac(local_298,s__queryid__d__d_2015a8cc,param_1[0x37],iVar4 + 1);
    uVar3 = 0xffffffff;
    pcVar6 = local_298;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar4 = -1;
    pcVar6 = param_3;
    do {
      pcVar7 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    Ordinal_20(*param_1,param_3,~uVar3 - 1,0,param_2,0x10);
    *param_3 = '\0';
  }
  return;
}

