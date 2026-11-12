// rea decompile_all
// name: FS_LoadFile
// address: 0x20025370
// body: available
// range: 0x20025370-0x20025419 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FS_LoadFile(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x25370  16  FS_LoadFile */
  iVar2 = FS_FOpenFile(param_1,&param_3,param_3);
  iVar1 = param_3;
  if (param_3 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
    return -1;
  }
  if (param_2 == (int *)0x0) {
    if ((undefined4 *)(&DAT_2026a9fc)[param_3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(&DAT_2026a9fc)[param_3])(1);
      (&DAT_2026a9fc)[iVar1] = 0;
      return iVar2;
    }
  }
  else {
    iVar3 = Z_Malloc(iVar2 + 2);
    *param_2 = iVar3;
    if ((int *)(&DAT_2026a9fc)[iVar1] != (int *)0x0) {
      (**(code **)(*(int *)(&DAT_2026a9fc)[iVar1] + 8))(iVar3,iVar2);
    }
    if ((undefined4 *)(&DAT_2026a9fc)[iVar1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(&DAT_2026a9fc)[iVar1])(1);
      (&DAT_2026a9fc)[iVar1] = 0;
    }
    *(undefined1 *)(iVar3 + iVar2) = 10;
    *(undefined1 *)(iVar3 + 1 + iVar2) = 0;
  }
  return iVar2;
}

