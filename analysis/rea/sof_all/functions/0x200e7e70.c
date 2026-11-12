// rea decompile_all
// name: FUN_200e7e70
// address: 0x200e7e70
// body: available
// range: 0x200e7e70-0x200e7ffd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200e7e70(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_ECX;
  char *pcVar6;
  
  cVar1 = FUN_200eafe0(1);
  while (cVar1 == '\0') {
    pcVar6 = s_nopush_2015926c;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar6);
    if (iVar3 == 0) {
      *(undefined1 *)(*(int *)*in_ECX + 0x8d) = 1;
    }
    else {
      pcVar6 = s_waitanim_20159260;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar6);
      if (iVar3 == 0) {
        *(undefined1 *)(*(int *)*in_ECX + 0x8e) = 0;
      }
      else {
        pcVar6 = s_fragile_20159258;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar6);
        if (iVar3 == 0) {
          *(undefined1 *)(*(int *)*in_ECX + 0x8f) = 1;
        }
        else {
          pcVar6 = s_global_20158bf4;
          pcVar2 = (char *)FUN_200eb440(0);
          iVar3 = __strcmpi(pcVar2,pcVar6);
          if (iVar3 == 0) {
            *(undefined1 *)((int)in_ECX + 0x89) = 1;
          }
          else {
            pcVar6 = s_command_20159250;
            pcVar2 = (char *)FUN_200eb440(0);
            iVar3 = __strcmpi(pcVar2,pcVar6);
            if (iVar3 == 0) {
              FUN_200eafe0(1);
              uVar4 = FUN_200eb440(0);
              uVar4 = FUN_20055450(&DAT_2011d990,uVar4);
              FUN_20018380(0,uVar4);
            }
            else {
              pcVar6 = s_resize_20159248;
              pcVar2 = (char *)FUN_200eb440(0);
              iVar3 = __strcmpi(pcVar2,pcVar6);
              if (iVar3 == 0) {
                FUN_200eafe0(2);
                pcVar2 = *(char **)(*in_ECX + 0x10);
                if (pcVar2 == (char *)0x0) {
                  pcVar2 = "";
                }
                iVar3 = __strcmpi(pcVar2,s_default_20158314);
                if (iVar3 == 0) {
                  uVar4 = FUN_200eb440(1);
                  uVar5 = FUN_200eb440(0);
                  FUN_200c6640(uVar5,uVar4);
                }
                else {
                  FUN_200eb490(param_1,s_Can_only_resize_default_frame_20159228);
                }
              }
            }
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  }
  return 1;
}

