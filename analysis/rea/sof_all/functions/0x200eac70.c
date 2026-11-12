// rea decompile_all
// name: FUN_200eac70
// address: 0x200eac70
// body: available
// range: 0x200eac70-0x200eae1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eac70(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *in_ECX;
  uint uVar5;
  undefined1 local_95;
  int local_94 [2];
  undefined1 local_8c [128];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2011039c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(in_ECX + 5) = local_95;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = local_95;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  uVar5 = 0xffffffff;
  in_ECX[3] = 1;
  *in_ECX = 0;
  pcVar4 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4 = 1;
  iVar3 = __strcmpi(param_1 + (~uVar5 - 5),&DAT_2015956c);
  if (iVar3 == 0) {
    iVar3 = FUN_200fa6a0(param_1,s_base_menus__20159550);
    if (iVar3 == 0) goto LAB_200ead4b;
    iVar3 = FS_LoadFile(iVar3 + 5,local_94,1);
  }
  else {
    Com_sprintf(local_8c,0x80,s_menus__s_rmf_2015955c,param_1);
    iVar3 = FS_LoadFile(local_8c,local_94,1);
  }
  in_ECX[4] = iVar3;
LAB_200ead4b:
  if (local_94[0] == 0) {
    in_ECX[1] = 0;
  }
  else {
    iVar3 = FUN_200fa6a0(local_94[0],PTR_DAT_20159510);
    in_ECX[1] = iVar3;
    iVar3 = FUN_200fa6a0(local_94[0],PTR_DAT_20159514);
    uVar5 = 0xffffffff;
    pcVar4 = PTR_DAT_20159514;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = iVar3 + (~uVar5 - 1);
    uVar2 = in_ECX[1];
    in_ECX[2] = uVar5;
    if (((uVar2 == 0) || (uVar5 == 0)) || (uVar5 < uVar2)) {
      in_ECX[1] = 0;
      FS_FreeFile(local_94[0]);
      FUN_200eb490();
    }
    else {
      uVar5 = (uVar5 - uVar2) + 1;
      in_ECX[4] = uVar5;
      pcVar4 = operator_new(uVar5);
      *in_ECX = (int)pcVar4;
      _strncpy(pcVar4,(char *)in_ECX[1],in_ECX[4]);
      *(undefined1 *)(in_ECX[4] + -1 + *in_ECX) = 0;
      in_ECX[1] = *in_ECX;
      in_ECX[2] = in_ECX[4] + *in_ECX;
      FS_FreeFile(local_94[0]);
    }
  }
  ExceptionList = local_c;
  return;
}

