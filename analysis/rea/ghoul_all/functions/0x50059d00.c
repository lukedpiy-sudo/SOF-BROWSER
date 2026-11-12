// rea decompile_all
// name: FUN_50059d00
// address: 0x50059d00
// body: available
// range: 0x50059d00-0x50059efe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50059d00(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  int iStack_4;
  
  iVar4 = 0;
  local_8 = 0;
  if (0 < DAT_5015d8c8) {
    piVar1 = (int *)(DAT_5015cca0 + 0x4d8);
    iVar2 = DAT_5015d8c8;
    do {
      if (((piVar1[1] != 0) && (*piVar1 != 0)) && (piVar1[0xf9] == 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar1 = piVar1 + 0x119;
      iVar2 = iVar2 + -1;
      local_8 = iVar4;
    } while (iVar2 != 0);
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = -1;
  iVar2 = 0;
  pfVar3 = (float *)((int)this + 0xc4);
  do {
    if ((pfVar3[-1] != 0.0) && (iVar6 = iVar6 + 1, *pfVar3 == 0.0)) {
      iVar5 = iVar5 + 1;
      iVar4 = iVar2;
    }
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 6;
  } while (iVar2 < 0x20);
  if ((iVar6 + local_8 == DAT_5015d8c8) && (0 < iVar6)) {
    FUN_50059f00(this,iVar5,iVar4);
    return;
  }
  if ((param_1 != '\0') && (iVar6 + local_8 < DAT_5015d8c8 + -1)) {
    iVar4 = 0;
    pfVar3 = (float *)((int)this + 0xc0);
    while ((pfVar3[-2] != 0.0 || (*pfVar3 != 0.0))) {
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 6;
      if (0x1f < iVar4) {
        return;
      }
    }
    *(undefined4 *)((int)this + (iVar4 * 3 + 0x18) * 8) = DAT_5015ccdc;
    if (*(int *)((int)this + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44;
    }
    if (*(int *)((int)this + 0x10) == 0) {
      _param_1 = 0;
    }
    else {
      _param_1 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44;
    }
    iVar6 = (*DAT_5015cb24)(0,iVar2 + -1);
    iStack_4 = 0;
    iVar5 = *(int *)(*(int *)((int)this + 0x10) + 0x40 + iVar6 * 0x44);
    while (*(int *)((int)this + 0x40) < iVar5) {
      iVar6 = (iVar6 + (iVar2 >> 1)) % _param_1;
      if (1 < iVar2) {
        iVar2 = iVar2 >> 1;
      }
      iStack_4 = iStack_4 + 1;
      if (iStack_4 == _param_1) {
        *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
        iVar6 = (*DAT_5015cb24)(0,iVar2 + -1);
        break;
      }
      iVar5 = *(int *)(*(int *)((int)this + 0x10) + 0x40 + iVar6 * 0x44);
    }
    piVar1 = (int *)((int)this + iVar4 * 0x18 + 0xb0);
    (*DAT_5015cb50)(*(undefined4 *)*piVar1,*(int *)((int)this + 0x10) + iVar6 * 0x44);
    *(undefined4 *)(*piVar1 + 0x14) = 0;
  }
  return;
}

