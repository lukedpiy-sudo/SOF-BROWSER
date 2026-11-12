// rea decompile_all
// name: FUN_2010a016
// address: 0x2010a016
// body: available
// range: 0x2010a016-0x2010a14d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2010a016(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  size_t sVar3;
  DWORD DVar4;
  char *_Source;
  char *_Dest;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  char local_84 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    pbVar7 = &DAT_2040880c;
    iVar5 = FUN_2010a67d(param_2,param_3,&DAT_2040880c,4,0);
    if (iVar5 != 0) {
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar7;
        if (DAT_2015d4c4 < 2) {
          uVar6 = (byte)PTR_DAT_2015d2b8[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar6 = FUN_200fec59(bVar1,4);
        }
        if (uVar6 == 0) break;
        pbVar7 = pbVar7 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x20408813 < (int)pbVar7) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_84;
  bVar2 = false;
  sVar3 = FUN_2010a790(param_2,param_3,local_84,0x80,0);
  if (sVar3 == 0) {
    DVar4 = GetLastError();
    if (DVar4 != 0x7a) {
      return 0xffffffff;
    }
    sVar3 = FUN_2010a790(param_2,param_3,0,0,0);
    if (sVar3 == 0) {
      return 0xffffffff;
    }
    _Source = _malloc(sVar3);
    if (_Source == (char *)0x0) {
      return 0xffffffff;
    }
    bVar2 = true;
    sVar3 = FUN_2010a790(param_2,param_3,_Source,sVar3,0);
    if (sVar3 == 0) goto LAB_2010a0b4;
  }
  _Dest = _malloc(sVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,sVar3);
    if (bVar2) {
      FUN_200f9d32(_Source);
    }
    return 0;
  }
  if (!bVar2) {
    return 0xffffffff;
  }
LAB_2010a0b4:
  FUN_200f9d32(_Source);
  return 0xffffffff;
}

