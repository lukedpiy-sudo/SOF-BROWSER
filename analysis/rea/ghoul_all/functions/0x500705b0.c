// rea decompile_all
// name: FUN_500705b0
// address: 0x500705b0
// body: available
// range: 0x500705b0-0x50070619 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong __fastcall FUN_500705b0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined3 uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x18);
  do {
    if (puVar1 == *(undefined4 **)(param_1 + 0x18)) {
LAB_500705ca:
      return CONCAT44(param_2,puVar1) & 0xffffffffffffff00;
    }
    if (puVar1[2] == param_3) {
      iVar4 = 0;
      lVar5 = __ftol();
      param_2 = (undefined4)((ulonglong)lVar5 >> 0x20);
      puVar1 = (undefined4 *)lVar5;
      if (0 < (int)puVar1) {
        piVar3 = (int *)(DAT_5015cca0 + 0x4d8);
        while( true ) {
          uVar2 = (undefined3)((ulonglong)lVar5 >> 8);
          if ((*(int *)(*piVar3 + 0x350) != 0) &&
             (*(int *)(*(int *)(*piVar3 + 0x350) + 8) == param_3)) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x119;
          if ((int)puVar1 <= iVar4) {
            return (ulonglong)CONCAT43(piVar3,uVar2) << 8;
          }
        }
        return CONCAT44(piVar3,CONCAT31(uVar2,1));
      }
      goto LAB_500705ca;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

