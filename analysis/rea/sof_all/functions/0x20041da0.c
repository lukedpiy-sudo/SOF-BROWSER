// rea decompile_all
// name: FUN_20041da0
// address: 0x20041da0
// body: available
// range: 0x20041da0-0x20041f78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20041da0(int param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  if ((*(float *)(DAT_2036437c + 0x18) == 0.0) ||
     ((*(float *)(DAT_20364378 + 0x18) != 0.0 &&
      ((float)(int)param_3 != *(float *)(DAT_20364378 + 0x18))))) {
    if (param_1 == 0) {
      return;
    }
    *in_ECX = param_1;
  }
  else {
    *in_ECX = (int)&DAT_20364548;
  }
  FUN_20042640(param_2);
  iVar4 = *in_ECX;
  pfVar3 = (float *)(iVar4 + 4);
  in_ECX[0xcf] = (int)DAT_2027c478;
  if (*pfVar3 == *(float *)(iVar4 + 8)) {
    fVar5 = (float10)*pfVar3;
  }
  else {
    fVar5 = (float10)flrand(*pfVar3,*(undefined4 *)(iVar4 + 8));
  }
  iVar4 = 0;
  in_ECX[0xd1] = 0;
  in_ECX[0xd0] = (int)(float)(fVar5 + (float10)(float)in_ECX[0xcf]);
  if (0 < *(int *)(*in_ECX + 0x14)) {
    param_3 = (float *)(in_ECX + 0x25);
    pfVar3 = (float *)(in_ECX + 0x3a);
    do {
      piVar1 = (int *)FUN_2002e3b0(iVar4);
      if ((*(int *)(*in_ECX + 0x68) == -1) || (*(int *)(*in_ECX + 0x68) == iVar4)) {
        if (piVar1 == (int *)0x0) {
          *param_3 = 0.0;
        }
        else {
          iVar2 = (**(code **)(*piVar1 + 0x14))();
          if (iVar2 == 0) {
            pfVar3[-1] = (float)in_ECX;
            pfVar3[-2] = (float)piVar1;
            if ((float)piVar1[2] == (float)piVar1[3]) {
              fVar5 = (float10)(float)piVar1[2];
            }
            else {
              fVar5 = (float10)flrand(piVar1[2],piVar1[3]);
            }
            *pfVar3 = (float)((float10)DAT_2027c478 + fVar5);
            if ((float)piVar1[6] == (float)piVar1[7]) {
              fVar5 = (float10)(float)piVar1[6];
            }
            else {
              fVar5 = (float10)flrand(piVar1[6],piVar1[7]);
            }
            pfVar3[1] = *pfVar3;
            pfVar3[3] = 0.0;
            pfVar3[-0xb] = 0.0;
            pfVar3[2] = (float)(fVar5 + (float10)*pfVar3);
            pfVar3[4] = 0.0;
            *param_3 = -1.0;
          }
          else if ((float)piVar1[2] == (float)piVar1[3]) {
            *param_3 = (float)piVar1[2] + (float)in_ECX[0xcf];
          }
          else {
            fVar5 = (float10)flrand(piVar1[2],piVar1[3]);
            *param_3 = (float)(fVar5 + (float10)(float)in_ECX[0xcf]);
          }
        }
      }
      else {
        *param_3 = 0.0;
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 1;
      pfVar3 = pfVar3 + 0x10;
    } while (iVar4 < *(int *)(*in_ECX + 0x14));
  }
  return;
}

