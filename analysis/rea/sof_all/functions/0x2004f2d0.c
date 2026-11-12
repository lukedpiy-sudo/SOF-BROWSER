// rea decompile_all
// name: FUN_2004f2d0
// address: 0x2004f2d0
// body: available
// range: 0x2004f2d0-0x2004f396 inclusive
// range: 0x2004f3a0-0x2004f44f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004f2d0(int param_1)

{
  char cVar1;
  undefined2 extraout_var;
  int iVar2;
  
  DAT_20136a0c = (-(uint)(param_1 != 0) & 0xffffc578) + 0x4000;
  if (DAT_20390124 != param_1) {
    DAT_20390124 = param_1;
    if (param_1 != 0) {
      if (*(float *)(DAT_20390140 + 0x18) == 0.0) {
        FUN_2004ee30();
      }
      if (*(float *)(DAT_20390138 + 0x18) == 0.0) {
        FUN_2004f1b0();
      }
      if (*(float *)(DAT_20390134 + 0x18) == 0.0) {
        if (DAT_20390164 != (undefined4 *)0x0) {
          (**(code **)*DAT_20390164)(1);
          DAT_20390164 = (undefined4 *)0x0;
          return;
        }
      }
      else if (((DAT_20390164 == (undefined4 *)0x0) && (DAT_20390124 != 0)) &&
              (*(float *)(DAT_20390140 + 0x18) == 0.0)) {
        DAT_20390164 = operator_new(0x20);
        if (DAT_20390164 == (undefined4 *)0x0) {
          DAT_20390164 = (undefined4 *)0x0;
        }
        else {
          *DAT_20390164 = &PTR_FUN_20111e50;
          *(undefined1 *)(DAT_20390164 + 1) = 0;
          DAT_20390164[2] = 0xffffffff;
        }
        cVar1 = FUN_2004d830(CONCAT22(extraout_var,DAT_20390160));
        if (cVar1 == '\0') {
          if (DAT_20390164 != (undefined4 *)0x0) {
            (**(code **)*DAT_20390164)(1);
          }
          DAT_20390164 = (undefined4 *)0x0;
        }
      }
      return;
    }
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_20390118 + iVar2) != 0) {
        Ordinal_3(*(int *)((int)&DAT_20390118 + iVar2));
        *(undefined4 *)((int)&DAT_20390118 + iVar2) = 0;
      }
      if (*(int *)((int)&DAT_20390110 + iVar2) != 0) {
        Ordinal_3(*(int *)((int)&DAT_20390110 + iVar2));
        *(undefined4 *)((int)&DAT_20390110 + iVar2) = 0;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 8);
    if (DAT_20390164 != (undefined4 *)0x0) {
      (**(code **)*DAT_20390164)(1);
      DAT_20390164 = (undefined4 *)0x0;
    }
  }
  return;
}

