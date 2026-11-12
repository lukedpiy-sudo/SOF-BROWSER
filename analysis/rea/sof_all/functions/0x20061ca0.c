// rea decompile_all
// name: FUN_20061ca0
// address: 0x20061ca0
// body: available
// range: 0x20061ca0-0x20061f28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20061ca0(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_14;
  int local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar8 = 0;
  bVar1 = false;
  if ((param_2 == 3) || (param_2 == 0)) {
    local_14 = 0;
  }
  else {
    uVar2 = FUN_2001a980(param_1);
    local_14 = FUN_2001a600(uVar2);
  }
  switch(param_2) {
  case 3:
    bVar1 = true;
  case 0:
    *(byte *)(DAT_203f6c38 + param_3) = *(byte *)(DAT_203f6c38 + param_3) | 4;
    break;
  case 4:
    bVar1 = true;
  case 1:
    uVar2 = FUN_2001a980(param_1);
    uVar3 = FUN_2001a5c0(uVar2);
    local_14 = FUN_2001a600(uVar2);
    iVar8 = FUN_2001be20(uVar3);
    break;
  case 5:
    bVar1 = true;
  case 2:
    uVar2 = FUN_2001a980(param_1);
    uVar3 = FUN_2001a5c0(uVar2);
    local_14 = FUN_2001a600(uVar2);
    iVar8 = FUN_2001bd20(uVar3);
    break;
  default:
    Com_Error(0,s_SV_Multicast__bad_to__i_2013a29c,param_2);
  }
  piVar7 = DAT_20396eec;
  local_10 = 0;
  iVar4 = __ftol();
  if (0 < iVar4) {
    do {
      iVar4 = *piVar7;
      if (((iVar4 != 0) && (iVar4 != 1)) && ((iVar4 == 3 || (bVar1)))) {
        if (iVar8 != 0) {
          iVar4 = *(int *)(piVar7[0xa6] + 0x74);
          if (*(char *)(iVar4 + 0x68) == '\0') {
            pfVar5 = (float *)(piVar7[0xa6] + 4);
          }
          else {
            pfVar5 = &local_c;
            local_4 = *(float *)(iVar4 + 0x54) * 0.125;
            local_8 = *(float *)(iVar4 + 0x50) * 0.125;
            local_c = *(float *)(iVar4 + 0x4c) * 0.125;
          }
          uVar2 = FUN_2001a980(pfVar5);
          iVar4 = FUN_2001a5c0(uVar2);
          uVar2 = FUN_2001a600(uVar2);
          iVar6 = FUN_2001c090(local_14,uVar2);
          if ((iVar6 == 0) ||
             ((*(byte *)((iVar4 >> 3) + iVar8) & (byte)(1 << ((byte)iVar4 & 7))) == 0))
          goto LAB_20061eef;
        }
        iVar4 = DAT_203f6c40;
        if ((*(byte *)(DAT_203f6c38 + param_3) & 4) == 0) {
          if ((param_2 == 4) || (param_2 == 1)) {
            iVar4 = FUN_2001c370(piVar7[0xa6] + 4,param_1);
            if (iVar4 == 0) {
              *(byte *)(DAT_203f6c38 + param_3) = *(byte *)(DAT_203f6c38 + param_3) | 4;
              iVar4 = DAT_203f6c40;
            }
            else {
              iVar4 = DAT_203f6c40 + -6;
            }
          }
          else {
            iVar4 = DAT_203f6c40 + -6;
          }
        }
        if (bVar1) {
          FUN_2001e7b0(piVar7 + 0x14ad,DAT_203f6c38,iVar4);
        }
        else {
          FUN_2001e7b0(piVar7 + 0xb1,DAT_203f6c38,iVar4);
        }
      }
LAB_20061eef:
      local_10 = local_10 + 1;
      piVar7 = piVar7 + 0x34ab;
      iVar4 = __ftol();
    } while (local_10 < iVar4);
  }
  FUN_2001e730(&DAT_203f6c34);
  return;
}

