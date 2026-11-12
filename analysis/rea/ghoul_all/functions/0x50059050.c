// rea decompile_all
// name: FUN_50059050
// address: 0x50059050
// body: available
// range: 0x50059050-0x50059389 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50059050(void *this,int param_1,char *param_2)

{
  char *_Source;
  char *_Dest;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  iVar4 = 0;
  local_8 = 0;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x45c) != 0)) && (*(int *)((int)this + 0x10) != 0)) &&
     (local_4 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44, local_4 != 0)) {
    if (param_2 == (char *)0x0) {
      if (*(float *)(DAT_5015cb84 + 0x18) == 0.0) {
        iVar4 = *(int *)((int)this + 0x84);
        param_2 = *(char **)((int)this + 0x10);
        if ((param_2 + iVar4 * 0x44 == (char *)0x0) || (*(int *)((int)this + 0x88) <= iVar4)) {
          *(undefined4 *)((int)this + 0x84) = 1;
        }
        else {
          *(int *)((int)this + 0x84) = iVar4 + 1;
          param_2 = param_2 + iVar4 * 0x44;
        }
        if (*(int *)((int)this + 0x10) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44;
        }
        iVar5 = 0;
        if (0 < iVar4) {
          iVar2 = 0;
          do {
            iVar3 = __strcmpi(param_2,(char *)(iVar2 + *(int *)((int)this + 0x10)));
            if (iVar3 == 0) goto LAB_50059272;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + 0x44;
          } while (iVar5 < iVar4);
        }
        iVar5 = 0;
      }
      else {
        if (*(int *)((int)this + 0x10) != 0) {
          iVar4 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44;
        }
        if (*(int *)((int)this + 0x10) == 0) {
          param_2 = (char *)0x0;
        }
        else {
          param_2 = (char *)((*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44);
        }
        iVar5 = (*DAT_5015cb24)(0,iVar4 + -1);
        param_1 = 0;
        iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x40 + iVar5 * 0x44);
        while (*(int *)((int)this + 0x40) < iVar2) {
          iVar5 = (iVar5 + (iVar4 >> 1)) % (int)param_2;
          if (1 < iVar4) {
            iVar4 = iVar4 >> 1;
          }
          param_1 = param_1 + 1;
          if ((char *)param_1 == param_2) {
            *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
            iVar5 = (*DAT_5015cb24)(0,iVar4 + -1);
            break;
          }
          iVar2 = *(int *)(*(int *)((int)this + 0x10) + 0x40 + iVar5 * 0x44);
        }
      }
    }
    else {
      if (*(int *)((int)this + 0x10) == 0) {
        param_1 = 0;
      }
      else {
        param_1 = (*(int *)((int)this + 0x14) - *(int *)((int)this + 0x10)) / 0x44;
      }
      iVar5 = 0;
      if (0 < param_1) {
        do {
          iVar2 = __strcmpi(param_2,(char *)(iVar4 + *(int *)((int)this + 0x10)));
          if (iVar2 == 0) goto LAB_50059272;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar5 < param_1);
      }
      iVar5 = 0;
    }
LAB_50059272:
    _Dest = *(char **)(*(int *)(iVar1 + 0x45c) + 0x400);
    _Source = (char *)(*(int *)((int)this + 0x20) + iVar5 * 0x21c);
    local_8 = iVar5;
    _strncpy(_Dest,_Source,0x200);
    *(undefined4 *)(_Dest + 0x200) = *(undefined4 *)(_Source + 0x200);
    *(undefined4 *)(_Dest + 0x204) = *(undefined4 *)(_Source + 0x204);
    *(undefined4 *)(_Dest + 0x208) = *(undefined4 *)(_Source + 0x208);
    *(undefined4 *)(_Dest + 0x20c) = *(undefined4 *)(_Source + 0x20c);
    *(undefined4 *)(_Dest + 0x210) = *(undefined4 *)(_Source + 0x210);
    *(undefined4 *)(_Dest + 0x214) = *(undefined4 *)(_Source + 0x214);
    *(undefined4 *)(_Dest + 0x218) = *(undefined4 *)(_Source + 0x218);
    iVar4 = *(int *)((int)this + 0x10) + local_8 * 0x44;
    *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + 1;
    iVar4 = FUN_5005a400((void *)((int)this + 0x2c),&local_8);
    *(int *)(*(int *)(iVar1 + 0x45c) + 0x404) = iVar4;
    *(undefined4 *)(*(int *)(iVar1 + 0x45c) + 0x2a8) =
         *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x45c) + 0x400) + 0x214);
    *(undefined4 *)(*(int *)(iVar1 + 0x45c) + 0x2ac) =
         *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x45c) + 0x400) + 0x218);
    _strncpy((char *)(*(int *)(iVar1 + 0x74) + 0xcc),*(char **)(*(int *)(iVar1 + 0x45c) + 0x400),
             0x200);
  }
  return;
}

