// rea decompile_all
// name: FUN_20038490
// address: 0x20038490
// body: available
// range: 0x20038490-0x200384fa inclusive
// range: 0x2003865d-0x20038682 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20038490(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar2 = FUN_20042630();
    if (iVar2 != 0) {
      iVar2 = FUN_20042630();
      uVar3 = *(uint *)(iVar2 + 0x1b4);
      iVar2 = FUN_20042630();
      fVar1 = *(float *)(iVar2 + 200) * 255.0;
      iVar2 = param_1;
      FUN_20042630(param_1);
      FUN_20031be0(iVar2);
      if (3 < uVar3) {
        if (0xff < (int)fVar1) {
          *(undefined1 *)(param_1 + 0x2f) = 0xff;
          return;
        }
        if ((int)fVar1 < 0) {
          *(undefined1 *)(param_1 + 0x2f) = 0;
          return;
        }
        *(char *)(param_1 + 0x2f) = SUB41(fVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x200384f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_20038684)[uVar3])();
  return;
}

