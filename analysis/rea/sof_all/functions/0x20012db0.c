// rea decompile_all
// name: FUN_20012db0
// address: 0x20012db0
// body: available
// range: 0x20012db0-0x200130b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x20012e5d) */
/* WARNING: Removing unreachable block (ram,0x20012f0e) */
/* WARNING: Removing unreachable block (ram,0x20012f1c) */
/* WARNING: Removing unreachable block (ram,0x20012f16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20012db0(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int local_28;
  char *local_20;
  undefined1 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ade8;
  local_c = ExceptionList;
  bVar1 = false;
  if (param_1 == (char *)0x0) {
    _DAT_20225e70 = 0.0;
    return;
  }
  uVar5 = 0xffffffff;
  pcVar7 = s_medium_2011d304;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  puVar6 = (undefined1 *)(~uVar5 - 1);
  local_14 = (undefined1 *)0x0;
  ExceptionList = &local_c;
  cVar3 = FUN_2000a6c0(puVar6,1);
  if (cVar3 != '\0') {
    pcVar7 = s_medium_2011d304;
    pcVar13 = (char *)0x0;
    for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar13 = pcVar13 + 1;
    }
    *puVar6 = 0;
    local_14 = puVar6;
  }
  local_4 = 0;
  if ((local_14 == (undefined1 *)0x0) || (-2 < (int)(uint)DAT_201116cb)) {
    cVar3 = FUN_2000a6c0(local_14,1);
    if (cVar3 != '\0') {
      puVar9 = (undefined4 *)&DAT_201116cc;
      puVar12 = DAT_20225e84;
      for (uVar5 = (uint)local_14 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar5 = (uint)local_14 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_2000a6a0(local_14);
    }
  }
  else {
    FUN_2000a5b0(1);
    DAT_20225e84 = (undefined4 *)&DAT_201116cc;
    _DAT_20225e88 = local_14;
    _DAT_20225e8c = 0;
    DAT_201116cb = DAT_201116cb + 1;
  }
  local_4 = 0xffffffff;
  iVar10 = (int)(DAT_2040365c + (DAT_2040365c >> 0x1f & 7U)) >> 3;
  iVar11 = iVar10 + -4;
  if (DAT_201e7efc != '\x02') {
    iVar11 = iVar10 + -0x22;
  }
  _DAT_20225e70 = *(float *)(DAT_202259f0 + 0x18);
  Com_Printf(&DAT_2011dd40);
  pcVar13 = (char *)0x0;
  DAT_20230310 = 0;
  bVar2 = false;
  local_20 = param_1;
  local_28 = 0;
  pcVar7 = &DAT_20225a70;
  do {
    local_28 = local_28 + 1;
    if (*param_1 == ' ') {
      _DAT_20225e70 = _DAT_20225e70 + 0.2;
      bVar2 = true;
      pcVar13 = param_1;
    }
    if ((*param_1 == '\n') || (*param_1 == '\0')) {
      bVar2 = true;
      pcVar13 = param_1;
      local_28 = iVar11;
LAB_20012fe2:
      _DAT_20225e70 = _DAT_20225e70 + 0.8;
      if (pcVar13 == (char *)0x0) {
        pcVar13 = param_1;
      }
      if (!bVar2) {
        pcVar13 = pcVar13 + 1;
      }
      _strncpy(pcVar7,local_20,(int)pcVar13 - (int)local_20);
      pcVar7[(int)pcVar13 - (int)local_20] = '\0';
      pcVar8 = pcVar7 + ((int)pcVar13 - (int)local_20) + 1;
      Com_Printf(&DAT_2011d990,pcVar7);
      uVar4 = (*DAT_2040363c)(pcVar7,&DAT_20225e80);
      (&DAT_20225ea8)[DAT_20230310] = uVar4;
      DAT_20230310 = DAT_20230310 + 1;
      if ((*param_1 == '\0') || (9 < DAT_20230310)) {
        bVar1 = true;
      }
      else {
        local_20 = pcVar13;
        if (bVar2) {
          local_20 = pcVar13 + 1;
        }
        local_28 = 0;
        bVar2 = false;
        param_1 = pcVar13;
        pcVar13 = (char *)0x0;
      }
    }
    else {
      pcVar8 = pcVar7;
      if (iVar11 <= local_28) goto LAB_20012fe2;
    }
    param_1 = param_1 + 1;
    pcVar7 = pcVar8;
    if (bVar1) {
      Com_Printf(&DAT_2011f480);
      FUN_20020690();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

