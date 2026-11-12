// rea decompile_all
// name: FUN_50076b10
// address: 0x50076b10
// body: available
// range: 0x50076b10-0x50076c45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50076b10(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int **ppiVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int *local_128;
  int *local_124;
  undefined1 local_120 [4];
  char *local_11c;
  uint local_118;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011494b;
  local_c = ExceptionList;
  iVar3 = -(int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)(local_110 + iVar3)] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_500826d0(local_120,'\0');
  uVar6 = 0xffffffff;
  pcVar8 = local_110;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  uVar4 = FUN_50082c70(local_120,uVar6,'\x01');
  if ((char)uVar4 != '\0') {
    pcVar8 = local_110;
    pcVar9 = local_11c;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    local_11c[uVar6] = '\0';
    local_118 = uVar6;
  }
  local_4 = 0;
  FUN_50082fe0(&DAT_5015c4ec,(int *)&local_124,(int)local_120);
  if (local_124 != DAT_5015c4f0) {
    uVar6 = FUN_50083690(local_120,(int)(local_124 + 3));
    if (-1 < (int)uVar6) {
      ppiVar5 = &local_124;
      goto LAB_50076bed;
    }
  }
  local_128 = DAT_5015c4f0;
  ppiVar5 = &local_128;
LAB_50076bed:
  piVar2 = *ppiVar5;
  local_4 = 0xffffffff;
  FUN_500826d0(local_120,'\x01');
  if (piVar2 != DAT_5015c4f0) {
    if (piVar2[7] != 0) {
      (*DAT_5015cb68)(piVar2[7]);
    }
    FUN_50082720(&DAT_5015c4ec,&local_128,piVar2);
  }
  ExceptionList = local_c;
  return;
}

