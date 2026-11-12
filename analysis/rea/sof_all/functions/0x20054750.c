// rea decompile_all
// name: FUN_20054750
// address: 0x20054750
// body: available
// range: 0x20054750-0x20054ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200548f5 to 0x20054260 FUN_20054260 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20054906 to 0x20054260 FUN_20054260 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20054aa0 to 0x20054260 FUN_20054260 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20054acf to 0x20054260 FUN_20054260 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x20054ae0 to 0x20054260 FUN_20054260 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20054750(int *param_1)

{
  float fVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  float10 fVar7;
  
  DAT_20390290 = param_1;
  param_1[0xe] = 0;
  piVar3 = DAT_20390290;
  DAT_20390290[0x2f] = 0;
  piVar3[0x30] = 0;
  piVar3[0x31] = 0;
  DAT_20390290[0x32] = 0;
  DAT_20390290[0x39] = 0;
  DAT_20390290[0x3a] = 0;
  DAT_20390290[0x3b] = 0;
  puVar6 = &DAT_20390220;
  for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  DAT_20390220 = (float)(int)(short)DAT_20390290[1] * 0.125;
  DAT_20390224 = (float)(int)*(short *)((int)DAT_20390290 + 6) * 0.125;
  DAT_20390228 = (float)(int)(short)DAT_20390290[2] * 0.125;
  DAT_2039022c = (float)(int)*(short *)((int)DAT_20390290 + 10) * 0.125;
  DAT_20390230 = (float)(int)(short)DAT_20390290[3] * 0.125;
  DAT_20390234 = (float)(int)*(short *)((int)DAT_20390290 + 0xe) * 0.125;
  _DAT_2039027c = (float)(int)(short)DAT_20390290[1];
  _DAT_20390280 = (float)(int)*(short *)((int)DAT_20390290 + 6);
  _DAT_20390284 = (float)(int)(short)DAT_20390290[2];
  DAT_2039025c = (float)*(byte *)(DAT_20390290 + 7) * 0.001;
  if ((float)DAT_20390290[0x3f] < 0.0 == ((float)DAT_20390290[0x3f] == 0.0)) {
    _DAT_2039028c = 1.0 - (float)DAT_20390290[0x3f];
    if (_DAT_2039028c < 0.0) {
      _DAT_2039028c = 0.0;
    }
  }
  else {
    _DAT_2039028c = 1.0;
  }
  FUN_20054640();
  iVar4 = *DAT_20390290;
  if (iVar4 == 1) {
    FUN_20053a40();
    FUN_20054260();
    return;
  }
  if (iVar4 == 2) {
    FUN_20053cf0();
    FUN_20054260();
    return;
  }
  if (2 < iVar4) {
    *(undefined2 *)((int)DAT_20390290 + 0x26) = 0;
    *(undefined2 *)(DAT_20390290 + 10) = 0;
    *(undefined2 *)((int)DAT_20390290 + 0x2a) = 0;
  }
  if ((*DAT_20390290 != 5) && (*DAT_20390290 != 7)) {
    FUN_20054000();
    if (DAT_20390290[0xd] != 0) {
      FUN_20054470();
    }
    FUN_20053500();
    if ((*DAT_20390290 == 3) && (DAT_20390290[0x39] != 0)) {
      fVar7 = (float10)VectorLength(&DAT_2039022c);
      fVar7 = fVar7 - (float10)20.0;
      fVar1 = (float)fVar7;
      if (fVar7 < (float10)0.0 == (fVar7 == (float10)0.0)) {
        VectorNormalize(&DAT_2039022c);
        DAT_2039022c = DAT_2039022c * fVar1;
        DAT_20390230 = DAT_20390230 * fVar1;
        DAT_20390234 = DAT_20390234 * fVar1;
      }
      else {
        DAT_2039022c = 0.0;
        DAT_20390230 = 0.0;
        DAT_20390234 = 0.0;
      }
    }
    FUN_20053890();
    bVar2 = *(byte *)((int)DAT_20390290 + 0x11);
    if (bVar2 != 0) {
      bVar5 = *(byte *)(DAT_20390290 + 7) >> 3;
      if (bVar5 == 0) {
        bVar5 = 1;
      }
      if (bVar5 < bVar2) {
        *(byte *)((int)DAT_20390290 + 0x11) = bVar2 - bVar5;
      }
      else {
        *(byte *)(DAT_20390290 + 4) = *(byte *)(DAT_20390290 + 4) & 199;
        *(undefined1 *)((int)DAT_20390290 + 0x11) = 0;
      }
    }
    if ((*(byte *)(DAT_20390290 + 4) & 0x20) == 0) {
      if ((*(byte *)(DAT_20390290 + 4) & 8) != 0) {
        DAT_20390234 = DAT_20390234 -
                       (float)(int)*(short *)((int)DAT_20390290 + 0x12) * DAT_2039025c;
        if (DAT_20390234 < 0.0) {
          *(byte *)(DAT_20390290 + 4) = *(byte *)(DAT_20390290 + 4) & 199;
          *(undefined1 *)((int)DAT_20390290 + 0x11) = 0;
        }
        FUN_20052a10(1);
        FUN_20053500();
        FUN_20054260();
        return;
      }
      if (*DAT_20390290 != 6) {
        FUN_200537c0();
        FUN_20052c90();
        if (1 < DAT_20390290[0x3b]) {
          FUN_20053050();
          FUN_20053500();
          FUN_20054260();
          return;
        }
        FUN_200531a0();
      }
    }
    FUN_20053500();
    FUN_20054260();
    return;
  }
  return;
}

