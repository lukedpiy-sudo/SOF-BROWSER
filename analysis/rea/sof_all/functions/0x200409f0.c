// rea decompile_all
// name: FUN_200409f0
// address: 0x200409f0
// body: available
// range: 0x200409f0-0x20040c52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200409f0(float param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  iVar4 = (int)param_1;
  if (((param_1 != 0.0) && (iVar2 = *(int *)((int)param_1 + 0x34), -1 < iVar2)) && (iVar2 < 0x2b)) {
    if (*(char *)((int)param_1 + 0x45) == '\x04') {
      param_1 = *(float *)((int)param_1 + 0x48) * 0.06666667 * 0.4 + 0.2;
      param_1 = param_1 + param_1;
      if (1.0 < param_1) {
        param_1 = 1.0;
      }
      if (*(float *)(iVar4 + 0x48) == 0.0) {
        param_1 = 0.6;
      }
      if (((1.5 < *(float *)(iVar4 + 0x48)) || (*(float *)(iVar4 + 0x48) == 0.0)) && (iVar2 != 0x23)
         ) {
        if ((&DAT_201348bf)[iVar2 * 0x10] == 0x2c) {
          iVar2 = FUN_200f9f57(param_1,0x3f800000,0);
          uVar5 = iVar2 % 3 + 0x4f;
        }
        else {
          uVar5 = (uint)(byte)(&DAT_201348bf)[iVar2 * 0x10];
        }
        uVar3 = FUN_2002d860(uVar5,param_1);
        (*DAT_20390d7c)(iVar4,0,0,uVar3);
      }
      if (3.0 < *(float *)(iVar4 + 0x48)) {
        *(undefined4 *)(iVar4 + 0x48) = 0x40400000;
      }
      if (*(char *)(iVar4 + 0x44) != '\0') {
        fVar6 = (float10)flrand(0,0x3dcccccd,0xbf800000,0,0);
        bVar1 = irand(200,0xf0,(float)((float10)*(float *)(iVar4 + 0x48) * (float10)0.6 + fVar6));
        iVar2 = FUN_2003bb60(iVar4,*(undefined1 *)(iVar4 + 0x44),
                             *(undefined4 *)(&DAT_201348b8 + *(int *)(iVar4 + 0x34) * 0x10),
                             (float)bVar1);
        if (((iVar2 != 0) && (iVar4 = *(int *)(iVar4 + 0x30), -1 < iVar4)) && (iVar4 < 0x400)) {
          *(undefined4 **)(iVar2 + 0x90) = &DAT_2015eef8 + iVar4 * 99;
          return;
        }
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x45) == '\x05') {
        fVar6 = (float10)flrand(0x42000000,0x42100000,0xbf800000,0,0);
        FUN_2003bb60(param_1,0x1a,0xe6e6e6e6,0x43660000,(float)fVar6);
        return;
      }
      if ((&DAT_201348bc)[iVar2 * 0x10] == '\x02') {
        iVar4 = FUN_2003bb60(param_1,*(undefined1 *)((int)param_1 + 0x44),
                             *(undefined4 *)(&DAT_201348b8 + iVar2 * 0x10),
                             *(float *)(&DAT_20134728 + (uint)*(byte *)((int)param_1 + 0x46) * 0x14)
                             * 255.0,0x41000000,0xbf800000,0,0);
        if (iVar4 != 0) {
          fVar6 = (float10)-1.5707963267948966 - (float10)*(float *)((int)param_1 + 0x40);
          *(float *)(iVar4 + 0x14) = (float)fVar6;
          fVar6 = (float10)fcos(fVar6);
          *(float *)(iVar4 + 0x18) = (float)fVar6;
          fVar6 = (float10)fsin((float10)*(float *)(iVar4 + 0x14));
          *(float *)(iVar4 + 0x1c) = (float)fVar6;
        }
      }
    }
  }
  return;
}

