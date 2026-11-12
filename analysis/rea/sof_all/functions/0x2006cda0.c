// rea decompile_all
// name: FUN_2006cda0
// address: 0x2006cda0
// body: available
// range: 0x2006cda0-0x2006cee4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2006ce38) */

void FUN_2006cda0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  undefined1 auStack_4 [4];
  
  *(undefined1 *)((int)in_ECX + 0x37) = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  if ((in_ECX[0x33] != 0) && (piVar4 = *(int **)in_ECX[0x30], piVar4 != (int *)in_ECX[0x30])) {
    do {
      if (*(char *)(*(int *)((int)piVar4 + 8) + 0x15) == '\0') {
        iVar3 = FUN_20085550(*(int *)((int)piVar4 + 8));
LAB_2006cdf3:
        iVar5 = iVar3;
      }
      else {
        iVar3 = *(int *)((int)piVar4 + 4);
        iVar5 = (int)piVar4;
        if (piVar4 == (int *)*(int *)(iVar3 + 8)) {
          do {
            iVar5 = iVar3;
            iVar3 = *(int *)(iVar5 + 4);
          } while (iVar5 == *(int *)(iVar3 + 8));
        }
        if (*(int *)(iVar5 + 8) != iVar3) goto LAB_2006cdf3;
      }
      (**(code **)(*in_ECX + 0x34))(*(undefined4 *)((int)piVar4 + 0xc));
      piVar4 = (int *)iVar5;
    } while (iVar5 != in_ECX[0x30]);
  }
  (**(code **)(*in_ECX + 0x18))();
  FUN_2006a680();
  FUN_2006a680();
  in_ECX[0x50] = in_ECX[0x4f];
  piVar4 = (int *)in_ECX[0x35];
  piVar1 = (int *)*piVar4;
  if (((in_ECX[0x38] != 0) && (piVar2 = (int *)in_ECX[0x35], piVar1 == (int *)*piVar2)) &&
     (piVar4 == piVar2)) {
    piVar4 = (int *)piVar2[1];
    if ((int *)piVar2[1] != (int *)in_ECX[0x36]) {
      do {
        FUN_20074920(piVar4[2]);
        piVar1 = (int *)*piVar4;
        FUN_200f9f75(piVar4);
        piVar4 = piVar1;
      } while (piVar1 != (int *)in_ECX[0x36]);
    }
    *(int *)(in_ECX[0x35] + 4) = in_ECX[0x36];
    in_ECX[0x38] = 0;
    *(int *)in_ECX[0x35] = in_ECX[0x35];
    *(int *)(in_ECX[0x35] + 8) = in_ECX[0x35];
    return;
  }
  while (piVar1 != piVar4) {
    FUN_20085230();
    FUN_20072720(auStack_4,piVar1);
  }
  return;
}

