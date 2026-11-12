// rea decompile_all
// name: FUN_2001b570
// address: 0x2001b570
// body: available
// range: 0x2001b570-0x2001b9bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2001b570(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *in_stack_00001024;
  float *in_stack_00001028;
  float *in_stack_0000102c;
  float *in_stack_00001030;
  float *in_stack_00001034;
  undefined4 in_stack_00001038;
  uint in_stack_0000103c;
  
  FUN_200fa720();
  DAT_20246ce0 = DAT_20246ce0 + 1;
  DAT_20248d8c = DAT_20248d8c + 1;
  puVar7 = &DAT_20244c78;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  DAT_20244c7c = 1.0;
  _DAT_20244ca0 = &DAT_20246d10;
  _DAT_20244cac = 0xffffffff;
  if (DAT_20248d70 != 0) {
    _DAT_20244c60 = *in_stack_00001028;
    _DAT_20244c64 = in_stack_00001028[1];
    _DAT_20244c68 = in_stack_00001028[2];
    _DAT_20248df4 = *in_stack_0000102c;
    _DAT_20248df8 = in_stack_0000102c[1];
    _DAT_20248dfc = in_stack_0000102c[2];
    _DAT_20246cf0 = *in_stack_00001030;
    _DAT_20246cf4 = in_stack_00001030[1];
    _DAT_20246cf8 = in_stack_00001030[2];
    _DAT_20244c6c = *in_stack_00001034;
    _DAT_20244c70 = in_stack_00001034[1];
    _DAT_20244c74 = in_stack_00001034[2];
    DAT_20248d98 = in_stack_0000103c;
    if (((*in_stack_00001028 == *in_stack_0000102c) &&
        (in_stack_00001028[1] == in_stack_0000102c[1])) &&
       (in_stack_00001028[2] == in_stack_0000102c[2])) {
      param_1 = *in_stack_00001028 + *in_stack_00001030;
      param_2 = in_stack_00001028[1] + in_stack_00001030[1];
      param_3 = in_stack_00001028[2] + in_stack_00001030[2];
      param_4 = *in_stack_00001028 + *in_stack_00001034;
      param_5 = in_stack_00001028[1] + in_stack_00001034[1];
      param_6 = in_stack_00001028[2] + in_stack_00001034[2];
      iVar5 = 0;
      do {
        iVar2 = iVar5 + 4;
        *(float *)((int)&param_1 + iVar5) = *(float *)((int)&param_1 + iVar5) - 1.0;
        *(float *)((int)&param_4 + iVar5) = *(float *)((int)&param_4 + iVar5) + 1.0;
        iVar5 = iVar2;
      } while (iVar2 < 0xc);
      DAT_20244cb8 = &stack0x00000020;
      DAT_20244cc4 = &param_1;
      DAT_20244cb4 = &param_4;
      DAT_20244cc8 = 0;
      DAT_20248d84 = 0x400;
      DAT_20246cfc = 0xffffffff;
      FUN_2001aa00(in_stack_00001038);
      param_7 = DAT_20244cc8;
      iVar5 = 0;
      uVar6 = DAT_20246ce0;
      if (0 < DAT_20244cc8) {
        do {
          puVar1 = (uint *)(DAT_20246ce4 + *(int *)(&stack0x00000020 + iVar5 * 4) * 0x3c);
          if (((*puVar1 & DAT_20248d98) != 0) && (iVar2 = 0, *(short *)((int)puVar1 + 0x3a) != 0)) {
            do {
              puVar3 = (uint *)((uint)*(ushort *)
                                       (DAT_20244cbc + ((uint)(ushort)puVar1[0xe] + iVar2) * 2) *
                                0x10 + DAT_20244c5c);
              if ((puVar3[3] != uVar6) &&
                 ((puVar3[3] = uVar6, uVar6 = DAT_20246ce0, (DAT_20248d98 & *puVar3) != 0 &&
                  (FUN_2001b020(&DAT_20246cf0,&DAT_20244c6c,&DAT_20244c60,&DAT_20244c78,puVar3),
                  uVar6 = DAT_20246ce0, DAT_20244c7c == 0.0)))) break;
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)(uint)*(ushort *)((int)puVar1 + 0x3a));
          }
        } while (((char)DAT_20244c78 == '\0') && (iVar5 = iVar5 + 1, iVar5 < param_7));
      }
      _DAT_20244c80 = *in_stack_00001028;
      _DAT_20244c84 = in_stack_00001028[1];
      _DAT_20244c88 = in_stack_00001028[2];
    }
    else {
      if ((((*in_stack_00001030 == 0.0) && (in_stack_00001030[1] == 0.0)) &&
          ((in_stack_00001030[2] == 0.0 &&
           ((*in_stack_00001034 == 0.0 && (in_stack_00001034[1] == 0.0)))))) &&
         (in_stack_00001034[2] == 0.0)) {
        DAT_20248e08 = 1;
        _DAT_20248d74 = 0.0;
        _DAT_20248d78 = 0.0;
        _DAT_20248d7c = 0.0;
      }
      else {
        DAT_20248e08 = 0;
        _DAT_20248d74 = -*in_stack_00001030;
        if (_DAT_20248d74 <= *in_stack_00001034) {
          _DAT_20248d74 = *in_stack_00001034;
        }
        _DAT_20248d78 = -in_stack_00001030[1];
        if (_DAT_20248d78 <= in_stack_00001034[1]) {
          _DAT_20248d78 = in_stack_00001034[1];
        }
        _DAT_20248d7c = -in_stack_00001030[2];
        if (_DAT_20248d7c <= in_stack_00001034[2]) {
          _DAT_20248d7c = in_stack_00001034[2];
        }
      }
      FUN_2001b1f0(in_stack_00001038,0,0x3f800000,in_stack_00001028,in_stack_0000102c);
      if (DAT_20244c7c == 1.0) {
        _DAT_20244c80 = *in_stack_0000102c;
        _DAT_20244c84 = in_stack_0000102c[1];
        _DAT_20244c88 = in_stack_0000102c[2];
      }
      else {
        iVar5 = 3;
        pfVar4 = in_stack_00001028;
        do {
          iVar5 = iVar5 + -1;
          *(float *)(((int)&DAT_20244c7c - (int)in_stack_00001028) + (int)(pfVar4 + 1)) =
               (*(float *)(((int)in_stack_0000102c - (int)in_stack_00001028) + (int)pfVar4) -
               *pfVar4) * DAT_20244c7c + *pfVar4;
          pfVar4 = pfVar4 + 1;
        } while (iVar5 != 0);
      }
    }
  }
  puVar7 = &DAT_20244c78;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *in_stack_00001024 = *puVar7;
    puVar7 = puVar7 + 1;
    in_stack_00001024 = in_stack_00001024 + 1;
  }
  return;
}

