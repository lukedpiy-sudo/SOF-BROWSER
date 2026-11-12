// rea decompile_all
// name: FUN_2003bb60
// address: 0x2003bb60
// body: available
// range: 0x2003bb60-0x2003bdff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_2003bb60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            float param_5,float param_6,float param_7,float param_8)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  
  uVar4 = DAT_2027c478;
  if (param_1[0xe] == 0) {
    bVar7 = (*(byte *)(param_1 + 0xf) & 0x4c) == 0;
  }
  else {
    if (param_1[0xe] != 2) {
      return (undefined4 *)0x0;
    }
    bVar7 = param_1[0xd] == 0x25;
  }
  if (((bVar7) && (*(float *)(DAT_202ea4b8 + 0x18) == 0.0)) &&
     (*(float *)(DAT_201e756c + 0x18) == 0.0)) {
    iVar1 = DAT_20321cc8 * 0xdc;
    puVar2 = (undefined4 *)(&DAT_202eacc8 + iVar1);
    iVar6 = DAT_20321cc8 + 1;
    *(undefined2 *)(&DAT_202ead00 + iVar1) = 0;
    *(undefined4 *)(&DAT_202eacf4 + iVar1) = 0xffffffff;
    *(undefined4 *)(&DAT_202ead38 + iVar1) = 0;
    (&DAT_202ead02)[iVar1] = 0xff;
    *(undefined4 *)(&DAT_202eada0 + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead4c + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead50 + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead28 + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead54 + iVar1) = uVar4;
    (&DAT_202ead58)[DAT_20321cc8 * 0x37] = 0;
    *(undefined4 *)(&DAT_202ead30 + iVar1) = uVar4;
    *(undefined4 *)(&DAT_202ead08 + iVar1) = 0xffffffff;
    (&DAT_202eacfc)[DAT_20321cc8 * 0x37] = 0;
    *(undefined4 *)(&DAT_202eacf8 + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead04 + iVar1) = 0xffffffff;
    if ((0x3ff < iVar6) || (DAT_20321cc8 = iVar6, *(float *)(DAT_202eacc0 + 0x18) <= (float)iVar6))
    {
      DAT_20321cc8 = 0;
    }
    *(undefined4 *)(&DAT_202ead90 + iVar1) = 0;
    *(undefined4 *)(&DAT_202ead08 + iVar1) = param_1[0x13];
    if ((3.0 < param_5) || (3.0 < param_6)) {
      if (param_6 == -1.0) {
        FUN_20038230(param_1,&param_5);
      }
      else if (param_6 <= param_5) {
        FUN_20038230(param_1,&param_5);
        if (param_5 < param_6) {
          param_6 = param_5;
        }
      }
      else {
        FUN_20038230(param_1,&param_6);
        if (param_6 < param_5) {
          param_5 = param_6;
        }
      }
    }
    FUN_20038130(puVar2,999999,0x108,param_2,param_1 + 3);
    uVar3 = *(ushort *)(&DAT_202ead00 + iVar1);
    *(ushort *)(&DAT_202ead00 + iVar1) = uVar3 & 0xfffb | 2;
    (&DAT_202eacf4)[iVar1] = (char)param_3;
    (&DAT_202eacf5)[iVar1] = (char)((uint)param_3 >> 8);
    (&DAT_202eacf6)[iVar1] = param_3._2_1_;
    uVar5 = __ftol();
    *(float *)(&DAT_202eacd8 + iVar1) = param_5;
    *(float *)(&DAT_202eacd4 + iVar1) = param_5;
    fVar8 = (float10)fcos((float10)0.0);
    (&DAT_202eacf7)[iVar1] = uVar5;
    *(undefined4 *)(&DAT_202eacdc + iVar1) = 0;
    *puVar2 = *param_1;
    *(undefined4 *)(&DAT_202eaccc + iVar1) = param_1[1];
    *(undefined4 *)(&DAT_202eacd0 + iVar1) = param_1[2];
    *(ushort *)(&DAT_202ead00 + iVar1) = uVar3 & 0xfffb | 0x12;
    *(float *)(&DAT_202eace0 + iVar1) = (float)fVar8;
    fVar8 = (float10)fsin((float10)0.0);
    *(float *)(&DAT_202eace4 + iVar1) = (float)fVar8;
    *(undefined4 *)(&DAT_202eace8 + iVar1) = param_1[3];
    *(undefined4 *)(&DAT_202eacec + iVar1) = param_1[4];
    *(undefined4 *)(&DAT_202eacf0 + iVar1) = param_1[5];
    *(undefined4 *)(&DAT_202eacdc + iVar1) = 0;
    *(undefined1 **)(&DAT_202ead38 + iVar1) = &LAB_20038420;
    if (param_6 == -1.0) {
      (&DAT_202ead00)[iVar1] = (&DAT_202ead00)[iVar1] | 0x40;
      *(undefined4 *)(&DAT_202ead68 + iVar1) = 0;
      return puVar2;
    }
    *(float *)(&DAT_202ead68 + iVar1) = param_7;
    *(float *)(&DAT_202ead64 + iVar1) = param_8;
    uVar4 = DAT_2027c478;
    (&DAT_202ead00)[iVar1] = (&DAT_202ead00)[iVar1] | 0x40;
    *(undefined4 *)(&DAT_202ead5c + iVar1) = uVar4;
    *(float *)(&DAT_202ead60 + iVar1) =
         ((param_6 - param_7 * param_7 * param_8 * 0.5) - param_5) / param_7;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

