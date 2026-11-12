// rea decompile_all
// name: FUN_200ef000
// address: 0x200ef000
// body: available
// range: 0x200ef000-0x200ef102 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ef000(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char local_158 [128];
  undefined4 local_d8 [11];
  int local_ac;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined1 local_80;
  
  puVar2 = _malloc(2);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = DAT_2015ee44;
    pcVar5 = local_158;
    for (iVar3 = 0x56; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + 4;
    }
    iVar3 = -(int)param_2;
    puVar6 = local_d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    do {
      cVar1 = *param_2;
      param_2[(int)(local_158 + iVar3)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    local_ac = FUN_200f9430(0xbc,0x7f,FUN_200ef110,&LAB_200ef150,&DAT_200ef160);
    if (local_ac != 0) {
      local_8c = 0;
      local_84 = 0;
      local_80 = 0;
      local_88 = puVar2;
      iVar3 = FUN_200f4650(*(undefined4 *)(param_1 + 0x380),local_158,&LAB_200eef90,0,0);
      if (iVar3 != -1) {
        FUN_200f4560(*(undefined4 *)(param_1 + 0x380),iVar3);
      }
      FUN_200f9550(*(undefined4 *)(param_1 + 0x37c),local_158);
    }
  }
  return;
}

