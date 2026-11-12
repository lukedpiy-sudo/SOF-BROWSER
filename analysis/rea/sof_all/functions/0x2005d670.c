// rea decompile_all
// name: FUN_2005d670
// address: 0x2005d670
// body: available
// range: 0x2005d670-0x2005d78d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005d670(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    DAT_203b99b4 = 0;
    _strncpy(&DAT_203b98b4,(char *)param_1,0x40);
    if (DAT_203a1f20 != 1) {
      FUN_2001e730(&DAT_203f6c34);
      FUN_2001cb00(&DAT_203f6c34,0xf);
      FUN_2001cb70(&DAT_203f6c34,0x5d5);
      uVar5 = 0;
      uVar4 = DAT_201217a8;
      uVar7 = DAT_201217a8;
      if (DAT_201217a8 != 0) {
        do {
          uVar8 = (int)(uVar4 - uVar5) / 2 + uVar5;
          pbVar3 = (&PTR_DAT_201217b0)[uVar8];
          pbVar6 = param_1;
          do {
            bVar1 = *pbVar3;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_2005d71e:
              iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_2005d723;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_2005d71e;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar2 = 0;
LAB_2005d723:
          if (iVar2 < 0) {
            uVar5 = uVar8 + 1;
            uVar8 = uVar4;
          }
          else {
            uVar7 = uVar8;
            if (iVar2 < 1) break;
          }
          uVar4 = uVar8;
          uVar7 = DAT_201217a8;
        } while (uVar5 != uVar8);
      }
      uVar7 = uVar7 & 0xffff;
      if ((int)DAT_201217a8 <= (int)uVar7) {
        uVar7 = 0xffffffff;
      }
      FUN_2001cb70(&DAT_203f6c34,uVar7);
      if ((int)uVar7 < 0) {
        FUN_2001cd00(&DAT_203f6c34,param_1);
      }
      FUN_20061a80(&DAT_20390c24,3,0);
    }
  }
  return;
}

