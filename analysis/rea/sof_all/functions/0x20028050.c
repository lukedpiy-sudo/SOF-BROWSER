// rea decompile_all
// name: FUN_20028050
// address: 0x20028050
// body: available
// range: 0x20028050-0x200280ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20028050(int *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 extraout_var;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(undefined2 *)(&DAT_2015ef94 + *param_1 * 0x18c);
    piVar2 = (int *)FUN_20069630(1,0);
    piVar2 = (int *)(**(code **)(*piVar2 + 0x24))(uVar1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x40))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
    }
    if (*param_1 == DAT_201e94c4 + 1) {
      piVar2 = (int *)FUN_20069630(1,0);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x24))(CONCAT22(extraout_var,DAT_201e7f04));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x40))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      }
    }
  }
  return;
}

