// rea decompile_all
// name: FUN_20002e90
// address: 0x20002e90
// body: available
// range: 0x20002e90-0x200032b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200032a7 to 0x200116a0 FUN_200116a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20002e90(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined1 uStack_d;
  int iStack_c;
  int iStack_8;
  int local_4;
  
  local_4 = DAT_20367ecc;
  puVar8 = &DAT_201e7e60;
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  DAT_201e7e64 = FUN_2001e310(&DAT_20367ebc);
  DAT_201e7e6c = FUN_2001e310(&DAT_20367ebc);
  DAT_201e7e68 = DAT_201e7e64 * 100;
  fVar10 = (float10)FUN_2001e360(&DAT_20367ebc);
  DAT_201e7e70 = (float)fVar10;
  DAT_201e8fcc = DAT_201e7e70;
  if (*(int *)(DAT_201e7530 + 0x18) == 0x40400000) {
    Com_Printf(s_frame__i_delta__i_2011c8f8,DAT_201e7e64,DAT_201e7e6c);
  }
  iVar6 = 0;
  if ((int)DAT_201e7e6c < 1) {
    puVar7 = (undefined *)0x0;
    DAT_201e7e60 = 1;
    DAT_201ca518 = 0;
    if (DAT_201ca514 != 0) {
      piVar1 = (int *)FUN_20069630(1,0);
      iVar2 = (**(code **)(*piVar1 + 0x68))();
      uStack_d = 0x1a;
      piVar1 = (int *)FUN_20069630(1,0);
      iVar3 = (**(code **)(*piVar1 + 0x6c))();
      if (0 < iVar2) {
        do {
          iStack_c = *(int *)(iVar3 + iVar6);
          iStack_8 = iStack_c + 3;
          FUN_20025300(&iStack_8,4,DAT_201ca51c);
          FUN_20025300(&uStack_d,1,DAT_201ca51c);
          FUN_20025300(&iStack_c,2,DAT_201ca51c);
          FUN_20025300(iVar3 + iVar6 + 4,(int)(short)iStack_c,DAT_201ca51c);
          iVar6 = iVar6 + 4 + (int)(short)iStack_c;
        } while (iVar6 < iVar2);
      }
    }
  }
  else {
    iVar6 = (DAT_201e7e6c & 0xf) * 0x104;
    puVar7 = &DAT_201e7f68 + iVar6;
    if (*(int *)(&DAT_201e7f68 + (DAT_201e7e6c & 0xf) * 0x104) == 0) {
      Com_Printf(s_Delta_from_invalid_frame__not_su_2011c8c0);
    }
    if (*(uint *)(&DAT_201e7f6c + iVar6) == DAT_201e7e6c) {
      if (DAT_201e7598 - *(int *)(&DAT_201e8068 + iVar6) < 0x381) {
        DAT_201e7e60 = 1;
      }
      else {
        Com_Printf(s_Delta_parse_entities_too_old__2011c888);
      }
    }
    else {
      Com_Printf(s_Delta_frame_too_old__2011c8a8);
    }
  }
  iVar6 = DAT_201e7e68;
  if ((DAT_201e7e68 < DAT_201e8fc4) || (iVar6 = DAT_201e7e68 + -100, DAT_201e8fc4 < iVar6)) {
    DAT_201e8fc4 = iVar6;
  }
  if (ABS(DAT_201e8fc8 - DAT_201e7e70) <= 0.5) {
    DAT_201e8fc8 = DAT_201e7e70 * 0.05 + DAT_201e8fc8 * 0.95;
  }
  else {
    DAT_201e8fc8 = DAT_201e7e70;
  }
  uVar4 = FUN_2001e260(&DAT_20367ebc);
  FUN_2001e650(&DAT_20367ebc,&DAT_201e7e74,uVar4);
  FUN_2000edd0(0x17,local_4);
  iVar6 = DAT_20367ecc;
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  if (iVar2 != 0x14) {
    Com_Error(1,s_CL_ParseFrame__not_playerinfo_2011c868);
  }
  FUN_200028b0(puVar7,&DAT_201e7e60);
  FUN_2000edd0(iVar2,iVar6);
  iVar6 = DAT_20367ecc;
  iVar2 = FUN_2001e260(&DAT_20367ebc);
  if (iVar2 != 0x15) {
    Com_Error(1,s_CL_ParseFrame__not_packetentitie_2011c844);
  }
  FUN_200025a0(puVar7,&DAT_201e7e60);
  FUN_2000edd0(iVar2,iVar6);
  puVar8 = &DAT_201e7e60;
  puVar9 = (undefined4 *)(&DAT_201e7f68 + (DAT_201e7e64 & 0xf) * 0x104);
  for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (DAT_201e7e60 == 0) {
    return;
  }
  if (DAT_201c1f00 != 8) {
    DAT_201c1f00 = 8;
    DAT_201e7e3c = (float)(int)DAT_201e7e98 * 0.125;
    local_4 = (int)DAT_201e7e9c;
    DAT_201e7e48 = DAT_201e7eb0;
    DAT_201e7e40 = (float)(int)DAT_201e7e9a * 0.125;
    DAT_201e7e4c = DAT_201e7eb4;
    DAT_201e7596 = 1;
    _DAT_201e7e50 = DAT_201e7eb8;
    _DAT_201e7e44 = (float)local_4 * 0.125;
    if ((DAT_201c1f28 != DAT_201e9480) && (DAT_201e7594 != '\0')) {
      FUN_20013f30();
    }
  }
  iVar6 = 0;
  DAT_201e7595 = 1;
  if (0 < DAT_201e7f5c) {
    do {
      uVar5 = DAT_201e7f60 + iVar6 & 0x3ff;
      if (*(int *)(&DAT_201ca574 + uVar5 * 0x74) != 0) {
        FUN_20030860(&DAT_201ca530 + uVar5 * 0x74);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_201e7f5c);
  }
  FUN_200116a0();
  return;
}

