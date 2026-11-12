// rea decompile_all
// name: FUN_500b4540
// address: 0x500b4540
// body: available
// range: 0x500b4540-0x500b466e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl
FUN_500b4540(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            char *param_6)

{
  void *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  puVar4 = param_1;
  puVar5 = (undefined4 *)0x0;
  if ((param_1 != (undefined4 *)0x0) && ((int *)param_1[0x59] != (int *)0x0)) {
    if (param_1[0x84] != 0) {
      puVar5 = FUN_500b4320((int *)param_1[0x59],param_2,param_3,param_4,param_5,param_6);
      if (puVar5 != (undefined4 *)0x0) {
        this = (void *)puVar4[0x84];
        iVar1 = *(int *)((int)this + 0x24);
        if (iVar1 < DAT_5014d1b4) {
          iVar2 = iVar1 + 1;
          *(int *)((int)this + 0x24) = iVar2;
          if ((iVar2 <= DAT_5014d1b4) && (0 < iVar2)) {
            *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 1 << ((byte)iVar1 & 0x1f);
          }
        }
        param_1 = puVar5;
        param_4 = puVar5;
        FUN_5006b100(&DAT_5018b490,&param_5,(uint *)&param_1);
        if (param_5 == DAT_5018b494) {
          param_6 = DAT_501546ec;
          DAT_501546ec = DAT_501546ec + 1;
          local_10 = param_1;
          local_c = 0;
          piVar3 = (int *)FUN_5000a2e0(&DAT_5018b490,local_8,(uint *)&local_10);
          *(char **)(*piVar3 + 0x10) = param_6;
          puVar4 = (undefined4 *)FUN_50010ba0(&DAT_5018b4a4,(int *)&param_6);
          *puVar4 = param_1;
        }
        FUN_500632d0(this,*(undefined4 **)((int)this + 8),1,&param_4);
      }
    }
    return puVar5;
  }
  return (undefined4 *)0x0;
}

