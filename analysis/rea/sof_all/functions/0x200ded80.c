// rea decompile_all
// name: FUN_200ded80
// address: 0x200ded80
// body: available
// range: 0x200ded80-0x200defa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200ded80(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  int local_24;
  undefined1 local_20;
  char *local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010f5f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_200eafe0(1);
  do {
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x28))();
      ExceptionList = local_c;
      return 1;
    }
    pcVar9 = s_column_20158fd4;
    pcVar2 = (char *)FUN_200eb440(0);
    iVar3 = __strcmpi(pcVar2,pcVar9);
    if (iVar3 == 0) {
      FUN_200eafe0(2);
      pcVar2 = (char *)FUN_200eb440(1);
      uVar4 = FUN_200eb440(0);
      local_20 = (undefined1)param_1;
      FUN_2000a5b0(0);
      local_4 = 0;
      local_24 = FUN_200f9e13(uVar4);
      if (local_24 < 6) {
        if (local_24 < 0) {
          local_24 = 0;
        }
      }
      else {
        local_24 = 5;
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_2000a6c0(uVar5,1);
      if (cVar1 != '\0') {
        pcVar9 = local_1c;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar2;
          pcVar2 = pcVar2 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_1c[uVar5] = '\0';
        local_18 = uVar5;
      }
      local_10 = 1;
      local_4 = 1;
      FUN_200e4450(in_ECX[0x2a],1,&local_24);
      local_4 = 0xffffffff;
      if (local_1c != (char *)0x0) {
        if (local_1c[-1] == '\0') {
          FUN_200f9f75(local_1c + -1);
        }
        else {
          local_1c[-1] = local_1c[-1] + -1;
        }
      }
      local_1c = (char *)0x0;
      local_18 = 0;
      local_14 = 0;
    }
    else {
      pcVar9 = s_hostname_20139d7c;
      pcVar2 = (char *)FUN_200eb440(0);
      iVar3 = __strcmpi(pcVar2,pcVar9);
      if (iVar3 == 0) {
        FUN_200eafe0(1);
        uVar10 = 0;
        uVar8 = 0;
        puVar7 = &DAT_2015ee44;
        uVar4 = FUN_200eb440(0);
        iVar3 = Cvar_Get(uVar4,puVar7,uVar8,uVar10);
        in_ECX[0x2c] = iVar3;
      }
      else {
        pcVar9 = s_address_20158fcc;
        pcVar2 = (char *)FUN_200eb440(0);
        iVar3 = __strcmpi(pcVar2,pcVar9);
        if (iVar3 == 0) {
          FUN_200eafe0(1);
          uVar10 = 0;
          uVar8 = 0;
          puVar7 = &DAT_2015ee44;
          uVar4 = FUN_200eb440(0);
          iVar3 = Cvar_Get(uVar4,puVar7,uVar8,uVar10);
          in_ECX[0x2d] = iVar3;
        }
        else {
          cVar1 = FUN_200cf890(param_1);
          if (cVar1 == '\0') {
            FUN_200eb490(param_1,s_Unrecognised_serverbox_keyword_20158fac);
            ExceptionList = local_c;
            return 0;
          }
        }
      }
    }
    cVar1 = FUN_200eafe0(1);
  } while( true );
}

