// rea decompile_all
// name: FUN_200599c0
// address: 0x200599c0
// body: available
// range: 0x200599c0-0x20059b65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200599c0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 local_880 [4];
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined1 local_800 [2048];
  
  if (*(float *)(DAT_203fac60 + 0x18) != 0.0) {
    iVar1 = __ftol(&DAT_20130de0);
    uVar2 = FUN_20058110(iVar1 + 0x4ff);
    iVar1 = FUN_200fa6a0(uVar2);
    iVar1 = FUN_200f9e9e(iVar1 + 1);
    uVar3 = __ftol();
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        if ((uVar3 & 1) == 0) {
          local_880[iVar5] = &DAT_2011c4ac;
        }
        else {
          local_880[iVar5] = &DAT_2011d31c;
        }
        uVar3 = (int)uVar3 >> 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    iVar1 = __ftol(local_880[0],local_880[1],local_880[2],local_880[3],local_870,local_86c,local_868
                   ,local_864,local_860,local_85c,local_858,local_854,local_850,local_84c,local_848,
                   local_844,local_840,local_83c,local_838,local_834,local_830,local_82c,local_828,
                   local_824,local_820,local_81c,local_818,local_814,local_810,local_80c,local_808,
                   local_804);
    FUN_20058800(local_800,0x800,iVar1 + 0x4ff);
    puVar4 = (undefined1 *)FUN_200fa6a0(local_800,&DAT_20130de0);
    *puVar4 = 0;
    Com_Printf(local_800);
    return;
  }
  FUN_20058800(local_800,0x800,0x50c);
  Com_Printf(local_800);
  return;
}

