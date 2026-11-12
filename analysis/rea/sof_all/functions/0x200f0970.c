// rea decompile_all
// name: FUN_200f0970
// address: 0x200f0970
// body: available
// range: 0x200f0970-0x200f0b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f0970(int param_1,char *param_2)

{
  char cVar1;
  char *_Str1;
  char *pcVar2;
  byte bVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  char *local_10;
  char *local_c;
  char *local_8;
  uint local_4;
  
  iVar7 = (int)param_2;
  bVar3 = 0;
  if (*(int *)((int)param_2 + 0x24) == 2) {
    piVar5 = (int *)((int)param_2 + 0x20);
    param_2 = &DAT_2015ee44;
    _Str1 = *(char **)*piVar5;
    pcVar9 = (char *)((undefined4 *)*piVar5)[1];
    pcVar2 = *(char **)(iVar7 + 8);
    uVar6 = 0xffffffff;
    pcVar8 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_2015ee44;
    if (*pcVar9 == '\x01') {
      cVar1 = pcVar9[1];
      pcVar10 = pcVar9 + 1;
      if (((('@' < cVar1) && (cVar1 < '[')) || (('`' < cVar1 && (cVar1 < '{')))) &&
         (pcVar9[~uVar6 - 2] == '\x01')) {
        pcVar9[~uVar6 - 2] = '\0';
        puVar4 = (undefined1 *)FUN_200faaf0(pcVar9,0x20);
        pcVar8 = param_2;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = 0;
          pcVar9 = puVar4 + 1;
          pcVar8 = pcVar10;
        }
      }
    }
    iVar7 = 5;
    bVar12 = true;
    pcVar10 = pcVar8;
    pcVar11 = &DAT_20159a70;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar12 = *pcVar10 == *pcVar11;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar12);
    if (bVar12) {
      FUN_200f3a80(param_1 + 0x18,&DAT_20159a94,pcVar2,pcVar9);
      return;
    }
    iVar7 = 7;
    bVar12 = true;
    pcVar10 = pcVar8;
    pcVar11 = s_ACTION_20159a8c;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar12 = *pcVar10 == *pcVar11;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar12);
    if (bVar12) {
      bVar3 = 1;
    }
    else if (*pcVar8 != '\0') {
      return;
    }
    iVar7 = __strcmpi(_Str1,(char *)(param_1 + 0x160));
    if (iVar7 == 0) {
      if (*(int *)(param_1 + 0x370) != 0) {
        local_8 = (char *)(uint)bVar3;
        local_10 = pcVar2;
        local_c = pcVar9;
        FUN_200edf60(param_1,2,*(int *)(param_1 + 0x370),&local_10,*(undefined4 *)(param_1 + 0x378),
                     0,0,0xc);
        return;
      }
    }
    else {
      piVar5 = (int *)FUN_200ef1f0(param_1,_Str1);
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        local_4 = (uint)bVar3;
        local_10 = _Str1;
        local_c = pcVar2;
        local_8 = pcVar9;
        FUN_200edf60(param_1,4,*piVar5,&local_10,piVar5[10],0,_Str1,0x10);
      }
    }
  }
  return;
}

