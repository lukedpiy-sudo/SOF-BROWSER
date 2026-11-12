// rea decompile_all
// name: FUN_20061a80
// address: 0x20061a80
// body: available
// range: 0x20061a80-0x20061c82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20061a80(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = param_2;
  uVar5 = param_1;
  iVar9 = 0;
  bVar1 = false;
  if ((param_2 == 3) || (param_2 == 0)) {
    param_1 = 0;
  }
  else {
    uVar2 = FUN_2001a980(param_1);
    param_1 = FUN_2001a600(uVar2);
  }
  if (DAT_2039df00 != 0) {
    FUN_2001e7b0(&DAT_2039df04,DAT_203f6c38,DAT_203f6c40);
  }
  switch(param_2) {
  case 3:
    bVar1 = true;
  case 0:
    param_2 = 0;
    break;
  case 4:
    bVar1 = true;
  case 1:
    uVar5 = FUN_2001a980(uVar5);
    uVar5 = FUN_2001a5c0(uVar5);
    param_2 = FUN_2001be20(uVar5);
    break;
  case 5:
    bVar1 = true;
  case 2:
    uVar5 = FUN_2001a980(uVar5);
    uVar5 = FUN_2001a5c0(uVar5);
    param_2 = FUN_2001bd20(uVar5);
    break;
  default:
    param_2 = 0;
    Com_Error(0,s_SV_Multicast__bad_to__i_2013a29c,iVar3);
  }
  piVar8 = DAT_20396eec;
  iVar3 = __ftol();
  if (0 < iVar3) {
    do {
      iVar3 = *piVar8;
      if ((((iVar3 != 0) && (iVar3 != 1)) && ((iVar3 == 3 || (bVar1)))) && (iVar9 != param_3 + -1))
      {
        if (param_2 != 0) {
          iVar3 = *(int *)(piVar8[0xa6] + 0x74);
          if (*(char *)(iVar3 + 0x68) == '\0') {
            pfVar4 = (float *)(piVar8[0xa6] + 4);
          }
          else {
            pfVar4 = &local_c;
            local_4 = *(float *)(iVar3 + 0x54) * 0.125;
            local_8 = *(float *)(iVar3 + 0x50) * 0.125;
            local_c = *(float *)(iVar3 + 0x4c) * 0.125;
          }
          uVar5 = FUN_2001a980(pfVar4);
          iVar3 = FUN_2001a5c0(uVar5);
          uVar5 = FUN_2001a600(uVar5);
          iVar6 = FUN_2001c090(param_1,uVar5);
          if ((iVar6 == 0) ||
             ((*(byte *)((iVar3 >> 3) + param_2) & (byte)(1 << ((byte)iVar3 & 7))) == 0))
          goto LAB_20061c51;
        }
        piVar7 = piVar8 + 0x14ad;
        if (!bVar1) {
          piVar7 = piVar8 + 0xb1;
        }
        FUN_2001e7b0(piVar7,DAT_203f6c38,DAT_203f6c40);
      }
LAB_20061c51:
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 0x34ab;
      iVar3 = __ftol();
    } while (iVar9 < iVar3);
  }
  FUN_2001e730(&DAT_203f6c34);
  return;
}

