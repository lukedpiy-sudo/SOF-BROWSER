// rea decompile_all
// name: FUN_5005c6d0
// address: 0x5005c6d0
// body: available
// range: 0x5005c6d0-0x5005c8bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5005c6d0(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 local_40 [64];
  
  FUN_5005cd40(&DAT_50159a60,500);
  if (*(float *)(DAT_5015c9d4 + 0x18) == 0.0) {
    DAT_50159a58 = 1;
    DAT_50159a8c = 1;
    return;
  }
  DAT_50159a58 = 0;
  if (DAT_50159a8c != 1) {
    puVar1 = FUN_500570e0();
    pcVar8 = s_bot_wpfiles__s_wrs_50143190;
    puVar6 = local_40;
    uVar7 = 0x40;
    FUN_500fe2b0();
    iVar2 = (*DAT_5015cb64)(local_40,0,0,puVar6,uVar7,pcVar8,puVar1);
    if (iVar2 == -1) {
      (*DAT_5015cab0)(0,0xc05,local_40,&DAT_5015cd20);
      DAT_50159a8c = 0xffffffff;
      return;
    }
    FUN_5005dbe0(&DAT_50159a60);
    if (*(float *)(DAT_5015c978 + 0x18) == 0.0) {
      DAT_50159a8c = 1;
    }
    if (*(float *)(DAT_5015c978 + 0x18) == 0.0) {
      pcVar8 = s_Waypoints_loaded_and_placed_from_50143168;
    }
    else {
      pcVar8 = s_In_waypoint_edit_mode__Use_write_50143128;
    }
    (*DAT_5015ca24)(pcVar8);
    DAT_50159460 = 0;
    DAT_50159468 = 0;
    DAT_50159464 = 0;
    FUN_5005e4c0(0x50159a60);
    iVar3 = DAT_5015d8c8 * 0x464;
    iVar2 = iVar3 + DAT_5015cca0;
    iVar5 = DAT_5015d8c8;
    if (DAT_5015d8c8 <= DAT_5015d8cc + -10) {
      do {
        if ((((*(int *)(iVar2 + 0x78) != 0) && (*(int *)(iVar2 + 0x1b4) != 0)) &&
            ((*(float *)(iVar2 + 4) != 0.0 ||
             ((*(float *)(iVar2 + 8) != 0.0 || (*(float *)(iVar2 + 0xc) != 0.0)))))) &&
           (((iVar4 = FUN_5006a470(&DAT_5015c7b8,iVar2), iVar4 != 0 && (*(int *)(iVar4 + 0x44) == 1)
             ) || ((iVar4 = FUN_5006a470(&DAT_5015c7b8,iVar2), iVar4 != 0 &&
                   ((*(int *)(iVar4 + 0x54) == 0x24 || (*(int *)(iVar4 + 0x54) == 0x27)))))))) {
          FUN_5005dcf0(&DAT_50159a60,iVar2);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x464;
        iVar2 = iVar3 + DAT_5015cca0;
      } while (iVar5 <= DAT_5015d8cc + -10);
    }
  }
  return;
}

