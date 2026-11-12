// rea decompile_all
// name: FUN_200434d0
// address: 0x200434d0
// body: available
// range: 0x200434d0-0x200435f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200434d0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  if (0 < *in_ECX) {
    pbVar3 = (byte *)(in_ECX + 0x27);
    pbVar6 = param_1;
    pbVar2 = pbVar3;
LAB_200434f3:
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_20043517;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
          if (bVar1 != 0) goto LAB_200434f3;
        }
        iVar4 = 0;
      }
      else {
LAB_20043517:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar4 == 0) {
        return in_ECX + iVar7 * 0x1b + 0x1d;
      }
      iVar7 = iVar7 + 1;
      pbVar3 = pbVar2 + 0x6c;
      pbVar6 = param_1;
      pbVar2 = pbVar3;
    } while (iVar7 < *in_ECX);
  }
  iVar7 = in_ECX[1];
  iVar4 = 0;
  if (0 < iVar7) {
    pbVar3 = (byte *)(in_ECX + 0x1b0c);
    pbVar6 = param_1;
    pbVar2 = pbVar3;
LAB_20043545:
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 == *pbVar6) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_2004357d;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
          if (bVar1 != 0) goto LAB_20043545;
        }
        iVar5 = 0;
      }
      else {
LAB_2004357d:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar5 == 0) {
        return in_ECX + iVar4 * 0x1b + 0x1b02;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar2 + 0x6c;
      pbVar6 = param_1;
      pbVar2 = pbVar3;
    } while (iVar4 < iVar7);
  }
  if (0xff < iVar7) {
    return (int *)0x0;
  }
  FUN_2002db00(param_1);
  iVar7 = in_ECX[1];
  in_ECX[1] = iVar7 + 1;
  return in_ECX + (iVar7 + 1) * 0x1b + 0x1ae7;
}

