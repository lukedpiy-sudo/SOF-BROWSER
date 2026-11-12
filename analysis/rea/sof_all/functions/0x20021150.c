// rea decompile_all
// name: FUN_20021150
// address: 0x20021150
// body: available
// range: 0x20021150-0x20021259 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20021150(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  puVar4 = operator_new(0x28);
  iVar9 = 0;
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0x100;
  }
  iVar5 = FUN_20055930();
  uVar3 = rdtsc();
  *puVar4 = (uint)uVar3;
  puVar4[1] = (uint)((ulonglong)uVar3 >> 0x20);
  do {
    iVar6 = FUN_20055930();
  } while (iVar6 < iVar5 + 0x65);
  uVar3 = rdtsc();
  puVar4[2] = (uint)uVar3;
  puVar4[3] = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = puVar4[2];
  uVar7 = uVar1 - *puVar4;
  uVar8 = uVar7 - 0x5b;
  iVar5 = ((puVar4[3] - puVar4[1]) - (uint)(uVar1 < *puVar4)) - (uint)(uVar7 < 0x5b);
  if ((iVar5 < 1) && (iVar5 < 0)) {
    uVar8 = 0;
    iVar5 = 0;
  }
  uVar1 = puVar4[4];
  uVar7 = puVar4[6];
  puVar4[4] = uVar1 + 1;
  puVar4[5] = puVar4[5] + (uint)(0xfffffffe < uVar1);
  uVar1 = puVar4[4];
  puVar4[6] = uVar7 + uVar8;
  uVar2 = puVar4[5];
  uVar7 = puVar4[7] + iVar5 + (uint)CARRY4(uVar7,uVar8);
  puVar4[7] = uVar7;
  if (uVar1 != 0 || uVar2 != 0) {
    iVar9 = __alldiv(puVar4[6],uVar7,uVar1,uVar2);
    iVar5 = (int)puVar4[8] >> 0x1f;
    if ((iVar5 <= (int)uVar2) && ((iVar5 < (int)uVar2 || (puVar4[8] < uVar1)))) {
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
    }
  }
  FUN_200f9f75(puVar4);
  return iVar9 / 100000;
}

