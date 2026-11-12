// rea decompile_all
// name: FUN_20058930
// address: 0x20058930
// body: available
// range: 0x20058930-0x20058ad1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20058930(undefined1 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 local_30;
  undefined1 local_2c;
  int *local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b5d8;
  local_c = ExceptionList;
  local_2c = param_1;
  ExceptionList = &local_c;
  local_28 = (int *)FUN_20058e20(0,0);
  local_24 = 0;
  local_4 = 0;
  piVar10 = (int *)*DAT_20390db4;
  do {
    if (piVar10 == DAT_20390db4) {
      FUN_20057f40(0xf);
      piVar10 = (int *)*local_28;
      if (piVar10 != local_28) {
        do {
          puVar6 = (undefined1 *)piVar10[3];
          local_30 = CONCAT31(local_30._1_3_,(char)piVar10[6]);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_201116cc;
          }
          FUN_20057ca0(puVar6,local_30);
          piVar10 = (int *)*piVar10;
        } while (piVar10 != local_28);
      }
      piVar5 = local_28;
      piVar10 = (int *)*local_28;
      while (piVar10 != piVar5) {
        piVar4 = (int *)*piVar10;
        FUN_200590a0(&local_30,piVar10);
        piVar10 = piVar4;
      }
      uVar7 = __ftol();
      FUN_200515c0(uVar7);
      piVar5 = local_28;
      local_4 = 0xffffffff;
      piVar10 = (int *)*local_28;
      while (piVar10 != piVar5) {
        piVar4 = (int *)*piVar10;
        FUN_200590a0(&param_1,piVar10);
        piVar10 = piVar4;
      }
      FUN_200f9f75(local_28);
      ExceptionList = local_c;
      return;
    }
    iVar3 = piVar10[4];
    uVar2 = *(undefined1 *)(iVar3 + 5);
    pcVar11 = *(char **)(iVar3 + 0xc);
    pcVar9 = "";
    if (pcVar11 != (char *)0x0) {
      pcVar9 = pcVar11;
    }
    local_20[0] = param_1;
    FUN_2000a5b0(0);
    uVar8 = 0xffffffff;
    local_4._0_1_ = 1;
    pcVar11 = pcVar9;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_2000a600(pcVar9,~uVar8 - 1);
    local_4._0_1_ = 2;
    local_10 = uVar2;
    FUN_20058dc0(&local_30,local_28,local_20);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_2000a5b0(1);
    FUN_20085230();
  } while( true );
}

