// rea decompile_all
// name: FUN_20010080
// address: 0x20010080
// body: available
// range: 0x20010080-0x20010263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20010080(undefined4 param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_EDI;
  int *piVar9;
  void *local_18;
  undefined1 local_14 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010adcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20056560(0xff);
  if (DAT_20225250 != (undefined4 *)0x0) {
    FUN_200f9d32(DAT_20225250);
  }
  DAT_20225250 = (undefined4 *)0x0;
  local_10 = FS_LoadFile(param_1,&local_18,0);
  if (local_10 == -1) {
    Com_Error(1,s_Could_not_open_string_package____2011f2cc,param_1);
    ExceptionList = local_c;
    return 0;
  }
  pvVar2 = operator_new(0x1030);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_200573e0(s_invalid_2011f2c4,0,0);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 8))(local_18,&local_10,local_14);
  FS_FreeFile(unaff_EDI);
  piVar3 = piVar3 + 10;
  iVar6 = 0x100;
  piVar9 = piVar3;
  do {
    if ((piVar9 != (int *)0xc) && ((*(byte *)(piVar9 + -2) & 8) != 0)) {
      iVar4 = *piVar9;
      iVar7 = 0;
      do {
        if (iVar4 == 0) goto LAB_200101a1;
        iVar4 = FUN_200faaf0(iVar4 + 1,0x3b);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      if (iVar4 != 0) {
        unaff_EBX = unaff_EBX + 1;
      }
    }
LAB_200101a1:
    piVar9 = piVar9 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  if (unaff_EBX != 0) {
    DAT_20225250 = _malloc(unaff_EBX << 8);
    iVar6 = 0;
    *DAT_20225250 = 0;
    iVar7 = 0;
    iVar4 = 0x100;
    do {
      if ((piVar3 != (int *)0xc) && ((*(byte *)(piVar3 + -2) & 8) != 0)) {
        iVar5 = *piVar3;
        iVar8 = 0;
        do {
          if (iVar5 == 0) goto LAB_20010227;
          iVar5 = FUN_200faaf0(iVar5 + 1,0x3b);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 8);
        if (iVar5 != 0) {
          iVar8 = (int)DAT_20225250 + iVar7;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x100;
          Com_sprintf(iVar8,0x40,s_pics__s_m32_2011f2b8,iVar5 + 1);
        }
      }
LAB_20010227:
      piVar3 = piVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_8;
  FUN_20057550();
  FUN_200f9f75(puVar1);
  ExceptionList = local_18;
  return iVar6;
}

