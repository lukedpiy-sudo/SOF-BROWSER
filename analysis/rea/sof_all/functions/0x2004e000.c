// rea decompile_all
// name: FUN_2004e000
// address: 0x2004e000
// body: available
// range: 0x2004e000-0x2004e2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004e000(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_84;
  char local_80 [128];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar6 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (((0x16 < ~uVar6 - 1) && (param_1[8] == ':')) && (param_1[0x15] == ':')) {
    *(undefined2 *)param_2 = 6;
    local_80[0] = *param_1;
    local_80[1] = param_1[1];
    local_80[2] = 0;
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 2) = (undefined1)local_84;
    local_80[0] = param_1[2];
    local_80[1] = param_1[3];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 3) = (undefined1)local_84;
    local_80[0] = param_1[4];
    local_80[1] = param_1[5];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)(param_2 + 1) = (undefined1)local_84;
    local_80[0] = param_1[6];
    local_80[1] = param_1[7];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 5) = (undefined1)local_84;
    local_80[0] = param_1[9];
    local_80[1] = param_1[10];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 6) = (undefined1)local_84;
    local_80[0] = param_1[0xb];
    local_80[1] = param_1[0xc];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 7) = (undefined1)local_84;
    local_80[0] = param_1[0xd];
    local_80[1] = param_1[0xe];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)(param_2 + 2) = (undefined1)local_84;
    local_80[0] = param_1[0xf];
    local_80[1] = param_1[0x10];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 9) = (undefined1)local_84;
    local_80[0] = param_1[0x11];
    local_80[1] = param_1[0x12];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 10) = (undefined1)local_84;
    local_80[0] = param_1[0x13];
    local_80[1] = param_1[0x14];
    FUN_200fb019(local_80,&DAT_20136d40,&local_84);
    *(undefined1 *)((int)param_2 + 0xb) = (undefined1)local_84;
    FUN_200fb019(param_1 + 0x16,&DAT_20136d3c,&local_84);
    uVar3 = Ordinal_9(local_84);
    *(undefined2 *)(param_2 + 3) = uVar3;
    return 1;
  }
  *(undefined2 *)param_2 = 2;
  *(undefined2 *)((int)param_2 + 2) = 0;
  iVar5 = -(int)param_1;
  do {
    cVar2 = *param_1;
    param_1[(int)(local_80 + iVar5)] = cVar2;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  pcVar7 = local_80;
  cVar2 = local_80[0];
  while (cVar2 != '\0') {
    if (*pcVar7 == ':') {
      *pcVar7 = '\0';
      uVar4 = FUN_200f9e9e(pcVar7 + 1);
      uVar3 = Ordinal_9(uVar4);
      *(undefined2 *)((int)param_2 + 2) = uVar3;
    }
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  if (('/' < local_80[0]) && (local_80[0] < ':')) {
    uVar4 = Ordinal_10(local_80);
    param_2[1] = uVar4;
    return 1;
  }
  iVar5 = Ordinal_52(local_80);
  if (iVar5 == 0) {
    return 0;
  }
  param_2[1] = *(undefined4 *)**(undefined4 **)(iVar5 + 0xc);
  return 1;
}

