// rea decompile_all
// name: FUN_2009aeb0
// address: 0x2009aeb0
// body: available
// range: 0x2009aeb0-0x2009b2e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2009aeb0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined2 uVar9;
  int in_ECX;
  float10 fVar10;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar7 = param_4;
  piVar6 = param_3;
  *(undefined1 *)((int)param_3 + 9) = 0;
  fVar10 = (float10)FUN_200c2e10(param_4);
  piVar6[0xf] = (int)(float)fVar10;
  param_4 = (undefined4 *)FUN_2009ae50(param_1,param_2,piVar6,0);
  iVar4 = *(int *)(in_ECX + 0x24);
  if (*(char *)(iVar4 + 0x8c) != '\0') {
    FUN_2009e9a0(*puVar7,puVar7[1],puVar7[2],puVar7[3],&param_3);
    *(ushort *)(iVar4 + 0x8e) = (ushort)(byte)param_3;
    if (*(char *)(iVar4 + 0x84) == '\0') {
      FUN_2009ecc0(puVar7,iVar4 + 0x94);
    }
    *(undefined2 *)(iVar4 + 0x90) = param_4._0_2_;
  }
  pfVar1 = (float *)(piVar6 + 0xc);
  cVar3 = *(char *)(*(int *)(in_ECX + 0x24) + 0x8c);
  *(char *)((int)piVar6 + 6) = cVar3;
  if (cVar3 == '\0') {
    if (*(char *)(in_ECX + 0x30) == '\0') {
      FUN_200682b0(*(int *)(in_ECX + 0x44) + puVar7[2] * 0xc,
                   *(int *)(in_ECX + 0x44) + puVar7[6] * 0xc,puVar7[8]);
    }
    else {
      FUN_200802f0(in_ECX + 0x34);
    }
    *pfVar1 = (float)piVar6[0x1d] * *pfVar1;
    piVar6[0xd] = (int)((float)piVar6[0x1e] * (float)piVar6[0xd]);
    piVar6[0xe] = (int)((float)piVar6[0x1f] * (float)piVar6[0xe]);
    *(undefined1 *)((int)piVar6 + 0xb) = 1;
    *(undefined1 *)(piVar6 + 2) = 0;
    *(undefined1 *)(piVar6 + 1) = 0;
  }
  else {
    local_10 = 0x3f800000;
    *pfVar1 = (float)piVar6[0x1d];
    piVar6[0xd] = piVar6[0x1e];
    piVar6[0xe] = piVar6[0x1f];
    local_c = 0x3f800000;
    local_8 = 0x3f800000;
    fVar10 = (float10)FUN_200c3930(&local_10);
    *(bool *)((int)piVar6 + 0xb) = (float10)0.01 < fVar10;
    piVar6[0x17] = *(int *)(in_ECX + 0x24);
    *(undefined1 *)(piVar6 + 2) = *(undefined1 *)(*(int *)(in_ECX + 0x24) + 0x14);
    *(byte *)((int)piVar6 + 9) =
         *(byte *)((int)piVar6 + 9) | *(char *)(*(int *)(in_ECX + 0x24) + 0x14) == '\0';
    *(undefined1 *)(piVar6 + 1) = *(undefined1 *)(in_ECX + 0x19);
  }
  fVar10 = (float10)FUN_200c2e10(puVar7);
  param_3 = (int *)(float)(fVar10 * (float10)(float)piVar6[0x2c]);
  piVar6[0x10] = (int)param_3;
  iVar4 = *(int *)(in_ECX + 0x1c);
  *piVar6 = iVar4;
  if (iVar4 == 1) {
    if (_DAT_20157258 < 0.99) {
      piVar6[0x10] = (int)((float)param_3 * _DAT_20157258);
      (**(code **)(DAT_20403c04 + 0x28))(0xb60);
    }
  }
  else if (_DAT_20157258 < 0.99) {
    (**(code **)(DAT_20403c04 + 0x2c))(0xb60);
  }
  if ((*piVar6 == 1) && ((float)piVar6[0x10] < 0.99)) {
    fVar2 = (float)piVar6[0x10];
    *pfVar1 = fVar2 * *pfVar1;
    piVar6[0xd] = (int)(fVar2 * (float)piVar6[0xd]);
    piVar6[0xe] = (int)(fVar2 * (float)piVar6[0xe]);
    *(undefined1 *)((int)piVar6 + 0xb) = 1;
    piVar6[0x10] = 0x3f800000;
  }
  fVar10 = (float10)FUN_200c2e10(puVar7);
  piVar6[0x1b] = (int)(float)fVar10;
  fVar10 = (float10)FUN_200c2e10(puVar7);
  piVar6[0x1c] = (int)(float)fVar10;
  if (((((char)piVar6[0x2d] != '\0') && ((float)piVar6[0x1b] < 0.0 == ((float)piVar6[0x1b] == 0.0)))
      && (fVar10 < (float10)0.051 == (fVar10 == (float10)0.051))) && ((float)piVar6[0xf] < 0.99)) {
    *(undefined1 *)(piVar6 + 2) = 1;
    fVar10 = (float10)FUN_200fc7d0();
    piVar6[0x1a] = (int)(float)fVar10;
    *(undefined1 *)((int)piVar6 + 7) = 1;
    uVar9 = FUN_2009ae50(param_1,param_2,piVar6,1);
    iVar4 = *(int *)(in_ECX + 0x24);
    if (*(char *)(iVar4 + 0x164) != '\0') {
      local_10 = *puVar7;
      local_c = puVar7[1];
      uStack_4 = puVar7[3];
      if (*(char *)(iVar4 + 0xf0) == '\0') {
        bVar8 = *(byte *)(puVar7[2] + *(int *)(iVar4 + 0xf8));
      }
      else {
        bVar8 = *(byte *)(iVar4 + 0xf2);
      }
      *(ushort *)(iVar4 + 0x166) = (ushort)bVar8;
      if (*(char *)(iVar4 + 0x15c) == '\0') {
        FUN_2009ecc0(puVar7,iVar4 + 0x16c);
      }
      *(undefined2 *)(iVar4 + 0x168) = uVar9;
    }
    pfVar1 = (float *)(piVar6 + 0x11);
    if (*(char *)(*(int *)(in_ECX + 0x24) + 0x164) == '\0') {
      *(undefined1 *)(piVar6 + 0x19) = 0;
      if (*(char *)(in_ECX + 0x50) == '\0') {
        uVar5 = puVar7[8];
        iVar4 = *(int *)(in_ECX + 100) + puVar7[6] * 0xc;
        FUN_200802f0(*(int *)(in_ECX + 100) + puVar7[2] * 0xc);
        FUN_20068250(iVar4);
        FUN_20068280(uVar5);
        FUN_20068220(iVar4);
      }
      else {
        *pfVar1 = *(float *)(in_ECX + 0x54);
        piVar6[0x12] = *(int *)(in_ECX + 0x58);
        piVar6[0x13] = *(int *)(in_ECX + 0x5c);
      }
    }
    else {
      *(undefined1 *)(piVar6 + 0x19) = 1;
      *pfVar1 = 1.0;
      piVar6[0x12] = 0x3f800000;
      piVar6[0x13] = 0x3f800000;
      piVar6[0x18] = *(int *)(in_ECX + 0x24) + 0xd8;
      *(byte *)((int)piVar6 + 9) =
           *(byte *)((int)piVar6 + 9) | *(char *)(*(int *)(in_ECX + 0x24) + 0xec) == '\0';
    }
    fVar2 = _DAT_20157258;
    *pfVar1 = _DAT_20157258 * *pfVar1;
    piVar6[0x12] = (int)(fVar2 * (float)piVar6[0x12]);
    piVar6[0x13] = (int)(fVar2 * (float)piVar6[0x13]);
    *(undefined1 *)((int)piVar6 + 5) = *(undefined1 *)(in_ECX + 0x18);
    return;
  }
  piVar6[0x1a] = 0;
  *(undefined1 *)((int)piVar6 + 7) = 0;
  *(undefined1 *)((int)piVar6 + 5) = *(undefined1 *)(in_ECX + 0x18);
  return;
}

