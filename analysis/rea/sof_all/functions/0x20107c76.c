// rea decompile_all
// name: FUN_20107c76
// address: 0x20107c76
// body: available
// range: 0x20107c76-0x20107d56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_20107c76(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = param_1;
  iVar3 = DAT_20408480;
  iVar4 = DAT_20408470;
  if (param_2 != (int *)0x0) {
    iVar3 = param_2[1];
    iVar4 = *param_2;
  }
  if (iVar4 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_2015d4c4 < 2) {
        uVar2 = (byte)PTR_DAT_2015d2b8[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_200fec59(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_2015d2b8[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      uVar5 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      uVar5 = 2;
    }
    iVar3 = FUN_201018d7(iVar4,0x200,&param_1,uVar5,&param_2,3,iVar3,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)param_2 & 0xff;
      }
      else {
        uVar1 = (uint)param_2 & 0xffff;
      }
    }
  }
  return uVar1;
}

