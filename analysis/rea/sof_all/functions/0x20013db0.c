// rea decompile_all
// name: FUN_20013db0
// address: 0x20013db0
// body: available
// range: 0x20013db0-0x20013f26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20013db0(void)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((_DAT_201e7efc & 0xff) == 2) {
    local_18 = 0;
    local_17 = 0;
    iVar1 = (DAT_20403660 * 0x30) / 0x1e0;
    local_16 = 0;
    local_15 = 0xff;
    (*DAT_204035e4)(0,0,DAT_2040365c,iVar1,&local_18);
    uStack_14 = 0;
    uStack_13 = 0;
    uStack_12 = 0;
    uStack_11 = 0xff;
    (*DAT_204035e4)(0,DAT_20403660 - iVar1,DAT_2040365c,iVar1,&uStack_14);
  }
  else if ((_DAT_201e7efc & 0xff) == 4) {
    local_10 = 0xffffffff;
    (*DAT_204035c4)(0,0,DAT_2040365c / 2,DAT_20403660 / 2,&local_10,s_pics_monitor_monitor_2011f6a0,
                    0);
    uStack_c = 0xffffffff;
    (*DAT_204035c4)(DAT_2040365c,0,-(DAT_2040365c / 2),DAT_20403660 / 2,&uStack_c,
                    s_pics_monitor_monitor_2011f6a0,0);
    uStack_8 = 0xffffffff;
    (*DAT_204035c4)(0,DAT_20403660,DAT_2040365c / 2,-(DAT_20403660 / 2),&uStack_8,
                    s_pics_monitor_monitor_2011f6a0,0);
    uStack_4 = 0xffffffff;
    (*DAT_204035c4)(DAT_2040365c,DAT_20403660,-(DAT_2040365c / 2),-(DAT_20403660 / 2),&uStack_4,
                    s_pics_monitor_monitor_2011f6a0,0);
    return;
  }
  return;
}

