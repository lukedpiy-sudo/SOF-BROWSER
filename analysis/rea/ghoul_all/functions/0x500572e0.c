// rea decompile_all
// name: FUN_500572e0
// address: 0x500572e0
// body: available
// range: 0x500572e0-0x500573bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500572e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  
  iVar2 = param_1;
  iVar4 = (**(code **)(*DAT_5015c4d8 + 0x58))();
  if (iVar4 == 0) {
    param_2 = 0;
  }
  if (*(float *)(DAT_5015c8ac + 0x18) != 0.0) {
    (*DAT_5015ca28)(0,3,s__s____s_50142fac,*(int *)(param_1 + 0x74) + 0x2cc,param_3);
  }
  param_1 = 1;
  if (0 < DAT_5015d8c8) {
    iVar4 = 0x464;
    do {
      uVar5 = 0;
      iVar1 = DAT_5015cca0 + iVar4;
      if (((*(int *)(DAT_5015cca0 + 0x78 + iVar4) != 0) && (*(int *)(iVar1 + 0x74) != 0)) &&
         (*(int *)(iVar1 + 0x458) == 0)) {
        if (param_2 != 0) {
          uVar5 = 1;
          bVar3 = FUN_500887e0(iVar2,iVar1);
          if (CONCAT31(extraout_var,bVar3) == 0) goto LAB_5005739e;
        }
        (*DAT_5015ca2c)(iVar1,iVar2,uVar5,&DAT_50142fa8,param_3);
      }
LAB_5005739e:
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0x464;
    } while (param_1 <= DAT_5015d8c8);
  }
  return;
}

