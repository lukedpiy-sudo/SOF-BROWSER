// rea decompile_all
// name: FUN_20010270
// address: 0x20010270
// body: available
// range: 0x20010270-0x2001046a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20010270(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int local_c;
  int local_8;
  char *local_4;
  
  local_c = 0;
  if (DAT_20225250 != (undefined4 *)0x0) {
    FUN_200f9d32(DAT_20225250);
  }
  DAT_20225250 = (undefined4 *)0x0;
  iVar2 = FS_LoadFile(param_1,&local_8,0);
  if (iVar2 == -1) {
    Com_Error(1,s_Could_not_open_string_package____2011f2cc,param_1);
    return 0;
  }
  iVar2 = (int)*(char *)(local_8 + 0x12);
  param_1 = (int)*(char *)(local_8 + 0x16);
  iVar5 = local_8 + 0x58;
  if (0 < *(char *)(local_8 + 0xe)) {
    iVar5 = iVar5 + (*(char *)(local_8 + 10) * 0x44 + 0x34) * (int)*(char *)(local_8 + 0xe);
  }
  local_4 = (char *)(iVar5 + 4);
  if (0 < iVar2) {
    do {
      iVar5 = (int)*local_4;
      local_4 = local_4 + 4;
      if (0 < iVar5) {
        do {
          uVar4 = 0xffffffff;
          pcVar6 = local_4;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + -1;
          local_4 = local_4 + ~uVar4 + 0x14;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_4 = local_4 + 4;
  pcVar6 = local_4;
  iVar2 = param_1;
  if (0 < param_1) {
    do {
      iVar7 = (int)*pcVar6;
      pcVar6 = pcVar6 + 4;
      iVar5 = iVar7;
      if (0 < iVar7) {
        do {
          uVar4 = 0xffffffff;
          pcVar8 = pcVar6;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + -1;
          pcVar6 = pcVar6 + ~uVar4 + 0x15;
        } while (iVar5 != 0);
      }
      local_c = local_c + iVar7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_20225250 = _malloc(local_c << 8);
  iVar2 = 0;
  *DAT_20225250 = 0;
  local_c = 0;
  pcVar6 = local_4;
  if (0 < param_1) {
    do {
      iVar5 = (int)*pcVar6;
      pcVar6 = pcVar6 + 4;
      if (0 < iVar5) {
        iVar7 = iVar2 << 8;
        iVar2 = local_c + iVar5;
        do {
          Com_sprintf(iVar7 + (int)DAT_20225250,0x40,&DAT_2011d114,pcVar6);
          uVar4 = 0xffffffff;
          pcVar8 = pcVar6;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (4 < ~uVar4 - 1) {
            uVar4 = 0xffffffff;
            pcVar8 = pcVar6;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            iVar3 = __strcmpi(pcVar6 + (~uVar4 - 5),&DAT_2011f2f0);
            if (iVar3 != 0) {
              Com_sprintf(iVar7 + (int)DAT_20225250,0x40,s__s_m32_2011f224,pcVar6);
            }
          }
          uVar4 = 0xffffffff;
          pcVar8 = pcVar6;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          iVar5 = iVar5 + -1;
          pcVar6 = pcVar6 + ~uVar4 + 0x15;
          iVar7 = iVar7 + 0x100;
          local_c = iVar2;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  FS_FreeFile(local_8);
  return iVar2;
}

