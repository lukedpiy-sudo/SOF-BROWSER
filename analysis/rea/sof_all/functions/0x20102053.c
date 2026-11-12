// rea decompile_all
// name: FUN_20102053
// address: 0x20102053
// body: available
// range: 0x20102053-0x201021fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20102053(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_2015d674 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_2015d708) || (iVar2 != DAT_2015d718)) {
      if (DAT_20408488 == 0) {
        FUN_201021ff(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_201021ff(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_20408528 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_2040852e;
        }
        else {
          uVar4 = DAT_2040852c;
          uVar3 = DAT_2040852e;
          uVar5 = 0;
        }
        FUN_201021ff(1,DAT_20408528 == 0,iVar2,DAT_2040852a,uVar3,uVar4,uVar5,DAT_20408530,
                     DAT_20408532,DAT_20408534,DAT_20408536);
        if (DAT_204084d4 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_204084da;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_204084d8;
          uVar3 = DAT_204084da;
          uVar5 = 0;
        }
        FUN_201021ff(0,DAT_204084d4 == 0,iVar2,DAT_204084d6,uVar3,uVar4,uVar5,DAT_204084dc,
                     DAT_204084de,DAT_204084e0,DAT_204084e2);
      }
    }
    iVar2 = param_1[7];
    if (DAT_2015d70c < DAT_2015d71c) {
      if ((DAT_2015d70c <= iVar2) && (iVar2 <= DAT_2015d71c)) {
        if ((DAT_2015d70c < iVar2) && (iVar2 < DAT_2015d71c)) {
          return true;
        }
LAB_201021cb:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_2015d70c) {
          return DAT_2015d710 <= iVar1;
        }
        return iVar1 < DAT_2015d720;
      }
    }
    else {
      if (iVar2 < DAT_2015d71c) {
        return true;
      }
      if (DAT_2015d70c < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_2015d71c) || (DAT_2015d70c <= iVar2)) goto LAB_201021cb;
    }
  }
  return false;
}

