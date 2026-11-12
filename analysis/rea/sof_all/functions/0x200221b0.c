// rea decompile_all
// name: FUN_200221b0
// address: 0x200221b0
// body: available
// range: 0x200221b0-0x2002234b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_200221b0(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  float10 fVar8;
  undefined1 local_80 [128];
  
  puVar4 = DAT_2024b1d8;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      if (((char)param_3 < '\0') && (DAT_2024b1dc == '\0')) {
        return (undefined4 *)0x0;
      }
      puVar4 = (undefined4 *)Cvar_Get(param_1,param_2,param_3,0);
      return puVar4;
    }
    pbVar2 = param_1;
    pbVar6 = (byte *)*puVar4;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_200221f6:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_200221fb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_200221f6;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_200221fb:
    if (iVar3 == 0) {
LAB_20022253:
      if (((char)puVar4[3] < '\0') && (DAT_2024b1dc == '\0')) {
        return (undefined4 *)0x0;
      }
      puVar4[5] = 1;
      if ((puVar4[3] & 2) != 0) {
        DAT_2024b1d0 = 1;
      }
      Z_Free(puVar4[1]);
      uVar5 = FUN_2001ea20(param_2);
      puVar4[1] = uVar5;
      if ((-1 < (char)puVar4[3]) || (DAT_2024b1dc != '\0')) {
        if ((puVar4[3] & 0x20) == 0) {
          fVar8 = (float10)FUN_200fafcc(uVar5);
          puVar4[6] = (float)fVar8;
        }
        else {
          iVar3 = FUN_200f9e13();
          puVar4[6] = (float)iVar3;
          Z_Free(puVar4[1]);
          uVar5 = __ftol();
          Com_sprintf(local_80,0x80,&DAT_2011d0b4,uVar5);
          uVar5 = FUN_2001ea20(local_80);
          puVar4[1] = uVar5;
        }
      }
      puVar4[3] = param_3;
      if ((code *)puVar4[4] != (code *)0x0) {
        (*(code *)puVar4[4])(puVar4);
      }
      return puVar4;
    }
    iVar3 = 7;
    bVar7 = true;
    pbVar2 = param_1;
    pbVar6 = (byte *)s_matrix_20130c20;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar2 == *pbVar6;
      pbVar2 = pbVar2 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar7);
    if (bVar7) {
      iVar3 = 10;
      bVar7 = true;
      pbVar2 = (byte *)*puVar4;
      pbVar6 = (byte *)s_timescale_2011d508;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *pbVar2 == *pbVar6;
        pbVar2 = pbVar2 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar7);
      if (bVar7) goto LAB_20022253;
    }
    puVar4 = (undefined4 *)puVar4[7];
  } while( true );
}

