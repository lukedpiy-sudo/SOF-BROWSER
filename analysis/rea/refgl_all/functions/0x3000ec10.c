// rea decompile_all
// name: FUN_3000ec10
// address: 0x3000ec10
// body: available
// range: 0x3000ec10-0x3000f00c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3000ec10(void)

{
  float fVar1;
  float fVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  float local_18;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  DAT_3008fd90 = DAT_3008fd90 + 1;
  DAT_3008fecc = DAT_3008fd04;
  DAT_3008fed0 = DAT_3008fd08;
  DAT_3008fed4 = DAT_3008fd0c;
  FUN_3001ca90((float *)&DAT_3008fd10,(float *)&DAT_3008fd7c,(float *)&DAT_3008ff30,
               (float *)&DAT_3008fd94);
  if ((DAT_3008fd3c & 2) == 0) {
    DAT_3008fd6c = DAT_3008fe3c;
    DAT_3008fc50 = DAT_3008fdb8;
    DAT_3008fb94 = (byte *)FUN_3000a400(&DAT_3008fecc,DAT_3008fc6c);
    DAT_3008fdb8 = *(int *)(DAT_3008fb94 + 0x24);
    local_c = DAT_3008fecc;
    local_8 = DAT_3008fed0;
    if (*(int *)DAT_3008fb94 == 0) {
      local_4 = DAT_3008fed4 - 16.0;
    }
    else {
      local_4 = DAT_3008fed4 + 16.0;
    }
    DAT_3008fe3c = DAT_3008fdb8;
    pbVar3 = (byte *)FUN_3000a400(&local_c,DAT_3008fc6c);
    if (((*pbVar3 & 1) == 0) && (*(int *)(pbVar3 + 0x24) != DAT_3008fdb8)) {
      DAT_3008fdb8 = *(int *)(pbVar3 + 0x24);
      DAT_3008fb94 = pbVar3;
    }
  }
  _DAT_3008fc9c = DAT_3008fd1c;
  _DAT_3008fca0 = DAT_3008fd20;
  _DAT_3008fca4 = DAT_3008fd24;
  _DAT_3008fca8 = DAT_3008fd28;
  if ((((*(float *)(DAT_3008fd70 + 0x18) != 0.0) && (DAT_3008fb94 != (byte *)0x0)) &&
      ((*DAT_3008fb94 & 1) == 0)) && ((DAT_3008fe3c != -1 && (*(int *)(DAT_3008fc6c + 0xdc) != 0))))
  {
    iVar5 = 0x400000;
    if (*(float *)(DAT_3008fc5c + 0x18) == 0.0) {
      iVar5 = 0x1000000;
    }
    if (((700 < DAT_3008fda0) || (iVar4 = (**(code **)(*DAT_300aa4a0 + 0xac))(), 0xdac < iVar4)) ||
       (((*(int *)(DAT_3008fc88 + 0x18) == 0x40000000 ||
         (*(int *)(DAT_3008fd70 + 0x18) == 0x40000000)) && (iVar5 < DAT_300a4868)))) {
      _DAT_3008fca8 = 0.0;
      _DAT_3008fca4 = 0;
      _DAT_3008fca0 = 0;
      _DAT_3008fc9c = 0;
      if (DAT_3008fda0 < 0x2bd) {
        local_18 = 0.0;
      }
      else {
        _DAT_3008fc9c = 0x3f800000;
        local_18 = (float)(DAT_3008fda0 + -700) * 0.006666667 + 0.2;
        if (1.0 < local_18) {
          local_18 = 1.0;
        }
      }
      iVar4 = (**(code **)(*DAT_300aa4a0 + 0xac))();
      if (iVar4 < 0xdad) {
        fVar1 = 0.0;
      }
      else {
        _DAT_3008fca0 = 0x3f800000;
        iVar4 = (**(code **)(*DAT_300aa4a0 + 0xac))();
        fVar1 = (float)(iVar4 + -0xdac) * 0.001 + 0.2;
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      if (((*(int *)(DAT_3008fc88 + 0x18) == 0x40000000) ||
          (*(int *)(DAT_3008fd70 + 0x18) == 0x40000000)) && (iVar5 < DAT_300a4868)) {
        _DAT_3008fca4 = 0x3f800000;
        fVar2 = ((float)(DAT_300a4868 - iVar5) / (float)iVar5) * 0.5 + 0.2;
      }
      else {
        fVar2 = 0.0;
      }
      _DAT_3008fca8 = fVar2 + fVar1 + local_18;
      if (1.0 < _DAT_3008fca8) {
        _DAT_3008fca8 = 1.0;
      }
    }
  }
  _DAT_3008fc58 = DAT_3008fda0;
  DAT_3008feb8 = 0;
  DAT_3008fda0 = 0;
  (**(code **)(*DAT_300aa4a0 + 0xc0))();
  if ((DAT_3008fd3c & 2) != 0) {
    (*DAT_300a45fc)(0xc11);
    (*DAT_300a4258)(0x3e99999a,0x3e99999a,0x3e99999a,0x3f800000);
    (*DAT_300a46ec)(DAT_3008fcec,(DAT_3008ffc8 - DAT_3008fcf0) - DAT_3008fcf8,DAT_3008fcf4,
                    DAT_3008fcf8);
    (*DAT_300a45d4)(0x4100);
    (*DAT_300a4258)(0x3f800000,0,0x3f000000,0x3f000000);
    (*DAT_300a44ec)(0xc11);
  }
  return;
}

