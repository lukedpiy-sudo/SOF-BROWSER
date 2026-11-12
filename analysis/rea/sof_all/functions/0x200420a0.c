// rea decompile_all
// name: FUN_200420a0
// address: 0x200420a0
// body: available
// range: 0x200420a0-0x200424e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200420a0(void)

{
  ushort uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    return;
  }
  while (*(float *)(*in_ECX + 0x6c) < DAT_2027c478) {
    *(undefined4 *)(*in_ECX + 0x88) = 0;
    iVar2 = *(int *)(*in_ECX + 0x60);
    *in_ECX = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  pfVar3 = (float *)*in_ECX;
  if (pfVar3 == (float *)0x0) {
    return;
  }
  pfVar4 = (float *)pfVar3[0x18];
  if (((uint)pfVar3[0x1d] & 8) == 0) {
    fVar5 = pfVar3[0xe];
    in_ECX[1] = (int)*pfVar3;
    in_ECX[2] = (int)pfVar3[1];
    in_ECX[3] = (int)pfVar3[2];
    in_ECX[4] = (int)*pfVar3;
    in_ECX[5] = (int)pfVar3[1];
    fVar6 = pfVar3[2];
    if (((uint)fVar5 & 4) != 0) {
      in_ECX[6] = (int)fVar6;
      if ((float)in_ECX[1] <= pfVar3[3]) {
        in_ECX[4] = (int)pfVar3[3];
      }
      else {
        in_ECX[1] = (int)pfVar3[3];
      }
      if ((float)in_ECX[2] <= pfVar3[4]) {
        in_ECX[5] = (int)pfVar3[4];
      }
      else {
        in_ECX[2] = (int)pfVar3[4];
      }
      if (pfVar3[5] < (float)in_ECX[3]) {
        in_ECX[3] = (int)pfVar3[5];
        goto LAB_2004218a;
      }
      fVar6 = pfVar3[5];
    }
  }
  else {
    in_ECX[1] = (int)pfVar3[10];
    in_ECX[2] = (int)pfVar3[0xb];
    in_ECX[3] = (int)pfVar3[0xc];
    in_ECX[4] = (int)pfVar3[10];
    in_ECX[5] = (int)pfVar3[0xb];
    fVar6 = pfVar3[0xc];
  }
  in_ECX[6] = (int)fVar6;
LAB_2004218a:
  uVar1 = *(ushort *)(pfVar3 + 0xe);
  if ((((uVar1 & 1) != 0) && (((uint)pfVar3[0x1d] & 8) == 0)) &&
     ((*(byte *)(in_ECX[9] + 0x160) & 0x10) == 0)) {
    pfVar3[0x1b] = DAT_2027c478 - 1.0;
  }
  if (((pfVar3[0x1b] - DAT_2027c478 < 0.05) || ((uVar1 & 1) != 0)) ||
     (((uint)pfVar3[0x1d] & 8) != 0)) {
    fVar6 = 0.0;
  }
  else if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 2) == 0) {
      fVar6 = pfVar3[6] * 5.0;
    }
    else {
      fVar6 = pfVar3[4] * pfVar3[3];
    }
  }
  else {
    fVar6 = pfVar3[4] * pfVar3[3] * 0.5;
  }
  in_ECX[7] = (int)fVar6;
  in_ECX[8] = 1;
  if (((uint)pfVar3[0x1d] & 8) != 0) {
    FUN_20016690(pfVar3,0);
  }
  do {
    while( true ) {
      if (pfVar4 == (float *)0x0) {
        if (((*(byte *)(*in_ECX + 0x74) & 8) == 0) && (*in_ECX != 0)) {
          FUN_200166f0();
        }
        return;
      }
      if (DAT_2027c478 <= pfVar4[0x1b]) break;
      pfVar4 = (float *)pfVar4[0x18];
      pfVar3[0x18] = (float)pfVar4;
    }
    if (((uint)pfVar4[0x1d] & 8) == 0) {
      if (((uint)pfVar4[0xe] & 4) == 0) {
        if (*pfVar4 < (float)in_ECX[1]) {
          in_ECX[1] = (int)*pfVar4;
        }
        if (pfVar4[1] < (float)in_ECX[2]) {
          in_ECX[2] = (int)pfVar4[1];
        }
        if (pfVar4[2] < (float)in_ECX[3]) {
          in_ECX[3] = (int)pfVar4[2];
        }
        if ((float)in_ECX[4] < *pfVar4) {
          in_ECX[4] = (int)*pfVar4;
        }
        if ((float)in_ECX[5] < pfVar4[1]) {
          in_ECX[5] = (int)pfVar4[1];
        }
        if ((float)in_ECX[6] < pfVar4[2]) {
          fVar6 = pfVar4[2];
          goto LAB_2004241e;
        }
      }
      else {
        if (*pfVar4 < (float)in_ECX[1]) {
          in_ECX[1] = (int)*pfVar4;
        }
        if (pfVar4[1] < (float)in_ECX[2]) {
          in_ECX[2] = (int)pfVar4[1];
        }
        if (pfVar4[2] < (float)in_ECX[3]) {
          in_ECX[3] = (int)pfVar4[2];
        }
        if (*pfVar4 < (float)in_ECX[1]) {
          in_ECX[4] = (int)*pfVar4;
        }
        if (pfVar4[1] < (float)in_ECX[2]) {
          in_ECX[5] = (int)pfVar4[1];
        }
        if (pfVar4[2] < (float)in_ECX[3]) {
          in_ECX[6] = (int)pfVar4[2];
        }
        if (pfVar4[3] < (float)in_ECX[1]) {
          in_ECX[1] = (int)pfVar4[3];
        }
        if (pfVar4[4] < (float)in_ECX[2]) {
          in_ECX[2] = (int)pfVar4[4];
        }
        if (pfVar4[5] < (float)in_ECX[3]) {
          in_ECX[3] = (int)pfVar4[5];
        }
        if (pfVar4[3] < (float)in_ECX[1]) {
          in_ECX[4] = (int)pfVar4[3];
        }
        if (pfVar4[4] < (float)in_ECX[2]) {
          in_ECX[5] = (int)pfVar4[4];
        }
        if (pfVar4[5] < (float)in_ECX[3]) {
          fVar6 = pfVar4[5];
LAB_2004241e:
          in_ECX[6] = (int)fVar6;
        }
      }
    }
    else {
      if (pfVar4[10] < (float)in_ECX[1]) {
        in_ECX[1] = (int)pfVar4[10];
      }
      if (pfVar4[0xb] < (float)in_ECX[2]) {
        in_ECX[2] = (int)pfVar4[0xb];
      }
      if (pfVar4[0xc] < (float)in_ECX[3]) {
        in_ECX[3] = (int)pfVar4[0xc];
      }
      if ((float)in_ECX[4] < pfVar4[10]) {
        in_ECX[4] = (int)pfVar4[10];
      }
      if ((float)in_ECX[5] < pfVar4[0xb]) {
        in_ECX[5] = (int)pfVar4[0xb];
      }
      if ((float)in_ECX[6] < pfVar4[0xc]) {
        fVar6 = pfVar4[0xc];
        goto LAB_2004241e;
      }
    }
    if (((((uint)pfVar4[0xe] & 1) != 0) && (((uint)pfVar3[0x1d] & 8) == 0)) &&
       ((*(byte *)(in_ECX[9] + 0x160) & 0x10) == 0)) {
      pfVar4[0x1b] = DAT_2027c478 - 1.0;
    }
    if (pfVar4[0x18] == 0.0) {
      in_ECX[0xf] = (int)pfVar4;
    }
    if (((uint)pfVar4[0x1d] & 8) != 0) {
      FUN_20016690(pfVar4,0);
    }
    if (((pfVar4[0x1b] - DAT_2027c478 < 0.05) || (fVar6 = pfVar4[0xe], ((uint)fVar6 & 1) != 0)) ||
       (((uint)pfVar4[0x1d] & 8) != 0)) {
      fVar6 = 0.0;
    }
    else if (((uint)fVar6 & 0x10) == 0) {
      if (((uint)fVar6 & 2) == 0) {
        fVar6 = pfVar4[6] * 5.0;
      }
      else {
        fVar6 = pfVar4[4] * pfVar4[3];
      }
    }
    else {
      fVar6 = pfVar4[4] * pfVar4[3] * 0.5;
    }
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[7] = (int)(fVar6 + (float)in_ECX[7]);
    pfVar3 = pfVar4;
    pfVar4 = (float *)pfVar4[0x18];
  } while( true );
}

