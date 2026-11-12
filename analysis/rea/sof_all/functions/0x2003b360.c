// rea decompile_all
// name: FUN_2003b360
// address: 0x2003b360
// body: available
// range: 0x2003b360-0x2003b510 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2003b360(void)

{
  int *piVar1;
  short sVar2;
  int *piVar3;
  undefined1 auStack_4 [4];
  
  DAT_202b34ac = &DAT_202b34b8;
  DAT_202b34a8 = 0;
  piVar3 = &DAT_202b3574;
  do {
    if ((((*(byte *)(piVar3 + -0x12) & 8) != 0) && ((int *)*piVar3 != (int *)0x0)) &&
       (sVar2 = (**(code **)(*(int *)*piVar3 + 0x9c))(), 0 < sVar2)) {
      (**(code **)(*(int *)*piVar3 + 0xd4))();
      *piVar3 = 0;
      *(byte *)(piVar3 + -0x12) = *(byte *)(piVar3 + -0x12) & 0xf7;
    }
    piVar3[-0x22] = 0;
    piVar3[-0x16] = (int)(piVar3 + 8);
    piVar3 = piVar3 + 0x37;
  } while ((int)piVar3 < 0x202ea574);
  _DAT_202ea440 = 0;
  piVar3 = &DAT_202ead84;
  do {
    if ((((*(byte *)(piVar3 + -0x12) & 8) != 0) && ((int *)*piVar3 != (int *)0x0)) &&
       (sVar2 = (**(code **)(*(int *)*piVar3 + 0x9c))(), 0 < sVar2)) {
      (**(code **)(*(int *)*piVar3 + 0xd4))();
      *piVar3 = 0;
      *(byte *)(piVar3 + -0x12) = *(byte *)(piVar3 + -0x12) & 0xf7;
    }
    piVar3[-0x14] = 0;
    piVar3[-0x22] = 0;
    piVar3 = piVar3 + 0x37;
  } while ((int)piVar3 < 0x20321d84);
  piVar3 = &DAT_2027c54c;
  do {
    if ((((*(byte *)(piVar3 + -0x12) & 8) != 0) && ((int *)*piVar3 != (int *)0x0)) &&
       (sVar2 = (**(code **)(*(int *)*piVar3 + 0x9c))(), 0 < sVar2)) {
      (**(code **)(*(int *)*piVar3 + 0xd4))();
      *piVar3 = 0;
      *(byte *)(piVar3 + -0x12) = *(byte *)(piVar3 + -0x12) & 0xf7;
    }
    piVar3[-0x14] = 0;
    piVar3[-0x22] = 0;
    piVar1 = DAT_202b3498;
    piVar3 = piVar3 + 0x37;
  } while ((int)piVar3 < 0x202b354c);
  piVar3 = (int *)*DAT_202b3498;
  if (DAT_202b34a4 == 0) {
    DAT_202b34a4 = 0;
    while (piVar3 != piVar1) {
      FUN_20075f90();
      FUN_20073590(auStack_4,piVar3);
    }
    return;
  }
  piVar3 = (int *)DAT_202b3498[1];
  if ((int *)DAT_202b3498[1] != DAT_202b349c) {
    do {
      FUN_2003c230(piVar3[2]);
      piVar1 = (int *)*piVar3;
      FUN_20048b50(0);
      FUN_200f9f75(piVar3);
      piVar3 = piVar1;
    } while (piVar1 != DAT_202b349c);
  }
  DAT_202b3498[1] = (int)DAT_202b349c;
  DAT_202b34a4 = 0;
  *DAT_202b3498 = (int)DAT_202b3498;
  DAT_202b3498[2] = (int)DAT_202b3498;
  return;
}

